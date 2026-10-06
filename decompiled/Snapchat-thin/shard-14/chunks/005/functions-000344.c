/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b2da578; end: 10b2da5b7;  */

void FUN_10b2da578(void)

{
  func_0x00010b2db43c();
  return;
}



/* Entry: 10b2da5b8; end: 10b2dad2f;  */

void FUN_10b2da5b8(long *param_1,long *param_2,undefined8 *param_3,ulong param_4)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  uint extraout_w8_03;
  uint extraout_w8_04;
  long lVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  undefined8 extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  int extraout_w9;
  int extraout_w9_00;
  uint uVar12;
  uint extraout_w9_01;
  uint extraout_w9_02;
  long *plVar13;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  undefined8 extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  undefined8 extraout_x9_05;
  long extraout_x9_06;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  int extraout_w10_12;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint extraout_w11_01;
  uint extraout_w11_02;
  uint extraout_w11_03;
  uint extraout_w11_04;
  uint extraout_w11_05;
  int extraout_w11_06;
  int extraout_w11_07;
  int extraout_w11_08;
  int extraout_w11_09;
  uint extraout_w11_10;
  uint extraout_w11_11;
  uint extraout_w11_12;
  uint extraout_w11_13;
  uint extraout_w11_14;
  uint extraout_w11_15;
  uint extraout_w11_16;
  uint extraout_w11_17;
  long lVar14;
  long extraout_x11;
  long lVar15;
  int extraout_w12;
  int extraout_w12_00;
  int extraout_w12_01;
  int extraout_w12_02;
  int extraout_w12_03;
  int extraout_w12_04;
  int extraout_w12_05;
  int extraout_w12_06;
  int extraout_w12_07;
  int extraout_w12_08;
  int extraout_w12_09;
  int extraout_w12_10;
  int extraout_w12_11;
  int extraout_w12_12;
  int extraout_w12_13;
  int extraout_w12_14;
  long lVar16;
  long lVar17;
  long *unaff_x19;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  undefined8 unaff_x30;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
LAB_10b2da5e8:
  plVar10 = param_2 + -2;
LAB_10b2da5fc:
  uVar20 = (long)param_2 - (long)param_1 >> 4;
  switch(uVar20) {
  case 0:
  case 1:
    goto LAB_10b2dad1c;
  case 2:
    func_0x00010b2db37c(param_2[-2]);
    uVar12 = extraout_w11_05;
    if (extraout_w10 != extraout_w12_05) {
      uVar12 = (uint)(extraout_w12_05 < extraout_w10);
    }
    if (uVar12 == 1) {
      *param_1 = extraout_x8_01;
      param_2[-2] = extraout_x9;
      lVar14 = param_1[1];
      param_1[1] = param_2[-1];
      param_2[-1] = lVar14;
    }
    goto LAB_10b2dad1c;
  case 3:
    plVar9 = param_1 + 2;
    func_0x00010b2db400();
    lVar11 = *plVar9;
    lVar14 = *param_1;
    iVar6 = *(int *)(lVar11 + 0x180);
    iVar7 = *(int *)(lVar14 + 0x180);
    lVar15 = *(long *)(lVar14 + 0x188);
    bVar1 = lVar15 < *(long *)(lVar11 + 0x188);
    if (iVar6 != iVar7) {
      bVar1 = iVar7 < iVar6;
    }
    lVar16 = *plVar10;
    bVar2 = *(long *)(lVar11 + 0x188) < *(long *)(lVar16 + 0x188);
    if (*(int *)(lVar16 + 0x180) != iVar6) {
      bVar2 = iVar6 < *(int *)(lVar16 + 0x180);
    }
    if (bVar1) {
      if (bVar2) {
        lVar11 = param_1[1];
        lVar15 = plVar10[1];
        *param_1 = lVar16;
        param_1[1] = lVar15;
        *plVar10 = lVar14;
        plVar10[1] = lVar11;
        return;
      }
      lVar16 = param_1[1];
      lVar17 = plVar9[1];
      *param_1 = lVar11;
      param_1[1] = lVar17;
      *plVar9 = lVar14;
      plVar9[1] = lVar16;
      lVar11 = *plVar10;
      bVar1 = lVar15 < *(long *)(lVar11 + 0x188);
      if (*(int *)(lVar11 + 0x180) != iVar7) {
        bVar1 = iVar7 < *(int *)(lVar11 + 0x180);
      }
      if (bVar1) {
        lVar15 = plVar10[1];
        *plVar9 = lVar11;
        plVar9[1] = lVar15;
        *plVar10 = lVar14;
        plVar10[1] = lVar16;
      }
    }
    else if (bVar2) {
      *plVar9 = lVar16;
      *plVar10 = lVar11;
      lVar14 = *plVar9;
      lVar11 = plVar9[1];
      plVar9[1] = plVar10[1];
      plVar10[1] = lVar11;
      func_0x00010b2db37c(lVar14);
      uVar12 = extraout_w11_10;
      if (extraout_w10_05 != extraout_w12_07) {
        uVar12 = (uint)(extraout_w12_07 < extraout_w10_05);
      }
      if (uVar12 == 1) {
        lVar14 = param_1[1];
        lVar11 = plVar9[1];
        *param_1 = extraout_x8_05;
        param_1[1] = lVar11;
        *plVar9 = extraout_x9_01;
        plVar9[1] = lVar14;
        return;
      }
    }
    return;
  case 4:
    func_0x00010b2db400(param_1,param_1 + 2,param_1 + 4,plVar10);
    func_0x00010b2db470();
    FUN_10b2dad30();
    func_0x00010b2db37c(*param_3);
    uVar12 = extraout_w11_11;
    if (extraout_w10_06 != extraout_w12_08) {
      uVar12 = (uint)(extraout_w12_08 < extraout_w10_06);
    }
    if (uVar12 == 1) {
      *plVar10 = extraout_x8_06;
      *param_3 = extraout_x9_02;
      lVar14 = *plVar10;
      lVar11 = param_2[-1];
      param_2[-1] = param_3[1];
      param_3[1] = lVar11;
      func_0x00010b2db37c(lVar14);
      uVar12 = extraout_w11_12;
      if (extraout_w10_07 != extraout_w12_09) {
        uVar12 = (uint)(extraout_w12_09 < extraout_w10_07);
      }
      if (uVar12 == 1) {
        *unaff_x19 = extraout_x8_07;
        *plVar10 = extraout_x9_03;
        lVar14 = *unaff_x19;
        lVar11 = unaff_x19[1];
        unaff_x19[1] = param_2[-1];
        param_2[-1] = lVar11;
        func_0x00010b2db37c(lVar14);
        uVar12 = extraout_w11_13;
        if (extraout_w10_08 != extraout_w12_10) {
          uVar12 = (uint)(extraout_w12_10 < extraout_w10_08);
        }
        if (uVar12 == 1) {
          func_0x00010b2db484();
        }
      }
    }
    return;
  case 5:
    plVar9 = plVar10;
    func_0x00010b2db400(param_1,param_1 + 2,param_1 + 4,param_1 + 6);
    func_0x00010b2db470();
    FUN_10b2dae34();
    func_0x00010b2db37c(*plVar9);
    uVar12 = extraout_w11_14;
    if (extraout_w10_09 != extraout_w12_11) {
      uVar12 = (uint)(extraout_w12_11 < extraout_w10_09);
    }
    if (uVar12 == 1) {
      *param_3 = extraout_x8_08;
      *plVar9 = extraout_x9_04;
      uVar5 = *param_3;
      lVar14 = param_3[1];
      param_3[1] = plVar9[1];
      plVar9[1] = lVar14;
      func_0x00010b2db37c(uVar5);
      uVar12 = extraout_w11_15;
      if (extraout_w10_10 != extraout_w12_12) {
        uVar12 = (uint)(extraout_w12_12 < extraout_w10_10);
      }
      if (uVar12 == 1) {
        *plVar10 = extraout_x8_09;
        *param_3 = extraout_x9_05;
        lVar14 = *plVar10;
        lVar11 = param_2[-1];
        param_2[-1] = param_3[1];
        param_3[1] = lVar11;
        func_0x00010b2db37c(lVar14);
        uVar12 = extraout_w11_16;
        if (extraout_w10_11 != extraout_w12_13) {
          uVar12 = (uint)(extraout_w12_13 < extraout_w10_11);
        }
        if (uVar12 == 1) {
          *unaff_x19 = extraout_x8_10;
          *plVar10 = extraout_x9_06;
          lVar14 = *unaff_x19;
          lVar11 = unaff_x19[1];
          unaff_x19[1] = param_2[-1];
          param_2[-1] = lVar11;
          func_0x00010b2db37c(lVar14);
          uVar12 = extraout_w11_17;
          if (extraout_w10_12 != extraout_w12_14) {
            uVar12 = (uint)(extraout_w12_14 < extraout_w10_12);
          }
          if (uVar12 == 1) {
            func_0x00010b2db484();
          }
        }
      }
    }
    return;
  }
  if ((long)uVar20 < 0x18) {
    if ((param_4 & 1) == 0) {
      if (param_1 != param_2) {
        while (plVar10 = param_1, param_1 = plVar10 + 2, param_1 != param_2) {
          func_0x00010b2db3c8(plVar10[2]);
          bVar1 = *(long *)(extraout_x9_00 + 0x188) < extraout_x11;
          if (extraout_w10_03 != extraout_w12_06) {
            bVar1 = extraout_w12_06 < extraout_w10_03;
          }
          if (bVar1) {
            lStack_68 = plVar10[3];
            *param_1 = 0;
            plVar10[3] = 0;
            lStack_70 = extraout_x8_04;
            do {
              plVar9 = plVar10;
              func_0x00010b2db448(plVar9 + 2);
              func_0x00010b2db398(lStack_70);
              uVar12 = extraout_w8_04;
              if (extraout_w10_04 != extraout_w11_09) {
                uVar12 = (uint)(extraout_w11_09 < extraout_w10_04);
              }
              plVar10 = plVar9 + -2;
            } while ((uVar12 & 1) != 0);
            FUN_10b2d78e4(plVar9,&lStack_70);
            func_0x00010b2db3dc();
          }
        }
      }
      goto LAB_10b2dad1c;
    }
    if (param_1 == param_2) goto LAB_10b2dad1c;
    lVar14 = 0;
    plVar10 = param_1;
    goto LAB_10b2daa54;
  }
  if (param_3 != (undefined8 *)0x0) {
    plVar9 = param_1 + (uVar20 & 0xfffffffffffffffe);
    if (uVar20 < 0x81) {
      func_0x00010b2db434(plVar9,param_1);
    }
    else {
      func_0x00010b2db450();
      func_0x00010b2db434();
      FUN_10b2dad30(param_1 + 2,plVar9 + -2,param_2 + -4);
      FUN_10b2dad30(param_1 + 4,plVar9 + 2,param_2 + -6);
      FUN_10b2dad30(plVar9 + -2,plVar9,plVar9 + 2);
      lVar11 = param_1[1];
      lVar14 = *param_1;
      lVar15 = *plVar9;
      param_1[1] = plVar9[1];
      *param_1 = lVar15;
      plVar9[1] = lVar11;
      *plVar9 = lVar14;
    }
    param_3 = (undefined8 *)((long)param_3 + -1);
    lStack_70 = *param_1;
    if ((param_4 & 1) != 0) {
LAB_10b2da6c0:
      lVar14 = 0;
      lStack_68 = param_1[1];
      *param_1 = 0;
      param_1[1] = 0;
      do {
        lVar11 = *(long *)((long)param_1 + lVar14 + 0x10);
        bVar1 = *(long *)(lStack_70 + 0x188) < *(long *)(lVar11 + 0x188);
        if (*(int *)(lVar11 + 0x180) != *(int *)(lStack_70 + 0x180)) {
          bVar1 = *(int *)(lStack_70 + 0x180) < *(int *)(lVar11 + 0x180);
        }
        lVar14 = lVar14 + 0x10;
      } while (bVar1);
      plVar9 = (long *)((long)param_1 + lVar14);
      plVar13 = param_2;
      plVar21 = plVar9;
      if (lVar14 == 0x10) {
        do {
          if (param_2 <= plVar9) break;
          func_0x00010b2db41c();
          uVar12 = extraout_w11_00;
          if (extraout_w12_00 != extraout_w9_00) {
            uVar12 = (uint)(extraout_w9_00 < extraout_w12_00);
          }
          lVar11 = extraout_x8_00;
        } while ((uVar12 & 1) == 0);
      }
      else {
        do {
          func_0x00010b2db41c();
          uVar12 = extraout_w11;
          if (extraout_w12 != extraout_w9) {
            uVar12 = (uint)(extraout_w9 < extraout_w12);
          }
          lVar11 = extraout_x8;
        } while (uVar12 != 1);
      }
      while (plVar21 < plVar13) {
        lVar14 = plVar21[1];
        lVar15 = *plVar13;
        plVar21[1] = plVar13[1];
        *plVar21 = lVar15;
        *plVar13 = lVar11;
        plVar13[1] = lVar14;
        iVar6 = *(int *)(lStack_70 + 0x180);
        do {
          plVar21 = plVar21 + 2;
          lVar11 = *plVar21;
          bVar1 = *(long *)(lStack_70 + 0x188) < *(long *)(lVar11 + 0x188);
          if (*(int *)(lVar11 + 0x180) != iVar6) {
            bVar1 = iVar6 < *(int *)(lVar11 + 0x180);
          }
        } while (bVar1);
        do {
          plVar13 = plVar13 + -2;
          iVar7 = *(int *)(*plVar13 + 0x180);
          bVar1 = *(long *)(lStack_70 + 0x188) < *(long *)(*plVar13 + 0x188);
          if (iVar7 != iVar6) {
            bVar1 = iVar6 < iVar7;
          }
        } while (!bVar1);
      }
      plVar13 = plVar21 + -2;
      if (param_1 != plVar13) {
        func_0x00010b2db450();
        FUN_10b2d78e4();
      }
      plVar8 = plVar13;
      FUN_10b2d78e4(plVar13,&lStack_70);
      func_0x00010b2db3dc();
      unaff_x19 = param_2;
      if (param_2 <= plVar9) {
        func_0x00010b2db450();
        FUN_10b2dafdc();
        plVar9 = plVar21;
        FUN_10b2dafdc(plVar21,param_2);
        if ((int)plVar9 != 0) goto LAB_10b2da974;
        param_1 = plVar21;
        if (((ulong)plVar8 & 1) != 0) goto LAB_10b2da5fc;
      }
      func_0x00010b2db450();
      FUN_10b2da5b8();
      param_4 = 0;
      param_1 = plVar21;
      goto LAB_10b2da5fc;
    }
    iVar6 = *(int *)(param_1[-2] + 0x180);
    bVar1 = *(long *)(lStack_70 + 0x188) < *(long *)(param_1[-2] + 0x188);
    if (iVar6 != *(int *)(lStack_70 + 0x180)) {
      bVar1 = *(int *)(lStack_70 + 0x180) < iVar6;
    }
    if (bVar1) goto LAB_10b2da6c0;
    lStack_68 = param_1[1];
    *param_1 = 0;
    param_1[1] = 0;
    iVar6 = *(int *)(lStack_70 + 0x180);
    iVar7 = *(int *)(*plVar10 + 0x180);
    bVar1 = *(long *)(*plVar10 + 0x188) < *(long *)(lStack_70 + 0x188);
    if (iVar6 != iVar7) {
      bVar1 = iVar7 < iVar6;
    }
    plVar9 = param_1;
    if (bVar1) {
      do {
        plVar9 = plVar9 + 2;
        iVar7 = *(int *)(*plVar9 + 0x180);
        bVar1 = *(long *)(*plVar9 + 0x188) < *(long *)(lStack_70 + 0x188);
        if (iVar6 != iVar7) {
          bVar1 = iVar7 < iVar6;
        }
      } while (!bVar1);
    }
    else {
      plVar13 = param_1 + 2;
      do {
        plVar9 = plVar13;
        if (param_2 <= plVar9) break;
        func_0x00010b2db3b4();
        uVar12 = extraout_w11_01;
        if (extraout_w8 != extraout_w12_01) {
          uVar12 = (uint)(extraout_w12_01 < extraout_w8);
        }
        plVar13 = extraout_x10;
      } while (uVar12 != 1);
    }
    plVar13 = param_2;
    if (plVar9 < param_2) {
      do {
        func_0x00010b2db3b4();
        uVar12 = extraout_w11_02;
        if (extraout_w8_00 != extraout_w12_02) {
          uVar12 = (uint)(extraout_w12_02 < extraout_w8_00);
        }
        plVar13 = extraout_x10_00;
      } while ((uVar12 & 1) != 0);
    }
    while (plVar9 < plVar13) {
      lVar14 = *plVar13;
      lVar15 = plVar9[1];
      lVar11 = *plVar9;
      plVar9[1] = plVar13[1];
      *plVar9 = lVar14;
      plVar13[1] = lVar15;
      *plVar13 = lVar11;
      do {
        plVar9 = plVar9 + 2;
        func_0x00010b2db3b4();
        uVar12 = extraout_w11_03;
        if (extraout_w8_01 != extraout_w12_03) {
          uVar12 = (uint)(extraout_w12_03 < extraout_w8_01);
        }
      } while (uVar12 != 1);
      do {
        func_0x00010b2db3b4();
        uVar12 = extraout_w11_04;
        if (extraout_w8_02 != extraout_w12_04) {
          uVar12 = (uint)(extraout_w12_04 < extraout_w8_02);
        }
        plVar13 = extraout_x10_01;
      } while ((uVar12 & 1) != 0);
    }
    plVar13 = plVar9 + -2;
    if (param_1 != plVar13) {
      FUN_10b2d78e4(param_1,plVar13);
    }
    FUN_10b2d78e4(plVar13,&lStack_70);
    func_0x00010b2db3dc();
    param_4 = 0;
    param_1 = plVar9;
    goto LAB_10b2da5fc;
  }
  if (param_1 == param_2) goto LAB_10b2dad1c;
  uVar18 = uVar20 - 2 >> 1;
  plVar10 = param_1 + uVar18 * 2;
  do {
    FUN_10b2db1bc(param_1,uVar20,plVar10);
    uVar18 = uVar18 - 1;
    plVar10 = plVar10 + -2;
  } while (-1 < (long)uVar18);
  do {
    if ((long)uVar20 < 2) goto LAB_10b2dad1c;
    lStack_78 = param_1[1];
    lStack_80 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    plVar10 = param_1;
    uVar18 = 0;
    do {
      uVar4 = uVar18 << 1 | 1;
      uVar3 = uVar18 * 2 + 2;
      plVar9 = plVar10 + uVar18 * 2 + 2;
      uVar19 = uVar4;
      if ((long)uVar3 < (long)uVar20) {
        lVar14 = plVar10[uVar18 * 2 + 4];
        iVar6 = *(int *)(plVar10[uVar18 * 2 + 2] + 0x180);
        iVar7 = *(int *)(lVar14 + 0x180);
        bVar1 = *(long *)(lVar14 + 0x188) < *(long *)(plVar10[uVar18 * 2 + 2] + 0x188);
        if (iVar6 != iVar7) {
          bVar1 = iVar7 < iVar6;
        }
        plVar9 = plVar10 + uVar18 * 2 + 4;
        uVar19 = uVar3;
        if (!bVar1) {
          plVar9 = plVar10 + uVar18 * 2 + 2;
          uVar19 = uVar4;
        }
      }
      plVar10 = plVar9;
      func_0x00010b2db448();
      uVar18 = uVar19;
    } while ((long)uVar19 <= (long)(uVar20 - 2 >> 1));
    param_2 = param_2 + -2;
    if (plVar10 == param_2) {
      FUN_10b2d78e4(plVar10,&lStack_80);
    }
    else {
      FUN_10b2d78e4(plVar10,param_2);
      FUN_10b2d78e4(param_2,&lStack_80);
      lVar14 = (long)plVar10 + (0x10 - (long)param_1) >> 4;
      uVar18 = lVar14 - 2;
      if (1 < lVar14) {
        lVar14 = *plVar10;
        func_0x00010b2db3e4();
        uVar12 = extraout_w9_01;
        if (extraout_w10_01 != extraout_w11_07) {
          uVar12 = (uint)(extraout_w11_07 < extraout_w10_01);
        }
        if (uVar12 == 1) {
          lStack_68 = plVar10[1];
          *plVar10 = 0;
          plVar10[1] = 0;
          plVar9 = extraout_x8_02;
          lStack_70 = lVar14;
          do {
            plVar13 = plVar9;
            FUN_10b2d78e4(plVar10,plVar13);
            if (uVar18 >> 1 == 0) break;
            uVar18 = (uVar18 >> 1) - 1;
            func_0x00010b2db3e4();
            uVar12 = extraout_w9_02;
            if (extraout_w10_02 != extraout_w11_08) {
              uVar12 = (uint)(extraout_w11_08 < extraout_w10_02);
            }
            plVar9 = extraout_x8_03;
            plVar10 = plVar13;
          } while ((uVar12 & 1) != 0);
          FUN_10b2d78e4(plVar13,&lStack_70);
          func_0x00010b2db3dc();
        }
      }
    }
    func_0x000107c2c578(&lStack_80);
    uVar20 = uVar20 - 1;
  } while( true );
