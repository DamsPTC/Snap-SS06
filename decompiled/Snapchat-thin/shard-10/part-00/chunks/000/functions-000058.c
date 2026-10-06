/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1073e7204; end: 1073e720b;  */

void FUN_1073e7204(void)

{
  return;
}



/* Entry: 1073e720c; end: 1073e724f;  */

void FUN_1073e720c(long param_1)

{
  if (*(uint *)(param_1 + 0x40) != 0xffffffff) {
    func_0x0001073e7260((&PTR_FUN_1109acb78)[*(uint *)(param_1 + 0x40)]);
  }
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  return;
}



/* Entry: 1073e7250; end: 1073e72cb;  */

void FUN_1073e7250(undefined8 param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = param_2;
  func_0x00010726b0e4();
  if ((lVar1 == 1) && (func_0x000107274ee4(), extraout_x8 != 0)) {
    func_0x000107274f70();
    func_0x000107275200();
    func_0x000107275208();
  }
  func_0x00010726b120(param_2);
  return;
}



/* Entry: 1073e72cc; end: 1073e736b;  */

void FUN_1073e72cc(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long *extraout_x8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 auStack_68 [7];
  char cStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_4;
  FUN_1073e25c0(auStack_68);
  if (cStack_30 == '\x01') {
    uVar1 = 0x48;
    __Znwm();
    puVar4 = auStack_68;
    func_0x0001077a4328();
    param_4 = param_3;
  }
  else {
    uVar1 = 0;
  }
  *param_1 = uVar1;
  func_0x00010724b3d8(auStack_68);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)param_4 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  uVar1 = *param_4;
  lVar2 = 0x340;
  __Znwm();
  uStack_b8 = puVar4[1];
  uStack_c0 = *puVar4;
  *puVar4 = 0;
  puVar4[1] = 0;
  lVar3 = lVar2;
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  FUN_1073fb4f0(lVar2,uVar1,param_5,&uStack_c0,param_4,lVar3 + 8);
  func_0x000107331000(&uStack_c0);
  uStack_c0 = 0;
  *extraout_x8 = lVar2;
  func_0x0001073e7538(&uStack_c0);
  return;
}



/* Entry: 1073e736c; end: 1073e7427;  */

void FUN_1073e736c(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar3 = *param_3;
  lVar1 = 0x340;
  __Znwm();
  uStack_48 = param_4[1];
  uStack_50 = *param_4;
  *param_4 = 0;
  param_4[1] = 0;
  lVar2 = lVar1;
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  FUN_1073fb4f0(lVar1,uVar3,param_5,&uStack_50,param_3,lVar2 + 8);
  func_0x000107331000(&uStack_50);
  uStack_50 = 0;
  *param_1 = lVar1;
  func_0x0001073e7538(&uStack_50);
  return;
}



/* Entry: 1073e7428; end: 1073e74bf;  */

void FUN_1073e7428(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_1073e74c0(&uStack_50,param_3);
  uVar1 = 0x7f8;
  __Znwm();
  uStack_38 = uStack_48;
  uStack_40 = uStack_50;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_1074c9258();
  FUN_1073e7510(&uStack_40);
  *param_1 = uVar1;
  FUN_1073e7510(&uStack_50);
  return;
}



/* Entry: 1073e74c0; end: 1073e7507;  */

void FUN_1073e74c0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar5 = param_2[1];
  uVar4 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[1] = uVar5;
  *param_1 = uVar4;
  uStack_20 = 0;
  uStack_18 = 0;
  FUN_1073e7510(&uStack_20);
  return;
}



/* Entry: 1073e7508; end: 1073e750f;  */

void FUN_1073e7508(void)

{
  return;
}



/* Entry: 1073e7510; end: 1073e755b;  */

