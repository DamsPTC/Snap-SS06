/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1073b4124; end: 1073b414f;  */

void FUN_1073b4124(undefined8 param_1,undefined8 param_2)

{
  func_0x0001073b44f8(param_2,param_1,&PTR_DAT_1109ab520);
  func_0x0001073b44e8();
  return;
}



/* Entry: 1073b4150; end: 1073b4163;  */

undefined ** FUN_1073b4150(void)

{
  return &PTR_DAT_1109ab520;
}



/* Entry: 1073b4164; end: 1073b419f;  */

void FUN_1073b4164(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  *puVar1 = &PTR_DAT_1109ab540;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = uVar2;
  return;
}



/* Entry: 1073b41a0; end: 1073b41cf;  */

void FUN_1073b41a0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_2 = &PTR_DAT_1109ab540;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1073b41d0; end: 1073b4233;  */

double FUN_1073b41d0(long param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_60 [48];
  
  dVar1 = *param_3;
  func_0x00010725aa9c(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                      *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),auStack_60);
  dVar2 = *param_2;
  FUN_1073b426c(dVar1,0x3eb0c6f7a0b5ed8d,auStack_60);
  return dVar2 + (param_2[1] - *param_2) * dVar1;
}



/* Entry: 1073b4234; end: 1073b425f;  */

void FUN_1073b4234(undefined8 param_1,undefined8 param_2)

{
  func_0x0001073b44f8(param_2,param_1,&PTR_DAT_1109ab5a0);
  func_0x0001073b44e8();
  return;
}



/* Entry: 1073b4260; end: 1073b426b;  */

undefined ** FUN_1073b4260(void)

{
  return &PTR_DAT_1109ab5a0;
}



/* Entry: 1073b426c; end: 1073b429f;  */

double FUN_1073b426c(double param_1,long param_2)

{
  FUN_1073b42a0();
  return param_1 * (*(double *)(param_2 + 0x18) +
                   param_1 * (*(double *)(param_2 + 0x20) + param_1 * *(double *)(param_2 + 0x28)));
}



/* Entry: 1073b42a0; end: 1073b437f;  */

double FUN_1073b42a0(double param_1,double param_2,double *param_3)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  iVar1 = 8;
  dVar2 = param_1;
  do {
    dVar5 = param_3[1];
    dVar3 = dVar2 * (*param_3 + dVar2 * (dVar5 + dVar2 * param_3[2]));
    if (ABS(dVar3 - param_1) < param_2) {
      return dVar2;
    }
    dVar5 = *param_3 + dVar2 * (dVar5 + dVar5 + dVar2 * param_3[2] * 3.0);
    if (ABS(dVar5) < 1e-06) break;
    dVar2 = dVar2 - (dVar3 - param_1) / dVar5;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  dVar2 = 0.0;
  if ((0.0 <= param_1) && (dVar2 = 1.0, param_1 <= 1.0)) {
    dVar5 = 1.0;
    dVar3 = 0.0;
    dVar2 = param_1;
    while ((dVar3 < dVar5 &&
           (dVar4 = dVar2 * (*param_3 + dVar2 * (param_3[1] + dVar2 * param_3[2])),
           param_2 <= ABS(dVar4 - param_1)))) {
      if (param_1 <= dVar4) {
        dVar5 = dVar2;
        dVar2 = dVar3;
      }
      dVar3 = dVar2;
      dVar2 = dVar3 + (dVar5 - dVar3) * 0.5;
    }
  }
  return dVar2;
}



/* Entry: 1073b4380; end: 1073b43b3;  */

void FUN_1073b4380(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_1109ab5c0;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
  return;
}



/* Entry: 1073b43b4; end: 1073b43db;  */

void FUN_1073b43b4(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109ab5c0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 8);
  return;
}



/* Entry: 1073b43dc; end: 1073b449b;  */

double FUN_1073b43dc(long param_1,double *param_2,double *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  
  dVar6 = *param_3;
  fVar5 = 2.7182817;
  fVar1 = fVar5;
  _powf(0x402df854,(float)(dVar6 * -5.0));
  fVar4 = (float)(dVar6 * 5.0);
  _powf(0x402df854,fVar4);
  fVar2 = *(float *)(param_1 + 8);
  fVar3 = (float)(dVar6 * (double)(SQRT(fVar2) * 5.0));
  ___sincosf_stret(fVar3);
  return *param_2 +
         (param_2[1] - *param_2) *
         (double)(fVar1 * -0.2 * (SQRT(fVar2) * fVar3 + fVar5 * -5.0 + fVar4 * 5.0));
}



/* Entry: 1073b449c; end: 1073b44c7;  */

void FUN_1073b449c(undefined8 param_1,undefined8 param_2)

{
  func_0x0001073b44f8(param_2,param_1,&PTR_DAT_1109ab620);
  func_0x0001073b44e8();
  return;
}



/* Entry: 1073b44c8; end: 1073b44ff;  */

undefined ** FUN_1073b44c8(void)

{
  return &PTR_DAT_1109ab620;
}



/* Entry: 1073b4500; end: 1073b456b;  */

undefined8 * FUN_1073b4500(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109ab640;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  FUN_1073b456c(param_1 + 7);
  return param_1;
}



/* Entry: 1073b456c; end: 1073b45d7;  */

void FUN_1073b456c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 4) = 0x3f800000;
  *param_1 = puVar1;
  return;
}



/* Entry: 1073b45d8; end: 1073b45db;  */

long FUN_1073b45d8(long param_1)

{
  FUN_1073b4e18(param_1 + 0x38);
  func_0x0001000e30f4(param_1 + 0x20);
  FUN_1073b4994(param_1 + 8);
  return param_1;
}



/* Entry: 1073b45dc; end: 1073b45ef;  */

void FUN_1073b45dc(void)

