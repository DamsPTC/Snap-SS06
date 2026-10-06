/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1074b0adc; end: 1074b0b03;  */

void FUN_1074b0adc(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001074b5d98();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1074b0b04; end: 1074b0c53;  */

void FUN_1074b0b04(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puStack_70;
  undefined1 uStack_68;
  
  func_0x0001074b6df0();
  lVar3 = *(long *)(param_1 + 8);
  puVar1 = (undefined8 *)(lVar3 + 0x18);
  for (lVar5 = param_2 << 6; lVar5 != 0; lVar5 = lVar5 + -0x40) {
    puStack_70 = puVar1 + -3;
    *puStack_70 = 0;
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    lVar6 = *unaff_x20;
    uStack_68 = 0;
    lVar2 = unaff_x20[1] - lVar6;
    if (lVar2 != 0) {
      FUN_1074b0c54(puStack_70,lVar2 >> 7);
      lVar4 = puVar1[-2];
      _memmove(lVar4,lVar6,lVar2);
      puVar1[-2] = lVar4 + lVar2;
    }
    uStack_68 = 1;
    func_0x0001074b0c88(&puStack_70);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    lVar6 = unaff_x20[3];
    uStack_68 = 0;
    lVar2 = unaff_x20[4] - lVar6;
    puStack_70 = puVar1;
    if (lVar2 != 0) {
      func_0x00010742d178(puVar1,lVar2 / 0x58);
      lVar4 = puVar1[1];
      _memmove(lVar4,lVar6,lVar2 + -7);
      puVar1[1] = lVar4 + lVar2;
    }
    uStack_68 = 1;
    func_0x0001074b0cb0(&puStack_70);
    lVar6 = unaff_x20[6];
    puVar1[4] = unaff_x20[7];
    puVar1[3] = lVar6;
    puVar1 = puVar1 + 8;
  }
  *(long *)(unaff_x19 + 8) = lVar3 + param_2 * 0x40;
  return;
}



/* Entry: 1074b0c54; end: 1074b0cd7;  */

void FUN_1074b0c54(long param_1,ulong param_2)

{
  ulong extraout_x8;
  long *unaff_x19;
  
  if (param_2 >> 0x39 == 0) {
    func_0x0001074b6de4();
    FUN_10742d0a0();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    unaff_x19[2] = param_1 + param_2 * 0x80;
    return;
  }
  func_0x00010742d094();
  func_0x0001074b673c();
  if ((extraout_x8 & 1) == 0) {
    FUN_1073f16d4();
  }
  return;
}



/* Entry: 1074b0cd8; end: 1074b0ce3;  */

long FUN_1074b0cd8(long param_1)

{
  func_0x0001074b56f8();
  FUN_1074b0d0c(param_1 + 8);
  return param_1;
}



/* Entry: 1074b0ce4; end: 1074b0d0b;  */

long FUN_1074b0ce4(long param_1)

{
  FUN_1074b0d0c(param_1 + 8);
  return param_1;
}



/* Entry: 1074b0d0c; end: 1074b0d3b;  */

long FUN_1074b0d0c(long param_1,long param_2)

{
  func_0x00010726cc04(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x70) = 1;
  return param_1;
}



/* Entry: 1074b0d3c; end: 1074b0d47;  */

void FUN_1074b0d3c(long *param_1,long param_2)

{
  long lVar1;
  
  func_0x0001074b56f8();
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



/* Entry: 1074b0d48; end: 1074b0d5f;  */

void FUN_1074b0d48(long *param_1,long param_2)

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



/* Entry: 1074b0d60; end: 1074b0de3;  */

void FUN_1074b0d60(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x0001074b5858();
  if (unaff_x20 != 0) {
    func_0x0001074b6064();
    if ((bool)in_ZR) {
      func_0x0001074b0d94(unaff_x20 + 0x18);
    }
    func_0x0001074b5a20();
  }
  return;
}



/* Entry: 1074b0de4; end: 1074b0e7f;  */

long * FUN_1074b0de4(long *param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plStack_38;
  long *plStack_30;
  undefined1 uStack_28;
  undefined4 uStack_27;
  undefined3 uStack_23;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = uVar3 - 1;
    if ((uVar3 & uVar4) == 0) {
      uVar5 = uVar4 & param_2;
    }
    else {
      uVar5 = param_2;
      if (uVar3 <= param_2) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = param_2 / uVar3;
        }
        uVar5 = param_2 - uVar5 * uVar3;
      }
    }
    plStack_38 = *(long **)(*param_1 + uVar5 * 8);
    if (plStack_38 != (long *)0x0) {
      do {
        while( true ) {
          plStack_38 = (long *)*plStack_38;
          if (plStack_38 == (long *)0x0) {
            return param_1;
          }
          uVar7 = plStack_38[1];
          if (uVar7 != param_2) break;
          if (plStack_38[2] == param_2) {
            uVar4 = param_1[1];
            plVar1 = (long *)*plStack_38;
            uVar3 = plStack_38[1];
            uVar5 = uVar4 - 1;
            if ((uVar4 & uVar5) == 0) {
              uVar3 = uVar5 & uVar3;
            }
            else if (uVar4 <= uVar3) {
              uVar7 = 0;
              if (uVar4 != 0) {
                uVar7 = uVar3 / uVar4;
              }
              uVar3 = uVar3 - uVar7 * uVar4;
            }
            lVar8 = *param_1;
            plVar9 = *(long **)(lVar8 + uVar3 * 8);
            do {
              plVar6 = plVar9;
              plVar9 = (long *)*plVar6;
            } while ((long *)*plVar6 != plStack_38);
            plStack_30 = param_1 + 2;
            plVar9 = plVar1;
            if (plVar6 == plStack_30) {
LAB_1074b0f10:
              if (plVar1 == (long *)0x0) {
LAB_1074b0f44:
                *(undefined8 *)(lVar8 + uVar3 * 8) = 0;
                plVar9 = (long *)*plStack_38;
                goto LAB_1074b0f4c;
              }
              uVar7 = plVar1[1];
              if ((uVar4 & uVar5) == 0) {
                uVar7 = uVar7 & uVar5;
              }
              else if (uVar4 <= uVar7) {
                uVar2 = 0;
                if (uVar4 != 0) {
                  uVar2 = uVar7 / uVar4;
                }
                uVar7 = uVar7 - uVar2 * uVar4;
              }
              if (uVar7 != uVar3) goto LAB_1074b0f44;
            }
            else {
              uVar7 = plVar6[1];
              if ((uVar4 & uVar5) == 0) {
                uVar7 = uVar7 & uVar5;
              }
              else if (uVar4 <= uVar7) {
                uVar2 = 0;
                if (uVar4 != 0) {
                  uVar2 = uVar7 / uVar4;
                }
                uVar7 = uVar7 - uVar2 * uVar4;
              }
              if (uVar7 != uVar3) goto LAB_1074b0f10;
LAB_1074b0f4c:
              if (plVar9 == (long *)0x0) goto LAB_1074b0f84;
            }
            uVar7 = plVar9[1];
            if ((uVar4 & uVar5) == 0) {
              uVar7 = uVar7 & uVar5;
            }
            else if (uVar4 <= uVar7) {
              uVar5 = 0;
              if (uVar4 != 0) {
                uVar5 = uVar7 / uVar4;
              }
              uVar7 = uVar7 - uVar5 * uVar4;
            }
            if (uVar7 != uVar3) {
              *(long **)(lVar8 + uVar7 * 8) = plVar6;
              plVar9 = (long *)*plStack_38;
            }
LAB_1074b0f84:
            *plVar6 = (long)plVar9;
            *plStack_38 = 0;
            param_1[3] = param_1[3] + -1;
            uStack_28 = 1;
            uStack_27 = 0;
            uStack_23 = 0;
            FUN_1074b0d60(&plStack_38);
            return plVar1;
          }
        }
        if ((uVar3 & uVar4) == 0) {
          uVar7 = uVar7 & uVar4;
        }
        else if (uVar3 <= uVar7) {
          uVar2 = 0;
          if (uVar3 != 0) {
            uVar2 = uVar7 / uVar3;
          }
          uVar7 = uVar7 - uVar2 * uVar3;
        }
      } while (uVar7 == uVar5);
    }
  }
  return param_1;
}



/* Entry: 1074b0e80; end: 1074b0fe7;  */