long FUN_1073e7510(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1073e755c; end: 1073e7573;  */

void FUN_1073e755c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1073e7590(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1073e7574; end: 1073e758f;  */

void FUN_1073e7574(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1073e7590(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073e7590; end: 1073e7697;  */

long FUN_1073e7590(long param_1)

{
  func_0x0001078a8808(param_1 + 0x330);
  func_0x000107284d8c(param_1 + 0x2c8);
  FUN_1073e0028(param_1 + 0x2b8);
  func_0x0001000e30f4(param_1 + 0x2a0);
  func_0x0001073e763c(param_1 + 0x278);
  FUN_1073e76f8(param_1 + 0x268);
  func_0x000107266af0(param_1 + 0x208);
  func_0x000107266a30(param_1 + 0x1c8);
  func_0x000107266a30(param_1 + 400);
  func_0x000107266a30(param_1 + 0x158);
  func_0x0001073e7720(param_1 + 0x140);
  func_0x000104c2f714(param_1 + 0xb8);
  func_0x000107331000(param_1 + 0xa8);
  FUN_1073e7758(param_1 + 0x88);
  FUN_1073e7820(param_1 + 0x70);
  FUN_1073e7858(param_1 + 0x58);
  func_0x000104c2f714(param_1 + 0x20);
  func_0x0001073e0164(param_1 + 8);
  return param_1;
}



/* Entry: 1073e7698; end: 1073e769f;  */

void FUN_1073e7698(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  while (puVar3 = puVar1 + -0x26, puVar1 != puVar2) {
    (**(code **)*puVar3)(puVar3);
    puVar1 = puVar3;
  }
  param_1[1] = (long)puVar2;
  return;
}



/* Entry: 1073e76a0; end: 1073e76f7;  */

void FUN_1073e76a0(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  while (puVar2 = puVar1 + -0x26, puVar1 != param_2) {
    (**(code **)*puVar2)(puVar2);
    puVar1 = puVar2;
  }
  *(undefined8 **)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1073e76f8; end: 1073e7743;  */

long FUN_1073e76f8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1073e7744; end: 1073e7757;  */

void FUN_1073e7744(undefined8 *param_1)

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



/* Entry: 1073e7758; end: 1073e780b;  */

long FUN_1073e7758(long param_1)

{
  func_0x0001073e777c(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 1073e780c; end: 1073e781f;  */

void FUN_1073e780c(undefined8 *param_1)

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



/* Entry: 1073e7820; end: 1073e7843;  */

void FUN_1073e7820(void)

{
  func_0x0001073e7a08();
  FUN_1073e7844();
  return;
}



/* Entry: 1073e7844; end: 1073e7857;  */

void FUN_1073e7844(undefined8 *param_1)

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



/* Entry: 1073e7858; end: 1073e78b3;  */

void FUN_1073e7858(void)

{
  func_0x0001073e7a08();
  func_0x0001073e787c();
  return;
}



/* Entry: 1073e78b4; end: 1073e78bb;  */

void FUN_1073e78b4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x670;
    func_0x0001073e78f4();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 1073e78bc; end: 1073e7953;  */

void FUN_1073e78bc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x670;
    func_0x0001073e78f4();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1073e7954; end: 1073e7973;  */

void FUN_1073e7954(long param_1)

{
  if (*(char *)(param_1 + 0x140) == '\x01') {
    FUN_1073e7974();
  }
  return;
}



/* Entry: 1073e7974; end: 1073e79bf;  */

undefined8 FUN_1073e7974(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001072a6b0c(param_1 + 0x18);
  func_0x0001073e7a08(param_1);
  FUN_1073e79c0();
  return unaff_x19;
}



/* Entry: 1073e79c0; end: 1073e79d3;  */

void FUN_1073e79c0(undefined8 *param_1)

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



/* Entry: 1073e79d4; end: 1073e79fb;  */

long FUN_1073e79d4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1073e79fc; end: 1073e7a2f;  */

void FUN_1073e79fc(void)

{
  return;
}



/* Entry: 1073e7a30; end: 1073e7da3;  */

void FUN_1073e7a30(long *param_1,undefined8 *param_2,uint param_3,uint param_4,uint param_5,
                  uint param_6)

{
  short sVar1;
  int iVar2;
  long *plVar3;
  uint *puVar4;
  long lVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint uVar9;
  uint extraout_w9;
  uint extraout_w9_00;
  uint extraout_w9_01;
  uint uVar10;
  short extraout_w10;
  short sVar11;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint uVar12;
  long lVar13;
  short extraout_w11;
  short extraout_w11_00;
  short sVar14;
  uint extraout_w11_01;
  uint *puVar15;
  uint extraout_w12;
  uint extraout_w12_00;
  uint uVar16;
  uint extraout_w12_01;
  uint extraout_w12_02;
  uint extraout_w12_03;
  uint extraout_w12_04;
  uint *puVar17;
  long *plVar18;
  uint *puVar19;
  uint uStack_68;
  uint uStack_64;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar18 = (long *)*param_2;
  plVar3 = (long *)param_2[1];
  do {
    if (plVar18 == plVar3) {
      return;
    }
    puVar19 = (uint *)*plVar18;
    puVar4 = (uint *)plVar18[1];
    if (puVar19 != puVar4) {
      puVar17 = puVar19;
      for (; puVar17 = puVar17 + 1, puVar19 != puVar4 + -1; puVar19 = puVar19 + 1) {
        uVar9 = *puVar19;
        uVar12 = *puVar17;
        iVar8 = (int)(short)uVar12;
        sVar1 = (short)uVar9;
        if ((int)param_3 <= (int)sVar1 || (int)param_3 <= iVar8) {
          sVar14 = (short)(uVar12 >> 0x10);
          iVar2 = (int)uVar9 >> 0x10;
          iVar6 = param_3 - (int)sVar1;
          uStack_68 = uVar12;
          uStack_64 = uVar9;
          if (iVar6 == 0 || (int)param_3 < (int)sVar1) {
            uVar10 = uVar9 >> 0x10;
            if ((int)(short)uVar12 < (int)param_3) {
              FUN_1073e7e8c((float)iVar2,(float)(((int)uVar12 >> 0x10) - iVar2),(float)iVar6,
                            (float)(iVar8 - sVar1));
              sVar14 = (short)extraout_w12_00;
              puVar15 = &uStack_68;
              uVar16 = extraout_w12_00;
              uVar12 = param_3;
              uVar10 = extraout_w9;
              uVar9 = extraout_w8;
              goto LAB_1073e7b48;
            }
          }
          else {
            FUN_1073e7e8c((float)iVar2,(float)(((int)uVar12 >> 0x10) - iVar2),(float)iVar6,
                          (float)(iVar8 - sVar1));
            puVar15 = &uStack_64;
            uVar16 = extraout_w12;
            uVar12 = extraout_w10_00;
            uVar10 = extraout_w12;
            uVar9 = param_3;
            sVar14 = extraout_w11;
LAB_1073e7b48:
            *puVar15 = param_3 & 0xffff | uVar16 << 0x10;
          }
          sVar11 = (short)uVar12;
          sVar1 = (short)uVar10;
          if (((int)param_4 <= (int)sVar1) || ((int)param_4 <= (int)sVar14)) {
            sVar7 = (short)uVar9;
            iVar8 = param_4 - (int)sVar1;
            if (iVar8 == 0 || (int)param_4 < (int)sVar1) {
              if ((int)sVar14 < (int)param_4) {
                FUN_1073e7e8c((float)(int)sVar7,(float)((int)sVar11 - (int)sVar7),(float)iVar8,
                              (float)((int)sVar14 - (int)sVar1));
                sVar11 = (short)extraout_w12_02;
                puVar15 = &uStack_68;
                uVar12 = extraout_w12_02;
                uVar16 = param_4;
                uVar10 = extraout_w9_00;
                uVar9 = extraout_w8_00;
                goto LAB_1073e7bd0;
              }
            }
            else {
              FUN_1073e7e8c((float)(int)sVar7,(float)((int)sVar11 - (int)sVar7),(float)iVar8,
                            (float)((int)sVar14 - (int)sVar1));
              puVar15 = &uStack_64;
              uVar12 = extraout_w12_01;
              uVar16 = extraout_w11_01;
              uVar10 = param_4;
              uVar9 = extraout_w12_01;
              sVar11 = extraout_w10;
LAB_1073e7bd0:
              sVar14 = (short)uVar16;
              *puVar15 = param_4 << 0x10 | uVar12 & 0xffff;
            }
            sVar1 = (short)uVar9;
            if (((int)sVar1 < (int)param_5) || ((int)sVar11 < (int)param_5)) {
              sVar7 = (short)uVar10;
              iVar8 = param_5 - (int)sVar1;
              if (iVar8 == 0 || (int)param_5 < (int)sVar1) {
                FUN_1073e7e8c((float)(int)sVar7,(float)((int)sVar14 - (int)sVar7),(float)iVar8,
                              (float)((int)sVar11 - (int)sVar1));
                puVar15 = &uStack_64;
                uVar12 = extraout_w12_04;
                uVar16 = extraout_w10_01;
                uVar10 = extraout_w12_04;
                uVar9 = param_5;
                sVar14 = extraout_w11_00;
LAB_1073e7c60:
                sVar11 = (short)uVar16;
                *puVar15 = param_5 & 0xffff | uVar12 << 0x10;
              }
              else if ((int)param_5 <= (int)sVar11) {
                FUN_1073e7e8c((float)(int)sVar7,(float)((int)sVar14 - (int)sVar7),(float)iVar8,
                              (float)((int)sVar11 - (int)sVar1));
                sVar14 = (short)extraout_w12_03;
                puVar15 = &uStack_68;
                uVar12 = extraout_w12_03;
                uVar16 = param_5;
                uVar10 = extraout_w9_01;
                uVar9 = extraout_w8_01;
                goto LAB_1073e7c60;
              }
              sVar1 = (short)uVar10;
              if (((int)sVar1 < (int)param_6) || ((int)sVar14 < (int)param_6)) {
                sVar7 = (short)uVar9;
                iVar8 = param_6 - (int)sVar1;
                if (iVar8 == 0 || (int)param_6 < (int)sVar1) {
                  uVar12 = (uint)((float)(int)sVar7 +
                                 ((float)iVar8 / (float)((int)sVar14 - (int)sVar1)) *
                                 (float)((int)sVar11 - (int)sVar7));
                  puVar15 = &uStack_64;
                  uVar9 = uVar12;
                  uVar10 = param_6;
LAB_1073e7cf4:
                  *puVar15 = param_6 << 0x10 | uVar12 & 0xffff;
                }
                else if ((int)param_6 <= (int)sVar14) {
                  uVar12 = (uint)((float)(int)sVar7 +
                                 ((float)iVar8 / (float)((int)sVar14 - (int)sVar1)) *
                                 (float)((int)sVar11 - (int)sVar7));
                  puVar15 = &uStack_68;
                  goto LAB_1073e7cf4;
                }
                lVar13 = param_1[1];
                if ((*param_1 == lVar13) ||
                   ((lVar5 = *(long *)(lVar13 + -0x10), *(long *)(lVar13 + -0x18) != lVar5 &&
                    (((uint)*(ushort *)(lVar5 + -4) != (uVar9 & 0xffff) ||
                     ((uint)*(ushort *)(lVar5 + -2) != (uVar10 & 0xffff))))))) {
                  FUN_1073e7da4(param_1);
                  func_0x000104c33ff8(param_1[1] + -0x18,&uStack_64);
                  lVar13 = param_1[1];
                }
                func_0x000104c33ff8(lVar13 + -0x18,&uStack_68);
              }
            }
          }
        }
      }
    }
    plVar18 = plVar18 + 3;
  } while( true );
}



/* Entry: 1073e7da4; end: 1073e7deb;  */

undefined8 * FUN_1073e7da4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar2 = puVar1 + 3;
    puVar1[2] = 0;
  }
  else {
    puVar2 = param_1;
    FUN_1073e7dec();
  }
  param_1[1] = puVar2;
  return puVar2 + -3;
}



/* Entry: 1073e7dec; end: 1073e7e8b;  */

long FUN_1073e7dec(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  plVar1 = param_1;
  FUN_10737ccb4(param_1,(param_1[1] - *param_1) / 0x18 + 1);
  FUN_10737ca74(auStack_48,plVar1,(param_1[1] - *param_1) / 0x18,param_1 + 2);
  *puStack_38 = 0;
  puStack_38[1] = 0;
  puStack_38[2] = 0;
  puStack_38 = puStack_38 + 3;
  FUN_10737c9f4(param_1,auStack_48);
  lVar2 = param_1[1];
  func_0x00010737cb7c(auStack_48);
  return lVar2;
}



/* Entry: 1073e7e8c; end: 1073e7e9b;  */

float FUN_1073e7e8c(float param_1,float param_2,float param_3,float param_4)

{
  return param_1 + (param_3 / param_4) * param_2;
}



/* Entry: 1073e7e9c; end: 1073e8bb3;  */

/* WARNING: Possible PIC construction at 0x0001073e7f34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001073e8114: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001073e84c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001073e84e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001073e8628: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001073e84e8) */
/* WARNING: Removing unreachable block (ram,0x0001073e8528) */
/* WARNING: Removing unreachable block (ram,0x0001073e8550) */
/* WARNING: Removing unreachable block (ram,0x0001073e8530) */
/* WARNING: Removing unreachable block (ram,0x0001073e84c8) */
/* WARNING: Removing unreachable block (ram,0x0001073e8118) */
/* WARNING: Removing unreachable block (ram,0x0001073e7f38) */
/* WARNING: Removing unreachable block (ram,0x0001073e8084) */
/* WARNING: Removing unreachable block (ram,0x0001073e8088) */
/* WARNING: Removing unreachable block (ram,0x0001073e8090) */
/* WARNING: Removing unreachable block (ram,0x0001073e862c) */
/* WARNING: Removing unreachable block (ram,0x0001073e86cc) */
/* WARNING: Removing unreachable block (ram,0x0001073e8734) */
/* WARNING: Removing unreachable block (ram,0x0001073e8744) */
/* WARNING: Removing unreachable block (ram,0x0001073e88bc) */
/* WARNING: Removing unreachable block (ram,0x0001073e8764) */
/* WARNING: Removing unreachable block (ram,0x0001073e8768) */
/* WARNING: Removing unreachable block (ram,0x0001073e8774) */
/* WARNING: Removing unreachable block (ram,0x0001073e878c) */
/* WARNING: Removing unreachable block (ram,0x0001073e87b0) */
/* WARNING: Removing unreachable block (ram,0x0001073e8794) */
/* WARNING: Removing unreachable block (ram,0x0001073e88c4) */
/* WARNING: Removing unreachable block (ram,0x0001073e88c8) */
/* WARNING: Removing unreachable block (ram,0x0001073e879c) */
/* WARNING: Removing unreachable block (ram,0x0001073e87b4) */
/* WARNING: Removing unreachable block (ram,0x0001073e87c8) */
/* WARNING: Removing unreachable block (ram,0x0001073e87e0) */
/* WARNING: Removing unreachable block (ram,0x0001073e8808) */
/* WARNING: Removing unreachable block (ram,0x0001073e87fc) */
/* WARNING: Removing unreachable block (ram,0x0001073e8810) */
/* WARNING: Removing unreachable block (ram,0x0001073e8828) */
/* WARNING: Removing unreachable block (ram,0x0001073e882c) */
/* WARNING: Removing unreachable block (ram,0x0001073e87e8) */
/* WARNING: Removing unreachable block (ram,0x0001073e8720) */
/* WARNING: Removing unreachable block (ram,0x0001073e883c) */
/* WARNING: Removing unreachable block (ram,0x0001073e8854) */
/* WARNING: Removing unreachable block (ram,0x0001073e857c) */
/* WARNING: Removing unreachable block (ram,0x0001073e887c) */
/* WARNING: Removing unreachable block (ram,0x0001073e88cc) */
/* WARNING: Removing unreachable block (ram,0x0001073e8ad8) */
/* WARNING: Removing unreachable block (ram,0x0001073e8b4c) */
/* WARNING: Removing unreachable block (ram,0x0001073e8898) */
/* WARNING: Removing unreachable block (ram,0x0001073e8584) */
/* WARNING: Removing unreachable block (ram,0x0001073e8614) */
/* WARNING: Removing unreachable block (ram,0x0001073e8618) */
/* WARNING: Removing unreachable block (ram,0x0001073e8620) */

undefined8 * FUN_1073e7e9c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  func_0x0001073e99b4();
  *puVar1 = &PTR_FUN_1109acbf8;
  func_0x00010785f1f4();
  param_1[3] = 0;
  param_1[2] = param_1 + 3;
  param_1[1] = puVar1;
  param_1[4] = 0;
  func_0x000104c2f64c(param_1 + 5);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  uVar2 = *param_4;
  param_1[0x10] = param_4[1];
  param_1[0xf] = uVar2;
  *param_4 = 0;
  param_4[1] = 0;
  func_0x0001000d03a8(param_1 + 0x11,param_2 + 0x20);
  func_0x000104c2feb0();
  param_1[6] = 0xffffffffffffffff;
  func_0x000104c2fe38();
  param_1[6] = param_4;
  return param_1;
}



/* Entry: 1073e8bb4; end: 1073e8bfb;  */

void FUN_1073e8bb4(undefined8 param_1,long param_2)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001000d03a8(param_1,param_2 + 0x538);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 1073e8bfc; end: 1073e8caf;  */

undefined8 * FUN_1073e8bfc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined8 **ppuVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined ***pppuVar13;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x9;
  int extraout_w10;
  undefined8 *puVar14;
  undefined *puVar15;
  long *plVar16;
  undefined4 uVar17;
  undefined1 auStack_448 [24];
  undefined8 *puStack_430;
  undefined8 *puStack_428;
  undefined1 auStack_420 [24];
  undefined1 auStack_408 [8];
  undefined1 auStack_400 [24];
  undefined4 auStack_3e8 [6];
  undefined4 uStack_3d0;
  undefined **ppuStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined4 uStack_3a8;
  undefined4 uStack_3a0;
  undefined1 uStack_39c;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined1 auStack_378 [56];
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined4 *puStack_330;
  undefined8 *puStack_328;
  long lStack_320;
  undefined8 uStack_318;
  undefined8 uStack_238;
  undefined1 auStack_230 [256];
  undefined8 uStack_130;
  undefined8 auStack_a8 [12];
  undefined **ppuStack_48;
  long lStack_40;
  undefined ***pppuStack_30;
  undefined8 uStack_28;
  
  func_0x0001073e99b4();
  pppuVar13 = (undefined ***)(extraout_x9 + 0xe8);
  uStack_28 = extraout_x8;
  FUN_1073e0964(auStack_a8);
  if (*(long *)(param_3 + 0xf0) != 0) {
    ppuStack_48 = &PTR_DAT_1109acc98;
    pppuStack_30 = &ppuStack_48;
    pppuVar13 = &ppuStack_48;
    lStack_40 = param_3;
    func_0x000107752018(auStack_a8);
    func_0x0001072c9444(&ppuStack_48);
  }
  func_0x000107750290(param_1,auStack_a8);
  puVar6 = auStack_a8;
  func_0x000107266af0();
  func_0x0001073e9970(uStack_28);
  if ((bool)in_ZR) {
    return puVar6;
  }
  ___stack_chk_fail();
  func_0x0001072c9444(&ppuStack_48);
  puVar6 = auStack_a8;
  func_0x000107266af0();
  func_0x0001073e99cc();
  func_0x0001073e99b4();
  auStack_3e8[0] = 0x36;
  uStack_3d0 = 0;
  uStack_3b8 = 0;
  uStack_3b0 = 0;
  ppuStack_3c8 = &PTR_DAT_110996720;
  uStack_3c0 = 0;
  uStack_3a8 = 0x36;
  uStack_3a0 = 0;
  uStack_39c = 1;
  uStack_390 = 0;
  uStack_388 = 0;
  uStack_398 = 0;
  uStack_130 = extraout_x8_00;
  FUN_10743cc34(&puStack_340,auStack_3e8,7);
  FUN_10743d7bc(&uStack_238,&puStack_340);
  func_0x000107288cd8(&puStack_340);
  func_0x000107262330(auStack_3e8);
  func_0x000104c2fe00(auStack_378,puVar6 + 0x11);
  FUN_107371bc4(auStack_230,"source",auStack_378);
  func_0x000104c2f714(auStack_378);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_400,puVar6 + 0xc)
  ;
  puVar14 = (undefined8 *)&UNK_10f41013a;
  func_0x00010726e300(auStack_230,&UNK_10f41013a,auStack_400);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_400);
  func_0x00010784b344(auStack_3e8,(long)puVar6 + 0xc4);
  lVar1 = puVar6[0x1a];
  lVar2 = puVar6[0x1b];
  puVar7 = puVar6 + 0x11;
  func_0x0001072bb3b4();
  puVar8 = auStack_3e8;
  puVar9 = puVar14;
  func_0x0001005d466c();
  lStack_320 = (lVar2 - lVar1) / 0x38;
  uStack_318 = 0;
  puStack_340 = puVar7;
  puStack_338 = puVar14;
  puStack_330 = puVar8;
  puStack_328 = puVar9;
  func_0x0001003a91d4(&UNK_10f4101c4);
  func_0x0001003a9204(auStack_420);
  FUN_1073e937c(auStack_408,&UNK_10f4101a4,auStack_420,5000000000,1000000000);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_420);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3e8);
  uVar17 = *(undefined4 *)(puVar6 + 0xa6);
  puVar9 = (undefined8 *)0x670;
  __Znwm();
  plVar16 = puVar9 + 1;
  *plVar16 = 0;
  puVar9[2] = 0;
  puVar14 = puVar9 + 3;
  *puVar9 = &PTR_DAT_1109acd18;
  FUN_10744d0c4(uVar17,puVar14,puVar6 + 0x29,puVar6 + 2);
  puStack_430 = puVar14;
  puStack_428 = puVar9;
  func_0x0001078696e8(auStack_3e8);
  puVar7 = (undefined8 *)puVar6[0x1b];
  for (puVar14 = (undefined8 *)puVar6[0x1a]; puVar12 = puStack_430, uVar5 = puVar14 == puVar7,
      !(bool)uVar5; puVar14 = puVar14 + 7) {
    (**(code **)(*(long *)puVar14[1] + 0x38))(&puStack_340);
    ppuVar10 = &puStack_340;
    FUN_107330078(ppuVar10);
    puVar15 = *pppuVar13[1];
    plVar11 = (long *)puVar14[1];
    (**(code **)(*plVar11 + 0x48))();
    FUN_1073c0294(puVar15,ppuVar10,plVar11,*puVar14,puVar6 + 0xa7,puVar6 + 5,puVar14 + 3,puVar14 + 5
                 );
  }
  FUN_10744e9d4(puStack_430,*pppuVar13,pppuVar13[4],pppuVar13[5],pppuVar13[6],pppuVar13[7],
                puVar6 + 0x1a);
  FUN_10744f328();
  if ((int)puVar12 != 0) {
    puVar14 = (undefined8 *)puVar6[2];
    while (uVar5 = puVar14 == puVar6 + 3, !(bool)uVar5) {
      puStack_340 = puStack_430;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *plVar16 = *plVar16 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      puStack_328 = (undefined8 *)puVar14[0xc];
      puStack_330 = (undefined4 *)puVar14[0xb];
      puStack_338 = puVar9;
      if (puVar14[0xc] != 0) {
        do {
          func_0x0001073e99ec();
        } while (extraout_w10 != 0);
      }
      FUN_1073e0254(auStack_448);
      func_0x0001073e08f4(&puStack_340);
      func_0x00010002c7d4();
    }
  }
  func_0x00010726b264(auStack_3e8);
  FUN_1073e992c(&puStack_430);
  FUN_1073e9410(auStack_408);
  puVar6 = &uStack_238;
  FUN_10743d7e4();
  func_0x0001073e9970(uStack_130);
  if ((bool)uVar5) {
    return puVar6;
  }
  ___stack_chk_fail();
  func_0x00010726b264(auStack_3e8);
  FUN_1073e992c(&puStack_430);
  FUN_1073e9410(auStack_408);
  puVar6 = &uStack_238;
  FUN_10743d7e4();
  func_0x0001073e99cc();
  *puVar6 = &PTR_FUN_1109acbf8;
  func_0x000104c2f714(puVar6 + 0xa7);
  func_0x000107284d8c(puVar6 + 0x9a);
  func_0x0001073e9228(puVar6 + 0x29);
  func_0x000107266af0(puVar6 + 0x1d);
  func_0x0001073e9334(puVar6 + 0x1a);
  func_0x000104c2f714(puVar6 + 0x11);
  func_0x000107331000(puVar6 + 0xf);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar6 + 0xc);
  func_0x000104c2f714(puVar6 + 5);
  func_0x0001073e0164(puVar6 + 2);
  return puVar6;
}



