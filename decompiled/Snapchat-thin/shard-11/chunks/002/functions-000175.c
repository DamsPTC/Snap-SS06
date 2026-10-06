/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1083495d0; end: 10834963f;  */

undefined8 * FUN_1083495d0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = &PTR_FUN_110a3e608;
  FUN_10814105c(param_1 + 1,param_2 + 8);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  param_1[6] = uVar1;
  param_1[9] = uVar3;
  param_1[8] = uVar2;
  return param_1;
}



/* Entry: 108349640; end: 108349753;  */

void FUN_108349640(void)

{
  return;
}



/* Entry: 108349754; end: 1083497eb;  */

void FUN_108349754(long *****param_1,long ****param_2,long *param_3,long ****param_4,
                  long ****param_5)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  undefined1 in_ZR;
  char cVar5;
  uint uVar6;
  long *****ppppplVar7;
  undefined8 *puVar8;
  undefined1 *extraout_x8;
  undefined8 extraout_x8_00;
  ulong extraout_x8_01;
  undefined8 extraout_x8_02;
  ulong extraout_x8_03;
  long ****pppplVar9;
  long ****pppplVar10;
  long *****unaff_x20;
  long *****ppppplVar11;
  ushort uVar12;
  int iVar13;
  int iVar15;
  long ****pppplVar14;
  long ****pppplVar16;
  long ****pppplVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  float fVar22;
  float unaff_s9;
  long ****pppplStack_1720;
  long lStack_1718;
  undefined4 auStack_1710 [4];
  long ****pppplStack_1700;
  long ****pppplStack_16f8;
  long ****pppplStack_16f0;
  long ****pppplStack_16e8;
  undefined1 **ppuStack_16e0;
  code *pcStack_16d8;
  long ***ppplStack_16d0;
  undefined8 *puStack_16c8;
  long ***ppplStack_16c0;
  undefined8 uStack_16b8;
  undefined8 uStack_16b0;
  undefined8 uStack_16a8;
  float fStack_16a0;
  float fStack_169c;
  long ****pppplStack_1698;
  undefined1 uStack_1690;
  undefined1 uStack_1668;
  long ***appplStack_1660 [347];
  undefined8 uStack_b88;
  undefined1 *puStack_b20;
  code *pcStack_b18;
  long ***ppplStack_b10;
  long ***ppplStack_b08;
  long *aplStack_b00 [347];
  undefined8 uStack_28;
  
  ppppplVar7 = (long *****)&ppplStack_b10;
  func_0x00010834ac2c();
  uStack_28 = extraout_x8_00;
  func_0x00010834ace8();
  if ((extraout_x8_01 & 1) == 0) {
    ppplStack_b10 = (long ***)0x0;
    ppplStack_b08 = (long ***)param_1[5];
    param_5 = (long ****)0x0;
    param_4 = param_2;
    FUN_1083493b4(aplStack_b00,param_1,0,param_2,0);
    param_2 = param_1[8];
    FUN_108397b40();
    func_0x00010834ac3c(aplStack_b00);
    param_1 = ppppplVar7;
    param_3 = aplStack_b00[0];
  }
  func_0x00010834ac18(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010834ac3c(aplStack_b00);
  func_0x00010834ac60();
  pcStack_b18 = FUN_1083497ec;
  puStack_b20 = &stack0xfffffffffffffff0;
  func_0x00010834ac2c();
  uStack_b88 = extraout_x8_02;
  func_0x00010834ace8();
  ppppplVar7 = param_1;
  if ((extraout_x8_03 & 1) != 0) goto LAB_1083498e0;
  ppppplVar11 = (long *****)param_1[7];
  uStack_1690 = 0;
  uStack_1668 = 0;
  pppplStack_1698 = (long ****)ppppplVar11;
  if (param_4 != (long ****)0x0) {
    ppppplVar7 = &pppplStack_1698;
    FUN_108349b00();
    FUN_108363e94();
    ppppplVar11 = (long *****)param_1[7];
  }
  unaff_x20 = param_1;
  if (*param_3 == 0 && param_3[2] == 0) {
    fVar22 = *(float *)(param_3 + 8);
    bVar2 = *(byte *)(param_3 + 9);
    ppppplVar7 = ppppplVar11;
    FUN_10827a0d8();
    bVar1 = 0;
    if (fVar22 != 0.0 || bVar2 >> 6 != 2) {
      bVar1 = bVar2 >> 6;
    }
    iVar13 = 0;
    if (bVar1 != 2) {
      iVar13 = (int)ppppplVar7;
    }
    in_ZR = 0;
    if (iVar13 == 1) {
      cVar5 = bVar1 == 0;
      if ((bVar1 == 0) || (fVar22 == 0.0)) {
LAB_1083498f8:
        uStack_16b0 = (long ****)0x0;
        uStack_16a8 = 0;
        if (param_4 != (long ****)0x0) {
          param_2 = param_5;
        }
        ppppplVar7 = (long *****)param_1[7];
        puVar8 = &uStack_16b0;
        FUN_1083645e0(ppppplVar7,puVar8,param_2,2);
        fVar3 = (float)uStack_16b0;
        if ((float)uStack_16a8 < (float)uStack_16b0) {
          uStack_16b0 = (long ****)CONCAT44(uStack_16b0._4_4_,(float)uStack_16a8);
          uStack_16a8 = CONCAT44(uStack_16a8._4_4_,fVar3);
        }
        fVar3 = uStack_16b0._4_4_;
        fVar4 = uStack_16a8._4_4_;
        if (uStack_16a8._4_4_ < uStack_16b0._4_4_) {
          uStack_16b0 = (long ****)CONCAT44(uStack_16a8._4_4_,(float)uStack_16b0);
          uStack_16a8 = CONCAT44(fVar3,(float)uStack_16a8);
        }
        uStack_16b8 = uStack_16a8;
        ppplStack_16c0 = (long ***)uStack_16b0;
        in_ZR = (*(byte *)(param_3 + 9) & 0xc0) == 0;
        if (!(bool)in_ZR) {
          in_ZR = *(float *)(param_3 + 8) == 0.0;
          if ((bool)in_ZR) {
            ppplStack_16c0 =
                 (long ***)
                 CONCAT44((float)((ulong)uStack_16b0 >> 0x20) + -1.0,SUB84(uStack_16b0,0) + -1.0);
            uStack_16b8 = CONCAT44((float)((ulong)uStack_16a8 >> 0x20) + 1.0,
                                   (float)uStack_16a8 + 1.0);
          }
          else {
            in_ZR = cVar5 == '\x02';
            if (!(bool)in_ZR) {
              unaff_s9 = *(float *)(param_3 + 8);
              fVar22 = fVar4;
              FUN_108349bfc(param_1[7]);
            }
            ppppplVar7 = (long *****)&ppplStack_16c0;
            func_0x00010816882c(unaff_s9 * 0.5,fVar22 * 0.5);
          }
        }
        iVar18 = -(uint)(SUB84(ppplStack_16c0,0) <= -8.5070587e+37);
        fVar22 = (float)((ulong)ppplStack_16c0 >> 0x20);
        iVar19 = -(uint)(fVar22 <= -8.5070587e+37);
        iVar20 = -(uint)((float)uStack_16b8 <= 8.5070587e+37);
        iVar21 = -(uint)((float)((ulong)uStack_16b8 >> 0x20) <= 8.5070587e+37);
        iVar13 = -(uint)(-8.5070587e+37 <= SUB84(ppplStack_16c0,0));
        iVar15 = -(uint)(-8.5070587e+37 <= fVar22);
        uVar12 = NEON_umaxv(CONCAT44(CONCAT22(CONCAT11(~(byte)((uint)iVar21 >> 8),~(byte)iVar21),
                                              CONCAT11(~(byte)((uint)iVar20 >> 8),~(byte)iVar20)),
                                     CONCAT22(CONCAT11(~(byte)((uint)iVar15 >> 8),~(byte)iVar15),
                                              CONCAT11(~(byte)((uint)iVar13 >> 8),~(byte)iVar13))),2
                           );
        if ((uVar12 & 1) == 0) {
          ppppplVar7 = (long *****)&ppplStack_16c0;
          func_0x0001083486bc(uVar12,0xfe7ffffffe7fffff,
                              CONCAT22(CONCAT11(~(byte)((uint)iVar19 >> 8),~(byte)iVar19),
                                       CONCAT11(~(byte)((uint)iVar18 >> 8),~(byte)iVar18)));
          in_ZR = cVar5 == '\0';
          uVar6 = (uint)ppppplVar7;
          if ((bool)in_ZR) {
            uVar6 = 1;
          }
          if ((uVar6 & 1) == 0) {
            func_0x00010834ac8c();
          }
          else {
            pppplVar9 = &ppplStack_16c0;
            func_0x00010812f180();
            ppppplVar7 = (long *****)param_1[8];
            ppplStack_16d0 = (long ***)pppplVar9;
            puStack_16c8 = puVar8;
            FUN_108349328(ppppplVar7,&ppplStack_16d0);
            if (((ulong)ppppplVar7 & 1) == 0) {
              ppppplVar7 = (long *****)appplStack_1660;
              func_0x00010834acac(ppppplVar7,param_1,pppplStack_1698);
              uVar6 = *(uint *)(param_3 + 9);
              if (cVar5 == '\0') {
                if ((uVar6 & 1) == 0) {
                  func_0x00010834ac74();
                  FUN_10839c8a4();
                }
                else {
                  func_0x00010834ac74();
                  FUN_10839b540();
                }
              }
              else {
                in_ZR = cVar5 == '\x01';
                if ((bool)in_ZR) {
                  if ((uVar6 & 1) == 0) {
                    func_0x00010834ac74();
                    FUN_108397c28();
                  }
                  else {
                    func_0x00010834ac74();
                    FUN_10839b888();
                  }
                }
                else if ((uVar6 & 1) == 0) {
                  ppppplVar7 = (long *****)&uStack_16b0;
                  FUN_10839d33c(ppppplVar7,&fStack_16a0);
                }
                else {
                  ppppplVar7 = (long *****)&uStack_16b0;
                  FUN_10839bdb4(ppppplVar7,&fStack_16a0);
                }
              }
              func_0x00010834ac3c(appplStack_1660);
            }
          }
        }
        goto LAB_1083498e0;
      }
      in_ZR = *(float *)param_2 == *(float *)(param_2 + 1);
      if ((*(float *)param_2 < *(float *)(param_2 + 1)) &&
         ((in_ZR = *(float *)((long)param_2 + 4) == *(float *)((long)param_2 + 0xc),
          *(float *)((long)param_2 + 4) < *(float *)((long)param_2 + 0xc) &&
          (in_ZR = 0, (*(byte *)(param_3 + 9) & 0x30) == 0)))) {
        fVar22 = 1.4142135;
        in_ZR = *(float *)((long)param_3 + 0x44) == 1.4142135;
        if (1.4142135 <= *(float *)((long)param_3 + 0x44)) {
          fStack_16a0 = *(float *)(param_3 + 8);
          FUN_108349bfc(ppppplVar11);
          cVar5 = '\x02';
          fStack_169c = fVar22;
          unaff_s9 = fStack_16a0;
          goto LAB_1083498f8;
        }
      }
    }
  }
  func_0x00010834ac8c();
LAB_1083498e0:
  func_0x00010834ac18(uStack_b88);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ppppplVar11 = ppppplVar7;
  func_0x00010834ac3c(appplStack_1660);
  func_0x00010834ac60();
  pcStack_16d8 = FUN_108349b00;
  pppplStack_16f0 = (long ****)unaff_x20;
  pppplStack_16e8 = (long ****)ppppplVar7;
  ppuStack_16e0 = &puStack_b20;
  if (((ulong)ppppplVar11[6] & 1) == 0) {
    pppplVar9 = *ppppplVar11;
    pppplVar10 = (long ****)pppplVar9[4];
    pppplVar17 = (long ****)*pppplVar9;
    pppplVar16 = (long ****)pppplVar9[3];
    pppplVar14 = (long ****)pppplVar9[2];
    ppppplVar11[2] = (long ****)pppplVar9[1];
    ppppplVar11[1] = pppplVar17;
    ppppplVar11[4] = pppplVar16;
    ppppplVar11[3] = pppplVar14;
    ppppplVar11[5] = pppplVar10;
    *(undefined1 *)(ppppplVar11 + 6) = 1;
    ppppplVar7 = ppppplVar11 + 1;
    FUN_108193f7c();
    *ppppplVar11 = (long ****)ppppplVar7;
  }
  pppplVar10 = pppplStack_16e8;
  pppplVar9 = pppplStack_16f0;
  ppppplVar7 = ppppplVar11 + 1;
  if (((ulong)ppppplVar11[6] & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  iVar13 = (int)&pppplStack_1720;
  pppplStack_1700 = pppplVar9;
  pppplStack_16f8 = pppplVar10;
  pppplStack_16e8 = (long ****)FUN_108193f94;
  *extraout_x8 = 0;
  extraout_x8[0x10] = 0;
  auStack_1710[0] = 0;
  ppppplVar11 = ppppplVar7;
  pppplStack_16f0 = (long ****)&ppuStack_16e0;
  func_0x0001081943b0();
  pppplStack_1720 = (long ****)ppppplVar11;
  _strlen();
  lStack_1718 = (long)ppppplVar7 + (long)ppppplVar11;
  FUN_10818fb90(&pppplStack_1720,auStack_1710);
  if (iVar13 != 0) {
    FUN_10819401c(extraout_x8,auStack_1710);
  }
  func_0x000108194398();
  return;
}



/* Entry: 1083497ec; end: 108349aff;  */

void FUN_1083497ec(long *****param_1,float *param_2,long *param_3,long param_4,float *param_5)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  undefined1 in_ZR;
  char cVar5;
  uint uVar6;
  long *****ppppplVar7;
  undefined8 *puVar8;
  undefined1 *extraout_x8;
  undefined8 extraout_x8_00;
  ulong extraout_x8_01;
  long ****pppplVar9;
  long ****pppplVar10;
  long *****unaff_x20;
  long *****ppppplVar11;
  ushort uVar12;
  int iVar13;
  int iVar15;
  long ****pppplVar14;
  long ****pppplVar16;
  long ****pppplVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  float fVar22;
  float unaff_s9;
  long ****pppplStack_c10;
  long lStack_c08;
  undefined4 auStack_c00 [4];
  long ****pppplStack_bf0;
  long ****pppplStack_be8;
  long ****pppplStack_be0;
  long ****pppplStack_bd8;
  undefined1 *puStack_bd0;
  code *pcStack_bc8;
  long ***ppplStack_bc0;
  undefined8 *puStack_bb8;
  long ***ppplStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  float fStack_b90;
  float fStack_b8c;
  long ****pppplStack_b88;
  undefined1 uStack_b80;
  undefined1 uStack_b58;
  long ***appplStack_b50 [347];
  undefined8 uStack_78;
  
  func_0x00010834ac2c();
  uStack_78 = extraout_x8_00;
  func_0x00010834ace8();
  ppppplVar7 = param_1;
  if ((extraout_x8_01 & 1) != 0) goto LAB_1083498e0;
  ppppplVar11 = (long *****)param_1[7];
  uStack_b80 = 0;
  uStack_b58 = 0;
  pppplStack_b88 = (long ****)ppppplVar11;
  if (param_4 != 0) {
    ppppplVar7 = &pppplStack_b88;
    FUN_108349b00();
    FUN_108363e94();
    ppppplVar11 = (long *****)param_1[7];
  }
  unaff_x20 = param_1;
  if (*param_3 == 0 && param_3[2] == 0) {
    fVar22 = *(float *)(param_3 + 8);
    bVar2 = *(byte *)(param_3 + 9);
    ppppplVar7 = ppppplVar11;
    FUN_10827a0d8();
    bVar1 = 0;
    if (fVar22 != 0.0 || bVar2 >> 6 != 2) {
      bVar1 = bVar2 >> 6;
    }
    iVar13 = 0;
    if (bVar1 != 2) {
      iVar13 = (int)ppppplVar7;
    }
    in_ZR = 0;
    if (iVar13 == 1) {
      cVar5 = bVar1 == 0;
      if ((bVar1 == 0) || (fVar22 == 0.0)) {
LAB_1083498f8:
        uStack_ba0 = (long ****)0x0;
        uStack_b98 = 0;
        if (param_4 != 0) {
          param_2 = param_5;
        }
        ppppplVar7 = (long *****)param_1[7];
        puVar8 = &uStack_ba0;
        FUN_1083645e0(ppppplVar7,puVar8,param_2,2);
        fVar3 = (float)uStack_ba0;
        if ((float)uStack_b98 < (float)uStack_ba0) {
          uStack_ba0 = (long ****)CONCAT44(uStack_ba0._4_4_,(float)uStack_b98);
          uStack_b98 = CONCAT44(uStack_b98._4_4_,fVar3);
        }
        fVar3 = uStack_ba0._4_4_;
        fVar4 = uStack_b98._4_4_;
        if (uStack_b98._4_4_ < uStack_ba0._4_4_) {
          uStack_ba0 = (long ****)CONCAT44(uStack_b98._4_4_,(float)uStack_ba0);
          uStack_b98 = CONCAT44(fVar3,(float)uStack_b98);
        }
        uStack_ba8 = uStack_b98;
        ppplStack_bb0 = (long ***)uStack_ba0;
        in_ZR = (*(byte *)(param_3 + 9) & 0xc0) == 0;
        if (!(bool)in_ZR) {
          in_ZR = *(float *)(param_3 + 8) == 0.0;
          if ((bool)in_ZR) {
            ppplStack_bb0 =
                 (long ***)
                 CONCAT44((float)((ulong)uStack_ba0 >> 0x20) + -1.0,SUB84(uStack_ba0,0) + -1.0);
            uStack_ba8 = CONCAT44((float)((ulong)uStack_b98 >> 0x20) + 1.0,(float)uStack_b98 + 1.0);
          }
          else {
            in_ZR = cVar5 == '\x02';
            if (!(bool)in_ZR) {
              unaff_s9 = *(float *)(param_3 + 8);
              fVar22 = fVar4;
              FUN_108349bfc(param_1[7]);
            }
            ppppplVar7 = (long *****)&ppplStack_bb0;
            func_0x00010816882c(unaff_s9 * 0.5,fVar22 * 0.5);
          }
        }
        iVar18 = -(uint)(SUB84(ppplStack_bb0,0) <= -8.5070587e+37);
        fVar22 = (float)((ulong)ppplStack_bb0 >> 0x20);
        iVar19 = -(uint)(fVar22 <= -8.5070587e+37);
        iVar20 = -(uint)((float)uStack_ba8 <= 8.5070587e+37);
        iVar21 = -(uint)((float)((ulong)uStack_ba8 >> 0x20) <= 8.5070587e+37);
        iVar13 = -(uint)(-8.5070587e+37 <= SUB84(ppplStack_bb0,0));
        iVar15 = -(uint)(-8.5070587e+37 <= fVar22);
        uVar12 = NEON_umaxv(CONCAT44(CONCAT22(CONCAT11(~(byte)((uint)iVar21 >> 8),~(byte)iVar21),
                                              CONCAT11(~(byte)((uint)iVar20 >> 8),~(byte)iVar20)),
                                     CONCAT22(CONCAT11(~(byte)((uint)iVar15 >> 8),~(byte)iVar15),
                                              CONCAT11(~(byte)((uint)iVar13 >> 8),~(byte)iVar13))),2
                           );
        if ((uVar12 & 1) == 0) {
          ppppplVar7 = (long *****)&ppplStack_bb0;
          func_0x0001083486bc(uVar12,0xfe7ffffffe7fffff,
                              CONCAT22(CONCAT11(~(byte)((uint)iVar19 >> 8),~(byte)iVar19),
                                       CONCAT11(~(byte)((uint)iVar18 >> 8),~(byte)iVar18)));
          in_ZR = cVar5 == '\0';
          uVar6 = (uint)ppppplVar7;
          if ((bool)in_ZR) {
            uVar6 = 1;
          }
          if ((uVar6 & 1) == 0) {
            func_0x00010834ac8c();
          }
          else {
            pppplVar9 = &ppplStack_bb0;
            func_0x00010812f180();
            ppppplVar7 = (long *****)param_1[8];
            ppplStack_bc0 = (long ***)pppplVar9;
            puStack_bb8 = puVar8;
            FUN_108349328(ppppplVar7,&ppplStack_bc0);
            if (((ulong)ppppplVar7 & 1) == 0) {
              ppppplVar7 = (long *****)appplStack_b50;
              func_0x00010834acac(ppppplVar7,param_1,pppplStack_b88);
              uVar6 = *(uint *)(param_3 + 9);
              if (cVar5 == '\0') {
                if ((uVar6 & 1) == 0) {
                  func_0x00010834ac74();
                  FUN_10839c8a4();
                }
                else {
                  func_0x00010834ac74();
                  FUN_10839b540();
                }
              }
              else {
                in_ZR = cVar5 == '\x01';
                if ((bool)in_ZR) {
                  if ((uVar6 & 1) == 0) {
                    func_0x00010834ac74();
                    FUN_108397c28();
                  }
                  else {
                    func_0x00010834ac74();
                    FUN_10839b888();
                  }
                }
                else if ((uVar6 & 1) == 0) {
                  ppppplVar7 = (long *****)&uStack_ba0;
                  FUN_10839d33c(ppppplVar7,&fStack_b90);
                }
                else {
                  ppppplVar7 = (long *****)&uStack_ba0;
                  FUN_10839bdb4(ppppplVar7,&fStack_b90);
                }
              }
              func_0x00010834ac3c(appplStack_b50);
            }
          }
        }
        goto LAB_1083498e0;
      }
      in_ZR = *param_2 == param_2[2];
      if ((*param_2 < param_2[2]) &&
         ((in_ZR = param_2[1] == param_2[3], param_2[1] < param_2[3] &&
          (in_ZR = 0, (*(byte *)(param_3 + 9) & 0x30) == 0)))) {
        fVar22 = 1.4142135;
        in_ZR = *(float *)((long)param_3 + 0x44) == 1.4142135;
        if (1.4142135 <= *(float *)((long)param_3 + 0x44)) {
          fStack_b90 = *(float *)(param_3 + 8);
          FUN_108349bfc(ppppplVar11);
          cVar5 = '\x02';
          fStack_b8c = fVar22;
          unaff_s9 = fStack_b90;
          goto LAB_1083498f8;
        }
      }
    }
  }
  func_0x00010834ac8c();
LAB_1083498e0:
  func_0x00010834ac18(uStack_78);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ppppplVar11 = ppppplVar7;
  func_0x00010834ac3c(appplStack_b50);
  func_0x00010834ac60();
  pcStack_bc8 = FUN_108349b00;
  pppplStack_be0 = (long ****)unaff_x20;
  pppplStack_bd8 = (long ****)ppppplVar7;
  puStack_bd0 = &stack0xfffffffffffffff0;
  if (((ulong)ppppplVar11[6] & 1) == 0) {
    pppplVar9 = *ppppplVar11;
    pppplVar10 = (long ****)pppplVar9[4];
    pppplVar17 = (long ****)*pppplVar9;
    pppplVar16 = (long ****)pppplVar9[3];
    pppplVar14 = (long ****)pppplVar9[2];
    ppppplVar11[2] = (long ****)pppplVar9[1];
    ppppplVar11[1] = pppplVar17;
    ppppplVar11[4] = pppplVar16;
    ppppplVar11[3] = pppplVar14;
    ppppplVar11[5] = pppplVar10;
    *(undefined1 *)(ppppplVar11 + 6) = 1;
    ppppplVar7 = ppppplVar11 + 1;
    FUN_108193f7c();
    *ppppplVar11 = (long ****)ppppplVar7;
  }
  pppplVar10 = pppplStack_bd8;
  pppplVar9 = pppplStack_be0;
  ppppplVar7 = ppppplVar11 + 1;
  if (((ulong)ppppplVar11[6] & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  iVar13 = (int)&pppplStack_c10;
  pppplStack_bf0 = pppplVar9;
  pppplStack_be8 = pppplVar10;
  pppplStack_bd8 = (long ****)FUN_108193f94;
  *extraout_x8 = 0;
  extraout_x8[0x10] = 0;
  auStack_c00[0] = 0;
  ppppplVar11 = ppppplVar7;
  pppplStack_be0 = (long ****)&puStack_bd0;
  func_0x0001081943b0();
  pppplStack_c10 = (long ****)ppppplVar11;
  _strlen();
  lStack_c08 = (long)ppppplVar7 + (long)ppppplVar11;
  FUN_10818fb90(&pppplStack_c10,auStack_c00);
  if (iVar13 != 0) {
    FUN_10819401c(extraout_x8,auStack_c00);
  }
  func_0x000108194398();
  return;
}



/* Entry: 108349b00; end: 108349b53;  */

void FUN_108349b00(long *param_1)

{
  int iVar1;
  long *plVar2;
  undefined1 *extraout_x8;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plStack_50;
  long lStack_48;
  undefined4 auStack_40 [8];
  
  if ((*(byte *)(param_1 + 6) & 1) == 0) {
    plVar3 = (long *)*param_1;
    lVar4 = plVar3[4];
    lVar7 = *plVar3;
    lVar6 = plVar3[3];
    lVar5 = plVar3[2];
    param_1[2] = plVar3[1];
    param_1[1] = lVar7;
    param_1[4] = lVar6;
    param_1[3] = lVar5;
    param_1[5] = lVar4;
    *(undefined1 *)(param_1 + 6) = 1;
    plVar3 = param_1 + 1;
    FUN_108193f7c();
    *param_1 = (long)plVar3;
  }
  plVar3 = param_1 + 1;
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  iVar1 = (int)&plStack_50;
  *extraout_x8 = 0;
  extraout_x8[0x10] = 0;
  auStack_40[0] = 0;
  plVar2 = plVar3;
  func_0x0001081943b0();
  plStack_50 = plVar2;
  _strlen();
  lStack_48 = (long)plVar3 + (long)plVar2;
  FUN_10818fb90(&plStack_50,auStack_40);
  if (iVar1 != 0) {
    FUN_10819401c(extraout_x8,auStack_40);
  }
  func_0x000108194398();
  return;
}



/* Entry: 108349b54; end: 108349bfb;  */

void FUN_108349b54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_90;
  byte bStack_82;
  undefined1 auStack_80 [56];
  undefined8 uStack_48;
  
  FUN_1083495d0(auStack_80,param_1);
  uStack_48 = param_4;
  FUN_108376ad8(&uStack_90);
  func_0x000108142248(&uStack_90,param_2,0);
  bStack_82 = bStack_82 & 0xfc;
  FUN_10834ac0c(auStack_80,&uStack_90,param_3);
  FUN_10837ca5c(uStack_90);
  FUN_10814ca20(auStack_80);
  return;
}



/* Entry: 108349bfc; end: 108349c33;  */

float FUN_108349bfc(undefined4 param_1,undefined8 param_2)

{
  undefined4 uStack_20;
  undefined4 uStack_1c;
  float afStack_18 [2];
  
  uStack_20 = param_1;
  uStack_1c = param_1;
  FUN_108364dd8(param_2,afStack_18,&uStack_20,1);
  return ABS(afStack_18[0]);
}



/* Entry: 108349c34; end: 108349d23;  */

float * FUN_108349c34(float *param_1,float *param_2,float *param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  undefined8 extraout_x8;
  float *pfVar10;
  undefined8 extraout_x8_00;
  ulong extraout_x8_01;
  float *unaff_x19;
  float *unaff_x20;
  float *unaff_x21;
  float *unaff_x22;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 uVar11;
  undefined1 in_register_00005002;
  undefined1 uVar12;
  undefined1 in_register_00005003;
  undefined1 uVar13;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  puVar2 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar2 + -0x30) = unaff_d9;
    *(undefined8 *)(puVar2 + -0x28) = unaff_d8;
    *(float **)(puVar2 + -0x20) = unaff_x20;
    *(float **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(code **)(puVar2 + -8) = unaff_x30;
    uVar1 = CONCAT13(in_register_00005003,
                     CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
    unaff_d8 = CONCAT17(in_register_00005007,
                        CONCAT16(in_register_00005006,
                                 CONCAT15(in_register_00005005,CONCAT14(in_register_00005004,uVar1))
                                ));
    pfVar7 = param_1;
    pfVar8 = param_2;
    func_0x00010834ac2c();
    *(undefined8 *)(puVar2 + -0x38) = extraout_x8;
    FUN_10828e338();
    if (((ulong)pfVar7 & 1) == 0) {
      *(undefined4 *)(puVar2 + -0x48) = uVar1;
      *(undefined4 *)(puVar2 + -0x44) = 0;
      *(undefined4 *)(puVar2 + -0x40) = 0;
      *(undefined4 *)(puVar2 + -0x3c) = uVar1;
      pfVar8 = (float *)(puVar2 + -0x58);
      param_3 = (float *)(puVar2 + -0x48);
      pfVar7 = param_1;
      FUN_108364dd8();
      fVar17 = ABS(*(float *)(puVar2 + -0x58));
      fVar14 = ABS(*(float *)(puVar2 + -0x54));
      uVar13 = (undefined1)((uint)fVar17 >> 0x18);
      uVar12 = (undefined1)((uint)fVar17 >> 0x10);
      uVar11 = (undefined1)((uint)fVar17 >> 8);
      uVar5 = SUB41(fVar17,0);
      if (fVar14 <= fVar17) {
        uVar5 = SUB41(fVar14,0);
        uVar11 = (undefined1)((uint)fVar14 >> 8);
        uVar12 = (undefined1)((uint)fVar14 >> 0x10);
        uVar13 = (undefined1)((uint)fVar14 >> 0x18);
        fVar14 = fVar17;
      }
      fVar14 = fVar14 + (float)CONCAT13(uVar13,CONCAT12(uVar12,CONCAT11(uVar11,uVar5))) * 0.5;
      fVar15 = ABS(*(float *)(puVar2 + -0x50));
      fVar17 = ABS(*(float *)(puVar2 + -0x4c));
      fVar16 = fVar15;
      if (fVar17 <= fVar15) {
        fVar16 = fVar17;
        fVar17 = fVar15;
      }
      fVar17 = fVar17 + fVar16 * 0.5;
      bVar3 = false;
      bVar4 = true;
      if (fVar17 <= 1.0) {
        bVar3 = false;
        bVar4 = true;
        if (!NAN(fVar14)) {
          bVar3 = fVar14 == 1.0;
          bVar4 = 1.0 <= fVar14;
        }
      }
      pfVar10 = (float *)(ulong)(!bVar4 || bVar3);
      if ((param_2 != (float *)0x0) && (!bVar4 || bVar3)) {
        *param_2 = (fVar14 + fVar17) * 0.5;
      }
    }
    else {
      pfVar10 = (float *)0x0;
    }
    uVar5 = *(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar2 + -0x38);
    if ((bool)uVar5) {
      return pfVar10;
    }
    ___stack_chk_fail();
    *(undefined8 *)(puVar2 + -0xa0) = unaff_x28;
    *(undefined8 *)(puVar2 + -0x98) = unaff_x27;
    *(float **)(puVar2 + -0x90) = unaff_x22;
    *(float **)(puVar2 + -0x88) = unaff_x21;
    *(float **)(puVar2 + -0x80) = param_1;
    *(float **)(puVar2 + -0x78) = param_2;
    *(undefined1 **)(puVar2 + -0x70) = puVar2 + -0x10;
    *(code **)(puVar2 + -0x68) = FUN_108349d24;
    unaff_x29 = puVar2 + -0x70;
    pfVar9 = (float *)(puVar2 + -0xbc0);
    func_0x00010834ac2c();
    *(undefined8 *)(puVar2 + -0xa8) = extraout_x8_00;
    func_0x00010834ace8();
    unaff_x19 = pfVar7;
    pfVar10 = pfVar8;
    param_2 = param_3;
    unaff_x20 = param_1;
    if ((extraout_x8_01 & 1) == 0) {
      pfVar10 = param_3;
      FUN_108349e68(param_3,*(undefined8 *)(pfVar7 + 0xe),puVar2 + -0xb80);
      uVar5 = *(long *)param_3 == 0;
      uVar6 = (uint)pfVar10;
      if (!(bool)uVar5) {
        uVar6 = 1;
      }
      unaff_x20 = pfVar7;
      unaff_x21 = pfVar8;
      if ((((uVar6 & 1) == 0) && (uVar5 = ((uint)param_3[0x12] & 0xc0) == 0, (bool)uVar5)) &&
         (*(long *)(param_3 + 4) != 0)) {
        *(undefined4 *)(puVar2 + -0xb90) = 0;
        *(undefined8 *)(puVar2 + -0xba8) = 0;
        *(undefined8 *)(puVar2 + -0xbb0) = 0;
        *(undefined8 *)(puVar2 + -0xb98) = 0;
        *(undefined8 *)(puVar2 + -0xba0) = 0;
        *(undefined8 *)(puVar2 + -3000) = 0;
        *(undefined8 *)(puVar2 + -0xbc0) = 0;
        pfVar10 = pfVar8;
        FUN_1083857ec(pfVar8,*(undefined8 *)(pfVar7 + 0xe),puVar2 + -0xbc0);
        if ((int)pfVar10 != 0) {
          func_0x00010834acac(puVar2 + -0xb80,pfVar7,0);
          unaff_x22 = *(float **)(param_3 + 4);
          param_2 = *(float **)(pfVar7 + 0xe);
          FUN_108362dd8();
          unaff_x19 = unaff_x22;
          func_0x00010834ac3c(puVar2 + -0xb80);
          pfVar10 = pfVar9;
          if (((ulong)unaff_x22 & 1) != 0) goto LAB_108349db4;
        }
      }
      FUN_108376ad8(puVar2 + -0xb80);
      FUN_10837816c(puVar2 + -0xb80,pfVar8,0);
      pfVar10 = (float *)(puVar2 + -0xb80);
      func_0x00010834ac0c(pfVar7);
      unaff_x19 = *(float **)(puVar2 + -0xb80);
      FUN_10837ca5c();
      param_2 = param_3;
    }
LAB_108349db4:
    param_1 = pfVar10;
    func_0x00010834ac18(*(undefined8 *)(puVar2 + -0xa8));
    if ((bool)uVar5) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    pfVar8 = unaff_x19;
    func_0x00010834ac3c(puVar2 + -0xb80);
    unaff_x30 = FUN_108349e68;
    func_0x00010834ac60();
    if (((uint)pfVar8[0x12] & 0xc0) != 0x40) {
      return (float *)0x0;
    }
    fVar17 = pfVar8[0x10];
    in_b0 = SUB41(fVar17,0);
    in_register_00005001 = (undefined1)((uint)fVar17 >> 8);
    in_register_00005002 = (undefined1)((uint)fVar17 >> 0x10);
    in_register_00005003 = (undefined1)((uint)fVar17 >> 0x18);
    in_register_00005004 = 0;
    in_register_00005005 = 0;
    in_register_00005006 = 0;
    in_register_00005007 = 0;
    if (fVar17 == 0.0) {
      *param_2 = 1.0;
      return (float *)0x1;
    }
    puVar2 = puVar2 + -0xbc0;
    param_3 = param_2;
    if (((uint)pfVar8[0x12] & 1) == 0) {
      return (float *)0x0;
    }
  } while( true );
}



/* Entry: 108349d24; end: 108349e67;  */

float * FUN_108349d24(float *param_1,float *param_2,float *param_3)

{
  bool bVar1;
  undefined1 in_ZR;
  bool bVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong extraout_x8_01;
  float *unaff_x19;
  float *unaff_x20;
  float *unaff_x21;
  float *unaff_x22;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulong unaff_d8;
  undefined8 unaff_d9;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x27;
    *(float **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(float **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(float **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(float **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    pfVar6 = (float *)((long)register0x00000008 + -0xb60);
    func_0x00010834ac2c();
    *(undefined8 *)((long)register0x00000008 + -0x48) = extraout_x8_00;
    func_0x00010834ace8();
    pfVar5 = param_1;
    pfVar4 = param_2;
    unaff_x19 = param_3;
    if ((extraout_x8_01 & 1) == 0) {
      pfVar4 = param_3;
      FUN_108349e68(param_3,*(undefined8 *)(param_1 + 0xe),
                    (undefined1 *)((long)register0x00000008 + -0xb20));
      in_ZR = *(long *)param_3 == 0;
      uVar3 = (uint)pfVar4;
      if (!(bool)in_ZR) {
        uVar3 = 1;
      }
      unaff_x20 = param_1;
      unaff_x21 = param_2;
      if ((((uVar3 & 1) == 0) && (in_ZR = ((uint)param_3[0x12] & 0xc0) == 0, (bool)in_ZR)) &&
         (*(long *)(param_3 + 4) != 0)) {
        *(undefined4 *)((long)register0x00000008 + -0xb30) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xb48) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xb50) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xb38) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xb40) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xb58) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xb60) = 0;
        pfVar4 = param_2;
        FUN_1083857ec(param_2,*(undefined8 *)(param_1 + 0xe),
                      (undefined1 *)((long)register0x00000008 + -0xb60));
        if ((int)pfVar4 != 0) {
          func_0x00010834acac((undefined1 *)((long)register0x00000008 + -0xb20),param_1,0);
          unaff_x22 = *(float **)(param_3 + 4);
          unaff_x19 = *(float **)(param_1 + 0xe);
          FUN_108362dd8();
          pfVar5 = unaff_x22;
          func_0x00010834ac3c((undefined1 *)((long)register0x00000008 + -0xb20));
          pfVar4 = pfVar6;
          if (((ulong)unaff_x22 & 1) != 0) goto LAB_108349db4;
        }
      }
      FUN_108376ad8((undefined1 *)((long)register0x00000008 + -0xb20));
      FUN_10837816c((undefined1 *)((long)register0x00000008 + -0xb20),param_2,0);
      pfVar4 = (float *)((long)register0x00000008 + -0xb20);
      func_0x00010834ac0c(param_1);
      pfVar5 = *(float **)((long)register0x00000008 + -0xb20);
      FUN_10837ca5c();
      unaff_x19 = param_3;
    }
LAB_108349db4:
    func_0x00010834ac18(*(undefined8 *)((long)register0x00000008 + -0x48));
    if ((bool)in_ZR) {
      return pfVar5;
    }
    ___stack_chk_fail();
    pfVar6 = pfVar5;
    func_0x00010834ac3c((undefined1 *)((long)register0x00000008 + -0xb20));
    func_0x00010834ac60();
    if (((uint)pfVar6[0x12] & 0xc0) != 0x40) {
      return (float *)0x0;
    }
    fVar14 = pfVar6[0x10];
    if (fVar14 == 0.0) {
      *unaff_x19 = 1.0;
      return (float *)0x1;
    }
    if (((uint)pfVar6[0x12] & 1) == 0) {
      return (float *)0x0;
    }
    *(undefined8 *)((long)register0x00000008 + -0xb90) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0xb88) = unaff_d8;
    *(float **)((long)register0x00000008 + -0xb80) = unaff_x20;
    *(float **)((long)register0x00000008 + -0xb78) = pfVar5;
    *(undefined1 **)((long)register0x00000008 + -0xb70) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0xb68) = FUN_108349e68;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0xb70);
    unaff_d8 = (ulong)(uint)fVar14;
    param_1 = pfVar4;
    param_2 = unaff_x19;
    param_3 = unaff_x19;
    func_0x00010834ac2c();
    *(undefined8 *)((long)register0x00000008 + -0xb98) = extraout_x8;
    FUN_10828e338();
    if (((ulong)param_1 & 1) == 0) {
      *(float *)((long)register0x00000008 + -0xba8) = fVar14;
      *(undefined4 *)((long)register0x00000008 + -0xba4) = 0;
      *(undefined4 *)((long)register0x00000008 + -0xba0) = 0;
      *(float *)((long)register0x00000008 + -0xb9c) = fVar14;
      param_2 = (float *)((long)register0x00000008 + -3000);
      param_3 = (float *)((long)register0x00000008 + -0xba8);
      param_1 = pfVar4;
      FUN_108364dd8();
      fVar14 = ABS(*(float *)((long)register0x00000008 + -3000));
      fVar11 = ABS(*(float *)((long)register0x00000008 + -0xbb4));
      uVar10 = (undefined1)((uint)fVar14 >> 0x18);
      uVar9 = (undefined1)((uint)fVar14 >> 0x10);
      uVar8 = (undefined1)((uint)fVar14 >> 8);
      uVar7 = SUB41(fVar14,0);
      if (fVar11 <= fVar14) {
        uVar7 = SUB41(fVar11,0);
        uVar8 = (undefined1)((uint)fVar11 >> 8);
        uVar9 = (undefined1)((uint)fVar11 >> 0x10);
        uVar10 = (undefined1)((uint)fVar11 >> 0x18);
        fVar11 = fVar14;
      }
      fVar11 = fVar11 + (float)CONCAT13(uVar10,CONCAT12(uVar9,CONCAT11(uVar8,uVar7))) * 0.5;
      fVar12 = ABS(*(float *)((long)register0x00000008 + -0xbb0));
      fVar14 = ABS(*(float *)((long)register0x00000008 + -0xbac));
      fVar13 = fVar12;
      if (fVar14 <= fVar12) {
        fVar13 = fVar14;
        fVar14 = fVar12;
      }
      fVar14 = fVar14 + fVar13 * 0.5;
      bVar1 = false;
      bVar2 = true;
      if (fVar14 <= 1.0) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar11)) {
          bVar1 = fVar11 == 1.0;
          bVar2 = 1.0 <= fVar11;
        }
      }
      pfVar5 = (float *)(ulong)(!bVar2 || bVar1);
      if ((unaff_x19 != (float *)0x0) && (!bVar2 || bVar1)) {
        *unaff_x19 = (fVar11 + fVar14) * 0.5;
      }
    }
    else {
      pfVar5 = (float *)0x0;
    }
    in_ZR = *(long *)PTR____stack_chk_guard_11034bdc0 ==
            *(long *)((long)register0x00000008 + -0xb98);
    if ((bool)in_ZR) {
      return pfVar5;
    }
    unaff_x30 = FUN_108349d24;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xbc0);
    unaff_x20 = pfVar4;
  } while( true );
}



/* Entry: 108349e68; end: 108349eab;  */

float * FUN_108349e68(float *param_1,float *param_2,float *param_3)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  undefined8 extraout_x8;
  float *pfVar9;
  undefined8 extraout_x8_00;
  ulong extraout_x8_01;
  float *unaff_x19;
  float *unaff_x20;
  float *unaff_x21;
  float *unaff_x22;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulong unaff_d8;
  undefined8 unaff_d9;
  
  do {
    if (((uint)param_1[0x12] & 0xc0) != 0x40) {
      return (float *)0x0;
    }
    fVar16 = param_1[0x10];
    if (fVar16 == 0.0) {
      *param_3 = 1.0;
      return (float *)0x1;
    }
    if (((uint)param_1[0x12] & 1) == 0) {
      return (float *)0x0;
    }
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_d8;
    *(float **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(float **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_d8 = (ulong)(uint)fVar16;
    pfVar5 = param_2;
    pfVar6 = param_3;
    pfVar8 = param_3;
    func_0x00010834ac2c();
    *(undefined8 *)((long)register0x00000008 + -0x38) = extraout_x8;
    FUN_10828e338();
    if (((ulong)pfVar5 & 1) == 0) {
      *(float *)((long)register0x00000008 + -0x48) = fVar16;
      *(undefined4 *)((long)register0x00000008 + -0x44) = 0;
      *(undefined4 *)((long)register0x00000008 + -0x40) = 0;
      *(float *)((long)register0x00000008 + -0x3c) = fVar16;
      pfVar6 = (float *)((long)register0x00000008 + -0x58);
      pfVar8 = (float *)((long)register0x00000008 + -0x48);
      pfVar5 = param_2;
      FUN_108364dd8();
      fVar16 = ABS(*(float *)((long)register0x00000008 + -0x58));
      fVar13 = ABS(*(float *)((long)register0x00000008 + -0x54));
      uVar12 = (undefined1)((uint)fVar16 >> 0x18);
      uVar11 = (undefined1)((uint)fVar16 >> 0x10);
      uVar10 = (undefined1)((uint)fVar16 >> 8);
      uVar3 = SUB41(fVar16,0);
      if (fVar13 <= fVar16) {
        uVar3 = SUB41(fVar13,0);
        uVar10 = (undefined1)((uint)fVar13 >> 8);
        uVar11 = (undefined1)((uint)fVar13 >> 0x10);
        uVar12 = (undefined1)((uint)fVar13 >> 0x18);
        fVar13 = fVar16;
      }
      fVar13 = fVar13 + (float)CONCAT13(uVar12,CONCAT12(uVar11,CONCAT11(uVar10,uVar3))) * 0.5;
      fVar14 = ABS(*(float *)((long)register0x00000008 + -0x50));
      fVar16 = ABS(*(float *)((long)register0x00000008 + -0x4c));
      fVar15 = fVar14;
      if (fVar16 <= fVar14) {
        fVar15 = fVar16;
        fVar16 = fVar14;
      }
      fVar16 = fVar16 + fVar15 * 0.5;
      bVar1 = false;
      bVar2 = true;
      if (fVar16 <= 1.0) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar13)) {
          bVar1 = fVar13 == 1.0;
          bVar2 = 1.0 <= fVar13;
        }
      }
      pfVar9 = (float *)(ulong)(!bVar2 || bVar1);
      if ((param_3 != (float *)0x0) && (!bVar2 || bVar1)) {
        *param_3 = (fVar13 + fVar16) * 0.5;
      }
    }
    else {
      pfVar9 = (float *)0x0;
    }
    uVar3 = *(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38)
    ;
    if ((bool)uVar3) {
      return pfVar9;
    }
    ___stack_chk_fail();
    *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x27;
    *(float **)((long)register0x00000008 + -0x90) = unaff_x22;
    *(float **)((long)register0x00000008 + -0x88) = unaff_x21;
    *(float **)((long)register0x00000008 + -0x80) = param_2;
    *(float **)((long)register0x00000008 + -0x78) = param_3;
    *(undefined1 **)((long)register0x00000008 + -0x70) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x68) = FUN_108349d24;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x70);
    pfVar7 = (float *)((long)register0x00000008 + -0xbc0);
    func_0x00010834ac2c();
    *(undefined8 *)((long)register0x00000008 + -0xa8) = extraout_x8_00;
    func_0x00010834ace8();
    unaff_x19 = pfVar5;
    pfVar9 = pfVar6;
    param_3 = pfVar8;
    unaff_x20 = param_2;
    if ((extraout_x8_01 & 1) == 0) {
      pfVar9 = pfVar8;
      FUN_108349e68(pfVar8,*(undefined8 *)(pfVar5 + 0xe),
                    (undefined1 *)((long)register0x00000008 + -0xb80));
      uVar3 = *(long *)pfVar8 == 0;
      uVar4 = (uint)pfVar9;
      if (!(bool)uVar3) {
        uVar4 = 1;
      }
      unaff_x20 = pfVar5;
      unaff_x21 = pfVar6;
      if ((((uVar4 & 1) == 0) && (uVar3 = ((uint)pfVar8[0x12] & 0xc0) == 0, (bool)uVar3)) &&
         (*(long *)(pfVar8 + 4) != 0)) {
        *(undefined4 *)((long)register0x00000008 + -0xb90) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xba8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xbb0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xb98) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xba0) = 0;
        *(undefined8 *)((long)register0x00000008 + -3000) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xbc0) = 0;
        pfVar9 = pfVar6;
        FUN_1083857ec(pfVar6,*(undefined8 *)(pfVar5 + 0xe),
                      (undefined1 *)((long)register0x00000008 + -0xbc0));
        if ((int)pfVar9 != 0) {
          func_0x00010834acac((undefined1 *)((long)register0x00000008 + -0xb80),pfVar5,0);
          unaff_x22 = *(float **)(pfVar8 + 4);
          param_3 = *(float **)(pfVar5 + 0xe);
          FUN_108362dd8();
          unaff_x19 = unaff_x22;
          func_0x00010834ac3c((undefined1 *)((long)register0x00000008 + -0xb80));
          pfVar9 = pfVar7;
          if (((ulong)unaff_x22 & 1) != 0) goto LAB_108349db4;
        }
      }
      FUN_108376ad8((undefined1 *)((long)register0x00000008 + -0xb80));
      FUN_10837816c((undefined1 *)((long)register0x00000008 + -0xb80),pfVar6,0);
      pfVar9 = (float *)((long)register0x00000008 + -0xb80);
      func_0x00010834ac0c(pfVar5);
      unaff_x19 = *(float **)((long)register0x00000008 + -0xb80);
      FUN_10837ca5c();
      param_3 = pfVar8;
    }
LAB_108349db4:
    func_0x00010834ac18(*(undefined8 *)((long)register0x00000008 + -0xa8));
    if ((bool)uVar3) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    param_1 = unaff_x19;
    func_0x00010834ac3c((undefined1 *)((long)register0x00000008 + -0xb80));
    unaff_x30 = FUN_108349e68;
    func_0x00010834ac60();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xbc0);
    param_2 = pfVar9;
  } while( true );
}



/* Entry: 108349eac; end: 10834a2cf;  */

void FUN_108349eac(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,float *param_6,long *param_7,long param_8,int param_9,
                  undefined8 param_10,undefined8 *param_11)

{
  long lVar1;
  float *pfVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  undefined1 in_ZR;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  long *plVar11;
  long **pplVar12;
  undefined8 uVar13;
  float *pfVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  float *pfVar17;
  long **unaff_x25;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  long *plStack_c18;
  undefined1 auStack_c10 [80];
  undefined1 uStack_bc0;
  undefined8 uStack_bb8;
  undefined1 uStack_bb0;
  undefined1 uStack_b88;
  undefined8 uStack_b80;
  byte bStack_b72;
  undefined4 uStack_b70;
  undefined4 uStack_b6c;
  undefined4 uStack_b68;
  undefined4 uStack_b64;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_78;
  
  func_0x00010834ac2c();
  uStack_78 = extraout_x8;
  func_0x00010834ace8();
  if ((extraout_x8_00 & 1) == 0) {
    FUN_108376ad8(&uStack_b80);
    uStack_bb8 = *(undefined8 *)(param_5 + 0x38);
    uStack_bb0 = 0;
    uStack_b88 = 0;
    bStack_b72 = bStack_b72 | 4;
    if (param_8 != 0) {
      if ((*param_7 == 0) && (in_ZR = (*(byte *)(param_7 + 9) & 0xc0) == 0, (bool)in_ZR)) {
        FUN_108349b00(&uStack_bb8);
        FUN_108363e94();
      }
      else {
        in_ZR = param_9 == 0;
        pfVar14 = param_6;
        if ((bool)in_ZR) {
          pfVar14 = (float *)&uStack_b80;
        }
        param_9 = 1;
        FUN_1083796e4(param_6,param_8,pfVar14,1);
        param_6 = pfVar14;
      }
    }
    unaff_x25 = &plStack_c18;
    auStack_c10[0] = 0;
    uStack_bc0 = 0;
    plVar11 = param_7;
    plStack_c18 = param_7;
    FUN_108349e68(param_7,uStack_bb8,&uStack_b50);
    if ((int)plVar11 != 0) {
      plVar11 = param_7;
      FUN_10837626c();
      fVar20 = (float)uStack_b50;
      in_ZR = (float)uStack_b50 == 1.0;
      if ((bool)in_ZR) {
        pplVar12 = &plStack_c18;
        FUN_10827d610();
        *(undefined4 *)(pplVar12 + 8) = 0;
      }
      else if (((ulong)plVar11 >> 0x20 & 1) != 0) {
        uVar10 = (uint)plVar11;
        in_ZR = uVar10 == 0xc;
        if ((uVar10 < 0xd) && (in_ZR = (1 << (ulong)(uVar10 & 0x1f) & 0x1b1cU) == 0, !(bool)in_ZR))
        {
          FUN_108188360();
          pplVar12 = &plStack_c18;
          FUN_10827d610();
          *(undefined4 *)(pplVar12 + 8) = 0;
          fVar18 = (float)(uint)((int)param_7 * (int)(fVar20 * 256.0) >> 8) * 0.003921569;
          in_ZR = fVar18 == 1.0;
          fVar20 = 1.0;
          if (fVar18 <= 1.0) {
            fVar20 = fVar18;
          }
          param_2 = 0;
          if (fVar20 <= 0.0) {
            fVar20 = 0.0;
          }
          *(float *)((long)pplVar12 + 0x3c) = fVar20;
        }
      }
    }
    if ((*plStack_c18 == 0) && (in_ZR = (*(byte *)(plStack_c18 + 9) & 0xc0) == 0, (bool)in_ZR)) {
      pfVar17 = (float *)0x1;
      pfVar14 = param_6;
    }
    else {
      puVar16 = (undefined8 *)0x0;
      uStack_c28 = 0;
      uStack_c20 = 0;
      if ((*(byte *)(*(long *)(param_5 + 0x40) + 0x31) & 1) == 0) {
        uStack_b48 = 0;
        uStack_b50 = 0x3f800000;
        uStack_b38 = 0;
        uStack_b40 = 0x3f800000;
        uStack_b30 = 0x103f800000;
        uVar13 = *(undefined8 *)(param_5 + 0x38);
        FUN_10818cfd0(uVar13,&uStack_b50);
        if ((int)uVar13 == 0) {
          puVar16 = (undefined8 *)0x0;
        }
        else {
          func_0x00010834acd4();
          lVar1 = 0;
          if ((bool)in_ZR) {
            lVar1 = extraout_x9;
          }
          uStack_b58 = ((undefined8 *)(extraout_x8_01 + lVar1))[1];
          uVar13 = *(undefined8 *)(extraout_x8_01 + lVar1);
          uStack_b60 = uVar13;
          func_0x0001082889e4(&uStack_b60,0xffffffff,0xffffffff);
          uVar19 = (undefined4)uVar13;
          FUN_10817500c(&uStack_b60);
          uStack_b70 = uVar19;
          uStack_b6c = param_2;
          uStack_b68 = param_3;
          uStack_b64 = param_4;
          FUN_108364f90(&uStack_b50,&uStack_c28,&uStack_b70,1);
          puVar16 = &uStack_c28;
        }
      }
      FUN_10837f038(param_6,plStack_c18,&uStack_b80,puVar16,*(undefined8 *)(param_5 + 0x38));
      pfVar14 = (float *)&uStack_b80;
      pfVar17 = param_6;
    }
    pfVar2 = pfVar14;
    if (param_9 == 0) {
      pfVar2 = (float *)&uStack_b80;
    }
    FUN_1083796e4(pfVar14,uStack_bb8,pfVar2,1);
    plVar11 = plStack_c18;
    pfVar14 = pfVar2;
    func_0x0001083773e0();
    fVar20 = pfVar14[2];
    bVar7 = true;
    bVar9 = false;
    if (-8.5070587e+37 <= *pfVar14) {
      bVar7 = false;
      bVar9 = true;
      if (!NAN(pfVar14[1])) {
        bVar7 = pfVar14[1] < -8.5070587e+37;
        bVar9 = false;
      }
    }
    in_ZR = false;
    bVar8 = true;
    if (bVar7 == bVar9) {
      in_ZR = false;
      bVar8 = true;
      if (!NAN(fVar20)) {
        in_ZR = fVar20 == 8.5070587e+37;
        bVar8 = 8.5070587e+37 <= fVar20;
      }
    }
    if ((!bVar8 || (bool)in_ZR) &&
       (in_ZR = pfVar14[3] == 8.5070587e+37, pfVar14[3] <= 8.5070587e+37)) {
      uStack_b50 = 0;
      FUN_1083494dc(&uStack_b48,0xab0);
      if (param_11 == (undefined8 *)0x0) {
        param_11 = &uStack_b50;
        FUN_108349420(param_11,param_5,0,plVar11,param_10);
      }
      uVar15 = plVar11[2];
      if ((uVar15 == 0) ||
         (FUN_108363338(uVar15,pfVar2,*(undefined8 *)(param_5 + 0x38),
                        *(undefined8 *)(param_5 + 0x40),param_11,pfVar17), (uVar15 & 1) == 0)) {
        uVar10 = *(uint *)(plVar11 + 9);
        uVar6 = uVar10 >> 2 & 3;
        pcVar4 = (code *)0x10839cde4;
        if (uVar6 != 2) {
          pcVar4 = FUN_10839cb1c;
        }
        pcVar5 = (code *)0x10839d090;
        if (uVar6 != 1) {
          pcVar5 = pcVar4;
        }
        pcVar4 = FUN_10839d084;
        if (uVar6 != 2) {
          pcVar4 = FUN_10839cdd8;
        }
        pcVar3 = FUN_10839d330;
        if (uVar6 != 1) {
          pcVar3 = pcVar4;
        }
        if ((uVar10 & 1) != 0) {
          pcVar5 = pcVar3;
        }
        pcVar4 = FUN_10839acc8;
        if ((uVar10 & 1) != 0) {
          pcVar4 = FUN_10839ad68;
        }
        in_ZR = (int)pfVar17 == 0;
        if (!(bool)in_ZR) {
          pcVar5 = pcVar4;
        }
        (*pcVar5)(pfVar2,*(undefined8 *)(param_5 + 0x40),param_11);
      }
      func_0x00010834ac3c(&uStack_b50);
    }
    FUN_10819a688(auStack_c10);
    FUN_10837ca5c(uStack_b80);
  }
  func_0x00010834ac18(uStack_78);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_10819a688(unaff_x25 + 1);
  FUN_10837ca5c(uStack_b80);
  func_0x00010834ac60();
  return;
}



/* Entry: 10834a2d0; end: 10834a2d7;  */

void FUN_10834a2d0(void)

{
  return;
}



/* Entry: 10834a2d8; end: 10834a5e3;  */

void FUN_10834a2d8(long *param_1,long param_2,long *param_3,undefined8 param_4,long *param_5,
                  int param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined ***pppuVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined5 uStack_170;
  undefined3 uStack_16b;
  undefined5 uStack_168;
  undefined3 uStack_163;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined8 uStack_14c;
  undefined8 uStack_144;
  undefined8 uStack_13c;
  undefined8 uStack_130;
  float fStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  float fStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined2 uStack_d0;
  undefined1 uStack_ce;
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 *puStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  
  if (*(int *)(*param_1 + 0x48) == 0) {
    return;
  }
  if (param_6 != 1) {
    lVar5 = param_2;
    if ((*(byte *)((long)param_1 + 0xe) >> 1 & 1) == 0) {
      plVar3 = param_1;
      func_0x0001083773e0();
    }
    else {
      plVar3 = (long *)&UNK_10df1cd10;
    }
    ppuStack_c0 = (undefined **)
                  CONCAT44((float)((ulong)*plVar3 >> 0x20) + -0.5,(float)*plVar3 + -0.5);
    lStack_b8 = CONCAT44((float)((ulong)plVar3[1] >> 0x20) + 0.5,(float)plVar3[1] + 0.5);
    pppuVar4 = &ppuStack_c0;
    func_0x00010812f180();
    plVar3 = param_5 + 1;
    *plVar3 = (long)pppuVar4;
    param_5[2] = lVar5;
    uStack_130 = 0;
    ppuStack_c0 = (undefined **)0x0;
    lStack_b0 = param_5[2];
    lStack_b8 = *plVar3;
    uStack_a8 = CONCAT35(uStack_a8._5_3_,0x100000000);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_16b = 0;
    (**(code **)(*param_3 + 0x40))(param_3,&uStack_180,&ppuStack_c0,param_4,&uStack_130);
    if (((ulong)param_3 & 1) == 0) {
      return;
    }
    uVar1 = (uint)uStack_130;
    if (0x7f < (int)(uint)uStack_130) {
      uVar1 = 0x80;
    }
    uVar6 = (ulong)uVar1;
    iVar2 = uStack_130._4_4_;
    if (0x7f < uStack_130._4_4_) {
      iVar2 = 0x80;
    }
    FUN_1082873f8(param_2,uVar6,iVar2);
    lStack_100 = param_2;
    uStack_f8 = uVar6;
    func_0x00010821b838(plVar3,&lStack_100);
    if ((int)plVar3 == 0) {
      return;
    }
    if (param_6 == 0) {
      return;
    }
    if (param_6 == 2) {
      *(undefined1 *)((long)param_5 + 0x1c) = 1;
      *(int *)(param_5 + 3) = (int)param_5[2] - (int)param_5[1];
      plVar3 = param_5;
      func_0x0001083601b4();
      if (plVar3 == (long *)0x0) {
        return;
      }
      FUN_108360228();
      *param_5 = (long)plVar3;
    }
  }
  uStack_98 = 0;
  lStack_b0 = 0;
  lStack_b8 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  plStack_80 = (long *)0x0;
  puStack_88 = (undefined8 *)0x0;
  uStack_78 = 0;
  ppuStack_c0 = &PTR_FUN_110a3e608;
  pcStack_90 = FUN_1083366e0;
  plVar3 = &lStack_b8;
  FUN_108383fd0(plVar3,param_5);
  if (((ulong)plVar3 & 1) != 0) {
    lStack_100 = 0;
    uStack_f8 = 0;
    uStack_d0 = 0x101;
    fStack_128 = 0.0;
    uStack_124 = 0;
    uStack_130 = 0x3f800000;
    uStack_118 = 0;
    uStack_120 = 0x3f800000;
    fStack_11c = 0.0;
    uStack_110 = 0x103f800000;
    uStack_14c = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_163 = 0;
    uStack_170 = 0;
    uStack_16b = 0;
    uStack_158 = 0;
    uStack_154 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_13c = 0x40800000;
    uStack_f0 = 0xffffffffffffffff;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_c8 = 0;
    uStack_ce = 0;
    uStack_144 = 0x3f800000;
    uStack_188 = CONCAT44(*(int *)((long)param_5 + 0x14) - *(int *)((long)param_5 + 0xc),
                          (int)param_5[2] - (int)param_5[1]);
    uStack_190 = 0;
    func_0x000108386f34(&lStack_100,&uStack_190);
    fStack_128 = -(float)(int)param_5[1];
    fStack_11c = -(float)*(int *)((long)param_5 + 0xc);
    uVar7 = 0x10;
    if (*(int *)((long)param_5 + 0xc) != 0 || (int)param_5[1] != 0) {
      uVar7 = 0x11;
    }
    uStack_130 = 0x3f800000;
    uStack_124 = 0;
    uStack_120 = 0x3f800000;
    uStack_118 = 0;
    uStack_110 = CONCAT44(uVar7,0x3f800000);
    puStack_88 = &uStack_130;
    uVar7 = 0x41;
    if (param_7 != 0) {
      uVar7 = 1;
    }
    uStack_13c = CONCAT44(uVar7,(undefined4)uStack_13c);
    plStack_80 = &lStack_100;
    func_0x0001082b0438(&ppuStack_c0,param_1,&uStack_180,0,0);
    FUN_108375e94(&uStack_180);
    func_0x000108386ed4(&lStack_100);
  }
  FUN_10814ca20(&ppuStack_c0);
  return;
}



/* Entry: 10834a5e4; end: 10834abaf;  */

void FUN_10834a5e4(long param_1,int param_2,ulong param_3,float *param_4,long *param_5,long *param_6
                  )

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined1 uVar4;
  long *plVar5;
  long extraout_x8;
  long extraout_x9;
  long lVar6;
  ulong uVar7;
  byte bVar8;
  ulong uVar9;
  float fVar10;
  float fVar12;
  undefined8 uVar11;
  float fVar13;
  float fVar14;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_168;
  undefined8 uStack_160;
  float fStack_158;
  undefined2 uStack_154;
  byte bStack_152;
  undefined1 uStack_151;
  undefined4 uStack_150;
  float fStack_14c;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  uint uStack_118;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  undefined1 auStack_100 [16];
  uint auStack_f0 [2];
  long lStack_e8;
  int iStack_e0;
  undefined8 uStack_dc;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  undefined1 auStack_c0 [16];
  float fStack_b0;
  undefined4 uStack_ac;
  uint uStack_a8;
  long alStack_a0 [2];
  undefined8 uStack_90;
  byte bStack_82;
  
  uVar9 = param_3 & 0xfffffffffffffffe;
  if (param_2 != 1) {
    uVar9 = param_3;
  }
  if ((uVar9 != 0) && ((*(byte *)(*(long *)(param_1 + 0x40) + 0x31) & 1) == 0)) {
    fVar10 = *param_4 - *param_4;
    for (lVar6 = 1; lVar6 < (int)uVar9 << 1; lVar6 = lVar6 + 1) {
      fVar10 = fVar10 * param_4[lVar6];
    }
    if (!NAN(fVar10)) {
      if (param_2 != 2) {
        if (param_2 != 1) {
          if (param_2 != 0) {
            return;
          }
          func_0x00010834acb8();
          uVar1 = uStack_a8 & 0xffffff3f;
          fVar10 = fStack_b0 * 0.5;
          uVar2 = uStack_a8 & 0xc;
          uStack_a8 = uVar1;
          if (uVar2 == 4) {
            if (param_6 == (long *)0x0) {
              FUN_108376ad8(&uStack_90);
              FUN_10837868c(0,0,fVar10);
              param_4 = param_4 + 1;
              for (; uVar9 != 0; uVar9 = uVar9 - 1) {
                param_3 = param_3 - 1;
                fStack_158 = param_4[-1];
                fStack_14c = *param_4;
                bVar3 = false;
                if ((fStack_14c == 0.0) && (bVar3 = false, !NAN(fStack_158))) {
                  bVar3 = fStack_158 == 0.0;
                }
                uStack_13c = 0x10;
                if (!bVar3) {
                  uStack_13c = 0x11;
                }
                uStack_160 = 0x3f800000;
                uStack_154 = 0;
                bStack_152 = 0;
                uStack_151 = 0;
                uStack_150 = 0x3f800000;
                uStack_148 = 0;
                uStack_140 = 0x3f800000;
                bVar8 = 4;
                if (param_3 != 0) {
                  bVar8 = 0;
                }
                bStack_82 = bStack_82 & 0xfb | bVar8;
                func_0x0001082b0438(param_1,&uStack_90,auStack_f0,&uStack_160,param_3 == 0);
                param_4 = param_4 + 2;
              }
              FUN_10837ca5c(uStack_90);
            }
            else {
              for (; uVar9 != 0; uVar9 = uVar9 - 1) {
                fVar12 = (float)*(undefined8 *)param_4;
                fVar14 = (float)((ulong)*(undefined8 *)param_4 >> 0x20);
                uStack_160 = CONCAT44(fVar14 - fVar10,fVar12 - fVar10);
                fStack_158 = fVar12 + fVar10;
                fVar13 = fVar14 + fVar10;
                uStack_154 = SUB42(fVar13,0);
                bStack_152 = (byte)((uint)fVar13 >> 0x10);
                uStack_151 = (undefined1)((uint)fVar13 >> 0x18);
                func_0x00010834ac9c(*(undefined8 *)(*param_6 + 0x110),
                                    CONCAT44(fVar14 + fVar10,fVar12 + fVar10));
                param_4 = param_4 + 2;
              }
            }
          }
          else {
            for (; uVar9 != 0; uVar9 = uVar9 - 1) {
              fStack_158 = (float)*(undefined8 *)param_4 - fVar10;
              fVar12 = (float)((ulong)*(undefined8 *)param_4 >> 0x20) - fVar10;
              uStack_160 = CONCAT44(fVar12,fStack_158);
              fStack_158 = fStack_b0 + fStack_158;
              fVar12 = fStack_b0 + fVar12;
              uStack_154 = SUB42(fVar12,0);
              bStack_152 = (byte)((uint)fVar12 >> 0x10);
              uStack_151 = (undefined1)((uint)fVar12 >> 0x18);
              if (param_6 == (long *)0x0) {
                FUN_1082b0290(param_1,&uStack_160,auStack_f0);
              }
              else {
                func_0x00010834ac9c(*(undefined8 *)(*param_6 + 0x100));
              }
              param_4 = param_4 + 2;
            }
          }
          func_0x00010834ac84();
          return;
        }
        uVar4 = (param_3 & 0xfffffffffffffffe) == 2;
        if (((bool)uVar4) && (*param_5 != 0)) {
          FUN_1083a6264(0x3f800000,&uStack_90,param_5);
          auStack_f0[0] = 0;
          lStack_e8 = 0;
          iStack_e0 = 0;
          uStack_cc = 0;
          uStack_d4 = 0;
          FUN_108376ad8(auStack_c0);
          FUN_108376ad8(&fStack_b0);
          FUN_108376ad8(alStack_a0);
          uStack_dc = NEON_fmov(0x3f800000,4);
          fVar10 = *param_4;
          fVar12 = param_4[1];
          fVar14 = param_4[2];
          fVar13 = param_4[3];
          FUN_10819bb38(auStack_100);
          func_0x00010834acd4();
          lVar6 = 0;
          if ((bool)uVar4) {
            lVar6 = extraout_x9;
          }
          FUN_10817500c(extraout_x8 + lVar6);
          plVar5 = (long *)*param_5;
          fStack_110 = fVar10;
          fStack_10c = fVar12;
          fStack_108 = fVar14;
          fStack_104 = fVar13;
          (**(code **)(*plVar5 + 0x48))
                    (plVar5,auStack_f0,auStack_100,&uStack_90,*(undefined8 *)(param_1 + 0x38),
                     &fStack_110);
          if ((int)plVar5 != 0) {
            FUN_108375f34(&uStack_160,param_5);
            uStack_168 = 0;
            FUN_1082b15a4(&uStack_160,0);
            func_0x000108115b70(&uStack_168);
            uStack_118 = uStack_118 & 0xffffff3f;
            if (*(int *)(CONCAT44(uStack_ac,fStack_b0) + 0x48) != 0) {
              if (param_6 == (long *)0x0) {
                func_0x00010834ac0c(param_1,&fStack_b0,&uStack_160);
              }
              else {
                func_0x00010834ac68(*(undefined8 *)(*param_6 + 0x130));
              }
            }
            if (*(int *)(alStack_a0[0] + 0x48) != 0) {
              if (param_6 == (long *)0x0) {
                func_0x00010834ac0c(param_1,alStack_a0,&uStack_160);
              }
              else {
                func_0x00010834ac68(*(undefined8 *)(*param_6 + 0x130));
              }
            }
            if ((float)uStack_dc == uStack_dc._4_4_) {
              uStack_118 = uStack_118 & 0xfffffff0 | uStack_118 & 3 | (auStack_f0[0] & 1) << 2;
              if (param_6 == (long *)0x0) {
                FUN_10834a5e4(param_1,0,(long)iStack_e0,lStack_e8,&uStack_160,0);
              }
              else {
                (**(code **)(*param_6 + 0xf8))(param_6,0,(long)iStack_e0,lStack_e8,&uStack_160);
              }
            }
            else {
              uStack_180 = 0;
              uStack_178 = 0;
              for (lVar6 = 0; lVar6 < iStack_e0; lVar6 = lVar6 + 1) {
                uVar11 = *(undefined8 *)(lStack_e8 + lVar6 * 8);
                fVar10 = (float)uVar11;
                fVar14 = (float)uStack_dc;
                fVar12 = (float)((ulong)uVar11 >> 0x20);
                fVar13 = (float)((ulong)uStack_dc >> 0x20);
                uStack_180 = CONCAT44(fVar12 - fVar13,fVar10 - fVar14);
                uStack_178 = CONCAT44(fVar12 + fVar13,fVar10 + fVar14);
                if (param_6 == (long *)0x0) {
                  FUN_1082b0290(CONCAT44(fVar12 + fVar13,fVar10 + fVar14),param_1,&uStack_180,
                                &uStack_160);
                }
                else {
                  (**(code **)(*param_6 + 0x100))(param_6,&uStack_180,&uStack_160);
                }
              }
            }
            FUN_108375e94(&uStack_160);
            func_0x00010834accc();
            func_0x00010834acc4();
            return;
          }
          func_0x00010834accc();
          func_0x00010834acc4();
        }
      }
      FUN_108376ad8(&uStack_160);
      func_0x00010834acb8();
      uVar7 = 0;
      uStack_a8 = uStack_a8 & 0xffffff3f | 0x40;
      lVar6 = 1;
      if (param_2 == 1) {
        lVar6 = 2;
      }
      bStack_152 = bStack_152 | 4;
      for (; uVar7 < uVar9 - 1; uVar7 = uVar7 + lVar6) {
        FUN_10817abbc(&uStack_160,param_4);
        func_0x0001081f7a64(&uStack_160,param_4 + 2);
        if (param_6 == (long *)0x0) {
          func_0x00010834ac0c(param_1,&uStack_160,auStack_f0);
        }
        else {
          func_0x00010834ac68(*(undefined8 *)(*param_6 + 0x130));
        }
        FUN_1083772f4(&uStack_160);
        param_4 = param_4 + lVar6 * 2;
      }
      func_0x00010834ac84();
      FUN_10837ca5c(uStack_160);
    }
  }
  return;
}



/* Entry: 10834abb0; end: 10834abb3;  */

undefined8 * FUN_10834abb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3e608;
  FUN_10810a400(param_1 + 3);
  return param_1;
}



/* Entry: 10834abb4; end: 10834abc7;  */

void FUN_10834abb4(void)

{
  FUN_10814ca20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10834abc8; end: 10834ac0b;  */

long FUN_10834abc8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    __ZdaPv();
  }
  FUN_10837ca38(param_1 + 0x50);
  FUN_10837ca38(param_1 + 0x40);
  FUN_10837ca38(param_1 + 0x30);
  return param_1;
}



/* Entry: 10834ac0c; end: 10834acf3;  */

void FUN_10834ac0c(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,float *param_6,long *param_7)

{
  float *pfVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  undefined1 in_ZR;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  long *plVar10;
  long **pplVar11;
  undefined8 uVar12;
  float *pfVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  int iVar19;
  float *pfVar20;
  long **unaff_x25;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  long *plStack_c18;
  undefined1 auStack_c10 [80];
  undefined1 uStack_bc0;
  undefined8 uStack_bb8;
  undefined1 uStack_bb0;
  undefined1 uStack_b88;
  undefined8 uStack_b80;
  byte bStack_b72;
  undefined4 uStack_b70;
  undefined4 uStack_b6c;
  undefined4 uStack_b68;
  undefined4 uStack_b64;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_78;
  
  lVar16 = 0;
  iVar19 = 1;
  uVar17 = 0;
  puVar18 = (undefined8 *)0x0;
  func_0x00010834ac2c();
  uStack_78 = extraout_x8;
  func_0x00010834ace8();
  if ((extraout_x8_00 & 1) == 0) {
    FUN_108376ad8(&uStack_b80);
    uStack_bb8 = *(undefined8 *)(param_5 + 0x38);
    uStack_bb0 = 0;
    uStack_b88 = 0;
    bStack_b72 = bStack_b72 | 4;
    if (lVar16 != 0) {
      if ((*param_7 == 0) && (in_ZR = (*(byte *)(param_7 + 9) & 0xc0) == 0, (bool)in_ZR)) {
        FUN_108349b00(&uStack_bb8);
        FUN_108363e94();
      }
      else {
        in_ZR = iVar19 == 0;
        pfVar13 = param_6;
        if ((bool)in_ZR) {
          pfVar13 = (float *)&uStack_b80;
        }
        iVar19 = 1;
        FUN_1083796e4(param_6,lVar16,pfVar13,1);
        param_6 = pfVar13;
      }
    }
    unaff_x25 = &plStack_c18;
    auStack_c10[0] = 0;
    uStack_bc0 = 0;
    plVar10 = param_7;
    plStack_c18 = param_7;
    FUN_108349e68(param_7,uStack_bb8,&uStack_b50);
    if ((int)plVar10 != 0) {
      plVar10 = param_7;
      FUN_10837626c();
      fVar23 = (float)uStack_b50;
      in_ZR = (float)uStack_b50 == 1.0;
      if ((bool)in_ZR) {
        pplVar11 = &plStack_c18;
        FUN_10827d610();
        *(undefined4 *)(pplVar11 + 8) = 0;
      }
      else if (((ulong)plVar10 >> 0x20 & 1) != 0) {
        uVar9 = (uint)plVar10;
        in_ZR = uVar9 == 0xc;
        if ((uVar9 < 0xd) && (in_ZR = (1 << (ulong)(uVar9 & 0x1f) & 0x1b1cU) == 0, !(bool)in_ZR)) {
          FUN_108188360();
          pplVar11 = &plStack_c18;
          FUN_10827d610();
          *(undefined4 *)(pplVar11 + 8) = 0;
          fVar21 = (float)(uint)((int)param_7 * (int)(fVar23 * 256.0) >> 8) * 0.003921569;
          in_ZR = fVar21 == 1.0;
          fVar23 = 1.0;
          if (fVar21 <= 1.0) {
            fVar23 = fVar21;
          }
          param_2 = 0;
          if (fVar23 <= 0.0) {
            fVar23 = 0.0;
          }
          *(float *)((long)pplVar11 + 0x3c) = fVar23;
        }
      }
    }
    if ((*plStack_c18 == 0) && (in_ZR = (*(byte *)(plStack_c18 + 9) & 0xc0) == 0, (bool)in_ZR)) {
      pfVar20 = (float *)0x1;
      pfVar13 = param_6;
    }
    else {
      puVar15 = (undefined8 *)0x0;
      uStack_c28 = 0;
      uStack_c20 = 0;
      if ((*(byte *)(*(long *)(param_5 + 0x40) + 0x31) & 1) == 0) {
        uStack_b48 = 0;
        uStack_b50 = 0x3f800000;
        uStack_b38 = 0;
        uStack_b40 = 0x3f800000;
        uStack_b30 = 0x103f800000;
        uVar12 = *(undefined8 *)(param_5 + 0x38);
        FUN_10818cfd0(uVar12,&uStack_b50);
        if ((int)uVar12 == 0) {
          puVar15 = (undefined8 *)0x0;
        }
        else {
          func_0x00010834acd4();
          lVar16 = 0;
          if ((bool)in_ZR) {
            lVar16 = extraout_x9;
          }
          uStack_b58 = ((undefined8 *)(extraout_x8_01 + lVar16))[1];
          uVar12 = *(undefined8 *)(extraout_x8_01 + lVar16);
          uStack_b60 = uVar12;
          func_0x0001082889e4(&uStack_b60,0xffffffff,0xffffffff);
          uVar22 = (undefined4)uVar12;
          FUN_10817500c(&uStack_b60);
          uStack_b70 = uVar22;
          uStack_b6c = param_2;
          uStack_b68 = param_3;
          uStack_b64 = param_4;
          FUN_108364f90(&uStack_b50,&uStack_c28,&uStack_b70,1);
          puVar15 = &uStack_c28;
        }
      }
      FUN_10837f038(param_6,plStack_c18,&uStack_b80,puVar15,*(undefined8 *)(param_5 + 0x38));
      pfVar13 = (float *)&uStack_b80;
      pfVar20 = param_6;
    }
    pfVar1 = pfVar13;
    if (iVar19 == 0) {
      pfVar1 = (float *)&uStack_b80;
    }
    FUN_1083796e4(pfVar13,uStack_bb8,pfVar1,1);
    plVar10 = plStack_c18;
    pfVar13 = pfVar1;
    func_0x0001083773e0();
    fVar23 = pfVar13[2];
    bVar6 = true;
    bVar8 = false;
    if (-8.5070587e+37 <= *pfVar13) {
      bVar6 = false;
      bVar8 = true;
      if (!NAN(pfVar13[1])) {
        bVar6 = pfVar13[1] < -8.5070587e+37;
        bVar8 = false;
      }
    }
    in_ZR = false;
    bVar7 = true;
    if (bVar6 == bVar8) {
      in_ZR = false;
      bVar7 = true;
      if (!NAN(fVar23)) {
        in_ZR = fVar23 == 8.5070587e+37;
        bVar7 = 8.5070587e+37 <= fVar23;
      }
    }
    if ((!bVar7 || (bool)in_ZR) &&
       (in_ZR = pfVar13[3] == 8.5070587e+37, pfVar13[3] <= 8.5070587e+37)) {
      uStack_b50 = 0;
      FUN_1083494dc(&uStack_b48,0xab0);
      if (puVar18 == (undefined8 *)0x0) {
        puVar18 = &uStack_b50;
        FUN_108349420(puVar18,param_5,0,plVar10,uVar17);
      }
      uVar14 = plVar10[2];
      if ((uVar14 == 0) ||
         (FUN_108363338(uVar14,pfVar1,*(undefined8 *)(param_5 + 0x38),
                        *(undefined8 *)(param_5 + 0x40),puVar18,pfVar20), (uVar14 & 1) == 0)) {
        uVar9 = *(uint *)(plVar10 + 9);
        uVar5 = uVar9 >> 2 & 3;
        pcVar3 = (code *)0x10839cde4;
        if (uVar5 != 2) {
          pcVar3 = FUN_10839cb1c;
        }
        pcVar4 = (code *)0x10839d090;
        if (uVar5 != 1) {
          pcVar4 = pcVar3;
        }
        pcVar3 = FUN_10839d084;
        if (uVar5 != 2) {
          pcVar3 = FUN_10839cdd8;
        }
        pcVar2 = FUN_10839d330;
        if (uVar5 != 1) {
          pcVar2 = pcVar3;
        }
        if ((uVar9 & 1) != 0) {
          pcVar4 = pcVar2;
        }
        pcVar3 = FUN_10839acc8;
        if ((uVar9 & 1) != 0) {
          pcVar3 = FUN_10839ad68;
        }
        in_ZR = (int)pfVar20 == 0;
        if (!(bool)in_ZR) {
          pcVar4 = pcVar3;
        }
        (*pcVar4)(pfVar1,*(undefined8 *)(param_5 + 0x40),puVar18);
      }
      func_0x00010834ac3c(&uStack_b50);
    }
    FUN_10819a688(auStack_c10);
    FUN_10837ca5c(uStack_b80);
  }
  func_0x00010834ac18(uStack_78);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_10819a688(unaff_x25 + 1);
  FUN_10837ca5c(uStack_b80);
  func_0x00010834ac60();
  return;
}



/* Entry: 10834acf4; end: 10834b127;  */

void FUN_10834acf4(undefined8 param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  uint param_6,undefined8 *param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  float *pfVar7;
  undefined8 *puVar8;
  float *pfVar9;
  float *pfVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  ulong uVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 auStack_1c0 [6];
  undefined8 uStack_190;
  float fStack_188;
  float fStack_184;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  float *pfStack_150;
  float *pfStack_148;
  float *pfStack_140;
  undefined8 *puStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  undefined4 uStack_110;
  float fStack_10c;
  float fStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined8 uStack_fc;
  undefined8 uStack_e8;
  float fStack_e0;
  undefined8 uStack_dc;
  float fStack_d4;
  undefined8 uStack_d0;
  float fStack_c8;
  undefined8 uStack_c4;
  float fStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  ulong uVar25;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  fVar26 = *param_4;
  uVar15 = (ulong)(uint)fVar26;
  fVar30 = param_4[1];
  fVar28 = param_4[2];
  uVar20 = (ulong)(uint)fVar28;
  fVar24 = fVar28 + fVar30 * (param_5[1] + param_5[3]) * 0.5 +
                    (*param_5 + param_5[2]) * 0.5 * fVar26;
  uVar25 = (ulong)(uint)fVar24;
  pfVar7 = param_3;
  pfVar9 = param_3;
  pfVar10 = param_5;
  FUN_10828e338();
  if (((param_6 & 1) == 0) && ((int)pfVar7 != 0)) {
    if ((0.00024414062 < ABS(param_5[2] - *param_5)) &&
       (0.00024414062 < ABS(param_5[3] - param_5[1]))) {
      pfVar9 = (float *)&uStack_b8;
      param_4 = param_5;
      FUN_1082fdf34(param_3);
      uStack_e8 = uStack_b8;
      fStack_e0 = fVar28 + fVar30 * param_5[1] + *param_5 * fVar26;
      uStack_dc = uStack_b0;
      fStack_d4 = fVar28 + fVar30 * param_5[1] + param_5[2] * fVar26;
      fVar21 = fVar28 + fVar30 * param_5[3] + param_5[2] * fVar26;
      uStack_d0 = uStack_a8;
      fStack_c8 = fVar21;
      uStack_c4 = uStack_a0;
      fStack_bc = fVar28 + fVar30 * param_5[3] + *param_5 * fVar26;
      fVar26 = param_2[2];
      uVar14 = (ulong)(uint)fVar26;
      uVar19 = *(ulong *)param_2;
      for (lVar11 = 0; lVar11 != 0x30; lVar11 = lVar11 + 0xc) {
        fVar21 = fVar26 - *(float *)((long)&fStack_e0 + lVar11);
        if (fVar21 <= 0.00024414062) goto LAB_10834b0dc;
        fVar21 = *(float *)((long)&fStack_e0 + lVar11) / fVar21;
        fVar28 = (float)*(undefined8 *)((long)&uStack_e8 + lVar11);
        fVar30 = (float)((ulong)*(undefined8 *)((long)&uStack_e8 + lVar11) >> 0x20);
        *(ulong *)((long)&uStack_e8 + lVar11) =
             CONCAT44(fVar30 - ((float)(uVar19 >> 0x20) - fVar30) * fVar21,
                      fVar28 - ((float)uVar19 - fVar28) * fVar21);
        *(undefined4 *)((long)&fStack_e0 + lVar11) = 0x3f800000;
      }
      func_0x00010834b3b4(&uStack_dc,&uStack_e8);
      fStack_11c = (float)uVar14;
      fStack_118 = (float)uVar19;
      fStack_114 = fVar21;
      func_0x00010834b44c(&uStack_d0);
      func_0x00010834b3e0();
      uVar15 = uVar14;
      uVar20 = uVar19;
      fVar23 = fVar21;
      func_0x00010834b44c(&uStack_e8);
      fVar12 = (float)uVar15;
      fVar18 = (float)uVar20;
      fStack_11c = fVar12;
      fStack_118 = fVar18;
      fStack_114 = fVar23;
      func_0x00010834b3b4(&uStack_dc,&uStack_d0);
      func_0x00010834b3e0();
      pfVar9 = (float *)&uStack_d0;
      fVar26 = fVar12;
      fVar28 = fVar18;
      fVar30 = fVar23;
      func_0x00010834b3b4(&uStack_e8);
      fStack_11c = fVar26;
      fStack_118 = fVar28;
      fStack_114 = fVar30;
      func_0x00010834b44c(&uStack_dc);
      func_0x00010834b3e0();
      uVar15 = uVar14;
      uVar20 = uVar19;
      if (0.00024414062 < ABS(fVar30)) {
        fVar27 = (float)uVar14;
        fVar29 = (float)uVar19;
        fVar22 = -fVar27;
        fVar1 = -fVar29;
        fVar2 = -fVar21;
        if (-((fVar27 - (float)uStack_e8) * (uStack_c4._4_4_ - uStack_e8._4_4_)) +
            (fVar29 - uStack_e8._4_4_) * ((float)uStack_c4 - (float)uStack_e8) <= 0.0) {
          fVar22 = fVar27;
          fVar1 = fVar29;
          fVar2 = fVar21;
        }
        fVar13 = -fVar18;
        fVar21 = -fVar12;
        fVar3 = -fVar23;
        if (0.0 <= -((fVar27 - (float)uStack_e8) * (uStack_dc._4_4_ - uStack_e8._4_4_)) +
                   (fVar29 - uStack_e8._4_4_) * ((float)uStack_dc - (float)uStack_e8)) {
          fVar13 = fVar18;
          fVar21 = fVar12;
          fVar3 = fVar23;
        }
        param_7[1] = CONCAT44(fVar1 / fVar30,fVar26 / fVar30);
        *param_7 = CONCAT44(fVar21 / fVar30,fVar22 / fVar30);
        param_7[3] = CONCAT44(fVar3 / fVar30,fVar2 / fVar30);
        param_7[2] = CONCAT44(fVar28 / fVar30,fVar13 / fVar30);
        param_7[4] = 0x803f800000;
        fStack_11c = 2.0 / (param_5[2] - *param_5);
        fStack_10c = 2.0 / (param_5[3] - param_5[1]);
        fStack_114 = -1.0 - *param_5 * fStack_11c;
        fStack_118 = 0.0;
        uStack_110 = 0;
        fStack_108 = -1.0 - param_5[1] * fStack_10c;
        uStack_104 = 0;
        uStack_100 = 0;
        uStack_fc = 0x803f800000;
        param_3 = &fStack_11c;
        FUN_108363e94(param_7);
        fVar28 = fVar24 / (param_2[2] - fVar24);
        fVar26 = 0.95;
        if (fVar28 <= 0.95) {
          fVar26 = fVar28;
        }
        if (fVar26 <= 0.0) {
          fVar26 = 0.0;
        }
        *param_8 = (float)param_1 * fVar26;
        goto LAB_10834af28;
      }
    }
LAB_10834b0dc:
    puVar8 = (undefined8 *)0x0;
    param_3 = pfVar9;
  }
  else {
    fVar26 = *param_2;
    fVar28 = param_2[1];
    fVar30 = param_2[2];
    if (param_6 == 0) {
      param_4 = (float *)&uStack_e8;
      FUN_1082c29f4(uVar25,param_8,&fStack_11c);
      fVar28 = uStack_e8._4_4_;
      fVar26 = (float)uStack_e8;
    }
    else {
      *param_8 = (float)param_1 * fVar24;
      fStack_11c = 1.0;
      fVar21 = 262144.0;
      if (fVar24 / fVar30 <= 262144.0) {
        fVar21 = fVar24 / fVar30;
      }
      fVar30 = -fVar21;
      if (fVar21 <= 0.0) {
        fVar30 = -0.0;
      }
      uStack_e8 = CONCAT44(fVar28 * fVar30,fVar26 * fVar30);
      fVar28 = fVar28 * fVar30;
      fVar26 = fVar26 * fVar30;
    }
    func_0x000108142138(fStack_11c,fStack_11c,fVar26,fVar28,param_7);
    FUN_108363e94(param_7);
LAB_10834af28:
    puVar8 = (undefined8 *)0x1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
    ___stack_chk_fail();
    pcStack_128 = FUN_10834b128;
    uStack_170 = uVar20;
    uStack_168 = uVar15;
    uStack_160 = uVar25;
    uStack_158 = param_1;
    pfStack_150 = param_5;
    pfStack_148 = param_2;
    pfStack_140 = param_8;
    puStack_138 = param_7;
    puStack_130 = &stack0xfffffffffffffff0;
    func_0x0001083773e0();
    uVar17 = puVar8[1];
    uVar16 = *puVar8;
    fVar26 = *param_3;
    fVar28 = param_3[1];
    fVar30 = ABS(fVar28);
    bVar4 = false;
    bVar5 = true;
    if (ABS(fVar26) <= 0.00024414062) {
      bVar4 = false;
      bVar5 = true;
      if (!NAN(fVar30)) {
        bVar4 = fVar30 == 0.00024414062;
        bVar5 = 0.00024414062 <= fVar30;
      }
    }
    if (!bVar5 || bVar4) {
      fVar28 = param_3[2];
    }
    else {
      uStack_180._0_4_ = (float)uVar16;
      uStack_180._4_4_ = (float)((ulong)uVar16 >> 0x20);
      fVar23 = param_3[2];
      fVar21 = fVar23 + fVar28 * uStack_180._4_4_ + fVar26 * (float)uStack_180;
      uStack_178._0_4_ = (float)uVar17;
      uStack_178._4_4_ = (float)((ulong)uVar17 >> 0x20);
      fVar30 = fVar23 + fVar28 * uStack_180._4_4_ + fVar26 * (float)uStack_178;
      if (fVar30 <= fVar21) {
        fVar30 = fVar21;
      }
      fVar21 = fVar23 + fVar28 * uStack_178._4_4_ + fVar26 * (float)uStack_180;
      if (fVar21 <= fVar30) {
        fVar21 = fVar30;
      }
      fVar26 = fVar23 + fVar28 * uStack_178._4_4_ + fVar26 * (float)uStack_178;
      fVar28 = fVar26;
      if (fVar26 <= fVar21) {
        fVar28 = fVar21;
      }
    }
    pfVar9 = param_4;
    uStack_180 = uVar16;
    uStack_178 = uVar17;
    FUN_10828e338();
    if ((int)pfVar9 == 0) {
      pfVar9 = param_4;
      FUN_108365554();
      iVar6 = (int)pfVar9;
      func_0x00010834b410();
      if ((*(byte *)(param_3 + 9) >> 2 & 1) == 0) {
        func_0x00010834b438();
      }
      else {
        fStack_184 = fVar28 * param_3[6];
        fStack_188 = 1.0;
        fVar30 = 262144.0;
        if (fVar28 / param_3[5] <= 262144.0) {
          fVar30 = fVar28 / param_3[5];
        }
        fVar28 = -fVar30;
        if (fVar30 <= 0.0) {
          fVar28 = -0.0;
        }
        uStack_190 = CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 3) >> 0x20) * fVar28,
                              (float)*(undefined8 *)(param_3 + 3) * fVar28);
        func_0x00010834b3f4(0x3f800000);
        if (iVar6 != 0) {
          FUN_1082ef8c0(auStack_1c0,&uStack_190,1);
        }
      }
      uVar25 = (ulong)(uint)(fVar24 * (1.0 / fVar26));
      fStack_184 = (1.0 / fVar26) * fStack_184;
    }
    else {
      FUN_108189c38(param_4,&uStack_180,1);
      func_0x00010834b410();
      if ((*(byte *)(param_3 + 9) >> 2 & 1) == 0) {
        auStack_1c0[0] = *(undefined8 *)(param_3 + 3);
        func_0x00010827a0cc(param_4,auStack_1c0,1);
        func_0x00010834b438();
      }
      else {
        fStack_184 = fVar28 * param_3[6];
        fStack_188 = 1.0;
        fVar24 = 262144.0;
        if (fVar28 / param_3[5] <= 262144.0) {
          fVar24 = fVar28 / param_3[5];
        }
        fVar26 = -fVar24;
        if (fVar24 <= 0.0) {
          fVar26 = -0.0;
        }
        uStack_190 = CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 3) >> 0x20) * fVar26,
                              (float)*(undefined8 *)(param_3 + 3) * fVar26);
      }
    }
    uStack_1c8 = uStack_178;
    uStack_1d0 = uStack_180;
    func_0x00010816882c(uVar25,uVar25,&uStack_180);
    fVar24 = (float)((ulong)uStack_190 >> 0x20);
    uStack_1d0 = CONCAT44((float)((ulong)uStack_1d0 >> 0x20) * fStack_188 + fVar24,
                          (float)uStack_1d0 * fStack_188 + (float)uStack_190);
    uStack_1c8 = CONCAT44((float)((ulong)uStack_1c8 >> 0x20) * fStack_188 + fVar24,
                          (float)uStack_1c8 * fStack_188 + (float)uStack_190);
    func_0x00010816882c(fStack_184,fStack_184,&uStack_1d0);
    *(undefined8 *)(pfVar10 + 2) = uStack_178;
    *(undefined8 *)pfVar10 = uStack_180;
    func_0x00010838ed50(pfVar10,&uStack_1d0);
    FUN_108168934(0xbf800000,0xbf800000,pfVar10);
    FUN_10828e338();
    iVar6 = (int)param_4;
    if ((iVar6 != 0) && (func_0x00010834b3f4(0x3f800000), iVar6 != 0)) {
      FUN_108189c38(auStack_1c0,pfVar10,1);
    }
    return;
  }
  return;
}



/* Entry: 10834b128; end: 10834b3b3;  */

void FUN_10834b128(undefined8 *param_1,float *param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulong unaff_d9;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 auStack_a0 [6];
  undefined8 uStack_70;
  float fStack_68;
  float fStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x0001083773e0();
  uVar7 = param_1[1];
  uVar6 = *param_1;
  fVar5 = *param_2;
  fVar8 = param_2[1];
  fVar9 = ABS(fVar8);
  bVar1 = false;
  bVar2 = true;
  if (ABS(fVar5) <= 0.00024414062) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar9)) {
      bVar1 = fVar9 == 0.00024414062;
      bVar2 = 0.00024414062 <= fVar9;
    }
  }
  if (!bVar2 || bVar1) {
    fVar8 = param_2[2];
  }
  else {
    uStack_60._0_4_ = (float)uVar6;
    uStack_60._4_4_ = (float)((ulong)uVar6 >> 0x20);
    fVar11 = param_2[2];
    fVar10 = fVar11 + fVar8 * uStack_60._4_4_ + fVar5 * (float)uStack_60;
    uStack_58._0_4_ = (float)uVar7;
    uStack_58._4_4_ = (float)((ulong)uVar7 >> 0x20);
    fVar9 = fVar11 + fVar8 * uStack_60._4_4_ + fVar5 * (float)uStack_58;
    if (fVar9 <= fVar10) {
      fVar9 = fVar10;
    }
    fVar10 = fVar11 + fVar8 * uStack_58._4_4_ + fVar5 * (float)uStack_60;
    if (fVar10 <= fVar9) {
      fVar10 = fVar9;
    }
    fVar5 = fVar11 + fVar8 * uStack_58._4_4_ + fVar5 * (float)uStack_58;
    fVar8 = fVar5;
    if (fVar5 <= fVar10) {
      fVar8 = fVar10;
    }
  }
  uVar4 = param_3;
  uStack_60 = uVar6;
  uStack_58 = uVar7;
  FUN_10828e338();
  if ((int)uVar4 == 0) {
    uVar6 = param_3;
    FUN_108365554();
    iVar3 = (int)uVar6;
    func_0x00010834b410();
    if ((*(byte *)(param_2 + 9) >> 2 & 1) == 0) {
      func_0x00010834b438();
    }
    else {
      fStack_64 = fVar8 * param_2[6];
      fStack_68 = 1.0;
      fVar9 = 262144.0;
      if (fVar8 / param_2[5] <= 262144.0) {
        fVar9 = fVar8 / param_2[5];
      }
      fVar8 = -fVar9;
      if (fVar9 <= 0.0) {
        fVar8 = -0.0;
      }
      uStack_70 = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 3) >> 0x20) * fVar8,
                           (float)*(undefined8 *)(param_2 + 3) * fVar8);
      func_0x00010834b3f4(0x3f800000);
      if (iVar3 != 0) {
        FUN_1082ef8c0(auStack_a0,&uStack_70,1);
      }
    }
    unaff_d9 = (ulong)(uint)((float)unaff_d9 * (1.0 / fVar5));
    fStack_64 = (1.0 / fVar5) * fStack_64;
  }
  else {
    FUN_108189c38(param_3,&uStack_60,1);
    func_0x00010834b410();
    if ((*(byte *)(param_2 + 9) >> 2 & 1) == 0) {
      auStack_a0[0] = *(undefined8 *)(param_2 + 3);
      func_0x00010827a0cc(param_3,auStack_a0,1);
      func_0x00010834b438();
    }
    else {
      fStack_64 = fVar8 * param_2[6];
      fStack_68 = 1.0;
      fVar5 = 262144.0;
      if (fVar8 / param_2[5] <= 262144.0) {
        fVar5 = fVar8 / param_2[5];
      }
      fVar8 = -fVar5;
      if (fVar5 <= 0.0) {
        fVar8 = -0.0;
      }
      uStack_70 = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 3) >> 0x20) * fVar8,
                           (float)*(undefined8 *)(param_2 + 3) * fVar8);
    }
  }
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  func_0x00010816882c(unaff_d9,unaff_d9,&uStack_60);
  fVar5 = (float)((ulong)uStack_70 >> 0x20);
  uStack_b0 = CONCAT44((float)((ulong)uStack_b0 >> 0x20) * fStack_68 + fVar5,
                       (float)uStack_b0 * fStack_68 + (float)uStack_70);
  uStack_a8 = CONCAT44((float)((ulong)uStack_a8 >> 0x20) * fStack_68 + fVar5,
                       (float)uStack_a8 * fStack_68 + (float)uStack_70);
  func_0x00010816882c(fStack_64,fStack_64,&uStack_b0);
  param_4[1] = uStack_58;
  *param_4 = uStack_60;
  func_0x00010838ed50(param_4,&uStack_b0);
  FUN_108168934(0xbf800000,0xbf800000,param_4);
  FUN_10828e338();
  iVar3 = (int)param_3;
  if ((iVar3 != 0) && (func_0x00010834b3f4(0x3f800000), iVar3 != 0)) {
    FUN_108189c38(auStack_a0,param_4,1);
  }
  return;
}



/* Entry: 10834b3b4; end: 10834b453;  */

float FUN_10834b3b4(long param_1,long param_2)

{
  return -(*(float *)(param_2 + 4) * *(float *)(param_1 + 8)) +
         *(float *)(param_2 + 8) * *(float *)(param_1 + 4);
}



/* Entry: 10834b454; end: 10834ba43;  */

/* WARNING: Possible PIC construction at 0x00010834b6f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001081865c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010834b6f8) */
/* WARNING: Removing unreachable block (ram,0x0001081865cc) */
/* WARNING: Removing unreachable block (ram,0x0001081865dc) */

long **** FUN_10834b454(undefined8 param_1,undefined8 param_2,float param_3,double param_4,
                       long param_5,undefined1 (*param_6) [16],double *param_7,undefined4 *param_8,
                       uint param_9,ulong *param_10,long param_11)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined4 *puVar5;
  long ***ppplVar6;
  long ***ppplVar7;
  undefined4 uVar8;
  double **ppdVar9;
  undefined1 uVar10;
  int iVar11;
  long ****pppplVar12;
  long *plVar13;
  long ****pppplVar14;
  long lVar15;
  long ****pppplVar16;
  long ***ppplVar17;
  undefined8 *puVar18;
  long ****pppplVar19;
  double *unaff_x20;
  long ****pppplVar20;
  ulong uVar21;
  undefined8 ****ppppuVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  double *pdStack_400;
  long ***ppplStack_3f8;
  undefined8 ***pppuStack_3f0;
  code *pcStack_3e8;
  double dStack_3e0;
  double dStack_3d8;
  undefined8 uStack_3d0;
  float fStack_3c8;
  float fStack_3c4;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined4 *puStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 auStack_348 [2];
  long lStack_338;
  undefined1 auStack_32c [100];
  long ***ppplStack_2c8;
  long ***ppplStack_2c0;
  undefined4 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 auStack_270 [8];
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_240;
  float fStack_234;
  uint uStack_228;
  long ***ppplStack_220;
  long ***ppplStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  undefined1 auStack_1f0 [32];
  undefined1 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1c0 [256];
  long **pplStack_c0;
  long ***ppplStack_b8;
  double dStack_a0;
  undefined8 uStack_98;
  double dStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  ppdVar9 = (double **)&dStack_3e0;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppplStack_220 = *(long ****)(param_11 + 8);
  puStack_3a8 = param_8;
  if ((long ****)ppplStack_220 == (long ****)0x0) {
    ppplStack_220 = (long ***)0x0;
  }
  else {
    pppplVar16 = (long ****)(ppplStack_220 + 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppplVar16,0x10);
      if (bVar3) {
        *(int *)pppplVar16 = *(int *)pppplVar16 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_1081e4b70(auStack_1c0,0x100);
    FUN_108375f34(auStack_270,param_11);
    uVar23 = uStack_268;
    uStack_228 = uStack_228 & 0xffffff3e;
    uStack_278 = 0;
    uStack_268 = 0;
    FUN_108114eec(uVar23);
    func_0x000106f47224(&uStack_278);
    uVar23 = uStack_260;
    uStack_280 = 0;
    uStack_260 = 0;
    FUN_108376540(uVar23);
    FUN_10810c718(&uStack_280);
    uVar10 = (undefined1)*(undefined8 *)(param_5 + 0x38);
    FUN_10828e338();
    pppplVar19 = (long ****)ppplStack_220;
    pppplVar14 = (long ****)&pplStack_c0;
    pppplVar12 = pppplVar14;
    FUN_10840f8d0(pppplVar14,0x49,8);
    cVar2 = (char)pppplVar12 - (char)ppplStack_b8;
    ppplStack_b8 = (long ***)(pppplVar12 + 8);
    pppplVar12[8] = (long ***)FUN_10834ba50;
    pppplVar16 = (long ****)(ppplStack_b8 + 1);
    ppplStack_b8 = ppplStack_b8 + 1;
    *(char *)pppplVar16 = cVar2;
    pplStack_c0 = (long **)((long)ppplStack_b8 + 1);
    ppplStack_b8 = (long ***)pplStack_c0;
    *(undefined4 *)(pppplVar12 + 1) = 1;
    *pppplVar12 = (long ***)&PTR_FUN_110a43b58;
    pppplVar12[2] = (long ***)pppplVar19;
    *(undefined1 *)((long)pppplVar12 + 0x3c) = uVar10;
    uVar8 = uRam0000000113254e40;
    ppplVar7 = ppplRam0000000113254e38;
    ppplVar6 = ppplRam0000000113254e30;
    ppplVar17 = ppplRam0000000113254e20;
    pppplVar12[4] = ppplRam0000000113254e28;
    pppplVar12[3] = ppplVar17;
    pppplVar12[6] = ppplVar7;
    pppplVar12[5] = ppplVar6;
    *(undefined4 *)(pppplVar12 + 7) = uVar8;
    puStack_1d0 = auStack_1f0;
    uStack_1c8 = 0x400000000;
    uStack_210 = 0;
    uStack_208 = 0;
    uStack_200 = 0;
    uStack_1f8 = 0;
    puVar18 = *(undefined8 **)(param_5 + 0x48);
    if (puVar18 == (undefined8 *)0x0) {
      uStack_290 = 0;
      uStack_288 = 0x3f000000;
    }
    else {
      uStack_290 = *puVar18;
      uStack_288 = puVar18[1];
    }
    ppplStack_2c8 = (long ***)&ppplStack_218;
    uStack_2b8 = *(undefined4 *)(param_5 + 0x20);
    uStack_2b0 = *(undefined8 *)(param_5 + 0x18);
    uStack_2a8 = uStack_240;
    puStack_298 = &uStack_290;
    pppplVar16 = pppplVar12;
    ppplStack_2c0 = (long ***)pppplVar14;
    ppplStack_218 = (long ***)pppplVar14;
    FUN_1083be5b0(pppplVar12,&ppplStack_2c8,0x113254e20);
    if (((ulong)pppplVar16 & 1) != 0) {
      FUN_108343afc();
      FUN_108344004(auStack_32c,pppplVar16,3,uStack_2b0,3);
      if (puStack_3a8 == (undefined4 *)0x0) {
        pppplVar16 = pppplVar12;
        (*(code *)(*pppplVar12)[7])(pppplVar12);
        pppplVar20 = (long ****)0x0;
      }
      else {
        pppplVar20 = pppplVar14;
        FUN_10834ba44();
        FUN_108387820(ppplStack_2c8,0x10,pppplVar20);
        plVar13 = (long *)*param_10;
        (**(code **)(*plVar13 + 0x38))();
        if (((ulong)plVar13 >> 0x20 & 1) == 0) goto LAB_10834b95c;
        FUN_1083337ec();
        pppplVar16 = (long ****)0x0;
      }
      if (fStack_234 != 1.0) {
        lVar15 = 4;
        uVar23 = 0x10834b6f8;
        ppppuVar22 = (undefined8 ****)&stack0xfffffffffffffff0;
        goto SUB_1081865e0;
      }
      lStack_338 = *(long *)(*(long *)(param_5 + 0x40) + 0x38);
      if (lStack_338 != 0) {
        piVar1 = (int *)(lStack_338 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lVar15 = param_5 + 8;
      FUN_1083896cc(lVar15,auStack_270,&ppplStack_218,pppplVar16,pppplVar14,&lStack_338);
      func_0x000106f47224(&lStack_338);
      if (lVar15 != 0) {
        FUN_108376ad8(auStack_348);
        uVar21 = (ulong)(param_9 & ((int)param_9 >> 0x1f ^ 0xffffffffU));
        fStack_3c8 = 255.0;
        fStack_3c4 = 255.0;
        uStack_3d0 = 0x437f0000437f0000;
        uStack_3b8 = 0;
        uStack_3c0 = 0x3f800000;
        auVar24 = NEON_fmov(0x3fe0000000000000,8);
        dStack_3d8 = auVar24._8_8_;
        dStack_3e0 = auVar24._0_8_;
        puVar5 = puStack_3a8;
        for (; uVar21 != 0; uVar21 = uVar21 - 1) {
          fVar26 = SUB84(param_4,0);
          if (puStack_3a8 != (undefined4 *)0x0) {
            uStack_370 = FUN_108343500(*puVar5);
            uStack_368._0_4_ = param_3;
            uStack_368._4_4_ = fVar26;
            FUN_1083441a4(auStack_32c,&uStack_370);
            *pppplVar20 = (long ***)
                          CONCAT44(uStack_368._4_4_ * uStack_370._4_4_,
                                   (float)uStack_370 * uStack_368._4_4_);
            *(float *)(pppplVar20 + 1) = (float)uStack_368 * uStack_368._4_4_;
            auVar25._0_4_ =
                 (float)(double)(long)((double)((float)uStack_370 * uStack_368._4_4_ *
                                               (float)uStack_3d0) + dStack_3e0);
            auVar25._4_4_ =
                 (float)(double)(long)((double)(uStack_368._4_4_ * uStack_370._4_4_ *
                                               (float)((ulong)uStack_3d0 >> 0x20)) + dStack_3d8);
            auVar25._12_4_ =
                 (float)(double)(long)((double)(uStack_368._4_4_ * fStack_3c4) + dStack_3d8);
            auVar25._8_4_ =
                 (float)(double)(long)((double)((float)uStack_368 * uStack_368._4_4_ * fStack_3c8) +
                                      dStack_3e0);
            auVar24._8_4_ = 0x4effffff;
            auVar24._0_8_ = 0x4effffff4effffff;
            auVar24._12_4_ = 0x4effffff;
            auVar24 = NEON_fminnm(auVar25,auVar24,4);
            param_3 = -2.1474835e+09;
            auVar4._8_4_ = 0xceffffff;
            auVar4._0_8_ = 0xceffffffceffffff;
            auVar4._12_4_ = 0xceffffff;
            auVar24 = NEON_fmaxnm(auVar24,auVar4,4);
            pppplVar20[2] =
                 (long ***)
                 CONCAT26((short)(int)auVar24._12_4_,
                          CONCAT24((short)(int)auVar24._8_4_,
                                   CONCAT22((short)(int)auVar24._4_4_,(short)(int)auVar24._0_4_)));
            *(float *)((long)pppplVar20 + 0xc) = uStack_368._4_4_;
            param_4 = dStack_3e0;
          }
          auVar24 = *param_6;
          uStack_370._4_4_ = -auVar24._4_4_;
          uStack_370._0_4_ = auVar24._0_4_;
          auVar24 = NEON_rev64(auVar24,4);
          auVar24 = NEON_ext(auVar24,auVar24,0xc,1);
          uStack_360 = auVar24._8_8_;
          uStack_368 = auVar24._0_8_;
          uStack_358 = 0;
          uStack_350 = 0xc03f800000;
          FUN_108363df0(&uStack_370);
          FUN_108363f68(&uStack_370,*(undefined8 *)(param_5 + 0x38));
          uStack_398 = uStack_3b8;
          uStack_3a0 = uStack_3c0;
          uStack_388 = uStack_3b8;
          uStack_390 = uStack_3c0;
          uStack_380 = 0x103f800000;
          puVar18 = &uStack_370;
          FUN_10818cfd0(puVar18,&uStack_3a0);
          if (((ulong)puVar18 & 1) == 0) break;
          pppplVar16 = pppplVar12;
          FUN_1083be714(pppplVar12,&uStack_3a0);
          if ((int)pppplVar16 != 0) {
            uVar23 = *(undefined8 *)(param_5 + 0x40);
            iVar11 = (int)&uStack_370;
            FUN_10827a0d8();
            if (iVar11 == 0) {
              param_4 = *param_7;
              dStack_90 = param_7[1];
              param_3 = SUB84(dStack_90,0);
              uStack_98 = CONCAT44((int)((ulong)param_4 >> 0x20),param_3);
              uStack_88 = CONCAT44((int)((ulong)dStack_90 >> 0x20),SUB84(param_4,0));
              dStack_a0 = param_4;
              FUN_1083645e0(&uStack_370,&dStack_a0,&dStack_a0,4);
              FUN_1083772f4(auStack_348);
              FUN_108378060(auStack_348,&dStack_a0,4,1);
              FUN_10839acc8(auStack_348,uVar23,lVar15);
            }
            else {
              dStack_a0 = 0.0;
              uStack_98 = 0;
              FUN_108364f90(&uStack_370,&dStack_a0,param_7,1);
              FUN_108397c28(&dStack_a0,uVar23,lVar15);
            }
          }
          param_6 = param_6 + 1;
          param_7 = param_7 + 2;
          puVar5 = puVar5 + 1;
        }
        FUN_10837ca5c(auStack_348[0]);
      }
    }
LAB_10834b95c:
    FUN_10834ba80();
    FUN_108375e94(auStack_270);
    FUN_10840f740(pppplVar14);
    unaff_x20 = param_7;
  }
  pppplVar16 = &ppplStack_220;
  func_0x000106f47224();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return pppplVar16;
  }
  ___stack_chk_fail();
  FUN_10834ba80();
  FUN_108375e94(auStack_270);
  FUN_10840f740(&pplStack_c0);
  func_0x000106f47224(&ppplStack_220);
  pppplVar14 = pppplVar16;
  __Unwind_Resume();
  lVar15 = 0x18;
  ppdVar9 = &pdStack_400;
  pcStack_3e8 = FUN_10834ba44;
  ppppuVar22 = &pppuStack_3f0;
  param_7 = (double *)0x18;
  uVar23 = 0x1081865cc;
  pppplVar19 = pppplVar14;
  pdStack_400 = unaff_x20;
  ppplStack_3f8 = (long ***)pppplVar16;
  pppuStack_3f0 = (undefined8 ***)&stack0xfffffffffffffff0;
SUB_1081865e0:
  *(double **)((long)ppdVar9 + -0x20) = param_7;
  *(long *****)((long)ppdVar9 + -0x18) = pppplVar19;
  *(undefined8 *****)((long)ppdVar9 + -0x10) = ppppuVar22;
  *(undefined8 *)((long)ppdVar9 + -8) = uVar23;
  ppplVar17 = pppplVar14[1];
  uVar21 = (ulong)(-(int)ppplVar17 & 3);
  if ((ulong)((long)pppplVar14[2] - (long)ppplVar17) < uVar21 + lVar15) {
    func_0x00010840f7d0();
    ppplVar17 = pppplVar14[1];
    uVar21 = (ulong)(-(int)ppplVar17 & 3);
  }
  return (long ****)((long)ppplVar17 + uVar21);
}



/* Entry: 10834ba44; end: 10834ba4f;  */

/* WARNING: Possible PIC construction at 0x0001081865c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001081865cc) */
/* WARNING: Removing unreachable block (ram,0x0001081865dc) */

long FUN_10834ba44(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = (ulong)(-(int)lVar1 & 3);
  if ((ulong)(*(long *)(param_1 + 0x10) - lVar1) < uVar2 + 0x18) {
    func_0x00010840f7d0();
    lVar1 = *(long *)(param_1 + 8);
    uVar2 = (ulong)(-(int)lVar1 & 3);
  }
  return lVar1 + uVar2;
}



/* Entry: 10834ba50; end: 10834ba7f;  */

undefined8 * FUN_10834ba50(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + -0x49);
  (**(code **)*puVar1)(puVar1);
  return puVar1;
}



/* Entry: 10834ba80; end: 10834ba8b;  */

undefined1 * FUN_10834ba80(void)

{
  undefined8 in_stack_00000210;
  byte in_stack_0000021c;
  
  if ((in_stack_0000021c & 1) != 0) {
    _free(in_stack_00000210);
  }
  return &stack0x00000210;
}



/* Entry: 10834ba8c; end: 10834bec3;  */

/* WARNING: Removing unreachable block (ram,0x0001083546a0) */
/* WARNING: Removing unreachable block (ram,0x0001083546b4) */
/* WARNING: Removing unreachable block (ram,0x00010835461c) */
/* WARNING: Removing unreachable block (ram,0x00010835463c) */
/* WARNING: Removing unreachable block (ram,0x00010835465c) */
/* WARNING: Removing unreachable block (ram,0x000108354690) */
/* WARNING: Removing unreachable block (ram,0x0001083547a8) */
/* WARNING: Removing unreachable block (ram,0x00010835459c) */
/* WARNING: Removing unreachable block (ram,0x000108354c78) */
/* WARNING: Removing unreachable block (ram,0x0001083547d0) */
/* WARNING: Removing unreachable block (ram,0x0001083547ec) */
/* WARNING: Removing unreachable block (ram,0x0001083547e4) */
/* WARNING: Removing unreachable block (ram,0x0001083547f0) */
/* WARNING: Removing unreachable block (ram,0x000108354828) */
/* WARNING: Removing unreachable block (ram,0x000108354830) */
/* WARNING: Removing unreachable block (ram,0x000108354888) */
/* WARNING: Removing unreachable block (ram,0x000108354c94) */
/* WARNING: Removing unreachable block (ram,0x000108354cac) */
/* WARNING: Removing unreachable block (ram,0x000108354d00) */
/* WARNING: Removing unreachable block (ram,0x000108354d08) */
/* WARNING: Removing unreachable block (ram,0x000108354d84) */

void FUN_10834ba8c(undefined8 param_1,undefined8 param_2,float param_3,ulong param_4,long param_5,
                  long *param_6,undefined8 param_7)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 *puVar14;
  ushort *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  code *pcVar18;
  undefined1 uVar19;
  uint *puVar20;
  long *plVar21;
  long *plVar22;
  ulong uVar23;
  undefined8 *puVar24;
  undefined4 uVar25;
  long *plVar26;
  ulong uVar27;
  long *plVar28;
  uint uVar29;
  float fVar30;
  undefined1 (*pauVar31) [16];
  ulong extraout_x8;
  ulong extraout_x8_00;
  undefined8 *puVar32;
  undefined8 *puVar33;
  int iVar34;
  long lVar35;
  ushort *puVar36;
  long lVar37;
  ushort *puVar38;
  int iVar39;
  ushort uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined8 uVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined8 uVar48;
  uint *puStack_1e10;
  undefined4 uStack_1d94;
  undefined8 uStack_1d70;
  undefined8 uStack_1d68;
  ulong uStack_1d60;
  long lStack_1d58;
  long lStack_1d50;
  long lStack_1d10;
  undefined8 auStack_1d08 [5];
  long lStack_1ce0;
  long lStack_1cd8;
  ulong uStack_1cd0;
  long lStack_1cc8;
  long lStack_1cc0;
  undefined4 uStack_1cb0;
  undefined4 uStack_1cac;
  undefined4 uStack_1ca8;
  undefined4 uStack_1ca4;
  undefined8 uStack_1ca0;
  undefined8 uStack_1c98;
  undefined8 auStack_1c10 [24];
  float fStack_1b50;
  undefined4 uStack_1b4c;
  undefined4 uStack_1b48;
  undefined4 uStack_1b44;
  ulong uStack_1b40;
  long lStack_1b38;
  long lStack_1b30;
  float fStack_1b10;
  uint uStack_1b08;
  undefined1 auStack_1aa8 [512];
  undefined1 *puStack_18a8;
  undefined8 uStack_18a0;
  ushort auStack_1898 [64];
  ushort *puStack_1818;
  undefined8 uStack_1810;
  undefined1 auStack_1808 [512];
  undefined1 *puStack_1608;
  undefined8 uStack_1600;
  undefined1 auStack_15f8 [512];
  undefined1 *puStack_13f8;
  undefined8 uStack_13f0;
  long lStack_13e8;
  ulong uStack_1320;
  undefined8 uStack_1310;
  undefined8 uStack_1308;
  undefined8 uStack_1300;
  undefined8 uStack_12f8;
  long lStack_12e0;
  uint uStack_12d8;
  uint uStack_12d4;
  int iStack_12d0;
  int iStack_12cc;
  undefined8 uStack_12c8;
  undefined8 uStack_12c0;
  undefined8 uStack_12b8;
  undefined8 uStack_12b0;
  long lStack_12a0;
  undefined8 uStack_1298;
  undefined8 uStack_1290;
  undefined8 uStack_1288;
  undefined8 uStack_1280;
  undefined8 uStack_1278;
  undefined8 uStack_1270;
  uint auStack_1268 [4];
  byte bStack_1258;
  undefined8 uStack_1248;
  uint uStack_1240;
  uint uStack_123c;
  int iStack_1238;
  int iStack_1234;
  undefined4 uStack_1230;
  char cStack_122c;
  undefined8 uStack_1228;
  undefined8 uStack_1220;
  long *plStack_da8;
  long lStack_da0;
  undefined1 auStack_d98 [3336];
  long alStack_90 [4];
  long lStack_70;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000108349610(auStack_d98,0xd04);
  uVar45 = *(undefined8 *)(param_5 + 0x38);
  lStack_da0 = *(long *)(*(long *)(param_5 + 0x40) + 0x38);
  if (lStack_da0 != 0) {
    piVar1 = (int *)(lStack_da0 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar33 = *(undefined8 **)(param_5 + 0x48);
  if (puVar33 == (undefined8 *)0x0) {
    uStack_1228 = 0;
    uStack_1220 = 0x3f000000;
  }
  else {
    uStack_1228 = *puVar33;
    uStack_1220 = puVar33[1];
  }
  puVar20 = (uint *)(param_5 + 8);
  plVar26 = alStack_90;
  uVar27 = 0;
  FUN_108335c48(puVar20,uVar45,param_7,plVar26,0,&lStack_da0,&uStack_1228);
  func_0x000106f47224(&lStack_da0);
  FUN_1083876e8(&uStack_1228);
  pauVar31 = *(undefined1 (**) [16])(param_5 + 0x40);
  if (pauVar31[3][0] == '\x01') {
    if ((pauVar31[3][2] & 1) != 0) goto LAB_10834bca8;
    lVar37 = param_6[2];
    param_4 = 0xceffff00ceffff00;
    uStack_1320 = 0xceffff00ceffff00;
    for (lVar35 = 0; lVar35 != lVar37; lVar35 = lVar35 + 1) {
      uVar45 = *(undefined8 *)(param_6[1] + lVar35 * 8);
      func_0x00010834bee8(uVar45,uVar45);
      if ((extraout_x8 & 1) != 0) {
        FUN_1083539ac(&uStack_1248,*(undefined8 *)(*param_6 + lVar35 * 8));
        puVar20 = &uStack_1240;
        FUN_1083903d0(&lStack_12a0);
        param_4 = uStack_1320;
        if ((bStack_1258 & 1) == 0) {
          if (cStack_122c == '\x03') {
            uStack_12b0 = 0;
            uStack_12c8 = 0;
            iStack_12d0 = 0;
            iStack_12cc = 0;
            uStack_12b8 = 0;
            uStack_12c0 = 0;
            uStack_12d8 = 0;
            uStack_12d4 = 0;
            lStack_12e0 = 0;
            FUN_10835c7c4(&uStack_1300,CONCAT44(iStack_1234 - uStack_123c,iStack_1238 - uStack_1240)
                         );
            FUN_10814bdf0(&lStack_12e0,&uStack_1300,uStack_1248,uStack_1230);
            FUN_10810a400(&uStack_1300);
            if (lStack_12e0 != 0) {
              *(undefined1 *)(lStack_12e0 + 0x59) = 2;
            }
            puVar20 = (uint *)(ulong)uStack_1240;
            plVar26 = (long *)(ulong)uStack_123c;
            func_0x00010834bf08();
            FUN_108330548(&lStack_12e0);
          }
          else {
            do {
              puVar20 = auStack_1268;
              (**(code **)(*plStack_da8 + 0x38))(plStack_da8);
              FUN_108390454(&lStack_12a0);
            } while ((bStack_1258 & 1) == 0);
          }
        }
      }
    }
  }
  else {
    pauVar31 = (undefined1 (*) [16])(pauVar31[1] + 8);
LAB_10834bca8:
    uVar45 = *(undefined8 *)*pauVar31;
    uStack_12f8 = *(undefined8 *)(*pauVar31 + 8);
    auVar7 = *pauVar31;
    auVar6 = *pauVar31;
    lVar37 = param_6[2];
    uStack_1320 = 0xceffff00ceffff00;
    uStack_1300 = uVar45;
    for (lVar35 = 0; lVar37 != lVar35; lVar35 = lVar35 + 1) {
      uVar48 = *(undefined8 *)(param_6[1] + lVar35 * 8);
      param_4 = uStack_1320;
      func_0x00010834bee8(uVar48,uVar48);
      if ((extraout_x8_00 & 1) != 0) {
        FUN_1083539ac(&lStack_12e0,*(undefined8 *)(*param_6 + lVar35 * 8));
        uStack_1310 = 0;
        uStack_1308 = 0;
        auVar46._4_4_ = uStack_12d4;
        auVar46._0_4_ = uStack_12d8;
        auVar46._8_4_ = iStack_12d0;
        auVar46._12_4_ = iStack_12cc;
        param_3 = (float)uVar45;
        auVar47 = NEON_ext(auVar6,auVar46,8,1);
        auVar46 = NEON_ext(auVar46,auVar7,8,1);
        uVar40 = NEON_umaxv(CONCAT26(-(ushort)(auVar47._12_4_ < auVar46._12_4_),
                                     CONCAT24(-(ushort)(auVar47._8_4_ < auVar46._8_4_),
                                              CONCAT22(-(ushort)(auVar47._4_4_ < auVar46._4_4_),
                                                       -(ushort)(auVar47._0_4_ < auVar46._0_4_)))),2
                           );
        puVar20 = &uStack_12d8;
        if ((uVar40 & 1) != 0) {
          uVar23 = 0;
          puVar20 = (uint *)&uStack_1300;
          FUN_10838ea90();
          if ((uVar23 & 1) == 0) goto LAB_10834bcfc;
          puVar20 = (uint *)&uStack_1310;
        }
        if (uStack_12c8._4_1_ == '\x03') {
          uStack_1270 = 0;
          uStack_1288 = 0;
          uStack_1290 = 0;
          uStack_1278 = 0;
          uStack_1280 = 0;
          uStack_1298 = 0;
          lStack_12a0 = 0;
          FUN_10835c7c4(&uStack_1248,CONCAT44(iStack_12cc - uStack_12d4,iStack_12d0 - uStack_12d8));
          FUN_10814bdf0(&lStack_12a0,&uStack_1248,lStack_12e0,uStack_12c8 & 0xffffffff);
          FUN_10810a400(&uStack_1248);
          if (lStack_12a0 != 0) {
            *(undefined1 *)(lStack_12a0 + 0x59) = 2;
          }
          puVar20 = (uint *)(ulong)uStack_12d8;
          plVar26 = (long *)(ulong)uStack_12d4;
          func_0x00010834bf08();
          FUN_108330548(&lStack_12a0);
        }
        else {
          (**(code **)(*plStack_da8 + 0x38))(plStack_da8);
        }
      }
LAB_10834bcfc:
    }
  }
  func_0x00010834950c(&uStack_1228);
  plVar21 = alStack_90;
  FUN_10840f740();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  FUN_108330548(&lStack_12e0);
  func_0x00010834950c(&uStack_1228);
  FUN_10840f740(alStack_90);
  __Unwind_Resume();
  if ((*(byte *)(plVar21[8] + 0x31) & 1) != 0) {
    return;
  }
  plVar28 = (long *)plVar21[7];
  lStack_13e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_13f8 = auStack_15f8;
  uStack_13f0 = 0x8000000000;
  puStack_1608 = auStack_1808;
  uStack_1600 = 0x8000000000;
  puStack_1818 = auStack_1898;
  uStack_1810 = 0x8000000000;
  puStack_18a8 = auStack_1aa8;
  uStack_18a0 = 0x8000000000;
  plVar22 = plVar26;
  FUN_10831775c();
  iVar39 = (int)plVar22;
  if ((int)(uint)uStack_13f0 < iVar39) {
    if ((uint)uStack_13f0 == 0) {
      FUN_108354fac(0x3ff0000000000000,&puStack_13f8,plVar22);
    }
    iVar39 = iVar39 - (uint)uStack_13f0;
    FUN_108354fac(0x3ff8000000000000,&puStack_13f8,iVar39);
    iVar39 = (uint)uStack_13f0 + iVar39;
LAB_1083543f4:
    uStack_13f0 = CONCAT44(uStack_13f0._4_4_,iVar39);
  }
  else if (iVar39 < (int)(uint)uStack_13f0) {
    if (((uint)uStack_13f0 & ((int)(uint)uStack_13f0 >> 0x1f ^ 0xffffffffU)) <
        (uint)uStack_13f0 - iVar39) goto LAB_108354e24;
    goto LAB_1083543f4;
  }
  func_0x0001083190bc(&puStack_1608,plVar22);
  puVar17 = puStack_13f8;
  puVar16 = puStack_1608;
  FUN_108318f38(&puStack_1818,plVar22);
  func_0x0001083190bc(&puStack_18a8,plVar22);
  puVar15 = puStack_1818;
  puVar14 = puStack_18a8;
  if ((puVar20[8] != 4) ||
     (uVar23 = uVar27, FUN_1083762bc(), puStack_1e10 = puVar20, (uVar23 & 1) == 0)) {
    puStack_1e10 = puVar20 + 4;
  }
  lStack_1ce0 = *plVar28;
  lStack_1cd8 = plVar28[1];
  uStack_1cd0 = plVar28[2];
  lStack_1cc8 = plVar28[3];
  lStack_1cc0 = plVar28[4];
  FUN_108363df0((int)plVar26[5],*(undefined4 *)((long)plVar26 + 0x2c),&lStack_1ce0);
  puVar33 = (undefined8 *)*plVar26;
  puVar32 = puVar33 + plVar26[1] * 0xc;
  for (; uVar19 = SBORROW8((long)puVar33,(long)puVar32), puVar33 != puVar32; puVar33 = puVar33 + 0xc
      ) {
    puVar38 = (ushort *)*puVar33;
    lVar35 = puVar33[2];
    uVar23 = uVar27;
    FUN_1083a298c(uVar27,puVar33 + 9,&lStack_1ce0);
    if ((int)uVar23 != 0) {
      FUN_1083a26e0(auStack_1c10,puVar33 + 9,uVar27,puStack_1e10,puVar20[9]);
      FUN_1083a2c54(auStack_1d08,auStack_1c10);
      uVar45 = auStack_1d08[0];
      func_0x0001083550d0();
      iVar39 = 0;
      while (lVar35 != 0) {
        func_0x00010835513c();
        if (!(bool)uVar19) {
          uVar25 = 8;
          uVar48 = uVar45;
          FUN_1083a1488(uVar45,8,(ulong)*puVar38 << 2);
          uVar29 = (uint)((ulong)uVar48 >> 0x34) & 3;
          uVar19 = SBORROW4(uVar29,2);
          if (uVar29 == 2) {
            func_0x00010835508c();
            fStack_1b50 = (float)uVar48;
            uStack_1b4c = (undefined4)((ulong)uVar48 >> 0x20);
            puVar15[iVar39] = (ushort)uVar48;
            *(ulong *)(puVar14 + (long)iVar39 * 8) = CONCAT44(uVar25,uStack_1b4c);
            iVar39 = iVar39 + 1;
            uStack_1b48 = uVar25;
          }
          else {
            uVar19 = SBORROW4(uVar29,1);
            if (uVar29 == 1) {
              func_0x000108355064();
            }
          }
        }
        func_0x0001083550c0();
      }
      func_0x0001083550d8();
      puVar38 = (ushort *)0x0;
      if (iVar39 != 0) {
        puVar38 = puVar15;
      }
      FUN_108375f34(&fStack_1b50,uVar27);
      uVar29 = *(byte *)((long)puVar33 + 0x5d) - 1;
      uVar19 = SBORROW4(uVar29,2);
      uStack_1b08 = uStack_1b08 & 0xfffffffe;
      if (uVar29 < 2) {
        uStack_1b08 = uStack_1b08 + 1;
      }
      if (CONCAT44(uStack_1b44,uStack_1b48) == 0 && CONCAT44(uStack_1b4c,fStack_1b50) == 0) {
        uVar19 = NAN(fStack_1b10);
      }
      FUN_108375e94(&fStack_1b50);
      uVar45 = auStack_1d08[0];
      if (iVar39 == 0) {
        puVar38 = (ushort *)0x0;
        lVar35 = 0;
      }
      else {
        func_0x0001083550d0();
        iVar34 = 0;
        while (iVar39 != 0) {
          func_0x00010835513c();
          if (!(bool)uVar19) {
            uVar25 = 10;
            uVar48 = uVar45;
            FUN_1083a1488(uVar45,10,(ulong)*puVar38 << 2);
            uVar29 = (uint)((ulong)uVar48 >> 0x36) & 3;
            uVar19 = SBORROW4(uVar29,2);
            if (uVar29 == 2) {
              func_0x00010835508c();
              fStack_1b50 = (float)uVar48;
              uStack_1b4c = (undefined4)((ulong)uVar48 >> 0x20);
              puVar15[iVar34] = (ushort)uVar48;
              *(ulong *)(puVar14 + (long)iVar34 * 8) = CONCAT44(uVar25,uStack_1b4c);
              iVar34 = iVar34 + 1;
              uStack_1b48 = uVar25;
            }
            else {
              uVar19 = SBORROW4(uVar29,1);
              if (uVar29 == 1) {
                func_0x000108355064();
              }
            }
          }
          func_0x0001083550c0();
        }
        func_0x0001083550d8();
        uVar19 = 0;
        puVar38 = (ushort *)0x0;
        if (iVar34 != 0) {
          puVar38 = puVar15;
        }
        lVar35 = (long)iVar34;
      }
      FUN_1083145d8(auStack_1d08);
      func_0x0001083a261c(auStack_1c10);
    }
    if (lVar35 != 0) {
      uVar23 = 0;
      FUN_10828e338();
      if ((uVar23 & 1) == 0) {
        FUN_1083a2b0c(auStack_1c10,puVar33 + 9,uVar27,puStack_1e10,puVar20[9],&lStack_1ce0);
        FUN_1083a2c54(&uStack_1d70,auStack_1c10);
        lVar37 = uStack_1d70;
        uVar45 = *(undefined8 *)(uStack_1d70 + 0x5c);
        param_3 = (float)lStack_1ce0;
        uStack_1b48 = (undefined4)lStack_1cd8;
        uStack_1b44 = (undefined4)((ulong)lStack_1cd8 >> 0x20);
        uStack_1b4c = (undefined4)((ulong)lStack_1ce0 >> 0x20);
        lStack_1b38 = lStack_1cc8;
        uStack_1b40 = uStack_1cd0;
        lStack_1b30 = lStack_1cc0;
        param_4 = uStack_1cd0;
        fStack_1b50 = param_3;
        FUN_108363ef4(&fStack_1b50);
        func_0x0001083550d0();
        iVar34 = 0;
        iVar39 = 0;
        while (lVar35 != 0) {
          func_0x000108355128();
          if (!(bool)uVar19) {
            uVar48 = FUN_1081790bc(&fStack_1b50);
            uVar23 = (ulong)*puVar38;
            uVar25 = (int)uVar45;
            FUN_108318d84();
            func_0x0001083550f8();
            uVar29 = (uint)(uVar23 >> 0x2e) & 3;
            uVar19 = SBORROW4(uVar29,2);
            if (uVar29 == 2) {
              func_0x00010835508c();
              uStack_1cb0 = (undefined4)uVar23;
              uStack_1cac = (undefined4)(uVar23 >> 0x20);
              puVar15[iVar34] = (ushort)uVar23;
              *(ulong *)(puVar14 + (long)iVar34 * 8) = CONCAT44(uVar25,uStack_1cac);
              iVar34 = iVar34 + 1;
              uStack_1ca8 = uVar25;
            }
            else {
              uVar19 = SBORROW4(uVar29,1);
              if (uVar29 == 1) {
                *(undefined8 *)(puVar17 + (long)iVar39 * 8) =
                     *(undefined8 *)(*(long *)(lVar37 + 0x130) + (uVar23 >> 0x14 & 0xfffff) * 8);
                *(ulong *)(puVar16 + (long)iVar39 * 8) =
                     CONCAT44((int)(float)((ulong)uVar48 >> 0x20),(int)(float)uVar48);
                iVar39 = iVar39 + 1;
              }
            }
          }
          func_0x0001083550c0();
        }
        func_0x0001083550d8();
        puVar2 = (undefined1 *)0x0;
        if (iVar39 != 0) {
          puVar2 = puVar16;
        }
        puVar3 = (undefined1 *)0x0;
        if (iVar39 != 0) {
          puVar3 = puVar17;
        }
        uStack_1b40 = (ulong)iVar39;
        fStack_1b50 = SUB84(puVar3,0);
        uStack_1b4c = (undefined4)((ulong)puVar3 >> 0x20);
        uStack_1b48 = SUB84(puVar2,0);
        uStack_1b44 = (undefined4)((ulong)puVar2 >> 0x20);
        (**(code **)(*plVar21 + 0x10))(plVar21,&fStack_1b50,uVar27);
        FUN_1083145d8(&uStack_1d70);
        func_0x0001083a261c(auStack_1c10);
        if (iVar34 == 0) goto LAB_108354db4;
        lVar35 = (long)iVar34;
        puVar38 = puVar15;
      }
      FUN_1083a2b0c(&fStack_1b50,puVar33 + 9,uVar27,puStack_1e10,puVar20[9],0x113254e20);
      FUN_1083a2c80(auStack_1c10,&fStack_1b50);
      puVar24 = auStack_1c10;
      puVar36 = puVar38;
      FUN_1083a2cd4(puVar24,puVar38,lVar35);
      fVar30 = -3.4028235e+38;
      for (; puVar36 != (ushort *)0x0; puVar36 = (ushort *)((long)puVar36 + -1)) {
        uVar25 = (undefined4)param_4;
        if ((*(short *)*puVar24 != 0) && (((short *)*puVar24)[1] != 0)) {
          uStack_1d70 = FUN_10835060c();
          uStack_1d68 = CONCAT44(uVar25,param_3);
          func_0x0001081836ec(&uStack_1d70);
          FUN_1082fdf34(&lStack_1ce0,&uStack_1cb0,&uStack_1d70);
          func_0x000108355150(CONCAT44(uStack_1ca4,uStack_1ca8),CONCAT44(uStack_1cac,uStack_1cb0));
          fVar41 = (float)func_0x0001083550e8();
          fVar11 = (float)uStack_1d68;
          fVar8 = (float)uStack_1d70;
          func_0x000108355150(uStack_1ca0,CONCAT44(uStack_1ca4,uStack_1ca8));
          fVar42 = (float)func_0x0001083550e8();
          fVar13 = uStack_1d68._4_4_;
          fVar10 = uStack_1d70._4_4_;
          func_0x000108355150(uStack_1c98,uStack_1ca0);
          fVar43 = (float)func_0x0001083550e8();
          fVar12 = (float)uStack_1d68;
          fVar9 = (float)uStack_1d70;
          func_0x000108355150(CONCAT44(uStack_1cac,uStack_1cb0),uStack_1c98);
          fVar44 = (float)func_0x0001083550e8();
          fVar41 = fVar41 / (fVar11 - fVar8);
          if (fVar41 <= fVar30) {
            fVar41 = fVar30;
          }
          fVar42 = fVar42 / (fVar13 - fVar10);
          if (fVar42 <= fVar41) {
            fVar42 = fVar41;
          }
          fVar43 = fVar43 / (fVar12 - fVar9);
          if (fVar43 <= fVar42) {
            fVar43 = fVar42;
          }
          param_4 = (ulong)(uint)uStack_1d70._4_4_;
          param_3 = uStack_1d68._4_4_ - uStack_1d70._4_4_;
          fVar30 = fVar44 / param_3;
          if (fVar44 / param_3 <= fVar43) {
            fVar30 = fVar43;
          }
        }
        puVar24 = puVar24 + 1;
      }
      if (0.0 < fVar30) {
        fVar42 = fVar30 * *(float *)(puVar33 + 10);
        uVar19 = NAN(fVar42);
        fVar41 = 256.0 / *(float *)(puVar33 + 10);
        if (fVar42 <= 256.0) {
          fVar41 = fVar30;
        }
        func_0x00010815f6c0(auStack_1d08,fVar41,fVar41);
        FUN_1083a2b0c(&uStack_1cb0,puVar33 + 9,uVar27,puStack_1e10,puVar20[9],auStack_1d08);
        FUN_1083a2c54(&lStack_1d10,&uStack_1cb0);
        uVar45 = *(undefined8 *)(lStack_1d10 + 0x5c);
        param_3 = (float)lStack_1ce0;
        uStack_1d68 = lStack_1cd8;
        uStack_1d70 = lStack_1ce0;
        lStack_1d58 = lStack_1cc8;
        uStack_1d60 = uStack_1cd0;
        lStack_1d50 = lStack_1cc0;
        param_4 = uStack_1cd0;
        FUN_108363ef4(&uStack_1d70);
        func_0x0001083550d0();
        iVar39 = 0;
        while (lVar35 != 0) {
          func_0x000108355128();
          if (!(bool)uVar19) {
            FUN_1081790bc(&uStack_1d70);
            uVar23 = (ulong)*puVar38;
            uVar25 = (int)uVar45;
            FUN_108318d84();
            func_0x0001083550f8();
            uVar29 = (uint)(uVar23 >> 0x2e) & 3;
            uVar19 = SBORROW4(uVar29,2);
            if (uVar29 == 2) {
              func_0x00010835508c();
              uStack_1d94 = (undefined4)(uVar23 >> 0x20);
              puVar15[iVar39] = (ushort)uVar23;
              *(ulong *)(puVar14 + (long)iVar39 * 8) = CONCAT44(uVar25,uStack_1d94);
              iVar39 = iVar39 + 1;
            }
            else {
              uVar19 = SBORROW4(uVar29,1);
              if (uVar29 == 1) {
                func_0x000108355064();
              }
            }
          }
          func_0x0001083550c0();
        }
        func_0x0001083550d8();
        FUN_1083145d8(&lStack_1d10);
        func_0x0001083a261c(&uStack_1cb0);
      }
      FUN_1083a2cb4(auStack_1c10);
      func_0x0001083a261c(&fStack_1b50);
    }
LAB_108354db4:
  }
  func_0x0001083550e0(auStack_1aa8);
  func_0x000108355104();
  func_0x0001083550e0(auStack_1808);
  func_0x000108355110();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_13e8) {
    return;
  }
  ___stack_chk_fail();
LAB_108354e24:
                    /* WARNING: Does not return */
  pcVar18 = (code *)SoftwareBreakpoint(1,0x108354e28);
  (*pcVar18)();
}



/* Entry: 10834bec4; end: 10834bf13;  */

/* WARNING: Removing unreachable block (ram,0x0001083546a0) */
/* WARNING: Removing unreachable block (ram,0x0001083546b4) */
/* WARNING: Removing unreachable block (ram,0x00010835461c) */
/* WARNING: Removing unreachable block (ram,0x00010835463c) */
/* WARNING: Removing unreachable block (ram,0x00010835465c) */
/* WARNING: Removing unreachable block (ram,0x000108354690) */
/* WARNING: Removing unreachable block (ram,0x0001083547a8) */
/* WARNING: Removing unreachable block (ram,0x00010835459c) */
/* WARNING: Removing unreachable block (ram,0x000108354c78) */
/* WARNING: Removing unreachable block (ram,0x0001083547d0) */
/* WARNING: Removing unreachable block (ram,0x0001083547ec) */
/* WARNING: Removing unreachable block (ram,0x0001083547e4) */
/* WARNING: Removing unreachable block (ram,0x0001083547f0) */
/* WARNING: Removing unreachable block (ram,0x000108354828) */
/* WARNING: Removing unreachable block (ram,0x000108354830) */
/* WARNING: Removing unreachable block (ram,0x000108354888) */
/* WARNING: Removing unreachable block (ram,0x000108354c94) */
/* WARNING: Removing unreachable block (ram,0x000108354cac) */
/* WARNING: Removing unreachable block (ram,0x000108354d00) */
/* WARNING: Removing unreachable block (ram,0x000108354d08) */
/* WARNING: Removing unreachable block (ram,0x000108354d84) */

void FUN_10834bec4(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,long *param_5,
                  undefined8 param_6,long param_7,long *param_8,ulong param_9)

{
  float *pfVar1;
  undefined1 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 *puVar8;
  ushort *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  code *pcVar12;
  undefined1 uVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined4 uVar19;
  ulong *puVar20;
  uint uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  int iVar24;
  ushort *puVar25;
  undefined1 *puVar26;
  ushort *puVar27;
  int iVar28;
  long lVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  ulong uVar33;
  ulong uVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  ulong uVar38;
  ulong uVar39;
  undefined4 uVar40;
  float fVar41;
  float fVar42;
  undefined4 uVar43;
  float fVar44;
  float fVar45;
  long lStack_ae0;
  undefined4 uStack_a64;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  ulong uStack_a30;
  ulong uStack_a28;
  ulong uStack_a20;
  long lStack_9e0;
  undefined8 auStack_9d8 [5];
  ulong uStack_9b0;
  ulong uStack_9a8;
  ulong uStack_9a0;
  ulong uStack_998;
  ulong uStack_990;
  undefined4 uStack_980;
  undefined4 uStack_97c;
  undefined4 uStack_978;
  undefined4 uStack_974;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 auStack_8e0 [24];
  undefined4 uStack_820;
  undefined4 uStack_81c;
  undefined4 uStack_818;
  undefined4 uStack_814;
  ulong uStack_810;
  ulong uStack_808;
  ulong uStack_800;
  float fStack_7e0;
  uint uStack_7d8;
  undefined1 auStack_778 [512];
  undefined1 *puStack_578;
  undefined8 uStack_570;
  ushort auStack_568 [64];
  ushort *puStack_4e8;
  undefined8 uStack_4e0;
  undefined1 auStack_4d8 [512];
  undefined1 *puStack_2d8;
  undefined8 uStack_2d0;
  undefined1 auStack_2c8 [512];
  undefined1 *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  
  if ((*(byte *)(param_5[8] + 0x31) & 1) != 0) {
    return;
  }
  puVar20 = (ulong *)param_5[7];
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_c8 = auStack_2c8;
  uStack_c0 = 0x8000000000;
  puStack_2d8 = auStack_4d8;
  uStack_2d0 = 0x8000000000;
  puStack_4e8 = auStack_568;
  uStack_4e0 = 0x8000000000;
  puStack_578 = auStack_778;
  uStack_570 = 0x8000000000;
  plVar14 = param_8;
  FUN_10831775c();
  iVar28 = (int)plVar14;
  if ((int)(uint)uStack_c0 < iVar28) {
    if ((uint)uStack_c0 == 0) {
      FUN_108354fac(0x3ff0000000000000,&puStack_c8,plVar14);
    }
    iVar28 = iVar28 - (uint)uStack_c0;
    FUN_108354fac(0x3ff8000000000000,&puStack_c8,iVar28);
    iVar28 = (uint)uStack_c0 + iVar28;
LAB_1083543f4:
    uStack_c0 = CONCAT44(uStack_c0._4_4_,iVar28);
  }
  else if (iVar28 < (int)(uint)uStack_c0) {
    if (((uint)uStack_c0 & ((int)(uint)uStack_c0 >> 0x1f ^ 0xffffffffU)) < (uint)uStack_c0 - iVar28)
    goto LAB_108354e24;
    goto LAB_1083543f4;
  }
  func_0x0001083190bc(&puStack_2d8,plVar14);
  puVar11 = puStack_c8;
  puVar10 = puStack_2d8;
  FUN_108318f38(&puStack_4e8,plVar14);
  func_0x0001083190bc(&puStack_578,plVar14);
  puVar9 = puStack_4e8;
  puVar8 = puStack_578;
  if ((*(int *)(param_7 + 0x20) != 4) ||
     (uVar33 = param_9, FUN_1083762bc(), lStack_ae0 = param_7, (uVar33 & 1) == 0)) {
    lStack_ae0 = param_7 + 0x10;
  }
  fVar45 = *(float *)(param_8 + 5);
  fVar44 = *(float *)((long)param_8 + 0x2c);
  uVar38 = (ulong)(uint)fVar44;
  uStack_9a8 = puVar20[1];
  uStack_9b0 = *puVar20;
  uStack_998 = puVar20[3];
  uStack_9a0 = puVar20[2];
  uStack_990 = puVar20[4];
  FUN_108363df0(fVar45,&uStack_9b0);
  puVar23 = (undefined8 *)*param_8;
  puVar22 = puVar23 + param_8[1] * 0xc;
  uVar33 = 1;
  for (; uVar13 = SBORROW8((long)puVar23,(long)puVar22), puVar23 != puVar22; puVar23 = puVar23 + 0xc
      ) {
    puVar27 = (ushort *)*puVar23;
    puVar26 = (undefined1 *)puVar23[1];
    lVar29 = puVar23[2];
    uVar15 = param_9;
    FUN_1083a298c(param_9,puVar23 + 9,&uStack_9b0);
    if ((int)uVar15 != 0) {
      FUN_1083a26e0(auStack_8e0,puVar23 + 9,param_9,lStack_ae0,*(undefined4 *)(param_7 + 0x24));
      FUN_1083a2c54(auStack_9d8,auStack_8e0);
      uVar30 = auStack_9d8[0];
      func_0x0001083550d0();
      iVar28 = 0;
      while (lVar29 != 0) {
        func_0x00010835513c();
        if (!(bool)uVar13) {
          uVar19 = 8;
          uVar16 = uVar30;
          FUN_1083a1488(uVar30,8,(ulong)*puVar27 << 2);
          uVar21 = (uint)((ulong)uVar16 >> 0x34) & 3;
          uVar13 = SBORROW4(uVar21,2);
          if (uVar21 == 2) {
            func_0x00010835508c();
            uStack_820 = (undefined4)uVar16;
            uStack_81c = (undefined4)((ulong)uVar16 >> 0x20);
            puVar9[iVar28] = (ushort)uVar16;
            *(ulong *)(puVar8 + (long)iVar28 * 8) = CONCAT44(uVar19,uStack_81c);
            iVar28 = iVar28 + 1;
            uStack_818 = uVar19;
          }
          else {
            uVar13 = SBORROW4(uVar21,1);
            if (uVar21 == 1) {
              func_0x000108355064();
            }
          }
        }
        func_0x0001083550c0();
      }
      func_0x0001083550d8();
      puVar27 = (ushort *)0x0;
      if (iVar28 != 0) {
        puVar27 = puVar9;
      }
      FUN_108375f34(&uStack_820,param_9);
      uVar21 = *(byte *)((long)puVar23 + 0x5d) - 1;
      uVar13 = SBORROW4(uVar21,2);
      uStack_7d8 = uStack_7d8 & 0xfffffffe;
      if (uVar21 < 2) {
        uStack_7d8 = uStack_7d8 + 1;
      }
      if (CONCAT44(uStack_814,uStack_818) == 0 && CONCAT44(uStack_81c,uStack_820) == 0) {
        uVar33 = (ulong)(uint)fStack_7e0;
        uVar13 = NAN(fStack_7e0);
      }
      FUN_108375e94(&uStack_820);
      uVar30 = auStack_9d8[0];
      if (iVar28 == 0) {
        puVar27 = (ushort *)0x0;
        puVar26 = (undefined1 *)0x0;
        lVar29 = 0;
      }
      else {
        func_0x0001083550d0();
        iVar24 = 0;
        while (iVar28 != 0) {
          func_0x00010835513c();
          if (!(bool)uVar13) {
            uVar19 = 10;
            uVar16 = uVar30;
            FUN_1083a1488(uVar30,10,(ulong)*puVar27 << 2);
            uVar21 = (uint)((ulong)uVar16 >> 0x36) & 3;
            uVar13 = SBORROW4(uVar21,2);
            if (uVar21 == 2) {
              func_0x00010835508c();
              uStack_820 = (undefined4)uVar16;
              uStack_81c = (undefined4)((ulong)uVar16 >> 0x20);
              puVar9[iVar24] = (ushort)uVar16;
              *(ulong *)(puVar8 + (long)iVar24 * 8) = CONCAT44(uVar19,uStack_81c);
              iVar24 = iVar24 + 1;
              uStack_818 = uVar19;
            }
            else {
              uVar13 = SBORROW4(uVar21,1);
              if (uVar21 == 1) {
                func_0x000108355064();
              }
            }
          }
          func_0x0001083550c0();
        }
        func_0x0001083550d8();
        uVar13 = 0;
        puVar26 = (undefined1 *)0x0;
        if (iVar24 != 0) {
          puVar26 = puVar8;
        }
        puVar27 = (ushort *)0x0;
        if (iVar24 != 0) {
          puVar27 = puVar9;
        }
        lVar29 = (long)iVar24;
      }
      FUN_1083145d8(auStack_9d8);
      func_0x0001083a261c(auStack_8e0);
    }
    if (lVar29 != 0) {
      uVar15 = 0;
      FUN_10828e338();
      if ((uVar15 & 1) == 0) {
        FUN_1083a2b0c(auStack_8e0,puVar23 + 9,param_9,lStack_ae0,*(undefined4 *)(param_7 + 0x24),
                      &uStack_9b0);
        FUN_1083a2c54(&uStack_a40,auStack_8e0);
        uVar15 = uStack_a40;
        uVar30 = *(undefined8 *)(uStack_a40 + 0x5c);
        uVar33 = (ulong)*(uint *)(uStack_a40 + 0x4c);
        uVar38 = (ulong)*(uint *)(uStack_a40 + 0x50);
        uStack_818 = (undefined4)uStack_9a8;
        uStack_814 = (undefined4)(uStack_9a8 >> 0x20);
        uStack_820 = (undefined4)uStack_9b0;
        uStack_81c = (undefined4)(uStack_9b0 >> 0x20);
        uStack_808 = uStack_998;
        uStack_810 = uStack_9a0;
        uStack_800 = uStack_990;
        param_3 = uStack_9b0;
        param_4 = uStack_9a0;
        FUN_108363ef4(&uStack_820);
        func_0x0001083550d0();
        iVar24 = 0;
        iVar28 = 0;
        while (lVar29 != 0) {
          func_0x000108355128();
          uVar34 = uVar33;
          uVar39 = uVar38;
          if (!(bool)uVar13) {
            FUN_1081790bc(&uStack_820);
            uVar17 = (ulong)*puVar27;
            uVar34 = uVar33;
            uVar39 = uVar38;
            uVar19 = (int)uVar30;
            FUN_108318d84();
            func_0x0001083550f8();
            uVar21 = (uint)(uVar17 >> 0x2e) & 3;
            uVar13 = SBORROW4(uVar21,2);
            if (uVar21 == 2) {
              func_0x00010835508c();
              uStack_980 = (undefined4)uVar17;
              uStack_97c = (undefined4)(uVar17 >> 0x20);
              puVar9[iVar24] = (ushort)uVar17;
              *(ulong *)(puVar8 + (long)iVar24 * 8) = CONCAT44(uVar19,uStack_97c);
              iVar24 = iVar24 + 1;
              uStack_978 = uVar19;
            }
            else {
              uVar13 = SBORROW4(uVar21,1);
              if (uVar21 == 1) {
                uVar34 = (ulong)(uint)(int)(float)uVar38;
                uVar39 = (ulong)(uint)(int)(float)uVar33;
                *(undefined8 *)(puVar11 + (long)iVar28 * 8) =
                     *(undefined8 *)(*(long *)(uVar15 + 0x130) + (uVar17 >> 0x14 & 0xfffff) * 8);
                *(ulong *)(puVar10 + (long)iVar28 * 8) =
                     CONCAT44((int)(float)uVar38,(int)(float)uVar33);
                iVar28 = iVar28 + 1;
              }
            }
          }
          func_0x0001083550c0();
          uVar33 = uVar34;
          uVar38 = uVar39;
        }
        func_0x0001083550d8();
        puVar26 = (undefined1 *)0x0;
        if (iVar28 != 0) {
          puVar26 = puVar10;
        }
        puVar2 = (undefined1 *)0x0;
        if (iVar28 != 0) {
          puVar2 = puVar11;
        }
        uStack_810 = (ulong)iVar28;
        uStack_820 = SUB84(puVar2,0);
        uStack_81c = (undefined4)((ulong)puVar2 >> 0x20);
        uStack_818 = SUB84(puVar26,0);
        uStack_814 = (undefined4)((ulong)puVar26 >> 0x20);
        (**(code **)(*param_5 + 0x10))(param_5,&uStack_820,param_9);
        FUN_1083145d8(&uStack_a40);
        func_0x0001083a261c(auStack_8e0);
        if (iVar24 == 0) goto LAB_108354db4;
        lVar29 = (long)iVar24;
        puVar26 = puVar8;
        puVar27 = puVar9;
      }
      FUN_1083a2b0c(&uStack_820,puVar23 + 9,param_9,lStack_ae0,*(undefined4 *)(param_7 + 0x24),
                    0x113254e20);
      FUN_1083a2c80(auStack_8e0,&uStack_820);
      puVar18 = auStack_8e0;
      puVar25 = puVar27;
      FUN_1083a2cd4(puVar18,puVar27,lVar29);
      pfVar1 = (float *)(puVar26 + 4);
      fVar32 = -3.4028235e+38;
      for (; puVar25 != (ushort *)0x0; puVar25 = (ushort *)((long)puVar25 + -1)) {
        uVar43 = (undefined4)param_4;
        uVar40 = (undefined4)param_3;
        uVar35 = (undefined4)uVar38;
        uVar19 = (undefined4)uVar33;
        if ((*(short *)*puVar18 != 0) && (((short *)*puVar18)[1] != 0)) {
          FUN_10835060c();
          uStack_a40 = CONCAT44(uVar35,uVar19);
          uStack_a38 = CONCAT44(uVar43,uVar40);
          func_0x0001081836ec(fVar45 + pfVar1[-1],fVar44 + *pfVar1,&uStack_a40);
          FUN_1082fdf34(&uStack_9b0,&uStack_980,&uStack_a40);
          uVar30 = CONCAT44(uStack_974,uStack_978);
          func_0x000108355150(uVar30,CONCAT44(uStack_97c,uStack_980));
          fVar36 = (float)uVar30;
          func_0x0001083550e8();
          fVar5 = (float)uStack_a38;
          fVar37 = (float)uStack_a40;
          uVar30 = uStack_970;
          func_0x000108355150(uStack_970,CONCAT44(uStack_974,uStack_978));
          fVar41 = (float)uVar30;
          func_0x0001083550e8();
          fVar7 = uStack_a38._4_4_;
          fVar4 = uStack_a40._4_4_;
          uVar30 = uStack_968;
          func_0x000108355150(uStack_968,uStack_970);
          fVar42 = (float)uVar30;
          func_0x0001083550e8();
          fVar6 = (float)uStack_a38;
          fVar3 = (float)uStack_a40;
          uVar30 = CONCAT44(uStack_97c,uStack_980);
          func_0x000108355150(uVar30,uStack_968);
          fVar31 = (float)uVar30;
          func_0x0001083550e8();
          fVar36 = fVar36 / (fVar5 - fVar37);
          if (fVar36 <= fVar32) {
            fVar36 = fVar32;
          }
          fVar41 = fVar41 / (fVar7 - fVar4);
          if (fVar41 <= fVar36) {
            fVar41 = fVar36;
          }
          fVar42 = fVar42 / (fVar6 - fVar3);
          if (fVar42 <= fVar41) {
            fVar42 = fVar41;
          }
          uVar38 = (ulong)(uint)fVar42;
          param_4 = (ulong)(uint)uStack_a40._4_4_;
          param_3 = (ulong)(uint)(uStack_a38._4_4_ - uStack_a40._4_4_);
          fVar32 = fVar31 / (uStack_a38._4_4_ - uStack_a40._4_4_);
          uVar33 = (ulong)(uint)fVar32;
          if (fVar32 <= fVar42) {
            fVar32 = fVar42;
          }
        }
        puVar18 = puVar18 + 1;
        pfVar1 = pfVar1 + 2;
      }
      if (0.0 < fVar32) {
        fVar37 = fVar32 * *(float *)(puVar23 + 10);
        uVar13 = NAN(fVar37);
        fVar42 = 256.0 / *(float *)(puVar23 + 10);
        if (fVar37 <= 256.0) {
          fVar42 = fVar32;
        }
        func_0x00010815f6c0(auStack_9d8,fVar42,fVar42);
        FUN_1083a2b0c(&uStack_980,puVar23 + 9,param_9,lStack_ae0,*(undefined4 *)(param_7 + 0x24),
                      auStack_9d8);
        FUN_1083a2c54(&lStack_9e0,&uStack_980);
        uVar30 = *(undefined8 *)(lStack_9e0 + 0x5c);
        uVar38 = (ulong)*(uint *)(lStack_9e0 + 0x50);
        uStack_a38 = uStack_9a8;
        uStack_a40 = uStack_9b0;
        uStack_a28 = uStack_998;
        uStack_a30 = uStack_9a0;
        uStack_a20 = uStack_990;
        param_3 = uStack_9b0;
        param_4 = uStack_9a0;
        FUN_108363ef4(*(undefined4 *)(lStack_9e0 + 0x4c),&uStack_a40);
        func_0x0001083550d0();
        iVar28 = 0;
        while (lVar29 != 0) {
          func_0x000108355128();
          if (!(bool)uVar13) {
            FUN_1081790bc(&uStack_a40);
            uVar33 = (ulong)*puVar27;
            uVar19 = (int)uVar30;
            FUN_108318d84();
            func_0x0001083550f8();
            uVar21 = (uint)(uVar33 >> 0x2e) & 3;
            uVar13 = SBORROW4(uVar21,2);
            if (uVar21 == 2) {
              func_0x00010835508c();
              uStack_a64 = (undefined4)(uVar33 >> 0x20);
              puVar9[iVar28] = (ushort)uVar33;
              *(ulong *)(puVar8 + (long)iVar28 * 8) = CONCAT44(uVar19,uStack_a64);
              iVar28 = iVar28 + 1;
            }
            else {
              uVar13 = SBORROW4(uVar21,1);
              if (uVar21 == 1) {
                func_0x000108355064();
              }
            }
          }
          func_0x0001083550c0();
        }
        func_0x0001083550d8();
        uVar33 = 0x3f800000;
        FUN_1083145d8(&lStack_9e0);
        func_0x0001083a261c(&uStack_980);
      }
      FUN_1083a2cb4(auStack_8e0);
      func_0x0001083a261c(&uStack_820);
    }
LAB_108354db4:
  }
  func_0x0001083550e0(auStack_778);
  func_0x000108355104();
  func_0x0001083550e0(auStack_4d8);
  func_0x000108355110();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
LAB_108354e24:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x108354e28);
  (*pcVar12)();
}



/* Entry: 10834bf14; end: 10834c90b;  */

void FUN_10834bf14(undefined8 param_1,int *****param_2,undefined4 param_3,int ******param_4,
                  int ******param_5,undefined8 *param_6,long param_7,ulong param_8)

{
  int ****ppppiVar1;
  int *****pppppiVar2;
  int *****pppppiVar3;
  uint uVar4;
  uint uVar5;
  int *****pppppiVar6;
  int *****pppppiVar7;
  int *****pppppiVar8;
  undefined1 uVar9;
  char cVar10;
  bool bVar11;
  int *****pppppiVar12;
  int *****pppppiVar13;
  int ***pppiVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  int ******ppppppiVar18;
  int ******ppppppiVar19;
  int *****pppppiVar20;
  int ******ppppppiVar21;
  int ******ppppppiVar22;
  code *pcVar23;
  long lVar24;
  int *****extraout_x8;
  ulong uVar25;
  undefined8 *puVar26;
  uint uVar27;
  int *****pppppiVar28;
  long lVar29;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  long lVar30;
  int ******ppppppiVar31;
  int ******ppppppiVar32;
  float fVar33;
  undefined4 uVar34;
  undefined4 uVar36;
  int *****pppppiStack_4b8;
  int *****pppppiStack_498;
  int ****ppppiStack_468;
  int ****ppppiStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  int *****pppppiStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  int ***pppiStack_408;
  int ***pppiStack_400;
  int ***pppiStack_3f8;
  undefined8 uStack_3f0;
  int iStack_3e8;
  uint uStack_3e4;
  undefined4 uStack_3e0;
  int ****ppppiStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  int ****ppppiStack_3b8;
  int *****pppppiStack_378;
  int ****appppiStack_370 [77];
  undefined1 auStack_108 [8];
  int *****pppppiStack_100;
  int *****pppppiStack_e8;
  int ***pppiStack_e0;
  int ***pppiStack_d8;
  int ****ppppiStack_d0;
  int ***pppiStack_c8;
  int ***pppiStack_c0;
  int ***pppiStack_b8;
  int *****pppppiStack_b0;
  int ****ppppiStack_a8;
  int ****ppppiStack_a0;
  long lStack_80;
  int *****pppppiVar35;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(uint *)(param_5 + 7);
  uVar25 = (ulong)uVar4;
  ppppppiVar18 = param_4;
  ppppppiVar31 = param_5;
  if ((2 < (int)uVar4 && 1 < *(int *)((long)param_5 + 0x3c) - 1U) &&
     ((*(byte *)((long)param_4[8] + 0x31) & 1) == 0)) {
    uStack_458 = 0;
    ppppiStack_460 = (int ****)0x3f800000;
    uStack_448 = 0;
    uStack_450 = 0x3f800000;
    uStack_440 = 0x103f800000;
    ppppppiVar18 = (int ******)param_4[7];
    ppppppiVar31 = (int ******)&ppppiStack_460;
    FUN_10818cfd0();
    if ((int)ppppppiVar18 != 0) {
      ppppppiVar31 = (int ******)appppiStack_370;
      FUN_10840f6d0(auStack_108,ppppppiVar31,0x268,0x268);
      ppppppiVar19 = (int ******)param_4[7];
      FUN_10828e338();
      if ((int)ppppppiVar19 == 0) {
        func_0x00010834cad0();
        func_0x0001081e7dcc();
        for (lVar24 = 0; uVar25 * 8 - lVar24 != 0; lVar24 = lVar24 + 8) {
          *(undefined8 *)((long)ppppppiVar19 + lVar24) = 0;
        }
        FUN_1083645e0(param_4[7],ppppppiVar19,param_5[1],uVar25);
        uStack_3c8 = (int *****)0x0;
        uStack_3c0 = (int ******)0x0;
        ppppppiVar18 = (int ******)&uStack_3c8;
        ppppppiVar31 = ppppppiVar19;
        FUN_10838eb84(ppppppiVar18,ppppppiVar19,uVar25);
        if ((float)uStack_3c8 < (float)uStack_3c0) {
          param_2 = (int *****)(ulong)(uint)uStack_3c0._4_4_;
          if (uStack_3c8._4_4_ < uStack_3c0._4_4_) {
            ppppppiVar18 = (int ******)0x0;
            fVar33 = uStack_3c8._4_4_;
            pppppiStack_4b8 = (int *****)ppppppiVar19;
            goto LAB_10834c0ec;
          }
        }
      }
      else {
        ppppppiVar18 = ppppppiVar19;
        if (0x15555555 < uVar4) goto LAB_10834c848;
        func_0x00010834cad0();
        func_0x0001081865e0();
        pppppiStack_100 = (int *****)((long)ppppppiVar19 + uVar25 * 0xc);
        for (lVar24 = 0; uVar25 * 0xc - lVar24 != 0; lVar24 = lVar24 + 0xc) {
          *(undefined4 *)((undefined8 *)((long)ppppppiVar19 + lVar24) + 1) = 0;
          *(undefined8 *)((long)ppppppiVar19 + lVar24) = 0;
        }
        ppppppiVar18 = (int ******)param_4[7];
        ppppppiVar31 = ppppppiVar19;
        FUN_108364cf0(ppppppiVar18,ppppppiVar19,param_5[1],uVar25);
        fVar33 = *(float *)ppppppiVar19 - *(float *)ppppppiVar19;
        for (lVar24 = 4; uVar25 * 0xc - lVar24 != 0; lVar24 = lVar24 + 4) {
          param_2 = (int *****)(ulong)(uint)*(float *)((long)ppppppiVar19 + lVar24);
          fVar33 = fVar33 * *(float *)((long)ppppppiVar19 + lVar24);
        }
        if (!NAN(fVar33)) {
          pppppiStack_4b8 = (int *****)0x0;
          ppppppiVar18 = ppppppiVar19;
LAB_10834c0ec:
          pppppiVar35 = (int *****)(ulong)(uint)fVar33;
          pppppiVar20 = (int *****)*param_6;
          *param_6 = 0;
          uVar4 = *(uint *)(param_5 + 7);
          uVar5 = *(uint *)((long)param_5 + 0x3c);
          pppppiVar6 = param_5[1];
          pppppiVar7 = param_5[2];
          pppppiVar8 = param_5[4];
          ppppppiVar31 = *(int *******)(param_7 + 8);
          pppppiVar28 = pppppiVar6;
          if (param_5[3] != (int *****)0x0) {
            pppppiVar28 = param_5[3];
          }
          pppppiVar3 = (int *****)0x0;
          if (ppppppiVar31 != (int ******)0x0) {
            pppppiVar3 = pppppiVar28;
          }
          ppppiStack_468 = (int ****)pppppiVar20;
          (*(code *)(*pppppiVar20)[7])();
          pppppiVar28 = pppppiVar8;
          if ((int)pppppiVar20 == 1) {
            pppppiVar28 = (int *****)0x0;
          }
          bVar15 = (int)pppppiVar20 != 2;
          pppppiVar12 = pppppiVar8;
          if (bVar15) {
            pppppiVar12 = pppppiVar28;
          }
          ppppppiVar19 = (int ******)0x0;
          if (bVar15) {
            ppppppiVar19 = ppppppiVar31;
          }
          pppppiVar28 = (int *****)0x0;
          if (bVar15) {
            pppppiVar28 = pppppiVar3;
          }
          pppppiVar2 = pppppiVar3;
          ppppppiVar32 = ppppppiVar31;
          pppppiVar13 = pppppiVar8;
          if (pppppiVar8 != (int *****)0x0) {
            pppppiVar2 = pppppiVar28;
            ppppppiVar32 = ppppppiVar19;
            pppppiVar13 = pppppiVar12;
          }
          bVar16 = ((ulong)pppppiVar20 & 0x100000000) != 0;
          pppppiVar28 = pppppiVar8;
          if (bVar16) {
            pppppiVar3 = pppppiVar2;
            ppppppiVar31 = ppppppiVar32;
            pppppiVar28 = pppppiVar13;
          }
          ppppppiVar19 = (int ******)param_4[7];
          FUN_10828e338();
          uVar9 = SUB81(ppppppiVar19,0);
          if (pppppiVar28 == (int *****)0x0) {
            ppppppiVar32 = (int ******)0x0;
            pppppiStack_498 = (int *****)0x0;
            ppppppiVar22 = ppppppiVar19;
          }
          else {
            ppppppiVar32 = (int ******)param_4[3];
            func_0x00010834cad0();
            FUN_10834c90c();
            pppppiStack_430 = (int *****)(int ******)0x0;
            if (((param_8 & 1) == 0) && (ppppppiVar32 != (int ******)0x0)) {
              do {
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(ppppppiVar32,0x10);
                if (bVar11) {
                  *(int *)ppppppiVar32 = *(int *)ppppppiVar32 + 1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
                pppppiStack_430 = (int *****)ppppppiVar32;
              } while (cVar10 != '\0');
            }
            FUN_108343a94(&ppppiStack_d0);
            uStack_3c8 = (int *****)ppppiStack_d0;
            ppppiStack_d0 = (int ****)0x0;
            uStack_3c0 = (int ******)0x300000006;
            ppppiStack_3b8 = (int ****)((ulong)uVar4 | 0x100000000);
            func_0x00010834caf0();
            pppppiStack_b0 = (int *****)0x0;
            if ((int ******)pppppiStack_430 != (int ******)0x0) {
              do {
                func_0x00010834ca80();
                pppppiStack_b0 = extraout_x8;
              } while (extraout_w10 != 0);
            }
            uStack_3f0 = (int ******)0x0;
            ppppiStack_a8 = (int ****)0x200000012;
            ppppiStack_a0 = (int ****)((ulong)uVar4 | 0x100000000);
            FUN_10810a400(&uStack_3f0);
            FUN_108345950(&pppppiStack_b0,ppppppiVar19,0,&uStack_3c8,pppppiVar28,0);
            FUN_10810a400(&pppppiStack_b0);
            FUN_10810a400(&uStack_3c8);
            ppppppiVar32 = &pppppiStack_430;
            FUN_10810a400();
            uVar27 = 0xffffffff;
            pppppiVar20 = pppppiVar28;
            for (uVar25 = (ulong)(uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)); uVar25 != 0;
                uVar25 = uVar25 - 1) {
              uVar27 = *(uint *)pppppiVar20 & uVar27;
              pppppiVar20 = (int *****)((long)pppppiVar20 + 4);
            }
            func_0x00010834cad0();
            FUN_10840f8d0();
            iVar17 = (int)ppppppiVar32 - (int)pppppiStack_100;
            pppppiStack_100 = (int *****)(ppppppiVar32 + 0xd);
            ppppppiVar32[0xd] = (int *****)FUN_10834ca38;
            ppppppiVar21 = ppppppiVar32;
            func_0x00010834ca90(iVar17);
            ppppppiVar22 = (int ******)((long)ppppppiVar21 + 0x3c);
            *ppppppiVar21 = (int *****)&PTR_FUN_110a43c00;
            FUN_10810c9b4();
            *(bool *)((long)ppppppiVar32 + 100) = 0xfe < uVar27 >> 0x18;
            *(undefined1 *)((long)ppppppiVar32 + 0x65) = uVar9;
            pppppiStack_498 = (int *****)ppppppiVar19;
          }
          pppppiVar20 = param_4[7];
          ppppppiVar19 = ppppppiVar31;
          ppppppiVar21 = (int ******)0x0;
          if ((pppppiVar3 != (int *****)0x0) && (pppppiVar3 != pppppiVar6)) {
            func_0x00010834cad0();
            FUN_10840f8d0();
            iVar17 = (int)ppppppiVar22 - (int)pppppiStack_100;
            pppppiStack_100 = (int *****)(ppppppiVar22 + 8);
            ppppppiVar22[8] = (int *****)0x10834ca5c;
            ppppppiVar19 = ppppppiVar22;
            func_0x00010834ca90(iVar17);
            *ppppppiVar19 = (int *****)&PTR_FUN_110a43b58;
            ppppppiVar19[2] = (int *****)ppppppiVar31;
            *(undefined1 *)((long)ppppppiVar19 + 0x3c) = uVar9;
            pppppiVar20 = (int *****)0x113254e20;
            ppppppiVar19[4] = pppppiRam0000000113254e28;
            ppppppiVar19[3] = pppppiRam0000000113254e20;
            ppppppiVar19[6] = pppppiRam0000000113254e38;
            ppppppiVar19[5] = pppppiRam0000000113254e30;
            *(int *)(ppppppiVar19 + 7) = iRam0000000113254e40;
            ppppppiVar21 = ppppppiVar22;
            pppppiVar35 = pppppiRam0000000113254e30;
            param_2 = pppppiRam0000000113254e20;
          }
          uVar36 = SUB84(param_2,0);
          uVar34 = SUB84(pppppiVar35,0);
          if (pppppiVar28 == (int *****)0x0) {
            pppppiStack_378 = (int *****)ppppppiVar19;
            if (ppppppiVar19 != (int ******)0x0) {
              do {
                func_0x00010834ca80();
              } while (extraout_w10_01 != 0);
            }
          }
          else if (!bVar16 || (pppppiVar8 == (int *****)0x0 || bVar15)) {
            pppppiStack_b0 = (int *****)0x0;
            if (ppppppiVar19 == (int ******)0x0) {
              FUN_10819a67c(param_7);
              uStack_3c8 = (int *****)CONCAT44(uVar36,uVar34);
              uStack_3c0 = (int ******)CONCAT44(0x3f800000,param_3);
              ppppiStack_d0 = (int ****)0x0;
              FUN_1083bae78(&pppppiStack_430,&uStack_3c8,&ppppiStack_d0);
              pppppiVar28 = pppppiStack_b0;
              pppppiStack_b0 = pppppiStack_430;
              pppppiStack_430 = (int *****)0x0;
              func_0x00010834c9cc(pppppiVar28);
              func_0x00010834cadc();
              func_0x00010834caf0();
            }
            else {
              do {
                func_0x00010834ca80();
              } while (extraout_w10_02 != 0);
              uStack_3c8 = (int *****)0x0;
              pppppiStack_b0 = (int *****)ppppppiVar19;
              func_0x000106f47224(&uStack_3c8);
            }
            if ((int *****)ppppiStack_468 != (int *****)0x0) {
              pppppiVar28 = (int *****)(ppppiStack_468 + 1);
              do {
                cVar10 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(pppppiVar28,0x10);
                if (bVar15) {
                  *(int *)pppppiVar28 = *(int *)pppppiVar28 + 1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
            }
            uStack_3c8 = (int *****)ppppiStack_468;
            if (ppppppiVar32 != (int ******)0x0) {
              do {
                func_0x00010834ca80();
              } while (extraout_w10_03 != 0);
            }
            pppppiStack_e8 = pppppiStack_b0;
            uStack_3f0 = (int ******)0x0;
            pppppiStack_b0 = (int *****)0x0;
            pppppiStack_430 = (int *****)ppppppiVar32;
            FUN_1083ba5cc(&pppppiStack_378,&uStack_3c8,&pppppiStack_430,&pppppiStack_e8);
            func_0x000106f47224(&pppppiStack_e8);
            func_0x00010834cadc();
            FUN_10834c980(&uStack_3f0);
            FUN_108154c6c(&uStack_3c8);
            func_0x000106f47224(&pppppiStack_b0);
          }
          else {
            if (ppppppiVar32 != (int ******)0x0) {
              do {
                func_0x00010834ca80();
              } while (extraout_w10_00 != 0);
            }
            uStack_3c8 = (int *****)0x0;
            pppppiStack_378 = (int *****)ppppppiVar32;
            FUN_10834c980(&uStack_3c8);
          }
          FUN_108375f34(&uStack_3c8,param_7);
          pppppiVar28 = pppppiStack_378;
          ppppppiVar31 = uStack_3c0;
          pppppiStack_378 = (int *****)0x0;
          uStack_3d0 = 0;
          uStack_3c0 = (int ******)pppppiVar28;
          FUN_108114eec(ppppppiVar31);
          func_0x000106f47224(&uStack_3d0);
          uStack_3e4 = uVar4;
          if (pppppiVar7 != (int *****)0x0) {
            uStack_3e4 = uVar5;
          }
          uStack_3e0 = 0;
          pcVar23 = (code *)&uStack_3f0;
          ppppiStack_3d8 = (int ****)pppppiVar7;
          func_0x0001083a91f0(pcVar23,*(undefined4 *)(param_5 + 8));
          pppppiVar28 = param_4[9];
          if (pppppiVar28 == (int *****)0x0) {
            pppiStack_400 = (int ***)0x0;
            pppiStack_3f8 = (int ***)0x3f000000;
          }
          else {
            pppiStack_400 = (int ***)*pppppiVar28;
            pppiStack_3f8 = (int ***)pppppiVar28[1];
          }
          pppiStack_408 = (int ***)param_4[8][7];
          if ((int ****)pppiStack_408 != (int ****)0x0) {
            ppppiVar1 = (int ****)(pppiStack_408 + 1);
            do {
              cVar10 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(ppppiVar1,0x10);
              if (bVar15) {
                *(int *)ppppiVar1 = *(int *)ppppiVar1 + 1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
          }
          ppppppiVar31 = (int ******)&uStack_3c8;
          FUN_108388f24(param_4 + 1,ppppppiVar31,pppppiVar20,auStack_108,&pppiStack_408,
                        &pppiStack_400);
          func_0x00010834caf8();
          if (ppppppiVar19 != (int ******)0x0) {
LAB_10834c5a0:
            iVar17 = (int)&uStack_3f0;
            (*pcVar23)();
            if (iVar17 != 0) {
              if (ppppppiVar32 != (int ******)0x0) goto code_r0x00010834c5b4;
              goto LAB_10834c5d4;
            }
          }
          FUN_108375e94(&uStack_3c8);
          func_0x000106f47224(&pppppiStack_378);
          ppppppiVar18 = (int ******)&ppppiStack_468;
          FUN_108154c6c();
        }
      }
      func_0x00010834cad0();
      FUN_10840f740();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
LAB_10834c848:
  _abort();
  func_0x00010834cadc();
  func_0x00010834caf0();
  func_0x000106f47224(&pppppiStack_b0);
  FUN_108154c6c(&ppppiStack_468);
  func_0x00010834cad0();
  FUN_10840f740();
  __Unwind_Resume();
  func_0x00010834c93c();
  for (; ppppppiVar31 != (int ******)0x0; ppppppiVar31 = (int ******)((long)ppppppiVar31 + -1)) {
    *ppppppiVar18 = (int *****)0x0;
    ppppppiVar18[1] = (int *****)0x0;
    ppppppiVar18 = ppppppiVar18 + 2;
  }
  return;
code_r0x00010834c5b4:
  ppppppiVar31 = (int ******)&ppppiStack_460;
  ppppppiVar19 = ppppppiVar32;
  FUN_1083be89c(ppppppiVar32,ppppppiVar31,pppppiVar6,pppppiStack_498,(ulong)uStack_3f0 & 0xffffffff,
                uStack_3f0._4_4_,iStack_3e8);
  if ((int)ppppppiVar19 != 0) {
LAB_10834c5d4:
    uStack_428 = 0;
    pppppiStack_430 = (int *****)0x3f800000;
    uStack_418 = 0;
    uStack_420 = 0x3f800000;
    uStack_410 = 0x103f800000;
    if (ppppppiVar21 != (int ******)0x0) {
      ppppiStack_d0 = pppppiVar6[(int)uStack_3f0];
      pppiStack_c8 = (int ***)pppppiVar6[uStack_3f0._4_4_];
      pppiStack_c0 = (int ***)pppppiVar6[iStack_3e8];
      pppppiStack_e8 = (int *****)pppppiVar3[(int)uStack_3f0];
      pppiStack_e0 = (int ***)pppppiVar3[uStack_3f0._4_4_];
      pppiStack_d8 = (int ***)pppppiVar3[iStack_3e8];
      ppppppiVar19 = &pppppiStack_430;
      ppppppiVar31 = (int ******)&ppppiStack_d0;
      FUN_108365458(ppppppiVar19,ppppppiVar31,&pppppiStack_e8,3);
      if ((int)ppppppiVar19 == 0) goto LAB_10834c5a0;
      FUN_1081600e0(&pppppiStack_b0,&pppppiStack_430,&ppppiStack_460);
      ppppppiVar31 = &pppppiStack_b0;
      ppppppiVar19 = ppppppiVar21;
      FUN_1083be714();
      if (((ulong)ppppppiVar19 & 1) == 0) goto LAB_10834c5a0;
    }
    if (ppppppiVar18 == (int ******)0x0) {
      pppppiStack_b0 = (int *****)pppppiStack_4b8[(int)uStack_3f0];
      ppppiStack_a8 = pppppiStack_4b8[uStack_3f0._4_4_];
      ppppiStack_a0 = pppppiStack_4b8[iStack_3e8];
      func_0x00010834cabc(&pppppiStack_b0);
    }
    else {
      pppppiStack_e8 = (int *****)uStack_3f0;
      pppiStack_e0 = (int ***)CONCAT44(pppiStack_e0._4_4_,iStack_3e8);
      lVar24 = 0;
      ppppppiVar19 = &pppppiStack_b0;
LAB_10834c688:
      lVar29 = lVar24;
      if (lVar29 != 3) {
        lVar24 = 0;
        if (lVar29 != 2) {
          lVar24 = lVar29 + 1;
        }
        iVar17 = *(int *)((long)&pppppiStack_e8 + lVar24 * 4);
        puVar26 = (undefined8 *)
                  ((long)ppppppiVar18 + (long)*(int *)((long)&pppppiStack_e8 + lVar29 * 4) * 0xc);
        fVar33 = *(float *)(puVar26 + 1);
        if (fVar33 <= 0.05) goto code_r0x00010834c6b4;
        pppppiVar28 = (int *****)*puVar26;
        *(undefined4 *)(ppppppiVar19 + 1) = *(undefined4 *)(puVar26 + 1);
        *ppppppiVar19 = pppppiVar28;
        if (*(float *)((long)ppppppiVar18 + ((long)iVar17 * 3 + 2) * 4) <= 0.05) {
          uVar34 = *(undefined4 *)puVar26;
          uVar36 = *(undefined4 *)((long)puVar26 + 4);
          fVar33 = *(float *)(puVar26 + 1);
          func_0x00010834c9f8();
          ppppppiVar22 = ppppppiVar19 + 3;
          *(undefined4 *)((long)ppppppiVar19 + 0xc) = uVar34;
          lVar24 = 0x10;
          lVar30 = 0x14;
          goto LAB_10834c730;
        }
        ppppppiVar22 = (int ******)((long)ppppppiVar19 + 0xc);
        goto LAB_10834c738;
      }
      uVar4 = (uint)(((long)ppppppiVar19 - (long)&pppppiStack_b0) / 0xc);
      pppppiVar28 = &ppppiStack_a8;
      for (lVar24 = 0; (ulong)(uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) << 3 != lVar24;
          lVar24 = lVar24 + 8) {
        *(ulong *)((long)&ppppiStack_d0 + lVar24) =
             CONCAT44((float)((ulong)pppppiVar28[-1] >> 0x20) * (1.0 / *(float *)pppppiVar28),
                      SUB84(pppppiVar28[-1],0) * (1.0 / *(float *)pppppiVar28));
        pppppiVar28 = (int *****)((long)pppppiVar28 + 0xc);
      }
      if ((uVar4 != 0) &&
         (func_0x00010834cabc(&ppppiStack_d0), pppiVar14 = pppiStack_c0, uVar4 == 4)) {
        pppiStack_c0 = pppiStack_b8;
        pppiStack_c8 = pppiVar14;
        func_0x00010834cabc(&ppppiStack_d0);
      }
    }
  }
  goto LAB_10834c5a0;
code_r0x00010834c6b4:
  lVar24 = lVar29 + 1;
  if (0.05 < *(float *)((long)ppppppiVar18 + ((long)iVar17 * 3 + 2) * 4)) {
    uVar34 = *(undefined4 *)puVar26;
    uVar36 = *(undefined4 *)((long)puVar26 + 4);
    func_0x00010834c9f8();
    ppppppiVar22 = (int ******)((long)ppppppiVar19 + 0xc);
    *(undefined4 *)ppppppiVar19 = uVar34;
    lVar24 = 4;
    lVar30 = 8;
LAB_10834c730:
    *(undefined4 *)((long)ppppppiVar19 + lVar24) = uVar36;
    *(float *)((long)ppppppiVar19 + lVar30) = fVar33;
LAB_10834c738:
    lVar24 = lVar29 + 1;
    ppppppiVar19 = ppppppiVar22;
  }
  goto LAB_10834c688;
}



/* Entry: 10834c90c; end: 10834c97f;  */

void FUN_10834c90c(undefined8 *param_1,long param_2)

{
  func_0x00010834c93c();
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 2;
  }
  return;
}



/* Entry: 10834c980; end: 10834c9cb;  */

long * FUN_10834c980(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 10834c9cc; end: 10834ca37;  */

void FUN_10834c9cc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010834c9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 10834ca38; end: 10834ca7f;  */

undefined8 * FUN_10834ca38(long param_1)

{
  func_0x00010834cae4(*(undefined8 *)(param_1 + -0x71));
  return (undefined8 *)(param_1 + -0x71);
}



/* Entry: 10834ca80; end: 10834cb03;  */

void FUN_10834ca80(int *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10834cb04; end: 10834cb97;  */

void FUN_10834cb04(long *param_1,long param_2,long param_3)

{
  long lStack_30;
  int iStack_28;
  
  iStack_28 = 0;
  if (param_2 != 0) {
    iStack_28 = *(int *)(param_2 + 0xc60);
    *(int *)(param_2 + 0xc60) = iStack_28 + 1;
    *(int *)(*(long *)(param_2 + 0xc40) + 0x58) = *(int *)(*(long *)(param_2 + 0xc40) + 0x58) + 1;
  }
  lStack_30 = param_2;
  if (param_3 != 0) {
    FUN_10833e2b0(param_2,param_3);
  }
  (**(code **)(*param_1 + 0x48))(param_1,param_2);
  FUN_10815b978(&lStack_30);
  return;
}



/* Entry: 10834cb98; end: 10834cbd3;  */

int FUN_10834cb98(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    do {
      iVar1 = iRam0000000113254e00;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x113254e00,0x10);
      if (bVar3) {
        cVar2 = ExclusiveMonitorsStatus();
        iRam0000000113254e00 = iRam0000000113254e00 + 1;
      }
    } while ((cVar2 != '\0') || (iVar1 == 0));
    *(int *)(param_1 + 0xc) = iVar1;
  }
  return iVar1;
}



/* Entry: 10834cbd4; end: 10834cc67;  */

void FUN_10834cbd4(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,long *param_6)

{
  undefined1 *puVar1;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [48];
  
  FUN_108383398(auStack_50);
  (**(code **)(*param_6 + 0x38))(param_6);
  puVar1 = auStack_50;
  uStack_60 = param_2;
  uStack_5c = param_3;
  uStack_58 = param_4;
  uStack_54 = param_5;
  FUN_1083835c4(puVar1,&uStack_60,0);
  FUN_10834cb04(param_6,puVar1,0);
  FUN_10838362c(param_1,auStack_50);
  FUN_108383490(auStack_50);
  return;
}



/* Entry: 10834cc68; end: 10834cc93;  */

undefined8 FUN_10834cc68(void)

{
  return 0;
}



/* Entry: 10834cc94; end: 10834cd9f;  */

undefined8 FUN_10834cc94(long param_1,float *param_2,float *param_3,long param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 uVar7;
  int iVar8;
  float fVar9;
  
  uVar7 = 1;
  fVar9 = (float)(1 << (ulong)(param_5 + 6U & 0x1f));
  iVar6 = (int)(param_2[1] * fVar9);
  iVar8 = (int)(param_3[1] * fVar9);
  iVar2 = iVar8;
  iVar4 = (int)(*param_3 * fVar9);
  iVar3 = (int)(*param_2 * fVar9);
  if (iVar8 < iVar6) {
    uVar7 = 0xff;
    iVar2 = iVar6;
    iVar4 = (int)(*param_2 * fVar9);
    iVar6 = iVar8;
    iVar3 = (int)(*param_3 * fVar9);
  }
  iVar1 = (int)(iVar6 + 0x20U) >> 6;
  iVar8 = iVar2 + 0x20 >> 6;
  if ((iVar1 == iVar8) ||
     ((param_4 != 0 && ((*(int *)(param_4 + 0xc) <= iVar1 || (iVar8 <= *(int *)(param_4 + 4))))))) {
    uVar5 = 0;
  }
  else {
    iVar4 = iVar4 - iVar3;
    FUN_10832fe8c(iVar4,iVar2 - iVar6);
    *(int *)(param_1 + 0x10) =
         (iVar3 + (int)((ulong)((long)iVar4 *
                               (long)(int)(((iVar6 + 0x20U & 0xffffffc0) - iVar6) + 0x20)) >> 0x10))
         * 0x400;
    *(int *)(param_1 + 0x14) = iVar4;
    *(int *)(param_1 + 0x18) = iVar1;
    *(int *)(param_1 + 0x1c) = iVar8 + -1;
    *(undefined2 *)(param_1 + 0x20) = 0;
    *(undefined1 *)(param_1 + 0x24) = uVar7;
    *(undefined1 *)(param_1 + 0x22) = 0;
    if (param_4 != 0) {
      FUN_10834cda0(param_1,param_4);
    }
    uVar5 = 1;
  }
  return uVar5;
}



/* Entry: 10834cda0; end: 10834cdc3;  */

void FUN_10834cda0(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 4);
  iVar2 = iVar1 - *(int *)(param_1 + 0x18);
  if (iVar2 != 0 && *(int *)(param_1 + 0x18) <= iVar1) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x14) * iVar2;
    *(int *)(param_1 + 0x18) = iVar1;
  }
  return;
}



/* Entry: 10834cdc4; end: 10834cf23;  */

bool FUN_10834cdc4(long param_1,undefined8 *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar14;
  undefined8 uVar13;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  
  uVar6 = 1;
  fVar7 = (float)(1 << (ulong)(param_3 + 6U & 0x1f));
  iVar10 = (int)((float)*param_2 * fVar7);
  iVar11 = (int)((float)((ulong)*param_2 >> 0x20) * fVar7);
  iVar12 = (int)((float)param_2[2] * fVar7);
  iVar14 = (int)((float)((ulong)param_2[2] >> 0x20) * fVar7);
  iVar15 = iVar12;
  iVar16 = iVar14;
  iVar2 = iVar10;
  iVar3 = iVar11;
  if (iVar14 < iVar11) {
    uVar6 = 0xff;
    iVar15 = iVar10;
    iVar16 = iVar11;
    iVar2 = iVar12;
    iVar3 = iVar14;
  }
  uVar1 = iVar16 + 0x20U ^ iVar3 + 0x20U;
  if (0x3f < uVar1) {
    iVar17 = (int)((float)param_2[1] * fVar7);
    iVar18 = (int)((float)((ulong)param_2[1] >> 0x20) * fVar7);
    uVar4 = iVar17 * 2 - (iVar10 + iVar12) >> 2;
    FUN_10834cf24(uVar4,iVar18 * 2 - (iVar11 + iVar14) >> 2);
    uVar5 = uVar4;
    if (5 < uVar4) {
      uVar5 = 6;
    }
    if (uVar4 == 0) {
      uVar5 = 1;
    }
    *(undefined1 *)(param_1 + 0x24) = uVar6;
    *(undefined1 *)(param_1 + 0x20) = 1;
    *(char *)(param_1 + 0x21) = (char)(1 << (ulong)(uVar5 & 0x1f));
    iVar10 = uVar5 - 1;
    iVar11 = (iVar2 + iVar17 * -2 + iVar15) * 0x200;
    iVar12 = (iVar3 + iVar18 * -2 + iVar16) * 0x200;
    uVar13 = NEON_sshl(CONCAT44(iVar12,iVar11),CONCAT44(-uVar5,-uVar5),4);
    *(char *)(param_1 + 0x22) = (char)iVar10;
    *(int *)(param_1 + 0x30) = (int)uVar13 + (iVar17 - iVar2) * 0x400;
    *(int *)(param_1 + 0x34) = (int)((ulong)uVar13 >> 0x20) + (iVar18 - iVar3) * 0x400;
    *(ulong *)(param_1 + 0x28) = CONCAT44(iVar3 << 10,iVar2 << 10);
    auVar8._0_4_ = -iVar10;
    auVar8._4_4_ = -iVar10;
    auVar8._8_4_ = -iVar10;
    auVar8._12_4_ = -iVar10;
    auVar9._4_4_ = iVar12;
    auVar9._0_4_ = iVar11;
    auVar9._8_4_ = iVar15;
    auVar9._12_4_ = iVar16;
    auVar9 = NEON_sshl(auVar9,auVar8,4);
    *(ulong *)(param_1 + 0x40) = CONCAT44(iVar16 << 10,iVar15 << 10);
    *(long *)(param_1 + 0x38) = auVar9._0_8_;
  }
  return 0x3f < uVar1;
}



/* Entry: 10834cf24; end: 10834cf6f;  */

uint FUN_10834cf24(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = -param_1;
  if (-1 < (int)param_1) {
    uVar1 = param_1;
  }
  uVar2 = -param_2;
  if (-1 < (int)param_2) {
    uVar2 = param_2;
  }
  iVar3 = uVar1 + (uVar2 >> 1);
  if (uVar1 <= uVar2) {
    iVar3 = uVar2 + (uVar1 >> 1);
  }
  return 0x20U - (int)LZCOUNT(iVar3 + (1 << (ulong)(param_3 + 2U & 0x1f)) >> (param_3 + 3U & 0x1f))
         >> 1;
}



/* Entry: 10834cf70; end: 10834cfa3;  */

void FUN_10834cf70(long param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  lVar5 = param_1;
  FUN_10834cdc4();
  if ((int)lVar5 != 0) {
    iVar1 = *(int *)(param_1 + 0x28);
    iVar2 = *(int *)(param_1 + 0x2c);
    iVar6 = *(int *)(param_1 + 0x30);
    iVar7 = *(int *)(param_1 + 0x34);
    bVar3 = *(byte *)(param_1 + 0x22);
    lVar5 = param_1;
    iVar8 = (int)*(char *)(param_1 + 0x21);
    do {
      if (iVar8 < 2) {
        iVar1 = *(int *)(param_1 + 0x40);
        iVar2 = *(int *)(param_1 + 0x44);
      }
      else {
        iVar1 = (iVar6 >> (bVar3 & 0x1f)) + iVar1;
        iVar6 = *(int *)(param_1 + 0x38) + iVar6;
        iVar2 = (iVar7 >> (bVar3 & 0x1f)) + iVar2;
        iVar7 = *(int *)(param_1 + 0x3c) + iVar7;
      }
      func_0x00010834d448();
      iVar4 = iVar8 + -1;
    } while ((1 < iVar8) && (iVar8 = iVar4, (int)lVar5 == 0));
    *(int *)(param_1 + 0x28) = iVar1;
    *(int *)(param_1 + 0x2c) = iVar2;
    *(int *)(param_1 + 0x30) = iVar6;
    *(int *)(param_1 + 0x34) = iVar7;
    *(char *)(param_1 + 0x21) = (char)iVar4;
    return;
  }
  return;
}



/* Entry: 10834cfa4; end: 10834d02f;  */

void FUN_10834cfa4(long param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar6 = (int)param_1;
  iVar2 = *(int *)(param_1 + 0x28);
  iVar3 = *(int *)(param_1 + 0x2c);
  iVar7 = *(int *)(param_1 + 0x30);
  iVar8 = *(int *)(param_1 + 0x34);
  bVar4 = *(byte *)(param_1 + 0x22);
  iVar9 = (int)*(char *)(param_1 + 0x21);
  do {
    if (iVar9 < 2) {
      iVar2 = *(int *)(param_1 + 0x40);
      iVar3 = *(int *)(param_1 + 0x44);
    }
    else {
      iVar2 = (iVar7 >> (bVar4 & 0x1f)) + iVar2;
      iVar7 = *(int *)(param_1 + 0x38) + iVar7;
      iVar3 = (iVar8 >> (bVar4 & 0x1f)) + iVar3;
      iVar8 = *(int *)(param_1 + 0x3c) + iVar8;
    }
    func_0x00010834d448();
    iVar5 = iVar9 + -1;
  } while ((1 < iVar9) && (bVar1 = iVar6 == 0, iVar6 = 0, iVar9 = iVar5, bVar1));
  *(int *)(param_1 + 0x28) = iVar2;
  *(int *)(param_1 + 0x2c) = iVar3;
  *(int *)(param_1 + 0x30) = iVar7;
  *(int *)(param_1 + 0x34) = iVar8;
  *(char *)(param_1 + 0x21) = (char)iVar5;
  return;
}



/* Entry: 10834d030; end: 10834d2e7;  */

bool FUN_10834d030(long param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  param_3 = param_3 >> 10;
  iVar2 = (int)(param_3 + 0x20U) >> 6;
  iVar1 = (param_5 >> 10) + 0x20 >> 6;
  if (iVar2 != iVar1) {
    iVar3 = (param_4 >> 10) - (param_2 >> 10);
    FUN_10832fe8c(iVar3,(param_5 >> 10) - param_3);
    *(int *)(param_1 + 0x10) =
         ((int)((ulong)((long)iVar3 * (long)(int)(((param_3 + 0x20U & 0xffffffc0) - param_3) + 0x20)
                       ) >> 0x10) + (param_2 >> 10)) * 0x400;
    *(int *)(param_1 + 0x14) = iVar3;
    *(int *)(param_1 + 0x18) = iVar2;
    *(int *)(param_1 + 0x1c) = iVar1 + -1;
  }
  return iVar2 != iVar1;
}



/* Entry: 10834d2e8; end: 10834d33b;  */

uint FUN_10834d2e8(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (param_2 * -0xf + param_1 * 8 + param_3 * 6 + param_4) * 0x13 >> 9;
  uVar2 = (param_1 + param_2 * 6 + param_3 * -0xf + param_4 * 8) * 0x13 >> 9;
  uVar3 = -uVar1;
  if (-1 < (int)uVar1) {
    uVar3 = uVar1;
  }
  uVar1 = -uVar2;
  if (-1 < (int)uVar2) {
    uVar1 = uVar2;
  }
  if (uVar3 <= uVar1) {
    uVar3 = uVar1;
  }
  return uVar3;
}



/* Entry: 10834d33c; end: 10834d373;  */

void FUN_10834d33c(long param_1)

{
  undefined1 (*pauVar1) [12];
  int iVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  int iVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  
  lVar8 = param_1;
  func_0x00010834d0c4();
  if ((int)lVar8 != 0) {
    iVar3 = *(int *)(param_1 + 0x28);
    bVar4 = *(byte *)(param_1 + 0x22);
    bVar5 = *(byte *)(param_1 + 0x23);
    lVar8 = param_1;
    iVar9 = (int)*(char *)(param_1 + 0x21);
    iVar7 = *(int *)(param_1 + 0x2c);
    do {
      if (iVar9 < -1) {
        pauVar1 = (undefined1 (*) [12])(param_1 + 0x30);
        iVar12 = (int)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20);
        iVar10 = (int)*(undefined8 *)*pauVar1;
        iVar11 = (int)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
        auVar14._12_4_ = iVar12;
        auVar14._0_12_ = *pauVar1;
        auVar6._12_4_ = iVar12;
        auVar6._0_12_ = *pauVar1;
        auVar14 = NEON_ext(auVar14,auVar6,8,1);
        uVar13 = NEON_sshl(auVar14._0_8_,CONCAT44(-(uint)bVar4,-(uint)bVar4),4);
        iVar3 = (iVar10 >> (bVar5 & 0x1f)) + iVar3;
        iVar2 = (iVar11 >> (bVar5 & 0x1f)) + iVar7;
        *(int *)(param_1 + 0x38) =
             (int)*(undefined8 *)(param_1 + 0x40) + (int)*(undefined8 *)(param_1 + 0x38);
        *(int *)(param_1 + 0x3c) = (int)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20) + iVar12;
        *(int *)(param_1 + 0x30) = (int)uVar13 + iVar10;
        *(int *)(param_1 + 0x34) = (int)((ulong)uVar13 >> 0x20) + iVar11;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x48);
        iVar2 = *(int *)(param_1 + 0x4c);
      }
      if (iVar2 <= iVar7) {
        iVar2 = iVar7;
      }
      func_0x00010834d448();
      iVar10 = iVar9 + 1;
    } while ((iVar9 < -1) && (iVar9 = iVar10, iVar7 = iVar2, (int)lVar8 == 0));
    *(int *)(param_1 + 0x28) = iVar3;
    *(int *)(param_1 + 0x2c) = iVar2;
    *(char *)(param_1 + 0x21) = (char)iVar10;
    return;
  }
  return;
}



/* Entry: 10834d374; end: 10834d433;  */

void FUN_10834d374(long param_1)

{
  undefined1 (*pauVar1) [12];
  int iVar2;
  bool bVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  undefined1 auVar7 [16];
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  
  iVar9 = (int)param_1;
  iVar4 = *(int *)(param_1 + 0x28);
  bVar5 = *(byte *)(param_1 + 0x22);
  bVar6 = *(byte *)(param_1 + 0x23);
  iVar10 = (int)*(char *)(param_1 + 0x21);
  iVar8 = *(int *)(param_1 + 0x2c);
  do {
    if (iVar10 < -1) {
      pauVar1 = (undefined1 (*) [12])(param_1 + 0x30);
      iVar13 = (int)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20);
      iVar11 = (int)*(undefined8 *)*pauVar1;
      iVar12 = (int)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
      auVar15._12_4_ = iVar13;
      auVar15._0_12_ = *pauVar1;
      auVar7._12_4_ = iVar13;
      auVar7._0_12_ = *pauVar1;
      auVar15 = NEON_ext(auVar15,auVar7,8,1);
      uVar14 = NEON_sshl(auVar15._0_8_,CONCAT44(-(uint)bVar5,-(uint)bVar5),4);
      iVar4 = (iVar11 >> (bVar6 & 0x1f)) + iVar4;
      iVar2 = (iVar12 >> (bVar6 & 0x1f)) + iVar8;
      *(int *)(param_1 + 0x38) =
           (int)*(undefined8 *)(param_1 + 0x40) + (int)*(undefined8 *)(param_1 + 0x38);
      *(int *)(param_1 + 0x3c) = (int)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20) + iVar13;
      *(int *)(param_1 + 0x30) = (int)uVar14 + iVar11;
      *(int *)(param_1 + 0x34) = (int)((ulong)uVar14 >> 0x20) + iVar12;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x48);
      iVar2 = *(int *)(param_1 + 0x4c);
    }
    if (iVar2 <= iVar8) {
      iVar2 = iVar8;
    }
    func_0x00010834d448();
    iVar11 = iVar10 + 1;
  } while ((iVar10 < -1) && (bVar3 = iVar9 == 0, iVar9 = 0, iVar10 = iVar11, iVar8 = iVar2, bVar3));
  *(int *)(param_1 + 0x28) = iVar4;
  *(int *)(param_1 + 0x2c) = iVar2;
  *(char *)(param_1 + 0x21) = (char)iVar11;
  return;
}



/* Entry: 10834d434; end: 10834d60f;  */

void FUN_10834d434(void)

{
  return;
}



/* Entry: 10834d610; end: 10834d693;  */

void FUN_10834d610(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  long unaff_x19;
  undefined4 *unaff_x21;
  
  uVar5 = (undefined4)((ulong)param_1 >> 0x20);
  iVar3 = (int)param_1;
  func_0x00010834e1ac();
  func_0x0001081865ac();
  lVar1 = CONCAT44(uVar5,iVar3);
  uVar6 = (ulong)*(uint *)(unaff_x19 + 0x248);
  FUN_10834d694(*unaff_x21,unaff_x21[1],unaff_x21[2],unaff_x21[3]);
  if (iVar3 == 0) {
    return;
  }
  iVar4 = iVar3;
  if (((*(int *)(lVar1 + 0x14) == 0) && (*(char *)(lVar1 + 0x20) == '\0')) &&
     (*(int *)(unaff_x19 + 0x24) != 0)) {
    func_0x00010834e230();
    func_0x00010834d458();
    iVar4 = 0;
    if (iVar3 != 0) {
      if (iVar3 != 2) {
        return;
      }
      *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x19 + 0x24) + -1;
      return;
    }
  }
  func_0x00010834e1d8();
  func_0x00010840f37c();
  iVar3 = *(int *)(CONCAT44(uVar5,iVar4) + 0x14);
  if (iVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10834d7b4);
    (*pcVar2)();
  }
  *(ulong *)(*(long *)(CONCAT44(uVar5,iVar4) + 8) + (long)iVar3 * 8 + -8) = uVar6;
  return;
}



/* Entry: 10834d694; end: 10834d777;  */

bool FUN_10834d694(float param_1,float param_2,float param_3,float param_4,long param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  int iVar7;
  float fVar8;
  
  uVar6 = 1;
  fVar8 = (float)(1 << (ulong)(param_6 + 6U & 0x1f));
  iVar5 = (int)(param_2 * fVar8);
  iVar7 = (int)(param_4 * fVar8);
  iVar2 = iVar7;
  iVar4 = (int)(param_3 * fVar8);
  iVar3 = (int)(param_1 * fVar8);
  if (iVar7 < iVar5) {
    uVar6 = 0xff;
    iVar2 = iVar5;
    iVar4 = (int)(param_1 * fVar8);
    iVar5 = iVar7;
    iVar3 = (int)(param_3 * fVar8);
  }
  iVar1 = (int)(iVar5 + 0x20U) >> 6;
  iVar7 = iVar2 + 0x20 >> 6;
  if (iVar1 != iVar7) {
    iVar4 = iVar4 - iVar3;
    FUN_10832fe8c(iVar4,iVar2 - iVar5);
    *(int *)(param_5 + 0x10) =
         (iVar3 + (int)((ulong)((long)iVar4 *
                               (long)(int)(((iVar5 + 0x20U & 0xffffffc0) - iVar5) + 0x20)) >> 0x10))
         * 0x400;
    *(int *)(param_5 + 0x14) = iVar4;
    *(int *)(param_5 + 0x18) = iVar1;
    *(int *)(param_5 + 0x1c) = iVar7 + -1;
    *(undefined2 *)(param_5 + 0x20) = 0;
    *(undefined1 *)(param_5 + 0x24) = uVar6;
    *(undefined1 *)(param_5 + 0x22) = 0;
  }
  return iVar1 != iVar7;
}



/* Entry: 10834d778; end: 10834d7b3;  */

void FUN_10834d778(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  func_0x00010840f37c();
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 8) + (long)*(int *)(param_1 + 0x14) * 8 + -8) = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10834d7b4);
  (*pcVar1)();
}



/* Entry: 10834d7b4; end: 10834da73;  */

void FUN_10834d7b4(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long unaff_x19;
  undefined8 unaff_x21;
  
  uVar5 = (undefined4)((ulong)param_1 >> 0x20);
  iVar3 = (int)param_1;
  func_0x00010834e1ac();
  func_0x0001081865ac();
  lVar1 = CONCAT44(uVar5,iVar3);
  FUN_10832f7ec();
  if (iVar3 == 0) {
    return;
  }
  iVar4 = iVar3;
  if (((*(int *)(lVar1 + 0x14) == 0) && (*(char *)(lVar1 + 0x2c) == '\0')) &&
     (*(int *)(unaff_x19 + 0x24) != 0)) {
    func_0x00010834e230();
    func_0x00010834d528();
    iVar4 = 0;
    if (iVar3 != 0) {
      if (iVar3 != 2) {
        return;
      }
      *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x19 + 0x24) + -1;
      return;
    }
  }
  func_0x00010834e1d8();
  func_0x00010840f37c();
  iVar3 = *(int *)(CONCAT44(uVar5,iVar4) + 0x14);
  if (iVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10834d7b4);
    (*pcVar2)();
  }
  *(undefined8 *)(*(long *)(CONCAT44(uVar5,iVar4) + 8) + (long)iVar3 * 8 + -8) = unaff_x21;
  return;
}



/* Entry: 10834da74; end: 10834daa3;  */

void FUN_10834da74(long param_1,undefined1 (*param_2) [16])

{
  int iVar1;
  undefined1 auVar2 [16];
  
  iVar1 = *(int *)(param_1 + 0x248);
  auVar2._4_4_ = -iVar1;
  auVar2._0_4_ = -iVar1;
  auVar2._8_4_ = -iVar1;
  auVar2._12_4_ = -iVar1;
  auVar2 = NEON_sshl(*param_2,auVar2,4);
  NEON_scvtf(auVar2,4);
  return;
}



/* Entry: 10834daa4; end: 10834db53;  */

/* WARNING: Type propagation algorithm not settling */

long *******
FUN_10834daa4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             long *******param_5,long *param_6,long *******param_7,long *******param_8)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long *******ppppppplVar2;
  long *******ppppppplVar3;
  long *******ppppppplVar4;
  undefined8 *puVar5;
  long *******ppppppplVar6;
  long *plVar7;
  long *******ppppppplVar8;
  undefined8 extraout_x8;
  long lVar9;
  undefined8 extraout_x8_00;
  long ******pppppplVar10;
  undefined4 *extraout_x8_01;
  long *******unaff_x20;
  ulong uVar11;
  long *******ppppppplVar12;
  int iVar13;
  long *******ppppppplVar14;
  undefined8 uStack_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  int iStack_218;
  long ******pppppplStack_210;
  long lStack_208;
  long *****ppppplStack_200;
  long *****ppppplStack_1f8;
  undefined4 *puStack_1f0;
  undefined2 uStack_1d8;
  long ******apppppplStack_1d0 [5];
  long *******ppppppplStack_1a8;
  char cStack_1a0;
  undefined8 uStack_158;
  long *plStack_150;
  long *******ppppppplStack_148;
  long *******ppppppplStack_140;
  long *******ppppppplStack_138;
  long *******ppppppplStack_130;
  long *******ppppppplStack_128;
  undefined1 ***pppuStack_120;
  code *pcStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  long ******pppppplStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined2 uStack_c8;
  long ******pppppplStack_c0;
  long ******apppppplStack_b8 [4];
  undefined8 uStack_98;
  undefined1 **ppuStack_50;
  code *pcStack_48;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  *param_7 = (long ******)0x28;
  if (((ulong)param_6 >> 0x20 == 0) &&
     (in_ZR = param_6 == (long *)0x6666667, param_6 < (long *)0x6666667)) {
    uVar11 = (ulong)(uint)((int)param_6 * 0x28);
    ppppppplVar14 = param_5 + 0x45;
    func_0x00010834e1bc(ppppppplVar14,uVar11);
    param_5[0x46] = (long ******)((long)ppppppplVar14 + uVar11);
    return ppppppplVar14;
  }
  _abort();
  uStack_28 = 0x10834dafc;
  *param_7 = (long ******)0x38;
  puStack_30 = &stack0xfffffffffffffff0;
  if (((ulong)param_6 >> 0x20 == 0) &&
     (in_ZR = param_6 == (long *)0x4924925, param_6 < (long *)0x4924925)) {
    uVar11 = (ulong)(uint)((int)param_6 * 0x38);
    ppppppplVar14 = param_5 + 0x45;
    func_0x00010834e1bc(ppppppplVar14,uVar11);
    param_5[0x46] = (long ******)((long)ppppppplVar14 + uVar11);
    return ppppppplVar14;
  }
  _abort();
  pcStack_48 = FUN_10834db54;
  plVar7 = param_6;
  ppppppplVar8 = param_7;
  ppppppplVar4 = param_8;
  ppuStack_50 = &puStack_30;
  func_0x00010834e1e4();
  ppppppplVar12 = (long *******)(long)*(int *)(*plVar7 + 0x30);
  ppppppplVar14 = ppppppplVar12;
  uStack_98 = extraout_x8;
  if (ppppppplVar8 == (long *******)0x0) {
LAB_10834dbbc:
    ppppppplVar8 = &pppppplStack_c0;
    ppppppplVar3 = param_5;
    ppppppplVar6 = ppppppplVar14;
    (*(code *)(*param_5)[2])();
    if (((ulong)ppppppplVar14 >> 0x20 != 0) || ((ulong)ppppppplVar14 >> 0x1d != 0)) {
      _abort();
      uVar1 = in_ZR;
      goto LAB_10834dd60;
    }
    ppppppplVar14 = (long *******)(ulong)(uint)((int)ppppppplVar14 << 3);
    ppppppplVar12 = param_5 + 0x45;
    ppppppplVar6 = ppppppplVar14;
    func_0x00010834e1bc();
    param_5[0x46] = (long ******)((long)ppppppplVar12 + (long)ppppppplVar14);
    param_5[1] = (long ******)ppppppplVar12;
    lVar9 = *param_6;
    uStack_f0 = *(undefined8 *)(lVar9 + 0x28);
    pppppplStack_100 = *(long *******)(lVar9 + 0x40);
    lStack_f8 = (long)pppppplStack_100 + (long)*(int *)(lVar9 + 0x48);
    uStack_e8 = uStack_f0;
    func_0x00010834e21c();
    uStack_c8 = 0;
    if (param_7 == (long *******)0x0) {
      while( true ) {
        ppppppplVar14 = &pppppplStack_100;
        FUN_1082d1ffc();
        unaff_x20 = ppppppplVar3;
        if (ppppppplVar14 == (long *******)0x0) break;
        in_ZR = (int)ppppppplVar6 == 1;
        if ((bool)in_ZR) {
          ppppppplVar2 = param_5;
          ppppppplVar8 = ppppppplVar3;
          ppppppplVar4 = ppppppplVar12;
          (*(code *)(*param_5)[7])();
          ppppppplVar6 = ppppppplVar14;
          if ((int)ppppppplVar2 == 0) {
            *ppppppplVar12 = (long ******)ppppppplVar3;
            ppppppplVar3 = (long *******)((long)ppppppplVar3 + (long)pppppplStack_c0);
            ppppppplVar12 = ppppppplVar12 + 1;
          }
          else {
            in_ZR = (int)ppppppplVar2 == 2;
            if ((bool)in_ZR) {
              ppppppplVar12 = ppppppplVar12 + -1;
            }
          }
        }
      }
    }
    else {
      ppppppplVar6 = param_7;
      (*(code *)(*param_5)[3])(param_5);
      uStack_110 = param_1;
      uStack_10c = param_2;
      uStack_108 = param_3;
      uStack_104 = param_4;
      while( true ) {
        pppppplVar10 = (long ******)&pppppplStack_100;
        FUN_1082d1ffc();
        unaff_x20 = ppppppplVar3;
        if (pppppplVar10 == (long ******)0x0) break;
        in_ZR = (int)ppppppplVar6 == 1;
        if ((bool)in_ZR) {
          param_7 = apppppplStack_b8;
          ppppppplVar8 = apppppplStack_b8;
          ppppppplVar6 = (long *******)&uStack_110;
          ppppppplVar4 = param_8;
          FUN_10835e238();
          for (param_6 = (long *)(ulong)((uint)pppppplVar10 &
                                        ((int)(uint)pppppplVar10 >> 0x1f ^ 0xffffffffU));
              param_6 != (long *)0x0; param_6 = (long *)((long)param_6 - 1)) {
            ppppppplVar14 = param_5;
            ppppppplVar6 = param_7;
            ppppppplVar8 = ppppppplVar3;
            ppppppplVar4 = ppppppplVar12;
            (*(code *)(*param_5)[7])();
            if ((int)ppppppplVar14 == 0) {
              ppppppplVar14 = ppppppplVar12 + 1;
              *ppppppplVar12 = (long ******)ppppppplVar3;
              ppppppplVar3 = (long *******)((long)ppppppplVar3 + (long)pppppplStack_c0);
            }
            else {
              in_ZR = (int)ppppppplVar14 == 2;
              ppppppplVar14 = ppppppplVar12;
              if ((bool)in_ZR) {
                ppppppplVar14 = ppppppplVar12 + -1;
              }
            }
            param_7 = param_7 + 1;
            ppppppplVar12 = ppppppplVar14;
          }
        }
      }
    }
    ppppppplVar3 = (long *******)((ulong)((long)ppppppplVar12 - (long)param_5[1]) >> 3);
  }
  else {
    pppppplStack_100 = (long ******)CONCAT71(pppppplStack_100._1_7_,1);
    ppppppplVar14 = &pppppplStack_100;
    ppppppplVar8 = (long *******)0x3;
    ppppppplVar6 = ppppppplVar12;
    func_0x000108154764();
    in_ZR = (char)pppppplStack_100 == '\x01';
    if ((bool)in_ZR) goto LAB_10834dbbc;
    ppppppplVar3 = (long *******)0x0;
  }
  func_0x00010834e1c4(uStack_98);
  uVar1 = 0;
  ppppppplVar14 = ppppppplVar12;
  if ((bool)in_ZR) {
    return ppppppplVar3;
  }
LAB_10834dd60:
  ___stack_chk_fail();
  pcStack_118 = FUN_10834dd64;
  plStack_150 = param_6;
  ppppppplStack_148 = param_7;
  ppppppplStack_140 = param_8;
  ppppppplStack_138 = ppppppplVar14;
  ppppppplStack_130 = unaff_x20;
  ppppppplStack_128 = param_5;
  pppuStack_120 = &ppuStack_50;
  func_0x00010834e1e4();
  pppppplVar10 = *ppppppplVar6;
  ppppplStack_200 = pppppplVar10[5];
  pppppplStack_210 = (long ******)pppppplVar10[8];
  lStack_208 = (long)pppppplStack_210 + (long)*(int *)(pppppplVar10 + 9);
  ppppplStack_1f8 = ppppplStack_200;
  uStack_158 = extraout_x8_00;
  func_0x00010834e21c();
  uStack_1d8 = 0;
  if (ppppppplVar8 == (long *******)0x0) {
    uStack_2a8 = (long ******)&uStack_2a0;
    iStack_218 = 0;
    ppppppplVar14 = ppppppplVar6;
    puStack_1f0 = extraout_x8_01;
    while( true ) {
      ppppppplVar4 = &pppppplStack_210;
      FUN_1082d1ffc();
      if (ppppppplVar4 == (long *******)0x0) break;
      iVar13 = (int)ppppppplVar14 + -1;
      uVar1 = iVar13 == 3;
      switch(iVar13) {
      case 0:
        (*(code *)(*ppppppplVar3)[4])(ppppppplVar3);
        ppppppplVar14 = ppppppplVar4;
        break;
      case 1:
        ppppppplVar14 = apppppplStack_1d0;
        FUN_10834df84(ppppppplVar3);
        break;
      case 2:
        puVar5 = &uStack_2a8;
        FUN_1082d25dc(*puStack_1f0,0x3e800000);
        for (iVar13 = 0; uVar1 = iVar13 == iStack_218, ppppppplVar14 = ppppppplVar4,
            iVar13 < iStack_218; iVar13 = iVar13 + 1) {
          ppppppplVar4 = apppppplStack_1d0;
          FUN_10834df84(ppppppplVar3,ppppppplVar4,puVar5);
          puVar5 = puVar5 + 2;
        }
        break;
      case 3:
        ppppppplVar12 = (long *******)&ppppppplStack_1a8;
        ppppppplVar14 = (long *******)&ppppppplStack_1a8;
        FUN_108351e50();
        for (lVar9 = 0; uVar1 = lVar9 == (int)ppppppplVar4, lVar9 <= (int)ppppppplVar4;
            lVar9 = lVar9 + 1) {
          ppppppplVar14 = ppppppplVar12;
          (*(code *)(*ppppppplVar3)[6])(ppppppplVar3);
          ppppppplVar12 = ppppppplVar12 + 3;
        }
      }
    }
    ppppppplVar3[1] = ppppppplVar3[3];
    ppppppplVar12 = (long *******)(ulong)*(uint *)((long)ppppppplVar3 + 0x24);
    ppppppplVar6 = (long *******)&uStack_2a8;
    FUN_1082d2744();
  }
  else {
    (*(code *)(*ppppppplVar3)[3])(ppppppplVar3,ppppppplVar8);
    uStack_2a8 = (long ******)CONCAT44(param_2,param_1);
    cStack_1a0 = '\x01';
    ppppppplVar14 = (long *******)&uStack_2a8;
    uStack_2a0 = param_3;
    uStack_29c = param_4;
    ppppppplStack_1a8 = ppppppplVar3;
    FUN_10834ec60(ppppppplVar6,ppppppplVar14,ppppppplVar4,FUN_10834e068,&ppppppplStack_1a8);
    ppppppplVar3[1] = ppppppplVar3[3];
    uVar1 = cStack_1a0 == '\x01';
    if ((bool)uVar1) {
      ppppppplVar12 = (long *******)(ulong)*(uint *)((long)ppppppplVar3 + 0x24);
    }
    else {
      ppppppplVar12 = (long *******)0x0;
    }
  }
  func_0x00010834e1c4(uStack_158);
  if ((bool)uVar1) {
    return ppppppplVar12;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  FUN_1083516a8();
  for (uVar11 = (ulong)((int)ppppppplVar4 + 1); uVar11 != 0; uVar11 = uVar11 - 1) {
    ppppppplVar4 = ppppppplVar6;
    (*(code *)(*ppppppplVar6)[5])(ppppppplVar6,ppppppplVar14);
    ppppppplVar14 = ppppppplVar14 + 2;
  }
  return ppppppplVar4;
}



/* Entry: 10834db54; end: 10834dd63;  */

long ******
FUN_10834db54(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             long ******param_5,long *param_6,long ******param_7,long ******param_8)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long ******pppppplVar2;
  long ******pppppplVar3;
  long ******pppppplVar4;
  undefined8 *puVar5;
  long ******pppppplVar6;
  long *plVar7;
  long ******pppppplVar8;
  undefined8 extraout_x8;
  long lVar9;
  undefined8 extraout_x8_00;
  long *****ppppplVar10;
  undefined4 *extraout_x8_01;
  long ******unaff_x20;
  long ******pppppplVar11;
  ulong uVar12;
  int iVar13;
  long ******pppppplVar14;
  undefined8 uStack_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  int iStack_1d8;
  long ****pppplStack_1d0;
  long lStack_1c8;
  long ***ppplStack_1c0;
  long ***ppplStack_1b8;
  undefined4 *puStack_1b0;
  undefined2 uStack_198;
  long ****apppplStack_190 [5];
  long *****ppppplStack_168;
  char cStack_160;
  undefined8 uStack_118;
  long *plStack_110;
  long *****ppppplStack_108;
  long *****ppppplStack_100;
  long *****ppppplStack_f8;
  long *****ppppplStack_f0;
  long *****ppppplStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  long ****pppplStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined2 uStack_88;
  long ****pppplStack_80;
  long ****apppplStack_78 [4];
  undefined8 uStack_58;
  
  plVar7 = param_6;
  pppppplVar8 = param_7;
  pppppplVar4 = param_8;
  func_0x00010834e1e4();
  pppppplVar11 = (long ******)(long)*(int *)(*plVar7 + 0x30);
  pppppplVar14 = pppppplVar11;
  uStack_58 = extraout_x8;
  if (pppppplVar8 == (long ******)0x0) {
LAB_10834dbbc:
    pppppplVar8 = (long ******)&pppplStack_80;
    pppppplVar3 = param_5;
    pppppplVar6 = pppppplVar14;
    (*(code *)(*param_5)[2])();
    if (((ulong)pppppplVar14 >> 0x20 != 0) || ((ulong)pppppplVar14 >> 0x1d != 0)) {
      _abort();
      uVar1 = in_ZR;
      goto LAB_10834dd60;
    }
    pppppplVar14 = (long ******)(ulong)(uint)((int)pppppplVar14 << 3);
    pppppplVar11 = param_5 + 0x45;
    pppppplVar6 = pppppplVar14;
    func_0x00010834e1bc();
    param_5[0x46] = (long *****)((long)pppppplVar11 + (long)pppppplVar14);
    param_5[1] = (long *****)pppppplVar11;
    lVar9 = *param_6;
    uStack_b0 = *(undefined8 *)(lVar9 + 0x28);
    pppplStack_c0 = *(long *****)(lVar9 + 0x40);
    lStack_b8 = (long)pppplStack_c0 + (long)*(int *)(lVar9 + 0x48);
    uStack_a8 = uStack_b0;
    func_0x00010834e21c();
    uStack_88 = 0;
    if (param_7 == (long ******)0x0) {
      while( true ) {
        pppppplVar14 = (long ******)&pppplStack_c0;
        FUN_1082d1ffc();
        unaff_x20 = pppppplVar3;
        if (pppppplVar14 == (long ******)0x0) break;
        in_ZR = (int)pppppplVar6 == 1;
        if ((bool)in_ZR) {
          pppppplVar2 = param_5;
          pppppplVar8 = pppppplVar3;
          pppppplVar4 = pppppplVar11;
          (*(code *)(*param_5)[7])();
          pppppplVar6 = pppppplVar14;
          if ((int)pppppplVar2 == 0) {
            *pppppplVar11 = (long *****)pppppplVar3;
            pppppplVar3 = (long ******)((long)pppppplVar3 + (long)pppplStack_80);
            pppppplVar11 = pppppplVar11 + 1;
          }
          else {
            in_ZR = (int)pppppplVar2 == 2;
            if ((bool)in_ZR) {
              pppppplVar11 = pppppplVar11 + -1;
            }
          }
        }
      }
    }
    else {
      pppppplVar6 = param_7;
      (*(code *)(*param_5)[3])(param_5);
      uStack_d0 = param_1;
      uStack_cc = param_2;
      uStack_c8 = param_3;
      uStack_c4 = param_4;
      while( true ) {
        ppppplVar10 = &pppplStack_c0;
        FUN_1082d1ffc();
        unaff_x20 = pppppplVar3;
        if (ppppplVar10 == (long *****)0x0) break;
        in_ZR = (int)pppppplVar6 == 1;
        if ((bool)in_ZR) {
          param_7 = (long ******)apppplStack_78;
          pppppplVar8 = (long ******)apppplStack_78;
          pppppplVar6 = (long ******)&uStack_d0;
          pppppplVar4 = param_8;
          FUN_10835e238();
          for (param_6 = (long *)(ulong)((uint)ppppplVar10 &
                                        ((int)(uint)ppppplVar10 >> 0x1f ^ 0xffffffffU));
              param_6 != (long *)0x0; param_6 = (long *)((long)param_6 + -1)) {
            pppppplVar14 = param_5;
            pppppplVar6 = param_7;
            pppppplVar8 = pppppplVar3;
            pppppplVar4 = pppppplVar11;
            (*(code *)(*param_5)[7])();
            if ((int)pppppplVar14 == 0) {
              pppppplVar14 = pppppplVar11 + 1;
              *pppppplVar11 = (long *****)pppppplVar3;
              pppppplVar3 = (long ******)((long)pppppplVar3 + (long)pppplStack_80);
            }
            else {
              in_ZR = (int)pppppplVar14 == 2;
              pppppplVar14 = pppppplVar11;
              if ((bool)in_ZR) {
                pppppplVar14 = pppppplVar11 + -1;
              }
            }
            param_7 = param_7 + 1;
            pppppplVar11 = pppppplVar14;
          }
        }
      }
    }
    pppppplVar3 = (long ******)((ulong)((long)pppppplVar11 - (long)param_5[1]) >> 3);
  }
  else {
    pppplStack_c0 = (long ****)CONCAT71(pppplStack_c0._1_7_,1);
    pppppplVar14 = (long ******)&pppplStack_c0;
    pppppplVar8 = (long ******)0x3;
    pppppplVar6 = pppppplVar11;
    func_0x000108154764();
    in_ZR = (char)pppplStack_c0 == '\x01';
    if ((bool)in_ZR) goto LAB_10834dbbc;
    pppppplVar3 = (long ******)0x0;
  }
  func_0x00010834e1c4(uStack_58);
  uVar1 = 0;
  pppppplVar14 = pppppplVar11;
  if ((bool)in_ZR) {
    return pppppplVar3;
  }
LAB_10834dd60:
  ___stack_chk_fail();
  pcStack_d8 = FUN_10834dd64;
  plStack_110 = param_6;
  ppppplStack_108 = (long *****)param_7;
  ppppplStack_100 = (long *****)param_8;
  ppppplStack_f8 = (long *****)pppppplVar14;
  ppppplStack_f0 = (long *****)unaff_x20;
  ppppplStack_e8 = (long *****)param_5;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x00010834e1e4();
  ppppplVar10 = *pppppplVar6;
  ppplStack_1c0 = (long ***)ppppplVar10[5];
  pppplStack_1d0 = ppppplVar10[8];
  lStack_1c8 = (long)pppplStack_1d0 + (long)*(int *)(ppppplVar10 + 9);
  ppplStack_1b8 = ppplStack_1c0;
  uStack_118 = extraout_x8_00;
  func_0x00010834e21c();
  uStack_198 = 0;
  if (pppppplVar8 == (long ******)0x0) {
    uStack_268 = (long *****)&uStack_260;
    iStack_1d8 = 0;
    pppppplVar14 = pppppplVar6;
    puStack_1b0 = extraout_x8_01;
    while( true ) {
      pppppplVar4 = (long ******)&pppplStack_1d0;
      FUN_1082d1ffc();
      if (pppppplVar4 == (long ******)0x0) break;
      iVar13 = (int)pppppplVar14 + -1;
      uVar1 = iVar13 == 3;
      switch(iVar13) {
      case 0:
        (*(code *)(*pppppplVar3)[4])(pppppplVar3);
        pppppplVar14 = pppppplVar4;
        break;
      case 1:
        pppppplVar14 = (long ******)apppplStack_190;
        FUN_10834df84(pppppplVar3);
        break;
      case 2:
        puVar5 = &uStack_268;
        FUN_1082d25dc(*puStack_1b0,0x3e800000);
        for (iVar13 = 0; uVar1 = iVar13 == iStack_1d8, pppppplVar14 = pppppplVar4,
            iVar13 < iStack_1d8; iVar13 = iVar13 + 1) {
          pppppplVar4 = (long ******)apppplStack_190;
          FUN_10834df84(pppppplVar3,pppppplVar4,puVar5);
          puVar5 = puVar5 + 2;
        }
        break;
      case 3:
        pppppplVar11 = &ppppplStack_168;
        pppppplVar14 = &ppppplStack_168;
        FUN_108351e50();
        for (lVar9 = 0; uVar1 = lVar9 == (int)pppppplVar4, lVar9 <= (int)pppppplVar4;
            lVar9 = lVar9 + 1) {
          pppppplVar14 = pppppplVar11;
          (*(code *)(*pppppplVar3)[6])(pppppplVar3);
          pppppplVar11 = pppppplVar11 + 3;
        }
      }
    }
    pppppplVar3[1] = pppppplVar3[3];
    pppppplVar11 = (long ******)(ulong)*(uint *)((long)pppppplVar3 + 0x24);
    pppppplVar6 = (long ******)&uStack_268;
    FUN_1082d2744();
  }
  else {
    (*(code *)(*pppppplVar3)[3])(pppppplVar3,pppppplVar8);
    uStack_268 = (long *****)CONCAT44(param_2,param_1);
    cStack_160 = '\x01';
    pppppplVar14 = (long ******)&uStack_268;
    uStack_260 = param_3;
    uStack_25c = param_4;
    ppppplStack_168 = (long *****)pppppplVar3;
    FUN_10834ec60(pppppplVar6,pppppplVar14,pppppplVar4,FUN_10834e068,&ppppplStack_168);
    pppppplVar3[1] = pppppplVar3[3];
    uVar1 = cStack_160 == '\x01';
    if ((bool)uVar1) {
      pppppplVar11 = (long ******)(ulong)*(uint *)((long)pppppplVar3 + 0x24);
    }
    else {
      pppppplVar11 = (long ******)0x0;
    }
  }
  func_0x00010834e1c4(uStack_118);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    __Unwind_Resume();
    FUN_1083516a8();
    for (uVar12 = (ulong)((int)pppppplVar4 + 1); uVar12 != 0; uVar12 = uVar12 - 1) {
      pppppplVar4 = pppppplVar6;
      (*(code *)(*pppppplVar6)[5])(pppppplVar6,pppppplVar14);
      pppppplVar14 = pppppplVar14 + 2;
    }
    return pppppplVar4;
  }
  return pppppplVar11;
}



/* Entry: 10834dd64; end: 10834df83;  */

long ** FUN_10834dd64(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     long *param_5,long **param_6,long param_7,long **param_8)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long **pplVar2;
  undefined8 extraout_x8;
  long *plVar3;
  undefined4 *extraout_x8_00;
  long **pplVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  int iStack_108;
  long *plStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined4 *puStack_e0;
  undefined2 uStack_c8;
  long *aplStack_c0 [5];
  long *plStack_98;
  char cStack_90;
  undefined8 uStack_48;
  
  func_0x00010834e1e4();
  plVar3 = *param_6;
  lStack_f0 = plVar3[5];
  plStack_100 = (long *)plVar3[8];
  lStack_f8 = (long)plStack_100 + (long)(int)plVar3[9];
  lStack_e8 = lStack_f0;
  uStack_48 = extraout_x8;
  func_0x00010834e21c();
  uStack_c8 = 0;
  if (param_7 == 0) {
    uStack_198 = (long *)&uStack_190;
    iStack_108 = 0;
    pplVar2 = param_6;
    puStack_e0 = extraout_x8_00;
    while( true ) {
      param_8 = &plStack_100;
      FUN_1082d1ffc();
      if (param_8 == (long **)0x0) break;
      iVar6 = (int)pplVar2 + -1;
      in_ZR = iVar6 == 3;
      switch(iVar6) {
      case 0:
        (**(code **)(*param_5 + 0x20))(param_5);
        pplVar2 = param_8;
        break;
      case 1:
        pplVar2 = aplStack_c0;
        FUN_10834df84(param_5);
        break;
      case 2:
        puVar1 = &uStack_198;
        FUN_1082d25dc(*puStack_e0,0x3e800000);
        for (iVar6 = 0; in_ZR = iVar6 == iStack_108, pplVar2 = param_8, iVar6 < iStack_108;
            iVar6 = iVar6 + 1) {
          param_8 = aplStack_c0;
          FUN_10834df84(param_5,param_8,puVar1);
          puVar1 = puVar1 + 2;
        }
        break;
      case 3:
        pplVar4 = &plStack_98;
        pplVar2 = &plStack_98;
        FUN_108351e50();
        for (lVar7 = 0; in_ZR = lVar7 == (int)param_8, lVar7 <= (int)param_8; lVar7 = lVar7 + 1) {
          pplVar2 = pplVar4;
          (**(code **)(*param_5 + 0x30))(param_5);
          pplVar4 = pplVar4 + 3;
        }
      }
    }
    param_5[1] = param_5[3];
    pplVar4 = (long **)(ulong)*(uint *)((long)param_5 + 0x24);
    param_6 = (long **)&uStack_198;
    FUN_1082d2744();
  }
  else {
    (**(code **)(*param_5 + 0x18))(param_5,param_7);
    uStack_198 = (long *)CONCAT44(param_2,param_1);
    cStack_90 = '\x01';
    pplVar2 = (long **)&uStack_198;
    uStack_190 = param_3;
    uStack_18c = param_4;
    plStack_98 = param_5;
    FUN_10834ec60(param_6,pplVar2,param_8,FUN_10834e068,&plStack_98);
    param_5[1] = param_5[3];
    in_ZR = cStack_90 == '\x01';
    if ((bool)in_ZR) {
      pplVar4 = (long **)(ulong)*(uint *)((long)param_5 + 0x24);
    }
    else {
      pplVar4 = (long **)0x0;
    }
  }
  func_0x00010834e1c4(uStack_48);
  if ((bool)in_ZR) {
    return pplVar4;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  FUN_1083516a8();
  for (uVar5 = (ulong)((int)param_8 + 1); uVar5 != 0; uVar5 = uVar5 - 1) {
    param_8 = param_6;
    (*(code *)(*param_6)[5])(param_6,pplVar2);
    pplVar2 = pplVar2 + 2;
  }
  return param_8;
}



/* Entry: 10834df84; end: 10834e037;  */

void FUN_10834df84(long *param_1,long param_2,int param_3)

{
  ulong uVar1;
  
  FUN_1083516a8();
  for (uVar1 = (ulong)(param_3 + 1); uVar1 != 0; uVar1 = uVar1 - 1) {
    (**(code **)(*param_1 + 0x28))(param_1,param_2);
    param_2 = param_2 + 0x10;
  }
  return;
}



/* Entry: 10834e038; end: 10834e03b;  */

undefined8 * FUN_10834e038(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3e730;
  FUN_10840f740(param_1 + 0x45);
  FUN_10840f118(param_1 + 2);
  return param_1;
}



/* Entry: 10834e03c; end: 10834e04f;  */

void FUN_10834e03c(void)

{
  FUN_10834e14c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10834e050; end: 10834e053;  */

undefined8 * FUN_10834e050(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3e730;
  FUN_10840f740(param_1 + 0x45);
  FUN_10840f118(param_1 + 2);
  return param_1;
}



/* Entry: 10834e054; end: 10834e067;  */

void FUN_10834e054(void)

{
  FUN_10834e14c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10834e068; end: 10834e14b;  */

undefined8 * FUN_10834e068(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  long lVar4;
  ulong uVar5;
  float fVar6;
  float afStack_58 [8];
  undefined8 uStack_38;
  
  func_0x00010834e1e4();
  uStack_38 = extraout_x8;
  do {
    puVar3 = param_1;
    FUN_10834ebe8(param_1,afStack_58);
    iVar2 = (int)puVar3;
    bVar1 = true;
    if (iVar2 == 6) {
LAB_10834e128:
      func_0x00010834e1c4(uStack_38);
      if (!bVar1) {
        ___stack_chk_fail();
        *puVar3 = &PTR_FUN_110a3e730;
        FUN_10840f740(puVar3 + 0x45);
        FUN_10840f118(puVar3 + 2);
        return puVar3;
      }
      return puVar3;
    }
    fVar6 = afStack_58[0] - afStack_58[0];
    for (uVar5 = 1; uVar5 < (ulong)(byte)(&UNK_10df18dec)[(ulong)puVar3 & 0xffffffff] << 1;
        uVar5 = uVar5 + 1) {
      fVar6 = fVar6 * afStack_58[uVar5];
    }
    if (NAN(fVar6)) {
      *(undefined1 *)(param_3 + 1) = 0;
      bVar1 = false;
      goto LAB_10834e128;
    }
    if (iVar2 == 1) {
      lVar4 = 0x20;
      goto LAB_10834e10c;
    }
    if (iVar2 == 4) {
      lVar4 = 0x30;
      goto LAB_10834e10c;
    }
    if (iVar2 == 2) {
      lVar4 = 0x28;
LAB_10834e10c:
      (**(code **)(*(long *)*param_3 + lVar4))((long *)*param_3,afStack_58);
    }
  } while( true );
}



/* Entry: 10834e14c; end: 10834e18b;  */

undefined8 * FUN_10834e14c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3e730;
  FUN_10840f740(param_1 + 0x45);
  FUN_10840f118(param_1 + 2);
  return param_1;
}



/* Entry: 10834e18c; end: 10834e243;  */

void FUN_10834e18c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10834e190);
  (*pcVar1)();
}



/* Entry: 10834e244; end: 10834e2fb;  */

undefined8 *
FUN_10834e244(undefined4 param_1,undefined4 param_2,float param_3,undefined4 param_4,long *param_5,
             undefined8 *param_6)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 extraout_x8;
  long lVar8;
  undefined8 extraout_x8_00;
  float *pfVar9;
  long extraout_x8_01;
  float *pfVar10;
  ulong uVar11;
  long *unaff_x19;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined8 uStack_c8;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  float afStack_58 [2];
  undefined8 auStack_50 [4];
  
  uStack_68 = param_1;
  func_0x00010834ef94();
  *param_5 = (long)param_5 + 0x14;
  param_5[1] = (long)param_5 + 0x1c4;
  uVar4 = (uint)&uStack_68;
  pfVar10 = afStack_58;
  uStack_64 = param_2;
  fStack_60 = param_3;
  uStack_5c = param_4;
  auStack_50[3] = extraout_x8;
  FUN_10835e238();
  for (lVar8 = 0; (ulong)(uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) << 3 != lVar8;
      lVar8 = lVar8 + 8) {
    puVar5 = (undefined8 *)*unaff_x19;
    puVar1 = (undefined4 *)unaff_x19[1];
    *puVar1 = 1;
    uVar12 = *(undefined8 *)((long)auStack_50 + lVar8 + -8);
    puVar5[1] = *(undefined8 *)((long)auStack_50 + lVar8);
    *puVar5 = uVar12;
    *unaff_x19 = (long)(puVar5 + 2);
    unaff_x19[1] = (long)(puVar1 + 1);
  }
  *(undefined4 *)unaff_x19[1] = 6;
  *unaff_x19 = (long)param_5 + 0x14;
  unaff_x19[1] = (long)param_5 + 0x1c4;
  bVar2 = *(int *)((long)unaff_x19 + 0x1c4) == 6;
  puVar5 = (undefined8 *)(ulong)!bVar2;
  func_0x00010834ef80(auStack_50[3],puVar5);
  if (bVar2) {
    return puVar5;
  }
  ___stack_chk_fail();
  func_0x00010834ef94();
  puVar5 = &uStack_110;
  uVar7 = 3;
  uStack_c8 = extraout_x8_00;
  FUN_10834e5c8();
  fVar16 = uStack_100._4_4_;
  fVar17 = pfVar10[1];
  uVar3 = uStack_100._4_4_ == fVar17;
  puVar6 = puVar5;
  if (uStack_100._4_4_ <= fVar17) goto LAB_10834e520;
  fVar14 = pfVar10[3];
  uVar3 = uStack_110._4_4_ == fVar14;
  if (fVar14 <= uStack_110._4_4_) goto LAB_10834e520;
  if (uStack_110._4_4_ < fVar17) {
    func_0x00010834f050();
    FUN_10834ee04(fVar17);
    if (((ulong)puVar6 & 1) == 0) {
      for (lVar8 = 4; lVar8 != 0x1c; lVar8 = lVar8 + 8) {
        if (*(float *)((long)&uStack_110 + lVar8) < fVar17) {
          *(float *)((long)&uStack_110 + lVar8) = fVar17;
        }
      }
      fVar16 = uStack_100._4_4_;
    }
    else {
      func_0x00010834ef70();
      if (fStack_d4 < fVar17) {
        fStack_d4 = fVar17;
      }
      uStack_108 = CONCAT44(fStack_d4,fStack_d8);
      uStack_110 = CONCAT44(fVar17,fStack_e0);
      fStack_dc = fVar17;
    }
  }
  if (fVar14 < fVar16) {
    func_0x00010834f050();
    FUN_10834ee04(fVar14);
    if (((ulong)puVar6 & 1) == 0) {
      for (lVar8 = 4; lVar8 != 0x1c; lVar8 = lVar8 + 8) {
        if (fVar14 < *(float *)((long)&uStack_110 + lVar8)) {
          *(float *)((long)&uStack_110 + lVar8) = fVar14;
        }
      }
    }
    else {
      func_0x00010834ef70();
      if (fVar14 < fStack_e4) {
        fStack_e4 = fVar14;
      }
      uStack_100 = CONCAT44(fVar14,fStack_e0);
      uStack_108 = CONCAT44(fStack_e4,fStack_e8);
      fStack_dc = fVar14;
    }
  }
  uVar12 = uStack_110;
  fVar16 = (float)uStack_110;
  fVar17 = (float)uStack_100;
  fVar14 = (float)uStack_100;
  if ((float)uStack_100 < (float)uStack_110) {
    uStack_110 = uStack_100;
    uStack_100 = uVar12;
    puVar5 = (undefined8 *)(ulong)((uint)puVar5 ^ 1);
    fVar14 = fVar16;
    fVar16 = fVar17;
  }
  fVar17 = *pfVar10;
  uVar3 = fVar14 == fVar17;
  if (fVar14 <= fVar17) {
LAB_10834e4f8:
    func_0x00010834efbc();
    fVar16 = (float)((ulong)uStack_110 >> 0x20);
    fVar14 = uStack_100._4_4_;
    func_0x00010834eff8();
    if ((bool)uVar3) {
      fVar16 = fVar14;
    }
    pfVar10 = (float *)*unaff_x19;
    *pfVar10 = fVar17;
    pfVar10[1] = param_3;
    pfVar10[2] = fVar17;
LAB_10834e518:
    pfVar10[3] = fVar16;
  }
  else {
    fVar15 = pfVar10[2];
    uVar3 = fVar16 == fVar15;
    if (fVar15 <= fVar16) {
      if ((*(byte *)(unaff_x19 + 2) & 1) != 0) goto LAB_10834e520;
      func_0x00010834efbc();
      fVar16 = (float)((ulong)uStack_110 >> 0x20);
      fVar17 = uStack_100._4_4_;
      func_0x00010834eff8();
      if ((bool)uVar3) {
        fVar16 = fVar17;
      }
      pfVar10 = (float *)*unaff_x19;
      *pfVar10 = fVar15;
      pfVar10[1] = param_3;
      pfVar10[2] = fVar15;
      goto LAB_10834e518;
    }
    uVar3 = fVar16 == fVar17;
    if (fVar16 < fVar17) {
      func_0x00010834f050();
      FUN_10834e628(fVar17);
      if ((int)puVar6 == 0) goto LAB_10834e4f8;
      func_0x00010834ef70();
      fVar13 = fStack_dc;
      fVar16 = uStack_f0._4_4_;
      func_0x00010834efbc();
      func_0x00010834eff8();
      if ((bool)uVar3) {
        fVar16 = fVar13;
      }
      pfVar9 = (float *)*unaff_x19;
      *pfVar9 = fVar17;
      pfVar9[1] = param_3;
      pfVar9[2] = fVar17;
      pfVar9[3] = fVar16;
      func_0x00010834f038();
      if (fStack_d8 < fVar17) {
        fStack_d8 = fVar17;
      }
      uStack_108 = CONCAT44(fStack_d4,fStack_d8);
      uStack_110 = CONCAT44(fStack_dc,fVar17);
      fStack_e0 = fVar17;
    }
    if (fVar14 <= fVar15) {
LAB_10834e5b8:
      uVar3 = fVar14 == fVar15;
      param_6 = &uStack_110;
      func_0x00010834f020();
      goto LAB_10834e520;
    }
    func_0x00010834f050();
    FUN_10834e628(fVar15);
    if ((int)puVar6 == 0) {
      fVar15 = pfVar10[2];
      fVar16 = fVar15;
      if ((float)uStack_108 <= fVar15) {
        fVar16 = (float)uStack_108;
      }
      fVar17 = fVar15;
      if (fVar14 <= fVar15) {
        fVar17 = fVar14;
      }
      uStack_108 = CONCAT44(uStack_108._4_4_,fVar16);
      uStack_100 = CONCAT44(uStack_100._4_4_,fVar17);
      goto LAB_10834e5b8;
    }
    func_0x00010834ef70();
    if (fVar15 < fStack_e8) {
      fStack_e8 = fVar15;
    }
    param_6 = &uStack_f0;
    fStack_e0 = fVar15;
    func_0x00010834f020();
    func_0x00010834efbc(pfVar10[2]);
    unaff_x19[1] = extraout_x8_01;
    uVar3 = (int)puVar5 == 0;
    func_0x00010834efe8();
  }
  func_0x00010834f038();
LAB_10834e520:
  func_0x00010834ef80(uStack_c8);
  if ((bool)uVar3) {
    return puVar6;
  }
  ___stack_chk_fail();
  fVar16 = *(float *)((long)param_6 + 4);
  fVar17 = *(float *)((long)param_6 + (uVar7 & 0xffffffff) * 8 + -4);
  if (fVar16 <= fVar17) {
    _memcpy();
  }
  else {
    uVar11 = (uVar7 & 0xffffffff) << 3;
    uVar7 = uVar7 & 0xffffffff;
    while (uVar7 != 0) {
      *puVar6 = *(undefined8 *)((long)param_6 + (uVar11 - 8));
      uVar11 = uVar11 - 8;
      puVar6 = puVar6 + 1;
      uVar7 = uVar11;
    }
  }
  return (undefined8 *)(ulong)(fVar17 < fVar16);
}



/* Entry: 10834e2fc; end: 10834e5c7;  */

undefined8 *
FUN_10834e2fc(undefined8 param_1,undefined8 param_2,float param_3,undefined8 param_4,
             undefined8 *param_5,float *param_6)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 extraout_x8;
  float *pfVar5;
  long extraout_x8_00;
  long lVar6;
  ulong uVar7;
  long *unaff_x19;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined8 uStack_58;
  
  func_0x00010834ef94();
  puVar8 = &uStack_a0;
  uVar4 = 3;
  uStack_58 = extraout_x8;
  FUN_10834e5c8();
  fVar12 = uStack_90._4_4_;
  fVar13 = param_6[1];
  uVar2 = uStack_90._4_4_ == fVar13;
  puVar3 = puVar8;
  if (uStack_90._4_4_ <= fVar13) goto LAB_10834e520;
  fVar10 = param_6[3];
  uVar2 = uStack_a0._4_4_ == fVar10;
  if (fVar10 <= uStack_a0._4_4_) goto LAB_10834e520;
  if (uStack_a0._4_4_ < fVar13) {
    func_0x00010834f050();
    FUN_10834ee04(fVar13);
    if (((ulong)puVar3 & 1) == 0) {
      for (lVar6 = 4; lVar6 != 0x1c; lVar6 = lVar6 + 8) {
        if (*(float *)((long)&uStack_a0 + lVar6) < fVar13) {
          *(float *)((long)&uStack_a0 + lVar6) = fVar13;
        }
      }
      fVar12 = uStack_90._4_4_;
    }
    else {
      func_0x00010834ef70();
      if (fStack_64 < fVar13) {
        fStack_64 = fVar13;
      }
      uStack_98 = CONCAT44(fStack_64,fStack_68);
      uStack_a0 = CONCAT44(fVar13,fStack_70);
      fStack_6c = fVar13;
    }
  }
  if (fVar10 < fVar12) {
    func_0x00010834f050();
    FUN_10834ee04(fVar10);
    if (((ulong)puVar3 & 1) == 0) {
      for (lVar6 = 4; lVar6 != 0x1c; lVar6 = lVar6 + 8) {
        if (fVar10 < *(float *)((long)&uStack_a0 + lVar6)) {
          *(float *)((long)&uStack_a0 + lVar6) = fVar10;
        }
      }
    }
    else {
      func_0x00010834ef70();
      if (fVar10 < fStack_74) {
        fStack_74 = fVar10;
      }
      uStack_90 = CONCAT44(fVar10,fStack_70);
      uStack_98 = CONCAT44(fStack_74,fStack_78);
      fStack_6c = fVar10;
    }
  }
  uVar1 = uStack_a0;
  fVar12 = (float)uStack_a0;
  fVar13 = (float)uStack_90;
  fVar10 = (float)uStack_90;
  if ((float)uStack_90 < (float)uStack_a0) {
    uStack_a0 = uStack_90;
    uStack_90 = uVar1;
    puVar8 = (undefined8 *)(ulong)((uint)puVar8 ^ 1);
    fVar10 = fVar12;
    fVar12 = fVar13;
  }
  fVar13 = *param_6;
  uVar2 = fVar10 == fVar13;
  if (fVar10 <= fVar13) {
LAB_10834e4f8:
    func_0x00010834efbc();
    fVar12 = (float)((ulong)uStack_a0 >> 0x20);
    fVar10 = uStack_90._4_4_;
    func_0x00010834eff8();
    if ((bool)uVar2) {
      fVar12 = fVar10;
    }
    pfVar5 = (float *)*unaff_x19;
    *pfVar5 = fVar13;
    pfVar5[1] = param_3;
    pfVar5[2] = fVar13;
LAB_10834e518:
    pfVar5[3] = fVar12;
  }
  else {
    fVar11 = param_6[2];
    uVar2 = fVar12 == fVar11;
    if (fVar11 <= fVar12) {
      if ((*(byte *)(unaff_x19 + 2) & 1) != 0) goto LAB_10834e520;
      func_0x00010834efbc();
      fVar12 = (float)((ulong)uStack_a0 >> 0x20);
      fVar13 = uStack_90._4_4_;
      func_0x00010834eff8();
      if ((bool)uVar2) {
        fVar12 = fVar13;
      }
      pfVar5 = (float *)*unaff_x19;
      *pfVar5 = fVar11;
      pfVar5[1] = param_3;
      pfVar5[2] = fVar11;
      goto LAB_10834e518;
    }
    uVar2 = fVar12 == fVar13;
    if (fVar12 < fVar13) {
      func_0x00010834f050();
      FUN_10834e628(fVar13);
      if ((int)puVar3 == 0) goto LAB_10834e4f8;
      func_0x00010834ef70();
      fVar9 = fStack_6c;
      fVar12 = uStack_80._4_4_;
      func_0x00010834efbc();
      func_0x00010834eff8();
      if ((bool)uVar2) {
        fVar12 = fVar9;
      }
      pfVar5 = (float *)*unaff_x19;
      *pfVar5 = fVar13;
      pfVar5[1] = param_3;
      pfVar5[2] = fVar13;
      pfVar5[3] = fVar12;
      func_0x00010834f038();
      if (fStack_68 < fVar13) {
        fStack_68 = fVar13;
      }
      uStack_98 = CONCAT44(fStack_64,fStack_68);
      uStack_a0 = CONCAT44(fStack_6c,fVar13);
      fStack_70 = fVar13;
    }
    if (fVar10 <= fVar11) {
LAB_10834e5b8:
      uVar2 = fVar10 == fVar11;
      param_5 = &uStack_a0;
      func_0x00010834f020();
      goto LAB_10834e520;
    }
    func_0x00010834f050();
    FUN_10834e628(fVar11);
    if ((int)puVar3 == 0) {
      fVar11 = param_6[2];
      fVar12 = fVar11;
      if ((float)uStack_98 <= fVar11) {
        fVar12 = (float)uStack_98;
      }
      fVar13 = fVar11;
      if (fVar10 <= fVar11) {
        fVar13 = fVar10;
      }
      uStack_98 = CONCAT44(uStack_98._4_4_,fVar12);
      uStack_90 = CONCAT44(uStack_90._4_4_,fVar13);
      goto LAB_10834e5b8;
    }
    func_0x00010834ef70();
    if (fVar11 < fStack_78) {
      fStack_78 = fVar11;
    }
    param_5 = &uStack_80;
    fStack_70 = fVar11;
    func_0x00010834f020();
    func_0x00010834efbc(param_6[2]);
    unaff_x19[1] = extraout_x8_00;
    uVar2 = (int)puVar8 == 0;
    func_0x00010834efe8();
  }
  func_0x00010834f038();
LAB_10834e520:
  func_0x00010834ef80(uStack_58);
  if ((bool)uVar2) {
    return puVar3;
  }
  ___stack_chk_fail();
  fVar12 = *(float *)((long)param_5 + 4);
  fVar13 = *(float *)((long)param_5 + (uVar4 & 0xffffffff) * 8 + -4);
  if (fVar12 <= fVar13) {
    _memcpy();
  }
  else {
    uVar7 = (uVar4 & 0xffffffff) << 3;
    uVar4 = uVar4 & 0xffffffff;
    while (uVar4 != 0) {
      *puVar3 = *(undefined8 *)((long)param_5 + (uVar7 - 8));
      uVar7 = uVar7 - 8;
      puVar3 = puVar3 + 1;
      uVar4 = uVar7;
    }
  }
  return (undefined8 *)(ulong)(fVar13 < fVar12);
}



/* Entry: 10834e5c8; end: 10834e627;  */

bool FUN_10834e5c8(undefined8 *param_1,long param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = *(float *)(param_2 + 4);
  fVar4 = *(float *)(param_2 + (ulong)param_3 * 8 + -4);
  if (fVar3 <= fVar4) {
    _memcpy(param_1,param_2,param_3 << 3);
  }
  else {
    uVar1 = (ulong)param_3 << 3;
    uVar2 = (ulong)param_3;
    while (uVar2 != 0) {
      *param_1 = *(undefined8 *)(param_2 + -8 + uVar1);
      uVar1 = uVar1 - 8;
      param_1 = param_1 + 1;
      uVar2 = uVar1;
    }
  }
  return fVar4 < fVar3;
}



/* Entry: 10834e628; end: 10834e69f;  */

void FUN_10834e628(float param_1,float *param_2,undefined8 *param_3)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  float *unaff_x19;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float afStack_30 [2];
  undefined8 uStack_28;
  
  fVar6 = *param_2;
  fVar7 = param_2[2];
  fVar10 = param_2[4];
  iVar1 = (int)afStack_30;
  func_0x00010834ef94(param_3);
  fVar10 = fVar10 + ((fVar6 - fVar7) - fVar7);
  uStack_28 = extraout_x8;
  FUN_108351300(fVar10,(fVar7 - fVar6) + (fVar7 - fVar6),fVar6 - param_1);
  if (iVar1 != 0) {
    *unaff_x19 = afStack_30[0];
    fVar10 = afStack_30[0];
  }
  bVar2 = iVar1 == 0;
  puVar3 = (undefined8 *)(ulong)!bVar2;
  func_0x00010834ef80(uStack_28);
  if (bVar2) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = puVar3;
  FUN_1083528b4();
  if (((ulong)puVar4 & 1) != 0) {
    return;
  }
  func_0x00010834eed4((long)puVar3 + 4);
  if (fVar10 == 1.0) {
    uVar5 = *puVar3;
    uVar9 = puVar3[3];
    uVar13 = puVar3[2];
    param_3[1] = puVar3[1];
    *param_3 = uVar5;
    param_3[3] = uVar9;
    param_3[2] = uVar13;
    uVar5 = puVar3[3];
    param_3[5] = uVar5;
    param_3[6] = uVar5;
    param_3[4] = uVar5;
    return;
  }
  uVar5 = *puVar3;
  uVar13 = puVar3[3];
  fVar6 = (float)puVar3[1];
  fVar11 = (float)puVar3[2];
  fVar7 = (float)((ulong)puVar3[1] >> 0x20);
  fVar12 = (float)((ulong)puVar3[2] >> 0x20);
  fVar14 = fVar6 + (fVar11 - fVar6) * fVar10;
  fVar15 = fVar7 + (fVar12 - fVar7) * fVar10;
  fVar8 = (float)((ulong)uVar5 >> 0x20);
  fVar6 = (float)uVar5 + (fVar6 - (float)uVar5) * fVar10;
  fVar8 = fVar8 + (fVar7 - fVar8) * fVar10;
  fVar7 = fVar6 + (fVar14 - fVar6) * fVar10;
  fVar16 = fVar8 + (fVar15 - fVar8) * fVar10;
  fVar11 = fVar11 + ((float)uVar13 - fVar11) * fVar10;
  fVar12 = fVar12 + ((float)((ulong)uVar13 >> 0x20) - fVar12) * fVar10;
  fVar14 = fVar14 + (fVar11 - fVar14) * fVar10;
  fVar15 = fVar15 + (fVar12 - fVar15) * fVar10;
  *param_3 = uVar5;
  param_3[2] = CONCAT44(fVar16,fVar7);
  param_3[1] = CONCAT44(fVar8,fVar6);
  param_3[4] = CONCAT44(fVar15,fVar14);
  param_3[3] = CONCAT44(fVar16 + (fVar15 - fVar16) * fVar10,fVar7 + (fVar14 - fVar7) * fVar10);
  param_3[5] = CONCAT44(fVar12,fVar11);
  param_3[6] = uVar13;
  return;
}



/* Entry: 10834e6a0; end: 10834e79b;  */

void FUN_10834e6a0(long *param_1,undefined8 *param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 auStack_b8 [5];
  undefined8 auStack_90 [5];
  undefined8 uStack_68;
  ulong uVar11;
  
  puVar6 = param_2;
  func_0x00010834ef94();
  *param_1 = (long)param_1 + 0x14;
  param_1[1] = (long)param_1 + 0x1c4;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_68 = extraout_x8;
  FUN_10838eb84(&uStack_c8);
  fVar10 = *(float *)(param_3 + 0xc);
  uVar11 = (ulong)(uint)fVar10;
  fVar14 = *(float *)(param_3 + 4);
  bVar1 = false;
  bVar2 = false;
  if (uStack_c8._4_4_ < fVar10) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(uStack_c0._4_4_) && !NAN(fVar14)) {
      bVar1 = uStack_c0._4_4_ == fVar14;
      bVar2 = fVar14 <= uStack_c0._4_4_;
    }
  }
  if (bVar2 && !bVar1) {
    puVar6 = auStack_90;
    FUN_1083516a8();
    uVar8 = 0;
    while( true ) {
      fVar10 = (float)uVar11;
      bVar1 = true;
      if (uVar8 == (int)param_2 + 1) break;
      iVar3 = (int)auStack_90 + (int)uVar8 * 0x10;
      puVar4 = auStack_b8;
      puVar6 = auStack_b8;
      func_0x000108351734();
      for (uVar9 = (ulong)(iVar3 + 1); uVar9 != 0; uVar9 = uVar9 - 1) {
        puVar6 = puVar4;
        FUN_10834e2fc();
        puVar4 = puVar4 + 2;
      }
      uVar8 = uVar8 + 1;
    }
  }
  func_0x00010834efcc();
  puVar4 = (undefined8 *)(ulong)!bVar1;
  func_0x00010834ef80(uStack_68);
  if (bVar1) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = puVar4;
  FUN_108352a24();
  if (((ulong)puVar5 & 1) != 0) {
    return;
  }
  func_0x00010834eed4(puVar4);
  if (fVar10 != 1.0) {
    uVar7 = *puVar4;
    uVar17 = puVar4[3];
    fVar14 = (float)puVar4[1];
    fVar15 = (float)puVar4[2];
    fVar20 = (float)((ulong)puVar4[1] >> 0x20);
    fVar16 = (float)((ulong)puVar4[2] >> 0x20);
    fVar18 = fVar14 + (fVar15 - fVar14) * fVar10;
    fVar19 = fVar20 + (fVar16 - fVar20) * fVar10;
    fVar12 = (float)((ulong)uVar7 >> 0x20);
    fVar14 = (float)uVar7 + (fVar14 - (float)uVar7) * fVar10;
    fVar12 = fVar12 + (fVar20 - fVar12) * fVar10;
    fVar20 = fVar14 + (fVar18 - fVar14) * fVar10;
    fVar21 = fVar12 + (fVar19 - fVar12) * fVar10;
    fVar15 = fVar15 + ((float)uVar17 - fVar15) * fVar10;
    fVar16 = fVar16 + ((float)((ulong)uVar17 >> 0x20) - fVar16) * fVar10;
    fVar18 = fVar18 + (fVar15 - fVar18) * fVar10;
    fVar19 = fVar19 + (fVar16 - fVar19) * fVar10;
    *puVar6 = uVar7;
    puVar6[2] = CONCAT44(fVar21,fVar20);
    puVar6[1] = CONCAT44(fVar12,fVar14);
    puVar6[4] = CONCAT44(fVar19,fVar18);
    puVar6[3] = CONCAT44(fVar21 + (fVar19 - fVar21) * fVar10,fVar20 + (fVar18 - fVar20) * fVar10);
    puVar6[5] = CONCAT44(fVar16,fVar15);
    puVar6[6] = uVar17;
    return;
  }
  uVar7 = *puVar4;
  uVar13 = puVar4[3];
  uVar17 = puVar4[2];
  puVar6[1] = puVar4[1];
  *puVar6 = uVar7;
  puVar6[3] = uVar13;
  puVar6[2] = uVar17;
  uVar7 = puVar4[3];
  puVar6[5] = uVar7;
  puVar6[6] = uVar7;
  puVar6[4] = uVar7;
  return;
}



/* Entry: 10834e79c; end: 10834e7e3;  */

void FUN_10834e79c(float param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  puVar1 = param_2;
  FUN_108352a24();
  if (((ulong)puVar1 & 1) != 0) {
    return;
  }
  FUN_10834eed4(param_2);
  if (param_1 == 1.0) {
    uVar2 = *param_2;
    uVar5 = param_2[3];
    uVar8 = param_2[2];
    param_3[1] = param_2[1];
    *param_3 = uVar2;
    param_3[3] = uVar5;
    param_3[2] = uVar8;
    uVar2 = param_2[3];
    param_3[5] = uVar2;
    param_3[6] = uVar2;
    param_3[4] = uVar2;
    return;
  }
  uVar2 = *param_2;
  uVar8 = param_2[3];
  fVar3 = (float)param_2[1];
  fVar6 = (float)param_2[2];
  fVar11 = (float)((ulong)param_2[1] >> 0x20);
  fVar7 = (float)((ulong)param_2[2] >> 0x20);
  fVar9 = fVar3 + (fVar6 - fVar3) * param_1;
  fVar10 = fVar11 + (fVar7 - fVar11) * param_1;
  fVar4 = (float)((ulong)uVar2 >> 0x20);
  fVar3 = (float)uVar2 + (fVar3 - (float)uVar2) * param_1;
  fVar4 = fVar4 + (fVar11 - fVar4) * param_1;
  fVar11 = fVar3 + (fVar9 - fVar3) * param_1;
  fVar12 = fVar4 + (fVar10 - fVar4) * param_1;
  fVar6 = fVar6 + ((float)uVar8 - fVar6) * param_1;
  fVar7 = fVar7 + ((float)((ulong)uVar8 >> 0x20) - fVar7) * param_1;
  fVar9 = fVar9 + (fVar6 - fVar9) * param_1;
  fVar10 = fVar10 + (fVar7 - fVar10) * param_1;
  *param_3 = uVar2;
  param_3[2] = CONCAT44(fVar12,fVar11);
  param_3[1] = CONCAT44(fVar4,fVar3);
  param_3[4] = CONCAT44(fVar10,fVar9);
  param_3[3] = CONCAT44(fVar12 + (fVar10 - fVar12) * param_1,fVar11 + (fVar9 - fVar11) * param_1);
  param_3[5] = CONCAT44(fVar7,fVar6);
  param_3[6] = uVar8;
  return;
}



/* Entry: 10834e7e4; end: 10834e837;  */

void FUN_10834e7e4(long *param_1,undefined8 *param_2,int param_3)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined4 *)param_1[1];
  *puVar1 = 4;
  param_1[1] = (long)(puVar1 + 1);
  if (param_3 == 0) {
    puVar3 = (undefined8 *)*param_1;
    uVar4 = *param_2;
    uVar6 = param_2[3];
    uVar5 = param_2[2];
    puVar3[1] = param_2[1];
    *puVar3 = uVar4;
    puVar3[3] = uVar6;
    puVar3[2] = uVar5;
  }
  else {
    puVar3 = param_2 + 3;
    for (lVar2 = 0; lVar2 != 0x20; lVar2 = lVar2 + 8) {
      *(undefined8 *)(*param_1 + lVar2) = *puVar3;
      puVar3 = puVar3 + -1;
    }
  }
  *param_1 = *param_1 + 0x20;
  return;
}



/* Entry: 10834e838; end: 10834ebe7;  */

void FUN_10834e838(long *param_1,float *param_2,float *param_3)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  float fVar7;
  undefined8 extraout_x8;
  undefined4 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long *unaff_x19;
  float *pfVar11;
  long lVar12;
  ushort uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  float fVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float afStack_1b0 [20];
  float afStack_160 [20];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  float fStack_d0;
  float fStack_cc;
  undefined8 uStack_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a4;
  float fStack_9c;
  undefined8 uStack_98;
  
  pfVar6 = param_2;
  func_0x00010834ef94();
  *param_1 = (long)param_1 + 0x14;
  param_1[1] = (long)param_1 + 0x1c4;
  afStack_160[0] = 0.0;
  afStack_160[1] = 0.0;
  afStack_160[2] = 0.0;
  afStack_160[3] = 0.0;
  uStack_98 = extraout_x8;
  FUN_10838eb84(afStack_160);
  fVar25 = param_3[3];
  fVar15 = SUB84(afStack_160._0_8_,4);
  bVar1 = false;
  uVar3 = false;
  if (param_3[1] < SUB84(afStack_160._8_8_,4)) {
    bVar1 = false;
    uVar3 = false;
    if (!NAN(fVar15) && !NAN(fVar25)) {
      bVar1 = fVar15 < fVar25;
      uVar3 = fVar15 == fVar25;
    }
  }
  if (bVar1) {
    uVar13 = NEON_umaxv(CONCAT44(CONCAT22(-(ushort)(4194304.0 < SUB84(afStack_160._8_8_,4)),
                                          -(ushort)(4194304.0 < (float)afStack_160._8_8_)),
                                 CONCAT22(-(ushort)(fVar15 < -4194304.0),
                                          -(ushort)((float)afStack_160._0_8_ < -4194304.0))),2);
    if ((uVar13 & 1) != 0) {
      FUN_10834e244(*param_2,param_2[1],param_2[6],param_2[7]);
      pfVar6 = param_3;
      goto LAB_10834ebb0;
    }
    pfVar6 = afStack_160;
    FUN_108351e50();
    for (lVar9 = 0; uVar3 = lVar9 == (int)param_2, lVar9 <= (int)param_2; lVar9 = lVar9 + 1) {
      iVar4 = (int)afStack_160 + (int)lVar9 * 0x18;
      pfVar11 = afStack_1b0;
      pfVar6 = afStack_1b0;
      func_0x000108351ed8();
      for (lVar12 = 0; lVar12 <= iVar4; lVar12 = lVar12 + 1) {
        puVar10 = &uStack_110;
        pfVar6 = pfVar11;
        FUN_10834e5c8(puVar10,pfVar11,4);
        uVar5 = (uint)puVar10;
        fVar15 = uStack_f8._4_4_;
        fVar25 = param_3[1];
        uVar21 = (ulong)(uint)fVar25;
        if (fVar25 < uStack_f8._4_4_) {
          fVar14 = param_3[3];
          if (uStack_110._4_4_ < fVar14) {
            fVar7 = uStack_110._4_4_;
            if (uStack_110._4_4_ < fVar25) {
              func_0x00010834f044();
              FUN_10834ee8c(uVar21);
              fVar25 = param_3[1];
              bVar1 = false;
              if ((fStack_b4 < fVar25) && (bVar1 = false, !NAN(fStack_ac) && !NAN(fVar25))) {
                bVar1 = fStack_ac < fVar25;
              }
              bVar2 = false;
              if ((bVar1) && (bVar2 = false, !NAN(fStack_a4) && !NAN(fVar25))) {
                bVar2 = fStack_a4 < fVar25;
              }
              if (bVar2) {
                uStack_e8 = CONCAT44(fStack_ac,fStack_b0);
                uStack_f0 = CONCAT44(fStack_b4,fStack_b8);
                pfVar6 = &fStack_d0;
                FUN_10834ee8c(&uStack_f0);
                fVar25 = param_3[1];
              }
              fStack_b4 = fVar25;
              if (fStack_ac < fStack_b4) {
                fStack_ac = fStack_b4;
              }
              func_0x00010834f05c();
              fVar14 = param_3[3];
              fVar7 = fStack_b4;
            }
            if (fVar15 <= fVar14) {
              fVar25 = (float)uStack_f8;
            }
            else {
              func_0x00010834f044();
              FUN_10834ee8c();
              fVar15 = param_3[3];
              if (fVar15 < fStack_bc) {
                fStack_bc = fVar15;
              }
              uStack_100 = CONCAT44(fStack_bc,fStack_c0);
              uStack_108 = uStack_c8;
              uStack_f8 = CONCAT44(fVar15,fStack_b8);
              fVar25 = fStack_b8;
              fStack_b4 = fVar15;
            }
            uVar22 = uStack_f8;
            uVar18 = uStack_110;
            fVar24 = (float)uStack_110;
            fVar14 = (float)uStack_110;
            if (fVar25 < (float)uStack_110) {
              uStack_110 = uStack_f8;
              uStack_f8 = uVar18;
              auVar19._8_8_ = uStack_100;
              auVar19._0_8_ = uStack_108;
              auVar19 = NEON_ext(auVar19,auVar19,8,1);
              uStack_100 = auVar19._8_8_;
              uStack_108 = auVar19._0_8_;
              uVar5 = uVar5 ^ 1;
              fVar15 = (float)((ulong)uVar18 >> 0x20);
              fVar14 = (float)uVar22;
              fVar7 = (float)((ulong)uVar22 >> 0x20);
              fVar25 = fVar24;
            }
            fVar20 = *param_3;
            uVar21 = (ulong)(uint)fVar20;
            bVar1 = fVar25 == fVar20;
            fVar24 = fVar7;
            if (fVar25 <= fVar20) {
              func_0x00010834efa8();
              if (bVar1) {
                fVar24 = fVar15;
                fVar15 = fVar7;
              }
              puVar8 = (undefined4 *)*unaff_x19;
              *puVar8 = (int)uVar21;
              puVar8[1] = fVar15;
              puVar8[2] = (int)uVar21;
LAB_10834eb58:
              puVar8[3] = fVar24;
LAB_10834eb5c:
              func_0x00010834f038();
            }
            else {
              fVar16 = param_3[2];
              bVar1 = fVar14 == fVar16;
              if (fVar16 <= fVar14) {
                if ((*(byte *)(unaff_x19 + 2) & 1) == 0) {
                  uVar17 = func_0x00010834efa8();
                  if (bVar1) {
                    fVar24 = fVar15;
                    fVar15 = fVar7;
                  }
                  puVar8 = (undefined4 *)*unaff_x19;
                  *puVar8 = uVar17;
                  puVar8[1] = fVar15;
                  puVar8[2] = uVar17;
                  goto LAB_10834eb58;
                }
              }
              else {
                uVar3 = fVar14 == fVar20;
                if (fVar14 < fVar20) {
                  func_0x00010834f044();
                  FUN_10834e79c(uVar21);
                  fVar14 = fStack_b4;
                  fVar15 = fStack_cc;
                  uVar18 = func_0x00010834efa8(*param_3,fStack_cc,fStack_b4);
                  if ((bool)uVar3) {
                    fVar15 = fVar14;
                  }
                  func_0x00010834efe8(uVar18,fVar15);
                  fStack_b8 = (float)func_0x00010834f038();
                  if (fStack_b0 < fStack_b8) {
                    fStack_b0 = fStack_b8;
                  }
                  func_0x00010834f05c();
                  fVar16 = param_3[2];
                }
                if (fVar16 < fVar25) {
                  func_0x00010834f044();
                  FUN_10834e79c();
                  fStack_b8 = param_3[2];
                  if (fStack_b8 < fStack_c0) {
                    fStack_c0 = fStack_b8;
                  }
                  pfVar6 = &fStack_d0;
                  func_0x00010834f02c();
                  fVar14 = param_3[2];
                  puVar8 = (undefined4 *)unaff_x19[1];
                  *puVar8 = 1;
                  unaff_x19[1] = (long)(puVar8 + 1);
                  fVar15 = fStack_b4;
                  fVar25 = fStack_9c;
                  if (uVar5 == 0) {
                    fVar15 = fStack_9c;
                    fVar25 = fStack_b4;
                  }
                  func_0x00010834efe8(fVar14,fVar15,fStack_9c,fVar25);
                  goto LAB_10834eb5c;
                }
                pfVar6 = (float *)&uStack_110;
                func_0x00010834f02c();
              }
            }
          }
        }
        pfVar11 = pfVar11 + 6;
      }
    }
  }
  func_0x00010834efcc();
  unaff_x19 = (long *)(ulong)!(bool)uVar3;
LAB_10834ebb0:
  func_0x00010834ef80(uStack_98);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  iVar4 = *(int *)unaff_x19[1];
  if (iVar4 == 4) {
    puVar10 = (undefined8 *)*unaff_x19;
    uVar18 = *puVar10;
    uVar23 = puVar10[3];
    uVar22 = puVar10[2];
    *(undefined8 *)(pfVar6 + 2) = puVar10[1];
    *(undefined8 *)pfVar6 = uVar18;
    *(undefined8 *)(pfVar6 + 6) = uVar23;
    *(undefined8 *)(pfVar6 + 4) = uVar22;
    lVar9 = 0x20;
  }
  else if (iVar4 == 2) {
    puVar10 = (undefined8 *)*unaff_x19;
    uVar18 = *puVar10;
    uVar22 = puVar10[1];
    *(undefined8 *)(pfVar6 + 4) = puVar10[2];
    *(undefined8 *)(pfVar6 + 2) = uVar22;
    *(undefined8 *)pfVar6 = uVar18;
    lVar9 = 0x18;
  }
  else {
    if (iVar4 != 1) {
      return;
    }
    uVar18 = *(undefined8 *)*unaff_x19;
    *(undefined8 *)(pfVar6 + 2) = ((undefined8 *)*unaff_x19)[1];
    *(undefined8 *)pfVar6 = uVar18;
    lVar9 = 0x10;
  }
  *unaff_x19 = *unaff_x19 + lVar9;
  unaff_x19[1] = unaff_x19[1] + 4;
  return;
}



/* Entry: 10834ebe8; end: 10834ec5f;  */

void FUN_10834ebe8(long *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar1 = *(int *)param_1[1];
  if (iVar1 == 4) {
    puVar3 = (undefined8 *)*param_1;
    uVar4 = *puVar3;
    uVar6 = puVar3[3];
    uVar5 = puVar3[2];
    param_2[1] = puVar3[1];
    *param_2 = uVar4;
    param_2[3] = uVar6;
    param_2[2] = uVar5;
    lVar2 = 0x20;
  }
  else if (iVar1 == 2) {
    puVar3 = (undefined8 *)*param_1;
    uVar5 = puVar3[1];
    uVar4 = *puVar3;
    param_2[2] = puVar3[2];
    param_2[1] = uVar5;
    *param_2 = uVar4;
    lVar2 = 0x18;
  }
  else {
    if (iVar1 != 1) {
      return;
    }
    uVar4 = *(undefined8 *)*param_1;
    param_2[1] = ((undefined8 *)*param_1)[1];
    *param_2 = uVar4;
    lVar2 = 0x10;
  }
  *param_1 = *param_1 + lVar2;
  param_1[1] = param_1[1] + 4;
  return;
}



/* Entry: 10834ec60; end: 10834ee03;  */

void FUN_10834ec60(long *param_1,undefined1 **param_2,undefined1 param_3,code *param_4,
                  undefined8 param_5)

{
  undefined1 **ppuVar1;
  undefined1 **ppuVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  long lVar5;
  undefined1 **ppuVar6;
  int iVar7;
  undefined1 auStack_338 [16];
  undefined1 uStack_328;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 *puStack_108;
  undefined2 uStack_f0;
  undefined1 *puStack_e8;
  undefined1 auStack_e0 [136];
  int iStack_58;
  
  puStack_e8 = auStack_e0;
  iStack_58 = 0;
  lVar5 = *param_1;
  uStack_118 = *(undefined8 *)(lVar5 + 0x28);
  puStack_128 = *(undefined1 **)(lVar5 + 0x40);
  puStack_120 = puStack_128 + *(int *)(lVar5 + 0x48);
  puStack_108 = (undefined4 *)0x0;
  if (*(long *)(lVar5 + 0x58) != 0) {
    puStack_108 = (undefined4 *)(*(long *)(lVar5 + 0x58) + -4);
  }
  uStack_f0 = 0;
  ppuVar4 = param_2;
  uStack_328 = param_3;
  uStack_110 = uStack_118;
LAB_10834ece0:
  do {
    ppuVar1 = &puStack_128;
    FUN_1082d1ffc();
    if (ppuVar1 == (undefined1 **)0x0) {
      FUN_1082d2744(&puStack_e8);
      return;
    }
  } while (3 < (int)ppuVar4 - 1U);
  ppuVar6 = (undefined1 **)((ulong)ppuVar4 >> 0x20 & 1);
  switch((int)ppuVar4) {
  case 1:
    puVar3 = (undefined1 *)0x0;
    ppuVar4 = param_2;
    FUN_10834e244(*(undefined4 *)ppuVar1,*(undefined4 *)((long)ppuVar1 + 4),
                  *(undefined4 *)(ppuVar1 + 1),*(undefined4 *)((long)ppuVar1 + 0xc));
    break;
  case 2:
    puVar3 = auStack_338;
    FUN_10834e6a0(puVar3,ppuVar1,param_2);
    ppuVar4 = ppuVar1;
    break;
  case 3:
    ppuVar2 = &puStack_e8;
    FUN_1082d25dc(*puStack_108,0x3e800000);
    for (iVar7 = 0; ppuVar4 = ppuVar1, iVar7 < iStack_58; iVar7 = iVar7 + 1) {
      puVar3 = auStack_338;
      ppuVar1 = ppuVar2;
      FUN_10834e6a0(puVar3,ppuVar2,param_2);
      if ((int)puVar3 != 0) {
        ppuVar1 = ppuVar6;
        (*param_4)(auStack_338,ppuVar6,param_5);
      }
      ppuVar2 = ppuVar2 + 2;
    }
    goto LAB_10834ece0;
  case 4:
    goto code_r0x00010834ed84;
  }
  if (((ulong)puVar3 & 1) != 0) goto code_r0x00010834edb0;
  goto LAB_10834ece0;
code_r0x00010834ed84:
  puVar3 = auStack_338;
  FUN_10834e838(puVar3,ppuVar1,param_2);
  ppuVar4 = ppuVar1;
  if ((int)puVar3 != 0) {
code_r0x00010834edb0:
    (*param_4)(auStack_338,ppuVar6,param_5);
    ppuVar4 = ppuVar6;
  }
  goto LAB_10834ece0;
}



/* Entry: 10834ee04; end: 10834ee1b;  */

void FUN_10834ee04(float param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  float *unaff_x19;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float afStack_30 [2];
  undefined8 uStack_28;
  
  fVar6 = *(float *)(param_2 + 4);
  fVar7 = *(float *)(param_2 + 0xc);
  fVar10 = *(float *)(param_2 + 0x14);
  iVar1 = (int)afStack_30;
  func_0x00010834ef94(param_3);
  fVar10 = fVar10 + ((fVar6 - fVar7) - fVar7);
  uStack_28 = extraout_x8;
  FUN_108351300(fVar10,(fVar7 - fVar6) + (fVar7 - fVar6),fVar6 - param_1);
  if (iVar1 != 0) {
    *unaff_x19 = afStack_30[0];
    fVar10 = afStack_30[0];
  }
  bVar2 = iVar1 == 0;
  puVar3 = (undefined8 *)(ulong)!bVar2;
  func_0x00010834ef80(uStack_28);
  if (bVar2) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = puVar3;
  FUN_1083528b4();
  if (((ulong)puVar4 & 1) != 0) {
    return;
  }
  func_0x00010834eed4((long)puVar3 + 4);
  if (fVar10 == 1.0) {
    uVar5 = *puVar3;
    uVar9 = puVar3[3];
    uVar13 = puVar3[2];
    param_3[1] = puVar3[1];
    *param_3 = uVar5;
    param_3[3] = uVar9;
    param_3[2] = uVar13;
    uVar5 = puVar3[3];
    param_3[5] = uVar5;
    param_3[6] = uVar5;
    param_3[4] = uVar5;
    return;
  }
  uVar5 = *puVar3;
  uVar13 = puVar3[3];
  fVar6 = (float)puVar3[1];
  fVar11 = (float)puVar3[2];
  fVar7 = (float)((ulong)puVar3[1] >> 0x20);
  fVar12 = (float)((ulong)puVar3[2] >> 0x20);
  fVar14 = fVar6 + (fVar11 - fVar6) * fVar10;
  fVar15 = fVar7 + (fVar12 - fVar7) * fVar10;
  fVar8 = (float)((ulong)uVar5 >> 0x20);
  fVar6 = (float)uVar5 + (fVar6 - (float)uVar5) * fVar10;
  fVar8 = fVar8 + (fVar7 - fVar8) * fVar10;
  fVar7 = fVar6 + (fVar14 - fVar6) * fVar10;
  fVar16 = fVar8 + (fVar15 - fVar8) * fVar10;
  fVar11 = fVar11 + ((float)uVar13 - fVar11) * fVar10;
  fVar12 = fVar12 + ((float)((ulong)uVar13 >> 0x20) - fVar12) * fVar10;
  fVar14 = fVar14 + (fVar11 - fVar14) * fVar10;
  fVar15 = fVar15 + (fVar12 - fVar15) * fVar10;
  *param_3 = uVar5;
  param_3[2] = CONCAT44(fVar16,fVar7);
  param_3[1] = CONCAT44(fVar8,fVar6);
  param_3[4] = CONCAT44(fVar15,fVar14);
  param_3[3] = CONCAT44(fVar16 + (fVar15 - fVar16) * fVar10,fVar7 + (fVar14 - fVar7) * fVar10);
  param_3[5] = CONCAT44(fVar12,fVar11);
  param_3[6] = uVar13;
  return;
}



/* Entry: 10834ee1c; end: 10834ee8b;  */

void FUN_10834ee1c(float param_1,float param_2,float param_3,float param_4,undefined8 param_5,
                  undefined8 *param_6)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  float *unaff_x19;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float afStack_30 [2];
  undefined8 uStack_28;
  
  iVar1 = (int)afStack_30;
  func_0x00010834ef94();
  param_3 = param_3 + ((param_1 - param_2) - param_2);
  uStack_28 = extraout_x8;
  FUN_108351300(param_3,(param_2 - param_1) + (param_2 - param_1),param_1 - param_4);
  if (iVar1 != 0) {
    *unaff_x19 = afStack_30[0];
    param_3 = afStack_30[0];
  }
  bVar2 = iVar1 == 0;
  puVar3 = (undefined8 *)(ulong)!bVar2;
  func_0x00010834ef80(uStack_28);
  if (bVar2) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = puVar3;
  FUN_1083528b4();
  if (((ulong)puVar4 & 1) != 0) {
    return;
  }
  func_0x00010834eed4((long)puVar3 + 4);
  if (param_3 == 1.0) {
    uVar5 = *puVar3;
    uVar8 = puVar3[3];
    uVar11 = puVar3[2];
    param_6[1] = puVar3[1];
    *param_6 = uVar5;
    param_6[3] = uVar8;
    param_6[2] = uVar11;
    uVar5 = puVar3[3];
    param_6[5] = uVar5;
    param_6[6] = uVar5;
    param_6[4] = uVar5;
    return;
  }
  uVar5 = *puVar3;
  uVar11 = puVar3[3];
  fVar6 = (float)puVar3[1];
  fVar9 = (float)puVar3[2];
  fVar14 = (float)((ulong)puVar3[1] >> 0x20);
  fVar10 = (float)((ulong)puVar3[2] >> 0x20);
  fVar12 = fVar6 + (fVar9 - fVar6) * param_3;
  fVar13 = fVar14 + (fVar10 - fVar14) * param_3;
  fVar7 = (float)((ulong)uVar5 >> 0x20);
  fVar6 = (float)uVar5 + (fVar6 - (float)uVar5) * param_3;
  fVar7 = fVar7 + (fVar14 - fVar7) * param_3;
  fVar14 = fVar6 + (fVar12 - fVar6) * param_3;
  fVar15 = fVar7 + (fVar13 - fVar7) * param_3;
  fVar9 = fVar9 + ((float)uVar11 - fVar9) * param_3;
  fVar10 = fVar10 + ((float)((ulong)uVar11 >> 0x20) - fVar10) * param_3;
  fVar12 = fVar12 + (fVar9 - fVar12) * param_3;
  fVar13 = fVar13 + (fVar10 - fVar13) * param_3;
  *param_6 = uVar5;
  param_6[2] = CONCAT44(fVar15,fVar14);
  param_6[1] = CONCAT44(fVar7,fVar6);
  param_6[4] = CONCAT44(fVar13,fVar12);
  param_6[3] = CONCAT44(fVar15 + (fVar13 - fVar15) * param_3,fVar14 + (fVar12 - fVar14) * param_3);
  param_6[5] = CONCAT44(fVar10,fVar9);
  param_6[6] = uVar11;
  return;
}



/* Entry: 10834ee8c; end: 10834eed3;  */

void FUN_10834ee8c(float param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  puVar1 = param_2;
  FUN_1083528b4();
  if (((ulong)puVar1 & 1) != 0) {
    return;
  }
  FUN_10834eed4((long)param_2 + 4);
  if (param_1 == 1.0) {
    uVar2 = *param_2;
    uVar5 = param_2[3];
    uVar8 = param_2[2];
    param_3[1] = param_2[1];
    *param_3 = uVar2;
    param_3[3] = uVar5;
    param_3[2] = uVar8;
    uVar2 = param_2[3];
    param_3[5] = uVar2;
    param_3[6] = uVar2;
    param_3[4] = uVar2;
    return;
  }
  uVar2 = *param_2;
  uVar8 = param_2[3];
  fVar3 = (float)param_2[1];
  fVar6 = (float)param_2[2];
  fVar11 = (float)((ulong)param_2[1] >> 0x20);
  fVar7 = (float)((ulong)param_2[2] >> 0x20);
  fVar9 = fVar3 + (fVar6 - fVar3) * param_1;
  fVar10 = fVar11 + (fVar7 - fVar11) * param_1;
  fVar4 = (float)((ulong)uVar2 >> 0x20);
  fVar3 = (float)uVar2 + (fVar3 - (float)uVar2) * param_1;
  fVar4 = fVar4 + (fVar11 - fVar4) * param_1;
  fVar11 = fVar3 + (fVar9 - fVar3) * param_1;
  fVar12 = fVar4 + (fVar10 - fVar4) * param_1;
  fVar6 = fVar6 + ((float)uVar8 - fVar6) * param_1;
  fVar7 = fVar7 + ((float)((ulong)uVar8 >> 0x20) - fVar7) * param_1;
  fVar9 = fVar9 + (fVar6 - fVar9) * param_1;
  fVar10 = fVar10 + (fVar7 - fVar10) * param_1;
  *param_3 = uVar2;
  param_3[2] = CONCAT44(fVar12,fVar11);
  param_3[1] = CONCAT44(fVar4,fVar3);
  param_3[4] = CONCAT44(fVar10,fVar9);
  param_3[3] = CONCAT44(fVar12 + (fVar10 - fVar12) * param_1,fVar11 + (fVar9 - fVar11) * param_1);
  param_3[5] = CONCAT44(fVar7,fVar6);
  param_3[6] = uVar8;
  return;
}



/* Entry: 10834eed4; end: 10834f06f;  */

float FUN_10834eed4(float param_1,float *param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar4 = *param_2;
  fVar3 = param_2[2];
  fVar2 = 0.0;
  fVar6 = 0.25;
  fVar5 = 3.4028235e+38;
  fVar7 = 0.5;
  do {
    fVar8 = fVar7 * ((fVar3 - fVar4) * 3.0 +
                    fVar7 * ((fVar4 + ((param_2[4] - fVar3) - fVar3)) * 3.0 +
                            fVar7 * ((param_2[6] + (fVar3 - param_2[4]) * 3.0) - fVar4)));
    fVar10 = ABS(fVar8 - (param_1 - fVar4));
    fVar9 = fVar7;
    if (fVar5 <= fVar10) {
      fVar10 = fVar5;
      fVar9 = fVar2;
    }
    fVar2 = fVar9;
    fVar9 = fVar6;
    if (param_1 - fVar4 <= fVar8) {
      fVar9 = -fVar6;
    }
    fVar9 = fVar7 + fVar9;
    fVar6 = fVar6 * 0.5;
    bVar1 = true;
    if ((0.25 < fVar10) && (bVar1 = false, !NAN(fVar7) && !NAN(fVar9))) {
      bVar1 = fVar7 == fVar9;
    }
    fVar5 = fVar10;
    fVar7 = fVar9;
  } while (!bVar1);
  return fVar2;
}



/* Entry: 10834f070; end: 10834f0cb;  */

void FUN_10834f070(undefined8 *param_1,int param_2,undefined1 param_3)

{
  undefined8 uVar1;
  int iStack_34;
  undefined8 uStack_30;
  undefined1 uStack_21;
  
  uStack_21 = param_3;
  iStack_34 = param_2;
  if (param_2 < 1) {
    FUN_10834f11c();
  }
  FUN_10834f0cc(&uStack_30,&iStack_34,&uStack_21);
  uVar1 = uStack_30;
  uStack_30 = 0;
  *param_1 = uVar1;
  func_0x00010834fec0(&uStack_30);
  return;
}



/* Entry: 10834f0cc; end: 10834f11b;  */

void FUN_10834f0cc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  __Znwm();
  FUN_10834f134();
  *param_1 = uVar1;
  return;
}



/* Entry: 10834f11c; end: 10834f133;  */

void FUN_10834f11c(void)

{
  _sysconf(0x3a);
  return;
}



/* Entry: 10834f134; end: 10834f227;  */

undefined8 * FUN_10834f134(undefined8 *param_1,uint param_2,undefined1 param_3)

{
  undefined8 *puStack_60;
  code *pcStack_58;
  
  param_1[1] = 0;
  param_1[2] = 0x100000000;
  param_1[4] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_110a3e790;
  param_1[6] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 9) = 1;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined1 *)((long)param_1 + 0x4c) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((long)param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0xd) = param_3;
  param_1[0xc] = 0;
  for (param_2 = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU); param_2 != 0; param_2 = param_2 - 1
      ) {
    pcStack_58 = FUN_10834f2c0;
    puStack_60 = param_1;
    FUN_10834f228(param_1 + 1,&pcStack_58,&puStack_60);
  }
  return param_1;
}



/* Entry: 10834f228; end: 10834f2bf;  */

long * FUN_10834f228(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if ((int)param_1[1] < (int)(*(uint *)((long)param_1 + 0xc) >> 1)) {
    plVar3 = (long *)(*param_1 + (long)(int)param_1[1] * 8);
    func_0x00010834ffd8();
  }
  else {
    uVar2 = 1;
    plVar1 = param_1;
    FUN_10834f4e8(0x3ff8000000000000,param_1,1);
    plVar3 = plVar1 + (int)param_1[1];
    func_0x00010834ffd8();
    FUN_10834f50c(param_1,plVar1,uVar2);
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return plVar3;
}



/* Entry: 10834f2c0; end: 10834f2eb;  */

void FUN_10834f2c0(ulong param_1)

{
  ulong uVar1;
  
  do {
    func_0x0001081efc58(param_1 + 0x58);
    uVar1 = param_1;
    FUN_10834f5e8();
  } while ((uVar1 & 1) != 0);
  return;
}



/* Entry: 10834f2ec; end: 10834f2ef;  */

undefined8 ** FUN_10834f2ec(undefined8 **param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  undefined8 ***pppuVar8;
  int iVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 extraout_x8;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 **ppuVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  long *plVar23;
  ulong uVar24;
  undefined8 **ppuVar25;
  undefined8 *puVar26;
  undefined8 uStack_130;
  undefined8 **ppuStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 **ppuStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 **ppuStack_d0;
  undefined8 **ppuStack_c8;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010834ff3c();
  uStack_38 = extraout_x8;
  for (iVar9 = 0; iVar13 = *(int *)(param_1 + 2), iVar9 < iVar13; iVar9 = iVar9 + 1) {
    uStack_40 = 0;
    param_2 = auStack_58;
    FUN_10834f304(param_1);
    func_0x00010834ff6c();
  }
  lVar17 = 0;
  for (lVar18 = 0; uVar5 = lVar18 == iVar13, lVar18 < iVar13; lVar18 = lVar18 + 1) {
    __ZNSt3__16thread4joinEv((long)param_1[1] + lVar17);
    iVar13 = *(int *)(param_1 + 2);
    lVar17 = lVar17 + 8;
  }
  FUN_108410074(param_1 + 0xb);
  FUN_108410074(param_1 + 9);
  FUN_10834f714(param_1 + 3);
  ppuVar6 = param_1 + 1;
  FUN_10834f8c0();
  func_0x00010834ff18(uStack_38);
  if ((bool)uVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  iVar9 = (int)param_2;
  while (iVar9 != 0) {
    func_0x000104bd46a0();
    iVar9 = (int)param_2;
  }
  __Unwind_Resume();
  if (ppuVar6[4] < (undefined8 *)0x80) {
    plVar23 = ppuVar6[1];
    plVar2 = ppuVar6[2];
    plVar20 = *ppuVar6;
    uVar24 = (long)plVar2 - (long)plVar23;
    ppuVar16 = ppuVar6 + 3;
    plVar19 = *ppuVar16;
    if (uVar24 < (ulong)((long)plVar19 - (long)plVar20)) {
      ppuVar7 = (undefined8 **)0x1000;
      __Znwm();
      if (plVar19 == plVar2) {
        if (plVar23 == plVar20) {
          lVar18 = (long)plVar19 - (long)plVar23 >> 2;
          if (plVar2 == plVar23) {
            lVar18 = 1;
          }
          ppuStack_d0 = ppuVar16;
          FUN_10834fe28();
          func_0x00010834fff8(lVar18 * 2 + 6);
          FUN_10834fe00(&puStack_f0,ppuVar6[1],ppuVar6[2]);
          puVar26 = ppuVar6[1];
          puVar15 = *ppuVar6;
          puVar22 = ppuVar6[3];
          puVar12 = ppuVar6[2];
          ppuVar6[1] = puStack_e8;
          *ppuVar6 = puStack_f0;
          ppuVar6[3] = puStack_d8;
          ppuVar6[2] = puStack_e0;
          puStack_f0 = puVar15;
          puStack_e8 = puVar26;
          puStack_e0 = puVar12;
          puStack_d8 = puVar22;
          func_0x000108350050();
          plVar23 = ppuVar6[1];
        }
        plVar23[-1] = (long)ppuVar7;
        ppuVar6[1] = plVar23;
        FUN_10834fd10(ppuVar6,ppuVar7);
      }
      else {
        *plVar2 = (long)ppuVar7;
        ppuVar6[2] = plVar2 + 1;
        ppuVar6 = ppuVar7;
      }
    }
    else {
      puVar15 = (undefined8 *)((long)plVar19 - (long)plVar20 >> 2);
      if (plVar19 == plVar20) {
        puVar15 = (undefined8 *)0x1;
      }
      ppuStack_f8 = ppuVar16;
      FUN_10834fe28();
      puVar26 = (undefined8 *)((long)puVar15 + uVar24);
      puVar12 = puVar15 + (long)param_2;
      uVar10 = 0x1000;
      puVar11 = param_2;
      puStack_118 = puVar15;
      puStack_110 = puVar26;
      puStack_108 = puVar26;
      puStack_100 = puVar12;
      __Znwm();
      ppuStack_128 = ppuVar6 + 5;
      uStack_120 = 0x80;
      puVar22 = puVar26;
      if (uVar24 == (long)param_2 * 8) {
        if (plVar2 == plVar23) {
          puVar22 = (undefined8 *)0x1;
          uStack_130 = uVar10;
          ppuStack_d0 = ppuVar16;
          FUN_10834fe28();
          puStack_d8 = puVar22 + (long)puVar11;
          puStack_f0 = puVar22;
          puStack_e8 = puVar22;
          puStack_e0 = puVar22;
          FUN_10834fe00(&puStack_f0,puVar26,puVar26);
          puVar1 = puStack_d8;
          puVar22 = puStack_e0;
          puVar14 = puStack_e8;
          puVar21 = puStack_f0;
          puStack_118 = puStack_f0;
          puStack_110 = puStack_e8;
          puStack_108 = puStack_e0;
          puStack_100 = puStack_d8;
          puStack_f0 = puVar15;
          puStack_e8 = puVar26;
          puStack_e0 = puVar26;
          puStack_d8 = puVar12;
          func_0x000108350050();
          puVar15 = puVar21;
          puVar26 = puVar14;
          puVar12 = puVar1;
        }
        else {
          puVar26 = puVar26 + (((long)puVar26 - (long)puVar15 >> 3) + 1) / -2;
          puVar22 = puVar26;
          puStack_110 = puVar26;
        }
      }
      puVar21 = puVar22 + 1;
      *puVar22 = uVar10;
      uStack_130 = 0;
      puVar22 = ppuVar6[2];
      puStack_108 = puVar21;
      while (puVar14 = ppuVar6[1], puVar22 != puVar14) {
        puVar14 = puVar26;
        if (puVar26 == puVar15) {
          if (puVar21 < puVar12) {
            lVar18 = (long)puVar21 - (long)puVar15;
            puVar1 = puVar21 + (((long)puVar12 - (long)puVar21 >> 3) + 1) / 2;
            puVar14 = (undefined8 *)((long)puVar1 - ((long)puVar21 - (long)puVar15));
            puVar21 = puVar1;
            if (lVar18 != 0) {
              _memmove(puVar14,puVar26,lVar18);
            }
          }
          else {
            lVar18 = (long)puVar12 - (long)puVar15 >> 2;
            if ((long)puVar12 - (long)puVar15 == 0) {
              lVar18 = 1;
            }
            ppuStack_d0 = ppuVar16;
            FUN_10834fe28(lVar18);
            func_0x00010834fff8(lVar18 * 2 + 6);
            FUN_10834fe00(&puStack_f0,puVar26,puVar21);
            puVar4 = puStack_d8;
            puVar3 = puStack_e0;
            puVar14 = puStack_e8;
            puVar1 = puStack_f0;
            puStack_f0 = puVar15;
            puStack_e8 = puVar26;
            puStack_e0 = puVar21;
            puStack_d8 = puVar12;
            func_0x000108350050();
            puVar15 = puVar1;
            puVar21 = puVar3;
            puVar12 = puVar4;
          }
        }
        puVar22 = puVar22 + -1;
        puVar26 = puVar14 + -1;
        *puVar26 = *puVar22;
      }
      puStack_118 = *ppuVar6;
      *ppuVar6 = puVar15;
      ppuVar6[1] = puVar26;
      puStack_100 = ppuVar6[3];
      puStack_108 = ppuVar6[2];
      ppuVar6[2] = puVar21;
      ppuVar6[3] = puVar12;
      puStack_110 = puVar14;
      func_0x00010834fe5c(&uStack_130);
      ppuVar6 = &puStack_118;
      func_0x00010834fe80(ppuVar6);
    }
    return ppuVar6;
  }
  ppuVar6[4] = ppuVar6[4] + -0x10;
  uVar10 = *ppuVar6[1];
  ppuVar6[1] = ppuVar6[1] + 1;
  pppuVar8 = &ppuStack_d0;
  puVar15 = ppuVar6[2];
  ppuVar16 = ppuVar6;
  if (puVar15 == ppuVar6[3]) {
    puVar26 = *ppuVar6;
    puVar12 = ppuVar6[1];
    if (puVar12 < puVar26 || (long)puVar12 - (long)puVar26 == 0) {
      ppuVar16 = (undefined8 **)((long)puVar15 - (long)puVar26 >> 2);
      if ((long)puVar15 - (long)puVar26 == 0) {
        ppuVar16 = (undefined8 **)0x1;
      }
      ppuVar7 = ppuVar16;
      FUN_10834fe28();
      ppuStack_d0 = ppuVar7;
      ppuStack_c8 = ppuVar7 + ((ulong)ppuVar16 >> 2);
      FUN_10834fe00(&ppuStack_d0,ppuVar6[1],ppuVar6[2]);
      puVar15 = ppuVar6[1];
      ppuVar25 = (undefined8 **)*ppuVar6;
      ppuVar6[1] = ppuStack_c8;
      *ppuVar6 = ppuStack_d0;
      ppuVar6[3] = ppuVar7 + (long)puVar12;
      ppuVar6[2] = ppuVar7 + ((ulong)ppuVar16 >> 2);
      ppuStack_d0 = ppuVar25;
      ppuStack_c8 = (undefined8 **)puVar15;
      func_0x00010834fe80(&ppuStack_d0);
      puVar15 = ppuVar6[2];
      ppuVar16 = pppuVar8;
    }
    else {
      lVar18 = (((long)puVar12 - (long)puVar26 >> 3) + 1) / -2;
      ppuVar7 = (undefined8 **)(puVar12 + lVar18);
      lVar17 = (long)puVar15 - (long)puVar12;
      if (lVar17 != 0) {
        ppuVar16 = ppuVar7;
        _memmove(ppuVar7,puVar12,lVar17);
        puVar12 = ppuVar6[1];
      }
      puVar15 = (undefined8 *)((long)ppuVar7 + lVar17);
      ppuVar6[1] = puVar12 + lVar18;
    }
  }
  *puVar15 = uVar10;
  ppuVar6[2] = puVar15 + 1;
  return ppuVar16;
}



/* Entry: 10834f2f0; end: 10834f303;  */

void FUN_10834f2f0(void)

{
  FUN_10834f928();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10834f304; end: 10834f39f;  */

void FUN_10834f304(long param_1)

{
  long lVar1;
  
  func_0x0001081efc58();
  lVar1 = 0;
  if (*(long *)(param_1 + 0x28) != *(long *)(param_1 + 0x20)) {
    lVar1 = (*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20)) * 0x10 + -1;
  }
  if (lVar1 == *(long *)(param_1 + 0x40) + *(long *)(param_1 + 0x38)) {
    FUN_10834f9ec(param_1 + 0x18);
  }
  FUN_10834f840(param_1 + 0x18);
  func_0x000105302f48();
  *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
  func_0x00010834ffb0();
  func_0x0001081efcac(param_1 + 0x58,1);
  return;
}



/* Entry: 10834f3a0; end: 10834f3df;  */

long FUN_10834f3a0(long param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 extraout_x8;
  long lVar4;
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [24];
  long lStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(char *)(param_1 + 0x68) == '\x01';
  lVar3 = param_1;
  if ((bool)uVar1) {
    lVar3 = param_1 + 0x58;
    FUN_1084101e0();
    if ((int)lVar3 != 0) {
      func_0x00010834ff3c();
      lStack_30 = 0;
      uStack_28 = extraout_x8;
      func_0x0001081efc58();
      func_0x000105302f48(auStack_68,
                          *(long *)(*(long *)(param_1 + 0x20) +
                                   (*(ulong *)(param_1 + 0x38) >> 7) * 8) +
                          (*(ulong *)(param_1 + 0x38) & 0x7f) * 0x20);
      FUN_10834f69c();
      func_0x000108350030();
      func_0x00010834ff6c();
      func_0x000108350048();
      lVar3 = lStack_30;
      if (lStack_30 != 0) {
        func_0x000104c003e8();
      }
      func_0x00010834ffc8();
      func_0x00010834ff18(uStack_28);
      if ((bool)uVar1) {
        return lVar3;
      }
      ___stack_chk_fail();
      puVar2 = auStack_48;
      func_0x0001006393ec();
      func_0x00010834ff2c();
      lVar3 = *(long *)(*(long *)(puVar2 + 8) + (*(ulong *)(puVar2 + 0x20) >> 7) * 8) +
              (*(ulong *)(puVar2 + 0x20) & 0x7f) * 0x20;
      func_0x0001006393ec(lVar3);
      lVar4 = *(long *)(puVar2 + 0x20);
      *(long *)(puVar2 + 0x28) = *(long *)(puVar2 + 0x28) + -1;
      *(ulong *)(puVar2 + 0x20) = lVar4 + 1U;
      if (0xff < lVar4 + 1U) {
        lVar3 = **(long **)(puVar2 + 8);
        __ZdlPv(lVar3);
        *(long *)(puVar2 + 8) = *(long *)(puVar2 + 8) + 8;
        *(long *)(puVar2 + 0x20) = *(long *)(puVar2 + 0x20) + -0x80;
      }
    }
  }
  return lVar3;
}



/* Entry: 10834f3e0; end: 10834f46b;  */

void FUN_10834f3e0(undefined8 param_1)

{
  code *pcVar1;
  int unaff_w19;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010834ff58();
  __ZNSt3__115__thread_structC1Ev();
  uStack_38 = param_1;
  __Znwm(0x18);
  func_0x00010834ff7c();
  func_0x000100489040();
  if (unaff_w19 == 0) {
    uStack_40 = 0;
    FUN_10834f4c0(&uStack_40);
    func_0x00010834ffa8();
    return;
  }
  func_0x00010835003c();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10834f448);
  (*pcVar1)();
}



/* Entry: 10834f46c; end: 10834f4bf;  */

undefined8 FUN_10834f46c(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1;
  __ZNSt3__119__thread_local_dataEv();
  *param_1 = 0;
  func_0x000100491558();
  (*(code *)param_1[1])(param_1[2]);
  FUN_10834f4c0(&puStack_28);
  return 0;
}



/* Entry: 10834f4c0; end: 10834f4e7;  */

void FUN_10834f4c0(long param_1)

{
  func_0x00010834ffe8();
  if (param_1 != 0) {
    func_0x0001004895c8();
    __ZdlPv();
  }
  return;
}



/* Entry: 10834f4e8; end: 10834f50b;  */

void FUN_10834f4e8(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if ((int)param_2 <= (int)(*(uint *)(param_1 + 1) ^ 0x7fffffff)) {
    pcStack_18 = (code *)0x7fffffff;
    puStack_20 = (undefined1 *)0x8;
    FUN_10840fe24(&puStack_20,*(uint *)(param_1 + 1) + (int)param_2);
    return;
  }
  func_0x00010bdb1a68();
  pcStack_18 = FUN_10834f50c;
  puStack_20 = &stack0xfffffffffffffff0;
  FUN_10834f590();
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    func_0x000108350028();
  }
  param_3 = param_3 >> 3;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *param_1 = param_2;
  *(uint *)((long)param_1 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 10834f50c; end: 10834f55f;  */

void FUN_10834f50c(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  FUN_10834f590();
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    func_0x000108350028();
  }
  param_3 = param_3 >> 3;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *param_1 = param_2;
  *(uint *)((long)param_1 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 10834f560; end: 10834f58f;  */

void FUN_10834f560(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0x7fffffff;
  uStack_20 = 8;
  FUN_10840fe24(&uStack_20,param_1);
  return;
}



/* Entry: 10834f590; end: 10834f5e7;  */

void FUN_10834f590(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = 0;
  for (lVar3 = 0; lVar3 < (int)param_1[1]; lVar3 = lVar3 + 1) {
    lVar1 = *param_1;
    *(undefined8 *)(param_2 + lVar2) = *(undefined8 *)(lVar1 + lVar2);
    *(undefined8 *)(lVar1 + lVar2) = 0;
    __ZNSt3__16threadD1Ev(lVar1 + lVar2);
    lVar2 = lVar2 + 8;
  }
  return;
}



/* Entry: 10834f5e8; end: 10834f69b;  */

long FUN_10834f5e8(long param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long lVar2;
  undefined8 extraout_x8;
  long lVar3;
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [24];
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x00010834ff3c();
  lStack_30 = 0;
  uStack_28 = extraout_x8;
  func_0x0001081efc58();
  func_0x000105302f48(auStack_68,
                      *(long *)(*(long *)(param_1 + 0x20) + (*(ulong *)(param_1 + 0x38) >> 7) * 8) +
                      (*(ulong *)(param_1 + 0x38) & 0x7f) * 0x20);
  FUN_10834f69c();
  func_0x000108350030();
  func_0x00010834ff6c();
  func_0x000108350048();
  lVar2 = lStack_30;
  if (lStack_30 != 0) {
    func_0x000104c003e8();
  }
  func_0x00010834ffc8();
  func_0x00010834ff18(uStack_28);
  if ((bool)in_ZR) {
    return lVar2;
  }
  ___stack_chk_fail();
  puVar1 = auStack_48;
  func_0x0001006393ec();
  func_0x00010834ff2c();
  lVar2 = *(long *)(*(long *)(puVar1 + 8) + (*(ulong *)(puVar1 + 0x20) >> 7) * 8) +
          (*(ulong *)(puVar1 + 0x20) & 0x7f) * 0x20;
  func_0x0001006393ec(lVar2);
  lVar3 = *(long *)(puVar1 + 0x20);
  *(long *)(puVar1 + 0x28) = *(long *)(puVar1 + 0x28) + -1;
  *(ulong *)(puVar1 + 0x20) = lVar3 + 1U;
  if (0xff < lVar3 + 1U) {
    lVar2 = **(long **)(puVar1 + 8);
    __ZdlPv(lVar2);
    *(long *)(puVar1 + 8) = *(long *)(puVar1 + 8) + 8;
    *(long *)(puVar1 + 0x20) = *(long *)(puVar1 + 0x20) + -0x80;
  }
  return lVar2;
}



/* Entry: 10834f69c; end: 10834f713;  */

void FUN_10834f69c(long param_1)

{
  ulong uVar1;
  
  func_0x0001006393ec(*(long *)(*(long *)(param_1 + 8) + (*(ulong *)(param_1 + 0x20) >> 7) * 8) +
                      (*(ulong *)(param_1 + 0x20) & 0x7f) * 0x20);
  uVar1 = *(long *)(param_1 + 0x20) + 1;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  *(ulong *)(param_1 + 0x20) = uVar1;
  if (0xff < uVar1) {
    __ZdlPv(**(undefined8 **)(param_1 + 8));
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x80;
  }
  return;
}



/* Entry: 10834f714; end: 10834f757;  */

long * FUN_10834f714(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_10834f758();
  puVar1 = (undefined8 *)param_1[2];
  for (puVar2 = (undefined8 *)param_1[1]; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    __ZdlPv(*puVar2);
  }
  FUN_10834f89c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10834f758; end: 10834f83f;  */

void FUN_10834f758(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  plVar6 = (long *)(*(long *)(param_1 + 8) + (*(ulong *)(param_1 + 0x20) >> 7) * 8);
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    lVar5 = 0;
  }
  else {
    lVar5 = *plVar6 + (*(ulong *)(param_1 + 0x20) & 0x7f) * 0x20;
  }
  lVar1 = param_1;
  FUN_10834f840();
  do {
    lVar7 = lVar5 + -0x1000;
    do {
      if (lVar5 == lVar1) {
        *(undefined8 *)(param_1 + 0x28) = 0;
        puVar2 = *(undefined8 **)(param_1 + 8);
        while (uVar4 = *(long *)(param_1 + 0x10) - (long)puVar2 >> 3, 2 < uVar4) {
          __ZdlPv(*puVar2);
          puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
          *(undefined8 **)(param_1 + 8) = puVar2;
        }
        if (uVar4 == 1) {
          uVar3 = 0x40;
        }
        else {
          if (uVar4 != 2) {
            return;
          }
          uVar3 = 0x80;
        }
        *(undefined8 *)(param_1 + 0x20) = uVar3;
        return;
      }
      func_0x0001006393ec(lVar5);
      lVar5 = lVar5 + 0x20;
      lVar7 = lVar7 + 0x20;
    } while (*plVar6 != lVar7);
    plVar6 = plVar6 + 1;
    lVar5 = *plVar6;
  } while( true );
}



/* Entry: 10834f840; end: 10834f86f;  */

long FUN_10834f840(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    uVar1 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28);
    return *(long *)(*(long *)(param_1 + 8) + (uVar1 >> 7) * 8) + (uVar1 & 0x7f) * 0x20;
  }
  return 0;
}