LAB_10b2daa54:
  plVar9 = plVar10 + 2;
  if (plVar9 == param_2) {
LAB_10b2dad1c:
    func_0x00010b2db400(unaff_x30);
    return;
  }
  lVar11 = plVar10[2];
  iVar6 = *(int *)(*plVar10 + 0x180);
  bVar1 = *(long *)(*plVar10 + 0x188) < *(long *)(lVar11 + 0x188);
  if (*(int *)(lVar11 + 0x180) != iVar6) {
    bVar1 = iVar6 < *(int *)(lVar11 + 0x180);
  }
  if (bVar1) {
    lStack_68 = plVar10[3];
    *plVar9 = 0;
    plVar10[3] = 0;
    lVar15 = lVar14;
    lStack_70 = lVar11;
    do {
      lVar11 = lVar15;
      func_0x00010b2db448((long)param_1 + lVar11 + 0x10);
      plVar10 = param_1;
      if (lVar11 == 0) goto LAB_10b2daae4;
      func_0x00010b2db398(lStack_70);
      uVar12 = extraout_w8_03;
      if (extraout_w10_00 != extraout_w11_06) {
        uVar12 = (uint)(extraout_w11_06 < extraout_w10_00);
      }
      lVar15 = lVar11 + -0x10;
    } while ((uVar12 & 1) != 0);
    plVar10 = (long *)((long)param_1 + lVar11);
LAB_10b2daae4:
    FUN_10b2d78e4(plVar10,&lStack_70);
    func_0x00010b2db3dc();
  }
  lVar14 = lVar14 + 0x10;
  plVar10 = plVar9;
  goto LAB_10b2daa54;
LAB_10b2da974:
  param_2 = plVar13;
  if (((ulong)plVar8 & 1) != 0) goto LAB_10b2dad1c;
  goto LAB_10b2da5e8;
}



/* Entry: 10b2dad30; end: 10b2dae33;  */

void FUN_10b2dad30(long *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long extraout_x8;
  long lVar6;
  long extraout_x9;
  int extraout_w10;
  uint uVar7;
  uint extraout_w11;
  long lVar8;
  int extraout_w12;
  long lVar9;
  long lVar10;
  
  lVar6 = *param_2;
  lVar5 = *param_1;
  iVar3 = *(int *)(lVar6 + 0x180);
  iVar4 = *(int *)(lVar5 + 0x180);
  lVar8 = *(long *)(lVar5 + 0x188);
  bVar1 = lVar8 < *(long *)(lVar6 + 0x188);
  if (iVar3 != iVar4) {
    bVar1 = iVar4 < iVar3;
  }
  lVar9 = *param_3;
  bVar2 = *(long *)(lVar6 + 0x188) < *(long *)(lVar9 + 0x188);
  if (*(int *)(lVar9 + 0x180) != iVar3) {
    bVar2 = iVar3 < *(int *)(lVar9 + 0x180);
  }
  if (bVar1) {
    if (bVar2) {
      lVar6 = param_1[1];
      lVar8 = param_3[1];
      *param_1 = lVar9;
      param_1[1] = lVar8;
      *param_3 = lVar5;
      param_3[1] = lVar6;
      return;
    }
    lVar9 = param_1[1];
    lVar10 = param_2[1];
    *param_1 = lVar6;
    param_1[1] = lVar10;
    *param_2 = lVar5;
    param_2[1] = lVar9;
    lVar6 = *param_3;
    bVar1 = lVar8 < *(long *)(lVar6 + 0x188);
    if (*(int *)(lVar6 + 0x180) != iVar4) {
      bVar1 = iVar4 < *(int *)(lVar6 + 0x180);
    }
    if (bVar1) {
      lVar8 = param_3[1];
      *param_2 = lVar6;
      param_2[1] = lVar8;
      *param_3 = lVar5;
      param_3[1] = lVar9;
    }
  }
  else if (bVar2) {
    *param_2 = lVar9;
    *param_3 = lVar6;
    lVar5 = *param_2;
    lVar6 = param_2[1];
    param_2[1] = param_3[1];
    param_3[1] = lVar6;
    FUN_10b2db37c(lVar5);
    uVar7 = extraout_w11;
    if (extraout_w10 != extraout_w12) {
      uVar7 = (uint)(extraout_w12 < extraout_w10);
    }
    if (uVar7 == 1) {
      lVar5 = param_1[1];
      lVar6 = param_2[1];
      *param_1 = extraout_x8;
      param_1[1] = lVar6;
      *param_2 = extraout_x9;
      param_2[1] = lVar5;
      return;
    }
  }
  return;
}



/* Entry: 10b2dae34; end: 10b2daee7;  */

void FUN_10b2dae34(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  int extraout_w10;
  uint uVar3;
  int extraout_w10_00;
  int extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint extraout_w11_01;
  int extraout_w12;
  int extraout_w12_00;
  int extraout_w12_01;
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  
  func_0x00010b2db470();
  FUN_10b2dad30();
  func_0x00010b2db37c(*unaff_x22);
  uVar3 = extraout_w11;
  if (extraout_w10 != extraout_w12) {
    uVar3 = (uint)(extraout_w12 < extraout_w10);
  }
  if (uVar3 == 1) {
    *unaff_x21 = extraout_x8;
    *unaff_x22 = extraout_x9;
    uVar1 = *unaff_x21;
    uVar2 = unaff_x21[1];
    unaff_x21[1] = unaff_x22[1];
    unaff_x22[1] = uVar2;
    func_0x00010b2db37c(uVar1);
    uVar3 = extraout_w11_00;
    if (extraout_w10_00 != extraout_w12_00) {
      uVar3 = (uint)(extraout_w12_00 < extraout_w10_00);
    }
    if (uVar3 == 1) {
      *unaff_x19 = extraout_x8_00;
      *unaff_x21 = extraout_x9_00;
      uVar1 = *unaff_x19;
      uVar2 = unaff_x19[1];
      unaff_x19[1] = unaff_x21[1];
      unaff_x21[1] = uVar2;
      func_0x00010b2db37c(uVar1);
      uVar3 = extraout_w11_01;
      if (extraout_w10_01 != extraout_w12_01) {
        uVar3 = (uint)(extraout_w12_01 < extraout_w10_01);
      }
      if (uVar3 == 1) {
        func_0x00010b2db484();
      }
    }
  }
  return;
}



/* Entry: 10b2daee8; end: 10b2dafdb;  */

void FUN_10b2daee8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *in_x4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 extraout_x9_01;
  int extraout_w10;
  uint uVar3;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  uint extraout_w11;
  uint extraout_w11_00;
  uint extraout_w11_01;
  uint extraout_w11_02;
  int extraout_w12;
  int extraout_w12_00;
  int extraout_w12_01;
  int extraout_w12_02;
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  
  func_0x00010b2db470();
  FUN_10b2dae34();
  func_0x00010b2db37c(*in_x4);
  uVar3 = extraout_w11;
  if (extraout_w10 != extraout_w12) {
    uVar3 = (uint)(extraout_w12 < extraout_w10);
  }
  if (uVar3 == 1) {
    *unaff_x22 = extraout_x8;
    *in_x4 = extraout_x9;
    uVar1 = *unaff_x22;
    uVar2 = unaff_x22[1];
    unaff_x22[1] = in_x4[1];
    in_x4[1] = uVar2;
    func_0x00010b2db37c(uVar1);
    uVar3 = extraout_w11_00;
    if (extraout_w10_00 != extraout_w12_00) {
      uVar3 = (uint)(extraout_w12_00 < extraout_w10_00);
    }
    if (uVar3 == 1) {
      *unaff_x21 = extraout_x8_00;
      *unaff_x22 = extraout_x9_00;
      uVar1 = *unaff_x21;
      uVar2 = unaff_x21[1];
      unaff_x21[1] = unaff_x22[1];
      unaff_x22[1] = uVar2;
      func_0x00010b2db37c(uVar1);
      uVar3 = extraout_w11_01;
      if (extraout_w10_01 != extraout_w12_01) {
        uVar3 = (uint)(extraout_w12_01 < extraout_w10_01);
      }
      if (uVar3 == 1) {
        *unaff_x19 = extraout_x8_01;
        *unaff_x21 = extraout_x9_01;
        uVar1 = *unaff_x19;
        uVar2 = unaff_x19[1];
        unaff_x19[1] = unaff_x21[1];
        unaff_x21[1] = uVar2;
        func_0x00010b2db37c(uVar1);
        uVar3 = extraout_w11_02;
        if (extraout_w10_02 != extraout_w12_02) {
          uVar3 = (uint)(extraout_w12_02 < extraout_w10_02);
        }
        if (uVar3 == 1) {
          func_0x00010b2db484();
        }
      }
    }
  }
  return;
}