/* Entry: 1073e8cb0; end: 1073e909f;  */

undefined8 * FUN_1073e8cb0(long param_1,undefined8 *param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 **ppuVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 extraout_x8;
  int extraout_w10;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined4 uVar15;
  undefined1 auStack_398 [24];
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined1 auStack_370 [24];
  undefined1 auStack_358 [8];
  undefined1 auStack_350 [24];
  undefined4 auStack_338 [6];
  undefined4 uStack_320;
  undefined **ppuStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined4 uStack_2f8;
  undefined4 uStack_2f0;
  undefined1 uStack_2ec;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined1 auStack_2c8 [56];
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined4 *puStack_280;
  undefined8 *puStack_278;
  long lStack_270;
  undefined8 uStack_268;
  undefined8 uStack_188;
  undefined1 auStack_180 [256];
  undefined8 uStack_80;
  
  func_0x0001073e99b4();
  auStack_338[0] = 0x36;
  uStack_320 = 0;
  uStack_308 = 0;
  uStack_300 = 0;
  ppuStack_318 = &PTR_DAT_110996720;
  uStack_310 = 0;
  uStack_2f8 = 0x36;
  uStack_2f0 = 0;
  uStack_2ec = 1;
  uStack_2e0 = 0;
  uStack_2d8 = 0;
  uStack_2e8 = 0;
  uStack_80 = extraout_x8;
  FUN_10743cc34(&puStack_290,auStack_338,7);
  FUN_10743d7bc(&uStack_188,&puStack_290);
  func_0x000107288cd8(&puStack_290);
  func_0x000107262330(auStack_338);
  func_0x000104c2fe00(auStack_2c8,param_1 + 0x88);
  FUN_107371bc4(auStack_180,"source",auStack_2c8);
  func_0x000104c2f714(auStack_2c8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_350,param_1 + 0x60);
  puVar8 = (undefined8 *)&UNK_10f41013a;
  func_0x00010726e300(auStack_180,&UNK_10f41013a,auStack_350);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_350);
  func_0x00010784b344(auStack_338,param_1 + 0xc4);
  lVar12 = *(long *)(param_1 + 0xd0);
  lVar1 = *(long *)(param_1 + 0xd8);
  puVar5 = (undefined8 *)(param_1 + 0x88);
  func_0x0001072bb3b4();
  puVar6 = auStack_338;
  puVar7 = puVar8;
  func_0x0001005d466c();
  lStack_270 = (lVar1 - lVar12) / 0x38;
  uStack_268 = 0;
  puStack_290 = puVar5;
  puStack_288 = puVar8;
  puStack_280 = puVar6;
  puStack_278 = puVar7;
  func_0x0001003a91d4(&UNK_10f4101c4);
  func_0x0001003a9204(auStack_370);
  FUN_1073e937c(auStack_358,&UNK_10f4101a4,auStack_370,5000000000,1000000000);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_370);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_338);
  uVar15 = *(undefined4 *)(param_1 + 0x530);
  puVar7 = (undefined8 *)0x670;
  __Znwm();
  plVar14 = puVar7 + 1;
  *plVar14 = 0;
  puVar7[2] = 0;
  puVar8 = puVar7 + 3;
  *puVar7 = &PTR_DAT_1109acd18;
  FUN_10744d0c4(uVar15,puVar8,param_1 + 0x148,param_1 + 0x10);
  puStack_380 = puVar8;
  puStack_378 = puVar7;
  func_0x0001078696e8(auStack_338);
  puVar5 = *(undefined8 **)(param_1 + 0xd8);
  for (puVar8 = *(undefined8 **)(param_1 + 0xd0); puVar11 = puStack_380, uVar4 = puVar8 == puVar5,
      !(bool)uVar4; puVar8 = puVar8 + 7) {
    (**(code **)(*(long *)puVar8[1] + 0x38))(&puStack_290);
    ppuVar9 = &puStack_290;
    FUN_107330078(ppuVar9);
    uVar13 = *(undefined8 *)param_2[1];
    plVar10 = (long *)puVar8[1];
    (**(code **)(*plVar10 + 0x48))();
    FUN_1073c0294(uVar13,ppuVar9,plVar10,*puVar8,param_1 + 0x538,param_1 + 0x28,puVar8 + 3,
                  puVar8 + 5);
  }
  FUN_10744e9d4(puStack_380,*param_2,param_2[4],param_2[5],param_2[6],param_2[7],
                (long *)(param_1 + 0xd0));
  FUN_10744f328();
  if ((int)puVar11 != 0) {
    lVar12 = *(long *)(param_1 + 0x10);
    while (uVar4 = lVar12 == param_1 + 0x18, !(bool)uVar4) {
      puStack_290 = puStack_380;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = *plVar14 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      puStack_278 = *(undefined8 **)(lVar12 + 0x60);
      puStack_280 = *(undefined4 **)(lVar12 + 0x58);
      puStack_288 = puVar7;
      if (*(long *)(lVar12 + 0x60) != 0) {
        do {
          func_0x0001073e99ec();
        } while (extraout_w10 != 0);
      }
      FUN_1073e0254(auStack_398);
      func_0x0001073e08f4(&puStack_290);
      func_0x00010002c7d4();
    }
  }
  func_0x00010726b264(auStack_338);
  FUN_1073e992c(&puStack_380);
  FUN_1073e9410(auStack_358);
  puVar8 = &uStack_188;
  FUN_10743d7e4();
  func_0x0001073e9970(uStack_80);
  if ((bool)uVar4) {
    return puVar8;
  }
  ___stack_chk_fail();
  func_0x00010726b264(auStack_338);
  FUN_1073e992c(&puStack_380);
  FUN_1073e9410(auStack_358);
  puVar8 = &uStack_188;
  FUN_10743d7e4();
  func_0x0001073e99cc();
  *puVar8 = &PTR_FUN_1109acbf8;
  func_0x000104c2f714(puVar8 + 0xa7);
  func_0x000107284d8c(puVar8 + 0x9a);
  func_0x0001073e9228(puVar8 + 0x29);
  func_0x000107266af0(puVar8 + 0x1d);
  func_0x0001073e9334(puVar8 + 0x1a);
  func_0x000104c2f714(puVar8 + 0x11);
  func_0x000107331000(puVar8 + 0xf);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar8 + 0xc);
  func_0x000104c2f714(puVar8 + 5);
  func_0x0001073e0164(puVar8 + 2);
  return puVar8;
}



