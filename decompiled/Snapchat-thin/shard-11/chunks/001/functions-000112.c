/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1081e8fc8; end: 1081e9033;  */

void FUN_1081e8fc8(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  if (*param_2 < *param_1) {
    *param_1 = *param_2;
  }
  if (fVar1 < param_1[1]) {
    param_1[1] = fVar1;
  }
  if (param_1[2] < fVar2) {
    param_1[2] = fVar2;
  }
  if (param_1[3] < fVar3) {
    param_1[3] = fVar3;
  }
  return;
}



/* Entry: 1081e9034; end: 1081e921b;  */

void FUN_1081e9034(int param_1,float *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  
  do {
    if ((int)param_3 < 0x21) {
      pfVar6 = param_2;
      do {
        do {
          pfVar4 = pfVar6;
          pfVar6 = pfVar4 + 1;
          if (param_2 + (long)(int)param_3 + -1 < pfVar6) {
            return;
          }
          fVar11 = pfVar4[1];
        } while (*pfVar4 <= fVar11);
        do {
          pfVar3 = pfVar4;
          pfVar3[1] = *pfVar3;
          if (pfVar3 <= param_2) break;
          pfVar4 = pfVar3 + -1;
        } while (fVar11 < pfVar3[-1]);
        *pfVar3 = fVar11;
      } while( true );
    }
    if (param_1 == 0) {
      uVar10 = (ulong)param_3;
      for (uVar7 = (ulong)(param_3 >> 1); uVar7 != 0; uVar7 = uVar7 - 1) {
        fVar11 = param_2[uVar7 - 1];
        uVar8 = uVar7;
        while( true ) {
          uVar9 = uVar8 * 2;
          if (uVar10 <= uVar9 && uVar9 - uVar10 != 0) break;
          if ((uVar10 > uVar9) && ((param_2 + uVar8 * 2)[-1] < param_2[uVar8 * 2])) {
            uVar9 = uVar9 + 1;
          }
          if (param_2[uVar9 - 1] <= fVar11) break;
          param_2[uVar8 - 1] = param_2[uVar9 - 1];
          uVar8 = uVar9;
        }
        param_2[uVar8 - 1] = fVar11;
      }
      do {
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          return;
        }
        fVar11 = *param_2;
        *param_2 = param_2[uVar10];
        param_2[uVar10] = fVar11;
        fVar11 = *param_2;
        uVar7 = 1;
        while( true ) {
          uVar8 = uVar7 * 2;
          if (uVar10 <= uVar8 && uVar8 - uVar10 != 0) break;
          if ((uVar10 > uVar8) && ((param_2 + uVar7 * 2)[-1] < param_2[uVar7 * 2])) {
            uVar8 = uVar8 + 1;
          }
          param_2[uVar7 - 1] = param_2[uVar8 - 1];
          uVar7 = uVar8;
        }
        while (1 < uVar7) {
          if (fVar11 <= param_2[(uVar7 >> 1) - 1]) break;
          param_2[uVar7 - 1] = param_2[(uVar7 >> 1) - 1];
          uVar7 = uVar7 >> 1;
        }
        param_2[uVar7 - 1] = fVar11;
      } while( true );
    }
    uVar2 = param_3 - 1 >> 1;
    pfVar3 = param_2 + ((ulong)param_3 - 1);
    fVar11 = param_2[uVar2];
    param_2[uVar2] = *pfVar3;
    *pfVar3 = fVar11;
    pfVar4 = param_2;
    for (pfVar6 = param_2; pfVar6 < pfVar3; pfVar6 = pfVar6 + 1) {
      fVar12 = *pfVar6;
      pfVar5 = pfVar4;
      if (fVar12 < fVar11) {
        *pfVar6 = *pfVar4;
        pfVar5 = pfVar4 + 1;
        *pfVar4 = fVar12;
      }
      pfVar4 = pfVar5;
    }
    param_1 = param_1 + -1;
    fVar11 = *pfVar4;
    *pfVar4 = *pfVar3;
    *pfVar3 = fVar11;
    uVar10 = (ulong)((long)pfVar4 - (long)param_2) >> 2;
    FUN_1081e9034(param_1,param_2,uVar10);
    iVar1 = (int)uVar10 + 1;
    param_2 = param_2 + iVar1;
    param_3 = param_3 - iVar1;
  } while( true );
}



/* Entry: 1081e921c; end: 1081e92db;  */

void FUN_1081e921c(void)

{
  return;
}



/* Entry: 1081e92dc; end: 1081e9333;  */

long FUN_1081e92dc(long param_1,long param_2,long *param_3,double *param_4,undefined1 *param_5)

{
  long lVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  
  FUN_1081e9334();
  if (param_1 != 0) {
    return param_1;
  }
  pdVar2 = *(double **)(*(long *)(param_2 + 0x18) + 0x10);
  dVar4 = *pdVar2;
  if ((dVar4 != 1.0) && ((*(int *)(pdVar2 + 0xe) != 0 || (*(int *)((long)pdVar2 + 0x74) != 0)))) {
    pdVar3 = (double *)pdVar2[0xc];
    if (*param_4 == 0.0) {
      *param_3 = (long)pdVar2;
      *param_4 = (double)pdVar3;
    }
    if ((*(byte *)((long)pdVar2 + 0x7c) & 1) == 0) {
      if (*(int *)(pdVar2 + 0xd) != -0x7fffffff) goto LAB_1081e93d8;
      *param_5 = 0;
    }
  }
  pdVar3 = (double *)pdVar2[8];
  if ((pdVar3 != (double *)0x0) &&
     ((*(int *)(pdVar3 + 0xe) != 0 || (*(int *)((long)pdVar3 + 0x74) != 0)))) {
    if (*param_4 == 0.0) {
      *param_3 = (long)pdVar2;
      *param_4 = (double)pdVar3;
    }
    if ((*(byte *)((long)pdVar3 + 0x7c) & 1) == 0) {
      if (*(int *)(pdVar3 + 0xd) == -0x7fffffff) {
        *param_5 = 0;
        return 0;
      }
LAB_1081e93d8:
      lVar1 = 0x58;
      if (*pdVar3 <= dVar4) {
        lVar1 = 0x38;
      }
      return *(long *)((long)pdVar2 + lVar1);
    }
  }
  return 0;
}



/* Entry: 1081e9334; end: 1081e93ff;  */

undefined8
FUN_1081e9334(undefined8 param_1,double *param_2,long *param_3,double *param_4,undefined1 *param_5)

{
  long lVar1;
  double *pdVar2;
  double dVar3;
  
  dVar3 = *param_2;
  if ((dVar3 != 1.0) && ((*(int *)(param_2 + 0xe) != 0 || (*(int *)((long)param_2 + 0x74) != 0)))) {
    pdVar2 = (double *)param_2[0xc];
    if (*param_4 == 0.0) {
      *param_3 = (long)param_2;
      *param_4 = (double)pdVar2;
    }
    if ((*(byte *)((long)param_2 + 0x7c) & 1) == 0) {
      if (*(int *)(param_2 + 0xd) != -0x7fffffff) goto LAB_1081e93d8;
      *param_5 = 0;
    }
  }
  pdVar2 = (double *)param_2[8];
  if ((pdVar2 != (double *)0x0) &&
     ((*(int *)(pdVar2 + 0xe) != 0 || (*(int *)((long)pdVar2 + 0x74) != 0)))) {
    if (*param_4 == 0.0) {
      *param_3 = (long)param_2;
      *param_4 = (double)pdVar2;
    }
    if ((*(byte *)((long)pdVar2 + 0x7c) & 1) == 0) {
      if (*(int *)(pdVar2 + 0xd) == -0x7fffffff) {
        *param_5 = 0;
        return 0;
      }
LAB_1081e93d8:
      lVar1 = 0x58;
      if (*pdVar2 <= dVar3) {
        lVar1 = 0x38;
      }
      return *(undefined8 *)((long)param_2 + lVar1);
    }
  }
  return 0;
}



/* Entry: 1081e9400; end: 1081e94a7;  */

void FUN_1081e9400(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 in_ZR;
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  lVar3 = param_1;
  FUN_1081e94a8(param_1,param_3,param_2);
  uVar1 = (undefined4)lVar3;
  uVar2 = uVar1;
  uStack_54 = uVar1;
  FUN_1081e955c();
  uStack_58 = uVar2;
  func_0x0001081ec3a4(*(undefined8 *)(param_1 + 0xd0));
  if ((bool)in_ZR) {
    uStack_58 = uVar1;
    uStack_54 = uVar2;
  }
  FUN_1081e95c4(param_1,param_4,param_5,param_2,param_3,param_6,&uStack_54,&uStack_58);
  return;
}



/* Entry: 1081e94a8; end: 1081e955b;  */

uint FUN_1081e94a8(undefined8 param_1,double *param_2,double *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  double *unaff_x19;
  double *unaff_x20;
  uint uVar6;
  double dVar7;
  double dVar8;
  
  func_0x0001081ec2b8();
  dVar7 = *param_2;
  dVar8 = *param_3;
  if (dVar8 <= dVar7) {
    param_2 = param_3;
  }
  uVar5 = *(uint *)(param_2 + 0xd);
  if (uVar5 == 0x80000001) {
    FUN_1081ec9bc();
    uVar5 = (uint)param_2;
    if (uVar5 == 0x80000001) {
      return 0x80000001;
    }
    dVar7 = *unaff_x20;
    dVar8 = *unaff_x19;
  }
  if (dVar8 <= dVar7) {
    iVar3 = *(int *)(unaff_x19 + 0xe);
  }
  else {
    iVar3 = -*(int *)(unaff_x20 + 0xe);
  }
  if (uVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = uVar5 - iVar3;
    uVar1 = -uVar5;
    if (-1 < (int)uVar5) {
      uVar1 = uVar5;
    }
    uVar2 = -uVar6;
    if ((int)uVar6 >= 0) {
      uVar2 = uVar6;
    }
    bVar4 = (int)uVar6 < 0;
    if (uVar2 != uVar1) {
      bVar4 = uVar2 < uVar1;
    }
    if (!(bool)(uVar5 != 0x7fffffff & bVar4)) {
      uVar6 = uVar5;
    }
  }
  return uVar6;
}



/* Entry: 1081e955c; end: 1081e95c3;  */

uint FUN_1081e955c(undefined8 param_1,double *param_2,double *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  
  if (*param_3 <= *param_2) {
    iVar6 = *(int *)((long)param_3 + 0x74);
  }
  else {
    iVar6 = -*(int *)((long)param_2 + 0x74);
    param_3 = param_2;
  }
  uVar3 = *(uint *)((long)param_3 + 0x6c);
  uVar4 = uVar3;
  if (iVar6 != 0) {
    uVar4 = uVar3 - iVar6;
    uVar1 = -uVar3;
    if (-1 < (int)uVar3) {
      uVar1 = uVar3;
    }
    uVar2 = -uVar4;
    if ((int)uVar4 >= 0) {
      uVar2 = uVar4;
    }
    bVar5 = (int)uVar4 < 0;
    if (uVar2 != uVar1) {
      bVar5 = uVar2 < uVar1;
    }
    if (!(bool)(bVar5 & uVar3 != 0x7fffffff)) {
      uVar4 = uVar3;
    }
  }
  return uVar4;
}



/* Entry: 1081e95c4; end: 1081e968f;  */

undefined1
FUN_1081e95c4(long param_1,uint param_2,uint param_3,undefined8 param_4,undefined8 param_5,
             ulong param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  
  FUN_1081e9690(param_1,param_4,param_5,param_7,param_8,&uStack_34,&uStack_38,&uStack_3c,&uStack_40)
  ;
  uVar2 = uStack_40;
  uVar3 = uStack_34;
  if (*(char *)(*(long *)(param_1 + 0xd0) + 0x14d) == '\0') {
    uVar2 = uStack_38;
    uVar3 = uStack_3c;
    uStack_38 = uStack_40;
    uStack_3c = uStack_34;
  }
  puVar1 = &UNK_10df0973c +
           (ulong)((uVar3 & param_3) != 0) * 2 +
           (ulong)((uVar2 & param_2) != 0) * 4 +
           (ulong)((uStack_3c & param_2) != 0) * 8 + (param_6 & 0xffffffff) * 0x10;
  if ((uStack_38 & param_3) != 0) {
    puVar1 = puVar1 + 1;
  }
  return *puVar1;
}



/* Entry: 1081e9690; end: 1081e96f7;  */

void FUN_1081e9690(long param_1,double *param_2,double *param_3,int *param_4,int *param_5,
                  int *param_6,int *param_7,int *param_8,int *param_9)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*param_3 <= *param_2) {
    iVar4 = *(int *)(param_3 + 0xe);
    iVar3 = *(int *)((long)param_3 + 0x74);
  }
  else {
    iVar4 = -*(int *)(param_2 + 0xe);
    iVar3 = -*(int *)((long)param_2 + 0x74);
  }
  piVar1 = param_4;
  if (*(char *)(*(long *)(param_1 + 0xd0) + 0x14d) == '\0') {
    piVar1 = param_5;
    param_5 = param_4;
  }
  iVar2 = *param_5;
  *param_6 = iVar2;
  iVar2 = iVar2 - iVar4;
  *param_5 = iVar2;
  *param_7 = iVar2;
  iVar4 = *piVar1;
  *param_8 = iVar4;
  iVar4 = iVar4 - iVar3;
  *piVar1 = iVar4;
  *param_9 = iVar4;
  return;
}



/* Entry: 1081e96f8; end: 1081e9747;  */

void FUN_1081e96f8(void)

{
  func_0x0001081ec2b8();
  FUN_1081e94a8();
  func_0x0001081ec3c4();
  FUN_1081e9748();
  return;
}



/* Entry: 1081e9748; end: 1081e979f;  */

undefined1 FUN_1081e9748(void)

{
  undefined *puVar1;
  int *in_x3;
  int iStack_24;
  
  FUN_1081e97a0();
  puVar1 = &UNK_10df0977c;
  if (*in_x3 != 0) {
    puVar1 = &UNK_10df0977d;
  }
  return puVar1[(ulong)(iStack_24 != 0) * 2];
}



/* Entry: 1081e97a0; end: 1081e97df;  */

void FUN_1081e97a0(undefined8 param_1,double *param_2,double *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  
  if (*param_3 <= *param_2) {
    iVar2 = *(int *)(param_3 + 0xe);
  }
  else {
    iVar2 = -*(int *)(param_2 + 0xe);
  }
  iVar1 = *param_5;
  *param_4 = iVar1;
  if (iVar1 != -0x7fffffff) {
    *param_5 = iVar1 - iVar2;
  }
  return;
}



/* Entry: 1081e97e0; end: 1081e9913;  */

undefined8 FUN_1081e97e0(long param_1,double *param_2,double *param_3,ulong param_4)

{
  double *pdVar1;
  undefined4 uVar2;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [16];
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  undefined4 uStack_68;
  byte bStack_38;
  
  pdVar1 = param_2;
  if (*param_3 <= *param_2) {
    pdVar1 = param_3;
  }
  if ((*(byte *)((long)pdVar1 + 0x7d) & 1) != 0) {
    return 0;
  }
  *(undefined1 *)((long)pdVar1 + 0x7d) = 1;
  FUN_1081e9914(param_2[5],param_2,param_3,auStack_98);
  FUN_1081ef9dc(auStack_98,*(undefined4 *)(param_1 + 0x10c));
  if ((bStack_38 & 1) == 0) {
    func_0x0001081ec334();
code_r0x0001081e9898:
    FUN_1081f7770(param_4,param_3);
    if ((param_4 & 1) == 0) {
      return 0;
    }
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x10c);
    func_0x0001081ec334();
    switch(uVar2) {
    case 1:
      goto code_r0x0001081e9898;
    case 2:
      uStack_a0 = CONCAT44((float)dStack_80,(float)dStack_88);
      FUN_1081f7a6c(param_4,&uStack_a0,param_3);
      break;
    case 3:
      uStack_a0 = CONCAT44((float)dStack_80,(float)dStack_88);
      FUN_1081f7630(uStack_68,param_4,&uStack_a0,param_3);
      break;
    case 4:
      uStack_a8 = CONCAT44((float)dStack_70,(float)dStack_78);
      uStack_a0 = CONCAT44((float)dStack_80,(float)dStack_88);
      FUN_1081f771c(param_4,&uStack_a0,&uStack_a8,param_3);
    }
  }
  return 1;
}



/* Entry: 1081e9914; end: 1081e9a7f;  */