{
  func_0x0001073b45a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073b45f0; end: 1073b475f;  */

void FUN_1073b45f0(long param_1,long *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  
  puVar8 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)param_2[1];
  lVar9 = (long)puVar1 - (long)puVar8;
  if (0 < lVar9 >> 4) {
    plVar7 = (long *)(param_1 + 8);
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    if (*(long *)(param_1 + 0x18) - (long)puVar6 < lVar9) {
      plVar4 = plVar7;
      FUN_1073b4a6c(plVar7,(lVar9 >> 4) + ((long)puVar6 - *plVar7 >> 4));
      FUN_1073b4ac0(&uStack_68,plVar4,(long)puVar6 - *plVar7 >> 4,(long *)(param_1 + 0x18));
      puVar1 = (undefined8 *)((long)puStack_58 + lVar9);
      for (; puStack_58 != puVar1; puStack_58 = puStack_58 + 2) {
        lVar9 = puVar8[1];
        uVar5 = *puVar8;
        puStack_58[1] = puVar8[1];
        *puStack_58 = uVar5;
        if (lVar9 != 0) {
          plVar7 = (long *)(lVar9 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *plVar7 = *plVar7 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        puVar8 = puVar8 + 2;
      }
      puStack_58 = puVar1;
      _memcpy(puVar1,puVar6,*(long *)(param_1 + 0x10) - (long)puVar6);
      puStack_58 = (undefined8 *)((long)puStack_58 + (*(long *)(param_1 + 0x10) - (long)puVar6));
      *(undefined8 **)(param_1 + 0x10) = puVar6;
      lVar9 = lStack_60 - ((long)puVar6 - *(long *)(param_1 + 8));
      _memcpy(lVar9);
      uStack_68 = *(undefined8 *)(param_1 + 8);
      *(long *)(param_1 + 8) = lVar9;
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x18) = uStack_50;
      *(undefined8 **)(param_1 + 0x10) = puStack_58;
      lStack_60 = uStack_68;
      puStack_58 = (undefined8 *)uStack_68;
      uStack_50 = uVar5;
      FUN_1073b4b48(&uStack_68);
    }
    else {
      for (; puVar8 != puVar1; puVar8 = puVar8 + 2) {
        lVar9 = puVar8[1];
        uVar5 = *puVar8;
        puVar6[1] = puVar8[1];
        *puVar6 = uVar5;
        if (lVar9 != 0) {
          plVar7 = (long *)(lVar9 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *plVar7 = *plVar7 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        puVar6 = puVar6 + 2;
      }
      *(undefined8 **)(param_1 + 0x10) = puVar6;
    }
  }
  return;
}



/* Entry: 1073b4760; end: 1073b4983;  */

void FUN_1073b4760(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  
  FUN_1073b4984(param_1 + 0x20,*(undefined8 *)(param_1 + 0x28),*param_2,param_2[1]);
  lVar10 = *param_2;
  lVar1 = param_2[1];
  do {
    if (lVar10 == lVar1) {
      return;
    }
    plVar11 = *(long **)(param_1 + 0x38);
    plVar12 = (long *)plVar11[1];
    if ((plVar12 != (long *)0x0) && (plVar2 = plVar11 + 3, *plVar2 != 0)) {
      func_0x000100102e7c(plVar2,lVar10);
      uVar13 = (long)plVar12 - 1;
      if (((ulong)plVar12 & uVar13) == 0) {
        plVar14 = (long *)((ulong)plVar2 & uVar13);
      }
      else {
        plVar14 = plVar2;
        if (plVar12 <= plVar2) {
          uVar4 = 0;
          if (plVar12 != (long *)0x0) {
            uVar4 = (ulong)plVar2 / (ulong)plVar12;
          }
          plVar14 = (long *)((long)plVar2 - uVar4 * (long)plVar12);
        }
      }
      plVar11 = *(long **)(*plVar11 + (long)plVar14 * 8);
      if (plVar11 != (long *)0x0) {
LAB_1073b47f4:
        while (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0) {
          plVar3 = (long *)plVar11[1];
          if (plVar3 != plVar2) goto LAB_1073b481c;
          plVar3 = plVar11 + 2;
          func_0x0001000e107c(plVar3,lVar10);
          if ((int)plVar3 != 0) {
            plVar12 = *(long **)(param_1 + 0x38);
            uVar4 = plVar12[1];
            uVar13 = plVar11[1];
            uVar6 = uVar4 - 1;
            if ((uVar4 & uVar6) == 0) {
              uVar13 = uVar6 & uVar13;
            }
            else if (uVar4 <= uVar13) {
              uVar8 = 0;
              if (uVar4 != 0) {
                uVar8 = uVar13 / uVar4;
              }
              uVar13 = uVar13 - uVar8 * uVar4;
            }
            lVar5 = *plVar11;
            lVar7 = *plVar12;
            plVar2 = *(long **)(lVar7 + uVar13 * 8);
            do {
              plVar14 = plVar2;
              plVar2 = (long *)*plVar14;
            } while ((long *)*plVar14 != plVar11);
            if (plVar14 == plVar12 + 2) {
LAB_1073b48cc:
              if (lVar5 == 0) {
LAB_1073b4900:
                *(undefined8 *)(lVar7 + uVar13 * 8) = 0;
                lVar5 = *plVar11;
                goto LAB_1073b4908;
              }
              uVar8 = *(ulong *)(lVar5 + 8);
              if ((uVar4 & uVar6) == 0) {
                uVar9 = uVar8 & uVar6;
              }
              else {
                uVar9 = uVar8;
                if (uVar4 <= uVar8) {
                  uVar9 = 0;
                  if (uVar4 != 0) {
                    uVar9 = uVar8 / uVar4;
                  }
                  uVar9 = uVar8 - uVar9 * uVar4;
                }
              }
              if (uVar9 != uVar13) goto LAB_1073b4900;
LAB_1073b4910:
              if ((uVar4 & uVar6) == 0) {
                uVar8 = uVar8 & uVar6;
              }
              else if (uVar4 <= uVar8) {
                uVar6 = 0;
                if (uVar4 != 0) {
                  uVar6 = uVar8 / uVar4;
                }
                uVar8 = uVar8 - uVar6 * uVar4;
              }
              if (uVar8 != uVar13) {
                *(long **)(lVar7 + uVar8 * 8) = plVar14;
                lVar5 = *plVar11;
              }
            }
            else {
              uVar8 = plVar14[1];
              if ((uVar4 & uVar6) == 0) {
                uVar8 = uVar8 & uVar6;
              }
              else if (uVar4 <= uVar8) {
                uVar9 = 0;
                if (uVar4 != 0) {
                  uVar9 = uVar8 / uVar4;
                }
                uVar8 = uVar8 - uVar9 * uVar4;
              }
              if (uVar8 != uVar13) goto LAB_1073b48cc;
LAB_1073b4908:
              if (lVar5 != 0) {
                uVar8 = *(ulong *)(lVar5 + 8);
                goto LAB_1073b4910;
              }
            }
            *plVar14 = lVar5;
            *plVar11 = 0;
            plVar12[3] = plVar12[3] + -1;
            func_0x0001073b4ed0(plVar11 + 2);
            __ZdlPv(plVar11);
            break;
          }
        }
      }
    }
LAB_1073b4964:
    lVar10 = lVar10 + 0x18;
  } while( true );
LAB_1073b481c:
  if (((ulong)plVar12 & uVar13) == 0) {
    plVar3 = (long *)((ulong)plVar3 & uVar13);
  }
  else if (plVar12 <= plVar3) {
    uVar4 = 0;
    if (plVar12 != (long *)0x0) {
      uVar4 = (ulong)plVar3 / (ulong)plVar12;
    }
    plVar3 = (long *)((long)plVar3 - uVar4 * (long)plVar12);
  }
  if (plVar3 != plVar14) goto LAB_1073b4964;
  goto LAB_1073b47f4;
}



/* Entry: 1073b4984; end: 1073b4993;  */

long FUN_1073b4984(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_78 [40];
  
  lVar3 = (param_4 - param_3) / 0x18;
  if (0 < lVar3) {
    lVar4 = param_1[1];
    if ((param_1[2] - lVar4) / 0x18 < lVar3) {
      plVar2 = param_1;
      func_0x0001000480a4(param_1,(lVar4 - *param_1) / 0x18 + lVar3);
      func_0x0001000481ec(auStack_78,plVar2,(param_2 - *param_1) / 0x18,param_1 + 2);
      FUN_1073b4d98(auStack_78,param_3,lVar3);
      func_0x00010014c2cc(param_1,auStack_78,param_2);
      func_0x0001073b4f84();
    }
    else {
      lVar4 = lVar4 - param_2;
      lVar1 = lVar4 / 0x18;
      if (lVar3 - lVar1 == 0 || lVar3 < lVar1) {
        func_0x0001073b4f6c();
      }
      else {
        FUN_1073b4cf0(param_1,param_3 + lVar4,param_4,lVar3 - lVar1);
        if (lVar4 < 1) {
          return param_2;
        }
        func_0x0001073b4f6c();
        lVar3 = lVar1;
      }
      FUN_1073b4d24(param_1,param_3,lVar3,param_2);
    }
  }
  return param_2;
}



/* Entry: 1073b4994; end: 1073b4a03;  */

undefined8 FUN_1073b4994(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x0001073b49c8(&uStack_28);
  return param_1;
}



/* Entry: 1073b4a04; end: 1073b4a0b;  */

void FUN_1073b4a04(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x10;
    func_0x0001073b4a44();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 1073b4a0c; end: 1073b4a6b;  */

void FUN_1073b4a0c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x10;
    func_0x0001073b4a44();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1073b4a6c; end: 1073b4abf;  */

/* WARNING: Possible PIC construction at 0x0001073b4aa8: Changing call to branch */

long * FUN_1073b4a6c(long *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    plVar2 = (long *)(param_1[2] - *param_1 >> 3);
    if (plVar2 <= param_2) {
      plVar2 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      plVar2 = (long *)0xfffffffffffffff;
    }
    return plVar2;
  }
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  plVar2[3] = 0;
  plVar2[4] = param_4;
  if (param_2 == (long *)0x0) {
    param_4 = 0;
  }
  else {
    func_0x0001073b4b08();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *plVar2 = param_4;
  plVar2[1] = lVar1;
  plVar2[2] = lVar1;
  plVar2[3] = param_4 + (long)param_2 * 0x10;
  return plVar2;
}



/* Entry: 1073b4ac0; end: 1073b4b2b;  */

long * FUN_1073b4ac0(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001073b4b08();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 1073b4b2c; end: 1073b4b47;  */

long * FUN_1073b4b2c(long *param_1,ulong param_2)

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
  FUN_1073b4b74();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1073b4b48; end: 1073b4b73;  */

long * FUN_1073b4b48(long *param_1)

{
  FUN_1073b4b74();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1073b4b74; end: 1073b4b7b;  */

void FUN_1073b4b74(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
    func_0x0001073b4a44();
  }
  return;
}



/* Entry: 1073b4b7c; end: 1073b4bb3;  */

void FUN_1073b4b7c(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
    func_0x0001073b4a44();
  }
  return;
}



/* Entry: 1073b4bb4; end: 1073b4cef;  */

long FUN_1073b4bb4(long *param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined1 auStack_78 [40];
  
  if (0 < param_5) {
    lVar3 = param_1[1];
    if ((param_1[2] - lVar3) / 0x18 < param_5) {
      plVar2 = param_1;
      func_0x0001000480a4(param_1,(lVar3 - *param_1) / 0x18 + param_5);
      func_0x0001000481ec(auStack_78,plVar2,(param_2 - *param_1) / 0x18,param_1 + 2);
      FUN_1073b4d98(auStack_78,param_3,param_5);
      func_0x00010014c2cc(param_1,auStack_78,param_2);
      func_0x0001073b4f84();
    }
    else {
      lVar3 = lVar3 - param_2;
      lVar1 = lVar3 / 0x18;
      if (param_5 - lVar1 == 0 || param_5 < lVar1) {
        func_0x0001073b4f6c();
      }
      else {
        FUN_1073b4cf0(param_1,param_3 + lVar3,param_4,param_5 - lVar1);
        if (lVar3 < 1) {
          return param_2;
        }
        func_0x0001073b4f6c();
        param_5 = lVar1;
      }
      FUN_1073b4d24(param_1,param_3,param_5,param_2);
    }
  }
  return param_2;
}



/* Entry: 1073b4cf0; end: 1073b4d23;  */

void FUN_1073b4cf0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_1073b4e04();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1073b4d24; end: 1073b4d97;  */

void FUN_1073b4d24(long param_1,long param_2,long param_3,long param_4)

{
  undefined1 auStack_50 [24];
  long lStack_38;
  
  for (param_3 = param_3 * 0x18; param_3 != 0; param_3 = param_3 + -0x18) {
    lStack_38 = param_1 + 0x10;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_50,param_2);
    func_0x000100066230(param_4,auStack_50);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
    param_4 = param_4 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



/* Entry: 1073b4d98; end: 1073b4e03;  */

void FUN_1073b4d98(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar1 = lVar2 + param_3 * 0x18;
  for (param_3 = param_3 * 0x18; param_3 != 0; param_3 = param_3 + -0x18) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(lVar2,param_2);
    lVar2 = lVar2 + 0x18;
    param_2 = param_2 + 0x18;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1073b4e04; end: 1073b4e17;  */

void FUN_1073b4e04(void)

{
  func_0x00010007e268();
  return;
}



/* Entry: 1073b4e18; end: 1073b4e3b;  */

undefined8 FUN_1073b4e18(undefined8 param_1)

{
  FUN_1073b4e3c(param_1,0);
  return param_1;
}



/* Entry: 1073b4e3c; end: 1073b4e53;  */

void FUN_1073b4e3c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1073b4e70(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1073b4e54; end: 1073b4e6f;  */

void FUN_1073b4e54(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1073b4e70(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073b4e70; end: 1073b4f43;  */

long FUN_1073b4e70(long param_1)

{
  func_0x0001073b4e98(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_1073b4f44(param_1,0);
  return param_1;
}



/* Entry: 1073b4f44; end: 1073b4fab;  */

void FUN_1073b4f44(long *param_1)

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



/* Entry: 1073b4fac; end: 1073b4ffb;  */

float FUN_1073b4fac(float param_1,undefined8 param_2)

{
  func_0x0001073b4f90();
  func_0x0001073b4f90(param_2);
  return param_1 / 255.0;
}



/* Entry: 1073b4ffc; end: 1073b504b;  */

void FUN_1073b4ffc(void)

{
  ulong in_x4;
  long unaff_x20;
  
  func_0x0001073b58ac();
  FUN_1073b504c();
  if ((in_x4 & 1) == 0) {
    for (; unaff_x20 != 0; unaff_x20 = unaff_x20 + -1) {
      func_0x0001073b5904();
    }
  }
  else {
    for (; unaff_x20 != 0; unaff_x20 = unaff_x20 + -1) {
      func_0x0001073b5904();
    }
  }
  return;
}



/* Entry: 1073b504c; end: 1073b50ab;  */

undefined4 * FUN_1073b504c(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long extraout_x9;
  undefined4 auStack_48 [10];
  
  func_0x0001073b591c();
  uVar1 = (undefined4 *)(extraout_x9 >> 2) <= param_2;
  if ((undefined4 *)(extraout_x9 >> 2) < param_2) {
    if ((ulong)param_2 >> 0x3e != 0) {
      func_0x000104c443dc();
      puVar2 = param_1;
      func_0x0001073b58e4();
      func_0x0001073b5898();
      func_0x0001073b5930();
      if ((bool)uVar1) {
        puVar3 = param_1;
        FUN_1073b53b4();
      }
      else {
        puVar3 = puVar2 + 1;
        *puVar2 = *param_2;
      }
      *(undefined4 **)(param_1 + 2) = puVar3;
      return puVar3 + -1;
    }
    param_1 = auStack_48;
    FUN_1073b531c(param_1);
    func_0x0001073b58c0();
    FUN_1073b52fc();
    func_0x0001073b58e4();
  }
  return param_1;
}



/* Entry: 1073b50ac; end: 1073b50e3;  */

undefined4 * FUN_1073b50ac(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 in_CY;
  undefined4 *puVar1;
  undefined4 *unaff_x19;
  
  func_0x0001073b5930();
  if ((bool)in_CY) {
    puVar1 = unaff_x19;
    FUN_1073b53b4();
  }
  else {
    puVar1 = param_1 + 1;
    *param_1 = *param_2;
  }
  *(undefined4 **)(unaff_x19 + 2) = puVar1;
  return puVar1 + -1;
}



/* Entry: 1073b50e4; end: 1073b5123;  */

void FUN_1073b50e4(void)

{
  long unaff_x20;
  
  func_0x0001073b58ac();
  FUN_1073b5124();
  for (; unaff_x20 != 0; unaff_x20 = unaff_x20 + -1) {
    func_0x0001073b58c0();
    FUN_1073b5198();
  }
  return;
}



/* Entry: 1073b5124; end: 1073b5197;  */

long * FUN_1073b5124(long *param_1,long *param_2)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = param_1 + 2;
  plVar3 = (long *)(*plVar2 - *param_1 >> 3);
  uVar1 = plVar3 <= param_2;
  if (plVar3 < param_2) {
    if ((ulong)param_2 >> 0x3d != 0) {
      func_0x0001073b5474();
      plVar3 = plVar2;
      func_0x0001073b58ec();
      func_0x0001073b5898();
      func_0x0001073b5930();
      if ((bool)uVar1) {
        plVar4 = plVar2;
        FUN_1073b5530();
      }
      else {
        plVar4 = plVar3 + 1;
        *plVar3 = *param_2;
      }
      plVar2[1] = (long)plVar4;
      return plVar4 + -1;
    }
    FUN_1073b54a0();
    func_0x0001073b58c0();
    FUN_1073b5480();
    func_0x0001073b58ec();
  }
  return plVar2;
}



/* Entry: 1073b5198; end: 1073b51cf;  */

undefined8 * FUN_1073b5198(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 in_CY;
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  
  func_0x0001073b5930();
  if ((bool)in_CY) {
    puVar1 = unaff_x19;
    FUN_1073b5530();
  }
  else {
    puVar1 = param_1 + 1;
    *param_1 = *param_2;
  }
  unaff_x19[1] = puVar1;
  return puVar1 + -1;
}



/* Entry: 1073b51d0; end: 1073b5247;  */

void FUN_1073b51d0(void)

{
  undefined4 *puVar1;
  ulong in_x4;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001073b58ac();
  FUN_1073b5248();
  if ((in_x4 & 1) == 0) {
    puVar1 = (undefined4 *)(unaff_x21 + 4);
    for (; unaff_x20 != 0; unaff_x20 = unaff_x20 + -1) {
      FUN_1073b4fac(puVar1[-1],*puVar1);
      func_0x0001073b5878();
      puVar1 = puVar1 + 2;
    }
  }
  else {
    puVar1 = (undefined4 *)(unaff_x21 + 4);
    for (; unaff_x20 != 0; unaff_x20 = unaff_x20 + -1) {
      FUN_1073b4fac(puVar1[-1],*puVar1);
      func_0x0001073b5878();
      puVar1 = puVar1 + 4;
    }
  }
  return;
}



/* Entry: 1073b5248; end: 1073b52a7;  */

undefined4 *
FUN_1073b5248(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5)

{
  undefined4 *puVar1;
  long extraout_x9;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 auStack_48 [10];
  
  func_0x0001073b591c();
  if ((undefined4 *)(extraout_x9 >> 4) < param_2) {
    if ((ulong)param_2 >> 0x3c != 0) {
      func_0x0001073b560c();
      func_0x0001073b58dc();
      func_0x0001073b5898();
      puVar1 = *(undefined4 **)(param_1 + 2);
      if (puVar1 < *(undefined4 **)(param_1 + 4)) {
        uVar2 = *param_3;
        uVar3 = *param_4;
        uVar4 = *param_5;
        *puVar1 = *param_2;
        puVar1[1] = uVar2;
        puVar1[2] = uVar3;
        puVar1[3] = uVar4;
        puVar1 = puVar1 + 4;
      }
      else {
        puVar1 = param_1;
        FUN_1073b5710();
      }
      *(undefined4 **)(param_1 + 2) = puVar1;
      return puVar1 + -4;
    }
    param_1 = auStack_48;
    FUN_1073b5638(param_1);
    func_0x0001073b58c0();
    FUN_1073b5618();
    func_0x0001073b58dc();
  }
  return param_1;
}



/* Entry: 1073b52a8; end: 1073b52fb;  */

undefined4 *
FUN_1073b52a8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = *(undefined4 **)(param_1 + 2);
  if (puVar1 < *(undefined4 **)(param_1 + 4)) {
    uVar2 = *param_3;
    uVar3 = *param_4;
    uVar4 = *param_5;
    *puVar1 = *param_2;
    puVar1[1] = uVar2;
    puVar1[2] = uVar3;
    puVar1[3] = uVar4;
    puVar1 = puVar1 + 4;
  }
  else {
    puVar1 = param_1;
    FUN_1073b5710();
  }
  *(undefined4 **)(param_1 + 2) = puVar1;
  return puVar1 + -4;
}



/* Entry: 1073b52fc; end: 1073b531b;  */

void FUN_1073b52fc(void)

{
  func_0x0001073b5844();
  func_0x0001073b5800();
  return;
}



/* Entry: 1073b531c; end: 1073b538f;  */

long * FUN_1073b531c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001050929e0();
  }
  lVar1 = param_4 + param_3 * 4;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 4;
  return param_1;
}



/* Entry: 1073b5390; end: 1073b53b3;  */

void FUN_1073b5390(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -4;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1073b53b4; end: 1073b5433;  */

long FUN_1073b53b4(undefined8 param_1,undefined4 *param_2)

{
  long *unaff_x19;
  long lVar1;
  undefined1 auStack_48 [16];
  undefined4 *puStack_38;
  
  func_0x0001073b58f4();
  FUN_1073b5434();
  FUN_1073b531c(auStack_48,param_1,unaff_x19[1] - *unaff_x19 >> 2,unaff_x19 + 2);
  *puStack_38 = *param_2;
  puStack_38 = puStack_38 + 1;
  func_0x0001073b58c0();
  FUN_1073b52fc();
  lVar1 = unaff_x19[1];
  func_0x0001073b58e4();
  return lVar1;
}



/* Entry: 1073b5434; end: 1073b547f;  */

long * FUN_1073b5434(long *param_1,long *param_2)

{
  long *plVar1;
  
  if ((ulong)param_2 >> 0x3e == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 1);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7ffffffffffffffb < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0x3fffffffffffffff;
    }
    return plVar1;
  }
  func_0x000104c443dc();
  func_0x0001073b5910();
  func_0x0001073b5844();
  func_0x0001073b5800();
  return param_1;
}



/* Entry: 1073b5480; end: 1073b549f;  */

void FUN_1073b5480(void)

{
  func_0x0001073b5844();
  func_0x0001073b5800();
  return;
}



/* Entry: 1073b54a0; end: 1073b54c3;  */

void FUN_1073b54a0(void)

{
  FUN_1073b54c4();
  return;
}



/* Entry: 1073b54c4; end: 1073b54df;  */

long * FUN_1073b54c4(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_1073b550c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1073b54e0; end: 1073b550b;  */

long * FUN_1073b54e0(long *param_1)

{
  FUN_1073b550c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1073b550c; end: 1073b552f;  */

void FUN_1073b550c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1073b5530; end: 1073b55cb;  */

long FUN_1073b5530(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long *unaff_x19;
  long lVar3;
  
  func_0x0001073b58f4();
  FUN_1073b55cc();
  lVar3 = *unaff_x19;
  lVar1 = unaff_x19[1];
  plVar2 = unaff_x19 + 2;
  if (param_1 == 0) {
    plVar2 = (long *)0x0;
  }
  else {
    FUN_1073b54a0();
  }
  *(undefined8 *)((long)plVar2 + (lVar1 - lVar3)) = *param_2;
  func_0x0001073b58c0();
  FUN_1073b5480();
  lVar3 = unaff_x19[1];
  func_0x0001073b58ec();
  return lVar3;
}



/* Entry: 1073b55cc; end: 1073b5617;  */

long * FUN_1073b55cc(long *param_1,long *param_2)

{
  long *plVar1;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 2);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0x1fffffffffffffff;
    }
    return plVar1;
  }
  func_0x0001073b5474();
  func_0x0001073b5910();
  func_0x0001073b5844();
  func_0x0001073b5800();
  return param_1;
}



/* Entry: 1073b5618; end: 1073b5637;  */

void FUN_1073b5618(void)

{
  func_0x0001073b5844();
  func_0x0001073b5800();
  return;
}



/* Entry: 1073b5638; end: 1073b56a3;  */

long * FUN_1073b5638(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001073b5680();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 1073b56a4; end: 1073b56bf;  */

long * FUN_1073b56a4(long *param_1,ulong param_2)

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
  FUN_1073b56ec();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1073b56c0; end: 1073b56eb;  */

long * FUN_1073b56c0(long *param_1)

{
  FUN_1073b56ec();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1073b56ec; end: 1073b570f;  */

void FUN_1073b56ec(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x10;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1073b5710; end: 1073b57bf;  */

long FUN_1073b5710(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  long *unaff_x19;
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [16];
  undefined4 *puStack_58;
  
  func_0x0001073b58f4();
  FUN_1073b57c0();
  FUN_1073b5638(auStack_68,param_1,unaff_x19[1] - *unaff_x19 >> 4,unaff_x19 + 2);
  uVar2 = *param_3;
  uVar3 = *param_4;
  uVar4 = *param_5;
  *puStack_58 = *param_2;
  puStack_58[1] = uVar2;
  puStack_58[2] = uVar3;
  puStack_58[3] = uVar4;
  puStack_58 = puStack_58 + 4;
  func_0x0001073b58c0();
  FUN_1073b5618();
  lVar1 = unaff_x19[1];
  func_0x0001073b58dc();
  return lVar1;
}



/* Entry: 1073b57c0; end: 1073b57ff;  */

long * FUN_1073b57c0(long *param_1,long *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    plVar2 = (long *)(param_1[2] - *param_1 >> 3);
    if (plVar2 <= param_2) {
      plVar2 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      plVar2 = (long *)0xfffffffffffffff;
    }
    return plVar2;
  }
  func_0x0001073b560c();
  unaff_x19[1] = unaff_x21;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return param_1;
}



/* Entry: 1073b5800; end: 1073b5943;  */

void FUN_1073b5800(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  unaff_x19[1] = unaff_x21;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 1073b5944; end: 1073b5a0b;  */

void FUN_1073b5944(undefined4 *param_1,undefined4 *param_2,long param_3,undefined8 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  fVar3 = (float)*(undefined8 *)(param_3 + 0x18);
  fVar4 = (float)*(undefined8 *)(param_3 + 0x1c);
  fVar2 = (float)*(undefined8 *)(param_3 + 0x10);
  fVar1 = ((float)param_4[1] - (float)*param_4) / fVar2;
  uVar7 = *param_2;
  uVar8 = param_2[1];
  func_0x0001073b5aac();
  fVar2 = ((float)param_4[3] - (float)param_4[2]) / fVar2;
  func_0x0001073b5aac();
  *param_1 = uVar7;
  param_1[1] = uVar8;
  fVar5 = (float)*(undefined8 *)(param_3 + 0x20);
  fVar6 = (float)((ulong)*(undefined8 *)(param_3 + 0x20) >> 0x20);
  *(ulong *)(param_1 + 4) = CONCAT44(fVar4 / fVar6,fVar2 / fVar5);
  *(ulong *)(param_1 + 2) = CONCAT44(fVar3 / fVar6,fVar1 / fVar5);
  return;
}



/* Entry: 1073b5a0c; end: 1073b5acb;  */

float FUN_1073b5a0c(float param_1,undefined8 param_2,float param_3,undefined8 param_4,float param_5,
                   undefined8 param_6,float param_7)

{
  float fVar1;
  float in_stack_00000000;
  
  fVar1 = (param_1 - param_5 * (float)(int)(param_1 / param_5)) * 256.0;
  param_3 = param_3 + (fVar1 - param_5 * (float)(int)(fVar1 / param_5)) * 256.0;
  return (param_7 * in_stack_00000000 + (param_3 - param_5 * (float)(int)(param_3 / param_5))) /
         param_5;
}



/* Entry: 1073b5acc; end: 1073b5cbf;  */

void FUN_1073b5acc(float *param_1,undefined8 param_2,undefined8 param_3,float param_4,float param_5,
                  char *param_6,short *param_7,long param_8,float *param_9)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  bool bVar5;
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
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  
  fVar15 = *param_9;
  fVar16 = param_9[1];
  uVar2 = param_7[2];
  uVar3 = param_7[3];
  sVar4 = param_7[4];
  fVar14 = 0.0;
  fVar13 = 0.0;
  fVar10 = 1.0;
  fVar8 = fVar10;
  if (sVar4 < 0x4000) {
    fVar8 = 0.0;
  }
  fVar6 = *(float *)(param_8 + 4) * fVar8;
  FUN_1073b5cc0(param_9 + 2,param_9 + 6);
  fVar7 = fVar13;
  fVar9 = fVar14;
  if (sVar4 != 0x4000 || (uVar3 != 0 || uVar2 != 1)) {
    fVar10 = 0.0;
    fVar7 = (float)(((int)param_7[3] - (int)(short)uVar3) + ((int)(short)uVar3 / 2) * 2) / 16384.0;
    fVar9 = (float)(((int)param_7[2] - (int)(short)uVar2) + ((int)(short)uVar2 / 2) * 2) / 16384.0;
  }
  fVar11 = fVar10;
  fStack_ac = fVar9;
  fStack_a8 = fVar7;
  if (*param_6 == '\x01') {
    fVar11 = (float)(int)((int)*(uint *)(param_7 + 3) >> 0x10 & 0xfffffffe) / 16384.0;
    iVar1 = -1;
    if ((*(uint *)(param_7 + 3) & 0x10000) == 0) {
      iVar1 = 1;
    }
    fVar12 = SQRT(1.0 - fVar11 * fVar11) * (float)iVar1;
    fStack_ac = fVar13;
    fStack_a8 = fVar14;
    if (sVar4 != 0x4000 || (uVar3 != 0 || uVar2 != 1)) {
      fStack_ac = -(fVar12 * fVar7) + fVar11 * fVar9;
      fStack_a8 = fVar7 * fVar11 + fVar12 * fVar9;
    }
  }
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  fVar7 = (float)(int)param_7[7];
  fVar9 = *(float *)(param_8 + 8);
  fVar12 = fVar7 / fVar9;
  fStack_a4 = fVar10;
  FUN_1073b5d38(&fStack_ac);
  sVar4 = param_7[1];
  if ((uVar3 & 1) != 0) {
    fVar13 = 1.0;
  }
  bVar5 = (uVar2 & 1) != 0;
  if (bVar5) {
    fVar15 = fVar16;
  }
  *param_1 = (float)(int)*param_7;
  param_1[1] = (float)(int)sVar4;
  param_1[2] = fVar15;
  param_1[3] = fVar7;
  param_1[4] = fVar9;
  param_1[5] = fVar11;
  param_1[6] = fVar6;
  param_1[7] = fVar8;
  param_1[8] = param_4;
  param_1[9] = param_5;
  if (bVar5) {
    fVar14 = 1.0;
  }
  param_1[10] = fVar13;
  param_1[0xb] = fVar14;
  param_1[0xc] = fVar12;
  param_1[0xd] = fVar16;
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_9 + 10);
  param_1[0x10] = param_9[0xc];
  return;
}



/* Entry: 1073b5cc0; end: 1073b5d37;  */

void FUN_1073b5cc0(float param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  float fStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  float fStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  float fStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_38 = param_5[1];
  uStack_40 = *param_5;
  uVar2 = 0x3f800000;
  fStack_44 = 1.0 - param_1;
  fStack_74 = param_1;
  fStack_30 = fStack_44;
  func_0x0001073b5d6c(&uStack_40,&fStack_44);
  uStack_68 = param_6[1];
  uVar1 = *param_6;
  uStack_70 = uVar1;
  uStack_2c = uVar2;
  uStack_28 = param_3;
  uStack_24 = param_4;
  func_0x0001073b5d6c(&uStack_70,&fStack_74);
  uStack_54 = (undefined4)uVar1;
  uStack_50 = uVar2;
  uStack_4c = param_3;
  uStack_48 = param_4;
  func_0x0001073b5d3c(&fStack_30,&uStack_54);
  return;
}



/* Entry: 1073b5d38; end: 1073b5d3b;  */

float FUN_1073b5d38(float param_1,float *param_2)

{
  FUN_1073b5ea8(param_2,param_2);
  return (1.0 / SQRT(param_1)) * *param_2;
}



/* Entry: 1073b5d3c; end: 1073b5d9f;  */

undefined4 FUN_1073b5d3c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puVar1 = &uStack_20;
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  FUN_1073b5da0();
  return *(undefined4 *)puVar1;
}



/* Entry: 1073b5da0; end: 1073b5dd7;  */

undefined4 *
FUN_1073b5da0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_6[1];
  uVar1 = *param_6;
  uStack_30 = uVar1;
  FUN_1073b5dd8(param_5,&uStack_30);
  *param_5 = (int)uVar1;
  param_5[1] = param_2;
  param_5[2] = param_3;
  param_5[3] = param_4;
  return param_5;
}



/* Entry: 1073b5dd8; end: 1073b5dfb;  */

float FUN_1073b5dd8(float *param_1,float *param_2)

{
  return *param_1 + *param_2;
}



/* Entry: 1073b5dfc; end: 1073b5e33;  */

undefined4 *
FUN_1073b5dfc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 *param_5)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = CONCAT44(param_1,param_1);
  uStack_30 = CONCAT44(param_1,param_1);
  FUN_1073b5e34(param_5,&uStack_30);
  *param_5 = param_1;
  param_5[1] = param_2;
  param_5[2] = param_3;
  param_5[3] = param_4;
  return param_5;
}



/* Entry: 1073b5e34; end: 1073b5e57;  */

float FUN_1073b5e34(float *param_1,float *param_2)

{
  return *param_1 * *param_2;
}



/* Entry: 1073b5e58; end: 1073b5e8b;  */

float FUN_1073b5e58(float param_1,float *param_2)

{
  FUN_1073b5ea8(param_2,param_2);
  return (1.0 / SQRT(param_1)) * *param_2;
}



/* Entry: 1073b5e8c; end: 1073b5ea7;  */

float FUN_1073b5e8c(float param_1,float *param_2)

{
  return param_1 * *param_2;
}



/* Entry: 1073b5ea8; end: 1073b5ec3;  */

float FUN_1073b5ea8(float param_1,float param_2,float param_3)

{
  FUN_1073b5ec4();
  return param_3 + param_1 + param_2;
}



/* Entry: 1073b5ec4; end: 1073b5eef;  */

float FUN_1073b5ec4(float *param_1,float *param_2)

{
  return *param_1 * *param_2;
}



/* Entry: 1073b5ef0; end: 1073b60bf;  */

void FUN_1073b5ef0(undefined8 *param_1,float *param_2,float *param_3)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined4 extraout_s2;
  undefined4 extraout_s2_00;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  float fStack_80;
  float fStack_7c;
  undefined4 uStack_78;
  float fStack_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  
  uStack_54 = 0;
  uStack_44 = 0;
  uStack_3c = 0;
  uStack_64 = 0;
  uStack_6c = 0;
  uStack_70 = 0x3f800000;
  uStack_5c = 0x3f800000;
  uStack_4c = 0x3f80000000000000;
  uStack_34 = 0x3f800000;
  fVar3 = *(float *)(param_1 + 2);
  fVar4 = (float)((uint)fVar3 ^
                 ((uint)fVar3 ^ (uint)(fVar3 + (float)(int)(fVar3 * 0.25) * -4.0)) & 0x7fffffff) +
          -1.0;
  fVar3 = 2.0;
  if (*param_3 * 0.5 <= 0.0) {
    fVar3 = 1.0;
  }
  fVar1 = 0.0;
  if (param_3[1] * 0.5 != 0.0) {
    fVar1 = (1.0 / *param_2) * 0.5;
  }
  fVar1 = *param_3 * 0.5 + fVar3 * param_3[1] * 0.5 + fVar1;
  fStack_7c = fVar4 * 0.5;
  fVar5 = (float)param_1[1] + -128.0;
  fVar6 = (float)((ulong)param_1[1] >> 0x20) + -128.0;
  fVar3 = param_2[1];
  uStack_90 = CONCAT44((fVar6 * fVar1 * 0.015873017) / fVar3,(fVar5 * fVar1 * 0.015873017) / fVar3);
  uStack_88 = 0;
  uVar7 = *param_1;
  fVar8 = (float)(int)((float)((ulong)uVar7 >> 0x20) * 0.5);
  fStack_80 = (*(float *)((long)param_1 + 4) - (fVar8 + fVar8)) * 2.0 + -1.0;
  fVar5 = fStack_80 * -param_3[2] * fVar5 * 0.015873017;
  fStack_80 = fStack_80 * -param_3[2] * fVar6 * 0.015873017;
  fVar6 = -(fVar4 * 0.5) * fStack_80;
  fVar9 = (1.0 - ABS(fStack_7c)) * fStack_80;
  fVar4 = (1.0 - ABS(fStack_7c)) * fVar5;
  fVar1 = fStack_7c * fVar5;
  FUN_1073b60c0(&uStack_70,&uStack_90);
  fVar3 = param_2[1];
  uVar7 = CONCAT44(fVar8 + (fVar9 + fVar1) / fVar3,
                   (float)(int)((float)uVar7 * 0.5) + (fVar6 + fVar4) / fVar3);
  uVar2 = 0;
  uStack_98 = 0x3f80000000000000;
  uStack_a0 = uVar7;
  uStack_78 = extraout_s2;
  fStack_74 = fVar5;
  FUN_1073b60c0(&uStack_70,&uStack_a0);
  uStack_90 = CONCAT44(uVar2,(int)uVar7);
  uStack_88 = CONCAT44(fVar5,extraout_s2_00);
  FUN_1073b5d3c(&uStack_90,&fStack_80);
  return;
}