/* Entry: 1073e90a0; end: 1073e90a3;  */

undefined8 * FUN_1073e90a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109acbf8;
  func_0x000104c2f714(param_1 + 0xa7);
  func_0x000107284d8c(param_1 + 0x9a);
  func_0x0001073e9228(param_1 + 0x29);
  func_0x000107266af0(param_1 + 0x1d);
  func_0x0001073e9334(param_1 + 0x1a);
  func_0x000104c2f714(param_1 + 0x11);
  func_0x000107331000(param_1 + 0xf);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xc);
  func_0x000104c2f714(param_1 + 5);
  func_0x0001073e0164(param_1 + 2);
  return param_1;
}



/* Entry: 1073e90a4; end: 1073e90b7;  */

void FUN_1073e90a4(void)

{
  FUN_1073e943c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073e90b8; end: 1073e90db;  */

undefined8 FUN_1073e90b8(undefined8 param_1)

{
  FUN_1073e90dc();
  return param_1;
}



/* Entry: 1073e90dc; end: 1073e9137;  */

void FUN_1073e90dc(long param_1,long param_2)

{
  uint uVar1;
  bool bVar2;
  long extraout_x8;
  
  uVar1 = *(uint *)(param_2 + 0x30);
  if (*(int *)(param_1 + 0x30) != -1 || uVar1 != 0xffffffff) {
    bVar2 = uVar1 == 0xffffffff;
    if (bVar2) {
      func_0x0001073e7278(param_1,param_1,param_2);
      if (!bVar2) {
        func_0x0001073e7260((&PTR_FUN_1109acb68)[extraout_x8]);
      }
      func_0x0001073e72a0();
      return;
    }
    (*(code *)(&PTR_FUN_1109acc50)[uVar1])(&stack0xffffffffffffffe8);
  }
  return;
}



/* Entry: 1073e9138; end: 1073e9147;  */

void FUN_1073e9138(long *param_1,undefined1 *param_2,undefined1 *param_3)

{
  long lStack_20;
  undefined1 *puStack_18;
  
  lStack_20 = *param_1;
  if (*(int *)(lStack_20 + 0x30) != 0) {
    puStack_18 = param_3;
    FUN_1073e917c(&lStack_20);
    return;
  }
  *param_2 = *param_3;
  return;
}



/* Entry: 1073e9148; end: 1073e917b;  */

void FUN_1073e9148(long param_1,undefined1 *param_2,undefined1 *param_3)

{
  long lStack_20;
  undefined1 *puStack_18;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    lStack_20 = param_1;
    puStack_18 = param_3;
    FUN_1073e917c(&lStack_20);
    return;
  }
  *param_2 = *param_3;
  return;
}



/* Entry: 1073e917c; end: 1073e9187;  */

void FUN_1073e917c(undefined8 *param_1)

{
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  
  func_0x0001073e9a2c(*param_1,param_1[1]);
  *unaff_x20 = *unaff_x19;
  *(undefined4 *)(unaff_x20 + 0x30) = 0;
  return;
}



/* Entry: 1073e9188; end: 1073e91af;  */

void FUN_1073e9188(void)

{
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  
  func_0x0001073e9a2c();
  *unaff_x20 = *unaff_x19;
  *(undefined4 *)(unaff_x20 + 0x30) = 0;
  return;
}