long FUN_1074b0e80(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plStack_38;
  long *plStack_30;
  undefined1 uStack_28;
  undefined4 uStack_27;
  undefined3 uStack_23;
  
  uVar5 = param_1[1];
  lVar1 = *param_2;
  uVar4 = param_2[1];
  uVar7 = uVar5 - 1;
  if ((uVar5 & uVar7) == 0) {
    uVar4 = uVar7 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar10 = 0;
    if (uVar5 != 0) {
      uVar10 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar10 * uVar5;
  }
  lVar8 = *param_1;
  plVar3 = *(long **)(lVar8 + uVar4 * 8);
  do {
    plVar6 = plVar3;
    plVar3 = (long *)*plVar6;
  } while ((long *)*plVar6 != param_2);
  plStack_30 = param_1 + 2;
  lVar9 = lVar1;
  if (plVar6 == plStack_30) {
LAB_1074b0f10:
    if (lVar1 == 0) {
LAB_1074b0f44:
      *(undefined8 *)(lVar8 + uVar4 * 8) = 0;
      lVar9 = *param_2;
      goto LAB_1074b0f4c;
    }
    uVar10 = *(ulong *)(lVar1 + 8);
    if ((uVar5 & uVar7) == 0) {
      uVar10 = uVar10 & uVar7;
    }
    else if (uVar5 <= uVar10) {
      uVar2 = 0;
      if (uVar5 != 0) {
        uVar2 = uVar10 / uVar5;
      }
      uVar10 = uVar10 - uVar2 * uVar5;
    }
    if (uVar10 != uVar4) goto LAB_1074b0f44;
  }
  else {
    uVar10 = plVar6[1];
    if ((uVar5 & uVar7) == 0) {
      uVar10 = uVar10 & uVar7;
    }
    else if (uVar5 <= uVar10) {
      uVar2 = 0;
      if (uVar5 != 0) {
        uVar2 = uVar10 / uVar5;
      }
      uVar10 = uVar10 - uVar2 * uVar5;
    }
    if (uVar10 != uVar4) goto LAB_1074b0f10;
LAB_1074b0f4c:
    if (lVar9 == 0) goto LAB_1074b0f84;
  }
  uVar10 = *(ulong *)(lVar9 + 8);
  if ((uVar5 & uVar7) == 0) {
    uVar10 = uVar10 & uVar7;
  }
  else if (uVar5 <= uVar10) {
    uVar7 = 0;
    if (uVar5 != 0) {
      uVar7 = uVar10 / uVar5;
    }
    uVar10 = uVar10 - uVar7 * uVar5;
  }
  if (uVar10 != uVar4) {
    *(long **)(lVar8 + uVar10 * 8) = plVar6;
    lVar9 = *param_2;
  }
LAB_1074b0f84:
  *plVar6 = lVar9;
  *param_2 = 0;
  param_1[3] = param_1[3] + -1;
  uStack_28 = 1;
  uStack_27 = 0;
  uStack_23 = 0;
  plStack_38 = param_2;
  FUN_1074b0d60(&plStack_38);
  return lVar1;
}



/* Entry: 1074b0fe8; end: 1074b0ffb;  */

void FUN_1074b0fe8(undefined8 *param_1)

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



/* Entry: 1074b0ffc; end: 1074b12b3;  */

void FUN_1074b0ffc(double param_1,float param_2,float param_3,float param_4,undefined8 param_5,
                  undefined8 param_6,ulong param_7,int param_8)

{
  long unaff_x19;
  int unaff_w21;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float in_stack_00000000;
  float in_stack_00000004;
  float in_stack_00000008;
  double dStack_1d0;
  double dStack_1c8;
  double dStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  double dStack_1a8;
  double dStack_1a0;
  double dStack_198;
  double dStack_190;
  double adStack_180 [6];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  undefined8 uStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  undefined8 uStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  func_0x0001074b61ac();
  dStack_f0 = 0.0;
  dStack_f8 = 0.0;
  dStack_e0 = 0.0;
  uStack_e8 = 0;
  dStack_100 = 1.0;
  dStack_d8 = 1.0;
  uStack_c8 = 0;
  dStack_d0 = 0.0;
  dStack_b8 = 0.0;
  dStack_c0 = 0.0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  dStack_b0 = 1.0;
  uStack_88 = 0x3ff0000000000000;
  switch(param_7 & 0xff) {
  case 0:
    func_0x0001074b5774();
    func_0x0001074b5764();
    break;
  case 1:
    func_0x0001074b5774();
    func_0x0001074b5754();
    goto code_r0x0001074b10ec;
  case 2:
    func_0x0001074b5764();
    func_0x0001074b5774();
    break;
  case 3:
    func_0x0001074b5764();
    func_0x0001074b5754();
    goto code_r0x0001074b10fc;
  case 4:
    func_0x0001074b5754();
    func_0x0001074b5774();
code_r0x0001074b10ec:
    func_0x0001074b5764();
    goto LAB_1074b1104;
  case 5:
    func_0x0001074b5754();
    func_0x0001074b5764();
code_r0x0001074b10fc:
    func_0x0001074b5774();
  default:
    goto LAB_1074b1104;
  }
  func_0x0001074b5754();
LAB_1074b1104:
  dStack_120 = (double)(int)(short)unaff_w21 + (double)param_2 * param_1;
  dStack_118 = (double)(unaff_w21 >> 0x10) + (double)param_3 * param_1;
  dStack_110 = (double)param_4;
  adStack_180[2] = 0.0;
  adStack_180[1] = 0.0;
  adStack_180[4] = 0.0;
  adStack_180[3] = 0.0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0x3ff0000000000000;
  uStack_108 = 0x3ff0000000000000;
  adStack_180[0] = param_1;
  adStack_180[5] = param_1;
  func_0x000107877034(adStack_180,adStack_180,&dStack_100);
  dVar3 = (double)in_stack_00000000;
  dVar1 = (double)in_stack_00000004;
  dVar2 = (double)in_stack_00000008;
  func_0x000107877000(dVar3,adStack_180);
  if (param_8 != 0) {
    dStack_1c8 = dStack_f8;
    dStack_1d0 = dStack_100;
    dStack_1c0 = dStack_f0;
    dStack_1b0 = dStack_d8;
    dStack_1b8 = dStack_e0;
    dStack_1a8 = dStack_d0;
    dStack_198 = dStack_b8;
    dStack_1a0 = dStack_c0;
    dStack_190 = dStack_b0;
    dVar4 = dStack_d8 * dStack_d8 + dStack_e0 * dStack_e0 + dStack_d0 * dStack_d0;
    if ((0.001 <= ABS((dStack_f8 * dStack_f8 + dStack_100 * dStack_100 + dStack_f0 * dStack_f0) -
                      dVar4)) ||
       (0.001 <= ABS(dVar4 - (dStack_b8 * dStack_b8 + dStack_c0 * dStack_c0 + dStack_b0 * dStack_b0)
                    ))) {
      dStack_1d0 = dStack_100 * dVar3;
      dStack_1c8 = dStack_f8 * dVar3;
      dStack_1c0 = dStack_f0 * dVar3;
      dStack_1b8 = dStack_e0 * dVar1;
      dStack_1b0 = dStack_d8 * dVar1;
      dStack_1a8 = dStack_d0 * dVar1;
      dStack_1a0 = dStack_c0 * dVar2;
      dStack_198 = dStack_b8 * dVar2;
      dStack_190 = dStack_b0 * dVar2;
      func_0x00010787690c(&dStack_1d0);
      dVar3 = dStack_1a8;
      dVar2 = dStack_1c0;
      dVar1 = dStack_1c8;
      dStack_1c8 = dStack_1b8;
      dStack_1c0 = dStack_1a0;
      dStack_1b8 = dVar1;
      dStack_1a8 = dStack_198;
      dStack_1a0 = dVar2;
      dStack_198 = dVar3;
    }
  }
  func_0x0001074b58f4();
  func_0x0001074b67ec(unaff_x19 + 0x80,&dStack_1d0);
  return;
}



/* Entry: 1074b12b4; end: 1074b1387;  */

/* WARNING: Possible PIC construction at 0x0001074b1348: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001074b134c) */

void FUN_1074b12b4(float param_1,float param_2,float param_3,float param_4,undefined8 param_5,
                  undefined8 param_6,long param_7)

{
  long lVar1;
  double *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
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
  double dVar31;
  double dVar32;
  double dVar33;
  
  func_0x0001074b6c84();
  func_0x0001074b58f4();
  _bzero(unaff_x21 + 0x80,0x100);
  func_0x0001074b6840(*(undefined8 *)(param_7 + 0x18));
  *(double *)(unaff_x21 + 0x180) = (double)param_1;
  *(double *)(unaff_x21 + 0x188) = (double)param_2;
  *(double *)(unaff_x21 + 400) = (double)param_3;
  *(double *)(unaff_x21 + 0x198) = (double)param_4;
  lVar1 = unaff_x21 + 0x100;
  func_0x0001074b6d14(param_7,unaff_x20 + 0x110,unaff_x21 + 0x80,lVar1);
  func_0x0001074b58f4(lVar1);
  func_0x000107418864(*(undefined8 *)(unaff_x22 + 0x18),unaff_x19);
  dVar23 = *(double *)(unaff_x20 + 0x800);
  dVar11 = *(double *)(unaff_x20 + 0x808);
  dVar3 = *(double *)(unaff_x20 + 0x810);
  dVar2 = *(double *)(unaff_x20 + 0x818);
  dVar25 = *(double *)(unaff_x20 + 0x820);
  dVar22 = *(double *)(unaff_x20 + 0x828);
  dVar18 = *(double *)(unaff_x20 + 0x830);
  dVar4 = *(double *)(unaff_x20 + 0x838);
  dVar27 = *(double *)(unaff_x20 + 0x840);
  dVar24 = *(double *)(unaff_x20 + 0x848);
  dVar20 = *(double *)(unaff_x20 + 0x850);
  dVar6 = *(double *)(unaff_x20 + 0x858);
  dVar28 = *unaff_x19;
  dVar29 = unaff_x19[1];
  dVar31 = unaff_x19[2];
  dVar8 = unaff_x19[3];
  dVar32 = unaff_x19[4];
  dVar33 = unaff_x19[5];
  dVar12 = unaff_x19[6];
  dVar9 = unaff_x19[7];
  dVar13 = unaff_x19[8];
  dVar15 = unaff_x19[9];
  dVar30 = unaff_x19[10];
  dVar10 = unaff_x19[0xb];
  dVar16 = unaff_x19[0xc];
  dVar17 = unaff_x19[0xd];
  dVar26 = unaff_x19[0xe];
  dVar14 = unaff_x19[0xf];
  dVar5 = *(double *)(unaff_x20 + 0x860);
  dVar19 = *(double *)(unaff_x20 + 0x868);
  dVar7 = *(double *)(unaff_x20 + 0x870);
  dVar21 = *(double *)(unaff_x20 + 0x878);
  *unaff_x19 = dVar25 * dVar29 + dVar28 * dVar23 + dVar31 * dVar27 + dVar8 * dVar5;
  unaff_x19[1] = dVar22 * dVar29 + dVar28 * dVar11 + dVar31 * dVar24 + dVar8 * dVar19;
  unaff_x19[2] = dVar18 * dVar29 + dVar28 * dVar3 + dVar31 * dVar20 + dVar8 * dVar7;
  unaff_x19[3] = dVar4 * dVar29 + dVar28 * dVar2 + dVar31 * dVar6 + dVar8 * dVar21;
  unaff_x19[4] = dVar25 * dVar33 + dVar32 * dVar23 + dVar12 * dVar27 + dVar9 * dVar5;
  unaff_x19[5] = dVar22 * dVar33 + dVar32 * dVar11 + dVar12 * dVar24 + dVar9 * dVar19;
  unaff_x19[6] = dVar18 * dVar33 + dVar32 * dVar3 + dVar12 * dVar20 + dVar9 * dVar7;
  unaff_x19[7] = dVar4 * dVar33 + dVar32 * dVar2 + dVar12 * dVar6 + dVar9 * dVar21;
  unaff_x19[8] = dVar25 * dVar15 + dVar13 * dVar23 + dVar30 * dVar27 + dVar10 * dVar5;
  unaff_x19[9] = dVar22 * dVar15 + dVar13 * dVar11 + dVar30 * dVar24 + dVar10 * dVar19;
  unaff_x19[10] = dVar18 * dVar15 + dVar13 * dVar3 + dVar30 * dVar20 + dVar10 * dVar7;
  unaff_x19[0xb] = dVar4 * dVar15 + dVar13 * dVar2 + dVar30 * dVar6 + dVar10 * dVar21;
  unaff_x19[0xc] = dVar25 * dVar17 + dVar16 * dVar23 + dVar26 * dVar27 + dVar14 * dVar5;
  unaff_x19[0xd] = dVar22 * dVar17 + dVar16 * dVar11 + dVar26 * dVar24 + dVar14 * dVar19;
  unaff_x19[0xe] = dVar18 * dVar17 + dVar16 * dVar3 + dVar26 * dVar20 + dVar14 * dVar7;
  unaff_x19[0xf] = dVar4 * dVar17 + dVar16 * dVar2 + dVar26 * dVar6 + dVar14 * dVar21;
  return;
}



/* Entry: 1074b1388; end: 1074b1393;  */

ulong * FUN_1074b1388(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong **ppuVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x19;
  ulong *unaff_x21;
  ulong *puStack_60;
  ulong uStack_58;
  
  func_0x0001074b56f8();
  puVar4 = param_1 + 1;
  if ((*param_1 & 1) == 0) {
    uVar6 = 8;
  }
  else {
    puVar4 = (ulong *)param_1[1];
    uVar6 = param_1[2];
  }
  uVar5 = *param_1 >> 1;
  if (uVar5 == uVar6) {
    ppuVar3 = &puStack_60;
    func_0x0001074b61ac();
    puVar4 = param_1 + 1;
    uVar6 = *param_1;
    if ((uVar6 & 1) == 0) {
      uVar5 = 0x10;
    }
    else {
      puVar4 = (ulong *)unaff_x19[1];
      uVar5 = unaff_x19[2] << 1;
    }
    puStack_60 = (ulong *)0x0;
    uStack_58 = 0;
    FUN_1074590f0(&puStack_60,uVar5);
    uVar6 = uVar6 >> 1;
    puVar1 = (ulong *)(ppuVar3 + uVar6);
    puStack_60 = (ulong *)ppuVar3;
    uStack_58 = uVar5;
    *puVar1 = *unaff_x21;
    puVar2 = puStack_60;
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar2 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar2 = puVar2 + 1;
    }
    FUN_1074b149c();
    uVar6 = uStack_58;
    puVar4 = puStack_60;
    puStack_60 = (ulong *)0x0;
    uStack_58 = 0;
    unaff_x19[1] = (ulong)puVar4;
    unaff_x19[2] = uVar6;
    *unaff_x19 = (*unaff_x19 | 1) + 2;
    FUN_1074b14b0(&puStack_60);
    return puVar1;
  }
  puVar4[uVar5] = *param_2;
  *param_1 = *param_1 + 2;
  return param_1;
}



/* Entry: 1074b1394; end: 1074b13d3;  */