/* Entry: 1073b60c0; end: 1073b618f;  */

void FUN_1073b60c0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,undefined8 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = (undefined4)*param_6;
  uVar2 = (undefined4)*(undefined8 *)((long)param_6 + 4);
  uVar5 = CONCAT44(uVar2,uVar2);
  uStack_38 = CONCAT44(uVar2,uVar2);
  uStack_28 = CONCAT44(uVar1,uVar1);
  uStack_30 = CONCAT44(uVar1,uVar1);
  uStack_40 = uVar5;
  FUN_1073b6190(param_5,&uStack_30);
  uVar3 = (undefined4)uVar5;
  uStack_50 = uVar3;
  uStack_4c = uVar1;
  uStack_48 = param_3;
  uStack_44 = param_4;
  FUN_1073b6190(param_5 + 0x10,&uStack_40);
  uStack_60 = uVar3;
  uStack_5c = uVar1;
  uStack_58 = param_3;
  uStack_54 = param_4;
  FUN_1073b5d3c(&uStack_50,&uStack_60);
  uVar4 = (undefined4)param_6[1];
  uVar2 = *(undefined4 *)((long)param_6 + 0xc);
  uVar5 = CONCAT44(uVar2,uVar2);
  uStack_88 = CONCAT44(uVar2,uVar2);
  uStack_78 = CONCAT44(uVar4,uVar4);
  uStack_80 = CONCAT44(uVar4,uVar4);
  uStack_90 = uVar5;
  uStack_70 = uVar3;
  uStack_6c = uVar1;
  uStack_68 = param_3;
  uStack_64 = param_4;
  FUN_1073b6190(param_5 + 0x20,&uStack_80);
  uVar2 = (undefined4)uVar5;
  uStack_a0 = uVar2;
  uStack_9c = uVar4;
  uStack_98 = param_3;
  uStack_94 = param_4;
  FUN_1073b6190(param_5 + 0x30,&uStack_90);
  uStack_b0 = uVar2;
  uStack_ac = uVar4;
  uStack_a8 = param_3;
  uStack_a4 = param_4;
  FUN_1073b5d3c(&uStack_a0,&uStack_b0);
  uStack_c0 = uVar2;
  uStack_bc = uVar4;
  uStack_b8 = param_3;
  uStack_b4 = param_4;
  FUN_1073b5d3c(&uStack_70,&uStack_c0);
  return;
}