/* Entry: 1073e91b0; end: 1073e91b7;  */

void FUN_1073e91b0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(*param_1 + 0x30) == 1) {
    func_0x000107311560(param_2,param_3);
    func_0x00010727e15c();
    *(undefined2 *)(unaff_x20 + 0x28) = *(undefined2 *)(unaff_x19 + 0x28);
    return;
  }
  FUN_1073e91f0(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1073e91b8; end: 1073e91ef;  */

void FUN_1073e91b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(param_1 + 0x30) == 1) {
    func_0x000107311560(param_2,param_3);
    func_0x00010727e15c();
    *(undefined2 *)(unaff_x20 + 0x28) = *(undefined2 *)(unaff_x19 + 0x28);
    return;
  }
  FUN_1073e91f0(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1073e91f0; end: 1073e91fb;  */

void FUN_1073e91f0(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x0001073e9a2c(*param_1,param_1[1]);
  func_0x000107310bc8();
  *(undefined4 *)(unaff_x20 + 0x30) = 1;
  return;
}



/* Entry: 1073e91fc; end: 1073e9293;  */

void FUN_1073e91fc(void)

{
  long unaff_x20;
  
  func_0x0001073e9a2c();
  func_0x000107310bc8();
  *(undefined4 *)(unaff_x20 + 0x30) = 1;
  return;
}



/* Entry: 1073e9294; end: 1073e92c3;  */

void FUN_1073e9294(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_2[3] = 0;
  param_2[4] = 0;
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  param_2[5] = 0;
  param_2[6] = 0;
  return;
}



/* Entry: 1073e92c4; end: 1073e92d7;  */

undefined * FUN_1073e92c4(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104bd47e8(&DAT_10f62a4d8);
  func_0x000107283194(puVar1 + 0x28);
  func_0x000107283194(puVar1 + 0x18);
  FUN_107330fdc(puVar1 + 8);
  return puVar1;
}



/* Entry: 1073e92d8; end: 1073e937b;  */

long FUN_1073e92d8(long param_1)

{
  func_0x000107283194(param_1 + 0x28);
  func_0x000107283194(param_1 + 0x18);
  FUN_107330fdc(param_1 + 8);
  return param_1;
}



/* Entry: 1073e937c; end: 1073e940f;  */

undefined8 * FUN_1073e937c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar1 = param_1;
  func_0x000107879c44();
  uStack_58 = param_3[1];
  uStack_60 = *param_3;
  uStack_50 = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  func_0x000107879da0();
  *param_1 = puVar1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_60);
  return param_1;
}



/* Entry: 1073e9410; end: 1073e943b;  */

undefined8 FUN_1073e9410(undefined8 param_1)

{
  func_0x000107879c44();
  func_0x00010787a4a8();
  return param_1;
}



/* Entry: 1073e943c; end: 1073e94ef;  */

undefined8 * FUN_1073e943c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109acbf8;
  func_0x000104c2f714(param_1 + 0xa7);
  func_0x000107284d8c(param_1 + 0x9a);
  func_0x0001073e9228(param_1 + 0x29);
  func_0x000107266af0(param_1 + 0x1d);
  func_0x0001073e9334(param_1 + 0x1a);
  func_0x000104c2f714(param_1 + 0x11);
  func_0x000107331000(param_1 + 0xf);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xc);
  func_0x000104c2f714(param_1 + 5);
  func_0x0001073e0164(param_1 + 2);
  return param_1;
}



/* Entry: 1073e94f0; end: 1073e9537;  */

void FUN_1073e94f0(undefined8 param_1)

{
  long extraout_x8;
  
  func_0x0001073e9a14();
  FUN_1073dd608(param_1,extraout_x8 + 0x158);
  return;
}



/* Entry: 1073e9538; end: 1073e9577;  */

void FUN_1073e9538(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  FUN_1073dd630(param_3);
  uVar1 = (ulong)*(uint *)(param_3 + 0x30);
  if (*(uint *)(param_3 + 0x30) == 0xffffffff) {
    uVar1 = 0xffffffffffffffff;
  }
  (*(code *)(&PTR_FUN_1109acc60)[uVar1])(param_1,&stack0xffffffffffffffe8);
  return;
}



/* Entry: 1073e9578; end: 1073e95af;  */

void FUN_1073e9578(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 uStack_18;
  
  uVar1 = (ulong)*(uint *)(param_2 + 0x30);
  if (*(uint *)(param_2 + 0x30) == 0xffffffff) {
    uVar1 = 0xffffffffffffffff;
  }
  uStack_18 = param_1;
  (*(code *)(&PTR_FUN_1109acc60)[uVar1])(&uStack_18);
  return;
}



/* Entry: 1073e95b0; end: 1073e95c3;  */

void FUN_1073e95b0(undefined8 param_1,long *param_2)

{
  undefined1 auStack_48 [48];
  undefined4 uStack_18;
  
  auStack_48[0] = *(undefined1 *)(*param_2 + 8);
  uStack_18 = 0;
  FUN_1073e95fc(param_1,auStack_48);
  FUN_1073e71cc(auStack_48);
  return;
}



/* Entry: 1073e95c4; end: 1073e95fb;  */

void FUN_1073e95c4(undefined8 param_1,long param_2)

{
  undefined1 auStack_48 [48];
  undefined4 uStack_18;
  
  auStack_48[0] = *(undefined1 *)(param_2 + 8);
  uStack_18 = 0;
  FUN_1073e95fc(param_1,auStack_48);
  FUN_1073e71cc(auStack_48);
  return;
}



/* Entry: 1073e95fc; end: 1073e962b;  */

undefined1 * FUN_1073e95fc(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  FUN_1073e962c();
  return param_1;
}



/* Entry: 1073e962c; end: 1073e968b;  */

void FUN_1073e962c(long param_1,long param_2)

{
  uint uVar1;
  long lStack_38;
  
  FUN_1073e71cc();
  uVar1 = *(uint *)(param_2 + 0x30);
  if (uVar1 != 0xffffffff) {
    lStack_38 = param_1;
    (*(code *)(&PTR_FUN_1109acc78)[uVar1])(&lStack_38,param_2);
    *(uint *)(param_1 + 0x30) = uVar1;
  }
  return;
}



/* Entry: 1073e968c; end: 1073e96af;  */

void FUN_1073e968c(undefined8 *param_1,undefined1 *param_2)

{
  *(undefined1 *)*param_1 = *param_2;
  return;
}



/* Entry: 1073e96b0; end: 1073e96e7;  */

void FUN_1073e96b0(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 auStack_48 [48];
  undefined4 uStack_18;
  
  auStack_48[0] = *param_3;
  uStack_18 = 0;
  FUN_1073e95fc(param_1,auStack_48);
  FUN_1073e71cc(auStack_48);
  return;
}



/* Entry: 1073e96e8; end: 1073e96ef;  */

void FUN_1073e96e8(undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 extraout_x8;
  undefined1 auStack_280 [48];
  undefined4 uStack_250;
  undefined1 auStack_248 [56];
  undefined1 auStack_210 [56];
  undefined1 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [232];
  undefined8 uStack_e0;
  undefined8 uStack_38;
  
  plVar2 = (long *)*param_2;
  lVar3 = param_3;
  func_0x0001073e99b4();
  uVar1 = ((*(byte *)(lVar3 + 0x10) ^ 0xff) & 6) == 0;
  uStack_38 = extraout_x8;
  if ((bool)uVar1) {
    func_0x0001077512dc(*(undefined4 *)*plVar2,auStack_1c8);
    uStack_e0 = *(undefined8 *)(*plVar2 + 8);
    auStack_210[0] = 0;
    uStack_1d8 = 0;
    uStack_1d0 = *(undefined8 *)(*plVar2 + 0x40);
    func_0x000107280464(param_3,auStack_1c8,auStack_210,0);
    auStack_280[0] = (undefined1)param_3;
    uStack_250 = 0;
    FUN_1073e95fc(param_1,auStack_280);
    FUN_1073e71cc(auStack_280);
    func_0x00010724b3d8(auStack_210);
    func_0x000107267da8(auStack_1c8);
  }
  else {
    FUN_1073e97fc(auStack_248,param_3);
    FUN_1073e95fc(param_1,auStack_248);
    FUN_1073e71cc(auStack_248);
  }
  func_0x0001073e9970(uStack_38);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010724b3d8(auStack_210);
  func_0x000107267da8(auStack_1c8);
  func_0x0001073e99cc();
  FUN_1073e9814();
  return;
}



/* Entry: 1073e96f0; end: 1073e97fb;  */

void FUN_1073e96f0(undefined8 param_1,long *param_2,long param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined1 auStack_280 [48];
  undefined4 uStack_250;
  undefined1 auStack_248 [56];
  undefined1 auStack_210 [56];
  undefined1 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [232];
  undefined8 uStack_e0;
  undefined8 uStack_38;
  
  lVar2 = param_3;
  func_0x0001073e99b4();
  uVar1 = ((*(byte *)(lVar2 + 0x10) ^ 0xff) & 6) == 0;
  uStack_38 = extraout_x8;
  if ((bool)uVar1) {
    func_0x0001077512dc(*(undefined4 *)*param_2,auStack_1c8);
    uStack_e0 = *(undefined8 *)(*param_2 + 8);
    auStack_210[0] = 0;
    uStack_1d8 = 0;
    uStack_1d0 = *(undefined8 *)(*param_2 + 0x40);
    func_0x000107280464(param_3,auStack_1c8,auStack_210,0);
    auStack_280[0] = (undefined1)param_3;
    uStack_250 = 0;
    FUN_1073e95fc(param_1,auStack_280);
    FUN_1073e71cc(auStack_280);
    func_0x00010724b3d8(auStack_210);
    func_0x000107267da8(auStack_1c8);
  }
  else {
    FUN_1073e97fc(auStack_248,param_3);
    FUN_1073e95fc(param_1,auStack_248);
    FUN_1073e71cc(auStack_248);
  }
  func_0x0001073e9970(uStack_38);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010724b3d8(auStack_210);
  func_0x000107267da8(auStack_1c8);
  func_0x0001073e99cc();
  FUN_1073e9814();
  return;
}