ulong * FUN_1074b1394(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong **ppuVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x19;
  ulong *unaff_x21;
  ulong *puStack_50;
  ulong uStack_48;
  
  puVar4 = param_1 + 1;
  if ((*param_1 & 1) == 0) {
    uVar6 = 8;
  }
  else {
    puVar4 = (ulong *)param_1[1];
    uVar6 = param_1[2];
  }
  uVar5 = *param_1 >> 1;
  if (uVar5 == uVar6) {
    ppuVar3 = &puStack_50;
    func_0x0001074b61ac();
    puVar4 = param_1 + 1;
    uVar6 = *param_1;
    if ((uVar6 & 1) == 0) {
      uVar5 = 0x10;
    }
    else {
      puVar4 = (ulong *)unaff_x19[1];
      uVar5 = unaff_x19[2] << 1;
    }
    puStack_50 = (ulong *)0x0;
    uStack_48 = 0;
    FUN_1074590f0(&puStack_50,uVar5);
    uVar6 = uVar6 >> 1;
    puVar1 = (ulong *)(ppuVar3 + uVar6);
    puStack_50 = (ulong *)ppuVar3;
    uStack_48 = uVar5;
    *puVar1 = *unaff_x21;
    puVar2 = puStack_50;
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar2 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar2 = puVar2 + 1;
    }
    FUN_1074b149c();
    uVar6 = uStack_48;
    puVar4 = puStack_50;
    puStack_50 = (ulong *)0x0;
    uStack_48 = 0;
    unaff_x19[1] = (ulong)puVar4;
    unaff_x19[2] = uVar6;
    *unaff_x19 = (*unaff_x19 | 1) + 2;
    FUN_1074b14b0(&puStack_50);
    return puVar1;
  }
  puVar4[uVar5] = *param_2;
  *param_1 = *param_1 + 2;
  return param_1;
}



/* Entry: 1074b13d4; end: 1074b149b;  */

ulong * FUN_1074b13d4(ulong *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong **ppuVar3;
  ulong *unaff_x19;
  ulong uVar4;
  ulong *unaff_x21;
  ulong *puVar5;
  ulong uVar6;
  ulong *puStack_50;
  ulong uStack_48;
  
  ppuVar3 = &puStack_50;
  func_0x0001074b61ac();
  puVar5 = param_1 + 1;
  uVar6 = *param_1;
  if ((uVar6 & 1) == 0) {
    uVar4 = 0x10;
  }
  else {
    puVar5 = (ulong *)unaff_x19[1];
    uVar4 = unaff_x19[2] << 1;
  }
  puStack_50 = (ulong *)0x0;
  uStack_48 = 0;
  FUN_1074590f0(&puStack_50,uVar4);
  uVar6 = uVar6 >> 1;
  puVar1 = (ulong *)(ppuVar3 + uVar6);
  puStack_50 = (ulong *)ppuVar3;
  uStack_48 = uVar4;
  *puVar1 = *unaff_x21;
  puVar2 = puStack_50;
  for (; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar2 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_1074b149c();
  uVar6 = uStack_48;
  puVar5 = puStack_50;
  puStack_50 = (ulong *)0x0;
  uStack_48 = 0;
  unaff_x19[1] = (ulong)puVar5;
  unaff_x19[2] = uVar6;
  *unaff_x19 = (*unaff_x19 | 1) + 2;
  FUN_1074b14b0(&puStack_50);
  return puVar1;
}



/* Entry: 1074b149c; end: 1074b14af;  */

void FUN_1074b149c(byte *param_1)

{
  if ((*param_1 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1074b14b0; end: 1074b14fb;  */

void FUN_1074b14b0(long param_1)

{
  func_0x0001074b5d98();
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1074b14fc; end: 1074b1593;  */

long FUN_1074b14fc(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = uVar3 - 1;
    if ((uVar3 & uVar4) == 0) {
      uVar5 = uVar4 & param_2;
    }
    else {
      uVar5 = param_2;
      if (uVar3 <= param_2) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = param_2 / uVar3;
        }
        uVar5 = param_2 - uVar5 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar6 = plVar2[1];
        if (uVar6 != param_2) break;
        if (plVar2[2] == param_2) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar4) == 0) {
        uVar6 = uVar6 & uVar4;
      }
      else if (uVar3 <= uVar6) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar6 / uVar3;
        }
        uVar6 = uVar6 - uVar1 * uVar3;
      }
    } while (uVar6 == uVar5);
  }
  return 0;
}



/* Entry: 1074b1594; end: 1074b166f;  */

void FUN_1074b1594(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001074b5a14();
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_2[3] = 0;
  param_2[4] = 0;
  func_0x000104c318bc(param_1 + 5,param_2 + 5);
  *(undefined1 *)(unaff_x19 + 0x60) = 0;
  *(undefined1 *)(unaff_x19 + 0x78) = 0;
  if (*(char *)(unaff_x20 + 0x78) == '\x01') {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x68);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x60);
    *(undefined8 *)(unaff_x19 + 0x70) = *(undefined8 *)(unaff_x20 + 0x70);
    *(undefined8 *)(unaff_x19 + 0x68) = uVar2;
    *(undefined8 *)(unaff_x19 + 0x60) = uVar1;
    *(undefined8 *)(unaff_x20 + 0x68) = 0;
    *(undefined8 *)(unaff_x20 + 0x70) = 0;
    *(undefined8 *)(unaff_x20 + 0x60) = 0;
    *(undefined1 *)(unaff_x19 + 0x78) = 1;
  }
  *(undefined8 *)(unaff_x19 + 0x80) = 0;
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
  *(undefined8 *)(unaff_x19 + 0x90) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(unaff_x19 + 0x80) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x90) = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x19 + 0x98) = 0;
  *(undefined8 *)(unaff_x19 + 0xa0) = 0;
  *(undefined8 *)(unaff_x19 + 0xa8) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x98);
  *(undefined8 *)(unaff_x19 + 0xa0) = *(undefined8 *)(unaff_x20 + 0xa0);
  *(undefined8 *)(unaff_x19 + 0x98) = uVar1;
  *(undefined8 *)(unaff_x19 + 0xa8) = *(undefined8 *)(unaff_x20 + 0xa8);
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x19 + 0xb0) = 0;
  *(undefined8 *)(unaff_x19 + 0xb8) = 0;
  *(undefined8 *)(unaff_x19 + 0xc0) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0xb0);
  *(undefined8 *)(unaff_x19 + 0xb8) = *(undefined8 *)(unaff_x20 + 0xb8);
  *(undefined8 *)(unaff_x19 + 0xb0) = uVar1;
  *(undefined8 *)(unaff_x19 + 0xc0) = *(undefined8 *)(unaff_x20 + 0xc0);
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  return;
}



/* Entry: 1074b1670; end: 1074b177b;  */