/* Entry: 1073b6190; end: 1073b61b3;  */

float FUN_1073b6190(float *param_1,float *param_2)

{
  return *param_1 * *param_2;
}



/* Entry: 1073b61b4; end: 1073b6257;  */

undefined8 * FUN_1073b61b4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_1109ab720;
  _memcpy(param_1 + 1,param_2,0x48);
  *param_1 = &PTR_FUN_1109ab698;
  *(undefined4 *)(param_1 + 10) = 0;
  func_0x0001073b61fc(param_1 + 0xb);
  return param_1;
}



/* Entry: 1073b6258; end: 1073b625b;  */

undefined8 * FUN_1073b6258(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109ab698;
  func_0x0001073bd468(param_1 + 0xb);
  return param_1;
}



/* Entry: 1073b625c; end: 1073b626f;  */

void FUN_1073b625c(void)

{
  func_0x0001073b622c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073b6270; end: 1073b62ef;  */

void FUN_1073b6270(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1073bbc84(param_1,param_2[1] - *param_2 >> 6);
  plVar1 = (long *)param_2[1];
  for (plVar2 = (long *)(*param_2 + 0x30); plVar2 + -6 != plVar1; plVar2 = plVar2 + 8) {
    if (*plVar2 != 0) {
      FUN_1073bbcfc(param_1,plVar2);
    }
  }
  return;
}



/* Entry: 1073b62f0; end: 1073b6c93;  */

void FUN_1073b62f0(undefined8 param_1,float param_2,undefined8 param_3,float param_4,long param_5,
                  long param_6,undefined8 param_7,long param_8,undefined8 param_9)

{
  short *psVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  code *extraout_x8_07;
  long lVar17;
  code *extraout_x8_08;
  code *extraout_x8_09;
  code *extraout_x8_10;
  code *extraout_x8_11;
  code *extraout_x8_12;
  code *extraout_x8_13;
  long *plVar18;
  int extraout_w10;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fStack_3ec;
  float fStack_3e8;
  float fStack_3e4;
  float fStack_3e0;
  float fStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  float fStack_3c4;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined1 uStack_370;
  undefined7 uStack_36f;
  undefined1 uStack_368;
  undefined8 uStack_367;
  undefined1 uStack_330;
  undefined1 uStack_328;
  undefined1 uStack_2fc;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long alStack_2e0 [3];
  long lStack_2c8;
  long alStack_298 [3];
  long lStack_280;
  long alStack_250 [3];
  long lStack_238;
  long alStack_208 [3];
  long lStack_1f0;
  long alStack_1c0 [3];
  long lStack_1a8;
  long alStack_178 [3];
  long lStack_160;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  long lStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long alStack_e8 [5];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x0001073bedf4();
  uVar21 = CONCAT44(*(undefined4 *)(param_6 + 0x20),*(undefined4 *)(param_6 + 0x18));
  FUN_1073b6c94(*(undefined8 *)(param_5 + 0x58),uVar21);
  uStack_18 = *(undefined8 *)(param_6 + 0x410);
  uStack_20 = *(undefined8 *)(param_6 + 0x408);
  uVar4 = *(undefined8 *)(param_5 + 0x58);
  FUN_1073b6cb8(uVar4,&uStack_20,uVar21,param_9);
  iVar3 = (int)uVar4;
  func_0x0001073befd0();
  if (iVar3 != 3) {
    FUN_1073b7048(&uStack_30,5,(ulong)&uStack_20 | 4,param_9,*(undefined4 *)(param_5 + 0x50),uVar21)
    ;
    lVar22 = *(long *)(param_6 + 0xb0);
    lVar20 = *(long *)(param_6 + 0xb8);
    lStack_48 = 0;
    lStack_40 = 0;
    uStack_38 = 0;
    lStack_60 = 0;
    lStack_58 = 0;
    uStack_50 = 0;
    lStack_70 = 0;
    lStack_78 = 0;
    uStack_68 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_80 = 0;
    lStack_a0 = 0;
    lStack_a8 = 0;
    uStack_98 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_b0 = 0;
    plVar5 = (long *)(param_6 + 0x178);
    FUN_1073b712c(plVar5,*(long *)(param_8 + 0x18) + 8);
    FUN_1073bd774(alStack_e8,0x19,plVar5,*(long *)(param_8 + 8) + 0x28);
    uStack_f0 = 0;
    fVar23 = 0.0;
    uStack_108 = 0;
    lStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    uStack_128 = 0;
    uStack_130 = 0;
    puStack_118 = (undefined8 *)0x0;
    uStack_120 = 0;
    FUN_107380640(&plStack_100,9);
    FUN_107380640(&puStack_118,9);
    lVar6 = *plVar5;
    func_0x0001073bee24();
    (*extraout_x8)();
    *plStack_100 = lVar6;
    lVar7 = plVar5[1];
    func_0x0001073bee24();
    (*extraout_x8_00)();
    plStack_100[1] = lVar7;
    lVar8 = plVar5[2];
    func_0x0001073bee24();
    (*extraout_x8_01)();
    plStack_100[2] = lVar8;
    lVar9 = plVar5[3];
    func_0x0001073bee24();
    (*extraout_x8_02)();
    plStack_100[3] = lVar9;
    lVar10 = plVar5[4];
    func_0x0001073bee24();
    (*extraout_x8_03)();
    plStack_100[4] = lVar10;
    lVar11 = plVar5[5];
    func_0x0001073bee24();
    (*extraout_x8_04)();
    plStack_100[5] = lVar11;
    lVar12 = plVar5[6];
    func_0x0001073bee24();
    (*extraout_x8_05)();
    plStack_100[6] = lVar12;
    lVar13 = plVar5[7];
    func_0x0001073bee24();
    (*extraout_x8_06)();
    plStack_100[7] = lVar13;
    lVar14 = plVar5[8];
    func_0x0001073bee24();
    (*extraout_x8_07)();
    lVar17 = 0;
    lVar22 = lVar20 - lVar22 >> 3;
    plStack_100[8] = lVar14;
    *puStack_118 = 0;
    plVar18 = plStack_100;
    for (uVar19 = 1; uVar2 = (ulong)(lStack_110 - (long)puStack_118 >> 3) <= uVar19, !(bool)uVar2;
        uVar19 = uVar19 + 1) {
      lVar17 = *plVar18 + lVar17;
      puStack_118[uVar19] = lVar17;
      plVar18 = plVar18 + 1;
    }
    func_0x000100651cb4(&uStack_130,
                        lVar7 + lVar6 + lVar8 + lVar9 + lVar10 + lVar11 + lVar12 + lVar13 + lVar14);
    uStack_3c0 = &plStack_100;
    uStack_3b8 = &puStack_118;
    uStack_3b0 = &uStack_130;
    FUN_1073bdb6c(&uStack_3c0,*plVar5,0);
    if ((plStack_100[1] != 0) && (func_0x0001073bef88(puStack_118[1]), !(bool)uVar2)) {
      func_0x0001073bf0ec(plVar5[1]);
      func_0x0001073bef80();
    }
    FUN_1073bdb6c(&uStack_3c0,plVar5[2],2);
    FUN_1073bdb6c(&uStack_3c0,plVar5[3],3);
    if ((plStack_100[4] != 0) && (func_0x0001073bef88(puStack_118[4]), !(bool)uVar2)) {
      func_0x0001073bf0ec(plVar5[4]);
      func_0x0001073bef80();
    }
    FUN_1073bdb6c(&uStack_3c0,plVar5[5],5);
    FUN_1073bdb6c(&uStack_3c0,plVar5[6],6);
    if ((plStack_100[7] != 0) && (func_0x0001073bef88(puStack_118[7]), !(bool)uVar2)) {
      func_0x0001073bf0ec(plVar5[7]);
      func_0x0001073bef80();
    }
    FUN_1073bdb6c(&uStack_3c0,plVar5[8],8);
    func_0x0001073bef78(alStack_178);
    fVar26 = 0.0;
    if (*(int *)(alStack_e8[0] + 0x2c) == 2) {
      FUN_1073bdb98();
      func_0x0001073beedc(alStack_178[0] + *(long *)(lStack_160 + 0x18));
    }
    else if (*(int *)(alStack_e8[0] + 0x2c) == 1) {
      fVar26 = fVar23;
      func_0x0001073bee84(plVar5[3]);
      (*extraout_x8_08)();
      fVar23 = fVar26;
    }
    FUN_1073bc368(alStack_178);
    func_0x0001073bef78(alStack_1c0);
    fVar27 = 1.0;
    if (*(int *)(alStack_e8[0] + 0x68) == 2) {
      FUN_1073bdb98();
      func_0x0001073beedc(alStack_1c0[0] + *(long *)(lStack_1a8 + 0x40));
    }
    else if (*(int *)(alStack_e8[0] + 0x68) == 1) {
      fVar27 = fVar23;
      func_0x0001073bee84(plVar5[8]);
      (*extraout_x8_09)();
      fVar23 = fVar27;
    }
    func_0x0001073bf238();
    func_0x0001073bef78(alStack_208);
    fVar28 = 0.0;
    if (*(int *)(alStack_e8[0] + 0x44) == 2) {
      FUN_1073bdb98();
      func_0x0001073beedc(alStack_208[0] + *(long *)(lStack_1f0 + 0x28));
    }
    else if (*(int *)(alStack_e8[0] + 0x44) == 1) {
      func_0x0001073bee84(plVar5[5]);
      (*extraout_x8_10)();
      fVar28 = fVar23;
    }
    FUN_1073bc368(alStack_208);
    func_0x0001073bef78(alStack_250);
    fVar24 = 1.0;
    if (*(int *)(alStack_e8[0] + 0x50) == 2) {
      FUN_1073bdb98();
      func_0x0001073beedc(alStack_250[0] + *(long *)(lStack_238 + 0x30));
    }
    else if (*(int *)(alStack_e8[0] + 0x50) == 1) {
      fVar24 = fVar23;
      func_0x0001073bee84(plVar5[6]);
      (*extraout_x8_11)();
      fVar23 = fVar24;
    }
    FUN_1073bc368(alStack_250);
    func_0x0001073bef78(alStack_298);
    fVar29 = 1.0;
    if (*(int *)(alStack_e8[0] + 0x14) == 2) {
      FUN_1073bdb98();
      func_0x0001073bf03c(alStack_298[0] + *(long *)(lStack_280 + 8));
      fVar25 = 1.0;
      fVar32 = 1.0;
      fVar33 = 1.0;
    }
    else {
      fVar25 = 1.0;
      fVar33 = 1.0;
      fVar29 = 1.0;
      fVar32 = 1.0;
      if (*(int *)(alStack_e8[0] + 0x14) == 1) {
        fVar33 = fVar23;
        func_0x0001073bee84(plVar5[1]);
        (*extraout_x8_12)();
        fVar29 = param_4;
        fVar32 = param_2;
        fVar23 = fVar33;
      }
    }
    FUN_1073bc368(alStack_298);
    func_0x0001073bef78(alStack_2e0);
    fVar30 = 0.0;
    fVar31 = 0.84;
    if (*(int *)(alStack_e8[0] + 0x38) == 2) {
      FUN_1073bdb98();
      func_0x0001073bf240(alStack_2e0[0] + *(long *)(lStack_2c8 + 0x20));
    }
    else if (*(int *)(alStack_e8[0] + 0x38) == 1) {
      fVar30 = fVar23;
      func_0x0001073bee84(plVar5[4]);
      (*extraout_x8_13)();
      fVar31 = param_2;
    }
    FUN_1073bc368(alStack_2e0);
    uStack_330 = 0;
    uStack_328 = 0;
    uStack_2fc = 0;
    uStack_3a0 = 0;
    uStack_3a8 = 0;
    uStack_390 = 0;
    uStack_398 = 0;
    uStack_380 = 0;
    uStack_388 = 0;
    uStack_370 = 0;
    uStack_378 = 0;
    uStack_367 = 0;
    uStack_36f = 0;
    uStack_368 = 0;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    uStack_2f8 = 0;
    uStack_3c0 = (long **)CONCAT44(fVar24 * fVar32,fVar24 * fVar33);
    uStack_3b8 = (undefined8 **)CONCAT44(fVar24 * fVar29,fVar24 * fVar25);
    uStack_3b0 = (undefined8 *)CONCAT44(fVar31,fVar30);
    puVar15 = &uStack_378;
    func_0x0001073bf034(puVar15,0x501);
    puVar16 = &uStack_378;
    func_0x0001073bf034(puVar16,0x502);
    lVar17 = (long)puVar16 + (long)puVar15;
    if (lStack_a8 != lStack_a0) {
      puVar15 = &uStack_378;
      func_0x0001073bee60(puVar15);
      lVar17 = (long)puVar15 + lVar17;
    }
    func_0x00010089a97c(&uStack_3a8,lVar17 * lVar22);
    puVar15 = &uStack_20;
    FUN_1073b724c();
    fVar23 = *(float *)(param_6 + 0x3c8);
    fVar24 = (float)((ulong)puVar15 >> 0x20 & 0xff);
    func_0x0001073bf1e8();
    lVar20 = 0;
    lVar17 = 0;
    func_0x0001073bf008();
    fStack_3c4 = fVar24 / fVar23;
    uStack_3c8 = 0x3f800000;
    lVar6 = 0xc;
    for (; lVar22 != 0; lVar22 = lVar22 + -1) {
      psVar1 = (short *)(*(long *)(param_6 + 0xb0) + lVar20 * 2);
      fStack_3e0 = (float)(int)*psVar1;
      fStack_3dc = (float)(int)psVar1[1];
      lVar7 = *(long *)(param_6 + 0xb0) + lVar17;
      uStack_3d8 = NEON_ucvtf((uint)*(byte *)(lVar7 + 4));
      uStack_3d4 = NEON_ucvtf((uint)*(byte *)(lVar7 + 5));
      uStack_3d0 = NEON_ucvtf((uint)*(byte *)(lVar7 + 6));
      fStack_3ec = fVar26;
      if (lStack_48 != lStack_40) {
        fStack_3ec = *(float *)(lStack_48 + lVar20);
      }
      fStack_3e8 = fVar27;
      if (lStack_60 != lStack_58) {
        fStack_3e8 = *(float *)(lStack_60 + lVar20);
      }
      fStack_3e4 = fVar28;
      if (lStack_78 != lStack_70) {
        fStack_3e4 = *(float *)(lStack_78 + lVar20);
      }
      uStack_3cc = uStack_3d0;
      FUN_1073b5ef0(&fStack_3e0,&uStack_3c8,&fStack_3ec);
      FUN_1073b7260(&uStack_3a8);
      FUN_1073b7260(0,0,0x3f800000,&uStack_3a8);
      if (lStack_a8 != lStack_a0) {
        lVar7 = lStack_a8 + lVar20 * 4;
        FUN_1073b72bc(((undefined4 *)(lStack_a8 + lVar6))[-3],*(undefined4 *)(lVar7 + 4),
                      *(undefined4 *)(lVar7 + 8),*(undefined4 *)(lStack_a8 + lVar6));
        func_0x0001073bef3c();
        func_0x0001073bf12c(&uStack_3a8);
      }
      lVar17 = lVar17 + 8;
      lVar20 = lVar20 + 4;
      lVar6 = lVar6 + 0x10;
    }
    func_0x0001073b734c(&uStack_390,param_6 + 0xd0);
    func_0x0001073bf224(uStack_30);
    if (lStack_28 != 0) {
      do {
        func_0x0001073becf8();
      } while (extraout_w10 != 0);
    }
    func_0x0001073beff0();
    func_0x0001073bf2a4();
    func_0x0001073bf0f8();
    FUN_1073bc368(&uStack_130);
    func_0x0001073bc770(alStack_e8);
    FUN_1073bc7a8(&uStack_c0);
    FUN_1073bc7e0(&lStack_a8);
    func_0x0001056d1ce4(&uStack_90);
    func_0x0001056d1ce4(&lStack_78);
    func_0x0001056d1ce4(&lStack_60);
    func_0x0001056d1ce4(&lStack_48);
    func_0x0001073bd444(&uStack_30);
  }
  return;
}



/* Entry: 1073b6c94; end: 1073b6cb7;  */

void FUN_1073b6c94(long param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  func_0x0001073bbfe4(param_1 + 0x18,&uStack_18);
  return;
}



/* Entry: 1073b6cb8; end: 1073b6ee7;  */

undefined8 * FUN_1073b6cb8(ulong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar9 = (undefined8 *)param_1[1];
  for (uVar5 = *param_1 + 0x18; puVar10 = (undefined8 *)(uVar5 - 0x18), puVar10 != puVar9;
      uVar5 = uVar5 + 0x40) {
    puVar3 = puVar10;
    func_0x0001073bc1c0(puVar10,param_2);
    if ((((int)puVar3 != 0) && (*(int *)(uVar5 - 8) == (int)param_3)) &&
       (uVar8 = uVar5, func_0x0001000e107c(uVar5,param_4), (uVar8 & 1) != 0)) {
      return puVar10;
    }
  }
  uStack_88 = param_2[1];
  uStack_90 = *param_2;
  uStack_80 = param_3;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_78,param_4);
  uStack_60 = 0;
  uStack_58 = 0;
  puVar9 = (undefined8 *)param_1[1];
  if ((undefined8 *)param_1[2] <= puVar9) {
    puVar10 = (undefined8 *)*param_1;
    lVar11 = (long)puVar9 - (long)puVar10 >> 6;
    uVar5 = lVar11 + 1;
    if (uVar5 >> 0x3a == 0) {
      uVar6 = (long)param_1[2] - (long)puVar10;
      uVar8 = (long)uVar6 >> 5;
      if (uVar8 <= uVar5) {
        uVar8 = uVar5;
      }
      if (0x7fffffffffffffbf < uVar6) {
        uVar8 = 0x3ffffffffffffff;
      }
      if (uVar8 >> 0x3a == 0) {
        lVar4 = uVar8 << 6;
        __Znwm();
        uVar12 = uStack_68;
        puVar1 = (undefined8 *)(lVar4 + ((long)puVar9 - (long)puVar10));
        puVar1[1] = uStack_88;
        *puVar1 = uStack_90;
        puVar1[2] = uStack_80;
        puVar1[4] = uStack_70;
        puVar1[3] = uStack_78;
        uStack_78 = 0;
        uStack_70 = 0;
        puVar1[6] = 0;
        puVar1[7] = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_68 = 0;
        puVar1[5] = uVar12;
        puVar7 = puVar1 + lVar11 * -8;
        for (puVar3 = puVar10; puVar3 != puVar9; puVar3 = puVar3 + 8) {
          uVar13 = puVar3[1];
          uVar12 = *puVar3;
          puVar7[2] = puVar3[2];
          puVar7[1] = uVar13;
          *puVar7 = uVar12;
          uVar13 = puVar3[4];
          uVar12 = puVar3[3];
          puVar7[5] = puVar3[5];
          puVar7[4] = uVar13;
          puVar7[3] = uVar12;
          puVar3[4] = 0;
          puVar3[5] = 0;
          puVar3[3] = 0;
          uVar12 = puVar3[6];
          puVar7[7] = puVar3[7];
          puVar7[6] = uVar12;
          puVar3[6] = 0;
          puVar3[7] = 0;
          puVar7 = puVar7 + 8;
        }
        for (; puVar10 != puVar9; puVar10 = puVar10 + 8) {
          FUN_1073bc1f4(puVar10);
        }
        puVar9 = puVar1 + 8;
        uVar5 = *param_1;
        *param_1 = (ulong)(puVar1 + lVar11 * -8);
        param_1[1] = (ulong)puVar9;
        param_1[2] = lVar4 + uVar8 * 0x40;
        if (uVar5 != 0) {
          __ZdlPv();
        }
        goto LAB_1073b6e98;
      }
      func_0x000104bd35f4();
    }
    else {
      FUN_1073bc21c();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1073b6ed8);
    (*pcVar2)();
  }
  puVar9[2] = uStack_80;
  puVar9[1] = uStack_88;
  *puVar9 = uStack_90;
  puVar9[5] = uStack_68;
  puVar9[4] = uStack_70;
  puVar9[3] = uStack_78;
  uStack_78 = 0;
  uStack_70 = 0;
  puVar9[7] = 0;
  puVar9[6] = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_68 = 0;
  puVar9 = puVar9 + 8;
LAB_1073b6e98:
  param_1[1] = (ulong)puVar9;
  FUN_1073bc1f4(&uStack_90);
  return puVar9 + -8;
}