/* Entry: 10b2dafdc; end: 10b2db1bb;  */

bool FUN_10b2dafdc(long *param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  uint extraout_w8;
  long *plVar3;
  undefined8 extraout_x8;
  uint uVar4;
  long lVar5;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  long lVar6;
  int extraout_w11;
  long lVar7;
  long extraout_x11;
  int extraout_w12;
  long lVar8;
  int iVar9;
  undefined8 uStack_60;
  long lStack_58;
  
  switch((long)param_2 - (long)param_1 >> 4) {
  case 0:
  case 1:
    break;
  case 2:
    lVar5 = param_2[-2];
    lVar8 = *param_1;
    bVar1 = *(long *)(lVar8 + 0x188) < *(long *)(lVar5 + 0x188);
    if (*(int *)(lVar5 + 0x180) != *(int *)(lVar8 + 0x180)) {
      bVar1 = *(int *)(lVar8 + 0x180) < *(int *)(lVar5 + 0x180);
    }
    if (bVar1) {
      lVar6 = param_1[1];
      lVar7 = param_2[-1];
      *param_1 = lVar5;
      param_1[1] = lVar7;
      param_2[-2] = lVar8;
      param_2[-1] = lVar6;
      return true;
    }
    return true;
  case 3:
    FUN_10b2dad30(param_1,param_1 + 2,param_2 + -2);
    break;
  case 4:
    FUN_10b2dae34(param_1,param_1 + 2,param_1 + 4,param_2 + -2);
    break;
  case 5:
    FUN_10b2daee8(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2);
    break;
  default:
    func_0x00010b2db434(param_1,param_1 + 2);
    lVar8 = 0;
    iVar9 = 0;
    for (plVar3 = param_1 + 6; plVar3 != param_2; plVar3 = plVar3 + 2) {
      func_0x00010b2db3c8(*plVar3);
      bVar1 = *(long *)(extraout_x9 + 0x188) < extraout_x11;
      if (extraout_w10 != extraout_w12) {
        bVar1 = extraout_w12 < extraout_w10;
      }
      if (bVar1) {
        lStack_58 = plVar3[1];
        *plVar3 = 0;
        plVar3[1] = 0;
        lVar5 = lVar8;
        uStack_60 = extraout_x8;
        do {
          lVar6 = lVar5;
          FUN_10b2d78e4((long)param_1 + lVar6 + 0x30,(long)param_1 + lVar6 + 0x20);
          plVar2 = param_1;
          if (lVar6 == -0x20) goto LAB_10b2db14c;
          func_0x00010b2db398(uStack_60);
          uVar4 = extraout_w8;
          if (extraout_w10_00 != extraout_w11) {
            uVar4 = (uint)(extraout_w11 < extraout_w10_00);
          }
          lVar5 = lVar6 + -0x10;
        } while ((uVar4 & 1) != 0);
        plVar2 = (long *)((long)param_1 + lVar6 + 0x20);
LAB_10b2db14c:
        FUN_10b2d78e4(plVar2,&uStack_60);
        iVar9 = iVar9 + 1;
        func_0x000107c2c578(&uStack_60);
        if (iVar9 == 8) {
          return plVar3 + 2 == param_2;
        }
      }
      lVar8 = lVar8 + 0x10;
    }
  }
  return true;
}



/* Entry: 10b2db1bc; end: 10b2db34f;  */

void FUN_10b2db1bc(long param_1,long param_2,undefined8 *param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *extraout_x8;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *extraout_x8_00;
  int extraout_w9;
  uint uVar10;
  int extraout_w9_00;
  long lVar11;
  uint extraout_w10;
  uint extraout_w10_00;
  int extraout_w11;
  int extraout_w11_00;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (1 < param_2) {
    uVar12 = param_2 - 2U >> 1;
    if ((long)param_3 - param_1 >> 4 <= (long)uVar12) {
      lVar11 = (long)param_3 - param_1 >> 3;
      uVar2 = lVar11 + 1;
      plVar4 = (long *)(param_1 + uVar2 * 0x10);
      uVar3 = lVar11 + 2;
      plVar9 = plVar4;
      uVar13 = uVar2;
      if ((long)uVar3 < param_2) {
        lVar11 = plVar4[2];
        iVar5 = *(int *)(*plVar4 + 0x180);
        iVar6 = *(int *)(lVar11 + 0x180);
        bVar1 = *(long *)(lVar11 + 0x188) < *(long *)(*plVar4 + 0x188);
        if (iVar5 != iVar6) {
          bVar1 = iVar6 < iVar5;
        }
        plVar9 = plVar4 + 2;
        uVar13 = uVar3;
        if (!bVar1) {
          plVar9 = plVar4;
          uVar13 = uVar2;
        }
      }
      uVar14 = *param_3;
      func_0x00010b2db45c(plVar9);
      uVar10 = extraout_w10;
      if (extraout_w9 != extraout_w11) {
        uVar10 = (uint)(extraout_w11 < extraout_w9);
      }
      if ((uVar10 & 1) == 0) {
        uStack_48 = param_3[1];
        *param_3 = 0;
        param_3[1] = 0;
        puVar7 = extraout_x8;
        uStack_50 = uVar14;
        do {
          puVar8 = puVar7;
          FUN_10b2d78e4(param_3,puVar8);
          if ((long)uVar12 < (long)uVar13) break;
          uVar3 = uVar13 << 1 | 1;
          plVar4 = (long *)(param_1 + uVar3 * 0x10);
          uVar2 = uVar13 * 2 + 2;
          plVar9 = plVar4;
          uVar13 = uVar3;
          if ((long)uVar2 < param_2) {
            lVar11 = plVar4[2];
            iVar5 = *(int *)(*plVar4 + 0x180);
            iVar6 = *(int *)(lVar11 + 0x180);
            bVar1 = *(long *)(lVar11 + 0x188) < *(long *)(*plVar4 + 0x188);
            if (iVar5 != iVar6) {
              bVar1 = iVar6 < iVar5;
            }
            plVar9 = plVar4 + 2;
            uVar13 = uVar2;
            if (!bVar1) {
              plVar9 = plVar4;
              uVar13 = uVar3;
            }
          }
          func_0x00010b2db45c(plVar9);
          uVar10 = extraout_w10_00;
          if (extraout_w9_00 != extraout_w11_00) {
            uVar10 = (uint)(extraout_w11_00 < extraout_w9_00);
          }
          param_3 = puVar8;
          puVar7 = extraout_x8_00;
        } while (uVar10 != 1);
        FUN_10b2d78e4(puVar8,&uStack_50);
        func_0x000107c2c578(&uStack_50);
      }
    }
  }
  return;
}



/* Entry: 10b2db350; end: 10b2db37b;  */

long FUN_10b2db350(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10b2db37c; end: 10b2db497;  */

void FUN_10b2db37c(void)

{
  return;
}



/* Entry: 10b2db498; end: 10b2db597;  */

bool FUN_10b2db498(undefined8 *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plStack_40;
  long lStack_38;
  
  plStack_40 = (long *)0x0;
  lStack_38 = 0;
  lVar3 = param_1[1];
  if ((((lVar3 == 0) || (__ZNSt3__119__shared_weak_count4lockEv(), lStack_38 = lVar3, lVar3 == 0))
      || (plVar6 = (long *)*param_1, plStack_40 = plVar6, plVar6 == (long *)0x0)) ||
     (plVar4 = plVar6, (**(code **)(*plVar6 + 0x10))(), (int)plVar4 < 1)) {
    iVar2 = -1;
  }
  else {
    (**(code **)(*plVar6 + 0x10))();
    iVar2 = (int)plVar6;
  }
  func_0x00010b2dc14c(&plStack_40);
  lVar3 = *param_2;
  lVar5 = *param_3;
  if (*(int *)(lVar3 + 400) == iVar2) {
    if (*(int *)(lVar5 + 400) != iVar2) {
      return true;
    }
  }
  else if (*(int *)(lVar5 + 400) == iVar2) {
    return false;
  }
  bVar1 = *(long *)(lVar5 + 0x188) < *(long *)(lVar3 + 0x188);
  if (*(int *)(lVar3 + 0x180) != *(int *)(lVar5 + 0x180)) {
    bVar1 = *(int *)(lVar5 + 0x180) < *(int *)(lVar3 + 0x180);
  }
  return bVar1;
}



/* Entry: 10b2db598; end: 10b2db61b;  */

void FUN_10b2db598(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar2 = *param_2;
  lVar3 = param_2[1];
  uStack_28 = *(undefined8 *)(param_1 + 0x20);
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x20) + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (lVar2 != lVar3) {
    FUN_10b2db634(lVar2,lVar3,&uStack_30,LZCOUNT(lVar3 - lVar2 >> 4) << 1 ^ 0x7e,1);
  }
  func_0x000107c35844();
  return;
}



/* Entry: 10b2db61c; end: 10b2db61f;  */

undefined8 * FUN_10b2db61c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cd2d88;
  func_0x000107c2c6e0(param_1 + 3);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10b2db620; end: 10b2db633;  */

void FUN_10b2db620(void)