undefined8
FUN_1081e9914(undefined8 param_1,double param_2,long param_3,double *param_4,double *param_5,
             double *param_6)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x10;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined1 auStack_80 [48];
  undefined4 uStack_50;
  
  dVar5 = param_4[1];
  param_6[1] = (double)(float)((ulong)dVar5 >> 0x20);
  *param_6 = (double)SUB84(dVar5,0);
  iVar1 = *(int *)(param_3 + 0x10c);
  dVar5 = (double)SUB84(param_5[1],0);
  (param_6 + (long)(iVar1 - (iVar1 + 1 >> 2)) * 2)[1] = (double)(float)((ulong)param_5[1] >> 0x20);
  param_6[(long)(iVar1 - (iVar1 + 1 >> 2)) * 2] = dVar5;
  if (iVar1 == 1) {
    return 0;
  }
  dVar7 = *param_4;
  dVar8 = *param_5;
  if ((dVar7 == 0.0) || (dVar8 == 0.0)) {
    dVar5 = 1.0;
    bVar2 = true;
    if ((dVar7 != 1.0) && (bVar2 = false, !NAN(dVar8))) {
      bVar2 = dVar8 == 1.0;
    }
    if (bVar2) {
      lVar4 = *(long *)(param_3 + 0xe8);
      if (iVar1 == 3) {
        uVar3 = 0;
        func_0x0001081ec2f0(0);
        *(undefined4 *)(param_6 + 6) = *(undefined4 *)(extraout_x8 + 0x100);
        return uVar3;
      }
      if (iVar1 != 2) {
        uVar3 = 0;
        if (dVar7 == 0.0) {
          func_0x0001081ec2f0(0);
          uVar6 = *(undefined8 *)(extraout_x10 + 0x10);
        }
        else {
          uVar6 = *(undefined8 *)(lVar4 + 0x10);
          param_6[3] = (double)(float)((ulong)uVar6 >> 0x20);
          param_6[2] = (double)(float)uVar6;
          uVar6 = *(undefined8 *)(lVar4 + 8);
        }
        param_6[5] = (double)(float)((ulong)uVar6 >> 0x20);
        param_6[4] = (double)(float)uVar6;
        return uVar3;
      }
      uVar3 = 0;
      func_0x0001081ec2f0(0);
      return uVar3;
    }
  }
  if (iVar1 == 3) {
    uVar9 = *(undefined4 *)(param_3 + 0x100);
    FUN_1081ddb24(auStack_80,*(undefined8 *)(param_3 + 0xe8));
    uStack_50 = uVar9;
    func_0x0001081ec300(auStack_80);
    FUN_1081eda80();
  }
  else {
    if (iVar1 != 2) {
      func_0x0001081ddb44(auStack_80);
      func_0x0001081ec300();
      FUN_1081ef1d4();
      return 1;
    }
    FUN_1081ddb24(auStack_80,*(undefined8 *)(param_3 + 0xe8));
    func_0x0001081ec300(auStack_80);
    FUN_1081f11d8();
  }
  param_6[2] = dVar5;
  param_6[3] = param_2;
  return 1;
}



/* Entry: 1081e9a80; end: 1081e9b67;  */

double * FUN_1081e9a80(double param_1,float param_2,double *param_3,long param_4)

{
  bool bVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double dVar5;
  
  pdVar3 = param_3;
  dVar5 = param_1;
  FUN_1081e9b68();
  pdVar2 = param_3;
  do {
    pdVar4 = pdVar2;
    pdVar2 = pdVar4;
    if (*pdVar4 == param_1) goto joined_r0x0001081e9b38;
    func_0x0001081ec3d0();
    FUN_1081e9b8c();
    if (((ulong)pdVar3 & 1) != 0) {
      pdVar3 = pdVar4;
      if (param_4 == 0) {
        return pdVar4;
      }
      goto LAB_1081e9afc;
    }
    if (param_1 < *pdVar4) goto LAB_1081e9b48;
    pdVar2 = (double *)pdVar4[0xc];
  } while ((double *)pdVar4[0xc] != (double *)0x0);
  pdVar2 = (double *)0x0;
  goto joined_r0x0001081e9b38;
LAB_1081e9afc:
  do {
    do {
      pdVar3 = (double *)pdVar3[3];
      if (pdVar3 == pdVar4) goto LAB_1081e9b48;
    } while ((*(double **)((long)pdVar3[2] + 0x28) != param_3) || (*pdVar3 != param_1));
    bVar1 = false;
    if ((*(float *)(pdVar3 + 1) == SUB84(dVar5,0)) &&
       (bVar1 = false, !NAN(*(float *)((long)pdVar3 + 0xc)) && !NAN(param_2))) {
      bVar1 = *(float *)((long)pdVar3 + 0xc) == param_2;
    }
  } while (!bVar1);
joined_r0x0001081e9b38:
  if ((param_4 != 0) && (func_0x0001081ec7f4(pdVar2,param_4), pdVar2 == (double *)0x0)) {
LAB_1081e9b48:
    pdVar4 = (double *)0x0;
  }
  return pdVar4;
}



/* Entry: 1081e9b68; end: 1081e9b8b;  */

void FUN_1081e9b68(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001081e9b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_110a2f620 + (ulong)*(uint *)(param_2 + 0x10c) * 8))
            (*(undefined4 *)(param_2 + 0x100),param_1,*(undefined8 *)(param_2 + 0xe8));
  return;
}



/* Entry: 1081e9b8c; end: 1081e9d47;  */

void FUN_1081e9b8c(double param_1,long param_2,double *param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  
  if ((((param_2 != param_4) || (8.881784197001252e-16 <= ABS(*param_3 - param_1))) &&
      (uVar1 = param_5, FUN_1081de720(param_5,param_3 + 1), param_2 == param_4)) &&
     ((int)uVar1 != 0)) {
    FUN_1081eb1ec(*param_3,param_1,param_2,param_3 + 1,param_5);
  }
  return;
}



/* Entry: 1081e9d48; end: 1081e9d8f;  */

void FUN_1081e9d48(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uVar1 = param_1;
  FUN_1081e9b68();
  uStack_38 = (undefined4)uVar1;
  uStack_34 = param_2;
  FUN_1081e9d90(param_1,param_3,&uStack_38);
  return;
}



/* Entry: 1081e9d90; end: 1081e9e6f;  */

double * FUN_1081e9d90(double param_1,double *param_2)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  
  pdVar1 = param_2;
  pdVar2 = param_2;
  do {
    dVar3 = *pdVar2;
    if (param_1 == dVar3) {
LAB_1081e9e40:
      *(int *)(pdVar2 + 9) = *(int *)(pdVar2 + 9) + 1;
      return pdVar2;
    }
    if (param_1 != 1.0 && param_1 != 0.0) {
      func_0x0001081ec3d0();
      FUN_1081e9b8c();
      if (((ulong)pdVar1 & 1) != 0) goto LAB_1081e9e40;
      dVar3 = *pdVar2;
    }
    if (param_1 < dVar3) {
      if (*(long *)((long)pdVar2[2] + 0x40) == 0) {
        return (double *)0x0;
      }
      FUN_1081e9e70(param_2,*(long *)((long)pdVar2[2] + 0x40));
      FUN_1081eca30(param_1);
      pdVar2 = param_2;
      goto LAB_1081e9e40;
    }
    if (pdVar2 == param_2 + 0x10) {
      return (double *)0x0;
    }
    pdVar2 = (double *)pdVar2[0xc];
    if (pdVar2 == (double *)0x0) {
      return (double *)0x0;
    }
  } while( true );
}



/* Entry: 1081e9e70; end: 1081e9eb7;  */

void FUN_1081e9e70(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)**(undefined8 **)(param_1 + 0xd0);
  *(undefined1 *)((long)plVar2 + 0x1c) = 1;
  lVar1 = *plVar2;
  FUN_1081ebe5c();
  lVar3 = *(long *)(param_2 + 0x60);
  *(long *)(lVar1 + 0x40) = param_2;
  *(long *)(param_2 + 0x60) = lVar1;
  *(long *)(lVar1 + 0x60) = lVar3;
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x40) = lVar1;
  }
  return;
}



/* Entry: 1081e9eb8; end: 1081e9fc7;  */

long FUN_1081e9eb8(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = param_1;
  if ((*(int *)(param_1 + 0x70) == 0) && (*(int *)(param_1 + 0x74) == 0)) {
    bVar1 = true;
  }
  else {
    if (*(long *)(*(long *)(param_1 + 0x18) + 0x18) != param_1) {
      FUN_1081e9fc8();
    }
    bVar1 = false;
  }
  lVar5 = *(long *)(param_1 + 0x60);
LAB_1081e9f08:
  lVar4 = lVar5;
  if (lVar4 == param_1 + 0x80) {
    if ((!bVar1) && (*(long *)(*(long *)(param_1 + 0x98) + 0x18) != param_1 + 0x80)) {
      lVar2 = param_1;
      func_0x0001081ec234(*(undefined8 *)(param_1 + 0xd0));
      FUN_1081e3be0();
      *(long *)(param_1 + 0xb8) = lVar2;
      return lVar2;
    }
    return lVar2;
  }
  if (!bVar1) {
    func_0x0001081ec234(*(undefined8 *)(param_1 + 0xd0));
    lVar5 = lVar2;
    FUN_1081e3be0();
    *(long *)(lVar4 + 0x38) = lVar2;
    lVar2 = lVar5;
  }
  if (*(int *)(lVar4 + 0x70) == 0) goto LAB_1081e9f44;
  lVar5 = *(long *)(lVar4 + 0x60);
  goto LAB_1081e9f58;
LAB_1081e9f44:
  lVar5 = *(long *)(lVar4 + 0x60);
  bVar1 = true;
  if (*(int *)(lVar4 + 0x74) != 0) {
LAB_1081e9f58:
    func_0x0001081ec234(*(undefined8 *)(param_1 + 0xd0));
    lVar3 = lVar2;
    FUN_1081e3be0();
    bVar1 = false;
    *(long *)(lVar4 + 0x58) = lVar2;
    lVar2 = lVar3;
  }
  goto LAB_1081e9f08;
}



/* Entry: 1081e9fc8; end: 1081e9fff;  */

long FUN_1081e9fc8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001081ec234(*(undefined8 *)(param_1 + 0xd0));
  FUN_1081e3be0();
  *(long *)(param_1 + 0x58) = lVar1;
  return lVar1;
}



/* Entry: 1081ea000; end: 1081ea01f;  */

void FUN_1081ea000(undefined8 param_1)

{
  undefined1 uStack_11;
  
  func_0x0001081ec1a0(param_1,&uStack_11);
  return;
}



/* Entry: 1081ea020; end: 1081ea057;  */

long FUN_1081ea020(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001081ec234(*(undefined8 *)(param_1 + 0xd0));
  FUN_1081e3be0();
  *(long *)(param_1 + 0xb8) = lVar1;
  return lVar1;
}



/* Entry: 1081ea058; end: 1081ea0a3;  */

void FUN_1081ea058(double *param_1)

{
  undefined1 uVar1;
  long *plVar2;
  double *pdVar3;
  long *plVar4;
  
  pdVar3 = param_1;
  do {
    pdVar3[0xe] = 0.0;
    if ((*(byte *)((long)pdVar3 + 0x7c) & 1) == 0) {
      *(undefined1 *)((long)pdVar3 + 0x7c) = 1;
      *(int *)(param_1 + 0x21) = *(int *)(param_1 + 0x21) + 1;
    }
    pdVar3 = (double *)pdVar3[0xc];
    uVar1 = *pdVar3 == 1.0;
  } while (!(bool)uVar1);
  plVar2 = *(long **)(*(long *)param_1[0x1a] + 8);
  for (plVar4 = (long *)*plVar2; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    func_0x0001081e76d4(plVar4[1]);
    if (((((bool)uVar1) || (func_0x0001081e76d4(plVar4[2]), (bool)uVar1)) ||
        (func_0x0001081e76d4(plVar4[3]), (bool)uVar1)) ||
       (func_0x0001081e76d4(plVar4[4]), (bool)uVar1)) {
      FUN_1081e64d8(plVar2,*plVar2,plVar4);
    }
  }
  return;
}



/* Entry: 1081ea0a4; end: 1081ea103;  */

void FUN_1081ea0a4(undefined8 param_1,undefined8 param_2,double *param_3)

{
  double *pdVar1;
  
  while( true ) {
    pdVar1 = param_3;
    FUN_1081ec73c(param_1,param_2);
    if ((int)pdVar1 != 0) {
      return;
    }
    if (*param_3 == 1.0) break;
    param_3 = (double *)param_3[0xc];
    if (param_3 == (double *)0x0) {
      return;
    }
  }
  return;
}



/* Entry: 1081ea104; end: 1081ea1b3;  */

uint FUN_1081ea104(undefined8 param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  double *pdVar6;
  double *pdVar7;
  double *unaff_x19;
  double *unaff_x20;
  uint uVar8;
  double dVar9;
  double dVar10;
  
  pdVar6 = *(double **)(param_2 + 0xd8);
  pdVar7 = *(double **)(param_2 + 0xe0);
  func_0x0001081ec2b8();
  dVar9 = *pdVar6;
  dVar10 = *pdVar7;
  if (dVar10 <= dVar9) {
    pdVar6 = pdVar7;
  }
  uVar5 = *(uint *)(pdVar6 + 0xd);
  if (uVar5 == 0x80000001) {
    FUN_1081ec9bc();
    uVar5 = (uint)pdVar6;
    if (uVar5 == 0x80000001) {
      return 0x80000001;
    }
    dVar9 = *unaff_x20;
    dVar10 = *unaff_x19;
  }
  if (dVar10 <= dVar9) {
    iVar3 = *(int *)(unaff_x19 + 0xe);
  }
  else {
    iVar3 = -*(int *)(unaff_x20 + 0xe);
  }
  if (uVar5 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = uVar5 - iVar3;
    uVar1 = -uVar5;
    if (-1 < (int)uVar5) {
      uVar1 = uVar5;
    }
    uVar2 = -uVar8;
    if ((int)uVar8 >= 0) {
      uVar2 = uVar8;
    }
    bVar4 = (int)uVar8 < 0;
    if (uVar2 != uVar1) {
      bVar4 = uVar2 < uVar1;
    }
    if (!(bool)(uVar5 != 0x7fffffff & bVar4)) {
      uVar8 = uVar5;
    }
  }
  return uVar8;
}



/* Entry: 1081ea1b4; end: 1081ea78f;  */

undefined4 FUN_1081ea1b4(double *param_1,double *param_2)