/* Entry: 1073b6ee8; end: 1073b7047;  */

undefined4 FUN_1073b6ee8(long param_1,long *param_2,long *param_3,ulong param_4)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  int extraout_w10;
  undefined4 uVar9;
  long lVar10;
  long lStack0000000000000000;
  
  func_0x0001073bf2b4();
  plVar4 = param_2;
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x20))();
  lStack0000000000000000 = param_2[1];
  if (lStack0000000000000000 == 0) {
    return 0;
  }
  if (((ulong)plVar5 & 1) == 0) {
    return 0;
  }
  lVar10 = param_2[2];
  func_0x0001073befc8(lStack0000000000000000,&PTR_DAT_1109ab770,&PTR_DAT_1109ab780);
  lVar6 = lStack0000000000000000;
  if (lStack0000000000000000 == 0) {
    lStack0000000000000000 = 0;
  }
  else if (lVar10 != 0) {
    do {
      func_0x0001073becf8();
    } while (extraout_w10 != 0);
  }
  if (param_3 == (long *)0x0) {
    uVar7 = 0;
  }
  else {
    plVar5 = param_3;
    (**(code **)(*param_3 + 0x80))();
    param_4 = (long)plVar5 + param_4;
    uVar7 = *(ulong *)(lStack0000000000000000 + 0x40);
    lVar6 = lStack0000000000000000;
  }
  if (*(int *)(lVar6 + 0x34) == (int)plVar4) {
    uVar1 = *(uint *)(lVar6 + 0x38);
    uVar8 = (uint)((ulong)plVar4 >> 0x20);
    if (uVar1 == uVar8 && uVar7 == param_4) {
      FUN_1073bc228(param_1 + 0x30);
      bVar2 = false;
      uVar9 = 3;
    }
    else {
      uVar3 = 2;
      if (param_4 <= uVar7) {
        uVar3 = 4;
      }
      uVar9 = 1;
      if (uVar8 <= uVar1) {
        uVar9 = uVar3;
      }
      bVar2 = uVar8 <= uVar1 &&
              (param_4 <= uVar7 && (uVar1 <= uVar8 && (param_3 == (long *)0x0 || uVar7 <= param_4)))
      ;
    }
  }
  else {
    uVar9 = 0;
    bVar2 = false;
  }
  func_0x0001073bef28();
  if (bVar2) {
    return 0;
  }
  return uVar9;
}