{
  FUN_10b2dc110();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2db634; end: 10b2dbca7;  */

/* WARNING: Possible PIC construction at 0x00010b2dbdc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b2dbd74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b2dbdc4) */
/* WARNING: Removing unreachable block (ram,0x00010b2dbdd8) */
/* WARNING: Removing unreachable block (ram,0x00010b2dbdf0) */
/* WARNING: Removing unreachable block (ram,0x00010b2dbdf8) */
/* WARNING: Removing unreachable block (ram,0x00010b2dbe00) */
/* WARNING: Removing unreachable block (ram,0x00010b2dbe04) */
/* WARNING: Removing unreachable block (ram,0x00010b2dbd78) */
/* WARNING: Removing unreachable block (ram,0x00010b2dbd80) */
/* WARNING: Removing unreachable block (ram,0x00010b2dbd88) */
/* WARNING: Removing unreachable block (ram,0x00010b2dbd90) */
/* WARNING: Removing unreachable block (ram,0x00010b2dbd94) */

void FUN_10b2db634(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,
                  uint param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *unaff_x20;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 *puStack_d0;
  long lStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined1 auStack_a0 [16];
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  ppuVar6 = &puStack_90;
  ppuVar5 = &puStack_90;
LAB_10b2db668:
  puVar10 = param_2 + -2;
  puStack_88 = param_2 + -4;
  puStack_90 = param_2 + -6;
  puVar8 = param_1;
LAB_10b2db67c:
  param_1 = puVar8;
  uVar16 = (long)param_2 - (long)param_1 >> 4;
  puVar8 = param_1;
  switch(uVar16) {
  case 0:
  case 1:
    goto LAB_10b2dbc38;
  case 2:
    func_0x00010b2dc220(param_3,puVar10);
    if ((int)param_3 != 0) {
      uVar18 = *puVar10;
      uVar19 = param_1[1];
      uVar20 = *param_1;
      param_1[1] = param_2[-1];
      *param_1 = uVar18;
      param_2[-1] = uVar19;
      *puVar10 = uVar20;
    }
    goto LAB_10b2dbc38;
  case 3:
    puVar9 = param_1 + 2;
    puVar7 = puVar10;
    puVar12 = param_3;
    func_0x00010b2dc258();
    goto FUN_10b2dbca8;
  case 4:
    puVar9 = param_1 + 2;
    puVar7 = param_1 + 4;
    puVar11 = param_3;
    func_0x00010b2dc258();
    break;
  case 5:
    puVar9 = param_1 + 2;
    puVar7 = param_1 + 4;
    puVar12 = puVar10;
    puVar13 = param_3;
    func_0x00010b2dc258();
    ppuVar6 = &puStack_d0;
    unaff_x29 = auStack_a0;
    puVar11 = puVar13;
    puStack_d0 = param_2;
    lStack_c8 = param_4;
    puStack_c0 = puVar10;
    puStack_b8 = param_1;
    puStack_b0 = unaff_x20;
    puStack_a8 = param_3;
    func_0x00010b2dc288();
    unaff_x30 = 0x10b2dbdc4;
    param_1 = puVar13;
    param_2 = puVar12;
    break;
  default:
    if ((long)uVar16 < 0x18) {
      if ((param_5 & 1) == 0) {
        if (param_1 != param_2) {
          while (puVar8 = param_1, param_1 = puVar8 + 2, param_1 != param_2) {
            puVar10 = param_3;
            FUN_10b2db498(param_3,param_1,puVar8);
            if ((int)puVar10 != 0) {
              func_0x00010b2dc248();
              do {
                puVar9 = puVar8;
                puVar10 = puVar9 + 2;
                func_0x00010b2dc240();
                func_0x00010b2dc204();
                FUN_10b2db498();
                puVar8 = puVar9 + -2;
              } while (((ulong)puVar10 & 1) != 0);
              FUN_10b2d78e4(puVar9,&uStack_70);
              func_0x00010b2dc1e8();
            }
          }
        }
        goto LAB_10b2dbc38;
      }
      if (param_1 == param_2) goto LAB_10b2dbc38;
      lVar17 = 0;
      goto LAB_10b2db9fc;
    }
    if (param_4 != 0) {
      puVar8 = param_1 + (uVar16 & 0xfffffffffffffffe);
      if (uVar16 < 0x81) {
        func_0x00010b2dc218(puVar8,param_1,puVar10);
      }
      else {
        func_0x00010b2dc218(param_1,puVar8,puVar10);
        func_0x00010b2dc218(param_1 + 2,puVar8 + -2,puStack_88);
        func_0x00010b2dc218(param_1 + 4,puVar8 + 2,puStack_90);
        func_0x00010b2dc218(puVar8 + -2,puVar8,puVar8 + 2);
        uVar20 = param_1[1];
        uVar18 = *param_1;
        uVar19 = *puVar8;
        param_1[1] = puVar8[1];
        *param_1 = uVar19;
        puVar8[1] = uVar20;
        *puVar8 = uVar18;
      }
      param_4 = param_4 + -1;
      if (((param_5 & 1) == 0) &&
         (puVar9 = param_3, func_0x00010b2dc220(param_3,param_1 + -2), ((ulong)puVar9 & 1) == 0))
      goto LAB_10b2db858;
      lVar17 = 0;
      func_0x00010b2dc248();
      do {
        puVar9 = param_3;
        FUN_10b2db498(param_3,(long)param_1 + lVar17 + 0x10,&uStack_70);
        lVar17 = lVar17 + 0x10;
      } while (((ulong)puVar9 & 1) != 0);
      puVar7 = (undefined8 *)((long)param_1 + lVar17);
      puVar12 = param_2;
      puVar8 = puVar7;
      if (lVar17 == 0x10) {
        do {
          unaff_x20 = puVar12;
          if (puVar12 <= puVar7) break;
          puVar12 = puVar12 + -2;
          func_0x00010b2dc198();
          unaff_x20 = puVar12;
        } while (((ulong)puVar9 & 1) == 0);
      }
      else {
        do {
          puVar12 = puVar12 + -2;
          func_0x00010b2dc198();
          unaff_x20 = puVar12;
        } while ((int)puVar9 == 0);
      }
      while (puVar8 < puVar12) {
        uVar18 = *puVar12;
        uVar19 = puVar8[1];
        uVar20 = *puVar8;
        puVar8[1] = puVar12[1];
        *puVar8 = uVar18;
        puVar12[1] = uVar19;
        *puVar12 = uVar20;
        do {
          puVar8 = puVar8 + 2;
          puVar9 = param_3;
          FUN_10b2db498(param_3,puVar8,&uStack_70);
        } while (((ulong)puVar9 & 1) != 0);
        do {
          puVar12 = puVar12 + -2;
          puVar9 = param_3;
          FUN_10b2db498(param_3,puVar12,&uStack_70);
        } while (((ulong)puVar9 & 1) == 0);
      }
      puVar9 = puVar8 + -2;
      if (param_1 != puVar9) {
        FUN_10b2d78e4(param_1,puVar9);
      }
      FUN_10b2d78e4(puVar9,&uStack_70);
      func_0x00010b2dc1e8();
      if (unaff_x20 <= puVar7) {
        unaff_x20 = param_1;
        FUN_10b2dbe0c(param_1,puVar9,param_3);
        puVar7 = puVar8;
        FUN_10b2dbe0c(puVar8,param_2,param_3);
        if ((int)puVar7 != 0) goto LAB_10b2db928;
        if (((ulong)unaff_x20 & 1) != 0) goto LAB_10b2db67c;
      }
      FUN_10b2db634(param_1,puVar9,param_3,param_4,param_5 & 1);
      param_5 = 0;
      goto LAB_10b2db67c;
    }
    if (param_1 == param_2) goto LAB_10b2dbc38;
    uVar14 = uVar16 - 2 >> 1;
    puVar8 = param_1 + uVar14 * 2;
    do {
      FUN_10b2dbfd0(param_1,param_3,uVar16,puVar8);
      uVar14 = uVar14 - 1;
      puVar8 = puVar8 + -2;
    } while (-1 < (long)uVar14);
    do {
      if ((long)uVar16 < 2) goto LAB_10b2dbc38;
      uVar14 = 0;
      uStack_78 = param_1[1];
      uStack_80 = *param_1;
      *param_1 = 0;
      param_1[1] = 0;
      puVar8 = param_1;
      do {
        uVar2 = uVar14 << 1 | 1;
        uVar1 = uVar14 * 2 + 2;
        puVar10 = puVar8 + uVar14 * 2 + 2;
        uVar4 = uVar2;
        if ((long)uVar1 < (long)uVar16) {
          puVar9 = param_3;
          func_0x00010b2dc1f0();
          puVar10 = puVar8 + uVar14 * 2 + 4;
          uVar4 = uVar1;
          if ((int)puVar9 == 0) {
            puVar10 = puVar8 + uVar14 * 2 + 2;
            uVar4 = uVar2;
          }
        }
        uVar14 = uVar4;
        FUN_10b2d78e4(puVar8,puVar10);
        puVar8 = puVar10;
      } while ((long)uVar14 <= (long)(uVar16 - 2 >> 1));
      param_2 = param_2 + -2;
      if (puVar10 == param_2) {
        FUN_10b2d78e4(puVar10,&uStack_80);
      }
      else {
        FUN_10b2d78e4(puVar10,param_2);
        FUN_10b2d78e4(param_2,&uStack_80);
        lVar17 = (long)puVar10 + (0x10 - (long)param_1) >> 4;
        if (1 < lVar17) {
          uVar14 = lVar17 - 2U >> 1;
          puVar8 = param_3;
          FUN_10b2db498(param_3,param_1 + uVar14 * 2,puVar10);
          if ((int)puVar8 != 0) {
            uStack_68 = puVar10[1];
            uStack_70 = *puVar10;
            *puVar10 = 0;
            puVar10[1] = 0;
            puVar8 = param_1 + uVar14 * 2;
            do {
              puVar9 = puVar8;
              func_0x00010b2dc240();
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1 >> 1;
              func_0x00010b2dc198();
              uVar1 = (ulong)puVar10 & 1;
              puVar8 = param_1 + uVar14 * 2;
              puVar10 = puVar9;
            } while (uVar1 != 0);
            FUN_10b2d78e4(puVar9,&uStack_70);
            func_0x00010b2dc1e8();
          }
        }
      }
      func_0x000107c2c578(&uStack_80);
      uVar16 = uVar16 - 1;
    } while( true );
  }
  ppuVar5 = (undefined8 **)((long)ppuVar6 + -0x40);
  *(undefined8 **)((long)ppuVar6 + -0x40) = param_2;
  *(long *)((long)ppuVar6 + -0x38) = param_4;
  *(undefined8 **)((long)ppuVar6 + -0x30) = puVar10;
  *(undefined8 **)((long)ppuVar6 + -0x28) = param_1;
  *(undefined8 **)((long)ppuVar6 + -0x20) = unaff_x20;
  *(undefined8 **)((long)ppuVar6 + -0x18) = param_3;
  *(undefined1 **)((long)ppuVar6 + -0x10) = unaff_x29;
  *(undefined8 *)((long)ppuVar6 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)ppuVar6 + -0x10);
  puVar12 = puVar11;
  func_0x00010b2dc288();
  unaff_x30 = 0x10b2dbd78;
  param_1 = puVar11;
FUN_10b2dbca8:
  *(undefined8 **)((long)ppuVar5 + -0x40) = param_2;
  *(long *)((long)ppuVar5 + -0x38) = param_4;
  *(undefined8 **)((long)ppuVar5 + -0x30) = puVar10;
  *(undefined8 **)((long)ppuVar5 + -0x28) = param_1;
  *(undefined8 **)((long)ppuVar5 + -0x20) = unaff_x20;
  *(undefined8 **)((long)ppuVar5 + -0x18) = param_3;
  *(undefined1 **)((long)ppuVar5 + -0x10) = unaff_x29;
  *(undefined8 *)((long)ppuVar5 + -8) = unaff_x30;
  puVar10 = puVar12;
  func_0x00010b2dc220();
  puVar11 = puVar12;
  func_0x00010b2dc210(puVar12,puVar7);
  if (((ulong)puVar10 & 1) == 0) {
    if ((int)puVar11 != 0) {
      func_0x00010b2dc29c();
      func_0x00010b2dc220(puVar12,puVar9);
      if ((int)puVar12 != 0) {
        uVar18 = *puVar9;
        uVar19 = puVar8[1];
        uVar20 = *puVar8;
        puVar8[1] = puVar9[1];
        *puVar8 = uVar18;
        puVar9[1] = uVar19;
        *puVar9 = uVar20;
      }
    }
  }
  else {
    uVar18 = *puVar8;
    uVar20 = puVar8[1];
    if ((int)puVar11 == 0) {
      uVar19 = *puVar9;
      puVar8[1] = puVar9[1];
      *puVar8 = uVar19;
      *puVar9 = uVar18;
      puVar9[1] = uVar20;
      func_0x00010b2dc210(puVar12,puVar7);
      if ((int)puVar12 != 0) {
        func_0x00010b2dc29c();
      }
    }
    else {
      uVar19 = *puVar7;
      puVar8[1] = puVar7[1];
      *puVar8 = uVar19;
      *puVar7 = uVar18;
      puVar7[1] = uVar20;
    }
  }
  return;
LAB_10b2db9fc:
  puVar10 = puVar8 + 2;
  if (puVar10 == param_2) {
LAB_10b2dbc38:
    func_0x00010b2dc258(unaff_x30);
    return;
  }
  puVar9 = param_3;
  FUN_10b2db498(param_3,puVar10);
  if ((int)puVar9 != 0) {
    uStack_68 = puVar8[3];
    uStack_70 = *puVar10;
    *puVar10 = 0;
    puVar8[3] = 0;
    lVar3 = lVar17;
    do {
      lVar15 = lVar3;
      puVar8 = param_1;
      func_0x00010b2dc240();
      puVar9 = param_1;
      if (lVar15 == 0) goto LAB_10b2dba5c;
      func_0x00010b2dc204();
      FUN_10b2db498();
      lVar3 = lVar15 + -0x10;
    } while (((ulong)puVar8 & 1) != 0);
    puVar9 = (undefined8 *)((long)param_1 + lVar15);
LAB_10b2dba5c:
    FUN_10b2d78e4(puVar9,&uStack_70);
    func_0x00010b2dc1e8();
  }
  lVar17 = lVar17 + 0x10;
  puVar8 = puVar10;
  goto LAB_10b2db9fc;
LAB_10b2db858:
  func_0x00010b2dc248();
  func_0x00010b2dc204();
  FUN_10b2db498();
  puVar8 = param_1;
  if (((ulong)puVar9 & 1) == 0) {
    do {
      puVar8 = puVar8 + 2;
      if (param_2 <= puVar8) break;
      func_0x00010b2dc178();
    } while ((int)puVar9 == 0);
  }
  else {
    do {
      puVar8 = puVar8 + 2;
      func_0x00010b2dc178();
    } while (((ulong)puVar9 & 1) == 0);
  }
  puVar7 = param_2;
  if (puVar8 < param_2) {
    do {
      puVar7 = puVar7 + -2;
      func_0x00010b2dc204();
      FUN_10b2db498();
    } while (((ulong)puVar9 & 1) != 0);
  }
  while (puVar8 < puVar7) {
    uVar18 = *puVar7;
    uVar19 = puVar8[1];
    uVar20 = *puVar8;
    puVar8[1] = puVar7[1];
    *puVar8 = uVar18;
    puVar7[1] = uVar19;
    *puVar7 = uVar20;
    do {
      puVar8 = puVar8 + 2;
      func_0x00010b2dc178();
    } while ((int)puVar9 == 0);
    do {
      puVar7 = puVar7 + -2;
      func_0x00010b2dc204();
      FUN_10b2db498();
    } while (((ulong)puVar9 & 1) != 0);
  }
  unaff_x20 = puVar8 + -2;
  if (param_1 != unaff_x20) {
    func_0x00010b2dc240(param_1);
  }
  FUN_10b2d78e4(unaff_x20,&uStack_70);
  func_0x00010b2dc1e8();
  param_5 = 0;
  goto LAB_10b2db67c;
LAB_10b2db928:
  param_2 = puVar9;
  if (((ulong)unaff_x20 & 1) != 0) goto LAB_10b2dbc38;
  goto LAB_10b2db668;
}



/* Entry: 10b2dbca8; end: 10b2dbe0b;  */

void FUN_10b2dbca8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_4;
  func_0x00010b2dc220();
  uVar2 = param_4;
  func_0x00010b2dc210(param_4,param_3);
  if ((uVar1 & 1) == 0) {
    if ((int)uVar2 != 0) {
      func_0x00010b2dc29c();
      func_0x00010b2dc220(param_4,param_2);
      if ((int)param_4 != 0) {
        uVar4 = *param_2;
        uVar3 = param_1[1];
        uVar5 = *param_1;
        param_1[1] = param_2[1];
        *param_1 = uVar4;
        param_2[1] = uVar3;
        *param_2 = uVar5;
      }
    }
  }
  else {
    uVar4 = *param_1;
    uVar5 = param_1[1];
    if ((int)uVar2 == 0) {
      uVar3 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar3;
      *param_2 = uVar4;
      param_2[1] = uVar5;
      func_0x00010b2dc210(param_4,param_3);
      if ((int)param_4 != 0) {
        func_0x00010b2dc29c();
      }
    }
    else {
      uVar3 = *param_3;
      param_1[1] = param_3[1];
      *param_1 = uVar3;
      *param_3 = uVar4;
      param_3[1] = uVar5;
    }
  }
  return;
}



/* Entry: 10b2dbe0c; end: 10b2dbfcf;  */