{
  double *pdVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  undefined8 in_x7;
  uint extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  uint extraout_w8_02;
  int extraout_w8_03;
  long lVar9;
  ulong uVar10;
  ulong unaff_x24;
  long lVar11;
  long lVar12;
  undefined4 *puVar13;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  int iStack_64;
  
  lVar6 = 0x58;
  if (*param_1 <= *param_2) {
    lVar6 = 0x38;
  }
  lVar6 = *(long *)((long)param_2 + lVar6);
  if ((lVar6 == 0) || (*(long *)(lVar6 + 200) == 0)) {
    return 0x80000000;
  }
  func_0x0001081e3bc4();
  lVar9 = 0;
  bVar2 = false;
  lVar12 = *(long *)(lVar6 + 200);
  lVar7 = lVar12;
  do {
    lVar11 = *(long *)(lVar7 + 200);
    if ((((*(byte *)(lVar6 + 0xf6) & 1) == 0) && ((*(byte *)(lVar7 + 0xf6) & 1) == 0)) &&
       ((*(byte *)(lVar11 + 0xf6) & 1) == 0)) {
      FUN_1081ec1dc(*(undefined8 *)(lVar7 + 0xd8));
      iVar5 = (int)lVar6;
      uVar3 = 0x80000000 < extraout_w8;
      uVar4 = extraout_w8 == 0x80000001;
      if ((bool)uVar4) {
        if (lVar9 != 0) {
          lVar6 = *(long *)(*(long *)(lVar9 + 0xd8) + 0x28);
          func_0x0001081ea104();
          func_0x0001081ec3b0();
          if ((bool)uVar3) {
            func_0x0001081ea110();
            iStack_68 = iVar5;
            func_0x0001081ec3a4(*(undefined8 *)(lVar6 + 0xd0));
            if ((bool)uVar4) {
              iStack_68 = (int)unaff_x24;
              iStack_64 = iVar5;
            }
            uVar10 = *(ulong *)(*(long *)(lVar7 + 0xd8) + 0x28);
            uStack_78 = 0;
            puVar13 = &uStack_80;
            func_0x0001081ec310();
            FUN_1081e9690(uVar10);
            func_0x0001081ea11c(uVar10,uStack_6c,uStack_70,uStack_7c,uStack_80,lVar7,&uStack_78,
                                in_x7,puVar13);
            if ((uVar10 & 1) != 0) {
LAB_1081ea32c:
              *(undefined8 *)(lVar7 + 0xd0) = uStack_78;
            }
          }
          else {
            iVar5 = (int)*(undefined8 *)(*(long *)(lVar7 + 0xd8) + 0x28);
            uStack_78 = 0;
            func_0x0001081ea180();
            if (iVar5 != 0) goto LAB_1081ea32c;
          }
          FUN_1081ec1dc(*(undefined8 *)(lVar7 + 0xd8));
          lVar9 = 0;
          if (extraout_w8_00 != -0x7fffffff) {
            lVar9 = lVar7;
          }
        }
      }
      else {
        bVar2 = true;
        lVar9 = lVar7;
      }
    }
    else {
      lVar9 = 0;
    }
    lVar6 = lVar7;
    lVar7 = lVar11;
  } while (lVar11 != lVar12);
  if (lVar9 == 0) {
    if (!bVar2) goto LAB_1081ea4ac;
  }
  else {
    FUN_1081ec1dc(*(undefined8 *)(lVar12 + 0xd8));
    if (extraout_w8_01 != -0x7fffffff) {
      lVar9 = lVar12;
    }
    lVar12 = lVar9;
    if (extraout_w8_01 != -0x7fffffff && !bVar2) goto LAB_1081ea4ac;
  }
  lVar6 = lVar12;
  lVar9 = 0;
  do {
    lVar7 = lVar6;
    func_0x0001081e3bc4();
    if ((((*(byte *)(lVar7 + 0xf6) & 1) == 0) && ((*(byte *)(lVar6 + 0xf6) & 1) == 0)) &&
       ((*(byte *)(*(long *)(lVar6 + 200) + 0xf6) & 1) == 0)) {
      lVar11 = lVar7;
      FUN_1081ec1dc(*(undefined8 *)(lVar6 + 0xd8));
      iVar5 = (int)lVar11;
      uVar3 = 0x80000000 < extraout_w8_02;
      uVar4 = extraout_w8_02 == 0x80000001;
      lVar11 = lVar6;
      if ((bool)uVar4) {
        if (lVar9 == 0) goto LAB_1081ea3b4;
        lVar9 = *(long *)(*(long *)(lVar9 + 0xd8) + 0x28);
        FUN_1081e94a8();
        func_0x0001081ec3b0();
        if ((bool)uVar3) {
          FUN_1081e955c();
          iStack_68 = iVar5;
          func_0x0001081ec3a4(*(undefined8 *)(lVar9 + 0xd0));
          if ((bool)uVar4) {
            iStack_68 = (int)unaff_x24;
            iStack_64 = iVar5;
          }
          unaff_x24 = *(ulong *)(*(long *)(lVar6 + 0xd8) + 0x28);
          uStack_78 = 0;
          puVar13 = &uStack_80;
          func_0x0001081ec310();
          FUN_1081e9690(unaff_x24);
          uVar10 = unaff_x24;
          func_0x0001081ea11c(unaff_x24,uStack_6c,uStack_70,uStack_7c,uStack_80,lVar6,&uStack_78,
                              in_x7,puVar13);
          if ((uVar10 & 1) != 0) {
LAB_1081ea490:
            *(undefined8 *)(lVar6 + 0xd0) = uStack_78;
          }
        }
        else {
          pdVar1 = *(double **)(lVar6 + 0xd8);
          dVar8 = pdVar1[5];
          uStack_78 = 0;
          if (*pdVar1 <= **(double **)(lVar6 + 0xe0)) {
            iVar5 = *(int *)(pdVar1 + 0xe);
          }
          else {
            iVar5 = -*(int *)(*(double **)(lVar6 + 0xe0) + 0xe);
          }
          func_0x0001081ea180(dVar8,unaff_x24,(int)unaff_x24 - iVar5,lVar6,&uStack_78);
          if (SUB84(dVar8,0) != 0) goto LAB_1081ea490;
        }
        FUN_1081ec1dc(*(undefined8 *)(lVar6 + 0xd8));
        lVar11 = 0;
        if (extraout_w8_03 != -0x7fffffff) {
          lVar11 = lVar6;
        }
      }
    }
    else {
LAB_1081ea3b4:
      lVar11 = 0;
    }
    lVar6 = lVar7;
    lVar9 = lVar11;
  } while (lVar7 != lVar12);
LAB_1081ea4ac:
  if (*param_2 <= *param_1) {
    param_1 = param_2;
  }
  return *(undefined4 *)(param_1 + 0xd);
}



/* Entry: 1081ea790; end: 1081ea79b;  */

/* WARNING: Removing unreachable block (ram,0x0001081eaf9c) */
/* WARNING: Removing unreachable block (ram,0x0001081eaf90) */

double FUN_1081ea790(undefined8 param_1,long *param_2,int *param_3)

{
  double *pdVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  double dVar5;
  double *pdVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  double *pdVar10;
  
  lVar9 = *param_2;
  iVar2 = *param_3;
  lVar8 = 0x60;
  if (iVar2 < 1) {
    lVar8 = 0x40;
  }
  lVar4 = 0x38;
  if (iVar2 < 1) {
    lVar4 = 0x58;
  }
  pdVar10 = *(double **)(lVar9 + lVar8);
  lVar8 = *(long *)((long)pdVar10 + lVar4);
  if (lVar8 == 0) {
    dVar5 = *pdVar10;
    bVar3 = true;
    if ((dVar5 != 0.0) && (bVar3 = false, !NAN(dVar5))) {
      bVar3 = dVar5 == 1.0;
    }
    if (!bVar3) {
      return 0.0;
    }
    pdVar10 = *(double **)((long)pdVar10[3] + 0x10);
    dVar5 = pdVar10[5];
    if (iVar2 < 1) {
      pdVar6 = pdVar10 + 8;
    }
    else {
      if (*pdVar10 == 1.0) {
        return 0.0;
      }
      pdVar6 = pdVar10 + 0xc;
    }
  }
  else {
    lVar4 = lVar8;
    FUN_1081e3ad8();
    if (2 < (int)lVar4) {
      return 0.0;
    }
    lVar8 = *(long *)(lVar8 + 200);
    if (lVar8 == 0) {
      return 0.0;
    }
    pdVar10 = *(double **)(lVar8 + 0xd8);
    dVar5 = pdVar10[5];
    pdVar6 = (double *)(lVar8 + 0xe0);
  }
  pdVar6 = (double *)*pdVar6;
  if (pdVar6 != (double *)0x0) {
    iVar7 = -1;
    if (*pdVar10 < *pdVar6) {
      iVar7 = 1;
    }
    if (iVar2 == iVar7) {
      if (iVar2 < 0) {
        lVar9 = *(long *)(lVar9 + 0x40);
      }
      pdVar1 = pdVar10;
      if (*pdVar6 <= *pdVar10) {
        pdVar1 = pdVar6;
      }
      if ((*(int *)(pdVar1 + 0xe) == *(int *)(lVar9 + 0x70)) &&
         (*(int *)((long)pdVar1 + 0x74) == *(int *)(lVar9 + 0x74))) {
        *param_2 = (long)pdVar10;
        return dVar5;
      }
    }
  }
  return 0.0;
}



/* Entry: 1081ea79c; end: 1081ea88b;  */

undefined8 FUN_1081ea79c(long param_1,long param_2,long param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  undefined1 in_NG;
  long lVar3;
  int iVar4;
  long lVar5;
  
  func_0x0001081ec27c();
  if (!(bool)in_NG) {
    param_2 = param_3;
  }
  if ((*(byte *)(param_2 + 0x7c) & 1) == 0) {
    func_0x0001081ec384();
    *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + 1;
  }
  iVar4 = -999;
  lVar2 = 0;
  lVar5 = 0;
  while (lVar3 = lVar2, FUN_1081eae74(), param_1 != 0) {
    if (iVar4 == 0) {
      return 0;
    }
    iVar1 = *(int *)(param_1 + 0x108);
    if ((iVar1 == *(int *)(param_1 + 0x104)) || (lVar3 == param_2 || lVar5 == param_2)) break;
    if (*(char *)(param_2 + 0x7c) != '\x01') {
      *(undefined1 *)(param_2 + 0x7c) = 1;
      *(int *)(param_1 + 0x108) = iVar1 + 1;
    }
    iVar4 = iVar4 + 1;
    lVar2 = param_2;
    lVar5 = lVar3;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0;
  }
  return 1;
}



/* Entry: 1081ea88c; end: 1081ea8b7;  */

long FUN_1081ea88c(long param_1)

{
  func_0x00010840f37c();
  return *(long *)(param_1 + 8) + (long)*(int *)(param_1 + 0x14) * 8 + -8;
}



/* Entry: 1081ea8b8; end: 1081eaaeb;  */

void FUN_1081ea8b8(double param_1,double param_2,long param_3,long *param_4,long *param_5,
                  long *param_6,undefined1 *param_7)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined1 uVar1;
  int iVar2;
  long *plVar3;
  undefined1 extraout_w8;
  undefined1 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  ulong extraout_x9_02;
  long lVar5;
  long lVar6;
  byte bVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  byte bVar11;
  int iStack_68;
  undefined4 uStack_64;
  
  lVar5 = *param_5;
  lVar6 = *param_6;
  lVar10 = param_3;
  func_0x0001081ec208();
  uStack_64 = 0xffffffff;
  if ((bool)in_NG) {
    uStack_64 = 1;
  }
  FUN_1081ea790();
  if (lVar10 == 0) {
    func_0x0001081ec240(uStack_64);
    lVar10 = 0x60;
    if ((bool)in_ZR || in_NG != in_OV) {
      lVar10 = extraout_x8_00;
    }
    lVar9 = lVar5;
    FUN_1081ea1b4(lVar5,*(undefined8 *)(extraout_x9_01 + lVar10),0);
    iVar2 = (int)lVar9;
    uVar1 = iVar2 + -0x80000000 < 0;
    if (iVar2 == -0x80000000) {
      *param_7 = 1;
      func_0x0001081ec208();
      uVar4 = extraout_w8;
    }
    else {
      func_0x0001081ec3e4();
      lVar10 = 0x58;
      if (!(bool)uVar1) {
        lVar10 = extraout_x8_01;
      }
      lVar10 = *(long *)(lVar6 + lVar10);
      if (*(char *)(lVar10 + 0xf6) != '\x01') {
        func_0x0001081ec36c();
        lVar5 = 0;
        bVar7 = 0;
        bVar11 = 0;
        lVar6 = *(long *)(lVar10 + 200);
        iStack_68 = iVar2;
        do {
          lVar8 = *(long *)(*(long *)(lVar6 + 0xd8) + 0x28);
          lVar9 = lVar8;
          FUN_1081e9748(lVar8,*(long *)(lVar6 + 0xd8),*(undefined8 *)(lVar6 + 0xe0),&iStack_68);
          if ((int)lVar9 == 0) {
            if (*(int *)(lVar8 + 0x108) != *(int *)(lVar8 + 0x104)) {
              FUN_1081ea79c(lVar8,*(undefined8 *)(lVar6 + 0xd8),*(undefined8 *)(lVar6 + 0xe0),0);
              goto LAB_1081eaa70;
            }
          }
          else {
            if (lVar5 == 0) {
LAB_1081eaa18:
              func_0x0001081ec1f4(*(undefined8 *)(lVar6 + 0xd8));
              bVar7 = *(byte *)(extraout_x8_02 + 0x7c);
              lVar5 = lVar6;
            }
            else if ((bVar7 & 1) == 0) {
              bVar7 = 0;
            }
            else {
              if (!(bool)(bVar11 & 1)) goto LAB_1081eaa18;
              bVar7 = 1;
            }
            bVar11 = bVar11 + 1;
            if (*(int *)(lVar8 + 0x108) != *(int *)(lVar8 + 0x104)) {
LAB_1081eaa70:
              lVar9 = *(long *)(lVar6 + 0xd0);
              if ((lVar9 != 0) && ((*(byte *)(lVar9 + 0x4d) & 1) == 0)) {
                *(undefined1 *)(lVar9 + 0x4d) = 1;
                plVar3 = param_4;
                FUN_1081ea88c();
                *plVar3 = lVar9;
              }
            }
          }
          lVar6 = *(long *)(lVar6 + 200);
          if (lVar6 == lVar10) {
            func_0x0001081ec208();
            func_0x0001081ec410();
            if ((extraout_x9_02 & 1) == 0) {
              func_0x0001081ec2c4();
            }
            if (lVar5 == 0) {
              return;
            }
            *param_5 = *(long *)(lVar5 + 0xd8);
            *param_6 = *(long *)(lVar5 + 0xe0);
            return;
          }
        } while( true );
      }
      *param_7 = 1;
      uVar1 = false;
      uVar4 = 1;
      if (!NAN(param_2) && !NAN(param_1)) {
        uVar1 = param_2 < param_1;
      }
    }
    if (!(bool)uVar1) {
      lVar5 = lVar6;
    }
    if ((*(byte *)(lVar5 + 0x7c) & 1) == 0) {
      *(undefined1 *)(lVar5 + 0x7c) = uVar4;
      *(int *)(param_3 + 0x108) = *(int *)(param_3 + 0x108) + 1;
    }
  }
  else {
    func_0x0001081ec208();
    func_0x0001081ec410();
    if ((extraout_x9 & 1) == 0) {
      func_0x0001081ec384();
      *(int *)(param_3 + 0x108) = *(int *)(param_3 + 0x108) + 1;
      func_0x0001081ec240(uStack_64);
      lVar5 = 0x60;
      if ((bool)in_ZR || in_NG != in_OV) {
        lVar5 = extraout_x8;
      }
      *param_6 = *(long *)(extraout_x9_00 + lVar5);
    }
  }
  return;
}



/* Entry: 1081eaaec; end: 1081eacab;  */

void FUN_1081eaaec(long param_1,long *param_2,long *param_3,undefined1 *param_4)

{
  double *pdVar1;
  char cVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 uVar5;
  long extraout_x8;
  long lVar6;
  long extraout_x9;
  long lVar7;
  long lVar8;
  byte bVar9;
  bool bVar10;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  double *pdVar11;
  double *pdVar12;
  double dVar13;
  double dVar14;
  
  func_0x0001081ec2b8();
  pdVar11 = (double *)*param_2;
  pdVar12 = (double *)*param_3;
  uVar5 = 0xffffffff;
  if (*pdVar11 < *pdVar12) {
    uVar5 = 1;
  }
  lVar6 = param_1;
  FUN_1081ea790();
  if (lVar6 == 0) {
    dVar13 = *pdVar12;
    dVar14 = *pdVar11;
    lVar6 = 0x58;
    if (dVar14 <= dVar13) {
      lVar6 = 0x38;
    }
    lVar6 = *(long *)((long)pdVar12 + lVar6);
    if ((lVar6 == 0) || (*(char *)(lVar6 + 0xf6) == '\x01')) {
      *param_4 = 1;
      if (dVar13 <= dVar14) {
        pdVar11 = pdVar12;
      }
      if ((*(byte *)((long)pdVar11 + 0x7c) & 1) == 0) {
        *(undefined1 *)((long)pdVar11 + 0x7c) = 1;
        *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + 1;
      }
    }
    else {
      lVar7 = 0;
      bVar10 = false;
      bVar9 = 0;
      lVar8 = *(long *)(lVar6 + 200);
      do {
        if (lVar8 == 0) {
          return;
        }
        if (lVar7 == 0) {
LAB_1081eac04:
          pdVar1 = *(double **)(lVar8 + 0xd8);
          if (**(double **)(lVar8 + 0xe0) <= **(double **)(lVar8 + 0xd8)) {
            pdVar1 = *(double **)(lVar8 + 0xe0);
          }
          lVar7 = lVar8;
          if (*(char *)((long)pdVar1 + 0x7c) != '\x01') break;
          bVar10 = true;
        }
        else if (bVar10) {
          if (!(bool)(bVar9 & 1)) goto LAB_1081eac04;
          bVar10 = true;
        }
        else {
          bVar10 = false;
        }
        lVar8 = *(long *)(lVar8 + 200);
        bVar9 = bVar9 + 1;
      } while (lVar8 != lVar6);
      pdVar1 = pdVar11;
      if (dVar13 <= dVar14) {
        pdVar1 = pdVar12;
      }
      if ((*(byte *)((long)pdVar1 + 0x7c) & 1) == 0) {
        dVar13 = pdVar11[5];
        *(undefined1 *)((long)pdVar1 + 0x7c) = 1;
        *(int *)((long)dVar13 + 0x108) = *(int *)((long)dVar13 + 0x108) + 1;
      }
      *unaff_x20 = *(undefined8 *)(lVar7 + 0xd8);
      *unaff_x19 = *(undefined8 *)(lVar7 + 0xe0);
    }
  }
  else {
    dVar13 = *pdVar11;
    dVar14 = *pdVar12;
    cVar4 = NAN(dVar13) || NAN(dVar14);
    uVar3 = dVar13 == dVar14;
    cVar2 = dVar13 < dVar14;
    if (!(bool)cVar2) {
      pdVar11 = pdVar12;
    }
    if ((*(byte *)((long)pdVar11 + 0x7c) & 1) == 0) {
      func_0x0001081ec384();
      *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + 1;
      func_0x0001081ec240(uVar5);
      lVar6 = 0x60;
      if ((bool)uVar3 || cVar2 != cVar4) {
        lVar6 = extraout_x8;
      }
      *unaff_x19 = *(undefined8 *)(extraout_x9 + lVar6);
    }
  }
  return;
}