/* Entry: 1073e97fc; end: 1073e9813;  */

void FUN_1073e97fc(void)

{
  FUN_1073e9814();
  return;
}



/* Entry: 1073e9814; end: 1073e982f;  */

void FUN_1073e9814(long param_1)

{
  func_0x00010727ff10();
  *(undefined4 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 1073e9830; end: 1073e984b;  */

void FUN_1073e9830(undefined8 param_1)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001000d03a8(param_1,0x1138369c0);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 1073e984c; end: 1073e987b;  */

void FUN_1073e984c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_1109acc98;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1073e987c; end: 1073e98b3;  */

void FUN_1073e987c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109acc98;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1073e98b4; end: 1073e98eb;  */

long FUN_1073e98b4(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109accf8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1073e98ec; end: 1073e98fb;  */

undefined ** FUN_1073e98ec(void)

{
  return &PTR_DAT_1109accf8;
}



/* Entry: 1073e98fc; end: 1073e990f;  */

void FUN_1073e98fc(void)

{
  func_0x0001073e991c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073e9910; end: 1073e992b;  */

undefined8 * FUN_1073e9910(long param_1)

{
  FUN_107450bbc(param_1 + 0x650);
  func_0x000104c2f714(param_1 + 0x1c8);
  func_0x000104c2f714(param_1 + 400);
  FUN_1074503a8(param_1 + 0x170);
  FUN_1074503a8(param_1 + 0x150);
  FUN_107450a80(param_1 + 0x128);
  func_0x00010730b10c(param_1 + 0x108);
  func_0x00010730b13c(param_1 + 0xd0);
  func_0x00010731e26c(param_1 + 0xb8);
  func_0x000107450420(param_1 + 0x98);
  func_0x000107261dac(param_1 + 0x78);
  func_0x0001074509ec(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x18) = &PTR_DAT_1109ace68;
  func_0x0001073b4ef8(param_1 + 0x20);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 1073e992c; end: 1073e9953;  */

long FUN_1073e992c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1073e9954; end: 1073e9a53;  */

void FUN_1073e9954(undefined8 param_1)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001000d03a8(param_1,0x1138369c0);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 1073e9a54; end: 1073ea26b;  */

undefined8 * FUN_1073e9a54(undefined8 *param_1,long *param_2,undefined8 *param_3,ulong *param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar9;
  int extraout_w10;
  ulong uVar10;
  ulong *puVar11;
  long *plVar12;
  long lVar13;
  undefined4 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  long *plStack_6a0;
  long lStack_698;
  undefined1 auStack_688 [24];
  long *plStack_670;
  long lStack_668;
  long lStack_658;
  long lStack_650;
  long lStack_648;
  long lStack_640;
  undefined1 auStack_610 [56];
  long alStack_5d8 [2];
  long lStack_5c8;
  uint auStack_560 [2];
  long lStack_558;
  undefined8 uStack_550;
  undefined4 uStack_548;
  undefined **ppuStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  ulong uStack_528;
  undefined8 *puStack_520;
  undefined4 uStack_518;
  undefined1 uStack_514;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined1 *puStack_480;
  long lStack_478;
  long lStack_468;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined1 auStack_3a0 [352];
  undefined1 auStack_240 [64];
  undefined1 auStack_200 [64];
  undefined1 auStack_1c0 [56];
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [256];
  undefined8 uStack_80;
  
  uStack_80 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = &PTR_FUN_1109acd68;
  uVar15 = *param_4;
  puVar11 = param_1 + 1;
  param_1[2] = param_4[1];
  *puVar11 = uVar15;
  *param_4 = 0;
  param_4[1] = 0;
  func_0x000104c2fe00(param_1 + 3,*(long *)(*(long *)*param_3 + 8) + 8);
  puVar5 = param_1 + 10;
  func_0x000104c2fe00(puVar5,*param_2 + 0x20);
  uVar16 = *(undefined8 *)*param_2;
  param_1[0x12] = ((undefined8 *)*param_2)[1];
  param_1[0x11] = uVar16;
  uVar14 = NEON_ucvtf((uint)*(byte *)*param_2);
  *(undefined4 *)(param_1 + 0x13) = uVar14;
  func_0x00010785f1f4();
  param_1[0x16] = 0;
  param_1[0x15] = param_1 + 0x16;
  param_1[0x14] = puVar5;
  puVar5 = param_1 + 0x18;
  *puVar5 = &UNK_10e52b660;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = &UNK_10e52b660;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = &UNK_10e52b660;
  *(undefined1 *)(param_1 + 0x36) = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  _bzero(param_1 + 0x21,0x99);
  auStack_560[0] = 0x2f;
  uStack_548 = 0;
  uStack_530 = 0;
  uStack_528 = 0;
  ppuStack_540 = &PTR_DAT_110996720;
  uStack_538 = 0;
  puStack_520 = (undefined8 *)CONCAT44(puStack_520._4_4_,0x2f);
  uStack_518 = 0;
  uStack_514 = 1;
  uStack_508 = 0;
  uStack_500 = 0;
  uStack_510 = 0;
  FUN_10743cc34(&uStack_3d0,auStack_560,1);
  FUN_10743d7bc(auStack_188,&uStack_3d0);
  func_0x000107288cd8(&uStack_3d0);
  func_0x000107262330(auStack_560);
  func_0x000104c2fe00(auStack_1c0,param_1 + 10);
  FUN_107371bc4(auStack_180,"source",auStack_1c0);
  func_0x000104c2f714(auStack_1c0);
  func_0x00010729d56c(auStack_180,&UNK_10f41013a,&UNK_10f4101d7);
  lStack_658 = *(long *)*param_3;
  lStack_650 = ((long *)*param_3)[1];
  if (lStack_650 != 0) {
    plVar6 = (long *)(lStack_650 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  auStack_560[0] = *(uint *)(param_1 + 0x13);
  lStack_558 = param_2[6];
  uStack_550 = 0x7fffffffffffffff;
  uStack_538 = 0;
  uStack_530 = CONCAT71(uStack_530._1_7_,1);
  uStack_528 = 0;
  puStack_520 = puVar5;
  FUN_1073ea26c(&uStack_3d0,*(long *)(lStack_658 + 8) + 0x168,auStack_560);
  param_1[0x25] = uStack_3c8;
  param_1[0x24] = uStack_3d0;
  param_1[0x27] = uStack_3b8;
  param_1[0x26] = uStack_3c0;
  param_1[0x29] = uStack_3a8;
  param_1[0x28] = uStack_3b0;
  FUN_1073ddf7c(param_1 + 0x2a,auStack_3a0);
  FUN_1073dd4c4(auStack_3a0);
  plVar12 = (long *)param_3[1];
  for (plVar6 = (long *)*param_3; plVar6 != plVar12; plVar6 = plVar6 + 2) {
    FUN_1073ea38c(param_1 + 0x15,*(long *)(*plVar6 + 8) + 8,plVar6);
  }
  FUN_107338c30(param_1 + 0x34,*(long *)(lStack_658 + 8) + 0xd0);
  plVar6 = (long *)*puVar11;
  (**(code **)(*plVar6 + 0x10))();
  if ((long *)((long)(param_1[0x33] - param_1[0x31]) >> 4) < plVar6) {
    if ((ulong)plVar6 >> 0x3c != 0) goto LAB_1073ea0ec;
    func_0x0001073ea860(&uStack_3d0,plVar6,(long)(param_1[0x32] - param_1[0x31]) >> 4,param_1 + 0x33
                       );
    func_0x0001073ea7e8(param_1 + 0x31,&uStack_3d0);
    FUN_1073ea8bc(&uStack_3d0);
  }
  for (plVar12 = (long *)0x0; uVar4 = plVar12 == plVar6, !(bool)uVar4;
      plVar12 = (long *)((long)plVar12 + 1)) {
    (**(code **)(*(long *)*puVar11 + 0x18))(&plStack_670,(long *)*puVar11,plVar12);
    plVar7 = plStack_670;
    (**(code **)(*plStack_670 + 0x30))();
    func_0x000107269bac(auStack_200,plVar7);
    func_0x00010726236c(auStack_240,auStack_200);
    lVar13 = param_2[8];
    func_0x0001072e7640(&uStack_3d0,auStack_240,0x1138369c0);
    func_0x000107869b38(auStack_560,lVar13,&uStack_3d0);
    func_0x00010786967c();
    FUN_1073dcf84(auStack_688,auStack_560,lVar13);
    FUN_1073de9d8(auStack_560);
    func_0x000104c2f714(&uStack_3d0);
    func_0x0001077512dc(*(undefined4 *)(param_1 + 0x13),auStack_560);
    lStack_698 = lStack_668;
    plStack_6a0 = plStack_670;
    if (lStack_668 != 0) {
      do {
        func_0x0001073eb5a0();
      } while (extraout_w10 != 0);
    }
    func_0x000104c2fe00(&lStack_648,param_1 + 10);
    (**(code **)(*(long *)*puVar11 + 0x20))(auStack_610);
    func_0x0001073c4f74(alStack_5d8,&lStack_648);
    func_0x000107751444(auStack_560,&plStack_6a0,alStack_5d8);
    lStack_478 = param_2[6];
    puStack_480 = auStack_688;
    lStack_468 = (long)param_1 + 0x8c;
    func_0x000107751334(&uStack_3d0,auStack_560);
    func_0x000107267e8c(alStack_5d8);
    func_0x000107267eac(&lStack_648);
    func_0x000107267e44(&plStack_6a0);
    func_0x000107267da8(auStack_560);
    auStack_560[0] = auStack_560[0] & 0xffffff00;
    uStack_528 = uStack_528 & 0xffffffffffffff00;
    puVar8 = param_1 + 0x34;
    puStack_520 = puVar5;
    func_0x00010777faa8(puVar8,&uStack_3d0,auStack_560);
    if (((ulong)puVar8 & 1) != 0) {
      (**(code **)(*plStack_670 + 0x38))(alStack_5d8);
      plVar7 = alStack_5d8;
      FUN_107330078();
      if (*plVar7 != plVar7[1]) {
        func_0x000107297530(&lStack_648);
        if (lStack_648 != lStack_640) {
          plVar7 = plStack_670;
          (**(code **)(*plStack_670 + 0x20))();
          lVar13 = *plVar7;
          FUN_1073ea3a4(lVar13,&PTR_DAT_1109acda8);
          if ((int)lVar13 == 0) {
            uVar4 = 0;
          }
          else {
            lVar13 = *plVar7;
            func_0x0001073ea3cc(lVar13,&PTR_DAT_1109acda8);
            uVar4 = *(undefined1 *)(lVar13 + 8);
          }
          lVar13 = *plVar7;
          FUN_1073ea3a4(lVar13,&PTR_DAT_1109acdb0);
          if ((int)lVar13 != 0) {
            func_0x0001073ea3cc(*plVar7,&PTR_DAT_1109acdb0);
          }
          lVar13 = *plVar7;
          FUN_1073ea3a4(lVar13,&PTR_DAT_1109acdb8);
          if ((int)lVar13 != 0) {
            func_0x0001073ea3cc(*plVar7,&PTR_DAT_1109acdb8);
          }
          lVar13 = *plVar7;
          FUN_1073ea3a4(lVar13,&PTR_DAT_1109acdc0);
          if ((int)lVar13 != 0) {
            func_0x0001073ea3cc(*plVar7,&PTR_DAT_1109acdc0);
          }
          if ((ulong)param_1[0x32] < (ulong)param_1[0x33]) {
            func_0x0001073eb5b0();
            lVar13 = extraout_x8 + 0x10;
            *(undefined1 *)(extraout_x8 + 0xc) = uVar4;
          }
          else {
            lVar13 = (long)(param_1[0x32] - param_1[0x31]) >> 4;
            uVar15 = lVar13 + 1;
            if (uVar15 >> 0x3c != 0) {
              func_0x0001073ea7d4();
              goto LAB_1073ea0f0;
            }
            uVar9 = param_1[0x33] - param_1[0x31];
            uVar10 = (long)uVar9 >> 3;
            if (uVar10 <= uVar15) {
              uVar10 = uVar15;
            }
            if (0x7fffffffffffffef < uVar9) {
              uVar10 = 0xfffffffffffffff;
            }
            func_0x0001073ea860(alStack_5d8,uVar10,lVar13,param_1 + 0x33);
            func_0x0001073eb5b0(lStack_5c8);
            *(undefined1 *)(extraout_x8_00 + 0xc) = uVar4;
            lStack_5c8 = extraout_x8_00 + 0x10;
            func_0x0001073ea7e8(param_1 + 0x31,alStack_5d8);
            lVar13 = param_1[0x32];
            FUN_1073ea8bc(alStack_5d8);
          }
          param_1[0x32] = lVar13;
        }
        func_0x000104c336c8(&lStack_648);
      }
    }
    func_0x00010724b3d8(auStack_560);
    func_0x000107267da8(&uStack_3d0);
    func_0x00010726b264(auStack_688);
    func_0x00010724b3d8(auStack_240);
    func_0x000104c319e0(auStack_200);
    FUN_107330fdc(&plStack_670);
  }
  FUN_1073ad37c(&lStack_658);
  FUN_10743d7e4(auStack_188);
  func_0x0001073eb5f8(uStack_80);
  if ((bool)uVar4) {
    return param_1;
  }
  ___stack_chk_fail();
LAB_1073ea0ec:
  func_0x0001073ea7d4();
LAB_1073ea0f0:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1073ea0f4);
  (*pcVar3)();
}



/* Entry: 1073ea26c; end: 1073ea38b;  */

void FUN_1073ea26c(undefined4 *param_1,undefined4 param_2)

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
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_a8 [56];
  
  FUN_1073ea8fc();
  uVar1 = param_2;
  func_0x0001073eb558();
  func_0x0001073ea91c();
  uVar2 = uVar1;
  func_0x0001073eb558();
  func_0x0001073ea93c();
  uVar3 = uVar2;
  func_0x0001073eb558();
  func_0x0001073ea964();
  uVar4 = uVar3;
  func_0x0001073eb558();
  func_0x0001073ea990();
  uVar5 = uVar4;
  func_0x0001073eb558();
  func_0x0001073ea9b0();
  uVar6 = uVar5;
  func_0x0001073eb558();
  func_0x0001073ea9d8();
  uVar7 = uVar6;
  func_0x0001073eb558();
  func_0x0001073eaa00();
  uVar8 = uVar7;
  func_0x0001073eb558();
  func_0x0001073eaa20();
  uVar9 = uVar8;
  func_0x0001073eb558();
  func_0x0001073eaa40();
  uVar10 = uVar9;
  func_0x0001073eb558();
  func_0x0001073eaa6c();
  uVar11 = uVar10;
  func_0x0001073eb558();
  func_0x0001073eaa94();
  func_0x0001073eb558(auStack_a8);
  func_0x0001073eaabc();
  *param_1 = param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  param_1[8] = uVar8;
  param_1[9] = uVar9;
  param_1[10] = uVar10;
  param_1[0xb] = uVar11;
  FUN_1073dd9b0(param_1 + 0xc,auStack_a8);
  FUN_1073dd4c4(auStack_a8);
  return;
}



/* Entry: 1073ea38c; end: 1073ea3a3;  */

void FUN_1073ea38c(void)

{
  func_0x0001073eaaec();
  return;
}



/* Entry: 1073ea3a4; end: 1073ea3fb;  */

bool FUN_1073ea3a4(long param_1)

{
  func_0x0001073eb570();
  func_0x0001073eb590();
  return param_1 != 0;
}



/* Entry: 1073ea3fc; end: 1073ea427;  */

void FUN_1073ea3fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001073ea408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x20))();
  return;
}



/* Entry: 1073ea428; end: 1073ea52f;  */

void FUN_1073ea428(undefined8 param_1,long param_2)

{
  undefined1 auStack_c0 [96];
  long lStack_60;
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined1 auStack_28 [8];
  
  func_0x00010784b344(auStack_58,param_2 + 0x8c);
  lStack_60 = *(long *)(param_2 + 400) - *(long *)(param_2 + 0x188) >> 4;
  FUN_1073eae54(auStack_c0,auStack_58,param_2 + 0x50,param_2 + 0x18,&lStack_60);
  func_0x0001003a91d4(&UNK_10f41020c);
  func_0x0001003a9204(auStack_40);
  FUN_1073e937c(auStack_28,&UNK_10f4101df,auStack_40,5000000000,1000000000);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_40);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  FUN_1073e0964(auStack_c0,param_2 + 0xc0);
  func_0x000107750290(param_1,auStack_c0);
  func_0x000107266af0(auStack_c0);
  FUN_1073e9410(auStack_28);
  return;
}



/* Entry: 1073ea530; end: 1073ea79b;  */

void FUN_1073ea530(long param_1)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  int extraout_w10;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 *puStack_348;
  undefined1 *puStack_340;
  code *pcStack_338;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  undefined4 auStack_320 [6];
  undefined4 uStack_308;
  undefined **ppuStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2d8;
  undefined1 uStack_2d4;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined1 auStack_2b0 [56];
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [256];
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  auStack_320[0] = 0x36;
  uStack_308 = 0;
  uStack_2f0 = 0;
  uStack_2e8 = 0;
  ppuStack_300 = &PTR_DAT_110996720;
  uStack_2f8 = 0;
  uStack_2e0 = 0x36;
  uStack_2d8 = 0;
  uStack_2d4 = 1;
  uStack_2c8 = 0;
  uStack_2c0 = 0;
  uStack_2d0 = 0;
  FUN_10743cc34(&puStack_278,auStack_320,7);
  FUN_10743d7bc(auStack_170,&puStack_278);
  func_0x000107288cd8(&puStack_278);
  func_0x000107262330(auStack_320);
  func_0x000104c2fe00(auStack_2b0,param_1 + 0x50);
  FUN_107371bc4(auStack_168,"source",auStack_2b0);
  func_0x000104c2f714(auStack_2b0);
  func_0x00010729d56c(auStack_168,&UNK_10f41013a,&UNK_10f41022f);
  uVar2 = *(long *)(param_1 + 0x188) == *(long *)(param_1 + 400);
  if (!(bool)uVar2) {
    uVar7 = *(undefined4 *)(param_1 + 0x124);
    uVar8 = *(undefined4 *)(param_1 + 0x120);
    puVar3 = (undefined8 *)0x380;
    __Znwm();
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_FUN_1109acdf0;
    puVar4 = puVar3 + 3;
    func_0x000107451d20(uVar7,uVar8,puVar4,param_1 + 0x88);
    puStack_330 = puVar4;
    puStack_328 = puVar3;
    FUN_107452520();
    lVar1 = *(long *)(param_1 + 400);
    for (lVar6 = *(long *)(param_1 + 0x188); uVar2 = lVar6 == lVar1, !(bool)uVar2;
        lVar6 = lVar6 + 0x10) {
      FUN_107452080(puVar4,lVar6);
    }
    FUN_107452050();
    if ((int)puVar4 != 0) {
      lVar6 = *(long *)(param_1 + 0xa8);
      while (uVar2 = lVar6 == param_1 + 0xb0, !(bool)uVar2) {
        puStack_278 = puStack_330;
        puStack_330 = (undefined8 *)0x0;
        puStack_328 = (undefined8 *)0x0;
        uStack_260 = *(undefined8 *)(lVar6 + 0x40);
        uStack_268 = *(undefined8 *)(lVar6 + 0x38);
        puStack_270 = puVar3;
        if (*(long *)(lVar6 + 0x40) != 0) {
          do {
            func_0x0001073eb5a0();
          } while (extraout_w10 != 0);
        }
        FUN_1073ea79c(auStack_320);
        func_0x0001073e08f4(&puStack_278);
        func_0x00010002c7d4();
        puVar3 = (undefined8 *)0x0;
      }
    }
    FUN_1073eb280(&puStack_330);
  }
  FUN_10743d7e4(auStack_170);
  func_0x0001073eb5f8(uStack_68);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    FUN_1073eb280(&puStack_330);
    puVar5 = auStack_170;
    FUN_10743d7e4();
    func_0x0001073eb5d0();
    pcStack_338 = FUN_1073ea79c;
    puStack_348 = puVar5;
    puStack_340 = &stack0xfffffffffffffff0;
    FUN_1073eb2a8(&puStack_348);
    return;
  }
  return;
}