bool FUN_10b2dbe0c(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  switch((long)param_2 - (long)param_1 >> 4) {
  case 0:
  case 1:
    break;
  case 2:
    puVar3 = param_2 + -2;
    func_0x00010b2dc210(param_3,puVar3);
    if ((int)param_3 != 0) {
      uVar9 = *puVar3;
      uVar11 = param_1[1];
      uVar10 = *param_1;
      param_1[1] = param_2[-1];
      *param_1 = uVar9;
      param_2[-1] = uVar11;
      *puVar3 = uVar10;
    }
    break;
  case 3:
    FUN_10b2dbca8(param_1,param_1 + 2,param_2 + -2,param_3);
    break;
  case 4:
    func_0x00010b2dbd54(param_1,param_1 + 2,param_1 + 4,param_2 + -2,param_3);
    break;
  case 5:
    func_0x00010b2dbd9c(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2,param_3);
    break;
  default:
    FUN_10b2dbca8(param_1,param_1 + 2,param_1 + 4,param_3);
    lVar7 = 0;
    iVar8 = 0;
    puVar3 = param_1 + 6;
    puVar5 = param_1 + 4;
    while (puVar4 = puVar3, puVar4 != param_2) {
      uVar2 = param_3;
      FUN_10b2db498(param_3,puVar4,puVar5);
      if ((int)uVar2 != 0) {
        uStack_58 = puVar4[1];
        uStack_60 = *puVar4;
        *puVar4 = 0;
        puVar4[1] = 0;
        lVar1 = lVar7;
        do {
          lVar6 = lVar1;
          FUN_10b2d78e4((long)param_1 + lVar6 + 0x30,(long)param_1 + lVar6 + 0x20);
          puVar3 = param_1;
          if (lVar6 == -0x20) goto LAB_10b2dbf54;
          uVar2 = param_3;
          FUN_10b2db498(param_3,&uStack_60,(long)param_1 + lVar6 + 0x10);
          lVar1 = lVar6 + -0x10;
        } while ((uVar2 & 1) != 0);
        puVar3 = (undefined8 *)((long)param_1 + lVar6 + 0x20);
LAB_10b2dbf54:
        FUN_10b2d78e4(puVar3,&uStack_60);
        iVar8 = iVar8 + 1;
        func_0x00010b2dc228();
        if (iVar8 == 8) {
          return puVar4 + 2 == param_2;
        }
      }
      lVar7 = lVar7 + 0x10;
      puVar5 = puVar4;
      puVar3 = puVar4 + 2;
    }
  }
  return true;
}



/* Entry: 10b2dbfd0; end: 10b2dc10f;  */

void FUN_10b2dbfd0(long param_1,ulong param_2,long param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (1 < param_3) {
    uVar8 = param_3 - 2U >> 1;
    if ((long)param_4 - param_1 >> 4 <= (long)uVar8) {
      lVar5 = (long)param_4 - param_1 >> 3;
      uVar4 = lVar5 + 1;
      puVar6 = (undefined8 *)(param_1 + uVar4 * 0x10);
      uVar1 = lVar5 + 2;
      puVar7 = puVar6;
      uVar9 = uVar4;
      if ((long)uVar1 < param_3) {
        uVar3 = param_2;
        FUN_10b2db498(param_2,puVar6,puVar6 + 2);
        puVar7 = puVar6 + 2;
        uVar9 = uVar1;
        if ((int)uVar3 == 0) {
          puVar7 = puVar6;
          uVar9 = uVar4;
        }
      }
      uVar4 = param_2;
      func_0x00010b2dc1f0();
      if ((uVar4 & 1) == 0) {
        uStack_68 = param_4[1];
        uStack_70 = *param_4;
        *param_4 = 0;
        param_4[1] = 0;
        do {
          puVar6 = puVar7;
          FUN_10b2d78e4(param_4,puVar6);
          if ((long)uVar8 < (long)uVar9) break;
          uVar1 = uVar9 << 1 | 1;
          puVar2 = (undefined8 *)(param_1 + uVar1 * 0x10);
          uVar4 = uVar9 * 2 + 2;
          puVar7 = puVar2;
          uVar9 = uVar1;
          if ((long)uVar4 < param_3) {
            uVar3 = param_2;
            func_0x00010b2dc1f0();
            puVar7 = puVar2 + 2;
            uVar9 = uVar4;
            if ((int)uVar3 == 0) {
              puVar7 = puVar2;
              uVar9 = uVar1;
            }
          }
          uVar4 = param_2;
          FUN_10b2db498(param_2,puVar7,&uStack_70);
          param_4 = puVar6;
        } while ((int)uVar4 == 0);
        FUN_10b2d78e4(puVar6,&uStack_70);
        func_0x00010b2dc228();
      }
    }
  }
  return;
}



/* Entry: 10b2dc110; end: 10b2dc177;  */

undefined8 * FUN_10b2dc110(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cd2d88;
  func_0x000107c2c6e0(param_1 + 3);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10b2dc178; end: 10b2dc2af;  */

bool FUN_10b2dc178(void)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 *unaff_x19;
  long *plVar5;
  long *unaff_x27;
  long in_stack_00000020;
  long *plStack_40;
  long lStack_38;
  
  plStack_40 = (long *)0x0;
  lStack_38 = 0;
  lVar3 = unaff_x19[1];
  if ((((lVar3 == 0) || (__ZNSt3__119__shared_weak_count4lockEv(), lStack_38 = lVar3, lVar3 == 0))
      || (plVar5 = (long *)*unaff_x19, plStack_40 = plVar5, plVar5 == (long *)0x0)) ||
     (plVar4 = plVar5, (**(code **)(*plVar5 + 0x10))(), (int)plVar4 < 1)) {
    iVar2 = -1;
  }
  else {
    (**(code **)(*plVar5 + 0x10))();
    iVar2 = (int)plVar5;
  }
  func_0x00010b2dc14c(&plStack_40);
  lVar3 = *unaff_x27;
  if (*(int *)(in_stack_00000020 + 400) == iVar2) {
    if (*(int *)(lVar3 + 400) != iVar2) {
      return true;
    }
  }
  else if (*(int *)(lVar3 + 400) == iVar2) {
    return false;
  }
  bVar1 = *(long *)(lVar3 + 0x188) < *(long *)(in_stack_00000020 + 0x188);
  if (*(int *)(in_stack_00000020 + 0x180) != *(int *)(lVar3 + 0x180)) {
    bVar1 = *(int *)(lVar3 + 0x180) < *(int *)(in_stack_00000020 + 0x180);
  }
  return bVar1;
}



/* Entry: 10b2dc2b0; end: 10b2dc36f;  */

long * FUN_10b2dc2b0(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_38;
  
  plVar1 = param_1;
  func_0x000107c35850();
  if (plVar1 == (long *)0x0) {
    param_1 = (long *)0x0;
  }
  else {
    plVar1 = param_1;
    func_0x000107c2c6f4(param_1,&uStack_38);
    lStack_48 = plVar1[1];
    lStack_50 = *plVar1;
    if (plVar1[1] != 0) {
      do {
        func_0x000107c35854();
      } while (extraout_w10 != 0);
    }
    lVar2 = param_1[5];
    func_0x000107c2c6f8(lVar2,param_1[6],&lStack_50);
    func_0x000107c2c6fc(param_1 + 5,lVar2);
    func_0x000107c2c71c(param_1,&uStack_38);
    uVar5 = *param_3;
    uVar4 = param_3[3];
    uVar3 = param_3[2];
    *(undefined8 *)(lStack_50 + 0x180) = param_3[1];
    *(undefined8 *)(lStack_50 + 0x178) = uVar5;
    *(undefined8 *)(lStack_50 + 400) = uVar4;
    *(undefined8 *)(lStack_50 + 0x188) = uVar3;
    func_0x000107c30134();
    func_0x000107c2c6f0(param_1,uStack_38,&lStack_50);
    func_0x000107c35858();
  }
  return param_1;
}



/* Entry: 10b2dc370; end: 10b2dc393;  */

bool FUN_10b2dc370(long param_1)

{
  func_0x00010b2dc4d4();
  return param_1 != 0;
}



/* Entry: 10b2dc394; end: 10b2dc3ef;  */

void FUN_10b2dc394(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  func_0x00010b2dc4d4();
  if (param_2 == (undefined8 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x000107c35860();
    lVar1 = param_2[1];
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    if (lVar1 != 0) {
      do {
        func_0x000107c35854();
      } while (extraout_w10 != 0);
    }
  }
  return;
}



/* Entry: 10b2dc3f0; end: 10b2dc42f;  */

void FUN_10b2dc3f0(long param_1,long param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  for (puVar2 = (undefined8 *)((long)*(undefined8 **)(param_1 + 8) + (param_2 - param_4));
      puVar2 < param_3; puVar2 = puVar2 + 2) {
    uVar3 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar3;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar1 = puVar1 + 2;
  }
  *(undefined8 **)(param_1 + 8) = puVar1;
  func_0x000107c35864(param_2);
  FUN_10b2dc450();
  return;
}



/* Entry: 10b2dc430; end: 10b2dc44f;  */

void FUN_10b2dc430(void)

{
  func_0x000107c35864();
  FUN_10b2dc450();
  return;
}



/* Entry: 10b2dc450; end: 10b2dc4b7;  */

undefined1  [16] FUN_10b2dc450(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar2 = param_3;
  lVar1 = param_4;
  while (lVar1 = lVar1 + -0x10, lVar2 != param_2) {
    lVar2 = lVar2 + -0x10;
    FUN_10b2d78e4(lVar1,lVar2);
    param_4 = param_4 + -0x10;
  }
  auVar3._8_8_ = param_4;
  auVar3._0_8_ = param_3;
  return auVar3;
}



/* Entry: 10b2dc4b8; end: 10b2dc4cb;  */

void FUN_10b2dc4b8(void)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10b2dc4cc; end: 10b2dc4df;  */

void FUN_10b2dc4cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10b2dc4e0; end: 10b2dc52f;  */

undefined8 FUN_10b2dc4e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_10b2dc370();
  if ((int)uVar1 != 0) {
    FUN_10b2dc2b0(*param_1,param_2,param_3);
  }
  return uVar1;
}



/* Entry: 10b2dc530; end: 10b2dc537;  */

void FUN_10b2dc530(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)*param_2;
  func_0x00010b2dc4d4();
  if (puVar1 == (undefined8 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x000107c35860();
    lVar2 = puVar1[1];
    uVar3 = *puVar1;
    param_1[1] = puVar1[1];
    *param_1 = uVar3;
    if (lVar2 != 0) {
      do {
        func_0x000107c35854();
      } while (extraout_w10 != 0);
    }
  }
  return;
}



/* Entry: 10b2dc538; end: 10b2dc56b;  */

void FUN_10b2dc538(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_10b2dc56c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10b2dc56c; end: 10b2dc57f;  */

void FUN_10b2dc56c(void)

{
  func_0x000107c2c730();
  return;
}



/* Entry: 10b2dc580; end: 10b2dc59f;  */

void FUN_10b2dc580(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x10;
    func_0x000107c2c578();
  }
  return;
}



/* Entry: 10b2dc5a0; end: 10b2dc5cf;  */

void FUN_10b2dc5a0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x10;
    func_0x000107c2c578();
  }
  return;
}



/* Entry: 10b2dc5d0; end: 10b2dc73f;  */

void FUN_10b2dc5d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long extraout_x8;
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  long alStack_a0 [4];
  undefined4 uStack_80;
  undefined1 auStack_78 [40];
  
  func_0x00010b2dcfa4();
  alStack_a0[2] = 0;
  alStack_a0[3] = 0;
  alStack_a0[0] = extraout_x8 + 0x10;
  alStack_a0[1] = 0;
  uStack_80 = 3;
  func_0x000107c278b8(auStack_b8,&DAT_10f55427b);
  func_0x00010b2dcfb0();
  func_0x00010b2dd070();
  func_0x000107c278b8(auStack_d0,&UNK_10f7425b3);
  FUN_10b2dc740(alStack_a0,auStack_d0,param_2);
  func_0x00010b2dd0b4();
  FUN_10b2dc740(alStack_a0,auStack_e8,param_3);
  func_0x00010b2dd0a4();
  FUN_10b2dc740(alStack_a0,auStack_100,param_4);
  func_0x000107c278b8(auStack_118,&UNK_10f7425df);
  FUN_10b2dc740(alStack_a0,auStack_118,param_5);
  func_0x00010b2dd090();
  func_0x00010b2dcf84();
  func_0x00010b2dd00c();
  func_0x00010b2dd014();
  func_0x00010b2dd068();
  func_0x00010b2dd038();
  func_0x00010b2dce48(alStack_a0);
  func_0x00010b2dcf00();
  func_0x00010b2dd040();
  func_0x00010b2dce48(auStack_78);
  return;
}



/* Entry: 10b2dc740; end: 10b2dc7b3;  */

long FUN_10b2dc740(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_40 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar1 = param_3;
  _strlen();
  uStack_30 = param_3;
  uStack_28 = uVar1;
  func_0x000107c27940(param_1 + 8,&uStack_50);
  func_0x000107c27950(param_1 + 8,&uStack_30);
  func_0x00010b2dcf14();
  return param_1;
}



/* Entry: 10b2dc7b4; end: 10b2dc7b7;  */

undefined8 FUN_10b2dc7b4(undefined8 param_1)

{
  func_0x00010b2dd0bc();
  func_0x000107c278a8();
  return param_1;
}



/* Entry: 10b2dc7b8; end: 10b2dc983;  */

void FUN_10b2dc7b8(undefined8 param_1,int param_2,int param_3,int param_4,int param_5)

{
  char *pcVar1;
  char in_NG;
  char in_OV;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  long alStack_c0 [4];
  undefined4 uStack_a0;
  undefined1 auStack_98 [40];
  undefined1 auStack_70 [32];
  
  func_0x000107c358e0();
  if (in_NG == in_OV) {
    func_0x000107c358b0();
    func_0x000107c358b4();
    if (extraout_x8 == 0) {
      func_0x00010b2dcfa4();
      alStack_c0[2] = 0;
      alStack_c0[3] = 0;
      alStack_c0[0] = extraout_x8_00 + 0x10;
      alStack_c0[1] = 0;
      uStack_a0 = 2;
      func_0x000107c278b8(auStack_d8,&DAT_10f55427b);
      func_0x00010b2dcfb0();
      FUN_10b2dc740(alStack_c0,auStack_d8,*(undefined8 *)(extraout_x8_01 + (long)param_2 * 8));
      func_0x000107c278b8(auStack_f0,&DAT_10f43a12c);
      FUN_10b2dc740(alStack_c0,auStack_f0,(&PTR_DAT_110cd2f80)[param_4]);
      func_0x000107c278b8(auStack_108,&UNK_10f73250d);
      FUN_10b2dc740(alStack_c0,auStack_108,(&PTR_DAT_110cd30e8)[param_5]);
      func_0x00010b2dcfbc();
      pcVar1 = "true";
      if (param_3 == 0) {
        pcVar1 = "false";
      }
      FUN_10b2dc740(alStack_c0,auStack_70,pcVar1);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
      FUN_10b2dce08(auStack_98,alStack_c0);
      func_0x00010b2dcf14();
      func_0x00010b2dcf24();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
      func_0x00010b2dce48(alStack_c0);
      func_0x00010b2dcf00();
      func_0x00010b2dd040();
      func_0x00010b2dce48(auStack_98);
    }
  }
  return;
}



/* Entry: 10b2dc984; end: 10b2dca1b;  */

void FUN_10b2dc984(void)