/* Entry: 1081eacac; end: 1081ead23;  */

void FUN_1081eacac(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 *puVar1;
  
  *(undefined8 *)(param_2 + 0xd0) = param_4;
  *(undefined8 *)(param_2 + 0xd8) = 0;
  *(undefined8 *)(param_2 + 0xe8) = param_3;
  *(undefined4 *)(param_2 + 0x100) = param_1;
  *(undefined4 *)(param_2 + 0x10c) = param_5;
  *(undefined8 *)(param_2 + 0x104) = 0;
  *(undefined1 *)(param_2 + 0x110) = 0;
  FUN_1081eca30(0,param_2,param_2,0,param_3);
  puVar1 = (undefined8 *)(param_2 + 0x80);
  *(undefined8 **)(param_2 + 0x60) = puVar1;
  *(long *)(param_2 + 0xa8) = param_2;
  *puVar1 = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0x88) =
       *(undefined8 *)
        (*(long *)(param_2 + 0xe8) +
        (long)(*(int *)(param_2 + 0x10c) - (*(int *)(param_2 + 0x10c) + 1 >> 2)) * 8);
  *(undefined8 **)(param_2 + 0x90) = puVar1;
  *(undefined8 **)(param_2 + 0x98) = puVar1;
  *(undefined2 *)(param_2 + 0xa0) = 0;
  *(undefined1 *)(param_2 + 0xa2) = 0;
  *(undefined8 **)(param_2 + 0xb0) = puVar1;
  *(undefined8 *)(param_2 + 0xb8) = 0;
  *(long *)(param_2 + 0xc0) = param_2;
  *(undefined4 *)(param_2 + 200) = 0;
  *(undefined2 *)(param_2 + 0xcc) = 1;
  return;
}



/* Entry: 1081ead24; end: 1081eae3b;  */

bool FUN_1081ead24(double param_1,double param_2,long param_3,long param_4)

{
  double *pdVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_260 [448];
  undefined4 uStack_a0;
  undefined2 uStack_9c;
  undefined4 uStack_9a;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  
  puVar2 = auStack_260;
  dVar6 = param_1;
  FUN_1081e3384();
  dVar7 = (double)(ulong)*(uint *)(param_3 + 0x100);
  dStack_70 = dVar6;
  dStack_68 = param_2;
  (**(code **)(&UNK_110a2f558 + (ulong)*(uint *)(param_3 + 0x10c) * 8))
            (*(undefined8 *)(param_3 + 0xe8));
  dStack_88 = dStack_68;
  dStack_90 = dStack_70;
  dStack_80 = dVar6 + param_1;
  dStack_78 = param_2 - dVar7;
  uStack_9c = 0;
  _bzero(auStack_260,0x1c0);
  uStack_a0 = 0;
  uStack_9a = 0x10000;
  (**(code **)(&UNK_110a2f580 + (ulong)*(uint *)(param_4 + 0x10c) * 8))
            (*(undefined4 *)(param_4 + 0x100),*(undefined8 *)(param_4 + 0xe8),&dStack_90,auStack_260
            );
  uVar3 = (ulong)(byte)uStack_9a;
  uVar4 = 0xffffffffffffffff;
  do {
    uVar5 = uVar3;
    if (uVar4 - uVar3 == -1) break;
    pdVar1 = &dStack_70;
    FUN_1081df8e8(pdVar1,puVar2);
    uVar5 = uVar4 + 1;
    puVar2 = puVar2 + 0x10;
    uVar4 = uVar5;
  } while ((int)pdVar1 == 0);
  return uVar5 < uVar3;
}



/* Entry: 1081eae3c; end: 1081eae73;  */

void FUN_1081eae3c(double *param_1)

{
  double *pdVar1;
  
  pdVar1 = param_1;
  do {
    if ((*(byte *)((long)pdVar1 + 0x7c) & 1) == 0) {
      *(undefined1 *)((long)pdVar1 + 0x7c) = 1;
      *(int *)(param_1 + 0x21) = *(int *)(param_1 + 0x21) + 1;
    }
    pdVar1 = (double *)pdVar1[0xc];
  } while (*pdVar1 != 1.0);
  return;
}



/* Entry: 1081eae74; end: 1081eafc3;  */

double FUN_1081eae74(undefined8 param_1,long *param_2,int *param_3,long *param_4,long *param_5)

{
  double *pdVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  double dVar5;
  double *pdVar6;
  double *pdVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  double *pdVar11;
  
  lVar10 = *param_2;
  iVar2 = *param_3;
  lVar9 = 0x60;
  if (iVar2 < 1) {
    lVar9 = 0x40;
  }
  lVar4 = 0x38;
  if (iVar2 < 1) {
    lVar4 = 0x58;
  }
  pdVar11 = *(double **)(lVar10 + lVar9);
  lVar9 = *(long *)((long)pdVar11 + lVar4);
  if (lVar9 == 0) {
    dVar5 = *pdVar11;
    bVar3 = true;
    if ((dVar5 != 0.0) && (bVar3 = false, !NAN(dVar5))) {
      bVar3 = dVar5 == 1.0;
    }
    if (!bVar3) {
      return 0.0;
    }
    pdVar6 = *(double **)((long)pdVar11[3] + 0x10);
    dVar5 = pdVar6[5];
    if (iVar2 < 1) {
      pdVar7 = pdVar6 + 8;
    }
    else {
      if (*pdVar6 == 1.0) {
        return 0.0;
      }
      pdVar7 = pdVar6 + 0xc;
    }
  }
  else {
    lVar4 = lVar9;
    FUN_1081e3ad8();
    if (2 < (int)lVar4) goto LAB_1081eaf98;
    lVar9 = *(long *)(lVar9 + 200);
    if (lVar9 == 0) {
      return 0.0;
    }
    pdVar6 = *(double **)(lVar9 + 0xd8);
    dVar5 = pdVar6[5];
    pdVar7 = (double *)(lVar9 + 0xe0);
    pdVar11 = pdVar6;
  }
  pdVar7 = (double *)*pdVar7;
  if (pdVar7 == (double *)0x0) {
    return 0.0;
  }
  iVar8 = -1;
  if (*pdVar6 < *pdVar7) {
    iVar8 = 1;
  }
  if (iVar2 == iVar8) {
    if (iVar2 < 0) {
      lVar10 = *(long *)(lVar10 + 0x40);
    }
    pdVar1 = pdVar6;
    if (*pdVar7 <= *pdVar6) {
      pdVar1 = pdVar7;
    }
    if ((*(int *)(pdVar1 + 0xe) == *(int *)(lVar10 + 0x70)) &&
       (*(int *)((long)pdVar1 + 0x74) == *(int *)(lVar10 + 0x74))) {
      *param_2 = (long)pdVar6;
      if (param_4 != (long *)0x0) {
        *param_4 = (long)pdVar1;
        return dVar5;
      }
      return dVar5;
    }
  }
LAB_1081eaf98:
  if (param_5 == (long *)0x0) {
    return 0.0;
  }
  *param_5 = (long)pdVar11;
  return 0.0;
}



/* Entry: 1081eafc4; end: 1081eb05f;  */

long FUN_1081eafc4(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 *param_5)

{
  undefined1 in_NG;
  long lVar1;
  int iVar2;
  
  func_0x0001081ec27c();
  if ((bool)in_NG) {
    param_3 = param_2;
  }
  FUN_1081eb060();
  iVar2 = -999;
  lVar1 = param_1;
  while (func_0x0001081ec2a4(), lVar1 != 0) {
    if (iVar2 == 0) {
      return 0;
    }
    if (*(int *)(param_3 + 0x68) != -0x7fffffff) break;
    FUN_1081eb060();
    iVar2 = iVar2 + 1;
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0;
  }
  return param_1;
}



/* Entry: 1081eb060; end: 1081eb087;  */

byte FUN_1081eb060(undefined8 param_1,long param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x7c);
  if ((bVar1 & 1) == 0) {
    func_0x0001081ec328();
  }
  return bVar1 ^ 1;
}



/* Entry: 1081eb088; end: 1081eb1af;  */

long FUN_1081eb088(long param_1,long param_2,long param_3,int param_4,int param_5,
                  undefined8 *param_6)

{
  int iVar1;
  undefined1 in_NG;
  long lVar2;
  long lVar3;
  int iVar4;
  
  lVar2 = param_1;
  func_0x0001081ec27c();
  if ((bool)in_NG) {
    param_3 = param_2;
  }
  FUN_1081eb1b0();
  iVar4 = -999;
  lVar3 = lVar2;
  do {
    func_0x0001081ec2a4();
    if (lVar3 == 0) {
LAB_1081eb17c:
      if (param_6 != (undefined8 *)0x0) {
        *param_6 = 0;
      }
      return lVar2;
    }
    if (iVar4 == 0) {
      return 0;
    }
    iVar1 = *(int *)(param_3 + 0x68);
    if (iVar1 != -0x7fffffff) {
      if (*(char *)((long)*(long **)(param_1 + 0xd0) + 0x14d) ==
          *(char *)(*(long *)(lVar3 + 0xd0) + 0x14d)) {
        if ((iVar1 != param_4) || (*(int *)(param_3 + 0x6c) != param_5)) {
          *(undefined1 *)(**(long **)(param_1 + 0xd0) + 0x1d) = 1;
          return 1;
        }
      }
      else {
        if (iVar1 != param_5) {
          return 0;
        }
        if (*(int *)(param_3 + 0x6c) != param_4) {
          return 0;
        }
      }
      goto LAB_1081eb17c;
    }
    FUN_1081eb1b0();
    iVar4 = iVar4 + 1;
  } while( true );
}



/* Entry: 1081eb1b0; end: 1081eb1eb;  */

byte FUN_1081eb1b0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x7c);
  if ((bVar1 & 1) == 0) {
    func_0x0001081ec328();
    FUN_1081ecb40(param_2,param_4);
  }
  return bVar1 ^ 1;
}



/* Entry: 1081eb1ec; end: 1081eb28b;  */

bool FUN_1081eb1ec(double param_1,double param_2,long param_3)

{
  float *unaff_x19;
  float *unaff_x20;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (*(int *)(param_3 + 0x10c) == 1) {
    return false;
  }
  func_0x0001081ec2b8();
  fVar2 = 0.0;
  fVar1 = SUB84((param_1 + param_2) * 0.5,0);
  FUN_1081e9b68();
  fVar3 = *unaff_x20 - *unaff_x19;
  fVar5 = unaff_x20[1] - unaff_x19[1];
  fVar5 = fVar5 * fVar5 + fVar3 * fVar3;
  fVar5 = fVar5 + fVar5;
  fVar3 = 2.3841858e-07;
  if (2.3841858e-07 <= fVar5) {
    fVar3 = fVar5;
  }
  fVar5 = fVar1 - *unaff_x20;
  fVar4 = fVar2 - unaff_x20[1];
  if (fVar3 < fVar4 * fVar4 + fVar5 * fVar5) {
    return true;
  }
  fVar1 = fVar1 - *unaff_x19;
  fVar2 = fVar2 - unaff_x19[1];
  return fVar3 < fVar2 * fVar2 + fVar1 * fVar1;
}



/* Entry: 1081eb28c; end: 1081eb6d7;  */

undefined8 FUN_1081eb28c(double *param_1)

