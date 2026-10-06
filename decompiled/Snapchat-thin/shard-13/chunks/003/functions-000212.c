/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a3e8cf0; end: 10a3e8ed3;  */

float FUN_10a3e8cf0(float *param_1,undefined8 param_2,float *param_3)

{
  if ((((!NAN(*param_1)) && (!NAN(param_1[1]))) && (ABS(param_1[1]) != INFINITY)) &&
     (((ABS(*param_1) != INFINITY && (!NAN(param_1[2]))) && (ABS(param_1[2]) != INFINITY)))) {
    param_3 = param_1;
  }
  return *param_3;
}



/* Entry: 10a3e8ed4; end: 10a3e8fd3;  */

void FUN_10a3e8ed4(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  byte bVar4;
  long lVar5;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  *(byte *)(param_1 + 0x2a) = *(byte *)(param_1 + 0x2a) & 0xfe;
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
    lVar5 = *(long *)(lVar2 + 0x158);
    if (lVar5 != lVar2 + 0x150) {
      bVar4 = 0;
      do {
        plVar3 = *(long **)(lVar5 + 0x10);
        plVar1 = plVar3;
        (**(code **)(*plVar3 + 0x60))();
        if ((int)plVar1 != 0) {
          bVar4 = *(byte *)(plVar3 + 0x32) | bVar4;
        }
        lVar5 = *(long *)(lVar5 + 8);
      } while (lVar5 != lVar2 + 0x150);
      goto LAB_10a3e8f4c;
    }
  }
  bVar4 = 0;
LAB_10a3e8f4c:
  if ((((bVar4 != *(byte *)(param_1 + 0x28)) &&
       (*(byte *)(param_1 + 0x28) = bVar4, (bVar4 & 1) != 0)) &&
      ((*(byte *)(param_1 + 0x29) >> 1 & 1) == 0)) &&
     (*(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) | 2,
     (*(byte *)(param_1 + 0x2a) >> 1 & 1) != 0)) {
    uStack_88 = *(undefined4 *)(param_1 + 0x9c);
    uStack_90 = *(undefined8 *)(param_1 + 0x94);
    FUN_10a0087b0(&uStack_80,param_1 + 0x48,&uStack_90);
    *(undefined8 *)(param_1 + 0x6c) = uStack_78;
    *(undefined8 *)(param_1 + 100) = uStack_80;
    *(undefined8 *)(param_1 + 0x7c) = uStack_68;
    *(undefined8 *)(param_1 + 0x74) = uStack_70;
    *(undefined8 *)(param_1 + 0x8c) = uStack_58;
    *(undefined8 *)(param_1 + 0x84) = uStack_60;
    *(undefined8 *)(param_1 + 0x9c) = uStack_48;
    *(undefined8 *)(param_1 + 0x94) = uStack_50;
    *(byte *)(param_1 + 0x2a) = *(byte *)(param_1 + 0x2a) & 0xfd;
  }
  return;
}



/* Entry: 10a3e8fd4; end: 10a3e939b;  */

void FUN_10a3e8fd4(long param_1)

{
  long lVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010a3e90b8();
  uStack_58 = *(undefined8 *)(param_1 + 0x6c);
  uStack_60 = *(undefined8 *)(param_1 + 100);
  uStack_48 = *(undefined8 *)(param_1 + 0x7c);
  uStack_50 = *(undefined8 *)(param_1 + 0x74);
  uStack_38 = *(undefined8 *)(param_1 + 0x8c);
  uStack_40 = *(undefined8 *)(param_1 + 0x84);
  uStack_28 = *(undefined8 *)(param_1 + 0x9c);
  uStack_30 = *(undefined8 *)(param_1 + 0x94);
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x188), lVar1 != 0)) {
    lVar1 = *(long *)(lVar1 + 0x140);
    if ((*(byte *)(lVar1 + 0x2a) & 0x24) != 0) {
      FUN_10a3e8fd4(lVar1);
    }
    if ((*(byte *)(param_1 + 0x29) & 1) == 0) {
      func_0x000109519fd0(&uStack_b0,lVar1 + 0xc0,&uStack_60);
    }
    else {
      func_0x00010a0d8ae0(lVar1);
      uStack_70 = *(undefined8 *)(lVar1 + 0x48);
      uStack_68 = *(undefined4 *)(lVar1 + 0x50);
      FUN_10a3e7fe8(&uStack_b0,lVar1 + 0xc0,&uStack_70,&uStack_60);
    }
    uStack_58 = uStack_a8;
    uStack_60 = uStack_b0;
    uStack_48 = uStack_98;
    uStack_50 = uStack_a0;
    uStack_38 = uStack_88;
    uStack_40 = uStack_90;
    uStack_28 = uStack_78;
    uStack_30 = uStack_80;
  }
  *(byte *)(param_1 + 0x2a) = *(byte *)(param_1 + 0x2a) & 0xdb;
  *(undefined8 *)(param_1 + 200) = uStack_58;
  *(undefined8 *)(param_1 + 0xc0) = uStack_60;
  *(undefined8 *)(param_1 + 0xd8) = uStack_48;
  *(undefined8 *)(param_1 + 0xd0) = uStack_50;
  *(undefined8 *)(param_1 + 0xe8) = uStack_38;
  *(undefined8 *)(param_1 + 0xe0) = uStack_40;
  *(undefined8 *)(param_1 + 0xf8) = uStack_28;
  *(undefined8 *)(param_1 + 0xf0) = uStack_30;
  return;
}



/* Entry: 10a3e939c; end: 10a3e9533;  */

void FUN_10a3e939c(float *param_1,float *param_2,undefined8 *param_3)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  fVar1 = param_2[0xe];
  fVar10 = param_2[0xf];
  fVar7 = param_2[10];
  fVar11 = param_2[0xb];
  fVar13 = -(fVar1 * fVar11) + fVar10 * fVar7;
  fVar6 = param_2[0xc];
  fVar3 = param_2[0xd];
  fVar9 = param_2[8];
  fVar8 = param_2[9];
  fVar15 = -(fVar3 * fVar11) + fVar10 * fVar8;
  fVar17 = -(fVar3 * fVar7) + fVar1 * fVar8;
  fVar19 = -(fVar6 * fVar11) + fVar10 * fVar9;
  fVar20 = -(fVar6 * fVar7) + fVar1 * fVar9;
  fVar21 = -(fVar6 * fVar8) + fVar3 * fVar9;
  fVar10 = param_2[6];
  fVar22 = param_2[7];
  fVar12 = param_2[4];
  fVar11 = param_2[5];
  fVar14 = *param_2;
  fVar16 = param_2[1];
  fVar18 = param_2[2];
  if (1e-06 < ABS((-((-(fVar10 * fVar19) + fVar13 * fVar12 + fVar20 * fVar22) * fVar16) +
                   (-(fVar10 * fVar15) + fVar13 * fVar11 + fVar17 * fVar22) * fVar14 +
                  (-(fVar11 * fVar19) + fVar15 * fVar12 + fVar21 * fVar22) * fVar18) -
                  (-(fVar11 * fVar20) + fVar17 * fVar12 + fVar21 * fVar10) * param_2[3])) {
    fVar17 = -(fVar8 * fVar10) + fVar7 * fVar11;
    fVar19 = -(fVar8 * fVar18) + fVar7 * fVar16;
    fVar13 = fVar18 * -fVar11 + fVar10 * fVar16;
    fVar15 = 1.0 / (-(fVar12 * fVar19) + fVar17 * fVar14 + fVar13 * fVar9);
    fVar17 = fVar17 * fVar15;
    fVar20 = -((-(fVar9 * fVar10) + fVar7 * fVar12) * fVar15);
    fVar21 = (-(fVar9 * fVar11) + fVar8 * fVar12) * fVar15;
    fVar19 = -(fVar19 * fVar15);
    fVar7 = (-(fVar9 * fVar18) + fVar7 * fVar14) * fVar15;
    fVar8 = -((-(fVar9 * fVar16) + fVar8 * fVar14) * fVar15);
    fVar13 = fVar13 * fVar15;
    fVar9 = -((-(fVar12 * fVar18) + fVar10 * fVar14) * fVar15);
    fVar15 = (-(fVar12 * fVar16) + fVar11 * fVar14) * fVar15;
    *param_1 = fVar17;
    param_1[1] = fVar19;
    param_1[2] = fVar13;
    param_1[3] = 0.0;
    param_1[4] = fVar20;
    param_1[5] = fVar7;
    param_1[6] = fVar9;
    param_1[7] = 0.0;
    param_1[8] = fVar21;
    param_1[9] = fVar8;
    param_1[10] = fVar15;
    param_1[0xb] = 0.0;
    param_1[0xc] = (-(fVar20 * fVar3) - fVar6 * fVar17) - fVar1 * fVar21;
    param_1[0xd] = (-(fVar7 * fVar3) - fVar6 * fVar19) - fVar1 * fVar8;
    param_1[0xe] = (-(fVar9 * fVar3) - fVar6 * fVar13) - fVar1 * fVar15;
    param_1[0xf] = 1.0;
    return;
  }
  uVar2 = *param_3;
  uVar5 = param_3[3];
  uVar4 = param_3[2];
  *(undefined8 *)(param_1 + 2) = param_3[1];
  *(undefined8 *)param_1 = uVar2;
  *(undefined8 *)(param_1 + 6) = uVar5;
  *(undefined8 *)(param_1 + 4) = uVar4;
  uVar2 = param_3[4];
  uVar5 = param_3[7];
  uVar4 = param_3[6];
  *(undefined8 *)(param_1 + 10) = param_3[5];
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)(param_1 + 0xe) = uVar5;
  *(undefined8 *)(param_1 + 0xc) = uVar4;
  return;
}



/* Entry: 10a3e9534; end: 10a3e96f7;  */

void FUN_10a3e9534(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_38 = 0;
  uStack_30 = 0;
  FUN_10a3e8cf0(param_5,param_5,&uStack_38);
  uStack_2c = param_1;
  uStack_28 = param_2;
  uStack_24 = param_3;
  FUN_10a3e3894(param_4,&uStack_2c);
  return;
}



/* Entry: 10a3e96f8; end: 10a3e9803;  */

float FUN_10a3e96f8(float param_1,float param_2,float param_3,float param_4)

{
  func_0x00010a2cd08c();
  return (param_3 * param_1 + param_2 * param_4) * -2.0;
}



/* Entry: 10a3e9804; end: 10a3e9813;  */

void FUN_10a3e9804(void)

{
  return;
}



/* Entry: 10a3e9814; end: 10a3e9873;  */

undefined8 * FUN_10a3e9814(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a3e9874; end: 10a3e987b;  */

long FUN_10a3e9874(long param_1)

{
  return param_1 + 0x60;
}



/* Entry: 10a3e987c; end: 10a3e98cb;  */

long FUN_10a3e987c(long param_1)

{
  func_0x00010a3f1e64(*(undefined8 *)(param_1 + 0x40));
  return param_1;
}



/* Entry: 10a3e98cc; end: 10a3e98cf;  */

undefined8 * FUN_10a3e98cc(undefined8 *param_1)

{
  FUN_10a3f1e0c(param_1 + 7);
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a3e98d0; end: 10a3e98e3;  */

void FUN_10a3e98d0(void)

{
  func_0x00010a3f1eac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3e98e4; end: 10a3e99eb;  */

void FUN_10a3e98e4(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  
  puVar5 = (undefined8 *)*param_2;
  if (param_2 + 3 != puVar5) {
    *param_1 = (long)puVar5;
    lVar7 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = lVar7;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    return;
  }
  uVar8 = param_2[1];
  lVar7 = uVar8 << 3;
  if ((ulong)param_1[2] < uVar8) {
    if (uVar8 >> 0x3c != 0) {
      puVar5 = (undefined8 *)&UNK_10f424dbf;
      func_0x00010772e1f8();
      plVar4 = (long *)*puVar5;
      if (plVar4 == (long *)0x0) {
        return;
      }
      plVar6 = (long *)puVar5[1];
      plVar3 = plVar4;
      if (plVar6 != plVar4) {
        do {
          plVar6 = plVar6 + -1;
          plVar3 = (long *)*plVar6;
          *plVar6 = 0;
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 8))();
          }
        } while (plVar6 != plVar4);
        plVar3 = (long *)*puVar5;
      }
      puVar5[1] = plVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(plVar3);
      return;
    }
    lVar2 = lVar7;
    __Znwm();
    if (((long *)*param_1 != (long *)0x0) && (param_1[1] = 0, param_1 + 3 != (long *)*param_1)) {
      __ZdlPv();
    }
    param_1[1] = 0;
    param_1[2] = uVar8;
    *param_1 = lVar2;
  }
  else {
    lVar2 = *param_1;
    uVar1 = param_1[1];
    if (uVar8 < uVar1 || uVar8 - uVar1 == 0) {
      if (uVar8 == 0) goto LAB_10a3e99c0;
    }
    else {
      if (uVar1 != 0) {
        _memmove(lVar2,puVar5,uVar1 << 3);
        puVar5 = puVar5 + uVar1;
        lVar2 = lVar2 + uVar1 * 8;
      }
      lVar7 = (uVar8 - uVar1) * 8;
    }
  }
  _memmove(lVar2,puVar5,lVar7);
LAB_10a3e99c0:
  param_1[1] = uVar8;
  param_2[1] = 0;
  return;
}



/* Entry: 10a3e99ec; end: 10a3e9ac7;  */

void FUN_10a3e99ec(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    plVar3 = (long *)param_1[1];
    plVar1 = plVar2;
    if (plVar3 != plVar2) {
      do {
        plVar3 = plVar3 + -1;
        plVar1 = (long *)*plVar3;
        *plVar3 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      } while (plVar3 != plVar2);
      plVar1 = (long *)*param_1;
    }
    param_1[1] = plVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar1);
    return;
  }
  return;
}



/* Entry: 10a3e9ac8; end: 10a3e9b3b;  */