{
  char in_NG;
  char in_OV;
  long extraout_x8;
  long extraout_x8_00;
  
  func_0x000107c358e0();
  if (in_NG == in_OV) {
    func_0x00010b2dd01c();
    func_0x000107c358d8();
    func_0x000107c358d4();
    if (extraout_x8 == 0) {
      func_0x00010b2dcf8c();
      func_0x00010b2dce6c();
      func_0x00010b2dced0();
      func_0x00010b2dd000();
      func_0x00010b2dcff4();
      func_0x00010b2dcf84();
      func_0x00010b2dd0ac();
      func_0x00010b2dcef0();
      func_0x00010b2dd07c(*(undefined8 *)(extraout_x8_00 + 8));
      func_0x00010b2dd088();
    }
  }
  return;
}



/* Entry: 10b2dca1c; end: 10b2dcab3;  */

void FUN_10b2dca1c(void)

{
  char in_NG;
  char in_OV;
  long extraout_x8;
  long unaff_x20;
  
  func_0x000107c358e0();
  if (in_NG == in_OV) {
    func_0x00010b2dd01c();
    func_0x000107c358d8();
    func_0x000107c358d4();
    if (extraout_x8 == 0) {
      func_0x00010b2dcf8c();
      func_0x00010b2dce6c();
      func_0x00010b2dced0();
      func_0x00010b2dd000();
      func_0x00010b2dcff4();
      func_0x00010b2dcf84();
      func_0x00010b2dd0ac();
      func_0x00010b2dcee0(*(undefined8 *)(unaff_x20 + 0x48));
      func_0x00010b2dd07c();
      func_0x00010b2dd088();
    }
  }
  return;
}



/* Entry: 10b2dcab4; end: 10b2dcb77;  */

void FUN_10b2dcab4(void)

{
  undefined1 auStack_80 [32];
  undefined4 uStack_60;
  undefined1 auStack_58 [40];
  
  func_0x00010b2dce7c();
  uStack_60 = 0xc;
  func_0x00010b2dcf3c();
  func_0x00010b2dced0();
  func_0x00010b2dcf5c();
  func_0x00010b2dcfbc();
  func_0x00010b2dcf68();
  FUN_10b2dce08(auStack_58,auStack_80);
  func_0x00010b2dcf14();
  func_0x00010b2dcf24();
  func_0x00010b2dcfe0();
  func_0x00010b2dcf00();
  func_0x00010b2dd040();
  func_0x00010b2dce48(auStack_58);
  return;
}



/* Entry: 10b2dcb78; end: 10b2dcbff;  */

void FUN_10b2dcb78(long param_1)

{
  code *extraout_x8;
  
  func_0x00010b2dcf8c();
  func_0x00010b2dce6c();
  func_0x00010b2dced0();
  func_0x00010b2dd000();
  func_0x00010b2dcff4();
  func_0x00010b2dcf84();
  func_0x00010b2dd0ac();
  func_0x00010b2dcee0(*(undefined8 *)(param_1 + 0x48));
  (*extraout_x8)();
  func_0x00010b2dd088();
  return;
}



/* Entry: 10b2dcc00; end: 10b2dcd8b;  */

void FUN_10b2dcc00(undefined8 param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  undefined *puVar1;
  long extraout_x8;
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  long alStack_a0 [4];
  undefined4 uStack_80;
  undefined1 auStack_78 [40];
  
  alStack_a0[2] = 0;
  func_0x00010b2dcfa4();
  alStack_a0[3] = 0;
  alStack_a0[0] = extraout_x8 + 0x10;
  alStack_a0[1] = 0;
  uStack_80 = 0xd;
  func_0x000107c278b8(auStack_b8,"page_id");
  __ZNSt3__19to_stringEi(auStack_d0,param_2);
  func_0x00010b2dd070();
  func_0x00010b2dd0b4();
  FUN_10b2dc740(alStack_a0,auStack_e8,(&PTR_DAT_110cd30e8)[param_3]);
  func_0x00010b2dd0a4();
  FUN_10b2dc740(alStack_a0,auStack_100,(&PTR_DAT_110cd2f80)[param_4]);
  func_0x000107c278b8(auStack_118,&UNK_10f742605);
  puVar1 = &UNK_10f742613;
  if (param_5 == 0) {
    puVar1 = &DAT_10f308948;
  }
  FUN_10b2dc740(alStack_a0,auStack_118,puVar1);
  func_0x00010b2dd090();
  func_0x00010b2dcf84();
  func_0x00010b2dd00c();
  func_0x00010b2dd014();
  func_0x00010b2dd068();
  func_0x00010b2dd038();
  func_0x00010b2dce48(alStack_a0);
  func_0x00010b2dcf00();
  func_0x00010b2dd040();
  func_0x00010b2dce48(auStack_78);
  return;
}



/* Entry: 10b2dcd8c; end: 10b2dcdc7;  */

void FUN_10b2dcd8c(void)

{
  func_0x00010b2dcfc4();
  return;
}



/* Entry: 10b2dcdc8; end: 10b2dcde7;  */

void FUN_10b2dcdc8(void)

{
  func_0x000105277f8c();
  func_0x00010b2dce48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2dcde8; end: 10b2dce07;  */

undefined4 FUN_10b2dcde8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



/* Entry: 10b2dce08; end: 10b2dce6b;  */

long * FUN_10b2dce08(long *param_1,long param_2)

{
  long extraout_x8;
  
  func_0x00010b2dd0bc();
  func_0x000107c2795c();
  func_0x00010b2dcfa4();
  *param_1 = extraout_x8 + 0x10;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  return param_1;
}



/* Entry: 10b2dce6c; end: 10b2dd0db;  */

void FUN_10b2dce6c(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_10f55427b;
  func_0x00010002b82c(&stack0x00000008,&DAT_10f55427b);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50();
  return;
}



/* Entry: 10b2dd0dc; end: 10b2dd14f;  */

undefined1 FUN_10b2dd0dc(long *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  int extraout_w10;
  
  if (*param_1 != 0) {
    if (param_1[1] != 0) {
      do {
        func_0x000107c35904();
      } while (extraout_w10 != 0);
    }
    func_0x000107c35970(0x11383a6e8);
    if (!(bool)in_ZR) {
      func_0x000107c3595c();
      func_0x000107c3596c(0x11383a6e8,param_2,FUN_10b2dd500);
    }
    func_0x000107c35920();
  }
  return uRam000000011383a6e0;
}



/* Entry: 10b2dd150; end: 10b2dd17f;  */

void FUN_10b2dd150(void)

{
  FUN_10b2dd554();
  return;
}



/* Entry: 10b2dd180; end: 10b2dd1ff;  */

void FUN_10b2dd180(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar1 = param_1;
  FUN_10b2dda24(param_1,&uStack_38,param_2);
  if (*plVar1 == 0) {
    lVar2 = 0x28;
    __Znwm();
    uStack_40 = 1;
    *(undefined8 *)(lVar2 + 0x1c) = *param_2;
    plStack_48 = param_1 + 1;
    FUN_10b2ddaa0(param_1,uStack_38,plVar1,lVar2);
    uStack_50 = 0;
    func_0x00010b2ddac8(&uStack_50);
  }
  return;
}



/* Entry: 10b2dd200; end: 10b2dd39b;  */

void FUN_10b2dd200(long *param_1,int param_2)

{
  ulong uVar1;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 uVar2;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong unaff_x23;
  long *unaff_x24;
  long *plStack_58;
  
  uVar8 = (ulong)param_2;
  uVar7 = param_1[1];
  plVar6 = param_1;
  if (uVar7 != 0) {
    func_0x00010b2ddc44();
    if ((bool)in_ZR) {
      unaff_x23 = extraout_x8 & uVar8;
    }
    else {
      in_NG = (long)(uVar7 - uVar8) < 0;
      unaff_x23 = uVar8;
      if (uVar7 <= uVar8) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar8 / uVar7;
        }
        unaff_x23 = uVar8 - uVar5 * uVar7;
      }
    }
    plVar3 = *(long **)(*param_1 + unaff_x23 * 8);
    if (plVar3 != (long *)0x0) {
      do {
        while( true ) {
          plVar3 = (long *)*plVar3;
          if (plVar3 == (long *)0x0) goto LAB_10b2dd2ac;
          uVar5 = plVar3[1];
          if (uVar5 != uVar8) break;
          in_NG = *(int *)(plVar3 + 2) - param_2 < 0;
          if (*(int *)(plVar3 + 2) == param_2) {
            return;
          }
        }
        if ((uVar7 & extraout_x8) == 0) {
          uVar5 = uVar5 & extraout_x8;
        }
        else if (uVar7 <= uVar5) {
          uVar1 = 0;
          if (uVar7 != 0) {
            uVar1 = uVar5 / uVar7;
          }
          uVar5 = uVar5 - uVar1 * uVar7;
        }
        in_NG = (long)(uVar5 - unaff_x23) < 0;
      } while (uVar5 == unaff_x23);
    }
  }
LAB_10b2dd2ac:
  func_0x00010b2ddbf8();
  func_0x00010b2ddbe4();
  *(int *)(plVar6 + 2) = param_2;
  func_0x000107c35934();
  if ((uVar7 == 0) || (func_0x00010b2ddc6c(), (bool)in_NG)) {
    func_0x00010b2ddbac();
    uVar2 = uVar7 == 3;
    func_0x000107c35918();
    func_0x000107c2be50(param_1);
    uVar7 = param_1[1];
    func_0x00010b2ddc44();
    if ((bool)uVar2) {
      unaff_x23 = extraout_x8_00 & uVar8;
    }
    else {
      unaff_x23 = uVar8;
      if (uVar7 <= uVar8) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar8 / uVar7;
        }
        unaff_x23 = uVar8 - uVar5 * uVar7;
      }
    }
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + unaff_x23 * 8);
  if (plVar6 == (long *)0x0) {
    *plStack_58 = *unaff_x24;
    *unaff_x24 = (long)plStack_58;
    *(long **)(lVar4 + unaff_x23 * 8) = unaff_x24;
    if (*plStack_58 != 0) {
      uVar8 = *(ulong *)(*plStack_58 + 8);
      if ((uVar7 & uVar7 - 1) == 0) {
        uVar8 = uVar8 & uVar7 - 1;
      }
      else if (uVar7 <= uVar8) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar8 / uVar7;
        }
        uVar8 = uVar8 - uVar5 * uVar7;
      }
      *(long **)(lVar4 + uVar8 * 8) = plStack_58;
    }
  }
  else {
    *plStack_58 = *plVar6;
    *plVar6 = (long)plStack_58;
  }
  func_0x000107c35914();
  FUN_10b1e6e2c();
  return;
}



/* Entry: 10b2dd39c; end: 10b2dd4ab;  */

undefined1 FUN_10b2dd39c(void)