{
  float fVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  uint uVar11;
  double *pdVar12;
  double *pdVar13;
  double *pdVar14;
  double dVar15;
  double *pdVar16;
  long lVar17;
  int iVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double *pdStack_370;
  double dStack_350;
  double dStack_348;
  undefined1 auStack_340 [64];
  double dStack_300;
  double dStack_2f8;
  double dStack_2f0;
  double dStack_2e8;
  undefined1 auStack_2d8 [64];
  double adStack_298 [30];
  double adStack_1a8 [26];
  undefined4 uStack_d8;
  undefined2 uStack_d4;
  undefined4 uStack_d2;
  float fStack_c8;
  float fStack_c4;
  double dStack_c0;
  double dStack_b8;
  
  if (*(int *)(param_1 + 0x21) == *(int *)((long)param_1 + 0x104)) {
LAB_1081eb2cc:
    uVar19 = 0;
  }
  else {
    uVar19 = 0;
    pdVar13 = (double *)0x0;
    iVar18 = 1000;
    pdStack_370 = param_1;
    func_0x0001081ec390();
    pdVar12 = pdStack_370;
LAB_1081eb338:
    do {
      while (pdStack_370 = (double *)pdStack_370[3], pdStack_370 != pdVar12) {
        iVar18 = iVar18 + -1;
        if (iVar18 == 0) goto LAB_1081eb2cc;
        if (((ulong)pdStack_370[4] & 1) == 0) {
          dVar15 = pdStack_370[2];
          pdVar16 = *(double **)((long)dVar15 + 0x28);
          if (*(int *)(pdVar16 + 0x21) != *(int *)((long)pdVar16 + 0x104)) {
            if (((ulong)pdVar16[0x22] & 1) == 0) {
              *(undefined1 *)(pdVar16 + 0x22) = 1;
            }
            else if ((pdVar12 != param_1 && pdVar16 != param_1) &&
                    (((*pdVar12 == 1.0 ||
                      (pdVar9 = pdVar12, FUN_1081eca08(pdVar12,pdVar16), ((ulong)pdVar9 & 1) == 0))
                     && (pdVar9 = pdVar12, func_0x0001081ec82c(pdVar12,pdVar16),
                        ((ulong)pdVar9 & 1) == 0)))) {
              pdVar7 = (double *)0x0;
              pdVar9 = pdVar12;
              pdVar10 = (double *)0x0;
              pdVar14 = pdVar13;
              do {
                pdVar13 = pdVar14;
                if ((pdVar10 != (double *)0x0) ||
                   (pdVar9 = (double *)pdVar9[8], pdVar8 = pdVar9, pdVar9 == (double *)0x0))
                goto LAB_1081eb444;
                do {
                  pdVar7 = (double *)pdVar8[3];
                  if (pdVar7 == pdVar9) {
                    pdVar10 = (double *)0x0;
                    pdVar14 = pdVar13;
                    break;
                  }
                  pdVar8 = pdVar7;
                } while ((((ulong)pdVar7[4] & 1) != 0) ||
                        (pdVar10 = pdVar16, pdVar14 = pdVar9,
                        *(double **)((long)pdVar7[2] + 0x28) != pdVar16));
              } while( true );
            }
          }
        }
      }
      pdVar16 = param_1;
    } while ((*pdVar12 != 1.0) &&
            (pdStack_370 = (double *)pdVar12[0xc], pdVar12 = pdStack_370,
            pdStack_370 != (double *)0x0));
    do {
      while (param_1 = (double *)param_1[3], param_1 != pdVar16) {
        *(undefined1 *)(*(long *)((long)param_1[2] + 0x28) + 0x110) = 0;
      }
    } while ((*pdVar16 != 1.0) &&
            (param_1 = (double *)pdVar16[0xc], pdVar16 = param_1, param_1 != (double *)0x0));
  }
  return uVar19;
LAB_1081eb444:
  if ((pdVar7 == pdStack_370) || (pdVar10 == (double *)0x0)) goto LAB_1081eb338;
  dVar24 = *pdVar7;
  dVar25 = *pdStack_370;
  pdVar9 = pdVar13;
  pdVar10 = pdVar12;
  pdVar14 = pdVar7;
  if (dVar25 < dVar24) {
    dVar15 = pdVar7[2];
    pdVar9 = pdVar12;
    pdVar10 = pdVar13;
    pdVar14 = pdStack_370;
    pdStack_370 = pdVar7;
  }
  uVar2 = *(ulong *)(*(long *)param_1[0x1a] + 8);
  dVar4 = pdVar14[2];
  dVar5 = pdVar9[2];
  dVar6 = pdVar10[2];
  uVar3 = uVar2;
  FUN_1081e69ac(uVar2,dVar4,dVar15);
  if ((uVar3 & 1) != 0) goto LAB_1081eb534;
  dVar22 = *pdVar12;
  fVar1 = SUB84((*pdVar13 + dVar22) * 0.5,0);
  FUN_1081e9b68(param_1);
  fStack_c8 = fVar1;
  fStack_c4 = SUB84(dVar22,0);
  uVar3 = (long)dVar4 + 8;
  FUN_1081de720(uVar3,&fStack_c8);
  if ((uVar3 & 1) == 0) {
    uVar3 = (long)dVar15 + 8;
    FUN_1081de720(uVar3,&fStack_c8);
    if ((uVar3 & 1) == 0) {
      if (*(long *)((long)dVar4 + 0x10) == *(long *)((long)dVar15 + 0x10)) goto LAB_1081eb534;
      uStack_d4 = 0;
      _bzero(adStack_298,0x1c0);
      uStack_d8 = 0;
      dVar20 = 1.39067116189079e-309;
      uStack_d2 = 0x10000;
      FUN_1081e9914(param_1,pdVar13,pdVar12,auStack_2d8);
      func_0x0001081ec2e0(*(undefined4 *)((long)param_1 + 0x10c));
      dVar21 = dVar20;
      dVar23 = dVar22;
      func_0x0001081ec2e0(*(undefined4 *)((long)param_1 + 0x10c));
      dStack_300 = (double)fStack_c8;
      dStack_2f8 = (double)fStack_c4;
      dStack_2f0 = dVar22 + dVar21;
      dStack_2e8 = dVar23 - dVar20;
      FUN_1081e9914(pdVar16,*(undefined8 *)((long)dVar4 + 0x10),*(undefined8 *)((long)dVar15 + 0x10)
                    ,auStack_340);
      (**(code **)(&UNK_110a2f5f8 + (ulong)*(uint *)((long)pdVar16 + 0x10c) * 8))
                (auStack_340,&dStack_300,adStack_298);
      pdVar16 = adStack_298;
      uVar11 = 0;
      for (lVar17 = 0x1e; lVar17 - 0x1eU < (ulong)(byte)uStack_d2; lVar17 = lVar17 + 1) {
        if ((0.0 - adStack_298[lVar17]) * (1.0 - adStack_298[lVar17]) <= 0.0) {
          dStack_348 = pdVar16[1];
          dStack_350 = *pdVar16;
          dStack_c0 = (double)fStack_c8;
          dStack_b8 = (double)fStack_c4;
          pdVar9 = &dStack_350;
          FUN_1081ec0c8(pdVar9,&dStack_c0);
          uVar11 = (uint)pdVar9 | uVar11;
        }
        pdVar16 = pdVar16 + 2;
      }
      if ((uVar11 & 1) == 0) goto LAB_1081eb534;
    }
  }
  uVar3 = uVar2;
  FUN_1081e5348(uVar2,dVar4,dVar15,dVar5,dVar6);
  if ((uVar3 & 1) == 0) {
    FUN_1081e547c(uVar2,dVar4,dVar15,dVar5,dVar6);
  }
  uVar19 = 1;
LAB_1081eb534:
  if (dVar25 < dVar24) {
    pdStack_370 = pdVar14;
  }
  func_0x0001081ec390();
  goto LAB_1081eb338;
}



/* Entry: 1081eb6d8; end: 1081eb883;  */

undefined8 FUN_1081eb6d8(double *param_1)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  double dVar11;
  double dVar12;
  
  pdVar10 = param_1;
  do {
    iVar2 = *(int *)(pdVar10 + 9);
    if (1 < iVar2) {
      iVar3 = 1000;
      pdVar4 = pdVar10;
      do {
        iVar3 = iVar3 + -1;
        if (iVar3 == 0) {
          return 0;
        }
        pdVar8 = (double *)pdVar4[2];
        if (((*(int *)(pdVar8 + 9) != iVar2) && (((ulong)pdVar8[4] & 1) == 0)) &&
           ((double *)pdVar8[5] != param_1)) {
          dVar11 = *pdVar8;
          pdVar5 = pdVar8;
          pdVar9 = pdVar8;
          while ((pdVar5 = (double *)pdVar5[8], pdVar6 = pdVar8, pdVar7 = pdVar8, dVar12 = dVar11,
                 pdVar5 != (double *)0x0 && (ABS(*pdVar5 - dVar11) < 7.62939453125e-06))) {
            if ((*(int *)(pdVar5 + 9) != iVar2) && (*(char *)(pdVar5 + 4) == '\0')) {
              pdVar9 = pdVar5;
            }
          }
          while (((dVar12 != 1.0 && (pdVar7 = (double *)pdVar7[0xc], pdVar7 != (double *)0x0)) &&
                 (dVar12 = *pdVar7, ABS(dVar12 - dVar11) < 7.62939453125e-06))) {
            if ((*(int *)(pdVar7 + 9) != iVar2) && (*(char *)(pdVar7 + 4) == '\0')) {
              pdVar6 = pdVar7;
            }
          }
          if (pdVar9 != pdVar6) {
            do {
              if (((pdVar9 != pdVar8) && ((double *)pdVar9[3] != pdVar9)) &&
                 (pdVar7 = *(double **)((long)((double *)pdVar9[3])[2] + 0x28), pdVar5 = pdVar10,
                 pdVar7 != param_1)) {
                do {
                  if (*(double **)((long)pdVar5[2] + 0x28) == pdVar7) {
                    func_0x0001081ec3c4();
                    FUN_1081ec5b0();
                    func_0x0001081ec3c4();
                    FUN_1081ec564();
                    goto LAB_1081eb84c;
                  }
                  pdVar1 = pdVar5 + 3;
                  pdVar5 = (double *)*pdVar1;
                } while ((double *)*pdVar1 != pdVar10);
              }
            } while ((pdVar9 != pdVar6) && (pdVar9 = (double *)pdVar9[0xc], pdVar9 != (double *)0x0)
                    );
          }
        }
        pdVar4 = (double *)pdVar4[3];
      } while (pdVar4 != pdVar10);
    }
LAB_1081eb84c:
    if ((*pdVar10 == 1.0) || (pdVar10 = (double *)pdVar10[0xc], pdVar10 == (double *)0x0)) {
      return 1;
    }
  } while( true );
}



/* Entry: 1081eb884; end: 1081ebaa7;  */

undefined8
FUN_1081eb884(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined1 *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  fVar15 = *(float *)(param_2 + 1);
  fVar16 = *(float *)((long)param_2 + 0xc);
  fVar17 = *(float *)(param_3 + 1);
  fVar18 = *(float *)((long)param_3 + 0xc);
  fVar8 = -fVar15;
  if (0.0 <= fVar15) {
    fVar8 = fVar15;
  }
  fVar20 = -fVar16;
  if (0.0 <= fVar16) {
    fVar20 = fVar16;
  }
  fVar21 = -fVar17;
  if (0.0 <= fVar17) {
    fVar21 = fVar17;
  }
  fVar19 = -fVar18;
  if (0.0 <= fVar18) {
    fVar19 = fVar18;
  }
  if (fVar19 <= fVar21) {
    fVar19 = fVar21;
  }
  if (fVar19 <= fVar20) {
    fVar19 = fVar20;
  }
  if (fVar19 <= fVar8) {
    fVar19 = fVar8;
  }
  fVar15 = fVar15 - fVar17;
  fVar16 = fVar16 - fVar18;
  fVar8 = -fVar15;
  if (0.0 <= fVar15) {
    fVar8 = fVar15;
  }
  fVar15 = -fVar16;
  if (0.0 <= fVar16) {
    fVar15 = fVar16;
  }
  if (fVar15 <= fVar8) {
    fVar15 = fVar8;
  }
  fVar16 = ABS(fVar15);
  fVar8 = ABS(fVar19 * 7.6293945e-06);
  bVar1 = false;
  bVar2 = false;
  bVar3 = false;
  if (fVar15 != 0.0) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar8) && !NAN(fVar16)) {
      bVar1 = fVar8 < fVar16;
      bVar2 = fVar8 == fVar16;
      bVar3 = false;
    }
  }
  if (!bVar2 && bVar1 == bVar3) {
    puVar9 = (undefined8 *)0x0;
    puVar13 = (undefined8 *)0x0;
    fVar8 = 3.4028235e+38;
    puVar10 = param_2;
    do {
      if ((*(byte *)(puVar10 + 4) & 1) == 0) {
        while (puVar12 = puVar10, func_0x0001081ec518(puVar10,param_2), (int)puVar12 != 0) {
          puVar10 = (undefined8 *)puVar10[3];
          if (puVar10 == param_2) goto LAB_1081eba4c;
        }
        uVar11 = *(ulong *)(puVar10[2] + 0x28);
        iVar14 = 100;
        puVar12 = param_3;
        do {
          if ((*(byte *)(puVar12 + 4) & 1) == 0) {
            while (puVar5 = puVar12, func_0x0001081ec518(puVar12,param_3), (int)puVar5 != 0) {
              puVar12 = (undefined8 *)puVar12[3];
              if (puVar12 == param_3) goto LAB_1081eb96c;
            }
            fVar15 = *(float *)((long)puVar10 + 0xc) - *(float *)((long)puVar12 + 0xc);
            fVar15 = fVar15 * fVar15 +
                     (*(float *)(puVar10 + 1) - *(float *)(puVar12 + 1)) *
                     (*(float *)(puVar10 + 1) - *(float *)(puVar12 + 1));
            if ((fVar15 < fVar8) &&
               ((uVar11 != *(ulong *)(puVar12[2] + 0x28) ||
                (uVar6 = uVar11, FUN_1081eb1ec(*puVar10,*puVar12,uVar11,puVar10 + 1),
                (uVar6 & 1) == 0)))) {
              puVar9 = puVar10;
              puVar13 = puVar12;
              fVar8 = fVar15;
            }
            if (iVar14 < 2) {
              return 0;
            }
            iVar14 = iVar14 + -1;
          }
          puVar12 = (undefined8 *)puVar12[3];
        } while (puVar12 != param_3);
      }
LAB_1081eb96c:
      puVar10 = (undefined8 *)puVar10[3];
    } while (puVar10 != param_2);
LAB_1081eba4c:
    if (puVar13 != (undefined8 *)0x0) {
      uVar7 = *(undefined8 *)(puVar9[2] + 0x28);
      FUN_1081e9b8c(*puVar13,uVar7,puVar9,*(undefined8 *)(puVar13[2] + 0x28),puVar13 + 1);
      uVar4 = (undefined1)uVar7;
      goto LAB_1081eba78;
    }
  }
  uVar4 = 0;
LAB_1081eba78:
  *param_4 = uVar4;
  return 1;
}



/* Entry: 1081ebaa8; end: 1081ebbf7;  */

/* WARNING: Type propagation algorithm not settling */

double * FUN_1081ebaa8(double *param_1)

{
  int iVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  int iVar7;
  char cStack_41;
  
  iVar7 = 9999;
  pdVar2 = param_1;
  pdVar4 = param_1;
  pdVar3 = param_1;
LAB_1081ebad8:
  do {
    iVar1 = iVar7 + -1;
    pdVar4 = (double *)pdVar4[3];
    if (pdVar4 != pdVar3) {
      if (iVar1 == 0) {
        return (double *)0x0;
      }
      pdVar2 = (double *)pdVar4[2];
      iVar7 = iVar1;
      if ((((double *)pdVar2[5] != param_1) || (pdVar2 != pdVar4)) || (((ulong)pdVar4[4] & 1) != 0))
      goto LAB_1081ebad8;
      if (*pdVar2 == 1.0) {
        pdVar2 = pdVar3;
        if (pdVar3 == param_1) {
          FUN_1081ea058(param_1);
          return (double *)0x1;
        }
      }
      else {
        pdVar4 = pdVar3;
        if (pdVar2[8] == 0.0) goto LAB_1081ebb44;
      }
      func_0x0001081ec924(pdVar2,pdVar4);
    }
LAB_1081ebb44:
    pdVar4 = (double *)pdVar3[0xc];
    pdVar6 = param_1;
    pdVar3 = pdVar4;
    if (*pdVar4 == 1.0) {
      do {
        pdVar4 = (double *)pdVar6[0xc];
        FUN_1081eb884();
        if ((int)pdVar2 == 0) {
          return pdVar2;
        }
        pdVar3 = pdVar2;
        if (cStack_41 == '\x01') {
          pdVar3 = pdVar6;
          pdVar5 = pdVar4;
          if ((*pdVar4 == 1.0) && (pdVar3 = pdVar4, pdVar5 = pdVar6, pdVar6[8] == 0.0)) {
            FUN_1081ea058(param_1);
            return pdVar2;
          }
          func_0x0001081ec880(pdVar3,pdVar5);
        }
        pdVar2 = pdVar3;
        pdVar6 = pdVar4;
        if (*pdVar4 == 1.0) {
          return (double *)0x1;
        }
      } while( true );
    }
  } while( true );
}



/* Entry: 1081ebbf8; end: 1081ebd1b;  */

undefined8 FUN_1081ebbf8(double *param_1)

{
  bool bVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  uint uVar6;
  double *pdVar7;
  
  pdVar3 = param_1;
  do {
    if (*pdVar3 == 1.0) {
      pdVar4 = (double *)0x0;
    }
    else {
      pdVar4 = (double *)pdVar3[0xb];
    }
    pdVar5 = (double *)pdVar3[7];
    if (pdVar5 != (double *)0x0 || pdVar4 != (double *)0x0) {
      if ((pdVar5 == (double *)0x0) || (pdVar4 == (double *)0x0)) {
        pdVar2 = param_1;
        if (pdVar5 == (double *)0x0) {
          pdVar5 = pdVar4;
        }
      }
      else {
        func_0x0001081ec3c4();
        FUN_1081e398c();
        pdVar2 = param_1;
        if (((ulong)param_1 & 1) == 0) {
          return 0;
        }
      }
      param_1 = pdVar5;
      uVar6 = 0xfffffc18;
      pdVar5 = pdVar3;
      do {
        bVar1 = 0xfffffffe < uVar6;
        uVar6 = uVar6 + 1;
        if (bVar1) {
          return 0;
        }
        pdVar7 = (double *)pdVar5[2];
        if (pdVar7 != pdVar3) {
          if ((pdVar7[7] != 0.0) && (func_0x0001081ec360(), ((ulong)pdVar2 & 1) == 0)) {
            func_0x0001081ec354();
          }
          if (((*pdVar7 != 1.0) && (pdVar7[0xb] != 0.0)) &&
             (func_0x0001081ec360(), ((ulong)pdVar2 & 1) == 0)) {
            func_0x0001081ec354();
          }
        }
        pdVar5 = (double *)pdVar5[3];
      } while (pdVar5 != pdVar3);
      FUN_1081e3ad8();
      if (((int)param_1 == 1) && (pdVar3[7] = 0.0, pdVar4 != (double *)0x0)) {
        pdVar3[0xb] = 0.0;
      }
    }
  } while ((*pdVar3 != 1.0) && (pdVar3 = (double *)pdVar3[0xc], pdVar3 != (double *)0x0));
  return 1;
}



/* Entry: 1081ebd1c; end: 1081ebd43;  */

double * FUN_1081ebd1c(double *param_1)

{
  do {
    if (*(char *)((long)param_1 + 0x7c) != '\x01') {
      return param_1;
    }
    param_1 = (double *)param_1[0xc];
  } while (*param_1 != 1.0);
  return (double *)0x0;
}



/* Entry: 1081ebd44; end: 1081ebdd7;  */

void FUN_1081ebd44(void)

{
  func_0x0001081ebda4();
  func_0x0001081ec3f8();
  return;
}



/* Entry: 1081ebdd8; end: 1081ebe5b;  */