/* Entry: 1073ea79c; end: 1073ea7bb;  */

void FUN_1073ea79c(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_1073eb2a8(&uStack_18);
  return;
}



/* Entry: 1073ea7bc; end: 1073ea7bf;  */

long FUN_1073ea7bc(long param_1)

{
  func_0x000107284d8c(param_1 + 0x1a0);
  func_0x0001073e24d8(param_1 + 0x188);
  FUN_1073dd4c4(param_1 + 0x150);
  func_0x000107266af0(param_1 + 0xc0);
  FUN_1073e2524(param_1 + 0xa8);
  func_0x000104c2f714(param_1 + 0x50);
  func_0x000104c2f714(param_1 + 0x18);
  func_0x000107331000(param_1 + 8);
  return param_1;
}



/* Entry: 1073ea7c0; end: 1073ea7e7;  */

void FUN_1073ea7c0(void)

{
  func_0x0001073e247c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073ea7e8; end: 1073ea8bb;  */

void FUN_1073ea7e8(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] - (param_1[1] - *param_1);
  _memcpy(lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1073ea8bc; end: 1073ea8fb;  */

long * FUN_1073ea8bc(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x10;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1073ea8fc; end: 1073eab03;  */

void FUN_1073ea8fc(undefined8 param_1)

{
  undefined8 extraout_x8;
  
  FUN_1073eb4e4();
  FUN_1073e48a4(param_1,extraout_x8);
  return;
}



/* Entry: 1073eab04; end: 1073eab8f;  */

undefined1  [16] FUN_1073eab04(long *param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_40;
  long alStack_38 [3];
  
  FUN_1073eab90(alStack_38);
  plVar2 = param_1;
  FUN_1073eabf4(param_1,&uStack_40,alStack_38[0] + 0x20);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    func_0x0001073eac70(param_1,uStack_40,plVar2,alStack_38[0]);
    lVar3 = alStack_38[0];
    alStack_38[0] = 0;
  }
  func_0x0001073eacf4(alStack_38);
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 1073eab90; end: 1073eabf3;  */

void FUN_1073eab90(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = 0x48;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2 + 8;
  param_1[2] = 0;
  func_0x0001073eacbc(lVar1 + 0x20,param_3,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 1073eabf4; end: 1073eac6f;  */

long * FUN_1073eabf4(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar2 = (long *)*plVar3;
  plVar4 = plVar3;
  while (plVar2 != (long *)0x0) {
    while (plVar4 = plVar2, uVar1 = param_3, func_0x000100125af4(param_3,plVar4 + 4),
          ((uint)uVar1 >> 7 & 1) != 0) {
      plVar2 = (long *)*plVar4;
      plVar3 = plVar4;
      if ((long *)*plVar4 == (long *)0x0) goto LAB_1073eac60;
    }
    plVar2 = plVar4 + 4;
    func_0x000100125af4(plVar2,param_3);
    if (((uint)plVar2 >> 7 & 1) == 0) break;
    plVar3 = plVar4 + 1;
    plVar2 = (long *)*plVar3;
  }
LAB_1073eac60:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 1073eac70; end: 1073ead17;  */

void FUN_1073eac70(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
  }
  func_0x00010002c5b0(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 1073ead18; end: 1073ead2f;  */

void FUN_1073ead18(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x0001073e2590(lVar1 + 0x20);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 1073ead30; end: 1073ead73;  */

void FUN_1073ead30(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x0001073e2590(param_2 + 0x20);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1073ead74; end: 1073eae37;  */

long FUN_1073ead74(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  uint6 uVar12;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  undefined8 uVar13;
  byte bVar19;
  undefined8 in_stack_00000000;
  ulong *in_stack_00000008;
  
  uVar6 = (undefined4)((ulong)param_3 >> 0x20);
  uVar5 = (undefined4)param_3;
  func_0x0001073eb60c();
  lVar8 = 0;
  uVar1 = param_1[2];
  uVar9 = *param_1;
  uVar7 = uVar9 >> 0xc ^ CONCAT44(uVar6,uVar5) >> 7;
  bVar3 = (byte)uVar5;
  uVar12 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar7 = uVar7 & uVar1;
    uVar13 = *(undefined8 *)(uVar9 + uVar7);
    cVar14 = (char)((ulong)uVar13 >> 8);
    cVar15 = (char)((ulong)uVar13 >> 0x10);
    cVar16 = (char)((ulong)uVar13 >> 0x18);
    cVar17 = (char)((ulong)uVar13 >> 0x20);
    cVar18 = (char)((ulong)uVar13 >> 0x28);
    bVar11 = (byte)((ulong)uVar13 >> 0x30);
    bVar19 = (byte)((ulong)uVar13 >> 0x38);
    for (uVar10 = CONCAT17(-(bVar19 == (bVar3 & 0x7f)),
                           CONCAT16(-(bVar11 == (bVar3 & 0x7f)),
                                    CONCAT15(-(cVar18 == (char)(uVar12 >> 0x28)),
                                             CONCAT14(-(cVar17 == (char)(uVar12 >> 0x20)),
                                                      CONCAT13(-(cVar16 == (char)(uVar12 >> 0x18)),
                                                               CONCAT12(-(cVar15 ==
                                                                         (char)(uVar12 >> 0x10)),
                                                                        CONCAT11(-(cVar14 ==
                                                                                  (char)(uVar12 >> 8
                                                                                        )),
                                                                                 -((char)uVar13 ==
                                                                                  (char)uVar12))))))
                                   )) & 0x8080808080808080; uVar10 != 0;
        uVar10 = uVar10 - 1 & uVar10) {
      uVar2 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      in_stack_00000000 = param_2;
      in_stack_00000008 = param_1;
      iVar4 = (int)&stack0x00000000;
      FUN_1073eae38();
      if (iVar4 != 0) {
        return *param_1 + (uVar7 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uVar1);
      }
    }
    bVar11 = NEON_umaxv(CONCAT17(-(bVar19 == 0x80),
                                 CONCAT16(-(bVar11 == 0x80),
                                          CONCAT15(-(cVar18 == -0x80),
                                                   CONCAT14(-(cVar17 == -0x80),
                                                            CONCAT13(-(cVar16 == -0x80),
                                                                     CONCAT12(-(cVar15 == -0x80),
                                                                              CONCAT11(-(cVar14 ==
                                                                                        -0x80),-((
                                                  char)uVar13 == -0x80)))))))),1);
    if ((bVar11 & 1) != 0) break;
    lVar8 = lVar8 + 8;
    uVar7 = lVar8 + uVar7;
  }
  return 0;
}



/* Entry: 1073eae38; end: 1073eae53;  */

bool FUN_1073eae38(undefined8 *param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x00010727a3f0(param_2,*(undefined8 *)*param_1,param_2 + 0x38);
  _strlen();
  func_0x00010014c53c();
  func_0x00010014c2bc();
  func_0x000104c2fcd4();
  func_0x000104c2fcf0();
  iVar1 = (int)&stack0xffffffffffffffe0;
  if (unaff_x21 == unaff_x19) {
    func_0x000100067218(&stack0xffffffffffffffe0,unaff_x20,unaff_x19);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 1073eae54; end: 1073eaed3;  */

undefined8 *
FUN_1073eae54(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2;
  func_0x0001005d466c();
  uVar2 = uVar1;
  func_0x0001072bb3b4();
  uVar3 = uVar2;
  func_0x0001072bb3b4();
  uVar4 = *param_5;
  *param_1 = param_2;
  param_1[1] = uVar1;
  param_1[2] = param_3;
  param_1[3] = uVar2;
  param_1[4] = param_4;
  param_1[5] = uVar3;
  param_1[6] = uVar4;
  param_1[7] = 0;
  return param_1;
}



/* Entry: 1073eaed4; end: 1073eaed7;  */

void FUN_1073eaed4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109acdf0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1073eaed8; end: 1073eaeeb;  */

void FUN_1073eaed8(void)

{
  func_0x0001073eaef8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