{
  undefined1 uVar1;
  undefined1 in_ZR;
  int extraout_w10;
  long lStack_110;
  long lStack_108;
  undefined1 auStack_100 [72];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [72];
  long lStack_40;
  long lStack_38;
  
  func_0x000107c30404(&lStack_40);
  if (lStack_40 != 0) {
    func_0x000107c278b8(auStack_a0,&UNK_10f74283f);
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    func_0x000107c358fc(auStack_88,auStack_a0);
    func_0x000107c27914(&uStack_b8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
    lStack_108 = lStack_38;
    lStack_110 = lStack_40;
    if (lStack_38 != 0) {
      do {
        func_0x000107c35904();
      } while (extraout_w10 != 0);
    }
    func_0x000107c2c774(auStack_100,auStack_88);
    func_0x000107c35970(0x11383a7c0);
    if (!(bool)in_ZR) {
      func_0x000107c35910();
      func_0x000107c3597c(0x11383a7c0);
    }
    FUN_10b2dd4ac(&lStack_110);
    func_0x000107c27f6c(auStack_88);
  }
  uVar1 = uRam000000011383a7b8;
  func_0x000107c27d08(&lStack_40);
  return uVar1;
}



/* Entry: 10b2dd4ac; end: 10b2dd4cf;  */

undefined8 FUN_10b2dd4ac(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c27f6c(param_1 + 0x10);
  func_0x0001000df750();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10b2dd4d0; end: 10b2dd4ff;  */

void FUN_10b2dd4d0(void)

{
  long lVar1;
  
  if (cRam000000011383a4c0 == '\x01') {
    lVar1 = 0x11383a4a8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    *(undefined1 *)(lVar1 + 0x18) = 0;
  }
  return;
}



/* Entry: 10b2dd500; end: 10b2dd553;  */

void FUN_10b2dd500(uint param_1)

{
  func_0x000107c35944();
  func_0x000107c35950();
  func_0x000107c358f8();
  func_0x000107c35940();
  func_0x000107c3594c();
  func_0x000107c35928();
  func_0x000107c35958();
  if ((param_1 >> 8 & 1) != 0) {
    uRam000000011383a6e0 = (undefined1)param_1;
  }
  func_0x000107c35930();
  return;
}



/* Entry: 10b2dd554; end: 10b2dd573;  */

void FUN_10b2dd554(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10b2dd574(param_1,param_2,param_2,param_3);
  return;
}



/* Entry: 10b2dd574; end: 10b2dd6ff;  */

undefined1  [16] FUN_10b2dd574(long *param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 uVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar7;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar8;
  ulong uVar9;
  ulong extraout_x9;
  long extraout_x9_00;
  ulong extraout_x9_01;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong unaff_x23;
  undefined1 auVar13 [16];
  undefined8 *puStack_68;
  
  iVar3 = *param_2;
  uVar12 = (ulong)iVar3;
  uVar11 = param_1[1];
  plVar5 = param_1;
  if (uVar11 != 0) {
    func_0x00010b2ddc44();
    if ((bool)in_ZR) {
      unaff_x23 = extraout_x8 & uVar12;
    }
    else {
      in_NG = (long)(uVar11 - uVar12) < 0;
      unaff_x23 = uVar12;
      if (uVar11 <= uVar12) {
        uVar7 = 0;
        if (uVar11 != 0) {
          uVar7 = uVar12 / uVar11;
        }
        unaff_x23 = uVar12 - uVar7 * uVar11;
      }
    }
    puVar10 = *(undefined8 **)(*param_1 + unaff_x23 * 8);
    uVar7 = extraout_x8;
    if (puVar10 != (undefined8 *)0x0) {
      do {
        while( true ) {
          puVar10 = (undefined8 *)*puVar10;
          if (puVar10 == (undefined8 *)0x0) goto LAB_10b2dd61c;
          uVar9 = puVar10[1];
          if (uVar9 != uVar12) break;
          in_NG = *(int *)(puVar10 + 2) - iVar3 < 0;
          if (*(int *)(puVar10 + 2) == iVar3) {
            uVar6 = 0;
            puStack_68 = puVar10;
            goto LAB_10b2dd6e8;
          }
        }
        if ((uVar11 & uVar7) == 0) {
          uVar9 = uVar9 & uVar7;
        }
        else if (uVar11 <= uVar9) {
          func_0x00010b2ddcd4();
          uVar7 = extraout_x8_00;
          uVar9 = extraout_x9;
        }
        in_NG = (long)(uVar9 - unaff_x23) < 0;
      } while (uVar9 == unaff_x23);
    }
  }
LAB_10b2dd61c:
  uVar1 = *param_3;
  uVar2 = *param_4;
  func_0x00010b2ddbf8();
  func_0x00010b2ddbe4();
  *(undefined4 *)(plVar5 + 2) = uVar1;
  *(undefined4 *)((long)plVar5 + 0x14) = uVar2;
  func_0x000107c35934();
  if ((uVar11 == 0) || (func_0x00010b2ddc6c(), (bool)in_NG)) {
    func_0x00010b2ddbac();
    uVar4 = uVar11 == 3;
    func_0x000107c35918();
    func_0x000107c2c78c(param_1);
    uVar11 = param_1[1];
    func_0x00010b2ddc44();
    if ((bool)uVar4) {
      unaff_x23 = extraout_x8_01 & uVar12;
    }
    else {
      unaff_x23 = uVar12;
      if (uVar11 <= uVar12) {
        uVar7 = 0;
        if (uVar11 != 0) {
          uVar7 = uVar12 / uVar11;
        }
        unaff_x23 = uVar12 - uVar7 * uVar11;
      }
    }
  }
  puVar10 = *(undefined8 **)(*param_1 + unaff_x23 * 8);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x00010b2ddc7c();
    if (extraout_x9_00 != 0) {
      uVar12 = *(ulong *)(extraout_x9_00 + 8);
      lVar8 = extraout_x8_02;
      if ((uVar11 & uVar11 - 1) == 0) {
        uVar12 = uVar12 & uVar11 - 1;
      }
      else if (uVar11 <= uVar12) {
        func_0x00010b2ddcd4();
        lVar8 = extraout_x8_03;
        uVar12 = extraout_x9_01;
      }
      *(undefined8 **)(lVar8 + uVar12 * 8) = puStack_68;
    }
  }
  else {
    *puStack_68 = *puVar10;
    *puVar10 = puStack_68;
  }
  func_0x000107c35914();
  FUN_10b2dd800();
  uVar6 = 1;
LAB_10b2dd6e8:
  auVar13._8_8_ = uVar6;
  auVar13._0_8_ = puStack_68;
  return auVar13;
}



/* Entry: 10b2dd700; end: 10b2dd7cb;  */

void FUN_10b2dd700(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar3;
  long *extraout_x9;
  long *plVar4;
  long *extraout_x9_00;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong uVar5;
  ulong extraout_x11_00;
  long *plVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_10b2dd7cc(param_1);
    param_1[1] = 0;
  }
  else {
    plVar6 = param_1 + 1;
    FUN_10b2dd7e4(plVar6);
    FUN_10b2dd7cc(param_1,plVar6);
    param_1[1] = param_2;
    lVar2 = *param_1;
    for (uVar3 = 0; param_2 != uVar3; uVar3 = uVar3 + 1) {
      *(undefined8 *)(lVar2 + uVar3 * 8) = 0;
    }
    if (param_1[2] != 0) {
      func_0x00010b2ddcc0();
      func_0x00010b2ddcac();
      lVar2 = extraout_x8;
      plVar6 = extraout_x9;
      uVar3 = extraout_x10;
      uVar5 = extraout_x11;
      while (plVar4 = plVar6, plVar6 = (long *)*plVar4, plVar6 != (long *)0x0) {
        uVar7 = plVar6[1];
        if ((param_2 & uVar3) == 0) {
          uVar7 = uVar7 & uVar3;
        }
        else if (param_2 <= uVar7) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar1 * param_2;
        }
        if (uVar7 != uVar5) {
          if (*(long *)(lVar2 + uVar7 * 8) == 0) {
            *(long **)(lVar2 + uVar7 * 8) = plVar4;
            uVar5 = uVar7;
          }
          else {
            func_0x00010b2ddc04();
            lVar2 = extraout_x8_00;
            plVar6 = extraout_x9_00;
            uVar3 = extraout_x10_00;
            uVar5 = extraout_x11_00;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10b2dd7cc; end: 10b2dd7e3;  */

void FUN_10b2dd7cc(long *param_1,long param_2)

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



/* Entry: 10b2dd7e4; end: 10b2dd7ff;  */

void FUN_10b2dd7e4(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107c35988();
  FUN_10b2dd820();
  return;
}



/* Entry: 10b2dd800; end: 10b2dd81f;  */

void FUN_10b2dd800(void)

{
  func_0x000107c35988();
  FUN_10b2dd820();
  return;
}



/* Entry: 10b2dd820; end: 10b2dd837;  */

void FUN_10b2dd820(long *param_1,long param_2)

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



/* Entry: 10b2dd838; end: 10b2dd857;  */

void FUN_10b2dd838(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10b2dd858(param_1,param_2,param_2,param_3);
  return;
}



/* Entry: 10b2dd858; end: 10b2dd9e3;  */

undefined1  [16] FUN_10b2dd858(long *param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 uVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar7;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar8;
  ulong uVar9;
  ulong extraout_x9;
  long extraout_x9_00;
  ulong extraout_x9_01;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong unaff_x23;
  undefined1 auVar13 [16];
  undefined8 *puStack_68;
  
  iVar3 = *param_2;
  uVar12 = (ulong)iVar3;
  uVar11 = param_1[1];
  plVar5 = param_1;
  if (uVar11 != 0) {
    func_0x00010b2ddc44();
    if ((bool)in_ZR) {
      unaff_x23 = extraout_x8 & uVar12;
    }
    else {
      in_NG = (long)(uVar11 - uVar12) < 0;
      unaff_x23 = uVar12;
      if (uVar11 <= uVar12) {
        uVar7 = 0;
        if (uVar11 != 0) {
          uVar7 = uVar12 / uVar11;
        }
        unaff_x23 = uVar12 - uVar7 * uVar11;
      }
    }
    puVar10 = *(undefined8 **)(*param_1 + unaff_x23 * 8);
    uVar7 = extraout_x8;
    if (puVar10 != (undefined8 *)0x0) {
      do {
        while( true ) {
          puVar10 = (undefined8 *)*puVar10;
          if (puVar10 == (undefined8 *)0x0) goto LAB_10b2dd900;
          uVar9 = puVar10[1];
          if (uVar9 != uVar12) break;
          in_NG = *(int *)(puVar10 + 2) - iVar3 < 0;
          if (*(int *)(puVar10 + 2) == iVar3) {
            uVar6 = 0;
            puStack_68 = puVar10;
            goto LAB_10b2dd9cc;
          }
        }
        if ((uVar11 & uVar7) == 0) {
          uVar9 = uVar9 & uVar7;
        }
        else if (uVar11 <= uVar9) {
          func_0x00010b2ddcd4();
          uVar7 = extraout_x8_00;
          uVar9 = extraout_x9;
        }
        in_NG = (long)(uVar9 - unaff_x23) < 0;
      } while (uVar9 == unaff_x23);
    }
  }
LAB_10b2dd900:
  uVar1 = *param_3;
  uVar2 = *param_4;
  func_0x00010b2ddbf8();
  func_0x00010b2ddbe4();
  *(undefined4 *)(plVar5 + 2) = uVar1;
  *(undefined4 *)((long)plVar5 + 0x14) = uVar2;
  func_0x000107c35934();
  if ((uVar11 == 0) || (func_0x00010b2ddc6c(), (bool)in_NG)) {
    func_0x00010b2ddbac();
    uVar4 = uVar11 == 3;
    func_0x000107c35918();
    func_0x000107c2c78c(param_1);
    uVar11 = param_1[1];
    func_0x00010b2ddc44();
    if ((bool)uVar4) {
      unaff_x23 = extraout_x8_01 & uVar12;
    }
    else {
      unaff_x23 = uVar12;
      if (uVar11 <= uVar12) {
        uVar7 = 0;
        if (uVar11 != 0) {
          uVar7 = uVar12 / uVar11;
        }
        unaff_x23 = uVar12 - uVar7 * uVar11;
      }
    }
  }
  puVar10 = *(undefined8 **)(*param_1 + unaff_x23 * 8);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x00010b2ddc7c();
    if (extraout_x9_00 != 0) {
      uVar12 = *(ulong *)(extraout_x9_00 + 8);
      lVar8 = extraout_x8_02;
      if ((uVar11 & uVar11 - 1) == 0) {
        uVar12 = uVar12 & uVar11 - 1;
      }
      else if (uVar11 <= uVar12) {
        func_0x00010b2ddcd4();
        lVar8 = extraout_x8_03;
        uVar12 = extraout_x9_01;
      }
      *(undefined8 **)(lVar8 + uVar12 * 8) = puStack_68;
    }
  }
  else {
    *puStack_68 = *puVar10;
    *puVar10 = puStack_68;
  }
  func_0x000107c35914();
  FUN_10b2dd800();
  uVar6 = 1;
LAB_10b2dd9cc:
  auVar13._8_8_ = uVar6;
  auVar13._0_8_ = puStack_68;
  return auVar13;
}



/* Entry: 10b2dd9e4; end: 10b2dda23;  */

void FUN_10b2dd9e4(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x000107c3046c(param_2 + 0x28);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10b2dda24; end: 10b2dda9f;  */

long * FUN_10b2dda24(long param_1,long *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar4 = (long *)(param_1 + 8);
  plVar5 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    iVar2 = *param_3;
    plVar6 = (long *)*plVar4;
    do {
      while( true ) {
        iVar3 = *(int *)((long)plVar6 + 0x1c);
        bVar1 = param_3[1] < (int)plVar6[4];
        if (iVar2 != iVar3) {
          bVar1 = iVar2 < iVar3;
        }
        plVar5 = plVar6;
        if (!bVar1) break;
        plVar7 = (long *)*plVar6;
        plVar4 = plVar6;
        plVar6 = plVar7;
        if (plVar7 == (long *)0x0) goto LAB_10b2dda9c;
      }
      bVar1 = (int)plVar6[4] < param_3[1];
      if (iVar2 != iVar3) {
        bVar1 = iVar3 < iVar2;
      }
      if (!bVar1) break;
      plVar4 = plVar6 + 1;
      plVar6 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
LAB_10b2dda9c:
  *param_2 = (long)plVar5;
  return plVar4;
}



/* Entry: 10b2ddaa0; end: 10b2ddae7;  */

void FUN_10b2ddaa0(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x000107c3592c();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x000107c35968();
  func_0x000107c35990();
  return;
}



/* Entry: 10b2ddae8; end: 10b2ddaff;  */

void FUN_10b2ddae8(long *param_1,long param_2)

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



/* Entry: 10b2ddb00; end: 10b2ddb3f;  */

void FUN_10b2ddb00(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x000107c2be48(param_2 + 0x30);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10b2ddb40; end: 10b2ddb73;  */

void FUN_10b2ddb40(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)**(undefined8 **)*param_1;
  (**(code **)(*plVar1 + 0x38))(plVar1,*(undefined8 **)*param_1 + 2);
  if (((uint)plVar1 >> 8 & 1) != 0) {
    uRam000000011383a7b8 = SUB81(plVar1,0);
  }
  return;
}



/* Entry: 10b2ddb74; end: 10b2ddcdf;  */

undefined8 FUN_10b2ddb74(undefined8 param_1)

{
  func_0x0001000df750();
  if ((undefined1 *)register0x00000008 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10b2ddce0; end: 10b2ddd57;  */

undefined8 FUN_10b2ddce0(void)

{
  int iVar1;
  
  if ((bRam000000011383a810 & 1) == 0) {
    iVar1 = 0x1383a810;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10b2dde74(0x11383a7d0,&UNK_10f742b0e);
      ___cxa_guard_release(0x11383a810);
    }
  }
  return 0x11383a7d0;
}



/* Entry: 10b2ddd58; end: 10b2dddef;  */

void FUN_10b2ddd58(undefined8 param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *extraout_x8;
  undefined1 uStack_71;
  undefined1 **ppuStack_70;
  undefined1 *puStack_68;
  long lStack_40;
  undefined1 *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  plVar4 = &lStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = 0x11383a818;
  func_0x000107c2a264(&lStack_40);
  func_0x000107c2a260();
  puStack_38 = (undefined1 *)plVar4;
  uStack_30 = uVar5;
  if (lStack_40 != 0) {
    func_0x00010b2ddf20();
  }
  func_0x000107c27f30(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    if (lStack_40 != 0) {
      func_0x00010b2ddf20();
    }
    func_0x00010b2ddf0c();
    if (lRam000000011383a820 != -1) {
      puStack_68 = &uStack_71;
      ppuStack_70 = &puStack_68;
      __ZNSt3__111__call_onceERVmPvPFvS2_E(0x11383a820,&ppuStack_70,FUN_10b2dde7c);
    }
    lVar3 = lRam000000011383a838;
    uVar5 = uRam000000011383a830;
    extraout_x8[1] = lRam000000011383a838;
    *extraout_x8 = uVar5;
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  return;
}



/* Entry: 10b2dddf0; end: 10b2dde73;  */

void FUN_10b2dddf0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 uStack_31;
  undefined1 **ppuStack_30;
  undefined1 *puStack_28;
  
  if (lRam000000011383a820 != -1) {
    puStack_28 = &uStack_31;
    ppuStack_30 = &puStack_28;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(0x11383a820,&ppuStack_30,FUN_10b2dde7c);
  }
  lVar5 = lRam000000011383a838;
  uVar4 = uRam000000011383a830;
  param_1[1] = lRam000000011383a838;
  *param_1 = uVar4;
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



/* Entry: 10b2dde74; end: 10b2dde7b;  */

long FUN_10b2dde74(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000100151d80();
  *(undefined4 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x24) = 0;
  *(undefined8 *)(lVar1 + 0x1c) = 0;
  *(undefined8 *)(lVar1 + 0x34) = 0;
  *(undefined8 *)(lVar1 + 0x2c) = 0;
  *(undefined4 *)(lVar1 + 0x3c) = 0;
  lVar1 = param_2;
  func_0x000107c613d0(param_2);
  func_0x0001001521f0(param_1,param_2,param_2 + lVar1);
  return param_1;
}



/* Entry: 10b2dde7c; end: 10b2ddf0b;  */

void FUN_10b2dde7c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = CONCAT44(uStack_30._4_4_,6);
  func_0x000107c3144c();
  func_0x000107c28158(auStack_40,&UNK_10f742b31,&uStack_30,param_1);
  func_0x000107c27f7c(&uStack_50,auStack_40);
  uVar2 = uStack_48;
  uVar1 = uStack_50;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_28 = uRam000000011383a838;
  uStack_30 = uRam000000011383a830;
  uRam000000011383a838 = uVar2;
  uRam000000011383a830 = uVar1;
  func_0x000107c27f48(&uStack_30);
  func_0x000107c27f48(&uStack_50);
  func_0x000107c27c20(auStack_40);
  return;
}



/* Entry: 10b2ddf0c; end: 10b2ddf2b;  */

void FUN_10b2ddf0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10b2ddf2c; end: 10b2ddf83;  */

bool FUN_10b2ddf2c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  
  ppuVar4 = &PTR_DAT_110cd31a8;
  lVar1 = 0x10;
  do {
    lVar3 = lVar1;
    if (lVar3 == 0) break;
    uVar2 = param_1;
    FUN_10b2de150(param_1,ppuVar4);
    ppuVar4 = ppuVar4 + 1;
    lVar1 = lVar3 + -8;
  } while ((int)uVar2 == 0);
  return lVar3 != 0;
}



/* Entry: 10b2ddf84; end: 10b2de03f;  */

uint FUN_10b2ddf84(long *param_1,uint param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  
  lVar3 = *param_1;
  if (((*(byte *)(lVar3 + 0x140) & 1) != 0) ||
     (((param_3 & 1) == 0 && (*(int *)(lVar3 + 600) == 1)))) {
    uVar4 = 0;
    goto LAB_10b2ddff4;
  }
  uVar4 = (uint)*(ushort *)(lVar3 + 0x2b4);
  if ((*(ushort *)(lVar3 + 0x2b4) >> 8 & 1) != 0) goto LAB_10b2ddff4;
  lVar1 = 0xc0;
  if (*(char *)(lVar3 + 0x120) == '\0') {
    lVar1 = 0x60;
  }
  if ((*(int *)(lVar3 + lVar1 + 0x38) == 0) &&
     (*(uint *)(lVar3 + 0xa8) < 9 && (1 << (ulong)(*(uint *)(lVar3 + 0xa8) & 0x1f) & 0x103U) != 0))
  {
    func_0x000107c30138();
    iVar2 = (int)lVar3;
    FUN_10b2ddf2c();
    if (iVar2 == 0) goto LAB_10b2ddfe4;
    uVar4 = param_2;
    FUN_10b2de040();
  }
  else {
LAB_10b2ddfe4:
    uVar4 = 0;
  }
  *(ushort *)(*param_1 + 0x2b4) = (ushort)uVar4 | 0x100;
LAB_10b2ddff4:
  return uVar4 & 1;
}



/* Entry: 10b2de040; end: 10b2de14f;  */

uint FUN_10b2de040(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  undefined1 auStack_58 [8];
  
  if (*(char *)(param_1 + 0x178) == '\x01') {
    uVar5 = 0;
    lVar1 = *(long *)(param_1 + 0x120);
    for (lVar4 = *(long *)(param_1 + 0x118); lVar4 != lVar1; lVar4 = lVar4 + 0x30) {
      __ZNSt3__16localeC1Ev(auStack_58);
      lVar2 = lVar4;
      FUN_10b2d5738(lVar4,&PTR_DAT_110cd31b8,auStack_58);
      if ((int)lVar2 == 0) {
        func_0x00010b2de1c8();
      }
      else {
        uVar3 = lVar4 + 0x18;
        func_0x000107c27cf4(uVar3,&UNK_10f742b5d);
        func_0x00010b2de1c8();
        if ((uVar3 & 1) == 0) goto LAB_10b2de118;
      }
      __ZNSt3__16localeC1Ev(auStack_58);
      lVar2 = lVar4;
      FUN_10b2d5738(lVar4,&PTR_DAT_110cd31c0,auStack_58);
      if ((int)lVar2 == 0) {
        func_0x00010b2de1c8();
      }
      else {
        lVar2 = lVar4 + 0x18;
        func_0x000107c27cf4(lVar2,&UNK_10f742b66);
        func_0x00010b2de1c8();
        uVar5 = (uint)lVar2 | uVar5;
      }
    }
  }
  else {
LAB_10b2de118:
    uVar5 = 0;
  }
  return uVar5 & 1;
}



/* Entry: 10b2de150; end: 10b2de197;  */

bool FUN_10b2de150(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = param_2;
  func_0x000107c28354();
  pcVar2 = pcVar1;
  func_0x000105643358();
  do {
    if (pcVar1 == param_1 || pcVar2 == param_2) {
      return pcVar2 == param_2;
    }
    pcVar1 = pcVar1 + -1;
    pcVar2 = pcVar2 + -1;
  } while (*pcVar1 == *pcVar2);
  return false;
}



/* Entry: 10b2de198; end: 10b2de1cf;  */

bool FUN_10b2de198(char *param_1,char *param_2,char *param_3,char *param_4)

{
  do {
    if (param_2 == param_1 || param_4 == param_3) {
      return param_4 == param_3;
    }
    param_2 = param_2 + -1;
    param_4 = param_4 + -1;
  } while (*param_2 == *param_4);
  return false;
}



/* Entry: 10b2de1d0; end: 10b2de2c7;  */

undefined1 * FUN_10b2de1d0(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [24];
  char cStack_48;
  
  puVar2 = *(undefined8 **)(param_2 + 0x28);
  for (puVar6 = *(undefined8 **)(param_2 + 0x20); puVar5 = puVar2, puVar6 != puVar2;
      puVar6 = puVar6 + 6) {
    uVar1 = puVar6[1];
    puVar5 = (undefined8 *)*puVar6;
    if (-1 < (char)*(byte *)((long)puVar6 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)puVar6 + 0x17);
      puVar5 = puVar6;
    }
    puVar3 = &UNK_10f742b8b;
    func_0x000107c27944(&UNK_10f742b8b,0x10,puVar5,uVar1);
    puVar5 = puVar6;
    if (((ulong)puVar3 & 1) != 0) break;
  }
  if (puVar5 == *(undefined8 **)(param_2 + 0x28)) {
    FUN_10b2de2c8(auStack_60,param_2 + 8);
    if (cStack_48 == '\x01') {
      FUN_10b2de2c8(auStack_80,param_3);
      puVar4 = auStack_60;
      func_0x0001072eba10(puVar4,auStack_80);
      func_0x000107c279a4(auStack_80);
    }
    else {
      puVar4 = (undefined1 *)0x0;
    }
    func_0x000107c279a4(auStack_60);
  }
  else {
    puVar4 = (undefined1 *)0x0;
  }
  return puVar4;
}



/* Entry: 10b2de2c8; end: 10b2de36f;  */

void FUN_10b2de2c8(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2;
  func_0x000107c28320(param_2,&DAT_10f300a96,0);
  if (uVar2 != 0xffffffffffffffff) {
    uVar1 = *(ulong *)(param_2 + 8);
    if (-1 < (char)*(byte *)(param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)(param_2 + 0x17);
    }
    if (uVar2 < uVar1) {
      func_0x000107c27fb4(&uStack_38,param_2,0,uVar2);
      param_1[1] = uStack_30;
      *param_1 = uStack_38;
      param_1[2] = uStack_28;
      uStack_30 = 0;
      uStack_28 = 0;
      uStack_38 = 0;
      *(undefined1 *)(param_1 + 3) = 1;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_38);
      return;
    }
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b2de370; end: 10b2de377;  */

void FUN_10b2de370(void)

{
  return;
}



/* Entry: 10b2de378; end: 10b2de42f;  */

undefined8 FUN_10b2de378(void)

{
  int iVar1;
  undefined1 uStack_31;
  undefined1 **ppuStack_30;
  undefined1 *puStack_28;
  
  if ((bRam000000011383a898 & 1) == 0) {
    iVar1 = 0x1383a898;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c2c7b0(0x11383a840);
      ___cxa_guard_release(0x11383a898);
    }
  }
  if (lRam000000011383a8a0 != -1) {
    puStack_28 = &uStack_31;
    ppuStack_30 = &puStack_28;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(0x11383a8a0,&ppuStack_30,FUN_10b2de430);
  }
  return 0x11383a840;
}



/* Entry: 10b2de430; end: 10b2de467;  */

void FUN_10b2de430(void)

{
  uRam000000011383a88c = 0;
  uRam000000011383a888 = 8;
  uRam000000011383a870 = 0x100000003;
  uRam000000011383a880 = 0x4000000000000000;
  uRam000000011383a878 = 0x3fe0000000000000;
  uRam000000011383a890 = 1;
  return;
}



/* Entry: 10b2de468; end: 10b2de627;  */

void FUN_10b2de468(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  ulong auStack_58 [3];
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010b2debb0();
    if ((iVar1 != *(int *)(param_1 + 0xb0)) &&
       (*(int *)(param_1 + 0xb0) = iVar1, *(char *)(param_1 + 0x9e) == '\x01')) {
      plVar6 = *(long **)(param_1 + 0x48);
      if (plVar6[3] == 0) {
        return;
      }
      FUN_10b2de708(plVar6,plVar6[2]);
      plVar6[2] = 0;
      lVar4 = plVar6[1];
      for (lVar3 = 0; lVar4 != lVar3; lVar3 = lVar3 + 1) {
        *(undefined8 *)(*plVar6 + lVar3 * 8) = 0;
      }
      plVar6[3] = 0;
      return;
    }
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010b2debb0();
  if (iVar1 != 4) {
    if (*(char *)(param_1 + 0x9d) == '\x01') {
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010b2debb0(uVar2);
    }
    else {
      uVar2 = 4;
    }
    lVar3 = *(long *)(param_1 + 0x48);
    FUN_10b2ded90(lVar3,param_2,param_4,param_5,uVar2);
    if ((lVar3 != 0) &&
       ((**(code **)**(undefined8 **)(param_1 + 8))(auStack_58), auStack_58[0] != 0)) {
      piVar5 = (int *)*param_3;
      while (piVar5 != (int *)param_3[1]) {
        iVar1 = *piVar5;
        if ((iVar1 == 0x3eb) || (piVar5 = piVar5 + 0xc, iVar1 == 0x44c)) break;
      }
      FUN_10b2de628(param_1,param_2,param_4);
    }
  }
  return;
}



/* Entry: 10b2de628; end: 10b2de677;  */

undefined8 FUN_10b2de628(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    return 0;
  }
  uVar1 = param_2;
  func_0x000107c28188(param_2);
  param_1 = param_1 + 0x60;
  func_0x000107c27d5c(param_1,param_2,uVar1,0);
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  return uVar1;
}



/* Entry: 10b2de678; end: 10b2de6ef;  */

void FUN_10b2de678(long param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                  long param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uStack_68;
  long lStack_60;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  lVar5 = *(long *)(param_1 + 0x48);
  uVar1 = *param_3;
  uVar2 = *param_4;
  if (*(char *)(param_1 + 0x9d) == '\x01') {
    uVar4 = (undefined4)*(undefined8 *)(param_1 + 8);
    func_0x00010b2debb0();
  }
  else {
    uVar4 = 4;
  }
  if (0 < param_5) {
    func_0x00010b2df9f8(lVar5,param_2);
    lVar3 = lVar5;
    uStack_50 = uVar1;
    uStack_4c = uVar2;
    uStack_48 = uVar4;
    FUN_10b2decf4(lVar5,&uStack_68);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_68);
    if (*(ulong *)(lVar5 + 0x28) <= *(ulong *)(lVar3 + 0x28)) {
      FUN_10b2ded28(lVar3);
    }
    uStack_68 = param_6;
    lStack_60 = param_5;
    FUN_10b2ded44(lVar3,&uStack_68);
  }
  return;
}



/* Entry: 10b2de6f0; end: 10b2de6f3;  */

undefined8 * FUN_10b2de6f0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cd3228;
  func_0x000107c304e4(param_1 + 10);
  func_0x00010b2de90c(param_1 + 9);
  func_0x000107c28170(param_1 + 3);
  return param_1;
}



/* Entry: 10b2de6f4; end: 10b2de707;  */

void FUN_10b2de6f4(void)

{
  FUN_10b2de8c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2de708; end: 10b2de76b;  */

void FUN_10b2de708(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  while (param_2 != (long *)0x0) {
    lVar1 = *param_2;
    func_0x00010b2de744(param_2 + 2);
    __ZdlPv(param_2);
    param_2 = (long *)lVar1;
  }
  return;
}



/* Entry: 10b2de76c; end: 10b2de7af;  */

long * FUN_10b2de76c(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_10b2de7b0();
  puVar1 = (undefined8 *)param_1[2];
  for (puVar2 = (undefined8 *)param_1[1]; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    __ZdlPv(*puVar2);
  }
  FUN_10b2de8a4();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b2de7b0; end: 10b2de82b;  */

void FUN_10b2de7b0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  FUN_10b2de82c();
  func_0x00010b2de850(param_1);
  *(undefined8 *)(param_1 + 0x28) = 0;
  puVar1 = *(undefined8 **)(param_1 + 8);
  while (uVar3 = *(long *)(param_1 + 0x10) - (long)puVar1 >> 3, 2 < uVar3) {
    __ZdlPv(*puVar1);
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  if (uVar3 == 1) {
    uVar2 = 0x80;
  }
  else {
    if (uVar3 != 2) {
      return;
    }
    uVar2 = 0x100;
  }
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  return;
}



/* Entry: 10b2de82c; end: 10b2de877;  */

void FUN_10b2de82c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    return;
  }
  return;
}



/* Entry: 10b2de878; end: 10b2de8a3;  */

long * FUN_10b2de878(long *param_1)

{
  FUN_10b2de8a4();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b2de8a4; end: 10b2de8c7;  */

void FUN_10b2de8a4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10b2de8c8; end: 10b2de92f;  */

undefined8 * FUN_10b2de8c8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cd3228;
  func_0x000107c304e4(param_1 + 10);
  func_0x00010b2de90c(param_1 + 9);
  func_0x000107c28170(param_1 + 3);
  return param_1;
}



/* Entry: 10b2de930; end: 10b2de947;  */

void FUN_10b2de930(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_10b2de964(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}


