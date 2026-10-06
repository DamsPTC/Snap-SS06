/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108358394; end: 1083584cf;  */

uint FUN_108358394(float *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  
  fVar3 = 1.0 / param_1[8];
  if ((0.001 < ABS(fVar3 * param_1[6])) || (0.001 < ABS(fVar3 * param_1[7]))) {
    uVar1 = 0;
  }
  else {
    dVar5 = (double)(long)(param_1[2] * fVar3 + 0.5);
    if ((0.001 < ABS(1.0 - fVar3 * *param_1)) || (0.001 < ABS(0.0 - fVar3 * param_1[1]))) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)(ABS((float)dVar5 - param_1[2] * fVar3) <= 0.001);
    }
    if ((ABS(0.0 - fVar3 * param_1[3]) <= 0.001) && (ABS(1.0 - fVar3 * param_1[4]) <= 0.001)) {
      dVar4 = (double)(long)(fVar3 * param_1[5] + 0.5);
      fVar3 = ABS((float)dVar4 - fVar3 * param_1[5]);
      if (fVar3 <= 0.001 && (param_2 != (undefined8 *)0x0 & uVar1) != 0) {
        *param_2 = CONCAT44((int)dVar4,(int)dVar5);
        uVar2 = 0x100;
        uVar1 = 1;
      }
      else {
        uVar2 = 0x100;
        if (0.001 < fVar3) {
          uVar2 = 0;
        }
      }
      goto LAB_1083583d8;
    }
  }
  uVar2 = 0;
LAB_1083583d8:
  return uVar2 | uVar1;
}



/* Entry: 1083584d0; end: 1083588e3;  */

long * FUN_1083584d0(long *param_1,long *param_2,long param_3,long *param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  plVar2 = param_2;
  if ((bRam000000011372b0d0 & 1) == 0) {
    plVar2 = (long *)0x11372b0d0;
    ___cxa_guard_acquire();
    if ((int)plVar2 != 0) {
      plVar2 = (long *)0x11372b0d0;
      ___cxa_guard_release(0x11372b0d0);
    }
  }
  if (((((int)param_4[1] <= (int)*param_4) ||
       (*(int *)((long)param_4 + 0xc) <= *(int *)((long)param_4 + 4))) ||
      (plVar6 = (long *)(param_3 + 200), *(int *)(param_3 + 0xd0) <= *(int *)plVar6)) ||
     (*(int *)(param_3 + 0xd4) <= *(int *)(param_3 + 0xcc))) {
    FUN_1083413f4(param_1,&stack0xffffffffffffffd8);
    func_0x000108341fb4();
    return param_1;
  }
  lStack_80 = *param_4;
  lStack_78 = param_4[1];
  if (*param_2 == 0) {
LAB_1083586c4:
    func_0x00010835c140();
    return plVar2;
  }
  plVar2 = &lStack_80;
  func_0x00010821b838(plVar2,param_2 + 0xb);
  if (((ulong)plVar2 & 1) == 0) goto LAB_1083586c4;
  lVar3 = *(long *)(param_3 + 200);
  FUN_1083577b0(param_4,lVar3,*(undefined8 *)(param_3 + 0xd0),param_5);
  plVar2 = &lStack_80;
  uStack_90 = param_4;
  uStack_88 = lVar3;
  func_0x00010821b838(plVar2,&uStack_90);
  if (((ulong)plVar2 & 1) == 0) goto LAB_1083586c4;
  iVar4 = (int)param_5;
  if (iVar4 == 0) {
LAB_10835874c:
    puVar1 = &uStack_90;
    func_0x000108219544(puVar1,plVar6);
    plVar2 = plVar6;
    if (((ulong)puVar1 & 1) != 0) goto LAB_108358760;
    plVar2 = &lStack_80;
    func_0x000108219544(plVar2,&uStack_90);
    if (((ulong)plVar2 & 1) != 0) goto LAB_10835876c;
    if ((iVar4 == 0) && (*(int *)((long)param_2 + 0x24) == 3)) {
      lStack_c0 = 0x100000001;
      FUN_10833e0cc(&lStack_80,&lStack_c0);
      plVar2 = &uStack_90;
      func_0x00010821b838(plVar2,&lStack_80);
    }
  }
  else {
    if (iVar4 != 3) {
      dVar10 = (double)(int)uStack_90;
      dVar12 = (double)(int)uStack_88 - dVar10;
      dVar17 = (double)(long)(((double)*(int *)(param_3 + 200) - dVar10) / dVar12);
      if ((double)(long)(((double)*(int *)(param_3 + 0xd0) - dVar10) / dVar12) - dVar17 <= 1.0) {
        dVar13 = (double)uStack_90._4_4_;
        dVar14 = (double)uStack_88._4_4_ - dVar13;
        dVar15 = (double)(long)(((double)*(int *)(param_3 + 0xcc) - dVar13) / dVar14);
        if ((double)(long)(((double)*(int *)(param_3 + 0xd4) - dVar13) / dVar14) - dVar15 <= 1.0) {
          dVar16 = -dVar13;
          uVar8 = 0x3f800000;
          dVar11 = -dVar10;
          if (iVar4 == 2) {
            dVar7 = dVar17 - (double)(long)(dVar17 * 0.5) * 2.0;
            uVar9 = 0xbf800000;
            uVar8 = 0xbf800000;
            dVar11 = dVar12 + dVar10;
            if ((double)((ulong)dVar7 ^ ((ulong)dVar7 ^ (ulong)dVar17) & 0x8007ffffffffffff) <=
                0.000244140625) {
              uVar8 = 0x3f800000;
              dVar11 = -dVar10;
            }
            dVar7 = dVar15 - (double)(long)(dVar15 * 0.5) * 2.0;
            if ((double)((ulong)dVar7 ^ ((ulong)dVar7 ^ (ulong)dVar15) & 0x8007ffffffffffff) <=
                0.000244140625) goto LAB_1083586e0;
            dVar16 = dVar14 + dVar13;
          }
          else {
LAB_1083586e0:
            uVar9 = 0x3f800000;
          }
          dVar11 = dVar10 + dVar12 * dVar17 + dVar11;
          dVar17 = (double)NEON_fminnm(dVar11,0x41dfffffffc00000);
          if (dVar17 <= -2147483647.0) {
            dVar17 = -2147483647.0;
          }
          if ((float)(int)dVar17 == (float)dVar11) {
            dVar16 = dVar13 + dVar14 * dVar15 + dVar16;
            dVar17 = (double)NEON_fminnm(dVar16,0x41dfffffffc00000);
            if (dVar17 <= -2147483647.0) {
              dVar17 = -2147483647.0;
            }
            if ((float)(int)dVar17 == (float)dVar16) {
              uStack_68 = 0;
              lStack_70 = 0x3f800000;
              uStack_58 = 0;
              uStack_60 = 0x3f800000;
              uStack_50 = 0x103f800000;
              plVar2 = &lStack_70;
              func_0x000108142138(uVar8,uVar9,plVar2);
              uStack_b8 = uStack_68;
              lStack_c0 = lStack_70;
              uStack_a8 = uStack_58;
              uStack_b0 = uStack_60;
              uStack_a0 = uStack_50;
              uStack_98 = 1;
              func_0x00010835c44c();
              FUN_1083588e4();
              return plVar2;
            }
          }
        }
      }
      if (iVar4 != 3) goto LAB_10835874c;
    }
    plVar2 = &lStack_80;
LAB_108358760:
    uStack_90 = (long *)*plVar2;
    uStack_88 = plVar2[1];
    param_5 = 3;
LAB_10835876c:
    iVar4 = *(int *)((long)param_2 + 0x24);
    plVar2 = param_2 + 5;
    FUN_108358b38(plVar2,&lStack_c0);
    iVar5 = (int)param_5;
    if (((int)plVar2 != 0) &&
       ((iVar4 == 0 && iVar5 == 0 ||
        (plVar2 = param_2, func_0x000108358b60(param_2,&uStack_90,0), ((uint)plVar2 >> 1 & 1) == 0))
       )) {
      func_0x00010835c44c();
      FUN_108357d1c();
      if ((*param_1 != 0) && (*(int *)((long)param_1 + 0x24) = iVar5, iVar5 != 3)) {
        lVar3 = *plVar6;
        param_1[0xc] = *(long *)(param_3 + 0xd0);
        param_1[0xb] = lVar3;
      }
      if (iVar5 == 3 && (int)param_1[1] != 2) {
        return plVar2;
      }
      *(undefined4 *)(param_1 + 1) = 0;
      return plVar2;
    }
    if (iVar5 == 3) {
      plVar2 = param_1;
      FUN_108341774(param_1,param_2);
      goto LAB_108358868;
    }
  }
  func_0x00010835c44c();
  FUN_108357b28();
  if (*param_1 == 0) {
    return plVar2;
  }
  *(int *)((long)param_1 + 0x24) = (int)param_5;
  uStack_90 = (long *)*plVar6;
  uStack_88 = *(long *)(param_3 + 0xd0);
LAB_108358868:
  param_1[0xc] = uStack_88;
  param_1[0xb] = (long)uStack_90;
  return plVar2;
}



/* Entry: 1083588e4; end: 108358b37;  */

long * FUN_1083588e4(long *param_1,long *param_2,long param_3,long *param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long **pplVar7;
  undefined8 *unaff_x20;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 auStack_c8 [40];
  long lStack_a0;
  long *plStack_98;
  long **pplStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((((*param_2 == 0) || (func_0x00010835c410(), (bool)in_ZR || in_NG != in_OV)) ||
      (*(int *)(param_3 + 0xd4) <= *(int *)(param_3 + 0xcc))) ||
     (plVar2 = param_4, FUN_10818cfd0(param_4,0), ((ulong)plVar2 & 1) == 0)) {
    FUN_1083413f4(param_1,&stack0xffffffffffffffd8);
    func_0x000108341fb4();
    return param_1;
  }
  plVar2 = param_2 + 5;
  func_0x00010835c170(plVar2);
  plVar3 = param_4;
  func_0x00010835c170();
  puVar1 = (undefined8 *)&UNK_10df1cb00;
  if ((int)plVar3 == 0) {
    puVar1 = param_5;
  }
  uStack_78 = puVar1[1];
  uStack_80 = *puVar1;
  uStack_70 = puVar1[2];
  if (((ulong)plVar3 & 1) == 0) {
    lStack_f0 = *param_4;
    uStack_e8 = (undefined4)param_4[1];
    uStack_e4 = (undefined4)((ulong)param_4[1] >> 0x20);
    uStack_d8 = (undefined4)param_4[3];
    uStack_d4 = (undefined4)((ulong)param_4[3] >> 0x20);
    uStack_e0 = (undefined4)param_4[2];
    uStack_dc = (undefined4)((ulong)param_4[2] >> 0x20);
    uStack_d0 = (undefined4)param_4[4];
    uStack_cc = (undefined4)((ulong)param_4[4] >> 0x20);
    uStack_168 = unaff_x20[1];
    uStack_170 = *unaff_x20;
    plVar4 = param_2;
    FUN_108357e80(param_2,&lStack_f0,&uStack_170,0);
    FUN_10833dd8c(&lStack_f0);
    if (((uint)plVar4 >> 2 & 1) == 0) goto LAB_1083589f0;
LAB_108358a18:
    uStack_100 = 0;
    uStack_f8 = 0;
    plVar2 = param_4;
    FUN_108357948();
    if ((int)plVar2 != 0) {
      func_0x00010835c1b0(&uStack_170,param_2,param_3,uStack_100,uStack_f8);
      FUN_10833de08(&lStack_f0,&uStack_170);
      FUN_1083414c4(&uStack_170);
    }
    if (lStack_f0 == 0) {
      func_0x00010835c140();
      goto LAB_108358ae4;
    }
  }
  else {
    FUN_10833dd8c(&lStack_f0);
LAB_1083589f0:
    lVar5 = (long)param_2 + 0xc;
    FUN_108358fc4(lVar5,plVar2,&uStack_80,plVar3);
    if ((int)lVar5 == 0) goto LAB_108358a18;
    func_0x0001083416a0(&lStack_f0,param_2);
  }
  uStack_dc = (undefined4)uStack_78;
  uStack_d8 = (undefined4)((ulong)uStack_78 >> 0x20);
  uStack_e4 = (undefined4)uStack_80;
  uStack_e0 = (undefined4)((ulong)uStack_80 >> 0x20);
  uStack_d4 = (undefined4)uStack_70;
  uStack_d0 = (undefined4)((ulong)uStack_70 >> 0x20);
  FUN_108358358(auStack_c8,param_4);
  pplVar7 = &plStack_98;
  FUN_1083578b0();
  uVar6 = 0;
  plStack_98 = param_4;
  pplStack_90 = pplVar7;
  FUN_10821a044();
  lVar5 = lStack_f0;
  if ((uVar6 & 1) == 0) {
    func_0x00010835c140();
  }
  else {
    lStack_f0 = 0;
    *param_1 = lVar5;
    func_0x00010835c2fc(param_1 + 1,&uStack_e8);
    lVar5 = lStack_a0;
    lStack_a0 = 0;
    param_1[10] = lVar5;
    param_1[0xc] = (long)pplStack_90;
    param_1[0xb] = (long)plStack_98;
  }
LAB_108358ae4:
  plVar2 = &lStack_f0;
  FUN_1083414c4(plVar2);
  return plVar2;
}



/* Entry: 108358b38; end: 108358b93;  */

uint FUN_108358b38(uint param_1)

{
  FUN_108358394();
  return param_1 & 0xffff & (uint)(0xff < (param_1 & 0xffff));
}



/* Entry: 108358b94; end: 108358e3f;  */

long * FUN_108358b94(long *param_1,long param_2,long *param_3)

{
  undefined8 *puVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long **pplVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  int extraout_w11;
  long *unaff_x19;
  long *unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar8;
  undefined1 auStack_dd8 [8];
  undefined1 auStack_dd0 [8];
  long alStack_dc8 [2];
  long lStack_db8;
  long *plStack_db0;
  undefined8 **ppuStack_da8;
  long *plStack_da0;
  code *pcStack_d88;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  ulong uStack_d70;
  ulong uStack_d68;
  long lStack_d58;
  long lStack_d20;
  long lStack_d18;
  long alStack_d10 [405];
  char cStack_68;
  undefined8 uStack_48;
  
  func_0x00010835c0cc();
  uStack_48 = extraout_x8;
  func_0x00010835c410();
  if (((bool)in_ZR || in_NG != in_OV) ||
     (in_ZR = *(int *)(param_2 + 0xd4) == *(int *)(param_2 + 0xcc),
     *(int *)(param_2 + 0xd4) <= *(int *)(param_2 + 0xcc))) {
    func_0x00010835c0b8(uStack_48);
    puVar1 = (undefined8 *)register0x00000008;
    plVar2 = unaff_x19;
    if ((bool)in_ZR) goto FUN_10833dd8c;
  }
  else {
    lStack_d18 = param_1[0xc];
    lStack_d20 = param_1[0xb];
    plVar2 = (long *)*param_3;
    FUN_10833e038();
    if ((int)plVar2 == 0) {
      if (*param_1 != 0) {
        plVar2 = &lStack_d20;
        FUN_10821a044();
        if (((ulong)plVar2 & 1) != 0) goto LAB_108358c58;
      }
      func_0x00010835c140();
    }
    else if ((*param_1 == 0) || (func_0x00010835c32c(), ((ulong)plVar2 & 1) == 0)) {
      uVar3 = (ulong)*(uint *)(param_2 + 200);
      uVar6 = (ulong)*(uint *)(param_2 + 0xcc);
      FUN_108219ff8(uVar3,uVar6,1,1);
      uStack_d70 = uVar3;
      uStack_d68 = uVar6;
      func_0x00010835c160(alStack_d10,param_2,&uStack_d70,2,0);
      in_ZR = cStack_68 == '\x01';
      if ((bool)in_ZR) {
        func_0x00010835c180();
        func_0x00010835c274(0x3f800000);
        func_0x00010835c3b8();
        func_0x00010835c2d8(&uStack_d70);
        lVar8 = lStack_d58;
        lStack_d58 = *param_3;
        *param_3 = 0;
        uStack_d78 = 0;
        FUN_10835be78(lVar8);
        FUN_108115b2c(&uStack_d78);
        func_0x00010835c150(&uStack_d70);
        func_0x00010835c2e8(*(undefined8 *)(alStack_d10[0] + 0xa8),alStack_d10);
        func_0x00010835c168();
      }
      func_0x00010835c1a8(alStack_d10);
      if (*unaff_x19 != 0) {
        *(undefined4 *)((long)unaff_x19 + 0x24) = 0;
        lVar8 = *unaff_x20;
        unaff_x19[0xc] = unaff_x20[1];
        unaff_x19[0xb] = lVar8;
      }
      plVar2 = alStack_d10;
      func_0x00010835bc64();
    }
    else {
      plVar2 = param_1;
      func_0x000108358b60();
      if (((uint)plVar2 >> 2 & 1) == 0) {
        lStack_d18 = unaff_x20[1];
        lStack_d20 = *unaff_x20;
LAB_108358c58:
        FUN_108341774();
        unaff_x19[0xc] = lStack_d18;
        unaff_x19[0xb] = lStack_d20;
        uStack_d80 = 0;
        if (param_1[10] != 0) {
          do {
            func_0x00010835c110();
            uStack_d80 = extraout_x8_00;
          } while (extraout_w11 != 0);
        }
        FUN_10811e68c(alStack_d10,param_3,&uStack_d80);
        lVar8 = alStack_d10[0];
        alStack_d10[0] = 0;
        plVar2 = unaff_x19 + 10;
        FUN_108164954(plVar2,lVar8);
        func_0x00010835c208();
        func_0x00010835c230();
      }
      else {
        alStack_d10[0] = 0x100000001;
        FUN_10833e0cc(&lStack_d20,alStack_d10);
        func_0x00010835c32c();
        FUN_108357b28(param_1,param_2,lStack_d20,lStack_d18,1);
        plVar2 = unaff_x19 + 10;
        func_0x000108164928(plVar2,param_3);
        if (*unaff_x19 != 0) {
          *(undefined4 *)((long)unaff_x19 + 0x24) = 0;
          lVar8 = *unaff_x20;
          unaff_x19[0xc] = unaff_x20[1];
          unaff_x19[0xb] = lVar8;
        }
      }
    }
    func_0x00010835c0b8(uStack_48);
    param_1 = plVar2;
    if ((bool)in_ZR) {
      return plVar2;
    }
  }
  ___stack_chk_fail();
  plVar4 = param_1;
  func_0x00010835c3a0();
  func_0x00010835c1e4();
  pcStack_d88 = FUN_108358e40;
  puVar1 = &uStack_d80;
  plVar2 = extraout_x8_01;
  unaff_x20 = param_1;
  unaff_x29 = &stack0xfffffffffffffff0;
  unaff_x30 = pcStack_d88;
  plStack_da0 = param_1;
  if ((char)plVar4[0x195] != '\x01') {
FUN_10833dd8c:
    *(long **)((long)puVar1 + -0x20) = unaff_x20;
    *(long **)((long)puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)((long)puVar1 + -0x10) = unaff_x29;
    *(code **)((long)puVar1 + -8) = unaff_x30;
    *(undefined8 *)((long)puVar1 + -0x28) = 0;
    FUN_1083413f4();
    func_0x000108341fb4();
    return plVar2;
  }
  FUN_10833baf4();
  (**(code **)(**(long **)(plVar4[0x188] + 8) + 200))();
  ppuStack_da8 = (undefined8 **)
                 CONCAT44(*(int *)((long)plVar4 + 0xcbc) - *(int *)((long)plVar4 + 0xcb4),
                          (int)plVar4[0x197] - (int)plVar4[0x196]);
  plStack_db0 = (long *)0x0;
  pplVar7 = &plStack_db0;
  (**(code **)(**(long **)(plVar4[0x188] + 8) + 0x1a0))
            (&lStack_db8,*(long **)(plVar4[0x188] + 8),pplVar7,0);
  FUN_10835bc40(plVar4);
  if (lStack_db8 != 0) {
    if ((int)plVar4[0x198] != 0) {
      FUN_1083415b0();
      alStack_dc8[0] = 0;
      plVar2 = alStack_dc8;
      func_0x00010835c3d0();
      FUN_108337dd4();
      alStack_dc8[0] = CONCAT44(*(int *)((long)plVar4 + 0xcb4) + 1,(int)plVar4[0x196] + 1);
      plStack_db0 = plVar2;
      ppuStack_da8 = pplVar7;
      FUN_108337e44(auStack_dd0,lStack_db8,&plStack_db0);
      FUN_1083414ec(extraout_x8_01,auStack_dd0,alStack_dc8,(int)plVar4[0x198]);
      puVar5 = auStack_dd0;
      goto LAB_108358f78;
    }
    do {
      func_0x00010835c100();
    } while (extraout_w10 != 0);
  }
  alStack_dc8[0] = plVar4[0x196];
  FUN_1083414ec(extraout_x8_01,auStack_dd8,alStack_dc8,0);
  puVar5 = auStack_dd8;
LAB_108358f78:
  FUN_1083389b0(puVar5);
  plVar2 = &lStack_db8;
  FUN_1083389b0(plVar2);
  return plVar2;
}



/* Entry: 108358e40; end: 108358fc3;  */

long * FUN_108358e40(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 **ppuVar4;
  int extraout_w10;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined8 auStack_48 [2];
  long lStack_38;
  undefined8 *puStack_30;
  undefined8 **ppuStack_28;
  
  if (*(char *)(param_2 + 0xca8) != '\x01') {
    ppuStack_28 = (undefined8 **)0x0;
    FUN_1083413f4(param_1,&ppuStack_28);
    func_0x000108341fb4();
    return param_1;
  }
  FUN_10833baf4(param_2,0);
  (**(code **)(**(long **)(*(long *)(param_2 + 0xc40) + 8) + 200))();
  ppuStack_28 = (undefined8 **)
                CONCAT44(*(int *)(param_2 + 0xcbc) - *(int *)(param_2 + 0xcb4),
                         *(int *)(param_2 + 0xcb8) - *(int *)(param_2 + 0xcb0));
  puStack_30 = (undefined8 *)0x0;
  plVar1 = *(long **)(*(long *)(param_2 + 0xc40) + 8);
  ppuVar4 = &puStack_30;
  (**(code **)(*plVar1 + 0x1a0))(&lStack_38,plVar1,ppuVar4,0);
  FUN_10835bc40(param_2);
  if (lStack_38 != 0) {
    if (*(int *)(param_2 + 0xcc0) != 0) {
      FUN_1083415b0();
      auStack_48[0] = 0;
      puVar2 = auStack_48;
      func_0x00010835c3d0();
      FUN_108337dd4();
      auStack_48[0] = CONCAT44(*(int *)(param_2 + 0xcb4) + 1,*(int *)(param_2 + 0xcb0) + 1);
      puStack_30 = puVar2;
      ppuStack_28 = ppuVar4;
      FUN_108337e44(auStack_50,lStack_38,&puStack_30);
      FUN_1083414ec(param_1,auStack_50,auStack_48,*(undefined4 *)(param_2 + 0xcc0));
      puVar3 = auStack_50;
      goto LAB_108358f78;
    }
    do {
      func_0x00010835c100();
    } while (extraout_w10 != 0);
  }
  auStack_48[0] = *(undefined8 *)(param_2 + 0xcb0);
  FUN_1083414ec(param_1,auStack_58,auStack_48,0);
  puVar3 = auStack_58;
LAB_108358f78:
  FUN_1083389b0(puVar3);
  plVar1 = &lStack_38;
  FUN_1083389b0(plVar1);
  return plVar1;
}



/* Entry: 108358fc4; end: 108359103;  */

/* WARNING: Type propagation algorithm not settling */

long *******
FUN_108358fc4(undefined8 param_1,float param_2,undefined4 param_3,undefined4 param_4,
             long *******param_5,long ******param_6,long *******param_7,ulong param_8,
             long *******param_9)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long *******ppppppplVar4;
  long **pplVar5;
  long *******ppppppplVar6;
  long *******ppppppplVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  long *******ppppppplVar11;
  undefined8 extraout_x8;
  undefined8 uVar12;
  code *extraout_x8_00;
  long *****ppppplVar13;
  code *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w11;
  long *******ppppppplVar14;
  long ******pppppplVar15;
  long ******pppppplVar16;
  long *******ppppppplStack_1b0;
  long *******ppppppplStack_1a8;
  long ******pppppplStack_1a0;
  long ******pppppplStack_198;
  long ******pppppplStack_190;
  long ******pppppplStack_180;
  long ******pppppplStack_178;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long ******pppppplStack_140;
  long *plStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long *******ppppppplStack_110;
  undefined8 uStack_108;
  long ******pppppplStack_100;
  long ******pppppplStack_f8;
  long ******pppppplStack_f0;
  long *******ppppppplStack_e8;
  uint uStack_c8;
  long ******apppppplStack_a8 [3];
  uint3 uStack_2b;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar3 = *(int *)param_5;
  iVar8 = *(int *)param_7;
  if (iVar3 == 0) {
LAB_10835902c:
    iVar3 = *(int *)(param_5 + 2);
    if (iVar8 != 0 && iVar3 == 1) goto LAB_1083590d4;
    if (((ulong)*param_5 & 0x100000000) == 0) {
      if (*(char *)((long)param_7 + 4) != '\x01' || iVar3 != 1) {
        iVar8 = *(int *)(param_7 + 2);
        goto LAB_10835909c;
      }
      goto LAB_1083590d4;
    }
    iVar8 = *(int *)(param_7 + 2);
    if (iVar8 == 1) {
LAB_1083590c4:
      pppppplVar16 = param_5[1];
      pppppplVar15 = *param_5;
      param_7[2] = param_5[2];
      param_7[1] = pppppplVar16;
      *param_7 = pppppplVar15;
      goto LAB_1083590d4;
    }
    if (*(char *)((long)param_7 + 4) == '\x01') {
      param_2 = *(float *)(param_7 + 1);
      if ((*(float *)(param_5 + 1) == param_2) &&
         (param_2 = *(float *)((long)param_7 + 0xc), *(float *)((long)param_5 + 0xc) == param_2))
      goto LAB_1083590c4;
      if (iVar3 == 1) goto LAB_1083590d4;
    }
LAB_10835909c:
    uVar2 = 0;
    if (iVar8 == 0) {
      uVar2 = (uint)param_6;
    }
    ppppppplVar11 = (long *******)0x1;
    if ((((iVar8 != 1 || iVar3 != 1) && ((uVar2 & 1) == 0)) &&
        (ppppppplVar11 = (long *******)0x0, (int)param_8 != 0)) && (iVar3 == 0)) goto LAB_1083590c4;
  }
  else {
    if (iVar8 == 0) {
      if (*(int *)(param_7 + 2) != 1) goto LAB_10835902c;
      goto LAB_1083590c4;
    }
    if (iVar3 <= iVar8) {
      iVar3 = iVar8;
    }
    if (iVar3 < 2) {
      iVar3 = 1;
    }
    *(int *)param_7 = iVar3;
    *(undefined1 *)((long)param_7 + 4) = 0;
    *(undefined8 *)((long)param_7 + 0xd) = 0;
    *(ulong *)((long)param_7 + 5) = (ulong)uStack_2b;
    *(int *)((long)param_7 + 0x14) = 0;
LAB_1083590d4:
    ppppppplVar11 = (long *******)0x1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return ppppppplVar11;
  }
  ___stack_chk_fail();
  pppppplVar15 = param_6;
  if (param_9 == (long *******)0x0) {
    if (*param_5 == (long ******)0x0) {
      return param_5;
    }
    uVar9 = 1;
    ppppppplVar11 = param_5;
    ppppppplVar14 = (long *******)0x0;
  }
  else {
    ppppppplVar11 = param_9;
    func_0x00010833474c();
    if (*param_5 == (long ******)0x0) {
      if ((int)ppppppplVar11 == 0) {
        return ppppppplVar11;
      }
      func_0x00010835c194();
      func_0x00010835c284(0x3f800000);
      func_0x00010835c3b8();
      func_0x00010835c2d8(&ppppppplStack_110);
      do {
        func_0x00010835c100();
        ppppppplVar11 = ppppppplStack_e8;
      } while (extraout_w10 != 0);
      apppppplStack_a8[0] = (long ******)0x0;
      ppppppplStack_e8 = param_9;
      FUN_10816618c(ppppppplVar11);
      ppppppplVar11 = apppppplStack_a8;
      FUN_108154c6c(ppppppplVar11);
      func_0x00010835c348((*param_7)[0x1e]);
      func_0x00010835c360();
      return ppppppplVar11;
    }
    uVar9 = 1;
    ppppppplVar14 = ppppppplVar11;
    if ((int)ppppppplVar11 != 0) {
      uVar9 = 2;
    }
  }
  ppppppplVar6 = param_7 + 0x1f;
  func_0x00010835c370(*param_7);
  ppppppplVar4 = param_5;
  ppppppplVar7 = ppppppplVar6;
  ppppppplStack_110 = ppppppplVar11;
  uStack_108 = pppppplVar15;
  FUN_108357e80(param_5,ppppppplVar6,&ppppppplStack_110,uVar9);
  uVar2 = (uint)ppppppplVar4;
  if ((uVar2 >> 2 & 1) != 0) {
    if ((uint)ppppppplVar14 != 0) {
      pppppplStack_180 = (long ******)0x0;
      pppppplStack_178 = (long ******)0x0;
      uStack_108 = param_7[0x20];
      ppppppplStack_110 = (long *******)*ppppppplVar6;
      pppppplStack_f8 = param_7[0x22];
      pppppplStack_100 = param_7[0x21];
      pppppplStack_f0 = param_7[0x23];
      func_0x00010835c370(*param_7);
      ppppppplVar11 = (long *******)&ppppppplStack_110;
      ppppppplStack_1b0 = ppppppplVar4;
      ppppppplStack_1a8 = ppppppplVar7;
      FUN_108357948(ppppppplVar11,&ppppppplStack_1b0,&pppppplStack_180);
      if ((int)ppppppplVar11 == 0) {
        return ppppppplVar11;
      }
      func_0x00010835c1b0(&ppppppplStack_110,param_5,param_6,pppppplStack_180,pppppplStack_178);
      FUN_108359104(&ppppppplStack_110,param_6,param_7,param_8,param_9);
      ppppppplVar11 = (long *******)&ppppppplStack_110;
      FUN_1083414c4(ppppppplVar11);
      return ppppppplVar11;
    }
    if ((int)param_8 != 0) {
      (*(code *)(*param_7)[5])(param_7);
    }
    pppppplStack_178 = param_5[0xc];
    pppppplVar15 = param_5[0xb];
    pppppplStack_180 = pppppplVar15;
    FUN_10817500c(&pppppplStack_180);
    ppppppplStack_110 = (long *******)CONCAT44(param_2,(int)pppppplVar15);
    uStack_108 = (long ******)CONCAT44(param_4,param_3);
    (*(code *)(*param_7)[7])(param_7,&ppppppplStack_110,1,1);
  }
  iVar3 = (int)param_5 + 0x28;
  func_0x00010835c170();
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    ppppppplVar11 = ppppppplVar6;
    func_0x00010835c170();
    iVar3 = (int)ppppppplVar11;
  }
  uStack_128 = *(undefined8 *)((long)param_5 + 0x14);
  plStack_130 = *(long **)((long)param_5 + 0xc);
  uStack_120 = *(undefined8 *)((long)param_5 + 0x1c);
  pplVar5 = &plStack_130;
  func_0x00010817505c(pplVar5,&UNK_10df1cb00);
  if (((int)pplVar5 != 0) && (iVar3 != 0)) {
    plStack_130 = (long *)0x0;
    uStack_128 = 0;
    uStack_120 = 0;
  }
  if ((uVar2 >> 1 & 1) == 0) {
    uVar1 = (uint)ppppppplVar14 ^ 1;
    if (((ulong)ppppppplVar4 & 1) == 0) {
      uVar1 = 1;
    }
    if ((uVar1 & 1) != 0) {
      func_0x00010835c194();
      func_0x00010835c284(0x3f800000);
      if (param_9 != (long *******)0x0) {
        do {
          func_0x00010835c100();
        } while (extraout_w10_01 != 0);
      }
      uStack_148 = 0;
      ppppppplStack_e8 = param_9;
      FUN_10816618c(0);
      FUN_108154c6c(&uStack_148);
      uVar12 = 0;
      if (param_5[10] != (long ******)0x0) {
        do {
          func_0x00010835c110();
          uVar12 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      pppppplVar15 = pppppplStack_f8;
      uStack_150 = 0;
      pppppplStack_f8 = (long ******)uVar12;
      func_0x00010835be78(pppppplVar15);
      func_0x00010835c208();
      ppppppplStack_1a8 = (long *******)param_5[6];
      ppppppplStack_1b0 = (long *******)param_5[5];
      pppppplStack_198 = param_5[8];
      pppppplStack_1a0 = param_5[7];
      pppppplStack_190 = param_5[9];
      FUN_1081600e0(&pppppplStack_180,ppppppplVar6,&ppppppplStack_1b0);
      if ((*(int *)((long)param_5 + 0x24) == 3) && (*(int *)(param_5 + 1) == 1 && uVar2 < 0x10)) {
        ppppppplVar6 = (long *******)((long)param_5 + 0xc);
        func_0x00010817505c(ppppppplVar6,&UNK_10df1cb00);
        if ((int)ppppppplVar6 != 0) {
          if (((param_8 & 1) == 0) && (param_9 == (long *******)0x0)) {
            func_0x00010835c150(&ppppppplStack_110);
          }
          func_0x00010835c38c(&pppppplStack_180);
          FUN_1083599c0(&ppppppplStack_1b0,*param_5);
          func_0x00010835c424((*param_7)[0x37]);
          (*extraout_x8_00)();
          ppppppplVar6 = (long *******)&ppppppplStack_1b0;
          FUN_1083389b0(ppppppplVar6);
          goto LAB_1083594f0;
        }
      }
      uStack_c8 = uStack_c8 | 1;
      if (((uVar2 >> 3 & 1) != 0) && (ppppplVar13 = param_6[0x29], ppppplVar13 != (long *****)0x0))
      {
        *(int *)((long)ppppplVar13 + 0xc) = *(int *)((long)ppppplVar13 + 0xc) + 1;
      }
      func_0x00010835c424((*param_7)[0x37]);
      (*extraout_x8_01)();
      goto LAB_1083594f0;
    }
  }
  func_0x00010835c194();
  func_0x00010835c284(0x3f800000);
  if (((param_8 & 1) == 0) && (param_9 == (long *******)0x0)) {
    func_0x00010835c150(&ppppppplStack_110);
  }
  else {
    if (param_9 != (long *******)0x0) {
      do {
        func_0x00010835c100();
      } while (extraout_w10_00 != 0);
    }
    plStack_138 = (long *)0x0;
    ppppppplStack_e8 = param_9;
    FUN_10816618c(0);
    FUN_108154c6c(&plStack_138);
  }
  FUN_108359624(&pppppplStack_140,param_5,param_6,&plStack_130,(ulong)ppppppplVar4 & 0xffffffff);
  pppppplVar15 = uStack_108;
  uStack_108 = pppppplStack_140;
  pppppplStack_140 = (long ******)0x0;
  func_0x00010835be9c(pppppplVar15);
  ppppppplVar6 = &pppppplStack_140;
  func_0x000106f47224(ppppppplVar6);
  func_0x00010835c348((*param_7)[0x1e]);
LAB_1083594f0:
  func_0x00010835c360();
  if (((int)param_8 != 0) && ((uVar2 >> 2 & 1) != 0)) {
    (*(code *)(*param_7)[6])(param_7);
    ppppppplVar6 = param_7;
  }
  return ppppppplVar6;
}



/* Entry: 108359104; end: 1083595af;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_108359104(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long *param_5,long param_6,long *param_7,ulong param_8,long *param_9)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long **pplVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined8 extraout_x8;
  undefined8 uVar9;
  code *extraout_x8_00;
  long lVar10;
  code *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w11;
  long *plVar11;
  long *plVar12;
  long *plStack_180;
  long *plStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long alStack_110 [6];
  long *plStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long *plStack_b8;
  uint uStack_98;
  undefined8 auStack_78 [3];
  
  lVar10 = param_6;
  if (param_9 == (long *)0x0) {
    if (*param_5 == 0) {
      return;
    }
    uVar8 = 1;
    plVar4 = param_5;
    plVar12 = (long *)0x0;
  }
  else {
    plVar4 = param_9;
    func_0x00010833474c();
    if (*param_5 == 0) {
      if ((int)plVar4 == 0) {
        return;
      }
      func_0x00010835c194();
      func_0x00010835c284(0x3f800000);
      func_0x00010835c3b8();
      func_0x00010835c2d8(&plStack_e0);
      do {
        func_0x00010835c100();
        plVar4 = plStack_b8;
      } while (extraout_w10 != 0);
      auStack_78[0] = 0;
      plStack_b8 = param_9;
      FUN_10816618c(plVar4);
      FUN_108154c6c(auStack_78);
      func_0x00010835c348(*(undefined8 *)(*param_7 + 0xf0));
      func_0x00010835c360();
      return;
    }
    uVar8 = 1;
    plVar12 = plVar4;
    if ((int)plVar4 != 0) {
      uVar8 = 2;
    }
  }
  plVar11 = param_7 + 0x1f;
  func_0x00010835c370(*param_7);
  plVar5 = param_5;
  plVar7 = plVar11;
  plStack_e0 = plVar4;
  uStack_d8 = lVar10;
  FUN_108357e80(param_5,plVar11,&plStack_e0,uVar8);
  uVar2 = (uint)plVar5;
  if ((uVar2 >> 2 & 1) != 0) {
    if ((uint)plVar12 != 0) {
      lStack_150 = 0;
      lStack_148 = 0;
      uStack_d8 = param_7[0x20];
      plStack_e0 = (long *)*plVar11;
      lStack_c8 = param_7[0x22];
      lStack_d0 = param_7[0x21];
      lStack_c0 = param_7[0x23];
      func_0x00010835c370(*param_7);
      pplVar6 = &plStack_e0;
      plStack_180 = plVar5;
      plStack_178 = plVar7;
      FUN_108357948(pplVar6,&plStack_180,&lStack_150);
      if ((int)pplVar6 == 0) {
        return;
      }
      func_0x00010835c1b0(&plStack_e0,param_5,param_6,lStack_150,lStack_148);
      FUN_108359104(&plStack_e0,param_6,param_7,param_8,param_9);
      FUN_1083414c4(&plStack_e0);
      return;
    }
    if ((int)param_8 != 0) {
      (**(code **)(*param_7 + 0x28))(param_7);
    }
    lStack_148 = param_5[0xc];
    lVar10 = param_5[0xb];
    lStack_150 = lVar10;
    FUN_10817500c(&lStack_150);
    plStack_e0 = (long *)CONCAT44(param_2,(int)lVar10);
    uStack_d8 = CONCAT44(param_4,param_3);
    (**(code **)(*param_7 + 0x38))(param_7,&plStack_e0,1,1);
  }
  iVar3 = (int)param_5 + 0x28;
  func_0x00010835c170();
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    plVar4 = plVar11;
    func_0x00010835c170();
    iVar3 = (int)plVar4;
  }
  alStack_110[3] = *(undefined8 *)((long)param_5 + 0x14);
  alStack_110[2] = *(undefined8 *)((long)param_5 + 0xc);
  alStack_110[4] = *(undefined8 *)((long)param_5 + 0x1c);
  plVar4 = alStack_110 + 2;
  func_0x00010817505c(plVar4,&UNK_10df1cb00);
  if (((int)plVar4 != 0) && (iVar3 != 0)) {
    alStack_110[2] = 0;
    alStack_110[3] = 0;
    alStack_110[4] = 0;
  }
  if ((uVar2 >> 1 & 1) == 0) {
    uVar1 = (uint)plVar12 ^ 1;
    if (((ulong)plVar5 & 1) == 0) {
      uVar1 = 1;
    }
    if ((uVar1 & 1) != 0) {
      func_0x00010835c194();
      func_0x00010835c284(0x3f800000);
      if (param_9 != (long *)0x0) {
        do {
          func_0x00010835c100();
        } while (extraout_w10_01 != 0);
      }
      uStack_118 = 0;
      plStack_b8 = param_9;
      FUN_10816618c(0);
      FUN_108154c6c(&uStack_118);
      uVar9 = 0;
      if (param_5[10] != 0) {
        do {
          func_0x00010835c110();
          uVar9 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      lVar10 = lStack_c8;
      uStack_120 = 0;
      lStack_c8 = uVar9;
      func_0x00010835be78(lVar10);
      func_0x00010835c208();
      plStack_178 = (long *)param_5[6];
      plStack_180 = (long *)param_5[5];
      lStack_168 = param_5[8];
      lStack_170 = param_5[7];
      lStack_160 = param_5[9];
      FUN_1081600e0(&lStack_150,plVar11,&plStack_180);
      if ((*(int *)((long)param_5 + 0x24) == 3) && ((int)param_5[1] == 1 && uVar2 < 0x10)) {
        lVar10 = (long)param_5 + 0xc;
        func_0x00010817505c(lVar10,&UNK_10df1cb00);
        if ((int)lVar10 != 0) {
          if (((param_8 & 1) == 0) && (param_9 == (long *)0x0)) {
            func_0x00010835c150(&plStack_e0);
          }
          func_0x00010835c38c(&lStack_150);
          FUN_1083599c0(&plStack_180,*param_5);
          func_0x00010835c424(*(undefined8 *)(*param_7 + 0x1b8));
          (*extraout_x8_00)();
          FUN_1083389b0(&plStack_180);
          goto LAB_1083594f0;
        }
      }
      uStack_98 = uStack_98 | 1;
      if (((uVar2 >> 3 & 1) != 0) && (lVar10 = *(long *)(param_6 + 0x148), lVar10 != 0)) {
        *(int *)(lVar10 + 0xc) = *(int *)(lVar10 + 0xc) + 1;
      }
      func_0x00010835c424(*(undefined8 *)(*param_7 + 0x1b8));
      (*extraout_x8_01)();
      goto LAB_1083594f0;
    }
  }
  func_0x00010835c194();
  func_0x00010835c284(0x3f800000);
  if (((param_8 & 1) == 0) && (param_9 == (long *)0x0)) {
    func_0x00010835c150(&plStack_e0);
  }
  else {
    if (param_9 != (long *)0x0) {
      do {
        func_0x00010835c100();
      } while (extraout_w10_00 != 0);
    }
    alStack_110[1] = 0;
    plStack_b8 = param_9;
    FUN_10816618c(0);
    FUN_108154c6c(alStack_110 + 1);
  }
  FUN_108359624(alStack_110,param_5,param_6,alStack_110 + 2,(ulong)plVar5 & 0xffffffff);
  lVar10 = uStack_d8;
  uStack_d8 = alStack_110[0];
  alStack_110[0] = 0;
  func_0x00010835be9c(lVar10);
  func_0x000106f47224(alStack_110);
  func_0x00010835c348(*(undefined8 *)(*param_7 + 0xf0));
LAB_1083594f0:
  func_0x00010835c360();
  if (((int)param_8 != 0) && ((uVar2 >> 2 & 1) != 0)) {
    (**(code **)(*param_7 + 0x30))(param_7);
  }
  return;
}



/* Entry: 1083595b0; end: 108359623;  */

void FUN_1083595b0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [72];
  
  FUN_1083418c4(auStack_78,param_3,param_2 + 8);
  FUN_108359104(param_1,param_2,param_3,1,param_4);
  FUN_1083418fc(auStack_78);
  return;
}



/* Entry: 108359624; end: 1083599bf;  */

void FUN_108359624(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 *param_6,long param_7,undefined8 param_8,
                  ulong param_9)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  char *pcVar6;
  undefined *puVar7;
  long lVar8;
  int extraout_w10;
  int extraout_w11;
  long *unaff_x19;
  undefined8 *unaff_x20;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  ulong uVar14;
  undefined1 *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined1 auStack_e8 [40];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  float fStack_58;
  float fStack_54;
  
  func_0x00010835c404();
  puVar11 = param_6 + 5;
  uVar3 = *param_6;
  FUN_1083415b0();
  fStack_58 = (float)(int)uVar3;
  fStack_54 = (float)(int)((ulong)uVar3 >> 0x20);
  uVar14 = (ulong)(uint)fStack_54;
  uStack_60 = 0;
  uVar3 = 0x3f800000;
  uStack_88 = 0;
  uStack_90 = 0x3f800000;
  uStack_78 = 0;
  uStack_80 = 0x3f800000;
  uStack_70 = 0x103f800000;
  uStack_b8 = 0;
  uStack_c0 = 0x3f800000;
  uStack_a8 = 0;
  uStack_b0 = 0x3f800000;
  uStack_a0 = 0x103f800000;
  puVar4 = puVar11;
  FUN_10827a0d8();
  if ((((ulong)puVar4 & 1) == 0) && (0xf < param_9)) {
    func_0x000108317790(&uStack_60);
    FUN_1083573ac(puVar11,&uStack_90,&uStack_c0);
  }
  else {
    uStack_88 = uRam0000000113254e28;
    uStack_90 = uRam0000000113254e20;
    uStack_78 = uRam0000000113254e38;
    uStack_80 = uRam0000000113254e30;
    uStack_70 = uRam0000000113254e40;
    uStack_b8 = param_6[6];
    uVar3 = *puVar11;
    uStack_a8 = param_6[8];
    uVar14 = param_6[7];
    uStack_a0 = param_6[9];
    uStack_c0 = uVar3;
    uStack_b0 = uVar14;
  }
  iVar10 = *(int *)((long)unaff_x20 + 0x24);
  if (iVar10 == 3) {
    bVar1 = *(int *)(unaff_x20 + 1) == 1 && param_9 < 0x10;
  }
  else {
    bVar1 = false;
  }
  *unaff_x19 = 0;
  uVar9 = (uint)param_9;
  if (((uVar9 >> 3 & 1) == 0) || (!bVar1)) {
    if ((uVar9 & 0x11) != 1) {
      iVar10 = 0;
    }
    (**(code **)(*(long *)*unaff_x20 + 0x30))
              (auStack_e8,(long *)*unaff_x20,iVar10,param_8,&uStack_c0,uVar9 >> 3 & 1);
    func_0x00010835c3c4();
    func_0x00010835c1ec();
    func_0x00010835c148();
    if ((uVar9 >> 3 & 1) == 0) goto LAB_1083597d0;
  }
  else {
    func_0x00010835c38c(&uStack_c0);
    FUN_1083599c0(&uStack_108,*unaff_x20);
    (**(code **)(*uStack_108 + 0x30))(auStack_e8,uStack_108,0,param_8,&uStack_c0,1);
    func_0x00010835c3c4();
    func_0x00010835c1ec();
    func_0x00010835c148();
    func_0x00010835c178();
    iVar10 = 0;
  }
  lVar8 = *(long *)(param_7 + 0x148);
  if (lVar8 != 0) {
    lVar2 = 0xc;
    if (iVar10 != 0) {
      lVar2 = 0x10;
    }
    *(int *)(lVar8 + lVar2) = *(int *)(lVar8 + lVar2) + 1;
  }
LAB_1083597d0:
  if (0xf < param_9) {
    lVar8 = 0x202;
    FUN_10835c894();
    uVar13 = (undefined4)uVar14;
    uVar12 = (undefined4)uVar3;
    if (lVar8 != 0) {
      do {
        func_0x00010835c100();
        uVar13 = (undefined4)uVar14;
        uVar12 = (undefined4)uVar3;
      } while (extraout_w10 != 0);
    }
    lStack_f0 = lVar8;
    FUN_108165d58(auStack_e8,&lStack_f0);
    FUN_108154c00(&lStack_f0);
    lStack_f8 = *unaff_x19;
    *unaff_x19 = 0;
    pcVar6 = "image";
    puVar5 = auStack_e8;
    func_0x000108165cc8(puVar5,"image",5);
    uStack_108 = (long *)puVar5;
    uStack_100 = pcVar6;
    FUN_108165cec(&uStack_108,&lStack_f8);
    func_0x000106f47224(&lStack_f8);
    func_0x00010835c398(&uStack_c0,&uStack_60);
    uStack_108 = (long *)CONCAT44(uVar13,uVar12);
    uStack_100 = (char *)CONCAT44(param_4,param_3);
    puVar7 = &UNK_10f48f4eb;
    puVar5 = auStack_e8;
    func_0x000108165c0c(puVar5,&UNK_10f48f4eb,0xb);
    puStack_118 = puVar5;
    puStack_110 = puVar7;
    func_0x000108359a04(&puStack_118,&uStack_108);
    FUN_108394a04(&uStack_108,auStack_e8,0);
    uStack_108 = (long *)0x0;
    func_0x00010835c1ec();
    func_0x000106f47224(&uStack_108);
    FUN_108166068(auStack_e8);
    if (*unaff_x19 == 0) {
      return;
    }
    FUN_1083be074(auStack_e8,*unaff_x19,&uStack_90);
    func_0x00010835c3c4();
    func_0x00010835c1ec();
    func_0x00010835c148();
  }
  if ((*unaff_x19 != 0) && (unaff_x20[10] != 0)) {
    do {
      func_0x00010835c110();
    } while (extraout_w11 != 0);
    FUN_1083be218(auStack_e8);
    func_0x00010835c3c4();
    func_0x00010835c1ec();
    func_0x00010835c148();
    func_0x00010835c230();
  }
  return;
}



/* Entry: 1083599c0; end: 108359a4f;  */

void FUN_1083599c0(void)

{
  long *unaff_x19;
  
  func_0x00010835c2c4();
  func_0x00010835c3d0();
  FUN_1082873f8();
  (**(code **)(*unaff_x19 + 0x50))();
  return;
}



/* Entry: 108359a50; end: 108359b27;  */

uint FUN_108359a50(float param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  float fVar4;
  
  fVar4 = (float)NEON_fminnm((int)(1.0 / param_1),0x4effffff);
  if (fVar4 <= -2.1474835e+09) {
    fVar4 = -2.1474835e+09;
  }
  if ((int)fVar4 + -1 != 0) {
    uVar3 = (uint)LZCOUNT((int)fVar4 + -1);
    lVar2 = 4;
    if (uVar3 != 0x1f) {
      lVar2 = 0;
    }
    uVar1 = 0x20 - uVar3;
    if (*(float *)(&UNK_10df1cf98 + lVar2) <= param_1 * (float)(1 << (ulong)((uVar3 ^ 0x1f) & 0x1f))
       ) {
      uVar1 = uVar3 ^ 0x1f;
    }
    return uVar1;
  }
  return 0;
}



/* Entry: 108359b28; end: 108359b5b;  */

void FUN_108359b28(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_2[1];
  uStack_20 = *param_2;
  uStack_28 = param_3[1];
  uStack_30 = *param_3;
  func_0x00010835c384(param_1,&uStack_20,&uStack_30);
  return;
}



/* Entry: 108359b5c; end: 108359c67;  */

uint ** FUN_108359b5c(float param_1,undefined8 param_2,float param_3,float param_4,
                     undefined8 param_5,float param_6,float param_7,float param_8,long *param_9,
                     long *param_10,int param_11)

{
  bool bVar1;
  undefined1 uVar2;
  uint **ppuVar3;
  uint **ppuVar4;
  uint **ppuVar5;
  uint *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  float *pfVar9;
  long *plVar10;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  uint uVar11;
  int extraout_w11;
  ushort uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint **ppuStack_1bb0;
  undefined8 uStack_1ba8;
  undefined8 uStack_1ba0;
  undefined8 uStack_1b98;
  undefined8 uStack_1b90;
  undefined4 uStack_1b88;
  undefined4 uStack_1b84;
  undefined4 uStack_1b80;
  undefined8 uStack_1b7c;
  undefined8 uStack_1b74;
  undefined8 uStack_1b6c;
  uint *puStack_1b60;
  float *pfStack_1b58;
  undefined8 uStack_1b50;
  undefined8 uStack_1b48;
  undefined8 uStack_1b40;
  uint *puStack_1b30;
  float *pfStack_1b28;
  undefined8 uStack_1b20;
  undefined8 uStack_1b18;
  undefined8 uStack_1b10;
  uint *puStack_1ae8;
  long lStack_1ae0;
  uint *puStack_1ad8;
  uint **ppuStack_1ad0;
  float *pfStack_1ac8;
  uint *puStack_1ac0;
  float fStack_1ab8;
  float fStack_1ab4;
  float fStack_1ab0;
  float fStack_1aac;
  float fStack_1aa8;
  float fStack_1aa4;
  undefined8 uStack_1aa0;
  float fStack_1a98;
  float fStack_1a94;
  undefined8 uStack_1a90;
  float fStack_1a88;
  float fStack_1a84;
  char cStack_de8;
  undefined8 uStack_dc8;
  undefined1 auStack_d50 [8];
  undefined8 uStack_d48;
  uint uStack_d08;
  uint *apuStack_d00 [405];
  char cStack_58;
  undefined8 uStack_38;
  
  func_0x00010835c0cc();
  plVar10 = param_9 + 0x19;
  uStack_38 = extraout_x8;
  func_0x00010835c160(apuStack_d00);
  fVar14 = (float)param_5;
  fVar15 = (float)param_2;
  uVar2 = 0;
  if (cStack_58 == '\x01') {
    func_0x00010835c180();
    uVar13 = 0x3f800000;
    func_0x00010835c274();
    fVar14 = (float)param_5;
    fVar15 = (float)param_2;
    param_1 = (float)uVar13;
    uStack_d48 = 0;
    if (*param_10 != 0) {
      do {
        func_0x00010835c110();
        fVar14 = (float)param_5;
        fVar15 = (float)param_2;
        param_1 = (float)uVar13;
        uStack_d48 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    func_0x00010835be9c(0);
    func_0x00010835c250();
    uVar2 = param_11 == 0;
    uVar11 = 2;
    if ((bool)uVar2) {
      uVar11 = 0;
    }
    uStack_d08 = uStack_d08 & 0xfffffffd | uVar11;
    func_0x00010835c150(auStack_d50);
    func_0x00010835c2e8(*(undefined8 *)(apuStack_d00[0] + 0x2a),apuStack_d00);
    func_0x00010835c168();
  }
  ppuVar3 = apuStack_d00;
  func_0x00010835c1a8();
  func_0x00010835c220();
  func_0x00010835c0b8(uStack_38);
  if ((bool)uVar2) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  ppuVar4 = ppuVar3;
  func_0x00010835c250();
  func_0x00010835c168();
  func_0x00010835c220();
  func_0x00010835c120();
  plVar7 = param_9;
  fVar17 = param_6;
  fVar18 = param_7;
  fVar19 = param_8;
  fVar16 = fVar14;
  func_0x00010835c0cc();
  fStack_1ab8 = (float)*(int *)(*plVar7 + 0x20);
  fStack_1ab4 = (float)*(int *)(*plVar7 + 0x24);
  puStack_1ac0 = (uint *)0x0;
  ppuVar5 = &puStack_1ac0;
  puVar8 = &uStack_1aa0;
  fStack_1ab0 = fVar16;
  fStack_1aac = fVar17;
  fStack_1aa8 = fVar18;
  fStack_1aa4 = fVar19;
  uStack_1aa0._0_4_ = param_1;
  uStack_1aa0._4_4_ = fVar15;
  fStack_1a98 = param_3;
  fStack_1a94 = param_4;
  uStack_dc8 = extraout_x8_01;
  fVar15 = fStack_1ab4;
  FUN_108281a6c();
  if (((ulong)ppuVar5 & 1) == 0) {
    uStack_1ba8 = CONCAT44(fStack_1aa4,fStack_1aa8);
    ppuVar5 = (uint **)CONCAT44(fStack_1aac,fStack_1ab0);
    param_6 = fVar15;
    ppuStack_1bb0 = ppuVar5;
    func_0x00010835c384(&uStack_1a90,&uStack_1aa0,&ppuStack_1bb0);
    fVar14 = SUB84(ppuVar5,0);
    ppuVar5 = (uint **)&uStack_1aa0;
    FUN_10838ed10(ppuVar5,&puStack_1ac0);
    if ((int)ppuVar5 == 0) {
      func_0x00010835c140();
      goto LAB_108359f34;
    }
    ppuVar5 = (uint **)&uStack_1a90;
    puVar8 = &uStack_1aa0;
    func_0x00010835c398();
    param_8 = param_4;
    param_7 = param_3;
    fStack_1ab0 = fVar14;
    fStack_1aac = param_6;
    fStack_1aa8 = param_3;
    fStack_1aa4 = param_4;
  }
  bVar1 = false;
  uVar2 = false;
  if (fVar14 < param_7) {
    bVar1 = false;
    uVar2 = false;
    if (!NAN(param_6) && !NAN(param_8)) {
      bVar1 = param_6 < param_8;
      uVar2 = param_6 == param_8;
    }
  }
  if (bVar1) {
    fVar14 = fStack_1a98;
    fVar15 = fStack_1a94;
    fVar17 = (float)uStack_1aa0;
    fVar18 = uStack_1aa0._4_4_;
    FUN_108357184();
    ppuStack_1ad0 = ppuVar5;
    pfStack_1ac8 = (float *)puVar8;
    FUN_10817500c(&ppuStack_1ad0);
    uVar12 = NEON_uminv(CONCAT26(-(ushort)(fVar15 == fStack_1a94),
                                 CONCAT24(-(ushort)(fVar14 == fStack_1a98),
                                          CONCAT22(-(ushort)(fVar18 == uStack_1aa0._4_4_),
                                                   -(ushort)(fVar17 == (float)uStack_1aa0)))),2);
    if ((uVar12 & 1) == 0) {
      pfVar9 = &fStack_1ab0;
      uStack_1a90._0_4_ = (uint)uVar12;
      FUN_108341348(ppuVar4 + 1);
      puVar6 = (uint *)&uStack_1a90;
      uStack_1a90._4_4_ = fVar18;
      fStack_1a88 = fVar14;
      fStack_1a84 = fVar15;
      FUN_108341380();
      ppuVar5 = &puStack_1b30;
      puStack_1b30 = puVar6;
      pfStack_1b28 = pfVar9;
      func_0x00010821b838(ppuVar5,ppuVar4 + 0x19);
      if (((ulong)ppuVar5 & 1) == 0) {
        func_0x00010835c140();
      }
      else {
        func_0x00010835c160(&uStack_1a90,ppuVar4,&puStack_1b30,1,1);
        uVar2 = cStack_de8 == '\x01';
        if ((bool)uVar2) {
          uStack_1b7c = 0;
          uStack_1b80 = 0;
          uStack_1b98 = 0;
          uStack_1ba0 = 0;
          uStack_1b88 = 0;
          uStack_1b84 = 0;
          uStack_1b90 = 0;
          uStack_1ba8 = 0;
          ppuStack_1bb0 = (uint **)0x0;
          uStack_1b74 = 0x3f800000;
          uStack_1b6c = 0x140800000;
          pfStack_1b58 = (float *)CONCAT44(fStack_1aa4,fStack_1aa8);
          puStack_1b60 = (uint *)CONCAT44(fStack_1aac,fStack_1ab0);
          func_0x0001081139d4(&uStack_1a90,param_9,&uStack_1aa0,&puStack_1b60,plVar10,&ppuStack_1bb0
                              ,0);
          FUN_108375e94(&ppuStack_1bb0);
        }
        func_0x00010835c1a8(&uStack_1a90);
        ppuVar5 = (uint **)&uStack_1a90;
        func_0x00010835bc64();
      }
    }
    else {
      puVar6 = *ppuVar4;
      lStack_1ae0 = *param_9;
      *param_9 = 0;
      (**(code **)(*(long *)puVar6 + 0x20))(&puStack_1ad8,puVar6,&ppuStack_1ad0,&lStack_1ae0);
      func_0x000106f47184(&lStack_1ae0);
      puStack_1ae8 = puStack_1ad8;
      puStack_1ad8 = (uint *)0x0;
      ppuStack_1bb0 = ppuStack_1ad0;
      FUN_10833ddc8(&uStack_1a90,&puStack_1ae8,&ppuStack_1bb0);
      FUN_1083389b0(&puStack_1ae8);
      FUN_10835eec4(&puStack_1b30,&uStack_1aa0,&fStack_1ab0);
      FUN_10835e5d0(&ppuStack_1bb0,ppuVar4 + 9,&puStack_1b30);
      FUN_10816eab0(&puStack_1b60,&ppuStack_1bb0);
      pfStack_1b28 = pfStack_1b58;
      puStack_1b30 = puStack_1b60;
      uStack_1b18 = uStack_1b48;
      uStack_1b20 = uStack_1b50;
      uStack_1b10 = uStack_1b40;
      FUN_1083588e4(ppuVar3,&uStack_1a90,ppuVar4,&puStack_1b30,plVar10);
      FUN_1083414c4(&uStack_1a90);
      ppuVar5 = &puStack_1ad8;
      FUN_1083389b0();
    }
  }
  else {
    func_0x00010835c140();
  }
LAB_108359f34:
  func_0x00010835c0b8(uStack_dc8);
  if ((bool)uVar2) {
    return ppuVar5;
  }
  ___stack_chk_fail();
  FUN_108375e94(&ppuStack_1bb0);
  ppuVar3 = (uint **)&uStack_1a90;
  func_0x00010835bc64(ppuVar3);
  func_0x00010835c120();
  FUN_10835be10(ppuVar3 + 0x17);
  FUN_10835bda4(ppuVar3 + 0x14);
  return ppuVar3;
}



/* Entry: 108359c68; end: 108359fc7;  */

uint ** FUN_108359c68(float param_1,float param_2,float param_3,float param_4,float param_5,
                     float param_6,float param_7,float param_8,undefined8 *param_9,long *param_10,
                     undefined8 param_11)

{
  bool bVar1;
  undefined1 in_ZR;
  uint **ppuVar2;
  uint *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  float *pfVar6;
  undefined8 extraout_x8;
  ushort uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint **ppuStack_e50;
  undefined8 uStack_e48;
  undefined8 uStack_e40;
  undefined8 uStack_e38;
  undefined8 uStack_e30;
  undefined4 uStack_e28;
  undefined4 uStack_e24;
  undefined4 uStack_e20;
  undefined8 uStack_e1c;
  undefined8 uStack_e14;
  undefined8 uStack_e0c;
  uint *puStack_e00;
  float *pfStack_df8;
  undefined8 uStack_df0;
  undefined8 uStack_de8;
  undefined8 uStack_de0;
  uint *puStack_dd0;
  float *pfStack_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  undefined8 uStack_db0;
  uint *puStack_d88;
  long lStack_d80;
  uint *puStack_d78;
  uint **ppuStack_d70;
  float *pfStack_d68;
  uint *puStack_d60;
  float fStack_d58;
  float fStack_d54;
  float fStack_d50;
  float fStack_d4c;
  float fStack_d48;
  float fStack_d44;
  undefined8 uStack_d40;
  float fStack_d38;
  float fStack_d34;
  undefined8 uStack_d30;
  float fStack_d28;
  float fStack_d24;
  char cStack_88;
  undefined8 uStack_68;
  
  plVar4 = param_10;
  fVar9 = param_6;
  fVar10 = param_7;
  fVar11 = param_8;
  uStack_d40._0_4_ = param_1;
  uStack_d40._4_4_ = param_2;
  fStack_d50 = param_5;
  func_0x00010835c0cc();
  fStack_d58 = (float)*(int *)(*plVar4 + 0x20);
  fStack_d54 = (float)*(int *)(*plVar4 + 0x24);
  puStack_d60 = (uint *)0x0;
  ppuVar2 = &puStack_d60;
  puVar5 = &uStack_d40;
  fStack_d4c = fVar9;
  fStack_d48 = fVar10;
  fStack_d44 = fVar11;
  fStack_d38 = param_3;
  fStack_d34 = param_4;
  uStack_68 = extraout_x8;
  fVar9 = fStack_d54;
  FUN_108281a6c();
  if (((ulong)ppuVar2 & 1) == 0) {
    uStack_e48 = CONCAT44(fStack_d44,fStack_d48);
    ppuVar2 = (uint **)CONCAT44(fStack_d4c,fStack_d50);
    param_6 = fVar9;
    ppuStack_e50 = ppuVar2;
    func_0x00010835c384(&uStack_d30,&uStack_d40,&ppuStack_e50);
    param_5 = SUB84(ppuVar2,0);
    ppuVar2 = (uint **)&uStack_d40;
    FUN_10838ed10(ppuVar2,&puStack_d60);
    if ((int)ppuVar2 == 0) {
      func_0x00010835c140();
      goto LAB_108359f34;
    }
    ppuVar2 = (uint **)&uStack_d30;
    puVar5 = &uStack_d40;
    func_0x00010835c398();
    param_7 = param_3;
    param_8 = param_4;
    fStack_d50 = param_5;
    fStack_d4c = param_6;
    fStack_d48 = param_3;
    fStack_d44 = param_4;
  }
  bVar1 = false;
  in_ZR = false;
  if (param_5 < param_7) {
    bVar1 = false;
    in_ZR = false;
    if (!NAN(param_6) && !NAN(param_8)) {
      bVar1 = param_6 < param_8;
      in_ZR = param_6 == param_8;
    }
  }
  if (bVar1) {
    fVar9 = fStack_d38;
    fVar10 = fStack_d34;
    fVar11 = (float)uStack_d40;
    fVar8 = uStack_d40._4_4_;
    FUN_108357184();
    ppuStack_d70 = ppuVar2;
    pfStack_d68 = (float *)puVar5;
    FUN_10817500c(&ppuStack_d70);
    uVar7 = NEON_uminv(CONCAT26(-(ushort)(fVar10 == fStack_d34),
                                CONCAT24(-(ushort)(fVar9 == fStack_d38),
                                         CONCAT22(-(ushort)(fVar8 == uStack_d40._4_4_),
                                                  -(ushort)(fVar11 == (float)uStack_d40)))),2);
    if ((uVar7 & 1) == 0) {
      pfVar6 = &fStack_d50;
      uStack_d30._0_4_ = (uint)uVar7;
      FUN_108341348(param_9 + 1);
      puVar3 = (uint *)&uStack_d30;
      uStack_d30._4_4_ = fVar8;
      fStack_d28 = fVar9;
      fStack_d24 = fVar10;
      FUN_108341380();
      ppuVar2 = &puStack_dd0;
      puStack_dd0 = puVar3;
      pfStack_dc8 = pfVar6;
      func_0x00010821b838(ppuVar2,param_9 + 0x19);
      if (((ulong)ppuVar2 & 1) == 0) {
        func_0x00010835c140();
      }
      else {
        func_0x00010835c160(&uStack_d30,param_9,&puStack_dd0,1,1);
        in_ZR = cStack_88 == '\x01';
        if ((bool)in_ZR) {
          uStack_e1c = 0;
          uStack_e20 = 0;
          uStack_e38 = 0;
          uStack_e40 = 0;
          uStack_e28 = 0;
          uStack_e24 = 0;
          uStack_e30 = 0;
          uStack_e48 = 0;
          ppuStack_e50 = (uint **)0x0;
          uStack_e14 = 0x3f800000;
          uStack_e0c = 0x140800000;
          pfStack_df8 = (float *)CONCAT44(fStack_d44,fStack_d48);
          puStack_e00 = (uint *)CONCAT44(fStack_d4c,fStack_d50);
          func_0x0001081139d4(&uStack_d30,param_10,&uStack_d40,&puStack_e00,param_11,&ppuStack_e50,0
                             );
          FUN_108375e94(&ppuStack_e50);
        }
        func_0x00010835c1a8(&uStack_d30);
        ppuVar2 = (uint **)&uStack_d30;
        func_0x00010835bc64();
      }
    }
    else {
      plVar4 = (long *)*param_9;
      lStack_d80 = *param_10;
      *param_10 = 0;
      (**(code **)(*plVar4 + 0x20))(&puStack_d78,plVar4,&ppuStack_d70,&lStack_d80);
      func_0x000106f47184(&lStack_d80);
      puStack_d88 = puStack_d78;
      puStack_d78 = (uint *)0x0;
      ppuStack_e50 = ppuStack_d70;
      FUN_10833ddc8(&uStack_d30,&puStack_d88,&ppuStack_e50);
      FUN_1083389b0(&puStack_d88);
      FUN_10835eec4(&puStack_dd0,&uStack_d40,&fStack_d50);
      FUN_10835e5d0(&ppuStack_e50,param_9 + 9,&puStack_dd0);
      FUN_10816eab0(&puStack_e00,&ppuStack_e50);
      pfStack_dc8 = pfStack_df8;
      puStack_dd0 = puStack_e00;
      uStack_db8 = uStack_de8;
      uStack_dc0 = uStack_df0;
      uStack_db0 = uStack_de0;
      FUN_1083588e4(&uStack_d30,param_9,&puStack_dd0,param_11);
      FUN_1083414c4(&uStack_d30);
      ppuVar2 = &puStack_d78;
      FUN_1083389b0();
    }
  }
  else {
    func_0x00010835c140();
  }
LAB_108359f34:
  func_0x00010835c0b8(uStack_68);
  if ((bool)in_ZR) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  FUN_108375e94(&ppuStack_e50);
  ppuVar2 = (uint **)&uStack_d30;
  func_0x00010835bc64(ppuVar2);
  func_0x00010835c120();
  FUN_10835be10(ppuVar2 + 0x17);
  FUN_10835bda4(ppuVar2 + 0x14);
  return ppuVar2;
}



/* Entry: 108359fc8; end: 108359ff3;  */

long FUN_108359fc8(long param_1)

{
  FUN_10835be10(param_1 + 0xb8);
  FUN_10835bda4(param_1 + 0xa0);
  return param_1;
}



/* Entry: 108359ff4; end: 10835a38f;  */

undefined1  [16] FUN_108359ff4(long *param_1,long *param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 auVar16 [16];
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long alStack_100 [13];
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  int aiStack_6c [3];
  
  uStack_128 = 0;
  uStack_130 = 0x3f800000;
  uStack_118 = 0;
  uStack_120 = 0x3f800000;
  uStack_110 = 0x103f800000;
  if (param_3 == 0) {
    bVar1 = false;
  }
  else {
    FUN_10816eab0(alStack_100,*param_1 + 0x48);
    FUN_10818cfd0(alStack_100,&uStack_130);
    iVar11 = (int)&uStack_130;
    func_0x00010835c170();
    bVar1 = iVar11 == 0;
  }
  iVar11 = (int)param_1[0x15];
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar3 = (ulong)uVar2;
  uVar10 = (ulong)(iVar11 - uVar2);
  if ((iVar11 - uVar2 != 0 && (int)uVar2 <= iVar11) &&
     ((int)(*(uint *)((long)param_1 + 0xc4) >> 1) < iVar11)) {
    FUN_10835c048(uVar3,uVar10);
    FUN_10835bfe4(param_1 + 0x17,uVar3,uVar10);
    iVar11 = (int)param_1[0x15];
  }
  lVar15 = 0;
  lVar13 = param_1[0x14];
  do {
    if ((long)iVar11 * 0x98 == lVar15) {
      auVar16._0_8_ = param_1[0x17];
      auVar16._8_8_ = (long)(int)param_1[0x18];
      return auVar16;
    }
    plVar9 = (long *)(lVar13 + lVar15);
    plVar4 = plVar9 + 0xd;
    if ((char)plVar9[0xf] == '\0') {
      plVar4 = param_2;
    }
    lStack_138 = plVar4[1];
    lStack_140 = *plVar4;
    if (*plVar9 == 0) {
      lStack_148 = 0;
    }
    else {
      lVar14 = *param_1;
      uVar12 = *(uint *)((long)plVar9 + 0x7c);
      lVar7 = lVar13 + lVar15;
      uVar3 = lVar7 + 0x28;
      func_0x00010835c170();
      uVar2 = uVar12 & 2;
      plVar4 = plVar9;
      func_0x000108358b60(plVar9,&lStack_140,2);
      uStack_88 = *(undefined8 *)(lVar7 + 0x88);
      uStack_90 = *(undefined8 *)(lVar7 + 0x80);
      uStack_80 = *(undefined8 *)(lVar7 + 0x90);
      if ((uVar12 & 1) == 0) {
LAB_10835a188:
        lVar7 = lVar7 + 0xc;
        FUN_108358fc4(lVar7,uVar3,&uStack_90,uVar2 == 0 && !bVar1);
        if ((int)lVar7 == 0) goto LAB_10835a1ac;
        uVar12 = (uint)plVar4 >> 2 & 1;
      }
      else {
        plVar5 = *(long **)(lVar7 + 0x50);
        if ((plVar5 == (long *)0x0) ||
           ((**(code **)(*plVar5 + 0x68))(plVar5,0,aiStack_6c),
           (int)plVar5 != 0 && aiStack_6c[0] < 0xf)) {
          uVar6 = *(undefined8 *)(*plVar9 + 0x20);
          FUN_108343f98(uVar6,*(undefined8 *)(lVar14 + 0x140));
          if ((int)uVar6 != 0) goto LAB_10835a188;
        }
LAB_10835a1ac:
        uVar12 = 1;
      }
      puVar8 = &uStack_90;
      func_0x00010817505c(puVar8,&UNK_10df1cb00);
      if ((((int)puVar8 != 0) && (uVar2 == 0 && !bVar1)) && (uVar12 != 0 || (uVar3 & 1) != 0)) {
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
      }
      lStack_98 = 0;
      if (uVar12 == 0) {
        FUN_108359624(alStack_100,plVar9,lVar14,&uStack_90,(ulong)plVar4 & 0xffffffff);
        lVar7 = lStack_98;
        lStack_98 = alStack_100[0];
        alStack_100[0] = 0;
        func_0x00010835be9c(lVar7);
        func_0x00010835c228();
LAB_10835a26c:
        lStack_148 = lStack_98;
        lStack_98 = 0;
      }
      else {
        func_0x00010835c1b0(alStack_100,plVar9,lVar14,lStack_140,lStack_138);
        if (alStack_100[0] == 0) {
          func_0x00010835c338();
          goto LAB_10835a26c;
        }
        plVar9 = alStack_100;
        func_0x000108358b60(plVar9,&lStack_140,2);
        FUN_108359624(&lStack_148,alStack_100,lVar14,&uStack_90,(ulong)plVar9 & 0xffffffff);
        func_0x00010835c338();
      }
      func_0x000106f47224(&lStack_98);
    }
    if ((param_3 != 0) && (lStack_148 != 0)) {
      FUN_1083be074(alStack_100,lStack_148,&uStack_130);
      lVar14 = alStack_100[0];
      lVar7 = lStack_148;
      alStack_100[0] = 0;
      lStack_148 = lVar14;
      func_0x00010835be9c(lVar7);
      func_0x00010835c228();
    }
    lVar7 = lStack_148;
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar3 = (ulong)uVar2;
    if ((int)uVar2 < (int)(*(uint *)((long)param_1 + 0xc4) >> 1)) {
      lStack_148 = 0;
      *(long *)(param_1[0x17] + (long)(int)uVar2 * 8) = lVar7;
    }
    else {
      uVar6 = 1;
      FUN_10835c048(uVar3,1);
      lVar7 = lStack_148;
      lStack_148 = 0;
      *(long *)(uVar3 + (long)(int)param_1[0x18] * 8) = lVar7;
      FUN_10835bfe4(param_1 + 0x17,uVar3,uVar6);
      uVar2 = *(uint *)(param_1 + 0x18);
    }
    *(uint *)(param_1 + 0x18) = uVar2 + 1;
    func_0x000106f47224(&lStack_148);
    lVar15 = lVar15 + 0x98;
  } while( true );
}



/* Entry: 10835a390; end: 10835a3d7;  */

undefined1  [16] FUN_10835a390(long *param_1,long param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  iVar1 = (int)&uStack_20;
  uStack_18 = *(undefined8 *)(*param_1 + 0xd0);
  uStack_20 = *(undefined8 *)(*param_1 + 200);
  if ((*(char *)(param_2 + 0x10) == '\x01') && (func_0x00010821b838(), iVar1 == 0)) {
    uStack_20 = 0;
    uStack_18 = 0;
  }
  auVar2._8_8_ = uStack_18;
  auVar2._0_8_ = uStack_20;
  return auVar2;
}



/* Entry: 10835a3d8; end: 10835a4e7;  */

/* WARNING: Type propagation algorithm not settling */

long ******* FUN_10835a3d8(long *******param_1,long *******param_2)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined1 in_ZR;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  long *******ppppppplVar13;
  long *******ppppppplVar14;
  long *****ppppplVar15;
  long *****ppppplVar16;
  long ******pppppplVar17;
  long ****pppplVar18;
  long ******pppppplVar19;
  undefined8 *******pppppppuVar20;
  int iVar21;
  long ******pppppplVar22;
  long ******pppppplVar23;
  int iVar24;
  long ******extraout_x8;
  long ******extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  long *******extraout_x8_04;
  undefined8 extraout_x8_05;
  undefined8 uVar25;
  int iVar26;
  int extraout_w10;
  int extraout_w10_00;
  int iVar27;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  long *******unaff_x19;
  long *******unaff_x20;
  long *******ppppppplVar28;
  long ******pppppplVar29;
  long lVar30;
  long ******pppppplVar31;
  undefined8 *puVar32;
  uint uVar33;
  undefined8 *puVar34;
  uint uVar35;
  undefined1 **unaff_x29;
  code *unaff_x30;
  long *******ppppppplVar36;
  long ******pppppplVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined4 uVar41;
  float fVar42;
  undefined4 uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined8 uVar49;
  float fVar50;
  float fStack_2d04;
  float fStack_2d00;
  float fStack_2ce4;
  float fStack_2ce0;
  int iStack_2cdc;
  long *******ppppppplStack_2cd0;
  long *******ppppppplStack_2ca0;
  long *******ppppppplStack_2c98;
  long ******pppppplStack_2c90;
  undefined8 uStack_2c88;
  long *******ppppppplStack_2bc8;
  long *******ppppppplStack_2bc0;
  long *******ppppppplStack_2b40;
  undefined8 auStack_2b38 [3];
  int iStack_2b1c;
  float afStack_2b18 [4];
  float fStack_2b08;
  undefined8 uStack_2af0;
  long ******pppppplStack_2ae8;
  long *****ppppplStack_2ae0;
  long *******ppppppplStack_2ad0;
  undefined1 auStack_2ac8 [8];
  long *******ppppppplStack_2ac0;
  long *******ppppppplStack_2ab8;
  long *******ppppppplStack_2ab0;
  long *******ppppppplStack_2aa8;
  long *******ppppppplStack_2aa0;
  long *******ppppppplStack_2a98;
  long ******pppppplStack_2a88;
  undefined8 uStack_2a80;
  undefined8 uStack_2a78;
  undefined8 uStack_2a70;
  undefined8 uStack_2a68;
  undefined8 uStack_2a60;
  undefined4 uStack_2a58;
  undefined4 uStack_2a54;
  undefined4 uStack_2a50;
  undefined8 uStack_2a4c;
  undefined8 uStack_2a44;
  undefined8 uStack_2a3c;
  float fStack_2a10;
  float fStack_2a0c;
  float fStack_2a08;
  float fStack_2a04;
  undefined8 uStack_2a00;
  long *******ppppppplStack_29f8;
  long *******ppppppplStack_29f0;
  long ******pppppplStack_29e8;
  long *******ppppppplStack_29e0;
  long ******pppppplStack_29d8;
  undefined8 uStack_29d0;
  undefined8 uStack_29c8;
  undefined8 uStack_29c0;
  undefined4 uStack_29b8;
  undefined4 uStack_29b4;
  undefined4 uStack_29b0;
  undefined8 uStack_29ac;
  undefined8 uStack_29a4;
  undefined8 uStack_299c;
  long *******ppppppplStack_2988;
  undefined8 uStack_2980;
  undefined8 uStack_2978;
  undefined8 uStack_2970;
  undefined8 uStack_2968;
  long ******pppppplStack_2960;
  long ******pppppplStack_2958;
  long ******pppppplStack_2950;
  long ******pppppplStack_2948;
  undefined4 uStack_2940;
  undefined4 uStack_293c;
  undefined4 uStack_2938;
  undefined4 uStack_2934;
  long *******ppppppplStack_2930;
  int iStack_2928;
  int iStack_2924;
  undefined8 uStack_291c;
  undefined8 uStack_2914;
  int iStack_290c;
  long *****appppplStack_2908 [5];
  undefined8 uStack_28e0;
  long ******pppppplStack_28d8;
  long *****ppppplStack_28d0;
  undefined4 uStack_28c0;
  float fStack_28bc;
  float fStack_28b8;
  float fStack_28b4;
  undefined8 uStack_28b0;
  undefined8 uStack_28a8;
  undefined8 *******pppppppuStack_28a0;
  long *******ppppppplStack_2898;
  uint uStack_2888;
  uint uStack_2884;
  long ******pppppplStack_2880;
  long *****ppppplStack_2878;
  float fStack_2868;
  float fStack_2864;
  float fStack_2860;
  float fStack_285c;
  float fStack_2858;
  float fStack_2854;
  float fStack_2850;
  float fStack_284c;
  undefined8 uStack_2848;
  undefined8 uStack_2840;
  undefined8 uStack_2838;
  float fStack_2830;
  float fStack_282c;
  undefined8 uStack_2828;
  undefined8 uStack_2820;
  undefined8 *puStack_2818;
  undefined8 uStack_2810;
  undefined8 uStack_2808;
  undefined1 uStack_2800;
  long ******pppppplStack_27c0;
  long ******pppppplStack_27b8;
  long ******pppppplStack_27b0;
  long lStack_1bd0;
  int iStack_1bb0;
  char cStack_1b68;
  undefined8 uStack_1b48;
  code *pcStack_1a98;
  long *******ppppppplStack_1a88;
  long *******ppppppplStack_1a80;
  long *******ppppppplStack_1a78;
  long *******ppppppplStack_1a70;
  undefined8 uStack_1a68;
  undefined1 uStack_1a60;
  long lStack_e30;
  char cStack_dc8;
  undefined8 uStack_da8;
  undefined1 *puStack_d70;
  code *pcStack_d68;
  undefined8 uStack_d58;
  undefined1 auStack_d50 [8];
  long ******pppppplStack_d48;
  long ******apppppplStack_d00 [405];
  char cStack_58;
  undefined8 uStack_38;
  
  func_0x00010835c0cc();
  if (*param_2 == (long ******)0x0) {
    func_0x00010835c0b8(extraout_x8_01);
    ppppppplVar14 = unaff_x19;
    if ((bool)in_ZR) goto FUN_10833dd8c;
  }
  else {
    uStack_38 = extraout_x8_01;
    func_0x00010835c160(apppppplStack_d00,*param_1);
    uVar8 = cStack_58 == '\x01';
    if ((bool)uVar8) {
      func_0x00010835c180();
      func_0x00010835c274(0x3f800000);
      pppppplStack_d48 = *param_2;
      *param_2 = (long ******)0x0;
      uStack_d58 = 0;
      func_0x00010835be9c(0);
      func_0x00010835c250();
      func_0x00010835c150(auStack_d50);
      func_0x00010835c2e8(apppppplStack_d00[0][0x15],apppppplStack_d00);
      func_0x00010835c168();
    }
    param_1 = apppppplStack_d00;
    func_0x00010835c1a8();
    func_0x00010835c220();
    func_0x00010835c0b8(uStack_38);
    unaff_x20 = param_2;
    if ((bool)uVar8) {
      return param_1;
    }
  }
  ___stack_chk_fail();
  ppppppplVar13 = param_1;
  func_0x00010835c250();
  func_0x00010835c168();
  func_0x00010835c220();
  func_0x00010835c120();
  pcStack_d68 = FUN_10835a4e8;
  unaff_x29 = &puStack_d70;
  ppppppplVar14 = ppppppplVar13;
  puStack_d70 = &stack0xfffffffffffffff0;
  func_0x00010835c0cc();
  iVar10 = *(int *)(ppppppplVar14 + 0x15);
  bVar9 = iVar10 == 1;
  if (bVar9) {
    pppppplVar22 = ppppppplVar13[0x14];
    func_0x00010835c0b8(extraout_x8_02);
    if (bVar9) {
      func_0x000108341e84(param_1);
      pppppplVar29 = (long ******)0x0;
      if (*pppppplVar22 != (long *****)0x0) {
        do {
          func_0x000108341c8c();
          pppppplVar29 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      *param_1 = pppppplVar29;
      _memcpy(param_1 + 1,unaff_x20 + 1,0x48);
      pppppplVar22 = (long ******)0x0;
      if (unaff_x20[10] != (long ******)0x0) {
        do {
          func_0x000108341c8c();
          pppppplVar22 = extraout_x8_00;
        } while (extraout_w11_00 != 0);
      }
      param_1[10] = pppppplVar22;
      pppppplVar22 = unaff_x20[0xb];
      param_1[0xc] = unaff_x20[0xc];
      param_1[0xb] = pppppplVar22;
      return param_1;
    }
  }
  else {
    ppppppplStack_1a78 = ppppppplVar13;
    uStack_da8 = extraout_x8_02;
    if (iVar10 < 1) {
      ppppppplStack_1a70 = (long *******)0x0;
      uStack_1a68 = 0;
    }
    else {
      ppppppplVar14 = (long *******)&ppppppplStack_1a78;
      uVar49 = 0;
      func_0x00010835c08c();
      ppppppplVar28 = (long *******)0x1;
      ppppppplStack_1a70 = ppppppplVar14;
      uStack_1a68 = uVar49;
      while (iVar24 = (int)ppppppplVar28, iVar10 != iVar24) {
        ppppppplVar14 = (long *******)&ppppppplStack_1a78;
        func_0x00010835c08c();
        ppppppplStack_1a88 = ppppppplVar14;
        ppppppplStack_1a80 = ppppppplVar28;
        FUN_10838eae0(&ppppppplStack_1a70,&ppppppplStack_1a88);
        ppppppplVar28 = (long *******)(ulong)(iVar24 + 1);
      }
    }
    uStack_1a60 = 1;
    ppppppplVar14 = (long *******)&ppppppplStack_1a70;
    ppppppplVar28 = ppppppplVar13;
    FUN_10835a390();
    pppppplVar22 = *ppppppplVar13;
    ppppppplStack_1a88 = ppppppplVar28;
    ppppppplStack_1a80 = ppppppplVar14;
    func_0x00010835c160(&ppppppplStack_1a70,pppppplVar22,&ppppppplStack_1a88,1,0);
    uVar8 = cStack_dc8 == '\x01';
    if ((bool)uVar8) {
      pppppplVar29 = ppppppplVar13[0x14];
      for (lVar30 = (long)*(int *)(ppppppplVar13 + 0x15) * 0x98; lVar30 != 0;
          lVar30 = lVar30 + -0x98) {
        pppppplVar22 = *ppppppplVar13;
        FUN_108359104(pppppplVar29,pppppplVar22,*(undefined8 *)(lStack_e30 + 8),1,0);
        pppppplVar29 = pppppplVar29 + 0x13;
      }
    }
    func_0x00010835c1a8(&ppppppplStack_1a70);
    ppppppplVar14 = (long *******)&ppppppplStack_1a70;
    func_0x00010835bc64();
    func_0x00010835c0b8(uStack_da8);
    if ((bool)uVar8) {
      return ppppppplVar14;
    }
  }
  uVar8 = 0;
  ___stack_chk_fail();
  unaff_x20 = (long *******)&ppppppplStack_1a70;
  func_0x00010835bc64();
  func_0x00010835c120();
  pcStack_1a98 = FUN_10835a65c;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  ppppppplVar13 = unaff_x20;
  func_0x00010835c0cc();
  ppppplVar15 = **ppppppplVar13;
  uStack_1b48 = extraout_x8_03;
  (*(code *)(*ppppplVar15)[6])();
  pppppplVar29 = (long ******)(ulong)*(uint *)((long)pppppplVar22 + 4);
  (*(code *)(*ppppplVar15)[2])(*(undefined4 *)pppppplVar22);
  if (ppppplVar15 == (long *****)0x0) {
    func_0x00010835c0b8(uStack_1b48);
    if ((bool)uVar8) {
      unaff_x30 = FUN_10835a65c;
      unaff_x19 = ppppppplVar14;
      func_0x00010835c458(ppppppplVar14);
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffe4d0;
FUN_10833dd8c:
      *(long ********)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long ********)((long)register0x00000008 + -0x18) = ppppppplVar14;
      *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
      *(code **)((long)register0x00000008 + -8) = unaff_x30;
      *(undefined8 *)((long)register0x00000008 + -0x28) = 0;
      FUN_1083413f4();
      func_0x000108341fb4();
      return unaff_x19;
    }
  }
  else {
    uVar49 = NEON_fmov(0x40400000,4);
    fVar50 = (float)((ulong)uVar49 >> 0x20);
    uStack_2810 = (long *******)
                  CONCAT44((float)((ulong)*pppppplVar22 >> 0x20) * fVar50,
                           SUB84(*pppppplVar22,0) * (float)uVar49);
    pppppplVar37 = (long ******)&uStack_2810;
    func_0x000108357874();
    pppppplStack_2a88 = pppppplVar37;
    if (*(int *)(unaff_x20 + 0x15) < 1) goto LAB_10835b7c8;
    ppppppplStack_2a98 = (long *******)unaff_x20[0x14][0xc];
    ppppppplStack_2aa0 = (long *******)unaff_x20[0x14][0xb];
    ppppppplVar13 = (long *******)&ppppppplStack_2aa0;
    ppppppplVar28 = &pppppplStack_2a88;
    FUN_10833e0cc();
    uStack_2808 = ppppppplStack_2a98;
    uStack_2810 = ppppppplStack_2aa0;
    uStack_2800 = 1;
    func_0x00010835c318();
    bVar9 = false;
    uVar8 = true;
    bVar7 = false;
    if ((int)ppppppplVar13 < (int)ppppppplVar28) {
      iVar10 = (int)((ulong)ppppppplVar13 >> 0x20);
      iVar24 = (int)((ulong)ppppppplVar28 >> 0x20);
      bVar7 = SBORROW4(iVar24,iVar10);
      bVar9 = iVar24 - iVar10 < 0;
      uVar8 = iVar24 == iVar10;
    }
    ppppppplStack_2ab0 = ppppppplVar13;
    ppppppplStack_2aa8 = ppppppplVar28;
    if ((bool)uVar8 || bVar9 != bVar7) {
      func_0x00010835c140();
    }
    else {
      ppppppplVar36 = ppppppplVar13;
      ppppppplStack_2ac0 = ppppppplVar13;
      ppppppplStack_2ab8 = ppppppplVar28;
      FUN_10833e0cc(&ppppppplStack_2ac0,&pppppplStack_2a88);
      fVar38 = SUB84(ppppppplVar36,0);
      ppppplVar16 = **unaff_x20;
      (*(code *)(*ppppplVar16)[7])();
      if ((int)ppppplVar16 == 0) {
        fVar44 = *(float *)pppppplVar22;
        func_0x00010835c1fc();
        func_0x00010835c158();
        fVar42 = 1.0;
        if (fVar38 < fVar44) {
          func_0x00010835c1fc();
          func_0x00010835c158();
          pppppplVar29 = (long ******)(ulong)(uint)*(float *)pppppplVar22;
          fVar42 = fVar38 / *(float *)pppppplVar22;
        }
        fVar46 = *(float *)((long)pppppplVar22 + 4);
        func_0x00010835c1fc();
        func_0x00010835c158();
        fVar44 = 1.0;
        if (fVar38 < fVar46) {
          func_0x00010835c1fc();
          func_0x00010835c158();
          pppppplVar29 = (long ******)(ulong)(uint)*(float *)((long)pppppplVar22 + 4);
          fVar44 = fVar38 / *(float *)((long)pppppplVar22 + 4);
        }
        uVar8 = *(int *)(unaff_x20 + 0x15) == 0;
        if (*(int *)(unaff_x20 + 0x15) < 1) goto LAB_10835b7c8;
        pppppplVar31 = unaff_x20[0x14];
        FUN_1083415ec(&pppppplStack_2c90,*unaff_x20);
        ppppppplStack_2bc0 = ppppppplStack_2ab8;
        ppppppplStack_2bc8 = ppppppplStack_2ac0;
        ppppplVar16 = ppppplVar15;
        (*(code *)(*ppppplVar15)[3])();
        ppppplStack_2878 = pppppplVar31[0xc];
        pppppplVar37 = (long ******)pppppplVar31[0xb];
        pppppplStack_2880 = pppppplVar37;
        if (*pppppplVar31 == (long *****)0x0) {
LAB_10835a9e8:
          func_0x00010835c1f4();
        }
        else {
          pppppplVar17 = (long ******)&pppppplStack_2880;
          func_0x00010821b838(pppppplVar17,&ppppppplStack_2bc8);
          iVar10 = 0;
          if (0.0 < fVar42) {
            iVar10 = (int)pppppplVar17;
          }
          uVar8 = iVar10 == 1;
          if ((!(bool)uVar8) || (uVar8 = fVar44 == 0.0, fVar44 <= 0.0)) goto LAB_10835a9e8;
          pppppplVar17 = pppppplVar31 + 5;
          FUN_108358b38(pppppplVar17,&uStack_2888);
          pppppplVar19 = pppppplVar31;
          func_0x000108358b60(pppppplVar31,&ppppppplStack_2bc8,3);
          if ((int)pppppplVar17 == 0) {
            uVar35 = 0;
          }
          else {
            bVar9 = ((ulong)pppppplVar19 & 4) == 0;
            uVar35 = (uint)bVar9;
            iVar10 = 0;
            if (bVar9) {
              iVar10 = (int)ppppplVar16;
            }
            if (iVar10 == 1) {
              uVar35 = (uint)(((ulong)pppppplVar19 & 2) == 0);
            }
          }
          pppplVar18 = (*pppppplVar31)[4];
          if (pppplVar18 == (long ****)0x0) {
            FUN_108343afc();
          }
          uVar11 = (uint)pppplVar18;
          if (((uVar35 == 0) || (pppppplVar31[10] != (long *****)0x0)) ||
             (*(int *)(*pppppplVar31 + 5) != *(int *)(pppppplStack_2c90 + 5))) {
            uVar33 = 1;
          }
          else {
            FUN_108343f98();
            uVar33 = uVar11 ^ 1;
          }
          FUN_108359a50(fVar42);
          pppppplVar37 = (long ******)(ulong)(uint)fVar44;
          uVar12 = uVar11;
          FUN_108359a50();
          uVar8 = uVar11 == 0 && uVar12 == 0;
          if ((uVar11 == 0 && uVar12 == 0) && ((uVar33 & 1) == 0)) {
            if (((uint)pppppplVar19 >> 1 & 1) == 0) {
              func_0x00010835c368(&ppppppplStack_2b40,pppppplVar31,&uStack_2888,&pppppplStack_2880);
            }
            else {
              FUN_108341774(&ppppppplStack_2b40,pppppplVar31);
              ppppplStack_2ae0 = ppppplStack_2878;
              pppppplStack_2ae8 = pppppplStack_2880;
              pppppplVar37 = pppppplStack_2880;
            }
          }
          else {
            if ((uVar35 & ((uint)pppppplVar19 & 2) >> 1) == 1) {
              pppppplVar19 = (long ******)(ulong)uStack_2888;
              ppppplVar16 = (long *****)(ulong)uStack_2884;
              func_0x00010835c3f0(*pppppplVar31);
              FUN_108219ff8();
              iVar10 = *(int *)((long)pppppplVar31 + 0x24);
              pppppppuStack_28a0 = (undefined8 *******)pppppplVar19;
              ppppppplStack_2898 = (long *******)ppppplVar16;
              if (iVar10 == 3) {
                bVar7 = false;
                iVar10 = 0;
                bVar9 = true;
              }
              else {
                bVar9 = false;
                bVar7 = iVar10 - 1U < 2;
              }
            }
            else {
              bVar7 = false;
              bVar9 = false;
              ppppppplStack_2898 = (long *******)ppppplStack_2878;
              pppppppuStack_28a0 = (undefined8 *******)pppppplStack_2880;
              iVar10 = 3;
              pppppplVar37 = pppppplStack_2880;
            }
            pppppppuVar20 = &pppppppuStack_28a0;
            ppppppplVar13 = ppppppplStack_2bc8;
            FUN_1083577b0(pppppppuVar20,ppppppplStack_2bc8,ppppppplStack_2bc0,iVar10);
            pppppppuStack_28a0 = pppppppuVar20;
            ppppppplStack_2898 = ppppppplVar13;
            func_0x00010835c340(&uStack_28b0);
            fVar38 = (float)uStack_28b0;
            fVar46 = (float)uStack_28a8;
            uVar8 = (float)uStack_28b0 == (float)uStack_28a8;
            if ((float)uStack_28b0 < (float)uStack_28a8) {
              fVar39 = uStack_28b0._4_4_;
              fVar40 = uStack_28a8._4_4_;
              pppppplVar19 = (long ******)(ulong)(uint)uStack_28a8._4_4_;
              uVar8 = uStack_28b0._4_4_ == uStack_28a8._4_4_;
              pppppplVar37 = pppppplVar19;
              if (uStack_28b0._4_4_ < uStack_28a8._4_4_) {
                func_0x00010835c340(&uStack_28c0);
                pppppplVar23 = pppppplVar31;
                FUN_108341774(&ppppppplStack_2930);
                if ((((ulong)pppppplVar17 & 1) != 0) || (uVar11 == 0 && uVar12 == 0)) {
LAB_10835af14:
                  if (bVar7) {
                    func_0x000108359acc();
                    uStack_2810 = (long *******)CONCAT44(fVar39,fVar38);
                    uStack_2808 = (long *******)CONCAT44(fVar40,fVar46);
                    puVar32 = &uStack_2810;
                    func_0x000108359b1c();
                    fVar38 = (float)NEON_fminnm((int)((float)uStack_2810 * 0.5 +
                                                     (float)uStack_2808 * 0.5),0x4effffff);
                    if (fVar38 <= -2.1474835e+09) {
                      fVar38 = -2.1474835e+09;
                    }
                    iVar24 = (int)fVar38;
                    fVar38 = (float)NEON_fminnm((int)(uStack_2810._4_4_ * 0.5 +
                                                     uStack_2808._4_4_ * 0.5),0x4effffff);
                    if (fVar38 <= -2.1474835e+09) {
                      fVar38 = -2.1474835e+09;
                    }
                    iVar26 = (int)fVar38;
                    iVar1 = (int)puVar32;
                    if (iVar24 <= (int)puVar32) {
                      iVar1 = iVar24;
                    }
                    iVar27 = (int)((ulong)puVar32 >> 0x20);
                    if (iVar26 <= iVar27) {
                      iVar27 = iVar26;
                    }
                    iVar21 = (int)pppppplVar23;
                    if (iVar21 < iVar24 + 1) {
                      iVar21 = iVar24 + 1;
                    }
                    iVar24 = (int)((ulong)pppppplVar23 >> 0x20);
                    if (iVar24 < iVar26 + 1) {
                      iVar24 = iVar26 + 1;
                    }
                    FUN_108359a50(((float)iVar21 - (float)iVar1) /
                                  (float)((int)ppppppplVar13 - (int)pppppppuVar20));
                    puVar34 = puVar32;
                    FUN_108359a50(((float)iVar24 - (float)iVar27) /
                                  (float)((int)((ulong)ppppppplVar13 >> 0x20) -
                                         (int)((ulong)pppppppuVar20 >> 0x20)));
                    iStack_2cdc = 0;
                    iStack_290c = 0;
                  }
                  else {
                    puVar32 = (undefined8 *)(ulong)uVar11;
                    puVar34 = (undefined8 *)(ulong)uVar12;
                    iStack_2cdc = iVar10;
                  }
                  do {
                    if ((int)puVar32 != 0) {
                      puVar32 = (undefined8 *)(ulong)((int)puVar32 - 1);
                    }
                    iVar24 = (int)puVar34;
                    puVar34 = (undefined8 *)(ulong)(iVar24 - 1);
                    if (iVar24 < 1) {
                      puVar34 = (undefined8 *)0x0;
                    }
                    uVar41 = (int)uStack_28b0;
                    uVar43 = (int)((ulong)uStack_28b0 >> 0x20);
                    uVar4 = (int)uStack_28a8;
                    uVar5 = (int)((ulong)uStack_28a8 >> 0x20);
                    func_0x000108359acc();
                    uStack_2934 = uVar5;
                    uStack_2938 = uVar4;
                    uStack_293c = uVar43;
                    uStack_2940 = uVar41;
                    pppppplVar37 = (long ******)&uStack_2940;
                    FUN_108341380();
                    pppppplStack_2960 = pppppplVar37;
                    pppppplStack_2958 = pppppplVar23;
                    pppppplStack_2950 = pppppplVar37;
                    pppppplStack_2948 = pppppplVar23;
                    if (iVar10 != 3) {
                      uStack_2810 = (long *******)((long)&MACH_HEADER.magic + 1);
                      func_0x00010835c324(&pppppplStack_2950);
                    }
                    pppppplVar23 = (long ******)&pppppplStack_2c90;
                    func_0x00010835c160(&uStack_2810,pppppplVar23,&pppppplStack_2950,iVar10 == 3,0);
                    cVar3 = cStack_1b68;
                    uVar8 = cStack_1b68 == '\x01';
                    if ((bool)uVar8) {
                      FUN_108359b28(&ppppppplStack_2988,&uStack_28b0,&uStack_2940);
                      uStack_2a78 = (long *******)uStack_2980;
                      uStack_2a80 = ppppppplStack_2988;
                      uStack_2a68 = uStack_2970;
                      uStack_2a70 = uStack_2978;
                      uStack_2a60 = uStack_2968;
                      pppppplStack_29d8 = pppppplStack_2958;
                      ppppppplStack_29e0 = (long *******)pppppplStack_2960;
                      ppppppplVar13 = (long *******)&ppppppplStack_2930;
                      FUN_108357e80(ppppppplVar13,&uStack_2a80,&ppppppplStack_29e0,3);
                      uStack_29ac = 0;
                      uStack_29b0 = 0;
                      uStack_29c8 = 0;
                      uStack_29d0 = 0;
                      uStack_29b8 = 0;
                      uStack_29b4 = 0;
                      uStack_29c0 = 0;
                      pppppplStack_29d8 = (long ******)0x0;
                      ppppppplStack_29e0 = (long *******)0x0;
                      uStack_29a4 = 0x3f800000;
                      uStack_299c = 0x40800000;
                      uStack_2a78 = (long *******)uStack_291c;
                      uStack_2a70 = uStack_2914;
                      FUN_108359624(&pppppplStack_29e8,&ppppppplStack_2930,&pppppplStack_2c90,
                                    &uStack_2a80,(ulong)ppppppplVar13 & 0xffffffff);
                      pppppplVar29 = pppppplStack_29d8;
                      pppppplStack_29d8 = pppppplStack_29e8;
                      pppppplStack_29e8 = (long ******)0x0;
                      func_0x00010835be9c(pppppplVar29);
                      func_0x000106f47224(&pppppplStack_29e8);
                      func_0x00010835c150(&ppppppplStack_29e0);
                      ppppppplStack_29f0 = (long *******)0x0;
                      ppppppplStack_29f8 = (long *******)0x0;
                      FUN_10835bca8(&uStack_2a80,&pppppplStack_2960);
                      FUN_1083578dc(&ppppppplStack_2988,&uStack_2a80,&ppppppplStack_29f8);
                      iStack_1bb0 = iStack_1bb0 + 1;
                      *(int *)(lStack_1bd0 + 0x58) = *(int *)(lStack_1bd0 + 0x58) + 1;
                      uStack_2a78 = (long *******)uStack_2980;
                      uStack_2a80 = ppppppplStack_2988;
                      uStack_2a68 = uStack_2970;
                      uStack_2a70 = uStack_2978;
                      uStack_2a60 = uStack_2968;
                      FUN_10833e2b0(&uStack_2810,&uStack_2a80);
                      uStack_2a78 = ppppppplStack_29f0;
                      uStack_2a80 = ppppppplStack_29f8;
                      FUN_10833ea80(&uStack_2810,&uStack_2a80,&ppppppplStack_29e0);
                      func_0x00010833c334(&uStack_2810);
                      fVar38 = fStack_28b8;
                      pppppplVar37 = pppppplStack_2948;
                      pppppplVar29 = pppppplStack_2950;
                      if (bVar9) {
                        uVar25 = 0;
                        if (pppppplVar31[10] != (long *****)0x0) {
                          do {
                            func_0x00010835c110();
                            uVar25 = extraout_x8_05;
                          } while (extraout_w11_02 != 0);
                        }
                        uStack_2a4c = 0;
                        uStack_2a50 = 0;
                        uStack_2a68 = 0;
                        uStack_2a70 = 0;
                        uStack_2a58 = 0;
                        uStack_2a54 = 0;
                        uStack_2a60 = 0;
                        uStack_2a78 = (long *******)0x0;
                        uStack_2a80 = (long *******)0x0;
                        uStack_2a44 = 0x3f800000;
                        uStack_2a3c = 0x40800000;
                        uStack_2a00 = uVar25;
                        func_0x00010835c3b8(&uStack_2a80);
                        func_0x00010835c2d8();
                        uVar2 = uStack_2a00;
                        uVar25 = uStack_2a68;
                        uStack_2a00 = 0;
                        uStack_2838 = 0;
                        uStack_2a68 = uVar2;
                        func_0x00010835be78(uVar25);
                        FUN_108115b2c(&uStack_2838);
                        func_0x00010835c150(&uStack_2a80);
                        iVar27 = (int)pppppplVar29;
                        uStack_2828 = pppppplVar29;
                        iVar24 = (int)((ulong)pppppplVar29 >> 0x20) + 1;
                        iVar26 = (int)pppppplVar37;
                        uStack_2820 = (long *******)CONCAT44(iVar24,iVar26);
                        func_0x00010835c0f0();
                        iVar1 = (int)((ulong)pppppplVar37 >> 0x20) + -1;
                        uStack_2828 = (long ******)CONCAT44(iVar1,iVar27);
                        uStack_2820 = (long *******)pppppplVar37;
                        func_0x00010835c0f0();
                        uStack_2828 = (long ******)CONCAT44(iVar24,iVar27);
                        uStack_2820 = (long *******)CONCAT44(iVar1,iVar27 + 1);
                        func_0x00010835c0f0();
                        uStack_2828 = (long ******)CONCAT44(iVar24,iVar26 + -1);
                        uStack_2820 = (long *******)CONCAT44(iVar1,iVar26);
                        func_0x00010835c0f0();
                        FUN_108375e94(&uStack_2a80);
                        FUN_108115b2c(&uStack_2a00);
                        puVar32 = (undefined8 *)((ulong)puVar32 & 0xffffffff);
                      }
                      else {
                        uVar8 = iVar10 == 3;
                        if (!(bool)uVar8) {
                          fStack_2d00 = fStack_28b4;
                          FUN_10835bca8(&fStack_2a10,&pppppplStack_2950);
                          fVar42 = fStack_28bc;
                          fVar44 = fStack_2a08;
                          ppppppplStack_2cd0 = (long *******)CONCAT44(fStack_28bc,uStack_28c0);
                          uStack_2a78 = (long *******)CONCAT44(uStack_2a78._4_4_,fVar38);
                          puStack_2818 = &uStack_2810;
                          uStack_2828 = (long ******)&puStack_2818;
                          uStack_2820 = (long *******)&ppppppplStack_29e0;
                          fStack_2ce4 = fStack_2a0c;
                          fStack_2ce0 = fStack_2a10;
                          fVar39 = fStack_2a10 + 1.0;
                          fVar48 = fStack_2a0c + 1.0;
                          uStack_2838 = CONCAT44(fVar48,fVar39);
                          fVar40 = fStack_2a08 + -1.0;
                          fStack_2d04 = fStack_2a04;
                          fVar45 = fStack_2a04 + -1.0;
                          uStack_2840 = 0;
                          uStack_2848 = 0;
                          uStack_2a80 = ppppppplStack_2cd0;
                          fStack_2830 = fVar40;
                          fStack_282c = fVar45;
                          FUN_1083578dc(&ppppppplStack_2988,&uStack_2838,&uStack_2848);
                          uVar8 = iVar10 - 1U == 1;
                          fVar46 = fVar39;
                          if (iVar10 - 1U < 2) {
                            uStack_2a80._0_4_ = (float)uStack_2838 + 0.5;
                            uStack_2a80._4_4_ = (float)((ulong)uStack_2838 >> 0x20) + 0.5;
                            uStack_2a78._0_4_ = fStack_2830 + -0.5;
                            uStack_2a78._4_4_ = fStack_282c + -0.5;
                            FUN_1083578dc(&ppppppplStack_2988,&uStack_2a80,&uStack_2a80);
                            fVar42 = uStack_2a80._4_4_ + -0.5;
                            ppppppplStack_2cd0 =
                                 (long *******)CONCAT44(fVar42,(float)uStack_2a80 + -0.5);
                            fVar38 = (float)uStack_2a78 + 0.5;
                            fStack_2d00 = uStack_2a78._4_4_ + 0.5;
                            uStack_2a78 = (long *******)CONCAT44(fStack_2d00,fVar38);
                            uVar8 = iVar10 == 1;
                            uStack_2a80 = ppppppplStack_2cd0;
                            if ((bool)uVar8) {
                              fVar44 = fVar39;
                              fVar46 = fVar40 + 1.0;
                              fStack_2d04 = fVar48;
                              fStack_2ce4 = fVar45;
                              fStack_2ce0 = fVar40;
                            }
                          }
                          uVar41 = uStack_2848._4_4_;
                          uVar43 = uStack_2840._4_4_;
                          fStack_2858 = SUB84(ppppppplStack_2cd0,0);
                          fStack_2854 = (float)uStack_2848._4_4_;
                          fStack_2850 = fStack_2858 + 1.0;
                          fStack_284c = (float)uStack_2840._4_4_;
                          fStack_2868 = fStack_2ce0;
                          fStack_2864 = fVar48;
                          fStack_2860 = fVar46;
                          fStack_285c = fVar45;
                          func_0x00010835c0e0();
                          fVar46 = fVar38 + -1.0;
                          fStack_2854 = (float)uVar41;
                          fStack_284c = (float)uVar43;
                          fVar47 = fVar44 + -1.0;
                          fStack_2868 = fVar47;
                          fStack_2864 = fVar48;
                          fStack_2860 = fVar44;
                          fStack_285c = fVar45;
                          fStack_2858 = fVar46;
                          fStack_2850 = fVar38;
                          func_0x00010835c0e0();
                          uVar41 = (undefined4)uStack_2848;
                          uVar43 = (undefined4)uStack_2840;
                          fStack_2858 = (float)(undefined4)uStack_2848;
                          fStack_284c = fVar42 + 1.0;
                          fStack_2850 = (float)(undefined4)uStack_2840;
                          fStack_2864 = fStack_2ce4;
                          fStack_285c = fStack_2ce4 + 1.0;
                          fStack_2868 = fVar39;
                          fStack_2860 = fVar40;
                          fStack_2854 = fVar42;
                          func_0x00010835c0e0();
                          fVar38 = fStack_2d00 + -1.0;
                          fStack_2858 = (float)uVar41;
                          fStack_2850 = (float)uVar43;
                          fStack_284c = fStack_2d00;
                          fVar44 = fStack_2d04 + -1.0;
                          fStack_285c = fStack_2d04;
                          fStack_2868 = fVar39;
                          fStack_2864 = fVar44;
                          fStack_2860 = fVar40;
                          fStack_2854 = fVar38;
                          func_0x00010835c0e0();
                          FUN_10835bd5c(ppppppplStack_2cd0,fVar42,fStack_2ce0,fStack_2ce4,
                                        &uStack_2828);
                          FUN_10835bd5c(fVar46,fVar42,fVar47,fStack_2ce4,&uStack_2828);
                          FUN_10835bd5c(fVar46,fVar38,fVar47,fVar44,&uStack_2828);
                          FUN_10835bd5c(ppppppplStack_2cd0,fVar38,fStack_2ce0,fVar44,&uStack_2828);
                        }
                      }
                      FUN_108375e94(&ppppppplStack_29e0);
                      FUN_108358e40(&uStack_2a80,&uStack_2810);
                      FUN_10833de08(&ppppppplStack_2930,&uStack_2a80);
                      FUN_1083414c4(&uStack_2a80);
                      iStack_290c = iStack_2cdc;
                      uStack_28a8 = CONCAT44(uStack_2934,uStack_2938);
                      pppppplVar37 = (long ******)CONCAT44(uStack_293c,uStack_2940);
                      pppppplVar23 = (long ******)&pppppplStack_2950;
                      uStack_28b0 = pppppplVar37;
                      FUN_10835bca8(&uStack_28c0);
                      bVar9 = false;
                    }
                    else {
                      func_0x00010835c1f4();
                    }
                    func_0x00010835bc64(&uStack_2810);
                    if (cVar3 == '\0') goto LAB_10835b72c;
                  } while ((int)puVar32 != 0 || (int)puVar34 != 0);
                  if (bVar7) {
                    func_0x000108357cb4(&uStack_2810,&ppppppplStack_2930);
                    func_0x00010835c2f0();
                    func_0x00010835c1d4();
                  }
                  iStack_290c = iVar10;
                  func_0x00010835c340(&uStack_2a80);
                  FUN_108359b28(&uStack_2810,&uStack_28b0,&uStack_2a80);
                  FUN_108358358(appppplStack_2908,&uStack_2810);
                  ppppppplStack_2b40 = ppppppplStack_2930;
                  ppppplStack_28d0 = ppppplStack_2878;
                  pppppplStack_28d8 = pppppplStack_2880;
                  ppppppplStack_2930 = (long *******)0x0;
                  func_0x00010835c2fc(auStack_2b38,&iStack_2928);
                  uStack_2af0 = uStack_28e0;
                  uStack_28e0 = 0;
                  ppppplStack_2ae0 = ppppplStack_2878;
                  pppppplStack_2ae8 = pppppplStack_2880;
                  pppppplVar37 = pppppplStack_2880;
                }
                else {
                  uStack_2810 = (long *******)CONCAT44(fVar44,fVar42);
                  uVar35 = (uint)&uStack_2810;
                  pppppplVar23 = appppplStack_2908;
                  pppppplVar37 = pppppplVar29;
                  FUN_1083576dc();
                  if (((uint)pppppplVar19 & 0x7fffffff) < 0x7f800000) {
                    uVar33 = uVar35;
                    FUN_108359a50();
                    uVar35 = uVar33;
                  }
                  else {
                    uVar33 = 0x7fffffff;
                  }
                  if (((uint)pppppplVar37 & 0x7fffffff) < 0x7f800000) {
                    FUN_108359a50();
                  }
                  else {
                    uVar35 = 0x7fffffff;
                    pppppplVar37 = pppppplVar19;
                  }
                  uVar8 = uVar33 <= uVar11 || uVar11 == 0;
                  if ((uVar33 <= uVar11 || uVar11 == 0) && (uVar12 == 0 || uVar35 <= uVar12))
                  goto LAB_10835af14;
                  pppppplVar23 = (long ******)&pppppplStack_2c90;
                  func_0x00010835c1b0(&uStack_2810,&ppppppplStack_2930,pppppplVar23,pppppppuVar20,
                                      ppppppplVar13);
                  func_0x00010835c2f0();
                  func_0x00010835c1d4();
                  if (ppppppplStack_2930 != (long *******)0x0) {
                    if (!bVar9) {
                      iStack_290c = iVar10;
                    }
                    goto LAB_10835af14;
                  }
                  func_0x00010835c1f4();
                }
LAB_10835b72c:
                FUN_1083414c4(&ppppppplStack_2930);
                goto LAB_10835a9ec;
              }
            }
            func_0x00010835c1f4();
          }
        }
LAB_10835a9ec:
        fVar38 = SUB84(pppppplVar37,0);
        FUN_108341670(&pppppplStack_2c90);
        if (ppppppplStack_2b40 == (long *******)0x0) {
          func_0x00010835c140();
        }
        else {
          fVar42 = *(float *)pppppplVar22;
          func_0x00010835c1fc();
          func_0x00010835c158();
          fVar42 = (1.0 / afStack_2b18[0]) * fVar42;
          if (fVar42 <= fVar38) {
            fVar38 = fVar42;
          }
          fVar44 = *(float *)((long)pppppplVar22 + 4);
          fVar42 = fVar38;
          func_0x00010835c1fc();
          func_0x00010835c158();
          iVar10 = *(int *)((long)ppppppplStack_2b40 + 0x14) -
                   *(int *)((long)ppppppplStack_2b40 + 0xc);
          fVar44 = (1.0 / fStack_2b08) * fVar44;
          if (fVar44 <= fVar42) {
            fVar42 = fVar44;
          }
          uStack_2c88 = CONCAT44(*(int *)(ppppppplStack_2b40 + 3) - *(int *)(ppppppplStack_2b40 + 2)
                                 ,iVar10);
          pppppplStack_2c90 = (long ******)0x0;
          iStack_2928 = 0;
          iStack_2924 = 0;
          ppppppplStack_2930 = (long *******)0x0;
          uVar8 = iStack_2b1c - 1U == 1;
          if (iStack_2b1c - 1U < 2) {
            ppppppplStack_2930 = (long *******)0x0;
            iStack_2928 = iVar10;
            iStack_2924 = *(int *)(ppppppplStack_2b40 + 3) - *(int *)(ppppppplStack_2b40 + 2);
LAB_10835aa8c:
            do {
              func_0x00010835c110();
              ppppppplStack_2988 = extraout_x8_04;
            } while (extraout_w11_01 != 0);
          }
          else {
            FUN_108357948(afStack_2b18,&ppppppplStack_2ab0,&ppppppplStack_2930);
            uStack_2a80 = (long *******)CONCAT44(fVar42 * fVar50,fVar38 * (float)uVar49);
            ppppppplVar13 = (long *******)&uStack_2a80;
            func_0x000108357874();
            uStack_2810 = ppppppplVar13;
            func_0x00010835c324(&pppppplStack_2c90);
            ppppppplVar13 = &pppppplStack_2c90;
            FUN_1083577b0(ppppppplVar13,ppppppplStack_2930,CONCAT44(iStack_2924,iStack_2928),
                          iStack_2b1c);
            iStack_2928 = (int)ppppppplStack_2930;
            iStack_2924 = (int)((ulong)ppppppplStack_2930 >> 0x20);
            bVar9 = false;
            uVar8 = true;
            bVar7 = false;
            if ((int)ppppppplVar13 < iStack_2928) {
              iVar10 = (int)((ulong)ppppppplVar13 >> 0x20);
              bVar7 = SBORROW4(iStack_2924,iVar10);
              bVar9 = iStack_2924 - iVar10 < 0;
              uVar8 = iStack_2924 == iVar10;
            }
            ppppppplStack_2930 = ppppppplVar13;
            if ((bool)uVar8 || bVar9 != bVar7) {
              func_0x00010835c140();
              goto LAB_10835ada8;
            }
            uStack_2810 = (long *******)((long)&MACH_HEADER.magic + 1);
            func_0x00010835c324(&ppppppplStack_2930);
            if (ppppppplStack_2b40 != (long *******)0x0) goto LAB_10835aa8c;
            ppppppplStack_2988 = (long *******)0x0;
          }
          iVar10 = iStack_2b1c;
          uStack_2a78 = (long *******)CONCAT44(iStack_2924,iStack_2928);
          uStack_2a80 = ppppppplStack_2930;
          ppppplVar16 = ppppplVar15;
          (*(code *)(*ppppplVar15)[3])();
          if (((ulong)ppppplVar16 & 1) == 0) {
            uVar8 = iStack_2b1c == 3 && (int)auStack_2b38[0] == 1;
            if (iStack_2b1c == 3 && (int)auStack_2b38[0] == 1) {
              FUN_1083599c0(&uStack_2810,ppppppplStack_2988);
              ppppppplVar28 = uStack_2810;
              ppppppplVar13 = ppppppplStack_2988;
              uStack_2810 = (long *******)0x0;
              ppppppplStack_2988 = ppppppplVar28;
              FUN_10835bc84(ppppppplVar13);
              FUN_1083389b0(&uStack_2810);
              func_0x00010835c3d0(&uStack_2a80);
              FUN_10821a06c();
              iVar10 = 0;
            }
          }
          ppppppplVar13 = ppppppplStack_2988;
          if (ppppppplStack_2988 != (long *******)0x0) {
            do {
              func_0x00010835c100();
            } while (extraout_w10_00 != 0);
          }
          ppppppplStack_2c98 = ppppppplVar13;
          FUN_1083415b0();
          uStack_2810 = (long *******)0x0;
          uStack_2808 = ppppppplVar13;
          (*(code *)(*ppppplVar15)[4])
                    (&ppppppplStack_29e0,fVar38,fVar42,ppppplVar15,&ppppppplStack_2c98,&uStack_2810,
                     iVar10,&uStack_2a80);
          ppppppplVar13 = ppppppplStack_2988;
          ppppppplStack_2988 = ppppppplStack_29e0;
          ppppppplStack_29e0 = (long *******)0x0;
          FUN_10835bc84(ppppppplVar13);
          FUN_1083389b0(&ppppppplStack_29e0);
          FUN_1083389b0(&ppppppplStack_2c98);
          ppppppplVar13 = ppppppplStack_2988;
          if (ppppppplStack_2988 == (long *******)0x0) {
            func_0x00010835c140();
          }
          else {
            ppppppplStack_2988 = (long *******)0x0;
            ppppppplStack_2ca0 = ppppppplVar13;
            uStack_2810 = ppppppplStack_2930;
            func_0x00010835c3b0();
            FUN_1083389b0(&ppppppplStack_2ca0);
            if ((iStack_2b1c == 3) || (iStack_2b1c == 0)) {
              func_0x000108357cb4(&uStack_2810,ppppppplVar14);
              FUN_10833de08(ppppppplVar14,&uStack_2810);
              func_0x00010835c1d4();
            }
            FUN_108358358(ppppppplVar14 + 5,afStack_2b18);
            uVar8 = iStack_2b1c == 3;
            if ((bool)uVar8) {
              pppppplVar22 = *ppppppplVar14;
              FUN_1083415b0();
              ppppppplStack_29e0 = (long *******)0x0;
              ppppppplVar13 = ppppppplVar14 + 5;
              ppppppplVar28 = (long *******)&ppppppplStack_29e0;
              pppppplStack_29d8 = pppppplVar22;
              FUN_1083578b0();
              uStack_2800 = 1;
              uStack_2810 = ppppppplVar13;
              uStack_2808 = ppppppplVar28;
              func_0x00010835c318();
              ppppppplStack_2ab0 = ppppppplVar13;
              ppppppplStack_2aa8 = ppppppplVar28;
            }
            ppppppplVar14[0xc] = (long ******)ppppppplStack_2aa8;
            ppppppplVar14[0xb] = (long ******)ppppppplStack_2ab0;
            *(int *)((long)ppppppplVar14 + 0x24) = iStack_2b1c;
          }
          FUN_1083389b0(&ppppppplStack_2988);
        }
LAB_10835ada8:
        ppppppplVar14 = (long *******)&ppppppplStack_2b40;
      }
      else {
        uVar8 = *(int *)(unaff_x20 + 0x15) == 0;
        if (*(int *)(unaff_x20 + 0x15) < 1) goto LAB_10835b7c8;
        func_0x00010835c1b0(&uStack_2810,unaff_x20[0x14],*unaff_x20,ppppppplStack_2ac0,
                            ppppppplStack_2ab8);
        if (uStack_2810 == (long *******)0x0) {
          func_0x00010835c140();
        }
        else {
          iStack_2928 = (int)ppppppplStack_2aa8;
          iStack_2924 = (int)((ulong)ppppppplStack_2aa8 >> 0x20);
          ppppppplStack_2930 = ppppppplStack_2ab0;
          pppppplStack_2c90 =
               (long ******)
               ((ulong)(uint)-(int)pppppplStack_27b8 -
               ((ulong)pppppplStack_27b8 & 0xffffffff00000000));
          FUN_1082889d8(&ppppppplStack_2930,&pppppplStack_2c90);
          uVar41 = *(undefined4 *)pppppplVar22;
          uVar43 = *(undefined4 *)((long)pppppplVar22 + 4);
          ppppppplVar28 = uStack_2810;
          if (uStack_2810 != (long *******)0x0) {
            do {
              func_0x00010835c100();
            } while (extraout_w10 != 0);
          }
          ppppppplStack_2ad0 = ppppppplVar28;
          FUN_1083415b0();
          uStack_2a80 = (long *******)0x0;
          auStack_2b38[0] = CONCAT44(iStack_2924,iStack_2928);
          ppppppplStack_2b40 = ppppppplStack_2930;
          uStack_2a78 = ppppppplVar28;
          (*(code *)(*ppppplVar15)[4])
                    (auStack_2ac8,uVar41,uVar43,ppppplVar15,&ppppppplStack_2ad0,&uStack_2a80,3,
                     &ppppppplStack_2b40);
          ppppppplStack_29e0 = ppppppplVar13;
          FUN_10833ddc8(&pppppplStack_2c90,auStack_2ac8,&ppppppplStack_29e0);
          FUN_10833de08(&uStack_2810,&pppppplStack_2c90);
          FUN_1083414c4(&pppppplStack_2c90);
          FUN_1083389b0(auStack_2ac8);
          FUN_1083389b0(&ppppppplStack_2ad0);
          ppppppplVar13 = uStack_2810;
          uStack_2810 = (long *******)0x0;
          *ppppppplVar14 = (long ******)ppppppplVar13;
          func_0x00010835c2fc(ppppppplVar14 + 1,&uStack_2808);
          pppppplVar22 = pppppplStack_27c0;
          pppppplStack_27c0 = (long ******)0x0;
          ppppppplVar14[10] = pppppplVar22;
          ppppppplVar14[0xc] = pppppplStack_27b0;
          ppppppplVar14[0xb] = pppppplStack_27b8;
        }
        ppppppplVar14 = (long *******)&uStack_2810;
      }
      FUN_1083414c4(ppppppplVar14);
    }
    func_0x00010835c0b8(uStack_1b48);
    if ((bool)uVar8) {
      func_0x00010835c458(FUN_10835a65c);
      return (long *******)pcStack_1a98;
    }
  }
  ___stack_chk_fail();
LAB_10835b7c8:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10835b7cc);
  (*pcVar6)();
}



/* Entry: 10835a4e8; end: 10835a65b;  */

/* WARNING: Type propagation algorithm not settling */

long ******* FUN_10835a4e8(long *******param_1)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined1 uVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  long *******ppppppplVar13;
  long *******ppppppplVar14;
  long *****ppppplVar15;
  long *****ppppplVar16;
  long ******pppppplVar17;
  long ****pppplVar18;
  long ******pppppplVar19;
  undefined8 *******pppppppuVar20;
  int iVar21;
  long ******pppppplVar22;
  long *******ppppppplVar23;
  long ******pppppplVar24;
  int iVar25;
  long ******extraout_x8;
  long ******extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  long *******extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 uVar26;
  int iVar27;
  int extraout_w10;
  int extraout_w10_00;
  int iVar28;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  long *******unaff_x19;
  long unaff_x20;
  long *******ppppppplVar29;
  long ******pppppplVar30;
  long lVar31;
  long ******pppppplVar32;
  undefined8 *puVar33;
  uint uVar34;
  undefined8 *puVar35;
  uint uVar36;
  long *******ppppppplVar37;
  long ******pppppplVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined4 uVar42;
  float fVar43;
  undefined4 uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined8 uVar50;
  float fVar51;
  float fStack_1fa4;
  float fStack_1fa0;
  float fStack_1f84;
  float fStack_1f80;
  int iStack_1f7c;
  long *******ppppppplStack_1f70;
  long *******ppppppplStack_1f40;
  long *******ppppppplStack_1f38;
  long ******pppppplStack_1f30;
  undefined8 uStack_1f28;
  long *******ppppppplStack_1e68;
  long *******ppppppplStack_1e60;
  long *******ppppppplStack_1de0;
  undefined8 auStack_1dd8 [3];
  int iStack_1dbc;
  float afStack_1db8 [4];
  float fStack_1da8;
  undefined8 uStack_1d90;
  long ******pppppplStack_1d88;
  long *****ppppplStack_1d80;
  long *******ppppppplStack_1d70;
  undefined1 auStack_1d68 [8];
  long *******ppppppplStack_1d60;
  long *******ppppppplStack_1d58;
  long *******ppppppplStack_1d50;
  long *******ppppppplStack_1d48;
  long *******ppppppplStack_1d40;
  long *******ppppppplStack_1d38;
  long ******pppppplStack_1d28;
  undefined8 uStack_1d20;
  undefined8 uStack_1d18;
  undefined8 uStack_1d10;
  undefined8 uStack_1d08;
  undefined8 uStack_1d00;
  undefined4 uStack_1cf8;
  undefined4 uStack_1cf4;
  undefined4 uStack_1cf0;
  undefined8 uStack_1cec;
  undefined8 uStack_1ce4;
  undefined8 uStack_1cdc;
  float fStack_1cb0;
  float fStack_1cac;
  float fStack_1ca8;
  float fStack_1ca4;
  undefined8 uStack_1ca0;
  long *******ppppppplStack_1c98;
  long *******ppppppplStack_1c90;
  long ******pppppplStack_1c88;
  long *******ppppppplStack_1c80;
  long ******pppppplStack_1c78;
  undefined8 uStack_1c70;
  undefined8 uStack_1c68;
  undefined8 uStack_1c60;
  undefined4 uStack_1c58;
  undefined4 uStack_1c54;
  undefined4 uStack_1c50;
  undefined8 uStack_1c4c;
  undefined8 uStack_1c44;
  undefined8 uStack_1c3c;
  long *******ppppppplStack_1c28;
  undefined8 uStack_1c20;
  undefined8 uStack_1c18;
  undefined8 uStack_1c10;
  undefined8 uStack_1c08;
  long ******pppppplStack_1c00;
  long ******pppppplStack_1bf8;
  long ******pppppplStack_1bf0;
  long ******pppppplStack_1be8;
  undefined4 uStack_1be0;
  undefined4 uStack_1bdc;
  undefined4 uStack_1bd8;
  undefined4 uStack_1bd4;
  long *******ppppppplStack_1bd0;
  int iStack_1bc8;
  int iStack_1bc4;
  undefined8 uStack_1bbc;
  undefined8 uStack_1bb4;
  int iStack_1bac;
  long *****appppplStack_1ba8 [5];
  undefined8 uStack_1b80;
  long ******pppppplStack_1b78;
  long *****ppppplStack_1b70;
  undefined4 uStack_1b60;
  float fStack_1b5c;
  float fStack_1b58;
  float fStack_1b54;
  undefined8 uStack_1b50;
  undefined8 uStack_1b48;
  undefined8 *******pppppppuStack_1b40;
  long *******ppppppplStack_1b38;
  uint uStack_1b28;
  uint uStack_1b24;
  long ******pppppplStack_1b20;
  long *****ppppplStack_1b18;
  float fStack_1b08;
  float fStack_1b04;
  float fStack_1b00;
  float fStack_1afc;
  float fStack_1af8;
  float fStack_1af4;
  float fStack_1af0;
  float fStack_1aec;
  undefined8 uStack_1ae8;
  undefined8 uStack_1ae0;
  undefined8 uStack_1ad8;
  float fStack_1ad0;
  float fStack_1acc;
  undefined8 uStack_1ac8;
  undefined8 uStack_1ac0;
  undefined8 *puStack_1ab8;
  undefined8 uStack_1ab0;
  undefined8 uStack_1aa8;
  undefined1 uStack_1aa0;
  long ******pppppplStack_1a60;
  long ******pppppplStack_1a58;
  long ******pppppplStack_1a50;
  long lStack_e70;
  int iStack_e50;
  char cStack_e08;
  undefined8 uStack_df8;
  long *******ppppppplStack_df0;
  long *******ppppppplStack_de8;
  undefined1 *puStack_de0;
  code *pcStack_dd8;
  code *pcStack_d38;
  long *******ppppppplStack_d28;
  long *******ppppppplStack_d20;
  long *******ppppppplStack_d18;
  long *******ppppppplStack_d10;
  undefined8 uStack_d08;
  undefined1 uStack_d00;
  long lStack_d0;
  char cStack_68;
  undefined8 uStack_48;
  
  ppppppplVar13 = param_1;
  func_0x00010835c0cc();
  iVar10 = *(int *)(ppppppplVar13 + 0x15);
  bVar9 = iVar10 == 1;
  if (bVar9) {
    pppppplVar22 = param_1[0x14];
    func_0x00010835c0b8(extraout_x8_01);
    if (bVar9) {
      func_0x000108341e84();
      pppppplVar30 = (long ******)0x0;
      if (*pppppplVar22 != (long *****)0x0) {
        do {
          func_0x000108341c8c();
          pppppplVar30 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      *unaff_x19 = pppppplVar30;
      _memcpy(unaff_x19 + 1,unaff_x20 + 8,0x48);
      pppppplVar22 = (long ******)0x0;
      if (*(long *)(unaff_x20 + 0x50) != 0) {
        do {
          func_0x000108341c8c();
          pppppplVar22 = extraout_x8_00;
        } while (extraout_w11_00 != 0);
      }
      unaff_x19[10] = pppppplVar22;
      pppppplVar22 = *(long *******)(unaff_x20 + 0x58);
      unaff_x19[0xc] = *(long *******)(unaff_x20 + 0x60);
      unaff_x19[0xb] = pppppplVar22;
      return unaff_x19;
    }
  }
  else {
    ppppppplStack_d18 = param_1;
    uStack_48 = extraout_x8_01;
    if (iVar10 < 1) {
      ppppppplStack_d10 = (long *******)0x0;
      uStack_d08 = 0;
    }
    else {
      ppppppplVar13 = (long *******)&ppppppplStack_d18;
      uVar50 = 0;
      func_0x00010835c08c();
      ppppppplVar29 = (long *******)0x1;
      ppppppplStack_d10 = ppppppplVar13;
      uStack_d08 = uVar50;
      while (iVar25 = (int)ppppppplVar29, iVar10 != iVar25) {
        ppppppplVar13 = (long *******)&ppppppplStack_d18;
        func_0x00010835c08c();
        ppppppplStack_d28 = ppppppplVar13;
        ppppppplStack_d20 = ppppppplVar29;
        FUN_10838eae0(&ppppppplStack_d10,&ppppppplStack_d28);
        ppppppplVar29 = (long *******)(ulong)(iVar25 + 1);
      }
    }
    uStack_d00 = 1;
    ppppppplVar13 = (long *******)&ppppppplStack_d10;
    ppppppplVar29 = param_1;
    FUN_10835a390();
    pppppplVar22 = *param_1;
    ppppppplStack_d28 = ppppppplVar29;
    ppppppplStack_d20 = ppppppplVar13;
    func_0x00010835c160(&ppppppplStack_d10,pppppplVar22,&ppppppplStack_d28,1,0);
    uVar7 = cStack_68 == '\x01';
    if ((bool)uVar7) {
      pppppplVar30 = param_1[0x14];
      for (lVar31 = (long)*(int *)(param_1 + 0x15) * 0x98; lVar31 != 0; lVar31 = lVar31 + -0x98) {
        pppppplVar22 = *param_1;
        FUN_108359104(pppppplVar30,pppppplVar22,*(undefined8 *)(lStack_d0 + 8),1,0);
        pppppplVar30 = pppppplVar30 + 0x13;
      }
    }
    func_0x00010835c1a8(&ppppppplStack_d10);
    ppppppplVar13 = (long *******)&ppppppplStack_d10;
    func_0x00010835bc64();
    func_0x00010835c0b8(uStack_48);
    if ((bool)uVar7) {
      return ppppppplVar13;
    }
  }
  uVar7 = 0;
  ___stack_chk_fail();
  ppppppplVar29 = (long *******)&ppppppplStack_d10;
  func_0x00010835bc64();
  func_0x00010835c120();
  pcStack_d38 = FUN_10835a65c;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  ppppppplVar14 = ppppppplVar29;
  func_0x00010835c0cc();
  ppppplVar15 = **ppppppplVar14;
  ppppppplStack_de8 = (long *******)extraout_x8_02;
  (*(code *)(*ppppplVar15)[6])();
  pppppplVar30 = (long ******)(ulong)*(uint *)((long)pppppplVar22 + 4);
  (*(code *)(*ppppplVar15)[2])(*(undefined4 *)pppppplVar22);
  if (ppppplVar15 == (long *****)0x0) {
    func_0x00010835c0b8(ppppppplStack_de8);
    if ((bool)uVar7) {
      pcVar6 = FUN_10835a65c;
      ppppppplVar14 = ppppppplVar13;
      func_0x00010835c458(ppppppplVar13);
      uStack_df8 = 0;
      ppppppplStack_df0 = ppppppplVar29;
      ppppppplStack_de8 = ppppppplVar13;
      puStack_de0 = &stack0xfffffffffffffff0;
      pcStack_dd8 = pcVar6;
      FUN_1083413f4();
      func_0x000108341fb4();
      return ppppppplVar14;
    }
  }
  else {
    uVar50 = NEON_fmov(0x40400000,4);
    fVar51 = (float)((ulong)uVar50 >> 0x20);
    uStack_1ab0 = (long *******)
                  CONCAT44((float)((ulong)*pppppplVar22 >> 0x20) * fVar51,
                           SUB84(*pppppplVar22,0) * (float)uVar50);
    pppppplVar38 = (long ******)&uStack_1ab0;
    func_0x000108357874();
    pppppplStack_1d28 = pppppplVar38;
    if (*(int *)(ppppppplVar29 + 0x15) < 1) goto LAB_10835b7c8;
    ppppppplStack_1d38 = (long *******)ppppppplVar29[0x14][0xc];
    ppppppplStack_1d40 = (long *******)ppppppplVar29[0x14][0xb];
    ppppppplVar14 = (long *******)&ppppppplStack_1d40;
    ppppppplVar23 = &pppppplStack_1d28;
    FUN_10833e0cc();
    uStack_1aa8 = ppppppplStack_1d38;
    uStack_1ab0 = ppppppplStack_1d40;
    uStack_1aa0 = 1;
    func_0x00010835c318();
    bVar9 = false;
    uVar7 = true;
    bVar8 = false;
    if ((int)ppppppplVar14 < (int)ppppppplVar23) {
      iVar10 = (int)((ulong)ppppppplVar14 >> 0x20);
      iVar25 = (int)((ulong)ppppppplVar23 >> 0x20);
      bVar8 = SBORROW4(iVar25,iVar10);
      bVar9 = iVar25 - iVar10 < 0;
      uVar7 = iVar25 == iVar10;
    }
    ppppppplStack_1d50 = ppppppplVar14;
    ppppppplStack_1d48 = ppppppplVar23;
    if ((bool)uVar7 || bVar9 != bVar8) {
      func_0x00010835c140();
    }
    else {
      ppppppplVar37 = ppppppplVar14;
      ppppppplStack_1d60 = ppppppplVar14;
      ppppppplStack_1d58 = ppppppplVar23;
      FUN_10833e0cc(&ppppppplStack_1d60,&pppppplStack_1d28);
      fVar39 = SUB84(ppppppplVar37,0);
      ppppplVar16 = **ppppppplVar29;
      (*(code *)(*ppppplVar16)[7])();
      if ((int)ppppplVar16 == 0) {
        fVar45 = *(float *)pppppplVar22;
        func_0x00010835c1fc();
        func_0x00010835c158();
        fVar43 = 1.0;
        if (fVar39 < fVar45) {
          func_0x00010835c1fc();
          func_0x00010835c158();
          pppppplVar30 = (long ******)(ulong)(uint)*(float *)pppppplVar22;
          fVar43 = fVar39 / *(float *)pppppplVar22;
        }
        fVar47 = *(float *)((long)pppppplVar22 + 4);
        func_0x00010835c1fc();
        func_0x00010835c158();
        fVar45 = 1.0;
        if (fVar39 < fVar47) {
          func_0x00010835c1fc();
          func_0x00010835c158();
          pppppplVar30 = (long ******)(ulong)(uint)*(float *)((long)pppppplVar22 + 4);
          fVar45 = fVar39 / *(float *)((long)pppppplVar22 + 4);
        }
        uVar7 = *(int *)(ppppppplVar29 + 0x15) == 0;
        if (*(int *)(ppppppplVar29 + 0x15) < 1) goto LAB_10835b7c8;
        pppppplVar32 = ppppppplVar29[0x14];
        FUN_1083415ec(&pppppplStack_1f30,*ppppppplVar29);
        ppppppplStack_1e60 = ppppppplStack_1d58;
        ppppppplStack_1e68 = ppppppplStack_1d60;
        ppppplVar16 = ppppplVar15;
        (*(code *)(*ppppplVar15)[3])();
        ppppplStack_1b18 = pppppplVar32[0xc];
        pppppplVar38 = (long ******)pppppplVar32[0xb];
        pppppplStack_1b20 = pppppplVar38;
        if (*pppppplVar32 == (long *****)0x0) {
LAB_10835a9e8:
          func_0x00010835c1f4();
        }
        else {
          pppppplVar17 = (long ******)&pppppplStack_1b20;
          func_0x00010821b838(pppppplVar17,&ppppppplStack_1e68);
          iVar10 = 0;
          if (0.0 < fVar43) {
            iVar10 = (int)pppppplVar17;
          }
          uVar7 = iVar10 == 1;
          if ((!(bool)uVar7) || (uVar7 = fVar45 == 0.0, fVar45 <= 0.0)) goto LAB_10835a9e8;
          pppppplVar17 = pppppplVar32 + 5;
          FUN_108358b38(pppppplVar17,&uStack_1b28);
          pppppplVar19 = pppppplVar32;
          func_0x000108358b60(pppppplVar32,&ppppppplStack_1e68,3);
          if ((int)pppppplVar17 == 0) {
            uVar36 = 0;
          }
          else {
            bVar9 = ((ulong)pppppplVar19 & 4) == 0;
            uVar36 = (uint)bVar9;
            iVar10 = 0;
            if (bVar9) {
              iVar10 = (int)ppppplVar16;
            }
            if (iVar10 == 1) {
              uVar36 = (uint)(((ulong)pppppplVar19 & 2) == 0);
            }
          }
          pppplVar18 = (*pppppplVar32)[4];
          if (pppplVar18 == (long ****)0x0) {
            FUN_108343afc();
          }
          uVar11 = (uint)pppplVar18;
          if (((uVar36 == 0) || (pppppplVar32[10] != (long *****)0x0)) ||
             (*(int *)(*pppppplVar32 + 5) != *(int *)(pppppplStack_1f30 + 5))) {
            uVar34 = 1;
          }
          else {
            FUN_108343f98();
            uVar34 = uVar11 ^ 1;
          }
          FUN_108359a50(fVar43);
          pppppplVar38 = (long ******)(ulong)(uint)fVar45;
          uVar12 = uVar11;
          FUN_108359a50();
          uVar7 = uVar11 == 0 && uVar12 == 0;
          if ((uVar11 == 0 && uVar12 == 0) && ((uVar34 & 1) == 0)) {
            if (((uint)pppppplVar19 >> 1 & 1) == 0) {
              func_0x00010835c368(&ppppppplStack_1de0,pppppplVar32,&uStack_1b28,&pppppplStack_1b20);
            }
            else {
              FUN_108341774(&ppppppplStack_1de0,pppppplVar32);
              ppppplStack_1d80 = ppppplStack_1b18;
              pppppplStack_1d88 = pppppplStack_1b20;
              pppppplVar38 = pppppplStack_1b20;
            }
          }
          else {
            if ((uVar36 & ((uint)pppppplVar19 & 2) >> 1) == 1) {
              pppppplVar19 = (long ******)(ulong)uStack_1b28;
              ppppplVar16 = (long *****)(ulong)uStack_1b24;
              func_0x00010835c3f0(*pppppplVar32);
              FUN_108219ff8();
              iVar10 = *(int *)((long)pppppplVar32 + 0x24);
              pppppppuStack_1b40 = (undefined8 *******)pppppplVar19;
              ppppppplStack_1b38 = (long *******)ppppplVar16;
              if (iVar10 == 3) {
                bVar8 = false;
                iVar10 = 0;
                bVar9 = true;
              }
              else {
                bVar9 = false;
                bVar8 = iVar10 - 1U < 2;
              }
            }
            else {
              bVar8 = false;
              bVar9 = false;
              ppppppplStack_1b38 = (long *******)ppppplStack_1b18;
              pppppppuStack_1b40 = (undefined8 *******)pppppplStack_1b20;
              iVar10 = 3;
              pppppplVar38 = pppppplStack_1b20;
            }
            pppppppuVar20 = &pppppppuStack_1b40;
            ppppppplVar29 = ppppppplStack_1e68;
            FUN_1083577b0(pppppppuVar20,ppppppplStack_1e68,ppppppplStack_1e60,iVar10);
            pppppppuStack_1b40 = pppppppuVar20;
            ppppppplStack_1b38 = ppppppplVar29;
            func_0x00010835c340(&uStack_1b50);
            fVar39 = (float)uStack_1b50;
            fVar47 = (float)uStack_1b48;
            uVar7 = (float)uStack_1b50 == (float)uStack_1b48;
            if ((float)uStack_1b50 < (float)uStack_1b48) {
              fVar40 = uStack_1b50._4_4_;
              fVar41 = uStack_1b48._4_4_;
              pppppplVar19 = (long ******)(ulong)(uint)uStack_1b48._4_4_;
              uVar7 = uStack_1b50._4_4_ == uStack_1b48._4_4_;
              pppppplVar38 = pppppplVar19;
              if (uStack_1b50._4_4_ < uStack_1b48._4_4_) {
                func_0x00010835c340(&uStack_1b60);
                pppppplVar24 = pppppplVar32;
                FUN_108341774(&ppppppplStack_1bd0);
                if ((((ulong)pppppplVar17 & 1) != 0) || (uVar11 == 0 && uVar12 == 0)) {
LAB_10835af14:
                  if (bVar8) {
                    func_0x000108359acc();
                    uStack_1ab0 = (long *******)CONCAT44(fVar40,fVar39);
                    uStack_1aa8 = (long *******)CONCAT44(fVar41,fVar47);
                    puVar33 = &uStack_1ab0;
                    func_0x000108359b1c();
                    fVar39 = (float)NEON_fminnm((int)((float)uStack_1ab0 * 0.5 +
                                                     (float)uStack_1aa8 * 0.5),0x4effffff);
                    if (fVar39 <= -2.1474835e+09) {
                      fVar39 = -2.1474835e+09;
                    }
                    iVar25 = (int)fVar39;
                    fVar39 = (float)NEON_fminnm((int)(uStack_1ab0._4_4_ * 0.5 +
                                                     uStack_1aa8._4_4_ * 0.5),0x4effffff);
                    if (fVar39 <= -2.1474835e+09) {
                      fVar39 = -2.1474835e+09;
                    }
                    iVar27 = (int)fVar39;
                    iVar1 = (int)puVar33;
                    if (iVar25 <= (int)puVar33) {
                      iVar1 = iVar25;
                    }
                    iVar28 = (int)((ulong)puVar33 >> 0x20);
                    if (iVar27 <= iVar28) {
                      iVar28 = iVar27;
                    }
                    iVar21 = (int)pppppplVar24;
                    if (iVar21 < iVar25 + 1) {
                      iVar21 = iVar25 + 1;
                    }
                    iVar25 = (int)((ulong)pppppplVar24 >> 0x20);
                    if (iVar25 < iVar27 + 1) {
                      iVar25 = iVar27 + 1;
                    }
                    FUN_108359a50(((float)iVar21 - (float)iVar1) /
                                  (float)((int)ppppppplVar29 - (int)pppppppuVar20));
                    puVar35 = puVar33;
                    FUN_108359a50(((float)iVar25 - (float)iVar28) /
                                  (float)((int)((ulong)ppppppplVar29 >> 0x20) -
                                         (int)((ulong)pppppppuVar20 >> 0x20)));
                    iStack_1f7c = 0;
                    iStack_1bac = 0;
                  }
                  else {
                    puVar33 = (undefined8 *)(ulong)uVar11;
                    puVar35 = (undefined8 *)(ulong)uVar12;
                    iStack_1f7c = iVar10;
                  }
                  do {
                    if ((int)puVar33 != 0) {
                      puVar33 = (undefined8 *)(ulong)((int)puVar33 - 1);
                    }
                    iVar25 = (int)puVar35;
                    puVar35 = (undefined8 *)(ulong)(iVar25 - 1);
                    if (iVar25 < 1) {
                      puVar35 = (undefined8 *)0x0;
                    }
                    uVar42 = (int)uStack_1b50;
                    uVar44 = (int)((ulong)uStack_1b50 >> 0x20);
                    uVar4 = (int)uStack_1b48;
                    uVar5 = (int)((ulong)uStack_1b48 >> 0x20);
                    func_0x000108359acc();
                    uStack_1bd4 = uVar5;
                    uStack_1bd8 = uVar4;
                    uStack_1bdc = uVar44;
                    uStack_1be0 = uVar42;
                    pppppplVar38 = (long ******)&uStack_1be0;
                    FUN_108341380();
                    pppppplStack_1c00 = pppppplVar38;
                    pppppplStack_1bf8 = pppppplVar24;
                    pppppplStack_1bf0 = pppppplVar38;
                    pppppplStack_1be8 = pppppplVar24;
                    if (iVar10 != 3) {
                      uStack_1ab0 = (long *******)((long)&MACH_HEADER.magic + 1);
                      func_0x00010835c324(&pppppplStack_1bf0);
                    }
                    pppppplVar24 = (long ******)&pppppplStack_1f30;
                    func_0x00010835c160(&uStack_1ab0,pppppplVar24,&pppppplStack_1bf0,iVar10 == 3,0);
                    cVar3 = cStack_e08;
                    uVar7 = cStack_e08 == '\x01';
                    if ((bool)uVar7) {
                      FUN_108359b28(&ppppppplStack_1c28,&uStack_1b50,&uStack_1be0);
                      uStack_1d18 = (long *******)uStack_1c20;
                      uStack_1d20 = ppppppplStack_1c28;
                      uStack_1d08 = uStack_1c10;
                      uStack_1d10 = uStack_1c18;
                      uStack_1d00 = uStack_1c08;
                      pppppplStack_1c78 = pppppplStack_1bf8;
                      ppppppplStack_1c80 = (long *******)pppppplStack_1c00;
                      ppppppplVar29 = (long *******)&ppppppplStack_1bd0;
                      FUN_108357e80(ppppppplVar29,&uStack_1d20,&ppppppplStack_1c80,3);
                      uStack_1c4c = 0;
                      uStack_1c50 = 0;
                      uStack_1c68 = 0;
                      uStack_1c70 = 0;
                      uStack_1c58 = 0;
                      uStack_1c54 = 0;
                      uStack_1c60 = 0;
                      pppppplStack_1c78 = (long ******)0x0;
                      ppppppplStack_1c80 = (long *******)0x0;
                      uStack_1c44 = 0x3f800000;
                      uStack_1c3c = 0x40800000;
                      uStack_1d18 = (long *******)uStack_1bbc;
                      uStack_1d10 = uStack_1bb4;
                      FUN_108359624(&pppppplStack_1c88,&ppppppplStack_1bd0,&pppppplStack_1f30,
                                    &uStack_1d20,(ulong)ppppppplVar29 & 0xffffffff);
                      pppppplVar30 = pppppplStack_1c78;
                      pppppplStack_1c78 = pppppplStack_1c88;
                      pppppplStack_1c88 = (long ******)0x0;
                      func_0x00010835be9c(pppppplVar30);
                      func_0x000106f47224(&pppppplStack_1c88);
                      func_0x00010835c150(&ppppppplStack_1c80);
                      ppppppplStack_1c90 = (long *******)0x0;
                      ppppppplStack_1c98 = (long *******)0x0;
                      FUN_10835bca8(&uStack_1d20,&pppppplStack_1c00);
                      FUN_1083578dc(&ppppppplStack_1c28,&uStack_1d20,&ppppppplStack_1c98);
                      iStack_e50 = iStack_e50 + 1;
                      *(int *)(lStack_e70 + 0x58) = *(int *)(lStack_e70 + 0x58) + 1;
                      uStack_1d18 = (long *******)uStack_1c20;
                      uStack_1d20 = ppppppplStack_1c28;
                      uStack_1d08 = uStack_1c10;
                      uStack_1d10 = uStack_1c18;
                      uStack_1d00 = uStack_1c08;
                      FUN_10833e2b0(&uStack_1ab0,&uStack_1d20);
                      uStack_1d18 = ppppppplStack_1c90;
                      uStack_1d20 = ppppppplStack_1c98;
                      FUN_10833ea80(&uStack_1ab0,&uStack_1d20,&ppppppplStack_1c80);
                      func_0x00010833c334(&uStack_1ab0);
                      fVar39 = fStack_1b58;
                      pppppplVar38 = pppppplStack_1be8;
                      pppppplVar30 = pppppplStack_1bf0;
                      if (bVar9) {
                        uVar26 = 0;
                        if (pppppplVar32[10] != (long *****)0x0) {
                          do {
                            func_0x00010835c110();
                            uVar26 = extraout_x8_04;
                          } while (extraout_w11_02 != 0);
                        }
                        uStack_1cec = 0;
                        uStack_1cf0 = 0;
                        uStack_1d08 = 0;
                        uStack_1d10 = 0;
                        uStack_1cf8 = 0;
                        uStack_1cf4 = 0;
                        uStack_1d00 = 0;
                        uStack_1d18 = (long *******)0x0;
                        uStack_1d20 = (long *******)0x0;
                        uStack_1ce4 = 0x3f800000;
                        uStack_1cdc = 0x40800000;
                        uStack_1ca0 = uVar26;
                        func_0x00010835c3b8(&uStack_1d20);
                        func_0x00010835c2d8();
                        uVar2 = uStack_1ca0;
                        uVar26 = uStack_1d08;
                        uStack_1ca0 = 0;
                        uStack_1ad8 = 0;
                        uStack_1d08 = uVar2;
                        func_0x00010835be78(uVar26);
                        FUN_108115b2c(&uStack_1ad8);
                        func_0x00010835c150(&uStack_1d20);
                        iVar28 = (int)pppppplVar30;
                        uStack_1ac8 = pppppplVar30;
                        iVar25 = (int)((ulong)pppppplVar30 >> 0x20) + 1;
                        iVar27 = (int)pppppplVar38;
                        uStack_1ac0 = (long *******)CONCAT44(iVar25,iVar27);
                        func_0x00010835c0f0();
                        iVar1 = (int)((ulong)pppppplVar38 >> 0x20) + -1;
                        uStack_1ac8 = (long ******)CONCAT44(iVar1,iVar28);
                        uStack_1ac0 = (long *******)pppppplVar38;
                        func_0x00010835c0f0();
                        uStack_1ac8 = (long ******)CONCAT44(iVar25,iVar28);
                        uStack_1ac0 = (long *******)CONCAT44(iVar1,iVar28 + 1);
                        func_0x00010835c0f0();
                        uStack_1ac8 = (long ******)CONCAT44(iVar25,iVar27 + -1);
                        uStack_1ac0 = (long *******)CONCAT44(iVar1,iVar27);
                        func_0x00010835c0f0();
                        FUN_108375e94(&uStack_1d20);
                        FUN_108115b2c(&uStack_1ca0);
                        puVar33 = (undefined8 *)((ulong)puVar33 & 0xffffffff);
                      }
                      else {
                        uVar7 = iVar10 == 3;
                        if (!(bool)uVar7) {
                          fStack_1fa0 = fStack_1b54;
                          FUN_10835bca8(&fStack_1cb0,&pppppplStack_1bf0);
                          fVar43 = fStack_1b5c;
                          fVar45 = fStack_1ca8;
                          ppppppplStack_1f70 = (long *******)CONCAT44(fStack_1b5c,uStack_1b60);
                          uStack_1d18 = (long *******)CONCAT44(uStack_1d18._4_4_,fVar39);
                          puStack_1ab8 = &uStack_1ab0;
                          uStack_1ac8 = (long ******)&puStack_1ab8;
                          uStack_1ac0 = (long *******)&ppppppplStack_1c80;
                          fStack_1f84 = fStack_1cac;
                          fStack_1f80 = fStack_1cb0;
                          fVar40 = fStack_1cb0 + 1.0;
                          fVar49 = fStack_1cac + 1.0;
                          uStack_1ad8 = CONCAT44(fVar49,fVar40);
                          fVar41 = fStack_1ca8 + -1.0;
                          fStack_1fa4 = fStack_1ca4;
                          fVar46 = fStack_1ca4 + -1.0;
                          uStack_1ae0 = 0;
                          uStack_1ae8 = 0;
                          uStack_1d20 = ppppppplStack_1f70;
                          fStack_1ad0 = fVar41;
                          fStack_1acc = fVar46;
                          FUN_1083578dc(&ppppppplStack_1c28,&uStack_1ad8,&uStack_1ae8);
                          uVar7 = iVar10 - 1U == 1;
                          fVar47 = fVar40;
                          if (iVar10 - 1U < 2) {
                            uStack_1d20._0_4_ = (float)uStack_1ad8 + 0.5;
                            uStack_1d20._4_4_ = (float)((ulong)uStack_1ad8 >> 0x20) + 0.5;
                            uStack_1d18._0_4_ = fStack_1ad0 + -0.5;
                            uStack_1d18._4_4_ = fStack_1acc + -0.5;
                            FUN_1083578dc(&ppppppplStack_1c28,&uStack_1d20,&uStack_1d20);
                            fVar43 = uStack_1d20._4_4_ + -0.5;
                            ppppppplStack_1f70 =
                                 (long *******)CONCAT44(fVar43,(float)uStack_1d20 + -0.5);
                            fVar39 = (float)uStack_1d18 + 0.5;
                            fStack_1fa0 = uStack_1d18._4_4_ + 0.5;
                            uStack_1d18 = (long *******)CONCAT44(fStack_1fa0,fVar39);
                            uVar7 = iVar10 == 1;
                            uStack_1d20 = ppppppplStack_1f70;
                            if ((bool)uVar7) {
                              fVar45 = fVar40;
                              fVar47 = fVar41 + 1.0;
                              fStack_1fa4 = fVar49;
                              fStack_1f84 = fVar46;
                              fStack_1f80 = fVar41;
                            }
                          }
                          uVar42 = uStack_1ae8._4_4_;
                          uVar44 = uStack_1ae0._4_4_;
                          fStack_1af8 = SUB84(ppppppplStack_1f70,0);
                          fStack_1af4 = (float)uStack_1ae8._4_4_;
                          fStack_1af0 = fStack_1af8 + 1.0;
                          fStack_1aec = (float)uStack_1ae0._4_4_;
                          fStack_1b08 = fStack_1f80;
                          fStack_1b04 = fVar49;
                          fStack_1b00 = fVar47;
                          fStack_1afc = fVar46;
                          func_0x00010835c0e0();
                          fVar47 = fVar39 + -1.0;
                          fStack_1af4 = (float)uVar42;
                          fStack_1aec = (float)uVar44;
                          fVar48 = fVar45 + -1.0;
                          fStack_1b08 = fVar48;
                          fStack_1b04 = fVar49;
                          fStack_1b00 = fVar45;
                          fStack_1afc = fVar46;
                          fStack_1af8 = fVar47;
                          fStack_1af0 = fVar39;
                          func_0x00010835c0e0();
                          uVar42 = (undefined4)uStack_1ae8;
                          uVar44 = (undefined4)uStack_1ae0;
                          fStack_1af8 = (float)(undefined4)uStack_1ae8;
                          fStack_1aec = fVar43 + 1.0;
                          fStack_1af0 = (float)(undefined4)uStack_1ae0;
                          fStack_1b04 = fStack_1f84;
                          fStack_1afc = fStack_1f84 + 1.0;
                          fStack_1b08 = fVar40;
                          fStack_1b00 = fVar41;
                          fStack_1af4 = fVar43;
                          func_0x00010835c0e0();
                          fVar39 = fStack_1fa0 + -1.0;
                          fStack_1af8 = (float)uVar42;
                          fStack_1af0 = (float)uVar44;
                          fStack_1aec = fStack_1fa0;
                          fVar45 = fStack_1fa4 + -1.0;
                          fStack_1afc = fStack_1fa4;
                          fStack_1b08 = fVar40;
                          fStack_1b04 = fVar45;
                          fStack_1b00 = fVar41;
                          fStack_1af4 = fVar39;
                          func_0x00010835c0e0();
                          FUN_10835bd5c(ppppppplStack_1f70,fVar43,fStack_1f80,fStack_1f84,
                                        &uStack_1ac8);
                          FUN_10835bd5c(fVar47,fVar43,fVar48,fStack_1f84,&uStack_1ac8);
                          FUN_10835bd5c(fVar47,fVar39,fVar48,fVar45,&uStack_1ac8);
                          FUN_10835bd5c(ppppppplStack_1f70,fVar39,fStack_1f80,fVar45,&uStack_1ac8);
                        }
                      }
                      FUN_108375e94(&ppppppplStack_1c80);
                      FUN_108358e40(&uStack_1d20,&uStack_1ab0);
                      FUN_10833de08(&ppppppplStack_1bd0,&uStack_1d20);
                      FUN_1083414c4(&uStack_1d20);
                      iStack_1bac = iStack_1f7c;
                      uStack_1b48 = CONCAT44(uStack_1bd4,uStack_1bd8);
                      pppppplVar38 = (long ******)CONCAT44(uStack_1bdc,uStack_1be0);
                      pppppplVar24 = (long ******)&pppppplStack_1bf0;
                      uStack_1b50 = pppppplVar38;
                      FUN_10835bca8(&uStack_1b60);
                      bVar9 = false;
                    }
                    else {
                      func_0x00010835c1f4();
                    }
                    func_0x00010835bc64(&uStack_1ab0);
                    if (cVar3 == '\0') goto LAB_10835b72c;
                  } while ((int)puVar33 != 0 || (int)puVar35 != 0);
                  if (bVar8) {
                    func_0x000108357cb4(&uStack_1ab0,&ppppppplStack_1bd0);
                    func_0x00010835c2f0();
                    func_0x00010835c1d4();
                  }
                  iStack_1bac = iVar10;
                  func_0x00010835c340(&uStack_1d20);
                  FUN_108359b28(&uStack_1ab0,&uStack_1b50,&uStack_1d20);
                  FUN_108358358(appppplStack_1ba8,&uStack_1ab0);
                  ppppppplStack_1de0 = ppppppplStack_1bd0;
                  ppppplStack_1b70 = ppppplStack_1b18;
                  pppppplStack_1b78 = pppppplStack_1b20;
                  ppppppplStack_1bd0 = (long *******)0x0;
                  func_0x00010835c2fc(auStack_1dd8,&iStack_1bc8);
                  uStack_1d90 = uStack_1b80;
                  uStack_1b80 = 0;
                  ppppplStack_1d80 = ppppplStack_1b18;
                  pppppplStack_1d88 = pppppplStack_1b20;
                  pppppplVar38 = pppppplStack_1b20;
                }
                else {
                  uStack_1ab0 = (long *******)CONCAT44(fVar45,fVar43);
                  uVar36 = (uint)&uStack_1ab0;
                  pppppplVar24 = appppplStack_1ba8;
                  pppppplVar38 = pppppplVar30;
                  FUN_1083576dc();
                  if (((uint)pppppplVar19 & 0x7fffffff) < 0x7f800000) {
                    uVar34 = uVar36;
                    FUN_108359a50();
                    uVar36 = uVar34;
                  }
                  else {
                    uVar34 = 0x7fffffff;
                  }
                  if (((uint)pppppplVar38 & 0x7fffffff) < 0x7f800000) {
                    FUN_108359a50();
                  }
                  else {
                    uVar36 = 0x7fffffff;
                    pppppplVar38 = pppppplVar19;
                  }
                  uVar7 = uVar34 <= uVar11 || uVar11 == 0;
                  if ((uVar34 <= uVar11 || uVar11 == 0) && (uVar12 == 0 || uVar36 <= uVar12))
                  goto LAB_10835af14;
                  pppppplVar24 = (long ******)&pppppplStack_1f30;
                  func_0x00010835c1b0(&uStack_1ab0,&ppppppplStack_1bd0,pppppplVar24,pppppppuVar20,
                                      ppppppplVar29);
                  func_0x00010835c2f0();
                  func_0x00010835c1d4();
                  if (ppppppplStack_1bd0 != (long *******)0x0) {
                    if (!bVar9) {
                      iStack_1bac = iVar10;
                    }
                    goto LAB_10835af14;
                  }
                  func_0x00010835c1f4();
                }
LAB_10835b72c:
                FUN_1083414c4(&ppppppplStack_1bd0);
                goto LAB_10835a9ec;
              }
            }
            func_0x00010835c1f4();
          }
        }
LAB_10835a9ec:
        fVar39 = SUB84(pppppplVar38,0);
        FUN_108341670(&pppppplStack_1f30);
        if (ppppppplStack_1de0 == (long *******)0x0) {
          func_0x00010835c140();
        }
        else {
          fVar43 = *(float *)pppppplVar22;
          func_0x00010835c1fc();
          func_0x00010835c158();
          fVar43 = (1.0 / afStack_1db8[0]) * fVar43;
          if (fVar43 <= fVar39) {
            fVar39 = fVar43;
          }
          fVar45 = *(float *)((long)pppppplVar22 + 4);
          fVar43 = fVar39;
          func_0x00010835c1fc();
          func_0x00010835c158();
          iVar10 = *(int *)((long)ppppppplStack_1de0 + 0x14) -
                   *(int *)((long)ppppppplStack_1de0 + 0xc);
          fVar45 = (1.0 / fStack_1da8) * fVar45;
          if (fVar45 <= fVar43) {
            fVar43 = fVar45;
          }
          uStack_1f28 = CONCAT44(*(int *)(ppppppplStack_1de0 + 3) - *(int *)(ppppppplStack_1de0 + 2)
                                 ,iVar10);
          pppppplStack_1f30 = (long ******)0x0;
          iStack_1bc8 = 0;
          iStack_1bc4 = 0;
          ppppppplStack_1bd0 = (long *******)0x0;
          uVar7 = iStack_1dbc - 1U == 1;
          if (iStack_1dbc - 1U < 2) {
            ppppppplStack_1bd0 = (long *******)0x0;
            iStack_1bc8 = iVar10;
            iStack_1bc4 = *(int *)(ppppppplStack_1de0 + 3) - *(int *)(ppppppplStack_1de0 + 2);
LAB_10835aa8c:
            do {
              func_0x00010835c110();
              ppppppplStack_1c28 = extraout_x8_03;
            } while (extraout_w11_01 != 0);
          }
          else {
            FUN_108357948(afStack_1db8,&ppppppplStack_1d50,&ppppppplStack_1bd0);
            uStack_1d20 = (long *******)CONCAT44(fVar43 * fVar51,fVar39 * (float)uVar50);
            ppppppplVar29 = (long *******)&uStack_1d20;
            func_0x000108357874();
            uStack_1ab0 = ppppppplVar29;
            func_0x00010835c324(&pppppplStack_1f30);
            ppppppplVar29 = &pppppplStack_1f30;
            FUN_1083577b0(ppppppplVar29,ppppppplStack_1bd0,CONCAT44(iStack_1bc4,iStack_1bc8),
                          iStack_1dbc);
            iStack_1bc8 = (int)ppppppplStack_1bd0;
            iStack_1bc4 = (int)((ulong)ppppppplStack_1bd0 >> 0x20);
            bVar9 = false;
            uVar7 = true;
            bVar8 = false;
            if ((int)ppppppplVar29 < iStack_1bc8) {
              iVar10 = (int)((ulong)ppppppplVar29 >> 0x20);
              bVar8 = SBORROW4(iStack_1bc4,iVar10);
              bVar9 = iStack_1bc4 - iVar10 < 0;
              uVar7 = iStack_1bc4 == iVar10;
            }
            ppppppplStack_1bd0 = ppppppplVar29;
            if ((bool)uVar7 || bVar9 != bVar8) {
              func_0x00010835c140();
              goto LAB_10835ada8;
            }
            uStack_1ab0 = (long *******)((long)&MACH_HEADER.magic + 1);
            func_0x00010835c324(&ppppppplStack_1bd0);
            if (ppppppplStack_1de0 != (long *******)0x0) goto LAB_10835aa8c;
            ppppppplStack_1c28 = (long *******)0x0;
          }
          iVar10 = iStack_1dbc;
          uStack_1d18 = (long *******)CONCAT44(iStack_1bc4,iStack_1bc8);
          uStack_1d20 = ppppppplStack_1bd0;
          ppppplVar16 = ppppplVar15;
          (*(code *)(*ppppplVar15)[3])();
          if (((ulong)ppppplVar16 & 1) == 0) {
            uVar7 = iStack_1dbc == 3 && (int)auStack_1dd8[0] == 1;
            if (iStack_1dbc == 3 && (int)auStack_1dd8[0] == 1) {
              FUN_1083599c0(&uStack_1ab0,ppppppplStack_1c28);
              ppppppplVar14 = uStack_1ab0;
              ppppppplVar29 = ppppppplStack_1c28;
              uStack_1ab0 = (long *******)0x0;
              ppppppplStack_1c28 = ppppppplVar14;
              FUN_10835bc84(ppppppplVar29);
              FUN_1083389b0(&uStack_1ab0);
              func_0x00010835c3d0(&uStack_1d20);
              FUN_10821a06c();
              iVar10 = 0;
            }
          }
          ppppppplVar29 = ppppppplStack_1c28;
          if (ppppppplStack_1c28 != (long *******)0x0) {
            do {
              func_0x00010835c100();
            } while (extraout_w10_00 != 0);
          }
          ppppppplStack_1f38 = ppppppplVar29;
          FUN_1083415b0();
          uStack_1ab0 = (long *******)0x0;
          uStack_1aa8 = ppppppplVar29;
          (*(code *)(*ppppplVar15)[4])
                    (&ppppppplStack_1c80,fVar39,fVar43,ppppplVar15,&ppppppplStack_1f38,&uStack_1ab0,
                     iVar10,&uStack_1d20);
          ppppppplVar29 = ppppppplStack_1c28;
          ppppppplStack_1c28 = ppppppplStack_1c80;
          ppppppplStack_1c80 = (long *******)0x0;
          FUN_10835bc84(ppppppplVar29);
          FUN_1083389b0(&ppppppplStack_1c80);
          FUN_1083389b0(&ppppppplStack_1f38);
          ppppppplVar29 = ppppppplStack_1c28;
          if (ppppppplStack_1c28 == (long *******)0x0) {
            func_0x00010835c140();
          }
          else {
            ppppppplStack_1c28 = (long *******)0x0;
            ppppppplStack_1f40 = ppppppplVar29;
            uStack_1ab0 = ppppppplStack_1bd0;
            func_0x00010835c3b0();
            FUN_1083389b0(&ppppppplStack_1f40);
            if ((iStack_1dbc == 3) || (iStack_1dbc == 0)) {
              func_0x000108357cb4(&uStack_1ab0,ppppppplVar13);
              FUN_10833de08(ppppppplVar13,&uStack_1ab0);
              func_0x00010835c1d4();
            }
            FUN_108358358(ppppppplVar13 + 5,afStack_1db8);
            uVar7 = iStack_1dbc == 3;
            if ((bool)uVar7) {
              pppppplVar22 = *ppppppplVar13;
              FUN_1083415b0();
              ppppppplStack_1c80 = (long *******)0x0;
              ppppppplVar29 = ppppppplVar13 + 5;
              ppppppplVar14 = (long *******)&ppppppplStack_1c80;
              pppppplStack_1c78 = pppppplVar22;
              FUN_1083578b0();
              uStack_1aa0 = 1;
              uStack_1ab0 = ppppppplVar29;
              uStack_1aa8 = ppppppplVar14;
              func_0x00010835c318();
              ppppppplStack_1d50 = ppppppplVar29;
              ppppppplStack_1d48 = ppppppplVar14;
            }
            ppppppplVar13[0xc] = (long ******)ppppppplStack_1d48;
            ppppppplVar13[0xb] = (long ******)ppppppplStack_1d50;
            *(int *)((long)ppppppplVar13 + 0x24) = iStack_1dbc;
          }
          FUN_1083389b0(&ppppppplStack_1c28);
        }
LAB_10835ada8:
        ppppppplVar13 = (long *******)&ppppppplStack_1de0;
      }
      else {
        uVar7 = *(int *)(ppppppplVar29 + 0x15) == 0;
        if (*(int *)(ppppppplVar29 + 0x15) < 1) goto LAB_10835b7c8;
        func_0x00010835c1b0(&uStack_1ab0,ppppppplVar29[0x14],*ppppppplVar29,ppppppplStack_1d60,
                            ppppppplStack_1d58);
        if (uStack_1ab0 == (long *******)0x0) {
          func_0x00010835c140();
        }
        else {
          iStack_1bc8 = (int)ppppppplStack_1d48;
          iStack_1bc4 = (int)((ulong)ppppppplStack_1d48 >> 0x20);
          ppppppplStack_1bd0 = ppppppplStack_1d50;
          pppppplStack_1f30 =
               (long ******)
               ((ulong)(uint)-(int)pppppplStack_1a58 -
               ((ulong)pppppplStack_1a58 & 0xffffffff00000000));
          FUN_1082889d8(&ppppppplStack_1bd0,&pppppplStack_1f30);
          uVar42 = *(undefined4 *)pppppplVar22;
          uVar44 = *(undefined4 *)((long)pppppplVar22 + 4);
          ppppppplVar29 = uStack_1ab0;
          if (uStack_1ab0 != (long *******)0x0) {
            do {
              func_0x00010835c100();
            } while (extraout_w10 != 0);
          }
          ppppppplStack_1d70 = ppppppplVar29;
          FUN_1083415b0();
          uStack_1d20 = (long *******)0x0;
          auStack_1dd8[0] = CONCAT44(iStack_1bc4,iStack_1bc8);
          ppppppplStack_1de0 = ppppppplStack_1bd0;
          uStack_1d18 = ppppppplVar29;
          (*(code *)(*ppppplVar15)[4])
                    (auStack_1d68,uVar42,uVar44,ppppplVar15,&ppppppplStack_1d70,&uStack_1d20,3,
                     &ppppppplStack_1de0);
          ppppppplStack_1c80 = ppppppplVar14;
          FUN_10833ddc8(&pppppplStack_1f30,auStack_1d68,&ppppppplStack_1c80);
          FUN_10833de08(&uStack_1ab0,&pppppplStack_1f30);
          FUN_1083414c4(&pppppplStack_1f30);
          FUN_1083389b0(auStack_1d68);
          FUN_1083389b0(&ppppppplStack_1d70);
          ppppppplVar29 = uStack_1ab0;
          uStack_1ab0 = (long *******)0x0;
          *ppppppplVar13 = (long ******)ppppppplVar29;
          func_0x00010835c2fc(ppppppplVar13 + 1,&uStack_1aa8);
          pppppplVar22 = pppppplStack_1a60;
          pppppplStack_1a60 = (long ******)0x0;
          ppppppplVar13[10] = pppppplVar22;
          ppppppplVar13[0xc] = pppppplStack_1a50;
          ppppppplVar13[0xb] = pppppplStack_1a58;
        }
        ppppppplVar13 = (long *******)&uStack_1ab0;
      }
      FUN_1083414c4(ppppppplVar13);
    }
    func_0x00010835c0b8(ppppppplStack_de8);
    if ((bool)uVar7) {
      func_0x00010835c458(FUN_10835a65c);
      return (long *******)pcStack_d38;
    }
  }
  ___stack_chk_fail();
LAB_10835b7c8:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10835b7cc);
  (*pcVar6)();
}



/* Entry: 10835a65c; end: 10835b993;  */

undefined8 * FUN_10835a65c(undefined8 *param_1,float *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *****pppppuVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  code *pcVar9;
  bool bVar10;
  undefined1 in_ZR;
  undefined1 uVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  long *plVar16;
  undefined8 *******pppppppuVar17;
  long *plVar18;
  undefined8 *******pppppppuVar19;
  undefined8 ******ppppppuVar20;
  undefined8 ****ppppuVar21;
  undefined8 ******ppppppuVar22;
  int iVar23;
  undefined8 *****pppppuVar24;
  undefined8 ******ppppppuVar25;
  int iVar26;
  undefined8 extraout_x8;
  undefined8 *******extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 uVar27;
  int iVar28;
  int extraout_w10;
  int extraout_w10_00;
  int iVar29;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 *unaff_x19;
  undefined8 ******ppppppuVar30;
  undefined8 *puVar31;
  uint uVar32;
  undefined8 *puVar33;
  uint uVar34;
  undefined8 *unaff_x30;
  undefined8 *******pppppppuVar35;
  undefined8 ******ppppppuVar36;
  float fVar37;
  float fVar38;
  undefined8 ******ppppppuVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined8 uVar48;
  float fStack_1274;
  float fStack_1270;
  float fStack_1254;
  float fStack_1250;
  int iStack_124c;
  undefined8 ******ppppppuStack_1240;
  undefined8 ******ppppppuStack_1210;
  undefined8 ******ppppppuStack_1208;
  undefined8 *****pppppuStack_1200;
  undefined8 uStack_11f8;
  undefined8 ******ppppppuStack_1138;
  undefined8 ******ppppppuStack_1130;
  undefined8 ******ppppppuStack_10b0;
  undefined8 auStack_10a8 [3];
  int iStack_108c;
  float afStack_1088 [4];
  float fStack_1078;
  undefined8 uStack_1060;
  undefined8 *****pppppuStack_1058;
  undefined8 ****ppppuStack_1050;
  undefined8 ******ppppppuStack_1040;
  undefined1 auStack_1038 [8];
  undefined8 ******ppppppuStack_1030;
  undefined8 ******ppppppuStack_1028;
  undefined8 ******ppppppuStack_1020;
  undefined8 ******ppppppuStack_1018;
  undefined8 ******ppppppuStack_1010;
  undefined8 ******ppppppuStack_1008;
  undefined8 *****pppppuStack_ff8;
  undefined8 uStack_ff0;
  undefined8 uStack_fe8;
  undefined8 uStack_fe0;
  undefined8 uStack_fd8;
  undefined8 uStack_fd0;
  undefined4 uStack_fc8;
  undefined4 uStack_fc4;
  undefined4 uStack_fc0;
  undefined8 uStack_fbc;
  undefined8 uStack_fb4;
  undefined8 uStack_fac;
  float fStack_f80;
  float fStack_f7c;
  float fStack_f78;
  float fStack_f74;
  undefined8 uStack_f70;
  undefined8 ******ppppppuStack_f68;
  undefined8 ******ppppppuStack_f60;
  undefined8 uStack_f58;
  undefined8 ******ppppppuStack_f50;
  undefined8 *****pppppuStack_f48;
  undefined8 uStack_f40;
  undefined8 uStack_f38;
  undefined8 uStack_f30;
  undefined4 uStack_f28;
  undefined4 uStack_f24;
  undefined4 uStack_f20;
  undefined8 uStack_f1c;
  undefined8 uStack_f14;
  undefined8 uStack_f0c;
  undefined8 ******ppppppuStack_ef8;
  undefined8 uStack_ef0;
  undefined8 uStack_ee8;
  undefined8 uStack_ee0;
  undefined8 uStack_ed8;
  undefined8 *****pppppuStack_ed0;
  undefined8 *****pppppuStack_ec8;
  undefined8 *****pppppuStack_ec0;
  undefined8 *****pppppuStack_eb8;
  undefined8 uStack_eb0;
  undefined4 uStack_ea8;
  undefined4 uStack_ea4;
  undefined8 ******ppppppuStack_ea0;
  int iStack_e98;
  int iStack_e94;
  undefined8 uStack_e8c;
  undefined8 uStack_e84;
  int iStack_e7c;
  undefined8 ****appppuStack_e78 [5];
  undefined8 uStack_e50;
  undefined8 *****pppppuStack_e48;
  undefined8 ****ppppuStack_e40;
  undefined4 uStack_e30;
  float fStack_e2c;
  float fStack_e28;
  float fStack_e24;
  undefined8 uStack_e20;
  undefined8 uStack_e18;
  undefined8 ******ppppppuStack_e10;
  undefined8 ******ppppppuStack_e08;
  uint uStack_df8;
  uint uStack_df4;
  undefined8 *****pppppuStack_df0;
  undefined8 ****ppppuStack_de8;
  float fStack_dd8;
  float fStack_dd4;
  float fStack_dd0;
  float fStack_dcc;
  float fStack_dc8;
  float fStack_dc4;
  float fStack_dc0;
  float fStack_dbc;
  undefined8 uStack_db8;
  undefined8 uStack_db0;
  undefined8 uStack_da8;
  float fStack_da0;
  float fStack_d9c;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined8 *puStack_d88;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  undefined1 uStack_d70;
  undefined8 uStack_d30;
  ulong uStack_d28;
  undefined8 uStack_d20;
  long lStack_140;
  int iStack_120;
  char cStack_d8;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar31 = param_1;
  func_0x00010835c0cc();
  plVar16 = *(long **)*puVar31;
  (**(code **)(*plVar16 + 0x30))();
  ppppppuVar39 = (undefined8 ******)(ulong)(uint)param_2[1];
  (**(code **)(*plVar16 + 0x10))(*param_2);
  if (plVar16 == (long *)0x0) {
    func_0x00010835c0b8(extraout_x8);
    if ((bool)in_ZR) {
      func_0x00010835c458();
      uStack_c8 = 0;
      puStack_c0 = param_1;
      FUN_1083413f4();
      func_0x000108341fb4();
      return unaff_x19;
    }
  }
  else {
    uVar48 = NEON_fmov(0x40400000,4);
    fVar40 = (float)((ulong)uVar48 >> 0x20);
    uStack_d80 = (undefined8 *******)
                 CONCAT44((float)((ulong)*(undefined8 *)param_2 >> 0x20) * fVar40,
                          (float)*(undefined8 *)param_2 * (float)uVar48);
    ppppppuVar36 = (undefined8 ******)&uStack_d80;
    func_0x000108357874();
    pppppuStack_ff8 = ppppppuVar36;
    if (*(int *)(param_1 + 0x15) < 1) goto LAB_10835b7c8;
    ppppppuStack_1008 = *(undefined8 *******)(param_1[0x14] + 0x60);
    ppppppuStack_1010 = *(undefined8 *******)(param_1[0x14] + 0x58);
    pppppppuVar17 = &ppppppuStack_1010;
    pppppppuVar19 = (undefined8 *******)&pppppuStack_ff8;
    FUN_10833e0cc();
    uStack_d78 = (undefined8 *******)ppppppuStack_1008;
    uStack_d80 = (undefined8 *******)ppppppuStack_1010;
    uStack_d70 = 1;
    func_0x00010835c318();
    bVar10 = false;
    uVar11 = true;
    bVar12 = false;
    if ((int)pppppppuVar17 < (int)pppppppuVar19) {
      iVar13 = (int)((ulong)pppppppuVar17 >> 0x20);
      iVar26 = (int)((ulong)pppppppuVar19 >> 0x20);
      bVar12 = SBORROW4(iVar26,iVar13);
      bVar10 = iVar26 - iVar13 < 0;
      uVar11 = iVar26 == iVar13;
    }
    ppppppuStack_1020 = pppppppuVar17;
    ppppppuStack_1018 = pppppppuVar19;
    if ((bool)uVar11 || bVar10 != bVar12) {
      func_0x00010835c140();
    }
    else {
      pppppppuVar35 = pppppppuVar17;
      ppppppuStack_1030 = pppppppuVar17;
      ppppppuStack_1028 = pppppppuVar19;
      FUN_10833e0cc(&ppppppuStack_1030,&pppppuStack_ff8);
      fVar42 = SUB84(pppppppuVar35,0);
      plVar18 = *(long **)*param_1;
      (**(code **)(*plVar18 + 0x38))();
      if ((int)plVar18 == 0) {
        fVar43 = *param_2;
        func_0x00010835c1fc();
        func_0x00010835c158();
        fVar41 = 1.0;
        if (fVar42 < fVar43) {
          func_0x00010835c1fc();
          func_0x00010835c158();
          ppppppuVar39 = (undefined8 ******)(ulong)(uint)*param_2;
          fVar41 = fVar42 / *param_2;
        }
        fVar45 = param_2[1];
        func_0x00010835c1fc();
        func_0x00010835c158();
        fVar43 = 1.0;
        if (fVar42 < fVar45) {
          func_0x00010835c1fc();
          func_0x00010835c158();
          ppppppuVar39 = (undefined8 ******)(ulong)(uint)param_2[1];
          fVar43 = fVar42 / param_2[1];
        }
        uVar11 = *(int *)(param_1 + 0x15) == 0;
        if (*(int *)(param_1 + 0x15) < 1) goto LAB_10835b7c8;
        ppppppuVar30 = (undefined8 ******)param_1[0x14];
        FUN_1083415ec(&pppppuStack_1200,*param_1);
        ppppppuStack_1130 = ppppppuStack_1028;
        ppppppuStack_1138 = ppppppuStack_1030;
        plVar18 = plVar16;
        (**(code **)(*plVar16 + 0x18))();
        ppppuStack_de8 = ppppppuVar30[0xc];
        ppppppuVar36 = (undefined8 ******)ppppppuVar30[0xb];
        pppppuStack_df0 = ppppppuVar36;
        if (*ppppppuVar30 == (undefined8 *****)0x0) {
LAB_10835a9e8:
          func_0x00010835c1f4();
        }
        else {
          ppppppuVar20 = &pppppuStack_df0;
          func_0x00010821b838(ppppppuVar20,&ppppppuStack_1138);
          iVar13 = 0;
          if (0.0 < fVar41) {
            iVar13 = (int)ppppppuVar20;
          }
          uVar11 = iVar13 == 1;
          if ((!(bool)uVar11) || (uVar11 = fVar43 == 0.0, fVar43 <= 0.0)) goto LAB_10835a9e8;
          ppppppuVar20 = ppppppuVar30 + 5;
          FUN_108358b38(ppppppuVar20,&uStack_df8);
          ppppppuVar22 = ppppppuVar30;
          func_0x000108358b60(ppppppuVar30,&ppppppuStack_1138,3);
          if ((int)ppppppuVar20 == 0) {
            uVar34 = 0;
          }
          else {
            bVar10 = ((ulong)ppppppuVar22 & 4) == 0;
            uVar34 = (uint)bVar10;
            iVar13 = 0;
            if (bVar10) {
              iVar13 = (int)plVar18;
            }
            if (iVar13 == 1) {
              uVar34 = (uint)(((ulong)ppppppuVar22 & 2) == 0);
            }
          }
          ppppuVar21 = (*ppppppuVar30)[4];
          if (ppppuVar21 == (undefined8 ****)0x0) {
            FUN_108343afc();
          }
          uVar14 = (uint)ppppuVar21;
          if (((uVar34 == 0) || (ppppppuVar30[10] != (undefined8 *****)0x0)) ||
             (*(int *)(*ppppppuVar30 + 5) != *(int *)(pppppuStack_1200 + 5))) {
            uVar32 = 1;
          }
          else {
            FUN_108343f98();
            uVar32 = uVar14 ^ 1;
          }
          FUN_108359a50(fVar41);
          ppppppuVar36 = (undefined8 ******)(ulong)(uint)fVar43;
          uVar15 = uVar14;
          FUN_108359a50();
          uVar11 = uVar14 == 0 && uVar15 == 0;
          if ((uVar14 == 0 && uVar15 == 0) && ((uVar32 & 1) == 0)) {
            if (((uint)ppppppuVar22 >> 1 & 1) == 0) {
              func_0x00010835c368(&ppppppuStack_10b0,ppppppuVar30,&uStack_df8,&pppppuStack_df0);
            }
            else {
              FUN_108341774(&ppppppuStack_10b0,ppppppuVar30);
              ppppuStack_1050 = ppppuStack_de8;
              pppppuStack_1058 = pppppuStack_df0;
              ppppppuVar36 = (undefined8 ******)pppppuStack_df0;
            }
          }
          else {
            if ((uVar34 & ((uint)ppppppuVar22 & 2) >> 1) == 1) {
              ppppppuVar22 = (undefined8 ******)(ulong)uStack_df8;
              pppppuVar24 = (undefined8 *****)(ulong)uStack_df4;
              func_0x00010835c3f0(*ppppppuVar30);
              FUN_108219ff8();
              iVar13 = *(int *)((long)ppppppuVar30 + 0x24);
              ppppppuStack_e10 = ppppppuVar22;
              ppppppuStack_e08 = (undefined8 ******)pppppuVar24;
              if (iVar13 == 3) {
                bVar12 = false;
                iVar13 = 0;
                bVar10 = true;
              }
              else {
                bVar10 = false;
                bVar12 = iVar13 - 1U < 2;
              }
            }
            else {
              bVar12 = false;
              bVar10 = false;
              ppppppuStack_e08 = (undefined8 ******)ppppuStack_de8;
              ppppppuStack_e10 = (undefined8 ******)pppppuStack_df0;
              iVar13 = 3;
              ppppppuVar36 = (undefined8 ******)pppppuStack_df0;
            }
            pppppppuVar17 = &ppppppuStack_e10;
            pppppppuVar19 = (undefined8 *******)ppppppuStack_1138;
            FUN_1083577b0(pppppppuVar17,ppppppuStack_1138,ppppppuStack_1130,iVar13);
            ppppppuStack_e10 = pppppppuVar17;
            ppppppuStack_e08 = pppppppuVar19;
            func_0x00010835c340(&uStack_e20);
            fVar42 = (float)uStack_e20;
            fVar45 = (float)uStack_e18;
            uVar11 = (float)uStack_e20 == (float)uStack_e18;
            if ((float)uStack_e20 < (float)uStack_e18) {
              fVar37 = uStack_e20._4_4_;
              fVar38 = uStack_e18._4_4_;
              ppppppuVar22 = (undefined8 ******)(ulong)(uint)uStack_e18._4_4_;
              uVar11 = uStack_e20._4_4_ == uStack_e18._4_4_;
              ppppppuVar36 = ppppppuVar22;
              if (uStack_e20._4_4_ < uStack_e18._4_4_) {
                func_0x00010835c340(&uStack_e30);
                ppppppuVar25 = ppppppuVar30;
                FUN_108341774(&ppppppuStack_ea0);
                if ((((ulong)ppppppuVar20 & 1) != 0) || (uVar14 == 0 && uVar15 == 0)) {
LAB_10835af14:
                  if (bVar12) {
                    func_0x000108359acc();
                    uStack_d80 = (undefined8 *******)CONCAT44(fVar37,fVar42);
                    uStack_d78 = (undefined8 *******)CONCAT44(fVar38,fVar45);
                    puVar31 = &uStack_d80;
                    func_0x000108359b1c();
                    fVar42 = (float)NEON_fminnm((int)((float)uStack_d80 * 0.5 +
                                                     (float)uStack_d78 * 0.5),0x4effffff);
                    if (fVar42 <= -2.1474835e+09) {
                      fVar42 = -2.1474835e+09;
                    }
                    iVar26 = (int)fVar42;
                    fVar42 = (float)NEON_fminnm((int)(uStack_d80._4_4_ * 0.5 +
                                                     uStack_d78._4_4_ * 0.5),0x4effffff);
                    if (fVar42 <= -2.1474835e+09) {
                      fVar42 = -2.1474835e+09;
                    }
                    iVar28 = (int)fVar42;
                    iVar1 = (int)puVar31;
                    if (iVar26 <= (int)puVar31) {
                      iVar1 = iVar26;
                    }
                    iVar29 = (int)((ulong)puVar31 >> 0x20);
                    if (iVar28 <= iVar29) {
                      iVar29 = iVar28;
                    }
                    iVar23 = (int)ppppppuVar25;
                    if (iVar23 < iVar26 + 1) {
                      iVar23 = iVar26 + 1;
                    }
                    iVar26 = (int)((ulong)ppppppuVar25 >> 0x20);
                    if (iVar26 < iVar28 + 1) {
                      iVar26 = iVar28 + 1;
                    }
                    FUN_108359a50(((float)iVar23 - (float)iVar1) /
                                  (float)((int)pppppppuVar19 - (int)pppppppuVar17));
                    puVar33 = puVar31;
                    FUN_108359a50(((float)iVar26 - (float)iVar29) /
                                  (float)((int)((ulong)pppppppuVar19 >> 0x20) -
                                         (int)((ulong)pppppppuVar17 >> 0x20)));
                    iStack_124c = 0;
                    iStack_e7c = 0;
                  }
                  else {
                    puVar31 = (undefined8 *)(ulong)uVar14;
                    puVar33 = (undefined8 *)(ulong)uVar15;
                    iStack_124c = iVar13;
                  }
                  do {
                    if ((int)puVar31 != 0) {
                      puVar31 = (undefined8 *)(ulong)((int)puVar31 - 1);
                    }
                    iVar26 = (int)puVar33;
                    puVar33 = (undefined8 *)(ulong)(iVar26 - 1);
                    if (iVar26 < 1) {
                      puVar33 = (undefined8 *)0x0;
                    }
                    uVar5 = (int)uStack_e20;
                    uVar6 = (int)((ulong)uStack_e20 >> 0x20);
                    uVar7 = (int)uStack_e18;
                    uVar8 = (int)((ulong)uStack_e18 >> 0x20);
                    func_0x000108359acc();
                    uStack_ea4 = uVar8;
                    uStack_ea8 = uVar7;
                    uStack_eb0._4_4_ = uVar6;
                    uStack_eb0._0_4_ = uVar5;
                    ppppppuVar36 = (undefined8 ******)&uStack_eb0;
                    FUN_108341380();
                    pppppuStack_ed0 = ppppppuVar36;
                    pppppuStack_ec8 = ppppppuVar25;
                    pppppuStack_ec0 = ppppppuVar36;
                    pppppuStack_eb8 = ppppppuVar25;
                    if (iVar13 != 3) {
                      uStack_d80 = (undefined8 *******)((long)&MACH_HEADER.magic + 1);
                      func_0x00010835c324(&pppppuStack_ec0);
                    }
                    ppppppuVar25 = &pppppuStack_1200;
                    func_0x00010835c160(&uStack_d80,ppppppuVar25,&pppppuStack_ec0,iVar13 == 3,0);
                    cVar4 = cStack_d8;
                    uVar11 = cStack_d8 == '\x01';
                    if ((bool)uVar11) {
                      FUN_108359b28(&ppppppuStack_ef8,&uStack_e20,&uStack_eb0);
                      uStack_fe8 = (undefined8 *******)uStack_ef0;
                      uStack_ff0 = (undefined8 *******)ppppppuStack_ef8;
                      uStack_fd8 = uStack_ee0;
                      uStack_fe0 = uStack_ee8;
                      uStack_fd0 = uStack_ed8;
                      pppppuStack_f48 = pppppuStack_ec8;
                      ppppppuStack_f50 = (undefined8 ******)pppppuStack_ed0;
                      pppppppuVar17 = &ppppppuStack_ea0;
                      FUN_108357e80(pppppppuVar17,&uStack_ff0,&ppppppuStack_f50,3);
                      uStack_f1c = 0;
                      uStack_f20 = 0;
                      uStack_f38 = 0;
                      uStack_f40 = 0;
                      uStack_f28 = 0;
                      uStack_f24 = 0;
                      uStack_f30 = 0;
                      pppppuStack_f48 = (undefined8 *****)0x0;
                      ppppppuStack_f50 = (undefined8 *******)0x0;
                      uStack_f14 = 0x3f800000;
                      uStack_f0c = 0x40800000;
                      uStack_fe8 = (undefined8 *******)uStack_e8c;
                      uStack_fe0 = uStack_e84;
                      FUN_108359624(&uStack_f58,&ppppppuStack_ea0,&pppppuStack_1200,&uStack_ff0,
                                    (ulong)pppppppuVar17 & 0xffffffff);
                      pppppuVar24 = pppppuStack_f48;
                      pppppuStack_f48 = (undefined8 *****)uStack_f58;
                      uStack_f58 = 0;
                      func_0x00010835be9c(pppppuVar24);
                      func_0x000106f47224(&uStack_f58);
                      func_0x00010835c150(&ppppppuStack_f50);
                      ppppppuStack_f60 = (undefined8 *******)0x0;
                      ppppppuStack_f68 = (undefined8 *******)0x0;
                      FUN_10835bca8(&uStack_ff0,&pppppuStack_ed0);
                      FUN_1083578dc(&ppppppuStack_ef8,&uStack_ff0,&ppppppuStack_f68);
                      iStack_120 = iStack_120 + 1;
                      *(int *)(lStack_140 + 0x58) = *(int *)(lStack_140 + 0x58) + 1;
                      uStack_fe8 = (undefined8 *******)uStack_ef0;
                      uStack_ff0 = (undefined8 *******)ppppppuStack_ef8;
                      uStack_fd8 = uStack_ee0;
                      uStack_fe0 = uStack_ee8;
                      uStack_fd0 = uStack_ed8;
                      FUN_10833e2b0(&uStack_d80,&uStack_ff0);
                      uStack_fe8 = (undefined8 *******)ppppppuStack_f60;
                      uStack_ff0 = (undefined8 *******)ppppppuStack_f68;
                      FUN_10833ea80(&uStack_d80,&uStack_ff0,&ppppppuStack_f50);
                      func_0x00010833c334(&uStack_d80);
                      fVar42 = fStack_e28;
                      pppppuVar3 = pppppuStack_eb8;
                      pppppuVar24 = pppppuStack_ec0;
                      if (bVar10) {
                        uVar27 = 0;
                        if (ppppppuVar30[10] != (undefined8 *****)0x0) {
                          do {
                            func_0x00010835c110();
                            uVar27 = extraout_x8_01;
                          } while (extraout_w11_00 != 0);
                        }
                        uStack_fbc = 0;
                        uStack_fc0 = 0;
                        uStack_fd8 = 0;
                        uStack_fe0 = 0;
                        uStack_fc8 = 0;
                        uStack_fc4 = 0;
                        uStack_fd0 = 0;
                        uStack_fe8 = (undefined8 *******)0x0;
                        uStack_ff0 = (undefined8 *******)0x0;
                        uStack_fb4 = 0x3f800000;
                        uStack_fac = 0x40800000;
                        uStack_f70 = uVar27;
                        func_0x00010835c3b8(&uStack_ff0);
                        func_0x00010835c2d8();
                        uVar2 = uStack_f70;
                        uVar27 = uStack_fd8;
                        uStack_f70 = 0;
                        uStack_da8 = 0;
                        uStack_fd8 = uVar2;
                        func_0x00010835be78(uVar27);
                        FUN_108115b2c(&uStack_da8);
                        func_0x00010835c150(&uStack_ff0);
                        iVar29 = (int)pppppuVar24;
                        uStack_d98 = (undefined8 ******)pppppuVar24;
                        iVar26 = (int)((ulong)pppppuVar24 >> 0x20) + 1;
                        iVar28 = (int)pppppuVar3;
                        uStack_d90 = (undefined8 *******)CONCAT44(iVar26,iVar28);
                        func_0x00010835c0f0();
                        iVar1 = (int)((ulong)pppppuVar3 >> 0x20) + -1;
                        uStack_d98 = (undefined8 ******)CONCAT44(iVar1,iVar29);
                        uStack_d90 = (undefined8 *******)pppppuVar3;
                        func_0x00010835c0f0();
                        uStack_d98 = (undefined8 ******)CONCAT44(iVar26,iVar29);
                        uStack_d90 = (undefined8 *******)CONCAT44(iVar1,iVar29 + 1);
                        func_0x00010835c0f0();
                        uStack_d98 = (undefined8 ******)CONCAT44(iVar26,iVar28 + -1);
                        uStack_d90 = (undefined8 *******)CONCAT44(iVar1,iVar28);
                        func_0x00010835c0f0();
                        FUN_108375e94(&uStack_ff0);
                        FUN_108115b2c(&uStack_f70);
                        puVar31 = (undefined8 *)((ulong)puVar31 & 0xffffffff);
                      }
                      else {
                        uVar11 = iVar13 == 3;
                        if (!(bool)uVar11) {
                          fStack_1270 = fStack_e24;
                          FUN_10835bca8(&fStack_f80,&pppppuStack_ec0);
                          fVar41 = fStack_e2c;
                          fVar43 = fStack_f78;
                          ppppppuStack_1240 = (undefined8 ******)CONCAT44(fStack_e2c,uStack_e30);
                          uStack_fe8 = (undefined8 *******)CONCAT44(uStack_fe8._4_4_,fVar42);
                          puStack_d88 = &uStack_d80;
                          uStack_d98 = (undefined8 ******)&puStack_d88;
                          uStack_d90 = &ppppppuStack_f50;
                          fStack_1254 = fStack_f7c;
                          fStack_1250 = fStack_f80;
                          fVar37 = fStack_f80 + 1.0;
                          fVar47 = fStack_f7c + 1.0;
                          uStack_da8 = CONCAT44(fVar47,fVar37);
                          fVar38 = fStack_f78 + -1.0;
                          fStack_1274 = fStack_f74;
                          fVar44 = fStack_f74 + -1.0;
                          uStack_db0 = 0;
                          uStack_db8 = 0;
                          uStack_ff0 = (undefined8 *******)ppppppuStack_1240;
                          fStack_da0 = fVar38;
                          fStack_d9c = fVar44;
                          FUN_1083578dc(&ppppppuStack_ef8,&uStack_da8,&uStack_db8);
                          uVar11 = iVar13 - 1U == 1;
                          fVar45 = fVar37;
                          if (iVar13 - 1U < 2) {
                            uStack_ff0._0_4_ = (float)uStack_da8 + 0.5;
                            uStack_ff0._4_4_ = (float)((ulong)uStack_da8 >> 0x20) + 0.5;
                            uStack_fe8._0_4_ = fStack_da0 + -0.5;
                            uStack_fe8._4_4_ = fStack_d9c + -0.5;
                            FUN_1083578dc(&ppppppuStack_ef8,&uStack_ff0,&uStack_ff0);
                            fVar41 = uStack_ff0._4_4_ + -0.5;
                            ppppppuStack_1240 =
                                 (undefined8 ******)CONCAT44(fVar41,(float)uStack_ff0 + -0.5);
                            fVar42 = (float)uStack_fe8 + 0.5;
                            fStack_1270 = uStack_fe8._4_4_ + 0.5;
                            uStack_fe8 = (undefined8 *******)CONCAT44(fStack_1270,fVar42);
                            uVar11 = iVar13 == 1;
                            uStack_ff0 = (undefined8 *******)ppppppuStack_1240;
                            if ((bool)uVar11) {
                              fVar43 = fVar37;
                              fVar45 = fVar38 + 1.0;
                              fStack_1274 = fVar47;
                              fStack_1254 = fVar44;
                              fStack_1250 = fVar38;
                            }
                          }
                          uVar5 = uStack_db8._4_4_;
                          uVar6 = uStack_db0._4_4_;
                          fStack_dc8 = SUB84(ppppppuStack_1240,0);
                          fStack_dc4 = (float)uStack_db8._4_4_;
                          fStack_dc0 = fStack_dc8 + 1.0;
                          fStack_dbc = (float)uStack_db0._4_4_;
                          fStack_dd8 = fStack_1250;
                          fStack_dd4 = fVar47;
                          fStack_dd0 = fVar45;
                          fStack_dcc = fVar44;
                          func_0x00010835c0e0();
                          fVar45 = fVar42 + -1.0;
                          fStack_dc4 = (float)uVar5;
                          fStack_dbc = (float)uVar6;
                          fVar46 = fVar43 + -1.0;
                          fStack_dd8 = fVar46;
                          fStack_dd4 = fVar47;
                          fStack_dd0 = fVar43;
                          fStack_dcc = fVar44;
                          fStack_dc8 = fVar45;
                          fStack_dc0 = fVar42;
                          func_0x00010835c0e0();
                          uVar5 = (undefined4)uStack_db8;
                          uVar6 = (undefined4)uStack_db0;
                          fStack_dc8 = (float)(undefined4)uStack_db8;
                          fStack_dbc = fVar41 + 1.0;
                          fStack_dc0 = (float)(undefined4)uStack_db0;
                          fStack_dd4 = fStack_1254;
                          fStack_dcc = fStack_1254 + 1.0;
                          fStack_dd8 = fVar37;
                          fStack_dd0 = fVar38;
                          fStack_dc4 = fVar41;
                          func_0x00010835c0e0();
                          fVar42 = fStack_1270 + -1.0;
                          fStack_dc8 = (float)uVar5;
                          fStack_dc0 = (float)uVar6;
                          fStack_dbc = fStack_1270;
                          fVar43 = fStack_1274 + -1.0;
                          fStack_dcc = fStack_1274;
                          fStack_dd8 = fVar37;
                          fStack_dd4 = fVar43;
                          fStack_dd0 = fVar38;
                          fStack_dc4 = fVar42;
                          func_0x00010835c0e0();
                          FUN_10835bd5c(ppppppuStack_1240,fVar41,fStack_1250,fStack_1254,&uStack_d98
                                       );
                          FUN_10835bd5c(fVar45,fVar41,fVar46,fStack_1254,&uStack_d98);
                          FUN_10835bd5c(fVar45,fVar42,fVar46,fVar43,&uStack_d98);
                          FUN_10835bd5c(ppppppuStack_1240,fVar42,fStack_1250,fVar43,&uStack_d98);
                        }
                      }
                      FUN_108375e94(&ppppppuStack_f50);
                      FUN_108358e40(&uStack_ff0,&uStack_d80);
                      FUN_10833de08(&ppppppuStack_ea0,&uStack_ff0);
                      FUN_1083414c4(&uStack_ff0);
                      iStack_e7c = iStack_124c;
                      uStack_e18 = CONCAT44(uStack_ea4,uStack_ea8);
                      ppppppuVar36 = (undefined8 ******)
                                     CONCAT44(uStack_eb0._4_4_,(undefined4)uStack_eb0);
                      ppppppuVar25 = &pppppuStack_ec0;
                      uStack_e20 = ppppppuVar36;
                      FUN_10835bca8(&uStack_e30);
                      bVar10 = false;
                    }
                    else {
                      func_0x00010835c1f4();
                    }
                    func_0x00010835bc64(&uStack_d80);
                    if (cVar4 == '\0') goto LAB_10835b72c;
                  } while ((int)puVar31 != 0 || (int)puVar33 != 0);
                  if (bVar12) {
                    func_0x000108357cb4(&uStack_d80,&ppppppuStack_ea0);
                    func_0x00010835c2f0();
                    func_0x00010835c1d4();
                  }
                  iStack_e7c = iVar13;
                  func_0x00010835c340(&uStack_ff0);
                  FUN_108359b28(&uStack_d80,&uStack_e20,&uStack_ff0);
                  FUN_108358358(appppuStack_e78,&uStack_d80);
                  ppppppuStack_10b0 = ppppppuStack_ea0;
                  ppppuStack_e40 = ppppuStack_de8;
                  pppppuStack_e48 = pppppuStack_df0;
                  ppppppuStack_ea0 = (undefined8 *******)0x0;
                  func_0x00010835c2fc(auStack_10a8,&iStack_e98);
                  uStack_1060 = uStack_e50;
                  uStack_e50 = 0;
                  ppppuStack_1050 = ppppuStack_de8;
                  pppppuStack_1058 = pppppuStack_df0;
                  ppppppuVar36 = (undefined8 ******)pppppuStack_df0;
                }
                else {
                  uStack_d80 = (undefined8 *******)CONCAT44(fVar43,fVar41);
                  uVar34 = (uint)&uStack_d80;
                  ppppppuVar25 = (undefined8 ******)appppuStack_e78;
                  ppppppuVar36 = ppppppuVar39;
                  FUN_1083576dc();
                  if (((uint)ppppppuVar22 & 0x7fffffff) < 0x7f800000) {
                    uVar32 = uVar34;
                    FUN_108359a50();
                    uVar34 = uVar32;
                  }
                  else {
                    uVar32 = 0x7fffffff;
                  }
                  if (((uint)ppppppuVar36 & 0x7fffffff) < 0x7f800000) {
                    FUN_108359a50();
                  }
                  else {
                    uVar34 = 0x7fffffff;
                    ppppppuVar36 = ppppppuVar22;
                  }
                  uVar11 = uVar32 <= uVar14 || uVar14 == 0;
                  if ((uVar32 <= uVar14 || uVar14 == 0) && (uVar15 == 0 || uVar34 <= uVar15))
                  goto LAB_10835af14;
                  ppppppuVar25 = &pppppuStack_1200;
                  func_0x00010835c1b0(&uStack_d80,&ppppppuStack_ea0,ppppppuVar25,pppppppuVar17,
                                      pppppppuVar19);
                  func_0x00010835c2f0();
                  func_0x00010835c1d4();
                  if ((undefined8 *******)ppppppuStack_ea0 != (undefined8 *******)0x0) {
                    if (!bVar10) {
                      iStack_e7c = iVar13;
                    }
                    goto LAB_10835af14;
                  }
                  func_0x00010835c1f4();
                }
LAB_10835b72c:
                FUN_1083414c4(&ppppppuStack_ea0);
                goto LAB_10835a9ec;
              }
            }
            func_0x00010835c1f4();
          }
        }
LAB_10835a9ec:
        fVar42 = SUB84(ppppppuVar36,0);
        FUN_108341670(&pppppuStack_1200);
        if ((undefined8 *******)ppppppuStack_10b0 == (undefined8 *******)0x0) {
          func_0x00010835c140();
        }
        else {
          fVar41 = *param_2;
          func_0x00010835c1fc();
          func_0x00010835c158();
          fVar41 = (1.0 / afStack_1088[0]) * fVar41;
          if (fVar41 <= fVar42) {
            fVar42 = fVar41;
          }
          fVar43 = param_2[1];
          fVar41 = fVar42;
          func_0x00010835c1fc();
          func_0x00010835c158();
          iVar13 = *(int *)((long)ppppppuStack_10b0 + 0x14) -
                   *(int *)((long)ppppppuStack_10b0 + 0xc);
          fVar43 = (1.0 / fStack_1078) * fVar43;
          if (fVar43 <= fVar41) {
            fVar41 = fVar43;
          }
          uStack_11f8 = CONCAT44(*(int *)(ppppppuStack_10b0 + 3) - *(int *)(ppppppuStack_10b0 + 2),
                                 iVar13);
          pppppuStack_1200 = (undefined8 ******)0x0;
          iStack_e98 = 0;
          iStack_e94 = 0;
          ppppppuStack_ea0 = (undefined8 ******)0x0;
          uVar11 = iStack_108c - 1U == 1;
          if (iStack_108c - 1U < 2) {
            ppppppuStack_ea0 = (undefined8 *******)0x0;
            iStack_e98 = iVar13;
            iStack_e94 = *(int *)(ppppppuStack_10b0 + 3) - *(int *)(ppppppuStack_10b0 + 2);
LAB_10835aa8c:
            do {
              func_0x00010835c110();
              ppppppuStack_ef8 = extraout_x8_00;
            } while (extraout_w11 != 0);
          }
          else {
            FUN_108357948(afStack_1088,&ppppppuStack_1020,&ppppppuStack_ea0);
            uStack_ff0 = (undefined8 *******)CONCAT44(fVar41 * fVar40,fVar42 * (float)uVar48);
            pppppppuVar17 = (undefined8 *******)&uStack_ff0;
            func_0x000108357874();
            uStack_d80 = pppppppuVar17;
            func_0x00010835c324(&pppppuStack_1200);
            pppppppuVar17 = (undefined8 *******)&pppppuStack_1200;
            FUN_1083577b0(pppppppuVar17,ppppppuStack_ea0,CONCAT44(iStack_e94,iStack_e98),iStack_108c
                         );
            iStack_e98 = (int)ppppppuStack_ea0;
            iStack_e94 = (int)((ulong)ppppppuStack_ea0 >> 0x20);
            bVar10 = false;
            uVar11 = true;
            bVar12 = false;
            if ((int)pppppppuVar17 < iStack_e98) {
              iVar13 = (int)((ulong)pppppppuVar17 >> 0x20);
              bVar12 = SBORROW4(iStack_e94,iVar13);
              bVar10 = iStack_e94 - iVar13 < 0;
              uVar11 = iStack_e94 == iVar13;
            }
            ppppppuStack_ea0 = pppppppuVar17;
            if ((bool)uVar11 || bVar10 != bVar12) {
              func_0x00010835c140();
              goto LAB_10835ada8;
            }
            uStack_d80 = (undefined8 *******)((long)&MACH_HEADER.magic + 1);
            func_0x00010835c324(&ppppppuStack_ea0);
            if ((undefined8 *******)ppppppuStack_10b0 != (undefined8 *******)0x0)
            goto LAB_10835aa8c;
            ppppppuStack_ef8 = (undefined8 *******)0x0;
          }
          iVar13 = iStack_108c;
          uStack_fe8 = (undefined8 *******)CONCAT44(iStack_e94,iStack_e98);
          uStack_ff0 = (undefined8 *******)ppppppuStack_ea0;
          plVar18 = plVar16;
          (**(code **)(*plVar16 + 0x18))();
          if (((ulong)plVar18 & 1) == 0) {
            uVar11 = iStack_108c == 3 && (int)auStack_10a8[0] == 1;
            if (iStack_108c == 3 && (int)auStack_10a8[0] == 1) {
              FUN_1083599c0(&uStack_d80,ppppppuStack_ef8);
              pppppppuVar17 = uStack_d80;
              ppppppuVar39 = ppppppuStack_ef8;
              uStack_d80 = (undefined8 *******)0x0;
              ppppppuStack_ef8 = pppppppuVar17;
              FUN_10835bc84(ppppppuVar39);
              FUN_1083389b0(&uStack_d80);
              func_0x00010835c3d0(&uStack_ff0);
              FUN_10821a06c();
              iVar13 = 0;
            }
          }
          pppppppuVar17 = (undefined8 *******)ppppppuStack_ef8;
          if ((undefined8 *******)ppppppuStack_ef8 != (undefined8 *******)0x0) {
            do {
              func_0x00010835c100();
            } while (extraout_w10_00 != 0);
          }
          ppppppuStack_1208 = pppppppuVar17;
          FUN_1083415b0();
          uStack_d80 = (undefined8 *******)0x0;
          uStack_d78 = pppppppuVar17;
          (**(code **)(*plVar16 + 0x20))
                    (&ppppppuStack_f50,fVar42,fVar41,plVar16,&ppppppuStack_1208,&uStack_d80,iVar13,
                     &uStack_ff0);
          ppppppuVar39 = ppppppuStack_ef8;
          ppppppuStack_ef8 = ppppppuStack_f50;
          ppppppuStack_f50 = (undefined8 *******)0x0;
          FUN_10835bc84(ppppppuVar39);
          FUN_1083389b0(&ppppppuStack_f50);
          FUN_1083389b0(&ppppppuStack_1208);
          ppppppuVar39 = ppppppuStack_ef8;
          if ((undefined8 *******)ppppppuStack_ef8 == (undefined8 *******)0x0) {
            func_0x00010835c140();
          }
          else {
            ppppppuStack_ef8 = (undefined8 *******)0x0;
            ppppppuStack_1210 = ppppppuVar39;
            uStack_d80 = (undefined8 *******)ppppppuStack_ea0;
            func_0x00010835c3b0();
            FUN_1083389b0(&ppppppuStack_1210);
            if ((iStack_108c == 3) || (iStack_108c == 0)) {
              func_0x000108357cb4(&uStack_d80);
              FUN_10833de08();
              func_0x00010835c1d4();
            }
            FUN_108358358(unaff_x19 + 5,afStack_1088);
            uVar11 = iStack_108c == 3;
            if ((bool)uVar11) {
              uVar48 = *unaff_x19;
              FUN_1083415b0();
              ppppppuStack_f50 = (undefined8 *******)0x0;
              pppppppuVar17 = (undefined8 *******)(unaff_x19 + 5);
              pppppppuVar19 = &ppppppuStack_f50;
              pppppuStack_f48 = (undefined8 *****)uVar48;
              FUN_1083578b0();
              uStack_d70 = 1;
              uStack_d80 = pppppppuVar17;
              uStack_d78 = pppppppuVar19;
              func_0x00010835c318();
              ppppppuStack_1020 = pppppppuVar17;
              ppppppuStack_1018 = pppppppuVar19;
            }
            unaff_x19[0xc] = ppppppuStack_1018;
            unaff_x19[0xb] = ppppppuStack_1020;
            *(int *)((long)unaff_x19 + 0x24) = iStack_108c;
          }
          FUN_1083389b0(&ppppppuStack_ef8);
        }
LAB_10835ada8:
        pppppppuVar17 = &ppppppuStack_10b0;
      }
      else {
        uVar11 = *(int *)(param_1 + 0x15) == 0;
        if (*(int *)(param_1 + 0x15) < 1) goto LAB_10835b7c8;
        func_0x00010835c1b0(&uStack_d80,param_1[0x14],*param_1,ppppppuStack_1030,ppppppuStack_1028);
        if (uStack_d80 == (undefined8 *******)0x0) {
          func_0x00010835c140();
        }
        else {
          iStack_e98 = (int)ppppppuStack_1018;
          iStack_e94 = (int)((ulong)ppppppuStack_1018 >> 0x20);
          ppppppuStack_ea0 = ppppppuStack_1020;
          pppppuStack_1200 =
               (undefined8 *****)((ulong)(uint)-(int)uStack_d28 - (uStack_d28 & 0xffffffff00000000))
          ;
          FUN_1082889d8(&ppppppuStack_ea0,&pppppuStack_1200);
          fVar40 = *param_2;
          fVar42 = param_2[1];
          pppppppuVar19 = uStack_d80;
          if (uStack_d80 != (undefined8 *******)0x0) {
            do {
              func_0x00010835c100();
            } while (extraout_w10 != 0);
          }
          ppppppuStack_1040 = pppppppuVar19;
          FUN_1083415b0();
          uStack_ff0 = (undefined8 *******)0x0;
          auStack_10a8[0] = CONCAT44(iStack_e94,iStack_e98);
          ppppppuStack_10b0 = ppppppuStack_ea0;
          uStack_fe8 = pppppppuVar19;
          (**(code **)(*plVar16 + 0x20))
                    (auStack_1038,fVar40,fVar42,plVar16,&ppppppuStack_1040,&uStack_ff0,3,
                     &ppppppuStack_10b0);
          ppppppuStack_f50 = pppppppuVar17;
          FUN_10833ddc8(&pppppuStack_1200,auStack_1038,&ppppppuStack_f50);
          FUN_10833de08(&uStack_d80,&pppppuStack_1200);
          FUN_1083414c4(&pppppuStack_1200);
          FUN_1083389b0(auStack_1038);
          FUN_1083389b0(&ppppppuStack_1040);
          pppppppuVar17 = uStack_d80;
          uStack_d80 = (undefined8 *******)0x0;
          *unaff_x19 = pppppppuVar17;
          func_0x00010835c2fc(unaff_x19 + 1,&uStack_d78);
          uVar48 = uStack_d30;
          uStack_d30 = 0;
          unaff_x19[10] = uVar48;
          unaff_x19[0xc] = uStack_d20;
          unaff_x19[0xb] = uStack_d28;
        }
        pppppppuVar17 = (undefined8 *******)&uStack_d80;
      }
      FUN_1083414c4(pppppppuVar17);
    }
    func_0x00010835c0b8(extraout_x8);
    if ((bool)uVar11) {
      func_0x00010835c458(unaff_x30);
      return unaff_x30;
    }
  }
  ___stack_chk_fail();
LAB_10835b7c8:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10835b7cc);
  (*pcVar9)();
}



/* Entry: 10835b994; end: 10835b99b;  */

undefined8 FUN_10835b994(void)

{
  return 1;
}



/* Entry: 10835b99c; end: 10835bbdf;  */

undefined1 *
FUN_10835b99c(undefined1 *param_1,undefined8 *param_2,long *param_3,int param_4,int param_5)

{
  long *plVar1;
  undefined8 extraout_x8;
  long lVar2;
  int extraout_w10;
  long *plVar3;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  *param_1 = 0;
  param_1[0xca8] = 0;
  lVar2 = *param_3;
  *(long *)(param_1 + 0xcb8) = param_3[1];
  *(long *)(param_1 + 0xcb0) = lVar2;
  *(int *)(param_1 + 0xcc0) = param_4;
  lStack_58 = 0;
  if (((int)*param_3 < (int)param_3[1]) &&
     (*(int *)((long)param_3 + 4) < *(int *)((long)param_3 + 0xc))) {
    plVar1 = (long *)(param_1 + 0xcb0);
    if (param_4 != 0) {
      lStack_70 = 0x100000001;
      FUN_10833e0cc(plVar1,&lStack_70);
      if (((((int)*param_3 <= (int)*plVar1) || (*(int *)(param_1 + 0xcb8) <= (int)param_3[1])) ||
          (*(int *)((long)param_3 + 4) <= *(int *)(param_1 + 0xcb4))) ||
         (*(int *)(param_1 + 0xcbc) <= *(int *)((long)param_3 + 0xc))) goto LAB_10835bb6c;
    }
    plVar3 = (long *)*param_2;
    func_0x00010821a0c0(plVar1);
    uStack_60 = 0;
    if (param_2[0x28] != 0) {
      do {
        func_0x00010835c100();
        uStack_60 = extraout_x8;
      } while (extraout_w10 != 0);
    }
    (**(code **)(*plVar3 + 0x18))(&lStack_70,plVar3);
    lVar2 = lStack_58;
    lStack_58 = lStack_70;
    lStack_70 = 0;
    FUN_10835bc1c(lVar2);
    func_0x00010835c238();
    func_0x00010835c304();
    if (lStack_58 != 0) {
      lVar2 = param_2[0x29];
      if (lVar2 != 0) {
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      }
      FUN_10835bc40(param_1);
      lStack_70 = lStack_58;
      lStack_58 = 0;
      func_0x00010835c268();
      FUN_10833bed4();
      func_0x00010835c238();
      param_1[0xca8] = 1;
      FUN_10833e1e4((float)-*(int *)(param_1 + 0xcb0),(float)-*(int *)(param_1 + 0xcb4),param_1);
      func_0x00010835c3b8();
      func_0x000108143790(param_1);
      if (*(int *)(param_1 + 0xcc0) == 1) {
        lStack_68 = param_3[1];
        lStack_70 = *param_3;
        func_0x00010835c268();
        FUN_10835bbe0();
      }
      else {
        lStack_68 = *(long *)(param_1 + 0xcb8);
        lStack_70 = *plVar1;
        func_0x00010835c268();
        FUN_10835bbe0();
      }
      if (param_5 != 0) {
        func_0x00010833e2f0(param_1,param_2 + 9);
      }
    }
  }
LAB_10835bb6c:
  FUN_10830c294(&lStack_58);
  return param_1;
}



/* Entry: 10835bbe0; end: 10835bc1b;  */

void FUN_10835bbe0(undefined8 param_1,undefined8 param_2)

{
  FUN_10817500c(param_2);
  func_0x00010835c268();
  FUN_10833e3ec();
  return;
}



/* Entry: 10835bc1c; end: 10835bc3f;  */

void FUN_10835bc1c(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010835c13c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 10835bc40; end: 10835bc83;  */

void FUN_10835bc40(long param_1)

{
  if (*(char *)(param_1 + 0xca8) == '\x01') {
    FUN_10833bf80();
    *(undefined1 *)(param_1 + 0xca8) = 0;
  }
  return;
}



/* Entry: 10835bc84; end: 10835bca7;  */

void FUN_10835bc84(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010835c13c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 10835bca8; end: 10835bcdf;  */

undefined4 *
FUN_10835bca8(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 *param_5,undefined8 *param_6)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)*param_6;
  func_0x00010835c30c();
  *param_5 = uVar1;
  param_5[1] = param_2;
  param_5[2] = param_3;
  param_5[3] = param_4;
  return param_5;
}



/* Entry: 10835bce0; end: 10835bd5b;  */

void FUN_10835bce0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long lVar1;
  undefined1 auStack_58 [40];
  
  func_0x00010835c2c4();
  lVar1 = *(long *)*param_1;
  *(int *)(lVar1 + 0xc60) = *(int *)(lVar1 + 0xc60) + 1;
  *(int *)(*(long *)(lVar1 + 0xc40) + 0x58) = *(int *)(*(long *)(lVar1 + 0xc40) + 0x58) + 1;
  func_0x00010835c384(auStack_58,param_2,param_3);
  FUN_10833e2b0(lVar1,auStack_58);
  FUN_10833ea80(*(undefined8 *)*unaff_x20);
  func_0x00010833c334(*(undefined8 *)*unaff_x20);
  return;
}



/* Entry: 10835bd5c; end: 10835bda3;  */

void FUN_10835bd5c(float param_1,float param_2,float param_3,float param_4,undefined8 param_5)

{
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  fStack_18 = param_1 + 1.0;
  fStack_14 = param_2 + 1.0;
  fStack_28 = param_3 + 1.0;
  fStack_24 = param_4 + 1.0;
  fStack_30 = param_3;
  fStack_2c = param_4;
  fStack_20 = param_1;
  fStack_1c = param_2;
  FUN_10835bce0(param_5,&fStack_20,&fStack_30);
  return;
}



/* Entry: 10835bda4; end: 10835bdd3;  */

long FUN_10835bda4(long param_1)

{
  FUN_10835bdd4();
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x00010835c2e0();
  }
  return param_1;
}



/* Entry: 10835bdd4; end: 10835be0f;  */

void FUN_10835bdd4(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((int)param_1[1] != 0) {
    uVar1 = *param_1;
    uVar2 = uVar1 + (long)(int)param_1[1] * 0x98;
    do {
      FUN_1083414c4();
      uVar1 = uVar1 + 0x98;
    } while (uVar1 < uVar2);
  }
  return;
}



/* Entry: 10835be10; end: 10835be3f;  */

long FUN_10835be10(long param_1)

{
  FUN_10835be40();
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x00010835c2e0();
  }
  return param_1;
}



/* Entry: 10835be40; end: 10835be77;  */

void FUN_10835be40(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((int)param_1[1] != 0) {
    uVar2 = *param_1;
    uVar1 = uVar2 + (long)(int)param_1[1] * 8;
    do {
      func_0x000106f47224();
      uVar2 = uVar2 + 8;
    } while (uVar2 < uVar1);
  }
  return;
}



/* Entry: 10835be78; end: 10835bec3;  */

void FUN_10835be78(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010835c13c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 10835bec4; end: 10835bed7;  */

void FUN_10835bec4(void)

{
  FUN_108357064();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10835bed8; end: 10835bf63;  */

void FUN_10835bed8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  long param_5)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(uint *)(param_2 + 0x28);
  uStack_48 = *param_4;
  *param_4 = 0;
  uStack_50 = 0;
  uStack_40 = (ulong)uVar2 | 0x200000000;
  uStack_38 = param_3;
  func_0x00010835c304();
  lVar1 = param_2 + 0x18;
  if (param_5 != 0) {
    lVar1 = param_5;
  }
  FUN_108331d18(&uStack_58,&uStack_48,lVar1,0);
  uVar3 = uStack_58;
  uStack_58 = 0;
  *param_1 = uVar3;
  FUN_108333638(&uStack_58);
  FUN_10810a400(&uStack_48);
  return;
}



/* Entry: 10835bf64; end: 10835bfc7;  */

void FUN_10835bf64(long param_1,undefined8 param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lStack_28;
  
  lStack_28 = *param_3;
  if (lStack_28 != 0) {
    piVar1 = (int *)(lStack_28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10839f844(param_2,&lStack_28,param_1 + 0x18);
  func_0x000106f47184(&lStack_28);
  return;
}



/* Entry: 10835bfc8; end: 10835bfe3;  */

void FUN_10835bfc8(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  undefined1 uStack_61;
  undefined8 auStack_60 [6];
  
  if (*param_3 == 0) {
    *param_1 = 0;
    return;
  }
  if ((((0 < (int)*(uint *)(param_3 + 5)) &&
       ((0 < (int)*(uint *)((long)param_3 + 0x2c) && *(uint *)(param_3 + 5) >> 0x1d == 0) &&
        *(uint *)((long)param_3 + 0x2c) >> 0x1d == 0)) && ((int)param_3[4] != 0)) &&
     (*(int *)((long)param_3 + 0x24) != 0)) {
    plVar5 = (long *)param_3[2];
    plVar4 = param_3 + 3;
    func_0x0001078bdb50();
    if (plVar4 <= plVar5) {
      bVar2 = false;
      if (*param_3 != 0) {
        bVar2 = *(char *)(*param_3 + 0x59) != '\0';
      }
      if (bVar2) {
        uStack_61 = 0;
        FUN_1083b7cdc(auStack_60,param_3,&uStack_61);
        uVar1 = auStack_60[0];
        auStack_60[0] = 0;
        *param_1 = uVar1;
        FUN_1083b8098(auStack_60);
      }
      else {
        func_0x0001083b8110();
        iVar3 = (int)param_3;
        FUN_108330de8();
        if (iVar3 == 0) {
          *param_1 = 0;
        }
        else {
          FUN_1083b814c(param_1,auStack_60,0);
        }
        func_0x0001083b8100(auStack_60);
      }
      return;
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 10835bfe4; end: 10835c047;  */

void FUN_10835bfe4(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00010835c404();
  if (*(int *)(param_1 + 8) != 0) {
    _memcpy();
  }
  if ((*(byte *)((long)unaff_x19 + 0xc) & 1) != 0) {
    func_0x00010835c2e0();
  }
  param_3 = param_3 >> 3;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *unaff_x19 = unaff_x20;
  *(uint *)((long)unaff_x19 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 10835c048; end: 10835c08b;  */

undefined1  [16] FUN_10835c048(long *param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puVar2 = &uStack_20;
  if ((int)param_2 <= (int)((uint)param_1 ^ 0x7fffffff)) {
    uStack_18 = 0x7fffffff;
    uStack_20 = 8;
    uVar3 = (ulong)((int)param_2 + (uint)param_1);
    FUN_10840fe24(0x3ff8000000000000,&uStack_20,uVar3);
    auVar4._8_8_ = uVar3;
    auVar4._0_8_ = puVar2;
    return auVar4;
  }
  func_0x00010bdb1a68();
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(*param_1 + 0xa8))) {
    return *(undefined1 (*) [16])(*(long *)(*param_1 + 0xa0) + (param_2 & 0xffffffff) * 0x98 + 0x58)
    ;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10835c0b8);
  (*pcVar1)();
}



/* Entry: 10835c08c; end: 10835c47f;  */

undefined1  [16] FUN_10835c08c(long *param_1,uint param_2)

{
  code *pcVar1;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(*param_1 + 0xa8))) {
    return *(undefined1 (*) [16])(*(long *)(*param_1 + 0xa0) + (ulong)param_2 * 0x98 + 0x58);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10835c0b8);
  (*pcVar1)();
}



/* Entry: 10835c480; end: 10835c4c7;  */

undefined8 * FUN_10835c480(undefined8 *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1 + 8;
  *param_1 = &PTR_DAT_110a323b0;
  FUN_10814102c();
  if (param_3 == 0) {
    param_3 = iVar1;
    func_0x000108383c38();
  }
  *(int *)(param_1 + 4) = param_3;
  return param_1;
}



/* Entry: 10835c4c8; end: 10835c547;  */

void FUN_10835c4c8(long *param_1,ulong param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  undefined1 uStack_31;
  
  if (((param_3 != 0) && (*(int *)(param_2 + 8) != 0)) &&
     (uVar1 = param_2, func_0x0001078bdb50(), uVar1 <= param_4)) {
    (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3,param_4,&uStack_31);
  }
  return;
}



/* Entry: 10835c548; end: 10835c58b;  */

long * FUN_10835c548(long *param_1,ulong *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  (**(code **)(*param_1 + 0x38))();
  if ((int)param_1 == 0) {
    return param_1;
  }
  uVar2 = *(uint *)(param_3 + 8);
  if (uVar2 == 0) {
    return (long *)0x0;
  }
  iVar3 = *(int *)(param_3 + 0xa0);
  uVar4 = uVar2;
  FUN_1081a6298();
  uVar1 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
  uVar6 = 0;
  do {
    uVar7 = uVar1;
    if (uVar1 == uVar6) break;
    uVar5 = uVar2;
    func_0x0001081a62b4(uVar2,uVar6);
    uVar7 = uVar6;
    uVar6 = uVar6 + 1;
  } while ((*param_2 >> ((long)iVar3 + -4 + (long)(int)uVar5 * 4 & 0x3fU) & 1) != 0);
  return (long *)(ulong)((int)uVar4 <= (int)uVar7);
}



/* Entry: 10835c58c; end: 10835c5a7;  */

undefined4 FUN_10835c58c(uint param_1)

{
  code *pcVar1;
  
  if (param_1 < 0x1b) {
    return *(undefined4 *)(&UNK_10df1d05c + (ulong)param_1 * 4);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10835c5a8);
  (*pcVar1)();
}



/* Entry: 10835c5a8; end: 10835c607;  */

long FUN_10835c5a8(long param_1,long param_2)

{
  func_0x0001081fa8b4();
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  return param_1;
}



/* Entry: 10835c608; end: 10835c667;  */

bool FUN_10835c608(long *param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  if (((int)param_1[1] == (int)param_2[1]) &&
     (*(int *)((long)param_1 + 0xc) == *(int *)((long)param_2 + 0xc))) {
    lVar2 = *param_1;
    lVar3 = *param_2;
    if (lVar2 != lVar3) {
      bVar1 = false;
      if ((lVar2 != 0) && (lVar3 != 0)) {
        bVar1 = CONCAT44(*(undefined4 *)(lVar2 + 4),*(undefined4 *)(lVar2 + 8)) ==
                CONCAT44(*(undefined4 *)(lVar3 + 4),*(undefined4 *)(lVar3 + 8));
      }
      return bVar1;
    }
    return true;
  }
  return false;
}



/* Entry: 10835c668; end: 10835c75f;  */

long FUN_10835c668(long param_1,int param_2,int param_3,long param_4)

{
  ulong uVar1;
  
  uVar1 = (ulong)*(uint *)(param_1 + 8);
  if (*(uint *)(param_1 + 8) != 0) {
    func_0x00010835c64c();
    return ((long)param_2 << (uVar1 & 0x3f)) + param_4 * param_3;
  }
  return 0;
}



/* Entry: 10835c760; end: 10835c77b;  */

/* WARNING: Removing unreachable block (ram,0x00010835c87c) */
/* WARNING: Removing unreachable block (ram,0x0001078bdee8) */
/* WARNING: Removing unreachable block (ram,0x0001078bdef0) */
/* WARNING: Removing unreachable block (ram,0x0001078bdef8) */
/* WARNING: Removing unreachable block (ram,0x0001078bdefc) */
/* WARNING: Removing unreachable block (ram,0x0001078bdf00) */

void FUN_10835c760(undefined8 *param_1,ulong param_2,long param_3,uint param_4,long param_5)

{
  *param_1 = 0;
  param_1[1] = (ulong)param_4 | param_5 << 0x20;
  param_1[2] = param_2 & 0xffffffff | param_3 << 0x20;
  return;
}



/* Entry: 10835c77c; end: 10835c79f;  */

void FUN_10835c77c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piStack_18;
  
  piStack_18 = (int *)0x0;
  FUN_10835c7a0(param_1,param_2,&piStack_18);
  if (piStack_18 == (int *)0x0) {
    return;
  }
  do {
    iVar1 = *piStack_18;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piStack_18,0x10);
    if (bVar3) {
      *piStack_18 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10835c7a0; end: 10835c7c3;  */

/* WARNING: Removing unreachable block (ram,0x00010835c87c) */
/* WARNING: Removing unreachable block (ram,0x0001078bdee8) */
/* WARNING: Removing unreachable block (ram,0x0001078bdef0) */
/* WARNING: Removing unreachable block (ram,0x0001078bdef8) */
/* WARNING: Removing unreachable block (ram,0x0001078bdefc) */
/* WARNING: Removing unreachable block (ram,0x0001078bdf00) */

void FUN_10835c7a0(undefined8 *param_1,ulong param_2,long param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = *param_4;
  *param_4 = 0;
  *param_1 = uVar1;
  param_1[1] = 0x200000004;
  param_1[2] = param_2 & 0xffffffff | param_3 << 0x20;
  return;
}



/* Entry: 10835c7c4; end: 10835c7e7;  */

void FUN_10835c7c4(undefined8 param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piStack_18;
  
  piStack_18 = (int *)0x0;
  FUN_10835c7e8(param_1,&piStack_18);
  if (piStack_18 == (int *)0x0) {
    return;
  }
  do {
    iVar1 = *piStack_18;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piStack_18,0x10);
    if (bVar3) {
      *piStack_18 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10835c7e8; end: 10835c893;  */

/* WARNING: Removing unreachable block (ram,0x00010835c87c) */
/* WARNING: Removing unreachable block (ram,0x0001078bdee8) */
/* WARNING: Removing unreachable block (ram,0x0001078bdef0) */
/* WARNING: Removing unreachable block (ram,0x0001078bdef8) */
/* WARNING: Removing unreachable block (ram,0x0001078bdefc) */
/* WARNING: Removing unreachable block (ram,0x0001078bdf00) */

void FUN_10835c7e8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_3;
  *param_3 = 0;
  *param_1 = uVar1;
  param_1[1] = 0x200000004;
  param_1[2] = param_2;
  return;
}



/* Entry: 10835c894; end: 10835d387;  */

undefined8 FUN_10835c894(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  switch(param_1) {
  case 500:
    break;
  case 0x1f5:
    uVar3 = uRam000000011372b0d8;
    if ((bRam000000011372b0e0 & 1) == 0) {
      iVar2 = 0x1372b0e0;
      ___cxa_guard_acquire();
      uVar3 = uRam000000011372b0d8;
      if (iVar2 != 0) {
        FUN_10835d388(4,0x1f5);
        func_0x00010835d554(0x11372b0d8);
        uVar3 = uRam000000011372b0d8;
      }
    }
    break;
  case 0x1f6:
    uVar3 = uRam000000011372b0e8;
    if ((bRam000000011372b0f0 & 1) == 0) {
      iVar2 = 0x1372b0f0;
      ___cxa_guard_acquire();
      uVar3 = uRam000000011372b0e8;
      if (iVar2 != 0) {
        FUN_10835d388(8,0x1f6);
        func_0x00010835d554(0x11372b0e8);
        uVar3 = uRam000000011372b0e8;
      }
    }
    break;
  case 0x1f7:
    uVar3 = uRam000000011372b0f8;
    if ((bRam000000011372b100 & 1) == 0) {
      iVar2 = 0x1372b100;
      ___cxa_guard_acquire();
      uVar3 = uRam000000011372b0f8;
      if (iVar2 != 0) {
        FUN_10835d388(0xc,0x1f7);
        func_0x00010835d554(0x11372b0f8);
        uVar3 = uRam000000011372b0f8;
      }
    }
    break;
  case 0x1f8:
    uVar3 = uRam000000011372b108;
    if ((bRam000000011372b110 & 1) == 0) {
      iVar2 = 0x1372b110;
      ___cxa_guard_acquire();
      uVar3 = uRam000000011372b108;
      if (iVar2 != 0) {
        FUN_10835d388(0x10,0x1f8);
        func_0x00010835d554(0x11372b108);
        uVar3 = uRam000000011372b108;
      }
    }
    break;
  case 0x1f9:
    uVar3 = uRam000000011372b118;
    if ((bRam000000011372b120 & 1) == 0) {
      iVar2 = 0x1372b120;
      ___cxa_guard_acquire();
      uVar3 = uRam000000011372b118;
      if (iVar2 != 0) {
        FUN_10835d388(0x14,0x1f9);
        func_0x00010835d554(0x11372b118);
        uVar3 = uRam000000011372b118;
      }
    }
    break;
  case 0x1fa:
    uVar3 = uRam000000011372b128;
    if ((bRam000000011372b130 & 1) == 0) {
      iVar2 = 0x1372b130;
      ___cxa_guard_acquire();
      uVar3 = uRam000000011372b128;
      if (iVar2 != 0) {
        FUN_10835d388(0x1c,0x1fa);
        func_0x00010835d554(0x11372b128);
        uVar3 = uRam000000011372b128;
      }
    }
    break;
  case 0x1fb:
    uVar3 = uRam000000011372b138;
    if ((bRam000000011372b140 & 1) == 0) {
      iVar2 = 0x1372b140;
      ___cxa_guard_acquire();
      uVar3 = uRam000000011372b138;
      if (iVar2 != 0) {
        FUN_10835d3d0(4,0x1fb);
        func_0x00010835d554(0x11372b138);
        uVar3 = uRam000000011372b138;
      }
    }
    break;
  case 0x1fc:
    uVar3 = uRam000000011372b148;
    if ((bRam000000011372b150 & 1) == 0) {
      iVar2 = 0x1372b150;
      ___cxa_guard_acquire();
      uVar3 = uRam000000011372b148;
      if (iVar2 != 0) {
        FUN_10835d3d0(8,0x1fc);
        func_0x00010835d554(0x11372b148);
        uVar3 = uRam000000011372b148;
      }
    }
    break;
  case 0x1fd:
    uVar3 = uRam000000011372b158;
    if ((bRam000000011372b160 & 1) == 0) {
      iVar2 = 0x1372b160;
      ___cxa_guard_acquire();
      uVar3 = uRam000000011372b158;
      if (iVar2 != 0) {
        FUN_10835d3d0(0xc,0x1fd);
        func_0x00010835d554(0x11372b158);
        uVar3 = uRam000000011372b158;
      }
    }
    break;
  case 0x1fe:
    uVar3 = uRam000000011372b168;
    if ((bRam000000011372b170 & 1) == 0) {
      iVar2 = 0x1372b170;
      ___cxa_guard_acquire();
      uVar3 = uRam000000011372b168;
      if (iVar2 != 0) {
        FUN_10835d3d0(0x10,0x1fe);
        func_0x00010835d554(0x11372b168);
        uVar3 = uRam000000011372b168;
      }
    }
    break;
  case 0x1ff:
    uVar3 = uRam000000011372b178;
    if ((bRam000000011372b180 & 1) == 0) {
      iVar2 = 0x1372b180;
      ___cxa_guard_acquire();
      uVar3 = uRam000000011372b178;
      if (iVar2 != 0) {
        FUN_10835d3d0(0x14,0x1ff);
        func_0x00010835d554(0x11372b178);
        uVar3 = uRam000000011372b178;
      }
    }
    break;
  case 0x200:
    uVar3 = uRam000000011372b188;
    if ((bRam000000011372b190 & 1) == 0) {
      iVar2 = 0x1372b190;
      ___cxa_guard_acquire();
      uVar3 = uRam000000011372b188;
      if (iVar2 != 0) {
        FUN_10835d3d0(0x1c,0x200);
        func_0x00010835d554(0x11372b188);
        uVar3 = uRam000000011372b188;
      }
    }
    break;
  case 0x201:
    uVar3 = uRam000000011372b198;
    if ((bRam000000011372b1a0 & 1) == 0) {
      iVar2 = 0x1372b1a0;
      ___cxa_guard_acquire();
      uVar3 = uRam000000011372b198;
      if (iVar2 != 0) {
        FUN_10835d530();
        func_0x00010835d574();
        func_0x00010835d560();
        func_0x00010835d554(0x11372b198);
        uVar3 = uRam000000011372b198;
      }
    }
    break;
  case 0x202:
    uVar3 = uRam000000011372b1e8;
    if ((bRam000000011372b1f0 & 1) == 0) {
      iVar2 = 0x1372b1f0;
      ___cxa_guard_acquire();
      uVar3 = uRam000000011372b1e8;
      if (iVar2 != 0) {
        FUN_10835d530();
        func_0x00010835d574();
        func_0x00010835d560();
        func_0x00010835d554(0x11372b1e8);
        uVar3 = uRam000000011372b1e8;
      }
    }
    break;
  case 0x203:
    uVar3 = uRam000000011372b1f8;
    if ((bRam000000011372b200 & 1) == 0) {
      iVar2 = 0x1372b200;
      ___cxa_guard_acquire();
      uVar3 = uRam000000011372b1f8;
      if (iVar2 != 0) {
        FUN_10835d530();
        func_0x00010835d574();
        func_0x00010835d560();
        func_0x00010835d554(0x11372b1f8);
        uVar3 = uRam000000011372b1f8;
      }
    }
    break;
  case 0x204:
    uVar3 = uRam000000011372b208;
    if ((bRam000000011372b210 & 1) == 0) {
      iVar2 = 0x1372b210;
      ___cxa_guard_acquire();
      uVar3 = uRam000000011372b208;
      if (iVar2 != 0) {
        FUN_10835d530();
        func_0x00010835d574();
        func_0x00010835d560();
        func_0x00010835d554(0x11372b208);
        uVar3 = uRam000000011372b208;
      }
    }
    break;
  case 0x205:
    uVar3 = uRam000000011372b218;
    if ((bRam000000011372b220 & 1) == 0) {
      iVar2 = 0x1372b220;
      ___cxa_guard_acquire();
      uVar3 = uRam000000011372b218;
      if (iVar2 != 0) {
        FUN_10835d530();
        func_0x00010835d574();
        func_0x00010835d560();
        func_0x00010835d554(0x11372b218);
        uVar3 = uRam000000011372b218;
      }
    }
    break;
  case 0x206:
    uVar3 = uRam000000011372b228;
    if ((bRam000000011372b230 & 1) == 0) {
      iVar2 = 0x1372b230;
      ___cxa_guard_acquire();
      uVar3 = uRam000000011372b228;
      if (iVar2 != 0) {
        FUN_10835d530();
        func_0x00010835d574();
        func_0x00010835d560();
        func_0x00010835d554(0x11372b228);
        uVar3 = uRam000000011372b228;
      }
    }
    break;
  case 0x207:
    uVar3 = uRam000000011372b1b8;
    if ((bRam000000011372b1c0 & 1) == 0) {
      iVar2 = 0x1372b1c0;
      ___cxa_guard_acquire();
      uVar3 = uRam000000011372b1b8;
      if (iVar2 != 0) {
        FUN_10835d418(0,0x207);
        func_0x00010835d554(0x11372b1b8);
        uVar3 = uRam000000011372b1b8;
      }
    }
    break;
  case 0x208:
    uVar3 = uRam000000011372b1c8;
    if ((bRam000000011372b1d0 & 1) == 0) {
      iVar2 = 0x1372b1d0;
      ___cxa_guard_acquire();
      uVar3 = uRam000000011372b1c8;
      if (iVar2 != 0) {
        FUN_10835d418(1,0x208);
        func_0x00010835d554(0x11372b1c8);
        uVar3 = uRam000000011372b1c8;
      }
    }
    break;
  case 0x209:
    uVar3 = uRam000000011372b1d8;
    if ((bRam000000011372b1e0 & 1) == 0) {
      iVar2 = 0x1372b1e0;
      ___cxa_guard_acquire();
      uVar3 = uRam000000011372b1d8;
      if (iVar2 != 0) {
        FUN_10835d418(2,0x209);
        func_0x00010835d554(0x11372b1d8);
        uVar3 = uRam000000011372b1d8;
      }
    }
    break;
  case 0x20a:
    uVar3 = uRam000000011372b238;
    if ((bRam000000011372b240 & 1) == 0) {
      iVar2 = 0x1372b240;
      ___cxa_guard_acquire();
      uVar3 = uRam000000011372b238;
      if (iVar2 != 0) {
        FUN_10835d530();
        func_0x00010835d574();
        func_0x00010835d560();
        func_0x00010835d554(0x11372b238);
        uVar3 = uRam000000011372b238;
      }
    }
    break;
  case 0x20b:
    uVar3 = uRam000000011372b248;
    if ((bRam000000011372b250 & 1) == 0) {
      iVar2 = 0x1372b250;
      ___cxa_guard_acquire();
      uVar3 = uRam000000011372b248;
      if (iVar2 != 0) {
        FUN_10835d530();
        func_0x00010835d574();
        func_0x00010835d560();
        func_0x00010835d554(0x11372b248);
        uVar3 = uRam000000011372b248;
      }
    }
    break;
  case 0x20c:
    uVar3 = uRam000000011372b258;
    if ((bRam000000011372b260 & 1) == 0) {
      iVar2 = 0x1372b260;
      ___cxa_guard_acquire();
      uVar3 = uRam000000011372b258;
      if (iVar2 != 0) {
        FUN_10835d530();
        func_0x00010835d560(FUN_1083942b8,&UNK_10df1d850);
        func_0x00010835d554(0x11372b258);
        uVar3 = uRam000000011372b258;
      }
    }
    break;
  case 0x20d:
    uVar3 = uRam000000011372b268;
    if ((bRam000000011372b270 & 1) == 0) {
      iVar2 = 0x1372b270;
      ___cxa_guard_acquire();
      uVar3 = uRam000000011372b268;
      if (iVar2 != 0) {
        FUN_10835d530();
        func_0x00010835d624();
        func_0x00010835d560();
        func_0x00010835d554(0x11372b268);
        uVar3 = uRam000000011372b268;
      }
    }
    break;
  case 0x20e:
    uVar3 = uRam000000011372b1a8;
    if ((bRam000000011372b1b0 & 1) == 0) {
      iVar2 = 0x1372b1b0;
      ___cxa_guard_acquire();
      uVar3 = uRam000000011372b1a8;
      if (iVar2 != 0) {
        FUN_10835d530();
        func_0x00010835d624();
        func_0x00010835d560();
        func_0x00010835d554(0x11372b1a8);
        uVar3 = uRam000000011372b1a8;
      }
    }
    break;
  case 0x20f:
    uVar3 = uRam000000011372b278;
    if ((bRam000000011372b280 & 1) == 0) {
      iVar2 = 0x1372b280;
      ___cxa_guard_acquire();
      uVar3 = uRam000000011372b278;
      if (iVar2 != 0) {
        FUN_10835d530();
        func_0x00010835d624();
        func_0x00010835d560();
        func_0x00010835d554(0x11372b278);
        uVar3 = uRam000000011372b278;
      }
    }
    break;
  case 0x210:
    uVar3 = uRam000000011372b288;
    if ((bRam000000011372b290 & 1) == 0) {
      iVar2 = 0x1372b290;
      ___cxa_guard_acquire();
      uVar3 = uRam000000011372b288;
      if (iVar2 != 0) {
        FUN_10835d530();
        func_0x00010835d624();
        func_0x00010835d560();
        func_0x00010835d554(0x11372b288);
        uVar3 = uRam000000011372b288;
      }
    }
    break;
  default:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10835d1c4);
    (*pcVar1)();
  }
  return uVar3;
}



/* Entry: 10835d388; end: 10835d3cf;  */

void FUN_10835d388(void)

{
  undefined1 auStack_40 [32];
  
  func_0x00010835d5d0();
  FUN_1083a3c34(auStack_40,&UNK_10f48f4f7);
  func_0x00010835d580();
  func_0x00010835d574();
  func_0x00010835d60c();
  func_0x00010835d568();
  return;
}



/* Entry: 10835d3d0; end: 10835d417;  */

void FUN_10835d3d0(void)

{
  undefined1 auStack_40 [32];
  
  func_0x00010835d5d0();
  FUN_1083a3c34(auStack_40,&UNK_10f48f674);
  func_0x00010835d580();
  func_0x00010835d574();
  func_0x00010835d60c();
  func_0x00010835d568();
  return;
}



/* Entry: 10835d418; end: 10835d4c7;  */

undefined8 FUN_10835d418(int param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  undefined3 uStack_2f;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  auStack_48[0] = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_28 = 0;
  _uStack_30 = CONCAT31(uStack_2f,1);
  uStack_2c = param_2;
  if (param_1 == 2) {
    uVar1 = 0x100;
  }
  else {
    if (param_1 != 1) {
      func_0x00010835d5b0();
      FUN_1083a3c34(&uStack_50,&UNK_10f48fb84);
      func_0x00010835d574(uStack_50);
      func_0x00010835d618();
      func_0x00010835d600();
      return unaff_x19;
    }
    uVar1 = 0x40;
  }
  FUN_10835d4c8(uVar1,auStack_48);
  return uVar1;
}



/* Entry: 10835d4c8; end: 10835d52f;  */

undefined8 FUN_10835d4c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  func_0x00010835d5b0();
  FUN_1083a3c34(&uStack_28,&UNK_10f48fc39);
  func_0x00010835d574(uStack_28);
  func_0x00010835d618();
  func_0x00010835d5f4();
  return param_2;
}



/* Entry: 10835d530; end: 10835d62f;  */

void FUN_10835d530(void)

{
  return;
}



/* Entry: 10835d630; end: 10835d713;  */

void FUN_10835d630(ulong param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  ulong uStack_28;
  
  uStack_28 = param_1 & 0xffffffff | param_2 << 0x20;
  uStack_30 = 0;
  uStack_38 = ((ulong *)param_3[4])[1];
  uStack_40 = *(ulong *)param_3[4];
  puVar5 = &uStack_30;
  func_0x000108219544(puVar5,&uStack_40);
  if ((int)puVar5 == 0) {
    return;
  }
  iVar1 = *(int *)(param_3 + 3);
  if (iVar1 < 1) {
    bVar3 = true;
  }
  else if (iVar1 == 1) {
    bVar3 = (int)uStack_40 == *(int *)*param_3;
  }
  else {
    bVar3 = false;
  }
  iVar2 = *(int *)((long)param_3 + 0x1c);
  if (iVar2 < 1) {
    bVar4 = true;
  }
  else {
    if (iVar2 != 1) goto LAB_10835d6dc;
    bVar4 = uStack_40._4_4_ == *(int *)param_3[1];
  }
  if ((bool)(bVar3 & bVar4)) {
    return;
  }
LAB_10835d6dc:
  uVar6 = *param_3;
  FUN_10835d714(uVar6,iVar1,uStack_40 & 0xffffffff,uStack_38 & 0xffffffff);
  if ((int)uVar6 != 0) {
    FUN_10835d714(param_3[1],iVar2,uStack_40._4_4_,uStack_38._4_4_);
  }
  return;
}



/* Entry: 10835d714; end: 10835d74f;  */

bool FUN_10835d714(long param_1,uint param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  
  uVar3 = (ulong)(param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU));
  uVar5 = 0;
  iVar6 = param_3 + -1;
  do {
    uVar4 = uVar3;
    if (uVar3 == uVar5) break;
    iVar2 = *(int *)(param_1 + uVar5 * 4);
    bVar1 = iVar6 < iVar2;
    uVar4 = uVar5;
    uVar5 = uVar5 + 1;
    iVar6 = iVar2;
  } while (bVar1 && iVar2 <= param_4);
  return (long)(int)param_2 <= (long)uVar4;
}



/* Entry: 10835d750; end: 10835db47;  */

undefined8 * FUN_10835d750(undefined8 *param_1,long *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  int *piVar10;
  int *piVar11;
  undefined8 *puVar12;
  ulong uVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  long lVar17;
  int iVar18;
  long lVar19;
  char *pcVar20;
  undefined4 *puVar21;
  int iVar22;
  undefined4 uVar23;
  long *plVar24;
  int *piVar25;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  *param_1 = 0;
  param_1[1] = 0x100000000;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[3] = 0x100000000;
  param_1[5] = 0x100000000;
  param_1[6] = 0;
  param_1[7] = 0x100000000;
  plVar24 = param_1 + 8;
  *plVar24 = 0;
  param_1[10] = 0;
  param_1[9] = 0x100000000;
  param_1[0xb] = 0x100000000;
  piVar25 = (int *)*param_2;
  piVar10 = (int *)param_2[1];
  iVar1 = (int)param_2[3];
  iVar15 = *(int *)((long)param_2 + 0x1c);
  piVar16 = (int *)param_2[4];
  iVar18 = *piVar16;
  iVar2 = piVar16[1];
  iVar22 = piVar16[2];
  iVar3 = piVar16[3];
  if (iVar1 < 1) {
    bVar8 = false;
    piVar16 = piVar25;
    iVar5 = iVar1;
  }
  else {
    bVar8 = iVar18 == *piVar25;
    piVar16 = piVar25 + 1;
    iVar5 = iVar1 + -1;
    if (!bVar8) {
      piVar16 = piVar25;
      iVar5 = iVar1;
    }
  }
  if (iVar15 < 1) {
    bVar9 = false;
    piVar25 = piVar10;
    iVar6 = iVar15;
  }
  else {
    bVar9 = iVar2 == *piVar10;
    piVar25 = piVar10 + 1;
    iVar6 = iVar15 + -1;
    if (!bVar9) {
      piVar25 = piVar10;
      iVar6 = iVar15;
    }
  }
  piVar10 = piVar16;
  FUN_10835db48(piVar16,iVar5,bVar8);
  piVar11 = piVar25;
  FUN_10835db48(piVar25,iVar6,bVar9,iVar2,iVar3);
  FUN_10835dbbc(param_1,iVar5 + 2);
  func_0x00010835dbe0(param_1 + 4,iVar5 + 2);
  FUN_10835dc04(*param_3,param_3[2],param_1[4],*param_1,piVar16,iVar5,
                (iVar22 - iVar18) - (int)piVar10,piVar10,iVar18,iVar22,bVar8);
  FUN_10835dbbc(param_1 + 2,iVar6 + 2);
  func_0x00010835dbe0(param_1 + 6,iVar6 + 2);
  FUN_10835dc04(param_3[1],param_3[3],param_1[6],param_1[2],piVar25,iVar6,
                (iVar3 - iVar2) - (int)piVar11,piVar11,iVar2,iVar3,bVar9);
  param_1[0xc] = 0;
  iVar18 = iVar5 + 1 + (iVar5 + 1) * iVar6;
  *(int *)(param_1 + 0xd) = iVar18;
  *(int *)((long)param_1 + 0x6c) = iVar18;
  if (param_2[2] != 0) {
    uVar14 = *(uint *)(param_1 + 9);
    iVar22 = iVar18;
    if ((int)((*(uint *)((long)param_1 + 0x4c) >> 1) - uVar14) < iVar18) {
      if ((int)(uVar14 ^ 0x7fffffff) < iVar18) {
        func_0x00010bdb1a68();
LAB_10835db08:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10835db0c);
        (*pcVar7)();
      }
      uStack_68 = 0x7fffffff;
      uStack_70 = 1;
      puVar12 = &uStack_70;
      uVar13 = (ulong)(uVar14 + iVar18);
      FUN_10840fe24(0x3ff8000000000000);
      if (*(int *)(param_1 + 9) != 0) {
        _memcpy(puVar12,*plVar24);
      }
      if ((*(byte *)((long)param_1 + 0x4c) & 1) != 0) {
        _free(*plVar24);
      }
      if (0x7ffffffe < uVar13) {
        uVar13 = 0x7fffffff;
      }
      param_1[8] = puVar12;
      *(uint *)((long)param_1 + 0x4c) = (int)uVar13 << 1 | 1;
      uVar14 = *(uint *)(param_1 + 9);
      iVar22 = *(int *)(param_1 + 0xd);
    }
    *(uint *)(param_1 + 9) = uVar14 + iVar18;
    func_0x000108272874(0x3ff8000000000000,param_1 + 10,iVar22);
    lVar17 = 0;
    iVar18 = 0;
    lVar19 = param_1[10];
    *(int *)(param_1 + 0xb) = *(int *)(param_1 + 0xb) + iVar22;
    iVar22 = 0;
    if (iVar6 != iVar15) {
      iVar22 = iVar1 + 1;
    }
    pcVar20 = (char *)(param_2[2] + (long)iVar22);
    puVar21 = (undefined4 *)(param_2[5] + (long)iVar22 * 4);
    for (; iVar18 <= iVar6; iVar18 = iVar18 + 1) {
      for (iVar22 = 0; iVar22 <= iVar1; iVar22 = iVar22 + 1) {
        bVar9 = false;
        if (iVar22 == 0) {
          bVar9 = bVar8;
        }
        if (bVar9 == false) {
          iVar15 = (int)lVar17;
          if ((iVar15 < 0) || (*(int *)(param_1 + 9) <= iVar15)) goto LAB_10835db08;
          cVar4 = *pcVar20;
          *(char *)(*plVar24 + lVar17) = cVar4;
          if (cVar4 == '\x02') {
            uVar23 = *puVar21;
          }
          else {
            uVar23 = 0;
          }
          if (*(int *)(param_1 + 0xb) <= iVar15) goto LAB_10835db08;
          *(undefined4 *)(lVar19 + lVar17 * 4) = uVar23;
          lVar17 = lVar17 + 1;
        }
        puVar21 = puVar21 + 1;
        pcVar20 = pcVar20 + 1;
      }
    }
    for (uVar13 = 0;
        (*(uint *)(param_1 + 9) & ((int)*(uint *)(param_1 + 9) >> 0x1f ^ 0xffffffffU)) != uVar13;
        uVar13 = uVar13 + 1) {
      if (*(char *)(*plVar24 + uVar13) == '\x01') {
        *(int *)((long)param_1 + 0x6c) = *(int *)((long)param_1 + 0x6c) + -1;
      }
    }
  }
  return param_1;
}



/* Entry: 10835db48; end: 10835dbbb;  */

int FUN_10835db48(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  ulong uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    param_4 = param_5 - param_4;
    if (param_3 == 0) {
      param_4 = 0;
    }
  }
  else {
    if (param_3 == 0) {
      param_4 = 0;
    }
    else {
      param_4 = *param_1 - param_4;
    }
    uVar1 = (ulong)(param_3 != 0);
    param_1 = param_1 + uVar1 + 1;
    for (; (long)uVar1 < (long)param_2; uVar1 = uVar1 + 2) {
      iVar2 = param_5;
      if ((int)uVar1 + 1 < param_2) {
        iVar2 = *param_1;
      }
      param_4 = (param_4 - param_1[-1]) + iVar2;
      param_1 = param_1 + 2;
    }
  }
  return param_4;
}



/* Entry: 10835dbbc; end: 10835dc03;  */

void FUN_10835dbbc(void)

{
  undefined4 unaff_w19;
  long unaff_x20;
  
  func_0x00010835de7c();
  FUN_1081f848c();
  *(undefined4 *)(unaff_x20 + 8) = unaff_w19;
  return;
}



/* Entry: 10835dc04; end: 10835de8f;  */

void FUN_10835dc04(float param_1,float param_2,float *param_3,int *param_4,int *param_5,uint param_6
                  ,int param_7,int param_8,int param_9,undefined4 param_10,byte param_11)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  float *pfVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar7 = param_2 - param_1;
  fVar8 = (float)param_7;
  fVar9 = fVar7 / fVar8;
  if (fVar8 <= fVar7) {
    fVar9 = (fVar7 - fVar8) / (float)param_8;
  }
  *param_4 = param_9;
  *param_3 = param_1;
  piVar4 = param_4;
  pfVar5 = param_3;
  for (uVar6 = (ulong)(param_6 & ((int)param_6 >> 0x1f ^ 0xffffffffU)); uVar6 != 0;
      uVar6 = uVar6 - 1) {
    pfVar5 = pfVar5 + 1;
    piVar4 = piVar4 + 1;
    iVar2 = *param_5;
    *piVar4 = iVar2;
    bVar3 = (param_11 & 1) == 0;
    fVar11 = fVar9;
    if (bVar3) {
      fVar11 = 1.0;
    }
    fVar10 = 0.0;
    if (bVar3) {
      fVar10 = fVar9 * (float)(iVar2 - param_9);
    }
    fVar11 = fVar11 * (float)(iVar2 - param_9);
    if (fVar7 < fVar8) {
      fVar11 = fVar10;
    }
    param_1 = param_1 + fVar11;
    *pfVar5 = param_1;
    param_11 = param_11 ^ 1;
    param_5 = param_5 + 1;
    param_9 = iVar2;
  }
  lVar1 = (-(ulong)(param_6 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_6 << 2) + 4;
  *(undefined4 *)((long)param_4 + lVar1) = param_10;
  *(float *)((long)param_3 + lVar1) = param_2;
  return;
}



/* Entry: 10835de90; end: 10835e14b;  */

ulong FUN_10835de90(ulong *param_1,float *param_2,ulong *param_3)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  float *pfVar5;
  ulong extraout_x8;
  float fVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_78;
  
  uStack_78 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_a0 = 0;
  uStack_98 = 0;
  FUN_10833f168(&uStack_a0,param_1,param_1 + 1);
  fVar10 = *param_2;
  uVar7 = uStack_a0 & 0xffffffff;
  if (((((float)uStack_a0 < fVar10) || (uStack_a0._4_4_ < param_2[1])) ||
      (param_2[2] < (float)uStack_98)) || (param_2[3] < uStack_98._4_4_)) {
    fVar9 = (float)uStack_98 - (float)uStack_a0;
    bVar4 = (float)uStack_98 == fVar10;
    if (((float)uStack_98 <= fVar10) &&
       ((pfVar5 = (float *)0x0, (float)uStack_98 < fVar10 ||
        (bVar4 = fVar9 == 0.0, !bVar4 && 0.0 <= fVar9)))) goto LAB_10835e108;
    fVar11 = param_2[2];
    if (fVar11 <= (float)uStack_a0) {
      bVar2 = true;
      bVar4 = false;
      if (fVar9 <= 0.0) {
        bVar2 = false;
        bVar4 = false;
        if (!NAN(fVar11) && !NAN((float)uStack_a0)) {
          bVar2 = fVar11 < (float)uStack_a0;
          bVar4 = fVar11 == (float)uStack_a0;
        }
      }
      if (!bVar2) goto LAB_10835df5c;
LAB_10835e078:
      pfVar5 = (float *)0x0;
      goto LAB_10835e108;
    }
LAB_10835df5c:
    fVar13 = param_2[1];
    uVar7 = (ulong)(uint)uStack_a0._4_4_;
    fVar9 = uStack_98._4_4_ - uStack_a0._4_4_;
    bVar4 = uStack_98._4_4_ == fVar13;
    if ((uStack_98._4_4_ <= fVar13) &&
       ((pfVar5 = (float *)0x0, uStack_98._4_4_ < fVar13 ||
        (bVar4 = fVar9 == 0.0, !bVar4 && 0.0 <= fVar9)))) goto LAB_10835e108;
    fVar12 = param_2[3];
    if (fVar12 <= uStack_a0._4_4_) {
      bVar2 = true;
      bVar4 = false;
      if (fVar9 <= 0.0) {
        bVar2 = false;
        bVar4 = false;
        if (!NAN(fVar12) && !NAN(uStack_a0._4_4_)) {
          bVar2 = fVar12 < uStack_a0._4_4_;
          bVar4 = fVar12 == uStack_a0._4_4_;
        }
      }
      if (bVar2) goto LAB_10835e078;
    }
    fVar9 = *(float *)((long)param_1 + 4);
    fVar14 = *(float *)((long)param_1 + 0xc);
    uStack_88 = param_1[1];
    uStack_90 = *param_1;
    uVar7 = 4;
    if (fVar14 <= fVar9) {
      uVar7 = 0xc;
    }
    pfVar5 = (float *)((ulong)&uStack_90 | uVar7);
    if (*pfVar5 < fVar13) {
      uVar7 = 0;
      if (fVar14 <= fVar9) {
        uVar7 = 8;
      }
      fVar6 = fVar13;
      FUN_10835e14c(param_1);
      *(float *)((ulong)&uStack_90 | uVar7) = fVar6;
      *pfVar5 = fVar13;
    }
    uVar7 = 0xc;
    if (fVar14 <= fVar9) {
      uVar7 = 4;
    }
    if (fVar12 < *(float *)((ulong)&uStack_90 | uVar7)) {
      uVar1 = 8;
      if (fVar14 <= fVar9) {
        uVar1 = 0;
      }
      fVar9 = fVar12;
      FUN_10835e14c(param_1);
      *(float *)((ulong)&uStack_90 | uVar1) = fVar9;
      *(float *)((ulong)&uStack_90 | uVar7) = fVar12;
    }
    fVar9 = (float)uStack_90;
    fVar13 = (float)uStack_88;
    fVar12 = (float)uStack_88;
    if ((float)uStack_88 <= (float)uStack_90) {
      fVar12 = (float)uStack_90;
    }
    uVar1 = 8;
    fVar14 = (float)uStack_90;
    if ((float)uStack_88 <= (float)uStack_90) {
      uVar1 = 0;
      fVar14 = (float)uStack_88;
    }
    uVar7 = (ulong)(uint)fVar14;
    bVar2 = false;
    bVar4 = false;
    if (fVar10 < fVar12) {
      bVar2 = false;
      bVar4 = true;
      if (!NAN(fVar14) && !NAN(fVar11)) {
        bVar2 = fVar14 < fVar11;
        bVar4 = false;
      }
    }
    if (bVar2 == bVar4) {
      bVar3 = true;
      if (((float)uStack_90 <= fVar11) && (bVar3 = false, !NAN((float)uStack_90) && !NAN(fVar10))) {
        bVar3 = (float)uStack_90 < fVar10;
      }
      bVar2 = false;
      bVar4 = false;
      if (!bVar3) {
        bVar2 = false;
        bVar4 = false;
        if (!NAN((float)uStack_90) && !NAN((float)uStack_88)) {
          bVar2 = (float)uStack_90 < (float)uStack_88;
          bVar4 = (float)uStack_90 == (float)uStack_88;
        }
      }
      if (!bVar4) goto LAB_10835e078;
    }
    func_0x00010835e520();
    uVar7 = 0;
    if (!bVar2) {
      uVar7 = extraout_x8;
    }
    pfVar5 = (float *)((ulong)&uStack_90 | uVar7);
    if (*pfVar5 < fVar10) {
      fVar14 = fVar10;
      func_0x00010835e1d0(&uStack_90);
      *pfVar5 = fVar10;
      uVar7 = 4;
      if (fVar13 <= fVar9) {
        uVar7 = 0xc;
      }
      *(float *)((ulong)&uStack_90 | uVar7) = fVar14;
    }
    bVar4 = fVar12 == fVar11;
    uVar7 = uStack_90;
    uVar8 = uStack_88;
    if (fVar11 < fVar12) {
      fVar10 = fVar11;
      func_0x00010835e1d0(&uStack_90);
      *(float *)((ulong)&uStack_90 | uVar1) = fVar11;
      bVar4 = fVar9 == fVar13;
      uVar7 = 0xc;
      if (fVar13 <= fVar9) {
        uVar7 = 4;
      }
      *(float *)((ulong)&uStack_90 | uVar7) = fVar10;
      uVar7 = uStack_90;
      uVar8 = uStack_88;
    }
LAB_10835e100:
    param_3[1] = uVar8;
    *param_3 = uVar7;
  }
  else {
    bVar4 = param_1 == param_3;
    if (!bVar4) {
      uVar7 = *param_1;
      uVar8 = param_1[1];
      goto LAB_10835e100;
    }
  }
  pfVar5 = (float *)0x1;
LAB_10835e108:
  func_0x00010835e538(uStack_78);
  if (bVar4) {
    return uVar7;
  }
  ___stack_chk_fail();
  fVar10 = *pfVar5;
  fVar9 = pfVar5[1];
  if (ABS(pfVar5[3] - fVar9) <= 0.00024414062) {
    return (ulong)(uint)((fVar10 + pfVar5[2]) * 0.5);
  }
  fVar13 = pfVar5[2];
  fVar9 = (((float)uVar7 - fVar9) * (fVar13 - fVar10)) / (pfVar5[3] - fVar9) + fVar10;
  fVar11 = fVar10;
  if (fVar10 <= fVar13) {
    fVar11 = fVar13;
    fVar13 = fVar10;
  }
  if ((fVar13 <= fVar9) && (fVar13 = fVar9, fVar11 < fVar9)) {
    fVar13 = fVar11;
  }
  return (ulong)(uint)fVar13;
}



/* Entry: 10835e14c; end: 10835e237;  */

float FUN_10835e14c(float param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *param_2;
  fVar3 = param_2[1];
  if (ABS(param_2[3] - fVar3) <= 0.00024414062) {
    return (fVar2 + param_2[2]) * 0.5;
  }
  fVar4 = param_2[2];
  fVar3 = ((param_1 - fVar3) * (fVar4 - fVar2)) / (param_2[3] - fVar3) + fVar2;
  fVar1 = fVar2;
  if (fVar2 <= fVar4) {
    fVar1 = fVar4;
    fVar4 = fVar2;
  }
  if ((fVar4 <= fVar3) && (fVar4 = fVar3, fVar1 < fVar3)) {
    fVar4 = fVar1;
  }
  return fVar4;
}



/* Entry: 10835e238; end: 10835e4cf;  */

float * FUN_10835e238(float *param_1,float *param_2,float *param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 *puVar3;
  float *pfVar4;
  long lVar5;
  bool bVar6;
  undefined1 uVar7;
  float *pfVar8;
  undefined8 *puVar9;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  long lVar10;
  float *pfVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uStack_c0;
  float fStack_b8;
  float fStack_b4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  
  puVar9 = &uStack_c0;
  pfVar11 = (float *)&uStack_c0;
  uStack_88 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  fVar17 = param_1[1];
  fVar18 = param_1[3];
  fVar16 = param_2[1];
  uVar7 = param_1[(ulong)(fVar17 < fVar18) * 2 + 1] == fVar16;
  if (fVar16 < param_1[(ulong)(fVar17 < fVar18) * 2 + 1]) {
    fVar13 = param_1[(ulong)(fVar18 <= fVar17) * 2 + 1];
    fVar14 = param_2[3];
    uVar7 = fVar13 == fVar14;
    if (fVar13 < fVar14) {
      uStack_98 = *(undefined8 *)(param_1 + 2);
      uStack_a0 = *(undefined8 *)param_1;
      uVar7 = fVar13 < fVar16;
      pfVar8 = param_1;
      if ((bool)uVar7) {
        fVar13 = fVar16;
        FUN_10835e14c();
        FUN_10835e520();
        uVar1 = extraout_x8;
        if ((bool)uVar7) {
          uVar1 = 0;
        }
        *(float *)((ulong)&uStack_a0 | uVar1) = fVar13;
        uVar1 = 0xc;
        if ((bool)uVar7) {
          uVar1 = 4;
        }
        *(float *)((ulong)&uStack_a0 | uVar1) = fVar16;
      }
      uVar1 = 4;
      if (fVar17 < fVar18) {
        uVar1 = 0xc;
      }
      pfVar12 = (float *)((ulong)&uStack_a0 | uVar1);
      fVar16 = *pfVar12;
      uVar7 = fVar16 < fVar14;
      if (fVar14 < fVar16) {
        FUN_10835e520();
        uVar1 = 0;
        if ((bool)uVar7) {
          uVar1 = extraout_x8_00;
        }
        pfVar8 = param_1;
        fVar16 = fVar14;
        FUN_10835e14c();
        *(float *)((ulong)&uStack_a0 | uVar1) = fVar16;
        *pfVar12 = fVar14;
      }
      fVar16 = *param_1;
      fVar17 = param_1[2];
      FUN_10835e520();
      uVar1 = 0;
      if ((bool)uVar7) {
        uVar1 = extraout_x8_01;
      }
      fVar13 = *(float *)((ulong)&uStack_a0 | uVar1);
      fVar18 = *param_2;
      uVar7 = fVar13 == fVar18;
      bVar6 = fVar13 < fVar18;
      if (fVar13 <= fVar18) {
LAB_10835e3d0:
        uStack_98 = CONCAT44(uStack_98._4_4_,fVar18);
        uStack_a0 = CONCAT44(uStack_a0._4_4_,fVar18);
        puVar9 = &uStack_a0;
        pfVar11 = (float *)0x1;
      }
      else {
        FUN_10835e520();
        uVar2 = extraout_x8_02;
        if (bVar6) {
          uVar2 = 0;
        }
        fVar14 = *(float *)((ulong)&uStack_a0 | uVar2);
        fVar15 = param_2[2];
        uVar7 = fVar14 == fVar15;
        if (fVar15 <= fVar14) {
          param_1 = pfVar8;
          fVar18 = fVar15;
          if ((param_4 & 1) != 0) goto LAB_10835e3f8;
          goto LAB_10835e3d0;
        }
        if (fVar18 <= fVar14) {
          uStack_c0 = *(undefined8 *)((ulong)&uStack_a0 | uVar2);
        }
        else {
          puVar3 = (undefined4 *)((ulong)&uStack_a0 | 0xc);
          if (fVar16 < fVar17) {
            puVar3 = (undefined4 *)((ulong)&uStack_a0 | 4);
          }
          uStack_c0 = CONCAT44(*puVar3,fVar18);
          pfVar11 = &fStack_b8;
          pfVar8 = (float *)&uStack_a0;
          fVar14 = fVar18;
          FUN_10835e4d0();
          fStack_b8 = fVar18;
          fStack_b4 = fVar14;
        }
        if (fVar13 <= fVar15) {
          pfVar12 = pfVar11 + 2;
          *(undefined8 *)pfVar12 = *(undefined8 *)((ulong)&uStack_a0 | uVar1);
        }
        else {
          pfVar8 = (float *)&uStack_a0;
          fVar18 = fVar15;
          FUN_10835e4d0();
          pfVar12 = pfVar11 + 4;
          *pfVar12 = fVar15;
          pfVar11[2] = fVar15;
          pfVar11[3] = fVar18;
          pfVar4 = (float *)((ulong)&uStack_a0 | 4);
          if (fVar16 < fVar17) {
            pfVar4 = (float *)((ulong)&uStack_a0 | 0xc);
          }
          pfVar11[5] = *pfVar4;
        }
        pfVar11 = (float *)((ulong)((long)pfVar12 - (long)&uStack_c0) >> 3);
        uVar7 = fVar16 == fVar17;
        if (fVar17 <= fVar16) {
          lVar5 = ((long)pfVar12 - (long)&uStack_c0) * 0x20000000 >> 0x20;
          pfVar12 = param_3 + (long)(int)pfVar11 * 2;
          for (lVar10 = 0; uVar7 = lVar10 == lVar5, param_3 = pfVar8, lVar10 <= lVar5;
              lVar10 = lVar10 + 1) {
            *(undefined8 *)pfVar12 = (&uStack_c0)[lVar10];
            pfVar12 = pfVar12 + -2;
          }
          goto LAB_10835e3fc;
        }
      }
      _memcpy(param_3,puVar9,
              (-((ulong)pfVar11 >> 0x1f & 1) & 0xfffffff800000000 |
              ((ulong)pfVar11 & 0xffffffff) << 3) + 8);
      goto LAB_10835e3fc;
    }
  }
LAB_10835e3f8:
  param_3 = param_1;
  pfVar11 = (float *)0x0;
LAB_10835e3fc:
  func_0x00010835e538(uStack_88);
  if (!(bool)uVar7) {
    ___stack_chk_fail();
    func_0x00010835e1d0();
    return param_3;
  }
  return pfVar11;
}



/* Entry: 10835e4d0; end: 10835e51f;  */

ulong FUN_10835e4d0(ulong param_1,long param_2)

{
  float fVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  func_0x00010835e1d0();
  fVar3 = *(float *)(param_2 + 4);
  fVar4 = *(float *)(param_2 + 0xc);
  fVar1 = fVar4;
  if (fVar3 <= fVar4) {
    fVar1 = fVar3;
  }
  if (fVar3 <= fVar4) {
    fVar3 = fVar4;
  }
  uVar2 = (ulong)(uint)fVar1;
  if ((fVar1 <= (float)param_1) && (uVar2 = param_1, fVar3 < (float)param_1)) {
    uVar2 = (ulong)(uint)fVar3;
  }
  return uVar2;
}



/* Entry: 10835e520; end: 10835e5cf;  */

void FUN_10835e520(void)

{
  return;
}



/* Entry: 10835e5d0; end: 10835e6af;  */

undefined4 * FUN_10835e5d0(undefined4 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s12;
  undefined4 unaff_s13;
  undefined4 unaff_s14;
  undefined4 unaff_s15;
  
  uVar1 = *param_3;
  uVar3 = param_3[1];
  uVar5 = param_3[2];
  uVar7 = param_3[3];
  func_0x00010835f3a0();
  func_0x00010835f3a0(param_3[4],param_3[5],param_3[6],param_3[7]);
  func_0x00010835f3d8();
  uVar8 = param_3[0xb];
  func_0x00010835f3a0(param_3[8],param_3[9],param_3[10]);
  func_0x00010835f3a8();
  uVar2 = param_3[0xc];
  uVar4 = param_3[0xd];
  uVar6 = param_3[0xe];
  uVar9 = param_3[0xf];
  func_0x00010835f3a0();
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar5;
  param_1[3] = uVar7;
  param_1[4] = unaff_s12;
  param_1[5] = unaff_s13;
  param_1[6] = unaff_s14;
  param_1[7] = unaff_s15;
  param_1[8] = unaff_s8;
  param_1[9] = unaff_s9;
  param_1[10] = unaff_s10;
  param_1[0xb] = uVar8;
  param_1[0xc] = uVar2;
  param_1[0xd] = uVar4;
  param_1[0xe] = uVar6;
  param_1[0xf] = uVar9;
  return param_1;
}



/* Entry: 10835e6b0; end: 10835e73b;  */

void FUN_10835e6b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  
  func_0x00010835f3b8();
  func_0x00010835f308();
  FUN_10835e7b8(*(undefined8 *)(unaff_x19 + 8));
  func_0x00010835f308();
  FUN_10835e7b8(*(undefined8 *)(unaff_x19 + 0x10));
  func_0x00010835f308();
  func_0x00010835f380(*(undefined8 *)(unaff_x19 + 0x18));
  func_0x00010835f308();
  func_0x00010835f35c();
  func_0x00010835f34c(CONCAT44((float)((ulong)param_1 >> 0x20) + (float)((ulong)param_3 >> 0x20),
                               (float)param_1 + (float)param_3));
  return;
}



/* Entry: 10835e73c; end: 10835e7b7;  */

undefined8 * FUN_10835e73c(undefined8 param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float in_register_00005008;
  float in_register_0000500c;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  fVar2 = (float)((ulong)param_1 >> 0x20);
  fVar1 = (float)param_1;
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  uStack_58 = param_2[5];
  uStack_60 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  func_0x00010835f344();
  func_0x00010835f308();
  func_0x00010835f388();
  func_0x00010835f308();
  func_0x00010835f380(&uStack_60);
  func_0x00010835f308();
  fVar1 = (float)uVar3 + fVar1;
  fVar2 = (float)((ulong)uVar3 >> 0x20) + fVar2;
  in_register_00005008 = (float)uVar4 + in_register_00005008;
  in_register_0000500c = (float)((ulong)uVar4 >> 0x20) + in_register_0000500c;
  func_0x00010835f35c();
  param_2[7] = CONCAT44(in_register_0000500c,in_register_00005008);
  param_2[6] = CONCAT44(fVar2,fVar1);
  return param_2;
}



/* Entry: 10835e7b8; end: 10835e7d3;  */

void FUN_10835e7b8(undefined4 param_1)

{
  func_0x00010835f36c(param_1);
  return;
}



/* Entry: 10835e7d4; end: 10835e867;  */

undefined8 * FUN_10835e7d4(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined4 *)((long)param_1 + 0xc);
  uVar2 = 0;
  uVar3 = 0;
  func_0x00010835f338(uVar1,*param_1);
  func_0x00010835f308();
  func_0x00010835f3cc();
  param_1[1] = uVar3;
  *param_1 = CONCAT44(uVar2,uVar1);
  uVar1 = *(undefined4 *)((long)param_1 + 0x1c);
  uVar2 = 0;
  uVar3 = 0;
  func_0x00010835f338(uVar1,param_1[2]);
  func_0x00010835f308();
  func_0x00010835f3cc();
  param_1[3] = uVar3;
  param_1[2] = CONCAT44(uVar2,uVar1);
  uVar1 = *(undefined4 *)((long)param_1 + 0x2c);
  uVar2 = 0;
  uVar3 = 0;
  func_0x00010835f338(uVar1,param_1[4]);
  func_0x00010835f308();
  func_0x00010835f3cc();
  param_1[5] = uVar3;
  param_1[4] = CONCAT44(uVar2,uVar1);
  uVar1 = *(undefined4 *)((long)param_1 + 0x3c);
  uVar2 = 0;
  uVar3 = 0;
  func_0x00010835f338(uVar1,param_1[6]);
  func_0x00010835f308();
  func_0x00010835f3cc();
  param_1[7] = uVar3;
  param_1[6] = CONCAT44(uVar2,uVar1);
  return param_1;
}



/* Entry: 10835e868; end: 10835e8c3;  */

undefined8 *
FUN_10835e868(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = param_5[1];
  uVar2 = *param_5;
  uStack_48 = param_5[3];
  uVar4 = param_5[2];
  uStack_50 = uVar4;
  uStack_40 = uVar2;
  FUN_10835e7b8(&uStack_40);
  *(undefined4 *)param_5 = param_1;
  uVar1 = (undefined4)uVar2;
  *(undefined4 *)((long)param_5 + 4) = uVar1;
  uVar3 = (undefined4)uVar4;
  *(undefined4 *)(param_5 + 1) = uVar3;
  *(undefined4 *)((long)param_5 + 0xc) = param_4;
  func_0x00010835f380(&uStack_50);
  *(undefined4 *)(param_5 + 2) = param_1;
  *(undefined4 *)((long)param_5 + 0x14) = uVar1;
  *(undefined4 *)(param_5 + 3) = uVar3;
  *(undefined4 *)((long)param_5 + 0x1c) = param_4;
  return param_5;
}



/* Entry: 10835e8c4; end: 10835e94b;  */

void FUN_10835e8c4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = param_3[1];
  uStack_40 = *param_3;
  uStack_48 = param_3[3];
  uStack_50 = param_3[2];
  uStack_58 = param_3[5];
  uStack_60 = param_3[4];
  uStack_68 = param_3[7];
  uStack_70 = param_3[6];
  func_0x00010835f344();
  func_0x00010835f308();
  FUN_10835e7b8(&uStack_50);
  func_0x00010835f308();
  func_0x00010835f388();
  func_0x00010835f308();
  func_0x00010835f380(&uStack_70);
  func_0x00010835f308();
  func_0x00010835f35c();
  func_0x00010835f34c(CONCAT44((float)((ulong)param_1 >> 0x20) + (float)((ulong)param_2 >> 0x20),
                               (float)param_1 + (float)param_2));
  return;
}



/* Entry: 10835e94c; end: 10835ebb7;  */

void FUN_10835e94c(undefined8 *param_1,uint *param_2)

{
  bool bVar1;
  float fVar2;
  float fVar7;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar8;
  float fVar9;
  float fVar11;
  undefined8 uVar10;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 in_d4;
  undefined8 uVar17;
  undefined8 uVar18;
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
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  fVar2 = *(float *)((long)param_1 + 0x3c);
  if ((*(float *)((long)param_1 + 0xc) == 0.0) && (*(float *)((long)param_1 + 0x1c) == 0.0)) {
    bVar1 = false;
    if ((*(float *)((long)param_1 + 0x2c) == 0.0) && (bVar1 = false, !NAN(fVar2))) {
      bVar1 = fVar2 == 1.0;
    }
    if (bVar1) {
      fVar2 = (float)*param_1;
      fVar7 = (float)((ulong)*param_1 >> 0x20);
      uStack_30 = CONCAT44(fVar7 * 1.0,fVar2 * 1.0);
      uStack_28 = CONCAT44(fVar7 * -1.0,fVar2 * -1.0);
      fVar2 = (float)param_1[2];
      fVar7 = (float)((ulong)param_1[2] >> 0x20);
      uStack_40 = CONCAT44(fVar7 * 1.0,fVar2 * 1.0);
      uStack_38 = CONCAT44(fVar7 * -1.0,fVar2 * -1.0);
      uVar3 = param_1[6];
      uVar4 = (ulong)*param_2;
      func_0x00010835f398();
      func_0x00010835f308();
      func_0x00010835f344(param_2[1]);
      func_0x00010835f318();
      fVar2 = (float)(uVar4 >> 0x20);
      fVar8 = (float)((ulong)in_d4 >> 0x20);
      uVar10 = CONCAT44(fVar2 + fVar8,(float)uVar4 + (float)in_d4);
      uVar5 = (ulong)param_2[2];
      func_0x00010835f398();
      func_0x00010835f308();
      fVar7 = (float)(uVar5 >> 0x20);
      func_0x00010835f148(uVar10,CONCAT44(fVar8 + fVar7,(float)in_d4 + (float)uVar5));
      func_0x00010835f308();
      uVar6 = (ulong)param_2[3];
      func_0x00010835f344(uVar6);
      func_0x00010835f308();
      fVar8 = (float)(uVar6 >> 0x20);
      func_0x00010835f148(CONCAT44(fVar2 + fVar8,(float)uVar4 + (float)uVar6),
                          CONCAT44(fVar7 + fVar8,(float)uVar5 + (float)uVar6));
      func_0x00010835f318();
      func_0x00010835f378(uVar10);
      func_0x00010835f308();
      uVar3 = CONCAT44((float)((ulong)uVar3 >> 0x20) + (float)((ulong)uVar10 >> 0x20) * 1.0,
                       (float)uVar3 + (float)uVar10 * 1.0);
      goto LAB_10835eba4;
    }
  }
  uVar17 = *param_1;
  uVar18 = 0;
  uStack_28 = CONCAT44(*(float *)((long)param_1 + 0xc),*(undefined4 *)(param_1 + 1));
  uStack_40 = param_1[2];
  uStack_38 = CONCAT44(*(float *)((long)param_1 + 0x1c),*(undefined4 *)(param_1 + 3));
  uVar10 = param_1[6];
  fVar16 = (float)param_1[7];
  uVar4 = (ulong)*param_2;
  uVar3 = 0;
  uStack_30 = uVar17;
  func_0x00010835f398();
  func_0x00010835f308();
  func_0x00010835f344(param_2[1]);
  func_0x00010835f318();
  fVar7 = (float)(uVar4 >> 0x20);
  fVar9 = (float)((ulong)uVar17 >> 0x20);
  fVar11 = (float)((ulong)uVar3 >> 0x20);
  fVar13 = (float)((ulong)uVar18 >> 0x20);
  fVar14 = (float)uVar10;
  fVar15 = (float)((ulong)uVar10 >> 0x20);
  uStack_50 = CONCAT44(fVar15 + fVar7 + fVar9,fVar14 + (float)uVar4 + (float)uVar17);
  uStack_48 = CONCAT44(fVar2 + fVar11 + fVar13,fVar16 + (float)uVar3 + (float)uVar18);
  uVar5 = (ulong)param_2[2];
  uVar10 = 0;
  func_0x00010835f398();
  func_0x00010835f308();
  fVar8 = (float)(uVar5 >> 0x20);
  fVar12 = (float)((ulong)uVar10 >> 0x20);
  uStack_60 = CONCAT44(fVar15 + fVar9 + fVar8,fVar14 + (float)uVar17 + (float)uVar5);
  uStack_58 = CONCAT44(fVar2 + fVar13 + fVar12,fVar16 + (float)uVar18 + (float)uVar10);
  uVar6 = (ulong)param_2[3];
  uVar17 = 0;
  func_0x00010835f344();
  func_0x00010835f308();
  fVar9 = (float)(uVar6 >> 0x20);
  fVar13 = (float)((ulong)uVar17 >> 0x20);
  uStack_70 = CONCAT44(fVar15 + fVar7 + fVar9,fVar14 + (float)uVar4 + (float)uVar6);
  uStack_68 = CONCAT44(fVar2 + fVar11 + fVar13,fVar16 + (float)uVar3 + (float)uVar17);
  uStack_80 = CONCAT44(fVar15 + fVar8 + fVar9,fVar14 + (float)uVar5 + (float)uVar6);
  uStack_78 = CONCAT44(fVar2 + fVar12 + fVar13,fVar16 + (float)uVar10 + (float)uVar17);
  uVar10 = 0x3f8000003f800000;
  uStack_88 = 0xbf800000bf800000;
  uStack_90 = 0x3f8000003f800000;
  FUN_10835f1b0(&uStack_90,&uStack_50,&uStack_60,&uStack_70);
  func_0x00010835f308();
  FUN_10835f1b0(&uStack_90,&uStack_60,&uStack_80,&uStack_50);
  func_0x00010835f318();
  func_0x00010835f378();
  func_0x00010835f308();
  uVar3 = uVar10;
  FUN_10835f1b0(&uStack_90,&uStack_80,&uStack_70,&uStack_60);
  func_0x00010835f308();
  FUN_10835f1b0(&uStack_90,&uStack_70,&uStack_50,&uStack_80);
  func_0x00010835f318();
  func_0x00010835f378(uVar3);
  func_0x00010835f318();
  func_0x00010835f378(uVar10);
  func_0x00010835f308();
  uVar3 = CONCAT44((float)((ulong)uStack_90 >> 0x20) * (float)((ulong)uVar10 >> 0x20),
                   (float)uStack_90 * (float)uVar10);
LAB_10835eba4:
  func_0x00010835f34c(uVar3);
  return;
}



/* Entry: 10835ebb8; end: 10835ecab;  */

void FUN_10835ebb8(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = param_1[0xf];
  if ((((fVar4 != 1.0) && (fVar4 != 0.0)) && (fVar1 = param_1[3], fVar1 == 0.0)) &&
     ((param_1[7] == 0.0 && (param_1[0xb] == 0.0)))) {
    fVar4 = SUB84((double)fVar4,0);
    fVar2 = 0.0;
    fVar3 = param_1[2];
    func_0x00010835f32c();
    *param_1 = fVar1;
    param_1[1] = fVar4;
    param_1[2] = fVar2;
    param_1[3] = fVar3;
    fVar4 = param_1[6];
    fVar1 = (float)*(undefined8 *)(param_1 + 4);
    func_0x00010835f32c();
    param_1[4] = fVar4;
    param_1[5] = fVar1;
    param_1[6] = fVar2;
    param_1[7] = fVar3;
    fVar4 = param_1[10];
    fVar1 = (float)*(undefined8 *)(param_1 + 8);
    func_0x00010835f32c();
    param_1[8] = fVar4;
    param_1[9] = fVar1;
    param_1[10] = fVar2;
    param_1[0xb] = fVar3;
    fVar4 = param_1[0xe];
    fVar1 = (float)*(undefined8 *)(param_1 + 0xc);
    func_0x00010835f32c();
    param_1[0xc] = fVar4;
    param_1[0xd] = fVar1;
    param_1[0xe] = fVar2;
    param_1[0xf] = 1.0;
  }
  return;
}



/* Entry: 10835ecac; end: 10835eccb;  */

void FUN_10835ecac(double param_1)

{
  func_0x00010835f36c((float)param_1);
  return;
}



/* Entry: 10835eccc; end: 10835ed4b;  */

void FUN_10835eccc(float param_1,undefined8 param_2,undefined8 param_3,float param_4,float param_5,
                  undefined8 param_6,undefined8 *param_7)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1083660e4(param_6,&uStack_68);
  if (param_1 != 0.0) {
    param_7[1] = uStack_60;
    *param_7 = uStack_68;
    param_7[3] = uStack_50;
    param_7[2] = uStack_58;
    param_7[5] = uStack_40;
    param_7[4] = uStack_48;
    param_7[7] = uStack_30;
    param_7[6] = uStack_38;
    param_2 = uStack_48;
    param_3 = uStack_38;
  }
  fVar2 = (float)param_2;
  fVar3 = (float)param_3;
  pfVar1 = (float *)(ulong)(param_1 != 0.0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  fVar4 = 1.0 - param_5;
  fVar5 = param_1 * fVar4;
  fVar6 = fVar2 * fVar4;
  *pfVar1 = param_5 + param_1 * fVar5;
  pfVar1[1] = param_4 * fVar3 + fVar2 * fVar5;
  pfVar1[2] = fVar5 * fVar3 - param_4 * fVar2;
  pfVar1[3] = 0.0;
  pfVar1[4] = fVar5 * fVar2 - param_4 * fVar3;
  pfVar1[5] = param_5 + fVar2 * fVar6;
  pfVar1[6] = param_4 * param_1 + fVar3 * fVar6;
  pfVar1[7] = 0.0;
  pfVar1[8] = param_4 * fVar2 + fVar3 * fVar5;
  pfVar1[9] = fVar6 * fVar3 - param_4 * param_1;
  pfVar1[10] = param_5 + fVar3 * fVar3 * fVar4;
  pfVar1[0xd] = 0.0;
  pfVar1[0xe] = 0.0;
  pfVar1[0xb] = 0.0;
  pfVar1[0xc] = 0.0;
  pfVar1[0xf] = 1.0;
  return;
}



/* Entry: 10835ed4c; end: 10835edc3;  */

void FUN_10835ed4c(float param_1,float param_2,float param_3,float param_4,float param_5,
                  float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = 1.0 - param_5;
  fVar2 = param_1 * fVar1;
  fVar3 = param_2 * fVar1;
  *param_6 = param_5 + param_1 * fVar2;
  param_6[1] = param_4 * param_3 + param_2 * fVar2;
  param_6[2] = fVar2 * param_3 - param_4 * param_2;
  param_6[3] = 0.0;
  param_6[4] = fVar2 * param_2 - param_4 * param_3;
  param_6[5] = param_5 + param_2 * fVar3;
  param_6[6] = param_4 * param_1 + param_3 * fVar3;
  param_6[7] = 0.0;
  param_6[8] = param_4 * param_2 + param_3 * fVar2;
  param_6[9] = fVar3 * param_3 - param_4 * param_1;
  param_6[10] = param_5 + param_3 * param_3 * fVar1;
  param_6[0xd] = 0.0;
  param_6[0xe] = 0.0;
  param_6[0xb] = 0.0;
  param_6[0xc] = 0.0;
  param_6[0xf] = 1.0;
  return;
}



/* Entry: 10835edc4; end: 10835ee6b;  */

undefined4 *
FUN_10835edc4(float param_1,float param_2,float param_3,undefined8 param_4,undefined4 *param_5)

{
  bool bVar1;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  
  fStack_3c = param_1;
  fStack_38 = param_2;
  fStack_34 = param_3;
  FUN_1081724e8(&fStack_3c);
  bVar1 = true;
  if ((0.0 < param_1) && (bVar1 = true, !NAN(param_1 - param_1))) {
    bVar1 = false;
  }
  if (bVar1) {
    *param_5 = 0x3f800000;
    *(undefined8 *)(param_5 + 3) = 0;
    *(undefined8 *)(param_5 + 1) = 0;
    param_5[5] = 0x3f800000;
    *(undefined8 *)(param_5 + 6) = 0;
    *(undefined8 *)(param_5 + 8) = 0;
    param_5[10] = 0x3f800000;
    *(undefined8 *)(param_5 + 0xd) = 0;
    *(undefined8 *)(param_5 + 0xb) = 0;
    param_5[0xf] = 0x3f800000;
  }
  else {
    param_1 = 1.0 / param_1;
    FUN_10835ee6c(param_1 * fStack_3c,param_1 * fStack_38,param_1 * fStack_34,param_4,param_5);
  }
  return param_5;
}



/* Entry: 10835ee6c; end: 10835eec3;  */

void FUN_10835ee6c(float param_1,float param_2,float param_3,float param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_2;
  ___sincosf_stret();
  fVar2 = 1.0 - fVar1;
  fVar3 = param_1 * fVar2;
  fVar4 = param_2 * fVar2;
  *param_5 = fVar1 + param_1 * fVar3;
  param_5[1] = param_4 * param_3 + param_2 * fVar3;
  param_5[2] = fVar3 * param_3 - param_4 * param_2;
  param_5[3] = 0.0;
  param_5[4] = fVar3 * param_2 - param_4 * param_3;
  param_5[5] = fVar1 + param_2 * fVar4;
  param_5[6] = param_4 * param_1 + param_3 * fVar4;
  param_5[7] = 0.0;
  param_5[8] = param_4 * param_2 + param_3 * fVar3;
  param_5[9] = fVar4 * param_3 - param_4 * param_1;
  param_5[10] = fVar1 + param_3 * param_3 * fVar2;
  param_5[0xd] = 0.0;
  param_5[0xe] = 0.0;
  param_5[0xb] = 0.0;
  param_5[0xc] = 0.0;
  param_5[0xf] = 1.0;
  return;
}



/* Entry: 10835eec4; end: 10835ef8f;  */

void FUN_10835eec4(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *param_2;
  if (fVar1 < param_2[2]) {
    fVar2 = param_2[1];
    if (fVar2 < param_2[3]) {
      fVar5 = *param_3;
      if (fVar5 < param_3[2]) {
        fVar6 = param_3[1];
        if (fVar6 < param_3[3]) {
          fVar3 = (param_3[2] - fVar5) / (param_2[2] - fVar1);
          fVar4 = (param_3[3] - fVar6) / (param_2[3] - fVar2);
          *param_1 = fVar3;
          param_1[3] = 0.0;
          param_1[4] = 0.0;
          param_1[1] = 0.0;
          param_1[2] = 0.0;
          param_1[5] = fVar4;
          param_1[6] = 0.0;
          param_1[7] = 0.0;
          param_1[8] = 0.0;
          param_1[9] = 0.0;
          param_1[10] = 1.0;
          param_1[0xb] = 0.0;
          param_1[0xc] = fVar5 - fVar1 * fVar3;
          param_1[0xd] = fVar6 - fVar2 * fVar4;
          param_1[0xe] = 0.0;
          param_1[0xf] = 1.0;
          return;
        }
      }
      param_1[0xd] = 0.0;
      param_1[0xe] = 0.0;
      param_1[0xb] = 0.0;
      param_1[0xc] = 0.0;
      param_1[6] = 0.0;
      param_1[7] = 0.0;
      param_1[4] = 0.0;
      param_1[5] = 0.0;
      param_1[10] = 0.0;
      param_1[0xb] = 0.0;
      param_1[8] = 0.0;
      param_1[9] = 0.0;
      param_1[2] = 0.0;
      param_1[3] = 0.0;
      param_1[0] = 0.0;
      param_1[1] = 0.0;
      param_1[0xf] = 1.0;
      return;
    }
  }
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[0] = 1.0;
  param_1[1] = 0.0;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = 1.0;
  param_1[10] = 1.0;
  param_1[0xb] = 0.0;
  param_1[8] = 0.0;
  param_1[9] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = 1.0;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  return;
}



/* Entry: 10835ef90; end: 10835f0c7;  */

void FUN_10835ef90(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_94;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  
  fVar2 = (float)*param_3 - (float)*param_2;
  fVar5 = (float)((ulong)*param_3 >> 0x20) - (float)((ulong)*param_2 >> 0x20);
  fVar8 = *(float *)(param_3 + 1) - *(float *)(param_2 + 1);
  FUN_10835f0c8();
  func_0x00010835f3a8();
  uVar3 = *param_4;
  uVar6 = param_4[1];
  uVar9 = param_4[2];
  fStack_6c = fVar2;
  fStack_68 = fVar5;
  fStack_64 = fVar8;
  FUN_10835f0c8();
  uStack_78 = uVar3;
  uStack_74 = uVar6;
  uStack_70 = uVar9;
  func_0x00010835f2dc(&fStack_6c,&uStack_78);
  FUN_10835f0c8();
  uVar10 = uVar9;
  uVar4 = uVar3;
  uVar7 = uVar6;
  uStack_84 = uVar3;
  uStack_80 = uVar6;
  uStack_7c = uVar9;
  func_0x00010835f2dc(&uStack_84,&fStack_6c);
  uStack_8c = *(undefined4 *)(param_2 + 1);
  fStack_a4 = -unaff_s8;
  fStack_a0 = -unaff_s9;
  fStack_9c = -unaff_s10;
  uStack_b8 = 0;
  uStack_a8 = 0;
  uStack_98 = 0;
  uStack_94 = *param_2;
  uStack_88 = 0x3f800000;
  puVar1 = &uStack_c4;
  uStack_c4 = uVar3;
  uStack_c0 = uVar6;
  uStack_bc = uVar9;
  uStack_b4 = uVar4;
  uStack_b0 = uVar7;
  uStack_ac = uVar10;
  FUN_10835eccc(puVar1,param_1);
  if (((ulong)puVar1 & 1) == 0) {
    *param_1 = 0x3f800000;
    *(undefined8 *)(param_1 + 3) = 0;
    *(undefined8 *)(param_1 + 1) = 0;
    param_1[5] = 0x3f800000;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    param_1[10] = 0x3f800000;
    *(undefined8 *)(param_1 + 0xd) = 0;
    *(undefined8 *)(param_1 + 0xb) = 0;
    param_1[0xf] = 0x3f800000;
  }
  return;
}



/* Entry: 10835f0c8; end: 10835f12b;  */

void FUN_10835f0c8(float param_1,undefined4 param_2,undefined4 param_3)

{
  float fStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  fStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  FUN_1081724e8(&fStack_20);
  return;
}



/* Entry: 10835f12c; end: 10835f1af;  */

void FUN_10835f12c(undefined8 *param_1,undefined8 *param_2)

{
  func_0x00010835f34c(CONCAT44((float)((ulong)*param_1 >> 0x20) * (float)((ulong)*param_2 >> 0x20),
                               (float)*param_1 * (float)*param_2));
  return;
}



/* Entry: 10835f1b0; end: 10835f24b;  */

void FUN_10835f1b0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  float *pfVar2;
  float fVar3;
  float *pfStack_40;
  float *pfStack_38;
  undefined8 uStack_30;
  float fStack_24;
  
  fVar3 = *(float *)((long)param_2 + 0xc);
  uVar1 = 0x38800000;
  fStack_24 = fVar3;
  if (6.1035156e-05 <= fVar3) {
    pfVar2 = (float *)*param_2;
    pfStack_40 = pfVar2;
    pfStack_38 = pfVar2;
    FUN_10835f12c(param_1,&pfStack_40);
    func_0x00010835f308();
    func_0x00010835f34c(CONCAT44((float)((ulong)pfVar2 >> 0x20) / fVar3,SUB84(pfVar2,0) / fVar3));
  }
  else {
    pfStack_40 = &fStack_24;
    pfStack_38 = (float *)param_2;
    uStack_30 = param_1;
    FUN_10835f24c(&pfStack_40,param_3);
    func_0x00010835f308();
    FUN_10835f24c(&pfStack_40,param_4);
    func_0x00010835f318();
    func_0x00010835f378(uVar1);
  }
  return;
}



/* Entry: 10835f24c; end: 10835f2db;  */

undefined8 FUN_10835f24c(undefined8 *param_1,undefined8 *param_2)

{
  float fVar1;
  undefined8 uVar2;
  
  if (*(float *)((long)param_2 + 0xc) < 6.1035156e-05) {
    return 0x7f800000;
  }
  fVar1 = (6.1035156e-05 - *(float *)*param_1) /
          (*(float *)((long)param_2 + 0xc) - *(float *)*param_1);
  uVar2 = CONCAT44(((float)((ulong)*param_2 >> 0x20) * fVar1 +
                   (float)((ulong)*(undefined8 *)param_1[1] >> 0x20) * (1.0 - fVar1)) * 16384.0,
                   ((float)*param_2 * fVar1 + (float)*(undefined8 *)param_1[1] * (1.0 - fVar1)) *
                   16384.0);
  func_0x00010835f36c(uVar2,param_1[2]);
  return uVar2;
}



/* Entry: 10835f2dc; end: 10835f3eb;  */

float FUN_10835f2dc(long param_1,long param_2)

{
  return -(*(float *)(param_2 + 4) * *(float *)(param_1 + 8)) +
         *(float *)(param_2 + 8) * *(float *)(param_1 + 4);
}



/* Entry: 10835f3ec; end: 10835f4c3;  */

undefined8 FUN_10835f3ec(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  uVar2 = (ulong)(0x40 - ((uint)uVar1 & 0x3f));
  if (param_3 < uVar2) {
    uVar2 = 0;
    uVar1 = uVar1 & 0x3f;
  }
  else {
    if ((uVar1 & 0x3f) == 0) {
      uVar2 = 0;
    }
    else {
      _memcpy(param_1 + 0x20 + (uVar1 & 0x3f),param_2,uVar2);
      FUN_10835f4c4(param_1 + 0x10,param_1 + 0x20);
    }
    while( true ) {
      if (param_3 <= (int)uVar2 + 0x3f) break;
      FUN_10835f4c4(param_1 + 0x10,param_2 + uVar2);
      uVar2 = (ulong)((int)uVar2 + 0x40);
    }
    uVar1 = 0;
  }
  if (param_3 - uVar2 != 0) {
    _memcpy(param_1 + uVar1 + 0x20,param_2 + uVar2,param_3 - uVar2);
  }
  *(ulong *)(param_1 + 8) = *(long *)(param_1 + 8) + param_3;
  return 1;
}



/* Entry: 10835f4c4; end: 10835fefb;  */

void FUN_10835f4c4(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  byte bVar27;
  undefined1 uVar28;
  bool bVar29;
  byte *pbVar30;
  long lVar31;
  long extraout_x8;
  long lVar32;
  long lStack_f0;
  byte *pbStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  int aiStack_a8 [16];
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  iVar7 = *param_1;
  uVar17 = param_1[1];
  uVar8 = param_1[2];
  uVar18 = param_1[3];
  bVar29 = ((ulong)param_2 & 3) == 0;
  if (!bVar29) {
    for (lVar32 = 0; lVar32 != 0x40; lVar32 = lVar32 + 4) {
      *(undefined4 *)((long)aiStack_a8 + lVar32) = *(undefined4 *)((long)param_2 + lVar32);
    }
    param_2 = aiStack_a8;
    bVar29 = true;
  }
  iVar9 = *param_2;
  iVar19 = param_2[1];
  uVar1 = iVar7 + iVar9 + -0x28955b88 + (uVar8 & uVar17 | uVar18 & (uVar17 ^ 0xffffffff));
  uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar17;
  uVar2 = uVar18 + iVar19 + -0x173848aa + (uVar17 & uVar1 | uVar8 & (uVar1 ^ 0xffffffff));
  uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1;
  iVar10 = param_2[2];
  iVar20 = param_2[3];
  uVar3 = uVar8 + iVar10 + 0x242070db + (uVar1 & uVar2 | uVar17 & (uVar2 ^ 0xffffffff));
  uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2;
  uVar4 = uVar17 + iVar20 + -0x3e423112 + (uVar2 & uVar3 | uVar1 & (uVar3 ^ 0xffffffff));
  uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3;
  iVar11 = param_2[4];
  iVar21 = param_2[5];
  uVar1 = uVar1 + iVar11 + -0xa83f051 + (uVar3 & uVar4 | uVar2 & (uVar4 ^ 0xffffffff));
  uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar4;
  uVar2 = iVar21 + uVar2 + 0x4787c62a + (uVar4 & uVar1 | uVar3 & (uVar1 ^ 0xffffffff));
  uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1;
  iVar12 = param_2[6];
  iVar22 = param_2[7];
  uVar3 = iVar12 + uVar3 + -0x57cfb9ed + (uVar1 & uVar2 | uVar4 & (uVar2 ^ 0xffffffff));
  uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2;
  uVar4 = iVar22 + uVar4 + -0x2b96aff + (uVar2 & uVar3 | uVar1 & (uVar3 ^ 0xffffffff));
  uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3;
  iVar13 = param_2[8];
  iVar23 = param_2[9];
  uVar1 = iVar13 + uVar1 + 0x698098d8 + (uVar3 & uVar4 | uVar2 & (uVar4 ^ 0xffffffff));
  uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar4;
  uVar2 = iVar23 + uVar2 + -0x74bb0851 + (uVar4 & uVar1 | uVar3 & (uVar1 ^ 0xffffffff));
  uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1;
  iVar14 = param_2[10];
  iVar24 = param_2[0xb];
  uVar3 = iVar14 + uVar3 + -0xa44f + (uVar1 & uVar2 | uVar4 & (uVar2 ^ 0xffffffff));
  uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2;
  uVar4 = iVar24 + uVar4 + -0x76a32842 + (uVar2 & uVar3 | uVar1 & (uVar3 ^ 0xffffffff));
  uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3;
  iVar15 = param_2[0xc];
  iVar25 = param_2[0xd];
  uVar1 = iVar15 + uVar1 + 0x6b901122 + (uVar3 & uVar4 | uVar2 & (uVar4 ^ 0xffffffff));
  uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar4;
  uVar2 = iVar25 + uVar2 + -0x2678e6d + (uVar4 & uVar1 | uVar3 & (uVar1 ^ 0xffffffff));
  uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1;
  iVar16 = param_2[0xe];
  iVar26 = param_2[0xf];
  uVar3 = iVar16 + uVar3 + -0x5986bc72 + (uVar1 & uVar2 | uVar4 & (uVar2 ^ 0xffffffff));
  uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2;
  uVar4 = iVar26 + uVar4 + 0x49b40821 + (uVar2 & uVar3 | uVar1 & (uVar3 ^ 0xffffffff));
  uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3;
  uVar1 = iVar19 + uVar1 + (uVar3 & (uVar2 ^ 0xffffffff)) + -0x9e1da9e + (uVar4 & uVar2);
  uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4;
  uVar2 = iVar12 + uVar2 + (uVar4 & (uVar3 ^ 0xffffffff)) + -0x3fbf4cc0 + (uVar1 & uVar3);
  uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1;
  uVar3 = iVar24 + uVar3 + (uVar1 & (uVar4 ^ 0xffffffff)) + 0x265e5a51 + (uVar2 & uVar4);
  uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2;
  uVar4 = iVar9 + uVar4 + (uVar2 & (uVar1 ^ 0xffffffff)) + -0x16493856 + (uVar3 & uVar1);
  uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3;
  uVar1 = iVar21 + uVar1 + (uVar3 & (uVar2 ^ 0xffffffff)) + -0x29d0efa3 + (uVar4 & uVar2);
  uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4;
  uVar2 = iVar14 + uVar2 + (uVar4 & (uVar3 ^ 0xffffffff)) + 0x2441453 + (uVar1 & uVar3);
  uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1;
  uVar3 = iVar26 + uVar3 + (uVar1 & (uVar4 ^ 0xffffffff)) + -0x275e197f + (uVar2 & uVar4);
  uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2;
  uVar4 = iVar11 + uVar4 + (uVar2 & (uVar1 ^ 0xffffffff)) + -0x182c0438 + (uVar3 & uVar1);
  uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3;
  uVar1 = iVar23 + uVar1 + (uVar3 & (uVar2 ^ 0xffffffff)) + 0x21e1cde6 + (uVar4 & uVar2);
  uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4;
  uVar2 = iVar16 + uVar2 + (uVar4 & (uVar3 ^ 0xffffffff)) + -0x3cc8f82a + (uVar1 & uVar3);
  uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1;
  uVar3 = iVar20 + uVar3 + (uVar1 & (uVar4 ^ 0xffffffff)) + -0xb2af279 + (uVar2 & uVar4);
  uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2;
  uVar4 = iVar13 + uVar4 + (uVar2 & (uVar1 ^ 0xffffffff)) + 0x455a14ed + (uVar3 & uVar1);
  uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3;
  uVar1 = iVar25 + uVar1 + (uVar3 & (uVar2 ^ 0xffffffff)) + -0x561c16fb + (uVar4 & uVar2);
  uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4;
  uVar2 = iVar10 + uVar2 + (uVar4 & (uVar3 ^ 0xffffffff)) + -0x3105c08 + (uVar1 & uVar3);
  uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1;
  uVar3 = iVar22 + uVar3 + (uVar1 & (uVar4 ^ 0xffffffff)) + 0x676f02d9 + (uVar2 & uVar4);
  uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2;
  uVar4 = iVar15 + uVar4 + (uVar2 & (uVar1 ^ 0xffffffff)) + -0x72d5b376 + (uVar3 & uVar1);
  uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3;
  uVar1 = iVar21 + uVar1 + -0x5c6be + (uVar4 ^ uVar3 ^ uVar2);
  uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
  uVar2 = iVar13 + uVar2 + -0x788e097f + (uVar1 ^ uVar4 ^ uVar3);
  uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1;
  uVar3 = iVar24 + uVar3 + 0x6d9d6122 + (uVar2 ^ uVar1 ^ uVar4);
  uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2;
  uVar4 = iVar16 + uVar4 + -0x21ac7f4 + (uVar2 ^ uVar1 ^ uVar3);
  uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3;
  uVar1 = iVar19 + uVar1 + -0x5b4115bc + (uVar3 ^ uVar2 ^ uVar4);
  uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
  uVar2 = iVar11 + uVar2 + 0x4bdecfa9 + (uVar4 ^ uVar3 ^ uVar1);
  uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1;
  uVar3 = iVar22 + uVar3 + -0x944b4a0 + (uVar1 ^ uVar4 ^ uVar2);
  uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2;
  uVar4 = iVar14 + uVar4 + -0x41404390 + (uVar2 ^ uVar1 ^ uVar3);
  uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3;
  uVar1 = iVar25 + uVar1 + 0x289b7ec6 + (uVar3 ^ uVar2 ^ uVar4);
  uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
  uVar2 = iVar9 + uVar2 + -0x155ed806 + (uVar4 ^ uVar3 ^ uVar1);
  uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1;
  uVar3 = iVar20 + uVar3 + -0x2b10cf7b + (uVar1 ^ uVar4 ^ uVar2);
  uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2;
  uVar4 = iVar12 + uVar4 + 0x4881d05 + (uVar2 ^ uVar1 ^ uVar3);
  uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3;
  uVar1 = iVar23 + uVar1 + -0x262b2fc7 + (uVar3 ^ uVar2 ^ uVar4);
  uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
  uVar2 = iVar15 + uVar2 + -0x1924661b + (uVar4 ^ uVar3 ^ uVar1);
  uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1;
  uVar3 = iVar26 + uVar3 + 0x1fa27cf8 + (uVar1 ^ uVar4 ^ uVar2);
  uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2;
  uVar4 = iVar10 + uVar4 + -0x3b53a99b + (uVar2 ^ uVar1 ^ uVar3);
  uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3;
  uVar1 = iVar9 + uVar1 + -0xbd6ddbc + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3);
  uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
  uVar2 = iVar22 + uVar2 + 0x432aff97 + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4);
  uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1;
  uVar3 = iVar16 + uVar3 + -0x546bdc59 + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1);
  uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2;
  uVar4 = iVar21 + uVar4 + -0x36c5fc7 + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2);
  uVar4 = (uVar4 >> 0xb | uVar4 * 0x200000) + uVar3;
  uVar1 = iVar15 + uVar1 + 0x655b59c3 + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3);
  uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
  uVar5 = (uVar1 | uVar3 ^ 0xffffffff) ^ uVar4;
  uVar2 = iVar20 + uVar2 + -0x70f3336e + uVar5;
  uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1;
  uVar3 = iVar14 + uVar3 + -0x100b83 + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1);
  uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2;
  uVar6 = (uVar3 | uVar1 ^ 0xffffffff) ^ uVar2;
  uVar4 = iVar19 + uVar4 + -0x7a7ba22f + uVar6;
  uVar4 = (uVar4 >> 0xb | uVar4 * 0x200000) + uVar3;
  uVar1 = iVar13 + uVar1 + 0x6fa87e4f + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3);
  uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
  uVar2 = iVar26 + uVar2 + -0x1d31920 + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4);
  uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1;
  uVar3 = iVar12 + uVar3 + -0x5cfebcec + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1);
  uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2;
  uVar4 = iVar25 + uVar4 + 0x4e0811a1 + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2);
  uVar4 = (uVar4 >> 0xb | uVar4 * 0x200000) + uVar3;
  uVar1 = iVar11 + uVar1 + -0x8ac817e + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3);
  uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
  uVar2 = iVar24 + uVar2 + -0x42c50dcb + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4);
  uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1;
  uVar3 = iVar10 + uVar3 + 0x2ad7d2bb + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1);
  uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2;
  uVar4 = iVar23 + uVar4 + -0x14792c6f + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2);
  *param_1 = uVar1 + iVar7;
  param_1[1] = uVar3 + uVar17 + (uVar4 >> 0xb | uVar4 * 0x200000);
  param_1[2] = uVar3 + uVar8;
  param_1[3] = uVar2 + uVar18;
  func_0x00010836005c(uStack_68);
  if (bVar29) {
    return;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_10835fefc;
  uStack_d8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_f0 = *(long *)(param_1 + 2) << 3;
  uStack_d0 = (ulong)uVar5;
  uStack_c8 = (ulong)uVar6;
  puStack_c0 = &stack0xfffffffffffffff0;
  FUN_10835f3ec();
  FUN_10835f3ec(param_1,&lStack_f0,8);
  for (lVar32 = 0; bVar29 = lVar32 == 0x10, !bVar29; lVar32 = lVar32 + 4) {
    *(undefined4 *)((long)&pbStack_e8 + lVar32) = *(undefined4 *)((long)param_1 + lVar32 + 0x10);
  }
  func_0x00010836005c(uStack_d8,pbStack_e8,uStack_e0);
  if (bVar29) {
    return;
  }
  pbVar30 = pbStack_e8;
  ___stack_chk_fail();
  FUN_1083a3310(extraout_x8,0x20);
  for (lVar32 = 0; lVar32 != 0x20; lVar32 = lVar32 + 2) {
    bVar27 = *pbVar30;
    uVar28 = (&UNK_10df2d0ad)[bVar27 >> 4];
    lVar31 = extraout_x8;
    FUN_1083a3588();
    *(undefined1 *)(lVar31 + lVar32) = uVar28;
    uVar28 = (&UNK_10df2d0ad)[(ulong)bVar27 & 0xf];
    lVar31 = extraout_x8;
    FUN_1083a3588();
    *(undefined1 *)(lVar31 + lVar32 + 1) = uVar28;
    pbVar30 = pbVar30 + 1;
  }
  return;
}



/* Entry: 10835fefc; end: 10835ffa7;  */

void FUN_10835fefc(long param_1)

{
  uint uVar1;
  byte bVar2;
  undefined1 uVar3;
  bool bVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  int iVar8;
  long lStack_40;
  byte *pbStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_40 = *(long *)(param_1 + 8) << 3;
  uVar1 = (uint)*(long *)(param_1 + 8) & 0x3f;
  iVar8 = 0x38;
  if (0x37 < uVar1) {
    iVar8 = 0x78;
  }
  FUN_10835f3ec(param_1,&UNK_10df1da84,iVar8 - uVar1);
  FUN_10835f3ec(param_1,&lStack_40,8);
  for (lVar7 = 0; bVar4 = lVar7 == 0x10, !bVar4; lVar7 = lVar7 + 4) {
    *(undefined4 *)((long)&pbStack_38 + lVar7) = *(undefined4 *)(param_1 + 0x10 + lVar7);
  }
  func_0x00010836005c(uStack_28,pbStack_38,uStack_30);
  if (bVar4) {
    return;
  }
  pbVar5 = pbStack_38;
  ___stack_chk_fail();
  FUN_1083a3310(extraout_x8,0x20);
  for (lVar7 = 0; lVar7 != 0x20; lVar7 = lVar7 + 2) {
    bVar2 = *pbVar5;
    uVar3 = (&UNK_10df2d0ad)[bVar2 >> 4];
    lVar6 = extraout_x8;
    FUN_1083a3588();
    *(undefined1 *)(lVar6 + lVar7) = uVar3;
    uVar3 = (&UNK_10df2d0ad)[(ulong)bVar2 & 0xf];
    lVar6 = extraout_x8;
    FUN_1083a3588();
    *(undefined1 *)(lVar6 + lVar7 + 1) = uVar3;
    pbVar5 = pbVar5 + 1;
  }
  return;
}



/* Entry: 10835ffa8; end: 10835ffb3;  */

void FUN_10835ffa8(long param_1,byte *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  
  FUN_1083a3310(param_1,0x20);
  for (lVar4 = 0; lVar4 != 0x20; lVar4 = lVar4 + 2) {
    bVar1 = *param_2;
    uVar2 = (&UNK_10df2d0ad)[bVar1 >> 4];
    lVar3 = param_1;
    FUN_1083a3588();
    *(undefined1 *)(lVar3 + lVar4) = uVar2;
    uVar2 = (&UNK_10df2d0ad)[(ulong)bVar1 & 0xf];
    lVar3 = param_1;
    FUN_1083a3588();
    *(undefined1 *)(lVar3 + lVar4 + 1) = uVar2;
    param_2 = param_2 + 1;
  }
  return;
}



/* Entry: 10835ffb4; end: 10836004b;  */

void FUN_10835ffb4(long param_1,byte *param_2,long param_3)

{
  byte bVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  
  FUN_1083a3310(param_1,0x20);
  for (lVar4 = 0; lVar4 != 0x20; lVar4 = lVar4 + 2) {
    bVar1 = *param_2;
    uVar2 = *(undefined1 *)(param_3 + (ulong)(bVar1 >> 4));
    lVar3 = param_1;
    FUN_1083a3588();
    *(undefined1 *)(lVar3 + lVar4) = uVar2;
    uVar2 = *(undefined1 *)(param_3 + ((ulong)bVar1 & 0xf));
    lVar3 = param_1;
    FUN_1083a3588();
    *(undefined1 *)(lVar3 + lVar4 + 1) = uVar2;
    param_2 = param_2 + 1;
  }
  return;
}



/* Entry: 10836004c; end: 10836006f;  */

void FUN_10836004c(void)

{
  return;
}



/* Entry: 108360070; end: 10836013b;  */

void FUN_108360070(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (param_3 == 0) {
    param_3 = param_2;
    func_0x0001078bdb50(param_2);
  }
  lVar1 = param_2;
  FUN_10836013c();
  if (((((int)lVar1 == 0) || (lVar1 = param_2, FUN_1083307d8(param_2,param_3), (int)lVar1 == 0)) ||
      (func_0x00010835c6b0(param_2,param_3), param_2 == -1)) || (_calloc(), param_2 == 0)) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)0x60;
    __Znwm();
    func_0x000108383c58();
    *puVar2 = &PTR_FUN_110a3eb38;
  }
  *param_1 = puVar2;
  return;
}



/* Entry: 10836013c; end: 10836016f;  */

bool FUN_10836013c(long param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (((-1 < *(int *)(param_1 + 0x10)) && (-1 < *(int *)(param_1 + 0x14))) &&
     (*(uint *)(param_1 + 8) < 0x1b)) {
    bVar1 = *(uint *)(param_1 + 0xc) < 4;
  }
  return bVar1;
}