void FUN_1074b1670(long *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long *extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  long *plVar3;
  long *extraout_x9_02;
  long *extraout_x9_03;
  long *plVar4;
  long *extraout_x9_04;
  ulong extraout_x10;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar5;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  long *extraout_x13;
  long *extraout_x13_00;
  long *plVar6;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x0001074b6ca8();
  if ((bool)in_ZR) {
    unaff_x19 = (long *)0x2;
  }
  else {
    func_0x0001074b6d48();
    if (!(bool)in_ZR) {
      func_0x0001074b6450();
      unaff_x19 = param_1;
    }
  }
  func_0x0001074b6c1c();
  if (!(bool)in_CY || (bool)in_ZR) {
    if ((bool)in_CY) {
      return;
    }
    func_0x0001074b5784();
    if (((bool)in_CY) && (func_0x0001074b6610(), extraout_x8_01 == 0)) {
      func_0x0001074b5610();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x0001074b5ea8();
    if ((bool)in_CY) {
      return;
    }
    if (unaff_x19 == (long *)0x0) {
      func_0x0001074b6c90();
      FUN_1074b177c();
      *(undefined8 *)(unaff_x20 + 8) = 0;
      return;
    }
  }
  if ((ulong)unaff_x19 >> 0x3d == 0) {
    func_0x0001074b6304();
    func_0x0001074b664c();
    FUN_1074b177c();
    func_0x0001074b5a98();
    plVar3 = extraout_x9;
    while (uVar1 = unaff_x19 == plVar3, !(bool)uVar1) {
      func_0x0001074b5b64();
      plVar3 = extraout_x9_00;
    }
    if (*(long *)(unaff_x20 + 0x10) != 0) {
      func_0x0001074b5814();
      func_0x0001074b5800();
      plVar3 = extraout_x9_01;
      while (*plVar3 != 0) {
        func_0x0001074b65d4();
        lVar2 = extraout_x8;
        plVar3 = extraout_x12;
        plVar4 = extraout_x9_02;
        plVar5 = extraout_x11;
        if ((bool)uVar1) {
          plVar6 = (long *)((ulong)extraout_x13 & extraout_x10);
        }
        else {
          plVar6 = extraout_x13;
          if (unaff_x19 <= extraout_x13) {
            func_0x0001074b6640();
            lVar2 = extraout_x8_00;
            plVar4 = extraout_x9_03;
            plVar5 = extraout_x11_00;
            plVar3 = extraout_x12_00;
            plVar6 = extraout_x13_00;
          }
        }
        uVar1 = plVar6 == plVar5;
        if (!(bool)uVar1) {
          if (*(long *)(lVar2 + (long)plVar6 * 8) == 0) {
            func_0x0001074b661c();
            plVar3 = extraout_x12_01;
          }
          else {
            *plVar4 = *plVar3;
            func_0x0001074b5650();
            plVar3 = extraout_x9_04;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar2 = *param_1;
  *param_1 = param_2;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074b177c; end: 1074b1793;  */

void FUN_1074b177c(long *param_1,long param_2)

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



/* Entry: 1074b1794; end: 1074b17eb;  */

long * FUN_1074b1794(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x0001074b17c4((char)param_1[2]);
  }
  return param_1;
}



/* Entry: 1074b17ec; end: 1074b17f7;  */

void FUN_1074b17ec(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  func_0x0001074b56f8();
  func_0x0001074b591c();
  func_0x0001074b64a8();
  func_0x0001074b6774();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0001074b5668();
  return;
}



/* Entry: 1074b17f8; end: 1074b189b;  */

void FUN_1074b17f8(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  func_0x0001074b591c();
  func_0x0001074b64a8();
  func_0x0001074b6774();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0001074b5668();
  return;
}



/* Entry: 1074b189c; end: 1074b18db;  */

long * FUN_1074b189c(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x5c;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1074b18dc; end: 1074b18e7;  */

void FUN_1074b18dc(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  func_0x0001074b56f8();
  func_0x0001074b591c();
  func_0x0001074b64a8();
  func_0x0001074b6774();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0001074b5668();
  return;
}



/* Entry: 1074b18e8; end: 1074b198b;  */

void FUN_1074b18e8(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  func_0x0001074b591c();
  func_0x0001074b64a8();
  func_0x0001074b6774();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0001074b5668();
  return;
}



/* Entry: 1074b198c; end: 1074b19cb;  */

long * FUN_1074b198c(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x174;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1074b19cc; end: 1074b1a2f;  */

void FUN_1074b19cc(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  if (param_4 != 0) {
    func_0x0001074b5a14();
    FUN_1074b1a30();
    lVar1 = *(long *)(unaff_x19 + 8);
    if (param_3 - unaff_x20 != 0) {
      func_0x0001074b59d4();
    }
    *(long *)(unaff_x19 + 8) = lVar1 + (param_3 - unaff_x20);
  }
  func_0x0001074b6508();
  func_0x0001074b1a64();
  return;
}



/* Entry: 1074b1a30; end: 1074b1af3;  */

void FUN_1074b1a30(long param_1,ulong param_2)

{
  ulong extraout_x8;
  long *unaff_x19;
  
  if (param_2 >> 0x3d == 0) {
    func_0x0001074b6de4();
    FUN_1074590d0();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    unaff_x19[2] = param_1 + param_2 * 8;
    return;
  }
  FUN_107459090();
  func_0x0001074b673c();
  if ((extraout_x8 & 1) == 0) {
    FUN_1073f9c30();
  }
  return;
}



/* Entry: 1074b1af4; end: 1074b217f;  */

void FUN_1074b1af4(float param_1,undefined8 param_2,float param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,ulong param_7)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  float *pfVar7;
  float *pfVar8;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  uint extraout_w8_03;
  uint extraout_w8_04;
  undefined8 uVar9;
  float *pfVar10;
  float *pfVar11;
  uint uVar12;
  long lVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  long lVar17;
  ulong uVar18;
  float *unaff_x19;
  float *unaff_x20;
  ulong uVar19;
  ulong uVar20;
  float *pfVar21;
  float fVar22;
  float fVar23;
  
  func_0x0001074b6e18();
  func_0x0001074b591c();
LAB_1074b1b14:
  pfVar16 = unaff_x19 + -2;
LAB_1074b1b24:
  uVar20 = (long)unaff_x19 - (long)unaff_x20 >> 3;
  switch(uVar20) {
  case 0:
  case 1:
    goto LAB_1074b5704;
  case 2:
    bVar5 = unaff_x19[-1] < unaff_x20[1];
    if (unaff_x19[-2] != *unaff_x20) {
      bVar5 = unaff_x19[-2] < *unaff_x20;
    }
    if (!bVar5) {
      return;
    }
    uVar9 = *(undefined8 *)unaff_x20;
    *(undefined8 *)unaff_x20 = *(undefined8 *)(unaff_x19 + -2);
    *(undefined8 *)(unaff_x19 + -2) = uVar9;
    return;
  case 3:
    pfVar8 = unaff_x20 + 2;
    fVar22 = *pfVar8;
    bVar5 = unaff_x20[3] < unaff_x20[1];
    if (fVar22 != *unaff_x20) {
      bVar5 = fVar22 < *unaff_x20;
    }
    bVar6 = unaff_x19[-1] < unaff_x20[3];
    if (*pfVar16 != fVar22) {
      bVar6 = *pfVar16 < fVar22;
    }
    if (bVar5) {
      uVar9 = *(undefined8 *)unaff_x20;
      if (bVar6) {
        *(undefined8 *)unaff_x20 = *(undefined8 *)pfVar16;
      }
      else {
        *(undefined8 *)unaff_x20 = *(undefined8 *)pfVar8;
        *(undefined8 *)pfVar8 = uVar9;
        bVar5 = unaff_x19[-1] < (float)((ulong)uVar9 >> 0x20);
        if (*pfVar16 != (float)uVar9) {
          bVar5 = *pfVar16 < (float)uVar9;
        }
        if (!bVar5) {
          return;
        }
        *(undefined8 *)pfVar8 = *(undefined8 *)pfVar16;
      }
      *(undefined8 *)pfVar16 = uVar9;
    }
    else if (bVar6) {
      uVar9 = *(undefined8 *)pfVar8;
      *(undefined8 *)pfVar8 = *(undefined8 *)pfVar16;
      *(undefined8 *)pfVar16 = uVar9;
      bVar5 = unaff_x20[3] < unaff_x20[1];
      if (*pfVar8 != *unaff_x20) {
        bVar5 = *pfVar8 < *unaff_x20;
      }
      if (bVar5) {
        uVar9 = *(undefined8 *)unaff_x20;
        *(undefined8 *)unaff_x20 = *(undefined8 *)pfVar8;
        *(undefined8 *)pfVar8 = uVar9;
        return;
      }
    }
    return;
  case 4:
    func_0x0001074b591c(unaff_x20,unaff_x20 + 2,unaff_x20 + 4,pfVar16);
    FUN_1074b2180();
    func_0x0001074b6be0();
    uVar12 = extraout_w8;
    if (param_1 != param_3) {
      uVar12 = (uint)(param_1 < param_3);
    }
    if (uVar12 == 1) {
      func_0x0001074b6034();
      uVar12 = extraout_w8_00;
      if (param_1 != param_3) {
        uVar12 = (uint)(param_1 < param_3);
      }
      if (uVar12 == 1) {
        func_0x0001074b6004();
        uVar12 = extraout_w8_01;
        if (param_1 != param_3) {
          uVar12 = (uint)(param_1 < param_3);
        }
        if (uVar12 == 1) {
          func_0x0001074b6a9c();
        }
      }
    }
    return;
  case 5:
    pfVar8 = unaff_x20 + 6;
    func_0x0001074b591c(unaff_x20,unaff_x20 + 2,unaff_x20 + 4);
    FUN_1074b2260();
    fVar22 = *pfVar16;
    fVar23 = *pfVar8;
    bVar5 = unaff_x19[-1] < unaff_x20[7];
    if (fVar22 != fVar23) {
      bVar5 = fVar22 < fVar23;
    }
    if (bVar5) {
      uVar9 = *(undefined8 *)pfVar8;
      *(undefined8 *)pfVar8 = *(undefined8 *)pfVar16;
      *(undefined8 *)pfVar16 = uVar9;
      func_0x0001074b6be0();
      uVar12 = extraout_w8_02;
      if (fVar22 != fVar23) {
        uVar12 = (uint)(fVar22 < fVar23);
      }
      if (uVar12 == 1) {
        func_0x0001074b6034();
        uVar12 = extraout_w8_03;
        if (fVar22 != fVar23) {
          uVar12 = (uint)(fVar22 < fVar23);
        }
        if (uVar12 == 1) {
          func_0x0001074b6004();
          uVar12 = extraout_w8_04;
          if (fVar22 != fVar23) {
            uVar12 = (uint)(fVar22 < fVar23);
          }
          if (uVar12 == 1) {
            func_0x0001074b6a9c();
          }
        }
      }
    }
    return;
  }
  if ((long)uVar20 < 0x18) {
    if ((param_7 & 1) == 0) {
      pfVar16 = unaff_x20;
      if (unaff_x20 == unaff_x19) {
        return;
      }
      while( true ) {
        unaff_x20 = unaff_x20 + 2;
        pfVar8 = pfVar16 + 2;
        if (pfVar8 == unaff_x19) break;
        fVar22 = pfVar16[2];
        fVar23 = pfVar16[3];
        bVar5 = fVar23 < pfVar16[1];
        if (fVar22 != *pfVar16) {
          bVar5 = fVar22 < *pfVar16;
        }
        pfVar7 = unaff_x20;
        pfVar16 = pfVar8;
        if (bVar5) {
          do {
            pfVar8 = pfVar7;
            pfVar7 = pfVar8 + -2;
            *(undefined8 *)pfVar8 = *(undefined8 *)pfVar7;
            bVar5 = fVar23 < pfVar8[-3];
            if (pfVar8[-4] != fVar22) {
              bVar5 = fVar22 < pfVar8[-4];
            }
          } while (bVar5);
          *pfVar7 = fVar22;
          pfVar8[-1] = fVar23;
        }
      }
      return;
    }
    if (unaff_x20 == unaff_x19) {
      return;
    }
    lVar13 = 0;
    pfVar16 = unaff_x20;
    goto LAB_1074b1f24;
  }
  if (param_6 != 0) {
    pfVar8 = unaff_x20 + (uVar20 & 0xfffffffffffffffe);
    if (uVar20 < 0x81) {
      func_0x0001074b6788(pfVar8,unaff_x20);
    }
    else {
      func_0x0001074b6394();
      func_0x0001074b6788();
      pfVar7 = pfVar8 + -2;
      FUN_1074b2180(unaff_x20 + 2,pfVar7,unaff_x19 + -4);
      FUN_1074b2180(unaff_x20 + 4,pfVar8 + 2,unaff_x19 + -6);
      FUN_1074b2180(pfVar7,pfVar8,pfVar8 + 2);
      uVar9 = *(undefined8 *)unaff_x20;
      *(undefined8 *)unaff_x20 = *(undefined8 *)pfVar8;
      *(undefined8 *)pfVar8 = uVar9;
      pfVar8 = pfVar7;
    }
    param_6 = param_6 + -1;
    if ((param_7 & 1) != 0) {
      fVar22 = *unaff_x20;
      param_1 = unaff_x20[1];
LAB_1074b1be0:
      lVar13 = 0;
      do {
        param_3 = *(float *)((long)unaff_x20 + lVar13 + 8);
        bVar5 = *(float *)((long)unaff_x20 + lVar13 + 0xc) < param_1;
        if (param_3 != fVar22) {
          bVar5 = param_3 < fVar22;
        }
        lVar13 = lVar13 + 8;
      } while (bVar5);
      pfVar7 = (float *)((long)unaff_x20 + lVar13);
      pfVar10 = unaff_x19;
      pfVar11 = pfVar7;
      if (lVar13 == 8) {
        do {
          pfVar14 = pfVar10;
          if (pfVar10 <= pfVar7) break;
          pfVar14 = pfVar10 + -2;
          param_3 = *pfVar14;
          bVar5 = pfVar10[-1] < param_1;
          if (param_3 != fVar22) {
            bVar5 = param_3 < fVar22;
          }
          pfVar10 = pfVar14;
        } while (!bVar5);
      }
      else {
        do {
          pfVar14 = pfVar10 + -2;
          param_3 = *pfVar14;
          bVar5 = pfVar10[-1] < param_1;
          if (param_3 != fVar22) {
            bVar5 = param_3 < fVar22;
          }
          pfVar10 = pfVar14;
        } while (!bVar5);
      }
      while (pfVar11 < pfVar14) {
        uVar9 = *(undefined8 *)pfVar11;
        *(undefined8 *)pfVar11 = *(undefined8 *)pfVar14;
        *(undefined8 *)pfVar14 = uVar9;
        pfVar21 = pfVar11;
        do {
          pfVar11 = pfVar21 + 2;
          bVar5 = pfVar21[3] < param_1;
          if (*pfVar11 != fVar22) {
            bVar5 = *pfVar11 < fVar22;
          }
          pfVar15 = pfVar14;
          pfVar21 = pfVar11;
        } while (bVar5);
        do {
          pfVar14 = pfVar15 + -2;
          param_3 = *pfVar14;
          bVar5 = pfVar15[-1] < param_1;
          if (param_3 != fVar22) {
            bVar5 = param_3 < fVar22;
          }
          pfVar15 = pfVar14;
        } while (!bVar5);
      }
      pfVar14 = pfVar11 + -2;
      if (unaff_x20 != pfVar14) {
        *(undefined8 *)unaff_x20 = *(undefined8 *)pfVar14;
      }
      pfVar11[-2] = fVar22;
      pfVar11[-1] = param_1;
      if (pfVar10 <= pfVar7) {
        func_0x0001074b6394();
        FUN_1074b2384();
        pfVar7 = pfVar11;
        FUN_1074b2384(pfVar11,unaff_x19);
        if ((int)pfVar7 != 0) goto LAB_1074b1e30;
        unaff_x20 = pfVar11;
        if (((ulong)pfVar8 & 1) != 0) goto LAB_1074b1b24;
      }
      func_0x0001074b6394();
      FUN_1074b1af4();
      param_7 = 0;
      unaff_x20 = pfVar11;
      goto LAB_1074b1b24;
    }
    fVar22 = *unaff_x20;
    param_1 = unaff_x20[1];
    bVar5 = unaff_x20[-1] < param_1;
    if (unaff_x20[-2] != fVar22) {
      bVar5 = unaff_x20[-2] < fVar22;
    }
    if (bVar5) goto LAB_1074b1be0;
    param_3 = unaff_x19[-2];
    bVar5 = param_1 < unaff_x19[-1];
    if (param_3 != fVar22) {
      bVar5 = fVar22 < param_3;
    }
    pfVar8 = unaff_x20;
    if (bVar5) {
      do {
        pfVar7 = pfVar8 + 2;
        param_3 = *pfVar7;
        bVar5 = param_1 < pfVar8[3];
        if (param_3 != fVar22) {
          bVar5 = fVar22 < param_3;
        }
        pfVar8 = pfVar7;
      } while (!bVar5);
    }
    else {
      do {
        pfVar7 = pfVar8 + 2;
        if (unaff_x19 <= pfVar7) break;
        param_3 = *pfVar7;
        bVar5 = param_1 < pfVar8[3];
        if (param_3 != fVar22) {
          bVar5 = fVar22 < param_3;
        }
        pfVar8 = pfVar7;
      } while (!bVar5);
    }
    pfVar8 = unaff_x19;
    pfVar10 = unaff_x19;
    if (pfVar7 < unaff_x19) {
      do {
        pfVar8 = pfVar10 + -2;
        param_3 = *pfVar8;
        bVar5 = param_1 < pfVar10[-1];
        if (param_3 != fVar22) {
          bVar5 = fVar22 < param_3;
        }
        pfVar10 = pfVar8;
      } while (bVar5);
    }
    while (pfVar7 < pfVar8) {
      uVar9 = *(undefined8 *)pfVar7;
      *(undefined8 *)pfVar7 = *(undefined8 *)pfVar8;
      *(undefined8 *)pfVar8 = uVar9;
      pfVar10 = pfVar7;
      do {
        pfVar7 = pfVar10 + 2;
        bVar5 = param_1 < pfVar10[3];
        if (*pfVar7 != fVar22) {
          bVar5 = fVar22 < *pfVar7;
        }
        pfVar11 = pfVar8;
        pfVar10 = pfVar7;
      } while (!bVar5);
      do {
        pfVar8 = pfVar11 + -2;
        param_3 = *pfVar8;
        bVar5 = param_1 < pfVar11[-1];
        if (param_3 != fVar22) {
          bVar5 = fVar22 < param_3;
        }
        pfVar11 = pfVar8;
      } while (bVar5);
    }
    if (unaff_x20 != pfVar7 + -2) {
      *(undefined8 *)unaff_x20 = *(undefined8 *)(pfVar7 + -2);
    }
    param_7 = 0;
    pfVar7[-2] = fVar22;
    pfVar7[-1] = param_1;
    unaff_x20 = pfVar7;
    goto LAB_1074b1b24;
  }
  if (unaff_x20 == unaff_x19) {
    return;
  }
  uVar19 = uVar20 - 2 >> 1;
  do {
    func_0x0001074b6c9c();
    FUN_1074b2510();
    uVar19 = uVar19 - 1;
  } while (-1 < (long)uVar19);
  do {
    if ((long)uVar20 < 2) {
      return;
    }
    uVar9 = *(undefined8 *)unaff_x20;
    pfVar16 = unaff_x20;
    uVar19 = 0;
    do {
      uVar3 = uVar19 << 1 | 1;
      uVar1 = uVar19 * 2 + 2;
      pfVar8 = pfVar16 + uVar19 * 2 + 2;
      uVar18 = uVar3;
      if ((long)uVar1 < (long)uVar20) {
        fVar22 = pfVar16[uVar19 * 2 + 4];
        bVar5 = pfVar16[uVar19 * 2 + 3] < pfVar16[uVar19 * 2 + 5];
        if (pfVar16[uVar19 * 2 + 2] != fVar22) {
          bVar5 = pfVar16[uVar19 * 2 + 2] < fVar22;
        }
        pfVar8 = pfVar16 + uVar19 * 2 + 4;
        uVar18 = uVar1;
        if (!bVar5) {
          pfVar8 = pfVar16 + uVar19 * 2 + 2;
          uVar18 = uVar3;
        }
      }
      *(undefined8 *)pfVar16 = *(undefined8 *)pfVar8;
      pfVar16 = pfVar8;
      uVar19 = uVar18;
    } while ((long)uVar18 <= (long)(uVar20 - 2 >> 1));
    unaff_x19 = unaff_x19 + -2;
    if (pfVar8 == unaff_x19) {
      *(undefined8 *)pfVar8 = uVar9;
    }
    else {
      *(undefined8 *)pfVar8 = *(undefined8 *)unaff_x19;
      *(undefined8 *)unaff_x19 = uVar9;
      lVar13 = (long)pfVar8 + (8 - (long)unaff_x20) >> 3;
      if (1 < lVar13) {
        uVar19 = lVar13 - 2U >> 1;
        pfVar16 = unaff_x20 + uVar19 * 2;
        fVar22 = *pfVar8;
        fVar23 = pfVar8[1];
        bVar5 = pfVar16[1] < fVar23;
        if (*pfVar16 != fVar22) {
          bVar5 = *pfVar16 < fVar22;
        }
        if (bVar5) {
          do {
            pfVar7 = pfVar16;
            *(undefined8 *)pfVar8 = *(undefined8 *)pfVar7;
            if (uVar19 == 0) break;
            uVar19 = uVar19 - 1 >> 1;
            pfVar16 = unaff_x20 + uVar19 * 2;
            bVar5 = pfVar16[1] < fVar23;
            if (*pfVar16 != fVar22) {
              bVar5 = *pfVar16 < fVar22;
            }
            pfVar8 = pfVar7;
          } while (bVar5);
          *pfVar7 = fVar22;
          pfVar7[1] = fVar23;
        }
      }
    }
    uVar20 = uVar20 - 1;
  } while( true );
LAB_1074b1f24:
  if (pfVar16 + 2 == unaff_x19) {
    return;
  }
  fVar22 = pfVar16[2];
  fVar23 = pfVar16[3];
  bVar5 = fVar23 < pfVar16[1];
  if (fVar22 != *pfVar16) {
    bVar5 = fVar22 < *pfVar16;
  }
  lVar4 = lVar13;
  if (bVar5) {
    do {
      lVar17 = lVar4;
      puVar2 = (undefined8 *)((long)unaff_x20 + lVar17);
      puVar2[1] = *puVar2;
      pfVar8 = unaff_x20;
      if (lVar17 == 0) goto LAB_1074b1f98;
      bVar5 = fVar23 < *(float *)((long)puVar2 + -4);
      if (*(float *)(puVar2 + -1) != fVar22) {
        bVar5 = fVar22 < *(float *)(puVar2 + -1);
      }
      lVar4 = lVar17 + -8;
    } while (bVar5);
    pfVar8 = (float *)((long)unaff_x20 + lVar17);
LAB_1074b1f98:
    *pfVar8 = fVar22;
    pfVar8[1] = fVar23;
  }
  lVar13 = lVar13 + 8;
  pfVar16 = pfVar16 + 2;
  goto LAB_1074b1f24;
LAB_1074b1e30:
  unaff_x19 = pfVar14;
  if (((ulong)pfVar8 & 1) != 0) {
LAB_1074b5704:
    return;
  }
  goto LAB_1074b1b14;
}



/* Entry: 1074b2180; end: 1074b225f;  */

void FUN_1074b2180(float *param_1,float *param_2,float *param_3)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  float fVar4;
  
  fVar4 = *param_2;
  bVar1 = param_2[1] < param_1[1];
  if (fVar4 != *param_1) {
    bVar1 = fVar4 < *param_1;
  }
  bVar2 = param_3[1] < param_2[1];
  if (*param_3 != fVar4) {
    bVar2 = *param_3 < fVar4;
  }
  if (bVar1) {
    uVar3 = *(undefined8 *)param_1;
    if (bVar2) {
      *(undefined8 *)param_1 = *(undefined8 *)param_3;
    }
    else {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = uVar3;
      bVar1 = param_3[1] < (float)((ulong)uVar3 >> 0x20);
      if (*param_3 != (float)uVar3) {
        bVar1 = *param_3 < (float)uVar3;
      }
      if (!bVar1) {
        return;
      }
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
    }
    *(undefined8 *)param_3 = uVar3;
  }
  else if (bVar2) {
    uVar3 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = uVar3;
    bVar1 = param_2[1] < param_1[1];
    if (*param_2 != *param_1) {
      bVar1 = *param_2 < *param_1;
    }
    if (bVar1) {
      uVar3 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = uVar3;
      return;
    }
  }
  return;
}



/* Entry: 1074b2260; end: 1074b22d3;  */

void FUN_1074b2260(float param_1,undefined8 param_2,float param_3)

{
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint uVar1;
  
  func_0x0001074b591c();
  FUN_1074b2180();
  func_0x0001074b6be0();
  uVar1 = extraout_w8;
  if (param_1 != param_3) {
    uVar1 = (uint)(param_1 < param_3);
  }
  if (uVar1 == 1) {
    func_0x0001074b6034();
    uVar1 = extraout_w8_00;
    if (param_1 != param_3) {
      uVar1 = (uint)(param_1 < param_3);
    }
    if (uVar1 == 1) {
      func_0x0001074b6004();
      uVar1 = extraout_w8_01;
      if (param_1 != param_3) {
        uVar1 = (uint)(param_1 < param_3);
      }
      if (uVar1 == 1) {
        func_0x0001074b6a9c();
      }
    }
  }
  return;
}



/* Entry: 1074b22d4; end: 1074b2383;  */

void FUN_1074b22d4(void)

{
  bool bVar1;
  float *in_x3;
  float *in_x4;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  undefined8 uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  func_0x0001074b591c();
  FUN_1074b2260();
  fVar4 = *in_x4;
  fVar5 = *in_x3;
  bVar1 = in_x4[1] < in_x3[1];
  if (fVar4 != fVar5) {
    bVar1 = fVar4 < fVar5;
  }
  if (bVar1) {
    uVar2 = *(undefined8 *)in_x3;
    *(undefined8 *)in_x3 = *(undefined8 *)in_x4;
    *(undefined8 *)in_x4 = uVar2;
    func_0x0001074b6be0();
    uVar3 = extraout_w8;
    if (fVar4 != fVar5) {
      uVar3 = (uint)(fVar4 < fVar5);
    }
    if (uVar3 == 1) {
      func_0x0001074b6034();
      uVar3 = extraout_w8_00;
      if (fVar4 != fVar5) {
        uVar3 = (uint)(fVar4 < fVar5);
      }
      if (uVar3 == 1) {
        func_0x0001074b6004();
        uVar3 = extraout_w8_01;
        if (fVar4 != fVar5) {
          uVar3 = (uint)(fVar4 < fVar5);
        }
        if (uVar3 == 1) {
          func_0x0001074b6a9c();
        }
      }
    }
  }
  return;
}



/* Entry: 1074b2384; end: 1074b250f;  */

bool FUN_1074b2384(long param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  float *pfVar6;
  long lVar7;
  float *pfVar8;
  float *unaff_x19;
  float *unaff_x20;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  func_0x0001074b5a14();
  switch(param_2 - param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    bVar2 = unaff_x20[-1] < unaff_x19[1];
    if (unaff_x20[-2] != *unaff_x19) {
      bVar2 = unaff_x20[-2] < *unaff_x19;
    }
    if (bVar2) {
      uVar3 = *(undefined8 *)unaff_x19;
      *(undefined8 *)unaff_x19 = *(undefined8 *)(unaff_x20 + -2);
      *(undefined8 *)(unaff_x20 + -2) = uVar3;
      return true;
    }
    return true;
  case 3:
    FUN_1074b2180();
    break;
  case 4:
    FUN_1074b2260();
    break;
  case 5:
    FUN_1074b22d4();
    break;
  default:
    func_0x0001074b6788();
    lVar4 = 0;
    iVar5 = 0;
    pfVar8 = unaff_x19 + 6;
    pfVar9 = unaff_x19 + 4;
    while (pfVar6 = pfVar8, pfVar6 != unaff_x20) {
      fVar10 = *pfVar6;
      fVar11 = pfVar6[1];
      bVar2 = fVar11 < pfVar9[1];
      if (fVar10 != *pfVar9) {
        bVar2 = fVar10 < *pfVar9;
      }
      lVar1 = lVar4;
      if (bVar2) {
        do {
          lVar7 = lVar1;
          *(undefined8 *)((long)unaff_x19 + lVar7 + 0x18) =
               *(undefined8 *)((long)unaff_x19 + lVar7 + 0x10);
          pfVar8 = unaff_x19;
          if (lVar7 == -0x10) goto LAB_1074b24c0;
          fVar12 = *(float *)((long)unaff_x19 + lVar7 + 8);
          bVar2 = fVar11 < *(float *)((long)unaff_x19 + lVar7 + 0xc);
          if (fVar12 != fVar10) {
            bVar2 = fVar10 < fVar12;
          }
          lVar1 = lVar7 + -8;
        } while (bVar2);
        pfVar8 = (float *)((long)unaff_x19 + lVar7 + 0x10);
LAB_1074b24c0:
        *pfVar8 = fVar10;
        pfVar8[1] = fVar11;
        iVar5 = iVar5 + 1;
        if (iVar5 == 8) {
          return pfVar6 + 2 == unaff_x20;
        }
      }
      lVar4 = lVar4 + 8;
      pfVar9 = pfVar6;
      pfVar8 = pfVar6 + 2;
    }
  }
  return true;
}



/* Entry: 1074b2510; end: 1074b2637;  */

void FUN_1074b2510(long param_1,long param_2,float *param_3)

{
  ulong uVar1;
  float *pfVar2;
  bool bVar3;
  ulong uVar4;
  float *pfVar5;
  float *pfVar6;
  ulong uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (1 < param_2) {
    uVar4 = param_2 - 2U >> 1;
    if ((long)param_3 - param_1 >> 3 <= (long)uVar4) {
      lVar8 = (long)param_3 - param_1 >> 2;
      uVar1 = lVar8 + 1;
      pfVar5 = (float *)(param_1 + uVar1 * 8);
      uVar7 = lVar8 + 2;
      if ((long)uVar7 < param_2) {
        fVar9 = pfVar5[2];
        fVar10 = *pfVar5;
        bVar3 = pfVar5[1] < pfVar5[3];
        if (fVar10 != fVar9) {
          bVar3 = fVar10 < fVar9;
        }
        pfVar6 = pfVar5 + 2;
        if (!bVar3) {
          pfVar6 = pfVar5;
          uVar7 = uVar1;
          fVar9 = fVar10;
        }
      }
      else {
        pfVar6 = pfVar5;
        uVar7 = uVar1;
        fVar9 = *pfVar5;
      }
      fVar10 = *param_3;
      fVar11 = param_3[1];
      bVar3 = pfVar6[1] < fVar11;
      if (fVar9 != fVar10) {
        bVar3 = fVar9 < fVar10;
      }
      if (!bVar3) {
        do {
          pfVar5 = pfVar6;
          *(undefined8 *)param_3 = *(undefined8 *)pfVar5;
          if ((long)uVar4 < (long)uVar7) break;
          uVar1 = uVar7 << 1 | 1;
          pfVar2 = (float *)(param_1 + uVar1 * 8);
          uVar7 = uVar7 * 2 + 2;
          if ((long)uVar7 < param_2) {
            fVar9 = pfVar2[2];
            fVar12 = *pfVar2;
            bVar3 = pfVar2[1] < pfVar2[3];
            if (fVar12 != fVar9) {
              bVar3 = fVar12 < fVar9;
            }
            pfVar6 = pfVar2 + 2;
            if (!bVar3) {
              pfVar6 = pfVar2;
              uVar7 = uVar1;
              fVar9 = fVar12;
            }
          }
          else {
            pfVar6 = pfVar2;
            uVar7 = uVar1;
            fVar9 = *pfVar2;
          }
          bVar3 = pfVar6[1] < fVar11;
          if (fVar9 != fVar10) {
            bVar3 = fVar9 < fVar10;
          }
          param_3 = pfVar5;
        } while (!bVar3);
        *pfVar5 = fVar10;
        pfVar5[1] = fVar11;
      }
    }
  }
  return;
}



/* Entry: 1074b2638; end: 1074b265f;  */

void FUN_1074b2638(void)

{
  long unaff_x20;
  
  func_0x0001074b591c();
  FUN_1074ae8c0();
  func_0x0001074b6388();
  FUN_1074b2660();
  *(undefined4 *)(unaff_x20 + 0x18) = 0;
  return;
}



/* Entry: 1074b2660; end: 1074b2677;  */

void FUN_1074b2660(void)

{
  func_0x0001072a77dc();
  return;
}



/* Entry: 1074b2678; end: 1074b26bb;  */

undefined8 * FUN_1074b2678(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    puVar2 = puVar1 + 1;
    *puVar1 = *param_2;
  }
  else {
    puVar2 = param_1;
    FUN_1074b26bc();
  }
  param_1[1] = puVar2;
  return puVar2 + -1;
}



/* Entry: 1074b26bc; end: 1074b275f;  */

long FUN_1074b26bc(long param_1)

{
  long lVar1;
  long *unaff_x19;
  long lVar2;
  undefined8 *unaff_x20;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  func_0x0001074b5a14();
  FUN_107389488();
  lVar2 = *unaff_x19;
  lVar1 = unaff_x19[1];
  plStack_58 = unaff_x19 + 2;
  plStack_38 = plStack_58;
  if (param_1 == 0) {
    plStack_58 = (long *)0x0;
  }
  else {
    func_0x0001072a78c0();
  }
  puStack_50 = (undefined8 *)((long)plStack_58 + (lVar1 - lVar2));
  plStack_40 = plStack_58 + param_1;
  puStack_48 = puStack_50 + 1;
  *puStack_50 = *unaff_x20;
  func_0x0001074b6694();
  FUN_107388fb0();
  lVar2 = unaff_x19[1];
  FUN_107388ffc(&plStack_58);
  return lVar2;
}



/* Entry: 1074b2760; end: 1074b277f;  */

void FUN_1074b2760(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_1073f9c0c();
  }
  return;
}



/* Entry: 1074b2780; end: 1074b27d7;  */

void FUN_1074b2780(long param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  FUN_1074b27d8();
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  lVar1 = *(long *)(param_2 + 0x58);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001074b56c0();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1074b27d8; end: 1074b2827;  */

void FUN_1074b27d8(void)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074b5a14();
  func_0x0001074b629c();
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  if (uVar1 != 0xffffffff) {
    func_0x0001074b692c((&PTR_FUN_1109b45b8)[uVar1]);
    *(uint *)(unaff_x19 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 1074b2828; end: 1074b2853;  */

void FUN_1074b2828(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_1 = (undefined8 *)*param_1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 1074b2854; end: 1074b285f;  */

void FUN_1074b2854(void)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074b56f8();
  func_0x0001074b5a14();
  func_0x0001074b629c();
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  if (uVar1 != 0xffffffff) {
    func_0x0001074b692c((&PTR_FUN_1109b45c8)[uVar1]);
    *(uint *)(unaff_x19 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 1074b2860; end: 1074b28b7;  */

void FUN_1074b2860(void)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074b5a14();
  func_0x0001074b629c();
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  if (uVar1 != 0xffffffff) {
    func_0x0001074b692c((&PTR_FUN_1109b45c8)[uVar1]);
    *(uint *)(unaff_x19 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 1074b28b8; end: 1074b28c3;  */

void FUN_1074b28b8(undefined8 *param_1)

{
  func_0x0001072b0360(*param_1);
  func_0x0001072a780c();
  return;
}



/* Entry: 1074b28c4; end: 1074b28f3;  */

void FUN_1074b28c4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074b591c();
  _memcpy();
  FUN_1074b27d8(unaff_x20 + 0x100,unaff_x19 + 0x100);
  return;
}



/* Entry: 1074b28f4; end: 1074b28ff;  */

undefined8 * FUN_1074b28f4(undefined8 *param_1)

{
  func_0x0001074b56f8();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1074b2930();
  return param_1;
}



/* Entry: 1074b2900; end: 1074b292f;  */

undefined8 * FUN_1074b2900(undefined8 *param_1,long param_2,long param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1074b2930(param_1,param_2,param_2 + param_3 * 0x10,param_3);
  return param_1;
}



/* Entry: 1074b2930; end: 1074b298b;  */

void FUN_1074b2930(void)

{
  long in_x3;
  
  if (in_x3 != 0) {
    func_0x0001074b6d14();
    FUN_1074b298c();
    FUN_1074b29c0();
  }
  func_0x0001074b6508();
  FUN_1074b2a28();
  return;
}



/* Entry: 1074b298c; end: 1074b29bf;  */

void FUN_1074b298c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long *unaff_x19;
  undefined8 uVar2;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    func_0x0001074b6de4();
    FUN_1074b29ec();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    unaff_x19[2] = param_1 + (long)param_2 * 0x10;
    return;
  }
  FUN_1074b29e0();
  puVar1 = *(undefined8 **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 2) {
    uVar2 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar2;
    puVar1 = puVar1 + 2;
  }
  *(undefined8 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 1074b29c0; end: 1074b29df;  */

void FUN_1074b29c0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 2) {
    uVar2 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar2;
    puVar1 = puVar1 + 2;
  }
  *(undefined8 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 1074b29e0; end: 1074b29eb;  */

void FUN_1074b29e0(void)

{
  func_0x0001074b56f8();
  FUN_1074b2a0c();
  return;
}



/* Entry: 1074b29ec; end: 1074b2a0b;  */

void FUN_1074b29ec(void)

{
  FUN_1074b2a0c();
  return;
}



/* Entry: 1074b2a0c; end: 1074b2a27;  */

void FUN_1074b2a0c(undefined8 param_1,ulong param_2)

{
  ulong extraout_x8;
  
  if (param_2 >> 0x3c == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 4);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001074b673c();
  if ((extraout_x8 & 1) == 0) {
    FUN_10748be5c();
  }
  return;
}



/* Entry: 1074b2a28; end: 1074b2aeb;  */

void FUN_1074b2a28(void)

{
  uint extraout_w8;
  
  func_0x0001074b673c();
  if ((extraout_w8 & 1) == 0) {
    FUN_10748be5c();
  }
  return;
}



/* Entry: 1074b2aec; end: 1074b2b83;  */

void FUN_1074b2aec(long param_1)

{
  ulong uVar1;
  long extraout_x8;
  undefined8 *extraout_x9;
  long extraout_x10;
  long extraout_x11;
  ulong uVar2;
  ulong uVar3;
  
  func_0x0001074b6558();
  if (extraout_x10 != 0) {
    uVar2 = *(ulong *)(extraout_x11 + 8);
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & uVar3 - 1) == 0) {
      uVar2 = uVar3 - 1 & uVar2;
    }
    else if (uVar3 <= uVar2) {
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = uVar2 / uVar3;
      }
      uVar2 = uVar2 - uVar1 * uVar3;
    }
    *(long *)(extraout_x8 + uVar2 * 8) = param_1 + 0x10;
    *extraout_x9 = 0;
    extraout_x9[1] = 0;
  }
  return;
}



/* Entry: 1074b2b84; end: 1074b2d2b;  */

void FUN_1074b2b84(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar2;
  long lVar3;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong uVar4;
  long extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  undefined8 *unaff_x19;
  long *unaff_x20;
  
  func_0x0001074b591c();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001074ae6a8();
    unaff_x20[2] = 0;
    lVar3 = unaff_x20[1];
    for (lVar1 = 0; in_ZR = lVar3 == lVar1, !(bool)in_ZR; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*unaff_x20 + lVar1 * 8) = 0;
    }
    unaff_x20[3] = 0;
  }
  *unaff_x19 = 0;
  FUN_1074b177c();
  func_0x0001074b5d28();
  if (extraout_x10 != 0) {
    func_0x0001074b6da4();
    uVar2 = extraout_x8;
    if ((bool)in_ZR) {
      uVar4 = extraout_x11 & extraout_x9;
    }
    else {
      uVar4 = extraout_x9;
      if (extraout_x10_00 <= extraout_x9) {
        func_0x0001074b6688();
        uVar2 = extraout_x8_00;
        uVar4 = extraout_x9_00;
      }
    }
    *(undefined8 *)(*unaff_x20 + uVar4 * 8) = uVar2;
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
  }
  return;
}



/* Entry: 1074b2d2c; end: 1074b2e77;  */

void FUN_1074b2d2c(undefined8 param_1,long param_2)

{
  func_0x0001074b6548();
  if (param_2 != 0) {
    func_0x000104becc68();
    func_0x0001074b6d80();
    func_0x00010737fb20();
  }
  return;
}



/* Entry: 1074b2e78; end: 1074b2e8f;  */

void FUN_1074b2e78(long *param_1,long param_2)

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



/* Entry: 1074b2e90; end: 1074b2ec3;  */

void FUN_1074b2e90(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x0001074b5858();
  if (unaff_x20 != 0) {
    func_0x0001074b6064();
    if ((bool)in_ZR) {
      func_0x0001057f951c(unaff_x20 + 0x20);
    }
    func_0x0001074b5a20();
  }
  return;
}



/* Entry: 1074b2ec4; end: 1074b2ee7;  */

void FUN_1074b2ec4(long *param_1,long param_2)

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



/* Entry: 1074b2ee8; end: 1074b2f07;  */

void FUN_1074b2ee8(void)

{
  FUN_1073c7cf0();
  return;
}



/* Entry: 1074b2f08; end: 1074b2f53;  */

long FUN_1074b2f08(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x10);
  lVar1 = param_1;
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 4);
    plVar2 = (long *)*plVar2;
    func_0x0001057f951c();
    func_0x0001074b5a20();
  }
  func_0x0001074b6d74();
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1074b2f54; end: 1074b2f6b;  */

void FUN_1074b2f54(long *param_1,long param_2)

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



/* Entry: 1074b2f6c; end: 1074b2fbb;  */

void FUN_1074b2f6c(undefined1 *param_1,long param_2,uint param_3,long param_4)

{
  if (((param_3 & 1) != 0) && ((*(byte *)(param_4 + 0x38) & 1) != 0)) {
    func_0x00010725ffc4(param_4);
    func_0x000107869b74(param_2,param_4);
    if (param_2 != 0) {
      func_0x000107277f0c(param_1,param_4 + 0x38);
      param_1[0x18] = 1;
      return;
    }
    *param_1 = 0;
    param_1[0x18] = 0;
    return;
  }
  *param_1 = 0;
  param_1[0x18] = 0;
  return;
}



/* Entry: 1074b2fbc; end: 1074b30df;  */

void FUN_1074b2fbc(long param_1,undefined8 *param_2,ulong param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,long *param_7,undefined8 param_8)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *puVar8;
  int extraout_w10;
  undefined8 uVar9;
  undefined1 auStack_538 [16];
  undefined8 *puStack_528;
  long *plStack_510;
  undefined8 *puStack_508;
  undefined8 *puStack_500;
  long *plStack_4f8;
  undefined1 **ppuStack_4f0;
  code *pcStack_4e8;
  undefined8 uStack_4d8;
  undefined4 uStack_4d0;
  undefined1 uStack_4cc;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined1 auStack_4b0 [16];
  undefined1 auStack_4a0 [32];
  undefined1 uStack_480;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined4 uStack_440;
  long alStack_418 [30];
  undefined8 uStack_328;
  undefined1 *puStack_2e0;
  code *pcStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined1 auStack_2c0 [56];
  undefined1 auStack_288 [56];
  undefined8 auStack_250 [15];
  undefined8 auStack_1d8 [29];
  undefined8 uStack_f0;
  undefined8 uStack_48;
  
  uVar9 = param_4;
  lVar7 = param_5;
  func_0x0001074b56e8();
  uStack_48 = extraout_x8;
  func_0x0001077512dc((float)(param_3 & 0xffffffff),auStack_1d8);
  uStack_2c8 = param_2[1];
  uStack_2d0 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x0001074b56c0();
    } while (extraout_w10 != 0);
  }
  func_0x000104c2fe00(auStack_2c0,0x1138369c0);
  func_0x000104c2fe00(auStack_288,0x1138369c0);
  func_0x0001073c4f74(auStack_250,auStack_2c0);
  puVar8 = auStack_250;
  func_0x000107751444(auStack_1d8,&uStack_2d0);
  puVar6 = auStack_1d8;
  uStack_f0 = param_4;
  func_0x000107751334(param_1,puVar6);
  func_0x000107267e8c(auStack_250);
  func_0x000107267eac(auStack_2c0);
  func_0x000107267e44(&uStack_2d0);
  func_0x000107267da8();
  uVar1 = *(char *)(param_5 + 0x18) == '\x01';
  if ((bool)uVar1) {
    *(long *)(param_1 + 0xe0) = param_5;
  }
  func_0x0001074b5698(uStack_48);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x000107267e8c(auStack_250);
    func_0x000107267eac(auStack_2c0);
    func_0x000107267e44(&uStack_2d0);
    puVar2 = auStack_1d8;
    func_0x000107267da8();
    func_0x0001074b58b8();
    pcStack_2d8 = FUN_1074b30e0;
    puStack_2e0 = &stack0xfffffffffffffff0;
    func_0x0001074b56e8();
    uStack_328 = extraout_x8_00;
    func_0x00010729807c(&uStack_460,uVar9);
    func_0x00010729807c(auStack_4a0,lVar7);
    func_0x0001078344c8(alStack_418,puVar6,puVar8,&uStack_460,auStack_4a0);
    func_0x00010724b3d8(auStack_4a0);
    func_0x00010724b3d8(&uStack_460);
    func_0x000107299490(auStack_4b0,param_8);
    FUN_1073c246c(auStack_4b0,*(undefined8 *)(*param_7 + 0x10),0);
    uStack_4c8 = 0;
    uStack_4c0 = 0;
    uStack_4b8 = 0;
    uStack_458 = 0;
    uStack_460 = 0;
    uStack_448 = 0;
    uStack_450 = 0;
    uStack_440 = 0x3f800000;
    auStack_4a0[0] = 0;
    uStack_480 = 0;
    uStack_4d8 = *puVar8;
    uStack_4d0 = *(undefined4 *)(puVar8 + 1);
    uStack_4cc = 1;
    FUN_1073c52bc(puVar2,alStack_418,param_6,auStack_4b0,&uStack_4c8,&uStack_460,auStack_4a0,
                  &uStack_4d8);
    func_0x000107293acc(&uStack_460);
    func_0x0001000e30f4(&uStack_4c8);
    func_0x000107283194(auStack_4b0);
    plVar3 = alStack_418;
    func_0x000107269e60();
    func_0x0001074b5698(uStack_328);
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x000107293acc(&uStack_460);
      func_0x0001000e30f4(&uStack_4c8);
      func_0x000107283194(auStack_4b0);
      plVar4 = alStack_418;
      func_0x000107269e60();
      func_0x0001074b58b8();
      pcStack_4e8 = FUN_1074b3268;
      plStack_510 = param_7;
      puStack_508 = puVar8;
      puStack_500 = puVar2;
      plStack_4f8 = plVar3;
      ppuStack_4f0 = &puStack_2e0;
      func_0x0001074b5a14();
      puVar8 = (undefined8 *)plVar4[1];
      if (puVar8 < (undefined8 *)plVar4[2]) {
        uVar9 = *puVar2;
        puVar8[1] = puVar2[1];
        *puVar8 = uVar9;
        puVar8 = puVar8 + 2;
      }
      else {
        plVar5 = plVar3;
        FUN_1074b331c(plVar3,((long)puVar8 - *plVar3 >> 4) + 1);
        FUN_1074b33ac(auStack_538,plVar5,plVar3[1] - *plVar3 >> 4,plVar4 + 2);
        uVar9 = *puVar2;
        puStack_528[1] = puVar2[1];
        *puStack_528 = uVar9;
        puStack_528 = puStack_528 + 2;
        func_0x0001074b6694();
        FUN_1074b335c();
        puVar8 = (undefined8 *)plVar3[1];
        FUN_1074b342c(auStack_538);
      }
      plVar3[1] = (long)puVar8;
      return;
    }
    return;
  }
  return;
}