/* Entry: 1073b7048; end: 1073b712b;  */

void FUN_1073b7048(undefined8 *param_1,undefined1 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x188;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = &PTR_DAT_1109ab7f8;
  *puVar1 = &PTR_DAT_1109ab7a8;
  *(undefined1 *)(puVar1 + 4) = param_2;
  *(undefined8 *)((long)puVar1 + 0x24) = *param_3;
  *(undefined4 *)((long)puVar1 + 0x2c) = *(undefined4 *)(param_3 + 1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar1 + 6,param_4);
  *(undefined4 *)(puVar1 + 9) = param_5;
  *(undefined8 *)((long)puVar1 + 0x4c) = param_6;
  *(undefined1 *)(puVar1 + 0x21) = 0;
  *(undefined1 *)(puVar1 + 0x22) = 0;
  *(undefined1 *)(puVar1 + 0x28) = 0;
  *(undefined1 *)(puVar1 + 0x29) = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0x17] = 0;
  puVar1[0x16] = 0;
  puVar1[0x19] = 0;
  puVar1[0x18] = 0;
  *(undefined8 *)((long)puVar1 + 0xd1) = 0;
  *(undefined8 *)((long)puVar1 + 0xc9) = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2e] = 0;
  *(undefined4 *)(puVar1 + 0x2f) = 0x3f800000;
  *(undefined2 *)(puVar1 + 0x30) = 0x101;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  return;
}