void FUN_1081ebdd8(void)

{
  func_0x0001081ec25c();
  func_0x0001081ec404();
  FUN_1081f1048();
  return;
}



/* Entry: 1081ebe5c; end: 1081ebe7b;  */

void FUN_1081ebe5c(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_1081ebe7c(param_1,&uStack_11);
  return;
}



/* Entry: 1081ebe7c; end: 1081ebebb;  */

void FUN_1081ebe7c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x0001081865e0(param_1,0x80,8);
  param_1[1] = puVar1 + 0x10;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  return;
}



/* Entry: 1081ebebc; end: 1081ebed3;  */

undefined1  [16] FUN_1081ebebc(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = (double)(float)param_1[1] - (double)(float)*param_1;
  auVar1._8_8_ = (double)(float)((ulong)param_1[1] >> 0x20) -
                 (double)(float)((ulong)*param_1 >> 0x20);
  return auVar1;
}



/* Entry: 1081ebed4; end: 1081ebf57;  */

void FUN_1081ebed4(void)

{
  func_0x0001081ec25c();
  func_0x0001081ec404();
  FUN_1081f0fb8();
  return;
}



/* Entry: 1081ebf58; end: 1081ebf93;  */

void FUN_1081ebf58(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double dStack_30;
  double dStack_28;
  double dStack_20;
  double dStack_18;
  
  dStack_30 = (double)(float)*param_1;
  dStack_28 = (double)(float)((ulong)*param_1 >> 0x20);
  dStack_20 = (double)(float)param_1[1];
  dStack_18 = (double)(float)((ulong)param_1[1] >> 0x20);
  FUN_1081dff94(param_3,&dStack_30,param_2);
  return;
}



/* Entry: 1081ebf94; end: 1081ebfcb;  */

void FUN_1081ebf94(void)

{
  func_0x0001081ec2b8();
  func_0x0001081ec25c();
  FUN_1081e0c3c();
  return;
}



/* Entry: 1081ebfcc; end: 1081ec013;  */

void FUN_1081ebfcc(void)

{
  func_0x0001081ec2b8();
  func_0x0001081ec250();
  FUN_1081ddfb0();
  return;
}



/* Entry: 1081ec014; end: 1081ec04b;  */

void FUN_1081ec014(void)

{
  func_0x0001081ec2b8();
  func_0x0001081ec268();
  FUN_1081df0b8();
  return;
}



/* Entry: 1081ec04c; end: 1081ec0c7;  */

undefined1  [16] FUN_1081ec04c(double *param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = param_1[2] - *param_1;
  auVar1._8_8_ = param_1[3] - param_1[1];
  return auVar1;
}



/* Entry: 1081ec0c8; end: 1081ec1db;  */

double * FUN_1081ec0c8(double *param_1,double *param_2)

{
  double *pdVar1;
  float fVar2;
  int iVar3;
  double dVar4;
  ulong uVar5;
  int iVar6;
  float fVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  if ((1.1920928955078125e-07 <= ABS(*param_1 - *param_2)) ||
     (1.1920928955078125e-07 <= ABS(param_1[1] - param_2[1]))) {
    pdVar1 = param_1;
    FUN_1081de93c();
    if ((int)pdVar1 != 0) {
      dVar4 = param_1[1];
      FUN_1081de93c(dVar4,param_2[1]);
      if ((int)pdVar1 != 0) {
        FUN_1081de844(param_1,param_2);
        dVar8 = *param_1;
        dVar10 = param_1[1];
        dVar11 = *param_2;
        dVar12 = param_2[1];
        dVar14 = dVar11;
        if (dVar8 <= dVar11) {
          dVar14 = dVar8;
        }
        dVar13 = dVar10;
        if (dVar14 <= dVar10) {
          dVar13 = dVar14;
        }
        dVar14 = dVar12;
        if (dVar13 <= dVar12) {
          dVar14 = dVar13;
        }
        if (dVar11 <= dVar8) {
          dVar11 = dVar8;
        }
        if (dVar10 <= dVar11) {
          dVar10 = dVar11;
        }
        if (dVar12 <= dVar10) {
          dVar12 = dVar10;
        }
        dVar10 = -dVar14;
        if (-dVar14 <= dVar12) {
          dVar10 = dVar12;
        }
        dVar4 = dVar4 + dVar10;
        dVar11 = ABS(dVar10);
        dVar12 = ABS(dVar4);
        if ((dVar11 < 3.4028234663852886e+38) && (dVar12 < 3.4028234663852886e+38)) {
          fVar2 = (float)dVar10;
          fVar7 = (float)dVar4;
          uVar5 = CONCAT44(fVar7,fVar2) ^
                  (CONCAT44(fVar7,fVar2) ^ CONCAT44(-(int)ABS(fVar7),-(int)ABS(fVar2))) &
                  CONCAT44(-(uint)((int)fVar7 < 0),-(uint)((int)fVar2 < 0));
          iVar3 = (int)uVar5;
          iVar6 = (int)(uVar5 >> 0x20);
          uVar9 = NEON_rev64(CONCAT44(iVar6 + 0x10,iVar3 + 0x10),4);
          return (double *)
                 (ulong)(-(uint)(iVar3 < (int)uVar9 && iVar6 < (int)((ulong)uVar9 >> 0x20)) & 1);
        }
        if (dVar12 <= dVar11) {
          dVar12 = dVar11;
        }
        return (double *)(ulong)(ABS(dVar10 - dVar4) / dVar12 < 1.9073486328125e-06);
      }
    }
  }
  else {
    pdVar1 = (double *)0x1;
  }
  return pdVar1;
}



/* Entry: 1081ec1dc; end: 1081ec563;  */

void FUN_1081ec1dc(void)

{
  return;
}



/* Entry: 1081ec564; end: 1081ec5af;  */

void FUN_1081ec564(long param_1)

{
  int iVar1;
  undefined8 uVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  long lVar2;
  
  func_0x0001081ecbc4();
  func_0x0001081ddb68();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x0001081ecbb8();
    iVar1 = (int)lVar2;
    FUN_1081ec5b0();
    if (iVar1 != 0) {
      uVar3 = *(undefined8 *)(unaff_x19 + 0x18);
      *(undefined8 *)(unaff_x19 + 0x18) = unaff_x20;
      *(undefined8 *)(param_1 + 0x18) = uVar3;
      FUN_1081ec6bc();
    }
  }
  return;
}



/* Entry: 1081ec5b0; end: 1081ec6bb;  */

bool FUN_1081ec5b0(double *param_1)

{
  bool bVar1;
  double *pdVar2;
  long lVar3;
  double *unaff_x19;
  double *unaff_x20;
  double *pdVar4;
  int iVar5;
  double *pdVar6;
  double dVar7;
  
  func_0x0001081ecbc4();
  iVar5 = 1000000;
  do {
    iVar5 = iVar5 + -1;
    if (iVar5 == 0) goto LAB_1081ec698;
    pdVar6 = (double *)param_1[3];
    if (((ulong)param_1[4] & 1) == 0) {
      lVar3 = *(long *)((long)param_1[2] + 0x28);
      pdVar4 = unaff_x20;
      if (*(int *)(lVar3 + 0x108) != *(int *)(lVar3 + 0x104)) {
        do {
          if ((*(long *)((long)pdVar4[2] + 0x28) == lVar3) && (((ulong)pdVar4[4] & 1) == 0)) {
            dVar7 = *pdVar4;
            bVar1 = true;
            if ((dVar7 != 0.0) && (bVar1 = false, !NAN(dVar7))) {
              bVar1 = dVar7 == 1.0;
            }
            dVar7 = pdVar4[2];
            pdVar2 = param_1;
            if (bVar1) {
              dVar7 = *param_1;
              bVar1 = true;
              if ((dVar7 != 0.0) && (bVar1 = false, !NAN(dVar7))) {
                bVar1 = dVar7 == 1.0;
              }
              dVar7 = param_1[2];
              pdVar2 = pdVar4;
              if (bVar1) {
                FUN_1081eae3c(lVar3);
                *(undefined1 *)(param_1 + 4) = 1;
                *(undefined1 *)(pdVar4 + 4) = 1;
                break;
              }
            }
            func_0x0001081ec924(dVar7,pdVar2);
            break;
          }
          pdVar2 = pdVar4 + 3;
          pdVar4 = (double *)*pdVar2;
        } while ((double *)*pdVar2 != unaff_x20);
      }
    }
    param_1 = pdVar6;
  } while (pdVar6 != unaff_x19);
  FUN_1081ec6bc();
LAB_1081ec698:
  return iVar5 != 0;
}



/* Entry: 1081ec6bc; end: 1081ec73b;  */

void FUN_1081ec6bc(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  plVar6 = *(long **)(**(long **)(*(long *)(param_1 + 0x28) + 0xd0) + 8);
  lVar7 = param_1;
  if ((*plVar6 == 0) && (plVar6[1] == 0)) {
    return;
  }
  do {
    if (*(char *)(lVar7 + 0x22) == '\x01') {
      FUN_1081e73f0(plVar6,lVar7);
    }
    plVar1 = (long *)(lVar7 + 0x18);
    lVar7 = *plVar1;
  } while (*plVar1 != param_1);
  FUN_1081e6d58(plVar6,*plVar6);
  plVar1 = (long *)plVar6[1];
  if (plVar1 != (long *)0x0) {
    plVar2 = plVar1;
    plVar5 = (long *)0x0;
    do {
      plVar3 = (long *)*plVar2;
      plVar4 = plVar2;
      if (*(char *)(plVar2[1] + 0x20) == '\x01') {
        if (plVar5 == (long *)0x0) {
          if (plVar1 == (long *)*plVar6) {
            plVar4 = (long *)0x0;
            *plVar6 = (long)plVar3;
          }
          else {
            plVar4 = (long *)0x0;
            plVar6[1] = (long)plVar3;
          }
        }
        else {
          *plVar5 = (long)plVar3;
          plVar4 = plVar5;
        }
      }
      plVar2 = plVar3;
      plVar5 = plVar4;
    } while (plVar3 != (long *)0x0);
  }
  return;
}



/* Entry: 1081ec73c; end: 1081ec87f;  */

undefined8 FUN_1081ec73c(double param_1,double param_2,double *param_3)

{
  int iVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  pdVar3 = (double *)0x0;
  iVar1 = 100000;
  pdVar2 = param_3;
  dVar4 = *param_3;
  dVar6 = *param_3;
  while( true ) {
    pdVar2 = (double *)pdVar2[3];
    if (pdVar2 == param_3) {
      return 0;
    }
    iVar1 = iVar1 + -1;
    if (iVar1 == 0 || pdVar2 == pdVar3) break;
    if (*(double *)((long)pdVar2[2] + 0x28) == param_3[5]) {
      dVar7 = *pdVar2;
      dVar5 = dVar7;
      if (dVar4 <= dVar7) {
        dVar5 = dVar4;
      }
      if (dVar7 <= dVar6) {
        dVar7 = dVar6;
      }
      if (((dVar5 - param_1) * (dVar7 - param_1) <= 0.0) &&
         ((dVar5 - param_2) * (dVar7 - param_2) <= 0.0)) {
        return 1;
      }
      pdVar3 = (double *)param_3[3];
      dVar4 = dVar5;
      dVar6 = dVar7;
    }
  }
  return 2;
}



/* Entry: 1081ec880; end: 1081ec9bb;  */

void FUN_1081ec880(undefined8 param_1,ulong param_2)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  long unaff_x19;
  double *unaff_x20;
  
  func_0x0001081ecbc4();
  func_0x0001081ec924();
  func_0x0001081ecbb8();
  func_0x0001081ec7dc();
  if ((param_2 & 1) == 0) {
    pdVar1 = (double *)unaff_x20[3];
    unaff_x20[3] = *(double *)(unaff_x19 + 0x18);
    *(double **)(unaff_x19 + 0x18) = unaff_x20;
LAB_1081ec8b8:
    pdVar2 = pdVar1;
    if (pdVar2 != unaff_x20) {
      pdVar1 = (double *)pdVar2[3];
      pdVar3 = (double *)unaff_x20[3];
      do {
        if (pdVar3 == unaff_x20) {
          pdVar2[3] = unaff_x20[3];
          unaff_x20[3] = (double)pdVar2;
          break;
        }
        pdVar3 = (double *)pdVar3[3];
      } while ((pdVar3[2] != pdVar2[2]) || (*pdVar3 != *pdVar2));
      goto LAB_1081ec8b8;
    }
    *(int *)(unaff_x19 + 0x48) = *(int *)(unaff_x19 + 0x48) + *(int *)(unaff_x20 + 9);
  }
  return;
}



/* Entry: 1081ec9bc; end: 1081eca07;  */

undefined4 FUN_1081ec9bc(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar2 = param_1;
  do {
    func_0x0001081ecbb8();
    FUN_1081f65b4();
    if ((uVar2 & 1) != 0) break;
    bVar1 = uVar3 < 9;
    uVar3 = uVar3 + 1;
  } while (bVar1);
  return *(undefined4 *)(param_1 + 0x68);
}



/* Entry: 1081eca08; end: 1081eca2f;  */

bool FUN_1081eca08(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x50);
  do {
    plVar1 = (long *)(lVar2 + 0x28);
    if (*plVar1 == param_2) break;
    lVar2 = *(long *)(lVar2 + 0x50);
  } while (lVar2 != param_1);
  return *plVar1 == param_2;
}



/* Entry: 1081eca30; end: 1081eca7f;  */

void FUN_1081eca30(long param_1,long param_2)

{
  func_0x0001081ec84c();
  *(long *)(param_1 + 0x50) = param_1;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0x8000000180000001;
  *(undefined4 *)(param_1 + 0x70) = 1;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined2 *)(param_1 + 0x7c) = 0;
  *(int *)(param_2 + 0x104) = *(int *)(param_2 + 0x104) + 1;
  return;
}



/* Entry: 1081eca80; end: 1081ecb3f;  */

void FUN_1081eca80(ulong param_1,double param_2,int param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  double *pdVar4;
  
  uVar1 = param_1;
  FUN_1081eca08();
  uVar3 = param_1;
  if ((uVar1 & 1) != 0) {
    return;
  }
  do {
    uVar3 = *(ulong *)(uVar3 + 0x18);
    if (uVar3 == param_1) {
      return;
    }
    pdVar4 = *(double **)(uVar3 + 0x10);
  } while (pdVar4[5] != param_2);
  if ((param_4 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x60);
    func_0x0001081ec7f4(lVar2,param_2);
    if (lVar2 == 0) {
      return;
    }
    if (**(double **)(lVar2 + 0x10) <= *pdVar4) {
      pdVar4 = *(double **)(lVar2 + 0x10);
    }
    pdVar4 = (double *)pdVar4[2];
  }
  else if (param_3 != 0) {
    if (pdVar4[8] == 0.0) {
      return;
    }
    goto LAB_1081ecaf4;
  }
  if (*pdVar4 == 1.0) {
    return;
  }
LAB_1081ecaf4:
  func_0x0001081ecbb8();
  FUN_1081e72cc();
  return;
}



/* Entry: 1081ecb40; end: 1081ecbcf;  */

void FUN_1081ecb40(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x6c) == -0x7fffffff || *(int *)(param_1 + 0x6c) == param_2) {
    *(int *)(param_1 + 0x6c) = param_2;
    return;
  }
  *(undefined1 *)(**(long **)(*(long *)(param_1 + 0x28) + 0xd0) + 0x1d) = 1;
  return;
}



/* Entry: 1081ecbd0; end: 1081ecceb;  */

long FUN_1081ecbd0(double *param_1,double *param_2,int *param_3,byte *param_4)