/* Entry: 1074b30e0; end: 1074b3267;  */

void FUN_1074b30e0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long *param_7,undefined8 param_8)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 extraout_x8;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_268 [16];
  undefined8 *puStack_258;
  long *plStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  long *plStack_228;
  undefined1 *puStack_220;
  code *pcStack_218;
  undefined8 uStack_208;
  undefined4 uStack_200;
  undefined1 uStack_1fc;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [32];
  undefined1 uStack_1b0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  long alStack_148 [30];
  undefined8 uStack_58;
  
  func_0x0001074b56e8();
  uStack_58 = extraout_x8;
  func_0x00010729807c(&uStack_190,param_4);
  func_0x00010729807c(auStack_1d0,param_5);
  func_0x0001078344c8(alStack_148,param_2,param_3,&uStack_190,auStack_1d0);
  func_0x00010724b3d8(auStack_1d0);
  func_0x00010724b3d8(&uStack_190);
  func_0x000107299490(auStack_1e0,param_8);
  FUN_1073c246c(auStack_1e0,*(undefined8 *)(*param_7 + 0x10),0);
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_170 = 0x3f800000;
  auStack_1d0[0] = 0;
  uStack_1b0 = 0;
  uStack_208 = *param_3;
  uStack_200 = *(undefined4 *)(param_3 + 1);
  uStack_1fc = 1;
  FUN_1073c52bc(param_1,alStack_148,param_6,auStack_1e0,&uStack_1f8,&uStack_190,auStack_1d0,
                &uStack_208);
  func_0x000107293acc(&uStack_190);
  func_0x0001000e30f4(&uStack_1f8);
  func_0x000107283194(auStack_1e0);
  plVar1 = alStack_148;
  func_0x000107269e60();
  func_0x0001074b5698(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107293acc(&uStack_190);
  func_0x0001000e30f4(&uStack_1f8);
  func_0x000107283194(auStack_1e0);
  plVar2 = alStack_148;
  func_0x000107269e60();
  func_0x0001074b58b8();
  pcStack_218 = FUN_1074b3268;
  plStack_240 = param_7;
  puStack_238 = param_3;
  puStack_230 = param_1;
  plStack_228 = plVar1;
  puStack_220 = &stack0xfffffffffffffff0;
  func_0x0001074b5a14();
  puVar4 = (undefined8 *)plVar2[1];
  if (puVar4 < (undefined8 *)plVar2[2]) {
    uVar5 = *param_1;
    puVar4[1] = param_1[1];
    *puVar4 = uVar5;
    puVar4 = puVar4 + 2;
  }
  else {
    plVar3 = plVar1;
    FUN_1074b331c(plVar1,((long)puVar4 - *plVar1 >> 4) + 1);
    FUN_1074b33ac(auStack_268,plVar3,plVar1[1] - *plVar1 >> 4,plVar2 + 2);
    uVar5 = *param_1;
    puStack_258[1] = param_1[1];
    *puStack_258 = uVar5;
    puStack_258 = puStack_258 + 2;
    func_0x0001074b6694();
    FUN_1074b335c();
    puVar4 = (undefined8 *)plVar1[1];
    FUN_1074b342c(auStack_268);
  }
  plVar1[1] = (long)puVar4;
  return;
}