/* Entry: 1073b712c; end: 1073b715f;  */

long FUN_1073b712c(long *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong unaff_x19;
  long *unaff_x20;
  uint *puVar6;
  uint *puVar7;
  undefined1 auStack_88 [8];
  uint *puStack_80;
  uint *puStack_78;
  long lStack_70;
  long *plStack_68;
  undefined1 auStack_18 [8];
  
  FUN_1073bd710(param_1,auStack_18,param_2);
  if (*param_1 != 0) {
    return *param_1 + 0x58;
  }
  func_0x0001073bf248();
  func_0x0001073bee44();
  uVar1 = (uint)unaff_x19 & 0x1ffffff;
  plStack_68 = param_1 + 2;
  puVar6 = (uint *)param_1[1];
  if (puVar6 < (uint *)*plStack_68) {
    puVar7 = puVar6 + 1;
    *puVar6 = uVar1;
  }
  else {
    lVar5 = ((long)puVar6 - *unaff_x20 >> 2) + 1;
    plVar4 = unaff_x20;
    FUN_1073bc394();
    lVar2 = *unaff_x20;
    lVar3 = unaff_x20[1];
    if (plVar4 == (long *)0x0) {
      lVar5 = 0;
    }
    else {
      FUN_1073bc414();
    }
    puStack_80 = (uint *)((long)plVar4 + (lVar3 - lVar2));
    lStack_70 = (long)plVar4 + lVar5 * 4;
    puStack_78 = puStack_80 + 1;
    *puStack_80 = uVar1;
    FUN_1073bc3d4();
    puVar7 = (uint *)unaff_x20[1];
    func_0x0001073bc444(auStack_88);
  }
  unaff_x20[1] = (long)puVar7;
  uVar1 = (int)(unaff_x19 >> 8) - 1;
  if ((uVar1 & 0xff) < 6) {
    lVar5 = *(long *)(&UNK_10de645d8 + ((ulong)uVar1 & 0xff) * 8);
  }
  else {
    lVar5 = 0;
  }
  return lVar5 * (unaff_x19 >> 0x10 & 0xff);
}