{
  byte bVar1;
  int iVar2;
  double *pdVar3;
  int iVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = 0x58;
  if (*param_2 <= *param_1) {
    lVar6 = 0x38;
  }
  lVar6 = *(long *)((long)param_1 + lVar6);
  iVar4 = -0x7fffffff;
  if (lVar6 != 0) {
    bVar1 = 0;
    lVar7 = lVar6;
LAB_1081ecc1c:
    lVar7 = *(long *)(lVar7 + 200);
    if (lVar7 == 0) {
      return 0;
    }
    bVar5 = *(byte *)(lVar7 + 0xf6);
    lVar8 = lVar7;
    if ((bVar5 != 1) && (!(bool)(lVar7 == lVar6 & bVar1))) goto code_r0x0001081ecc40;
    iVar4 = -0x7fffffff;
    do {
      pdVar3 = *(double **)(lVar8 + 0xd8);
      if (**(double **)(lVar8 + 0xe0) <= **(double **)(lVar8 + 0xd8)) {
        pdVar3 = *(double **)(lVar8 + 0xe0);
      }
      iVar2 = *(int *)(pdVar3 + 0xd);
      if (*(int *)(pdVar3 + 0xd) == -0x7fffffff) {
        FUN_1081ec9bc();
        iVar2 = iVar4;
        if ((int)pdVar3 != -0x7fffffff) {
          iVar2 = (int)pdVar3;
        }
      }
      iVar4 = iVar2;
      lVar8 = *(long *)(lVar8 + 200);
    } while (lVar8 != lVar7);
    bVar5 = bVar5 ^ 1;
    goto LAB_1081eccc8;
  }
  lVar8 = 0;
LAB_1081ecccc:
  *param_3 = iVar4;
  return lVar8;
code_r0x0001081ecc40:
  bVar1 = bVar1 | lVar7 == lVar6;
  pdVar3 = *(double **)(lVar7 + 0xd8);
  if (**(double **)(lVar7 + 0xe0) <= **(double **)(lVar7 + 0xd8)) {
    pdVar3 = *(double **)(lVar7 + 0xe0);
  }
  iVar4 = *(int *)(pdVar3 + 0xd);
  if (iVar4 != -0x7fffffff) goto code_r0x0001081ecc64;
  goto LAB_1081ecc1c;
code_r0x0001081ecc64:
  bVar5 = 1;
LAB_1081eccc8:
  *param_4 = bVar5;
  goto LAB_1081ecccc;
}



/* Entry: 1081eccec; end: 1081ecd27;  */

void FUN_1081eccec(long param_1)

{
  long lVar1;
  
  while (((*(byte *)(param_1 + 0x14c) & 1) != 0 || (lVar1 = param_1, FUN_1081e7914(), lVar1 == 0)))
  {
    param_1 = *(long *)(param_1 + 0x128);
    if (param_1 == 0) {
      return;
    }
  }
  return;
}



/* Entry: 1081ecd28; end: 1081ecf17;  */

double FUN_1081ecd28(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  double dVar8;
  uint uVar9;
  int iVar10;
  double dVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  byte bStack_69;
  int iStack_68;
  byte bStack_61;
  
LAB_1081ecd5c:
  iVar10 = *(int *)((long)param_1 + 0x14);
  if (iVar10 != 0) {
    lVar14 = *(long *)(param_1[1] + (long)iVar10 * 8 + -8);
    *(int *)((long)param_1 + 0x14) = iVar10 + -1;
    lVar6 = *(long *)(lVar14 + 0x28);
    *param_2 = *(long *)(*(long *)(lVar14 + 0x18) + 0x10);
    bStack_61 = 1;
    *param_3 = 0;
    FUN_1081e92dc(lVar6,*param_2,param_2,param_3,&bStack_61);
    if (lVar6 != 0) {
      *param_2 = *(long *)(lVar6 + 0xd8);
      *param_3 = *(long *)(lVar6 + 0xe0);
      FUN_1081ea88c();
      *param_1 = lVar14;
      return *(double *)(*(long *)(lVar6 + 0xd8) + 0x28);
    }
    if ((bStack_61 & 1) != 0) goto LAB_1081ecd5c;
    lVar6 = *param_2;
    FUN_1081ecbd0(lVar6,*param_3,&iStack_68,&bStack_69);
    bVar5 = bStack_69;
    if (lVar6 != 0) {
      if (iStack_68 != -0x7fffffff) {
        if (bStack_69 == 1) {
          uVar7 = *(ulong *)(*(long *)(lVar6 + 0xd8) + 0x28);
          FUN_1081ea104(uVar7,lVar6);
        }
        else {
          uVar7 = 0;
        }
        dVar11 = 0.0;
        lVar13 = lVar6;
LAB_1081ece08:
        do {
          lVar13 = *(long *)(lVar13 + 200);
          if (lVar13 == lVar6) goto LAB_1081eceac;
          pdVar3 = *(double **)(lVar13 + 0xd8);
          pdVar4 = *(double **)(lVar13 + 0xe0);
          if (bVar5 == 0) {
            uVar9 = 0;
          }
          else {
            if (*pdVar4 <= *pdVar3) {
              iVar10 = *(int *)(pdVar4 + 0xe);
            }
            else {
              iVar10 = -*(int *)(pdVar3 + 0xe);
            }
            uVar12 = (uint)uVar7;
            uVar1 = 0x80000001;
            uVar9 = 0x80000001;
            if (uVar12 != 0x80000001) {
              uVar1 = uVar12 - iVar10;
              uVar9 = uVar12;
            }
            uVar7 = (ulong)uVar1;
          }
          pdVar2 = pdVar3;
          if (*pdVar4 <= *pdVar3) {
            pdVar2 = pdVar4;
          }
          if ((*(byte *)((long)pdVar2 + 0x7c) & 1) == 0) {
            dVar8 = pdVar3[5];
            if (dVar11 == 0.0) {
              if (((bVar5 & 1) == 0) && (dVar11 = 0.0, *(int *)(pdVar2 + 0xd) == -0x7fffffff))
              goto LAB_1081ece08;
              *param_2 = (long)pdVar3;
              *param_3 = (long)pdVar4;
              dVar11 = dVar8;
            }
            if (bVar5 != 0) {
              func_0x0001081ea180(dVar8,uVar9,uVar7,lVar13,0);
            }
          }
        } while( true );
      }
      goto LAB_1081ecd5c;
    }
  }
  return 0.0;
LAB_1081eceac:
  if (dVar11 != 0.0) {
    FUN_1081ea88c();
    *param_1 = lVar14;
    return dVar11;
  }
  goto LAB_1081ecd5c;
}



/* Entry: 1081ecf18; end: 1081ed02f;  */

bool FUN_1081ecf18(long *param_1,undefined1 param_2,undefined1 param_3)

{
  undefined1 uVar1;
  uint uVar2;
  code *pcVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined4 auStack_48 [2];
  long *plStack_40;
  undefined8 uStack_38;
  
  auStack_48[0] = 8;
  plStack_40 = (long *)0x0;
  uStack_38 = 0;
  lVar7 = *param_1;
  do {
    if (*(int *)(lVar7 + 0x144) != 0) {
      uVar1 = param_2;
      if (*(char *)(lVar7 + 0x14d) == '\0') {
        uVar1 = param_3;
      }
      *(undefined1 *)(lVar7 + 0x150) = uVar1;
      plVar4 = (long *)auStack_48;
      FUN_1081ed030();
      *plVar4 = lVar7;
    }
    lVar7 = *(long *)(lVar7 + 0x128);
  } while (lVar7 != 0);
  uVar2 = uStack_38._4_4_;
  if (uStack_38._4_4_ != 0) {
    if (1 < (int)uStack_38._4_4_) {
      FUN_1081ed060(plStack_40,plStack_40 + uStack_38._4_4_);
    }
    if ((int)uStack_38._4_4_ < 1) {
LAB_1081ed014:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1081ed018);
      (*pcVar3)();
    }
    plVar4 = (long *)*plStack_40;
    *(long **)(*plVar4 + 0x10) = plVar4;
    *param_1 = (long)plVar4;
    for (uVar5 = 1; (long)uVar5 < (long)(int)uVar2; uVar5 = uVar5 + 1) {
      if (uStack_38._4_4_ == uVar5) goto LAB_1081ed014;
      plVar6 = (long *)plStack_40[uVar5];
      plVar4[0x25] = (long)plVar6;
      plVar4 = plVar6;
    }
    plVar4[0x25] = 0;
  }
  _free(plStack_40);
  return uVar2 != 0;
}



/* Entry: 1081ed030; end: 1081ed05f;  */

long FUN_1081ed030(long param_1)

{
  func_0x00010840f37c();
  return *(long *)(param_1 + 8) + (long)*(int *)(param_1 + 0x14) * 8 + -8;
}



/* Entry: 1081ed060; end: 1081ed07f;  */

void FUN_1081ed060(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_1081ed2d8(param_1,param_2,&uStack_11);
  return;
}



/* Entry: 1081ed080; end: 1081ed25f;  */

void FUN_1081ed080(long *param_1,undefined1 *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  long *plVar10;
  uint uVar11;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined4 uStack_58;
  undefined1 uStack_54;
  
  lVar8 = *param_1;
  puVar5 = param_2;
  FUN_1081e5f64();
  if ((int)puVar5 != 0) {
    plVar10 = param_1;
    FUN_1081ed260();
    iVar2 = (int)plVar10;
    if ((iVar2 != 0) && (func_0x0001081ed684(), iVar2 != 0)) {
      FUN_1081e6abc(param_2);
      puVar5 = param_2;
      FUN_1081e5ddc();
      if ((int)puVar5 != 0) {
        iVar2 = -2;
        while( true ) {
          func_0x0001081ed668();
          iVar3 = (int)puVar5;
          if (iVar3 == 0) {
            return;
          }
          if ((char)lStack_70 != '\x01') break;
          if (iVar2 == 0) {
            return;
          }
          func_0x0001081ed684();
          iVar2 = iVar2 + 1;
        }
        func_0x0001081ed67c();
        iVar2 = 0;
        if (iVar3 != 0) {
          func_0x0001081ed668();
          if (iVar3 == 0) {
            return;
          }
          func_0x0001081ed674();
          if (iVar3 == 0) {
            return;
          }
          plVar10 = param_1;
          FUN_1081ed260();
          iVar2 = (int)plVar10;
          if (iVar2 == 0) {
            return;
          }
          func_0x0001081ed684();
        }
        func_0x0001081ed674();
        if (iVar2 == 0) {
          return;
        }
        FUN_1081e7168(param_2);
        uVar9 = 0;
        plVar10 = param_1;
        do {
          uVar11 = 0;
          plVar7 = plVar10 + 1;
          do {
            plVar6 = plVar7;
            FUN_1081eb28c();
            uVar4 = (uint)plVar6;
            uVar11 = uVar4 | uVar11;
            plVar7 = (long *)plVar7[0x1b];
          } while (plVar7 != (long *)0x0);
          uVar9 = uVar9 | uVar11;
          plVar10 = (long *)plVar10[0x25];
        } while (plVar10 != (long *)0x0);
        func_0x0001081ed67c();
        if ((uVar9 & 1) != 0) {
          func_0x0001081ed674();
          if (uVar4 == 0) {
            return;
          }
          puVar5 = param_2;
          FUN_1081e7168();
          if ((int)puVar5 == 0) {
            return;
          }
        }
        func_0x0001081ed67c();
        lStack_70 = 0;
        lStack_68 = 0;
        uStack_58 = 0;
        uStack_54 = 0;
        bVar1 = true;
        uVar9 = 0xfffffffd;
        *(long **)(lVar8 + 8) = &lStack_70;
        lStack_60 = lVar8;
        do {
          plVar10 = (long *)param_2;
          if (!(bool)(bVar1 & lStack_68 == 0)) {
            plVar10 = &lStack_70;
          }
          puVar5 = (undefined1 *)plVar10;
          FUN_1081e6ae8();
          if ((int)puVar5 == 0) {
            return;
          }
          FUN_1081e6e74(plVar10,&lStack_70);
          if ((int)plVar10 == 0) {
            return;
          }
          bVar1 = 0xfffffffe < uVar9;
          uVar9 = uVar9 + 1;
          if (bVar1) {
            return;
          }
          bVar1 = lStack_70 == 0;
          plVar10 = param_1;
        } while (lStack_70 != 0 || lStack_68 != 0);
        do {
          plVar7 = plVar10 + 1;
          do {
            FUN_1081e9eb8(plVar7);
            plVar7 = (long *)plVar7[0x1b];
          } while (plVar7 != (long *)0x0);
          plVar7 = plVar10 + 0x25;
          plVar10 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
        do {
          plVar10 = param_1 + 1;
          do {
            plVar7 = plVar10;
            FUN_1081ebbf8();
            if ((int)plVar7 == 0) {
              return;
            }
            plVar10 = (long *)plVar10[0x1b];
          } while (plVar10 != (long *)0x0);
          param_1 = (long *)param_1[0x25];
        } while (param_1 != (long *)0x0);
      }
    }
  }
  return;
}



/* Entry: 1081ed260; end: 1081ed2d7;  */

void FUN_1081ed260(long param_1)

{
  long lVar1;
  long lVar2;
  
  do {
    lVar2 = param_1 + 8;
    do {
      lVar1 = lVar2;
      FUN_1081eb6d8();
      if ((int)lVar1 == 0) {
        return;
      }
      lVar2 = *(long *)(lVar2 + 0xd8);
    } while (lVar2 != 0);
    param_1 = *(long *)(param_1 + 0x128);
  } while (param_1 != 0);
  return;
}



/* Entry: 1081ed2d8; end: 1081ed307;  */

void FUN_1081ed2d8(long *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  
  uVar5 = (ulong)(param_2 - (long)param_1) >> 3;
  if ((int)uVar5 < 2) {
    return;
  }
  iVar2 = (int)LZCOUNT((int)uVar5 + -2) * -2 + 0x40;
  while( true ) {
    iVar2 = iVar2 + -1;
    iVar8 = (int)uVar5;
    if (iVar8 < 0x21) break;
    if (iVar2 == -1) {
      uVar5 = uVar5 & 0xffffffff;
      for (uVar9 = uVar5 >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
        func_0x0001081ed53c(param_1,uVar9,uVar5,param_3);
      }
      while (uVar5 = uVar5 - 1, uVar5 != 0) {
        lVar6 = *param_1;
        *param_1 = param_1[uVar5];
        param_1[uVar5] = lVar6;
        func_0x0001081ed5c4(param_1,1,uVar5,param_3);
      }
      return;
    }
    plVar4 = param_1;
    FUN_1081ed4cc(param_1,uVar5,param_1 + (iVar8 - 1U >> 1),param_3);
    uVar5 = (ulong)((long)plVar4 - (long)param_1) >> 3;
    FUN_1081ed308(iVar2,param_1,uVar5,param_3);
    iVar1 = (int)uVar5 + 1;
    param_1 = param_1 + iVar1;
    uVar5 = (ulong)(uint)(iVar8 - iVar1);
  }
  plVar4 = param_1;
  do {
    do {
      plVar7 = plVar4;
      plVar4 = plVar7 + 1;
      if (param_1 + (long)iVar8 + -1 < plVar4) {
        return;
      }
      lVar6 = plVar7[1];
      fVar10 = *(float *)(lVar6 + 0x134);
      fVar11 = *(float *)(*plVar7 + 0x134);
      bVar3 = fVar10 < fVar11;
      if (fVar10 == fVar11) {
        fVar11 = *(float *)(*plVar7 + 0x130);
        bVar3 = false;
        if (!NAN(*(float *)(lVar6 + 0x130)) && !NAN(fVar11)) {
          bVar3 = *(float *)(lVar6 + 0x130) < fVar11;
        }
      }
    } while (!bVar3);
    for (; plVar7[1] = *plVar7, param_1 < plVar7; plVar7 = plVar7 + -1) {
      fVar11 = *(float *)(plVar7[-1] + 0x134);
      bVar3 = fVar10 < fVar11;
      if (fVar10 == fVar11) {
        fVar11 = *(float *)(plVar7[-1] + 0x130);
        bVar3 = false;
        if (!NAN(*(float *)(lVar6 + 0x130)) && !NAN(fVar11)) {
          bVar3 = *(float *)(lVar6 + 0x130) < fVar11;
        }
      }
      if (!bVar3) break;
    }
    *plVar7 = lVar6;
  } while( true );
}



/* Entry: 1081ed308; end: 1081ed3c7;  */

void FUN_1081ed308(int param_1,long *param_2,ulong param_3,undefined8 param_4)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  
  while( true ) {
    param_1 = param_1 + -1;
    iVar6 = (int)param_3;
    if (iVar6 < 0x21) break;
    if (param_1 == -1) {
      param_3 = param_3 & 0xffffffff;
      for (uVar7 = param_3 >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
        func_0x0001081ed53c(param_2,uVar7,param_3,param_4);
      }
      while (param_3 = param_3 - 1, param_3 != 0) {
        lVar4 = *param_2;
        *param_2 = param_2[param_3];
        param_2[param_3] = lVar4;
        func_0x0001081ed5c4(param_2,1,param_3,param_4);
      }
      return;
    }
    plVar3 = param_2;
    FUN_1081ed4cc(param_2,param_3,param_2 + (iVar6 - 1U >> 1),param_4);
    uVar7 = (ulong)((long)plVar3 - (long)param_2) >> 3;
    FUN_1081ed308(param_1,param_2,uVar7,param_4);
    iVar1 = (int)uVar7 + 1;
    param_2 = param_2 + iVar1;
    param_3 = (ulong)(uint)(iVar6 - iVar1);
  }
  plVar3 = param_2;
  do {
    do {
      plVar5 = plVar3;
      plVar3 = plVar5 + 1;
      if (param_2 + (long)iVar6 + -1 < plVar3) {
        return;
      }
      lVar4 = plVar5[1];
      fVar8 = *(float *)(lVar4 + 0x134);
      fVar9 = *(float *)(*plVar5 + 0x134);
      bVar2 = fVar8 < fVar9;
      if (fVar8 == fVar9) {
        fVar9 = *(float *)(*plVar5 + 0x130);
        bVar2 = false;
        if (!NAN(*(float *)(lVar4 + 0x130)) && !NAN(fVar9)) {
          bVar2 = *(float *)(lVar4 + 0x130) < fVar9;
        }
      }
    } while (!bVar2);
    for (; plVar5[1] = *plVar5, param_2 < plVar5; plVar5 = plVar5 + -1) {
      fVar9 = *(float *)(plVar5[-1] + 0x134);
      bVar2 = fVar8 < fVar9;
      if (fVar8 == fVar9) {
        fVar9 = *(float *)(plVar5[-1] + 0x130);
        bVar2 = false;
        if (!NAN(*(float *)(lVar4 + 0x130)) && !NAN(fVar9)) {
          bVar2 = *(float *)(lVar4 + 0x130) < fVar9;
        }
      }
      if (!bVar2) break;
    }
    *plVar5 = lVar4;
  } while( true );
}