/* Entry: 1074b3268; end: 1074b331b;  */

void FUN_1074b3268(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  func_0x0001074b5a14();
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (puVar2 < *(undefined8 **)(param_1 + 0x10)) {
    uVar3 = *unaff_x20;
    puVar2[1] = unaff_x20[1];
    *puVar2 = uVar3;
    puVar2 = puVar2 + 2;
  }
  else {
    plVar1 = unaff_x19;
    FUN_1074b331c();
    FUN_1074b33ac(auStack_58,plVar1,unaff_x19[1] - *unaff_x19 >> 4,(ulong *)(param_1 + 0x10));
    uVar3 = *unaff_x20;
    puStack_48[1] = unaff_x20[1];
    *puStack_48 = uVar3;
    puStack_48 = puStack_48 + 2;
    func_0x0001074b6694();
    FUN_1074b335c();
    puVar2 = (undefined8 *)unaff_x19[1];
    FUN_1074b342c(auStack_58);
  }
  unaff_x19[1] = (long)puVar2;
  return;
}



/* Entry: 1074b331c; end: 1074b335b;  */

ulong FUN_1074b331c(long *param_1,ulong param_2,long param_3)

{
  long extraout_x8;
  ulong uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar2;
  
  if (param_2 >> 0x3c == 0) {
    uVar1 = param_1[2] - *param_1 >> 3;
    if (uVar1 <= param_2) {
      uVar1 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      uVar1 = 0xfffffffffffffff;
    }
    return uVar1;
  }
  FUN_1074b33a0();
  func_0x0001074b591c();
  func_0x0001074b64a8();
  uVar2 = extraout_x8 - param_3;
  uVar1 = uVar2;
  _memcpy(uVar2);
  *(ulong *)(unaff_x19 + 8) = uVar2;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0001074b5668();
  return uVar1;
}