/* Entry: 1073b7160; end: 1073b724b;  */

long FUN_1073b7160(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong unaff_x19;
  long *unaff_x20;
  uint *puVar6;
  uint *puVar7;
  undefined1 auStack_68 [8];
  uint *puStack_60;
  uint *puStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  
  func_0x0001073bee44();
  uVar1 = (uint)unaff_x19 & 0x1ffffff;
  puStack_48 = (undefined8 *)(param_1 + 0x10);
  puVar6 = *(uint **)(param_1 + 8);
  if (puVar6 < (uint *)*puStack_48) {
    puVar7 = puVar6 + 1;
    *puVar6 = uVar1;
  }
  else {
    lVar5 = ((long)puVar6 - *unaff_x20 >> 2) + 1;
    plVar4 = unaff_x20;
    FUN_1073bc394();
    lVar2 = *unaff_x20;
    lVar3 = unaff_x20[1];
    if (plVar4 == (long *)0x0) {
      lVar5 = 0;
    }
    else {
      FUN_1073bc414();
    }
    puStack_60 = (uint *)((long)plVar4 + (lVar3 - lVar2));
    lStack_50 = (long)plVar4 + lVar5 * 4;
    puStack_58 = puStack_60 + 1;
    *puStack_60 = uVar1;
    FUN_1073bc3d4();
    puVar7 = (uint *)unaff_x20[1];
    func_0x0001073bc444(auStack_68);
  }
  unaff_x20[1] = (long)puVar7;
  uVar1 = (int)(unaff_x19 >> 8) - 1;
  if ((uVar1 & 0xff) < 6) {
    lVar5 = *(long *)(&UNK_10de645d8 + ((ulong)uVar1 & 0xff) * 8);
  }
  else {
    lVar5 = 0;
  }
  return lVar5 * (unaff_x19 >> 0x10 & 0xff);
}



/* Entry: 1073b724c; end: 1073b725f;  */

undefined1  [16] FUN_1073b724c(long param_1)

{
  undefined1 auVar1 [16];
  undefined2 uStack_e;
  
  auVar1._2_2_ = uStack_e;
  auVar1._0_2_ = *(undefined2 *)(param_1 + 2);
  auVar1._4_8_ = *(undefined8 *)(param_1 + 4);
  auVar1._12_4_ = *(undefined4 *)(param_1 + 0xc);
  return auVar1;
}



/* Entry: 1073b7260; end: 1073b72bb;  */

void FUN_1073b7260(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_1c = param_1;
  uStack_18 = param_2;
  uStack_14 = param_3;
  func_0x00010089aa04(param_4,*(undefined8 *)(param_4 + 8),&uStack_1c,&stack0xfffffffffffffff0);
  return;
}