void FUN_10a3e9ac8(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a3e9b3c; end: 10a3e9d0b;  */

void FUN_10a3e9b3c(long *param_1,long *param_2)

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
  func_0x000109ffded8();
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 == 0) {
    return;
  }
  if ((char)plVar4[2] == '\x01') {
    func_0x00010a3e9d54(lVar2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 10a3e9d0c; end: 10a3e9d8f;  */

void FUN_10a3e9d0c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a3e9d54(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a3e9d90; end: 10a3e9db7;  */

undefined1  [16] FUN_10a3e9d90(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  FUN_109ffde64(&UNK_10f655b2b);
  plVar1 = (long *)&UNK_10f655b2b;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    lVar2 = param_2 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    func_0x00010a0536d4();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10a3e9db8; end: 10a3e9e37;  */

undefined1  [16] FUN_10a3e9db8(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    func_0x00010a0536d4();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10a3e9e38; end: 10a3e9e4b;  */

long * FUN_10a3e9e38(undefined8 param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
  plVar5 = (long *)&UNK_10f655b2b;
  FUN_109ffde64();
  uVar2 = plVar5[1];
  if (uVar2 != 0) {
    uVar3 = uVar2 - 1;
    if ((uVar2 & uVar3) == 0) {
      uVar4 = uVar3 & param_3;
    }
    else {
      uVar4 = param_3;
      if (uVar2 <= param_3) {
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = param_3 / uVar2;
        }
        uVar4 = param_3 - uVar4 * uVar2;
      }
    }
    plVar5 = *(long **)(*plVar5 + uVar4 * 8);
    if (plVar5 != (long *)0x0) {
      plVar5 = (long *)*plVar5;
      do {
        if (plVar5 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar6 = plVar5[1];
        if (param_3 == uVar6) {
          if (plVar5[2] == param_2 && plVar5[3] == param_3) {
            return plVar5;
          }
        }
        else {
          if ((uVar2 & uVar3) == 0) {
            uVar6 = uVar6 & uVar3;
          }
          else if (uVar2 <= uVar6) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar6 / uVar2;
            }
            uVar6 = uVar6 - uVar1 * uVar2;
          }
          if (uVar6 != uVar4) {
            return (long *)0x0;
          }
        }
        plVar5 = (long *)*plVar5;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a3e9e4c; end: 10a3ea033;  */

long * FUN_10a3e9e4c(long *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = uVar2 - 1;
    if ((uVar2 & uVar3) == 0) {
      uVar4 = uVar3 & param_3;
    }
    else {
      uVar4 = param_3;
      if (uVar2 <= param_3) {
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = param_3 / uVar2;
        }
        uVar4 = param_3 - uVar4 * uVar2;
      }
    }
    plVar5 = *(long **)(*param_1 + uVar4 * 8);
    if (plVar5 != (long *)0x0) {
      plVar5 = (long *)*plVar5;
      do {
        if (plVar5 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar6 = plVar5[1];
        if (param_3 == uVar6) {
          if (plVar5[2] == param_2 && plVar5[3] == param_3) {
            return plVar5;
          }
        }
        else {
          if ((uVar2 & uVar3) == 0) {
            uVar6 = uVar6 & uVar3;
          }
          else if (uVar2 <= uVar6) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar6 / uVar2;
            }
            uVar6 = uVar6 - uVar1 * uVar2;
          }
          if (uVar6 != uVar4) {
            return (long *)0x0;
          }
        }
        plVar5 = (long *)*plVar5;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a3ea034; end: 10a3ea133;  */

void FUN_10a3ea034(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  FUN_10a359b98();
  lVar3 = *param_2;
  *param_2 = 0;
  lVar2 = *param_1;
  *param_1 = lVar3;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  lVar2 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = lVar2;
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar4 = *(ulong *)(lVar2 + 8);
    uVar5 = param_1[1];
    if ((uVar5 & uVar5 - 1) == 0) {
      uVar4 = uVar5 - 1 & uVar4;
    }
    else if (uVar5 <= uVar4) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar4 / uVar5;
      }
      uVar4 = uVar4 - uVar1 * uVar5;
    }
    *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 10a3ea134; end: 10a3ea2df;  */

void FUN_10a3ea134(long *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar5 = *param_3;
  if (lVar5 != 0) {
    plStack_48 = *(long **)(lVar5 + 0x48);
    lStack_50 = *(long *)(lVar5 + 0x40);
    plVar6 = param_1 + 2;
    FUN_10a35a030(plVar6,&lStack_50);
    if (plVar6 == (long *)0x0) {
      lVar5 = *param_3;
      if ((((lVar5 == 0) ||
           (lVar4 = lVar5, ___dynamic_cast(lVar5,&PTR_DAT_110bf32c0,&PTR_DAT_110bc7b48,0),
           lVar4 == 0)) || (*(char *)(lVar4 + 0x1c8) != '\x01')) ||
         ((*(byte *)(lVar4 + 0x1b8) & 1) == 0)) {
        plVar6 = (long *)param_3[1];
        *param_3 = 0;
        param_3[1] = 0;
        lStack_60 = lVar5;
        plStack_58 = plVar6;
        FUN_10a568fd8(param_1,param_2,&lStack_60,param_4);
        if (plVar6 == (long *)0x0) {
          return;
        }
        plVar1 = plVar6 + 1;
        do {
          lVar5 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 != 0) {
          return;
        }
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
      else {
        ___dynamic_cast(lVar5,&PTR_DAT_110bf32c0,&PTR_DAT_110c42c58,0);
        if (lVar5 == 0) {
          lStack_50 = 0;
          plStack_48 = (long *)0x0;
        }
        else {
          plStack_48 = (long *)param_3[1];
          lStack_50 = lVar5;
          if (plStack_48 != (long *)0x0) {
            plVar6 = plStack_48 + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar3) {
                *plVar6 = *plVar6 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
        (**(code **)(*param_1 + 0x1b0))(param_1,&lStack_50);
        plVar6 = plStack_48;
        if (plStack_48 == (long *)0x0) {
          return;
        }
        plVar1 = plStack_48 + 1;
        do {
          lVar5 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 != 0) {
          return;
        }
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
      }
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return;
}



/* Entry: 10a3ea2e0; end: 10a3ea317;  */

uint FUN_10a3ea2e0(long param_1,long *param_2)

{
  uint uVar1;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_18 = *(undefined8 *)(*param_2 + 0x48);
  uStack_20 = *(undefined8 *)(*param_2 + 0x40);
  FUN_10a34cbb8(param_1 + 0x10,&uStack_20,&uStack_20);
  return uVar1 & 1;
}



/* Entry: 10a3ea318; end: 10a3ea33f;  */

void FUN_10a3ea318(long param_1)

{
  func_0x00010a34c8fc(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a3ea340; end: 10a3ea347;  */

void FUN_10a3ea340(void)

{
  return;
}



/* Entry: 10a3ea348; end: 10a3ea35b;  */

void FUN_10a3ea348(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)&UNK_10f655b2b;
  FUN_109ffde64();
  if ((undefined8 *)0x492492492492492 < puVar1) {
    func_0x000109ffded8();
    puVar2 = puVar1;
    if (puVar1 != param_2) {
      do {
        uVar3 = *puVar2;
        param_3[1] = puVar2[1];
        *param_3 = uVar3;
        uVar3 = puVar2[2];
        param_3[3] = puVar2[3];
        param_3[2] = uVar3;
        param_3[4] = puVar2[4];
        puVar2[3] = 0;
        puVar2[4] = 0;
        uVar3 = puVar2[5];
        param_3[6] = puVar2[6];
        param_3[5] = uVar3;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2 = puVar2 + 7;
        param_3 = param_3 + 7;
      } while (puVar2 != param_2);
      do {
        func_0x00010a3ea41c(puVar1);
        puVar1 = puVar1 + 7;
      } while (puVar1 != param_2);
    }
    return;
  }
  __Znwm((long)puVar1 * 0x38);
  return;
}



/* Entry: 10a3ea35c; end: 10a3ea4a3;  */

void FUN_10a3ea35c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((undefined8 *)0x492492492492492 < param_1) {
    func_0x000109ffded8();
    puVar1 = param_1;
    if (param_1 != param_2) {
      do {
        uVar2 = *puVar1;
        param_3[1] = puVar1[1];
        *param_3 = uVar2;
        uVar2 = puVar1[2];
        param_3[3] = puVar1[3];
        param_3[2] = uVar2;
        param_3[4] = puVar1[4];
        puVar1[3] = 0;
        puVar1[4] = 0;
        uVar2 = puVar1[5];
        param_3[6] = puVar1[6];
        param_3[5] = uVar2;
        puVar1[5] = 0;
        puVar1[6] = 0;
        puVar1 = puVar1 + 7;
        param_3 = param_3 + 7;
      } while (puVar1 != param_2);
      do {
        func_0x00010a3ea41c(param_1);
        param_1 = param_1 + 7;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm((long)param_1 * 0x38);
  return;
}



/* Entry: 10a3ea4a4; end: 10a3ea50b;  */

void FUN_10a3ea4a4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0x38;
        func_0x00010a3ea41c(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a3ea50c; end: 10a3eb603;  */

void FUN_10a3ea50c(long *param_1,long *param_2,long param_3,uint param_4)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  code *pcVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
  do {
    plVar11 = param_2 + -1;
    plVar10 = param_1;
LAB_10a3ea550:
    param_1 = plVar10;
    uVar23 = (long)param_2 - (long)param_1 >> 4;
    if (uVar23 - 2 == 0 || (long)uVar23 < 2) {
      if (uVar23 < 2) {
        return;
      }
      if (uVar23 == 2) {
        lVar16 = param_2[-2];
        lVar15 = *param_1;
        bVar5 = *(long *)(lVar16 + 0x48) < *(long *)(lVar15 + 0x48);
        if (*(long *)(lVar16 + 0x40) != *(long *)(lVar15 + 0x40)) {
          bVar5 = *(long *)(lVar16 + 0x40) < *(long *)(lVar15 + 0x40);
        }
        if (!bVar5) {
          return;
        }
        *param_1 = lVar16;
        param_2[-2] = lVar15;
        lVar16 = param_1[1];
        param_1[1] = param_2[-1];
        param_2[-1] = lVar16;
        return;
      }
    }
    else {
      if (uVar23 == 3) {
        lVar17 = param_1[2];
        lVar16 = *(long *)(lVar17 + 0x40);
        lVar13 = *param_1;
        lVar15 = *(long *)(lVar13 + 0x40);
        lVar18 = *(long *)(lVar13 + 0x48);
        bVar5 = *(long *)(lVar17 + 0x48) < lVar18;
        if (lVar16 != lVar15) {
          bVar5 = lVar16 < lVar15;
        }
        lVar12 = param_2[-2];
        bVar1 = *(long *)(lVar12 + 0x48) < *(long *)(lVar17 + 0x48);
        if (*(long *)(lVar12 + 0x40) != lVar16) {
          bVar1 = *(long *)(lVar12 + 0x40) < lVar16;
        }
        if (bVar5) {
          if (bVar1) {
            plVar10 = param_1 + 1;
            *param_1 = lVar12;
          }
          else {
            plVar10 = param_1 + 3;
            lVar16 = param_1[1];
            *param_1 = lVar17;
            param_1[1] = *plVar10;
            param_1[2] = lVar13;
            *plVar10 = lVar16;
            lVar16 = param_2[-2];
            bVar5 = *(long *)(lVar16 + 0x48) < lVar18;
            if (*(long *)(lVar16 + 0x40) != lVar15) {
              bVar5 = *(long *)(lVar16 + 0x40) < lVar15;
            }
            if (!bVar5) {
              return;
            }
            param_1[2] = lVar16;
          }
          param_2[-2] = lVar13;
        }
        else {
          if (!bVar1) {
            return;
          }
          param_1[2] = lVar12;
          param_2[-2] = lVar17;
          plVar11 = param_1 + 3;
          lVar16 = *plVar11;
          *plVar11 = param_2[-1];
          param_2[-1] = lVar16;
          lVar16 = param_1[2];
          lVar15 = *param_1;
          bVar5 = *(long *)(lVar16 + 0x48) < *(long *)(lVar15 + 0x48);
          if (*(long *)(lVar16 + 0x40) != *(long *)(lVar15 + 0x40)) {
            bVar5 = *(long *)(lVar16 + 0x40) < *(long *)(lVar15 + 0x40);
          }
          if (!bVar5) {
            return;
          }
          *param_1 = lVar16;
          param_1[2] = lVar15;
          plVar10 = param_1 + 1;
        }
        lVar16 = *plVar10;
        *plVar10 = *plVar11;
        *plVar11 = lVar16;
        return;
      }
      if (uVar23 == 4) {
        FUN_10a3eb604(param_1,param_1 + 2,param_1 + 4,param_2 + -2);
        return;
      }
      if (uVar23 == 5) {
        FUN_10a3eb7e8(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2);
        return;
      }
    }
    if ((long)uVar23 < 0x18) {
      if ((param_4 & 1) == 0) {
        if (param_1 == param_2) {
          return;
        }
        plVar10 = param_1 + 2;
        if (plVar10 == param_2) {
          return;
        }
        lVar16 = 0x10;
        plVar11 = param_1;
        do {
          lStack_70 = *plVar10;
          lVar15 = *(long *)(*plVar11 + 0x40);
          bVar5 = *(long *)(lStack_70 + 0x48) < *(long *)(*plVar11 + 0x48);
          if (*(long *)(lStack_70 + 0x40) != lVar15) {
            bVar5 = *(long *)(lStack_70 + 0x40) < lVar15;
          }
          if (bVar5) {
            plStack_68 = (long *)plVar11[3];
            *plVar10 = 0;
            plVar10[1] = 0;
            lVar15 = 0;
            do {
              lVar18 = lVar15;
              lVar15 = (long)plVar11 + lVar18;
              FUN_10a2c8f88(lVar15 + 0x10,lVar15);
              if (lVar16 + lVar18 == 0) {
LAB_10a3eb58c:
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x10a3eb590);
                (*pcVar7)();
              }
              lVar13 = *(long *)(*(long *)(lVar15 + -0x10) + 0x40);
              bVar5 = *(long *)(lStack_70 + 0x48) < *(long *)(*(long *)(lVar15 + -0x10) + 0x48);
              if (*(long *)(lStack_70 + 0x40) != lVar13) {
                bVar5 = *(long *)(lStack_70 + 0x40) < lVar13;
              }
              lVar15 = lVar18 + -0x10;
            } while (bVar5);
            FUN_10a2c8f88((long)plVar11 + lVar18,&lStack_70);
            plVar10 = plStack_68;
            if (plStack_68 != (long *)0x0) {
              plVar8 = plStack_68 + 1;
              do {
                lVar15 = *plVar8;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                if (bVar5) {
                  *plVar8 = lVar15 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar15 == 0) {
                (**(code **)(*plStack_68 + 0x10))(plStack_68);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
              }
            }
          }
          plVar11 = plVar11 + 2;
          lVar16 = lVar16 + 0x10;
          plVar10 = (long *)((long)param_1 + lVar16);
          if (plVar10 == param_2) {
            return;
          }
        } while( true );
      }
      if (param_1 == param_2) {
        return;
      }
      if (param_1 + 2 == param_2) {
        return;
      }
      lVar16 = 0;
      plVar10 = param_1 + 2;
      plVar11 = param_1;
      break;
    }
    if (param_3 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar21 = uVar23 - 2 >> 1;
      uVar20 = uVar21;
      goto LAB_10a3eb0cc;
    }
    plVar10 = param_1 + (uVar23 & 0xfffffffffffffffe);
    lVar15 = param_2[-2];
    lVar16 = *(long *)(lVar15 + 0x40);
    if (uVar23 < 0x81) {
      lVar12 = *param_1;
      lVar18 = *(long *)(lVar12 + 0x40);
      lStack_70 = *plVar10;
      lVar13 = *(long *)(lStack_70 + 0x40);
      lVar17 = *(long *)(lStack_70 + 0x48);
      bVar5 = *(long *)(lVar12 + 0x48) < lVar17;
      if (lVar18 != lVar13) {
        bVar5 = lVar18 < lVar13;
      }
      bVar1 = *(long *)(lVar15 + 0x48) < *(long *)(lVar12 + 0x48);
      if (lVar16 != lVar18) {
        bVar1 = lVar16 < lVar18;
      }
      if (bVar5) {
        if (bVar1) {
          plVar8 = plVar10 + 1;
          *plVar10 = lVar15;
        }
        else {
          plVar8 = param_1 + 1;
          lVar16 = *plVar8;
          lVar15 = plVar10[1];
          *plVar10 = lVar12;
          plVar10[1] = lVar16;
          *param_1 = lStack_70;
          *plVar8 = lVar15;
          lVar16 = param_2[-2];
          bVar5 = *(long *)(lVar16 + 0x48) < lVar17;
          if (*(long *)(lVar16 + 0x40) != lVar13) {
            bVar5 = *(long *)(lVar16 + 0x40) < lVar13;
          }
          if (!bVar5) goto LAB_10a3eaac4;
          *param_1 = lVar16;
        }
        param_2[-2] = lStack_70;
        plVar9 = plVar11;
        goto LAB_10a3eaab0;
      }
      lStack_70 = lVar12;
      if (bVar1) {
        *param_1 = lVar15;
        param_2[-2] = lVar12;
        plVar9 = param_1 + 1;
        lVar16 = *plVar9;
        *plVar9 = param_2[-1];
        param_2[-1] = lVar16;
        lStack_70 = *param_1;
        lVar16 = *plVar10;
        bVar5 = *(long *)(lStack_70 + 0x48) < *(long *)(lVar16 + 0x48);
        if (*(long *)(lStack_70 + 0x40) != *(long *)(lVar16 + 0x40)) {
          bVar5 = *(long *)(lStack_70 + 0x40) < *(long *)(lVar16 + 0x40);
        }
        if (bVar5) {
          plVar8 = plVar10 + 1;
          *plVar10 = lStack_70;
          *param_1 = lVar16;
          goto LAB_10a3eaab0;
        }
      }
    }
    else {
      lVar19 = *plVar10;
      lVar18 = *(long *)(lVar19 + 0x40);
      lVar12 = *param_1;
      lVar13 = *(long *)(lVar12 + 0x40);
      lVar17 = *(long *)(lVar12 + 0x48);
      bVar5 = *(long *)(lVar19 + 0x48) < lVar17;
      if (lVar18 != lVar13) {
        bVar5 = lVar18 < lVar13;
      }
      bVar1 = *(long *)(lVar15 + 0x48) < *(long *)(lVar19 + 0x48);
      if (lVar16 != lVar18) {
        bVar1 = lVar16 < lVar18;
      }
      if (bVar5) {
        if (bVar1) {
          plVar9 = param_1 + 1;
          *param_1 = lVar15;
        }
        else {
          plVar9 = plVar10 + 1;
          lVar16 = *plVar9;
          lVar15 = param_1[1];
          *param_1 = lVar19;
          param_1[1] = lVar16;
          *plVar10 = lVar12;
          *plVar9 = lVar15;
          lVar16 = param_2[-2];
          bVar5 = *(long *)(lVar16 + 0x48) < lVar17;
          if (*(long *)(lVar16 + 0x40) != lVar13) {
            bVar5 = *(long *)(lVar16 + 0x40) < lVar13;
          }
          if (!bVar5) goto LAB_10a3ea75c;
          *plVar10 = lVar16;
        }
        param_2[-2] = lVar12;
        plVar8 = plVar11;
LAB_10a3ea74c:
        lVar16 = *plVar9;
        *plVar9 = *plVar8;
        *plVar8 = lVar16;
      }
      else if (bVar1) {
        *plVar10 = lVar15;
        param_2[-2] = lVar19;
        plVar8 = plVar10 + 1;
        lVar16 = *plVar8;
        *plVar8 = param_2[-1];
        param_2[-1] = lVar16;
        lVar16 = *plVar10;
        lVar15 = *param_1;
        bVar5 = *(long *)(lVar16 + 0x48) < *(long *)(lVar15 + 0x48);
        if (*(long *)(lVar16 + 0x40) != *(long *)(lVar15 + 0x40)) {
          bVar5 = *(long *)(lVar16 + 0x40) < *(long *)(lVar15 + 0x40);
        }
        if (bVar5) {
          plVar9 = param_1 + 1;
          *param_1 = lVar16;
          *plVar10 = lVar15;
          goto LAB_10a3ea74c;
        }
      }
LAB_10a3ea75c:
      lVar17 = plVar10[-2];
      lVar16 = *(long *)(lVar17 + 0x40);
      lVar13 = param_1[2];
      lVar15 = *(long *)(lVar13 + 0x40);
      lVar18 = *(long *)(lVar13 + 0x48);
      bVar5 = *(long *)(lVar17 + 0x48) < lVar18;
      if (lVar16 != lVar15) {
        bVar5 = lVar16 < lVar15;
      }
      lVar12 = param_2[-4];
      bVar1 = *(long *)(lVar12 + 0x48) < *(long *)(lVar17 + 0x48);
      if (*(long *)(lVar12 + 0x40) != lVar16) {
        bVar1 = *(long *)(lVar12 + 0x40) < lVar16;
      }
      if (bVar5) {
        if (bVar1) {
          plVar9 = param_1 + 3;
          param_1[2] = lVar12;
        }
        else {
          plVar9 = plVar10 + -1;
          lVar16 = *plVar9;
          lVar12 = param_1[3];
          param_1[2] = lVar17;
          param_1[3] = lVar16;
          plVar10[-2] = lVar13;
          plVar10[-1] = lVar12;
          lVar16 = param_2[-4];
          bVar5 = *(long *)(lVar16 + 0x48) < lVar18;
          if (*(long *)(lVar16 + 0x40) != lVar15) {
            bVar5 = *(long *)(lVar16 + 0x40) < lVar15;
          }
          if (!bVar5) goto LAB_10a3ea8ac;
          plVar10[-2] = lVar16;
        }
        param_2[-4] = lVar13;
        plVar8 = param_2 + -3;
LAB_10a3ea89c:
        lVar16 = *plVar9;
        *plVar9 = *plVar8;
        *plVar8 = lVar16;
      }
      else if (bVar1) {
        plVar10[-2] = lVar12;
        param_2[-4] = lVar17;
        plVar8 = plVar10 + -1;
        lVar16 = *plVar8;
        *plVar8 = param_2[-3];
        param_2[-3] = lVar16;
        lVar16 = plVar10[-2];
        lVar15 = param_1[2];
        bVar5 = *(long *)(lVar16 + 0x48) < *(long *)(lVar15 + 0x48);
        if (*(long *)(lVar16 + 0x40) != *(long *)(lVar15 + 0x40)) {
          bVar5 = *(long *)(lVar16 + 0x40) < *(long *)(lVar15 + 0x40);
        }
        if (bVar5) {
          param_1[2] = lVar16;
          plVar10[-2] = lVar15;
          plVar9 = param_1 + 3;
          goto LAB_10a3ea89c;
        }
      }
LAB_10a3ea8ac:
      lVar17 = plVar10[2];
      lVar16 = *(long *)(lVar17 + 0x40);
      lVar13 = param_1[4];
      lVar15 = *(long *)(lVar13 + 0x40);
      lVar18 = *(long *)(lVar13 + 0x48);
      bVar5 = *(long *)(lVar17 + 0x48) < lVar18;
      if (lVar16 != lVar15) {
        bVar5 = lVar16 < lVar15;
      }
      lVar12 = param_2[-6];
      bVar1 = *(long *)(lVar12 + 0x48) < *(long *)(lVar17 + 0x48);
      if (*(long *)(lVar12 + 0x40) != lVar16) {
        bVar1 = *(long *)(lVar12 + 0x40) < lVar16;
      }
      if (bVar5) {
        if (bVar1) {
          plVar9 = param_1 + 5;
          param_1[4] = lVar12;
        }
        else {
          plVar9 = plVar10 + 3;
          lVar16 = *plVar9;
          lVar12 = param_1[5];
          param_1[4] = lVar17;
          param_1[5] = lVar16;
          plVar10[2] = lVar13;
          plVar10[3] = lVar12;
          lVar16 = param_2[-6];
          bVar5 = *(long *)(lVar16 + 0x48) < lVar18;
          if (*(long *)(lVar16 + 0x40) != lVar15) {
            bVar5 = *(long *)(lVar16 + 0x40) < lVar15;
          }
          if (!bVar5) goto LAB_10a3ea9b4;
          plVar10[2] = lVar16;
        }
        param_2[-6] = lVar13;
        plVar8 = param_2 + -5;
LAB_10a3ea9a0:
        lVar16 = *plVar9;
        *plVar9 = *plVar8;
        *plVar8 = lVar16;
        lVar13 = plVar10[2];
      }
      else {
        lVar13 = lVar17;
        if (bVar1) {
          plVar10[2] = lVar12;
          param_2[-6] = lVar17;
          plVar8 = plVar10 + 3;
          lVar16 = *plVar8;
          *plVar8 = param_2[-5];
          param_2[-5] = lVar16;
          lVar13 = plVar10[2];
          lVar16 = param_1[4];
          bVar5 = *(long *)(lVar13 + 0x48) < *(long *)(lVar16 + 0x48);
          if (*(long *)(lVar13 + 0x40) != *(long *)(lVar16 + 0x40)) {
            bVar5 = *(long *)(lVar13 + 0x40) < *(long *)(lVar16 + 0x40);
          }
          if (bVar5) {
            param_1[4] = lVar13;
            plVar10[2] = lVar16;
            plVar9 = param_1 + 5;
            goto LAB_10a3ea9a0;
          }
        }
      }
LAB_10a3ea9b4:
      lVar17 = *plVar10;
      lVar16 = *(long *)(lVar17 + 0x40);
      lVar12 = plVar10[-2];
      lVar15 = *(long *)(lVar12 + 0x40);
      lVar18 = *(long *)(lVar12 + 0x48);
      bVar5 = *(long *)(lVar17 + 0x48) < lVar18;
      if (lVar16 != lVar15) {
        bVar5 = lVar16 < lVar15;
      }
      lVar19 = *(long *)(lVar13 + 0x40);
      lVar3 = *(long *)(lVar13 + 0x48);
      bVar1 = lVar3 < *(long *)(lVar17 + 0x48);
      if (lVar19 != lVar16) {
        bVar1 = lVar19 < lVar16;
      }
      if (bVar5) {
        if (bVar1) {
          plVar9 = plVar10 + -1;
          plVar10[-2] = lVar13;
        }
        else {
          plVar9 = plVar10 + 1;
          lVar16 = plVar10[-1];
          plVar10[-2] = lVar17;
          plVar10[-1] = *plVar9;
          *plVar10 = lVar12;
          *plVar9 = lVar16;
          bVar5 = lVar3 < lVar18;
          if (lVar19 != lVar15) {
            bVar5 = lVar19 < lVar15;
          }
          lVar17 = lVar12;
          if (!bVar5) goto LAB_10a3eaaa0;
          *plVar10 = lVar13;
        }
        plVar10[2] = lVar12;
        plVar8 = plVar10 + 3;
LAB_10a3eaa8c:
        lVar16 = *plVar9;
        *plVar9 = *plVar8;
        *plVar8 = lVar16;
        lVar17 = *plVar10;
      }
      else if (bVar1) {
        *plVar10 = lVar13;
        plVar8 = plVar10 + 1;
        lVar16 = *plVar8;
        *plVar8 = plVar10[3];
        plVar10[2] = lVar17;
        plVar10[3] = lVar16;
        bVar5 = lVar3 < lVar18;
        if (lVar19 != lVar15) {
          bVar5 = lVar19 < lVar15;
        }
        lVar17 = lVar13;
        if (bVar5) {
          plVar10[-2] = lVar13;
          *plVar10 = lVar12;
          plVar9 = plVar10 + -1;
          goto LAB_10a3eaa8c;
        }
      }
LAB_10a3eaaa0:
      lVar16 = *param_1;
      plVar8 = param_1 + 1;
      *param_1 = lVar17;
      *plVar10 = lVar16;
      plVar9 = plVar10 + 1;
LAB_10a3eaab0:
      lVar16 = *plVar8;
      *plVar8 = *plVar9;
      *plVar9 = lVar16;
      lStack_70 = *param_1;
    }
LAB_10a3eaac4:
    param_3 = param_3 + -1;
    if ((param_4 & 1) == 0) {
      lVar16 = *(long *)(param_1[-2] + 0x40);
      bVar5 = *(long *)(param_1[-2] + 0x48) < *(long *)(lStack_70 + 0x48);
      if (lVar16 != *(long *)(lStack_70 + 0x40)) {
        bVar5 = lVar16 < *(long *)(lStack_70 + 0x40);
      }
      if (!bVar5) {
        plStack_68 = (long *)param_1[1];
        *param_1 = 0;
        param_1[1] = 0;
        lVar16 = *(long *)(lStack_70 + 0x40);
        lVar18 = *(long *)(lStack_70 + 0x48);
        lVar15 = *(long *)(param_2[-2] + 0x40);
        bVar5 = lVar18 < *(long *)(param_2[-2] + 0x48);
        if (lVar16 != lVar15) {
          bVar5 = lVar16 < lVar15;
        }
        plVar10 = param_1;
        if (bVar5) {
          do {
            plVar10 = plVar10 + 2;
            if (plVar10 == param_2) goto LAB_10a3eb58c;
            lVar15 = *(long *)(*plVar10 + 0x40);
            bVar5 = lVar18 < *(long *)(*plVar10 + 0x48);
            if (lVar16 != lVar15) {
              bVar5 = lVar16 < lVar15;
            }
          } while (!bVar5);
        }
        else {
          do {
            plVar10 = plVar10 + 2;
            if (param_2 <= plVar10) break;
            lVar15 = *(long *)(*plVar10 + 0x40);
            bVar5 = lVar18 < *(long *)(*plVar10 + 0x48);
            if (lVar16 != lVar15) {
              bVar5 = lVar16 < lVar15;
            }
          } while (!bVar5);
        }
        plVar8 = param_2;
        if (plVar10 < param_2) {
          do {
            if (plVar8 == param_1) goto LAB_10a3eb58c;
            plVar8 = plVar8 + -2;
            lVar15 = *(long *)(*plVar8 + 0x40);
            bVar5 = lVar18 < *(long *)(*plVar8 + 0x48);
            if (lVar16 != lVar15) {
              bVar5 = lVar16 < lVar15;
            }
          } while (bVar5);
        }
        if (plVar10 < plVar8) {
          lVar16 = *plVar10;
          lVar15 = *plVar8;
          do {
            *plVar10 = lVar15;
            *plVar8 = lVar16;
            lVar16 = plVar10[1];
            plVar10[1] = plVar8[1];
            plVar8[1] = lVar16;
            do {
              plVar10 = plVar10 + 2;
              if (plVar10 == param_2) goto LAB_10a3eb58c;
              lVar18 = *(long *)(lStack_70 + 0x40);
              lVar16 = *plVar10;
              bVar5 = *(long *)(lStack_70 + 0x48) < *(long *)(lVar16 + 0x48);
              if (lVar18 != *(long *)(lVar16 + 0x40)) {
                bVar5 = lVar18 < *(long *)(lVar16 + 0x40);
              }
            } while (!bVar5);
            do {
              if (plVar8 == param_1) goto LAB_10a3eb58c;
              plVar8 = plVar8 + -2;
              lVar15 = *plVar8;
              bVar5 = *(long *)(lStack_70 + 0x48) < *(long *)(lVar15 + 0x48);
              if (lVar18 != *(long *)(lVar15 + 0x40)) {
                bVar5 = lVar18 < *(long *)(lVar15 + 0x40);
              }
            } while (bVar5);
          } while (plVar10 < plVar8);
        }
        plVar8 = plVar10 + -2;
        if (plVar8 != param_1) {
          FUN_10a2c8f88(param_1,plVar8);
        }
        FUN_10a2c8f88(plVar8,&lStack_70);
        plVar8 = plStack_68;
        if (plStack_68 != (long *)0x0) {
          plVar9 = plStack_68 + 1;
          do {
            lVar16 = *plVar9;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar5) {
              *plVar9 = lVar16 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*plStack_68 + 0x10))(plStack_68);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        param_4 = 0;
        goto LAB_10a3ea550;
      }
    }
    lVar16 = 0;
    plStack_68 = (long *)param_1[1];
    *param_1 = 0;
    param_1[1] = 0;
    do {
      plVar10 = (long *)((long)param_1 + lVar16 + 0x10);
      if (plVar10 == param_2) goto LAB_10a3eb58c;
      lVar13 = *plVar10;
      lVar15 = *(long *)(lStack_70 + 0x40);
      lVar18 = *(long *)(lStack_70 + 0x48);
      bVar5 = *(long *)(lVar13 + 0x48) < lVar18;
      if (*(long *)(lVar13 + 0x40) != lVar15) {
        bVar5 = *(long *)(lVar13 + 0x40) < lVar15;
      }
      lVar16 = lVar16 + 0x10;
    } while (bVar5);
    plVar8 = (long *)((long)param_1 + lVar16);
    plVar9 = param_2;
    if (lVar16 == 0x10) {
      do {
        if (plVar9 <= plVar8) break;
        plVar9 = plVar9 + -2;
        lVar16 = *(long *)(*plVar9 + 0x40);
        bVar5 = *(long *)(*plVar9 + 0x48) < lVar18;
        if (lVar16 != lVar15) {
          bVar5 = lVar16 < lVar15;
        }
      } while (!bVar5);
    }
    else {
      do {
        if (plVar9 == param_1) goto LAB_10a3eb58c;
        plVar9 = plVar9 + -2;
        lVar16 = *(long *)(*plVar9 + 0x40);
        bVar5 = *(long *)(*plVar9 + 0x48) < lVar18;
        if (lVar16 != lVar15) {
          bVar5 = lVar16 < lVar15;
        }
      } while (!bVar5);
    }
    plVar10 = plVar8;
    if (plVar8 < plVar9) {
      lVar16 = *plVar9;
      plVar14 = plVar9;
      do {
        *plVar10 = lVar16;
        *plVar14 = lVar13;
        lVar16 = plVar10[1];
        plVar10[1] = plVar14[1];
        plVar14[1] = lVar16;
        do {
          plVar10 = plVar10 + 2;
          if (plVar10 == param_2) goto LAB_10a3eb58c;
          lVar13 = *plVar10;
          lVar15 = *(long *)(lStack_70 + 0x40);
          bVar5 = *(long *)(lVar13 + 0x48) < *(long *)(lStack_70 + 0x48);
          if (*(long *)(lVar13 + 0x40) != lVar15) {
            bVar5 = *(long *)(lVar13 + 0x40) < lVar15;
          }
        } while (bVar5);
        do {
          if (plVar14 == param_1) goto LAB_10a3eb58c;
          plVar14 = plVar14 + -2;
          lVar16 = *plVar14;
          bVar5 = *(long *)(lVar16 + 0x48) < *(long *)(lStack_70 + 0x48);
          if (*(long *)(lVar16 + 0x40) != lVar15) {
            bVar5 = *(long *)(lVar16 + 0x40) < lVar15;
          }
        } while (!bVar5);
      } while (plVar10 < plVar14);
    }
    plVar14 = plVar10 + -2;
    if (plVar14 != param_1) {
      FUN_10a2c8f88(param_1,plVar14);
    }
    FUN_10a2c8f88(plVar14,&lStack_70);
    plVar6 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar2 = plStack_68 + 1;
      do {
        lVar16 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plVar8 < plVar9) goto LAB_10a3eacd0;
    plVar8 = param_1;
    FUN_10a3eb938(param_1,plVar14);
    plVar9 = plVar10;
    FUN_10a3eb938(plVar10,param_2);
    if ((int)plVar9 == 0) goto code_r0x00010a3eaccc;
    param_2 = plVar14;
    if (((ulong)plVar8 & 1) != 0) {
      return;
    }
  } while( true );
LAB_10a3eafd4:
  plVar8 = plVar10;
  lStack_70 = plVar11[2];
  lVar15 = *(long *)(*plVar11 + 0x40);
  bVar5 = *(long *)(lStack_70 + 0x48) < *(long *)(*plVar11 + 0x48);
  if (*(long *)(lStack_70 + 0x40) != lVar15) {
    bVar5 = *(long *)(lStack_70 + 0x40) < lVar15;
  }
  if (bVar5) {
    plStack_68 = (long *)plVar11[3];
    *plVar8 = 0;
    plVar8[1] = 0;
    lVar15 = lVar16;
    do {
      lVar18 = lVar15;
      lVar15 = (long)param_1 + lVar18;
      FUN_10a2c8f88(lVar15 + 0x10,lVar15);
      plVar10 = param_1;
      if (lVar18 == 0) goto LAB_10a3eb064;
      lVar13 = *(long *)(*(long *)(lVar15 + -0x10) + 0x40);
      bVar5 = *(long *)(lStack_70 + 0x48) < *(long *)(*(long *)(lVar15 + -0x10) + 0x48);
      if (*(long *)(lStack_70 + 0x40) != lVar13) {
        bVar5 = *(long *)(lStack_70 + 0x40) < lVar13;
      }
      lVar15 = lVar18 + -0x10;
    } while (bVar5);
    plVar10 = (long *)((long)param_1 + lVar18);
LAB_10a3eb064:
    FUN_10a2c8f88(plVar10,&lStack_70);
    plVar10 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar11 = plStack_68 + 1;
      do {
        lVar15 = *plVar11;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *plVar11 = lVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
  }
  lVar16 = lVar16 + 0x10;
  plVar10 = plVar8 + 2;
  plVar11 = plVar8;
  if (plVar8 + 2 == param_2) {
    return;
  }
  goto LAB_10a3eafd4;
LAB_10a3eb0cc:
  do {
    if ((long)uVar20 <= (long)uVar21) {
      uVar22 = uVar20 << 1 | 1;
      plVar10 = param_1 + uVar22 * 2;
      uVar24 = uVar20 * 2 + 2;
      if ((long)uVar24 < (long)uVar23) {
        lVar15 = *plVar10;
        lVar16 = plVar10[2];
        bVar5 = *(long *)(lVar15 + 0x48) < *(long *)(lVar16 + 0x48);
        if (*(long *)(lVar15 + 0x40) != *(long *)(lVar16 + 0x40)) {
          bVar5 = *(long *)(lVar15 + 0x40) < *(long *)(lVar16 + 0x40);
        }
        plVar11 = plVar10 + 2;
        if (!bVar5) {
          plVar11 = plVar10;
          lVar16 = lVar15;
          uVar24 = uVar22;
        }
      }
      else {
        plVar11 = plVar10;
        lVar16 = *plVar10;
        uVar24 = uVar22;
      }
      plVar10 = param_1 + uVar20 * 2;
      lVar15 = *plVar10;
      bVar5 = *(long *)(lVar16 + 0x48) < *(long *)(lVar15 + 0x48);
      if (*(long *)(lVar16 + 0x40) != *(long *)(lVar15 + 0x40)) {
        bVar5 = *(long *)(lVar16 + 0x40) < *(long *)(lVar15 + 0x40);
      }
      if (!bVar5) {
        plStack_68 = (long *)plVar10[1];
        *plVar10 = 0;
        plVar10[1] = 0;
        lStack_70 = lVar15;
        do {
          plVar8 = plVar11;
          FUN_10a2c8f88(plVar10,plVar8);
          if ((long)uVar21 < (long)uVar24) break;
          uVar22 = uVar24 << 1 | 1;
          plVar10 = param_1 + uVar22 * 2;
          uVar24 = uVar24 * 2 + 2;
          if ((long)uVar24 < (long)uVar23) {
            lVar18 = *plVar10;
            lVar16 = plVar10[2];
            bVar5 = *(long *)(lVar18 + 0x48) < *(long *)(lVar16 + 0x48);
            if (*(long *)(lVar18 + 0x40) != *(long *)(lVar16 + 0x40)) {
              bVar5 = *(long *)(lVar18 + 0x40) < *(long *)(lVar16 + 0x40);
            }
            plVar11 = plVar10 + 2;
            if (!bVar5) {
              plVar11 = plVar10;
              lVar16 = lVar18;
              uVar24 = uVar22;
            }
          }
          else {
            plVar11 = plVar10;
            lVar16 = *plVar10;
            uVar24 = uVar22;
          }
          bVar5 = *(long *)(lVar16 + 0x48) < *(long *)(lVar15 + 0x48);
          if (*(long *)(lVar16 + 0x40) != *(long *)(lVar15 + 0x40)) {
            bVar5 = *(long *)(lVar16 + 0x40) < *(long *)(lVar15 + 0x40);
          }
          plVar10 = plVar8;
        } while (!bVar5);
        FUN_10a2c8f88(plVar8,&lStack_70);
        plVar10 = plStack_68;
        if (plStack_68 != (long *)0x0) {
          plVar11 = plStack_68 + 1;
          do {
            lVar16 = *plVar11;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar5) {
              *plVar11 = lVar16 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*plStack_68 + 0x10))(plStack_68);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
      }
    }
    bVar5 = uVar20 != 0;
    uVar20 = uVar20 - 1;
  } while (bVar5);
  do {
    plStack_78 = (long *)param_1[1];
    lStack_80 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    plVar10 = param_1;
    uVar20 = 0;
    do {
      uVar24 = uVar20 << 1 | 1;
      uVar21 = uVar20 * 2 + 2;
      plVar11 = plVar10 + uVar20 * 2 + 2;
      uVar22 = uVar24;
      if ((long)uVar21 < (long)uVar23) {
        lVar18 = plVar10[uVar20 * 2 + 4];
        lVar16 = *(long *)(plVar10[uVar20 * 2 + 2] + 0x40);
        lVar15 = *(long *)(lVar18 + 0x40);
        bVar5 = *(long *)(plVar10[uVar20 * 2 + 2] + 0x48) < *(long *)(lVar18 + 0x48);
        if (lVar16 != lVar15) {
          bVar5 = lVar16 < lVar15;
        }
        plVar11 = plVar10 + uVar20 * 2 + 4;
        uVar22 = uVar21;
        if (!bVar5) {
          plVar11 = plVar10 + uVar20 * 2 + 2;
          uVar22 = uVar24;
        }
      }
      FUN_10a2c8f88(plVar10,plVar11);
      plVar10 = plVar11;
      uVar20 = uVar22;
    } while ((long)uVar22 <= (long)(uVar23 - 2 >> 1));
    param_2 = param_2 + -2;
    if (plVar11 == param_2) {
      FUN_10a2c8f88(plVar11,&lStack_80);
    }
    else {
      FUN_10a2c8f88(plVar11,param_2);
      FUN_10a2c8f88(param_2,&lStack_80);
      lVar16 = (long)plVar11 + (0x10 - (long)param_1) >> 4;
      if (1 < lVar16) {
        uVar20 = lVar16 - 2U >> 1;
        lVar15 = param_1[uVar20 * 2];
        lVar16 = *(long *)(lVar15 + 0x40);
        lVar18 = *plVar11;
        bVar5 = *(long *)(lVar15 + 0x48) < *(long *)(lVar18 + 0x48);
        if (lVar16 != *(long *)(lVar18 + 0x40)) {
          bVar5 = lVar16 < *(long *)(lVar18 + 0x40);
        }
        if (bVar5) {
          plStack_68 = (long *)plVar11[1];
          *plVar11 = 0;
          plVar11[1] = 0;
          plVar10 = param_1 + uVar20 * 2;
          lStack_70 = lVar18;
          do {
            plVar8 = plVar10;
            FUN_10a2c8f88(plVar11,plVar8);
            if (uVar20 == 0) break;
            uVar20 = uVar20 - 1 >> 1;
            lVar15 = param_1[uVar20 * 2];
            lVar16 = *(long *)(lVar15 + 0x40);
            bVar5 = *(long *)(lVar15 + 0x48) < *(long *)(lVar18 + 0x48);
            if (lVar16 != *(long *)(lVar18 + 0x40)) {
              bVar5 = lVar16 < *(long *)(lVar18 + 0x40);
            }
            plVar10 = param_1 + uVar20 * 2;
            plVar11 = plVar8;
          } while (bVar5);
          FUN_10a2c8f88(plVar8,&lStack_70);
          plVar10 = plStack_68;
          if (plStack_68 != (long *)0x0) {
            plVar11 = plStack_68 + 1;
            do {
              lVar16 = *plVar11;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar5) {
                *plVar11 = lVar16 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plStack_68 + 0x10))(plStack_68);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
            }
          }
        }
      }
    }
    plVar10 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar11 = plStack_78 + 1;
      do {
        lVar16 = *plVar11;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *plVar11 = lVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    bVar5 = (long)uVar23 < 3;
    uVar23 = uVar23 - 1;
    if (bVar5) {
      return;
    }
  } while( true );
code_r0x00010a3eaccc:
  if (((ulong)plVar8 & 1) == 0) {
LAB_10a3eacd0:
    FUN_10a3ea50c(param_1,plVar14,param_3,param_4 & 1);
    param_4 = 0;
  }
  goto LAB_10a3ea550;
}



/* Entry: 10a3eb604; end: 10a3eb7e7;  */

void FUN_10a3eb604(long *param_1,long *param_2,long *param_3,long *param_4)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  lVar3 = *param_2;
  lVar8 = *(long *)(lVar3 + 0x40);
  lVar7 = *param_1;
  bVar1 = *(long *)(lVar3 + 0x48) < *(long *)(lVar7 + 0x48);
  if (lVar8 != *(long *)(lVar7 + 0x40)) {
    bVar1 = lVar8 < *(long *)(lVar7 + 0x40);
  }
  lVar5 = *param_3;
  bVar2 = *(long *)(lVar5 + 0x48) < *(long *)(lVar3 + 0x48);
  if (*(long *)(lVar5 + 0x40) != lVar8) {
    bVar2 = *(long *)(lVar5 + 0x40) < lVar8;
  }
  if (bVar1) {
    if (bVar2) {
      plVar4 = param_1 + 1;
      *param_1 = lVar5;
    }
    else {
      *param_1 = lVar3;
      *param_2 = lVar7;
      plVar4 = param_2 + 1;
      lVar8 = param_1[1];
      param_1[1] = *plVar4;
      *plVar4 = lVar8;
      lVar8 = *param_3;
      lVar7 = *param_2;
      bVar1 = *(long *)(lVar8 + 0x48) < *(long *)(lVar7 + 0x48);
      if (*(long *)(lVar8 + 0x40) != *(long *)(lVar7 + 0x40)) {
        bVar1 = *(long *)(lVar8 + 0x40) < *(long *)(lVar7 + 0x40);
      }
      if (!bVar1) goto LAB_10a3eb718;
      *param_2 = lVar8;
    }
    plVar6 = param_3 + 1;
    *param_3 = lVar7;
  }
  else {
    if (!bVar2) goto LAB_10a3eb718;
    *param_2 = lVar5;
    *param_3 = lVar3;
    plVar6 = param_2 + 1;
    lVar8 = *plVar6;
    *plVar6 = param_3[1];
    param_3[1] = lVar8;
    lVar8 = *param_2;
    lVar3 = *param_1;
    bVar1 = *(long *)(lVar8 + 0x48) < *(long *)(lVar3 + 0x48);
    if (*(long *)(lVar8 + 0x40) != *(long *)(lVar3 + 0x40)) {
      bVar1 = *(long *)(lVar8 + 0x40) < *(long *)(lVar3 + 0x40);
    }
    if (!bVar1) goto LAB_10a3eb718;
    plVar4 = param_1 + 1;
    *param_1 = lVar8;
    *param_2 = lVar3;
  }
  lVar8 = *plVar4;
  *plVar4 = *plVar6;
  *plVar6 = lVar8;
LAB_10a3eb718:
  lVar8 = *param_4;
  lVar3 = *param_3;
  bVar1 = *(long *)(lVar8 + 0x48) < *(long *)(lVar3 + 0x48);
  if (*(long *)(lVar8 + 0x40) != *(long *)(lVar3 + 0x40)) {
    bVar1 = *(long *)(lVar8 + 0x40) < *(long *)(lVar3 + 0x40);
  }
  if (bVar1) {
    *param_3 = lVar8;
    *param_4 = lVar3;
    lVar8 = param_3[1];
    param_3[1] = param_4[1];
    param_4[1] = lVar8;
    lVar8 = *param_3;
    lVar3 = *param_2;
    bVar1 = *(long *)(lVar8 + 0x48) < *(long *)(lVar3 + 0x48);
    if (*(long *)(lVar8 + 0x40) != *(long *)(lVar3 + 0x40)) {
      bVar1 = *(long *)(lVar8 + 0x40) < *(long *)(lVar3 + 0x40);
    }
    if (bVar1) {
      *param_2 = lVar8;
      *param_3 = lVar3;
      lVar8 = param_2[1];
      param_2[1] = param_3[1];
      param_3[1] = lVar8;
      lVar8 = *param_2;
      lVar3 = *param_1;
      bVar1 = *(long *)(lVar8 + 0x48) < *(long *)(lVar3 + 0x48);
      if (*(long *)(lVar8 + 0x40) != *(long *)(lVar3 + 0x40)) {
        bVar1 = *(long *)(lVar8 + 0x40) < *(long *)(lVar3 + 0x40);
      }
      if (bVar1) {
        *param_1 = lVar8;
        *param_2 = lVar3;
        lVar8 = param_1[1];
        param_1[1] = param_2[1];
        param_2[1] = lVar8;
      }
    }
  }
  return;
}



/* Entry: 10a3eb7e8; end: 10a3eb937;  */

void FUN_10a3eb7e8(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  FUN_10a3eb604();
  lVar2 = *param_5;
  lVar3 = *param_4;
  bVar1 = *(long *)(lVar2 + 0x48) < *(long *)(lVar3 + 0x48);
  if (*(long *)(lVar2 + 0x40) != *(long *)(lVar3 + 0x40)) {
    bVar1 = *(long *)(lVar2 + 0x40) < *(long *)(lVar3 + 0x40);
  }
  if (bVar1) {
    *param_4 = lVar2;
    *param_5 = lVar3;
    lVar2 = param_4[1];
    param_4[1] = param_5[1];
    param_5[1] = lVar2;
    lVar2 = *param_4;
    lVar3 = *param_3;
    bVar1 = *(long *)(lVar2 + 0x48) < *(long *)(lVar3 + 0x48);
    if (*(long *)(lVar2 + 0x40) != *(long *)(lVar3 + 0x40)) {
      bVar1 = *(long *)(lVar2 + 0x40) < *(long *)(lVar3 + 0x40);
    }
    if (bVar1) {
      *param_3 = lVar2;
      *param_4 = lVar3;
      lVar2 = param_3[1];
      param_3[1] = param_4[1];
      param_4[1] = lVar2;
      lVar2 = *param_3;
      lVar3 = *param_2;
      bVar1 = *(long *)(lVar2 + 0x48) < *(long *)(lVar3 + 0x48);
      if (*(long *)(lVar2 + 0x40) != *(long *)(lVar3 + 0x40)) {
        bVar1 = *(long *)(lVar2 + 0x40) < *(long *)(lVar3 + 0x40);
      }
      if (bVar1) {
        *param_2 = lVar2;
        *param_3 = lVar3;
        lVar2 = param_2[1];
        param_2[1] = param_3[1];
        param_3[1] = lVar2;
        lVar2 = *param_2;
        lVar3 = *param_1;
        bVar1 = *(long *)(lVar2 + 0x48) < *(long *)(lVar3 + 0x48);
        if (*(long *)(lVar2 + 0x40) != *(long *)(lVar3 + 0x40)) {
          bVar1 = *(long *)(lVar2 + 0x40) < *(long *)(lVar3 + 0x40);
        }
        if (bVar1) {
          *param_1 = lVar2;
          *param_2 = lVar3;
          lVar2 = param_1[1];
          param_1[1] = param_2[1];
          param_2[1] = lVar2;
        }
      }
    }
  }
  return;
}



/* Entry: 10a3eb938; end: 10a3ebd37;  */

bool FUN_10a3eb938(long *param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  long lStack_60;
  long *plStack_58;
  
  uVar8 = (long)param_2 - (long)param_1 >> 4;
  if ((long)uVar8 < 3) {
    if (uVar8 < 2) {
      return true;
    }
    if (uVar8 == 2) {
      lVar9 = param_2[-2];
      lVar10 = *param_1;
      bVar6 = *(long *)(lVar9 + 0x48) < *(long *)(lVar10 + 0x48);
      if (*(long *)(lVar9 + 0x40) != *(long *)(lVar10 + 0x40)) {
        bVar6 = *(long *)(lVar9 + 0x40) < *(long *)(lVar10 + 0x40);
      }
      if (!bVar6) {
        return true;
      }
      *param_1 = lVar9;
      param_2[-2] = lVar10;
      lVar9 = param_1[1];
      param_1[1] = param_2[-1];
      param_2[-1] = lVar9;
      return true;
    }
  }
  else {
    if (uVar8 == 3) {
      lVar13 = param_1[2];
      lVar9 = *(long *)(lVar13 + 0x40);
      lVar11 = *param_1;
      lVar10 = *(long *)(lVar11 + 0x40);
      lVar15 = *(long *)(lVar11 + 0x48);
      bVar6 = *(long *)(lVar13 + 0x48) < lVar15;
      if (lVar9 != lVar10) {
        bVar6 = lVar9 < lVar10;
      }
      lVar14 = param_2[-2];
      bVar1 = *(long *)(lVar14 + 0x48) < *(long *)(lVar13 + 0x48);
      if (*(long *)(lVar14 + 0x40) != lVar9) {
        bVar1 = *(long *)(lVar14 + 0x40) < lVar9;
      }
      if (bVar6) {
        if (bVar1) {
          plVar12 = param_1 + 1;
          *param_1 = lVar14;
        }
        else {
          plVar12 = param_1 + 3;
          lVar9 = param_1[1];
          *param_1 = lVar13;
          param_1[1] = *plVar12;
          param_1[2] = lVar11;
          *plVar12 = lVar9;
          lVar9 = param_2[-2];
          bVar6 = *(long *)(lVar9 + 0x48) < lVar15;
          if (*(long *)(lVar9 + 0x40) != lVar10) {
            bVar6 = *(long *)(lVar9 + 0x40) < lVar10;
          }
          if (!bVar6) {
            return true;
          }
          param_1[2] = lVar9;
        }
        param_2[-2] = lVar11;
        plVar7 = param_2 + -1;
      }
      else {
        if (!bVar1) {
          return true;
        }
        param_1[2] = lVar14;
        param_2[-2] = lVar13;
        plVar7 = param_1 + 3;
        lVar9 = *plVar7;
        *plVar7 = param_2[-1];
        param_2[-1] = lVar9;
        lVar9 = param_1[2];
        lVar10 = *param_1;
        bVar6 = *(long *)(lVar9 + 0x48) < *(long *)(lVar10 + 0x48);
        if (*(long *)(lVar9 + 0x40) != *(long *)(lVar10 + 0x40)) {
          bVar6 = *(long *)(lVar9 + 0x40) < *(long *)(lVar10 + 0x40);
        }
        if (!bVar6) {
          return true;
        }
        *param_1 = lVar9;
        param_1[2] = lVar10;
        plVar12 = param_1 + 1;
      }
      lVar9 = *plVar12;
      *plVar12 = *plVar7;
      *plVar7 = lVar9;
      return true;
    }
    if (uVar8 == 4) {
      FUN_10a3eb604(param_1,param_1 + 2,param_1 + 4,param_2 + -2);
      return true;
    }
    if (uVar8 == 5) {
      FUN_10a3eb7e8(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2);
      return true;
    }
  }
  lVar11 = param_1[4];
  lVar14 = param_1[2];
  lVar9 = *(long *)(lVar14 + 0x40);
  lVar13 = *param_1;
  lVar10 = *(long *)(lVar13 + 0x40);
  lVar15 = *(long *)(lVar13 + 0x48);
  bVar6 = *(long *)(lVar14 + 0x48) < lVar15;
  if (lVar9 != lVar10) {
    bVar6 = lVar9 < lVar10;
  }
  lVar3 = *(long *)(lVar11 + 0x40);
  lVar4 = *(long *)(lVar11 + 0x48);
  bVar1 = lVar4 < *(long *)(lVar14 + 0x48);
  if (lVar3 != lVar9) {
    bVar1 = lVar3 < lVar9;
  }
  if (bVar6) {
    if (bVar1) {
      plVar12 = param_1 + 1;
      *param_1 = lVar11;
    }
    else {
      plVar12 = param_1 + 3;
      lVar9 = param_1[1];
      *param_1 = lVar14;
      param_1[1] = *plVar12;
      param_1[2] = lVar13;
      *plVar12 = lVar9;
      bVar6 = lVar4 < lVar15;
      if (lVar3 != lVar10) {
        bVar6 = lVar3 < lVar10;
      }
      if (!bVar6) goto LAB_10a3ebc04;
      param_1[2] = lVar11;
    }
    param_1[4] = lVar13;
    plVar7 = param_1 + 5;
  }
  else {
    if (!bVar1) goto LAB_10a3ebc04;
    plVar7 = param_1 + 3;
    lVar9 = *plVar7;
    param_1[2] = lVar11;
    param_1[3] = param_1[5];
    param_1[4] = lVar14;
    param_1[5] = lVar9;
    bVar6 = lVar4 < lVar15;
    if (lVar3 != lVar10) {
      bVar6 = lVar3 < lVar10;
    }
    if (!bVar6) goto LAB_10a3ebc04;
    *param_1 = lVar11;
    param_1[2] = lVar13;
    plVar12 = param_1 + 1;
  }
  lVar9 = *plVar12;
  *plVar12 = *plVar7;
  *plVar7 = lVar9;
LAB_10a3ebc04:
  if (param_1 + 6 != param_2) {
    lVar9 = 0;
    iVar16 = 0;
    plVar7 = param_1 + 4;
    plVar12 = param_1 + 6;
    do {
      lStack_60 = *plVar12;
      lVar10 = *(long *)(*plVar7 + 0x40);
      bVar6 = *(long *)(lStack_60 + 0x48) < *(long *)(*plVar7 + 0x48);
      if (*(long *)(lStack_60 + 0x40) != lVar10) {
        bVar6 = *(long *)(lStack_60 + 0x40) < lVar10;
      }
      if (bVar6) {
        plStack_58 = (long *)plVar12[1];
        *plVar12 = 0;
        plVar12[1] = 0;
        lVar10 = lVar9;
        do {
          lVar15 = lVar10;
          FUN_10a2c8f88((long)param_1 + lVar15 + 0x30,(long)param_1 + lVar15 + 0x20);
          plVar7 = param_1;
          if (lVar15 == -0x20) goto LAB_10a3ebca8;
          lVar11 = *(long *)((long)param_1 + lVar15 + 0x10);
          lVar10 = *(long *)(lVar11 + 0x40);
          bVar6 = *(long *)(lStack_60 + 0x48) < *(long *)(lVar11 + 0x48);
          if (*(long *)(lStack_60 + 0x40) != lVar10) {
            bVar6 = *(long *)(lStack_60 + 0x40) < lVar10;
          }
          lVar10 = lVar15 + -0x10;
        } while (bVar6);
        plVar7 = (long *)((long)param_1 + lVar15 + 0x20);
LAB_10a3ebca8:
        FUN_10a2c8f88(plVar7,&lStack_60);
        plVar7 = plStack_58;
        if (plStack_58 != (long *)0x0) {
          plVar2 = plStack_58 + 1;
          do {
            lVar10 = *plVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *plVar2 = lVar10 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plStack_58 + 0x10))(plStack_58);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
        iVar16 = iVar16 + 1;
        if (iVar16 == 8) {
          return plVar12 + 2 == param_2;
        }
      }
      plVar2 = plVar12 + 2;
      lVar9 = lVar9 + 0x10;
      plVar7 = plVar12;
      plVar12 = plVar2;
    } while (plVar2 != param_2);
  }
  return true;
}



/* Entry: 10a3ebd38; end: 10a3ebd4b;  */

undefined1  [16] FUN_10a3ebd38(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  FUN_109ffde64(&UNK_10f655b2b);
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
    __Znwm(lVar1);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000109ffded8();
  plVar2 = (long *)&UNK_10f655b2b;
  FUN_109ffde64();
  if ((ulong)plVar2 >> 0x3b == 0) {
    lVar1 = (long)plVar2 << 5;
    __Znwm(lVar1);
    auVar5._8_8_ = plVar2;
    auVar5._0_8_ = lVar1;
    return auVar5;
  }
  func_0x000109ffded8();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    plVar2[2] = lVar3 + -0x20;
    func_0x00010a0536d4(lVar3 + -0x10);
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = plVar2;
  return auVar6;
}



/* Entry: 10a3ebd4c; end: 10a3ebd7f;  */

undefined1  [16] FUN_10a3ebd4c(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
    __Znwm(lVar1);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000109ffded8();
  plVar2 = (long *)&UNK_10f655b2b;
  FUN_109ffde64();
  if ((ulong)plVar2 >> 0x3b == 0) {
    lVar1 = (long)plVar2 << 5;
    __Znwm(lVar1);
    auVar5._8_8_ = plVar2;
    auVar5._0_8_ = lVar1;
    return auVar5;
  }
  func_0x000109ffded8();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    plVar2[2] = lVar3 + -0x20;
    func_0x00010a0536d4(lVar3 + -0x10);
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = plVar2;
  return auVar6;
}



/* Entry: 10a3ebd80; end: 10a3ebd93;  */

undefined1  [16] FUN_10a3ebd80(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&UNK_10f655b2b;
  FUN_109ffde64();
  if ((ulong)plVar1 >> 0x3b == 0) {
    lVar2 = (long)plVar1 << 5;
    __Znwm(lVar2);
    auVar4._8_8_ = plVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x20;
    func_0x00010a0536d4(lVar3 + -0x10);
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10a3ebd94; end: 10a3ebe17;  */

undefined1  [16] FUN_10a3ebd94(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_1 >> 0x3b == 0) {
    lVar1 = (long)param_1 << 5;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x20;
    func_0x00010a0536d4(lVar2 + -0x10);
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10a3ebe18; end: 10a3ebe83;  */

void FUN_10a3ebe18(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = lVar2;
    lVar1 = param_1[1];
    if (param_1[1] != lVar2) {
      do {
        lVar3 = lVar1 + -0x20;
        func_0x00010a0536d4(lVar1 + -0x10);
        lVar1 = lVar3;
      } while (lVar3 != lVar2);
      lVar3 = *param_1;
    }
    param_1[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 10a3ebe84; end: 10a3ebf4b;  */

void FUN_10a3ebe84(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar4 = param_2[2];
  fVar6 = param_2[3];
  fVar8 = fVar1 * fVar2 + fVar4 * fVar6;
  fVar9 = fVar1 * fVar4 - fVar2 * fVar6;
  fVar5 = fVar1 * fVar2 - fVar4 * fVar6;
  fVar7 = fVar2 * fVar4 + fVar1 * fVar6;
  fVar3 = fVar1 * fVar4 + fVar2 * fVar6;
  fVar6 = fVar2 * fVar4 - fVar1 * fVar6;
  *param_1 = (fVar2 * fVar2 + fVar4 * fVar4) * -2.0 + 1.0;
  param_1[1] = fVar8 + fVar8;
  param_1[2] = fVar9 + fVar9;
  param_1[3] = 0.0;
  param_1[4] = fVar5 + fVar5;
  param_1[5] = (fVar1 * fVar1 + fVar4 * fVar4) * -2.0 + 1.0;
  param_1[6] = fVar7 + fVar7;
  param_1[7] = 0.0;
  param_1[8] = fVar3 + fVar3;
  param_1[9] = fVar6 + fVar6;
  param_1[10] = (fVar1 * fVar1 + fVar2 * fVar2) * -2.0 + 1.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xc] = 0.0;
  param_1[0xf] = 1.0;
  return;
}



/* Entry: 10a3ebf4c; end: 10a3ebfbb;  */

void FUN_10a3ebf4c(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x18;
        FUN_10a3ebfbc();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a3ebfbc; end: 10a3ebfef;  */

long FUN_10a3ebfbc(long param_1)

{
  FUN_10a3ebff0();
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a3ebff0; end: 10a3ec0b7;  */

long * FUN_10a3ebff0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  if (((param_1[2] == 0) || (plVar4 = (long *)param_1[1], plVar4 == (long *)0x0)) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 == (long *)0x0)) {
    return (long *)0x0;
  }
  plVar5 = (long *)*param_1;
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x10))(plVar5,param_1[2]);
    param_1[2] = 0;
  }
  plVar1 = plVar4 + 1;
  do {
    lVar6 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 != 0) {
    return plVar5;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4);
  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  return plVar5;
}



/* Entry: 10a3ec0b8; end: 10a3ec10f;  */

long FUN_10a3ec0b8(long param_1)

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



/* Entry: 10a3ec110; end: 10a3ec223;  */

void FUN_10a3ec110(undefined8 *param_1,undefined2 *param_2,undefined2 *param_3,long param_4,
                  long param_5,undefined2 *param_6,undefined8 param_7)

{
  undefined2 *puVar1;
  long lVar2;
  bool bVar3;
  undefined1 uStack_61;
  
  if (param_4 != param_5) {
    bVar3 = false;
    do {
      puVar1 = param_2;
      FUN_10a3ec224(param_2,param_3,param_4,param_7,&uStack_61);
      lVar2 = param_4;
      if (puVar1 == param_2) {
        if (bVar3) {
          bVar3 = false;
          *param_6 = *puVar1;
          param_6 = param_6 + 1;
          param_2 = puVar1 + 1;
          lVar2 = param_4 + 2;
        }
        else {
          bVar3 = true;
          param_2 = puVar1;
        }
      }
      else {
        bVar3 = false;
        param_2 = puVar1;
      }
      if (param_2 == param_3) break;
      param_4 = lVar2;
      FUN_10a3ec224(lVar2,param_5,param_2,param_7,&uStack_61);
      if (param_4 == lVar2) {
        if (bVar3) {
          bVar3 = false;
          *param_6 = *param_2;
          param_4 = param_4 + 2;
          param_6 = param_6 + 1;
          param_2 = param_2 + 1;
        }
        else {
          bVar3 = true;
        }
      }
      else {
        bVar3 = false;
      }
    } while (param_4 != param_5);
  }
  *param_1 = param_3;
  param_1[1] = param_5;
  param_1[2] = param_6;
  return;
}



/* Entry: 10a3ec224; end: 10a3ec2eb;  */

ushort * FUN_10a3ec224(ushort *param_1,ushort *param_2,ushort *param_3)

{
  ushort *puVar1;
  ushort uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if ((param_1 == param_2) || (uVar2 = *param_3, uVar2 <= *param_1)) {
    return param_1;
  }
  uVar4 = (long)param_2 - (long)param_1 >> 1;
  if (-1 < (long)uVar4) {
    uVar6 = 1;
    do {
      uVar5 = uVar4;
      if ((long)uVar4 <= (long)uVar6) {
        uVar5 = uVar6;
      }
      if ((long)uVar6 <= (long)uVar4) {
        uVar4 = uVar6;
      }
      if (-1 < (long)uVar6) {
        uVar5 = uVar4;
      }
      puVar1 = param_1 + uVar5;
      if ((puVar1 == param_2) || (uVar2 <= *puVar1)) {
        if (uVar5 == 0) {
          return param_1;
        }
        if (uVar5 == 1) {
          return puVar1;
        }
        do {
          uVar4 = uVar5 >> 1;
          puVar1 = param_1 + uVar4 + 1;
          uVar5 = uVar5 + (uVar5 >> 1 ^ 0xffffffffffffffff);
          if (uVar2 <= param_1[uVar4]) {
            puVar1 = param_1;
            uVar5 = uVar4;
          }
          param_1 = puVar1;
        } while (uVar5 != 0);
        return puVar1;
      }
      uVar7 = uVar6 << 1;
      uVar4 = (long)param_2 - (long)puVar1 >> 1;
      uVar5 = uVar6 << 1;
      param_1 = puVar1;
      uVar6 = uVar7;
    } while ((uVar7 == 0) || (-1 < (long)(uVar4 ^ uVar5)));
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a3ec2a4);
  (*pcVar3)();
}



/* Entry: 10a3ec2ec; end: 10a3ec397;  */

long FUN_10a3ec2ec(ushort *param_1,ushort *param_2,ushort *param_3,ushort *param_4,ushort *param_5)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  ushort *puVar6;
  long lVar7;
  
  if (param_1 != param_2) {
    lVar7 = (long)param_5 + (long)param_2;
    puVar6 = param_5;
    do {
      if (param_3 == param_4) {
        _memmove(puVar6,param_1,(long)param_2 - (long)param_1);
        return lVar7 - (long)param_1;
      }
      uVar3 = *param_3;
      uVar4 = *param_1;
      lVar1 = 0;
      if (uVar3 <= uVar4) {
        lVar1 = 2;
      }
      bVar5 = uVar4 <= uVar3;
      if (bVar5) {
        uVar3 = uVar4;
      }
      lVar2 = 2;
      if (bVar5) {
        lVar2 = lVar1;
      }
      param_3 = (ushort *)((long)param_3 + lVar2);
      lVar1 = 0;
      if (bVar5) {
        lVar1 = 2;
      }
      param_1 = (ushort *)((long)param_1 + lVar1);
      param_5 = puVar6 + 1;
      *puVar6 = uVar3;
      lVar7 = lVar7 + 2;
      puVar6 = param_5;
    } while (param_1 != param_2);
  }
  lVar7 = (long)param_4 - (long)param_3;
  if (lVar7 != 0) {
    _memmove(param_5,param_3,lVar7);
  }
  return (long)param_5 + lVar7;
}



/* Entry: 10a3ec398; end: 10a3ec3fb;  */

undefined8 * FUN_10a3ec398(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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



/* Entry: 10a3ec3fc; end: 10a3ec40b;  */

void FUN_10a3ec3fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bd3040;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a3ec40c; end: 10a3ec42b;  */

void FUN_10a3ec40c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bd3040;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3ec42c; end: 10a3ec437;  */

long FUN_10a3ec42c(long param_1)

{
  func_0x000107c28090(param_1 + 0x20);
  func_0x0001098d20bc(param_1 + 0x18);
  return param_1 + 0x18;
}



/* Entry: 10a3ec438; end: 10a3ec497;  */

undefined4 * FUN_10a3ec438(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  FUN_10a3ec498(param_1 + 2,0x40);
  return param_1;
}



/* Entry: 10a3ec498; end: 10a3ec523;  */

void FUN_10a3ec498(long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *param_1;
  if (param_2 <= (ulong)(param_1[2] - lVar2 >> 3)) {
    return;
  }
  if (param_2 >> 0x3d == 0) {
    lVar3 = param_1[1];
    plVar1 = param_1;
    FUN_10a3ec538();
    lVar2 = (long)plVar1 + (lVar3 - lVar2);
    lVar4 = lVar2 - (param_1[1] - *param_1);
    _memcpy(lVar4);
    lVar3 = *param_1;
    *param_1 = lVar4;
    param_1[1] = lVar2;
    param_1[2] = (long)(plVar1 + param_2);
    if (lVar3 == 0) {
      return;
    }
  }
  else {
    FUN_10a3ec524();
    FUN_109ffde64(&UNK_10f655b2b);
    if (param_2 >> 0x3d == 0) {
      __Znwm(param_2 << 3);
      return;
    }
    func_0x000109ffded8();
    func_0x000105277f8c(param_2);
    func_0x000105277f8c();
    lVar2 = *param_5;
    if (lVar2 == 0) {
      return;
    }
    lVar4 = param_5[1];
    lVar3 = lVar2;
    if (lVar4 != lVar2) {
      do {
        func_0x000107c2826c(lVar4 + -0x28);
        if (*(long *)(lVar4 + -0x30) != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        lVar4 = lVar4 + -0x38;
      } while (lVar4 != lVar2);
      lVar3 = *param_5;
    }
    param_5[1] = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar3);
  return;
}



/* Entry: 10a3ec524; end: 10a3ec537;  */

void FUN_10a3ec524(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  FUN_109ffde64(&UNK_10f655b2b);
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000109ffded8();
  func_0x000105277f8c(param_2);
  func_0x000105277f8c();
  lVar2 = *param_5;
  if (lVar2 != 0) {
    lVar3 = param_5[1];
    lVar1 = lVar2;
    if (lVar3 != lVar2) {
      do {
        func_0x000107c2826c(lVar3 + -0x28);
        if (*(long *)(lVar3 + -0x30) != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        lVar3 = lVar3 + -0x38;
      } while (lVar3 != lVar2);
      lVar1 = *param_5;
    }
    param_5[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a3ec538; end: 10a3ec56b;  */

void FUN_10a3ec538(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000109ffded8();
  func_0x000105277f8c(param_2);
  func_0x000105277f8c();
  lVar2 = *param_5;
  if (lVar2 != 0) {
    lVar3 = param_5[1];
    lVar1 = lVar2;
    if (lVar3 != lVar2) {
      do {
        func_0x000107c2826c(lVar3 + -0x28);
        if (*(long *)(lVar3 + -0x30) != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        lVar3 = lVar3 + -0x38;
      } while (lVar3 != lVar2);
      lVar1 = *param_5;
    }
    param_5[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a3ec56c; end: 10a3ec58b;  */

void FUN_10a3ec56c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x000105277f8c(param_2);
  func_0x000105277f8c();
  lVar2 = *param_5;
  if (lVar2 != 0) {
    lVar3 = param_5[1];
    lVar1 = lVar2;
    if (lVar3 != lVar2) {
      do {
        func_0x000107c2826c(lVar3 + -0x28);
        if (*(long *)(lVar3 + -0x30) != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        lVar3 = lVar3 + -0x38;
      } while (lVar3 != lVar2);
      lVar1 = *param_5;
    }
    param_5[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a3ec58c; end: 10a3ec5ff;  */

void FUN_10a3ec58c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    lVar1 = lVar2;
    if (lVar3 != lVar2) {
      do {
        func_0x000107c2826c(lVar3 + -0x28);
        if (*(long *)(lVar3 + -0x30) != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        lVar3 = lVar3 + -0x38;
      } while (lVar3 != lVar2);
      lVar1 = *param_1;
    }
    param_1[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a3ec600; end: 10a3ec713;  */

void FUN_10a3ec600(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  FUN_10a3ec600(*param_1);
  FUN_10a3ec600(param_1[1]);
  puVar1 = (undefined8 *)param_1[5];
  while (puVar1 != param_1 + 5) {
    puVar2 = (undefined8 *)*puVar1;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a3ec714; end: 10a3ec857;  */

void FUN_10a3ec714(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1[2] != 0) {
    plVar1 = (long *)param_1[1];
    plVar2 = *(long **)(*param_1 + 8);
    lVar3 = *plVar1;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    param_1[2] = 0;
    while (plVar1 != param_1) {
      plVar2 = (long *)plVar1[1];
      FUN_10a0d4f28(plVar1 + 2);
      __ZdlPv(plVar1);
      plVar1 = plVar2;
    }
  }
  return;
}



/* Entry: 10a3ec858; end: 10a3ec883;  */

void FUN_10a3ec858(void)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)0x1138363e8;
  FUN_10a08fec0();
  if ((*pbVar1 >> 1 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe7d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glFinish_11034b588)();
  return;
}



/* Entry: 10a3ec884; end: 10a3ec8a7;  */

void FUN_10a3ec884(void)

{
  return;
}



/* Entry: 10a3ec8a8; end: 10a3ecfcb;  */

void FUN_10a3ec8a8(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  ppuVar5 = &puStack_40;
  lVar7 = *(long *)(param_1 + 0x10);
  plVar8 = *(long **)(lVar7 + 0xcf0);
  *(undefined8 *)(lVar7 + 0xcf0) = 0;
  *(undefined8 *)(lVar7 + 0xce8) = 0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  FUN_10a3ecfcc(lVar7 + 0xcf8);
  plVar8 = *(long **)(lVar7 + 0xb50);
  *(undefined8 *)(lVar7 + 0xb50) = 0;
  *(undefined8 *)(lVar7 + 0xb48) = 0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = *(long **)(lVar7 + 0x948);
  *(undefined8 *)(lVar7 + 0x948) = 0;
  *(undefined8 *)(lVar7 + 0x940) = 0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = *(long **)(lVar7 + 0x958);
  *(undefined8 *)(lVar7 + 0x958) = 0;
  *(undefined8 *)(lVar7 + 0x950) = 0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = *(long **)(lVar7 + 0x890);
  *(undefined8 *)(lVar7 + 0x888) = 0;
  *(undefined8 *)(lVar7 + 0x890) = 0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = *(long **)(lVar7 + 0x8b0);
  *(undefined8 *)(lVar7 + 0x8a8) = 0;
  *(undefined8 *)(lVar7 + 0x8b0) = 0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = *(long **)(lVar7 + 0x8b8);
  *(undefined8 *)(lVar7 + 0x8b8) = 0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = *(long **)(lVar7 + 0x8f0);
  *(undefined8 *)(lVar7 + 0x8e8) = 0;
  *(undefined8 *)(lVar7 + 0x8f0) = 0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  FUN_10a3ed028(lVar7 + 0x8f8,0);
  plVar8 = *(long **)(lVar7 + 0x938);
  *(undefined8 *)(lVar7 + 0x938) = 0;
  *(undefined8 *)(lVar7 + 0x930) = 0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = *(long **)(lVar7 + 0x9b8);
  *(undefined8 *)(lVar7 + 0x9b8) = 0;
  *(undefined8 *)(lVar7 + 0x9b0) = 0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = *(long **)(lVar7 + 0xb78);
  *(undefined8 *)(lVar7 + 0xb78) = 0;
  *(undefined8 *)(lVar7 + 0xb70) = 0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = *(long **)(lVar7 + 0xb88);
  *(undefined8 *)(lVar7 + 0xb88) = 0;
  *(undefined8 *)(lVar7 + 0xb80) = 0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = *(long **)(lVar7 + 0xb30);
  *(undefined8 *)(lVar7 + 0xb30) = 0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  if ((*(byte *)(lVar7 + 0xd1c) & 1) != 0) {
    lVar6 = *(long *)(*(long *)(lVar7 + 0x100) + 0x260);
    puStack_40 = &UNK_10f653c20;
    uStack_38 = 0x21;
    if (lVar6 == 0) goto LAB_10a3ecfc4;
    if (*(long *)(lVar6 + 0x1c8) != 0) {
      FUN_10a01961c();
    }
  }
  lVar6 = 0x30;
  do {
    plVar8 = *(long **)(lVar7 + lVar6);
    *(undefined8 *)(lVar7 + lVar6) = 0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    lVar6 = lVar6 + 8;
  } while (lVar6 != 0x60);
  plVar8 = *(long **)(lVar7 + 0xac8);
  *(undefined8 *)(lVar7 + 0xac8) = 0;
  *(undefined8 *)(lVar7 + 0xac0) = 0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = *(long **)(lVar7 + 0xa88);
  *(undefined8 *)(lVar7 + 0xa88) = 0;
  *(undefined8 *)(lVar7 + 0xa80) = 0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = *(long **)(lVar7 + 0x908);
  *(undefined8 *)(lVar7 + 0x908) = 0;
  *(undefined8 *)(lVar7 + 0x900) = 0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = *(long **)(lVar7 + 0xa48);
  *(undefined8 *)(lVar7 + 0xa48) = 0;
  *(undefined8 *)(lVar7 + 0xa40) = 0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = *(long **)(lVar7 + 0xa58);
  *(undefined8 *)(lVar7 + 0xa58) = 0;
  *(undefined8 *)(lVar7 + 0xa50) = 0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = *(long **)(lVar7 + 0xaa8);
  *(undefined8 *)(lVar7 + 0xaa8) = 0;
  *(undefined8 *)(lVar7 + 0xaa0) = 0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = *(long **)(lVar7 + 0x9e8);
  *(undefined8 *)(lVar7 + 0x9e8) = 0;
  *(undefined8 *)(lVar7 + 0x9e0) = 0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = *(long **)(lVar7 + 0xab8);
  *(undefined8 *)(lVar7 + 0xab8) = 0;
  *(undefined8 *)(lVar7 + 0xab0) = 0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = *(long **)(lVar7 + 0x918);
  *(undefined8 *)(lVar7 + 0x918) = 0;
  *(undefined8 *)(lVar7 + 0x910) = 0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = *(long **)(lVar7 + 0x870);
  *(undefined8 *)(lVar7 + 0x870) = 0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  FUN_10a3ed050(lVar7 + 0xa38,0);
  plVar8 = *(long **)(lVar7 + 0xa98);
  *(undefined8 *)(lVar7 + 0xa98) = 0;
  *(undefined8 *)(lVar7 + 0xa90) = 0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  func_0x00010a3ed08c(lVar7 + 0x850,0);
  plVar8 = *(long **)(lVar7 + 0x8c0);
  *(undefined8 *)(lVar7 + 0x8c0) = 0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  lVar6 = *(long *)(*(long *)(lVar7 + 0x100) + 0x260);
  puStack_40 = &UNK_10f653c20;
  uStack_38 = 0x21;
  if (lVar6 != 0) {
    FUN_10abaa1b0(*(undefined8 *)(lVar6 + 0x1f0),lVar7);
    func_0x00010a3ed0c8(lVar7 + 0xbc8,0);
    plVar8 = *(long **)(lVar7 + 0x860);
    *(undefined8 *)(lVar7 + 0x858) = 0;
    *(undefined8 *)(lVar7 + 0x860) = 0;
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    func_0x00010a3ed14c(lVar7 + 0xd40,0);
    plVar8 = *(long **)(lVar7 + 0x9a8);
    *(undefined8 *)(lVar7 + 0x9a8) = 0;
    *(undefined8 *)(lVar7 + 0x9a0) = 0;
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0x100) + 0x260);
    puStack_40 = &UNK_10f653c20;
    uStack_38 = 0x21;
    if (lVar7 != 0) {
      lVar7 = *(long *)(lVar7 + 0x1e0);
      __ZNSt3__15mutex4lockEv(lVar7 + 0x20);
      uVar2 = *(undefined4 *)(lVar7 + 0x60);
      *(undefined4 *)(lVar7 + 0x60) = 2;
      FUN_10a049858(lVar7 + 0x18);
      *(undefined4 *)(lVar7 + 0x60) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar7 + 0x20);
      return;
    }
  }
LAB_10a3ecfc4:
  uStack_38 = 0x21;
  puStack_40 = &UNK_10f653c20;
  FUN_10a0edfc4();
  plVar8 = (long *)ppuVar5[1];
  *ppuVar5 = (undefined *)0x0;
  ppuVar5[1] = (undefined *)0x0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar8);
      return;
    }
  }
  return;
}



/* Entry: 10a3ecfcc; end: 10a3ed027;  */

void FUN_10a3ecfcc(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 10a3ed028; end: 10a3ed04f;  */

void FUN_10a3ed028(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10ad72648();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a3ed050; end: 10a3ed263;  */

void FUN_10a3ed050(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x00010a3ed190(*(undefined8 *)(lVar1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a3ed264; end: 10a3ed297;  */

void FUN_10a3ed264(void)

{
  return;
}



/* Entry: 10a3ed298; end: 10a3ed353;  */

void FUN_10a3ed298(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar6 + 0x980) != 0) {
    FUN_10a878930();
    plVar5 = *(long **)(lVar6 + 0x988);
    *(undefined8 *)(lVar6 + 0x988) = 0;
    *(undefined8 *)(lVar6 + 0x980) = 0;
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
  }
  if (*(long *)(lVar6 + 0x990) != 0) {
    FUN_10a59d7a4();
    plVar5 = *(long **)(lVar6 + 0x998);
    *(undefined8 *)(lVar6 + 0x998) = 0;
    *(undefined8 *)(lVar6 + 0x990) = 0;
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a3ed354; end: 10a3ed387;  */

void FUN_10a3ed354(void)

{
  return;
}



/* Entry: 10a3ed388; end: 10a3ed52b;  */

void FUN_10a3ed388(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x10);
  plVar5 = *(long **)(lVar6 + 0xa78);
  *(undefined8 *)(lVar6 + 0xa78) = 0;
  *(undefined8 *)(lVar6 + 0xa70) = 0;
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
  plVar5 = *(long **)(lVar6 + 0x968);
  *(undefined8 *)(lVar6 + 0x968) = 0;
  *(undefined8 *)(lVar6 + 0x960) = 0;
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
  plVar5 = *(long **)(lVar6 + 0x978);
  *(undefined8 *)(lVar6 + 0x978) = 0;
  *(undefined8 *)(lVar6 + 0x970) = 0;
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
  plVar5 = *(long **)(lVar6 + 0xa68);
  *(undefined8 *)(lVar6 + 0xa68) = 0;
  *(undefined8 *)(lVar6 + 0xa60) = 0;
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
  plVar5 = *(long **)(lVar6 + 0x9c8);
  *(undefined8 *)(lVar6 + 0x9c8) = 0;
  *(undefined8 *)(lVar6 + 0x9c0) = 0;
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
  plVar5 = *(long **)(lVar6 + 0x9d8);
  *(undefined8 *)(lVar6 + 0x9d8) = 0;
  *(undefined8 *)(lVar6 + 0x9d0) = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 10a3ed52c; end: 10a3ed55f;  */

void FUN_10a3ed52c(void)

{
  return;
}



/* Entry: 10a3ed560; end: 10a3ed687;  */

void FUN_10a3ed560(long param_1)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined ***pppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = *(undefined **)(param_1 + 0x10);
  ppuVar1 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  puVar5 = *ppuVar1;
  if (puVar5 == puVar4) {
    uStack_40 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    puStack_68 = (undefined8 *)0x0;
    ppuStack_70 = &PTR_DAT_110ae9180;
    pcStack_78 = (code *)&UNK_1053a6a3c;
  }
  else {
    puVar2 = (undefined8 *)0x8;
    __Znwm();
    *puVar2 = puVar5;
    *ppuVar1 = puVar4;
    ppuStack_70 = &PTR_FUN_110bd2ad0;
    pcStack_78 = FUN_10a3fa23c;
    puStack_68 = puVar2;
  }
  while (*(long *)(puVar4 + 0x4c0) != 0) {
    FUN_10a3e00f4(*(undefined8 *)(*(long *)(puVar4 + 0x4b8) + 0x10));
  }
  FUN_10a3c87d8(puVar4 + 0x4f8);
  FUN_10a044790(&pcStack_78);
  pppuVar3 = &ppuStack_70;
  (*(code *)*ppuStack_70)(pppuVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    FUN_10a044790(&pcStack_78);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    __Unwind_Resume(pppuVar3);
    return;
  }
  return;
}



/* Entry: 10a3ed688; end: 10a3ed6bb;  */

void FUN_10a3ed688(void)

{
  return;
}



/* Entry: 10a3ed6bc; end: 10a3ed8bf;  */

void FUN_10a3ed6bc(long param_1)

{
  undefined8 *puVar1;
  undefined ***pppuVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code **unaff_x21;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 **ppuStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)(param_1 + 0x10);
  pppuVar2 = (undefined ***)(lVar8 + 0xc58);
  ppuVar5 = (undefined **)0x0;
  FUN_10a3ed8c0();
  lVar7 = *(long *)(lVar8 + 0x858);
  if (lVar7 != 0) {
    lVar6 = *(long *)(lVar8 + 0xc50);
    if (lVar6 != 0) {
      ppuVar5 = *(undefined ***)(lVar6 + 0x130);
      FUN_10a7a441c(lVar6 + 0x130);
      lVar7 = *(long *)(lVar8 + 0x858);
    }
    puVar9 = *(undefined **)(lVar7 + 0x10);
    ppuVar4 = &PTR___tlv_bootstrap_11340df48;
    (*(code *)PTR___tlv_bootstrap_11340df48)();
    puVar10 = *ppuVar4;
    if (puVar10 == puVar9) {
      uStack_40 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      puStack_68 = (undefined8 *)0x0;
      ppuStack_70 = &PTR_DAT_110ae9180;
      pcStack_78 = (code *)&UNK_1053a6a3c;
    }
    else {
      puVar3 = (undefined8 *)0x8;
      __Znwm();
      *puVar3 = puVar10;
      *ppuVar4 = puVar9;
      ppuStack_70 = &PTR_FUN_110bd2ad0;
      pcStack_78 = FUN_10a3fa23c;
      puStack_68 = puVar3;
    }
    if (*(long *)(puVar9 + 0xbd0) != 0) {
      *(undefined1 *)(*(long *)(puVar9 + 0xbd0) + 0x123) = 1;
    }
    unaff_x21 = &pcStack_78;
    FUN_10a3c059c(lVar7);
    FUN_10a3c3568(&puStack_98,lVar7);
    puVar1 = puStack_90;
    for (puVar3 = puStack_98; puVar3 != puVar1; puVar3 = puVar3 + 2) {
      (**(code **)(*(long *)*puVar3 + 0x68))();
    }
    while (puStack_90 != puStack_98) {
      puStack_90 = puStack_90 + -2;
      func_0x00010a0536d4(puStack_90);
    }
    if (*(long *)(lVar7 + 0x148) != 0) {
      func_0x00010a3f2428(*(undefined8 *)(lVar7 + 0x140));
      *(undefined8 *)(lVar7 + 0x140) = 0;
      lVar8 = *(long *)(lVar7 + 0x138);
      if (lVar8 != 0) {
        lVar6 = 0;
        do {
          *(undefined8 *)(*(long *)(lVar7 + 0x130) + lVar6 * 8) = 0;
          lVar6 = lVar6 + 1;
        } while (lVar8 != lVar6);
      }
      *(undefined8 *)(lVar7 + 0x148) = 0;
    }
    ppuStack_80 = &puStack_98;
    FUN_10a34cfd0(&ppuStack_80);
    FUN_10a044790(&pcStack_78);
    pppuVar2 = &ppuStack_70;
    (*(code *)*ppuStack_70)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a044790(&pcStack_78);
  (*(code *)*ppuStack_70)(unaff_x21 + 1);
  __Unwind_Resume();
  ppuVar4 = *pppuVar2;
  *pppuVar2 = ppuVar5;
  if (ppuVar4 != (undefined **)0x0) {
    FUN_10a90a208();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a3ed8c0; end: 10a3ed8e7;  */

void FUN_10a3ed8c0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10a90a208();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a3ed8e8; end: 10a3ed91b;  */

void FUN_10a3ed8e8(void)

{
  return;
}



/* Entry: 10a3ed91c; end: 10a3eda0b;  */

void FUN_10a3ed91c(long param_1)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = *(undefined **)(param_1 + 0x10);
  lVar3 = *(long *)(puVar4 + 0x868);
  if (lVar3 != 0) {
    ppuVar1 = &PTR___tlv_bootstrap_11340df48;
    (*(code *)PTR___tlv_bootstrap_11340df48)();
    puVar5 = *ppuVar1;
    if (puVar5 == puVar4) {
      uStack_40 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      puStack_68 = (undefined8 *)0x0;
      ppuStack_70 = &PTR_DAT_110ae9180;
      pcStack_78 = (code *)&UNK_1053a6a3c;
    }
    else {
      puVar2 = (undefined8 *)0x8;
      __Znwm();
      *puVar2 = puVar5;
      *ppuVar1 = puVar4;
      ppuStack_70 = &PTR_FUN_110bd2ad0;
      pcStack_78 = FUN_10a3fa23c;
      puStack_68 = puVar2;
    }
    FUN_10a245154(lVar3);
    FUN_10a044790(&pcStack_78);
    (*(code *)*ppuStack_70)(&ppuStack_70);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 10a3eda0c; end: 10a3eda3f;  */

void FUN_10a3eda0c(void)

{
  return;
}



/* Entry: 10a3eda40; end: 10a3edae3;  */

void FUN_10a3eda40(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  lVar4 = *(long *)(param_1 + 0x10);
  FUN_10a02d8cc(lVar4 + 0xbd8);
  FUN_10a02d8cc(lVar4 + 0xbe8);
  FUN_10a02d8cc(lVar4 + 0xbf8);
  puVar5 = *(undefined8 **)(lVar4 + 0xc30);
  puVar1 = (undefined8 *)(lVar4 + 0xc38);
  while (puVar5 != puVar1) {
    FUN_10a02d8cc(puVar5 + 6);
    puVar2 = (undefined8 *)puVar5[1];
    puVar6 = puVar5;
    if ((undefined8 *)puVar5[1] == (undefined8 *)0x0) {
      do {
        puVar5 = (undefined8 *)puVar6[2];
        bVar3 = (undefined8 *)*puVar5 != puVar6;
        puVar6 = puVar5;
      } while (bVar3);
    }
    else {
      do {
        puVar5 = puVar2;
        puVar2 = (undefined8 *)*puVar5;
      } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
    }
  }
  FUN_10a3f7714(lVar4 + 0xc30,*(undefined8 *)(lVar4 + 0xc38));
  *(undefined8 **)(lVar4 + 0xc30) = puVar1;
  *(undefined8 *)(lVar4 + 0xc40) = 0;
  *puVar1 = 0;
  return;
}



/* Entry: 10a3edae4; end: 10a3edb17;  */

void FUN_10a3edae4(void)

{
  return;
}



/* Entry: 10a3edb18; end: 10a3edc1f;  */

void FUN_10a3edb18(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plStack_58;
  long *plStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lStack_48 = 0;
  lStack_40 = 0;
  uStack_38 = 0;
  lVar5 = *(long *)(param_1 + 0x10) + 0xd48;
  FUN_10a5aeb74(lVar5,&PTR_DAT_110c5e408);
  lVar8 = *(long *)(lVar5 + 8);
  if (lVar8 == lVar5) {
    lVar7 = 0;
  }
  else {
    do {
      lVar7 = *(long *)(lVar8 + 0x28);
      FUN_10a069ac8(&lStack_48,lVar7 + 0x2b8);
      plStack_58 = (long *)0x0;
      plStack_50 = (long *)0x0;
      func_0x00010a04a704(lVar7 + 0x2b8,&plStack_58);
      plVar4 = plStack_50;
      if (plStack_50 != (long *)0x0) {
        plVar1 = plStack_50 + 1;
        do {
          lVar7 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_50 + 0x10))(plStack_50);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      lVar7 = lStack_48;
      lVar8 = *(long *)(lVar8 + 8);
      lVar6 = lStack_40;
    } while (lVar8 != lVar5);
    while (lVar6 != lVar7) {
      lVar6 = lVar6 + -0x10;
      func_0x00010a05248c();
    }
  }
  plStack_58 = &lStack_48;
  lStack_40 = lVar7;
  FUN_10a04a568(&plStack_58);
  return;
}



/* Entry: 10a3edc20; end: 10a3edc53;  */

void FUN_10a3edc20(void)

{
  return;
}



/* Entry: 10a3edc54; end: 10a3edd5b;  */

void FUN_10a3edc54(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plStack_58;
  long *plStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lStack_48 = 0;
  lStack_40 = 0;
  uStack_38 = 0;
  lVar5 = *(long *)(param_1 + 0x10) + 0xd48;
  FUN_10a5aeb74(lVar5,&PTR_DAT_110bb2dc8);
  lVar8 = *(long *)(lVar5 + 8);
  if (lVar8 == lVar5) {
    lVar7 = 0;
  }
  else {
    do {
      lVar7 = *(long *)(lVar8 + 0x28);
      FUN_10a069ac8(&lStack_48,lVar7 + 0x368);
      plStack_58 = (long *)0x0;
      plStack_50 = (long *)0x0;
      func_0x00010a04a704(lVar7 + 0x368,&plStack_58);
      plVar4 = plStack_50;
      if (plStack_50 != (long *)0x0) {
        plVar1 = plStack_50 + 1;
        do {
          lVar7 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_50 + 0x10))(plStack_50);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      lVar7 = lStack_48;
      lVar8 = *(long *)(lVar8 + 8);
      lVar6 = lStack_40;
    } while (lVar8 != lVar5);
    while (lVar6 != lVar7) {
      lVar6 = lVar6 + -0x10;
      func_0x00010a05248c();
    }
  }
  plStack_58 = &lStack_48;
  lStack_40 = lVar7;
  FUN_10a04a568(&plStack_58);
  return;
}



/* Entry: 10a3edd5c; end: 10a3edd8f;  */

void FUN_10a3edd5c(void)

{
  return;
}



/* Entry: 10a3edd90; end: 10a3ee027;  */

void FUN_10a3edd90(long param_1)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = *(undefined **)(param_1 + 0x10);
  ppuVar2 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  puVar7 = *ppuVar2;
  if (puVar7 == puVar5) {
    uStack_50 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    puStack_78 = (undefined8 *)0x0;
    ppuStack_80 = &PTR_DAT_110ae9180;
    pcStack_88 = (code *)&UNK_1053a6a3c;
  }
  else {
    puVar3 = (undefined8 *)0x8;
    __Znwm();
    *puVar3 = puVar7;
    *ppuVar2 = puVar5;
    ppuStack_80 = &PTR_FUN_110bd2ad0;
    pcStack_88 = FUN_10a3fa23c;
    puStack_78 = puVar3;
  }
  FUN_10a3cf3d8(puVar5);
  puStack_98 = &UNK_10f654197;
  uStack_90 = 0x3d;
  if (*(int *)(puVar5 + 0x4a8) == 0) {
    lVar8 = *(long *)(puVar5 + 0x478);
    lVar6 = *(long *)(puVar5 + 0x480);
    puStack_98 = &UNK_10f6541d5;
    uStack_90 = 0x40;
    if (lVar8 == lVar6) {
      puStack_98 = &UNK_10f654216;
      uStack_90 = 0x40;
      if (*(long *)(puVar5 + 0x468) == 0) {
        plVar10 = *(long **)(puVar5 + 0x498);
        plVar4 = *(long **)(puVar5 + 0x490);
        if (*(long **)(puVar5 + 0x490) != plVar10) {
          do {
            plVar9 = plVar4 + 1;
            lVar6 = *plVar4;
            FUN_10a571454(lVar6 + 0x98,1);
            FUN_10a57120c(lVar6 + 0x98);
            FUN_10a3e1488(puVar5,lVar6);
            FUN_10a3e1568(lVar6);
            plVar4 = plVar9;
          } while (plVar9 != plVar10);
          lVar6 = *(long *)(puVar5 + 0x480);
          lVar8 = *(long *)(puVar5 + 0x478);
        }
        while (lVar6 != lVar8) {
          lVar6 = lVar6 + -8;
          FUN_10a3efb64(lVar6,0);
        }
        *(long *)(puVar5 + 0x480) = lVar8;
        if (*(long *)(puVar5 + 0x468) != 0) {
          plVar4 = *(long **)(puVar5 + 0x460);
          while (plVar4 != (long *)0x0) {
            plVar4 = (long *)*plVar4;
            __ZdlPv();
          }
          *(undefined8 *)(puVar5 + 0x460) = 0;
          lVar6 = *(long *)(puVar5 + 0x458);
          if (lVar6 != 0) {
            lVar8 = 0;
            do {
              *(undefined8 *)(*(long *)(puVar5 + 0x450) + lVar8 * 8) = 0;
              lVar8 = lVar8 + 1;
            } while (lVar6 != lVar8);
          }
          *(undefined8 *)(puVar5 + 0x468) = 0;
        }
        lVar6 = *(long *)(puVar5 + 0x498);
        lVar8 = *(long *)(puVar5 + 0x490);
        while (lVar6 != lVar8) {
          lVar6 = lVar6 + -8;
          FUN_10a3efb64(lVar6,0);
        }
        *(long *)(puVar5 + 0x498) = lVar8;
        FUN_10a044790(&pcStack_88);
        (*(code *)*ppuStack_80)(&ppuStack_80);
        plVar4 = *(long **)(puVar5 + 0x270);
        *(undefined8 *)(puVar5 + 0x270) = 0;
        if (plVar4 == (long *)0x0) {
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
            return;
          }
        }
        else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010a3edfbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 8))();
          return;
        }
        ___stack_chk_fail();
        FUN_10a044790(&pcStack_88);
        (*(code *)*ppuStack_80)(&ppuStack_80);
        __Unwind_Resume(plVar4);
        return;
      }
    }
  }
  FUN_10a0edfc4(&puStack_98);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a3edffc);
  (*pcVar1)();
}



/* Entry: 10a3ee028; end: 10a3ee05b;  */

void FUN_10a3ee028(void)

{
  return;
}



/* Entry: 10a3ee05c; end: 10a3ee14b;  */

undefined1  [16]
FUN_10a3ee05c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 *puStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  long lStack_58;
  
  ppuVar4 = &puStack_a0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined8 *)0x158;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_FUN_110b3f488;
  FUN_109d2079c(puVar2,param_4,param_5);
  puStack_98 = &UNK_109896774;
  ppuStack_90 = &PTR_DAT_110b17068;
  puStack_a0 = puVar2;
  puStack_88 = puVar2;
  puStack_80 = puVar1;
  func_0x000109d18e28(param_1);
  func_0x0001092ba41c(&puStack_a0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = param_1;
    return auVar7;
  }
  ___stack_chk_fail();
  if ((int)param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  puVar1 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 5) {
    uVar6 = param_2[1];
    uVar5 = *param_2;
    *param_2 = 0;
    param_2[1] = 0;
    lVar3 = (long)ppuVar4[1];
    ppuVar4[1] = (undefined8 *)uVar6;
    *ppuVar4 = (undefined8 *)uVar5;
    if (lVar3 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    uVar6 = param_2[3];
    uVar5 = param_2[2];
    ppuVar4[4] = (undefined8 *)param_2[4];
    ppuVar4[3] = (undefined8 *)uVar6;
    ppuVar4[2] = (undefined8 *)uVar5;
    ppuVar4 = ppuVar4 + 5;
    puVar1 = param_3;
  }
  auVar8._8_8_ = ppuVar4;
  auVar8._0_8_ = puVar1;
  return auVar8;
}



/* Entry: 10a3ee14c; end: 10a3ee1c3;  */

undefined1  [16]
FUN_10a3ee14c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  puVar1 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 5) {
    uVar4 = param_2[1];
    uVar3 = *param_2;
    *param_2 = 0;
    param_2[1] = 0;
    lVar2 = param_4[1];
    param_4[1] = uVar4;
    *param_4 = uVar3;
    if (lVar2 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    uVar4 = param_2[3];
    uVar3 = param_2[2];
    param_4[4] = param_2[4];
    param_4[3] = uVar4;
    param_4[2] = uVar3;
    param_4 = param_4 + 5;
    puVar1 = param_3;
  }
  auVar5._8_8_ = param_4;
  auVar5._0_8_ = puVar1;
  return auVar5;
}



/* Entry: 10a3ee1c4; end: 10a3ee1d7;  */

/* WARNING: Removing unreachable block (ram,0x00010a3ee284) */
/* WARNING: Removing unreachable block (ram,0x00010a3ee288) */
/* WARNING: Removing unreachable block (ram,0x00010a3ee290) */
/* WARNING: Removing unreachable block (ram,0x00010a3ee298) */
/* WARNING: Removing unreachable block (ram,0x00010a3ee29c) */

void FUN_10a3ee1c4(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *extraout_x8;
  long lVar5;
  long *plVar6;
  
  puVar4 = &UNK_10f655b2b;
  FUN_109ffde64();
  plVar6 = *(long **)(puVar4 + 0x18);
  if (*(long *)(puVar4 + 0x18) != 0) {
    plVar1 = (long *)(*(long *)(puVar4 + 0x18) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a0095ac();
  (*(code *)PTR___tlv_bootstrap_11340dde0)();
  FUN_10a3ee340();
  *extraout_x8 = FUN_10a3ee2e0;
  extraout_x8[1] = &PTR_FUN_110bd1688;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return;
}



/* Entry: 10a3ee1d8; end: 10a3ee2df;  */

/* WARNING: Removing unreachable block (ram,0x00010a3ee284) */
/* WARNING: Removing unreachable block (ram,0x00010a3ee288) */
/* WARNING: Removing unreachable block (ram,0x00010a3ee290) */
/* WARNING: Removing unreachable block (ram,0x00010a3ee298) */
/* WARNING: Removing unreachable block (ram,0x00010a3ee29c) */

void FUN_10a3ee1d8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x18) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x18) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a0095ac();
  (*(code *)PTR___tlv_bootstrap_11340dde0)();
  FUN_10a3ee340();
  *param_1 = FUN_10a3ee2e0;
  param_1[1] = &PTR_FUN_110bd1688;
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
  return;
}



/* Entry: 10a3ee2e0; end: 10a3ee32b;  */

void FUN_10a3ee2e0(void)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  FUN_10a0095ac();
  ppuVar2 = &PTR___tlv_bootstrap_11340dde0;
  (*(code *)PTR___tlv_bootstrap_11340dde0)();
  if (*ppuVar2 != ppuVar2[1]) {
    puVar3 = ppuVar2[1] + -0x10;
    FUN_10a009414();
    ppuVar2[1] = puVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a3ee32c);
  (*pcVar1)();
}



/* Entry: 10a3ee32c; end: 10a3ee33f;  */

void FUN_10a3ee32c(void)

{
  return;
}



/* Entry: 10a3ee340; end: 10a3ee423;  */

/* WARNING: Possible PIC construction at 0x00010a3ee404: Changing call to branch */

undefined1  [16] FUN_10a3ee340(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined1 **ppuVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 *puStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [8];
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  ppuVar3 = (undefined8 **)auStack_60;
  ppuVar10 = (undefined1 **)&stack0xfffffffffffffff0;
  puVar5 = (undefined8 *)param_1[1];
  if (puVar5 < (undefined8 *)param_1[2]) {
    uVar11 = *param_2;
    puVar5[1] = param_2[1];
    *puVar5 = uVar11;
    *param_2 = 0;
    param_2[1] = 0;
    param_1[1] = (long)(puVar5 + 2);
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = param_1;
    return auVar12;
  }
  lVar9 = (long)puVar5 - *param_1;
  uVar1 = (lVar9 >> 4) + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar6 = param_1[2] - *param_1;
    uVar8 = (long)uVar6 >> 3;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7fffffffffffffef < uVar6) {
      uVar8 = 0xfffffffffffffff;
    }
    plVar4 = param_1;
    plStack_38 = param_1;
    FUN_10a3ee438();
    puVar2 = (undefined8 *)((long)plVar4 + lVar9);
    uVar11 = *param_2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar11;
    *param_2 = 0;
    param_2[1] = 0;
    puVar5 = (undefined8 *)*param_1;
    param_2 = (undefined8 *)((long)puVar2 - (param_1[1] - (long)puVar5));
    _memcpy(param_2);
    lStack_48 = *param_1;
    *param_1 = (long)param_2;
    param_1[1] = (long)(puVar2 + 2);
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar4 + uVar8 * 2);
    lStack_58 = lStack_48;
    lStack_50 = lStack_48;
    plVar4 = &lStack_58;
    uVar11 = 0x10a3ee408;
  }
  else {
    puVar5 = param_2;
    FUN_10a3ee424();
    pcStack_68 = FUN_10a3ee424;
    plVar4 = (long *)&UNK_10f655b2b;
    ppuStack_70 = ppuVar10;
    FUN_109ffde64();
    ppuVar3 = &puStack_90;
    pcStack_78 = FUN_10a3ee438;
    ppuVar10 = &puStack_80;
    puStack_90 = param_2;
    plStack_88 = param_1;
    if ((ulong)puVar5 >> 0x3c == 0) {
      lVar9 = (long)puVar5 << 4;
      puStack_80 = (undefined1 *)&ppuStack_70;
      __Znwm(lVar9);
      auVar13._8_8_ = puVar5;
      auVar13._0_8_ = lVar9;
      return auVar13;
    }
    uVar11 = 0x10a3ee46c;
    puStack_80 = (undefined1 *)&ppuStack_70;
    func_0x000109ffded8();
  }
  *(undefined8 **)((long)ppuVar3 + -0x20) = param_2;
  *(long **)((long)ppuVar3 + -0x18) = param_1;
  *(undefined1 ***)((long)ppuVar3 + -0x10) = ppuVar10;
  *(undefined8 *)((long)ppuVar3 + -8) = uVar11;
  lVar9 = plVar4[1];
  lVar7 = plVar4[2];
  while (lVar7 != lVar9) {
    plVar4[2] = lVar7 + -0x10;
    FUN_10a009414();
    lVar7 = plVar4[2];
  }
  if (*plVar4 != 0) {
    __ZdlPv();
  }
  auVar14._8_8_ = puVar5;
  auVar14._0_8_ = plVar4;
  return auVar14;
}



/* Entry: 10a3ee424; end: 10a3ee437;  */

undefined1  [16] FUN_10a3ee424(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&UNK_10f655b2b;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    lVar2 = param_2 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    FUN_10a009414();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10a3ee438; end: 10a3ee4b7;  */

undefined1  [16] FUN_10a3ee438(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    FUN_10a009414();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10a3ee4b8; end: 10a3ee50f;  */

long FUN_10a3ee4b8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a3ee510; end: 10a3ee613;  */

void FUN_10a3ee510(undefined8 param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined **appuStack_150 [2];
  undefined1 auStack_140 [264];
  char cStack_38;
  
  func_0x000107c2b054(auStack_258,param_1);
  FUN_10a10bd84(appuStack_150,auStack_258);
  appuStack_150[0] = &PTR_FUN_110ba5648;
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  func_0x00010a0ec6dc(auStack_258,1);
  if (cStack_38 == '\x01') {
    _memcpy(auStack_140,auStack_258,0x104);
  }
  else {
    _memcpy(auStack_140,auStack_258,0x108);
    cStack_38 = '\x01';
  }
  puVar2 = (undefined8 *)0x120;
  ___cxa_allocate_exception();
  puVar3 = puVar2;
  __ZNSt13runtime_errorC2ERKS_();
  *puVar3 = &PTR_FUN_110b99e98;
  _memcpy(puVar3 + 2,auStack_140,0x110);
  *puVar2 = &PTR_FUN_110ba5648;
  ___cxa_throw(puVar2,&PTR_DAT_110ba5620,FUN_10a10bd80);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a3ee5e4);
  (*pcVar1)();
}



/* Entry: 10a3ee614; end: 10a3ee627;  */

void FUN_10a3ee614(undefined8 param_1,long *param_2,long param_3,ulong param_4)

{
  bool bVar1;
  ulong uVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  ulong uVar21;
  long *plVar22;
  
  plVar5 = (long *)&UNK_10f655b2b;
  FUN_109ffde64();
  if ((ulong)plVar5 >> 0x3d == 0) {
    __Znwm((long)plVar5 << 3);
    return;
  }
  func_0x000109ffded8();
LAB_10a3ee688:
  do {
    plVar22 = plVar5;
    uVar11 = (long)param_2 - (long)plVar22 >> 3;
    if (uVar11 - 2 == 0 || (long)uVar11 < 2) {
      if (uVar11 < 2) {
        return;
      }
      if (uVar11 == 2) {
        lVar9 = param_2[-1];
        lVar13 = *plVar22;
        bVar3 = *(long *)(lVar9 + 0x48) < *(long *)(lVar13 + 0x48);
        if (*(long *)(lVar9 + 0x40) != *(long *)(lVar13 + 0x40)) {
          bVar3 = *(long *)(lVar9 + 0x40) < *(long *)(lVar13 + 0x40);
        }
        if (!bVar3) {
          return;
        }
        *plVar22 = lVar9;
        param_2[-1] = lVar13;
        return;
      }
    }
    else {
      if (uVar11 == 3) {
        lVar9 = *plVar22;
        lVar14 = plVar22[1];
        lVar13 = *(long *)(lVar14 + 0x40);
        lVar19 = *(long *)(lVar9 + 0x40);
        lVar16 = *(long *)(lVar9 + 0x48);
        bVar3 = *(long *)(lVar14 + 0x48) < lVar16;
        if (lVar13 != lVar19) {
          bVar3 = lVar13 < lVar19;
        }
        lVar12 = param_2[-1];
        bVar1 = *(long *)(lVar12 + 0x48) < *(long *)(lVar14 + 0x48);
        if (*(long *)(lVar12 + 0x40) != lVar13) {
          bVar1 = *(long *)(lVar12 + 0x40) < lVar13;
        }
        if (bVar3) {
          if (bVar1) {
            *plVar22 = lVar12;
          }
          else {
            *plVar22 = lVar14;
            plVar22[1] = lVar9;
            lVar13 = param_2[-1];
            bVar3 = *(long *)(lVar13 + 0x48) < lVar16;
            if (*(long *)(lVar13 + 0x40) != lVar19) {
              bVar3 = *(long *)(lVar13 + 0x40) < lVar19;
            }
            if (!bVar3) {
              return;
            }
            plVar22[1] = lVar13;
          }
          param_2[-1] = lVar9;
          return;
        }
        if (!bVar1) {
          return;
        }
        plVar22[1] = lVar12;
        param_2[-1] = lVar14;
        lVar9 = *plVar22;
        lVar13 = plVar22[1];
        bVar3 = *(long *)(lVar13 + 0x48) < *(long *)(lVar9 + 0x48);
        if (*(long *)(lVar13 + 0x40) != *(long *)(lVar9 + 0x40)) {
          bVar3 = *(long *)(lVar13 + 0x40) < *(long *)(lVar9 + 0x40);
        }
        if (!bVar3) {
          return;
        }
        *plVar22 = lVar13;
        plVar22[1] = lVar9;
        return;
      }
      if (uVar11 == 4) {
        plVar5 = plVar22 + 1;
        plVar6 = plVar22 + 2;
        lVar14 = *plVar5;
        lVar16 = *plVar22;
        lVar9 = *(long *)(lVar14 + 0x40);
        lVar13 = *(long *)(lVar16 + 0x40);
        lVar19 = *(long *)(lVar16 + 0x48);
        bVar3 = *(long *)(lVar14 + 0x48) < lVar19;
        if (lVar9 != lVar13) {
          bVar3 = lVar9 < lVar13;
        }
        lVar12 = *plVar6;
        bVar1 = *(long *)(lVar12 + 0x48) < *(long *)(lVar14 + 0x48);
        if (*(long *)(lVar12 + 0x40) != lVar9) {
          bVar1 = *(long *)(lVar12 + 0x40) < lVar9;
        }
        if (bVar3) {
          if (bVar1) {
            *plVar22 = lVar12;
          }
          else {
            *plVar22 = lVar14;
            *plVar5 = lVar16;
            lVar12 = *plVar6;
            bVar3 = *(long *)(lVar12 + 0x48) < lVar19;
            if (*(long *)(lVar12 + 0x40) != lVar13) {
              bVar3 = *(long *)(lVar12 + 0x40) < lVar13;
            }
            if (!bVar3) goto LAB_10a3ef45c;
            *plVar5 = lVar12;
          }
          *plVar6 = lVar16;
          lVar12 = lVar16;
        }
        else if (bVar1) {
          *plVar5 = lVar12;
          *plVar6 = lVar14;
          lVar9 = *plVar5;
          lVar13 = *plVar22;
          bVar3 = *(long *)(lVar9 + 0x48) < *(long *)(lVar13 + 0x48);
          if (*(long *)(lVar9 + 0x40) != *(long *)(lVar13 + 0x40)) {
            bVar3 = *(long *)(lVar9 + 0x40) < *(long *)(lVar13 + 0x40);
          }
          lVar12 = lVar14;
          if (bVar3) {
            *plVar22 = lVar9;
            *plVar5 = lVar13;
            lVar12 = *plVar6;
          }
        }
LAB_10a3ef45c:
        lVar9 = param_2[-1];
        bVar3 = *(long *)(lVar9 + 0x48) < *(long *)(lVar12 + 0x48);
        if (*(long *)(lVar9 + 0x40) != *(long *)(lVar12 + 0x40)) {
          bVar3 = *(long *)(lVar9 + 0x40) < *(long *)(lVar12 + 0x40);
        }
        if (bVar3) {
          *plVar6 = lVar9;
          param_2[-1] = lVar12;
          lVar9 = *plVar6;
          lVar13 = *plVar5;
          bVar3 = *(long *)(lVar9 + 0x48) < *(long *)(lVar13 + 0x48);
          if (*(long *)(lVar9 + 0x40) != *(long *)(lVar13 + 0x40)) {
            bVar3 = *(long *)(lVar9 + 0x40) < *(long *)(lVar13 + 0x40);
          }
          if (bVar3) {
            *plVar5 = lVar9;
            *plVar6 = lVar13;
            lVar9 = *plVar5;
            lVar13 = *plVar22;
            bVar3 = *(long *)(lVar9 + 0x48) < *(long *)(lVar13 + 0x48);
            if (*(long *)(lVar9 + 0x40) != *(long *)(lVar13 + 0x40)) {
              bVar3 = *(long *)(lVar9 + 0x40) < *(long *)(lVar13 + 0x40);
            }
            if (bVar3) {
              *plVar22 = lVar9;
              *plVar5 = lVar13;
            }
          }
        }
        return;
      }
      if (uVar11 == 5) {
        FUN_10a3ef384(plVar22,plVar22 + 1,plVar22 + 2,plVar22 + 3);
        lVar9 = param_2[-1];
        lVar13 = plVar22[3];
        bVar3 = *(long *)(lVar9 + 0x48) < *(long *)(lVar13 + 0x48);
        if (*(long *)(lVar9 + 0x40) != *(long *)(lVar13 + 0x40)) {
          bVar3 = *(long *)(lVar9 + 0x40) < *(long *)(lVar13 + 0x40);
        }
        if (!bVar3) {
          return;
        }
        plVar22[3] = lVar9;
        param_2[-1] = lVar13;
        lVar9 = plVar22[2];
        lVar19 = plVar22[3];
        lVar13 = *(long *)(lVar19 + 0x40);
        lVar14 = *(long *)(lVar19 + 0x48);
        bVar3 = lVar14 < *(long *)(lVar9 + 0x48);
        if (lVar13 != *(long *)(lVar9 + 0x40)) {
          bVar3 = lVar13 < *(long *)(lVar9 + 0x40);
        }
        if (!bVar3) {
          return;
        }
        plVar22[2] = lVar19;
        plVar22[3] = lVar9;
        lVar9 = plVar22[1];
        bVar3 = lVar14 < *(long *)(lVar9 + 0x48);
        if (lVar13 != *(long *)(lVar9 + 0x40)) {
          bVar3 = lVar13 < *(long *)(lVar9 + 0x40);
        }
        if (!bVar3) {
          return;
        }
        plVar22[1] = lVar19;
        plVar22[2] = lVar9;
        lVar9 = *plVar22;
        bVar3 = lVar14 < *(long *)(lVar9 + 0x48);
        if (lVar13 != *(long *)(lVar9 + 0x40)) {
          bVar3 = lVar13 < *(long *)(lVar9 + 0x40);
        }
        if (!bVar3) {
          return;
        }
        *plVar22 = lVar19;
        plVar22[1] = lVar9;
        return;
      }
    }
    if ((long)uVar11 < 0x18) {
      plVar5 = plVar22 + 1;
      if ((param_4 & 1) == 0) {
        if (plVar22 == param_2 || plVar5 == param_2) {
          return;
        }
        lVar9 = 0;
        lVar13 = 8;
        do {
          lVar16 = *(long *)((long)plVar22 + lVar9);
          lVar14 = *plVar5;
          lVar9 = *(long *)(lVar14 + 0x40);
          lVar19 = *(long *)(lVar14 + 0x48);
          bVar3 = lVar19 < *(long *)(lVar16 + 0x48);
          if (lVar9 != *(long *)(lVar16 + 0x40)) {
            bVar3 = lVar9 < *(long *)(lVar16 + 0x40);
          }
          if (bVar3) {
            lVar12 = 0;
            do {
              *(long *)((long)plVar5 + lVar12) = lVar16;
              if (lVar13 + lVar12 == 0) goto LAB_10a3ef338;
              lVar16 = ((long *)((long)plVar5 + lVar12))[-2];
              bVar3 = lVar19 < *(long *)(lVar16 + 0x48);
              if (lVar9 != *(long *)(lVar16 + 0x40)) {
                bVar3 = lVar9 < *(long *)(lVar16 + 0x40);
              }
              lVar12 = lVar12 + -8;
            } while (bVar3);
            *(long *)((long)plVar5 + lVar12) = lVar14;
          }
          plVar5 = plVar5 + 1;
          lVar9 = lVar13;
          lVar13 = lVar13 + 8;
          if (plVar5 == param_2) {
            return;
          }
        } while( true );
      }
      if (plVar22 == param_2 || plVar5 == param_2) {
        return;
      }
      lVar9 = 8;
      plVar6 = plVar22;
      do {
        plVar7 = plVar5;
        lVar16 = *plVar6;
        lVar14 = *plVar7;
        lVar13 = *(long *)(lVar14 + 0x40);
        lVar19 = *(long *)(lVar14 + 0x48);
        bVar3 = lVar19 < *(long *)(lVar16 + 0x48);
        if (lVar13 != *(long *)(lVar16 + 0x40)) {
          bVar3 = lVar13 < *(long *)(lVar16 + 0x40);
        }
        lVar12 = lVar9;
        if (bVar3) {
          do {
            *(long *)((long)plVar22 + lVar12) = lVar16;
            lVar17 = lVar12 + -8;
            plVar5 = plVar22;
            if (lVar17 == 0) goto LAB_10a3eeff0;
            lVar16 = *(long *)((long)plVar22 + lVar12 + -0x10);
            bVar3 = lVar19 < *(long *)(lVar16 + 0x48);
            if (lVar13 != *(long *)(lVar16 + 0x40)) {
              bVar3 = lVar13 < *(long *)(lVar16 + 0x40);
            }
            lVar12 = lVar17;
          } while (bVar3);
          plVar5 = (long *)((long)plVar22 + lVar17);
LAB_10a3eeff0:
          *plVar5 = lVar14;
        }
        lVar9 = lVar9 + 8;
        plVar5 = plVar7 + 1;
        plVar6 = plVar7;
        if (plVar7 + 1 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (plVar22 == param_2) {
        return;
      }
      uVar10 = uVar11 - 2 >> 1;
      uVar15 = uVar10;
      do {
        if ((long)uVar15 <= (long)uVar10) {
          uVar21 = uVar15 << 1 | 1;
          plVar5 = plVar22 + uVar21;
          uVar2 = uVar15 * 2 + 2;
          lVar13 = *plVar5;
          plVar6 = plVar5;
          lVar9 = lVar13;
          uVar8 = uVar21;
          if ((long)uVar2 < (long)uVar11) {
            lVar9 = plVar5[1];
            bVar3 = *(long *)(lVar13 + 0x48) < *(long *)(lVar9 + 0x48);
            if (*(long *)(lVar13 + 0x40) != *(long *)(lVar9 + 0x40)) {
              bVar3 = *(long *)(lVar13 + 0x40) < *(long *)(lVar9 + 0x40);
            }
            plVar6 = plVar5 + 1;
            uVar8 = uVar2;
            if (!bVar3) {
              plVar6 = plVar5;
              lVar9 = lVar13;
              uVar8 = uVar21;
            }
          }
          lVar14 = plVar22[uVar15];
          lVar13 = *(long *)(lVar14 + 0x40);
          lVar19 = *(long *)(lVar14 + 0x48);
          bVar3 = *(long *)(lVar9 + 0x48) < lVar19;
          if (*(long *)(lVar9 + 0x40) != lVar13) {
            bVar3 = *(long *)(lVar9 + 0x40) < lVar13;
          }
          plVar5 = plVar22 + uVar15;
          if (!bVar3) {
            do {
              plVar7 = plVar6;
              *plVar5 = lVar9;
              if ((long)uVar10 < (long)uVar8) break;
              uVar21 = uVar8 << 1 | 1;
              plVar5 = plVar22 + uVar21;
              uVar2 = uVar8 * 2 + 2;
              lVar16 = *plVar5;
              uVar8 = uVar21;
              plVar6 = plVar5;
              lVar9 = lVar16;
              if ((long)uVar2 < (long)uVar11) {
                lVar9 = plVar5[1];
                bVar3 = *(long *)(lVar16 + 0x48) < *(long *)(lVar9 + 0x48);
                if (*(long *)(lVar16 + 0x40) != *(long *)(lVar9 + 0x40)) {
                  bVar3 = *(long *)(lVar16 + 0x40) < *(long *)(lVar9 + 0x40);
                }
                uVar8 = uVar2;
                plVar6 = plVar5 + 1;
                if (!bVar3) {
                  uVar8 = uVar21;
                  plVar6 = plVar5;
                  lVar9 = lVar16;
                }
              }
              bVar3 = *(long *)(lVar9 + 0x48) < lVar19;
              if (*(long *)(lVar9 + 0x40) != lVar13) {
                bVar3 = *(long *)(lVar9 + 0x40) < lVar13;
              }
              plVar5 = plVar7;
            } while (!bVar3);
            *plVar7 = lVar14;
          }
        }
        bVar3 = uVar15 != 0;
        uVar15 = uVar15 - 1;
      } while (bVar3);
      do {
        lVar9 = *plVar22;
        plVar5 = plVar22;
        uVar15 = 0;
        do {
          plVar7 = plVar5 + uVar15 + 1;
          lVar19 = *plVar7;
          uVar2 = uVar15 << 1 | 1;
          uVar10 = uVar15 * 2 + 2;
          plVar6 = plVar7;
          lVar13 = lVar19;
          uVar21 = uVar2;
          if ((long)uVar10 < (long)uVar11) {
            lVar13 = plVar5[uVar15 + 2];
            bVar3 = *(long *)(lVar19 + 0x48) < *(long *)(lVar13 + 0x48);
            if (*(long *)(lVar19 + 0x40) != *(long *)(lVar13 + 0x40)) {
              bVar3 = *(long *)(lVar19 + 0x40) < *(long *)(lVar13 + 0x40);
            }
            plVar6 = plVar5 + uVar15 + 2;
            uVar21 = uVar10;
            if (!bVar3) {
              plVar6 = plVar7;
              lVar13 = lVar19;
              uVar21 = uVar2;
            }
          }
          *plVar5 = lVar13;
          plVar5 = plVar6;
          uVar15 = uVar21;
        } while ((long)uVar21 <= (long)(uVar11 - 2 >> 1));
        param_2 = param_2 + -1;
        if (plVar6 == param_2) {
          *plVar6 = lVar9;
        }
        else {
          *plVar6 = *param_2;
          *param_2 = lVar9;
          lVar9 = (long)((long)plVar6 + (8 - (long)plVar22)) >> 3;
          if (1 < lVar9) {
            uVar15 = lVar9 - 2U >> 1;
            lVar14 = plVar22[uVar15];
            lVar19 = *plVar6;
            lVar9 = *(long *)(lVar19 + 0x40);
            lVar13 = *(long *)(lVar19 + 0x48);
            bVar3 = *(long *)(lVar14 + 0x48) < lVar13;
            if (*(long *)(lVar14 + 0x40) != lVar9) {
              bVar3 = *(long *)(lVar14 + 0x40) < lVar9;
            }
            plVar5 = plVar22 + uVar15;
            if (bVar3) {
              do {
                plVar7 = plVar5;
                *plVar6 = lVar14;
                if (uVar15 == 0) break;
                uVar15 = uVar15 - 1 >> 1;
                lVar14 = plVar22[uVar15];
                bVar3 = *(long *)(lVar14 + 0x48) < lVar13;
                if (*(long *)(lVar14 + 0x40) != lVar9) {
                  bVar3 = *(long *)(lVar14 + 0x40) < lVar9;
                }
                plVar6 = plVar7;
                plVar5 = plVar22 + uVar15;
              } while (bVar3);
              *plVar7 = lVar19;
            }
          }
        }
        bVar3 = (long)uVar11 < 3;
        uVar11 = uVar11 - 1;
        if (bVar3) {
          return;
        }
      } while( true );
    }
    plVar5 = plVar22 + (uVar11 >> 1);
    lVar13 = param_2[-1];
    lVar9 = *(long *)(lVar13 + 0x40);
    if (uVar11 < 0x81) {
      lVar17 = *plVar22;
      lVar12 = *plVar5;
      lVar19 = *(long *)(lVar17 + 0x40);
      lVar14 = *(long *)(lVar12 + 0x40);
      lVar16 = *(long *)(lVar12 + 0x48);
      bVar3 = *(long *)(lVar17 + 0x48) < lVar16;
      if (lVar19 != lVar14) {
        bVar3 = lVar19 < lVar14;
      }
      bVar1 = *(long *)(lVar13 + 0x48) < *(long *)(lVar17 + 0x48);
      if (lVar9 != lVar19) {
        bVar1 = lVar9 < lVar19;
      }
      if (bVar3) {
        if (bVar1) {
          *plVar5 = lVar13;
        }
        else {
          *plVar5 = lVar17;
          *plVar22 = lVar12;
          lVar9 = param_2[-1];
          bVar3 = *(long *)(lVar9 + 0x48) < lVar16;
          if (*(long *)(lVar9 + 0x40) != lVar14) {
            bVar3 = *(long *)(lVar9 + 0x40) < lVar14;
          }
          if (!bVar3) goto LAB_10a3eeab4;
          *plVar22 = lVar9;
        }
        param_2[-1] = lVar12;
      }
      else if (bVar1) {
        *plVar22 = lVar13;
        param_2[-1] = lVar17;
        lVar9 = *plVar22;
        lVar13 = *plVar5;
        bVar3 = *(long *)(lVar9 + 0x48) < *(long *)(lVar13 + 0x48);
        if (*(long *)(lVar9 + 0x40) != *(long *)(lVar13 + 0x40)) {
          bVar3 = *(long *)(lVar9 + 0x40) < *(long *)(lVar13 + 0x40);
        }
        if (bVar3) {
          *plVar5 = lVar9;
          *plVar22 = lVar13;
        }
      }
    }
    else {
      lVar17 = *plVar5;
      lVar12 = *plVar22;
      lVar19 = *(long *)(lVar17 + 0x40);
      lVar14 = *(long *)(lVar12 + 0x40);
      lVar16 = *(long *)(lVar12 + 0x48);
      bVar3 = *(long *)(lVar17 + 0x48) < lVar16;
      if (lVar19 != lVar14) {
        bVar3 = lVar19 < lVar14;
      }
      bVar1 = *(long *)(lVar13 + 0x48) < *(long *)(lVar17 + 0x48);
      if (lVar9 != lVar19) {
        bVar1 = lVar9 < lVar19;
      }
      if (bVar3) {
        if (bVar1) {
          *plVar22 = lVar13;
        }
        else {
          *plVar22 = lVar17;
          *plVar5 = lVar12;
          lVar9 = param_2[-1];
          bVar3 = *(long *)(lVar9 + 0x48) < lVar16;
          if (*(long *)(lVar9 + 0x40) != lVar14) {
            bVar3 = *(long *)(lVar9 + 0x40) < lVar14;
          }
          if (!bVar3) goto LAB_10a3ee834;
          *plVar5 = lVar9;
        }
        param_2[-1] = lVar12;
      }
      else if (bVar1) {
        *plVar5 = lVar13;
        param_2[-1] = lVar17;
        lVar9 = *plVar5;
        lVar13 = *plVar22;
        bVar3 = *(long *)(lVar9 + 0x48) < *(long *)(lVar13 + 0x48);
        if (*(long *)(lVar9 + 0x40) != *(long *)(lVar13 + 0x40)) {
          bVar3 = *(long *)(lVar9 + 0x40) < *(long *)(lVar13 + 0x40);
        }
        if (bVar3) {
          *plVar22 = lVar9;
          *plVar5 = lVar13;
        }
      }
LAB_10a3ee834:
      plVar6 = plVar5 + -1;
      lVar16 = *plVar6;
      lVar14 = plVar22[1];
      lVar9 = *(long *)(lVar16 + 0x40);
      lVar13 = *(long *)(lVar14 + 0x40);
      lVar19 = *(long *)(lVar14 + 0x48);
      bVar3 = *(long *)(lVar16 + 0x48) < lVar19;
      if (lVar9 != lVar13) {
        bVar3 = lVar9 < lVar13;
      }
      lVar12 = param_2[-2];
      bVar1 = *(long *)(lVar12 + 0x48) < *(long *)(lVar16 + 0x48);
      if (*(long *)(lVar12 + 0x40) != lVar9) {
        bVar1 = *(long *)(lVar12 + 0x40) < lVar9;
      }
      if (bVar3) {
        if (bVar1) {
          plVar22[1] = lVar12;
        }
        else {
          plVar22[1] = lVar16;
          *plVar6 = lVar14;
          lVar9 = param_2[-2];
          bVar3 = *(long *)(lVar9 + 0x48) < lVar19;
          if (*(long *)(lVar9 + 0x40) != lVar13) {
            bVar3 = *(long *)(lVar9 + 0x40) < lVar13;
          }
          if (!bVar3) goto LAB_10a3ee938;
          *plVar6 = lVar9;
        }
        param_2[-2] = lVar14;
      }
      else if (bVar1) {
        *plVar6 = lVar12;
        param_2[-2] = lVar16;
        lVar9 = *plVar6;
        lVar13 = plVar22[1];
        bVar3 = *(long *)(lVar9 + 0x48) < *(long *)(lVar13 + 0x48);
        if (*(long *)(lVar9 + 0x40) != *(long *)(lVar13 + 0x40)) {
          bVar3 = *(long *)(lVar9 + 0x40) < *(long *)(lVar13 + 0x40);
        }
        if (bVar3) {
          plVar22[1] = lVar9;
          *plVar6 = lVar13;
        }
      }
LAB_10a3ee938:
      plVar7 = plVar5 + 1;
      lVar16 = *plVar7;
      lVar14 = plVar22[2];
      lVar9 = *(long *)(lVar16 + 0x40);
      lVar13 = *(long *)(lVar14 + 0x40);
      lVar19 = *(long *)(lVar14 + 0x48);
      bVar3 = *(long *)(lVar16 + 0x48) < lVar19;
      if (lVar9 != lVar13) {
        bVar3 = lVar9 < lVar13;
      }
      lVar12 = param_2[-3];
      bVar1 = *(long *)(lVar12 + 0x48) < *(long *)(lVar16 + 0x48);
      if (*(long *)(lVar12 + 0x40) != lVar9) {
        bVar1 = *(long *)(lVar12 + 0x40) < lVar9;
      }
      if (bVar3) {
        if (bVar1) {
          plVar22[2] = lVar12;
        }
        else {
          plVar22[2] = lVar16;
          *plVar7 = lVar14;
          lVar9 = param_2[-3];
          bVar3 = *(long *)(lVar9 + 0x48) < lVar19;
          if (*(long *)(lVar9 + 0x40) != lVar13) {
            bVar3 = *(long *)(lVar9 + 0x40) < lVar13;
          }
          if (!bVar3) goto LAB_10a3eea04;
          *plVar7 = lVar9;
        }
        param_2[-3] = lVar14;
      }
      else if (bVar1) {
        *plVar7 = lVar12;
        param_2[-3] = lVar16;
        lVar9 = *plVar7;
        lVar13 = plVar22[2];
        bVar3 = *(long *)(lVar9 + 0x48) < *(long *)(lVar13 + 0x48);
        if (*(long *)(lVar9 + 0x40) != *(long *)(lVar13 + 0x40)) {
          bVar3 = *(long *)(lVar9 + 0x40) < *(long *)(lVar13 + 0x40);
        }
        if (bVar3) {
          plVar22[2] = lVar9;
          *plVar7 = lVar13;
        }
      }
LAB_10a3eea04:
      lVar9 = plVar5[-1];
      lVar14 = *plVar5;
      lVar13 = *(long *)(lVar14 + 0x40);
      lVar19 = *(long *)(lVar9 + 0x40);
      lVar16 = *(long *)(lVar9 + 0x48);
      bVar3 = *(long *)(lVar14 + 0x48) < lVar16;
      if (lVar13 != lVar19) {
        bVar3 = lVar13 < lVar19;
      }
      lVar18 = plVar5[1];
      lVar12 = *(long *)(lVar18 + 0x40);
      lVar17 = *(long *)(lVar18 + 0x48);
      bVar1 = lVar17 < *(long *)(lVar14 + 0x48);
      if (lVar12 != lVar13) {
        bVar1 = lVar12 < lVar13;
      }
      if (bVar3) {
        lVar13 = lVar14;
        if (!bVar1) {
          plVar5[-1] = lVar14;
          *plVar5 = lVar9;
          bVar3 = lVar17 < lVar16;
          if (lVar12 != lVar19) {
            bVar3 = lVar12 < lVar19;
          }
          plVar6 = plVar5;
          lVar14 = lVar9;
          lVar13 = lVar18;
          if (!bVar3) goto LAB_10a3eeaa8;
        }
LAB_10a3eeaa0:
        *plVar6 = lVar18;
        *plVar7 = lVar9;
        lVar14 = lVar13;
      }
      else if (bVar1) {
        *plVar5 = lVar18;
        plVar5[1] = lVar14;
        bVar3 = lVar17 < lVar16;
        if (lVar12 != lVar19) {
          bVar3 = lVar12 < lVar19;
        }
        plVar7 = plVar5;
        lVar14 = lVar18;
        lVar13 = lVar9;
        if (bVar3) goto LAB_10a3eeaa0;
      }
LAB_10a3eeaa8:
      lVar9 = *plVar22;
      *plVar22 = lVar14;
      *plVar5 = lVar9;
    }
LAB_10a3eeab4:
    param_3 = param_3 + -1;
    lVar9 = *plVar22;
    plVar5 = plVar22;
    if ((param_4 & 1) == 0) {
      lVar13 = *(long *)(plVar22[-1] + 0x40);
      lVar19 = *(long *)(lVar9 + 0x40);
      lVar14 = *(long *)(lVar9 + 0x48);
      bVar3 = *(long *)(plVar22[-1] + 0x48) < lVar14;
      if (lVar13 != lVar19) {
        bVar3 = lVar13 < lVar19;
      }
      if (!bVar3) {
        lVar13 = *(long *)(param_2[-1] + 0x40);
        bVar3 = lVar14 < *(long *)(param_2[-1] + 0x48);
        if (lVar19 != lVar13) {
          bVar3 = lVar19 < lVar13;
        }
        if (bVar3) {
          do {
            plVar5 = plVar5 + 1;
            if (plVar5 == param_2) goto LAB_10a3ef338;
            lVar13 = *(long *)(*plVar5 + 0x40);
            bVar3 = lVar14 < *(long *)(*plVar5 + 0x48);
            if (lVar19 != lVar13) {
              bVar3 = lVar19 < lVar13;
            }
          } while (!bVar3);
        }
        else {
          do {
            plVar5 = plVar5 + 1;
            if (param_2 <= plVar5) break;
            lVar13 = *(long *)(*plVar5 + 0x40);
            bVar3 = lVar14 < *(long *)(*plVar5 + 0x48);
            if (lVar19 != lVar13) {
              bVar3 = lVar19 < lVar13;
            }
          } while (!bVar3);
        }
        plVar6 = param_2;
        if (plVar5 < param_2) {
          do {
            if (plVar6 == plVar22) goto LAB_10a3ef338;
            plVar6 = plVar6 + -1;
            lVar13 = *(long *)(*plVar6 + 0x40);
            bVar3 = lVar14 < *(long *)(*plVar6 + 0x48);
            if (lVar19 != lVar13) {
              bVar3 = lVar19 < lVar13;
            }
          } while (bVar3);
        }
        if (plVar5 < plVar6) {
          lVar13 = *plVar5;
          lVar16 = *plVar6;
          do {
            *plVar5 = lVar16;
            *plVar6 = lVar13;
            do {
              plVar5 = plVar5 + 1;
              if (plVar5 == param_2) goto LAB_10a3ef338;
              lVar13 = *plVar5;
              bVar3 = lVar14 < *(long *)(lVar13 + 0x48);
              if (lVar19 != *(long *)(lVar13 + 0x40)) {
                bVar3 = lVar19 < *(long *)(lVar13 + 0x40);
              }
            } while (!bVar3);
            do {
              if (plVar6 == plVar22) goto LAB_10a3ef338;
              plVar6 = plVar6 + -1;
              lVar16 = *plVar6;
              bVar3 = lVar14 < *(long *)(lVar16 + 0x48);
              if (lVar19 != *(long *)(lVar16 + 0x40)) {
                bVar3 = lVar19 < *(long *)(lVar16 + 0x40);
              }
            } while (bVar3);
          } while (plVar5 < plVar6);
        }
        plVar6 = plVar5 + -1;
        if (plVar6 != plVar22) {
          *plVar22 = *plVar6;
        }
        param_4 = 0;
        *plVar6 = lVar9;
        goto LAB_10a3ee688;
      }
    }
    lVar13 = 0;
    do {
      plVar5 = (long *)((long)plVar22 + lVar13 + 8);
      if (plVar5 == param_2) goto LAB_10a3ef338;
      lVar16 = *plVar5;
      lVar19 = *(long *)(lVar9 + 0x40);
      lVar14 = *(long *)(lVar9 + 0x48);
      bVar3 = *(long *)(lVar16 + 0x48) < lVar14;
      if (*(long *)(lVar16 + 0x40) != lVar19) {
        bVar3 = *(long *)(lVar16 + 0x40) < lVar19;
      }
      lVar13 = lVar13 + 8;
    } while (bVar3);
    plVar6 = (long *)((long)plVar22 + lVar13);
    plVar7 = param_2;
    if (lVar13 == 8) {
      do {
        if (plVar7 <= plVar6) break;
        plVar7 = plVar7 + -1;
        lVar13 = *(long *)(*plVar7 + 0x40);
        bVar3 = *(long *)(*plVar7 + 0x48) < lVar14;
        if (lVar13 != lVar19) {
          bVar3 = lVar13 < lVar19;
        }
      } while (!bVar3);
    }
    else {
      do {
        if (plVar7 == plVar22) {
LAB_10a3ef338:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a3ef33c);
          (*pcVar4)();
        }
        plVar7 = plVar7 + -1;
        lVar13 = *(long *)(*plVar7 + 0x40);
        bVar3 = *(long *)(*plVar7 + 0x48) < lVar14;
        if (lVar13 != lVar19) {
          bVar3 = lVar13 < lVar19;
        }
      } while (!bVar3);
    }
    plVar5 = plVar6;
    if (plVar6 < plVar7) {
      lVar13 = *plVar7;
      plVar20 = plVar7;
      do {
        *plVar5 = lVar13;
        *plVar20 = lVar16;
        do {
          plVar5 = plVar5 + 1;
          if (plVar5 == param_2) goto LAB_10a3ef338;
          lVar16 = *plVar5;
          bVar3 = *(long *)(lVar16 + 0x48) < lVar14;
          if (*(long *)(lVar16 + 0x40) != lVar19) {
            bVar3 = *(long *)(lVar16 + 0x40) < lVar19;
          }
        } while (bVar3);
        do {
          if (plVar20 == plVar22) goto LAB_10a3ef338;
          plVar20 = plVar20 + -1;
          lVar13 = *plVar20;
          bVar3 = *(long *)(lVar13 + 0x48) < lVar14;
          if (*(long *)(lVar13 + 0x40) != lVar19) {
            bVar3 = *(long *)(lVar13 + 0x40) < lVar19;
          }
        } while (!bVar3);
      } while (plVar5 < plVar20);
    }
    plVar20 = plVar5 + -1;
    if (plVar20 != plVar22) {
      *plVar22 = *plVar20;
    }
    *plVar20 = lVar9;
    if (plVar6 < plVar7) {
LAB_10a3eec5c:
      FUN_10a3ee65c(plVar22,plVar20,param_3,(uint)param_4 & 1);
      param_4 = 0;
    }
    else {
      plVar6 = plVar22;
      FUN_10a3ef4f8(plVar22,plVar20);
      plVar7 = plVar5;
      FUN_10a3ef4f8(plVar5,param_2);
      if ((int)plVar7 == 0) {
        if (((ulong)plVar6 & 1) == 0) goto LAB_10a3eec5c;
      }
      else {
        plVar5 = plVar22;
        param_2 = plVar20;
        if (((ulong)plVar6 & 1) != 0) {
          return;
        }
      }
    }
  } while( true );
}



/* Entry: 10a3ee628; end: 10a3ee65b;  */

void FUN_10a3ee628(long *param_1,long *param_2,long param_3,ulong param_4)

{
  bool bVar1;
  ulong uVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long *plVar21;
  
  if ((ulong)param_1 >> 0x3d == 0) {
    __Znwm((long)param_1 << 3);
    return;
  }
  func_0x000109ffded8();
LAB_10a3ee688:
  do {
    plVar21 = param_1;
    uVar10 = (long)param_2 - (long)plVar21 >> 3;
    if (uVar10 - 2 == 0 || (long)uVar10 < 2) {
      if (uVar10 < 2) {
        return;
      }
      if (uVar10 == 2) {
        lVar8 = param_2[-1];
        lVar12 = *plVar21;
        bVar3 = *(long *)(lVar8 + 0x48) < *(long *)(lVar12 + 0x48);
        if (*(long *)(lVar8 + 0x40) != *(long *)(lVar12 + 0x40)) {
          bVar3 = *(long *)(lVar8 + 0x40) < *(long *)(lVar12 + 0x40);
        }
        if (!bVar3) {
          return;
        }
        *plVar21 = lVar8;
        param_2[-1] = lVar12;
        return;
      }
    }
    else {
      if (uVar10 == 3) {
        lVar8 = *plVar21;
        lVar13 = plVar21[1];
        lVar12 = *(long *)(lVar13 + 0x40);
        lVar19 = *(long *)(lVar8 + 0x40);
        lVar16 = *(long *)(lVar8 + 0x48);
        bVar3 = *(long *)(lVar13 + 0x48) < lVar16;
        if (lVar12 != lVar19) {
          bVar3 = lVar12 < lVar19;
        }
        lVar11 = param_2[-1];
        bVar1 = *(long *)(lVar11 + 0x48) < *(long *)(lVar13 + 0x48);
        if (*(long *)(lVar11 + 0x40) != lVar12) {
          bVar1 = *(long *)(lVar11 + 0x40) < lVar12;
        }
        if (bVar3) {
          if (bVar1) {
            *plVar21 = lVar11;
          }
          else {
            *plVar21 = lVar13;
            plVar21[1] = lVar8;
            lVar12 = param_2[-1];
            bVar3 = *(long *)(lVar12 + 0x48) < lVar16;
            if (*(long *)(lVar12 + 0x40) != lVar19) {
              bVar3 = *(long *)(lVar12 + 0x40) < lVar19;
            }
            if (!bVar3) {
              return;
            }
            plVar21[1] = lVar12;
          }
          param_2[-1] = lVar8;
          return;
        }
        if (!bVar1) {
          return;
        }
        plVar21[1] = lVar11;
        param_2[-1] = lVar13;
        lVar8 = *plVar21;
        lVar12 = plVar21[1];
        bVar3 = *(long *)(lVar12 + 0x48) < *(long *)(lVar8 + 0x48);
        if (*(long *)(lVar12 + 0x40) != *(long *)(lVar8 + 0x40)) {
          bVar3 = *(long *)(lVar12 + 0x40) < *(long *)(lVar8 + 0x40);
        }
        if (!bVar3) {
          return;
        }
        *plVar21 = lVar12;
        plVar21[1] = lVar8;
        return;
      }
      if (uVar10 == 4) {
        plVar5 = plVar21 + 1;
        plVar6 = plVar21 + 2;
        lVar13 = *plVar5;
        lVar16 = *plVar21;
        lVar8 = *(long *)(lVar13 + 0x40);
        lVar12 = *(long *)(lVar16 + 0x40);
        lVar19 = *(long *)(lVar16 + 0x48);
        bVar3 = *(long *)(lVar13 + 0x48) < lVar19;
        if (lVar8 != lVar12) {
          bVar3 = lVar8 < lVar12;
        }
        lVar11 = *plVar6;
        bVar1 = *(long *)(lVar11 + 0x48) < *(long *)(lVar13 + 0x48);
        if (*(long *)(lVar11 + 0x40) != lVar8) {
          bVar1 = *(long *)(lVar11 + 0x40) < lVar8;
        }
        if (bVar3) {
          if (bVar1) {
            *plVar21 = lVar11;
          }
          else {
            *plVar21 = lVar13;
            *plVar5 = lVar16;
            lVar11 = *plVar6;
            bVar3 = *(long *)(lVar11 + 0x48) < lVar19;
            if (*(long *)(lVar11 + 0x40) != lVar12) {
              bVar3 = *(long *)(lVar11 + 0x40) < lVar12;
            }
            if (!bVar3) goto LAB_10a3ef45c;
            *plVar5 = lVar11;
          }
          *plVar6 = lVar16;
          lVar11 = lVar16;
        }
        else if (bVar1) {
          *plVar5 = lVar11;
          *plVar6 = lVar13;
          lVar8 = *plVar5;
          lVar12 = *plVar21;
          bVar3 = *(long *)(lVar8 + 0x48) < *(long *)(lVar12 + 0x48);
          if (*(long *)(lVar8 + 0x40) != *(long *)(lVar12 + 0x40)) {
            bVar3 = *(long *)(lVar8 + 0x40) < *(long *)(lVar12 + 0x40);
          }
          lVar11 = lVar13;
          if (bVar3) {
            *plVar21 = lVar8;
            *plVar5 = lVar12;
            lVar11 = *plVar6;
          }
        }
LAB_10a3ef45c:
        lVar8 = param_2[-1];
        bVar3 = *(long *)(lVar8 + 0x48) < *(long *)(lVar11 + 0x48);
        if (*(long *)(lVar8 + 0x40) != *(long *)(lVar11 + 0x40)) {
          bVar3 = *(long *)(lVar8 + 0x40) < *(long *)(lVar11 + 0x40);
        }
        if (bVar3) {
          *plVar6 = lVar8;
          param_2[-1] = lVar11;
          lVar8 = *plVar6;
          lVar12 = *plVar5;
          bVar3 = *(long *)(lVar8 + 0x48) < *(long *)(lVar12 + 0x48);
          if (*(long *)(lVar8 + 0x40) != *(long *)(lVar12 + 0x40)) {
            bVar3 = *(long *)(lVar8 + 0x40) < *(long *)(lVar12 + 0x40);
          }
          if (bVar3) {
            *plVar5 = lVar8;
            *plVar6 = lVar12;
            lVar8 = *plVar5;
            lVar12 = *plVar21;
            bVar3 = *(long *)(lVar8 + 0x48) < *(long *)(lVar12 + 0x48);
            if (*(long *)(lVar8 + 0x40) != *(long *)(lVar12 + 0x40)) {
              bVar3 = *(long *)(lVar8 + 0x40) < *(long *)(lVar12 + 0x40);
            }
            if (bVar3) {
              *plVar21 = lVar8;
              *plVar5 = lVar12;
            }
          }
        }
        return;
      }
      if (uVar10 == 5) {
        FUN_10a3ef384(plVar21,plVar21 + 1,plVar21 + 2,plVar21 + 3);
        lVar8 = param_2[-1];
        lVar12 = plVar21[3];
        bVar3 = *(long *)(lVar8 + 0x48) < *(long *)(lVar12 + 0x48);
        if (*(long *)(lVar8 + 0x40) != *(long *)(lVar12 + 0x40)) {
          bVar3 = *(long *)(lVar8 + 0x40) < *(long *)(lVar12 + 0x40);
        }
        if (!bVar3) {
          return;
        }
        plVar21[3] = lVar8;
        param_2[-1] = lVar12;
        lVar8 = plVar21[2];
        lVar19 = plVar21[3];
        lVar12 = *(long *)(lVar19 + 0x40);
        lVar13 = *(long *)(lVar19 + 0x48);
        bVar3 = lVar13 < *(long *)(lVar8 + 0x48);
        if (lVar12 != *(long *)(lVar8 + 0x40)) {
          bVar3 = lVar12 < *(long *)(lVar8 + 0x40);
        }
        if (!bVar3) {
          return;
        }
        plVar21[2] = lVar19;
        plVar21[3] = lVar8;
        lVar8 = plVar21[1];
        bVar3 = lVar13 < *(long *)(lVar8 + 0x48);
        if (lVar12 != *(long *)(lVar8 + 0x40)) {
          bVar3 = lVar12 < *(long *)(lVar8 + 0x40);
        }
        if (!bVar3) {
          return;
        }
        plVar21[1] = lVar19;
        plVar21[2] = lVar8;
        lVar8 = *plVar21;
        bVar3 = lVar13 < *(long *)(lVar8 + 0x48);
        if (lVar12 != *(long *)(lVar8 + 0x40)) {
          bVar3 = lVar12 < *(long *)(lVar8 + 0x40);
        }
        if (!bVar3) {
          return;
        }
        *plVar21 = lVar19;
        plVar21[1] = lVar8;
        return;
      }
    }
    if ((long)uVar10 < 0x18) {
      plVar5 = plVar21 + 1;
      if ((param_4 & 1) == 0) {
        if (plVar21 == param_2 || plVar5 == param_2) {
          return;
        }
        lVar8 = 0;
        lVar12 = 8;
        do {
          lVar16 = *(long *)((long)plVar21 + lVar8);
          lVar13 = *plVar5;
          lVar8 = *(long *)(lVar13 + 0x40);
          lVar19 = *(long *)(lVar13 + 0x48);
          bVar3 = lVar19 < *(long *)(lVar16 + 0x48);
          if (lVar8 != *(long *)(lVar16 + 0x40)) {
            bVar3 = lVar8 < *(long *)(lVar16 + 0x40);
          }
          if (bVar3) {
            lVar11 = 0;
            do {
              *(long *)((long)plVar5 + lVar11) = lVar16;
              if (lVar12 + lVar11 == 0) goto LAB_10a3ef338;
              lVar16 = ((long *)((long)plVar5 + lVar11))[-2];
              bVar3 = lVar19 < *(long *)(lVar16 + 0x48);
              if (lVar8 != *(long *)(lVar16 + 0x40)) {
                bVar3 = lVar8 < *(long *)(lVar16 + 0x40);
              }
              lVar11 = lVar11 + -8;
            } while (bVar3);
            *(long *)((long)plVar5 + lVar11) = lVar13;
          }
          plVar5 = plVar5 + 1;
          lVar8 = lVar12;
          lVar12 = lVar12 + 8;
          if (plVar5 == param_2) {
            return;
          }
        } while( true );
      }
      if (plVar21 == param_2 || plVar5 == param_2) {
        return;
      }
      lVar8 = 8;
      plVar6 = plVar21;
      do {
        plVar14 = plVar5;
        lVar16 = *plVar6;
        lVar13 = *plVar14;
        lVar12 = *(long *)(lVar13 + 0x40);
        lVar19 = *(long *)(lVar13 + 0x48);
        bVar3 = lVar19 < *(long *)(lVar16 + 0x48);
        if (lVar12 != *(long *)(lVar16 + 0x40)) {
          bVar3 = lVar12 < *(long *)(lVar16 + 0x40);
        }
        lVar11 = lVar8;
        if (bVar3) {
          do {
            *(long *)((long)plVar21 + lVar11) = lVar16;
            lVar17 = lVar11 + -8;
            plVar5 = plVar21;
            if (lVar17 == 0) goto LAB_10a3eeff0;
            lVar16 = *(long *)((long)plVar21 + lVar11 + -0x10);
            bVar3 = lVar19 < *(long *)(lVar16 + 0x48);
            if (lVar12 != *(long *)(lVar16 + 0x40)) {
              bVar3 = lVar12 < *(long *)(lVar16 + 0x40);
            }
            lVar11 = lVar17;
          } while (bVar3);
          plVar5 = (long *)((long)plVar21 + lVar17);
LAB_10a3eeff0:
          *plVar5 = lVar13;
        }
        lVar8 = lVar8 + 8;
        plVar5 = plVar14 + 1;
        plVar6 = plVar14;
        if (plVar14 + 1 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (plVar21 == param_2) {
        return;
      }
      uVar9 = uVar10 - 2 >> 1;
      uVar15 = uVar9;
      do {
        if ((long)uVar15 <= (long)uVar9) {
          uVar20 = uVar15 << 1 | 1;
          plVar5 = plVar21 + uVar20;
          uVar2 = uVar15 * 2 + 2;
          lVar12 = *plVar5;
          plVar6 = plVar5;
          lVar8 = lVar12;
          uVar7 = uVar20;
          if ((long)uVar2 < (long)uVar10) {
            lVar8 = plVar5[1];
            bVar3 = *(long *)(lVar12 + 0x48) < *(long *)(lVar8 + 0x48);
            if (*(long *)(lVar12 + 0x40) != *(long *)(lVar8 + 0x40)) {
              bVar3 = *(long *)(lVar12 + 0x40) < *(long *)(lVar8 + 0x40);
            }
            plVar6 = plVar5 + 1;
            uVar7 = uVar2;
            if (!bVar3) {
              plVar6 = plVar5;
              lVar8 = lVar12;
              uVar7 = uVar20;
            }
          }
          lVar13 = plVar21[uVar15];
          lVar12 = *(long *)(lVar13 + 0x40);
          lVar19 = *(long *)(lVar13 + 0x48);
          bVar3 = *(long *)(lVar8 + 0x48) < lVar19;
          if (*(long *)(lVar8 + 0x40) != lVar12) {
            bVar3 = *(long *)(lVar8 + 0x40) < lVar12;
          }
          plVar5 = plVar21 + uVar15;
          if (!bVar3) {
            do {
              plVar14 = plVar6;
              *plVar5 = lVar8;
              if ((long)uVar9 < (long)uVar7) break;
              uVar20 = uVar7 << 1 | 1;
              plVar5 = plVar21 + uVar20;
              uVar2 = uVar7 * 2 + 2;
              lVar16 = *plVar5;
              uVar7 = uVar20;
              plVar6 = plVar5;
              lVar8 = lVar16;
              if ((long)uVar2 < (long)uVar10) {
                lVar8 = plVar5[1];
                bVar3 = *(long *)(lVar16 + 0x48) < *(long *)(lVar8 + 0x48);
                if (*(long *)(lVar16 + 0x40) != *(long *)(lVar8 + 0x40)) {
                  bVar3 = *(long *)(lVar16 + 0x40) < *(long *)(lVar8 + 0x40);
                }
                uVar7 = uVar2;
                plVar6 = plVar5 + 1;
                if (!bVar3) {
                  uVar7 = uVar20;
                  plVar6 = plVar5;
                  lVar8 = lVar16;
                }
              }
              bVar3 = *(long *)(lVar8 + 0x48) < lVar19;
              if (*(long *)(lVar8 + 0x40) != lVar12) {
                bVar3 = *(long *)(lVar8 + 0x40) < lVar12;
              }
              plVar5 = plVar14;
            } while (!bVar3);
            *plVar14 = lVar13;
          }
        }
        bVar3 = uVar15 != 0;
        uVar15 = uVar15 - 1;
      } while (bVar3);
      do {
        lVar8 = *plVar21;
        plVar5 = plVar21;
        uVar15 = 0;
        do {
          plVar14 = plVar5 + uVar15 + 1;
          lVar19 = *plVar14;
          uVar2 = uVar15 << 1 | 1;
          uVar9 = uVar15 * 2 + 2;
          plVar6 = plVar14;
          lVar12 = lVar19;
          uVar20 = uVar2;
          if ((long)uVar9 < (long)uVar10) {
            lVar12 = plVar5[uVar15 + 2];
            bVar3 = *(long *)(lVar19 + 0x48) < *(long *)(lVar12 + 0x48);
            if (*(long *)(lVar19 + 0x40) != *(long *)(lVar12 + 0x40)) {
              bVar3 = *(long *)(lVar19 + 0x40) < *(long *)(lVar12 + 0x40);
            }
            plVar6 = plVar5 + uVar15 + 2;
            uVar20 = uVar9;
            if (!bVar3) {
              plVar6 = plVar14;
              lVar12 = lVar19;
              uVar20 = uVar2;
            }
          }
          *plVar5 = lVar12;
          plVar5 = plVar6;
          uVar15 = uVar20;
        } while ((long)uVar20 <= (long)(uVar10 - 2 >> 1));
        param_2 = param_2 + -1;
        if (plVar6 == param_2) {
          *plVar6 = lVar8;
        }
        else {
          *plVar6 = *param_2;
          *param_2 = lVar8;
          lVar8 = (long)plVar6 + (8 - (long)plVar21) >> 3;
          if (1 < lVar8) {
            uVar15 = lVar8 - 2U >> 1;
            lVar13 = plVar21[uVar15];
            lVar19 = *plVar6;
            lVar8 = *(long *)(lVar19 + 0x40);
            lVar12 = *(long *)(lVar19 + 0x48);
            bVar3 = *(long *)(lVar13 + 0x48) < lVar12;
            if (*(long *)(lVar13 + 0x40) != lVar8) {
              bVar3 = *(long *)(lVar13 + 0x40) < lVar8;
            }
            plVar5 = plVar21 + uVar15;
            if (bVar3) {
              do {
                plVar14 = plVar5;
                *plVar6 = lVar13;
                if (uVar15 == 0) break;
                uVar15 = uVar15 - 1 >> 1;
                lVar13 = plVar21[uVar15];
                bVar3 = *(long *)(lVar13 + 0x48) < lVar12;
                if (*(long *)(lVar13 + 0x40) != lVar8) {
                  bVar3 = *(long *)(lVar13 + 0x40) < lVar8;
                }
                plVar6 = plVar14;
                plVar5 = plVar21 + uVar15;
              } while (bVar3);
              *plVar14 = lVar19;
            }
          }
        }
        bVar3 = (long)uVar10 < 3;
        uVar10 = uVar10 - 1;
        if (bVar3) {
          return;
        }
      } while( true );
    }
    plVar5 = plVar21 + (uVar10 >> 1);
    lVar12 = param_2[-1];
    lVar8 = *(long *)(lVar12 + 0x40);
    if (uVar10 < 0x81) {
      lVar17 = *plVar21;
      lVar11 = *plVar5;
      lVar19 = *(long *)(lVar17 + 0x40);
      lVar13 = *(long *)(lVar11 + 0x40);
      lVar16 = *(long *)(lVar11 + 0x48);
      bVar3 = *(long *)(lVar17 + 0x48) < lVar16;
      if (lVar19 != lVar13) {
        bVar3 = lVar19 < lVar13;
      }
      bVar1 = *(long *)(lVar12 + 0x48) < *(long *)(lVar17 + 0x48);
      if (lVar8 != lVar19) {
        bVar1 = lVar8 < lVar19;
      }
      if (bVar3) {
        if (bVar1) {
          *plVar5 = lVar12;
        }
        else {
          *plVar5 = lVar17;
          *plVar21 = lVar11;
          lVar8 = param_2[-1];
          bVar3 = *(long *)(lVar8 + 0x48) < lVar16;
          if (*(long *)(lVar8 + 0x40) != lVar13) {
            bVar3 = *(long *)(lVar8 + 0x40) < lVar13;
          }
          if (!bVar3) goto LAB_10a3eeab4;
          *plVar21 = lVar8;
        }
        param_2[-1] = lVar11;
      }
      else if (bVar1) {
        *plVar21 = lVar12;
        param_2[-1] = lVar17;
        lVar8 = *plVar21;
        lVar12 = *plVar5;
        bVar3 = *(long *)(lVar8 + 0x48) < *(long *)(lVar12 + 0x48);
        if (*(long *)(lVar8 + 0x40) != *(long *)(lVar12 + 0x40)) {
          bVar3 = *(long *)(lVar8 + 0x40) < *(long *)(lVar12 + 0x40);
        }
        if (bVar3) {
          *plVar5 = lVar8;
          *plVar21 = lVar12;
        }
      }
    }
    else {
      lVar17 = *plVar5;
      lVar11 = *plVar21;
      lVar19 = *(long *)(lVar17 + 0x40);
      lVar13 = *(long *)(lVar11 + 0x40);
      lVar16 = *(long *)(lVar11 + 0x48);
      bVar3 = *(long *)(lVar17 + 0x48) < lVar16;
      if (lVar19 != lVar13) {
        bVar3 = lVar19 < lVar13;
      }
      bVar1 = *(long *)(lVar12 + 0x48) < *(long *)(lVar17 + 0x48);
      if (lVar8 != lVar19) {
        bVar1 = lVar8 < lVar19;
      }
      if (bVar3) {
        if (bVar1) {
          *plVar21 = lVar12;
        }
        else {
          *plVar21 = lVar17;
          *plVar5 = lVar11;
          lVar8 = param_2[-1];
          bVar3 = *(long *)(lVar8 + 0x48) < lVar16;
          if (*(long *)(lVar8 + 0x40) != lVar13) {
            bVar3 = *(long *)(lVar8 + 0x40) < lVar13;
          }
          if (!bVar3) goto LAB_10a3ee834;
          *plVar5 = lVar8;
        }
        param_2[-1] = lVar11;
      }
      else if (bVar1) {
        *plVar5 = lVar12;
        param_2[-1] = lVar17;
        lVar8 = *plVar5;
        lVar12 = *plVar21;
        bVar3 = *(long *)(lVar8 + 0x48) < *(long *)(lVar12 + 0x48);
        if (*(long *)(lVar8 + 0x40) != *(long *)(lVar12 + 0x40)) {
          bVar3 = *(long *)(lVar8 + 0x40) < *(long *)(lVar12 + 0x40);
        }
        if (bVar3) {
          *plVar21 = lVar8;
          *plVar5 = lVar12;
        }
      }
LAB_10a3ee834:
      plVar6 = plVar5 + -1;
      lVar16 = *plVar6;
      lVar13 = plVar21[1];
      lVar8 = *(long *)(lVar16 + 0x40);
      lVar12 = *(long *)(lVar13 + 0x40);
      lVar19 = *(long *)(lVar13 + 0x48);
      bVar3 = *(long *)(lVar16 + 0x48) < lVar19;
      if (lVar8 != lVar12) {
        bVar3 = lVar8 < lVar12;
      }
      lVar11 = param_2[-2];
      bVar1 = *(long *)(lVar11 + 0x48) < *(long *)(lVar16 + 0x48);
      if (*(long *)(lVar11 + 0x40) != lVar8) {
        bVar1 = *(long *)(lVar11 + 0x40) < lVar8;
      }
      if (bVar3) {
        if (bVar1) {
          plVar21[1] = lVar11;
        }
        else {
          plVar21[1] = lVar16;
          *plVar6 = lVar13;
          lVar8 = param_2[-2];
          bVar3 = *(long *)(lVar8 + 0x48) < lVar19;
          if (*(long *)(lVar8 + 0x40) != lVar12) {
            bVar3 = *(long *)(lVar8 + 0x40) < lVar12;
          }
          if (!bVar3) goto LAB_10a3ee938;
          *plVar6 = lVar8;
        }
        param_2[-2] = lVar13;
      }
      else if (bVar1) {
        *plVar6 = lVar11;
        param_2[-2] = lVar16;
        lVar8 = *plVar6;
        lVar12 = plVar21[1];
        bVar3 = *(long *)(lVar8 + 0x48) < *(long *)(lVar12 + 0x48);
        if (*(long *)(lVar8 + 0x40) != *(long *)(lVar12 + 0x40)) {
          bVar3 = *(long *)(lVar8 + 0x40) < *(long *)(lVar12 + 0x40);
        }
        if (bVar3) {
          plVar21[1] = lVar8;
          *plVar6 = lVar12;
        }
      }
LAB_10a3ee938:
      plVar14 = plVar5 + 1;
      lVar16 = *plVar14;
      lVar13 = plVar21[2];
      lVar8 = *(long *)(lVar16 + 0x40);
      lVar12 = *(long *)(lVar13 + 0x40);
      lVar19 = *(long *)(lVar13 + 0x48);
      bVar3 = *(long *)(lVar16 + 0x48) < lVar19;
      if (lVar8 != lVar12) {
        bVar3 = lVar8 < lVar12;
      }
      lVar11 = param_2[-3];
      bVar1 = *(long *)(lVar11 + 0x48) < *(long *)(lVar16 + 0x48);
      if (*(long *)(lVar11 + 0x40) != lVar8) {
        bVar1 = *(long *)(lVar11 + 0x40) < lVar8;
      }
      if (bVar3) {
        if (bVar1) {
          plVar21[2] = lVar11;
        }
        else {
          plVar21[2] = lVar16;
          *plVar14 = lVar13;
          lVar8 = param_2[-3];
          bVar3 = *(long *)(lVar8 + 0x48) < lVar19;
          if (*(long *)(lVar8 + 0x40) != lVar12) {
            bVar3 = *(long *)(lVar8 + 0x40) < lVar12;
          }
          if (!bVar3) goto LAB_10a3eea04;
          *plVar14 = lVar8;
        }
        param_2[-3] = lVar13;
      }
      else if (bVar1) {
        *plVar14 = lVar11;
        param_2[-3] = lVar16;
        lVar8 = *plVar14;
        lVar12 = plVar21[2];
        bVar3 = *(long *)(lVar8 + 0x48) < *(long *)(lVar12 + 0x48);
        if (*(long *)(lVar8 + 0x40) != *(long *)(lVar12 + 0x40)) {
          bVar3 = *(long *)(lVar8 + 0x40) < *(long *)(lVar12 + 0x40);
        }
        if (bVar3) {
          plVar21[2] = lVar8;
          *plVar14 = lVar12;
        }
      }
LAB_10a3eea04:
      lVar8 = plVar5[-1];
      lVar13 = *plVar5;
      lVar12 = *(long *)(lVar13 + 0x40);
      lVar19 = *(long *)(lVar8 + 0x40);
      lVar16 = *(long *)(lVar8 + 0x48);
      bVar3 = *(long *)(lVar13 + 0x48) < lVar16;
      if (lVar12 != lVar19) {
        bVar3 = lVar12 < lVar19;
      }
      lVar18 = plVar5[1];
      lVar11 = *(long *)(lVar18 + 0x40);
      lVar17 = *(long *)(lVar18 + 0x48);
      bVar1 = lVar17 < *(long *)(lVar13 + 0x48);
      if (lVar11 != lVar12) {
        bVar1 = lVar11 < lVar12;
      }
      if (bVar3) {
        lVar12 = lVar13;
        if (!bVar1) {
          plVar5[-1] = lVar13;
          *plVar5 = lVar8;
          bVar3 = lVar17 < lVar16;
          if (lVar11 != lVar19) {
            bVar3 = lVar11 < lVar19;
          }
          plVar6 = plVar5;
          lVar13 = lVar8;
          lVar12 = lVar18;
          if (!bVar3) goto LAB_10a3eeaa8;
        }
LAB_10a3eeaa0:
        *plVar6 = lVar18;
        *plVar14 = lVar8;
        lVar13 = lVar12;
      }
      else if (bVar1) {
        *plVar5 = lVar18;
        plVar5[1] = lVar13;
        bVar3 = lVar17 < lVar16;
        if (lVar11 != lVar19) {
          bVar3 = lVar11 < lVar19;
        }
        plVar14 = plVar5;
        lVar13 = lVar18;
        lVar12 = lVar8;
        if (bVar3) goto LAB_10a3eeaa0;
      }
LAB_10a3eeaa8:
      lVar8 = *plVar21;
      *plVar21 = lVar13;
      *plVar5 = lVar8;
    }
LAB_10a3eeab4:
    param_3 = param_3 + -1;
    lVar8 = *plVar21;
    param_1 = plVar21;
    if ((param_4 & 1) == 0) {
      lVar12 = *(long *)(plVar21[-1] + 0x40);
      lVar19 = *(long *)(lVar8 + 0x40);
      lVar13 = *(long *)(lVar8 + 0x48);
      bVar3 = *(long *)(plVar21[-1] + 0x48) < lVar13;
      if (lVar12 != lVar19) {
        bVar3 = lVar12 < lVar19;
      }
      if (!bVar3) {
        lVar12 = *(long *)(param_2[-1] + 0x40);
        bVar3 = lVar13 < *(long *)(param_2[-1] + 0x48);
        if (lVar19 != lVar12) {
          bVar3 = lVar19 < lVar12;
        }
        if (bVar3) {
          do {
            param_1 = param_1 + 1;
            if (param_1 == param_2) goto LAB_10a3ef338;
            lVar12 = *(long *)(*param_1 + 0x40);
            bVar3 = lVar13 < *(long *)(*param_1 + 0x48);
            if (lVar19 != lVar12) {
              bVar3 = lVar19 < lVar12;
            }
          } while (!bVar3);
        }
        else {
          do {
            param_1 = param_1 + 1;
            if (param_2 <= param_1) break;
            lVar12 = *(long *)(*param_1 + 0x40);
            bVar3 = lVar13 < *(long *)(*param_1 + 0x48);
            if (lVar19 != lVar12) {
              bVar3 = lVar19 < lVar12;
            }
          } while (!bVar3);
        }
        plVar5 = param_2;
        if (param_1 < param_2) {
          do {
            if (plVar5 == plVar21) goto LAB_10a3ef338;
            plVar5 = plVar5 + -1;
            lVar12 = *(long *)(*plVar5 + 0x40);
            bVar3 = lVar13 < *(long *)(*plVar5 + 0x48);
            if (lVar19 != lVar12) {
              bVar3 = lVar19 < lVar12;
            }
          } while (bVar3);
        }
        if (param_1 < plVar5) {
          lVar12 = *param_1;
          lVar16 = *plVar5;
          do {
            *param_1 = lVar16;
            *plVar5 = lVar12;
            do {
              param_1 = param_1 + 1;
              if (param_1 == param_2) goto LAB_10a3ef338;
              lVar12 = *param_1;
              bVar3 = lVar13 < *(long *)(lVar12 + 0x48);
              if (lVar19 != *(long *)(lVar12 + 0x40)) {
                bVar3 = lVar19 < *(long *)(lVar12 + 0x40);
              }
            } while (!bVar3);
            do {
              if (plVar5 == plVar21) goto LAB_10a3ef338;
              plVar5 = plVar5 + -1;
              lVar16 = *plVar5;
              bVar3 = lVar13 < *(long *)(lVar16 + 0x48);
              if (lVar19 != *(long *)(lVar16 + 0x40)) {
                bVar3 = lVar19 < *(long *)(lVar16 + 0x40);
              }
            } while (bVar3);
          } while (param_1 < plVar5);
        }
        plVar5 = param_1 + -1;
        if (plVar5 != plVar21) {
          *plVar21 = *plVar5;
        }
        param_4 = 0;
        *plVar5 = lVar8;
        goto LAB_10a3ee688;
      }
    }
    lVar12 = 0;
    do {
      plVar5 = (long *)((long)plVar21 + lVar12 + 8);
      if (plVar5 == param_2) goto LAB_10a3ef338;
      lVar16 = *plVar5;
      lVar19 = *(long *)(lVar8 + 0x40);
      lVar13 = *(long *)(lVar8 + 0x48);
      bVar3 = *(long *)(lVar16 + 0x48) < lVar13;
      if (*(long *)(lVar16 + 0x40) != lVar19) {
        bVar3 = *(long *)(lVar16 + 0x40) < lVar19;
      }
      lVar12 = lVar12 + 8;
    } while (bVar3);
    plVar5 = (long *)((long)plVar21 + lVar12);
    plVar6 = param_2;
    if (lVar12 == 8) {
      do {
        if (plVar6 <= plVar5) break;
        plVar6 = plVar6 + -1;
        lVar12 = *(long *)(*plVar6 + 0x40);
        bVar3 = *(long *)(*plVar6 + 0x48) < lVar13;
        if (lVar12 != lVar19) {
          bVar3 = lVar12 < lVar19;
        }
      } while (!bVar3);
    }
    else {
      do {
        if (plVar6 == plVar21) {
LAB_10a3ef338:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a3ef33c);
          (*pcVar4)();
        }
        plVar6 = plVar6 + -1;
        lVar12 = *(long *)(*plVar6 + 0x40);
        bVar3 = *(long *)(*plVar6 + 0x48) < lVar13;
        if (lVar12 != lVar19) {
          bVar3 = lVar12 < lVar19;
        }
      } while (!bVar3);
    }
    param_1 = plVar5;
    if (plVar5 < plVar6) {
      lVar12 = *plVar6;
      plVar14 = plVar6;
      do {
        *param_1 = lVar12;
        *plVar14 = lVar16;
        do {
          param_1 = param_1 + 1;
          if (param_1 == param_2) goto LAB_10a3ef338;
          lVar16 = *param_1;
          bVar3 = *(long *)(lVar16 + 0x48) < lVar13;
          if (*(long *)(lVar16 + 0x40) != lVar19) {
            bVar3 = *(long *)(lVar16 + 0x40) < lVar19;
          }
        } while (bVar3);
        do {
          if (plVar14 == plVar21) goto LAB_10a3ef338;
          plVar14 = plVar14 + -1;
          lVar12 = *plVar14;
          bVar3 = *(long *)(lVar12 + 0x48) < lVar13;
          if (*(long *)(lVar12 + 0x40) != lVar19) {
            bVar3 = *(long *)(lVar12 + 0x40) < lVar19;
          }
        } while (!bVar3);
      } while (param_1 < plVar14);
    }
    plVar14 = param_1 + -1;
    if (plVar14 != plVar21) {
      *plVar21 = *plVar14;
    }
    *plVar14 = lVar8;
    if (plVar5 < plVar6) {
LAB_10a3eec5c:
      FUN_10a3ee65c(plVar21,plVar14,param_3,(uint)param_4 & 1);
      param_4 = 0;
    }
    else {
      plVar5 = plVar21;
      FUN_10a3ef4f8(plVar21,plVar14);
      plVar6 = param_1;
      FUN_10a3ef4f8(param_1,param_2);
      if ((int)plVar6 == 0) {
        if (((ulong)plVar5 & 1) == 0) goto LAB_10a3eec5c;
      }
      else {
        param_1 = plVar21;
        param_2 = plVar14;
        if (((ulong)plVar5 & 1) != 0) {
          return;
        }
      }
    }
  } while( true );
}



/* Entry: 10a3ee65c; end: 10a3ef383;  */

void FUN_10a3ee65c(long *param_1,long *param_2,long param_3,uint param_4)

{
  bool bVar1;
  ulong uVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long *plVar21;
  
LAB_10a3ee688:
  do {
    plVar21 = param_1;
    uVar10 = (long)param_2 - (long)plVar21 >> 3;
    if (uVar10 - 2 == 0 || (long)uVar10 < 2) {
      if (uVar10 < 2) {
        return;
      }
      if (uVar10 == 2) {
        lVar8 = param_2[-1];
        lVar12 = *plVar21;
        bVar3 = *(long *)(lVar8 + 0x48) < *(long *)(lVar12 + 0x48);
        if (*(long *)(lVar8 + 0x40) != *(long *)(lVar12 + 0x40)) {
          bVar3 = *(long *)(lVar8 + 0x40) < *(long *)(lVar12 + 0x40);
        }
        if (!bVar3) {
          return;
        }
        *plVar21 = lVar8;
        param_2[-1] = lVar12;
        return;
      }
    }
    else {
      if (uVar10 == 3) {
        lVar8 = *plVar21;
        lVar13 = plVar21[1];
        lVar12 = *(long *)(lVar13 + 0x40);
        lVar19 = *(long *)(lVar8 + 0x40);
        lVar16 = *(long *)(lVar8 + 0x48);
        bVar3 = *(long *)(lVar13 + 0x48) < lVar16;
        if (lVar12 != lVar19) {
          bVar3 = lVar12 < lVar19;
        }
        lVar11 = param_2[-1];
        bVar1 = *(long *)(lVar11 + 0x48) < *(long *)(lVar13 + 0x48);
        if (*(long *)(lVar11 + 0x40) != lVar12) {
          bVar1 = *(long *)(lVar11 + 0x40) < lVar12;
        }
        if (bVar3) {
          if (bVar1) {
            *plVar21 = lVar11;
          }
          else {
            *plVar21 = lVar13;
            plVar21[1] = lVar8;
            lVar12 = param_2[-1];
            bVar3 = *(long *)(lVar12 + 0x48) < lVar16;
            if (*(long *)(lVar12 + 0x40) != lVar19) {
              bVar3 = *(long *)(lVar12 + 0x40) < lVar19;
            }
            if (!bVar3) {
              return;
            }
            plVar21[1] = lVar12;
          }
          param_2[-1] = lVar8;
          return;
        }
        if (!bVar1) {
          return;
        }
        plVar21[1] = lVar11;
        param_2[-1] = lVar13;
        lVar8 = *plVar21;
        lVar12 = plVar21[1];
        bVar3 = *(long *)(lVar12 + 0x48) < *(long *)(lVar8 + 0x48);
        if (*(long *)(lVar12 + 0x40) != *(long *)(lVar8 + 0x40)) {
          bVar3 = *(long *)(lVar12 + 0x40) < *(long *)(lVar8 + 0x40);
        }
        if (!bVar3) {
          return;
        }
        *plVar21 = lVar12;
        plVar21[1] = lVar8;
        return;
      }
      if (uVar10 == 4) {
        plVar5 = plVar21 + 1;
        plVar6 = plVar21 + 2;
        lVar13 = *plVar5;
        lVar16 = *plVar21;
        lVar8 = *(long *)(lVar13 + 0x40);
        lVar12 = *(long *)(lVar16 + 0x40);
        lVar19 = *(long *)(lVar16 + 0x48);
        bVar3 = *(long *)(lVar13 + 0x48) < lVar19;
        if (lVar8 != lVar12) {
          bVar3 = lVar8 < lVar12;
        }
        lVar11 = *plVar6;
        bVar1 = *(long *)(lVar11 + 0x48) < *(long *)(lVar13 + 0x48);
        if (*(long *)(lVar11 + 0x40) != lVar8) {
          bVar1 = *(long *)(lVar11 + 0x40) < lVar8;
        }
        if (bVar3) {
          if (bVar1) {
            *plVar21 = lVar11;
          }
          else {
            *plVar21 = lVar13;
            *plVar5 = lVar16;
            lVar11 = *plVar6;
            bVar3 = *(long *)(lVar11 + 0x48) < lVar19;
            if (*(long *)(lVar11 + 0x40) != lVar12) {
              bVar3 = *(long *)(lVar11 + 0x40) < lVar12;
            }
            if (!bVar3) goto LAB_10a3ef45c;
            *plVar5 = lVar11;
          }
          *plVar6 = lVar16;
          lVar11 = lVar16;
        }
        else if (bVar1) {
          *plVar5 = lVar11;
          *plVar6 = lVar13;
          lVar8 = *plVar5;
          lVar12 = *plVar21;
          bVar3 = *(long *)(lVar8 + 0x48) < *(long *)(lVar12 + 0x48);
          if (*(long *)(lVar8 + 0x40) != *(long *)(lVar12 + 0x40)) {
            bVar3 = *(long *)(lVar8 + 0x40) < *(long *)(lVar12 + 0x40);
          }
          lVar11 = lVar13;
          if (bVar3) {
            *plVar21 = lVar8;
            *plVar5 = lVar12;
            lVar11 = *plVar6;
          }
        }
LAB_10a3ef45c:
        lVar8 = param_2[-1];
        bVar3 = *(long *)(lVar8 + 0x48) < *(long *)(lVar11 + 0x48);
        if (*(long *)(lVar8 + 0x40) != *(long *)(lVar11 + 0x40)) {
          bVar3 = *(long *)(lVar8 + 0x40) < *(long *)(lVar11 + 0x40);
        }
        if (bVar3) {
          *plVar6 = lVar8;
          param_2[-1] = lVar11;
          lVar8 = *plVar6;
          lVar12 = *plVar5;
          bVar3 = *(long *)(lVar8 + 0x48) < *(long *)(lVar12 + 0x48);
          if (*(long *)(lVar8 + 0x40) != *(long *)(lVar12 + 0x40)) {
            bVar3 = *(long *)(lVar8 + 0x40) < *(long *)(lVar12 + 0x40);
          }
          if (bVar3) {
            *plVar5 = lVar8;
            *plVar6 = lVar12;
            lVar8 = *plVar5;
            lVar12 = *plVar21;
            bVar3 = *(long *)(lVar8 + 0x48) < *(long *)(lVar12 + 0x48);
            if (*(long *)(lVar8 + 0x40) != *(long *)(lVar12 + 0x40)) {
              bVar3 = *(long *)(lVar8 + 0x40) < *(long *)(lVar12 + 0x40);
            }
            if (bVar3) {
              *plVar21 = lVar8;
              *plVar5 = lVar12;
            }
          }
        }
        return;
      }
      if (uVar10 == 5) {
        FUN_10a3ef384(plVar21,plVar21 + 1,plVar21 + 2,plVar21 + 3);
        lVar8 = param_2[-1];
        lVar12 = plVar21[3];
        bVar3 = *(long *)(lVar8 + 0x48) < *(long *)(lVar12 + 0x48);
        if (*(long *)(lVar8 + 0x40) != *(long *)(lVar12 + 0x40)) {
          bVar3 = *(long *)(lVar8 + 0x40) < *(long *)(lVar12 + 0x40);
        }
        if (!bVar3) {
          return;
        }
        plVar21[3] = lVar8;
        param_2[-1] = lVar12;
        lVar8 = plVar21[2];
        lVar19 = plVar21[3];
        lVar12 = *(long *)(lVar19 + 0x40);
        lVar13 = *(long *)(lVar19 + 0x48);
        bVar3 = lVar13 < *(long *)(lVar8 + 0x48);
        if (lVar12 != *(long *)(lVar8 + 0x40)) {
          bVar3 = lVar12 < *(long *)(lVar8 + 0x40);
        }
        if (!bVar3) {
          return;
        }
        plVar21[2] = lVar19;
        plVar21[3] = lVar8;
        lVar8 = plVar21[1];
        bVar3 = lVar13 < *(long *)(lVar8 + 0x48);
        if (lVar12 != *(long *)(lVar8 + 0x40)) {
          bVar3 = lVar12 < *(long *)(lVar8 + 0x40);
        }
        if (!bVar3) {
          return;
        }
        plVar21[1] = lVar19;
        plVar21[2] = lVar8;
        lVar8 = *plVar21;
        bVar3 = lVar13 < *(long *)(lVar8 + 0x48);
        if (lVar12 != *(long *)(lVar8 + 0x40)) {
          bVar3 = lVar12 < *(long *)(lVar8 + 0x40);
        }
        if (!bVar3) {
          return;
        }
        *plVar21 = lVar19;
        plVar21[1] = lVar8;
        return;
      }
    }
    if ((long)uVar10 < 0x18) {
      plVar5 = plVar21 + 1;
      if ((param_4 & 1) == 0) {
        if (plVar21 == param_2 || plVar5 == param_2) {
          return;
        }
        lVar8 = 0;
        lVar12 = 8;
        do {
          lVar16 = *(long *)((long)plVar21 + lVar8);
          lVar13 = *plVar5;
          lVar8 = *(long *)(lVar13 + 0x40);
          lVar19 = *(long *)(lVar13 + 0x48);
          bVar3 = lVar19 < *(long *)(lVar16 + 0x48);
          if (lVar8 != *(long *)(lVar16 + 0x40)) {
            bVar3 = lVar8 < *(long *)(lVar16 + 0x40);
          }
          if (bVar3) {
            lVar11 = 0;
            do {
              *(long *)((long)plVar5 + lVar11) = lVar16;
              if (lVar12 + lVar11 == 0) goto LAB_10a3ef338;
              lVar16 = ((long *)((long)plVar5 + lVar11))[-2];
              bVar3 = lVar19 < *(long *)(lVar16 + 0x48);
              if (lVar8 != *(long *)(lVar16 + 0x40)) {
                bVar3 = lVar8 < *(long *)(lVar16 + 0x40);
              }
              lVar11 = lVar11 + -8;
            } while (bVar3);
            *(long *)((long)plVar5 + lVar11) = lVar13;
          }
          plVar5 = plVar5 + 1;
          lVar8 = lVar12;
          lVar12 = lVar12 + 8;
          if (plVar5 == param_2) {
            return;
          }
        } while( true );
      }
      if (plVar21 == param_2 || plVar5 == param_2) {
        return;
      }
      lVar8 = 8;
      plVar6 = plVar21;
      do {
        plVar14 = plVar5;
        lVar16 = *plVar6;
        lVar13 = *plVar14;
        lVar12 = *(long *)(lVar13 + 0x40);
        lVar19 = *(long *)(lVar13 + 0x48);
        bVar3 = lVar19 < *(long *)(lVar16 + 0x48);
        if (lVar12 != *(long *)(lVar16 + 0x40)) {
          bVar3 = lVar12 < *(long *)(lVar16 + 0x40);
        }
        lVar11 = lVar8;
        if (bVar3) {
          do {
            *(long *)((long)plVar21 + lVar11) = lVar16;
            lVar17 = lVar11 + -8;
            plVar5 = plVar21;
            if (lVar17 == 0) goto LAB_10a3eeff0;
            lVar16 = *(long *)((long)plVar21 + lVar11 + -0x10);
            bVar3 = lVar19 < *(long *)(lVar16 + 0x48);
            if (lVar12 != *(long *)(lVar16 + 0x40)) {
              bVar3 = lVar12 < *(long *)(lVar16 + 0x40);
            }
            lVar11 = lVar17;
          } while (bVar3);
          plVar5 = (long *)((long)plVar21 + lVar17);
LAB_10a3eeff0:
          *plVar5 = lVar13;
        }
        lVar8 = lVar8 + 8;
        plVar5 = plVar14 + 1;
        plVar6 = plVar14;
        if (plVar14 + 1 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (plVar21 == param_2) {
        return;
      }
      uVar9 = uVar10 - 2 >> 1;
      uVar15 = uVar9;
      do {
        if ((long)uVar15 <= (long)uVar9) {
          uVar20 = uVar15 << 1 | 1;
          plVar5 = plVar21 + uVar20;
          uVar2 = uVar15 * 2 + 2;
          lVar12 = *plVar5;
          plVar6 = plVar5;
          lVar8 = lVar12;
          uVar7 = uVar20;
          if ((long)uVar2 < (long)uVar10) {
            lVar8 = plVar5[1];
            bVar3 = *(long *)(lVar12 + 0x48) < *(long *)(lVar8 + 0x48);
            if (*(long *)(lVar12 + 0x40) != *(long *)(lVar8 + 0x40)) {
              bVar3 = *(long *)(lVar12 + 0x40) < *(long *)(lVar8 + 0x40);
            }
            plVar6 = plVar5 + 1;
            uVar7 = uVar2;
            if (!bVar3) {
              plVar6 = plVar5;
              lVar8 = lVar12;
              uVar7 = uVar20;
            }
          }
          lVar13 = plVar21[uVar15];
          lVar12 = *(long *)(lVar13 + 0x40);
          lVar19 = *(long *)(lVar13 + 0x48);
          bVar3 = *(long *)(lVar8 + 0x48) < lVar19;
          if (*(long *)(lVar8 + 0x40) != lVar12) {
            bVar3 = *(long *)(lVar8 + 0x40) < lVar12;
          }
          plVar5 = plVar21 + uVar15;
          if (!bVar3) {
            do {
              plVar14 = plVar6;
              *plVar5 = lVar8;
              if ((long)uVar9 < (long)uVar7) break;
              uVar20 = uVar7 << 1 | 1;
              plVar5 = plVar21 + uVar20;
              uVar2 = uVar7 * 2 + 2;
              lVar16 = *plVar5;
              uVar7 = uVar20;
              plVar6 = plVar5;
              lVar8 = lVar16;
              if ((long)uVar2 < (long)uVar10) {
                lVar8 = plVar5[1];
                bVar3 = *(long *)(lVar16 + 0x48) < *(long *)(lVar8 + 0x48);
                if (*(long *)(lVar16 + 0x40) != *(long *)(lVar8 + 0x40)) {
                  bVar3 = *(long *)(lVar16 + 0x40) < *(long *)(lVar8 + 0x40);
                }
                uVar7 = uVar2;
                plVar6 = plVar5 + 1;
                if (!bVar3) {
                  uVar7 = uVar20;
                  plVar6 = plVar5;
                  lVar8 = lVar16;
                }
              }
              bVar3 = *(long *)(lVar8 + 0x48) < lVar19;
              if (*(long *)(lVar8 + 0x40) != lVar12) {
                bVar3 = *(long *)(lVar8 + 0x40) < lVar12;
              }
              plVar5 = plVar14;
            } while (!bVar3);
            *plVar14 = lVar13;
          }
        }
        bVar3 = uVar15 != 0;
        uVar15 = uVar15 - 1;
      } while (bVar3);
      do {
        lVar8 = *plVar21;
        plVar5 = plVar21;
        uVar15 = 0;
        do {
          plVar14 = plVar5 + uVar15 + 1;
          lVar19 = *plVar14;
          uVar2 = uVar15 << 1 | 1;
          uVar9 = uVar15 * 2 + 2;
          plVar6 = plVar14;
          lVar12 = lVar19;
          uVar20 = uVar2;
          if ((long)uVar9 < (long)uVar10) {
            lVar12 = plVar5[uVar15 + 2];
            bVar3 = *(long *)(lVar19 + 0x48) < *(long *)(lVar12 + 0x48);
            if (*(long *)(lVar19 + 0x40) != *(long *)(lVar12 + 0x40)) {
              bVar3 = *(long *)(lVar19 + 0x40) < *(long *)(lVar12 + 0x40);
            }
            plVar6 = plVar5 + uVar15 + 2;
            uVar20 = uVar9;
            if (!bVar3) {
              plVar6 = plVar14;
              lVar12 = lVar19;
              uVar20 = uVar2;
            }
          }
          *plVar5 = lVar12;
          plVar5 = plVar6;
          uVar15 = uVar20;
        } while ((long)uVar20 <= (long)(uVar10 - 2 >> 1));
        param_2 = param_2 + -1;
        if (plVar6 == param_2) {
          *plVar6 = lVar8;
        }
        else {
          *plVar6 = *param_2;
          *param_2 = lVar8;
          lVar8 = (long)plVar6 + (8 - (long)plVar21) >> 3;
          if (1 < lVar8) {
            uVar15 = lVar8 - 2U >> 1;
            lVar13 = plVar21[uVar15];
            lVar19 = *plVar6;
            lVar8 = *(long *)(lVar19 + 0x40);
            lVar12 = *(long *)(lVar19 + 0x48);
            bVar3 = *(long *)(lVar13 + 0x48) < lVar12;
            if (*(long *)(lVar13 + 0x40) != lVar8) {
              bVar3 = *(long *)(lVar13 + 0x40) < lVar8;
            }
            plVar5 = plVar21 + uVar15;
            if (bVar3) {
              do {
                plVar14 = plVar5;
                *plVar6 = lVar13;
                if (uVar15 == 0) break;
                uVar15 = uVar15 - 1 >> 1;
                lVar13 = plVar21[uVar15];
                bVar3 = *(long *)(lVar13 + 0x48) < lVar12;
                if (*(long *)(lVar13 + 0x40) != lVar8) {
                  bVar3 = *(long *)(lVar13 + 0x40) < lVar8;
                }
                plVar6 = plVar14;
                plVar5 = plVar21 + uVar15;
              } while (bVar3);
              *plVar14 = lVar19;
            }
          }
        }
        bVar3 = (long)uVar10 < 3;
        uVar10 = uVar10 - 1;
        if (bVar3) {
          return;
        }
      } while( true );
    }
    plVar5 = plVar21 + (uVar10 >> 1);
    lVar12 = param_2[-1];
    lVar8 = *(long *)(lVar12 + 0x40);
    if (uVar10 < 0x81) {
      lVar17 = *plVar21;
      lVar11 = *plVar5;
      lVar19 = *(long *)(lVar17 + 0x40);
      lVar13 = *(long *)(lVar11 + 0x40);
      lVar16 = *(long *)(lVar11 + 0x48);
      bVar3 = *(long *)(lVar17 + 0x48) < lVar16;
      if (lVar19 != lVar13) {
        bVar3 = lVar19 < lVar13;
      }
      bVar1 = *(long *)(lVar12 + 0x48) < *(long *)(lVar17 + 0x48);
      if (lVar8 != lVar19) {
        bVar1 = lVar8 < lVar19;
      }
      if (bVar3) {
        if (bVar1) {
          *plVar5 = lVar12;
        }
        else {
          *plVar5 = lVar17;
          *plVar21 = lVar11;
          lVar8 = param_2[-1];
          bVar3 = *(long *)(lVar8 + 0x48) < lVar16;
          if (*(long *)(lVar8 + 0x40) != lVar13) {
            bVar3 = *(long *)(lVar8 + 0x40) < lVar13;
          }
          if (!bVar3) goto LAB_10a3eeab4;
          *plVar21 = lVar8;
        }
        param_2[-1] = lVar11;
      }
      else if (bVar1) {
        *plVar21 = lVar12;
        param_2[-1] = lVar17;
        lVar8 = *plVar21;
        lVar12 = *plVar5;
        bVar3 = *(long *)(lVar8 + 0x48) < *(long *)(lVar12 + 0x48);
        if (*(long *)(lVar8 + 0x40) != *(long *)(lVar12 + 0x40)) {
          bVar3 = *(long *)(lVar8 + 0x40) < *(long *)(lVar12 + 0x40);
        }
        if (bVar3) {
          *plVar5 = lVar8;
          *plVar21 = lVar12;
        }
      }
    }
    else {
      lVar17 = *plVar5;
      lVar11 = *plVar21;
      lVar19 = *(long *)(lVar17 + 0x40);
      lVar13 = *(long *)(lVar11 + 0x40);
      lVar16 = *(long *)(lVar11 + 0x48);
      bVar3 = *(long *)(lVar17 + 0x48) < lVar16;
      if (lVar19 != lVar13) {
        bVar3 = lVar19 < lVar13;
      }
      bVar1 = *(long *)(lVar12 + 0x48) < *(long *)(lVar17 + 0x48);
      if (lVar8 != lVar19) {
        bVar1 = lVar8 < lVar19;
      }
      if (bVar3) {
        if (bVar1) {
          *plVar21 = lVar12;
        }
        else {
          *plVar21 = lVar17;
          *plVar5 = lVar11;
          lVar8 = param_2[-1];
          bVar3 = *(long *)(lVar8 + 0x48) < lVar16;
          if (*(long *)(lVar8 + 0x40) != lVar13) {
            bVar3 = *(long *)(lVar8 + 0x40) < lVar13;
          }
          if (!bVar3) goto LAB_10a3ee834;
          *plVar5 = lVar8;
        }
        param_2[-1] = lVar11;
      }
      else if (bVar1) {
        *plVar5 = lVar12;
        param_2[-1] = lVar17;
        lVar8 = *plVar5;
        lVar12 = *plVar21;
        bVar3 = *(long *)(lVar8 + 0x48) < *(long *)(lVar12 + 0x48);
        if (*(long *)(lVar8 + 0x40) != *(long *)(lVar12 + 0x40)) {
          bVar3 = *(long *)(lVar8 + 0x40) < *(long *)(lVar12 + 0x40);
        }
        if (bVar3) {
          *plVar21 = lVar8;
          *plVar5 = lVar12;
        }
      }
LAB_10a3ee834:
      plVar6 = plVar5 + -1;
      lVar16 = *plVar6;
      lVar13 = plVar21[1];
      lVar8 = *(long *)(lVar16 + 0x40);
      lVar12 = *(long *)(lVar13 + 0x40);
      lVar19 = *(long *)(lVar13 + 0x48);
      bVar3 = *(long *)(lVar16 + 0x48) < lVar19;
      if (lVar8 != lVar12) {
        bVar3 = lVar8 < lVar12;
      }
      lVar11 = param_2[-2];
      bVar1 = *(long *)(lVar11 + 0x48) < *(long *)(lVar16 + 0x48);
      if (*(long *)(lVar11 + 0x40) != lVar8) {
        bVar1 = *(long *)(lVar11 + 0x40) < lVar8;
      }
      if (bVar3) {
        if (bVar1) {
          plVar21[1] = lVar11;
        }
        else {
          plVar21[1] = lVar16;
          *plVar6 = lVar13;
          lVar8 = param_2[-2];
          bVar3 = *(long *)(lVar8 + 0x48) < lVar19;
          if (*(long *)(lVar8 + 0x40) != lVar12) {
            bVar3 = *(long *)(lVar8 + 0x40) < lVar12;
          }
          if (!bVar3) goto LAB_10a3ee938;
          *plVar6 = lVar8;
        }
        param_2[-2] = lVar13;
      }
      else if (bVar1) {
        *plVar6 = lVar11;
        param_2[-2] = lVar16;
        lVar8 = *plVar6;
        lVar12 = plVar21[1];
        bVar3 = *(long *)(lVar8 + 0x48) < *(long *)(lVar12 + 0x48);
        if (*(long *)(lVar8 + 0x40) != *(long *)(lVar12 + 0x40)) {
          bVar3 = *(long *)(lVar8 + 0x40) < *(long *)(lVar12 + 0x40);
        }
        if (bVar3) {
          plVar21[1] = lVar8;
          *plVar6 = lVar12;
        }
      }
LAB_10a3ee938:
      plVar14 = plVar5 + 1;
      lVar16 = *plVar14;
      lVar13 = plVar21[2];
      lVar8 = *(long *)(lVar16 + 0x40);
      lVar12 = *(long *)(lVar13 + 0x40);
      lVar19 = *(long *)(lVar13 + 0x48);
      bVar3 = *(long *)(lVar16 + 0x48) < lVar19;
      if (lVar8 != lVar12) {
        bVar3 = lVar8 < lVar12;
      }
      lVar11 = param_2[-3];
      bVar1 = *(long *)(lVar11 + 0x48) < *(long *)(lVar16 + 0x48);
      if (*(long *)(lVar11 + 0x40) != lVar8) {
        bVar1 = *(long *)(lVar11 + 0x40) < lVar8;
      }
      if (bVar3) {
        if (bVar1) {
          plVar21[2] = lVar11;
        }
        else {
          plVar21[2] = lVar16;
          *plVar14 = lVar13;
          lVar8 = param_2[-3];
          bVar3 = *(long *)(lVar8 + 0x48) < lVar19;
          if (*(long *)(lVar8 + 0x40) != lVar12) {
            bVar3 = *(long *)(lVar8 + 0x40) < lVar12;
          }
          if (!bVar3) goto LAB_10a3eea04;
          *plVar14 = lVar8;
        }
        param_2[-3] = lVar13;
      }
      else if (bVar1) {
        *plVar14 = lVar11;
        param_2[-3] = lVar16;
        lVar8 = *plVar14;
        lVar12 = plVar21[2];
        bVar3 = *(long *)(lVar8 + 0x48) < *(long *)(lVar12 + 0x48);
        if (*(long *)(lVar8 + 0x40) != *(long *)(lVar12 + 0x40)) {
          bVar3 = *(long *)(lVar8 + 0x40) < *(long *)(lVar12 + 0x40);
        }
        if (bVar3) {
          plVar21[2] = lVar8;
          *plVar14 = lVar12;
        }
      }
LAB_10a3eea04:
      lVar8 = plVar5[-1];
      lVar13 = *plVar5;
      lVar12 = *(long *)(lVar13 + 0x40);
      lVar19 = *(long *)(lVar8 + 0x40);
      lVar16 = *(long *)(lVar8 + 0x48);
      bVar3 = *(long *)(lVar13 + 0x48) < lVar16;
      if (lVar12 != lVar19) {
        bVar3 = lVar12 < lVar19;
      }
      lVar18 = plVar5[1];
      lVar11 = *(long *)(lVar18 + 0x40);
      lVar17 = *(long *)(lVar18 + 0x48);
      bVar1 = lVar17 < *(long *)(lVar13 + 0x48);
      if (lVar11 != lVar12) {
        bVar1 = lVar11 < lVar12;
      }
      if (bVar3) {
        lVar12 = lVar13;
        if (!bVar1) {
          plVar5[-1] = lVar13;
          *plVar5 = lVar8;
          bVar3 = lVar17 < lVar16;
          if (lVar11 != lVar19) {
            bVar3 = lVar11 < lVar19;
          }
          plVar6 = plVar5;
          lVar13 = lVar8;
          lVar12 = lVar18;
          if (!bVar3) goto LAB_10a3eeaa8;
        }
LAB_10a3eeaa0:
        *plVar6 = lVar18;
        *plVar14 = lVar8;
        lVar13 = lVar12;
      }
      else if (bVar1) {
        *plVar5 = lVar18;
        plVar5[1] = lVar13;
        bVar3 = lVar17 < lVar16;
        if (lVar11 != lVar19) {
          bVar3 = lVar11 < lVar19;
        }
        plVar14 = plVar5;
        lVar13 = lVar18;
        lVar12 = lVar8;
        if (bVar3) goto LAB_10a3eeaa0;
      }
LAB_10a3eeaa8:
      lVar8 = *plVar21;
      *plVar21 = lVar13;
      *plVar5 = lVar8;
    }
LAB_10a3eeab4:
    param_3 = param_3 + -1;
    lVar8 = *plVar21;
    param_1 = plVar21;
    if ((param_4 & 1) == 0) {
      lVar12 = *(long *)(plVar21[-1] + 0x40);
      lVar19 = *(long *)(lVar8 + 0x40);
      lVar13 = *(long *)(lVar8 + 0x48);
      bVar3 = *(long *)(plVar21[-1] + 0x48) < lVar13;
      if (lVar12 != lVar19) {
        bVar3 = lVar12 < lVar19;
      }
      if (!bVar3) {
        lVar12 = *(long *)(param_2[-1] + 0x40);
        bVar3 = lVar13 < *(long *)(param_2[-1] + 0x48);
        if (lVar19 != lVar12) {
          bVar3 = lVar19 < lVar12;
        }
        if (bVar3) {
          do {
            param_1 = param_1 + 1;
            if (param_1 == param_2) goto LAB_10a3ef338;
            lVar12 = *(long *)(*param_1 + 0x40);
            bVar3 = lVar13 < *(long *)(*param_1 + 0x48);
            if (lVar19 != lVar12) {
              bVar3 = lVar19 < lVar12;
            }
          } while (!bVar3);
        }
        else {
          do {
            param_1 = param_1 + 1;
            if (param_2 <= param_1) break;
            lVar12 = *(long *)(*param_1 + 0x40);
            bVar3 = lVar13 < *(long *)(*param_1 + 0x48);
            if (lVar19 != lVar12) {
              bVar3 = lVar19 < lVar12;
            }
          } while (!bVar3);
        }
        plVar5 = param_2;
        if (param_1 < param_2) {
          do {
            if (plVar5 == plVar21) goto LAB_10a3ef338;
            plVar5 = plVar5 + -1;
            lVar12 = *(long *)(*plVar5 + 0x40);
            bVar3 = lVar13 < *(long *)(*plVar5 + 0x48);
            if (lVar19 != lVar12) {
              bVar3 = lVar19 < lVar12;
            }
          } while (bVar3);
        }
        if (param_1 < plVar5) {
          lVar12 = *param_1;
          lVar16 = *plVar5;
          do {
            *param_1 = lVar16;
            *plVar5 = lVar12;
            do {
              param_1 = param_1 + 1;
              if (param_1 == param_2) goto LAB_10a3ef338;
              lVar12 = *param_1;
              bVar3 = lVar13 < *(long *)(lVar12 + 0x48);
              if (lVar19 != *(long *)(lVar12 + 0x40)) {
                bVar3 = lVar19 < *(long *)(lVar12 + 0x40);
              }
            } while (!bVar3);
            do {
              if (plVar5 == plVar21) goto LAB_10a3ef338;
              plVar5 = plVar5 + -1;
              lVar16 = *plVar5;
              bVar3 = lVar13 < *(long *)(lVar16 + 0x48);
              if (lVar19 != *(long *)(lVar16 + 0x40)) {
                bVar3 = lVar19 < *(long *)(lVar16 + 0x40);
              }
            } while (bVar3);
          } while (param_1 < plVar5);
        }
        plVar5 = param_1 + -1;
        if (plVar5 != plVar21) {
          *plVar21 = *plVar5;
        }
        param_4 = 0;
        *plVar5 = lVar8;
        goto LAB_10a3ee688;
      }
    }
    lVar12 = 0;
    do {
      plVar5 = (long *)((long)plVar21 + lVar12 + 8);
      if (plVar5 == param_2) goto LAB_10a3ef338;
      lVar16 = *plVar5;
      lVar19 = *(long *)(lVar8 + 0x40);
      lVar13 = *(long *)(lVar8 + 0x48);
      bVar3 = *(long *)(lVar16 + 0x48) < lVar13;
      if (*(long *)(lVar16 + 0x40) != lVar19) {
        bVar3 = *(long *)(lVar16 + 0x40) < lVar19;
      }
      lVar12 = lVar12 + 8;
    } while (bVar3);
    plVar5 = (long *)((long)plVar21 + lVar12);
    plVar6 = param_2;
    if (lVar12 == 8) {
      do {
        if (plVar6 <= plVar5) break;
        plVar6 = plVar6 + -1;
        lVar12 = *(long *)(*plVar6 + 0x40);
        bVar3 = *(long *)(*plVar6 + 0x48) < lVar13;
        if (lVar12 != lVar19) {
          bVar3 = lVar12 < lVar19;
        }
      } while (!bVar3);
    }
    else {
      do {
        if (plVar6 == plVar21) {
LAB_10a3ef338:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a3ef33c);
          (*pcVar4)();
        }
        plVar6 = plVar6 + -1;
        lVar12 = *(long *)(*plVar6 + 0x40);
        bVar3 = *(long *)(*plVar6 + 0x48) < lVar13;
        if (lVar12 != lVar19) {
          bVar3 = lVar12 < lVar19;
        }
      } while (!bVar3);
    }
    param_1 = plVar5;
    if (plVar5 < plVar6) {
      lVar12 = *plVar6;
      plVar14 = plVar6;
      do {
        *param_1 = lVar12;
        *plVar14 = lVar16;
        do {
          param_1 = param_1 + 1;
          if (param_1 == param_2) goto LAB_10a3ef338;
          lVar16 = *param_1;
          bVar3 = *(long *)(lVar16 + 0x48) < lVar13;
          if (*(long *)(lVar16 + 0x40) != lVar19) {
            bVar3 = *(long *)(lVar16 + 0x40) < lVar19;
          }
        } while (bVar3);
        do {
          if (plVar14 == plVar21) goto LAB_10a3ef338;
          plVar14 = plVar14 + -1;
          lVar12 = *plVar14;
          bVar3 = *(long *)(lVar12 + 0x48) < lVar13;
          if (*(long *)(lVar12 + 0x40) != lVar19) {
            bVar3 = *(long *)(lVar12 + 0x40) < lVar19;
          }
        } while (!bVar3);
      } while (param_1 < plVar14);
    }
    plVar14 = param_1 + -1;
    if (plVar14 != plVar21) {
      *plVar21 = *plVar14;
    }
    *plVar14 = lVar8;
    if (plVar5 < plVar6) {
LAB_10a3eec5c:
      FUN_10a3ee65c(plVar21,plVar14,param_3,param_4 & 1);
      param_4 = 0;
    }
    else {
      plVar5 = plVar21;
      FUN_10a3ef4f8(plVar21,plVar14);
      plVar6 = param_1;
      FUN_10a3ef4f8(param_1,param_2);
      if ((int)plVar6 == 0) {
        if (((ulong)plVar5 & 1) == 0) goto LAB_10a3eec5c;
      }
      else {
        param_1 = plVar21;
        param_2 = plVar14;
        if (((ulong)plVar5 & 1) != 0) {
          return;
        }
      }
    }
  } while( true );
}



/* Entry: 10a3ef384; end: 10a3ef4f7;  */

void FUN_10a3ef384(long *param_1,long *param_2,long *param_3,long *param_4)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar4 = *param_2;
  lVar5 = *param_1;
  lVar6 = *(long *)(lVar4 + 0x40);
  lVar7 = *(long *)(lVar5 + 0x40);
  lVar3 = *(long *)(lVar5 + 0x48);
  bVar1 = *(long *)(lVar4 + 0x48) < lVar3;
  if (lVar6 != lVar7) {
    bVar1 = lVar6 < lVar7;
  }
  lVar8 = *param_3;
  bVar2 = *(long *)(lVar8 + 0x48) < *(long *)(lVar4 + 0x48);
  if (*(long *)(lVar8 + 0x40) != lVar6) {
    bVar2 = *(long *)(lVar8 + 0x40) < lVar6;
  }
  if (bVar1) {
    if (bVar2) {
      *param_1 = lVar8;
    }
    else {
      *param_1 = lVar4;
      *param_2 = lVar5;
      lVar8 = *param_3;
      bVar1 = *(long *)(lVar8 + 0x48) < lVar3;
      if (*(long *)(lVar8 + 0x40) != lVar7) {
        bVar1 = *(long *)(lVar8 + 0x40) < lVar7;
      }
      if (!bVar1) goto LAB_10a3ef45c;
      *param_2 = lVar8;
    }
    *param_3 = lVar5;
    lVar8 = lVar5;
  }
  else if (bVar2) {
    *param_2 = lVar8;
    *param_3 = lVar4;
    lVar6 = *param_2;
    lVar7 = *param_1;
    bVar1 = *(long *)(lVar6 + 0x48) < *(long *)(lVar7 + 0x48);
    if (*(long *)(lVar6 + 0x40) != *(long *)(lVar7 + 0x40)) {
      bVar1 = *(long *)(lVar6 + 0x40) < *(long *)(lVar7 + 0x40);
    }
    lVar8 = lVar4;
    if (bVar1) {
      *param_1 = lVar6;
      *param_2 = lVar7;
      lVar8 = *param_3;
    }
  }
LAB_10a3ef45c:
  lVar6 = *param_4;
  bVar1 = *(long *)(lVar6 + 0x48) < *(long *)(lVar8 + 0x48);
  if (*(long *)(lVar6 + 0x40) != *(long *)(lVar8 + 0x40)) {
    bVar1 = *(long *)(lVar6 + 0x40) < *(long *)(lVar8 + 0x40);
  }
  if (bVar1) {
    *param_3 = lVar6;
    *param_4 = lVar8;
    lVar6 = *param_3;
    lVar7 = *param_2;
    bVar1 = *(long *)(lVar6 + 0x48) < *(long *)(lVar7 + 0x48);
    if (*(long *)(lVar6 + 0x40) != *(long *)(lVar7 + 0x40)) {
      bVar1 = *(long *)(lVar6 + 0x40) < *(long *)(lVar7 + 0x40);
    }
    if (bVar1) {
      *param_2 = lVar6;
      *param_3 = lVar7;
      lVar6 = *param_2;
      lVar7 = *param_1;
      bVar1 = *(long *)(lVar6 + 0x48) < *(long *)(lVar7 + 0x48);
      if (*(long *)(lVar6 + 0x40) != *(long *)(lVar7 + 0x40)) {
        bVar1 = *(long *)(lVar6 + 0x40) < *(long *)(lVar7 + 0x40);
      }
      if (bVar1) {
        *param_1 = lVar6;
        *param_2 = lVar7;
      }
    }
  }
  return;
}



/* Entry: 10a3ef4f8; end: 10a3ef893;  */

/* WARNING: Type propagation algorithm not settling */

bool FUN_10a3ef4f8(long *param_1,long *param_2)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  
  uVar7 = (long)param_2 - (long)param_1 >> 3;
  if ((long)uVar7 < 3) {
    if (uVar7 < 2) {
      return true;
    }
    if (uVar7 == 2) {
      lVar8 = param_2[-1];
      lVar10 = *param_1;
      bVar1 = *(long *)(lVar8 + 0x48) < *(long *)(lVar10 + 0x48);
      if (*(long *)(lVar8 + 0x40) != *(long *)(lVar10 + 0x40)) {
        bVar1 = *(long *)(lVar8 + 0x40) < *(long *)(lVar10 + 0x40);
      }
      if (!bVar1) {
        return true;
      }
      *param_1 = lVar8;
      param_2[-1] = lVar10;
      return true;
    }
  }
  else {
    if (uVar7 == 3) {
      lVar8 = *param_1;
      lVar11 = param_1[1];
      lVar10 = *(long *)(lVar11 + 0x40);
      lVar4 = *(long *)(lVar8 + 0x40);
      lVar14 = *(long *)(lVar8 + 0x48);
      bVar1 = *(long *)(lVar11 + 0x48) < lVar14;
      if (lVar10 != lVar4) {
        bVar1 = lVar10 < lVar4;
      }
      lVar15 = param_2[-1];
      bVar2 = *(long *)(lVar15 + 0x48) < *(long *)(lVar11 + 0x48);
      if (*(long *)(lVar15 + 0x40) != lVar10) {
        bVar2 = *(long *)(lVar15 + 0x40) < lVar10;
      }
      if (bVar1) {
        if (bVar2) {
          *param_1 = lVar15;
        }
        else {
          *param_1 = lVar11;
          param_1[1] = lVar8;
          lVar10 = param_2[-1];
          bVar1 = *(long *)(lVar10 + 0x48) < lVar14;
          if (*(long *)(lVar10 + 0x40) != lVar4) {
            bVar1 = *(long *)(lVar10 + 0x40) < lVar4;
          }
          if (!bVar1) {
            return true;
          }
          param_1[1] = lVar10;
        }
        param_2[-1] = lVar8;
        return true;
      }
      if (!bVar2) {
        return true;
      }
      param_1[1] = lVar15;
      param_2[-1] = lVar11;
      lVar8 = *param_1;
      lVar10 = param_1[1];
      bVar1 = *(long *)(lVar10 + 0x48) < *(long *)(lVar8 + 0x48);
      if (*(long *)(lVar10 + 0x40) != *(long *)(lVar8 + 0x40)) {
        bVar1 = *(long *)(lVar10 + 0x40) < *(long *)(lVar8 + 0x40);
      }
      if (!bVar1) {
        return true;
      }
      *param_1 = lVar10;
      param_1[1] = lVar8;
      return true;
    }
    if (uVar7 == 4) {
      FUN_10a3ef384(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
      return true;
    }
    if (uVar7 == 5) {
      FUN_10a3ef384(param_1,param_1 + 1,param_1 + 2,param_1 + 3);
      lVar8 = param_2[-1];
      lVar10 = param_1[3];
      bVar1 = *(long *)(lVar8 + 0x48) < *(long *)(lVar10 + 0x48);
      if (*(long *)(lVar8 + 0x40) != *(long *)(lVar10 + 0x40)) {
        bVar1 = *(long *)(lVar8 + 0x40) < *(long *)(lVar10 + 0x40);
      }
      if (!bVar1) {
        return true;
      }
      param_1[3] = lVar8;
      param_2[-1] = lVar10;
      lVar8 = param_1[2];
      lVar4 = param_1[3];
      lVar10 = *(long *)(lVar4 + 0x40);
      lVar11 = *(long *)(lVar4 + 0x48);
      bVar1 = lVar11 < *(long *)(lVar8 + 0x48);
      if (lVar10 != *(long *)(lVar8 + 0x40)) {
        bVar1 = lVar10 < *(long *)(lVar8 + 0x40);
      }
      if (!bVar1) {
        return true;
      }
      param_1[2] = lVar4;
      param_1[3] = lVar8;
      lVar8 = param_1[1];
      bVar1 = lVar11 < *(long *)(lVar8 + 0x48);
      if (lVar10 != *(long *)(lVar8 + 0x40)) {
        bVar1 = lVar10 < *(long *)(lVar8 + 0x40);
      }
      if (!bVar1) {
        return true;
      }
      param_1[1] = lVar4;
      param_1[2] = lVar8;
      lVar8 = *param_1;
      bVar1 = lVar11 < *(long *)(lVar8 + 0x48);
      if (lVar10 != *(long *)(lVar8 + 0x40)) {
        bVar1 = lVar10 < *(long *)(lVar8 + 0x40);
      }
      if (!bVar1) {
        return true;
      }
      *param_1 = lVar4;
      param_1[1] = lVar8;
      return true;
    }
  }
  plVar9 = param_1 + 2;
  lVar11 = *plVar9;
  plVar12 = param_1 + 1;
  lVar15 = *plVar12;
  lVar14 = *param_1;
  lVar8 = *(long *)(lVar15 + 0x40);
  lVar10 = *(long *)(lVar14 + 0x40);
  lVar4 = *(long *)(lVar14 + 0x48);
  bVar1 = *(long *)(lVar15 + 0x48) < lVar4;
  if (lVar8 != lVar10) {
    bVar1 = lVar8 < lVar10;
  }
  lVar3 = *(long *)(lVar11 + 0x40);
  lVar5 = *(long *)(lVar11 + 0x48);
  bVar2 = lVar5 < *(long *)(lVar15 + 0x48);
  if (lVar3 != lVar8) {
    bVar2 = lVar3 < lVar8;
  }
  plVar16 = param_1;
  if (bVar1) {
    plVar6 = plVar9;
    if (!bVar2) {
      *param_1 = lVar15;
      param_1[1] = lVar14;
      plVar16 = plVar12;
      bVar1 = lVar5 < lVar4;
      if (lVar3 != lVar10) {
        bVar1 = lVar3 < lVar10;
      }
      goto joined_r0x00010a3ef78c;
    }
  }
  else {
    if (!bVar2) goto LAB_10a3ef798;
    *plVar12 = lVar11;
    *plVar9 = lVar15;
    plVar6 = plVar12;
    bVar1 = lVar5 < lVar4;
    if (lVar3 != lVar10) {
      bVar1 = lVar3 < lVar10;
    }
joined_r0x00010a3ef78c:
    if (!bVar1) goto LAB_10a3ef798;
  }
  *plVar16 = lVar11;
  *plVar6 = lVar14;
LAB_10a3ef798:
  if (param_1 + 3 != param_2) {
    iVar13 = 0;
    lVar8 = 0x18;
    plVar12 = param_1 + 3;
    do {
      lVar11 = *plVar12;
      lVar14 = *plVar9;
      lVar10 = *(long *)(lVar11 + 0x40);
      lVar4 = *(long *)(lVar11 + 0x48);
      bVar1 = lVar4 < *(long *)(lVar14 + 0x48);
      if (lVar10 != *(long *)(lVar14 + 0x40)) {
        bVar1 = lVar10 < *(long *)(lVar14 + 0x40);
      }
      lVar15 = lVar8;
      if (bVar1) {
        do {
          *(long *)((long)param_1 + lVar15) = lVar14;
          lVar3 = lVar15 + -8;
          plVar9 = param_1;
          if (lVar3 == 0) goto LAB_10a3ef81c;
          lVar14 = *(long *)((long)param_1 + lVar15 + -0x10);
          bVar1 = lVar4 < *(long *)(lVar14 + 0x48);
          if (lVar10 != *(long *)(lVar14 + 0x40)) {
            bVar1 = lVar10 < *(long *)(lVar14 + 0x40);
          }
          lVar15 = lVar3;
        } while (bVar1);
        plVar9 = (long *)((long)param_1 + lVar3);
LAB_10a3ef81c:
        *plVar9 = lVar11;
        iVar13 = iVar13 + 1;
        if (iVar13 == 8) {
          return plVar12 + 1 == param_2;
        }
      }
      plVar16 = plVar12 + 1;
      lVar8 = lVar8 + 8;
      plVar9 = plVar12;
      plVar12 = plVar16;
    } while (plVar16 != param_2);
  }
  return true;
}