/* Entry: 1074b335c; end: 1074b339f;  */

void FUN_1074b335c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long extraout_x8;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001074b591c();
  func_0x0001074b64a8();
  _memcpy(extraout_x8 - param_3);
  *(long *)(unaff_x19 + 8) = extraout_x8 - param_3;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0001074b5668();
  return;
}



/* Entry: 1074b33a0; end: 1074b33ab;  */

void FUN_1074b33a0(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x0001074b56f8();
  func_0x0001074b6df0();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(long *)(param_1 + 0x20) = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001074b33f0();
  }
  lVar1 = param_4 + unaff_x20 * 0x10;
  *unaff_x19 = param_4;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = param_4 + param_2 * 0x10;
  return;
}



/* Entry: 1074b33ac; end: 1074b340f;  */

void FUN_1074b33ac(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x0001074b6df0();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(long *)(param_1 + 0x20) = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001074b33f0();
  }
  lVar1 = param_4 + unaff_x20 * 0x10;
  *unaff_x19 = param_4;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = param_4 + param_2 * 0x10;
  return;
}



/* Entry: 1074b3410; end: 1074b342b;  */

long * FUN_1074b3410(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_2 << 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_1074b3458();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1074b342c; end: 1074b3457;  */

long * FUN_1074b342c(long *param_1)

{
  FUN_1074b3458();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1074b3458; end: 1074b347b;  */

void FUN_1074b3458(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x10;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1074b347c; end: 1074b354b;  */

void FUN_1074b347c(long param_1)

{
  long *plVar1;
  long *unaff_x19;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x0001074b5a14();
  uVar3 = *(ulong *)(param_1 + 8);
  if (uVar3 < *(ulong *)(param_1 + 0x10)) {
    FUN_1074b354c(uVar3);
    lVar2 = uVar3 + 0x18;
    unaff_x19[1] = lVar2;
  }
  else {
    plVar1 = unaff_x19;
    FUN_1074b363c();
    FUN_1074b36f0(auStack_58,plVar1,(unaff_x19[1] - *unaff_x19) / 0x18,(ulong *)(param_1 + 0x10));
    FUN_1074b354c(lStack_48);
    lStack_48 = lStack_48 + 0x18;
    func_0x0001074b6694();
    FUN_1074b368c();
    lVar2 = unaff_x19[1];
    func_0x0001074b38c0(auStack_58);
  }
  unaff_x19[1] = lVar2;
  return;
}



/* Entry: 1074b354c; end: 1074b357b;  */

void FUN_1074b354c(void)

{
  func_0x0001074b6548();
  FUN_1074b357c();
  return;
}



/* Entry: 1074b357c; end: 1074b35df;  */

void FUN_1074b357c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  if (param_4 != 0) {
    func_0x0001074b5a14();
    FUN_1074b35e0();
    lVar1 = *(long *)(unaff_x19 + 8);
    if (param_3 - unaff_x20 != 0) {
      func_0x0001074b59d4();
    }
    *(long *)(unaff_x19 + 8) = lVar1 + (param_3 - unaff_x20);
  }
  func_0x0001074b6508();
  func_0x0001074b3614();
  return;
}



/* Entry: 1074b35e0; end: 1074b363b;  */

void FUN_1074b35e0(long param_1,ulong param_2)

{
  ulong extraout_x8;
  long *unaff_x19;
  
  if (param_2 >> 0x3c == 0) {
    func_0x0001074b6de4();
    func_0x0001074b33f0();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    unaff_x19[2] = param_1 + param_2 * 0x10;
    return;
  }
  FUN_1074b33a0();
  func_0x0001074b673c();
  if ((extraout_x8 & 1) == 0) {
    FUN_1073c6704();
  }
  return;
}



/* Entry: 1074b363c; end: 1074b368b;  */

long * FUN_1074b363c(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar3;
  
  if (param_2 < (long *)0xaaaaaaaaaaaaaab) {
    uVar1 = (param_1[2] - *param_1) / 0x18;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x555555555555554 < uVar1) {
      plVar2 = (long *)0xaaaaaaaaaaaaaaa;
    }
    return plVar2;
  }
  FUN_1074b36e4();
  func_0x0001074b591c();
  plVar2 = param_1 + 2;
  lVar3 = param_2[1] + ((param_1[1] - *param_1) / -0x18) * 0x18;
  FUN_1074b3784(plVar2,*param_1,param_1[1],lVar3);
  *(long *)(unaff_x19 + 8) = lVar3;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0001074b5668();
  return plVar2;
}



/* Entry: 1074b368c; end: 1074b36e3;  */

void FUN_1074b368c(long *param_1,long param_2)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar1;
  
  func_0x0001074b591c();
  lVar1 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x18) * 0x18;
  FUN_1074b3784(param_1 + 2,*param_1,param_1[1],lVar1);
  *(long *)(unaff_x19 + 8) = lVar1;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0001074b5668();
  return;
}