/* Entry: 1081ed3c8; end: 1081ed44b;  */

void FUN_1081ed3c8(long *param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  
  plVar2 = param_1;
  do {
    do {
      plVar4 = plVar2;
      plVar2 = plVar4 + 1;
      if (param_1 + (long)param_2 + -1 < plVar2) {
        return;
      }
      lVar1 = plVar4[1];
      fVar5 = *(float *)(lVar1 + 0x134);
      fVar6 = *(float *)(*plVar4 + 0x134);
      bVar3 = fVar5 < fVar6;
      if (fVar5 == fVar6) {
        fVar6 = *(float *)(*plVar4 + 0x130);
        bVar3 = false;
        if (!NAN(*(float *)(lVar1 + 0x130)) && !NAN(fVar6)) {
          bVar3 = *(float *)(lVar1 + 0x130) < fVar6;
        }
      }
    } while (!bVar3);
    for (; plVar4[1] = *plVar4, param_1 < plVar4; plVar4 = plVar4 + -1) {
      fVar6 = *(float *)(plVar4[-1] + 0x134);
      bVar3 = fVar5 < fVar6;
      if (fVar5 == fVar6) {
        fVar6 = *(float *)(plVar4[-1] + 0x130);
        bVar3 = false;
        if (!NAN(*(float *)(lVar1 + 0x130)) && !NAN(fVar6)) {
          bVar3 = *(float *)(lVar1 + 0x130) < fVar6;
        }
      }
      if (!bVar3) break;
    }
    *plVar4 = lVar1;
  } while( true );
}



/* Entry: 1081ed44c; end: 1081ed4cb;  */

void FUN_1081ed44c(undefined8 *param_1,ulong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  for (uVar2 = param_2 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
    func_0x0001081ed53c(param_1,uVar2,param_2,param_3);
  }
  while (param_2 = param_2 - 1, param_2 != 0) {
    uVar1 = *param_1;
    *param_1 = param_1[param_2];
    param_1[param_2] = uVar1;
    func_0x0001081ed5c4(param_1,1,param_2,param_3);
  }
  return;
}



/* Entry: 1081ed4cc; end: 1081ed68b;  */

long * FUN_1081ed4cc(long *param_1,int param_2,long *param_3)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  plVar4 = param_1 + (long)param_2 + -1;
  lVar5 = *param_3;
  *param_3 = *plVar4;
  *plVar4 = lVar5;
  plVar2 = param_1;
  for (; param_1 < plVar4; param_1 = param_1 + 1) {
    lVar6 = *param_1;
    bVar1 = *(float *)(lVar6 + 0x134) < *(float *)(lVar5 + 0x134);
    if (*(float *)(lVar6 + 0x134) == *(float *)(lVar5 + 0x134)) {
      bVar1 = false;
      if (!NAN(*(float *)(lVar6 + 0x130)) && !NAN(*(float *)(lVar5 + 0x130))) {
        bVar1 = *(float *)(lVar6 + 0x130) < *(float *)(lVar5 + 0x130);
      }
    }
    plVar3 = plVar2;
    if (bVar1) {
      *param_1 = *plVar2;
      plVar3 = plVar2 + 1;
      *plVar2 = lVar6;
    }
    plVar2 = plVar3;
  }
  lVar5 = *plVar2;
  *plVar2 = *plVar4;
  *plVar4 = lVar5;
  return plVar2;
}



/* Entry: 1081ed68c; end: 1081ed6ff;  */

void FUN_1081ed68c(undefined8 param_1,double *param_2)

{
  bool bVar1;
  double *pdVar2;
  double *pdVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double adStack_50 [2];
  double dStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  pdVar2 = adStack_50;
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pdVar3 = &dStack_40;
  FUN_1081ed700();
  FUN_1081f0d40(dStack_40,uStack_38,uStack_30);
  bVar1 = (int)pdVar2 == 1;
  if (bVar1) {
    *param_2 = adStack_50[0];
  }
  else {
    pdVar2 = (double *)0x0;
    adStack_50[0] = dStack_40;
  }
  fVar4 = SUB84(adStack_50[0],0);
  func_0x0001081edd60(uStack_28);
  if (bVar1) {
    return;
  }
  ___stack_chk_fail();
  dVar5 = pdVar2[4] - *pdVar2;
  dVar6 = (pdVar2[2] - *pdVar2) * (double)fVar4;
  *pdVar3 = (double)fVar4 * dVar5 - dVar5;
  pdVar3[1] = dVar5 + dVar6 * -2.0;
  pdVar3[2] = dVar6;
  return;
}



/* Entry: 1081ed700; end: 1081ed733;  */

void FUN_1081ed700(float param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = param_2[4] - *param_2;
  dVar2 = (param_2[2] - *param_2) * (double)param_1;
  *param_3 = (double)param_1 * dVar1 - dVar1;
  param_3[1] = dVar1 + dVar2 * -2.0;
  param_3[2] = dVar2;
  return;
}



/* Entry: 1081ed734; end: 1081ed7b7;  */

undefined1  [16] FUN_1081ed734(double param_1,double *param_2)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  dVar2 = param_1;
  func_0x0001081edd54();
  dVar3 = dVar2;
  func_0x0001081edd54(param_2 + 1);
  if ((dVar2 == 0.0) && (dVar3 == 0.0)) {
    bVar1 = true;
    if ((param_1 != 0.0) && (bVar1 = false, !NAN(param_1))) {
      bVar1 = param_1 == 1.0;
    }
    if (bVar1) {
      dVar2 = param_2[4] - *param_2;
      dVar3 = param_2[5] - param_2[1];
    }
    else {
      FUN_10841076c(&UNK_10f47f442);
    }
  }
  auVar4._8_8_ = dVar3;
  auVar4._0_8_ = dVar2;
  return auVar4;
}



/* Entry: 1081ed7b8; end: 1081ed813;  */

undefined1  [16] FUN_1081ed7b8(undefined8 param_1,double param_2,double *param_3)

{
  undefined1 in_ZR;
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dStack_40;
  double dStack_38;
  double dStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_1081ed700(param_3,&dStack_40);
  func_0x0001081edd60(uStack_28,dStack_40,dStack_38,dStack_30);
  if ((bool)in_ZR) {
    auVar4._0_8_ = dStack_30 + (dStack_38 + dStack_40 * param_2) * param_2;
    auVar4._8_8_ = dStack_38;
    return auVar4;
  }
  ___stack_chk_fail();
  if (dStack_40 == 0.0) {
    dVar2 = *param_3;
    dVar1 = param_3[1];
  }
  else {
    dVar1 = 1.0;
    if (dStack_40 == 1.0) {
      dVar2 = param_3[4];
      dVar1 = param_3[5];
    }
    else {
      dVar2 = (double)(*(float *)(param_3 + 6) + -1.0 + *(float *)(param_3 + 6) + -1.0);
      dVar3 = dStack_40 * (dVar2 - dStack_40 * dVar2) + 1.0;
      func_0x0001081edd24(param_3);
      dVar2 = dVar1 / dVar3;
      func_0x0001081edd24(param_3 + 1);
      dVar1 = dVar1 / dVar3;
    }
  }
  auVar5._8_8_ = dVar1;
  auVar5._0_8_ = dVar2;
  return auVar5;
}



/* Entry: 1081ed814; end: 1081ed893;  */

undefined1  [16] FUN_1081ed814(double param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  if (param_1 == 0.0) {
    dVar2 = *param_2;
    dVar1 = param_2[1];
  }
  else {
    dVar1 = 1.0;
    if (param_1 == 1.0) {
      dVar2 = param_2[4];
      dVar1 = param_2[5];
    }
    else {
      dVar2 = (double)(*(float *)(param_2 + 6) + -1.0 + *(float *)(param_2 + 6) + -1.0);
      dVar3 = param_1 * (dVar2 - param_1 * dVar2) + 1.0;
      func_0x0001081edd24(param_2);
      dVar2 = dVar1 / dVar3;
      func_0x0001081edd24(param_2 + 1);
      dVar1 = dVar1 / dVar3;
    }
  }
  auVar4._8_8_ = dVar1;
  auVar4._0_8_ = dVar2;
  return auVar4;
}



/* Entry: 1081ed894; end: 1081ed8c7;  */

double FUN_1081ed894(float param_1,double param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  
  dVar2 = *param_3;
  dVar1 = param_3[2] * (double)param_1 - dVar2;
  return dVar2 + param_2 * (dVar1 + dVar1 +
                           param_2 * (dVar2 + param_3[4] + param_3[2] * (double)param_1 * -2.0));
}



/* Entry: 1081ed8c8; end: 1081eda7f;  */

void FUN_1081ed8c8(double *param_1,double param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dStack_70;
  double dStack_68;
  
  if (param_2 == 0.0) {
    dStack_68 = *param_4;
    dStack_70 = param_4[1];
    dVar4 = 1.0;
  }
  else {
    dVar4 = 1.0;
    if (param_2 == 1.0) {
      dStack_68 = param_4[4];
      dStack_70 = param_4[5];
    }
    else {
      fVar8 = *(float *)(param_4 + 6);
      dStack_68 = param_2;
      func_0x0001081edd48(param_4);
      dStack_70 = dStack_68;
      func_0x0001081edd48(param_4 + 1);
      dVar4 = (double)(fVar8 + -1.0 + fVar8 + -1.0);
      dVar4 = param_2 * (dVar4 - param_2 * dVar4) + 1.0;
    }
  }
  param_2 = param_2 + param_3;
  dVar6 = param_2 * 0.5;
  fVar8 = *(float *)(param_4 + 6);
  func_0x0001081edd3c(param_4);
  dVar1 = param_2;
  func_0x0001081edd3c(param_4 + 1);
  fVar8 = fVar8 + -1.0 + fVar8 + -1.0;
  dVar7 = (double)(ulong)(uint)fVar8;
  dVar5 = (double)fVar8;
  dVar3 = 1.0;
  if (param_3 == 1.0) {
    dVar7 = param_4[4];
    dVar2 = param_4[5];
  }
  else if (param_3 == 0.0) {
    dVar7 = *param_4;
    dVar2 = param_4[1];
  }
  else {
    func_0x0001081edd30(param_4);
    dVar2 = dVar7;
    func_0x0001081edd30(param_4 + 1);
    dVar3 = param_3 * (dVar5 + param_3 * -dVar5) + 1.0;
  }
  dVar5 = (dVar4 + dVar3) * -0.5 + (dVar6 * (dVar5 + dVar6 * -dVar5) + 1.0) * 2.0;
  if (dVar5 == 0.0) {
    dVar5 = 1.0;
  }
  *param_1 = dStack_68 / dVar4;
  param_1[1] = dStack_70 / dVar4;
  param_1[2] = ((dStack_68 + dVar7) * -0.5 + param_2 * 2.0) / dVar5;
  param_1[3] = ((dStack_70 + dVar2) * -0.5 + dVar1 * 2.0) / dVar5;
  param_1[4] = dVar7 / dVar3;
  param_1[5] = dVar2 / dVar3;
  *(float *)(param_1 + 6) = (float)(dVar5 / SQRT(dVar4 * dVar3));
  return;
}



/* Entry: 1081eda80; end: 1081edab7;  */

undefined1  [16] FUN_1081eda80(void)

{
  undefined4 *in_x3;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined4 uStack_28;
  
  FUN_1081ed8c8(auStack_58);
  *in_x3 = uStack_28;
  return auStack_48;
}



/* Entry: 1081edab8; end: 1081edb6b;  */

ulong FUN_1081edab8(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                   undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  uVar3 = (uint)&lStack_60;
  uStack_48 = 1;
  *(undefined1 *)(param_4 + 0x1c7) = 4;
  lStack_60 = param_3 + 8;
  uStack_58 = param_5;
  lStack_50 = param_4;
  FUN_1081de044(&lStack_60,(undefined8 *)(param_4 + 0xf0));
  *(char *)(param_4 + 0x1c6) = (char)uVar3;
  puVar1 = (undefined8 *)(param_4 + 8);
  puVar2 = (undefined8 *)(param_4 + 0xf0);
  for (uVar4 = (ulong)(uVar3 & 0xff); uVar4 != 0; uVar4 = uVar4 - 1) {
    uVar5 = *puVar2;
    FUN_1081ed814(param_3 + 8);
    puVar1[-1] = uVar5;
    *puVar1 = param_2;
    puVar1 = puVar1 + 2;
    puVar2 = puVar2 + 1;
  }
  return (ulong)(uVar3 & 0xff);
}



/* Entry: 1081edb6c; end: 1081edbdb;  */

void FUN_1081edb6c(undefined8 param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = param_2;
  FUN_10840f8d0(param_2,0x49,8);
  lVar1 = param_2[1];
  param_2[1] = (long)(plVar2 + 8);
  plVar2[8] = (long)FUN_1081edcd8;
  lVar3 = param_2[1];
  param_2[1] = lVar3 + 8;
  *(char *)(lVar3 + 8) = (char)plVar2 - (char)(int)lVar1;
  *param_2 = param_2[1] + 1;
  param_2[1] = param_2[1] + 1;
  *plVar2 = (long)&PTR_DAT_110a2f658;
  return;
}



/* Entry: 1081edbdc; end: 1081edc03;  */

undefined8 FUN_1081edbdc(void)

{
  return 4;
}



/* Entry: 1081edc04; end: 1081edc8f;  */

void FUN_1081edc04(long param_1,long param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1081ed8c8(&uStack_58,param_1 + 8);
  *(undefined8 *)(param_2 + 0x10) = uStack_50;
  *(undefined8 *)(param_2 + 8) = uStack_58;
  *(undefined8 *)(param_2 + 0x20) = uStack_40;
  *(undefined8 *)(param_2 + 0x18) = uStack_48;
  *(undefined8 *)(param_2 + 0x30) = uStack_30;
  *(undefined8 *)(param_2 + 0x28) = uStack_38;
  *(undefined8 *)(param_2 + 0x38) = uStack_28;
  return;
}



/* Entry: 1081edc90; end: 1081edcd7;  */

bool FUN_1081edc90(double *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = *param_1 - param_1[4];
  dVar2 = param_1[1] - param_1[5];
  return 0.0 < dVar2 * (param_1[3] - param_1[5]) + (param_1[2] - param_1[4]) * dVar1 &&
         0.0 < (param_1[1] - param_1[3]) * dVar2 + (*param_1 - param_1[2]) * dVar1;
}



/* Entry: 1081edcd8; end: 1081edd07;  */

undefined8 * FUN_1081edcd8(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + -0x49);
  (**(code **)*puVar1)(puVar1);
  return puVar1;
}



/* Entry: 1081edd08; end: 1081edd73;  */

void FUN_1081edd08(void)

{
  return;
}