/* Entry: 1074b36e4; end: 1074b36ef;  */

void FUN_1074b36e4(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x0001074b56f8();
  func_0x0001074b6df0();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(long *)(param_1 + 0x20) = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001074b3738();
  }
  lVar1 = param_4 + unaff_x20 * 0x18;
  *unaff_x19 = param_4;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = param_4 + param_2 * 0x18;
  return;
}



/* Entry: 1074b36f0; end: 1074b3757;  */

void FUN_1074b36f0(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x0001074b6df0();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(long *)(param_1 + 0x20) = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001074b3738();
  }
  lVar1 = param_4 + unaff_x20 * 0x18;
  *unaff_x19 = param_4;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = param_4 + param_2 * 0x18;
  return;
}



/* Entry: 1074b3758; end: 1074b3783;  */

void FUN_1074b3758(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  if (param_2 < (undefined8 *)0xaaaaaaaaaaaaaab) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)param_2 * 0x18);
    return;
  }
  func_0x000104bd35f4();
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  puStack_38 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 3) {
    *puStack_38 = 0;
    puStack_38[1] = 0;
    puStack_38[2] = 0;
    uVar1 = *param_2;
    puStack_38[1] = param_2[1];
    *puStack_38 = uVar1;
    puStack_38[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    puStack_38 = puStack_38 + 3;
  }
  uStack_48 = 1;
  uStack_60 = param_1;
  puStack_40 = param_4;
  FUN_1074b3810();
  FUN_1074b3840(&uStack_60);
  return;
}



/* Entry: 1074b3784; end: 1074b380f;  */

void FUN_1074b3784(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  puStack_28 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 3) {
    *puStack_28 = 0;
    puStack_28[1] = 0;
    puStack_28[2] = 0;
    uVar1 = *param_2;
    puStack_28[1] = param_2[1];
    *puStack_28 = uVar1;
    puStack_28[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    puStack_28 = puStack_28 + 3;
  }
  uStack_38 = 1;
  uStack_50 = param_1;
  puStack_30 = param_4;
  FUN_1074b3810();
  FUN_1074b3840(&uStack_50);
  return;
}



/* Entry: 1074b3810; end: 1074b383f;  */

void FUN_1074b3810(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x18) {
    func_0x0001073c66e0();
  }
  return;
}



/* Entry: 1074b3840; end: 1074b386f;  */

long FUN_1074b3840(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1074b3870(param_1);
  }
  return param_1;
}



/* Entry: 1074b3870; end: 1074b388f;  */

void FUN_1074b3870(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x18;
    func_0x0001073c66e0();
  }
  return;
}



/* Entry: 1074b3890; end: 1074b38eb;  */

void FUN_1074b3890(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x18;
    func_0x0001073c66e0();
  }
  return;
}



/* Entry: 1074b38ec; end: 1074b38f3;  */

void FUN_1074b38ec(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074b591c(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x18;
    func_0x0001073c66e0();
  }
  return;
}



/* Entry: 1074b38f4; end: 1074b3927;  */

void FUN_1074b38f4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074b591c();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x18;
    func_0x0001073c66e0();
  }
  return;
}



/* Entry: 1074b3928; end: 1074b394f;  */

void FUN_1074b3928(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 uVar4;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_580 [32];
  undefined1 auStack_560 [432];
  undefined4 uStack_3b0;
  undefined1 auStack_3a8 [432];
  undefined1 auStack_1f8 [400];
  undefined8 uStack_68;
  
  if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001074b3940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x30))(param_1,param_2,param_3);
    return;
  }
  func_0x000104bfeb48();
  func_0x0001074b61ac();
  func_0x0001074b56e8();
  uStack_68 = extraout_x8;
  FUN_1074b2f6c(auStack_580,*(undefined8 *)*param_1,*(undefined1 *)((undefined8 *)*param_1 + 1),
                param_2[2] + 0x18);
  FUN_1074b2fbc(auStack_1f8,param_2[2] + 0x170,*(undefined1 *)(unaff_x21 + 4),
                *(undefined8 *)(unaff_x19 + 8),auStack_580);
  lVar5 = *(long *)(unaff_x21 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x28);
  FUN_1074b3928(auStack_560,*(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x18),auStack_1f8);
  FUN_1074b30e0(auStack_3a8,*(undefined8 *)(lVar5 + 0x170),(undefined1 *)(unaff_x21 + 4),uVar4,uVar2
                ,uVar1,uVar3,auStack_560);
  func_0x000107283194(auStack_560);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x38);
  func_0x00010729b464(auStack_560,auStack_3a8);
  uStack_3b0 = 0;
  FUN_1074ae10c(uVar4,auStack_560);
  func_0x00010729abec(auStack_560);
  func_0x00010729abec(auStack_3a8);
  func_0x000107267da8(auStack_1f8);
  FUN_1073de9d8(auStack_580);
  func_0x0001074b5698(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010729abec(auStack_560);
  func_0x00010729abec(auStack_3a8);
  func_0x000107267da8(auStack_1f8);
  FUN_1073de9d8(auStack_580);
  do {
    func_0x0001074b58b8();
  } while( true );
}



/* Entry: 1074b3950; end: 1074b3ab7;  */

void FUN_1074b3950(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 uVar4;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_570 [32];
  undefined1 auStack_550 [432];
  undefined4 uStack_3a0;
  undefined1 auStack_398 [432];
  undefined1 auStack_1e8 [400];
  undefined8 uStack_58;
  
  func_0x0001074b61ac();
  func_0x0001074b56e8();
  uStack_58 = extraout_x8;
  FUN_1074b2f6c(auStack_570,*(undefined8 *)*param_1,*(undefined1 *)((undefined8 *)*param_1 + 1),
                *(long *)(param_2 + 0x10) + 0x18);
  FUN_1074b2fbc(auStack_1e8,*(long *)(param_2 + 0x10) + 0x170,*(undefined1 *)(unaff_x21 + 4),
                *(undefined8 *)(unaff_x19 + 8),auStack_570);
  lVar5 = *(long *)(unaff_x21 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x28);
  FUN_1074b3928(auStack_550,*(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x18),auStack_1e8);
  FUN_1074b30e0(auStack_398,*(undefined8 *)(lVar5 + 0x170),(undefined1 *)(unaff_x21 + 4),uVar4,uVar2
                ,uVar1,uVar3,auStack_550);
  func_0x000107283194(auStack_550);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x38);
  func_0x00010729b464(auStack_550,auStack_398);
  uStack_3a0 = 0;
  FUN_1074ae10c(uVar4,auStack_550);
  func_0x00010729abec(auStack_550);
  func_0x00010729abec(auStack_398);
  func_0x000107267da8(auStack_1e8);
  FUN_1073de9d8(auStack_570);
  func_0x0001074b5698(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010729abec(auStack_550);
  func_0x00010729abec(auStack_398);
  func_0x000107267da8(auStack_1e8);
  FUN_1073de9d8(auStack_570);
  do {
    func_0x0001074b58b8();
  } while( true );
}



/* Entry: 1074b3ab8; end: 1074b3ae7;  */

undefined8 FUN_1074b3ab8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puVar1 = &uStack_30;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  uStack_18 = param_1[3];
  uStack_20 = param_1[2];
  FUN_1074b3ae8();
  return *puVar1;
}



/* Entry: 1074b3ae8; end: 1074b3b23;  */

undefined8 *
FUN_1074b3ae8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = param_6[1];
  uVar1 = *param_6;
  uStack_28 = param_6[3];
  uVar2 = param_6[2];
  uStack_40 = uVar1;
  uStack_30 = uVar2;
  FUN_1074b3b24(param_5,&uStack_40);
  *param_5 = uVar1;
  param_5[1] = uVar2;
  param_5[2] = param_3;
  param_5[3] = param_4;
  return param_5;
}



/* Entry: 1074b3b24; end: 1074b3b47;  */

double FUN_1074b3b24(double *param_1,double *param_2)

{
  return *param_1 - *param_2;
}


