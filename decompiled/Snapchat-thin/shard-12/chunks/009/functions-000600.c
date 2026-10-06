/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109c1a448; end: 109c1a513;  */

/* WARNING: Possible PIC construction at 0x000109c1a4a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109c1a4a8) */

long FUN_109c1a448(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_109c1c060(param_1 + 0x80,0);
  if (*(long *)(param_1 + 0x68) != 0) {
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x68);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x50);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x38);
    __ZdlPv();
  }
  func_0x000109c1d1a4(param_1 + 0x30,0);
  plVar5 = *(long **)(param_1 + 0x28);
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
  return param_1 + 0x20;
}



/* Entry: 109c1a514; end: 109c1a57b;  */

void FUN_109c1a514(long *param_1,long param_2,long param_3)

{
  (**(code **)**(undefined8 **)(param_2 + 0x10))
            (param_1,*(undefined8 **)(param_2 + 0x10),param_3 + 8,*(undefined1 *)(param_3 + 0x48));
  FUN_109c11af8(*param_1,param_3);
  *(undefined4 *)(*param_1 + 0x3c) = *(undefined4 *)(param_3 + 0x3c);
  return;
}



/* Entry: 109c1a57c; end: 109c1acf7;  */

void FUN_109c1a57c(long *param_1,undefined8 param_2,uint *param_3,undefined8 param_4,ulong param_5,
                  undefined8 param_6)

{
  uint uVar1;
  byte bVar2;
  code *pcVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uStack_48;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = (long)FUN_109c180a4;
  param_1[2] = (long)&PTR_DAT_110950c70;
  iVar7 = (int)param_6;
  if (iVar7 < 5) {
    if (iVar7 == 2) {
      uVar1 = *param_3 & ((int)*param_3 >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar1) {
        uVar1 = 5;
      }
      puVar6 = &UNK_10f5a382f;
      FUN_109c60fbc(&UNK_10f5a382f,0x1a,param_3 + 1,uVar1);
      FUN_109c61528(&UNK_10f5a38ac,0x26,param_5,puVar6,1);
      plVar5 = (long *)0x58;
      __Znwm();
      FUN_109c1106c();
      uVar11 = (ulong)(int)puVar6;
      uStack_48 = plVar5;
      FUN_109c19528(param_1,&uStack_48);
      plVar5 = uStack_48;
      uStack_48 = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      if (param_5 < uVar11) {
        lVar9 = *param_1;
        uVar10 = *(undefined8 *)(lVar9 + 0x40);
        bVar2 = *(byte *)(lVar9 + 0x48);
        uVar1 = *(uint *)(lVar9 + 8) & ((int)*(uint *)(lVar9 + 8) >> 0x1f ^ 0xffffffffU);
        if (4 < (int)uVar1) {
          uVar1 = 5;
        }
        uVar4 = 0xf5a382f;
        FUN_109c60fbc(&UNK_10f5a382f,0x1a,lVar9 + 0xc,uVar1);
        if (bVar2 < 9) {
          uVar8 = *(undefined4 *)(&UNK_10e039b94 + (ulong)bVar2 * 4);
        }
        else {
          uVar8 = 4;
        }
        uStack_48 = (long *)CONCAT44(uVar8,uVar4);
        iVar7 = 0xf5a384a;
        FUN_109c60fbc(&UNK_10f5a384a,0xc,&uStack_48,2);
LAB_109c1ac40:
        _bzero(uVar10,(long)iVar7);
        uVar11 = param_5;
      }
LAB_109c1ac4c:
      if (uVar11 == 0) {
        return;
      }
      goto LAB_109c1ac88;
    }
    if (iVar7 != 3) {
      if (iVar7 != 4) {
LAB_109c1acb4:
        FUN_109c1d1e0(param_6);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x109c1acc0);
        (*pcVar3)();
      }
      uVar1 = *param_3 & ((int)*param_3 >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar1) {
        uVar1 = 5;
      }
      puVar6 = &UNK_10f5a382f;
      FUN_109c60fbc(&UNK_10f5a382f,0x1a,param_3 + 1,uVar1);
      FUN_109c61528(&UNK_10f5a38ac,0x26,param_5,puVar6,4);
      plVar5 = (long *)0x58;
      __Znwm();
      FUN_109c1106c();
      uVar11 = (ulong)(int)puVar6;
      uStack_48 = plVar5;
      FUN_109c19528(param_1,&uStack_48);
      plVar5 = uStack_48;
      uStack_48 = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      if (param_5 >> 2 < uVar11) {
        lVar9 = *param_1;
        uVar10 = *(undefined8 *)(lVar9 + 0x40);
        bVar2 = *(byte *)(lVar9 + 0x48);
        uVar1 = *(uint *)(lVar9 + 8) & ((int)*(uint *)(lVar9 + 8) >> 0x1f ^ 0xffffffffU);
        if (4 < (int)uVar1) {
          uVar1 = 5;
        }
        uVar4 = 0xf5a382f;
        FUN_109c60fbc(&UNK_10f5a382f,0x1a,lVar9 + 0xc,uVar1);
        if (bVar2 < 9) {
          uVar8 = *(undefined4 *)(&UNK_10e039b94 + (ulong)bVar2 * 4);
        }
        else {
          uVar8 = 4;
        }
        uStack_48 = (long *)CONCAT44(uVar8,uVar4);
        iVar7 = 0xf5a384a;
        FUN_109c60fbc(&UNK_10f5a384a,0xc,&uStack_48,2);
        _bzero(uVar10,(long)iVar7);
        uVar11 = param_5 >> 2;
      }
      if (uVar11 == 0) {
        return;
      }
      uVar11 = uVar11 << 2;
      goto LAB_109c1ac88;
    }
    uVar1 = *param_3 & ((int)*param_3 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar1) {
      uVar1 = 5;
    }
    puVar6 = &UNK_10f5a382f;
    FUN_109c60fbc(&UNK_10f5a382f,0x1a,param_3 + 1,uVar1);
    FUN_109c61528(&UNK_10f5a38ac,0x26,param_5,puVar6,2);
    plVar5 = (long *)0x58;
    __Znwm();
    FUN_109c1106c();
    uVar11 = (ulong)(int)puVar6;
    uStack_48 = plVar5;
    FUN_109c19528(param_1,&uStack_48);
    plVar5 = uStack_48;
    uStack_48 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    if (param_5 >> 1 < uVar11) {
      lVar9 = *param_1;
      uVar10 = *(undefined8 *)(lVar9 + 0x40);
      bVar2 = *(byte *)(lVar9 + 0x48);
      uVar1 = *(uint *)(lVar9 + 8) & ((int)*(uint *)(lVar9 + 8) >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar1) {
        uVar1 = 5;
      }
      uVar4 = 0xf5a382f;
      FUN_109c60fbc(&UNK_10f5a382f,0x1a,lVar9 + 0xc,uVar1);
      if (bVar2 < 9) {
        uVar8 = *(undefined4 *)(&UNK_10e039b94 + (ulong)bVar2 * 4);
      }
      else {
        uVar8 = 4;
      }
      uStack_48 = (long *)CONCAT44(uVar8,uVar4);
      iVar7 = 0xf5a384a;
      FUN_109c60fbc(&UNK_10f5a384a,0xc,&uStack_48,2);
LAB_109c1ac08:
      uVar11 = param_5 >> 1;
      _bzero(uVar10,(long)iVar7);
    }
  }
  else {
    if (iVar7 == 5) {
      uVar1 = *param_3 & ((int)*param_3 >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar1) {
        uVar1 = 5;
      }
      puVar6 = &UNK_10f5a382f;
      FUN_109c60fbc(&UNK_10f5a382f,0x1a,param_3 + 1,uVar1);
      FUN_109c61528(&UNK_10f5a38ac,0x26,param_5,puVar6,8);
      plVar5 = (long *)0x58;
      __Znwm();
      FUN_109c1106c();
      uVar11 = (ulong)(int)puVar6;
      uStack_48 = plVar5;
      FUN_109c19528(param_1,&uStack_48);
      plVar5 = uStack_48;
      uStack_48 = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      if (param_5 >> 3 < uVar11) {
        lVar9 = *param_1;
        uVar10 = *(undefined8 *)(lVar9 + 0x40);
        bVar2 = *(byte *)(lVar9 + 0x48);
        uVar1 = *(uint *)(lVar9 + 8) & ((int)*(uint *)(lVar9 + 8) >> 0x1f ^ 0xffffffffU);
        if (4 < (int)uVar1) {
          uVar1 = 5;
        }
        uVar4 = 0xf5a382f;
        FUN_109c60fbc(&UNK_10f5a382f,0x1a,lVar9 + 0xc,uVar1);
        if (bVar2 < 9) {
          uVar8 = *(undefined4 *)(&UNK_10e039b94 + (ulong)bVar2 * 4);
        }
        else {
          uVar8 = 4;
        }
        uStack_48 = (long *)CONCAT44(uVar8,uVar4);
        iVar7 = 0xf5a384a;
        FUN_109c60fbc(&UNK_10f5a384a,0xc,&uStack_48,2);
        _bzero(uVar10,(long)iVar7);
        uVar11 = param_5 >> 3;
      }
      if (uVar11 == 0) {
        return;
      }
      uVar11 = uVar11 << 3;
      goto LAB_109c1ac88;
    }
    if (iVar7 == 6) {
      uVar1 = *param_3 & ((int)*param_3 >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar1) {
        uVar1 = 5;
      }
      puVar6 = &UNK_10f5a382f;
      FUN_109c60fbc(&UNK_10f5a382f,0x1a,param_3 + 1,uVar1);
      FUN_109c61528(&UNK_10f5a38ac,0x26,param_5,puVar6,1);
      plVar5 = (long *)0x58;
      __Znwm();
      FUN_109c1106c();
      uVar11 = (ulong)(int)puVar6;
      uStack_48 = plVar5;
      FUN_109c19528(param_1,&uStack_48);
      plVar5 = uStack_48;
      uStack_48 = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      if (param_5 < uVar11) {
        lVar9 = *param_1;
        uVar10 = *(undefined8 *)(lVar9 + 0x40);
        bVar2 = *(byte *)(lVar9 + 0x48);
        uVar1 = *(uint *)(lVar9 + 8) & ((int)*(uint *)(lVar9 + 8) >> 0x1f ^ 0xffffffffU);
        if (4 < (int)uVar1) {
          uVar1 = 5;
        }
        uVar4 = 0xf5a382f;
        FUN_109c60fbc(&UNK_10f5a382f,0x1a,lVar9 + 0xc,uVar1);
        if (bVar2 < 9) {
          uVar8 = *(undefined4 *)(&UNK_10e039b94 + (ulong)bVar2 * 4);
        }
        else {
          uVar8 = 4;
        }
        uStack_48 = (long *)CONCAT44(uVar8,uVar4);
        iVar7 = 0xf5a384a;
        FUN_109c60fbc(&UNK_10f5a384a,0xc,&uStack_48,2);
        goto LAB_109c1ac40;
      }
      goto LAB_109c1ac4c;
    }
    if (iVar7 != 7) goto LAB_109c1acb4;
    uVar1 = *param_3 & ((int)*param_3 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar1) {
      uVar1 = 5;
    }
    puVar6 = &UNK_10f5a382f;
    FUN_109c60fbc(&UNK_10f5a382f,0x1a,param_3 + 1,uVar1);
    FUN_109c61528(&UNK_10f5a38ac,0x26,param_5,puVar6,2);
    plVar5 = (long *)0x58;
    __Znwm();
    FUN_109c1106c();
    uVar11 = (ulong)(int)puVar6;
    uStack_48 = plVar5;
    FUN_109c19528(param_1,&uStack_48);
    plVar5 = uStack_48;
    uStack_48 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    if (param_5 >> 1 < uVar11) {
      lVar9 = *param_1;
      uVar10 = *(undefined8 *)(lVar9 + 0x40);
      bVar2 = *(byte *)(lVar9 + 0x48);
      uVar1 = *(uint *)(lVar9 + 8) & ((int)*(uint *)(lVar9 + 8) >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar1) {
        uVar1 = 5;
      }
      uVar4 = 0xf5a382f;
      FUN_109c60fbc(&UNK_10f5a382f,0x1a,lVar9 + 0xc,uVar1);
      if (bVar2 < 9) {
        uVar8 = *(undefined4 *)(&UNK_10e039b94 + (ulong)bVar2 * 4);
      }
      else {
        uVar8 = 4;
      }
      uStack_48 = (long *)CONCAT44(uVar8,uVar4);
      iVar7 = 0xf5a384a;
      FUN_109c60fbc(&UNK_10f5a384a,0xc,&uStack_48,2);
      goto LAB_109c1ac08;
    }
  }
  if (uVar11 == 0) {
    return;
  }
  uVar11 = uVar11 << 1;
LAB_109c1ac88:
  _memmove(*(undefined8 *)(*param_1 + 0x40),param_4,uVar11);
  return;
}



/* Entry: 109c1acf8; end: 109c1ad7f;  */

void FUN_109c1acf8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x58;
  __Znwm();
  FUN_109c111e0();
  *param_1 = uVar1;
  param_1[1] = FUN_109c180b4;
  param_1[2] = &PTR_DAT_110b2c028;
  return;
}



/* Entry: 109c1ad80; end: 109c1b237;  */

void FUN_109c1ad80(long *param_1,undefined8 param_2,long *param_3,long *param_4,uint param_5)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  char *pcVar10;
  char *pcVar11;
  ushort *puVar12;
  short *psVar13;
  byte *pbVar14;
  byte *pbVar15;
  ushort *puVar16;
  int *piVar17;
  long *plVar18;
  short *psVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined *puVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  float fVar28;
  
  lVar5 = 0x58;
  __Znwm();
  FUN_109c1106c();
  *param_1 = lVar5;
  param_1[1] = (long)FUN_109c180b4;
  param_1[2] = (long)&PTR_DAT_110b2c028;
  if (*param_4 == 0) {
    FUN_109c1b238(param_3,lVar5);
  }
  else {
    uVar1 = *(uint *)(*param_3 + 8);
    uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar1) {
      uVar1 = 5;
    }
    uVar20 = 0xf5a382f;
    FUN_109c60fbc(&UNK_10f5a382f,0x1a,*param_3 + 0xc,uVar1);
    iVar3 = *(int *)(*param_3 + 0x50);
    lVar7 = *param_4;
    pfVar27 = *(float **)(lVar7 + 0x40);
    pfVar25 = *(float **)(lVar5 + 0x40);
    uVar1 = *(uint *)(lVar7 + 8) & ((int)*(uint *)(lVar7 + 8) >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar1) {
      uVar1 = 5;
    }
    puVar6 = &UNK_10f5a382f;
    FUN_109c60fbc(&UNK_10f5a382f,0x1a,lVar7 + 0xc,uVar1);
    lVar5 = *param_3;
    bVar2 = *(byte *)(lVar5 + 0x48);
    uVar1 = 0;
    uVar4 = (uint)puVar6;
    if (uVar4 != 0) {
      uVar1 = uVar20 / uVar4;
    }
    if (bVar2 < 5) {
      if (bVar2 == 2) {
        pcVar10 = *(char **)(lVar5 + 0x40);
        if ((param_5 & 1) == 0) {
          uVar21 = 0;
          do {
            if (uVar4 <= uVar20) {
              fVar28 = *pfVar27;
              pcVar11 = pcVar10;
              pfVar24 = pfVar25;
              uVar22 = uVar1;
              do {
                pcVar10 = pcVar11 + 1;
                pfVar25 = pfVar24 + 1;
                *pfVar24 = fVar28 * (float)(*pcVar11 - iVar3);
                uVar22 = uVar22 - 1;
                pcVar11 = pcVar10;
                pfVar24 = pfVar25;
              } while (uVar22 != 0);
            }
            pfVar27 = pfVar27 + 1;
            uVar21 = uVar21 + 1;
          } while (uVar21 != uVar4);
        }
        else if (uVar4 <= uVar20) {
          uVar20 = 0;
          puVar23 = puVar6;
          pfVar24 = pfVar27;
          do {
            do {
              pcVar11 = pcVar10 + 1;
              pfVar26 = pfVar25 + 1;
              *pfVar25 = *pfVar24 * (float)(*pcVar10 - iVar3);
              uVar4 = (int)puVar23 - 1;
              pcVar10 = pcVar11;
              puVar23 = (undefined *)(ulong)uVar4;
              pfVar24 = pfVar24 + 1;
              pfVar25 = pfVar26;
            } while (uVar4 != 0);
            uVar20 = uVar20 + 1;
            puVar23 = puVar6;
            pfVar24 = pfVar27;
          } while (uVar20 != uVar1);
        }
      }
      else if (bVar2 == 3) {
        psVar13 = *(short **)(lVar5 + 0x40);
        if ((param_5 & 1) == 0) {
          uVar21 = 0;
          do {
            if (uVar4 <= uVar20) {
              fVar28 = *pfVar27;
              psVar19 = psVar13;
              pfVar24 = pfVar25;
              uVar22 = uVar1;
              do {
                psVar13 = psVar19 + 1;
                pfVar25 = pfVar24 + 1;
                *pfVar24 = fVar28 * (float)(*psVar19 - iVar3);
                uVar22 = uVar22 - 1;
                psVar19 = psVar13;
                pfVar24 = pfVar25;
              } while (uVar22 != 0);
            }
            pfVar27 = pfVar27 + 1;
            uVar21 = uVar21 + 1;
          } while (uVar21 != uVar4);
        }
        else if (uVar4 <= uVar20) {
          uVar20 = 0;
          puVar23 = puVar6;
          pfVar24 = pfVar27;
          do {
            do {
              psVar19 = psVar13 + 1;
              pfVar26 = pfVar25 + 1;
              *pfVar25 = *pfVar24 * (float)(*psVar13 - iVar3);
              uVar4 = (int)puVar23 - 1;
              psVar13 = psVar19;
              puVar23 = (undefined *)(ulong)uVar4;
              pfVar24 = pfVar24 + 1;
              pfVar25 = pfVar26;
            } while (uVar4 != 0);
            uVar20 = uVar20 + 1;
            puVar23 = puVar6;
            pfVar24 = pfVar27;
          } while (uVar20 != uVar1);
        }
      }
      else if (bVar2 == 4) {
        piVar8 = *(int **)(lVar5 + 0x40);
        if ((param_5 & 1) == 0) {
          uVar21 = 0;
          do {
            if (uVar4 <= uVar20) {
              fVar28 = *pfVar27;
              piVar17 = piVar8;
              pfVar24 = pfVar25;
              uVar22 = uVar1;
              do {
                piVar8 = piVar17 + 1;
                pfVar25 = pfVar24 + 1;
                *pfVar24 = fVar28 * (float)(*piVar17 - iVar3);
                uVar22 = uVar22 - 1;
                piVar17 = piVar8;
                pfVar24 = pfVar25;
              } while (uVar22 != 0);
            }
            pfVar27 = pfVar27 + 1;
            uVar21 = uVar21 + 1;
          } while (uVar21 != uVar4);
        }
        else if (uVar4 <= uVar20) {
          uVar20 = 0;
          puVar23 = puVar6;
          pfVar24 = pfVar27;
          do {
            do {
              piVar17 = piVar8 + 1;
              pfVar26 = pfVar25 + 1;
              *pfVar25 = *pfVar24 * (float)(*piVar8 - iVar3);
              uVar4 = (int)puVar23 - 1;
              piVar8 = piVar17;
              puVar23 = (undefined *)(ulong)uVar4;
              pfVar24 = pfVar24 + 1;
              pfVar25 = pfVar26;
            } while (uVar4 != 0);
            uVar20 = uVar20 + 1;
            puVar23 = puVar6;
            pfVar24 = pfVar27;
          } while (uVar20 != uVar1);
        }
      }
    }
    else if (bVar2 == 7) {
      puVar12 = *(ushort **)(lVar5 + 0x40);
      if ((param_5 & 1) == 0) {
        uVar21 = 0;
        do {
          if (uVar4 <= uVar20) {
            fVar28 = *pfVar27;
            puVar16 = puVar12;
            pfVar24 = pfVar25;
            uVar22 = uVar1;
            do {
              puVar12 = puVar16 + 1;
              pfVar25 = pfVar24 + 1;
              *pfVar24 = fVar28 * (float)(int)((uint)*puVar16 - iVar3);
              uVar22 = uVar22 - 1;
              puVar16 = puVar12;
              pfVar24 = pfVar25;
            } while (uVar22 != 0);
          }
          pfVar27 = pfVar27 + 1;
          uVar21 = uVar21 + 1;
        } while (uVar21 != uVar4);
      }
      else if (uVar4 <= uVar20) {
        uVar20 = 0;
        puVar23 = puVar6;
        pfVar24 = pfVar27;
        do {
          do {
            puVar16 = puVar12 + 1;
            pfVar26 = pfVar25 + 1;
            *pfVar25 = *pfVar24 * (float)(int)((uint)*puVar12 - iVar3);
            uVar4 = (int)puVar23 - 1;
            puVar12 = puVar16;
            puVar23 = (undefined *)(ulong)uVar4;
            pfVar24 = pfVar24 + 1;
            pfVar25 = pfVar26;
          } while (uVar4 != 0);
          uVar20 = uVar20 + 1;
          puVar23 = puVar6;
          pfVar24 = pfVar27;
        } while (uVar20 != uVar1);
      }
    }
    else if (bVar2 == 6) {
      pbVar14 = *(byte **)(lVar5 + 0x40);
      if ((param_5 & 1) == 0) {
        uVar21 = 0;
        do {
          if (uVar4 <= uVar20) {
            fVar28 = *pfVar27;
            pbVar15 = pbVar14;
            pfVar24 = pfVar25;
            uVar22 = uVar1;
            do {
              pbVar14 = pbVar15 + 1;
              pfVar25 = pfVar24 + 1;
              *pfVar24 = fVar28 * (float)(int)((uint)*pbVar15 - iVar3);
              uVar22 = uVar22 - 1;
              pbVar15 = pbVar14;
              pfVar24 = pfVar25;
            } while (uVar22 != 0);
          }
          pfVar27 = pfVar27 + 1;
          uVar21 = uVar21 + 1;
        } while (uVar21 != uVar4);
      }
      else if (uVar4 <= uVar20) {
        uVar20 = 0;
        puVar23 = puVar6;
        pfVar24 = pfVar27;
        do {
          do {
            pbVar15 = pbVar14 + 1;
            pfVar26 = pfVar25 + 1;
            *pfVar25 = *pfVar24 * (float)(int)((uint)*pbVar14 - iVar3);
            uVar4 = (int)puVar23 - 1;
            pbVar14 = pbVar15;
            puVar23 = (undefined *)(ulong)uVar4;
            pfVar24 = pfVar24 + 1;
            pfVar25 = pfVar26;
          } while (uVar4 != 0);
          uVar20 = uVar20 + 1;
          puVar23 = puVar6;
          pfVar24 = pfVar27;
        } while (uVar20 != uVar1);
      }
    }
    else if (bVar2 == 5) {
      plVar9 = *(long **)(lVar5 + 0x40);
      if (param_5 == 0) {
        uVar21 = 0;
        do {
          if (uVar4 <= uVar20) {
            fVar28 = *pfVar27;
            plVar18 = plVar9;
            pfVar24 = pfVar25;
            uVar22 = uVar1;
            do {
              plVar9 = plVar18 + 1;
              pfVar25 = pfVar24 + 1;
              *pfVar24 = fVar28 * (float)(*plVar18 - (long)iVar3);
              uVar22 = uVar22 - 1;
              plVar18 = plVar9;
              pfVar24 = pfVar25;
            } while (uVar22 != 0);
          }
          pfVar27 = pfVar27 + 1;
          uVar21 = uVar21 + 1;
        } while (uVar21 != uVar4);
      }
      else if (uVar4 <= uVar20) {
        uVar20 = 0;
        puVar23 = puVar6;
        pfVar24 = pfVar27;
        do {
          do {
            plVar18 = plVar9 + 1;
            pfVar26 = pfVar25 + 1;
            *pfVar25 = *pfVar24 * (float)(*plVar9 - (long)iVar3);
            uVar4 = (int)puVar23 - 1;
            plVar9 = plVar18;
            puVar23 = (undefined *)(ulong)uVar4;
            pfVar24 = pfVar24 + 1;
            pfVar25 = pfVar26;
          } while (uVar4 != 0);
          uVar20 = uVar20 + 1;
          puVar23 = puVar6;
          pfVar24 = pfVar27;
        } while (uVar20 != uVar1);
      }
    }
  }
  return;
}



/* Entry: 109c1b238; end: 109c1b3e3;  */

void FUN_109c1b238(long *param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  char *pcVar9;
  ushort *puVar10;
  short *psVar11;
  byte *pbVar12;
  long lVar13;
  float fVar14;
  
  uVar1 = *(uint *)(*param_1 + 8);
  uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar1) {
    uVar1 = 5;
  }
  iVar4 = 0xf5a382f;
  FUN_109c60fbc(&UNK_10f5a382f,0x1a,*param_1 + 0xc,uVar1);
  lVar6 = *param_1;
  iVar3 = *(int *)(lVar6 + 0x50);
  fVar14 = *(float *)(lVar6 + 0x4c);
  pfVar5 = *(float **)(param_2 + 0x40);
  bVar2 = *(byte *)(lVar6 + 0x48);
  if (bVar2 < 5) {
    if (bVar2 == 2) {
      if (iVar4 != 0) {
        lVar13 = (long)iVar4;
        pcVar9 = *(char **)(lVar6 + 0x40);
        do {
          *pfVar5 = fVar14 * (float)(*pcVar9 - iVar3);
          lVar13 = lVar13 + -1;
          pfVar5 = pfVar5 + 1;
          pcVar9 = pcVar9 + 1;
        } while (lVar13 != 0);
      }
    }
    else if (bVar2 == 3) {
      if (iVar4 != 0) {
        lVar13 = (long)iVar4 << 1;
        psVar11 = *(short **)(lVar6 + 0x40);
        do {
          *pfVar5 = fVar14 * (float)(*psVar11 - iVar3);
          lVar13 = lVar13 + -2;
          pfVar5 = pfVar5 + 1;
          psVar11 = psVar11 + 1;
        } while (lVar13 != 0);
      }
    }
    else if ((bVar2 == 4) && (iVar4 != 0)) {
      lVar13 = (long)iVar4 << 2;
      piVar7 = *(int **)(lVar6 + 0x40);
      do {
        *pfVar5 = fVar14 * (float)(*piVar7 - iVar3);
        lVar13 = lVar13 + -4;
        pfVar5 = pfVar5 + 1;
        piVar7 = piVar7 + 1;
      } while (lVar13 != 0);
    }
  }
  else if (bVar2 == 7) {
    if (iVar4 != 0) {
      lVar13 = (long)iVar4 << 1;
      puVar10 = *(ushort **)(lVar6 + 0x40);
      do {
        *pfVar5 = fVar14 * (float)(int)((uint)*puVar10 - iVar3);
        lVar13 = lVar13 + -2;
        pfVar5 = pfVar5 + 1;
        puVar10 = puVar10 + 1;
      } while (lVar13 != 0);
    }
  }
  else if (bVar2 == 6) {
    if (iVar4 != 0) {
      lVar13 = (long)iVar4;
      pbVar12 = *(byte **)(lVar6 + 0x40);
      do {
        *pfVar5 = fVar14 * (float)(int)((uint)*pbVar12 - iVar3);
        lVar13 = lVar13 + -1;
        pfVar5 = pfVar5 + 1;
        pbVar12 = pbVar12 + 1;
      } while (lVar13 != 0);
    }
  }
  else if ((bVar2 == 5) && (iVar4 != 0)) {
    lVar13 = (long)iVar4 << 3;
    plVar8 = *(long **)(lVar6 + 0x40);
    do {
      *pfVar5 = fVar14 * (float)(*plVar8 - (long)iVar3);
      lVar13 = lVar13 + -8;
      pfVar5 = pfVar5 + 1;
      plVar8 = plVar8 + 1;
    } while (lVar13 != 0);
  }
  return;
}



/* Entry: 109c1b3e4; end: 109c1be6f;  */

void FUN_109c1b3e4(long *param_1,float param_2,undefined8 *param_3,long *param_4,int param_5,
                  undefined8 param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  uint uVar113;
  float *pfVar114;
  undefined2 *puVar115;
  undefined1 *puVar116;
  long *plVar117;
  uint uVar118;
  undefined4 *puVar119;
  ulong uVar120;
  undefined8 *puVar121;
  long lVar122;
  float *pfVar123;
  long lVar124;
  ulong uVar125;
  int iVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  undefined8 uVar133;
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined8 uVar161;
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  undefined1 auVar204 [16];
  undefined1 auVar205 [16];
  undefined1 auVar206 [16];
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  undefined1 auVar213 [16];
  undefined1 auVar214 [16];
  undefined1 auVar215 [16];
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  undefined1 auVar218 [16];
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  undefined1 auVar224 [16];
  undefined1 auVar225 [16];
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  undefined1 auVar228 [16];
  undefined1 auVar229 [16];
  undefined1 auVar230 [16];
  undefined1 auVar231 [16];
  undefined1 auVar232 [16];
  undefined1 auVar233 [16];
  undefined1 auVar234 [16];
  undefined1 auVar235 [16];
  undefined1 auVar236 [16];
  undefined1 auVar237 [16];
  undefined1 auVar238 [16];
  undefined1 auVar239 [16];
  undefined1 auVar240 [16];
  undefined1 auVar241 [16];
  undefined1 auVar242 [16];
  
  (*(code *)**(undefined8 **)*param_3)(param_1,(undefined8 *)*param_3,*param_4 + 8,param_6);
  uVar118 = *(uint *)(*param_4 + 8);
  uVar118 = uVar118 & ((int)uVar118 >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar118) {
    uVar118 = 5;
  }
  uVar113 = 0xf5a382f;
  FUN_109c60fbc(&UNK_10f5a382f,0x1a,*param_4 + 0xc,uVar118);
  pfVar114 = *(float **)(*param_4 + 0x40);
  iVar126 = (int)param_6;
  if (iVar126 < 5) {
    if (iVar126 == 2) {
      lVar124 = *(long *)(*param_1 + 0x40);
      fVar127 = 1.0 / param_2;
      iVar126 = 0x4b400000 - param_5;
      fVar129 = (float)(-0x80 - (long)param_5);
      fVar128 = (float)(0x7f - (long)param_5);
      if ((int)uVar113 < 0x20) {
        uVar120 = 0;
      }
      else {
        uVar120 = 0;
        pfVar123 = pfVar114 + 0x10;
        do {
          auVar134._0_4_ = pfVar123[-0x10] * fVar127;
          auVar134._4_4_ = pfVar123[-0xf] * fVar127;
          auVar134._8_4_ = pfVar123[-0xe] * fVar127;
          auVar134._12_4_ = pfVar123[-0xd] * fVar127;
          auVar162._0_4_ = pfVar123[-0xc] * fVar127;
          auVar162._4_4_ = pfVar123[-0xb] * fVar127;
          auVar162._8_4_ = pfVar123[-10] * fVar127;
          auVar162._12_4_ = pfVar123[-9] * fVar127;
          auVar185._0_4_ = pfVar123[-8] * fVar127;
          auVar185._4_4_ = pfVar123[-7] * fVar127;
          auVar185._8_4_ = pfVar123[-6] * fVar127;
          auVar185._12_4_ = pfVar123[-5] * fVar127;
          auVar196._0_4_ = pfVar123[-4] * fVar127;
          auVar196._4_4_ = pfVar123[-3] * fVar127;
          auVar196._8_4_ = pfVar123[-2] * fVar127;
          auVar196._12_4_ = pfVar123[-1] * fVar127;
          auVar207._0_4_ = *pfVar123 * fVar127;
          auVar207._4_4_ = pfVar123[1] * fVar127;
          auVar207._8_4_ = pfVar123[2] * fVar127;
          auVar207._12_4_ = pfVar123[3] * fVar127;
          auVar216._0_4_ = pfVar123[4] * fVar127;
          auVar216._4_4_ = pfVar123[5] * fVar127;
          auVar216._8_4_ = pfVar123[6] * fVar127;
          auVar216._12_4_ = pfVar123[7] * fVar127;
          auVar225._0_4_ = pfVar123[8] * fVar127;
          auVar225._4_4_ = pfVar123[9] * fVar127;
          auVar225._8_4_ = pfVar123[10] * fVar127;
          auVar225._12_4_ = pfVar123[0xb] * fVar127;
          auVar234._0_4_ = pfVar123[0xc] * fVar127;
          auVar234._4_4_ = pfVar123[0xd] * fVar127;
          auVar234._8_4_ = pfVar123[0xe] * fVar127;
          auVar234._12_4_ = pfVar123[0xf] * fVar127;
          auVar45._4_4_ = fVar129;
          auVar45._0_4_ = fVar129;
          auVar45._8_4_ = fVar129;
          auVar45._12_4_ = fVar129;
          auVar152 = NEON_fmax(auVar134,auVar45,4);
          auVar85._4_4_ = fVar128;
          auVar85._0_4_ = fVar128;
          auVar85._8_4_ = fVar128;
          auVar85._12_4_ = fVar128;
          auVar152 = NEON_fmin(auVar152,auVar85,4);
          auVar46._4_4_ = fVar129;
          auVar46._0_4_ = fVar129;
          auVar46._8_4_ = fVar129;
          auVar46._12_4_ = fVar129;
          auVar178 = NEON_fmax(auVar162,auVar46,4);
          auVar86._4_4_ = fVar128;
          auVar86._0_4_ = fVar128;
          auVar86._8_4_ = fVar128;
          auVar86._12_4_ = fVar128;
          auVar178 = NEON_fmin(auVar178,auVar86,4);
          auVar47._4_4_ = fVar129;
          auVar47._0_4_ = fVar129;
          auVar47._8_4_ = fVar129;
          auVar47._12_4_ = fVar129;
          auVar191 = NEON_fmax(auVar185,auVar47,4);
          auVar87._4_4_ = fVar128;
          auVar87._0_4_ = fVar128;
          auVar87._8_4_ = fVar128;
          auVar87._12_4_ = fVar128;
          auVar191 = NEON_fmin(auVar191,auVar87,4);
          auVar48._4_4_ = fVar129;
          auVar48._0_4_ = fVar129;
          auVar48._8_4_ = fVar129;
          auVar48._12_4_ = fVar129;
          auVar202 = NEON_fmax(auVar196,auVar48,4);
          auVar88._4_4_ = fVar128;
          auVar88._0_4_ = fVar128;
          auVar88._8_4_ = fVar128;
          auVar88._12_4_ = fVar128;
          auVar202 = NEON_fmin(auVar202,auVar88,4);
          auVar49._4_4_ = fVar129;
          auVar49._0_4_ = fVar129;
          auVar49._8_4_ = fVar129;
          auVar49._12_4_ = fVar129;
          auVar212 = NEON_fmax(auVar207,auVar49,4);
          auVar89._4_4_ = fVar128;
          auVar89._0_4_ = fVar128;
          auVar89._8_4_ = fVar128;
          auVar89._12_4_ = fVar128;
          auVar212 = NEON_fmin(auVar212,auVar89,4);
          auVar50._4_4_ = fVar129;
          auVar50._0_4_ = fVar129;
          auVar50._8_4_ = fVar129;
          auVar50._12_4_ = fVar129;
          auVar221 = NEON_fmax(auVar216,auVar50,4);
          auVar90._4_4_ = fVar128;
          auVar90._0_4_ = fVar128;
          auVar90._8_4_ = fVar128;
          auVar90._12_4_ = fVar128;
          auVar221 = NEON_fmin(auVar221,auVar90,4);
          auVar51._4_4_ = fVar129;
          auVar51._0_4_ = fVar129;
          auVar51._8_4_ = fVar129;
          auVar51._12_4_ = fVar129;
          auVar230 = NEON_fmax(auVar225,auVar51,4);
          auVar91._4_4_ = fVar128;
          auVar91._0_4_ = fVar128;
          auVar91._8_4_ = fVar128;
          auVar91._12_4_ = fVar128;
          auVar230 = NEON_fmin(auVar230,auVar91,4);
          auVar52._4_4_ = fVar129;
          auVar52._0_4_ = fVar129;
          auVar52._8_4_ = fVar129;
          auVar52._12_4_ = fVar129;
          auVar239 = NEON_fmax(auVar234,auVar52,4);
          auVar92._4_4_ = fVar128;
          auVar92._0_4_ = fVar128;
          auVar92._8_4_ = fVar128;
          auVar92._12_4_ = fVar128;
          auVar239 = NEON_fmin(auVar239,auVar92,4);
          auVar135._0_4_ = auVar152._0_4_ + 12582912.0;
          auVar135._4_4_ = auVar152._4_4_ + 12582912.0;
          auVar135._8_4_ = auVar152._8_4_ + 12582912.0;
          auVar135._12_4_ = auVar152._12_4_ + 12582912.0;
          auVar13._4_4_ = iVar126;
          auVar13._0_4_ = iVar126;
          auVar13._8_4_ = iVar126;
          auVar13._12_4_ = iVar126;
          auVar152 = NEON_sqsub(auVar135,auVar13,4);
          auVar163._0_4_ = auVar178._0_4_ + 12582912.0;
          auVar163._4_4_ = auVar178._4_4_ + 12582912.0;
          auVar163._8_4_ = auVar178._8_4_ + 12582912.0;
          auVar163._12_4_ = auVar178._12_4_ + 12582912.0;
          auVar14._4_4_ = iVar126;
          auVar14._0_4_ = iVar126;
          auVar14._8_4_ = iVar126;
          auVar14._12_4_ = iVar126;
          auVar178 = NEON_sqsub(auVar163,auVar14,4);
          auVar186._0_4_ = auVar191._0_4_ + 12582912.0;
          auVar186._4_4_ = auVar191._4_4_ + 12582912.0;
          auVar186._8_4_ = auVar191._8_4_ + 12582912.0;
          auVar186._12_4_ = auVar191._12_4_ + 12582912.0;
          auVar15._4_4_ = iVar126;
          auVar15._0_4_ = iVar126;
          auVar15._8_4_ = iVar126;
          auVar15._12_4_ = iVar126;
          auVar191 = NEON_sqsub(auVar186,auVar15,4);
          auVar197._0_4_ = auVar202._0_4_ + 12582912.0;
          auVar197._4_4_ = auVar202._4_4_ + 12582912.0;
          auVar197._8_4_ = auVar202._8_4_ + 12582912.0;
          auVar197._12_4_ = auVar202._12_4_ + 12582912.0;
          auVar16._4_4_ = iVar126;
          auVar16._0_4_ = iVar126;
          auVar16._8_4_ = iVar126;
          auVar16._12_4_ = iVar126;
          auVar202 = NEON_sqsub(auVar197,auVar16,4);
          auVar208._0_4_ = auVar212._0_4_ + 12582912.0;
          auVar208._4_4_ = auVar212._4_4_ + 12582912.0;
          auVar208._8_4_ = auVar212._8_4_ + 12582912.0;
          auVar208._12_4_ = auVar212._12_4_ + 12582912.0;
          auVar17._4_4_ = iVar126;
          auVar17._0_4_ = iVar126;
          auVar17._8_4_ = iVar126;
          auVar17._12_4_ = iVar126;
          auVar212 = NEON_sqsub(auVar208,auVar17,4);
          auVar217._0_4_ = auVar221._0_4_ + 12582912.0;
          auVar217._4_4_ = auVar221._4_4_ + 12582912.0;
          auVar217._8_4_ = auVar221._8_4_ + 12582912.0;
          auVar217._12_4_ = auVar221._12_4_ + 12582912.0;
          auVar18._4_4_ = iVar126;
          auVar18._0_4_ = iVar126;
          auVar18._8_4_ = iVar126;
          auVar18._12_4_ = iVar126;
          auVar221 = NEON_sqsub(auVar217,auVar18,4);
          auVar226._0_4_ = auVar230._0_4_ + 12582912.0;
          auVar226._4_4_ = auVar230._4_4_ + 12582912.0;
          auVar226._8_4_ = auVar230._8_4_ + 12582912.0;
          auVar226._12_4_ = auVar230._12_4_ + 12582912.0;
          auVar19._4_4_ = iVar126;
          auVar19._0_4_ = iVar126;
          auVar19._8_4_ = iVar126;
          auVar19._12_4_ = iVar126;
          auVar230 = NEON_sqsub(auVar226,auVar19,4);
          auVar235._0_4_ = auVar239._0_4_ + 12582912.0;
          auVar235._4_4_ = auVar239._4_4_ + 12582912.0;
          auVar235._8_4_ = auVar239._8_4_ + 12582912.0;
          auVar235._12_4_ = auVar239._12_4_ + 12582912.0;
          auVar20._4_4_ = iVar126;
          auVar20._0_4_ = iVar126;
          auVar20._8_4_ = iVar126;
          auVar20._12_4_ = iVar126;
          auVar239 = NEON_sqsub(auVar235,auVar20,4);
          auVar136._8_8_ = auVar152._8_8_;
          auVar136._0_8_ = NEON_sqxtn(auVar152._0_8_,auVar152,4);
          auVar152 = NEON_sqxtn2(auVar136,auVar178,4);
          auVar164._8_8_ = auVar178._8_8_;
          auVar164._0_8_ = NEON_sqxtn(auVar178._0_8_,auVar191,4);
          auVar178 = NEON_sqxtn2(auVar164,auVar202,4);
          auVar187._8_8_ = auVar191._8_8_;
          auVar187._0_8_ = NEON_sqxtn(auVar191._0_8_,auVar212,4);
          auVar191 = NEON_sqxtn2(auVar187,auVar221,4);
          auVar198._8_8_ = auVar202._8_8_;
          auVar198._0_8_ = NEON_sqxtn(auVar202._0_8_,auVar230,4);
          auVar202 = NEON_sqxtn2(auVar198,auVar239,4);
          uVar133 = NEON_sqxtn(auVar152._0_8_,auVar152,2);
          puVar121 = (undefined8 *)(lVar124 + uVar120);
          uVar161 = NEON_sqxtn(auVar178._0_8_,auVar178,2);
          *puVar121 = uVar133;
          puVar121[1] = uVar161;
          uVar133 = NEON_sqxtn(uVar133,auVar191,2);
          uVar161 = NEON_sqxtn(uVar161,auVar202,2);
          puVar121[2] = uVar133;
          puVar121[3] = uVar161;
          uVar120 = uVar120 + 0x20;
          pfVar123 = pfVar123 + 0x20;
        } while ((long)uVar120 <= (long)(int)(uVar113 - 0x20));
      }
      uVar118 = (uint)uVar120;
      if ((int)uVar118 <= (int)(uVar113 - 8)) {
        uVar125 = uVar120 & 0xffffffff;
        pfVar123 = pfVar114 + (uVar120 & 0xffffffff) + 4;
        do {
          auVar137._0_4_ = pfVar123[-4] * fVar127;
          auVar137._4_4_ = pfVar123[-3] * fVar127;
          auVar137._8_4_ = pfVar123[-2] * fVar127;
          auVar137._12_4_ = pfVar123[-1] * fVar127;
          auVar165._0_4_ = *pfVar123 * fVar127;
          auVar165._4_4_ = pfVar123[1] * fVar127;
          auVar165._8_4_ = pfVar123[2] * fVar127;
          auVar165._12_4_ = pfVar123[3] * fVar127;
          auVar43._4_4_ = fVar129;
          auVar43._0_4_ = fVar129;
          auVar43._8_4_ = fVar129;
          auVar43._12_4_ = fVar129;
          auVar152 = NEON_fmax(auVar137,auVar43,4);
          auVar83._4_4_ = fVar128;
          auVar83._0_4_ = fVar128;
          auVar83._8_4_ = fVar128;
          auVar83._12_4_ = fVar128;
          auVar152 = NEON_fmin(auVar152,auVar83,4);
          auVar44._4_4_ = fVar129;
          auVar44._0_4_ = fVar129;
          auVar44._8_4_ = fVar129;
          auVar44._12_4_ = fVar129;
          auVar178 = NEON_fmax(auVar165,auVar44,4);
          auVar84._4_4_ = fVar128;
          auVar84._0_4_ = fVar128;
          auVar84._8_4_ = fVar128;
          auVar84._12_4_ = fVar128;
          auVar178 = NEON_fmin(auVar178,auVar84,4);
          auVar138._0_4_ = auVar152._0_4_ + 12582912.0;
          auVar138._4_4_ = auVar152._4_4_ + 12582912.0;
          auVar138._8_4_ = auVar152._8_4_ + 12582912.0;
          auVar138._12_4_ = auVar152._12_4_ + 12582912.0;
          auVar11._4_4_ = iVar126;
          auVar11._0_4_ = iVar126;
          auVar11._8_4_ = iVar126;
          auVar11._12_4_ = iVar126;
          auVar152 = NEON_sqsub(auVar138,auVar11,4);
          auVar166._0_4_ = auVar178._0_4_ + 12582912.0;
          auVar166._4_4_ = auVar178._4_4_ + 12582912.0;
          auVar166._8_4_ = auVar178._8_4_ + 12582912.0;
          auVar166._12_4_ = auVar178._12_4_ + 12582912.0;
          auVar12._4_4_ = iVar126;
          auVar12._0_4_ = iVar126;
          auVar12._8_4_ = iVar126;
          auVar12._12_4_ = iVar126;
          auVar178 = NEON_sqsub(auVar166,auVar12,4);
          auVar139._8_8_ = auVar152._8_8_;
          auVar139._0_8_ = NEON_sqxtn(auVar152._0_8_,auVar152,4);
          auVar152 = NEON_sqxtn2(auVar139,auVar178,4);
          uVar133 = NEON_sqxtn(auVar152._0_8_,auVar152,2);
          *(undefined8 *)(lVar124 + uVar125) = uVar133;
          uVar125 = uVar125 + 8;
          pfVar123 = pfVar123 + 8;
        } while ((long)uVar125 <= (long)(int)(uVar113 - 8));
        uVar118 = (uint)uVar125;
      }
      if (uVar118 != uVar113) {
        lVar122 = (long)(int)uVar113 * 4 + (ulong)uVar118 * -4;
        pfVar114 = pfVar114 + uVar118;
        puVar116 = (undefined1 *)(lVar124 + (ulong)uVar118);
        do {
          fVar131 = fVar127 * *pfVar114;
          fVar130 = fVar128;
          if (fVar131 <= fVar128) {
            fVar130 = fVar131;
          }
          fVar132 = fVar129;
          if (fVar129 <= fVar131) {
            fVar132 = (float)(int)fVar130;
          }
          lVar124 = (long)fVar132 + (long)param_5;
          if (lVar124 < -0x7f) {
            lVar124 = -0x80;
          }
          if (0x7e < lVar124) {
            lVar124 = 0x7f;
          }
          *puVar116 = (char)lVar124;
          lVar122 = lVar122 + -4;
          pfVar114 = pfVar114 + 1;
          puVar116 = puVar116 + 1;
        } while (lVar122 != 0);
      }
    }
    else if (iVar126 == 3) {
      lVar124 = *(long *)(*param_1 + 0x40);
      fVar127 = 1.0 / param_2;
      iVar126 = 0x4b400000 - param_5;
      fVar129 = (float)(-0x8000 - (long)param_5);
      fVar128 = (float)(0x7fff - (long)param_5);
      if ((int)uVar113 < 0x20) {
        uVar120 = 0;
      }
      else {
        uVar120 = 0;
        pfVar123 = pfVar114 + 0x10;
        puVar121 = (undefined8 *)(lVar124 + 0x20);
        do {
          auVar147._0_4_ = pfVar123[-0x10] * fVar127;
          auVar147._4_4_ = pfVar123[-0xf] * fVar127;
          auVar147._8_4_ = pfVar123[-0xe] * fVar127;
          auVar147._12_4_ = pfVar123[-0xd] * fVar127;
          auVar173._0_4_ = pfVar123[-0xc] * fVar127;
          auVar173._4_4_ = pfVar123[-0xb] * fVar127;
          auVar173._8_4_ = pfVar123[-10] * fVar127;
          auVar173._12_4_ = pfVar123[-9] * fVar127;
          auVar190._0_4_ = pfVar123[-8] * fVar127;
          auVar190._4_4_ = pfVar123[-7] * fVar127;
          auVar190._8_4_ = pfVar123[-6] * fVar127;
          auVar190._12_4_ = pfVar123[-5] * fVar127;
          auVar201._0_4_ = pfVar123[-4] * fVar127;
          auVar201._4_4_ = pfVar123[-3] * fVar127;
          auVar201._8_4_ = pfVar123[-2] * fVar127;
          auVar201._12_4_ = pfVar123[-1] * fVar127;
          auVar211._0_4_ = *pfVar123 * fVar127;
          auVar211._4_4_ = pfVar123[1] * fVar127;
          auVar211._8_4_ = pfVar123[2] * fVar127;
          auVar211._12_4_ = pfVar123[3] * fVar127;
          auVar220._0_4_ = pfVar123[4] * fVar127;
          auVar220._4_4_ = pfVar123[5] * fVar127;
          auVar220._8_4_ = pfVar123[6] * fVar127;
          auVar220._12_4_ = pfVar123[7] * fVar127;
          auVar229._0_4_ = pfVar123[8] * fVar127;
          auVar229._4_4_ = pfVar123[9] * fVar127;
          auVar229._8_4_ = pfVar123[10] * fVar127;
          auVar229._12_4_ = pfVar123[0xb] * fVar127;
          auVar238._0_4_ = pfVar123[0xc] * fVar127;
          auVar238._4_4_ = pfVar123[0xd] * fVar127;
          auVar238._8_4_ = pfVar123[0xe] * fVar127;
          auVar238._12_4_ = pfVar123[0xf] * fVar127;
          auVar35._4_4_ = fVar129;
          auVar35._0_4_ = fVar129;
          auVar35._8_4_ = fVar129;
          auVar35._12_4_ = fVar129;
          auVar152 = NEON_fmax(auVar147,auVar35,4);
          auVar75._4_4_ = fVar128;
          auVar75._0_4_ = fVar128;
          auVar75._8_4_ = fVar128;
          auVar75._12_4_ = fVar128;
          auVar152 = NEON_fmin(auVar152,auVar75,4);
          auVar36._4_4_ = fVar129;
          auVar36._0_4_ = fVar129;
          auVar36._8_4_ = fVar129;
          auVar36._12_4_ = fVar129;
          auVar178 = NEON_fmax(auVar173,auVar36,4);
          auVar76._4_4_ = fVar128;
          auVar76._0_4_ = fVar128;
          auVar76._8_4_ = fVar128;
          auVar76._12_4_ = fVar128;
          auVar178 = NEON_fmin(auVar178,auVar76,4);
          auVar37._4_4_ = fVar129;
          auVar37._0_4_ = fVar129;
          auVar37._8_4_ = fVar129;
          auVar37._12_4_ = fVar129;
          auVar191 = NEON_fmax(auVar190,auVar37,4);
          auVar77._4_4_ = fVar128;
          auVar77._0_4_ = fVar128;
          auVar77._8_4_ = fVar128;
          auVar77._12_4_ = fVar128;
          auVar191 = NEON_fmin(auVar191,auVar77,4);
          auVar38._4_4_ = fVar129;
          auVar38._0_4_ = fVar129;
          auVar38._8_4_ = fVar129;
          auVar38._12_4_ = fVar129;
          auVar202 = NEON_fmax(auVar201,auVar38,4);
          auVar78._4_4_ = fVar128;
          auVar78._0_4_ = fVar128;
          auVar78._8_4_ = fVar128;
          auVar78._12_4_ = fVar128;
          auVar202 = NEON_fmin(auVar202,auVar78,4);
          auVar39._4_4_ = fVar129;
          auVar39._0_4_ = fVar129;
          auVar39._8_4_ = fVar129;
          auVar39._12_4_ = fVar129;
          auVar212 = NEON_fmax(auVar211,auVar39,4);
          auVar79._4_4_ = fVar128;
          auVar79._0_4_ = fVar128;
          auVar79._8_4_ = fVar128;
          auVar79._12_4_ = fVar128;
          auVar212 = NEON_fmin(auVar212,auVar79,4);
          auVar40._4_4_ = fVar129;
          auVar40._0_4_ = fVar129;
          auVar40._8_4_ = fVar129;
          auVar40._12_4_ = fVar129;
          auVar221 = NEON_fmax(auVar220,auVar40,4);
          auVar80._4_4_ = fVar128;
          auVar80._0_4_ = fVar128;
          auVar80._8_4_ = fVar128;
          auVar80._12_4_ = fVar128;
          auVar221 = NEON_fmin(auVar221,auVar80,4);
          auVar41._4_4_ = fVar129;
          auVar41._0_4_ = fVar129;
          auVar41._8_4_ = fVar129;
          auVar41._12_4_ = fVar129;
          auVar230 = NEON_fmax(auVar229,auVar41,4);
          auVar81._4_4_ = fVar128;
          auVar81._0_4_ = fVar128;
          auVar81._8_4_ = fVar128;
          auVar81._12_4_ = fVar128;
          auVar230 = NEON_fmin(auVar230,auVar81,4);
          auVar42._4_4_ = fVar129;
          auVar42._0_4_ = fVar129;
          auVar42._8_4_ = fVar129;
          auVar42._12_4_ = fVar129;
          auVar239 = NEON_fmax(auVar238,auVar42,4);
          auVar82._4_4_ = fVar128;
          auVar82._0_4_ = fVar128;
          auVar82._8_4_ = fVar128;
          auVar82._12_4_ = fVar128;
          auVar239 = NEON_fmin(auVar239,auVar82,4);
          auVar148._0_4_ = auVar152._0_4_ + 12582912.0;
          auVar148._4_4_ = auVar152._4_4_ + 12582912.0;
          auVar148._8_4_ = auVar152._8_4_ + 12582912.0;
          auVar148._12_4_ = auVar152._12_4_ + 12582912.0;
          auVar3._4_4_ = iVar126;
          auVar3._0_4_ = iVar126;
          auVar3._8_4_ = iVar126;
          auVar3._12_4_ = iVar126;
          auVar152 = NEON_sqsub(auVar148,auVar3,4);
          auVar174._0_4_ = auVar178._0_4_ + 12582912.0;
          auVar174._4_4_ = auVar178._4_4_ + 12582912.0;
          auVar174._8_4_ = auVar178._8_4_ + 12582912.0;
          auVar174._12_4_ = auVar178._12_4_ + 12582912.0;
          auVar4._4_4_ = iVar126;
          auVar4._0_4_ = iVar126;
          auVar4._8_4_ = iVar126;
          auVar4._12_4_ = iVar126;
          auVar178 = NEON_sqsub(auVar174,auVar4,4);
          auVar192._0_4_ = auVar191._0_4_ + 12582912.0;
          auVar192._4_4_ = auVar191._4_4_ + 12582912.0;
          auVar192._8_4_ = auVar191._8_4_ + 12582912.0;
          auVar192._12_4_ = auVar191._12_4_ + 12582912.0;
          auVar5._4_4_ = iVar126;
          auVar5._0_4_ = iVar126;
          auVar5._8_4_ = iVar126;
          auVar5._12_4_ = iVar126;
          auVar191 = NEON_sqsub(auVar192,auVar5,4);
          auVar203._0_4_ = auVar202._0_4_ + 12582912.0;
          auVar203._4_4_ = auVar202._4_4_ + 12582912.0;
          auVar203._8_4_ = auVar202._8_4_ + 12582912.0;
          auVar203._12_4_ = auVar202._12_4_ + 12582912.0;
          auVar6._4_4_ = iVar126;
          auVar6._0_4_ = iVar126;
          auVar6._8_4_ = iVar126;
          auVar6._12_4_ = iVar126;
          auVar202 = NEON_sqsub(auVar203,auVar6,4);
          auVar213._0_4_ = auVar212._0_4_ + 12582912.0;
          auVar213._4_4_ = auVar212._4_4_ + 12582912.0;
          auVar213._8_4_ = auVar212._8_4_ + 12582912.0;
          auVar213._12_4_ = auVar212._12_4_ + 12582912.0;
          auVar7._4_4_ = iVar126;
          auVar7._0_4_ = iVar126;
          auVar7._8_4_ = iVar126;
          auVar7._12_4_ = iVar126;
          auVar212 = NEON_sqsub(auVar213,auVar7,4);
          auVar222._0_4_ = auVar221._0_4_ + 12582912.0;
          auVar222._4_4_ = auVar221._4_4_ + 12582912.0;
          auVar222._8_4_ = auVar221._8_4_ + 12582912.0;
          auVar222._12_4_ = auVar221._12_4_ + 12582912.0;
          auVar8._4_4_ = iVar126;
          auVar8._0_4_ = iVar126;
          auVar8._8_4_ = iVar126;
          auVar8._12_4_ = iVar126;
          auVar221 = NEON_sqsub(auVar222,auVar8,4);
          auVar231._0_4_ = auVar230._0_4_ + 12582912.0;
          auVar231._4_4_ = auVar230._4_4_ + 12582912.0;
          auVar231._8_4_ = auVar230._8_4_ + 12582912.0;
          auVar231._12_4_ = auVar230._12_4_ + 12582912.0;
          auVar9._4_4_ = iVar126;
          auVar9._0_4_ = iVar126;
          auVar9._8_4_ = iVar126;
          auVar9._12_4_ = iVar126;
          auVar230 = NEON_sqsub(auVar231,auVar9,4);
          auVar240._0_4_ = auVar239._0_4_ + 12582912.0;
          auVar240._4_4_ = auVar239._4_4_ + 12582912.0;
          auVar240._8_4_ = auVar239._8_4_ + 12582912.0;
          auVar240._12_4_ = auVar239._12_4_ + 12582912.0;
          auVar10._4_4_ = iVar126;
          auVar10._0_4_ = iVar126;
          auVar10._8_4_ = iVar126;
          auVar10._12_4_ = iVar126;
          auVar239 = NEON_sqsub(auVar240,auVar10,4);
          auVar149._8_8_ = auVar152._8_8_;
          auVar149._0_8_ = NEON_sqxtn(auVar152._0_8_,auVar152,4);
          auVar152 = NEON_sqxtn2(auVar149,auVar178,4);
          auVar175._8_8_ = auVar178._8_8_;
          auVar175._0_8_ = NEON_sqxtn(auVar178._0_8_,auVar191,4);
          auVar178 = NEON_sqxtn2(auVar175,auVar202,4);
          auVar150._8_8_ = auVar152._8_8_;
          puVar121[-3] = auVar150._8_8_;
          puVar121[-4] = auVar152._0_8_;
          auVar176._8_8_ = auVar178._8_8_;
          puVar121[-1] = auVar176._8_8_;
          puVar121[-2] = auVar178._0_8_;
          auVar150._0_8_ = NEON_sqxtn(auVar152._0_8_,auVar212,4);
          auVar152 = NEON_sqxtn2(auVar150,auVar221,4);
          auVar176._0_8_ = NEON_sqxtn(auVar178._0_8_,auVar230,4);
          auVar178 = NEON_sqxtn2(auVar176,auVar239,4);
          puVar121[1] = auVar152._8_8_;
          *puVar121 = auVar152._0_8_;
          puVar121[3] = auVar178._8_8_;
          puVar121[2] = auVar178._0_8_;
          uVar120 = uVar120 + 0x20;
          pfVar123 = pfVar123 + 0x20;
          puVar121 = puVar121 + 8;
        } while ((long)uVar120 <= (long)(int)(uVar113 - 0x20));
      }
      uVar118 = (uint)uVar120;
      if ((int)uVar118 <= (int)(uVar113 - 8)) {
        uVar125 = uVar120 & 0xffffffff;
        pfVar123 = pfVar114 + (uVar120 & 0xffffffff) + 4;
        puVar121 = (undefined8 *)(lVar124 + (uVar120 & 0xffffffff) * 2);
        do {
          auVar151._0_4_ = pfVar123[-4] * fVar127;
          auVar151._4_4_ = pfVar123[-3] * fVar127;
          auVar151._8_4_ = pfVar123[-2] * fVar127;
          auVar151._12_4_ = pfVar123[-1] * fVar127;
          auVar177._0_4_ = *pfVar123 * fVar127;
          auVar177._4_4_ = pfVar123[1] * fVar127;
          auVar177._8_4_ = pfVar123[2] * fVar127;
          auVar177._12_4_ = pfVar123[3] * fVar127;
          auVar33._4_4_ = fVar129;
          auVar33._0_4_ = fVar129;
          auVar33._8_4_ = fVar129;
          auVar33._12_4_ = fVar129;
          auVar152 = NEON_fmax(auVar151,auVar33,4);
          auVar73._4_4_ = fVar128;
          auVar73._0_4_ = fVar128;
          auVar73._8_4_ = fVar128;
          auVar73._12_4_ = fVar128;
          auVar152 = NEON_fmin(auVar152,auVar73,4);
          auVar34._4_4_ = fVar129;
          auVar34._0_4_ = fVar129;
          auVar34._8_4_ = fVar129;
          auVar34._12_4_ = fVar129;
          auVar178 = NEON_fmax(auVar177,auVar34,4);
          auVar74._4_4_ = fVar128;
          auVar74._0_4_ = fVar128;
          auVar74._8_4_ = fVar128;
          auVar74._12_4_ = fVar128;
          auVar178 = NEON_fmin(auVar178,auVar74,4);
          auVar153._0_4_ = auVar152._0_4_ + 12582912.0;
          auVar153._4_4_ = auVar152._4_4_ + 12582912.0;
          auVar153._8_4_ = auVar152._8_4_ + 12582912.0;
          auVar153._12_4_ = auVar152._12_4_ + 12582912.0;
          auVar1._4_4_ = iVar126;
          auVar1._0_4_ = iVar126;
          auVar1._8_4_ = iVar126;
          auVar1._12_4_ = iVar126;
          auVar152 = NEON_sqsub(auVar153,auVar1,4);
          auVar179._0_4_ = auVar178._0_4_ + 12582912.0;
          auVar179._4_4_ = auVar178._4_4_ + 12582912.0;
          auVar179._8_4_ = auVar178._8_4_ + 12582912.0;
          auVar179._12_4_ = auVar178._12_4_ + 12582912.0;
          auVar2._4_4_ = iVar126;
          auVar2._0_4_ = iVar126;
          auVar2._8_4_ = iVar126;
          auVar2._12_4_ = iVar126;
          auVar178 = NEON_sqsub(auVar179,auVar2,4);
          auVar154._8_8_ = auVar152._8_8_;
          auVar154._0_8_ = NEON_sqxtn(auVar152._0_8_,auVar152,4);
          auVar152 = NEON_sqxtn2(auVar154,auVar178,4);
          puVar121[1] = auVar152._8_8_;
          *puVar121 = auVar152._0_8_;
          uVar125 = uVar125 + 8;
          pfVar123 = pfVar123 + 8;
          puVar121 = puVar121 + 2;
        } while ((long)uVar125 <= (long)(int)(uVar113 - 8));
        uVar118 = (uint)uVar125;
      }
      if (uVar118 != uVar113) {
        lVar122 = (long)(int)uVar113 * 4 + (ulong)uVar118 * -4;
        pfVar114 = pfVar114 + uVar118;
        puVar115 = (undefined2 *)(lVar124 + (ulong)uVar118 * 2);
        do {
          fVar131 = fVar127 * *pfVar114;
          fVar130 = fVar128;
          if (fVar131 <= fVar128) {
            fVar130 = fVar131;
          }
          fVar132 = fVar129;
          if (fVar129 <= fVar131) {
            fVar132 = (float)(int)fVar130;
          }
          lVar124 = (long)fVar132 + (long)param_5;
          if (lVar124 < -0x7fff) {
            lVar124 = -0x8000;
          }
          if (0x7ffe < lVar124) {
            lVar124 = 0x7fff;
          }
          *puVar115 = (short)lVar124;
          lVar122 = lVar122 + -4;
          pfVar114 = pfVar114 + 1;
          puVar115 = puVar115 + 1;
        } while (lVar122 != 0);
      }
    }
    else if ((iVar126 == 4) && (uVar113 != 0)) {
      lVar124 = (long)(int)uVar113 << 2;
      puVar119 = *(undefined4 **)(*param_1 + 0x40);
      do {
        fVar129 = (1.0 / param_2) * *pfVar114;
        fVar127 = (float)(0x7fffffff - (long)param_5);
        if (fVar129 <= (float)(0x7fffffff - (long)param_5)) {
          fVar127 = fVar129;
        }
        fVar128 = (float)(-0x80000000 - (long)param_5);
        if ((float)(-0x80000000 - (long)param_5) <= fVar129) {
          fVar128 = (float)(int)fVar127;
        }
        lVar122 = (long)fVar128 + (long)param_5;
        if (lVar122 < -0x7fffffff) {
          lVar122 = -0x80000000;
        }
        if (0x7ffffffe < lVar122) {
          lVar122 = 0x7fffffff;
        }
        *puVar119 = (int)lVar122;
        lVar124 = lVar124 + -4;
        pfVar114 = pfVar114 + 1;
        puVar119 = puVar119 + 1;
      } while (lVar124 != 0);
    }
  }
  else if (iVar126 == 7) {
    lVar124 = *(long *)(*param_1 + 0x40);
    iVar126 = 0x4b400000 - param_5;
    fVar127 = 1.0 / param_2;
    fVar129 = (float)-(long)param_5;
    fVar128 = (float)(0xffff - (long)param_5);
    if ((int)uVar113 < 0x20) {
      uVar120 = 0;
    }
    else {
      uVar120 = 0;
      pfVar123 = pfVar114 + 0x10;
      puVar121 = (undefined8 *)(lVar124 + 0x20);
      do {
        auVar140._0_4_ = pfVar123[-0x10] * fVar127;
        auVar140._4_4_ = pfVar123[-0xf] * fVar127;
        auVar140._8_4_ = pfVar123[-0xe] * fVar127;
        auVar140._12_4_ = pfVar123[-0xd] * fVar127;
        auVar167._0_4_ = pfVar123[-0xc] * fVar127;
        auVar167._4_4_ = pfVar123[-0xb] * fVar127;
        auVar167._8_4_ = pfVar123[-10] * fVar127;
        auVar167._12_4_ = pfVar123[-9] * fVar127;
        auVar188._0_4_ = pfVar123[-8] * fVar127;
        auVar188._4_4_ = pfVar123[-7] * fVar127;
        auVar188._8_4_ = pfVar123[-6] * fVar127;
        auVar188._12_4_ = pfVar123[-5] * fVar127;
        auVar199._0_4_ = pfVar123[-4] * fVar127;
        auVar199._4_4_ = pfVar123[-3] * fVar127;
        auVar199._8_4_ = pfVar123[-2] * fVar127;
        auVar199._12_4_ = pfVar123[-1] * fVar127;
        auVar209._0_4_ = *pfVar123 * fVar127;
        auVar209._4_4_ = pfVar123[1] * fVar127;
        auVar209._8_4_ = pfVar123[2] * fVar127;
        auVar209._12_4_ = pfVar123[3] * fVar127;
        auVar218._0_4_ = pfVar123[4] * fVar127;
        auVar218._4_4_ = pfVar123[5] * fVar127;
        auVar218._8_4_ = pfVar123[6] * fVar127;
        auVar218._12_4_ = pfVar123[7] * fVar127;
        auVar227._0_4_ = pfVar123[8] * fVar127;
        auVar227._4_4_ = pfVar123[9] * fVar127;
        auVar227._8_4_ = pfVar123[10] * fVar127;
        auVar227._12_4_ = pfVar123[0xb] * fVar127;
        auVar236._0_4_ = pfVar123[0xc] * fVar127;
        auVar236._4_4_ = pfVar123[0xd] * fVar127;
        auVar236._8_4_ = pfVar123[0xe] * fVar127;
        auVar236._12_4_ = pfVar123[0xf] * fVar127;
        auVar65._4_4_ = fVar129;
        auVar65._0_4_ = fVar129;
        auVar65._8_4_ = fVar129;
        auVar65._12_4_ = fVar129;
        auVar152 = NEON_fmax(auVar140,auVar65,4);
        auVar105._4_4_ = fVar128;
        auVar105._0_4_ = fVar128;
        auVar105._8_4_ = fVar128;
        auVar105._12_4_ = fVar128;
        auVar152 = NEON_fmin(auVar152,auVar105,4);
        auVar66._4_4_ = fVar129;
        auVar66._0_4_ = fVar129;
        auVar66._8_4_ = fVar129;
        auVar66._12_4_ = fVar129;
        auVar178 = NEON_fmax(auVar167,auVar66,4);
        auVar106._4_4_ = fVar128;
        auVar106._0_4_ = fVar128;
        auVar106._8_4_ = fVar128;
        auVar106._12_4_ = fVar128;
        auVar178 = NEON_fmin(auVar178,auVar106,4);
        auVar67._4_4_ = fVar129;
        auVar67._0_4_ = fVar129;
        auVar67._8_4_ = fVar129;
        auVar67._12_4_ = fVar129;
        auVar191 = NEON_fmax(auVar188,auVar67,4);
        auVar107._4_4_ = fVar128;
        auVar107._0_4_ = fVar128;
        auVar107._8_4_ = fVar128;
        auVar107._12_4_ = fVar128;
        auVar191 = NEON_fmin(auVar191,auVar107,4);
        auVar68._4_4_ = fVar129;
        auVar68._0_4_ = fVar129;
        auVar68._8_4_ = fVar129;
        auVar68._12_4_ = fVar129;
        auVar202 = NEON_fmax(auVar199,auVar68,4);
        auVar108._4_4_ = fVar128;
        auVar108._0_4_ = fVar128;
        auVar108._8_4_ = fVar128;
        auVar108._12_4_ = fVar128;
        auVar202 = NEON_fmin(auVar202,auVar108,4);
        auVar69._4_4_ = fVar129;
        auVar69._0_4_ = fVar129;
        auVar69._8_4_ = fVar129;
        auVar69._12_4_ = fVar129;
        auVar212 = NEON_fmax(auVar209,auVar69,4);
        auVar109._4_4_ = fVar128;
        auVar109._0_4_ = fVar128;
        auVar109._8_4_ = fVar128;
        auVar109._12_4_ = fVar128;
        auVar212 = NEON_fmin(auVar212,auVar109,4);
        auVar70._4_4_ = fVar129;
        auVar70._0_4_ = fVar129;
        auVar70._8_4_ = fVar129;
        auVar70._12_4_ = fVar129;
        auVar221 = NEON_fmax(auVar218,auVar70,4);
        auVar110._4_4_ = fVar128;
        auVar110._0_4_ = fVar128;
        auVar110._8_4_ = fVar128;
        auVar110._12_4_ = fVar128;
        auVar221 = NEON_fmin(auVar221,auVar110,4);
        auVar71._4_4_ = fVar129;
        auVar71._0_4_ = fVar129;
        auVar71._8_4_ = fVar129;
        auVar71._12_4_ = fVar129;
        auVar230 = NEON_fmax(auVar227,auVar71,4);
        auVar111._4_4_ = fVar128;
        auVar111._0_4_ = fVar128;
        auVar111._8_4_ = fVar128;
        auVar111._12_4_ = fVar128;
        auVar230 = NEON_fmin(auVar230,auVar111,4);
        auVar72._4_4_ = fVar129;
        auVar72._0_4_ = fVar129;
        auVar72._8_4_ = fVar129;
        auVar72._12_4_ = fVar129;
        auVar239 = NEON_fmax(auVar236,auVar72,4);
        auVar112._4_4_ = fVar128;
        auVar112._0_4_ = fVar128;
        auVar112._8_4_ = fVar128;
        auVar112._12_4_ = fVar128;
        auVar239 = NEON_fmin(auVar239,auVar112,4);
        auVar141._0_4_ = auVar152._0_4_ + 12582912.0;
        auVar141._4_4_ = auVar152._4_4_ + 12582912.0;
        auVar141._8_4_ = auVar152._8_4_ + 12582912.0;
        auVar141._12_4_ = auVar152._12_4_ + 12582912.0;
        auVar152._4_4_ = iVar126;
        auVar152._0_4_ = iVar126;
        auVar152._8_4_ = iVar126;
        auVar152._12_4_ = iVar126;
        auVar152 = NEON_sqsub(auVar141,auVar152,4);
        auVar168._0_4_ = auVar178._0_4_ + 12582912.0;
        auVar168._4_4_ = auVar178._4_4_ + 12582912.0;
        auVar168._8_4_ = auVar178._8_4_ + 12582912.0;
        auVar168._12_4_ = auVar178._12_4_ + 12582912.0;
        auVar178._4_4_ = iVar126;
        auVar178._0_4_ = iVar126;
        auVar178._8_4_ = iVar126;
        auVar178._12_4_ = iVar126;
        auVar178 = NEON_sqsub(auVar168,auVar178,4);
        auVar189._0_4_ = auVar191._0_4_ + 12582912.0;
        auVar189._4_4_ = auVar191._4_4_ + 12582912.0;
        auVar189._8_4_ = auVar191._8_4_ + 12582912.0;
        auVar189._12_4_ = auVar191._12_4_ + 12582912.0;
        auVar191._4_4_ = iVar126;
        auVar191._0_4_ = iVar126;
        auVar191._8_4_ = iVar126;
        auVar191._12_4_ = iVar126;
        auVar191 = NEON_sqsub(auVar189,auVar191,4);
        auVar200._0_4_ = auVar202._0_4_ + 12582912.0;
        auVar200._4_4_ = auVar202._4_4_ + 12582912.0;
        auVar200._8_4_ = auVar202._8_4_ + 12582912.0;
        auVar200._12_4_ = auVar202._12_4_ + 12582912.0;
        auVar202._4_4_ = iVar126;
        auVar202._0_4_ = iVar126;
        auVar202._8_4_ = iVar126;
        auVar202._12_4_ = iVar126;
        auVar202 = NEON_sqsub(auVar200,auVar202,4);
        auVar210._0_4_ = auVar212._0_4_ + 12582912.0;
        auVar210._4_4_ = auVar212._4_4_ + 12582912.0;
        auVar210._8_4_ = auVar212._8_4_ + 12582912.0;
        auVar210._12_4_ = auVar212._12_4_ + 12582912.0;
        auVar212._4_4_ = iVar126;
        auVar212._0_4_ = iVar126;
        auVar212._8_4_ = iVar126;
        auVar212._12_4_ = iVar126;
        auVar212 = NEON_sqsub(auVar210,auVar212,4);
        auVar219._0_4_ = auVar221._0_4_ + 12582912.0;
        auVar219._4_4_ = auVar221._4_4_ + 12582912.0;
        auVar219._8_4_ = auVar221._8_4_ + 12582912.0;
        auVar219._12_4_ = auVar221._12_4_ + 12582912.0;
        auVar221._4_4_ = iVar126;
        auVar221._0_4_ = iVar126;
        auVar221._8_4_ = iVar126;
        auVar221._12_4_ = iVar126;
        auVar221 = NEON_sqsub(auVar219,auVar221,4);
        auVar228._0_4_ = auVar230._0_4_ + 12582912.0;
        auVar228._4_4_ = auVar230._4_4_ + 12582912.0;
        auVar228._8_4_ = auVar230._8_4_ + 12582912.0;
        auVar228._12_4_ = auVar230._12_4_ + 12582912.0;
        auVar230._4_4_ = iVar126;
        auVar230._0_4_ = iVar126;
        auVar230._8_4_ = iVar126;
        auVar230._12_4_ = iVar126;
        auVar230 = NEON_sqsub(auVar228,auVar230,4);
        auVar237._0_4_ = auVar239._0_4_ + 12582912.0;
        auVar237._4_4_ = auVar239._4_4_ + 12582912.0;
        auVar237._8_4_ = auVar239._8_4_ + 12582912.0;
        auVar237._12_4_ = auVar239._12_4_ + 12582912.0;
        auVar239._4_4_ = iVar126;
        auVar239._0_4_ = iVar126;
        auVar239._8_4_ = iVar126;
        auVar239._12_4_ = iVar126;
        auVar239 = NEON_sqsub(auVar237,auVar239,4);
        auVar142._8_8_ = auVar152._8_8_;
        auVar142._0_8_ = NEON_sqxtun(auVar152._0_8_,auVar152,4);
        auVar152 = NEON_sqxtun2(auVar142,auVar178,4);
        auVar169._8_8_ = auVar178._8_8_;
        auVar169._0_8_ = NEON_sqxtun(auVar178._0_8_,auVar191,4);
        auVar178 = NEON_sqxtun2(auVar169,auVar202,4);
        auVar143._8_8_ = auVar152._8_8_;
        puVar121[-3] = auVar143._8_8_;
        puVar121[-4] = auVar152._0_8_;
        auVar170._8_8_ = auVar178._8_8_;
        puVar121[-1] = auVar170._8_8_;
        puVar121[-2] = auVar178._0_8_;
        auVar143._0_8_ = NEON_sqxtun(auVar152._0_8_,auVar212,4);
        auVar152 = NEON_sqxtun2(auVar143,auVar221,4);
        auVar170._0_8_ = NEON_sqxtun(auVar178._0_8_,auVar230,4);
        auVar178 = NEON_sqxtun2(auVar170,auVar239,4);
        puVar121[1] = auVar152._8_8_;
        *puVar121 = auVar152._0_8_;
        puVar121[3] = auVar178._8_8_;
        puVar121[2] = auVar178._0_8_;
        uVar120 = uVar120 + 0x20;
        pfVar123 = pfVar123 + 0x20;
        puVar121 = puVar121 + 8;
      } while ((long)uVar120 <= (long)(int)(uVar113 - 0x20));
    }
    uVar118 = (uint)uVar120;
    if ((int)uVar118 <= (int)(uVar113 - 8)) {
      uVar125 = uVar120 & 0xffffffff;
      pfVar123 = pfVar114 + (uVar120 & 0xffffffff) + 4;
      puVar121 = (undefined8 *)(lVar124 + (uVar120 & 0xffffffff) * 2);
      do {
        auVar144._0_4_ = pfVar123[-4] * fVar127;
        auVar144._4_4_ = pfVar123[-3] * fVar127;
        auVar144._8_4_ = pfVar123[-2] * fVar127;
        auVar144._12_4_ = pfVar123[-1] * fVar127;
        auVar171._0_4_ = *pfVar123 * fVar127;
        auVar171._4_4_ = pfVar123[1] * fVar127;
        auVar171._8_4_ = pfVar123[2] * fVar127;
        auVar171._12_4_ = pfVar123[3] * fVar127;
        auVar63._4_4_ = fVar129;
        auVar63._0_4_ = fVar129;
        auVar63._8_4_ = fVar129;
        auVar63._12_4_ = fVar129;
        auVar152 = NEON_fmax(auVar144,auVar63,4);
        auVar103._4_4_ = fVar128;
        auVar103._0_4_ = fVar128;
        auVar103._8_4_ = fVar128;
        auVar103._12_4_ = fVar128;
        auVar152 = NEON_fmin(auVar152,auVar103,4);
        auVar64._4_4_ = fVar129;
        auVar64._0_4_ = fVar129;
        auVar64._8_4_ = fVar129;
        auVar64._12_4_ = fVar129;
        auVar178 = NEON_fmax(auVar171,auVar64,4);
        auVar104._4_4_ = fVar128;
        auVar104._0_4_ = fVar128;
        auVar104._8_4_ = fVar128;
        auVar104._12_4_ = fVar128;
        auVar178 = NEON_fmin(auVar178,auVar104,4);
        auVar145._0_4_ = auVar152._0_4_ + 12582912.0;
        auVar145._4_4_ = auVar152._4_4_ + 12582912.0;
        auVar145._8_4_ = auVar152._8_4_ + 12582912.0;
        auVar145._12_4_ = auVar152._12_4_ + 12582912.0;
        auVar31._4_4_ = iVar126;
        auVar31._0_4_ = iVar126;
        auVar31._8_4_ = iVar126;
        auVar31._12_4_ = iVar126;
        auVar152 = NEON_sqsub(auVar145,auVar31,4);
        auVar172._0_4_ = auVar178._0_4_ + 12582912.0;
        auVar172._4_4_ = auVar178._4_4_ + 12582912.0;
        auVar172._8_4_ = auVar178._8_4_ + 12582912.0;
        auVar172._12_4_ = auVar178._12_4_ + 12582912.0;
        auVar32._4_4_ = iVar126;
        auVar32._0_4_ = iVar126;
        auVar32._8_4_ = iVar126;
        auVar32._12_4_ = iVar126;
        auVar178 = NEON_sqsub(auVar172,auVar32,4);
        auVar146._8_8_ = auVar152._8_8_;
        auVar146._0_8_ = NEON_sqxtun(auVar152._0_8_,auVar152,4);
        auVar152 = NEON_sqxtun2(auVar146,auVar178,4);
        puVar121[1] = auVar152._8_8_;
        *puVar121 = auVar152._0_8_;
        uVar125 = uVar125 + 8;
        pfVar123 = pfVar123 + 8;
        puVar121 = puVar121 + 2;
      } while ((long)uVar125 <= (long)(int)(uVar113 - 8));
      uVar118 = (uint)uVar125;
    }
    if (uVar118 != uVar113) {
      lVar122 = (long)(int)uVar113 * 4 + (ulong)uVar118 * -4;
      pfVar114 = pfVar114 + uVar118;
      puVar115 = (undefined2 *)(lVar124 + (ulong)uVar118 * 2);
      do {
        fVar131 = fVar127 * *pfVar114;
        fVar130 = fVar128;
        if (fVar131 <= fVar128) {
          fVar130 = fVar131;
        }
        fVar132 = fVar129;
        if (fVar129 <= fVar131) {
          fVar132 = (float)(int)fVar130;
        }
        uVar120 = (long)fVar132 + (long)param_5 &
                  ((long)fVar132 + (long)param_5 >> 0x3f ^ 0xffffffffffffffffU);
        if (0xfffe < (long)uVar120) {
          uVar120 = 0xffff;
        }
        *puVar115 = (short)uVar120;
        lVar122 = lVar122 + -4;
        pfVar114 = pfVar114 + 1;
        puVar115 = puVar115 + 1;
      } while (lVar122 != 0);
    }
  }
  else if (iVar126 == 6) {
    lVar124 = *(long *)(*param_1 + 0x40);
    iVar126 = 0x4b400000 - param_5;
    fVar127 = 1.0 / param_2;
    fVar129 = (float)-(long)param_5;
    fVar128 = (float)(0xff - (long)param_5);
    if ((int)uVar113 < 0x20) {
      uVar120 = 0;
    }
    else {
      uVar120 = 0;
      pfVar123 = pfVar114 + 0x10;
      do {
        auVar155._0_4_ = pfVar123[-0x10] * fVar127;
        auVar155._4_4_ = pfVar123[-0xf] * fVar127;
        auVar155._8_4_ = pfVar123[-0xe] * fVar127;
        auVar155._12_4_ = pfVar123[-0xd] * fVar127;
        auVar180._0_4_ = pfVar123[-0xc] * fVar127;
        auVar180._4_4_ = pfVar123[-0xb] * fVar127;
        auVar180._8_4_ = pfVar123[-10] * fVar127;
        auVar180._12_4_ = pfVar123[-9] * fVar127;
        auVar193._0_4_ = pfVar123[-8] * fVar127;
        auVar193._4_4_ = pfVar123[-7] * fVar127;
        auVar193._8_4_ = pfVar123[-6] * fVar127;
        auVar193._12_4_ = pfVar123[-5] * fVar127;
        auVar204._0_4_ = pfVar123[-4] * fVar127;
        auVar204._4_4_ = pfVar123[-3] * fVar127;
        auVar204._8_4_ = pfVar123[-2] * fVar127;
        auVar204._12_4_ = pfVar123[-1] * fVar127;
        auVar214._0_4_ = *pfVar123 * fVar127;
        auVar214._4_4_ = pfVar123[1] * fVar127;
        auVar214._8_4_ = pfVar123[2] * fVar127;
        auVar214._12_4_ = pfVar123[3] * fVar127;
        auVar223._0_4_ = pfVar123[4] * fVar127;
        auVar223._4_4_ = pfVar123[5] * fVar127;
        auVar223._8_4_ = pfVar123[6] * fVar127;
        auVar223._12_4_ = pfVar123[7] * fVar127;
        auVar232._0_4_ = pfVar123[8] * fVar127;
        auVar232._4_4_ = pfVar123[9] * fVar127;
        auVar232._8_4_ = pfVar123[10] * fVar127;
        auVar232._12_4_ = pfVar123[0xb] * fVar127;
        auVar241._0_4_ = pfVar123[0xc] * fVar127;
        auVar241._4_4_ = pfVar123[0xd] * fVar127;
        auVar241._8_4_ = pfVar123[0xe] * fVar127;
        auVar241._12_4_ = pfVar123[0xf] * fVar127;
        auVar55._4_4_ = fVar129;
        auVar55._0_4_ = fVar129;
        auVar55._8_4_ = fVar129;
        auVar55._12_4_ = fVar129;
        auVar152 = NEON_fmax(auVar155,auVar55,4);
        auVar95._4_4_ = fVar128;
        auVar95._0_4_ = fVar128;
        auVar95._8_4_ = fVar128;
        auVar95._12_4_ = fVar128;
        auVar152 = NEON_fmin(auVar152,auVar95,4);
        auVar56._4_4_ = fVar129;
        auVar56._0_4_ = fVar129;
        auVar56._8_4_ = fVar129;
        auVar56._12_4_ = fVar129;
        auVar178 = NEON_fmax(auVar180,auVar56,4);
        auVar96._4_4_ = fVar128;
        auVar96._0_4_ = fVar128;
        auVar96._8_4_ = fVar128;
        auVar96._12_4_ = fVar128;
        auVar178 = NEON_fmin(auVar178,auVar96,4);
        auVar57._4_4_ = fVar129;
        auVar57._0_4_ = fVar129;
        auVar57._8_4_ = fVar129;
        auVar57._12_4_ = fVar129;
        auVar191 = NEON_fmax(auVar193,auVar57,4);
        auVar97._4_4_ = fVar128;
        auVar97._0_4_ = fVar128;
        auVar97._8_4_ = fVar128;
        auVar97._12_4_ = fVar128;
        auVar191 = NEON_fmin(auVar191,auVar97,4);
        auVar58._4_4_ = fVar129;
        auVar58._0_4_ = fVar129;
        auVar58._8_4_ = fVar129;
        auVar58._12_4_ = fVar129;
        auVar202 = NEON_fmax(auVar204,auVar58,4);
        auVar98._4_4_ = fVar128;
        auVar98._0_4_ = fVar128;
        auVar98._8_4_ = fVar128;
        auVar98._12_4_ = fVar128;
        auVar202 = NEON_fmin(auVar202,auVar98,4);
        auVar59._4_4_ = fVar129;
        auVar59._0_4_ = fVar129;
        auVar59._8_4_ = fVar129;
        auVar59._12_4_ = fVar129;
        auVar212 = NEON_fmax(auVar214,auVar59,4);
        auVar99._4_4_ = fVar128;
        auVar99._0_4_ = fVar128;
        auVar99._8_4_ = fVar128;
        auVar99._12_4_ = fVar128;
        auVar212 = NEON_fmin(auVar212,auVar99,4);
        auVar60._4_4_ = fVar129;
        auVar60._0_4_ = fVar129;
        auVar60._8_4_ = fVar129;
        auVar60._12_4_ = fVar129;
        auVar221 = NEON_fmax(auVar223,auVar60,4);
        auVar100._4_4_ = fVar128;
        auVar100._0_4_ = fVar128;
        auVar100._8_4_ = fVar128;
        auVar100._12_4_ = fVar128;
        auVar221 = NEON_fmin(auVar221,auVar100,4);
        auVar61._4_4_ = fVar129;
        auVar61._0_4_ = fVar129;
        auVar61._8_4_ = fVar129;
        auVar61._12_4_ = fVar129;
        auVar230 = NEON_fmax(auVar232,auVar61,4);
        auVar101._4_4_ = fVar128;
        auVar101._0_4_ = fVar128;
        auVar101._8_4_ = fVar128;
        auVar101._12_4_ = fVar128;
        auVar230 = NEON_fmin(auVar230,auVar101,4);
        auVar62._4_4_ = fVar129;
        auVar62._0_4_ = fVar129;
        auVar62._8_4_ = fVar129;
        auVar62._12_4_ = fVar129;
        auVar239 = NEON_fmax(auVar241,auVar62,4);
        auVar102._4_4_ = fVar128;
        auVar102._0_4_ = fVar128;
        auVar102._8_4_ = fVar128;
        auVar102._12_4_ = fVar128;
        auVar239 = NEON_fmin(auVar239,auVar102,4);
        auVar156._0_4_ = auVar152._0_4_ + 12582912.0;
        auVar156._4_4_ = auVar152._4_4_ + 12582912.0;
        auVar156._8_4_ = auVar152._8_4_ + 12582912.0;
        auVar156._12_4_ = auVar152._12_4_ + 12582912.0;
        auVar23._4_4_ = iVar126;
        auVar23._0_4_ = iVar126;
        auVar23._8_4_ = iVar126;
        auVar23._12_4_ = iVar126;
        auVar152 = NEON_sqsub(auVar156,auVar23,4);
        auVar181._0_4_ = auVar178._0_4_ + 12582912.0;
        auVar181._4_4_ = auVar178._4_4_ + 12582912.0;
        auVar181._8_4_ = auVar178._8_4_ + 12582912.0;
        auVar181._12_4_ = auVar178._12_4_ + 12582912.0;
        auVar24._4_4_ = iVar126;
        auVar24._0_4_ = iVar126;
        auVar24._8_4_ = iVar126;
        auVar24._12_4_ = iVar126;
        auVar178 = NEON_sqsub(auVar181,auVar24,4);
        auVar194._0_4_ = auVar191._0_4_ + 12582912.0;
        auVar194._4_4_ = auVar191._4_4_ + 12582912.0;
        auVar194._8_4_ = auVar191._8_4_ + 12582912.0;
        auVar194._12_4_ = auVar191._12_4_ + 12582912.0;
        auVar25._4_4_ = iVar126;
        auVar25._0_4_ = iVar126;
        auVar25._8_4_ = iVar126;
        auVar25._12_4_ = iVar126;
        auVar191 = NEON_sqsub(auVar194,auVar25,4);
        auVar205._0_4_ = auVar202._0_4_ + 12582912.0;
        auVar205._4_4_ = auVar202._4_4_ + 12582912.0;
        auVar205._8_4_ = auVar202._8_4_ + 12582912.0;
        auVar205._12_4_ = auVar202._12_4_ + 12582912.0;
        auVar26._4_4_ = iVar126;
        auVar26._0_4_ = iVar126;
        auVar26._8_4_ = iVar126;
        auVar26._12_4_ = iVar126;
        auVar202 = NEON_sqsub(auVar205,auVar26,4);
        auVar215._0_4_ = auVar212._0_4_ + 12582912.0;
        auVar215._4_4_ = auVar212._4_4_ + 12582912.0;
        auVar215._8_4_ = auVar212._8_4_ + 12582912.0;
        auVar215._12_4_ = auVar212._12_4_ + 12582912.0;
        auVar27._4_4_ = iVar126;
        auVar27._0_4_ = iVar126;
        auVar27._8_4_ = iVar126;
        auVar27._12_4_ = iVar126;
        auVar212 = NEON_sqsub(auVar215,auVar27,4);
        auVar224._0_4_ = auVar221._0_4_ + 12582912.0;
        auVar224._4_4_ = auVar221._4_4_ + 12582912.0;
        auVar224._8_4_ = auVar221._8_4_ + 12582912.0;
        auVar224._12_4_ = auVar221._12_4_ + 12582912.0;
        auVar28._4_4_ = iVar126;
        auVar28._0_4_ = iVar126;
        auVar28._8_4_ = iVar126;
        auVar28._12_4_ = iVar126;
        auVar221 = NEON_sqsub(auVar224,auVar28,4);
        auVar233._0_4_ = auVar230._0_4_ + 12582912.0;
        auVar233._4_4_ = auVar230._4_4_ + 12582912.0;
        auVar233._8_4_ = auVar230._8_4_ + 12582912.0;
        auVar233._12_4_ = auVar230._12_4_ + 12582912.0;
        auVar29._4_4_ = iVar126;
        auVar29._0_4_ = iVar126;
        auVar29._8_4_ = iVar126;
        auVar29._12_4_ = iVar126;
        auVar230 = NEON_sqsub(auVar233,auVar29,4);
        auVar242._0_4_ = auVar239._0_4_ + 12582912.0;
        auVar242._4_4_ = auVar239._4_4_ + 12582912.0;
        auVar242._8_4_ = auVar239._8_4_ + 12582912.0;
        auVar242._12_4_ = auVar239._12_4_ + 12582912.0;
        auVar30._4_4_ = iVar126;
        auVar30._0_4_ = iVar126;
        auVar30._8_4_ = iVar126;
        auVar30._12_4_ = iVar126;
        auVar239 = NEON_sqsub(auVar242,auVar30,4);
        auVar157._8_8_ = auVar152._8_8_;
        auVar157._0_8_ = NEON_sqxtn(auVar152._0_8_,auVar152,4);
        auVar152 = NEON_sqxtn2(auVar157,auVar178,4);
        auVar182._8_8_ = auVar178._8_8_;
        auVar182._0_8_ = NEON_sqxtn(auVar178._0_8_,auVar191,4);
        auVar178 = NEON_sqxtn2(auVar182,auVar202,4);
        auVar195._8_8_ = auVar191._8_8_;
        auVar195._0_8_ = NEON_sqxtn(auVar191._0_8_,auVar212,4);
        auVar191 = NEON_sqxtn2(auVar195,auVar221,4);
        auVar206._8_8_ = auVar202._8_8_;
        auVar206._0_8_ = NEON_sqxtn(auVar202._0_8_,auVar230,4);
        auVar202 = NEON_sqxtn2(auVar206,auVar239,4);
        uVar133 = NEON_sqxtun(auVar152._0_8_,auVar152,2);
        puVar121 = (undefined8 *)(lVar124 + uVar120);
        uVar161 = NEON_sqxtun(auVar178._0_8_,auVar178,2);
        *puVar121 = uVar133;
        puVar121[1] = uVar161;
        uVar133 = NEON_sqxtun(uVar133,auVar191,2);
        uVar161 = NEON_sqxtun(uVar161,auVar202,2);
        puVar121[2] = uVar133;
        puVar121[3] = uVar161;
        uVar120 = uVar120 + 0x20;
        pfVar123 = pfVar123 + 0x20;
      } while ((long)uVar120 <= (long)(int)(uVar113 - 0x20));
    }
    uVar118 = (uint)uVar120;
    if ((int)uVar118 <= (int)(uVar113 - 8)) {
      uVar125 = uVar120 & 0xffffffff;
      pfVar123 = pfVar114 + (uVar120 & 0xffffffff) + 4;
      do {
        auVar158._0_4_ = pfVar123[-4] * fVar127;
        auVar158._4_4_ = pfVar123[-3] * fVar127;
        auVar158._8_4_ = pfVar123[-2] * fVar127;
        auVar158._12_4_ = pfVar123[-1] * fVar127;
        auVar183._0_4_ = *pfVar123 * fVar127;
        auVar183._4_4_ = pfVar123[1] * fVar127;
        auVar183._8_4_ = pfVar123[2] * fVar127;
        auVar183._12_4_ = pfVar123[3] * fVar127;
        auVar53._4_4_ = fVar129;
        auVar53._0_4_ = fVar129;
        auVar53._8_4_ = fVar129;
        auVar53._12_4_ = fVar129;
        auVar152 = NEON_fmax(auVar158,auVar53,4);
        auVar93._4_4_ = fVar128;
        auVar93._0_4_ = fVar128;
        auVar93._8_4_ = fVar128;
        auVar93._12_4_ = fVar128;
        auVar152 = NEON_fmin(auVar152,auVar93,4);
        auVar54._4_4_ = fVar129;
        auVar54._0_4_ = fVar129;
        auVar54._8_4_ = fVar129;
        auVar54._12_4_ = fVar129;
        auVar178 = NEON_fmax(auVar183,auVar54,4);
        auVar94._4_4_ = fVar128;
        auVar94._0_4_ = fVar128;
        auVar94._8_4_ = fVar128;
        auVar94._12_4_ = fVar128;
        auVar178 = NEON_fmin(auVar178,auVar94,4);
        auVar159._0_4_ = auVar152._0_4_ + 12582912.0;
        auVar159._4_4_ = auVar152._4_4_ + 12582912.0;
        auVar159._8_4_ = auVar152._8_4_ + 12582912.0;
        auVar159._12_4_ = auVar152._12_4_ + 12582912.0;
        auVar21._4_4_ = iVar126;
        auVar21._0_4_ = iVar126;
        auVar21._8_4_ = iVar126;
        auVar21._12_4_ = iVar126;
        auVar152 = NEON_sqsub(auVar159,auVar21,4);
        auVar184._0_4_ = auVar178._0_4_ + 12582912.0;
        auVar184._4_4_ = auVar178._4_4_ + 12582912.0;
        auVar184._8_4_ = auVar178._8_4_ + 12582912.0;
        auVar184._12_4_ = auVar178._12_4_ + 12582912.0;
        auVar22._4_4_ = iVar126;
        auVar22._0_4_ = iVar126;
        auVar22._8_4_ = iVar126;
        auVar22._12_4_ = iVar126;
        auVar178 = NEON_sqsub(auVar184,auVar22,4);
        auVar160._8_8_ = auVar152._8_8_;
        auVar160._0_8_ = NEON_sqxtn(auVar152._0_8_,auVar152,4);
        auVar152 = NEON_sqxtn2(auVar160,auVar178,4);
        uVar133 = NEON_sqxtun(auVar152._0_8_,auVar152,2);
        *(undefined8 *)(lVar124 + uVar125) = uVar133;
        uVar125 = uVar125 + 8;
        pfVar123 = pfVar123 + 8;
      } while ((long)uVar125 <= (long)(int)(uVar113 - 8));
      uVar118 = (uint)uVar125;
    }
    if (uVar118 != uVar113) {
      lVar122 = (long)(int)uVar113 * 4 + (ulong)uVar118 * -4;
      pfVar114 = pfVar114 + uVar118;
      puVar116 = (undefined1 *)(lVar124 + (ulong)uVar118);
      do {
        fVar131 = fVar127 * *pfVar114;
        fVar130 = fVar128;
        if (fVar131 <= fVar128) {
          fVar130 = fVar131;
        }
        fVar132 = fVar129;
        if (fVar129 <= fVar131) {
          fVar132 = (float)(int)fVar130;
        }
        uVar120 = (long)fVar132 + (long)param_5 &
                  ((long)fVar132 + (long)param_5 >> 0x3f ^ 0xffffffffffffffffU);
        if (0xfe < (long)uVar120) {
          uVar120 = 0xff;
        }
        *puVar116 = (char)uVar120;
        lVar122 = lVar122 + -4;
        pfVar114 = pfVar114 + 1;
        puVar116 = puVar116 + 1;
      } while (lVar122 != 0);
    }
  }
  else if ((iVar126 == 5) && (uVar113 != 0)) {
    fVar127 = (float)((long)param_5 ^ 0x7fffffffffffffff);
    lVar124 = (long)(int)uVar113 << 2;
    plVar117 = *(long **)(*param_1 + 0x40);
    do {
      fVar128 = (1.0 / param_2) * *pfVar114;
      fVar129 = fVar127;
      if (fVar128 <= fVar127) {
        fVar129 = fVar128;
      }
      fVar130 = (float)(-0x8000000000000000 - (long)param_5);
      if ((float)(-0x8000000000000000 - (long)param_5) <= fVar128) {
        fVar130 = (float)(int)fVar129;
      }
      *plVar117 = (long)fVar130 + (long)param_5;
      lVar124 = lVar124 + -4;
      pfVar114 = pfVar114 + 1;
      plVar117 = plVar117 + 1;
    } while (lVar124 != 0);
  }
  lVar124 = *param_1;
  *(int *)(lVar124 + 0x50) = param_5;
  *(float *)(lVar124 + 0x4c) = param_2;
  return;
}



/* Entry: 109c1be70; end: 109c1becf;  */

void FUN_109c1be70(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  (*(code *)**(undefined8 **)*param_2)(param_1,(undefined8 *)*param_2,*param_3 + 8,1);
  FUN_109c1b238(param_3,*param_1);
  return;
}



/* Entry: 109c1bed0; end: 109c1c05f;  */

void FUN_109c1bed0(long *param_1,undefined8 *param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  long lVar8;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  (**(code **)*param_2)(param_1,param_2,param_3 + 8,*(undefined1 *)(param_3 + 0x48));
  lVar8 = *param_1;
  if (lVar8 == 0) {
    puVar7 = &UNK_10f5a3857;
  }
  else if (*(long *)(lVar8 + 0x40) == 0) {
    puVar7 = &UNK_10f5a3869;
  }
  else {
    bVar2 = *(byte *)(lVar8 + 0x48);
    uVar1 = *(uint *)(lVar8 + 8) & ((int)*(uint *)(lVar8 + 8) >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar1) {
      uVar1 = 5;
    }
    uStack_38 = 0xf5a382f;
    FUN_109c60fbc(&UNK_10f5a382f,0x1a,lVar8 + 0xc,uVar1);
    if (bVar2 < 9) {
      uStack_34 = *(undefined4 *)(&UNK_10e039b94 + (ulong)bVar2 * 4);
    }
    else {
      uStack_34 = 4;
    }
    iVar5 = 0xf5a384a;
    FUN_109c60fbc(&UNK_10f5a384a,0xc,&uStack_38,2);
    bVar2 = *(byte *)(param_3 + 0x48);
    uVar1 = *(uint *)(param_3 + 8) & ((int)*(uint *)(param_3 + 8) >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar1) {
      uVar1 = 5;
    }
    uVar3 = 0xf5a382f;
    FUN_109c60fbc(&UNK_10f5a382f,0x1a,param_3 + 0xc,uVar1);
    uStack_38 = uVar3;
    if (bVar2 < 9) {
      uStack_34 = *(undefined4 *)(&UNK_10e039b94 + (ulong)bVar2 * 4);
    }
    else {
      uStack_34 = 4;
    }
    iVar6 = 0xf5a384a;
    FUN_109c60fbc(&UNK_10f5a384a,0xc,&uStack_38,2);
    if (iVar5 == iVar6) {
      FUN_109c11af8(*param_1,param_3);
      lVar8 = *param_1;
      *(undefined4 *)(lVar8 + 0x3c) = *(undefined4 *)(param_3 + 0x3c);
      *(undefined4 *)(lVar8 + 0x4c) = *(undefined4 *)(param_3 + 0x4c);
      *(undefined4 *)(lVar8 + 0x50) = *(undefined4 *)(param_3 + 0x50);
      return;
    }
    puVar7 = &UNK_10f5a3888;
  }
  func_0x000105688514(puVar7);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109c1c04c);
  (*pcVar4)();
}



/* Entry: 109c1c060; end: 109c1c087;  */

void FUN_109c1c060(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_109ba99b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 109c1c088; end: 109c1c143;  */

void FUN_109c1c088(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 uStack_41;
  undefined1 **ppuStack_40;
  undefined1 *puStack_38;
  
  if (*(int *)(param_1 + 0x88) == 1) {
    if (lRam00000001138332c8 != -1) {
      puStack_38 = &uStack_41;
      ppuStack_40 = &puStack_38;
      __ZNSt3__111__call_onceERVmPvPFvS2_E(0x1138332c8,&ppuStack_40,FUN_109c1c18c);
    }
    iVar1 = iRam00000001138332d0;
    if (iRam00000001138332d0 != 0) {
      uVar2 = 8;
      __Znwm(8);
      FUN_109ba991c();
      FUN_109c1c060(param_1 + 0x80,uVar2);
      *(int *)(**(long **)(param_1 + 0x80) + 0x30) = iVar1;
    }
  }
  return;
}



/* Entry: 109c1c144; end: 109c1c157;  */

void FUN_109c1c144(undefined8 param_1,ulong param_2)

{
  undefined1 *puVar1;
  undefined8 ***pppuVar2;
  code *pcVar3;
  int iVar4;
  undefined8 ****ppppuVar6;
  long lVar7;
  undefined1 **ppuVar8;
  undefined1 **ppuVar9;
  ulong uVar10;
  undefined1 **ppuVar11;
  undefined1 **ppuVar12;
  undefined8 ****ppppuVar13;
  undefined1 *puStack_5b0;
  ulong uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 ***pppuStack_598;
  undefined8 ***pppuStack_590;
  undefined1 auStack_588 [1024];
  undefined8 **appuStack_188 [32];
  long lStack_88;
  int iVar5;
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104c4f740();
  ppuVar8 = &puStack_5b0;
  ppuVar11 = &puStack_5b0;
  iVar4 = (int)&puStack_5b0;
  ppuVar9 = &puStack_5b0;
  ppuVar12 = &puStack_5b0;
  iVar5 = (int)&puStack_5b0;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _uname(auStack_588);
  ppppuVar13 = (undefined8 ****)appuStack_188;
  pppuStack_598 = ppppuVar13;
  _strlen();
  ppppuVar6 = &pppuStack_598;
  pppuStack_590 = ppppuVar13;
  FUN_1099a2158(ppppuVar6,"0123456789",0);
  pppuVar2 = pppuStack_598;
  if ((ppppuVar6 == (undefined8 ****)0xffffffffffffffff) ||
     (uVar10 = (long)pppuStack_590 - (long)ppppuVar6, pppuStack_590 < ppppuVar6 || uVar10 == 0)) {
LAB_109c1c224:
    uRam00000001138332d0 = 0;
LAB_109c1c22c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    lVar7 = (long)pppuStack_598 + (long)ppppuVar6;
    _memchr(lVar7,0x2c,uVar10);
    ppppuVar13 = (undefined8 ****)(lVar7 - (long)pppuVar2);
    if (lVar7 == 0 || ppppuVar13 == (undefined8 ****)0xffffffffffffffff) goto LAB_109c1c224;
    if ((ulong)((long)ppppuVar13 - (long)ppppuVar6) <= uVar10) {
      uVar10 = (long)ppppuVar13 - (long)ppppuVar6;
    }
    if (uVar10 < 0x7ffffffffffffff8) {
      if (uVar10 < 0x17) {
        uStack_5a0 = CONCAT17((char)uVar10,(undefined7)uStack_5a0);
        if (uVar10 != 0) goto LAB_109c1c2bc;
      }
      else {
        puVar1 = (undefined1 *)0x19;
        if ((uVar10 | 7) != 0x17) {
          puVar1 = (undefined1 *)((uVar10 | 7) + 1);
        }
        ppuVar8 = (undefined1 **)puVar1;
        __Znwm();
        uStack_5a0 = (ulong)puVar1 | 0x8000000000000000;
        puStack_5b0 = (undefined1 *)ppuVar8;
        uStack_5a8 = uVar10;
LAB_109c1c2bc:
        _memmove(ppuVar8,(long)pppuVar2 + (long)ppppuVar6,uVar10);
        ppuVar11 = ppuVar8;
      }
      *(undefined1 *)((long)ppuVar11 + uVar10) = 0;
      __ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi
                (&puStack_5b0,0,10);
      if ((long)uStack_5a0 < 0) {
        __ZdlPv(puStack_5b0);
      }
      pppuVar2 = pppuStack_598;
      if (pppuStack_590 <= ppppuVar13) {
        FUN_109262df8(&UNK_10f2fca6e);
        goto LAB_109c1c3d4;
      }
      ppppuVar13 = (undefined8 ****)((long)ppppuVar13 + 1);
      uVar10 = (long)pppuStack_590 - (long)ppppuVar13;
      if (0x7ffffffffffffff7 < uVar10) {
        func_0x000104c4f6b8();
        goto LAB_109c1c3d4;
      }
      if (uVar10 < 0x17) {
        uStack_5a0 = CONCAT17((char)uVar10,(undefined7)uStack_5a0);
        if ((undefined8 ****)pppuStack_590 != ppppuVar13) goto LAB_109c1c358;
      }
      else {
        puVar1 = (undefined1 *)0x19;
        if ((uVar10 | 7) != 0x17) {
          puVar1 = (undefined1 *)((uVar10 | 7) + 1);
        }
        ppuVar9 = (undefined1 **)puVar1;
        __Znwm();
        uStack_5a0 = (ulong)puVar1 | 0x8000000000000000;
        puStack_5b0 = (undefined1 *)ppuVar9;
        uStack_5a8 = uVar10;
LAB_109c1c358:
        _memmove(ppuVar9,(long)pppuVar2 + (long)ppppuVar13,uVar10);
        ppuVar12 = ppuVar9;
      }
      *(undefined1 *)((long)ppuVar12 + uVar10) = 0;
      __ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi
                (&puStack_5b0,0,10);
      if ((long)uStack_5a0 < 0) {
        __ZdlPv(puStack_5b0);
      }
      uRam00000001138332d0 = 0;
      if (iVar5 < 2) {
        uRam00000001138332d0 = (uint)(iVar4 == 0xb);
      }
      if (iVar4 < 0xb) {
        uRam00000001138332d0 = 1;
      }
      goto LAB_109c1c22c;
    }
  }
  func_0x000104c4f6b8();
LAB_109c1c3d4:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109c1c3d8);
  (*pcVar3)();
}



/* Entry: 109c1c158; end: 109c1c18b;  */

void FUN_109c1c158(undefined8 param_1,ulong param_2)

{
  undefined1 *puVar1;
  undefined8 ***pppuVar2;
  code *pcVar3;
  int iVar4;
  undefined8 ****ppppuVar6;
  long lVar7;
  undefined1 **ppuVar8;
  undefined1 **ppuVar9;
  ulong uVar10;
  undefined1 **ppuVar11;
  undefined1 **ppuVar12;
  undefined8 ****ppppuVar13;
  undefined1 *puStack_5a0;
  ulong uStack_598;
  undefined8 uStack_590;
  undefined8 ***pppuStack_588;
  undefined8 ***pppuStack_580;
  undefined1 auStack_578 [1024];
  undefined8 **appuStack_178 [32];
  long lStack_78;
  int iVar5;
  
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104c4f740();
  ppuVar8 = &puStack_5a0;
  ppuVar11 = &puStack_5a0;
  iVar4 = (int)&puStack_5a0;
  ppuVar9 = &puStack_5a0;
  ppuVar12 = &puStack_5a0;
  iVar5 = (int)&puStack_5a0;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _uname(auStack_578);
  ppppuVar13 = (undefined8 ****)appuStack_178;
  pppuStack_588 = ppppuVar13;
  _strlen();
  ppppuVar6 = &pppuStack_588;
  pppuStack_580 = ppppuVar13;
  FUN_1099a2158(ppppuVar6,"0123456789",0);
  pppuVar2 = pppuStack_588;
  if ((ppppuVar6 == (undefined8 ****)0xffffffffffffffff) ||
     (uVar10 = (long)pppuStack_580 - (long)ppppuVar6, pppuStack_580 < ppppuVar6 || uVar10 == 0)) {
LAB_109c1c224:
    uRam00000001138332d0 = 0;
LAB_109c1c22c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    lVar7 = (long)pppuStack_588 + (long)ppppuVar6;
    _memchr(lVar7,0x2c,uVar10);
    ppppuVar13 = (undefined8 ****)(lVar7 - (long)pppuVar2);
    if (lVar7 == 0 || ppppuVar13 == (undefined8 ****)0xffffffffffffffff) goto LAB_109c1c224;
    if ((ulong)((long)ppppuVar13 - (long)ppppuVar6) <= uVar10) {
      uVar10 = (long)ppppuVar13 - (long)ppppuVar6;
    }
    if (uVar10 < 0x7ffffffffffffff8) {
      if (uVar10 < 0x17) {
        uStack_590 = CONCAT17((char)uVar10,(undefined7)uStack_590);
        if (uVar10 != 0) goto LAB_109c1c2bc;
      }
      else {
        puVar1 = (undefined1 *)0x19;
        if ((uVar10 | 7) != 0x17) {
          puVar1 = (undefined1 *)((uVar10 | 7) + 1);
        }
        ppuVar8 = (undefined1 **)puVar1;
        __Znwm();
        uStack_590 = (ulong)puVar1 | 0x8000000000000000;
        puStack_5a0 = (undefined1 *)ppuVar8;
        uStack_598 = uVar10;
LAB_109c1c2bc:
        _memmove(ppuVar8,(long)pppuVar2 + (long)ppppuVar6,uVar10);
        ppuVar11 = ppuVar8;
      }
      *(undefined1 *)((long)ppuVar11 + uVar10) = 0;
      __ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi
                (&puStack_5a0,0,10);
      if ((long)uStack_590 < 0) {
        __ZdlPv(puStack_5a0);
      }
      pppuVar2 = pppuStack_588;
      if (pppuStack_580 <= ppppuVar13) {
        FUN_109262df8(&UNK_10f2fca6e);
        goto LAB_109c1c3d4;
      }
      ppppuVar13 = (undefined8 ****)((long)ppppuVar13 + 1);
      uVar10 = (long)pppuStack_580 - (long)ppppuVar13;
      if (0x7ffffffffffffff7 < uVar10) {
        func_0x000104c4f6b8();
        goto LAB_109c1c3d4;
      }
      if (uVar10 < 0x17) {
        uStack_590 = CONCAT17((char)uVar10,(undefined7)uStack_590);
        if ((undefined8 ****)pppuStack_580 != ppppuVar13) goto LAB_109c1c358;
      }
      else {
        puVar1 = (undefined1 *)0x19;
        if ((uVar10 | 7) != 0x17) {
          puVar1 = (undefined1 *)((uVar10 | 7) + 1);
        }
        ppuVar9 = (undefined1 **)puVar1;
        __Znwm();
        uStack_590 = (ulong)puVar1 | 0x8000000000000000;
        puStack_5a0 = (undefined1 *)ppuVar9;
        uStack_598 = uVar10;
LAB_109c1c358:
        _memmove(ppuVar9,(long)pppuVar2 + (long)ppppuVar13,uVar10);
        ppuVar12 = ppuVar9;
      }
      *(undefined1 *)((long)ppuVar12 + uVar10) = 0;
      __ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi
                (&puStack_5a0,0,10);
      if ((long)uStack_590 < 0) {
        __ZdlPv(puStack_5a0);
      }
      uRam00000001138332d0 = 0;
      if (iVar5 < 2) {
        uRam00000001138332d0 = (uint)(iVar4 == 0xb);
      }
      if (iVar4 < 0xb) {
        uRam00000001138332d0 = 1;
      }
      goto LAB_109c1c22c;
    }
  }
  func_0x000104c4f6b8();
LAB_109c1c3d4:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109c1c3d8);
  (*pcVar3)();
}



/* Entry: 109c1c18c; end: 109c1c427;  */

void FUN_109c1c18c(void)

{
  undefined1 *puVar1;
  undefined8 ***pppuVar2;
  code *pcVar3;
  int iVar4;
  undefined8 ****ppppuVar6;
  long lVar7;
  undefined1 **ppuVar8;
  undefined1 **ppuVar9;
  ulong uVar10;
  undefined1 **ppuVar11;
  undefined1 **ppuVar12;
  undefined8 ****ppppuVar13;
  undefined1 *puStack_580;
  ulong uStack_578;
  undefined8 uStack_570;
  undefined8 ***pppuStack_568;
  undefined8 ***pppuStack_560;
  undefined1 auStack_558 [1024];
  undefined8 **appuStack_158 [32];
  long lStack_58;
  int iVar5;
  
  ppuVar8 = &puStack_580;
  ppuVar11 = &puStack_580;
  iVar4 = (int)&puStack_580;
  ppuVar9 = &puStack_580;
  ppuVar12 = &puStack_580;
  iVar5 = (int)&puStack_580;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _uname(auStack_558);
  ppppuVar13 = (undefined8 ****)appuStack_158;
  pppuStack_568 = ppppuVar13;
  _strlen();
  ppppuVar6 = &pppuStack_568;
  pppuStack_560 = ppppuVar13;
  FUN_1099a2158(ppppuVar6,"0123456789",0);
  pppuVar2 = pppuStack_568;
  if ((ppppuVar6 == (undefined8 ****)0xffffffffffffffff) ||
     (uVar10 = (long)pppuStack_560 - (long)ppppuVar6, pppuStack_560 < ppppuVar6 || uVar10 == 0)) {
LAB_109c1c224:
    uRam00000001138332d0 = 0;
LAB_109c1c22c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    lVar7 = (long)pppuStack_568 + (long)ppppuVar6;
    _memchr(lVar7,0x2c,uVar10);
    ppppuVar13 = (undefined8 ****)(lVar7 - (long)pppuVar2);
    if (lVar7 == 0 || ppppuVar13 == (undefined8 ****)0xffffffffffffffff) goto LAB_109c1c224;
    if ((ulong)((long)ppppuVar13 - (long)ppppuVar6) <= uVar10) {
      uVar10 = (long)ppppuVar13 - (long)ppppuVar6;
    }
    if (uVar10 < 0x7ffffffffffffff8) {
      if (uVar10 < 0x17) {
        uStack_570 = CONCAT17((char)uVar10,(undefined7)uStack_570);
        if (uVar10 != 0) goto LAB_109c1c2bc;
      }
      else {
        puVar1 = (undefined1 *)0x19;
        if ((uVar10 | 7) != 0x17) {
          puVar1 = (undefined1 *)((uVar10 | 7) + 1);
        }
        ppuVar8 = (undefined1 **)puVar1;
        __Znwm();
        uStack_570 = (ulong)puVar1 | 0x8000000000000000;
        puStack_580 = (undefined1 *)ppuVar8;
        uStack_578 = uVar10;
LAB_109c1c2bc:
        _memmove(ppuVar8,(long)pppuVar2 + (long)ppppuVar6,uVar10);
        ppuVar11 = ppuVar8;
      }
      *(undefined1 *)((long)ppuVar11 + uVar10) = 0;
      __ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi
                (&puStack_580,0,10);
      if ((long)uStack_570 < 0) {
        __ZdlPv(puStack_580);
      }
      pppuVar2 = pppuStack_568;
      if (pppuStack_560 <= ppppuVar13) {
        FUN_109262df8(&UNK_10f2fca6e);
        goto LAB_109c1c3d4;
      }
      ppppuVar13 = (undefined8 ****)((long)ppppuVar13 + 1);
      uVar10 = (long)pppuStack_560 - (long)ppppuVar13;
      if (0x7ffffffffffffff7 < uVar10) {
        func_0x000104c4f6b8();
        goto LAB_109c1c3d4;
      }
      if (uVar10 < 0x17) {
        uStack_570 = CONCAT17((char)uVar10,(undefined7)uStack_570);
        if ((undefined8 ****)pppuStack_560 != ppppuVar13) goto LAB_109c1c358;
      }
      else {
        puVar1 = (undefined1 *)0x19;
        if ((uVar10 | 7) != 0x17) {
          puVar1 = (undefined1 *)((uVar10 | 7) + 1);
        }
        ppuVar9 = (undefined1 **)puVar1;
        __Znwm();
        uStack_570 = (ulong)puVar1 | 0x8000000000000000;
        puStack_580 = (undefined1 *)ppuVar9;
        uStack_578 = uVar10;
LAB_109c1c358:
        _memmove(ppuVar9,(long)pppuVar2 + (long)ppppuVar13,uVar10);
        ppuVar12 = ppuVar9;
      }
      *(undefined1 *)((long)ppuVar12 + uVar10) = 0;
      __ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi
                (&puStack_580,0,10);
      if ((long)uStack_570 < 0) {
        __ZdlPv(puStack_580);
      }
      uRam00000001138332d0 = 0;
      if (iVar5 < 2) {
        uRam00000001138332d0 = (uint)(iVar4 == 0xb);
      }
      if (iVar4 < 0xb) {
        uRam00000001138332d0 = 1;
      }
      goto LAB_109c1c22c;
    }
  }
  func_0x000104c4f6b8();
LAB_109c1c3d4:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109c1c3d8);
  (*pcVar3)();
}



/* Entry: 109c1c428; end: 109c1c5ab;  */

void FUN_109c1c428(undefined8 *param_1,undefined4 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  
  plVar4 = (long *)0x50;
  __Znwm();
  plVar6 = plVar4 + 1;
  *plVar6 = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110b2c0f8;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_FUN_110b2c148;
  plStack_50 = plVar4 + 6;
  *plStack_50 = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  *(undefined4 *)(plVar4 + 9) = param_2;
  *(undefined4 *)((long)plVar4 + 0x4c) = 0;
  lVar5 = 0x28;
  __Znwm();
  plVar4[6] = lVar5;
  plVar4[7] = lVar5;
  plVar4[8] = lVar5 + 0x28;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  func_0x000109c1ce44(&uStack_70);
  *param_1 = plVar7;
  param_1[1] = plVar4;
  if (plVar4[5] == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = plVar4 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar4[4] = (long)plVar7;
    plVar4[5] = (long)plVar4;
  }
  else {
    if (*(long *)(plVar4[5] + 8) != -1) {
      return;
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = plVar4 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar4[4] = (long)plVar7;
    plVar4[5] = (long)plVar4;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar5 = *plVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 != 0) {
    return;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
  return;
}



/* Entry: 109c1c5ac; end: 109c1c5bb;  */

void FUN_109c1c5ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c0f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109c1c5bc; end: 109c1c5db;  */

void FUN_109c1c5bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c0f8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c1c5dc; end: 109c1c5e7;  */

long FUN_109c1c5dc(long param_1)

{
  FUN_109c1cea0(param_1 + 0x30);
  if (*(long *)(param_1 + 0x28) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1 + 0x18;
}



/* Entry: 109c1c5e8; end: 109c1cce7;  */

void FUN_109c1c5e8(long *param_1,long param_2,uint *param_3,uint param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined1 uVar4;
  code *pcVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  uint *puVar21;
  long *plVar22;
  long *plStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = *param_3 & ((int)*param_3 >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar14) {
    uVar14 = 5;
  }
  uVar6 = 0xf5a382f;
  FUN_109c60fbc(&UNK_10f5a382f,0x1a,param_3 + 1,uVar14);
  if (param_4 < 9) {
    uVar12 = *(undefined4 *)(&UNK_10e039b94 + (ulong)param_4 * 4);
  }
  else {
    uVar12 = 4;
  }
  uStack_90 = CONCAT44(uVar12,uVar6);
  iVar7 = 0xf5a384a;
  FUN_109c60fbc(&UNK_10f5a384a,0xc,&uStack_90,2);
  plVar19 = (long *)(param_2 + 0x18);
  plVar20 = (long *)*plVar19;
  plVar22 = *(long **)(param_2 + 0x20);
  if (plVar20 == plVar22) {
    uVar11 = 0x58;
    __Znwm();
    puVar21 = param_3;
    FUN_109c1106c();
    puVar2 = *(undefined8 **)(param_2 + 0x20);
    if (puVar2 < *(undefined8 **)(param_2 + 0x28)) {
      plVar22 = puVar2 + 1;
      *puVar2 = uVar11;
    }
    else {
      lVar16 = (long)puVar2 - *plVar19;
      uVar1 = (lVar16 >> 3) + 1;
      if (uVar1 >> 0x3d != 0) goto LAB_109c1cc9c;
      uVar15 = (long)*(undefined8 **)(param_2 + 0x28) - *plVar19;
      uVar17 = (long)uVar15 >> 2;
      if (uVar17 <= uVar1) {
        uVar17 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar15) {
        uVar17 = 0x1fffffffffffffff;
      }
      plStack_70 = plVar19;
      FUN_109c1ce10();
      lVar18 = *(long *)(param_2 + 0x18);
      puVar2 = (undefined8 *)(uVar17 + lVar16);
      lVar16 = (long)puVar2 - (*(long *)(param_2 + 0x20) - lVar18);
      plVar22 = puVar2 + 1;
      *puVar2 = uVar11;
      _memcpy(lVar16,lVar18);
      uStack_90 = *(ulong *)(param_2 + 0x18);
      *(long *)(param_2 + 0x18) = lVar16;
      *(long **)(param_2 + 0x20) = plVar22;
      uStack_78 = *(undefined8 *)(param_2 + 0x28);
      *(ulong *)(param_2 + 0x28) = uVar17 + (long)puVar21 * 8;
      uStack_88 = uStack_90;
      uStack_80 = uStack_90;
      func_0x000109c1ce44(&uStack_90);
    }
    *(long **)(param_2 + 0x20) = plVar22;
    *(int *)(param_2 + 0x34) = *(int *)(param_2 + 0x34) + iVar7;
    plVar20 = *(long **)(param_2 + 0x18);
  }
  plStack_98 = plVar22;
  if (plVar20 == plVar22) {
LAB_109c1caac:
    lVar16 = *plStack_98;
    bVar3 = *(byte *)(lVar16 + 0x48);
    uVar14 = *(uint *)(lVar16 + 8) & ((int)*(uint *)(lVar16 + 8) >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar14) {
      uVar14 = 5;
    }
    uVar6 = 0xf5a382f;
    FUN_109c60fbc(&UNK_10f5a382f,0x1a,lVar16 + 0xc,uVar14);
    if (bVar3 < 9) {
      uVar12 = *(undefined4 *)(&UNK_10e039b94 + (ulong)bVar3 * 4);
    }
    else {
      uVar12 = 4;
    }
    uStack_90 = CONCAT44(uVar12,uVar6);
    iVar10 = 0xf5a384a;
    FUN_109c60fbc(&UNK_10f5a384a,0xc,&uStack_90,2);
    *(int *)(param_2 + 0x34) = (iVar7 - iVar10) + *(int *)(param_2 + 0x34);
    FUN_109c11d2c(*plStack_98,param_3,param_4);
    plVar19 = *(long **)(param_2 + 0x20);
    plVar22 = plStack_98;
  }
  else {
    uVar6 = 0xf5a382f;
    iVar10 = 0xf5a384a;
    plVar19 = plVar22;
    do {
      lVar16 = *plVar20;
      bVar3 = *(byte *)(lVar16 + 0x48);
      uVar14 = *(uint *)(lVar16 + 8) & ((int)*(uint *)(lVar16 + 8) >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar14) {
        uVar14 = 5;
      }
      uVar12 = uVar6;
      FUN_109c60fbc(&UNK_10f5a382f,0x1a,lVar16 + 0xc,uVar14);
      if (plVar22 == plVar19) {
        if (bVar3 < 9) {
          uVar13 = *(undefined4 *)(&UNK_10e039b94 + (ulong)bVar3 * 4);
        }
        else {
          uVar13 = 4;
        }
        uStack_90 = CONCAT44(uVar13,uVar12);
        iVar8 = iVar10;
        FUN_109c60fbc(&UNK_10f5a384a,0xc,&uStack_90,2);
        if (iVar7 <= iVar8) goto LAB_109c1c934;
        if (plStack_98 != *(long **)(param_2 + 0x20)) {
          lVar16 = *plStack_98;
          bVar3 = *(byte *)(lVar16 + 0x48);
          uVar14 = *(uint *)(lVar16 + 8) & ((int)*(uint *)(lVar16 + 8) >> 0x1f ^ 0xffffffffU);
          if (4 < (int)uVar14) {
            uVar14 = 5;
          }
          uVar12 = uVar6;
          FUN_109c60fbc(&UNK_10f5a382f,0x1a,lVar16 + 0xc,uVar14);
          if (bVar3 < 9) {
            uVar13 = *(undefined4 *)(&UNK_10e039b94 + (ulong)bVar3 * 4);
          }
          else {
            uVar13 = 4;
          }
          uStack_90 = CONCAT44(uVar13,uVar12);
          iVar8 = iVar10;
          FUN_109c60fbc(&UNK_10f5a384a,0xc,&uStack_90,2);
          lVar16 = *plVar20;
          bVar3 = *(byte *)(lVar16 + 0x48);
          uVar14 = *(uint *)(lVar16 + 8) & ((int)*(uint *)(lVar16 + 8) >> 0x1f ^ 0xffffffffU);
          if (4 < (int)uVar14) {
            uVar14 = 5;
          }
          uVar12 = uVar6;
          FUN_109c60fbc(&UNK_10f5a382f,0x1a,lVar16 + 0xc,uVar14);
          if (bVar3 < 9) {
            uVar13 = *(undefined4 *)(&UNK_10e039b94 + (ulong)bVar3 * 4);
          }
          else {
            uVar13 = 4;
          }
          uStack_90 = CONCAT44(uVar13,uVar12);
          iVar9 = iVar10;
          FUN_109c60fbc(&UNK_10f5a384a,0xc,&uStack_90,2);
          if (iVar9 <= iVar8) goto LAB_109c1ca8c;
        }
        plStack_98 = plVar20;
      }
      else {
        if (bVar3 < 9) {
          uVar13 = *(undefined4 *)(&UNK_10e039b94 + (ulong)bVar3 * 4);
        }
        else {
          uVar13 = 4;
        }
        uStack_90 = CONCAT44(uVar13,uVar12);
        iVar8 = iVar10;
        FUN_109c60fbc(&UNK_10f5a384a,0xc,&uStack_90,2);
        if (iVar7 <= iVar8) {
          lVar16 = *plVar22;
          bVar3 = *(byte *)(lVar16 + 0x48);
          uVar14 = *(uint *)(lVar16 + 8) & ((int)*(uint *)(lVar16 + 8) >> 0x1f ^ 0xffffffffU);
          if (4 < (int)uVar14) {
            uVar14 = 5;
          }
          uVar12 = uVar6;
          FUN_109c60fbc(&UNK_10f5a382f,0x1a,lVar16 + 0xc,uVar14);
          if (bVar3 < 9) {
            uVar13 = *(undefined4 *)(&UNK_10e039b94 + (ulong)bVar3 * 4);
          }
          else {
            uVar13 = 4;
          }
          uStack_90 = CONCAT44(uVar13,uVar12);
          iVar8 = iVar10;
          FUN_109c60fbc(&UNK_10f5a384a,0xc,&uStack_90,2);
          lVar16 = *plVar20;
          bVar3 = *(byte *)(lVar16 + 0x48);
          uVar14 = *(uint *)(lVar16 + 8) & ((int)*(uint *)(lVar16 + 8) >> 0x1f ^ 0xffffffffU);
          if (4 < (int)uVar14) {
            uVar14 = 5;
          }
          uVar12 = uVar6;
          FUN_109c60fbc(&UNK_10f5a382f,0x1a,lVar16 + 0xc,uVar14);
          if (bVar3 < 9) {
            uVar13 = *(undefined4 *)(&UNK_10e039b94 + (ulong)bVar3 * 4);
          }
          else {
            uVar13 = 4;
          }
          uStack_90 = CONCAT44(uVar13,uVar12);
          iVar9 = iVar10;
          FUN_109c60fbc(&UNK_10f5a384a,0xc,&uStack_90,2);
          if (iVar8 <= iVar9) {
            lVar16 = *plVar22;
            bVar3 = *(byte *)(lVar16 + 0x48);
            uVar14 = *(uint *)(lVar16 + 8) & ((int)*(uint *)(lVar16 + 8) >> 0x1f ^ 0xffffffffU);
            if (4 < (int)uVar14) {
              uVar14 = 5;
            }
            uVar12 = uVar6;
            FUN_109c60fbc(&UNK_10f5a382f,0x1a,lVar16 + 0xc,uVar14);
            if (bVar3 < 9) {
              uVar13 = *(undefined4 *)(&UNK_10e039b94 + (ulong)bVar3 * 4);
            }
            else {
              uVar13 = 4;
            }
            uStack_90 = CONCAT44(uVar13,uVar12);
            iVar8 = iVar10;
            FUN_109c60fbc(&UNK_10f5a384a,0xc,&uStack_90,2);
            lVar16 = *plVar20;
            bVar3 = *(byte *)(lVar16 + 0x48);
            uVar14 = *(uint *)(lVar16 + 8) & ((int)*(uint *)(lVar16 + 8) >> 0x1f ^ 0xffffffffU);
            if (4 < (int)uVar14) {
              uVar14 = 5;
            }
            uVar12 = uVar6;
            FUN_109c60fbc(&UNK_10f5a382f,0x1a,lVar16 + 0xc,uVar14);
            if (bVar3 < 9) {
              uVar13 = *(undefined4 *)(&UNK_10e039b94 + (ulong)bVar3 * 4);
            }
            else {
              uVar13 = 4;
            }
            uStack_90 = CONCAT44(uVar13,uVar12);
            iVar9 = iVar10;
            FUN_109c60fbc(&UNK_10f5a384a,0xc,&uStack_90,2);
            if ((iVar8 != iVar9) || (*(ulong *)(*plVar22 + 0x40) <= *(ulong *)(*plVar20 + 0x40)))
            goto LAB_109c1ca8c;
          }
LAB_109c1c934:
          plVar22 = plVar20;
        }
      }
LAB_109c1ca8c:
      plVar20 = plVar20 + 1;
      plVar19 = *(long **)(param_2 + 0x20);
    } while (plVar20 != plVar19);
    if (plVar20 == plVar22) goto LAB_109c1caac;
  }
  lVar16 = *plVar22;
  *plVar22 = 0;
  *param_1 = lVar16;
  param_1[1] = (long)FUN_109c180b4;
  param_1[2] = (long)&PTR_DAT_110b2c028;
  plVar20 = plVar19 + -1;
  if (plVar22 != plVar20) {
    lVar18 = *plVar20;
    *plVar20 = 0;
    plVar20 = (long *)*plVar22;
    *plVar22 = lVar18;
    if (plVar20 != (long *)0x0) {
      (**(code **)(*plVar20 + 8))();
      plVar19 = *(long **)(param_2 + 0x20);
    }
  }
  plVar19 = plVar19 + -1;
  plVar20 = (long *)*plVar19;
  *plVar19 = 0;
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 8))();
  }
  *(long **)(param_2 + 0x20) = plVar19;
  puVar21 = (uint *)(lVar16 + 8);
  uVar14 = *puVar21;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  if (uVar14 != 0) {
    _memcpy(&uStack_90,lVar16 + 0xc,(long)(int)uVar14 << 2);
  }
  uVar4 = *(undefined1 *)(lVar16 + 0x48);
  uStack_80._0_5_ = CONCAT14(uVar4,(undefined4)uStack_80);
  plVar20 = (long *)0x28;
  __Znwm();
  *plVar20 = param_2;
  plVar20[1] = 0;
  plVar20[2] = 0;
  plVar20[3] = 0;
  if (uVar14 != 0) {
    _memcpy((long)plVar20 + 0xc,&uStack_90,(long)(int)uVar14 << 2);
  }
  *(uint *)(plVar20 + 1) = uVar14;
  *(undefined1 *)(plVar20 + 4) = uVar4;
  if (puVar21 != param_3) {
    uVar14 = 0;
    if (*param_3 != 0) {
      _memmove(lVar16 + 0xc,param_3 + 1,(long)(int)*param_3 << 2);
      uVar14 = *param_3;
    }
    *puVar21 = uVar14;
  }
  *(char *)(lVar16 + 0x48) = (char)param_4;
  *(undefined8 *)(lVar16 + 0x4c) = 0x3f800000;
  param_1[1] = (long)FUN_109c1cf14;
  param_1[2] = (long)&PTR_FUN_110b2c180;
  param_1[3] = (long)plVar20;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_109c1cc9c:
  func_0x000109c1cdfc();
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109c1cca4);
  (*pcVar5)();
}



/* Entry: 109c1cce8; end: 109c1cde3;  */

void FUN_109c1cce8(long param_1)

{
  uint uVar1;
  byte bVar2;
  undefined4 uVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34)) {
    plVar7 = *(long **)(param_1 + 0x20);
    do {
      if (*(long **)(param_1 + 0x18) == plVar7) {
        return;
      }
      lVar6 = plVar7[-1];
      bVar2 = *(byte *)(lVar6 + 0x48);
      uVar1 = *(uint *)(lVar6 + 8) & ((int)*(uint *)(lVar6 + 8) >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar1) {
        uVar1 = 5;
      }
      uVar3 = 0xf5a382f;
      FUN_109c60fbc(&UNK_10f5a382f,0x1a,lVar6 + 0xc,uVar1);
      uStack_48 = uVar3;
      if ((ulong)bVar2 < 9) {
        uStack_44 = *(undefined4 *)(&UNK_10e039b94 + (ulong)bVar2 * 4);
      }
      else {
        uStack_44 = 4;
      }
      iVar5 = 0xf5a384a;
      FUN_109c60fbc(&UNK_10f5a384a,0xc,&uStack_48,2);
      iVar5 = *(int *)(param_1 + 0x34) - iVar5;
      *(int *)(param_1 + 0x34) = iVar5;
      plVar7 = (long *)(*(long *)(param_1 + 0x20) + -8);
      plVar4 = (long *)*plVar7;
      *plVar7 = 0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
        iVar5 = *(int *)(param_1 + 0x34);
      }
      *(long **)(param_1 + 0x20) = plVar7;
    } while (*(int *)(param_1 + 0x30) < iVar5);
  }
  return;
}



/* Entry: 109c1cde4; end: 109c1cde7;  */

long FUN_109c1cde4(long param_1)

{
  FUN_109c1cea0(param_1 + 0x18);
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109c1cde8; end: 109c1ce0f;  */

void FUN_109c1cde8(void)

{
  FUN_109c1d0dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c1ce10; end: 109c1ce9f;  */

undefined1  [16] FUN_109c1ce10(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar2 = (long)param_1 << 3;
    __Znwm(lVar2);
    auVar5._8_8_ = param_1;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000104c4f740();
  plVar1 = (long *)param_1[1];
  plVar4 = (long *)param_1[2];
  while (plVar4 != plVar1) {
    plVar4 = plVar4 + -1;
    plVar3 = (long *)*plVar4;
    param_1[2] = (long)plVar4;
    *plVar4 = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
      plVar4 = (long *)param_1[2];
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 109c1cea0; end: 109c1cf13;  */

void FUN_109c1cea0(undefined8 *param_1)

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



/* Entry: 109c1cf14; end: 109c1d023;  */

void FUN_109c1cf14(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  plVar7 = *(long **)(param_2 + 0x10);
  lVar9 = *plVar7;
  plVar3 = param_1;
  if (plVar7 != param_1) {
    uVar4 = 0;
    if ((int)plVar7[1] != 0) {
      plVar3 = (long *)((long)param_1 + 0xc);
      param_2 = (long)plVar7 + 0xc;
      _memmove(plVar3,param_2,(long)(int)plVar7[1] << 2);
      uVar4 = (undefined4)plVar7[1];
    }
    *(undefined4 *)(param_1 + 1) = uVar4;
  }
  *(char *)(param_1 + 9) = (char)plVar7[4];
  plVar7 = *(long **)(lVar9 + 0x20);
  if (plVar7 < *(long **)(lVar9 + 0x28)) {
    plVar10 = plVar7 + 1;
    *plVar7 = (long)param_1;
  }
  else {
    plStack_48 = (long *)(lVar9 + 0x18);
    lVar8 = (long)plVar7 - *plStack_48;
    uVar1 = (lVar8 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      func_0x000109c1cdfc();
      if (plVar3[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)();
        return;
      }
      return;
    }
    uVar5 = (long)*(long **)(lVar9 + 0x28) - *plStack_48;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    FUN_109c1ce10();
    lVar2 = *(long *)(lVar9 + 0x18);
    plVar3 = (long *)(uVar6 + lVar8);
    lVar8 = (long)plVar3 - (*(long *)(lVar9 + 0x20) - lVar2);
    plVar10 = plVar3 + 1;
    *plVar3 = (long)param_1;
    _memcpy(lVar8,lVar2);
    uStack_68 = *(undefined8 *)(lVar9 + 0x18);
    *(long *)(lVar9 + 0x18) = lVar8;
    *(long **)(lVar9 + 0x20) = plVar10;
    uStack_50 = *(undefined8 *)(lVar9 + 0x28);
    *(ulong *)(lVar9 + 0x28) = uVar6 + param_2 * 8;
    uStack_60 = uStack_68;
    uStack_58 = uStack_68;
    func_0x000109c1ce44(&uStack_68);
  }
  *(long **)(lVar9 + 0x20) = plVar10;
  return;
}



/* Entry: 109c1d024; end: 109c1d04b;  */

void FUN_109c1d024(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 109c1d04c; end: 109c1d0db;  */

void FUN_109c1d04c(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int *piVar4;
  
  puVar3 = *(undefined8 **)(param_2 + 8);
  *param_1 = &PTR_FUN_110b2c180;
  puVar2 = (undefined8 *)0x28;
  __Znwm();
  *puVar2 = *puVar3;
  piVar4 = (int *)(puVar2 + 1);
  piVar4[0] = 0;
  piVar4[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  if (puVar2 != puVar3) {
    iVar1 = *(int *)(puVar3 + 1);
    if (iVar1 != 0) {
      _memcpy((long)puVar2 + 0xc,(long)puVar3 + 0xc,(long)iVar1 << 2);
    }
    *piVar4 = iVar1;
  }
  *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(puVar3 + 4);
  param_1[1] = puVar2;
  return;
}



/* Entry: 109c1d0dc; end: 109c1d10f;  */

long FUN_109c1d0dc(long param_1)

{
  FUN_109c1cea0(param_1 + 0x18);
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109c1d110; end: 109c1d11f;  */

void FUN_109c1d110(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c1b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109c1d120; end: 109c1d13f;  */

void FUN_109c1d120(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c1b0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c1d140; end: 109c1d14b;  */

long FUN_109c1d140(long param_1)

{
  __ZNSt3__15mutexD1Ev(param_1 + 0x58);
  FUN_109c1959c(param_1 + 0x30);
  if (*(long *)(param_1 + 0x28) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1 + 0x18;
}



/* Entry: 109c1d14c; end: 109c1d1df;  */

long FUN_109c1d14c(long param_1)

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



/* Entry: 109c1d1e0; end: 109c1d377;  */

void FUN_109c1d1e0(uint param_1)

{
  undefined1 **ppuVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined1 *puStack_90;
  ulong uStack_88;
  byte bStack_79;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x000107c31940(auStack_78,&UNK_10f55aaab);
  puVar3 = auStack_78;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar3,&UNK_10f5a35f2,0x19);
  uStack_58 = puVar3[1];
  uStack_60 = *puVar3;
  lStack_50 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  if (param_1 < 9) {
    func_0x000107c31940(&puStack_90,(&PTR_DAT_110b2c1f0)[param_1]);
    ppuVar1 = (undefined1 **)puStack_90;
    if (-1 < (char)bStack_79) {
      uStack_88 = (ulong)bStack_79;
      ppuVar1 = &puStack_90;
    }
    puVar3 = &uStack_60;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,ppuVar1,uStack_88);
    uStack_38 = puVar3[1];
    uStack_40 = *puVar3;
    uStack_30 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    if ((char)bStack_79 < '\0') {
      __ZdlPv(puStack_90);
    }
    if (lStack_50 < 0) {
      __ZdlPv(uStack_60);
    }
    if (cStack_61 < '\0') {
      __ZdlPv(auStack_78[0]);
    }
    plVar4 = (long *)0x10;
    ___cxa_allocate_exception();
    __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
    *plVar4 = (long)(PTR___ZTVSt16invalid_argument_110346b68 + 0x10);
    ___cxa_throw(plVar4,PTR___ZTISt16invalid_argument_110352248,
                 PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
  }
  else {
    func_0x000105688514(&UNK_10f5a35e0);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109c1d308);
  (*pcVar2)();
}



/* Entry: 109c1d378; end: 109c1d4df;  */

undefined8 * FUN_109c1d378(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puStack_38;
  
  *param_1 = &PTR_FUN_110b2c248;
  lVar4 = param_1[0x2d];
  if (lVar4 != 0) {
    lVar6 = lVar4;
    lVar3 = param_1[0x2e];
    if (param_1[0x2e] != lVar4) {
      do {
        lVar6 = lVar3 + -0x210;
        FUN_109c0877c(lVar3 + -0x208);
        lVar3 = lVar6;
      } while (lVar6 != lVar4);
      lVar6 = param_1[0x2d];
    }
    param_1[0x2e] = lVar4;
    __ZdlPv(lVar6);
  }
  if (param_1[0x2a] != 0) {
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x14f) < '\0') {
    __ZdlPv(param_1[0x27]);
  }
  puStack_38 = param_1 + 0x24;
  func_0x000104c607c8(&puStack_38);
  puVar5 = (undefined8 *)param_1[0x21];
  if (puVar5 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)param_1[0x22];
    puVar1 = puVar5;
    if (puVar7 != puVar5) {
      do {
        puVar7 = puVar7 + -3;
        puStack_38 = puVar7;
        FUN_109c2070c(&puStack_38);
      } while (puVar7 != puVar5);
      puVar1 = (undefined8 *)param_1[0x21];
    }
    param_1[0x22] = puVar5;
    __ZdlPv(puVar1);
  }
  puStack_38 = param_1 + 0x1e;
  func_0x000104c607c8(&puStack_38);
  func_0x000109c20db4(param_1 + 0x1c);
  if (param_1[0x19] != 0) {
    param_1[0x1a] = param_1[0x19];
    __ZdlPv();
  }
  plVar2 = (long *)param_1[0x14];
  param_1[0x14] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  puStack_38 = param_1 + 0x11;
  func_0x0001092a9abc(&puStack_38);
  func_0x0001095a2e38(param_1 + 0xc);
  puStack_38 = param_1 + 9;
  func_0x00010951ece4(&puStack_38);
  puStack_38 = param_1 + 6;
  FUN_109c20538(&puStack_38);
  puStack_38 = param_1 + 2;
  func_0x000109c205a8(&puStack_38);
  return param_1;
}



/* Entry: 109c1d4e0; end: 109c1d4e3;  */

undefined8 * FUN_109c1d4e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puStack_38;
  
  *param_1 = &PTR_FUN_110b2c248;
  lVar4 = param_1[0x2d];
  if (lVar4 != 0) {
    lVar6 = lVar4;
    lVar3 = param_1[0x2e];
    if (param_1[0x2e] != lVar4) {
      do {
        lVar6 = lVar3 + -0x210;
        FUN_109c0877c(lVar3 + -0x208);
        lVar3 = lVar6;
      } while (lVar6 != lVar4);
      lVar6 = param_1[0x2d];
    }
    param_1[0x2e] = lVar4;
    __ZdlPv(lVar6);
  }
  if (param_1[0x2a] != 0) {
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x14f) < '\0') {
    __ZdlPv(param_1[0x27]);
  }
  puStack_38 = param_1 + 0x24;
  func_0x000104c607c8(&puStack_38);
  puVar5 = (undefined8 *)param_1[0x21];
  if (puVar5 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)param_1[0x22];
    puVar1 = puVar5;
    if (puVar7 != puVar5) {
      do {
        puVar7 = puVar7 + -3;
        puStack_38 = puVar7;
        FUN_109c2070c(&puStack_38);
      } while (puVar7 != puVar5);
      puVar1 = (undefined8 *)param_1[0x21];
    }
    param_1[0x22] = puVar5;
    __ZdlPv(puVar1);
  }
  puStack_38 = param_1 + 0x1e;
  func_0x000104c607c8(&puStack_38);
  func_0x000109c20db4(param_1 + 0x1c);
  if (param_1[0x19] != 0) {
    param_1[0x1a] = param_1[0x19];
    __ZdlPv();
  }
  plVar2 = (long *)param_1[0x14];
  param_1[0x14] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  puStack_38 = param_1 + 0x11;
  func_0x0001092a9abc(&puStack_38);
  func_0x0001095a2e38(param_1 + 0xc);
  puStack_38 = param_1 + 9;
  func_0x00010951ece4(&puStack_38);
  puStack_38 = param_1 + 6;
  FUN_109c20538(&puStack_38);
  puStack_38 = param_1 + 2;
  func_0x000109c205a8(&puStack_38);
  return param_1;
}



/* Entry: 109c1d4e4; end: 109c1d4f7;  */

void FUN_109c1d4e4(void)

{
  FUN_109c1d378();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c1d4f8; end: 109c1d67f;  */

/* WARNING: Removing unreachable block (ram,0x000109c1d5c8) */

void FUN_109c1d4f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  long *plVar2;
  undefined8 ****ppppuVar3;
  byte bVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char cVar10;
  bool bVar11;
  undefined8 ******ppppppuVar12;
  undefined8 uVar13;
  code *pcVar14;
  undefined8 *puVar15;
  undefined8 *****pppppuVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  int *piVar20;
  ulong uVar21;
  long lVar22;
  undefined1 uVar23;
  long lVar24;
  uint *puVar25;
  uint *puVar26;
  undefined8 ***pppuVar27;
  undefined8 uVar28;
  uint *puVar29;
  ulong uVar31;
  ulong uVar32;
  long ***ppplVar33;
  long lVar34;
  int *piVar35;
  uint *puVar36;
  undefined8 *puVar37;
  long lVar38;
  int *piVar39;
  long lVar40;
  long lVar41;
  ulong uVar42;
  long lVar43;
  long lVar44;
  int iVar45;
  undefined8 *****pppppuStack_268;
  ulong uStack_260;
  byte bStack_251;
  undefined8 *****pppppuStack_250;
  ulong uStack_248;
  byte bStack_239;
  undefined1 auStack_238 [24];
  undefined8 *****pppppuStack_220;
  ulong uStack_218;
  byte bStack_209;
  undefined8 auStack_208 [2];
  char cStack_1f1;
  undefined8 uStack_1f0;
  long *plStack_1e8;
  long lStack_1e0;
  undefined8 ****appppuStack_1d8 [2];
  char cStack_1c1;
  long ***ppplStack_1c0;
  long ***ppplStack_1b8;
  long ***ppplStack_1b0;
  long *plStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  long **pplStack_190;
  long *plStack_188;
  long lStack_148;
  long *aplStack_b8 [5];
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_60 [32];
  long *plStack_40;
  long lStack_38;
  uint *puVar30;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  aplStack_b8[0] = (long *)(ulong)(*(int *)(param_1 + 0x28) - 1);
  FUN_109c20618(&lStack_78,1,aplStack_b8);
  lStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_109c20698(auStack_60,*(undefined8 *)(param_1 + 0x120),param_2);
  FUN_109c20e0c(aplStack_b8,auStack_60,1);
  plVar17 = &lStack_78;
  plVar18 = &lStack_90;
  FUN_109c1d680(param_1,aplStack_b8);
  func_0x000109c213a4(aplStack_b8);
  if (plStack_40 != (long *)0x0) {
    plVar19 = plStack_40 + 1;
    do {
      lVar24 = *plVar19;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar11) {
        *plVar19 = lVar24 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
    }
  }
  lVar41 = lStack_90;
  func_0x000109c1e534(param_3);
  aplStack_b8[0] = &lStack_90;
  FUN_109c2070c(aplStack_b8);
  lVar24 = lStack_78;
  if (lStack_78 != 0) {
    lStack_70 = lStack_78;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  func_0x000109c213a4(aplStack_b8);
  func_0x000109c1e4fc(auStack_60);
  aplStack_b8[0] = &lStack_90;
  FUN_109c2070c(aplStack_b8);
  if (lStack_78 != 0) {
    lStack_70 = lStack_78;
    __ZdlPv();
  }
  __Unwind_Resume();
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(char *)(lVar24 + 0x180) != '\x01') || ((*(byte *)(lVar24 + 0x181) & 1) == 0)) {
    pbVar1 = (byte *)(lVar24 + 0x182);
    do {
      bVar4 = *pbVar1;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar11) {
        *pbVar1 = 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if ((bVar4 & 1) != 0) goto LAB_109c1e288;
    piVar35 = *(int **)(lVar24 + 0x168);
    piVar39 = *(int **)(lVar24 + 0x170);
    if (piVar35 != piVar39) {
      do {
        iVar45 = **(int **)(*(long *)(lVar24 + 0x48) + (long)*piVar35 * 0x18);
        if (((iVar45 < *(int *)(lVar24 + 0x28)) &&
            (plVar19 = (long *)(*(long *)(lVar24 + 0x88) + (long)iVar45 * 0x18),
            piVar20 = (int *)*plVar19, plVar19[1] - (long)piVar20 == 4)) && (*piVar20 == 1)) {
          lVar43 = *(long *)(*(long *)(lVar24 + 0x10) + (long)iVar45 * 0x10);
          if (((char)piVar35[0x6b] == '\x01') && (piVar35[0x67] == 2)) {
            if ((*(int *)(lVar43 + 0x7c) + -0x80 == piVar35[0x6a]) &&
               (ABS(*(float *)(lVar43 + 0x78) - (float)piVar35[0x82]) <= 0.001)) {
LAB_109c1d7bc:
              lVar38 = lVar43;
              ___dynamic_cast(lVar43,&PTR_DAT_110b2c3c0,&PTR_DAT_110b2c850,0);
              if ((lVar38 != 0) ||
                 ((lVar38 = lVar43, ___dynamic_cast(lVar43,&PTR_DAT_110b2c3c0,&PTR_DAT_110b2c910,0),
                  lVar38 != 0 ||
                  (lVar38 = lVar43, ___dynamic_cast(lVar43,&PTR_DAT_110b2c3c0,&PTR_DAT_110b2cf00,0),
                  lVar38 != 0)))) {
                piVar20 = (int *)*plVar17;
                piVar5 = (int *)plVar17[1];
                if (piVar20 == piVar5) {
LAB_109c1d838:
                  if (piVar20 != piVar5) goto LAB_109c1d95c;
                }
                else {
                  do {
                    if (iVar45 == *piVar20) goto LAB_109c1d838;
                    piVar20 = piVar20 + 2;
                  } while (piVar20 != piVar5);
                }
                *(undefined4 *)(lVar43 + 0x80) = 0;
                *(undefined1 *)(lVar43 + 0x84) = 1;
                piVar20 = (int *)(*(ulong *)(piVar35 + 0x42) & 0xfffffffffffffffc);
                if (*(char *)((long)piVar20 + 0x17) < '\0') {
                  if (*(long *)(piVar20 + 2) == 5) {
                    piVar20 = *(int **)piVar20;
                    goto LAB_109c1d874;
                  }
                }
                else if (*(char *)((long)piVar20 + 0x17) == '\x05') {
LAB_109c1d874:
                  if (*piVar20 == 0x756c6572 && (char)piVar20[1] == '6') {
                    iVar45 = 0;
                    if ((*(byte *)((long)piVar35 + 0x1f) >> 2 & 1) != 0) {
                      iVar45 = piVar35[0x7a];
                    }
                    *(int *)(lVar43 + 0x80) = iVar45;
                    *(undefined1 *)(lVar43 + 0x84) = 1;
                    iVar45 = 0x40c00000;
                    if ((*(byte *)((long)piVar35 + 0x1f) >> 3 & 1) != 0) {
                      iVar45 = piVar35[0x7b];
                    }
                    *(int *)(lVar43 + 0x88) = iVar45;
                    *(undefined1 *)(lVar43 + 0x8c) = 1;
                  }
                }
                puVar15 = (undefined8 *)0xa8;
                __Znwm();
                puVar15[1] = 0;
                puVar15[2] = 0;
                *puVar15 = &PTR_FUN_110b2c278;
                puVar15[0x11] = 0;
                puVar15[0x10] = 0;
                puVar15[0x13] = 0;
                puVar15[0x12] = 0;
                puVar15[0x14] = 0;
                puVar15[0xd] = 0;
                puVar15[0xc] = 0;
                puVar15[0xf] = 0;
                puVar15[0xe] = 0;
                puVar15[9] = 0;
                puVar15[8] = 0;
                puVar15[0xb] = 0;
                puVar15[10] = 0;
                puVar15[5] = 0;
                puVar15[4] = 0;
                puVar15[7] = 0;
                puVar15[6] = 0;
                *(undefined1 *)((long)puVar15 + 0x79) = 1;
                puVar15[0x10] = 0;
                puVar15[0x11] = 0;
                *(undefined4 *)(puVar15 + 0x12) = 0x3f800000;
                puVar15[3] = &PTR_DAT_110b2c2c8;
                puVar37 = (undefined8 *)(*(long *)(lVar24 + 0x10) + (long)*piVar35 * 0x10);
                plVar19 = (long *)puVar37[1];
                *puVar37 = puVar15 + 3;
                puVar37[1] = puVar15;
                if (plVar19 != (long *)0x0) {
                  plVar2 = plVar19 + 1;
                  do {
                    lVar43 = *plVar2;
                    cVar10 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                    if (bVar11) {
                      *plVar2 = lVar43 + -1;
                      cVar10 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar10 != '\0');
                  if (lVar43 == 0) {
                    (**(code **)(*plVar19 + 0x10))(plVar19);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
                  }
                }
              }
            }
          }
          else if (lVar43 != 0) goto LAB_109c1d7bc;
        }
LAB_109c1d95c:
        piVar35 = piVar35 + 0x84;
      } while (piVar35 != piVar39);
      piVar35 = *(int **)(lVar24 + 0x168);
      piVar39 = *(int **)(lVar24 + 0x170);
    }
    for (; piVar39 != piVar35; piVar39 = piVar39 + -0x84) {
      FUN_109c0877c(piVar39 + -0x82);
    }
    *(int **)(lVar24 + 0x170) = piVar35;
    for (plVar19 = *(long **)(lVar41 + 0x10); plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
      lVar41 = *(long *)(lVar24 + 0x120);
      FUN_1094dc248(lVar41,*(undefined8 *)(lVar24 + 0x128),plVar19 + 2,&pplStack_190);
      lVar41 = lVar41 - *(long *)(lVar24 + 0x120);
      FUN_109c182f4(*(long *)(lVar24 + 0x108) + lVar41 + (long)*(int *)(lVar24 + 0x28) * 0x18,1);
      uVar21 = (lVar41 >> 3) * -0x5555555555555555;
      if ((*(ulong *)(*(long *)(lVar24 + 0x150) + (uVar21 >> 6) * 8) >> (uVar21 & 0x3f) & 1) == 0) {
        func_0x000109c1e534(*(undefined8 *)
                             (*(long *)(lVar24 + 0x108) + lVar41 +
                             (long)*(int *)(lVar24 + 0x28) * 0x18),plVar19 + 5);
      }
      else {
        FUN_109c1bed0(&pplStack_190,**(undefined8 **)(lVar24 + 0xe0),plVar19[5]);
        func_0x000109c18360(*(undefined8 *)
                             (*(long *)(lVar24 + 0x108) + lVar41 +
                             (long)*(int *)(lVar24 + 0x28) * 0x18),&pplStack_190);
        FUN_109c180ec(&pplStack_190);
      }
    }
    plStack_1a8 = (long *)0x0;
    lStack_1a0 = 0;
    uStack_198 = 0;
    FUN_1099f5244(&plStack_1a8,*(long *)(lVar24 + 0x88),*(long *)(lVar24 + 0x90),
                  (*(long *)(lVar24 + 0x90) - *(long *)(lVar24 + 0x88) >> 3) * -0x5555555555555555);
    puVar36 = (uint *)*plVar17;
    puVar6 = (uint *)plVar17[1];
    puVar26 = puVar36;
    if ((puVar36 != puVar6) && (puVar36 + 2 != puVar6)) {
      uVar28 = *(undefined8 *)puVar36;
      puVar25 = puVar36;
      puVar29 = puVar36 + 2;
      do {
        puVar30 = puVar29 + 2;
        puVar26 = puVar29;
        uVar13 = *(undefined8 *)puVar29;
        if ((int)*(undefined8 *)puVar29 <= (int)uVar28) {
          puVar26 = puVar25;
          uVar13 = uVar28;
        }
        uVar28 = uVar13;
        puVar25 = puVar26;
        puVar29 = puVar30;
      } while (puVar30 != puVar6);
    }
    uVar7 = *puVar26;
    if (puVar36 != puVar6) {
      do {
        uVar8 = *puVar36;
        if (((int)uVar8 < 0) ||
           ((int)((ulong)(lStack_1a0 - (long)plStack_1a8) >> 3) * -0x55555555 <= (int)uVar8)) {
          __ZNSt3__19to_stringEi(auStack_208,uVar8);
          FUN_10928a5e0(&uStack_1f0,&UNK_10f5a3940,auStack_208);
          FUN_109259240(appppuStack_1d8,&uStack_1f0,&UNK_10f5a395b);
          __ZNSt3__19to_stringEm
                    (&pppppuStack_220,(lStack_1a0 - (long)plStack_1a8 >> 3) * -0x5555555555555555);
          if (-1 < (char)bStack_209) {
            uStack_218 = (ulong)bStack_209;
            pppppuStack_220 = &pppppuStack_220;
          }
          pppppuVar16 = appppuStack_1d8;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (pppppuVar16,pppppuStack_220,uStack_218);
          ppplStack_1b8 = (long ***)pppppuVar16[1];
          ppplStack_1c0 = (long ***)*pppppuVar16;
          ppplStack_1b0 = (long ***)pppppuVar16[2];
          pppppuVar16[1] = (undefined8 ****)0x0;
          pppppuVar16[2] = (undefined8 ****)0x0;
          *pppppuVar16 = (undefined8 ****)0x0;
          FUN_109259240(&pplStack_190,&ppplStack_1c0,&DAT_10f684600);
          func_0x000105687ee0(&pplStack_190);
          goto LAB_109c1e294;
        }
        uVar9 = puVar36[1];
        if (((int)uVar9 < 0) ||
           (puVar37 = (undefined8 *)plStack_1a8[(ulong)uVar8 * 3],
           (int)((ulong)((long)(plStack_1a8 + (ulong)uVar8 * 3)[1] - (long)puVar37) >> 2) <=
           (int)uVar9)) {
          __ZNSt3__19to_stringEi(auStack_238);
          FUN_10928a5e0(&pppppuStack_220,&UNK_10f5a396e,auStack_238);
          FUN_109259240(auStack_208,&pppppuStack_220,&UNK_10f5a3983);
          __ZNSt3__19to_stringEi(&pppppuStack_250,*puVar36);
          if (-1 < (char)bStack_239) {
            uStack_248 = (ulong)bStack_239;
            pppppuStack_250 = &pppppuStack_250;
          }
          puVar37 = auStack_208;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (puVar37,pppppuStack_250,uStack_248);
          plStack_1e8 = (long *)puVar37[1];
          uStack_1f0 = *puVar37;
          lStack_1e0 = puVar37[2];
          puVar37[1] = 0;
          puVar37[2] = 0;
          *puVar37 = 0;
          FUN_109259240(appppuStack_1d8,&uStack_1f0,&UNK_10f5a399c);
          __ZNSt3__19to_stringEm
                    (&pppppuStack_268,
                     (long)(plStack_1a8 + (long)(int)*puVar36 * 3)[1] -
                     (long)plStack_1a8[(long)(int)*puVar36 * 3] >> 2);
          if (-1 < (char)bStack_251) {
            uStack_260 = (ulong)bStack_251;
            pppppuStack_268 = &pppppuStack_268;
          }
          pppppuVar16 = appppuStack_1d8;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (pppppuVar16,pppppuStack_268,uStack_260);
          ppplStack_1b8 = (long ***)pppppuVar16[1];
          ppplStack_1c0 = (long ***)*pppppuVar16;
          ppplStack_1b0 = (long ***)pppppuVar16[2];
          pppppuVar16[1] = (undefined8 ****)0x0;
          pppppuVar16[2] = (undefined8 ****)0x0;
          *pppppuVar16 = (undefined8 ****)0x0;
          FUN_109259240(&pplStack_190,&ppplStack_1c0,&UNK_10f5a39a9);
          func_0x000105687ee0(&pplStack_190);
          goto LAB_109c1e294;
        }
        *(int *)((long)puVar37 + (ulong)uVar9 * 4) = *(int *)((long)puVar37 + (ulong)uVar9 * 4) + 1;
        puVar36 = puVar36 + 2;
      } while (puVar36 != puVar6);
    }
    FUN_109c1c088(*(undefined8 *)(lVar24 + 0xe0));
    if (-1 < (int)uVar7) {
      lVar41 = 0;
      do {
        if ((*(char *)(lVar24 + 0x180) == '\x01') && ((*(byte *)(lVar24 + 0x181) & 1) != 0)) break;
        puVar37 = *(undefined8 **)(lVar24 + 0xe0);
        (**(code **)(*(long *)puVar37[2] + 8))();
        (**(code **)(*(long *)*puVar37 + 8))();
        (**(code **)(*(long *)puVar37[4] + 8))();
        lVar44 = *(long *)(lVar24 + 0x10);
        plVar19 = (long *)(*(long *)(lVar24 + 0x48) + lVar41 * 0x18);
        lVar43 = *plVar19;
        lVar38 = plVar19[1];
        uVar21 = lVar38 - lVar43 >> 3;
        FUN_109c208d4(&pplStack_190,uVar21);
        if (lVar38 != lVar43) {
          lVar40 = 0;
          uVar42 = 0;
          do {
            lVar22 = *(long *)(*(long *)(*(long *)(lVar24 + 0x48) + lVar41 * 0x18) + uVar42 * 8);
            func_0x000109c1e534((long)pplStack_190 + lVar40,
                                *(long *)(*(long *)(lVar24 + 0x108) + (long)(int)lVar22 * 0x18) +
                                (lVar22 >> 0x20) * 0x10);
            uVar42 = uVar42 + 1;
            lVar40 = lVar40 + 0x10;
          } while (uVar21 != uVar42);
        }
        ppplStack_1c0 = (long ***)0x0;
        ppplStack_1b8 = (long ***)0x0;
        ppplStack_1b0 = (long ***)0x0;
        func_0x00010737fadc(appppuStack_1d8,uVar21);
        if (lVar38 == lVar43) {
          uVar23 = 1;
        }
        else {
          uVar42 = 0;
          lVar40 = *(long *)(*(long *)(lVar24 + 0x48) + lVar41 * 0x18);
          uVar23 = 1;
          do {
            lVar22 = *(long *)(lVar40 + uVar42 * 8);
            lVar34 = lVar22 >> 0x20;
            uVar31 = uVar42 >> 6;
            uVar32 = 1L << (uVar42 & 0x3f);
            iVar45 = *(int *)(plStack_1a8[(long)(int)lVar22 * 3] + lVar34 * 4) + -1;
            *(int *)((long)plStack_1a8[(long)(int)lVar22 * 3] + lVar34 * 4) = iVar45;
            if (iVar45 == 0) {
              ppplVar33 = (long ***)((ulong)appppuStack_1d8[0][uVar31] | uVar32);
            }
            else {
              uVar23 = 0;
              ppplVar33 = (long ***)
                          ((ulong)appppuStack_1d8[0][uVar31] & (uVar32 ^ 0xffffffffffffffff));
            }
            appppuStack_1d8[0][uVar31] = ppplVar33;
            uVar42 = uVar42 + 1;
          } while (uVar21 != uVar42);
        }
        plVar19 = *(long **)(lVar44 + lVar41 * 0x10);
        *(undefined1 *)((long)plVar19 + 99) = uVar23;
        (**(code **)(*plVar19 + 0x10))(plVar19,&pplStack_190,&ppplStack_1c0);
        if (lVar38 != lVar43) {
          uVar42 = 0;
          do {
            if (((ulong)appppuStack_1d8[0][uVar42 >> 6] >> (uVar42 & 0x3f) & 1) != 0) {
              lVar43 = *(long *)(*(long *)(*(long *)(lVar24 + 0x48) + lVar41 * 0x18) + uVar42 * 8);
              uStack_1f0 = 0;
              plStack_1e8 = (long *)0x0;
              FUN_109c1e9b8(*(long *)(*(long *)(lVar24 + 0x108) + (long)(int)lVar43 * 0x18) +
                            (lVar43 >> 0x20) * 0x10,&uStack_1f0);
              plVar19 = plStack_1e8;
              if (plStack_1e8 != (long *)0x0) {
                plVar2 = plStack_1e8 + 1;
                do {
                  lVar43 = *plVar2;
                  cVar10 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar11) {
                    *plVar2 = lVar43 + -1;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                } while (cVar10 != '\0');
                if (lVar43 == 0) {
                  (**(code **)(*plStack_1e8 + 0x10))(plStack_1e8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
                }
              }
            }
            uVar42 = uVar42 + 1;
          } while (uVar42 != uVar21);
        }
        FUN_109c182f4(*(long *)(lVar24 + 0x108) + lVar41 * 0x18,
                      (long)ppplStack_1b8 - (long)ppplStack_1c0 >> 4);
        if (ppplStack_1b8 != ppplStack_1c0) {
          lVar38 = 0;
          lVar43 = 0;
          uVar21 = 0;
          do {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (*(long *)((long)ppplStack_1c0 + lVar43) + 0x20,
                       *(long *)(*(long *)(lVar24 + 0x30) + lVar41 * 0x18) + lVar38);
            func_0x000109c1e534(*(long *)(*(long *)(lVar24 + 0x108) + lVar41 * 0x18) + lVar43,
                                (long)ppplStack_1c0 + lVar43);
            uVar21 = uVar21 + 1;
            lVar43 = lVar43 + 0x10;
            lVar38 = lVar38 + 0x18;
          } while (uVar21 < (ulong)((long)ppplStack_1b8 - (long)ppplStack_1c0 >> 4));
        }
        if (appppuStack_1d8[0] != (long ****)0x0) {
          __ZdlPv();
        }
        appppuStack_1d8[0] = &ppplStack_1c0;
        FUN_109c2070c(appppuStack_1d8);
        ppplStack_1c0 = &pplStack_190;
        FUN_109c2070c(&ppplStack_1c0);
        lVar41 = lVar41 + 1;
      } while (lVar41 != (ulong)uVar7 + 1);
    }
    *(int *)(*(long *)(lVar24 + 0xe0) + 0x88) = *(int *)(*(long *)(lVar24 + 0xe0) + 0x88) + 1;
    if ((*(char *)(lVar24 + 0x180) != '\x01') || ((*(byte *)(lVar24 + 0x181) & 1) == 0)) {
      lVar41 = *plVar18;
      lVar43 = plVar18[1];
      while (lVar43 != lVar41) {
        lVar43 = lVar43 + -0x10;
        FUN_10959b818();
      }
      plVar18[1] = lVar41;
      FUN_109c1ea1c(plVar18,plVar17[1] - *plVar17 >> 3);
      lVar41 = *plVar17;
      if (plVar17[1] != lVar41) {
        uVar21 = 0;
        do {
          piVar35 = (int *)(lVar41 + uVar21 * 8);
          iVar45 = *piVar35;
          lVar41 = (long)piVar35[1];
          if (*(long *)(*(long *)(*(long *)(lVar24 + 0x108) + (long)iVar45 * 0x18) + lVar41 * 0x10)
              == 0) {
            __ZNSt3__19to_stringEi(auStack_208,(long)iVar45);
            FUN_10928a5e0(&uStack_1f0,&UNK_10f5a39b3,auStack_208);
            FUN_109259240(appppuStack_1d8,&uStack_1f0,&DAT_10f42647b);
            __ZNSt3__19to_stringEi(&pppppuStack_220,lVar41);
            ppppppuVar12 = (undefined8 ******)pppppuStack_220;
            if (-1 < (char)bStack_209) {
              uStack_218 = (ulong)bStack_209;
              ppppppuVar12 = &pppppuStack_220;
            }
            pppppuVar16 = appppuStack_1d8;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (pppppuVar16,ppppppuVar12,uStack_218);
            ppplStack_1b8 = (long ***)pppppuVar16[1];
            ppplStack_1c0 = (long ***)*pppppuVar16;
            ppplStack_1b0 = (long ***)pppppuVar16[2];
            pppppuVar16[1] = (undefined8 ****)0x0;
            pppppuVar16[2] = (undefined8 ****)0x0;
            *pppppuVar16 = (undefined8 ****)0x0;
            FUN_109259240(&pplStack_190,&ppplStack_1c0,&UNK_10f5a39ed);
            if ((long)ppplStack_1b0 < 0) {
              __ZdlPv(ppplStack_1c0);
            }
            if ((char)bStack_209 < '\0') {
              __ZdlPv(pppppuStack_220);
            }
            if (cStack_1c1 < '\0') {
              __ZdlPv(appppuStack_1d8[0]);
            }
            if (lStack_1e0 < 0) {
              __ZdlPv(uStack_1f0);
            }
            if (cStack_1f1 < '\0') {
              __ZdlPv(auStack_208[0]);
            }
            func_0x000105687ee0(&pplStack_190);
            goto LAB_109c1e294;
          }
          FUN_109c1bed0(&pplStack_190,*(undefined8 *)(*(long *)(lVar24 + 0xe0) + 0x20));
          FUN_109c18570(&ppplStack_1c0,&pplStack_190);
          func_0x000109c1eab4(plVar18,&ppplStack_1c0);
          ppplVar33 = ppplStack_1b8;
          if ((undefined8 ****)ppplStack_1b8 != (undefined8 ****)0x0) {
            ppppuVar3 = (undefined8 ****)(ppplStack_1b8 + 1);
            do {
              pppuVar27 = *ppppuVar3;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(ppppuVar3,0x10);
              if (bVar11) {
                *ppppuVar3 = (undefined8 ***)((long)pppuVar27 + -1);
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (pppuVar27 == (undefined8 ***)0x0) {
              (*(code *)(*ppplStack_1b8)[2])(ppplStack_1b8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppplVar33);
            }
          }
          FUN_109c180ec(&pplStack_190);
          pplStack_190 = (long **)0x0;
          plStack_188 = (long *)0x0;
          FUN_109c1e9b8(*(long *)(*(long *)(lVar24 + 0x108) + (long)iVar45 * 0x18) + lVar41 * 0x10,
                        &pplStack_190);
          plVar19 = plStack_188;
          if (plStack_188 != (long *)0x0) {
            plVar2 = plStack_188 + 1;
            do {
              lVar41 = *plVar2;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar11) {
                *plVar2 = lVar41 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (lVar41 == 0) {
              (**(code **)(*plStack_188 + 0x10))(plStack_188);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
            }
          }
          uVar21 = uVar21 + 1;
          lVar41 = *plVar17;
        } while (uVar21 < (ulong)(plVar17[1] - lVar41 >> 3));
      }
    }
    pplStack_190 = &plStack_1a8;
    func_0x0001092a9abc(&pplStack_190);
    *pbVar1 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
LAB_109c1e288:
  func_0x000105688514(&UNK_10f5a38f8);
LAB_109c1e294:
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x109c1e298);
  (*pcVar14)();
}



/* Entry: 109c1d680; end: 109c1e4fb;  */

void FUN_109c1d680(long param_1,long param_2,long *param_3,long *param_4)

{
  byte *pbVar1;
  long *plVar2;
  undefined8 ****ppppuVar3;
  byte bVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char cVar10;
  bool bVar11;
  undefined8 ******ppppppuVar12;
  undefined8 uVar13;
  code *pcVar14;
  undefined8 *puVar15;
  undefined8 *****pppppuVar16;
  long *plVar17;
  int *piVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined1 uVar22;
  uint *puVar23;
  uint *puVar24;
  undefined8 ***pppuVar25;
  undefined8 uVar26;
  uint *puVar27;
  ulong uVar29;
  ulong uVar30;
  long ***ppplVar31;
  long lVar32;
  int *piVar33;
  uint *puVar34;
  undefined8 *puVar35;
  long lVar36;
  int *piVar37;
  long lVar38;
  ulong uVar39;
  long lVar40;
  long lVar41;
  int iVar42;
  undefined8 *****pppppuStack_1a8;
  ulong uStack_1a0;
  byte bStack_191;
  undefined8 *****pppppuStack_190;
  ulong uStack_188;
  byte bStack_179;
  undefined1 auStack_178 [24];
  undefined8 *****pppppuStack_160;
  ulong uStack_158;
  byte bStack_149;
  undefined8 auStack_148 [2];
  char cStack_131;
  undefined8 uStack_130;
  long *plStack_128;
  long lStack_120;
  undefined8 ****appppuStack_118 [2];
  char cStack_101;
  long ***ppplStack_100;
  long ***ppplStack_f8;
  long ***ppplStack_f0;
  long *plStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long **pplStack_d0;
  long *plStack_c8;
  long lStack_88;
  uint *puVar28;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(char *)(param_1 + 0x180) != '\x01') || ((*(byte *)(param_1 + 0x181) & 1) == 0)) {
    pbVar1 = (byte *)(param_1 + 0x182);
    do {
      bVar4 = *pbVar1;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar11) {
        *pbVar1 = 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if ((bVar4 & 1) != 0) goto LAB_109c1e288;
    piVar33 = *(int **)(param_1 + 0x168);
    piVar37 = *(int **)(param_1 + 0x170);
    if (piVar33 != piVar37) {
      do {
        iVar42 = **(int **)(*(long *)(param_1 + 0x48) + (long)*piVar33 * 0x18);
        if (((iVar42 < *(int *)(param_1 + 0x28)) &&
            (plVar17 = (long *)(*(long *)(param_1 + 0x88) + (long)iVar42 * 0x18),
            piVar18 = (int *)*plVar17, plVar17[1] - (long)piVar18 == 4)) && (*piVar18 == 1)) {
          lVar40 = *(long *)(*(long *)(param_1 + 0x10) + (long)iVar42 * 0x10);
          if (((char)piVar33[0x6b] == '\x01') && (piVar33[0x67] == 2)) {
            if ((*(int *)(lVar40 + 0x7c) + -0x80 == piVar33[0x6a]) &&
               (ABS(*(float *)(lVar40 + 0x78) - (float)piVar33[0x82]) <= 0.001)) {
LAB_109c1d7bc:
              lVar21 = lVar40;
              ___dynamic_cast(lVar40,&PTR_DAT_110b2c3c0,&PTR_DAT_110b2c850,0);
              if ((lVar21 != 0) ||
                 ((lVar21 = lVar40, ___dynamic_cast(lVar40,&PTR_DAT_110b2c3c0,&PTR_DAT_110b2c910,0),
                  lVar21 != 0 ||
                  (lVar21 = lVar40, ___dynamic_cast(lVar40,&PTR_DAT_110b2c3c0,&PTR_DAT_110b2cf00,0),
                  lVar21 != 0)))) {
                piVar18 = (int *)*param_3;
                piVar5 = (int *)param_3[1];
                if (piVar18 == piVar5) {
LAB_109c1d838:
                  if (piVar18 != piVar5) goto LAB_109c1d95c;
                }
                else {
                  do {
                    if (iVar42 == *piVar18) goto LAB_109c1d838;
                    piVar18 = piVar18 + 2;
                  } while (piVar18 != piVar5);
                }
                *(undefined4 *)(lVar40 + 0x80) = 0;
                *(undefined1 *)(lVar40 + 0x84) = 1;
                piVar18 = (int *)(*(ulong *)(piVar33 + 0x42) & 0xfffffffffffffffc);
                if (*(char *)((long)piVar18 + 0x17) < '\0') {
                  if (*(long *)(piVar18 + 2) == 5) {
                    piVar18 = *(int **)piVar18;
                    goto LAB_109c1d874;
                  }
                }
                else if (*(char *)((long)piVar18 + 0x17) == '\x05') {
LAB_109c1d874:
                  if (*piVar18 == 0x756c6572 && (char)piVar18[1] == '6') {
                    iVar42 = 0;
                    if ((*(byte *)((long)piVar33 + 0x1f) >> 2 & 1) != 0) {
                      iVar42 = piVar33[0x7a];
                    }
                    *(int *)(lVar40 + 0x80) = iVar42;
                    *(undefined1 *)(lVar40 + 0x84) = 1;
                    iVar42 = 0x40c00000;
                    if ((*(byte *)((long)piVar33 + 0x1f) >> 3 & 1) != 0) {
                      iVar42 = piVar33[0x7b];
                    }
                    *(int *)(lVar40 + 0x88) = iVar42;
                    *(undefined1 *)(lVar40 + 0x8c) = 1;
                  }
                }
                puVar15 = (undefined8 *)0xa8;
                __Znwm();
                puVar15[1] = 0;
                puVar15[2] = 0;
                *puVar15 = &PTR_FUN_110b2c278;
                puVar15[0x11] = 0;
                puVar15[0x10] = 0;
                puVar15[0x13] = 0;
                puVar15[0x12] = 0;
                puVar15[0x14] = 0;
                puVar15[0xd] = 0;
                puVar15[0xc] = 0;
                puVar15[0xf] = 0;
                puVar15[0xe] = 0;
                puVar15[9] = 0;
                puVar15[8] = 0;
                puVar15[0xb] = 0;
                puVar15[10] = 0;
                puVar15[5] = 0;
                puVar15[4] = 0;
                puVar15[7] = 0;
                puVar15[6] = 0;
                *(undefined1 *)((long)puVar15 + 0x79) = 1;
                puVar15[0x10] = 0;
                puVar15[0x11] = 0;
                *(undefined4 *)(puVar15 + 0x12) = 0x3f800000;
                puVar15[3] = &PTR_DAT_110b2c2c8;
                puVar35 = (undefined8 *)(*(long *)(param_1 + 0x10) + (long)*piVar33 * 0x10);
                plVar17 = (long *)puVar35[1];
                *puVar35 = puVar15 + 3;
                puVar35[1] = puVar15;
                if (plVar17 != (long *)0x0) {
                  plVar2 = plVar17 + 1;
                  do {
                    lVar40 = *plVar2;
                    cVar10 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                    if (bVar11) {
                      *plVar2 = lVar40 + -1;
                      cVar10 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar10 != '\0');
                  if (lVar40 == 0) {
                    (**(code **)(*plVar17 + 0x10))(plVar17);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
                  }
                }
              }
            }
          }
          else if (lVar40 != 0) goto LAB_109c1d7bc;
        }
LAB_109c1d95c:
        piVar33 = piVar33 + 0x84;
      } while (piVar33 != piVar37);
      piVar33 = *(int **)(param_1 + 0x168);
      piVar37 = *(int **)(param_1 + 0x170);
    }
    for (; piVar37 != piVar33; piVar37 = piVar37 + -0x84) {
      FUN_109c0877c(piVar37 + -0x82);
    }
    *(int **)(param_1 + 0x170) = piVar33;
    for (plVar17 = *(long **)(param_2 + 0x10); plVar17 != (long *)0x0; plVar17 = (long *)*plVar17) {
      lVar40 = *(long *)(param_1 + 0x120);
      FUN_1094dc248(lVar40,*(undefined8 *)(param_1 + 0x128),plVar17 + 2,&pplStack_d0);
      lVar40 = lVar40 - *(long *)(param_1 + 0x120);
      FUN_109c182f4(*(long *)(param_1 + 0x108) + lVar40 + (long)*(int *)(param_1 + 0x28) * 0x18,1);
      uVar19 = (lVar40 >> 3) * -0x5555555555555555;
      if ((*(ulong *)(*(long *)(param_1 + 0x150) + (uVar19 >> 6) * 8) >> (uVar19 & 0x3f) & 1) == 0)
      {
        func_0x000109c1e534(*(undefined8 *)
                             (*(long *)(param_1 + 0x108) + lVar40 +
                             (long)*(int *)(param_1 + 0x28) * 0x18),plVar17 + 5);
      }
      else {
        FUN_109c1bed0(&pplStack_d0,**(undefined8 **)(param_1 + 0xe0),plVar17[5]);
        func_0x000109c18360(*(undefined8 *)
                             (*(long *)(param_1 + 0x108) + lVar40 +
                             (long)*(int *)(param_1 + 0x28) * 0x18),&pplStack_d0);
        FUN_109c180ec(&pplStack_d0);
      }
    }
    plStack_e8 = (long *)0x0;
    lStack_e0 = 0;
    uStack_d8 = 0;
    FUN_1099f5244(&plStack_e8,*(long *)(param_1 + 0x88),*(long *)(param_1 + 0x90),
                  (*(long *)(param_1 + 0x90) - *(long *)(param_1 + 0x88) >> 3) * -0x5555555555555555
                 );
    puVar34 = (uint *)*param_3;
    puVar6 = (uint *)param_3[1];
    puVar24 = puVar34;
    if ((puVar34 != puVar6) && (puVar34 + 2 != puVar6)) {
      uVar26 = *(undefined8 *)puVar34;
      puVar23 = puVar34;
      puVar27 = puVar34 + 2;
      do {
        puVar28 = puVar27 + 2;
        puVar24 = puVar27;
        uVar13 = *(undefined8 *)puVar27;
        if ((int)*(undefined8 *)puVar27 <= (int)uVar26) {
          puVar24 = puVar23;
          uVar13 = uVar26;
        }
        uVar26 = uVar13;
        puVar23 = puVar24;
        puVar27 = puVar28;
      } while (puVar28 != puVar6);
    }
    uVar7 = *puVar24;
    if (puVar34 != puVar6) {
      do {
        uVar8 = *puVar34;
        if (((int)uVar8 < 0) ||
           ((int)((ulong)(lStack_e0 - (long)plStack_e8) >> 3) * -0x55555555 <= (int)uVar8)) {
          __ZNSt3__19to_stringEi(auStack_148,uVar8);
          FUN_10928a5e0(&uStack_130,&UNK_10f5a3940,auStack_148);
          FUN_109259240(appppuStack_118,&uStack_130,&UNK_10f5a395b);
          __ZNSt3__19to_stringEm
                    (&pppppuStack_160,(lStack_e0 - (long)plStack_e8 >> 3) * -0x5555555555555555);
          if (-1 < (char)bStack_149) {
            uStack_158 = (ulong)bStack_149;
            pppppuStack_160 = &pppppuStack_160;
          }
          pppppuVar16 = appppuStack_118;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (pppppuVar16,pppppuStack_160,uStack_158);
          ppplStack_f8 = (long ***)pppppuVar16[1];
          ppplStack_100 = (long ***)*pppppuVar16;
          ppplStack_f0 = (long ***)pppppuVar16[2];
          pppppuVar16[1] = (undefined8 ****)0x0;
          pppppuVar16[2] = (undefined8 ****)0x0;
          *pppppuVar16 = (undefined8 ****)0x0;
          FUN_109259240(&pplStack_d0,&ppplStack_100,&DAT_10f684600);
          func_0x000105687ee0(&pplStack_d0);
          goto LAB_109c1e294;
        }
        uVar9 = puVar34[1];
        if (((int)uVar9 < 0) ||
           (puVar35 = (undefined8 *)plStack_e8[(ulong)uVar8 * 3],
           (int)((ulong)((long)(plStack_e8 + (ulong)uVar8 * 3)[1] - (long)puVar35) >> 2) <=
           (int)uVar9)) {
          __ZNSt3__19to_stringEi(auStack_178);
          FUN_10928a5e0(&pppppuStack_160,&UNK_10f5a396e,auStack_178);
          FUN_109259240(auStack_148,&pppppuStack_160,&UNK_10f5a3983);
          __ZNSt3__19to_stringEi(&pppppuStack_190,*puVar34);
          if (-1 < (char)bStack_179) {
            uStack_188 = (ulong)bStack_179;
            pppppuStack_190 = &pppppuStack_190;
          }
          puVar35 = auStack_148;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (puVar35,pppppuStack_190,uStack_188);
          plStack_128 = (long *)puVar35[1];
          uStack_130 = *puVar35;
          lStack_120 = puVar35[2];
          puVar35[1] = 0;
          puVar35[2] = 0;
          *puVar35 = 0;
          FUN_109259240(appppuStack_118,&uStack_130,&UNK_10f5a399c);
          __ZNSt3__19to_stringEm
                    (&pppppuStack_1a8,
                     (long)(plStack_e8 + (long)(int)*puVar34 * 3)[1] -
                     (long)plStack_e8[(long)(int)*puVar34 * 3] >> 2);
          if (-1 < (char)bStack_191) {
            uStack_1a0 = (ulong)bStack_191;
            pppppuStack_1a8 = &pppppuStack_1a8;
          }
          pppppuVar16 = appppuStack_118;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (pppppuVar16,pppppuStack_1a8,uStack_1a0);
          ppplStack_f8 = (long ***)pppppuVar16[1];
          ppplStack_100 = (long ***)*pppppuVar16;
          ppplStack_f0 = (long ***)pppppuVar16[2];
          pppppuVar16[1] = (undefined8 ****)0x0;
          pppppuVar16[2] = (undefined8 ****)0x0;
          *pppppuVar16 = (undefined8 ****)0x0;
          FUN_109259240(&pplStack_d0,&ppplStack_100,&UNK_10f5a39a9);
          func_0x000105687ee0(&pplStack_d0);
          goto LAB_109c1e294;
        }
        *(int *)((long)puVar35 + (ulong)uVar9 * 4) = *(int *)((long)puVar35 + (ulong)uVar9 * 4) + 1;
        puVar34 = puVar34 + 2;
      } while (puVar34 != puVar6);
    }
    FUN_109c1c088(*(undefined8 *)(param_1 + 0xe0));
    if (-1 < (int)uVar7) {
      lVar40 = 0;
      do {
        if ((*(char *)(param_1 + 0x180) == '\x01') && ((*(byte *)(param_1 + 0x181) & 1) != 0))
        break;
        puVar35 = *(undefined8 **)(param_1 + 0xe0);
        (**(code **)(*(long *)puVar35[2] + 8))();
        (**(code **)(*(long *)*puVar35 + 8))();
        (**(code **)(*(long *)puVar35[4] + 8))();
        lVar41 = *(long *)(param_1 + 0x10);
        plVar17 = (long *)(*(long *)(param_1 + 0x48) + lVar40 * 0x18);
        lVar21 = *plVar17;
        lVar36 = plVar17[1];
        uVar19 = lVar36 - lVar21 >> 3;
        FUN_109c208d4(&pplStack_d0,uVar19);
        if (lVar36 != lVar21) {
          lVar38 = 0;
          uVar39 = 0;
          do {
            lVar20 = *(long *)(*(long *)(*(long *)(param_1 + 0x48) + lVar40 * 0x18) + uVar39 * 8);
            func_0x000109c1e534((long)pplStack_d0 + lVar38,
                                *(long *)(*(long *)(param_1 + 0x108) + (long)(int)lVar20 * 0x18) +
                                (lVar20 >> 0x20) * 0x10);
            uVar39 = uVar39 + 1;
            lVar38 = lVar38 + 0x10;
          } while (uVar19 != uVar39);
        }
        ppplStack_100 = (long ***)0x0;
        ppplStack_f8 = (long ***)0x0;
        ppplStack_f0 = (long ***)0x0;
        func_0x00010737fadc(appppuStack_118,uVar19);
        if (lVar36 == lVar21) {
          uVar22 = 1;
        }
        else {
          uVar39 = 0;
          lVar38 = *(long *)(*(long *)(param_1 + 0x48) + lVar40 * 0x18);
          uVar22 = 1;
          do {
            lVar20 = *(long *)(lVar38 + uVar39 * 8);
            lVar32 = lVar20 >> 0x20;
            uVar29 = uVar39 >> 6;
            uVar30 = 1L << (uVar39 & 0x3f);
            iVar42 = *(int *)(plStack_e8[(long)(int)lVar20 * 3] + lVar32 * 4) + -1;
            *(int *)((long)plStack_e8[(long)(int)lVar20 * 3] + lVar32 * 4) = iVar42;
            if (iVar42 == 0) {
              ppplVar31 = (long ***)((ulong)appppuStack_118[0][uVar29] | uVar30);
            }
            else {
              uVar22 = 0;
              ppplVar31 = (long ***)
                          ((ulong)appppuStack_118[0][uVar29] & (uVar30 ^ 0xffffffffffffffff));
            }
            appppuStack_118[0][uVar29] = ppplVar31;
            uVar39 = uVar39 + 1;
          } while (uVar19 != uVar39);
        }
        plVar17 = *(long **)(lVar41 + lVar40 * 0x10);
        *(undefined1 *)((long)plVar17 + 99) = uVar22;
        (**(code **)(*plVar17 + 0x10))(plVar17,&pplStack_d0,&ppplStack_100);
        if (lVar36 != lVar21) {
          uVar39 = 0;
          do {
            if (((ulong)appppuStack_118[0][uVar39 >> 6] >> (uVar39 & 0x3f) & 1) != 0) {
              lVar21 = *(long *)(*(long *)(*(long *)(param_1 + 0x48) + lVar40 * 0x18) + uVar39 * 8);
              uStack_130 = 0;
              plStack_128 = (long *)0x0;
              FUN_109c1e9b8(*(long *)(*(long *)(param_1 + 0x108) + (long)(int)lVar21 * 0x18) +
                            (lVar21 >> 0x20) * 0x10,&uStack_130);
              plVar17 = plStack_128;
              if (plStack_128 != (long *)0x0) {
                plVar2 = plStack_128 + 1;
                do {
                  lVar21 = *plVar2;
                  cVar10 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar11) {
                    *plVar2 = lVar21 + -1;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                } while (cVar10 != '\0');
                if (lVar21 == 0) {
                  (**(code **)(*plStack_128 + 0x10))(plStack_128);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
                }
              }
            }
            uVar39 = uVar39 + 1;
          } while (uVar39 != uVar19);
        }
        FUN_109c182f4(*(long *)(param_1 + 0x108) + lVar40 * 0x18,
                      (long)ppplStack_f8 - (long)ppplStack_100 >> 4);
        if (ppplStack_f8 != ppplStack_100) {
          lVar36 = 0;
          lVar21 = 0;
          uVar19 = 0;
          do {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (*(long *)((long)ppplStack_100 + lVar21) + 0x20,
                       *(long *)(*(long *)(param_1 + 0x30) + lVar40 * 0x18) + lVar36);
            func_0x000109c1e534(*(long *)(*(long *)(param_1 + 0x108) + lVar40 * 0x18) + lVar21,
                                (long)ppplStack_100 + lVar21);
            uVar19 = uVar19 + 1;
            lVar21 = lVar21 + 0x10;
            lVar36 = lVar36 + 0x18;
          } while (uVar19 < (ulong)((long)ppplStack_f8 - (long)ppplStack_100 >> 4));
        }
        if (appppuStack_118[0] != (long ****)0x0) {
          __ZdlPv();
        }
        appppuStack_118[0] = &ppplStack_100;
        FUN_109c2070c(appppuStack_118);
        ppplStack_100 = &pplStack_d0;
        FUN_109c2070c(&ppplStack_100);
        lVar40 = lVar40 + 1;
      } while (lVar40 != (ulong)uVar7 + 1);
    }
    *(int *)(*(long *)(param_1 + 0xe0) + 0x88) = *(int *)(*(long *)(param_1 + 0xe0) + 0x88) + 1;
    if ((*(char *)(param_1 + 0x180) != '\x01') || ((*(byte *)(param_1 + 0x181) & 1) == 0)) {
      lVar40 = *param_4;
      lVar21 = param_4[1];
      while (lVar21 != lVar40) {
        lVar21 = lVar21 + -0x10;
        FUN_10959b818();
      }
      param_4[1] = lVar40;
      FUN_109c1ea1c(param_4,param_3[1] - *param_3 >> 3);
      lVar40 = *param_3;
      if (param_3[1] != lVar40) {
        uVar19 = 0;
        do {
          piVar33 = (int *)(lVar40 + uVar19 * 8);
          iVar42 = *piVar33;
          lVar40 = (long)piVar33[1];
          if (*(long *)(*(long *)(*(long *)(param_1 + 0x108) + (long)iVar42 * 0x18) + lVar40 * 0x10)
              == 0) {
            __ZNSt3__19to_stringEi(auStack_148,(long)iVar42);
            FUN_10928a5e0(&uStack_130,&UNK_10f5a39b3,auStack_148);
            FUN_109259240(appppuStack_118,&uStack_130,&DAT_10f42647b);
            __ZNSt3__19to_stringEi(&pppppuStack_160,lVar40);
            ppppppuVar12 = (undefined8 ******)pppppuStack_160;
            if (-1 < (char)bStack_149) {
              uStack_158 = (ulong)bStack_149;
              ppppppuVar12 = &pppppuStack_160;
            }
            pppppuVar16 = appppuStack_118;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (pppppuVar16,ppppppuVar12,uStack_158);
            ppplStack_f8 = (long ***)pppppuVar16[1];
            ppplStack_100 = (long ***)*pppppuVar16;
            ppplStack_f0 = (long ***)pppppuVar16[2];
            pppppuVar16[1] = (undefined8 ****)0x0;
            pppppuVar16[2] = (undefined8 ****)0x0;
            *pppppuVar16 = (undefined8 ****)0x0;
            FUN_109259240(&pplStack_d0,&ppplStack_100,&UNK_10f5a39ed);
            if ((long)ppplStack_f0 < 0) {
              __ZdlPv(ppplStack_100);
            }
            if ((char)bStack_149 < '\0') {
              __ZdlPv(pppppuStack_160);
            }
            if (cStack_101 < '\0') {
              __ZdlPv(appppuStack_118[0]);
            }
            if (lStack_120 < 0) {
              __ZdlPv(uStack_130);
            }
            if (cStack_131 < '\0') {
              __ZdlPv(auStack_148[0]);
            }
            func_0x000105687ee0(&pplStack_d0);
            goto LAB_109c1e294;
          }
          FUN_109c1bed0(&pplStack_d0,*(undefined8 *)(*(long *)(param_1 + 0xe0) + 0x20));
          FUN_109c18570(&ppplStack_100,&pplStack_d0);
          func_0x000109c1eab4(param_4,&ppplStack_100);
          ppplVar31 = ppplStack_f8;
          if ((undefined8 ****)ppplStack_f8 != (undefined8 ****)0x0) {
            ppppuVar3 = (undefined8 ****)(ppplStack_f8 + 1);
            do {
              pppuVar25 = *ppppuVar3;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(ppppuVar3,0x10);
              if (bVar11) {
                *ppppuVar3 = (undefined8 ***)((long)pppuVar25 + -1);
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (pppuVar25 == (undefined8 ***)0x0) {
              (*(code *)(*ppplStack_f8)[2])(ppplStack_f8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppplVar31);
            }
          }
          FUN_109c180ec(&pplStack_d0);
          pplStack_d0 = (long **)0x0;
          plStack_c8 = (long *)0x0;
          FUN_109c1e9b8(*(long *)(*(long *)(param_1 + 0x108) + (long)iVar42 * 0x18) + lVar40 * 0x10,
                        &pplStack_d0);
          plVar17 = plStack_c8;
          if (plStack_c8 != (long *)0x0) {
            plVar2 = plStack_c8 + 1;
            do {
              lVar40 = *plVar2;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar11) {
                *plVar2 = lVar40 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (lVar40 == 0) {
              (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
            }
          }
          uVar19 = uVar19 + 1;
          lVar40 = *param_3;
        } while (uVar19 < (ulong)(param_3[1] - lVar40 >> 3));
      }
    }
    pplStack_d0 = &plStack_e8;
    func_0x0001092a9abc(&pplStack_d0);
    *pbVar1 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
LAB_109c1e288:
  func_0x000105688514(&UNK_10f5a38f8);
LAB_109c1e294:
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x109c1e298);
  (*pcVar14)();
}



/* Entry: 109c1e4fc; end: 109c1e5af;  */

undefined8 * FUN_109c1e4fc(undefined8 *param_1)

{
  FUN_10959b818(param_1 + 3);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 109c1e5b0; end: 109c1e81f;  */

void FUN_109c1e5b0(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined1 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  long lStack_148;
  long lStack_140;
  undefined1 auStack_d0 [40];
  long lStack_a8;
  long lStack_a0;
  undefined8 auStack_90 [2];
  char cStack_79;
  long *plStack_70;
  long lStack_68;
  
  puVar6 = auStack_d0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109c2077c(&lStack_a8,(param_3[1] - *param_3 >> 3) * -0x5555555555555555);
  lVar8 = *param_3;
  if (param_3[1] != lVar8) {
    lVar11 = 0;
    lVar10 = 0;
    uVar12 = 0;
    do {
      lVar13 = param_1 + 0x60;
      FUN_109c207f0(lVar13,lVar8 + lVar10);
      if (lVar13 == 0) {
        uVar9 = 0xffffffffffffffff;
      }
      else {
        uVar9 = *(ulong *)(lVar13 + 0x28);
      }
      *(ulong *)(lStack_a8 + lVar11) = uVar9;
      if (((int)uVar9 == -1) && (uVar9 >> 0x20 == 0xffffffff)) {
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (auStack_90,&UNK_10f5a38d3,*param_3 + lVar10);
        FUN_109259240(auStack_d0,auStack_90,&UNK_10f5a38e3);
        func_0x000105687ee0(auStack_d0);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x109c1e7a0);
        (*pcVar4)();
      }
      uVar12 = uVar12 + 1;
      lVar8 = *param_3;
      lVar10 = lVar10 + 0x18;
      lVar11 = lVar11 + 8;
    } while (uVar12 < (ulong)((param_3[1] - lVar8 >> 3) * -0x5555555555555555));
  }
  FUN_109c20698(auStack_90,*(undefined8 *)(param_1 + 0x120),param_2);
  FUN_109c20e0c(auStack_d0,auStack_90,1);
  plVar7 = &lStack_a8;
  FUN_109c1d680(param_1,auStack_d0,plVar7,param_4);
  func_0x000109c213a4(auStack_d0);
  if (plStack_70 != (long *)0x0) {
    plVar1 = plStack_70 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
    }
  }
  if (cStack_79 < '\0') {
    __ZdlPv(auStack_90[0]);
  }
  lVar8 = lStack_a8;
  if (lStack_a8 != 0) {
    lStack_a0 = lStack_a8;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  func_0x000109c213a4(auStack_d0);
  FUN_109c1e4fc(auStack_90);
  if (lStack_a8 != 0) {
    lStack_a0 = lStack_a8;
    __ZdlPv();
  }
  __Unwind_Resume();
  FUN_109c2077c(&lStack_148,(plVar7[1] - *plVar7 >> 3) * -0x5555555555555555);
  lVar10 = *plVar7;
  if (plVar7[1] != lVar10) {
    lVar13 = 0;
    lVar11 = 0;
    uVar12 = 0;
    do {
      lVar5 = lVar8 + 0x60;
      FUN_109c207f0(lVar5,lVar10 + lVar11);
      if (lVar5 == 0) {
        uVar9 = 0xffffffffffffffff;
      }
      else {
        uVar9 = *(ulong *)(lVar5 + 0x28);
      }
      *(ulong *)(lStack_148 + lVar13) = uVar9;
      if (((int)uVar9 == -1) && (uVar9 >> 0x20 == 0xffffffff)) {
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (auStack_178,&UNK_10f5a38d3,*plVar7 + lVar11);
        FUN_109259240(auStack_160,auStack_178,&UNK_10f5a38e3);
        func_0x000105687ee0(auStack_160);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x109c1e964);
        (*pcVar4)();
      }
      uVar12 = uVar12 + 1;
      lVar10 = *plVar7;
      lVar11 = lVar11 + 0x18;
      lVar13 = lVar13 + 8;
    } while (uVar12 < (ulong)((plVar7[1] - lVar10 >> 3) * -0x5555555555555555));
  }
  FUN_109c1d680(lVar8,puVar6,&lStack_148,param_4);
  if (lStack_148 != 0) {
    lStack_140 = lStack_148;
    __ZdlPv();
  }
  return;
}



/* Entry: 109c1e820; end: 109c1e9b7;  */

void FUN_109c1e820(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  long lStack_78;
  long lStack_70;
  
  FUN_109c2077c(&lStack_78,(param_3[1] - *param_3 >> 3) * -0x5555555555555555);
  lVar3 = *param_3;
  if (param_3[1] != lVar3) {
    lVar6 = 0;
    lVar5 = 0;
    uVar7 = 0;
    do {
      lVar2 = param_1 + 0x60;
      FUN_109c207f0(lVar2,lVar3 + lVar5);
      if (lVar2 == 0) {
        uVar4 = 0xffffffffffffffff;
      }
      else {
        uVar4 = *(ulong *)(lVar2 + 0x28);
      }
      *(ulong *)(lStack_78 + lVar6) = uVar4;
      if (((int)uVar4 == -1) && (uVar4 >> 0x20 == 0xffffffff)) {
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (auStack_a8,&UNK_10f5a38d3,*param_3 + lVar5);
        FUN_109259240(auStack_90,auStack_a8,&UNK_10f5a38e3);
        func_0x000105687ee0(auStack_90);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x109c1e964);
        (*pcVar1)();
      }
      uVar7 = uVar7 + 1;
      lVar3 = *param_3;
      lVar5 = lVar5 + 0x18;
      lVar6 = lVar6 + 8;
    } while (uVar7 < (ulong)((param_3[1] - lVar3 >> 3) * -0x5555555555555555));
  }
  FUN_109c1d680(param_1,param_2,&lStack_78,param_4);
  if (lStack_78 != 0) {
    lStack_70 = lStack_78;
    __ZdlPv();
  }
  return;
}



/* Entry: 109c1e9b8; end: 109c1ea1b;  */

undefined8 * FUN_109c1e9b8(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 109c1ea1c; end: 109c1eb97;  */

void FUN_109c1ea1c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puStack_f8;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar6 = *param_1;
  if ((undefined8 *)(param_1[2] - lVar6 >> 4) < param_2) {
    if ((ulong)param_2 >> 0x3c != 0) {
      FUN_109c184dc();
      puVar5 = (undefined8 *)param_1[1];
      if (puVar5 < (undefined8 *)param_1[2]) {
        uVar10 = *param_2;
        puVar4 = puVar5 + 2;
        puVar5[1] = param_2[1];
        *puVar5 = uVar10;
        *param_2 = 0;
        param_2[1] = 0;
      }
      else {
        lVar6 = (long)puVar5 - *param_1;
        uVar1 = (lVar6 >> 4) + 1;
        if (uVar1 >> 0x3c != 0) {
          FUN_109c184dc();
          puVar4 = (undefined8 *)0xf0;
          __Znwm();
          *puVar4 = &PTR_FUN_110b2bad8;
          puVar4[1] = 0;
          puVar4[3] = 0;
          puVar4[2] = 0;
          puVar4[5] = 0;
          puVar4[4] = 0;
          puVar4[7] = 0;
          puVar4[6] = 0;
          puVar4[9] = 0;
          puVar4[8] = 0;
          puVar4[0xb] = 0;
          puVar4[10] = 0;
          puVar4[0xd] = 0;
          puVar4[0xc] = 0;
          puVar4[0xf] = 0;
          puVar4[0xe] = 0;
          puVar4[0x11] = 0;
          puVar4[0x10] = 0;
          puVar4[0x13] = 0;
          puVar4[0x12] = 0;
          puVar4[0x15] = 0;
          puVar4[0x14] = 0;
          puVar4[0x17] = 0;
          puVar4[0x16] = 0;
          puVar4[0x18] = 0;
          puVar4[0x19] = &DAT_11383d918;
          puVar4[0x1b] = 0;
          puVar4[0x1c] = 0;
          puVar4[0x1a] = &DAT_11383d918;
          *(undefined4 *)(puVar4 + 0x1d) = 0;
          puVar5 = puVar4;
          func_0x00010b4d15d4();
          if (((ulong)puVar5 & 1) != 0) {
            puStack_f8 = puVar4;
            FUN_109c1ec64(param_1,&puStack_f8);
            FUN_109c0e824(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR___ZdlPv_110352258)();
            return;
          }
          func_0x000105688514(&UNK_10f5a3a00);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x109c1ec48);
          (*pcVar2)();
        }
        uVar7 = param_1[2] - *param_1;
        uVar9 = (long)uVar7 >> 3;
        if (uVar9 <= uVar1) {
          uVar9 = uVar1;
        }
        if (0x7fffffffffffffef < uVar7) {
          uVar9 = 0xfffffffffffffff;
        }
        plVar3 = param_1;
        plStack_98 = param_1;
        FUN_109c184f0();
        puVar5 = (undefined8 *)((long)plVar3 + lVar6);
        uVar10 = *param_2;
        puVar4 = puVar5 + 2;
        puVar5[1] = param_2[1];
        *puVar5 = uVar10;
        *param_2 = 0;
        param_2[1] = 0;
        lVar6 = (long)puVar5 - (param_1[1] - *param_1);
        _memcpy(lVar6);
        lStack_b8 = *param_1;
        *param_1 = lVar6;
        param_1[1] = (long)puVar4;
        lStack_a0 = param_1[2];
        param_1[2] = (long)(plVar3 + uVar9 * 2);
        lStack_b0 = lStack_b8;
        lStack_a8 = lStack_b8;
        func_0x000109c18524(&lStack_b8);
      }
      param_1[1] = (long)puVar4;
      return;
    }
    lVar8 = param_1[1];
    plVar3 = param_1;
    plStack_38 = param_1;
    FUN_109c184f0();
    lVar6 = (long)plVar3 + (lVar8 - lVar6);
    lVar8 = lVar6 - (param_1[1] - *param_1);
    _memcpy(lVar8);
    lStack_58 = *param_1;
    *param_1 = lVar8;
    param_1[1] = lVar6;
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar3 + (long)param_2 * 2);
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x000109c18524(&lStack_58);
  }
  return;
}



/* Entry: 109c1eb98; end: 109c1ec63;  */

void FUN_109c1eb98(undefined8 param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puStack_38;
  
  puVar2 = (undefined8 *)0xf0;
  __Znwm();
  *puVar2 = &PTR_FUN_110b2bad8;
  puVar2[1] = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[0xb] = 0;
  puVar2[10] = 0;
  puVar2[0xd] = 0;
  puVar2[0xc] = 0;
  puVar2[0xf] = 0;
  puVar2[0xe] = 0;
  puVar2[0x11] = 0;
  puVar2[0x10] = 0;
  puVar2[0x13] = 0;
  puVar2[0x12] = 0;
  puVar2[0x15] = 0;
  puVar2[0x14] = 0;
  puVar2[0x17] = 0;
  puVar2[0x16] = 0;
  puVar2[0x18] = 0;
  puVar2[0x19] = &DAT_11383d918;
  puVar2[0x1b] = 0;
  puVar2[0x1c] = 0;
  puVar2[0x1a] = &DAT_11383d918;
  *(undefined4 *)(puVar2 + 0x1d) = 0;
  puVar3 = puVar2;
  func_0x00010b4d15d4();
  if (((ulong)puVar3 & 1) != 0) {
    puStack_38 = puVar2;
    FUN_109c1ec64(param_1,&puStack_38);
    FUN_109c0e824(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  func_0x000105688514(&UNK_10f5a3a00);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109c1ec48);
  (*pcVar1)();
}



/* Entry: 109c1ec64; end: 109c2039b;  */

/* WARNING: Removing unreachable block (ram,0x000109c1eda8) */
/* WARNING: Removing unreachable block (ram,0x000109c1f16c) */

void FUN_109c1ec64(long param_1,long *param_2)

{
  dword *pdVar1;
  undefined4 *puVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  char cVar7;
  long *plVar8;
  code *pcVar9;
  bool bVar10;
  long lVar11;
  long *plVar12;
  dword *pdVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  dword *pdVar16;
  dword *pdVar17;
  char *pcVar18;
  int iVar19;
  uint uVar20;
  long lVar21;
  ulong *puVar22;
  uint *puVar23;
  undefined8 *puVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  dword *pdVar28;
  ulong uVar29;
  dword *pdVar30;
  ulong uVar31;
  ulong uVar32;
  long lVar33;
  long *plVar34;
  int iVar35;
  uint uVar36;
  ulong *puVar37;
  undefined8 *puVar38;
  int *piVar39;
  undefined4 *puVar40;
  undefined8 uVar41;
  dword *pdVar42;
  dword *pdVar43;
  long lVar44;
  undefined8 *puVar45;
  long lVar46;
  undefined4 *puVar47;
  float fVar48;
  undefined8 uVar49;
  int iStack_dc;
  uint uStack_c8;
  int iStack_c4;
  long lStack_c0;
  dword **ppdStack_b8;
  dword **ppdStack_b0;
  long lStack_a8;
  dword *pdStack_a0;
  dword *pdStack_98;
  dword *pdStack_90;
  dword *pdStack_88;
  dword *pdStack_80;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(*param_2 + 0x10) >> 2 & 1) == 0) {
    uVar3 = *(uint *)(*param_2 + 0xe8);
    if (uVar3 < 6) {
      pcVar18 = (&PTR_DAT_110b2c3f8)[uVar3];
    }
    else {
      pcVar18 = "OTHER";
    }
    func_0x000107c31940(&pdStack_a0,pcVar18);
    if (*(char *)(param_1 + 0x14f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x138));
    }
    *(dword **)(param_1 + 0x140) = pdStack_98;
    *(undefined8 *)(param_1 + 0x138) = pdStack_a0;
    *(dword **)(param_1 + 0x148) = pdStack_90;
    lVar21 = *param_2;
    if (3 < *(int *)(lVar21 + 0x18)) {
      if ((int)*(uint *)(lVar21 + 0x58) < 1) {
        func_0x000107c31940(&pdStack_a0,"data");
        FUN_109508250(param_1 + 0x120,&pdStack_a0,&pdStack_88,1);
      }
      else {
        uVar25 = *(ulong *)(lVar21 + 0x50);
        puVar22 = (ulong *)(lVar21 + 0x50);
        if ((uVar25 & 1) != 0) {
          puVar22 = (ulong *)(uVar25 + 7);
        }
        pdStack_98 = (dword *)0x0;
        pdStack_90 = (dword *)0x0;
        pdStack_a0 = (dword *)0x0;
        FUN_1093c7d00(&pdStack_a0,puVar22,puVar22 + *(uint *)(lVar21 + 0x58));
        func_0x000107c3193c(param_1 + 0x120);
        *(dword **)(param_1 + 0x128) = pdStack_98;
        *(dword **)(param_1 + 0x120) = pdStack_a0;
        *(dword **)(param_1 + 0x130) = pdStack_90;
        pdStack_98 = (dword *)0x0;
        pdStack_90 = (dword *)0x0;
        pdStack_a0 = (dword *)0x0;
        ppdStack_b8 = &pdStack_a0;
        func_0x000104c607c8(&ppdStack_b8);
      }
      uVar25 = (*(long *)(param_1 + 0x128) - *(long *)(param_1 + 0x120) >> 3) * -0x5555555555555555;
      iVar35 = (int)uVar25;
      if (*(int *)(*param_2 + 0x18) != iVar35 * 4) {
        func_0x000105688514(&UNK_10f5a3b0a);
        goto LAB_109c2021c;
      }
      puVar38 = *(undefined8 **)(*param_2 + 0x20);
      uVar32 = (ulong)iVar35;
      lVar33 = *(long *)(param_1 + 200);
      lVar21 = *(long *)(param_1 + 0xd0);
      lVar26 = lVar21 - lVar33 >> 3;
      bVar10 = uVar32 < (ulong)(lVar26 * -0x5555555555555555);
      uVar31 = uVar32 + lVar26 * 0x5555555555555555;
      if (bVar10 || uVar31 == 0) {
        if (bVar10) {
          lVar21 = lVar33 + (long)iVar35 * 0x18;
          goto LAB_109c1ef64;
        }
      }
      else if ((ulong)((*(long *)(param_1 + 0xd8) - lVar21 >> 3) * -0x5555555555555555) < uVar31) {
        if (0xaaaaaaaaaaaaaaa < uVar32) {
          func_0x000109c20988();
          goto LAB_109c2021c;
        }
        lVar26 = *(long *)(param_1 + 0xd8) - lVar33 >> 3;
        uVar29 = lVar26 * 0x5555555555555556;
        if (uVar29 < uVar32 || uVar29 - uVar32 == 0) {
          uVar29 = uVar32;
        }
        if (0x555555555555554 < (ulong)(lVar26 * -0x5555555555555555)) {
          uVar29 = 0xaaaaaaaaaaaaaaa;
        }
        if (0xaaaaaaaaaaaaaaa < uVar29) {
          func_0x000104c4f740();
          goto LAB_109c2021c;
        }
        lVar11 = uVar29 * 0x18;
        __Znwm();
        lVar26 = lVar11 + (lVar21 - lVar33);
        lVar46 = ((uVar31 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
        _bzero(lVar26,lVar46);
        if (lVar33 != lVar21) {
          lVar44 = 0;
          do {
            piVar39 = (int *)(lVar11 + lVar44);
            piVar39[0] = 0;
            piVar39[1] = 0;
            piVar39[2] = 0;
            piVar39[3] = 0;
            piVar39[4] = 0;
            piVar39[5] = 0;
            if (lVar11 != lVar33) {
              iVar19 = *(int *)(lVar33 + lVar44);
              if (iVar19 != 0) {
                _memmove(piVar39 + 1,lVar33 + lVar44 + 4,(long)iVar19 << 2);
              }
              *piVar39 = iVar19;
            }
            lVar44 = lVar44 + 0x18;
          } while (lVar33 + lVar44 != lVar21);
        }
        *(long *)(param_1 + 200) = lVar11;
        *(long *)(param_1 + 0xd0) = lVar26 + lVar46;
        *(ulong *)(param_1 + 0xd8) = lVar11 + uVar29 * 0x18;
        if (lVar33 != 0) {
          __ZdlPv(lVar33);
        }
      }
      else {
        lVar33 = ((uVar31 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
        _bzero(lVar21,lVar33);
        lVar21 = lVar21 + lVar33;
LAB_109c1ef64:
        *(long *)(param_1 + 0xd0) = lVar21;
      }
      if (0 < iVar35) {
        lVar21 = 0;
        uVar25 = uVar25 & 0x7fffffff;
        puVar14 = puVar38;
        do {
          *(undefined4 *)(*(long *)(param_1 + 200) + lVar21) = 4;
          FUN_109c61188(&UNK_10f5a3b6a,0x1a,puVar38,4,0x10000);
          lVar33 = *(long *)(param_1 + 200) + lVar21;
          uVar41 = *puVar14;
          *(undefined8 *)(lVar33 + 0xc) = puVar14[1];
          *(undefined8 *)(lVar33 + 4) = uVar41;
          lVar21 = lVar21 + 0x18;
          puVar38 = puVar38 + 2;
          uVar25 = uVar25 - 1;
          puVar14 = puVar14 + 2;
        } while (uVar25 != 0);
      }
      piVar39 = *(int **)(param_1 + 200);
      if (piVar39 != (int *)(param_1 + 0xac)) {
        iVar19 = 0;
        if (*piVar39 != 0) {
          _memmove(param_1 + 0xb0,piVar39 + 1,(long)*piVar39 << 2);
          iVar19 = *piVar39;
        }
        *(int *)(param_1 + 0xac) = iVar19;
      }
      *(undefined1 *)(param_1 + 0xa8) = 0;
      if (*(int *)(*param_2 + 0x30) < 1) {
        *(undefined1 *)(param_1 + 0xa8) = 1;
        ppdStack_b0 = (dword **)((ulong)ppdStack_b0 & 0xffffffff00000000);
        ppdStack_b8 = (dword **)0x0;
        pdStack_98 = (dword *)((long)&MACH_HEADER.magic + 1);
        pdStack_a0 = &MACH_HEADER.cputype;
        pdStack_90 = (dword *)0x3;
        uVar41 = 0x58;
        __Znwm();
        FUN_109c0ffb0();
        plVar12 = *(long **)(param_1 + 0xa0);
        *(undefined8 *)(param_1 + 0xa0) = uVar41;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 8))();
        }
      }
      else {
        puVar22 = (ulong *)(*param_2 + 0x28);
        uVar25 = *puVar22;
        if ((uVar25 & 1) != 0) {
          puVar22 = (ulong *)(uVar25 + 7);
        }
        FUN_1093a2194(&uStack_c8,*puVar22 + 0x18);
        lVar21 = lStack_c0;
        if ((uStack_c8 & 0xfffffffe) == 2) {
          *(undefined1 *)(param_1 + 0xa8) = 1;
          pdStack_98 = (dword *)((long)&MACH_HEADER.magic + 1);
          pdStack_a0 = &MACH_HEADER.cputype;
          pdStack_90 = (dword *)0x3;
          func_0x000107c31940(&ppdStack_b8,&UNK_10f5a3b85);
          FUN_109c138cc(lVar21,&pdStack_a0,&ppdStack_b8);
          plVar12 = *(long **)(param_1 + 0xa0);
          *(long *)(param_1 + 0xa0) = lVar21;
          if (plVar12 != (long *)0x0) {
            (**(code **)(*plVar12 + 8))();
          }
          if (lStack_a8 < 0) {
            __ZdlPv(ppdStack_b8);
          }
        }
        else {
          uVar41 = *(undefined8 *)(param_1 + 200);
          func_0x000107c31940(&pdStack_a0,&UNK_10f5a3b85);
          FUN_109c138cc(lVar21,uVar41,&pdStack_a0);
          plVar12 = *(long **)(param_1 + 0xa0);
          *(long *)(param_1 + 0xa0) = lVar21;
          if (plVar12 != (long *)0x0) {
            (**(code **)(*plVar12 + 8))();
          }
          FUN_109c11f88(*(undefined8 *)(param_1 + 0xa0));
        }
        if ((0 < iStack_c4) && (*(long *)(lStack_c0 + -8) == 0)) {
          __ZdlPv();
        }
      }
      func_0x000104c60808(param_1 + 0xf0);
      lVar21 = *param_2;
      if (0 < *(int *)(lVar21 + 0x88)) {
        lVar33 = 0;
        lVar26 = 8;
        do {
          uVar25 = *(ulong *)(lVar21 + 0x80);
          puVar22 = (ulong *)(lVar21 + 0x80);
          if ((uVar25 & 1) != 0) {
            puVar22 = (ulong *)(uVar25 + lVar26 + -1);
          }
          func_0x000107c2ac70(param_1 + 0xf0,*puVar22);
          lVar33 = lVar33 + 1;
          lVar21 = *param_2;
          lVar26 = lVar26 + 8;
        } while (lVar33 < *(int *)(lVar21 + 0x88));
      }
      pdVar30 = (dword *)(param_1 + 0x10);
      lVar33 = *(long *)pdVar30;
      iVar19 = *(int *)(lVar21 + 0x70);
      uVar25 = (ulong)iVar19;
      *(int *)(param_1 + 0x28) = iVar19;
      lVar21 = *(long *)(param_1 + 0x18);
      uVar31 = lVar21 - lVar33 >> 4;
      if (uVar31 < uVar25) {
        uVar31 = uVar25 - uVar31;
        if ((ulong)(*(long *)(param_1 + 0x20) - lVar21 >> 4) < uVar31) {
          if (iVar19 < 0) {
            func_0x000109c2099c();
            goto LAB_109c2021c;
          }
          uVar27 = *(long *)(param_1 + 0x20) - lVar33;
          uVar29 = (long)uVar27 >> 3;
          if (uVar29 <= uVar25) {
            uVar29 = uVar25;
          }
          if (0x7fffffffffffffef < uVar27) {
            uVar29 = 0xfffffffffffffff;
          }
          pdVar13 = pdVar30;
          pdStack_80 = pdVar30;
          FUN_109c209b0();
          lVar21 = (long)pdVar13 + (lVar21 - lVar33);
          _bzero(lVar21,uVar31 * 0x10);
          lVar33 = lVar21 - (*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10));
          _memcpy(lVar33);
          pdStack_a0 = *(dword **)(param_1 + 0x10);
          *(long *)(param_1 + 0x10) = lVar33;
          *(ulong *)(param_1 + 0x18) = lVar21 + uVar31 * 0x10;
          pdStack_88 = *(dword **)(param_1 + 0x20);
          *(dword **)(param_1 + 0x20) = pdVar13 + uVar29 * 4;
          pdStack_98 = pdStack_a0;
          pdStack_90 = pdStack_a0;
          func_0x000109c209e4(&pdStack_a0);
        }
        else {
          _bzero(lVar21,uVar31 * 0x10);
          *(ulong *)(param_1 + 0x18) = lVar21 + uVar31 * 0x10;
        }
      }
      else if (uVar25 < uVar31) {
        lVar33 = lVar33 + uVar25 * 0x10;
        while (lVar21 != lVar33) {
          lVar21 = lVar21 + -0x10;
          func_0x000109c20d5c(lVar21);
        }
        *(long *)(param_1 + 0x18) = lVar33;
      }
      piVar39 = (int *)(param_1 + 0x28);
      func_0x000109564a70(param_1 + 0x48,(long)*piVar39);
      FUN_109c20474(param_1 + 0x30,(long)*piVar39);
      iVar19 = *piVar39;
      uStack_c8 = 0;
      ppdStack_b0 = (dword **)0x0;
      lStack_a8 = 0;
      ppdStack_b8 = (dword **)0x0;
      FUN_1092d1c20(&ppdStack_b8,&uStack_c8,&iStack_c4,1);
      pdVar13 = (dword *)(param_1 + 0x88);
      iVar19 = iVar19 + iVar35;
      uVar31 = (ulong)iVar19;
      plVar12 = *(long **)(param_1 + 0x90);
      lVar33 = *(long *)pdVar13;
      lVar21 = (long)plVar12 - lVar33;
      bVar10 = uVar31 < (ulong)((lVar21 >> 3) * -0x5555555555555555);
      uVar25 = uVar31 + (lVar21 >> 3) * 0x5555555555555555;
      if (bVar10 || uVar25 == 0) {
        if (bVar10) {
          plVar34 = (long *)(lVar33 + (long)iVar19 * 0x18);
          while (plVar8 = plVar12, plVar8 != plVar34) {
            plVar12 = plVar8 + -3;
            if (*plVar12 != 0) {
              plVar8[-2] = *plVar12;
              __ZdlPv();
            }
          }
          goto LAB_109c1f4e8;
        }
      }
      else if ((ulong)((*(long *)(param_1 + 0x98) - (long)plVar12 >> 3) * -0x5555555555555555) <
               uVar25) {
        if (iVar19 < 0) {
          FUN_1092a9a64();
          goto LAB_109c2021c;
        }
        lVar33 = *(long *)(param_1 + 0x98) - lVar33 >> 3;
        uVar29 = lVar33 * 0x5555555555555556;
        if (uVar29 < uVar31 || uVar29 - uVar31 == 0) {
          uVar29 = uVar31;
        }
        if (0x555555555555554 < (ulong)(lVar33 * -0x5555555555555555)) {
          uVar29 = 0xaaaaaaaaaaaaaaa;
        }
        pdVar28 = pdVar13;
        pdStack_80 = pdVar13;
        FUN_1092a9a78();
        puVar38 = (undefined8 *)((long)pdVar28 + lVar21);
        pdStack_88 = pdVar28 + uVar29 * 6;
        puVar14 = puVar38 + uVar25 * 3;
        lVar21 = (long)iVar19 * 0x18 - lVar21;
        pdStack_a0 = pdVar28;
        pdStack_98 = (dword *)puVar38;
        pdStack_90 = (dword *)puVar38;
        do {
          *puVar38 = 0;
          puVar38[1] = 0;
          puVar38[2] = 0;
          FUN_109285684(puVar38,ppdStack_b8,ppdStack_b0,(long)ppdStack_b0 - (long)ppdStack_b8 >> 2);
          puVar38 = puVar38 + 3;
          lVar21 = lVar21 + -0x18;
        } while (lVar21 != 0);
        lVar21 = (long)pdStack_98 - (*(long *)(param_1 + 0x90) - *(long *)(param_1 + 0x88));
        _memcpy(lVar21);
        pdStack_a0 = *(dword **)(param_1 + 0x88);
        *(long *)(param_1 + 0x88) = lVar21;
        *(undefined8 **)(param_1 + 0x90) = puVar14;
        pdVar28 = *(dword **)(param_1 + 0x98);
        *(dword **)(param_1 + 0x98) = pdStack_88;
        pdStack_98 = pdStack_a0;
        pdStack_90 = pdStack_a0;
        pdStack_88 = pdVar28;
        func_0x00010937ce88(&pdStack_a0);
      }
      else {
        plVar34 = plVar12 + uVar25 * 3;
        lVar21 = (long)iVar19 * 0x18 - lVar21;
        do {
          *plVar12 = 0;
          plVar12[1] = 0;
          plVar12[2] = 0;
          FUN_109285684(plVar12,ppdStack_b8,ppdStack_b0,(long)ppdStack_b0 - (long)ppdStack_b8 >> 2);
          plVar12 = plVar12 + 3;
          lVar21 = lVar21 + -0x18;
        } while (lVar21 != 0);
LAB_109c1f4e8:
        *(long **)(param_1 + 0x90) = plVar34;
      }
      if (ppdStack_b8 != (dword **)0x0) {
        ppdStack_b0 = ppdStack_b8;
        __ZdlPv();
      }
      uVar25 = (long)*(int *)(param_1 + 0x28) + (long)iVar35;
      lVar21 = *(long *)(param_1 + 0x108);
      pdVar28 = *(dword **)(param_1 + 0x110);
      pdVar43 = (dword *)((long)pdVar28 - lVar21);
      bVar10 = uVar25 < (ulong)(((long)pdVar43 >> 3) * -0x5555555555555555);
      uVar31 = uVar25 + ((long)pdVar43 >> 3) * 0x5555555555555555;
      if (bVar10 || uVar31 == 0) {
        if (bVar10) {
          puVar38 = (undefined8 *)(lVar21 + uVar25 * 0x18);
          while (pdVar28 != (dword *)puVar38) {
            pdVar28 = pdVar28 + -6;
            pdStack_a0 = pdVar28;
            FUN_109c2070c(&pdStack_a0);
          }
          *(undefined8 **)(param_1 + 0x110) = puVar38;
        }
      }
      else if ((ulong)((*(long *)(param_1 + 0x118) - (long)pdVar28 >> 3) * -0x5555555555555555) <
               uVar31) {
        if ((int)uVar25 < 0) {
          func_0x000109c20bc8();
          goto LAB_109c2021c;
        }
        lVar33 = *(long *)(param_1 + 0x118) - lVar21 >> 3;
        uVar29 = lVar33 * 0x5555555555555556;
        if (uVar29 < uVar25 || uVar29 - uVar25 == 0) {
          uVar29 = uVar25;
        }
        if (0x555555555555554 < (ulong)(lVar33 * -0x5555555555555555)) {
          uVar29 = 0xaaaaaaaaaaaaaaa;
        }
        if (0xaaaaaaaaaaaaaaa < uVar29) {
          func_0x000104c4f740();
          goto LAB_109c2021c;
        }
        lVar33 = uVar29 * 0x18;
        __Znwm();
        lVar26 = ((uVar31 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
        _bzero(lVar33 + (long)pdVar43,lVar26);
        _memcpy(lVar33,lVar21,pdVar43);
        *(long *)(param_1 + 0x108) = lVar33;
        *(long *)(param_1 + 0x110) = lVar33 + (long)pdVar43 + lVar26;
        *(ulong *)(param_1 + 0x118) = lVar33 + uVar29 * 0x18;
        if (lVar21 != 0) {
          __ZdlPv(lVar21);
        }
      }
      else {
        uVar25 = (uVar31 * 0x18 - 0x18) / 0x18;
        _bzero(pdVar28,uVar25 * 0x18 + 0x18);
        *(dword **)(param_1 + 0x110) = pdVar28 + (uVar25 * 3 + 3) * 2;
      }
      func_0x000104bec9f0(param_1 + 0x150,uVar32,0);
      puVar38 = (undefined8 *)0xb0;
      __Znwm();
      puVar38[1] = 0;
      puVar38[2] = 0;
      puVar14 = puVar38 + 3;
      *puVar38 = &PTR_FUN_110b2c308;
      FUN_109c1a294();
      *(undefined8 **)(param_1 + 0xe0) = puVar14;
      plVar12 = *(long **)(param_1 + 0xe8);
      *(undefined8 **)(param_1 + 0xe8) = puVar38;
      if (plVar12 != (long *)0x0) {
        plVar34 = plVar12 + 1;
        do {
          lVar21 = *plVar34;
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar34,0x10);
          if (bVar10) {
            *plVar34 = lVar21 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar21 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      if (*(int *)(param_1 + 0x28) < 1) {
LAB_109c20128:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
          return;
        }
        ___stack_chk_fail();
      }
      else {
        lVar21 = 0;
        pdVar28 = (dword *)(param_1 + 0x60);
        pdVar1 = (dword *)(param_1 + 0x168);
        puVar38 = (undefined8 *)(param_1 + 0x70);
        uVar3 = 0xffffffff;
        do {
          uVar25 = *(ulong *)(*param_2 + 0x68);
          puVar22 = (ulong *)(*param_2 + 0x68);
          if ((uVar25 & 1) != 0) {
            puVar22 = (ulong *)(uVar25 + lVar21 * 8 + 7);
          }
          uVar31 = *puVar22;
          *(uint *)(uVar31 + 0x10) = *(uint *)(uVar31 + 0x10) | 1;
          uVar25 = *(ulong *)(uVar31 + 0x48);
          if (uVar25 == 0) {
            uVar25 = *(ulong *)(uVar31 + 8);
            if ((uVar25 & 1) != 0) {
              uVar25 = *(ulong *)(uVar25 & 0xfffffffffffffffe);
            }
            func_0x000109c0fb5c();
            *(ulong *)(uVar31 + 0x48) = uVar25;
          }
          uVar32 = uVar25;
          FUN_109c3afa4();
          puVar14 = (undefined8 *)0x20;
          __Znwm();
          *puVar14 = &PTR_DAT_110b2c358;
          puVar14[1] = 0;
          puVar14[2] = 0;
          puVar14[3] = uVar32;
          puVar22 = (ulong *)(*(long *)pdVar30 + lVar21 * 0x10);
          plVar12 = (long *)puVar22[1];
          *puVar22 = uVar32;
          puVar22[1] = (ulong)puVar14;
          if (plVar12 != (long *)0x0) {
            plVar34 = plVar12 + 1;
            do {
              lVar33 = *plVar34;
              cVar7 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar34,0x10);
              if (bVar10) {
                *plVar34 = lVar33 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar33 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
            }
          }
          lVar33 = *(long *)(*(long *)(param_1 + 0x10) + lVar21 * 0x10);
          *(undefined1 *)(lVar33 + 0x60) = *(undefined1 *)(param_1 + 0xa9);
          lVar26 = *param_2;
          *(bool *)(lVar33 + 0x61) = *(int *)(lVar26 + 0xe8) == 1;
          iVar35 = *(int *)(lVar26 + 0xe8);
          *(bool *)(lVar33 + 0x62) = iVar35 == 3 || iVar35 == 5;
          puVar23 = (uint *)(*(ulong *)(uVar25 + 0x100) & 0xfffffffffffffffc);
          cVar7 = *(char *)((long)puVar23 + 0x17);
          uVar36 = (uint)lVar21;
          uVar6 = uVar3;
          if (cVar7 < '\0') {
            if (*(long *)(puVar23 + 2) == 4) {
              puVar23 = *(uint **)puVar23;
              goto LAB_109c1f898;
            }
            if (*(long *)(puVar23 + 2) == 8) {
              puVar23 = *(uint **)puVar23;
              goto LAB_109c1f854;
            }
          }
          else if (cVar7 == '\x04') {
LAB_109c1f898:
            uVar6 = (*puVar23 & 0xff00ff00) >> 8 | (*puVar23 & 0xff00ff) << 8;
            uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
            uVar20 = (uint)(0x706f6f6c < uVar6);
            if (uVar6 < 0x706f6f6c) {
              uVar20 = 0xffffffff;
            }
            uVar6 = uVar36;
            if (uVar20 != 0) {
              uVar6 = uVar3;
            }
          }
          else if (cVar7 == '\b') {
LAB_109c1f854:
            if (*(long *)puVar23 == 0x33765f74736e6f63) {
              piVar39 = *(int **)(*(long *)pdVar13 + lVar21 * 0x18);
              *piVar39 = *piVar39 + 1;
            }
          }
          FUN_109c20508(*(long *)(param_1 + 0x48) + lVar21 * 0x18,(long)*(int *)(uVar31 + 0x20));
          pdStack_a0 = (dword *)((ulong)pdStack_a0 & 0xffffffff00000000);
          FUN_1094f81d8(*(long *)pdVar13 + lVar21 * 0x18,(long)*(int *)(uVar31 + 0x38),&pdStack_a0);
          lVar33 = *(long *)(param_1 + 0x48);
          plVar12 = (long *)(lVar33 + lVar21 * 0x18);
          if (0 < (int)((ulong)(plVar12[1] - *plVar12) >> 3)) {
            lVar26 = 0;
            puVar22 = (ulong *)(uVar31 + 0x18);
            do {
              lVar46 = 0xffffffff;
              iStack_dc = -1;
              lVar11 = lVar21;
              do {
                lVar44 = lVar11 + -1;
                if (lVar11 < 1) {
                  lVar33 = *(long *)(param_1 + 0x120);
                  puVar37 = puVar22;
                  if ((*puVar22 & 1) != 0) {
                    puVar37 = (ulong *)(*puVar22 + lVar26 * 8 + 7);
                  }
                  FUN_1094dc248(lVar33,*(undefined8 *)(param_1 + 0x128),*puVar37,&pdStack_a0);
                  if (lVar33 == *(long *)(param_1 + 0x128)) {
                    if ((*puVar22 & 1) != 0) {
                      puVar22 = (ulong *)(*puVar22 + lVar26 * 8 + 7);
                    }
                    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                              (&ppdStack_b8,&UNK_10f5a3b9c,*puVar22);
                    FUN_109259240(&pdStack_a0,&ppdStack_b8,&UNK_10f5a3bad);
                    func_0x000105687ee0(&pdStack_a0);
                    goto LAB_109c2021c;
                  }
                  uVar32 = (lVar33 - *(long *)(param_1 + 0x120) >> 3) * -0x5555555555555555;
                  lVar33 = *(long *)(*(long *)(param_1 + 0x10) + lVar21 * 0x10);
                  iVar35 = (int)uVar32;
                  if ((lVar33 != 0) &&
                     (___dynamic_cast(lVar33,&PTR_DAT_110b2c3c0,&PTR_DAT_110b2c910,0), lVar33 != 0))
                  {
                    uVar29 = (ulong)(long)iVar35 >> 3 & 0x1ffffffffffffff8;
                    *(ulong *)(*(long *)(param_1 + 0x150) + uVar29) =
                         *(ulong *)(*(long *)(param_1 + 0x150) + uVar29) | 1L << (uVar32 & 0x3f);
                  }
                  iStack_dc = 0;
                  iVar35 = *(int *)(param_1 + 0x28) + iVar35;
                  lVar33 = *(long *)(param_1 + 0x48);
                  break;
                }
                plVar12 = (long *)(*(long *)(param_1 + 0x30) + lVar44 * 0x18);
                puVar14 = (undefined8 *)*plVar12;
                uVar32 = (plVar12[1] - (long)puVar14 >> 3) * -0x5555555555555555;
                if (0 < (int)uVar32) {
                  puVar45 = (undefined8 *)0x0;
                  puVar37 = puVar22;
                  if ((*puVar22 & 1) != 0) {
                    puVar37 = (ulong *)(*puVar22 + lVar26 * 8 + 7);
                  }
                  puVar37 = (ulong *)*puVar37;
                  bVar4 = *(byte *)((long)puVar37 + 0x17);
                  uVar29 = puVar37[1];
                  if (-1 < (char)bVar4) {
                    uVar29 = (ulong)bVar4;
                  }
                  pdVar43 = (dword *)(uVar32 & 0x7fffffff);
                  do {
                    bVar5 = *(byte *)((long)puVar14 + 0x17);
                    uVar32 = puVar14[1];
                    if (-1 < (char)bVar5) {
                      uVar32 = (ulong)bVar5;
                    }
                    if (uVar29 == uVar32) {
                      puVar15 = (ulong *)*puVar37;
                      if (-1 < (char)bVar4) {
                        puVar15 = puVar37;
                      }
                      puVar24 = (undefined8 *)*puVar14;
                      if (-1 < (char)bVar5) {
                        puVar24 = puVar14;
                      }
                      _memcmp(puVar15,puVar24,uVar29);
                      if ((int)puVar15 == 0) {
                        iStack_dc = (int)puVar45;
                        lVar46 = lVar44;
                        break;
                      }
                    }
                    puVar45 = (undefined8 *)((long)puVar45 + 1);
                    puVar14 = puVar14 + 3;
                  } while (pdVar43 != (dword *)puVar45);
                }
                iVar35 = (int)lVar46;
                lVar11 = lVar44;
              } while (iVar35 < 0);
              plVar12 = (long *)(lVar33 + lVar21 * 0x18);
              lVar11 = *plVar12;
              piVar39 = (int *)(lVar11 + lVar26 * 8);
              *piVar39 = iVar35;
              piVar39[1] = iStack_dc;
              lVar46 = *(long *)(*(long *)pdVar13 + (long)iVar35 * 0x18);
              *(int *)(lVar46 + (long)iStack_dc * 4) = *(int *)(lVar46 + (long)iStack_dc * 4) + 1;
              lVar26 = lVar26 + 1;
            } while (lVar26 < (int)((ulong)(plVar12[1] - lVar11) >> 3));
          }
          if (0 < *(int *)(uVar31 + 0x38)) {
            lVar33 = 0;
            puVar22 = (ulong *)(uVar31 + 0x30);
            do {
              lVar26 = *(long *)(param_1 + 0x30) + lVar21 * 0x18;
              puVar37 = puVar22;
              if ((*puVar22 & 1) != 0) {
                puVar37 = (ulong *)(*puVar22 + lVar33 * 8 + 7);
              }
              uVar32 = *(ulong *)(lVar26 + 8);
              if (uVar32 < *(ulong *)(lVar26 + 0x10)) {
                FUN_1092d3130(lVar26);
                lVar11 = uVar32 + 0x18;
              }
              else {
                lVar11 = lVar26;
                func_0x000107c281ec(lVar26,*puVar37);
              }
              *(long *)(lVar26 + 8) = lVar11;
              puVar37 = puVar22;
              if ((*puVar22 & 1) != 0) {
                puVar37 = (ulong *)(*puVar22 + lVar33 * 8 + 7);
              }
              puVar45 = (undefined8 *)*puVar37;
              pdVar17 = pdVar28;
              func_0x000107c31944(pdVar28,puVar45);
              puVar14 = *(undefined8 **)(param_1 + 0x68);
              if (puVar14 != (undefined8 *)0x0) {
                uVar32 = (long)puVar14 - 1;
                if (((ulong)puVar14 & uVar32) == 0) {
                  pdVar43 = (dword *)(uVar32 & (ulong)pdVar17);
                }
                else {
                  pdVar43 = pdVar17;
                  if (puVar14 <= pdVar17) {
                    uVar29 = 0;
                    if (puVar14 != (undefined8 *)0x0) {
                      uVar29 = (ulong)pdVar17 / (ulong)puVar14;
                    }
                    pdVar43 = (dword *)((long)pdVar17 - uVar29 * (long)puVar14);
                  }
                }
                puVar24 = *(undefined8 **)(*(long *)pdVar28 + (long)pdVar43 * 8);
                if (puVar24 != (undefined8 *)0x0) {
                  for (pdVar42 = (dword *)*puVar24; pdVar42 != (dword *)0x0;
                      pdVar42 = *(dword **)pdVar42) {
                    puVar24 = *(undefined8 **)(pdVar42 + 2);
                    if ((dword *)puVar24 == pdVar17) {
                      pdVar16 = pdVar28;
                      func_0x000104c4fbc4(pdVar28,pdVar42 + 4,puVar45);
                      if (((ulong)pdVar16 & 1) != 0) goto LAB_109c1fdb8;
                    }
                    else {
                      if (((ulong)puVar14 & uVar32) == 0) {
                        puVar24 = (undefined8 *)((ulong)puVar24 & uVar32);
                      }
                      else if (puVar14 <= puVar24) {
                        uVar29 = 0;
                        if (puVar14 != (undefined8 *)0x0) {
                          uVar29 = (ulong)puVar24 / (ulong)puVar14;
                        }
                        puVar24 = (undefined8 *)((long)puVar24 - uVar29 * (long)puVar14);
                      }
                      if ((dword *)puVar24 != pdVar43) break;
                    }
                  }
                }
              }
              pdVar42 = (dword *)0x30;
              __Znwm();
              pdStack_90 = (dword *)0x0;
              *(undefined8 *)pdVar42 = 0;
              *(dword **)(pdVar42 + 2) = pdVar17;
              pdStack_a0 = pdVar42;
              pdStack_98 = pdVar28;
              if (*(char *)((long)puVar45 + 0x17) < '\0') {
                func_0x000107c3192c(pdVar42 + 4,*puVar45,puVar45[1]);
              }
              else {
                uVar49 = puVar45[1];
                uVar41 = *puVar45;
                *(undefined8 *)(pdVar42 + 8) = puVar45[2];
                *(undefined8 *)(pdVar42 + 6) = uVar49;
                *(undefined8 *)(pdVar42 + 4) = uVar41;
              }
              *(undefined8 *)(pdVar42 + 10) = 0;
              pdStack_90 = (dword *)CONCAT71(pdStack_90._1_7_,1);
              fVar48 = (float)(*(long *)(param_1 + 0x78) + 1);
              if ((puVar14 == (undefined8 *)0x0) ||
                 (*(float *)(param_1 + 0x80) * (float)puVar14 < fVar48)) {
                uVar32 = 1;
                if ((undefined8 *)0x2 < puVar14) {
                  uVar32 = (ulong)(((ulong)puVar14 & (long)puVar14 - 1U) != 0);
                }
                uVar32 = uVar32 | (long)puVar14 << 1;
                uVar29 = (ulong)(fVar48 / *(float *)(param_1 + 0x80));
                if (uVar32 <= uVar29) {
                  uVar32 = uVar29;
                }
                FUN_1095a2bdc(pdVar28,uVar32);
                puVar14 = *(undefined8 **)(param_1 + 0x68);
                if (((ulong)puVar14 & (long)puVar14 - 1U) == 0) {
                  pdVar43 = (dword *)((long)puVar14 - 1U & (ulong)pdVar17);
                }
                else {
                  pdVar43 = pdVar17;
                  if (puVar14 <= pdVar17) {
                    uVar32 = 0;
                    if (puVar14 != (undefined8 *)0x0) {
                      uVar32 = (ulong)pdVar17 / (ulong)puVar14;
                    }
                    pdVar43 = (dword *)((long)pdVar17 - uVar32 * (long)puVar14);
                  }
                }
              }
              lVar26 = *(long *)pdVar28;
              puVar45 = *(undefined8 **)(lVar26 + (long)pdVar43 * 8);
              if (puVar45 == (undefined8 *)0x0) {
                *(undefined8 *)pdStack_a0 = *puVar38;
                *puVar38 = pdStack_a0;
                *(undefined8 **)(lVar26 + (long)pdVar43 * 8) = puVar38;
                if (*(long *)pdStack_a0 != 0) {
                  puVar45 = *(undefined8 **)(*(long *)pdStack_a0 + 8);
                  if (((ulong)puVar14 & (long)puVar14 - 1U) == 0) {
                    puVar45 = (undefined8 *)((ulong)puVar45 & (long)puVar14 - 1U);
                  }
                  else if (puVar14 <= puVar45) {
                    uVar32 = 0;
                    if (puVar14 != (undefined8 *)0x0) {
                      uVar32 = (ulong)puVar45 / (ulong)puVar14;
                    }
                    puVar45 = (undefined8 *)((long)puVar45 - uVar32 * (long)puVar14);
                  }
                  *(dword **)(*(long *)pdVar28 + (long)puVar45 * 8) = pdStack_a0;
                }
              }
              else {
                *(undefined8 *)pdStack_a0 = *puVar45;
                *puVar45 = pdStack_a0;
              }
              *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 1;
              pdVar42 = pdStack_a0;
LAB_109c1fdb8:
              pdVar42[10] = uVar36;
              pdVar42[0xb] = (int)lVar33;
              lVar33 = lVar33 + 1;
            } while (lVar33 < *(int *)(uVar31 + 0x38));
          }
          piVar39 = (int *)(*(ulong *)(uVar25 + 0x100) & 0xfffffffffffffffc);
          cVar7 = *(char *)((long)piVar39 + 0x17);
          if (cVar7 < '\0') {
            if (*(long *)(piVar39 + 2) != 4) {
              if (*(long *)(piVar39 + 2) == 5) {
                piVar39 = *(int **)piVar39;
                goto LAB_109c1fe38;
              }
              goto LAB_109c20048;
            }
            piVar39 = *(int **)piVar39;
LAB_109c1fe60:
            if (*piVar39 == 0x756c6572) {
LAB_109c1fe74:
              puVar23 = *(uint **)(param_1 + 0x170);
              if (puVar23 < *(uint **)(param_1 + 0x178)) {
                *puVar23 = uVar36;
                FUN_109c083b0(puVar23 + 2,0,uVar25);
                puVar23 = puVar23 + 0x84;
                *(uint **)(param_1 + 0x170) = puVar23;
              }
              else {
                lVar33 = (long)puVar23 - *(long *)pdVar1;
                uVar32 = (lVar33 >> 4) * 0xf83e0f83e0f83e1 + 1;
                if (0x7c1f07c1f07c1f < uVar32) {
                  FUN_109c20cf8();
                  goto LAB_109c2021c;
                }
                lVar26 = (long)*(uint **)(param_1 + 0x178) - *(long *)pdVar1 >> 4;
                uVar29 = lVar26 * 0x1f07c1f07c1f07c2;
                if (uVar29 < uVar32 || uVar29 - uVar32 == 0) {
                  uVar29 = uVar32;
                }
                if (0x3e0f83e0f83e0e < (ulong)(lVar26 * 0xf83e0f83e0f83e1)) {
                  uVar29 = 0x7c1f07c1f07c1f;
                }
                pdStack_80 = pdVar1;
                if (uVar29 == 0) {
                  pdVar17 = (dword *)0x0;
                }
                else {
                  if (0x7c1f07c1f07c1f < uVar29) {
                    func_0x000104c4f740();
                    goto LAB_109c2021c;
                  }
                  pdVar17 = (dword *)(uVar29 * 0x210);
                  __Znwm();
                }
                puVar23 = (uint *)((long)pdVar17 + lVar33);
                *puVar23 = uVar36;
                pdStack_a0 = pdVar17;
                pdStack_98 = puVar23;
                pdStack_90 = puVar23;
                pdStack_88 = pdVar17 + uVar29 * 0x84;
                FUN_109c083b0(puVar23 + 2,0,uVar25);
                pdStack_90 = puVar23 + 0x84;
                pdVar42 = *(dword **)(param_1 + 0x168);
                pdVar43 = *(dword **)(param_1 + 0x170);
                puVar14 = (undefined8 *)((long)puVar23 + ((long)pdVar42 - (long)pdVar43));
                pdVar17 = pdVar17 + uVar29 * 0x84;
                puVar23 = pdStack_90;
                if ((long)pdVar42 - (long)pdVar43 != 0) {
                  lVar33 = 0;
                  do {
                    puVar2 = (undefined4 *)((long)puVar14 + lVar33);
                    puVar40 = (undefined4 *)((long)pdVar42 + lVar33) + 2;
                    puVar47 = puVar2 + 2;
                    *puVar2 = *(undefined4 *)((long)pdVar42 + lVar33);
                    FUN_109c082bc(puVar47,0);
                    if ((dword *)puVar14 != pdVar42) {
                      uVar25 = *(ulong *)(puVar2 + 4);
                      if ((uVar25 & 1) != 0) {
                        uVar25 = *(ulong *)(uVar25 & 0xfffffffffffffffe);
                      }
                      uVar32 = *(ulong *)((long)pdVar42 + lVar33 + 0x10);
                      if ((uVar32 & 1) != 0) {
                        uVar32 = *(ulong *)(uVar32 & 0xfffffffffffffffe);
                      }
                      if (uVar25 == uVar32) {
                        FUN_109c0d0a0(puVar47,puVar40);
                      }
                      else {
                        FUN_109c087fc(puVar47);
                        FUN_109c0c674(puVar47,puVar40);
                      }
                    }
                    lVar33 = lVar33 + 0x210;
                  } while ((dword *)((long)pdVar42 + lVar33) != pdVar43);
                  do {
                    FUN_109c0877c(pdVar42 + 2);
                    pdVar42 = pdVar42 + 0x84;
                  } while (pdVar42 != pdVar43);
                  pdVar42 = *(dword **)pdVar1;
                  pdVar17 = pdStack_88;
                  puVar23 = pdStack_90;
                }
                *(undefined8 **)(param_1 + 0x168) = puVar14;
                *(uint **)(param_1 + 0x170) = puVar23;
                pdStack_88 = *(dword **)(param_1 + 0x178);
                *(dword **)(param_1 + 0x178) = pdVar17;
                pdStack_a0 = pdVar42;
                pdStack_98 = pdVar42;
                pdStack_90 = pdVar42;
                FUN_109c20d0c(&pdStack_a0);
              }
              *(uint **)(param_1 + 0x170) = puVar23;
            }
          }
          else {
            if (cVar7 == '\x04') goto LAB_109c1fe60;
            if (cVar7 == '\x05') {
LAB_109c1fe38:
              if (*piVar39 != 0x756c6572 || (char)piVar39[1] != '6') goto LAB_109c20048;
              goto LAB_109c1fe74;
            }
          }
LAB_109c20048:
          *(uint *)(uVar31 + 0x10) = *(uint *)(uVar31 + 0x10) & 0xfffffffe;
          plVar12 = *(long **)(uVar31 + 0x48);
          *(undefined8 *)(uVar31 + 0x48) = 0;
          uVar25 = *(ulong *)(uVar31 + 8);
          if ((uVar25 & 1) == 0) {
            if (uVar25 != 0) goto LAB_109c2006c;
LAB_109c200b0:
            if (plVar12 != (long *)0x0) goto LAB_109c200b4;
          }
          else {
            if (*(long *)(uVar25 & 0xfffffffffffffffe) == 0) goto LAB_109c200b0;
LAB_109c2006c:
            if (plVar12 != (long *)0x0) {
              (**(code **)(*plVar12 + 0x10))(plVar12,0);
              (**(code **)(*plVar12 + 0x20))();
LAB_109c200b4:
              FUN_109c0877c(plVar12);
              __ZdlPv();
            }
          }
          lVar21 = lVar21 + 1;
          uVar3 = uVar6;
        } while (lVar21 < *(int *)(param_1 + 0x28));
        if (((int)uVar6 < 0) || (*(int *)(param_1 + 0x28) <= (int)uVar6)) goto LAB_109c20128;
        lVar21 = *(long *)(*(long *)pdVar30 + (ulong)uVar6 * 0x10);
        ___dynamic_cast(lVar21,&PTR_DAT_110b2c3c0,&PTR_DAT_110b2e428,0);
        if (lVar21 != 0) {
          *(undefined1 *)(lVar21 + 0xb4) = 1;
          goto LAB_109c20128;
        }
      }
      ___cxa_bad_cast();
      goto LAB_109c2021c;
    }
  }
  else {
    func_0x000105688514(&UNK_10f5a3a8a);
  }
  func_0x000105688514(&UNK_10f5a3ad3);
LAB_109c2021c:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x109c20220);
  (*pcVar9)();
}



/* Entry: 109c2039c; end: 109c20473;  */

void FUN_109c2039c(undefined8 param_1,undefined8 param_2,int param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar2 = (undefined8 *)0xf0;
  __Znwm();
  *puVar2 = &PTR_FUN_110b2bad8;
  puVar2[1] = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[0xb] = 0;
  puVar2[10] = 0;
  puVar2[0xd] = 0;
  puVar2[0xc] = 0;
  puVar2[0xf] = 0;
  puVar2[0xe] = 0;
  puVar2[0x11] = 0;
  puVar2[0x10] = 0;
  puVar2[0x13] = 0;
  puVar2[0x12] = 0;
  puVar2[0x15] = 0;
  puVar2[0x14] = 0;
  puVar2[0x17] = 0;
  puVar2[0x16] = 0;
  puVar2[0x18] = 0;
  puVar2[0x19] = &DAT_11383d918;
  puVar2[0x1b] = 0;
  puVar2[0x1c] = 0;
  puVar2[0x1a] = &DAT_11383d918;
  *(undefined4 *)(puVar2 + 0x1d) = 0;
  lStack_38 = (long)param_3;
  puVar3 = puVar2;
  uStack_40 = param_2;
  func_0x000107c30348();
  if (((ulong)puVar3 & 1) != 0) {
    puStack_48 = puVar2;
    FUN_109c1ec64(param_1,&puStack_48);
    FUN_109c0e824(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  func_0x000105688514(&UNK_10f5a3a38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109c20458);
  (*pcVar1)();
}



/* Entry: 109c20474; end: 109c20507;  */

long * FUN_109c20474(long *param_1,ulong param_2)

{
  undefined *puVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  lVar15 = param_1[1];
  lVar7 = lVar15 - *param_1 >> 3;
  bVar2 = param_2 < (ulong)(lVar7 * -0x5555555555555555);
  uVar10 = param_2 + lVar7 * 0x5555555555555555;
  if (bVar2 || uVar10 == 0) {
    plVar3 = param_1;
    if (bVar2) {
      lVar7 = *param_1 + param_2 * 0x18;
      for (; lVar15 != lVar7; lVar15 = lVar15 + -0x18) {
        plVar3 = (long *)&stack0xffffffffffffffc8;
        func_0x000104c607c8(plVar3);
      }
      param_1[1] = lVar7;
    }
    return plVar3;
  }
  plVar3 = (long *)param_1[1];
  lVar15 = param_1[2];
  if ((ulong)((lVar15 - (long)plVar3 >> 3) * -0x5555555555555555) < uVar10) {
    lVar7 = *param_1;
    lVar14 = (long)plVar3 - lVar7;
    uVar9 = uVar10 + (lVar14 >> 3) * -0x5555555555555555;
    if (0xaaaaaaaaaaaaaaa < uVar9) {
      FUN_109c20bb4();
LAB_109c20bb0:
      func_0x000104c4f740();
      func_0x000104c4f6cc(&DAT_10f62a4d8);
      plVar3 = (long *)&DAT_10f62a4d8;
      func_0x000104c4f6cc();
      plVar5 = (long *)plVar3[1];
      if ((ulong)(plVar3[2] - (long)plVar5 >> 3) < uVar10) {
        lVar7 = *plVar3;
        lVar14 = (long)plVar5 - lVar7;
        lVar15 = lVar14 >> 3;
        uVar9 = uVar10 + lVar15;
        if (uVar9 >> 0x3d != 0) {
          FUN_1093c3bcc();
          plVar3 = (long *)&DAT_10f62a4d8;
          func_0x000104c4f6cc();
          lVar15 = plVar3[1];
          lVar7 = plVar3[2];
          while (lVar7 != lVar15) {
            plVar3[2] = lVar7 + -0x210;
            FUN_109c0877c(lVar7 + -0x208);
            lVar7 = plVar3[2];
          }
          if (*plVar3 != 0) {
            __ZdlPv();
          }
          return plVar3;
        }
        uVar8 = plVar3[2] - lVar7;
        uVar12 = (long)uVar8 >> 2;
        if (uVar12 <= uVar9) {
          uVar12 = uVar9;
        }
        if (0x7ffffffffffffff7 < uVar8) {
          uVar12 = 0x1fffffffffffffff;
        }
        if (uVar12 == 0) {
          plVar5 = (long *)0x0;
          lVar11 = lVar14;
        }
        else {
          plVar5 = plVar3;
          FUN_1093c3be0();
          lVar7 = *plVar3;
          lVar15 = plVar3[1] - lVar7 >> 3;
          lVar11 = plVar3[1] - lVar7;
        }
        puVar1 = (undefined *)((long)plVar5 + lVar14);
        _bzero(puVar1,uVar10 << 3);
        _memcpy(puVar1 + lVar15 * -8,lVar7,lVar11);
        plVar6 = (long *)*plVar3;
        *plVar3 = (long)(puVar1 + lVar15 * -8);
        plVar3[1] = (long)(puVar1 + uVar10 * 8);
        plVar3[2] = (long)(plVar5 + uVar12);
        plVar4 = (long *)0x0;
        if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)();
          return plVar6;
        }
      }
      else {
        plVar4 = plVar3;
        if (uVar10 != 0) {
          plVar4 = plVar5;
          _bzero(plVar5,uVar10 << 3);
          plVar5 = plVar5 + uVar10;
        }
        plVar3[1] = (long)plVar5;
      }
      return plVar4;
    }
    lVar11 = lVar15 - lVar7 >> 3;
    uVar12 = lVar11 * 0x5555555555555556;
    if (uVar12 < uVar9 || uVar12 - uVar9 == 0) {
      uVar12 = uVar9;
    }
    if (0x555555555555554 < (ulong)(lVar11 * -0x5555555555555555)) {
      uVar12 = 0xaaaaaaaaaaaaaaa;
    }
    plStack_68 = param_1;
    if (uVar12 == 0) {
      lVar11 = 0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar12) goto LAB_109c20bb0;
      lVar11 = uVar12 * 0x18;
      __Znwm();
    }
    lVar13 = ((uVar10 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
    _bzero(lVar11 + lVar14,lVar13);
    _memcpy(lVar11,lVar7,lVar14);
    *param_1 = lVar11;
    param_1[1] = lVar11 + lVar14 + lVar13;
    param_1[2] = lVar11 + uVar12 * 0x18;
    plVar5 = &lStack_88;
    lStack_88 = lVar7;
    lStack_80 = lVar7;
    lStack_78 = lVar7;
    lStack_70 = lVar15;
    func_0x000107f4e37c(plVar5);
  }
  else {
    plVar5 = param_1;
    if (uVar10 != 0) {
      uVar10 = (uVar10 * 0x18 - 0x18) / 0x18;
      plVar5 = plVar3;
      _bzero(plVar3,uVar10 * 0x18 + 0x18);
      plVar3 = plVar3 + uVar10 * 3 + 3;
    }
    param_1[1] = (long)plVar3;
  }
  return plVar5;
}



/* Entry: 109c20508; end: 109c20537;  */

long * FUN_109c20508(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  uVar5 = param_1[1] - *param_1 >> 3;
  if (param_2 <= uVar5) {
    if (param_2 < uVar5) {
      param_1[1] = *param_1 + param_2 * 8;
    }
    return param_1;
  }
  param_2 = param_2 - uVar5;
  plVar2 = (long *)param_1[1];
  if ((ulong)(param_1[2] - (long)plVar2 >> 3) < param_2) {
    lVar7 = *param_1;
    lVar9 = (long)plVar2 - lVar7;
    lVar10 = lVar9 >> 3;
    uVar5 = param_2 + lVar10;
    if (uVar5 >> 0x3d != 0) {
      FUN_1093c3bcc();
      plVar2 = (long *)&DAT_10f62a4d8;
      func_0x000104c4f6cc();
      lVar10 = plVar2[1];
      lVar9 = plVar2[2];
      while (lVar9 != lVar10) {
        plVar2[2] = lVar9 + -0x210;
        FUN_109c0877c(lVar9 + -0x208);
        lVar9 = plVar2[2];
      }
      if (*plVar2 != 0) {
        __ZdlPv();
      }
      return plVar2;
    }
    uVar4 = param_1[2] - lVar7;
    uVar6 = (long)uVar4 >> 2;
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar6 = 0x1fffffffffffffff;
    }
    if (uVar6 == 0) {
      plVar2 = (long *)0x0;
      lVar8 = lVar9;
    }
    else {
      plVar2 = param_1;
      FUN_1093c3be0();
      lVar7 = *param_1;
      lVar10 = param_1[1] - lVar7 >> 3;
      lVar8 = param_1[1] - lVar7;
    }
    lVar9 = (long)plVar2 + lVar9;
    _bzero(lVar9,param_2 * 8);
    lVar10 = lVar9 + lVar10 * -8;
    _memcpy(lVar10,lVar7,lVar8);
    plVar3 = (long *)*param_1;
    *param_1 = lVar10;
    param_1[1] = lVar9 + param_2 * 8;
    param_1[2] = (long)(plVar2 + uVar6);
    plVar1 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return plVar3;
    }
  }
  else {
    plVar1 = param_1;
    if (param_2 != 0) {
      plVar1 = plVar2;
      _bzero(plVar2,param_2 * 8);
      plVar2 = plVar2 + param_2;
    }
    param_1[1] = (long)plVar2;
  }
  return plVar1;
}



/* Entry: 109c20538; end: 109c20617;  */

void FUN_109c20538(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_38;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar4 = plVar2[1];
    lVar1 = lVar3;
    if (lVar4 != lVar3) {
      do {
        lVar4 = lVar4 + -0x18;
        lStack_38 = lVar4;
        func_0x000104c607c8(&lStack_38);
      } while (lVar4 != lVar3);
      lVar1 = *(long *)*param_1;
    }
    plVar2[1] = lVar3;
    __ZdlPv(lVar1);
  }
  return;
}



/* Entry: 109c20618; end: 109c20697;  */

undefined8 * FUN_109c20618(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_1096ea264(param_1);
    puVar1 = (undefined8 *)param_1[1];
    lVar3 = param_2 << 3;
    puVar2 = puVar1;
    do {
      *puVar2 = *param_3;
      lVar3 = lVar3 + -8;
      puVar2 = puVar2 + 1;
    } while (lVar3 != 0);
    param_1[1] = puVar1 + param_2;
  }
  return param_1;
}



/* Entry: 109c20698; end: 109c2070b;  */

undefined8 * FUN_109c20698(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar6 = param_2[1];
    uVar5 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar6;
    *param_1 = uVar5;
  }
  lVar4 = param_3[1];
  uVar5 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return param_1;
}



/* Entry: 109c2070c; end: 109c2077b;  */

void FUN_109c2070c(long *param_1)

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
        lVar1 = lVar1 + -0x10;
        FUN_10959b818();
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



/* Entry: 109c2077c; end: 109c207ef;  */

undefined8 * FUN_109c2077c(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_1096ea264(param_1);
    lVar1 = param_1[1];
    _bzero(lVar1,param_2 << 3);
    param_1[1] = lVar1 + param_2 * 8;
  }
  return param_1;
}



/* Entry: 109c207f0; end: 109c208d3;  */

long FUN_109c207f0(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c31944();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar2);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar2 == plVar4) {
          plVar4 = param_1;
          func_0x000104c4fbc4(param_1,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar1 = 0;
            if (plVar5 != (long *)0x0) {
              uVar1 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 109c208d4; end: 109c2094f;  */

undefined8 * FUN_109c208d4(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_109c20950(param_1);
    lVar1 = param_1[1];
    _bzero(lVar1,param_2 << 4);
    param_1[1] = lVar1 + param_2 * 0x10;
  }
  return param_1;
}



/* Entry: 109c20950; end: 109c20987;  */

undefined1  [16] FUN_109c20950(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = param_1;
    FUN_109c184f0();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = plVar1;
    return auVar4;
  }
  FUN_109c184dc();
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3c == 0) {
    lVar2 = param_2 << 4;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000104c4f740();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    func_0x000109c20d5c();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = plVar1;
  return auVar6;
}



/* Entry: 109c20988; end: 109c209af;  */

undefined1  [16] FUN_109c20988(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3c == 0) {
    lVar2 = param_2 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000104c4f740();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    func_0x000109c20d5c();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 109c209b0; end: 109c20a2f;  */

undefined1  [16] FUN_109c209b0(long *param_1,ulong param_2)

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
  func_0x000104c4f740();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    func_0x000109c20d5c();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 109c20a30; end: 109c20bb3;  */

long * FUN_109c20a30(long *param_1,ulong param_2)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar2 = (long *)param_1[1];
  lVar13 = param_1[2];
  if ((ulong)((lVar13 - (long)plVar2 >> 3) * -0x5555555555555555) < param_2) {
    lVar10 = *param_1;
    lVar12 = (long)plVar2 - lVar10;
    uVar7 = param_2 + (lVar12 >> 3) * -0x5555555555555555;
    if (0xaaaaaaaaaaaaaaa < uVar7) {
      FUN_109c20bb4();
LAB_109c20bb0:
      func_0x000104c4f740();
      func_0x000104c4f6cc(&DAT_10f62a4d8);
      plVar2 = (long *)&DAT_10f62a4d8;
      func_0x000104c4f6cc();
      plVar4 = (long *)plVar2[1];
      if ((ulong)(plVar2[2] - (long)plVar4 >> 3) < param_2) {
        lVar10 = *plVar2;
        lVar12 = (long)plVar4 - lVar10;
        lVar13 = lVar12 >> 3;
        uVar7 = param_2 + lVar13;
        if (uVar7 >> 0x3d != 0) {
          FUN_1093c3bcc();
          plVar2 = (long *)&DAT_10f62a4d8;
          func_0x000104c4f6cc();
          lVar13 = plVar2[1];
          lVar10 = plVar2[2];
          while (lVar10 != lVar13) {
            plVar2[2] = lVar10 + -0x210;
            FUN_109c0877c(lVar10 + -0x208);
            lVar10 = plVar2[2];
          }
          if (*plVar2 != 0) {
            __ZdlPv();
          }
          return plVar2;
        }
        uVar6 = plVar2[2] - lVar10;
        uVar9 = (long)uVar6 >> 2;
        if (uVar9 <= uVar7) {
          uVar9 = uVar7;
        }
        if (0x7ffffffffffffff7 < uVar6) {
          uVar9 = 0x1fffffffffffffff;
        }
        if (uVar9 == 0) {
          plVar4 = (long *)0x0;
          lVar8 = lVar12;
        }
        else {
          plVar4 = plVar2;
          FUN_1093c3be0();
          lVar10 = *plVar2;
          lVar13 = plVar2[1] - lVar10 >> 3;
          lVar8 = plVar2[1] - lVar10;
        }
        puVar1 = (undefined *)((long)plVar4 + lVar12);
        _bzero(puVar1,param_2 << 3);
        _memcpy(puVar1 + lVar13 * -8,lVar10,lVar8);
        plVar5 = (long *)*plVar2;
        *plVar2 = (long)(puVar1 + lVar13 * -8);
        plVar2[1] = (long)(puVar1 + param_2 * 8);
        plVar2[2] = (long)(plVar4 + uVar9);
        plVar3 = (long *)0x0;
        if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)();
          return plVar5;
        }
      }
      else {
        plVar3 = plVar2;
        if (param_2 != 0) {
          plVar3 = plVar4;
          _bzero(plVar4,param_2 << 3);
          plVar4 = plVar4 + param_2;
        }
        plVar2[1] = (long)plVar4;
      }
      return plVar3;
    }
    lVar8 = lVar13 - lVar10 >> 3;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar9 < uVar7 || uVar9 - uVar7 == 0) {
      uVar9 = uVar7;
    }
    if (0x555555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar9 = 0xaaaaaaaaaaaaaaa;
    }
    plStack_68 = param_1;
    if (uVar9 == 0) {
      lVar8 = 0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar9) goto LAB_109c20bb0;
      lVar8 = uVar9 * 0x18;
      __Znwm();
    }
    lVar11 = ((param_2 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
    _bzero(lVar8 + lVar12,lVar11);
    _memcpy(lVar8,lVar10,lVar12);
    *param_1 = lVar8;
    param_1[1] = lVar8 + lVar12 + lVar11;
    param_1[2] = lVar8 + uVar9 * 0x18;
    plVar4 = &lStack_88;
    lStack_88 = lVar10;
    lStack_80 = lVar10;
    lStack_78 = lVar10;
    lStack_70 = lVar13;
    func_0x000107f4e37c(plVar4);
  }
  else {
    plVar4 = param_1;
    if (param_2 != 0) {
      uVar7 = (param_2 * 0x18 - 0x18) / 0x18;
      plVar4 = plVar2;
      _bzero(plVar2,uVar7 * 0x18 + 0x18);
      plVar2 = plVar2 + uVar7 * 3 + 3;
    }
    param_1[1] = (long)plVar2;
  }
  return plVar4;
}



/* Entry: 109c20bb4; end: 109c20bdb;  */

long * FUN_109c20bb4(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  plVar3 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  plVar5 = (long *)plVar3[1];
  if ((ulong)(plVar3[2] - (long)plVar5 >> 3) < param_2) {
    lVar9 = *plVar3;
    lVar11 = (long)plVar5 - lVar9;
    lVar12 = lVar11 >> 3;
    uVar1 = param_2 + lVar12;
    if (uVar1 >> 0x3d != 0) {
      FUN_1093c3bcc();
      plVar3 = (long *)&DAT_10f62a4d8;
      func_0x000104c4f6cc();
      lVar12 = plVar3[1];
      lVar9 = plVar3[2];
      while (lVar9 != lVar12) {
        plVar3[2] = lVar9 + -0x210;
        FUN_109c0877c(lVar9 + -0x208);
        lVar9 = plVar3[2];
      }
      if (*plVar3 != 0) {
        __ZdlPv();
      }
      return plVar3;
    }
    uVar7 = plVar3[2] - lVar9;
    uVar8 = (long)uVar7 >> 2;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar8 = 0x1fffffffffffffff;
    }
    if (uVar8 == 0) {
      plVar5 = (long *)0x0;
      lVar10 = lVar11;
    }
    else {
      plVar5 = plVar3;
      FUN_1093c3be0();
      lVar9 = *plVar3;
      lVar12 = plVar3[1] - lVar9 >> 3;
      lVar10 = plVar3[1] - lVar9;
    }
    puVar2 = (undefined *)((long)plVar5 + lVar11);
    _bzero(puVar2,param_2 << 3);
    _memcpy(puVar2 + lVar12 * -8,lVar9,lVar10);
    plVar6 = (long *)*plVar3;
    *plVar3 = (long)(puVar2 + lVar12 * -8);
    plVar3[1] = (long)(puVar2 + param_2 * 8);
    plVar3[2] = (long)(plVar5 + uVar8);
    plVar4 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return plVar6;
    }
  }
  else {
    plVar4 = plVar3;
    if (param_2 != 0) {
      plVar4 = plVar5;
      _bzero(plVar5,param_2 << 3);
      plVar5 = plVar5 + param_2;
    }
    plVar3[1] = (long)plVar5;
  }
  return plVar4;
}



/* Entry: 109c20bdc; end: 109c20cf7;  */

long * FUN_109c20bdc(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  plVar3 = (long *)param_1[1];
  if ((ulong)(param_1[2] - (long)plVar3 >> 3) < param_2) {
    lVar7 = *param_1;
    lVar9 = (long)plVar3 - lVar7;
    lVar10 = lVar9 >> 3;
    uVar1 = param_2 + lVar10;
    if (uVar1 >> 0x3d != 0) {
      FUN_1093c3bcc();
      plVar3 = (long *)&DAT_10f62a4d8;
      func_0x000104c4f6cc();
      lVar10 = plVar3[1];
      lVar9 = plVar3[2];
      while (lVar9 != lVar10) {
        plVar3[2] = lVar9 + -0x210;
        FUN_109c0877c(lVar9 + -0x208);
        lVar9 = plVar3[2];
      }
      if (*plVar3 != 0) {
        __ZdlPv();
      }
      return plVar3;
    }
    uVar5 = param_1[2] - lVar7;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    if (uVar6 == 0) {
      plVar3 = (long *)0x0;
      lVar8 = lVar9;
    }
    else {
      plVar3 = param_1;
      FUN_1093c3be0();
      lVar7 = *param_1;
      lVar10 = param_1[1] - lVar7 >> 3;
      lVar8 = param_1[1] - lVar7;
    }
    lVar9 = (long)plVar3 + lVar9;
    _bzero(lVar9,param_2 << 3);
    lVar10 = lVar9 + lVar10 * -8;
    _memcpy(lVar10,lVar7,lVar8);
    plVar4 = (long *)*param_1;
    *param_1 = lVar10;
    param_1[1] = lVar9 + param_2 * 8;
    param_1[2] = (long)(plVar3 + uVar6);
    plVar2 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return plVar4;
    }
  }
  else {
    plVar2 = param_1;
    if (param_2 != 0) {
      plVar2 = plVar3;
      _bzero(plVar3,param_2 << 3);
      plVar3 = plVar3 + param_2;
    }
    param_1[1] = (long)plVar3;
  }
  return plVar2;
}



/* Entry: 109c20cf8; end: 109c20d0b;  */

long * FUN_109c20cf8(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    plVar2[2] = lVar3 + -0x210;
    FUN_109c0877c(lVar3 + -0x208);
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 109c20d0c; end: 109c20e0b;  */

long * FUN_109c20d0c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x210;
    FUN_109c0877c(lVar2 + -0x208);
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109c20e0c; end: 109c20e83;  */

undefined8 * FUN_109c20e0c(undefined8 *param_1,long param_2,long param_3)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (param_3 != 0) {
    param_3 = param_3 * 0x28;
    do {
      FUN_109c20e84(param_1,param_2,param_2);
      param_2 = param_2 + 0x28;
      param_3 = param_3 + -0x28;
    } while (param_3 != 0);
  }
  return param_1;
}



/* Entry: 109c20e84; end: 109c21113;  */

undefined1  [16] FUN_109c20e84(long *param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *unaff_x25;
  ulong uVar11;
  long lVar12;
  undefined1 auVar13 [16];
  
  plVar8 = param_1;
  func_0x000107c31944();
  plVar10 = (long *)param_1[1];
  if (plVar10 != (long *)0x0) {
    uVar11 = (long)plVar10 - 1;
    if (((ulong)plVar10 & uVar11) == 0) {
      unaff_x25 = (long *)(uVar11 & (ulong)plVar8);
    }
    else {
      unaff_x25 = plVar8;
      if (plVar10 <= plVar8) {
        uVar7 = 0;
        if (plVar10 != (long *)0x0) {
          uVar7 = (ulong)plVar8 / (ulong)plVar10;
        }
        unaff_x25 = (long *)((long)plVar8 - uVar7 * (long)plVar10);
      }
    }
    puVar4 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
    if (puVar4 != (undefined8 *)0x0) {
      for (plVar9 = (long *)*puVar4; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        plVar5 = (long *)plVar9[1];
        if (plVar5 == plVar8) {
          plVar5 = param_1;
          func_0x000104c4fbc4(param_1,plVar9 + 2,param_2);
          if (((ulong)plVar5 & 1) != 0) {
            uVar3 = 0;
            goto LAB_109c210d0;
          }
        }
        else {
          if (((ulong)plVar10 & uVar11) == 0) {
            plVar5 = (long *)((ulong)plVar5 & uVar11);
          }
          else if (plVar10 <= plVar5) {
            uVar7 = 0;
            if (plVar10 != (long *)0x0) {
              uVar7 = (ulong)plVar5 / (ulong)plVar10;
            }
            plVar5 = (long *)((long)plVar5 - uVar7 * (long)plVar10);
          }
          if (plVar5 != unaff_x25) break;
        }
      }
    }
  }
  plVar9 = (long *)0x38;
  __Znwm();
  *plVar9 = 0;
  plVar9[1] = (long)plVar8;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar9 + 2,*param_3,param_3[1]);
  }
  else {
    lVar6 = *param_3;
    plVar9[3] = param_3[1];
    plVar9[2] = lVar6;
    plVar9[4] = param_3[2];
  }
  lVar6 = param_3[4];
  lVar12 = param_3[3];
  plVar9[6] = param_3[4];
  plVar9[5] = lVar12;
  if (lVar6 != 0) {
    plVar5 = (long *)(lVar6 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if ((plVar10 == (long *)0x0) ||
     (*(float *)(param_1 + 4) * (float)plVar10 < (float)(param_1[3] + 1))) {
    uVar11 = 1;
    if ((long *)0x2 < plVar10) {
      uVar11 = (ulong)(((ulong)plVar10 & (long)plVar10 - 1U) != 0);
    }
    uVar11 = uVar11 | (long)plVar10 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar11 <= uVar7) {
      uVar11 = uVar7;
    }
    FUN_109c21114(param_1,uVar11);
    plVar10 = (long *)param_1[1];
    if (((ulong)plVar10 & (long)plVar10 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar10 - 1U & (ulong)plVar8);
    }
    else {
      unaff_x25 = plVar8;
      if (plVar10 <= plVar8) {
        uVar11 = 0;
        if (plVar10 != (long *)0x0) {
          uVar11 = (ulong)plVar8 / (ulong)plVar10;
        }
        unaff_x25 = (long *)((long)plVar8 - uVar11 * (long)plVar10);
      }
    }
  }
  lVar6 = *param_1;
  plVar8 = *(long **)(lVar6 + (long)unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar9 = *plVar8;
    *plVar8 = (long)plVar9;
    *(long **)(lVar6 + (long)unaff_x25 * 8) = plVar8;
    if (*plVar9 != 0) {
      plVar8 = *(long **)(*plVar9 + 8);
      if (((ulong)plVar10 & (long)plVar10 - 1U) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (long)plVar10 - 1U);
      }
      else if (plVar10 <= plVar8) {
        uVar11 = 0;
        if (plVar10 != (long *)0x0) {
          uVar11 = (ulong)plVar8 / (ulong)plVar10;
        }
        plVar8 = (long *)((long)plVar8 - uVar11 * (long)plVar10);
      }
      *(long **)(*param_1 + (long)plVar8 * 8) = plVar9;
    }
  }
  else {
    *plVar9 = *plVar8;
    *plVar8 = (long)plVar9;
  }
  param_1[3] = param_1[3] + 1;
  uVar3 = 1;
LAB_109c210d0:
  auVar13._8_8_ = uVar3;
  auVar13._0_8_ = plVar9;
  return auVar13;
}



/* Entry: 109c21114; end: 109c211e3;  */

void FUN_109c21114(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar7 = param_1[1];
  if (uVar7 < param_2) {
LAB_109c2115c:
    if (param_2 == 0) {
      uVar7 = *param_1;
      *param_1 = 0;
      if (uVar7 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        func_0x000104c4f740();
        uVar7 = *param_1;
        *param_1 = param_2;
        if (uVar7 != 0) {
          if ((char)param_1[2] == '\x01') {
            func_0x000109c21368(uVar7 + 0x10);
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(uVar7);
          return;
        }
        return;
      }
      uVar7 = param_2 << 3;
      __Znwm();
      uVar1 = *param_1;
      *param_1 = uVar7;
      if (uVar1 != 0) {
        __ZdlPv();
      }
      uVar7 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
        uVar7 = uVar7 + 1;
      } while (param_2 != uVar7);
      plVar2 = (long *)param_1[2];
      if (plVar2 != (long *)0x0) {
        uVar7 = plVar2[1];
        uVar1 = param_2 - 1;
        if ((param_2 & uVar1) == 0) {
          uVar7 = uVar7 & uVar1;
        }
        else if (param_2 <= uVar7) {
          uVar5 = 0;
          if (param_2 != 0) {
            uVar5 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar5 * param_2;
        }
        *(ulong **)(*param_1 + uVar7 * 8) = param_1 + 2;
        plVar3 = (long *)*plVar2;
        while (plVar3 != (long *)0x0) {
          uVar5 = plVar3[1];
          if ((param_2 & uVar1) == 0) {
            uVar5 = uVar5 & uVar1;
          }
          else if (param_2 <= uVar5) {
            uVar6 = 0;
            if (param_2 != 0) {
              uVar6 = uVar5 / param_2;
            }
            uVar5 = uVar5 - uVar6 * param_2;
          }
          plVar4 = plVar3;
          if (uVar5 != uVar7) {
            uVar6 = *param_1;
            if (*(long *)(uVar6 + uVar5 * 8) == 0) {
              *(long **)(uVar6 + uVar5 * 8) = plVar2;
              uVar7 = uVar5;
            }
            else {
              *plVar2 = *plVar3;
              *plVar3 = **(undefined8 **)(uVar6 + uVar5 * 8);
              **(long **)(uVar6 + uVar5 * 8) = (long)plVar3;
              plVar4 = plVar2;
            }
          }
          plVar2 = plVar4;
          plVar3 = (long *)*plVar4;
        }
      }
    }
    return;
  }
  if (param_2 < uVar7) {
    uVar1 = (ulong)((float)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar1) {
      uVar1 = 1L << (-LZCOUNT(uVar1 - 1) & 0x3fU);
    }
    if (param_2 <= uVar1) {
      param_2 = uVar1;
    }
    if (param_2 < uVar7) goto LAB_109c2115c;
  }
  return;
}



/* Entry: 109c211e4; end: 109c21417;  */

void FUN_109c211e4(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    uVar1 = *param_1;
    *param_1 = 0;
    if (uVar1 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      uVar1 = *param_1;
      *param_1 = param_2;
      if (uVar1 != 0) {
        if ((char)param_1[2] == '\x01') {
          func_0x000109c21368(uVar1 + 0x10);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(uVar1);
        return;
      }
      return;
    }
    uVar1 = param_2 << 3;
    __Znwm();
    uVar2 = *param_1;
    *param_1 = uVar1;
    if (uVar2 != 0) {
      __ZdlPv();
    }
    uVar1 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar1 * 8) = 0;
      uVar1 = uVar1 + 1;
    } while (param_2 != uVar1);
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar1 = plVar3[1];
      uVar2 = param_2 - 1;
      if ((param_2 & uVar2) == 0) {
        uVar1 = uVar1 & uVar2;
      }
      else if (param_2 <= uVar1) {
        uVar6 = 0;
        if (param_2 != 0) {
          uVar6 = uVar1 / param_2;
        }
        uVar1 = uVar1 - uVar6 * param_2;
      }
      *(ulong **)(*param_1 + uVar1 * 8) = param_1 + 2;
      plVar4 = (long *)*plVar3;
      while (plVar4 != (long *)0x0) {
        uVar6 = plVar4[1];
        if ((param_2 & uVar2) == 0) {
          uVar6 = uVar6 & uVar2;
        }
        else if (param_2 <= uVar6) {
          uVar7 = 0;
          if (param_2 != 0) {
            uVar7 = uVar6 / param_2;
          }
          uVar6 = uVar6 - uVar7 * param_2;
        }
        plVar5 = plVar4;
        if (uVar6 != uVar1) {
          uVar7 = *param_1;
          if (*(long *)(uVar7 + uVar6 * 8) == 0) {
            *(long **)(uVar7 + uVar6 * 8) = plVar3;
            uVar1 = uVar6;
          }
          else {
            *plVar3 = *plVar4;
            *plVar4 = **(undefined8 **)(uVar7 + uVar6 * 8);
            **(long **)(uVar7 + uVar6 * 8) = (long)plVar4;
            plVar5 = plVar3;
          }
        }
        plVar3 = plVar5;
        plVar4 = (long *)*plVar5;
      }
    }
  }
  return;
}



/* Entry: 109c21418; end: 109c21427;  */

void FUN_109c21418(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c278;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109c21428; end: 109c21447;  */

void FUN_109c21428(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c278;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c21448; end: 109c21457;  */

undefined8 * FUN_109c21448(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0x80);
  if (*(char *)(param_1 + 0x77) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x60));
  }
  if (*(char *)(param_1 + 0x5f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x48));
  }
  FUN_109c61bbc(param_1 + 0x20);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 109c21458; end: 109c2146b;  */

void FUN_109c21458(void)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c2146c; end: 109c21607;  */

void FUN_109c2146c(undefined8 param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  
  puVar11 = (undefined8 *)*param_2;
  puVar3 = (undefined8 *)param_2[1];
  uVar7 = (long)puVar3 - (long)puVar11;
  puVar12 = (undefined8 *)*param_3;
  if ((ulong)(param_3[2] - (long)puVar12) < uVar7) {
    uVar7 = (long)uVar7 >> 4;
    func_0x000109c21668(param_3);
    if (uVar7 >> 0x3c != 0) {
      FUN_109c184dc();
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x109c2160c);
      (*pcVar6)();
    }
    uVar9 = param_3[2] - *param_3 >> 3;
    if (uVar9 <= uVar7) {
      uVar9 = uVar7;
    }
    if (0x7fffffffffffffef < (ulong)(param_3[2] - *param_3)) {
      uVar9 = 0xfffffffffffffff;
    }
    FUN_109c20950(param_3,uVar9);
    puVar8 = (undefined8 *)param_3[1];
    for (; puVar11 != puVar3; puVar11 = puVar11 + 2) {
      lVar10 = puVar11[1];
      uVar13 = *puVar11;
      puVar8[1] = puVar11[1];
      *puVar8 = uVar13;
      if (lVar10 != 0) {
        plVar1 = (long *)(lVar10 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puVar8 = puVar8 + 2;
    }
  }
  else {
    puVar8 = (undefined8 *)param_3[1];
    if (uVar7 <= (ulong)((long)puVar8 - (long)puVar12)) {
      if (puVar11 != puVar3) {
        do {
          func_0x000109c1e534(puVar12,puVar11);
          puVar11 = puVar11 + 2;
          puVar12 = puVar12 + 2;
        } while (puVar11 != puVar3);
        puVar8 = (undefined8 *)param_3[1];
      }
      while (puVar8 != puVar12) {
        puVar8 = puVar8 + -2;
        FUN_10959b818();
      }
      param_3[1] = (long)puVar12;
      return;
    }
    puVar2 = (undefined8 *)(((long)puVar8 - (long)puVar12) + (long)puVar11);
    if (puVar8 != puVar12) {
      do {
        func_0x000109c1e534(puVar12,puVar11);
        puVar11 = puVar11 + 2;
        puVar12 = puVar12 + 2;
      } while (puVar11 != puVar2);
      puVar8 = (undefined8 *)param_3[1];
    }
    for (; puVar2 != puVar3; puVar2 = puVar2 + 2) {
      lVar10 = puVar2[1];
      uVar13 = *puVar2;
      puVar8[1] = puVar2[1];
      *puVar8 = uVar13;
      if (lVar10 != 0) {
        plVar1 = (long *)(lVar10 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puVar8 = puVar8 + 2;
    }
  }
  param_3[1] = (long)puVar8;
  return;
}



/* Entry: 109c21608; end: 109c2160f;  */

void FUN_109c21608(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109c2160c);
  (*pcVar1)();
}



/* Entry: 109c21610; end: 109c216c3;  */

undefined8 * FUN_109c21610(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c216c4; end: 109c216d3;  */

void FUN_109c216c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c308;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109c216d4; end: 109c216f3;  */

void FUN_109c216d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c308;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c216f4; end: 109c21703;  */

/* WARNING: Possible PIC construction at 0x000109c1a4a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109c1a4a8) */

long FUN_109c216f4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_109c1c060(param_1 + 0x98,0);
  if (*(long *)(param_1 + 0x80) != 0) {
    *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x80);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x68);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x50);
    __ZdlPv();
  }
  func_0x000109c1d1a4(param_1 + 0x48,0);
  plVar5 = *(long **)(param_1 + 0x40);
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
  return param_1 + 0x38;
}



/* Entry: 109c21704; end: 109c21717;  */

void FUN_109c21704(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c21718; end: 109c2172f;  */

void FUN_109c21718(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109c21728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 109c21730; end: 109c21767;  */

undefined8 FUN_109c21730(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b2c3a8);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109c21768; end: 109c2176b;  */

void FUN_109c21768(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c2176c; end: 109c21f4b;  */

void FUN_109c2176c(undefined **param_1,undefined **param_2,undefined **param_3,undefined8 *param_4,
                  int param_5,undefined **param_6,int param_7,long param_8,long param_9,
                  undefined4 param_10,undefined4 param_11,ulong *param_12,ulong *param_13)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  long lVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined8 *puVar18;
  ulong *unaff_x24;
  int iStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  int iStack_350;
  int iStack_34c;
  undefined1 auStack_348 [8];
  uint uStack_340;
  undefined1 auStack_33c [52];
  long lStack_308;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  ulong *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined **ppuStack_2d0;
  ulong *puStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined1 *puStack_2b0;
  code *pcStack_2a8;
  long *plStack_2a0;
  int iStack_294;
  ulong *puStack_290;
  ulong uStack_288;
  ulong uStack_280;
  uint uStack_278;
  uint uStack_274;
  uint uStack_270;
  int iStack_26c;
  ulong *puStack_268;
  undefined *puStack_260;
  int iStack_254;
  long lStack_250;
  long lStack_248;
  undefined *puStack_240;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 uStack_228;
  undefined8 uStack_220;
  ulong uStack_218;
  undefined8 *puStack_210;
  undefined8 uStack_208;
  undefined4 uStack_200;
  undefined1 uStack_1fc;
  undefined4 uStack_1f8;
  undefined **ppuStack_1f0;
  ulong uStack_1e8;
  uint uStack_1e0;
  bool bStack_1dc;
  undefined3 uStack_1db;
  undefined4 uStack_1d8;
  byte bStack_1d4;
  undefined *puStack_1d0;
  ulong uStack_1c8;
  undefined4 uStack_1c0;
  uint uStack_1bc;
  undefined4 uStack_1b8;
  byte bStack_1b4;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_17b;
  undefined4 uStack_170;
  undefined1 auStack_16c [44];
  undefined2 uStack_140;
  undefined1 uStack_13e;
  undefined8 uStack_138;
  undefined5 uStack_130;
  undefined3 uStack_12b;
  undefined5 uStack_128;
  undefined4 uStack_120;
  undefined1 uStack_11c;
  undefined2 uStack_118;
  undefined1 auStack_116 [6];
  undefined1 auStack_110 [16];
  undefined8 uStack_100;
  undefined8 uStack_f2;
  undefined2 uStack_ea;
  undefined4 auStack_e8 [16];
  undefined2 uStack_a8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar17 = (undefined **)param_1[8];
  puVar18 = (undefined8 *)param_2[8];
  puStack_260 = param_6[8];
  iStack_254 = param_7;
  lStack_250 = param_8;
  if (((ppuVar17 == (undefined **)0x0) || (puVar18 == (undefined8 *)0x0)) ||
     (puStack_260 == (undefined *)0x0)) {
    FUN_1092a988c(&puStack_1b0);
    FUN_1092b4db8(&uStack_1a0,&UNK_10f5a3be7,0x22);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEb();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEb();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEb();
    FUN_10926dc5c(&puStack_1d0,&puStack_198,&ppuStack_1f0);
    func_0x000105687ee0(&puStack_1d0);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x109c21bf0);
    (*pcVar3)();
  }
  lStack_248 = param_9;
  if ((int)param_3 == 0x65) {
    puVar10 = *(undefined8 **)(param_8 + 0x80);
    if (puVar10 != (undefined8 *)0x0) {
      unaff_x24 = (ulong *)(ulong)param_10._1_1_;
      if ((((byte)param_10 == 0) || (iVar11 = *(int *)(param_1 + 1), iVar11 < 2)) ||
         ((*(int *)((long)param_1 + 0xc) < 2 || (*(int *)(param_1 + 2) < 2)))) {
        if (((param_10._1_1_ == 0) || (*(int *)(param_2 + 1) < 2)) ||
           ((*(int *)((long)param_2 + 0xc) < 2 || (*(int *)(param_2 + 2) < 2)))) goto LAB_109c21c50;
        iVar11 = *(int *)(param_1 + 1);
      }
      iStack_26c = (int)param_4;
      if (iStack_26c == 0x70) {
        uStack_278 = *(uint *)(param_1 + 2);
        if (iVar11 < 2) {
          uStack_278 = 0xffffffff;
        }
        uStack_270 = uStack_278;
        if (iVar11 < 1) {
          uStack_280 = 0xffffffff;
        }
        else {
          uStack_280 = (ulong)*(uint *)((long)param_1 + 0xc);
        }
      }
      else {
        uStack_278 = *(uint *)((long)param_1 + 0xc);
        if (iVar11 < 1) {
          uStack_278 = 0xffffffff;
        }
        if (iVar11 < 2) {
          uStack_270 = 0xffffffff;
          uStack_280 = 0xffffffff;
        }
        else {
          uStack_270 = *(uint *)(param_1 + 2);
          uStack_280 = (ulong)uStack_270;
        }
      }
      iVar11 = *(int *)(param_2 + 1);
      if (param_5 == 0x70) {
        uStack_200 = *(undefined4 *)(param_2 + 2);
        if (iVar11 < 2) {
          uStack_200 = 0xffffffff;
        }
        uVar9 = uStack_200;
        if (iVar11 < 1) {
          uVar13 = 0xffffffff;
        }
        else {
          uVar13 = *(undefined4 *)((long)param_2 + 0xc);
        }
      }
      else {
        uVar9 = *(undefined4 *)((long)param_2 + 0xc);
        if (iVar11 < 1) {
          uVar9 = 0xffffffff;
        }
        if (iVar11 < 2) {
          uStack_200 = 0xffffffff;
          uVar13 = 0xffffffff;
        }
        else {
          uStack_200 = *(undefined4 *)(param_2 + 2);
          uVar13 = uStack_200;
        }
      }
      puStack_268 = param_12;
      uVar12 = *(uint *)((long)param_6 + 0xc);
      if (*(int *)(param_6 + 1) < 1) {
        uVar12 = 0xffffffff;
      }
      uStack_288 = (ulong)uVar12;
      if (*(int *)(param_6 + 1) < 2) {
        uVar15 = 0xffffffff;
      }
      else {
        uVar15 = (ulong)*(uint *)(param_6 + 2);
      }
      uStack_228 = (undefined *)0x0;
      uStack_220 = 0x7f800000ff800000;
      uStack_218 = uStack_218 & 0xffffffffffff0000;
      if (param_9 == 0) {
        uStack_274 = 1;
      }
      else {
        uStack_228 = *(undefined **)(param_9 + 0x40);
        bVar4 = param_7 == -1 || param_7 == 3;
        uStack_218 = CONCAT71(uStack_218._1_7_,bVar4);
        uStack_274 = bVar4 ^ 1;
      }
      if (*(char *)((long)param_12 + 4) == '\x01') {
        uStack_220 = CONCAT44(0x7f800000,(int)*param_12);
      }
      uStack_208 = CONCAT44(uVar13,uVar9);
      if (*(char *)((long)param_13 + 4) == '\x01') {
        uStack_220 = CONCAT44((int)*param_13,(undefined4)uStack_220);
      }
      puStack_290 = param_13;
      param_13 = (ulong *)*puVar10;
      uStack_1fc = param_5 != 0x70;
      uStack_1f8 = 0;
      plStack_2a0 = (long *)(param_8 + 0x80);
      iStack_294 = param_5;
      puStack_210 = puVar18;
      __ZNSt3__15mutex4lockEv(param_13 + 0xe);
      bStack_1b4 = (byte)param_10 & param_10._1_1_;
      *(undefined4 *)((long)param_13 + 4) = 0;
      uStack_1a8 = 0;
      uStack_1a0 = 0;
      puStack_198 = (undefined *)0x0;
      lVar14 = 0;
      do {
        *(undefined2 *)((long)&uStack_190 + lVar14) = 0;
        *(undefined1 *)((long)&uStack_190 + lVar14 + 2) = 0;
        *(undefined4 *)((long)&uStack_170 + lVar14) = 0;
        auStack_16c[lVar14] = 0;
        *(undefined8 *)((long)&uStack_188 + lVar14) = 0;
        *(undefined8 *)(&stack0xfffffffffffffe80 + lVar14) = 0;
        lVar1 = lVar14 + 0x28;
        *(undefined8 *)((long)&uStack_17b + lVar14) = 0;
        lVar14 = lVar1;
      } while (lVar1 != 0x50);
      uStack_140 = 0;
      uStack_13e = 0;
      uStack_120 = 0;
      uStack_11c = 0;
      uStack_138 = 0;
      uStack_130 = 0;
      uStack_12b = 0;
      uStack_128 = 0;
      lVar14 = 0;
      do {
        *(undefined2 *)((long)&uStack_118 + lVar14) = 0;
        auStack_116[lVar14] = 0;
        *(undefined8 *)(auStack_110 + lVar14) = 0;
        *(undefined4 *)(auStack_110 + lVar14 + 7) = 0;
        *(undefined8 *)((long)&uStack_100 + lVar14) = 0;
        *(undefined8 *)(&stack0xffffffffffffff08 + lVar14) = 0;
        *(undefined8 *)((long)&uStack_f2 + lVar14) = 0;
        *(undefined2 *)((long)&uStack_ea + lVar14) = 0x101;
        lVar1 = lVar14 + 0x38;
        *(undefined4 *)((long)auStack_e8 + lVar14) = 0;
        lVar14 = lVar1;
      } while (lVar1 != 0x70);
      uStack_a8 = 0;
      uStack_1d8 = 0;
      bStack_1d4 = (byte)param_10;
      uStack_1e8 = uStack_280 & 0xffffffff | (ulong)uStack_278 << 0x20;
      uStack_1e0 = uStack_270;
      _bStack_1dc = CONCAT31(uStack_1db,iStack_26c == 0x70);
      uStack_1c0 = (undefined4)uVar15;
      uStack_1b8 = 0;
      uStack_1c8 = (uStack_288 | uVar15 << 0x20) >> 0x20 | uStack_288 << 0x20;
      puStack_1d0 = puStack_260;
      uStack_1bc = uStack_1bc & 0xffffff00;
      ppuVar8 = &puStack_1d0;
      param_4 = &uStack_228;
      ppuStack_1f0 = ppuVar17;
      FUN_109c220e0(&puStack_210,&ppuStack_1f0,ppuVar8,param_4,uStack_274,param_13,&puStack_1b0);
      ppuVar7 = &puStack_1b0;
      func_0x000109baa308(param_13);
      param_1 = (undefined **)(param_13 + 0xe);
      __ZNSt3__15mutex6unlockEv();
      goto LAB_109c21ecc;
    }
  }
LAB_109c21c50:
  ppuVar7 = param_2;
  ppuVar8 = param_3;
  FUN_109591cd0(0x3f800000,0);
  if (lStack_248 != 0) {
    ppuVar17 = param_6 + 1;
    uStack_228 = (undefined *)0x0;
    uStack_220 = 0;
    uStack_218 = 0;
    if (ppuVar17 == (undefined **)&uStack_228) {
      param_3 = (undefined **)0x0;
      uVar12 = *(uint *)ppuVar17;
LAB_109c21cfc:
      uStack_238 = 0xffffffff;
      uStack_230 = 0xffffffff;
    }
    else {
      uVar12 = *(uint *)ppuVar17;
      param_3 = (undefined **)(ulong)uVar12;
      if (uVar12 == 0) {
        uVar12 = 0;
        goto LAB_109c21cfc;
      }
      _memcpy((ulong)&uStack_228 | 4,(long)param_6 + 0xc,(long)(int)uVar12 << 2);
      uStack_228 = (undefined *)CONCAT44(uStack_228._4_4_,uVar12);
      if ((int)uVar12 < 1) goto LAB_109c21cfc;
      uStack_238 = uStack_228._4_4_;
      if (uVar12 == 1) {
        param_3 = (undefined **)0x1;
        uVar12 = 1;
        uStack_230 = 0xffffffff;
      }
      else {
        uStack_230 = (undefined4)uStack_220;
      }
    }
    puStack_240 = (undefined *)0x100000004;
    uStack_234 = 1;
    uStack_22c = 0;
    uVar12 = uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar12) {
      uVar12 = 5;
    }
    iVar11 = 0xf5749aa;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,(long)param_6 + 0xc,uVar12);
    iVar5 = 0xf5749aa;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,(ulong)&puStack_240 | 4,4);
    param_2 = (undefined **)&UNK_10f574cf1;
    puStack_1b0 = &UNK_10f574cf1;
    uStack_1a8 = 0xf;
    uStack_1a0 = CONCAT71(uStack_1a0._1_7_,iVar11 == iVar5);
    puStack_198 = &UNK_10f574d01;
    uStack_190 = 0xe;
    FUN_10959b640(&puStack_1b0);
    if ((ppuVar17 != &puStack_240) && (iVar11 == iVar5)) {
      uVar12 = (uint)puStack_240;
      if ((uint)puStack_240 != 0) {
        _memcpy((long)param_6 + 0xc,(ulong)&puStack_240 | 4,(long)(int)(uint)puStack_240 << 2);
      }
      *(uint *)ppuVar17 = uVar12;
    }
    FUN_109c21f4c(lStack_248,iStack_254,param_6,lStack_250);
    puVar18 = &uStack_228;
    uVar12 = *(uint *)ppuVar17 & ((int)*(uint *)ppuVar17 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar12) {
      uVar12 = 5;
    }
    iVar11 = 0xf5749aa;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,(long)param_6 + 0xc,uVar12);
    uVar12 = (uint)param_3 & ((int)(uint)param_3 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar12) {
      uVar12 = 5;
    }
    param_4 = (undefined8 *)(ulong)uVar12;
    iVar5 = 0xf5749aa;
    ppuVar8 = (undefined **)((ulong)puVar18 | 4);
    ppuVar7 = (undefined **)0x1a;
    FUN_109c60fbc();
    puStack_1b0 = &UNK_10f574cf1;
    uStack_1a8 = 0xf;
    uStack_1a0 = CONCAT71(uStack_1a0._1_7_,iVar11 == iVar5);
    puStack_198 = &UNK_10f574d01;
    uStack_190 = 0xe;
    param_1 = &puStack_1b0;
    FUN_10959b640();
    unaff_x24 = param_12;
    if ((ppuVar17 != (undefined **)&uStack_228) && (iVar11 == iVar5)) {
      uVar12 = (uint)uStack_228;
      if ((uint)uStack_228 != 0) {
        ppuVar8 = (undefined **)((long)(int)(uint)uStack_228 << 2);
        param_1 = (undefined **)((long)param_6 + 0xc);
        ppuVar7 = (undefined **)((ulong)puVar18 | 4);
        _memcpy();
      }
      *(uint *)ppuVar17 = uVar12;
    }
  }
  uVar15 = *param_13;
  if ((*param_12 >> 0x20 & 1) == 0) {
    if ((uVar15 >> 0x20 & 1) != 0) {
      param_1 = param_6;
      func_0x000109c23e38(uVar15 & 0xffffffff);
    }
  }
  else if ((uVar15 >> 0x20 & 1) == 0) {
    param_1 = param_6;
    func_0x000109c23d78();
  }
  else {
    param_1 = param_6;
    func_0x000109c23ef8(*param_12 & 0xffffffff);
  }
LAB_109c21ecc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    func_0x000105673d7c(&puStack_1b0);
    ppuVar6 = param_1;
    __Unwind_Resume();
    pcStack_2a8 = FUN_109c21f4c;
    ppuStack_2f0 = param_2;
    ppuStack_2e8 = param_3;
    puStack_2e0 = unaff_x24;
    puStack_2d8 = puVar18;
    ppuStack_2d0 = ppuVar17;
    puStack_2c8 = param_13;
    ppuStack_2c0 = param_1;
    ppuStack_2b8 = param_6;
    puStack_2b0 = &stack0xfffffffffffffff0;
    if (*(char *)(ppuVar6 + 9) == '\x01') {
      FUN_109c10ef4(auStack_348);
    }
    else {
      FUN_109c13518(auStack_348,ppuVar6,1);
    }
    uVar2 = *(uint *)(ppuVar8 + 1);
    uVar12 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar12) {
      uVar12 = 5;
    }
    iVar11 = 0xf5749aa;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,(long)ppuVar8 + 0xc,uVar12);
    uStack_340 = uStack_340 & ((int)uStack_340 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uStack_340) {
      uStack_340 = 5;
    }
    iVar5 = 0xf5749aa;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,auStack_33c,uStack_340);
    puVar16 = ppuVar8[8];
    if (iVar11 == iVar5) {
      _vDSP_vadd(lStack_308,1,puVar16,1,puVar16,1,(long)iVar11);
    }
    else {
      uVar9 = 0x65;
      if (uVar2 - 1 != (int)ppuVar7 && (int)ppuVar7 != -1) {
        uVar9 = 0x66;
      }
      FUN_109c23af4(&iStack_35c,ppuVar8 + 1,&uStack_340,ppuVar7);
      if (0 < iStack_35c) {
        iVar11 = 0;
        lVar14 = lStack_308;
        do {
          FUN_109c23c2c(uVar9,uStack_358,uStack_354,lVar14,puVar16,param_4);
          lVar14 = lVar14 + (long)iStack_34c * 4;
          puVar16 = puVar16 + (long)iStack_350 * 4;
          iVar11 = iVar11 + 1;
        } while (iVar11 < iStack_35c);
      }
    }
    FUN_109c10e9c(auStack_348);
    return;
  }
  return;
}



/* Entry: 109c21f4c; end: 109c220df;  */

void FUN_109c21f4c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  int iStack_ac;
  undefined1 auStack_a8 [8];
  uint uStack_a0;
  undefined1 auStack_9c [52];
  long lStack_68;
  
  if (*(char *)(param_1 + 0x48) == '\x01') {
    FUN_109c10ef4(auStack_a8);
  }
  else {
    FUN_109c13518(auStack_a8,param_1,1);
  }
  uVar2 = *(uint *)(param_3 + 8);
  uVar1 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar1) {
    uVar1 = 5;
  }
  iVar5 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,param_3 + 0xc,uVar1);
  uStack_a0 = uStack_a0 & ((int)uStack_a0 >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uStack_a0) {
    uStack_a0 = 5;
  }
  iVar3 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,auStack_9c,uStack_a0);
  lVar6 = *(long *)(param_3 + 0x40);
  if (iVar5 == iVar3) {
    _vDSP_vadd(lStack_68,1,lVar6,1,lVar6,1,(long)iVar5);
  }
  else {
    uVar4 = 0x65;
    if (uVar2 - 1 != (int)param_2 && (int)param_2 != -1) {
      uVar4 = 0x66;
    }
    FUN_109c23af4(&iStack_bc,(uint *)(param_3 + 8),&uStack_a0,param_2);
    if (0 < iStack_bc) {
      iVar5 = 0;
      lVar7 = lStack_68;
      do {
        FUN_109c23c2c(uVar4,uStack_b8,uStack_b4,lVar7,lVar6,param_4);
        lVar7 = lVar7 + (long)iStack_ac * 4;
        lVar6 = lVar6 + (long)iStack_b0 * 4;
        iVar5 = iVar5 + 1;
      } while (iVar5 < iStack_bc);
    }
  }
  FUN_109c10e9c(auStack_a8);
  return;
}



/* Entry: 109c220e0; end: 109c22497;  */

void FUN_109c220e0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  int param_5,undefined1 *param_6,undefined1 *param_7)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  code *pcVar10;
  code *pcVar11;
  uint uVar12;
  undefined2 *puVar13;
  float fVar14;
  undefined8 uVar15;
  undefined5 uStack_60;
  undefined3 uStack_5b;
  
  uVar15 = *param_1;
  uStack_60 = (undefined5)param_1[1];
  uVar8 = *(undefined8 *)((long)param_1 + 0xd);
  uStack_5b = (undefined3)uVar8;
  fVar14 = *(float *)(param_1 + 3);
  uVar6 = *(undefined1 *)((long)param_1 + 0x1c);
  puVar13 = (undefined2 *)(param_7 + 0x20);
  *puVar13 = 0x101;
  param_7[0x22] = 4;
  *(undefined8 *)(param_7 + 0x35) = uVar8;
  *(undefined8 *)(param_7 + 0x28) = uVar15;
  *(ulong *)(param_7 + 0x30) = CONCAT35(uStack_5b,uStack_60);
  *(int *)(param_7 + 0x40) = (int)fVar14;
  param_7[0x44] = uVar6;
  uVar15 = *param_2;
  uStack_60 = (undefined5)param_2[1];
  uVar8 = *(undefined8 *)((long)param_2 + 0xd);
  uStack_5b = (undefined3)uVar8;
  fVar14 = *(float *)(param_2 + 3);
  uVar6 = *(undefined1 *)((long)param_2 + 0x1c);
  param_7[0x4a] = 4;
  *(undefined2 *)(param_7 + 0x48) = 0x101;
  *(undefined8 *)(param_7 + 0x5d) = uVar8;
  *(undefined8 *)(param_7 + 0x50) = uVar15;
  *(ulong *)(param_7 + 0x58) = CONCAT35(uStack_5b,uStack_60);
  *(int *)(param_7 + 0x68) = (int)fVar14;
  param_7[0x6c] = uVar6;
  uVar15 = *param_3;
  uStack_60 = (undefined5)param_3[1];
  uVar8 = *(undefined8 *)((long)param_3 + 0xd);
  uStack_5b = (undefined3)uVar8;
  fVar14 = *(float *)(param_3 + 3);
  uVar6 = *(undefined1 *)((long)param_3 + 0x1c);
  param_7[0x72] = 4;
  *(undefined2 *)(param_7 + 0x70) = 0x101;
  *(undefined8 *)(param_7 + 0x85) = uVar8;
  *(undefined8 *)(param_7 + 0x78) = uVar15;
  *(ulong *)(param_7 + 0x80) = CONCAT35(uStack_5b,uStack_60);
  *(int *)(param_7 + 0x90) = (int)fVar14;
  param_7[0x94] = uVar6;
  puVar5 = param_6;
  FUN_109ba9d68();
  uVar12 = 0x80000000 >> (ulong)((uint)LZCOUNT((uint)puVar5 & 0x31) & 0x1f);
  *param_6 = (char)uVar12;
  if ((uVar12 & 0xff) == 1) {
    uVar7 = 0;
    uVar6 = 1;
    *param_7 = 1;
    *(undefined2 *)(param_7 + 0x98) = 0x101;
    param_7[0x9a] = 4;
    *(undefined2 *)(param_7 + 0xa8) = 0x101;
    param_7[0xaa] = 4;
    *(undefined8 *)(param_7 + 0xb8) = *(undefined8 *)(param_7 + 0x30);
    *(undefined4 *)(param_7 + 0xc0) = *(undefined4 *)(param_7 + 0x30);
    *(undefined4 *)(param_7 + 0xc4) = 0x1010000;
    *(int *)(param_7 + 200) = (int)(float)*(int *)(param_7 + 0x40);
    *(undefined2 *)(param_7 + 0xd0) = 0x101;
    param_7[0xd2] = 4;
    *(undefined2 *)(param_7 + 0xe0) = 0x101;
    param_7[0xe2] = 4;
    param_7[0xfc] = 0;
    uVar9 = *(undefined4 *)(param_7 + 0x58);
    uVar12 = *(uint *)(param_7 + 0x5c);
    *(undefined4 *)(param_7 + 0xf0) = uVar9;
    pcVar10 = FUN_109c23880;
    pcVar11 = FUN_109c236a4;
  }
  else {
    if (uVar12 == 0x10) {
      *param_7 = 0x10;
      *(undefined2 *)(param_7 + 0x98) = 0x101;
      param_7[0x9a] = 4;
      *(undefined2 *)(param_7 + 0xa8) = 0x101;
      param_7[0xaa] = 4;
      *(undefined4 *)(param_7 + 0xb8) = *(undefined4 *)(param_7 + 0x30);
      *(uint *)(param_7 + 0xbc) = *(int *)(param_7 + 0x34) + 7U & 0xfffffff8;
      *(undefined4 *)(param_7 + 0xc0) = *(undefined4 *)(param_7 + 0x30);
      *(undefined4 *)(param_7 + 0xc4) = 0x8010100;
      *(int *)(param_7 + 200) = (int)(float)*(int *)(param_7 + 0x40);
      *(undefined2 *)(param_7 + 0xd0) = 0x101;
      param_7[0xd2] = 4;
      *(undefined2 *)(param_7 + 0xe0) = 0x101;
      param_7[0xe2] = 4;
      param_7[0xfc] = 0;
      uVar9 = *(undefined4 *)(param_7 + 0x58);
      iVar3 = *(int *)(param_7 + 0x5c);
      *(undefined4 *)(param_7 + 0xf0) = uVar9;
      pcVar10 = FUN_109c230e8;
      pcVar11 = FUN_109c2306c;
    }
    else {
      if (uVar12 != 0x20) goto LAB_109c223ac;
      *param_7 = 0x20;
      *(undefined2 *)(param_7 + 0x98) = 0x101;
      param_7[0x9a] = 4;
      *(undefined2 *)(param_7 + 0xa8) = 0x101;
      param_7[0xaa] = 4;
      *(undefined4 *)(param_7 + 0xb8) = *(undefined4 *)(param_7 + 0x30);
      *(uint *)(param_7 + 0xbc) = *(int *)(param_7 + 0x34) + 7U & 0xfffffff8;
      *(undefined4 *)(param_7 + 0xc0) = *(undefined4 *)(param_7 + 0x30);
      *(undefined4 *)(param_7 + 0xc4) = 0x8010100;
      *(int *)(param_7 + 200) = (int)(float)*(int *)(param_7 + 0x40);
      *(undefined2 *)(param_7 + 0xd0) = 0x101;
      param_7[0xd2] = 4;
      *(undefined2 *)(param_7 + 0xe0) = 0x101;
      param_7[0xe2] = 4;
      param_7[0xfc] = 0;
      uVar9 = *(undefined4 *)(param_7 + 0x58);
      iVar3 = *(int *)(param_7 + 0x5c);
      *(undefined4 *)(param_7 + 0xf0) = uVar9;
      pcVar10 = FUN_109c22514;
      pcVar11 = FUN_109c22498;
    }
    uVar12 = iVar3 + 7U & 0xfffffff8;
    uVar6 = 8;
    uVar7 = 1;
  }
  *(uint *)(param_7 + 0xf4) = uVar12;
  *(undefined4 *)(param_7 + 0xf8) = uVar9;
  param_7[0xfd] = uVar7;
  param_7[0xfe] = 1;
  param_7[0xff] = uVar6;
  *(int *)(param_7 + 0x100) = (int)(float)*(int *)(param_7 + 0x68);
  *(code **)(param_7 + 8) = pcVar11;
  *(code **)(param_7 + 0x10) = pcVar11;
  *(code **)(param_7 + 0x18) = pcVar10;
LAB_109c223ac:
  uVar8 = param_4[1];
  uVar15 = *param_4;
  *(undefined8 *)(param_7 + 0x120) = param_4[2];
  *(undefined8 *)(param_7 + 0x118) = uVar8;
  *(undefined8 *)(param_7 + 0x110) = uVar15;
  param_7[0x120] = (char)param_5;
  lVar1 = 0x24;
  if (param_5 != 0) {
    lVar1 = 0x5c;
  }
  lVar2 = 0x14;
  if (param_5 != 0) {
    lVar2 = 0x3c;
  }
  iVar3 = 1 << (ulong)((byte)param_7[0x121] & 0x1f);
  if ((int)((*(int *)((long)puVar13 + lVar2) + iVar3) - 1U & -iVar3) <
      *(int *)(param_7 + lVar1 + 0x98)) {
    *(uint *)(param_6 + 4) = *(uint *)(param_6 + 4) | 1;
    FUN_109baa054();
    if (*(long *)(param_7 + 0x110) != 0) {
      lVar1 = 0x14;
      if (param_7[0x120] != '\0') {
        lVar1 = 0x3c;
      }
      iVar3 = *(int *)((long)puVar13 + lVar1);
      lVar1 = 0x24;
      if (param_7[0x120] != '\0') {
        lVar1 = 0x5c;
      }
      iVar4 = *(int *)(param_7 + lVar1 + 0x98);
      FUN_109ba9084();
      _memcpy();
      uVar12 = iVar4 - iVar3;
      _bzero(param_6 + (long)iVar3 * 4,
             -(ulong)(uVar12 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar12 << 2);
      *(undefined1 **)(param_7 + 0x110) = param_6;
    }
  }
  return;
}



/* Entry: 109c22498; end: 109c22513;  */

void FUN_109c22498(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined5 uStack_28;
  undefined3 uStack_23;
  undefined4 uStack_20;
  char cStack_1c;
  float fStack_18;
  undefined1 uStack_14;
  
  uStack_30 = *(undefined8 *)(param_2 + 8);
  uStack_28 = (undefined5)*(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x15);
  uStack_23 = (undefined3)uVar1;
  uStack_20 = (undefined4)((ulong)uVar1 >> 0x18);
  cStack_1c = (char)((ulong)uVar1 >> 0x38);
  fStack_18 = (float)*(int *)(param_2 + 0x20);
  uStack_14 = *(undefined1 *)(param_2 + 0x24);
  uStack_58 = *(undefined8 *)(param_3 + 8);
  uStack_50 = *(undefined8 *)(param_3 + 0x18);
  uStack_40 = *(ulong *)(param_3 + 0x28);
  uStack_48 = *(undefined8 *)(param_3 + 0x20);
  uStack_38 = *(undefined4 *)(param_3 + 0x30);
  if (cStack_1c == '\0') {
    FUN_109c22ad0(param_1,&uStack_30,&uStack_58);
  }
  else {
    FUN_109c22f54(&uStack_30,uStack_58,uStack_40 & 0xffffffff);
  }
  return;
}



/* Entry: 109c22514; end: 109c22acf;  */

void FUN_109c22514(int param_1,long param_2,undefined8 *param_3,uint *param_4,undefined8 *param_5,
                  long param_6)

{
  uint uVar1;
  float *pfVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  int iVar36;
  bool bVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 *puVar40;
  undefined8 uVar41;
  undefined8 *puVar42;
  undefined8 uVar43;
  int iVar44;
  ulong uVar45;
  uint uVar46;
  ulong uVar47;
  undefined8 *puVar48;
  undefined8 *puVar49;
  uint uVar50;
  int iVar53;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar61;
  undefined8 uVar60;
  float fVar62;
  float fVar63;
  undefined8 uVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar75;
  float fVar76;
  float fVar77;
  undefined1 auVar74 [16];
  float fVar78;
  float fVar80;
  float fVar81;
  float fVar82;
  undefined1 auVar79 [16];
  float fVar83;
  float fVar85;
  float fVar86;
  float fVar87;
  undefined1 auVar84 [16];
  float fVar88;
  float fVar90;
  float fVar91;
  float fVar92;
  undefined1 auVar89 [16];
  float fVar93;
  float fVar95;
  float fVar96;
  float fVar97;
  undefined1 auVar94 [16];
  float fVar98;
  float fVar100;
  float fVar101;
  float fVar102;
  undefined1 auVar99 [16];
  float fVar103;
  float fVar105;
  float fVar106;
  float fVar107;
  undefined1 auVar104 [16];
  float fVar108;
  float fVar110;
  float fVar111;
  float fVar112;
  undefined1 auVar109 [16];
  float fVar113;
  float fVar115;
  float fVar116;
  float fVar117;
  undefined1 auVar114 [16];
  float fVar118;
  float fVar120;
  float fVar121;
  float fVar122;
  undefined1 auVar119 [16];
  float fVar123;
  float fVar125;
  float fVar126;
  float fVar127;
  undefined1 auVar124 [16];
  float fVar128;
  float fVar130;
  float fVar131;
  float fVar132;
  undefined1 auVar129 [16];
  float fVar133;
  float fVar135;
  float fVar136;
  float fVar137;
  undefined1 auVar134 [16];
  float fVar138;
  float fVar140;
  float fVar141;
  float fVar142;
  undefined1 auVar139 [16];
  float fVar143;
  float fVar145;
  float fVar146;
  float fVar147;
  undefined1 auVar144 [16];
  float fVar148;
  float fVar150;
  float fVar151;
  float fVar152;
  undefined1 auVar149 [16];
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  float *pfStack_1f0;
  uint uStack_1e8;
  uint uStack_1e4;
  undefined8 uStack_1e0;
  int iStack_1d8;
  int iStack_1d4;
  uint uStack_1d0;
  uint uStack_1cc;
  uint uStack_1c8;
  int iStack_1c4;
  undefined8 uStack_1c0;
  byte bStack_1b8;
  float afStack_1b4 [8];
  undefined8 auStack_194 [34];
  
  iStack_1c4 = *(int *)(param_2 + 0x20);
  iStack_1d8 = *(int *)(param_6 + 0x10);
  iStack_1d4 = *(int *)(param_6 + 0x14);
  uStack_1e8 = *param_4;
  uStack_1e4 = param_4[1];
  uVar47 = (ulong)(int)uStack_1e8;
  afStack_1b4[6] = 0.0;
  afStack_1b4[7] = 0.0;
  afStack_1b4[4] = 0.0;
  afStack_1b4[5] = 0.0;
  afStack_1b4[2] = 0.0;
  afStack_1b4[3] = 0.0;
  afStack_1b4[0] = 0.0;
  afStack_1b4[1] = 0.0;
  puStack_208 = (undefined8 *)
                (*(long *)(param_2 + 8) + (long)(int)(uStack_1e8 * *(int *)(param_2 + 0x28)) * 4);
  puStack_200 = (undefined8 *)
                (*(long *)(param_2 + 0x40) + (long)(int)(uStack_1e4 * *(int *)(param_2 + 0x60)) * 4)
  ;
  puStack_1f8 = (undefined8 *)
                (*(long *)(param_6 + 8) + (long)(int)(uStack_1e4 * *(int *)(param_6 + 0x18)) * 4 +
                uVar47 * 4);
  bVar37 = (float *)*param_3 == (float *)0x0;
  pfStack_1f0 = (float *)*param_3;
  if (bVar37) {
    pfStack_1f0 = afStack_1b4;
  }
  bStack_1b8 = 0x20;
  if (!bVar37) {
    bStack_1b8 = 0x21;
  }
  if (*(char *)(param_3 + 2) != '\x01') {
    bStack_1b8 = !bVar37;
  }
  uVar50 = (int)*param_5 - 8;
  iVar53 = (int)((ulong)*param_5 >> 0x20) + -8;
  uStack_1e0 = CONCAT44(iVar53,uVar50);
  uStack_1d0 = *(int *)(param_2 + 0x28) << 2;
  uStack_1cc = *(int *)(param_2 + 0x60) << 2;
  uStack_1c8 = *(int *)(param_6 + 0x18) << 2;
  uVar51 = param_3[1];
  if (param_1 == 2) {
    uVar45 = (ulong)uStack_1c8;
    uVar52 = *puStack_208;
    uVar38 = puStack_208[1];
    uVar54 = puStack_208[2];
    uVar39 = puStack_208[3];
    uVar64 = *puStack_200;
    uVar41 = puStack_200[1];
    uVar60 = puStack_200[2];
    uVar43 = puStack_200[3];
    Hint_Prefetch(puStack_208 + 0xc,0,0,0);
    Hint_Prefetch(puStack_200 + 0xc,0,0,0);
    Hint_Prefetch(puStack_208 + 0x14,0,0,0);
    Hint_Prefetch(puStack_200 + 0x14,0,0,0);
    Hint_Prefetch(puStack_208 + 0x1c,0,0,0);
    Hint_Prefetch(puStack_200 + 0x1c,0,0,0);
    Hint_Prefetch(puStack_208 + 0x24,0,0,0);
    Hint_Prefetch(puStack_200 + 0x24,0,0,0);
    puVar48 = puStack_208;
    puVar49 = puStack_1f8;
    do {
      fVar148 = 0.0;
      fVar150 = 0.0;
      fVar151 = 0.0;
      fVar152 = 0.0;
      fVar143 = 0.0;
      fVar145 = 0.0;
      fVar146 = 0.0;
      fVar147 = 0.0;
      fVar138 = 0.0;
      fVar140 = 0.0;
      fVar141 = 0.0;
      fVar142 = 0.0;
      fVar133 = 0.0;
      fVar135 = 0.0;
      fVar136 = 0.0;
      fVar137 = 0.0;
      fVar128 = 0.0;
      fVar130 = 0.0;
      fVar131 = 0.0;
      fVar132 = 0.0;
      fVar123 = 0.0;
      fVar125 = 0.0;
      fVar126 = 0.0;
      fVar127 = 0.0;
      fVar118 = 0.0;
      fVar120 = 0.0;
      fVar121 = 0.0;
      fVar122 = 0.0;
      fVar113 = 0.0;
      fVar115 = 0.0;
      fVar116 = 0.0;
      fVar117 = 0.0;
      fVar108 = 0.0;
      fVar110 = 0.0;
      fVar111 = 0.0;
      fVar112 = 0.0;
      fVar98 = 0.0;
      fVar100 = 0.0;
      fVar101 = 0.0;
      fVar102 = 0.0;
      fVar88 = 0.0;
      fVar90 = 0.0;
      fVar91 = 0.0;
      fVar92 = 0.0;
      fVar78 = 0.0;
      fVar80 = 0.0;
      fVar81 = 0.0;
      fVar82 = 0.0;
      fVar77 = (float)uVar64;
      fVar103 = (float)uVar52;
      fVar105 = (float)((ulong)uVar52 >> 0x20);
      fVar106 = (float)uVar38;
      fVar107 = (float)((ulong)uVar38 >> 0x20);
      fVar73 = fVar103 * fVar77 + 0.0;
      fVar75 = fVar105 * fVar77 + 0.0;
      fVar76 = fVar106 * fVar77 + 0.0;
      fVar77 = fVar107 * fVar77 + 0.0;
      fVar87 = (float)((ulong)uVar64 >> 0x20);
      fVar83 = fVar103 * fVar87 + 0.0;
      fVar85 = fVar105 * fVar87 + 0.0;
      fVar86 = fVar106 * fVar87 + 0.0;
      fVar87 = fVar107 * fVar87 + 0.0;
      fVar97 = (float)uVar41;
      fVar93 = fVar103 * fVar97 + 0.0;
      fVar95 = fVar105 * fVar97 + 0.0;
      fVar96 = fVar106 * fVar97 + 0.0;
      fVar97 = fVar107 * fVar97 + 0.0;
      fVar65 = (float)((ulong)uVar41 >> 0x20);
      fVar103 = fVar103 * fVar65 + 0.0;
      fVar105 = fVar105 * fVar65 + 0.0;
      fVar106 = fVar106 * fVar65 + 0.0;
      fVar107 = fVar107 * fVar65 + 0.0;
      puVar40 = puVar48;
      puVar42 = puStack_200;
      iVar36 = iStack_1c4;
      while( true ) {
        iVar36 = iVar36 + -1;
        fVar65 = (float)uVar52;
        fVar66 = (float)((ulong)uVar52 >> 0x20);
        fVar67 = (float)uVar38;
        fVar68 = (float)((ulong)uVar38 >> 0x20);
        fVar59 = (float)uVar60;
        fVar61 = (float)((ulong)uVar60 >> 0x20);
        fVar62 = (float)uVar43;
        fVar63 = (float)((ulong)uVar43 >> 0x20);
        fVar69 = (float)uVar54;
        fVar70 = (float)((ulong)uVar54 >> 0x20);
        fVar71 = (float)uVar39;
        fVar72 = (float)((ulong)uVar39 >> 0x20);
        fVar55 = (float)uVar64;
        fVar56 = (float)((ulong)uVar64 >> 0x20);
        fVar57 = (float)uVar41;
        fVar58 = (float)((ulong)uVar41 >> 0x20);
        if (iVar36 == 0) break;
        Hint_Prefetch(puVar40 + 0x24,0,0,0);
        fVar113 = fVar113 + fVar65 * fVar59;
        fVar115 = fVar115 + fVar66 * fVar59;
        fVar116 = fVar116 + fVar67 * fVar59;
        fVar117 = fVar117 + fVar68 * fVar59;
        uVar38 = puVar40[5];
        fVar123 = fVar123 + fVar65 * fVar61;
        fVar125 = fVar125 + fVar66 * fVar61;
        fVar126 = fVar126 + fVar67 * fVar61;
        fVar127 = fVar127 + fVar68 * fVar61;
        uVar39 = puVar40[7];
        fVar133 = fVar133 + fVar65 * fVar62;
        fVar135 = fVar135 + fVar66 * fVar62;
        fVar136 = fVar136 + fVar67 * fVar62;
        fVar137 = fVar137 + fVar68 * fVar62;
        uVar43 = puVar42[7];
        fVar143 = fVar143 + fVar65 * fVar63;
        fVar145 = fVar145 + fVar66 * fVar63;
        fVar146 = fVar146 + fVar67 * fVar63;
        fVar147 = fVar147 + fVar68 * fVar63;
        uVar52 = puVar40[4];
        fVar118 = fVar118 + fVar69 * fVar59;
        fVar120 = fVar120 + fVar70 * fVar59;
        fVar121 = fVar121 + fVar71 * fVar59;
        fVar122 = fVar122 + fVar72 * fVar59;
        uVar41 = puVar42[5];
        fVar128 = fVar128 + fVar69 * fVar61;
        fVar130 = fVar130 + fVar70 * fVar61;
        fVar131 = fVar131 + fVar71 * fVar61;
        fVar132 = fVar132 + fVar72 * fVar61;
        fVar138 = fVar138 + fVar69 * fVar62;
        fVar140 = fVar140 + fVar70 * fVar62;
        fVar141 = fVar141 + fVar71 * fVar62;
        fVar142 = fVar142 + fVar72 * fVar62;
        fVar148 = fVar148 + fVar69 * fVar63;
        fVar150 = fVar150 + fVar70 * fVar63;
        fVar151 = fVar151 + fVar71 * fVar63;
        fVar152 = fVar152 + fVar72 * fVar63;
        uVar60 = puVar42[6];
        fVar78 = fVar78 + fVar69 * fVar55;
        fVar80 = fVar80 + fVar70 * fVar55;
        fVar81 = fVar81 + fVar71 * fVar55;
        fVar82 = fVar82 + fVar72 * fVar55;
        fVar88 = fVar88 + fVar69 * fVar56;
        fVar90 = fVar90 + fVar70 * fVar56;
        fVar91 = fVar91 + fVar71 * fVar56;
        fVar92 = fVar92 + fVar72 * fVar56;
        uVar64 = puVar42[4];
        fVar98 = fVar98 + fVar69 * fVar57;
        fVar100 = fVar100 + fVar70 * fVar57;
        fVar101 = fVar101 + fVar71 * fVar57;
        fVar102 = fVar102 + fVar72 * fVar57;
        fVar108 = fVar108 + fVar69 * fVar58;
        fVar110 = fVar110 + fVar70 * fVar58;
        fVar111 = fVar111 + fVar71 * fVar58;
        fVar112 = fVar112 + fVar72 * fVar58;
        Hint_Prefetch(puVar42 + 0x28,0,0,0);
        fVar69 = (float)uVar64;
        fVar65 = (float)uVar52;
        fVar66 = (float)((ulong)uVar52 >> 0x20);
        fVar67 = (float)uVar38;
        fVar68 = (float)((ulong)uVar38 >> 0x20);
        fVar73 = fVar73 + fVar65 * fVar69;
        fVar75 = fVar75 + fVar66 * fVar69;
        fVar76 = fVar76 + fVar67 * fVar69;
        fVar77 = fVar77 + fVar68 * fVar69;
        uVar54 = puVar40[6];
        fVar69 = (float)((ulong)uVar64 >> 0x20);
        fVar83 = fVar83 + fVar65 * fVar69;
        fVar85 = fVar85 + fVar66 * fVar69;
        fVar86 = fVar86 + fVar67 * fVar69;
        fVar87 = fVar87 + fVar68 * fVar69;
        fVar69 = (float)uVar41;
        fVar93 = fVar93 + fVar65 * fVar69;
        fVar95 = fVar95 + fVar66 * fVar69;
        fVar96 = fVar96 + fVar67 * fVar69;
        fVar97 = fVar97 + fVar68 * fVar69;
        fVar69 = (float)((ulong)uVar41 >> 0x20);
        fVar103 = fVar103 + fVar65 * fVar69;
        fVar105 = fVar105 + fVar66 * fVar69;
        fVar106 = fVar106 + fVar67 * fVar69;
        fVar107 = fVar107 + fVar68 * fVar69;
        puVar40 = puVar40 + 4;
        puVar42 = puVar42 + 4;
      }
      fVar113 = fVar113 + fVar65 * fVar59;
      fVar115 = fVar115 + fVar66 * fVar59;
      fVar116 = fVar116 + fVar67 * fVar59;
      fVar117 = fVar117 + fVar68 * fVar59;
      fVar123 = fVar123 + fVar65 * fVar61;
      fVar125 = fVar125 + fVar66 * fVar61;
      fVar126 = fVar126 + fVar67 * fVar61;
      fVar127 = fVar127 + fVar68 * fVar61;
      fVar133 = fVar133 + fVar65 * fVar62;
      fVar135 = fVar135 + fVar66 * fVar62;
      fVar136 = fVar136 + fVar67 * fVar62;
      fVar137 = fVar137 + fVar68 * fVar62;
      fVar143 = fVar143 + fVar65 * fVar63;
      fVar145 = fVar145 + fVar66 * fVar63;
      fVar146 = fVar146 + fVar67 * fVar63;
      fVar147 = fVar147 + fVar68 * fVar63;
      fVar118 = fVar118 + fVar69 * fVar59;
      fVar120 = fVar120 + fVar70 * fVar59;
      fVar121 = fVar121 + fVar71 * fVar59;
      fVar122 = fVar122 + fVar72 * fVar59;
      fVar128 = fVar128 + fVar69 * fVar61;
      fVar130 = fVar130 + fVar70 * fVar61;
      fVar131 = fVar131 + fVar71 * fVar61;
      fVar132 = fVar132 + fVar72 * fVar61;
      fVar138 = fVar138 + fVar69 * fVar62;
      fVar140 = fVar140 + fVar70 * fVar62;
      fVar141 = fVar141 + fVar71 * fVar62;
      fVar142 = fVar142 + fVar72 * fVar62;
      fVar148 = fVar148 + fVar69 * fVar63;
      fVar150 = fVar150 + fVar70 * fVar63;
      fVar151 = fVar151 + fVar71 * fVar63;
      fVar152 = fVar152 + fVar72 * fVar63;
      fVar78 = fVar78 + fVar69 * fVar55;
      fVar80 = fVar80 + fVar70 * fVar55;
      fVar81 = fVar81 + fVar71 * fVar55;
      fVar82 = fVar82 + fVar72 * fVar55;
      fVar88 = fVar88 + fVar69 * fVar56;
      fVar90 = fVar90 + fVar70 * fVar56;
      fVar91 = fVar91 + fVar71 * fVar56;
      fVar92 = fVar92 + fVar72 * fVar56;
      fVar98 = fVar98 + fVar69 * fVar57;
      fVar100 = fVar100 + fVar70 * fVar57;
      fVar101 = fVar101 + fVar71 * fVar57;
      fVar102 = fVar102 + fVar72 * fVar57;
      fVar108 = fVar108 + fVar69 * fVar58;
      fVar110 = fVar110 + fVar70 * fVar58;
      fVar111 = fVar111 + fVar71 * fVar58;
      fVar112 = fVar112 + fVar72 * fVar58;
      uVar46 = (uint)uVar47;
      if ((int)uVar46 < (int)uVar50) {
        puVar48 = puVar48 + uStack_1d0;
      }
      else {
        puVar48 = puStack_208;
        if ((int)uStack_1e4 < iVar53) {
          puStack_200 = puStack_200 + uStack_1cc;
        }
      }
      uVar1 = uVar46;
      if ((bStack_1b8 & 0x20) != 0) {
        uVar1 = uStack_1e4;
      }
      pfVar2 = pfStack_1f0;
      if ((bStack_1b8 & 1) != 0) {
        pfVar2 = pfStack_1f0 + uVar1;
      }
      fVar65 = *pfVar2;
      fVar66 = pfVar2[1];
      fVar67 = pfVar2[2];
      fVar68 = pfVar2[3];
      fVar69 = pfVar2[4];
      fVar70 = pfVar2[5];
      fVar71 = pfVar2[6];
      fVar72 = pfVar2[7];
      uVar52 = *puVar48;
      uVar38 = puVar48[1];
      uVar54 = puVar48[2];
      uVar39 = puVar48[3];
      uVar64 = *puStack_200;
      uVar41 = puStack_200[1];
      uVar60 = puStack_200[2];
      uVar43 = puStack_200[3];
      if ((bStack_1b8 & 0x20) == 0) {
        auVar74._0_4_ = fVar73 + fVar65;
        auVar74._4_4_ = fVar75 + fVar66;
        auVar74._8_4_ = fVar76 + fVar67;
        auVar74._12_4_ = fVar77 + fVar68;
        auVar79._0_4_ = fVar78 + fVar69;
        auVar79._4_4_ = fVar80 + fVar70;
        auVar79._8_4_ = fVar81 + fVar71;
        auVar79._12_4_ = fVar82 + fVar72;
        auVar84._0_4_ = fVar83 + fVar65;
        auVar84._4_4_ = fVar85 + fVar66;
        auVar84._8_4_ = fVar86 + fVar67;
        auVar84._12_4_ = fVar87 + fVar68;
        auVar89._0_4_ = fVar88 + fVar69;
        auVar89._4_4_ = fVar90 + fVar70;
        auVar89._8_4_ = fVar91 + fVar71;
        auVar89._12_4_ = fVar92 + fVar72;
        auVar94._0_4_ = fVar93 + fVar65;
        auVar94._4_4_ = fVar95 + fVar66;
        auVar94._8_4_ = fVar96 + fVar67;
        auVar94._12_4_ = fVar97 + fVar68;
        auVar99._0_4_ = fVar98 + fVar69;
        auVar99._4_4_ = fVar100 + fVar70;
        auVar99._8_4_ = fVar101 + fVar71;
        auVar99._12_4_ = fVar102 + fVar72;
        auVar104._0_4_ = fVar103 + fVar65;
        auVar104._4_4_ = fVar105 + fVar66;
        auVar104._8_4_ = fVar106 + fVar67;
        auVar104._12_4_ = fVar107 + fVar68;
        auVar109._0_4_ = fVar108 + fVar69;
        auVar109._4_4_ = fVar110 + fVar70;
        auVar109._8_4_ = fVar111 + fVar71;
        auVar109._12_4_ = fVar112 + fVar72;
        auVar114._0_4_ = fVar113 + fVar65;
        auVar114._4_4_ = fVar115 + fVar66;
        auVar114._8_4_ = fVar116 + fVar67;
        auVar114._12_4_ = fVar117 + fVar68;
        auVar119._0_4_ = fVar118 + fVar69;
        auVar119._4_4_ = fVar120 + fVar70;
        auVar119._8_4_ = fVar121 + fVar71;
        auVar119._12_4_ = fVar122 + fVar72;
        auVar124._0_4_ = fVar123 + fVar65;
        auVar124._4_4_ = fVar125 + fVar66;
        auVar124._8_4_ = fVar126 + fVar67;
        auVar124._12_4_ = fVar127 + fVar68;
        auVar129._0_4_ = fVar128 + fVar69;
        auVar129._4_4_ = fVar130 + fVar70;
        auVar129._8_4_ = fVar131 + fVar71;
        auVar129._12_4_ = fVar132 + fVar72;
        auVar134._0_4_ = fVar133 + fVar65;
        auVar134._4_4_ = fVar135 + fVar66;
        auVar134._8_4_ = fVar136 + fVar67;
        auVar134._12_4_ = fVar137 + fVar68;
        auVar139._0_4_ = fVar138 + fVar69;
        auVar139._4_4_ = fVar140 + fVar70;
        auVar139._8_4_ = fVar141 + fVar71;
        auVar139._12_4_ = fVar142 + fVar72;
        auVar144._0_4_ = fVar143 + fVar65;
        auVar144._4_4_ = fVar145 + fVar66;
        auVar144._8_4_ = fVar146 + fVar67;
        auVar144._12_4_ = fVar147 + fVar68;
        auVar149._0_4_ = fVar148 + fVar69;
        auVar149._4_4_ = fVar150 + fVar70;
        auVar149._8_4_ = fVar151 + fVar71;
        auVar149._12_4_ = fVar152 + fVar72;
      }
      else {
        auVar74._0_4_ = fVar73 + fVar65;
        auVar74._4_4_ = fVar75 + fVar65;
        auVar74._8_4_ = fVar76 + fVar65;
        auVar74._12_4_ = fVar77 + fVar65;
        auVar79._0_4_ = fVar78 + fVar65;
        auVar79._4_4_ = fVar80 + fVar65;
        auVar79._8_4_ = fVar81 + fVar65;
        auVar79._12_4_ = fVar82 + fVar65;
        auVar84._0_4_ = fVar83 + fVar66;
        auVar84._4_4_ = fVar85 + fVar66;
        auVar84._8_4_ = fVar86 + fVar66;
        auVar84._12_4_ = fVar87 + fVar66;
        auVar89._0_4_ = fVar88 + fVar66;
        auVar89._4_4_ = fVar90 + fVar66;
        auVar89._8_4_ = fVar91 + fVar66;
        auVar89._12_4_ = fVar92 + fVar66;
        auVar94._0_4_ = fVar93 + fVar67;
        auVar94._4_4_ = fVar95 + fVar67;
        auVar94._8_4_ = fVar96 + fVar67;
        auVar94._12_4_ = fVar97 + fVar67;
        auVar99._0_4_ = fVar98 + fVar67;
        auVar99._4_4_ = fVar100 + fVar67;
        auVar99._8_4_ = fVar101 + fVar67;
        auVar99._12_4_ = fVar102 + fVar67;
        auVar104._0_4_ = fVar103 + fVar68;
        auVar104._4_4_ = fVar105 + fVar68;
        auVar104._8_4_ = fVar106 + fVar68;
        auVar104._12_4_ = fVar107 + fVar68;
        auVar109._0_4_ = fVar108 + fVar68;
        auVar109._4_4_ = fVar110 + fVar68;
        auVar109._8_4_ = fVar111 + fVar68;
        auVar109._12_4_ = fVar112 + fVar68;
        auVar114._0_4_ = fVar113 + fVar69;
        auVar114._4_4_ = fVar115 + fVar69;
        auVar114._8_4_ = fVar116 + fVar69;
        auVar114._12_4_ = fVar117 + fVar69;
        auVar119._0_4_ = fVar118 + fVar69;
        auVar119._4_4_ = fVar120 + fVar69;
        auVar119._8_4_ = fVar121 + fVar69;
        auVar119._12_4_ = fVar122 + fVar69;
        auVar124._0_4_ = fVar123 + fVar70;
        auVar124._4_4_ = fVar125 + fVar70;
        auVar124._8_4_ = fVar126 + fVar70;
        auVar124._12_4_ = fVar127 + fVar70;
        auVar129._0_4_ = fVar128 + fVar70;
        auVar129._4_4_ = fVar130 + fVar70;
        auVar129._8_4_ = fVar131 + fVar70;
        auVar129._12_4_ = fVar132 + fVar70;
        auVar134._0_4_ = fVar133 + fVar71;
        auVar134._4_4_ = fVar135 + fVar71;
        auVar134._8_4_ = fVar136 + fVar71;
        auVar134._12_4_ = fVar137 + fVar71;
        auVar139._0_4_ = fVar138 + fVar71;
        auVar139._4_4_ = fVar140 + fVar71;
        auVar139._8_4_ = fVar141 + fVar71;
        auVar139._12_4_ = fVar142 + fVar71;
        auVar144._0_4_ = fVar143 + fVar72;
        auVar144._4_4_ = fVar145 + fVar72;
        auVar144._8_4_ = fVar146 + fVar72;
        auVar144._12_4_ = fVar147 + fVar72;
        auVar149._0_4_ = fVar148 + fVar72;
        auVar149._4_4_ = fVar150 + fVar72;
        auVar149._8_4_ = fVar151 + fVar72;
        auVar149._12_4_ = fVar152 + fVar72;
      }
      uStack_1c0._0_4_ = (undefined4)uVar51;
      uStack_1c0._4_4_ = (undefined4)((ulong)uVar51 >> 0x20);
      auVar4._4_4_ = (undefined4)uStack_1c0;
      auVar4._0_4_ = (undefined4)uStack_1c0;
      auVar4._8_4_ = (undefined4)uStack_1c0;
      auVar4._12_4_ = (undefined4)uStack_1c0;
      auVar74 = NEON_fmax(auVar74,auVar4,4);
      auVar5._4_4_ = (undefined4)uStack_1c0;
      auVar5._0_4_ = (undefined4)uStack_1c0;
      auVar5._8_4_ = (undefined4)uStack_1c0;
      auVar5._12_4_ = (undefined4)uStack_1c0;
      auVar79 = NEON_fmax(auVar79,auVar5,4);
      auVar6._4_4_ = (undefined4)uStack_1c0;
      auVar6._0_4_ = (undefined4)uStack_1c0;
      auVar6._8_4_ = (undefined4)uStack_1c0;
      auVar6._12_4_ = (undefined4)uStack_1c0;
      auVar84 = NEON_fmax(auVar84,auVar6,4);
      auVar7._4_4_ = (undefined4)uStack_1c0;
      auVar7._0_4_ = (undefined4)uStack_1c0;
      auVar7._8_4_ = (undefined4)uStack_1c0;
      auVar7._12_4_ = (undefined4)uStack_1c0;
      auVar89 = NEON_fmax(auVar89,auVar7,4);
      auVar8._4_4_ = (undefined4)uStack_1c0;
      auVar8._0_4_ = (undefined4)uStack_1c0;
      auVar8._8_4_ = (undefined4)uStack_1c0;
      auVar8._12_4_ = (undefined4)uStack_1c0;
      auVar94 = NEON_fmax(auVar94,auVar8,4);
      auVar9._4_4_ = (undefined4)uStack_1c0;
      auVar9._0_4_ = (undefined4)uStack_1c0;
      auVar9._8_4_ = (undefined4)uStack_1c0;
      auVar9._12_4_ = (undefined4)uStack_1c0;
      auVar99 = NEON_fmax(auVar99,auVar9,4);
      auVar10._4_4_ = (undefined4)uStack_1c0;
      auVar10._0_4_ = (undefined4)uStack_1c0;
      auVar10._8_4_ = (undefined4)uStack_1c0;
      auVar10._12_4_ = (undefined4)uStack_1c0;
      auVar104 = NEON_fmax(auVar104,auVar10,4);
      auVar11._4_4_ = (undefined4)uStack_1c0;
      auVar11._0_4_ = (undefined4)uStack_1c0;
      auVar11._8_4_ = (undefined4)uStack_1c0;
      auVar11._12_4_ = (undefined4)uStack_1c0;
      auVar109 = NEON_fmax(auVar109,auVar11,4);
      auVar12._4_4_ = (undefined4)uStack_1c0;
      auVar12._0_4_ = (undefined4)uStack_1c0;
      auVar12._8_4_ = (undefined4)uStack_1c0;
      auVar12._12_4_ = (undefined4)uStack_1c0;
      auVar114 = NEON_fmax(auVar114,auVar12,4);
      auVar13._4_4_ = (undefined4)uStack_1c0;
      auVar13._0_4_ = (undefined4)uStack_1c0;
      auVar13._8_4_ = (undefined4)uStack_1c0;
      auVar13._12_4_ = (undefined4)uStack_1c0;
      auVar119 = NEON_fmax(auVar119,auVar13,4);
      auVar14._4_4_ = (undefined4)uStack_1c0;
      auVar14._0_4_ = (undefined4)uStack_1c0;
      auVar14._8_4_ = (undefined4)uStack_1c0;
      auVar14._12_4_ = (undefined4)uStack_1c0;
      auVar124 = NEON_fmax(auVar124,auVar14,4);
      auVar15._4_4_ = (undefined4)uStack_1c0;
      auVar15._0_4_ = (undefined4)uStack_1c0;
      auVar15._8_4_ = (undefined4)uStack_1c0;
      auVar15._12_4_ = (undefined4)uStack_1c0;
      auVar129 = NEON_fmax(auVar129,auVar15,4);
      auVar16._4_4_ = (undefined4)uStack_1c0;
      auVar16._0_4_ = (undefined4)uStack_1c0;
      auVar16._8_4_ = (undefined4)uStack_1c0;
      auVar16._12_4_ = (undefined4)uStack_1c0;
      auVar134 = NEON_fmax(auVar134,auVar16,4);
      auVar17._4_4_ = (undefined4)uStack_1c0;
      auVar17._0_4_ = (undefined4)uStack_1c0;
      auVar17._8_4_ = (undefined4)uStack_1c0;
      auVar17._12_4_ = (undefined4)uStack_1c0;
      auVar139 = NEON_fmax(auVar139,auVar17,4);
      auVar18._4_4_ = (undefined4)uStack_1c0;
      auVar18._0_4_ = (undefined4)uStack_1c0;
      auVar18._8_4_ = (undefined4)uStack_1c0;
      auVar18._12_4_ = (undefined4)uStack_1c0;
      auVar144 = NEON_fmax(auVar144,auVar18,4);
      auVar19._4_4_ = (undefined4)uStack_1c0;
      auVar19._0_4_ = (undefined4)uStack_1c0;
      auVar19._8_4_ = (undefined4)uStack_1c0;
      auVar19._12_4_ = (undefined4)uStack_1c0;
      auVar149 = NEON_fmax(auVar149,auVar19,4);
      auVar20._4_4_ = uStack_1c0._4_4_;
      auVar20._0_4_ = uStack_1c0._4_4_;
      auVar20._8_4_ = uStack_1c0._4_4_;
      auVar20._12_4_ = uStack_1c0._4_4_;
      auVar74 = NEON_fmin(auVar74,auVar20,4);
      auVar21._4_4_ = uStack_1c0._4_4_;
      auVar21._0_4_ = uStack_1c0._4_4_;
      auVar21._8_4_ = uStack_1c0._4_4_;
      auVar21._12_4_ = uStack_1c0._4_4_;
      auVar79 = NEON_fmin(auVar79,auVar21,4);
      auVar22._4_4_ = uStack_1c0._4_4_;
      auVar22._0_4_ = uStack_1c0._4_4_;
      auVar22._8_4_ = uStack_1c0._4_4_;
      auVar22._12_4_ = uStack_1c0._4_4_;
      auVar84 = NEON_fmin(auVar84,auVar22,4);
      auVar23._4_4_ = uStack_1c0._4_4_;
      auVar23._0_4_ = uStack_1c0._4_4_;
      auVar23._8_4_ = uStack_1c0._4_4_;
      auVar23._12_4_ = uStack_1c0._4_4_;
      auVar89 = NEON_fmin(auVar89,auVar23,4);
      auVar24._4_4_ = uStack_1c0._4_4_;
      auVar24._0_4_ = uStack_1c0._4_4_;
      auVar24._8_4_ = uStack_1c0._4_4_;
      auVar24._12_4_ = uStack_1c0._4_4_;
      auVar94 = NEON_fmin(auVar94,auVar24,4);
      auVar25._4_4_ = uStack_1c0._4_4_;
      auVar25._0_4_ = uStack_1c0._4_4_;
      auVar25._8_4_ = uStack_1c0._4_4_;
      auVar25._12_4_ = uStack_1c0._4_4_;
      auVar99 = NEON_fmin(auVar99,auVar25,4);
      auVar26._4_4_ = uStack_1c0._4_4_;
      auVar26._0_4_ = uStack_1c0._4_4_;
      auVar26._8_4_ = uStack_1c0._4_4_;
      auVar26._12_4_ = uStack_1c0._4_4_;
      auVar104 = NEON_fmin(auVar104,auVar26,4);
      auVar27._4_4_ = uStack_1c0._4_4_;
      auVar27._0_4_ = uStack_1c0._4_4_;
      auVar27._8_4_ = uStack_1c0._4_4_;
      auVar27._12_4_ = uStack_1c0._4_4_;
      auVar109 = NEON_fmin(auVar109,auVar27,4);
      auVar28._4_4_ = uStack_1c0._4_4_;
      auVar28._0_4_ = uStack_1c0._4_4_;
      auVar28._8_4_ = uStack_1c0._4_4_;
      auVar28._12_4_ = uStack_1c0._4_4_;
      auVar114 = NEON_fmin(auVar114,auVar28,4);
      auVar29._4_4_ = uStack_1c0._4_4_;
      auVar29._0_4_ = uStack_1c0._4_4_;
      auVar29._8_4_ = uStack_1c0._4_4_;
      auVar29._12_4_ = uStack_1c0._4_4_;
      auVar119 = NEON_fmin(auVar119,auVar29,4);
      auVar30._4_4_ = uStack_1c0._4_4_;
      auVar30._0_4_ = uStack_1c0._4_4_;
      auVar30._8_4_ = uStack_1c0._4_4_;
      auVar30._12_4_ = uStack_1c0._4_4_;
      auVar124 = NEON_fmin(auVar124,auVar30,4);
      auVar31._4_4_ = uStack_1c0._4_4_;
      auVar31._0_4_ = uStack_1c0._4_4_;
      auVar31._8_4_ = uStack_1c0._4_4_;
      auVar31._12_4_ = uStack_1c0._4_4_;
      auVar129 = NEON_fmin(auVar129,auVar31,4);
      auVar32._4_4_ = uStack_1c0._4_4_;
      auVar32._0_4_ = uStack_1c0._4_4_;
      auVar32._8_4_ = uStack_1c0._4_4_;
      auVar32._12_4_ = uStack_1c0._4_4_;
      auVar134 = NEON_fmin(auVar134,auVar32,4);
      auVar33._4_4_ = uStack_1c0._4_4_;
      auVar33._0_4_ = uStack_1c0._4_4_;
      auVar33._8_4_ = uStack_1c0._4_4_;
      auVar33._12_4_ = uStack_1c0._4_4_;
      auVar139 = NEON_fmin(auVar139,auVar33,4);
      auVar34._4_4_ = uStack_1c0._4_4_;
      auVar34._0_4_ = uStack_1c0._4_4_;
      auVar34._8_4_ = uStack_1c0._4_4_;
      auVar34._12_4_ = uStack_1c0._4_4_;
      auVar144 = NEON_fmin(auVar144,auVar34,4);
      auVar35._4_4_ = uStack_1c0._4_4_;
      auVar35._0_4_ = uStack_1c0._4_4_;
      auVar35._8_4_ = uStack_1c0._4_4_;
      auVar35._12_4_ = uStack_1c0._4_4_;
      auVar149 = NEON_fmin(auVar149,auVar35,4);
      iVar36 = iStack_1d8 - uVar46;
      iVar3 = iStack_1d4 - uStack_1e4;
      if (8 < iVar36) {
        iVar36 = 8;
      }
      if (8 < iVar3) {
        iVar3 = 8;
      }
      puVar40 = puStack_1f8;
      uVar47 = uVar45;
      if (iVar36 != 8 || iVar3 != 8) {
        puVar40 = auStack_194;
        uVar47 = 0x20;
      }
      Hint_Prefetch(puVar40,2,0,1);
      puVar40[1] = auVar74._8_8_;
      *puVar40 = auVar74._0_8_;
      puVar40[3] = auVar79._8_8_;
      puVar40[2] = auVar79._0_8_;
      puVar40 = (undefined8 *)((long)puVar40 + uVar47);
      Hint_Prefetch(puVar40,2,0,1);
      puVar40[1] = auVar84._8_8_;
      *puVar40 = auVar84._0_8_;
      puVar40[3] = auVar89._8_8_;
      puVar40[2] = auVar89._0_8_;
      puVar40 = (undefined8 *)((long)puVar40 + uVar47);
      Hint_Prefetch(puVar40,2,0,1);
      puVar40[1] = auVar94._8_8_;
      *puVar40 = auVar94._0_8_;
      puVar40[3] = auVar99._8_8_;
      puVar40[2] = auVar99._0_8_;
      puVar40 = (undefined8 *)((long)puVar40 + uVar47);
      Hint_Prefetch(puVar40,2,0,1);
      puVar40[1] = auVar104._8_8_;
      *puVar40 = auVar104._0_8_;
      puVar40[3] = auVar109._8_8_;
      puVar40[2] = auVar109._0_8_;
      puVar40 = (undefined8 *)((long)puVar40 + uVar47);
      Hint_Prefetch(puVar40,2,0,1);
      puVar40[1] = auVar114._8_8_;
      *puVar40 = auVar114._0_8_;
      puVar40[3] = auVar119._8_8_;
      puVar40[2] = auVar119._0_8_;
      puVar40 = (undefined8 *)((long)puVar40 + uVar47);
      Hint_Prefetch(puVar40,2,0,1);
      puVar40[1] = auVar124._8_8_;
      *puVar40 = auVar124._0_8_;
      puVar40[3] = auVar129._8_8_;
      puVar40[2] = auVar129._0_8_;
      puVar40 = (undefined8 *)((long)puVar40 + uVar47);
      Hint_Prefetch(puVar40,2,0,1);
      puVar40[1] = auVar134._8_8_;
      *puVar40 = auVar134._0_8_;
      puVar40[3] = auVar139._8_8_;
      puVar40[2] = auVar139._0_8_;
      puVar40 = (undefined8 *)((long)puVar40 + uVar47);
      Hint_Prefetch(puVar40,2,0,1);
      puVar40[1] = auVar144._8_8_;
      *puVar40 = auVar144._0_8_;
      *(undefined1 (*) [16])(puVar40 + 2) = auVar149;
      if (iVar36 != 8 || iVar3 != 8) {
        iVar44 = 0;
        puVar40 = auStack_194;
        puVar42 = puStack_1f8;
        do {
          Hint_Prefetch(puVar42,2,0,1);
          uVar47 = 0;
          do {
            *(undefined4 *)((long)puVar42 + uVar47 * 4) =
                 *(undefined4 *)((long)puVar40 + uVar47 * 4);
            uVar1 = (int)uVar47 + 1;
            uVar47 = (ulong)uVar1;
          } while ((int)uVar1 < iVar36);
          iVar44 = iVar44 + 1;
          puVar40 = puVar40 + 4;
          puVar42 = (undefined8 *)((long)puVar42 + uVar45);
        } while (iVar44 < iVar3);
      }
      puStack_1f8 = puStack_1f8 + 4;
      if (uVar46 == uVar50) {
        uStack_1e4 = uStack_1e4 + 8;
        puStack_1f8 = puVar49 + uVar45;
        puVar49 = puStack_1f8;
        uVar46 = uStack_1e8;
      }
      else {
        uVar46 = uVar46 + 8;
      }
      uVar47 = (ulong)uVar46;
    } while ((int)uStack_1e4 <= iVar53);
  }
  else {
    uStack_1c0 = uVar51;
    if (param_1 == 3) {
      func_0x000109baaa20(&puStack_208);
    }
    else {
      func_0x000109baa340(&puStack_208);
    }
  }
  return;
}



/* Entry: 109c22ad0; end: 109c22f53;  */

void FUN_109c22ad0(long *param_1,long *param_2,long *param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined2 uVar17;
  undefined5 uVar18;
  undefined5 uVar19;
  undefined5 uVar20;
  undefined5 uVar21;
  undefined5 uVar22;
  undefined5 uVar23;
  undefined5 uVar24;
  undefined5 uVar25;
  long *plVar26;
  undefined8 *puVar27;
  uint uVar28;
  long *plVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  int iVar33;
  long lVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 *puVar39;
  undefined8 *puVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  undefined1 uVar91;
  undefined1 uVar92;
  undefined1 uVar93;
  undefined1 uVar94;
  undefined1 uVar95;
  undefined1 uVar96;
  undefined1 uVar97;
  undefined1 uVar98;
  undefined1 uVar99;
  undefined1 uVar100;
  undefined1 uVar101;
  undefined1 uVar102;
  undefined1 uVar103;
  undefined1 uVar104;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_98 = 0;
  uStack_90 = 0;
  plVar26 = param_2;
  plVar29 = param_3;
  if ((int)param_4 < param_5) {
    do {
      iVar7 = *(int *)((long)param_2 + 0xc);
      lVar34 = (long)(int)param_2[2];
      puVar39 = (undefined8 *)(*param_2 + (long)(int)((int)param_2[2] * param_4) * 4);
      puVar30 = (undefined8 *)((long)puVar39 + lVar34 * 4);
      puVar31 = (undefined8 *)((long)puVar30 + lVar34 * 4);
      uVar28 = *(uint *)(param_2 + 1);
      iVar33 = iVar7 + -3;
      puVar40 = puVar39;
      if (iVar7 <= (int)param_4) {
        puVar40 = &uStack_98;
      }
      lVar3 = 0x10;
      if (iVar7 <= (int)param_4) {
        lVar3 = 0;
      }
      puVar27 = puVar30;
      if (iVar7 + -1 <= (int)param_4) {
        puVar27 = &uStack_98;
      }
      lVar4 = 0x10;
      if (iVar7 + -1 <= (int)param_4) {
        lVar4 = 0;
      }
      puVar5 = puVar31;
      if (iVar7 + -2 <= (int)param_4) {
        puVar5 = &uStack_98;
      }
      lVar6 = 0x10;
      if (iVar7 + -2 <= (int)param_4) {
        lVar6 = 0;
      }
      puVar32 = (undefined8 *)((long)puVar31 + lVar34 * 4);
      if (iVar33 <= (int)param_4) {
        puVar32 = &uStack_98;
        puVar31 = puVar5;
        puVar30 = puVar27;
        puVar39 = puVar40;
      }
      lVar34 = 0x10;
      if (iVar33 <= (int)param_4) {
        lVar34 = lVar3;
      }
      lVar3 = 0x10;
      if (iVar33 <= (int)param_4) {
        lVar3 = lVar4;
      }
      lVar4 = 0x10;
      if (iVar33 <= (int)param_4) {
        lVar4 = lVar6;
      }
      lVar6 = 0x10;
      if (iVar33 <= (int)param_4) {
        lVar6 = 0;
      }
      puVar40 = (undefined8 *)
                (*param_3 + (long)(int)((int)param_3[3] * (param_4 & 0xfffffff8)) * 4 +
                (ulong)(param_4 & 4) * 4);
      if ((int)param_1 == 2) {
        plVar26 = (long *)0x0;
        uVar2 = uVar28 & 0xfffffffc;
        if (uVar2 != 0) {
          uVar8 = *(undefined4 *)puVar39;
          uVar41 = (undefined1)uVar8;
          uVar42 = (undefined1)((uint)uVar8 >> 8);
          uVar43 = (undefined1)((uint)uVar8 >> 0x10);
          uVar44 = (undefined1)((uint)uVar8 >> 0x18);
          uVar8 = *(undefined4 *)((long)puVar39 + 4);
          uVar45 = (undefined1)uVar8;
          uVar46 = (undefined1)((uint)uVar8 >> 8);
          uVar47 = (undefined1)((uint)uVar8 >> 0x10);
          uVar48 = (undefined1)((uint)uVar8 >> 0x18);
          uVar8 = *(undefined4 *)(puVar39 + 1);
          uVar49 = (undefined1)uVar8;
          uVar50 = (undefined1)((uint)uVar8 >> 8);
          uVar51 = (undefined1)((uint)uVar8 >> 0x10);
          uVar52 = (undefined1)((uint)uVar8 >> 0x18);
          uVar8 = *(undefined4 *)((long)puVar39 + 0xc);
          uVar53 = (undefined1)uVar8;
          uVar54 = (undefined1)((uint)uVar8 >> 8);
          uVar55 = (undefined1)((uint)uVar8 >> 0x10);
          uVar56 = (undefined1)((uint)uVar8 >> 0x18);
          puVar39 = (undefined8 *)((long)puVar39 + lVar34);
          uVar8 = *(undefined4 *)puVar30;
          uVar57 = (undefined1)uVar8;
          uVar58 = (undefined1)((uint)uVar8 >> 8);
          uVar59 = (undefined1)((uint)uVar8 >> 0x10);
          uVar60 = (undefined1)((uint)uVar8 >> 0x18);
          uVar8 = *(undefined4 *)((long)puVar30 + 4);
          uVar61 = (undefined1)uVar8;
          uVar62 = (undefined1)((uint)uVar8 >> 8);
          uVar63 = (undefined1)((uint)uVar8 >> 0x10);
          uVar64 = (undefined1)((uint)uVar8 >> 0x18);
          uVar8 = *(undefined4 *)(puVar30 + 1);
          uVar65 = (undefined1)uVar8;
          uVar66 = (undefined1)((uint)uVar8 >> 8);
          uVar67 = (undefined1)((uint)uVar8 >> 0x10);
          uVar68 = (undefined1)((uint)uVar8 >> 0x18);
          uVar8 = *(undefined4 *)((long)puVar30 + 0xc);
          uVar69 = (undefined1)uVar8;
          uVar70 = (undefined1)((uint)uVar8 >> 8);
          uVar71 = (undefined1)((uint)uVar8 >> 0x10);
          uVar72 = (undefined1)((uint)uVar8 >> 0x18);
          puVar30 = (undefined8 *)((long)puVar30 + lVar3);
          uVar8 = *(undefined4 *)puVar31;
          uVar73 = (undefined1)uVar8;
          uVar74 = (undefined1)((uint)uVar8 >> 8);
          uVar75 = (undefined1)((uint)uVar8 >> 0x10);
          uVar76 = (undefined1)((uint)uVar8 >> 0x18);
          uVar8 = *(undefined4 *)((long)puVar31 + 4);
          uVar77 = (undefined1)uVar8;
          uVar78 = (undefined1)((uint)uVar8 >> 8);
          uVar79 = (undefined1)((uint)uVar8 >> 0x10);
          uVar80 = (undefined1)((uint)uVar8 >> 0x18);
          uVar8 = *(undefined4 *)(puVar31 + 1);
          uVar81 = (undefined1)uVar8;
          uVar82 = (undefined1)((uint)uVar8 >> 8);
          uVar83 = (undefined1)((uint)uVar8 >> 0x10);
          uVar84 = (undefined1)((uint)uVar8 >> 0x18);
          uVar8 = *(undefined4 *)((long)puVar31 + 0xc);
          uVar85 = (undefined1)uVar8;
          uVar86 = (undefined1)((uint)uVar8 >> 8);
          uVar87 = (undefined1)((uint)uVar8 >> 0x10);
          uVar88 = (undefined1)((uint)uVar8 >> 0x18);
          puVar31 = (undefined8 *)((long)puVar31 + lVar4);
          uVar8 = *(undefined4 *)puVar32;
          uVar89 = (undefined1)uVar8;
          uVar90 = (undefined1)((uint)uVar8 >> 8);
          uVar91 = (undefined1)((uint)uVar8 >> 0x10);
          uVar92 = (undefined1)((uint)uVar8 >> 0x18);
          uVar8 = *(undefined4 *)((long)puVar32 + 4);
          uVar93 = (undefined1)uVar8;
          uVar94 = (undefined1)((uint)uVar8 >> 8);
          uVar95 = (undefined1)((uint)uVar8 >> 0x10);
          uVar96 = (undefined1)((uint)uVar8 >> 0x18);
          uVar8 = *(undefined4 *)(puVar32 + 1);
          uVar97 = (undefined1)uVar8;
          uVar98 = (undefined1)((uint)uVar8 >> 8);
          uVar99 = (undefined1)((uint)uVar8 >> 0x10);
          uVar100 = (undefined1)((uint)uVar8 >> 0x18);
          uVar8 = *(undefined4 *)((long)puVar32 + 0xc);
          uVar101 = (undefined1)uVar8;
          uVar102 = (undefined1)((uint)uVar8 >> 8);
          uVar103 = (undefined1)((uint)uVar8 >> 0x10);
          uVar104 = (undefined1)((uint)uVar8 >> 0x18);
          puVar32 = (undefined8 *)((long)puVar32 + lVar6);
          Hint_Prefetch(puVar39 + 8,0,0,1);
          Hint_Prefetch(puVar30 + 8,0,0,1);
          Hint_Prefetch(puVar31 + 8,0,0,1);
          Hint_Prefetch(puVar32 + 8,0,0,1);
          Hint_Prefetch(puVar39 + 0x10,0,0,1);
          Hint_Prefetch(puVar30 + 0x10,0,0,1);
          Hint_Prefetch(puVar31 + 0x10,0,0,1);
          Hint_Prefetch(puVar32 + 0x10,0,0,1);
          Hint_Prefetch(puVar39 + 0x18,0,0,1);
          Hint_Prefetch(puVar30 + 0x18,0,0,1);
          Hint_Prefetch(puVar31 + 0x18,0,0,1);
          Hint_Prefetch(puVar32 + 0x18,0,0,1);
          plVar26 = (long *)0x4;
          if (uVar2 != 4) {
            do {
              uVar1 = (int)plVar26 + 4;
              plVar26 = (long *)(ulong)uVar1;
              uVar35 = puVar39[1];
              uVar10 = CONCAT13(uVar60,CONCAT12(uVar59,CONCAT11(uVar58,uVar57)));
              uVar19 = CONCAT14(uVar68,CONCAT13(uVar67,CONCAT12(uVar66,CONCAT11(uVar65,uVar64))));
              uVar8 = CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41)));
              uVar18 = CONCAT14(uVar52,CONCAT13(uVar51,CONCAT12(uVar50,CONCAT11(uVar49,uVar48))));
              Hint_Prefetch(puVar39 + 0x1e,0,0,1);
              uVar36 = puVar30[1];
              uVar14 = CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar61)));
              uVar21 = CONCAT14(uVar72,CONCAT13(uVar71,CONCAT12(uVar70,CONCAT11(uVar69,uVar68))));
              uVar13 = CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45)));
              uVar20 = CONCAT14(uVar56,CONCAT13(uVar55,CONCAT12(uVar54,CONCAT11(uVar53,uVar52))));
              Hint_Prefetch(puVar30 + 0x1e,0,0,1);
              uVar37 = puVar31[1];
              uVar12 = CONCAT13(uVar92,CONCAT12(uVar91,CONCAT11(uVar90,uVar89)));
              uVar17 = CONCAT11(uVar97,uVar96);
              uVar11 = CONCAT13(uVar76,CONCAT12(uVar75,CONCAT11(uVar74,uVar73)));
              uVar22 = CONCAT14(uVar84,CONCAT13(uVar83,CONCAT12(uVar82,CONCAT11(uVar81,uVar80))));
              Hint_Prefetch(puVar31 + 0x1e,0,0,1);
              uVar38 = puVar32[1];
              uVar16 = CONCAT13(uVar96,CONCAT12(uVar95,CONCAT11(uVar94,uVar93)));
              uVar24 = CONCAT14(uVar104,CONCAT13(uVar103,CONCAT12(uVar102,CONCAT11(uVar101,uVar100))
                                                ));
              uVar15 = CONCAT13(uVar80,CONCAT12(uVar79,CONCAT11(uVar78,uVar77)));
              uVar23 = CONCAT14(uVar88,CONCAT13(uVar87,CONCAT12(uVar86,CONCAT11(uVar85,uVar84))));
              Hint_Prefetch(puVar32 + 0x1e,0,0,1);
              uVar9 = *(undefined4 *)puVar39;
              uVar41 = (undefined1)uVar9;
              uVar42 = (undefined1)((uint)uVar9 >> 8);
              uVar43 = (undefined1)((uint)uVar9 >> 0x10);
              uVar44 = (undefined1)((uint)uVar9 >> 0x18);
              uVar9 = *(undefined4 *)((long)puVar39 + 4);
              uVar45 = (undefined1)uVar9;
              uVar46 = (undefined1)((uint)uVar9 >> 8);
              uVar47 = (undefined1)((uint)uVar9 >> 0x10);
              uVar48 = (undefined1)((uint)uVar9 >> 0x18);
              puVar39 = (undefined8 *)((long)puVar39 + lVar34);
              uVar9 = *(undefined4 *)puVar30;
              uVar57 = (undefined1)uVar9;
              uVar58 = (undefined1)((uint)uVar9 >> 8);
              uVar59 = (undefined1)((uint)uVar9 >> 0x10);
              uVar60 = (undefined1)((uint)uVar9 >> 0x18);
              uVar9 = *(undefined4 *)((long)puVar30 + 4);
              uVar61 = (undefined1)uVar9;
              uVar62 = (undefined1)((uint)uVar9 >> 8);
              uVar63 = (undefined1)((uint)uVar9 >> 0x10);
              uVar64 = (undefined1)((uint)uVar9 >> 0x18);
              puVar30 = (undefined8 *)((long)puVar30 + lVar3);
              uVar9 = *(undefined4 *)puVar31;
              uVar73 = (undefined1)uVar9;
              uVar74 = (undefined1)((uint)uVar9 >> 8);
              uVar75 = (undefined1)((uint)uVar9 >> 0x10);
              uVar76 = (undefined1)((uint)uVar9 >> 0x18);
              uVar9 = *(undefined4 *)((long)puVar31 + 4);
              uVar77 = (undefined1)uVar9;
              uVar78 = (undefined1)((uint)uVar9 >> 8);
              uVar79 = (undefined1)((uint)uVar9 >> 0x10);
              uVar80 = (undefined1)((uint)uVar9 >> 0x18);
              puVar31 = (undefined8 *)((long)puVar31 + lVar4);
              uVar9 = *(undefined4 *)puVar32;
              uVar89 = (undefined1)uVar9;
              uVar90 = (undefined1)((uint)uVar9 >> 8);
              uVar91 = (undefined1)((uint)uVar9 >> 0x10);
              uVar92 = (undefined1)((uint)uVar9 >> 0x18);
              uVar9 = *(undefined4 *)((long)puVar32 + 4);
              uVar93 = (undefined1)uVar9;
              uVar94 = (undefined1)((uint)uVar9 >> 8);
              uVar95 = (undefined1)((uint)uVar9 >> 0x10);
              uVar96 = (undefined1)((uint)uVar9 >> 0x18);
              puVar32 = (undefined8 *)((long)puVar32 + lVar6);
              uVar49 = (undefined1)uVar35;
              uVar50 = (undefined1)((ulong)uVar35 >> 8);
              uVar51 = (undefined1)((ulong)uVar35 >> 0x10);
              uVar52 = (undefined1)((ulong)uVar35 >> 0x18);
              uVar53 = (undefined1)((ulong)uVar35 >> 0x20);
              uVar54 = (undefined1)((ulong)uVar35 >> 0x28);
              uVar55 = (undefined1)((ulong)uVar35 >> 0x30);
              uVar56 = (undefined1)((ulong)uVar35 >> 0x38);
              puVar40[1] = CONCAT44(uVar12,uVar11);
              *puVar40 = CONCAT44(uVar10,uVar8);
              uVar65 = (undefined1)uVar36;
              uVar66 = (undefined1)((ulong)uVar36 >> 8);
              uVar67 = (undefined1)((ulong)uVar36 >> 0x10);
              uVar68 = (undefined1)((ulong)uVar36 >> 0x18);
              uVar69 = (undefined1)((ulong)uVar36 >> 0x20);
              uVar70 = (undefined1)((ulong)uVar36 >> 0x28);
              uVar71 = (undefined1)((ulong)uVar36 >> 0x30);
              uVar72 = (undefined1)((ulong)uVar36 >> 0x38);
              puVar40[5] = CONCAT44(uVar16,uVar15);
              puVar40[4] = CONCAT44(uVar14,uVar13);
              uVar81 = (undefined1)uVar37;
              uVar82 = (undefined1)((ulong)uVar37 >> 8);
              uVar83 = (undefined1)((ulong)uVar37 >> 0x10);
              uVar84 = (undefined1)((ulong)uVar37 >> 0x18);
              uVar85 = (undefined1)((ulong)uVar37 >> 0x20);
              uVar86 = (undefined1)((ulong)uVar37 >> 0x28);
              uVar87 = (undefined1)((ulong)uVar37 >> 0x30);
              uVar88 = (undefined1)((ulong)uVar37 >> 0x38);
              *(int *)(puVar40 + 9) = (int)((uint5)uVar22 >> 8);
              *(int *)((long)puVar40 + 0x4c) =
                   (int)(CONCAT14(uVar100,CONCAT13(uVar99,CONCAT12(uVar98,uVar17))) >> 8);
              *(int *)(puVar40 + 8) = (int)((uint5)uVar18 >> 8);
              *(int *)((long)puVar40 + 0x44) = (int)((uint5)uVar19 >> 8);
              uVar97 = (undefined1)uVar38;
              uVar98 = (undefined1)((ulong)uVar38 >> 8);
              uVar99 = (undefined1)((ulong)uVar38 >> 0x10);
              uVar100 = (undefined1)((ulong)uVar38 >> 0x18);
              uVar101 = (undefined1)((ulong)uVar38 >> 0x20);
              uVar102 = (undefined1)((ulong)uVar38 >> 0x28);
              uVar103 = (undefined1)((ulong)uVar38 >> 0x30);
              uVar104 = (undefined1)((ulong)uVar38 >> 0x38);
              *(int *)(puVar40 + 0xd) = (int)((uint5)uVar23 >> 8);
              *(int *)((long)puVar40 + 0x6c) = (int)((uint5)uVar24 >> 8);
              *(int *)(puVar40 + 0xc) = (int)((uint5)uVar20 >> 8);
              *(int *)((long)puVar40 + 100) = (int)((uint5)uVar21 >> 8);
              puVar40 = puVar40 + 0x10;
            } while (uVar1 != uVar2);
          }
          puVar40[1] = CONCAT44(CONCAT13(uVar92,CONCAT12(uVar91,CONCAT11(uVar90,uVar89))),
                                CONCAT13(uVar76,CONCAT12(uVar75,CONCAT11(uVar74,uVar73))));
          *puVar40 = CONCAT44(CONCAT13(uVar60,CONCAT12(uVar59,CONCAT11(uVar58,uVar57))),
                              CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41))));
          puVar40[5] = CONCAT44(CONCAT13(uVar96,CONCAT12(uVar95,CONCAT11(uVar94,uVar93))),
                                CONCAT13(uVar80,CONCAT12(uVar79,CONCAT11(uVar78,uVar77))));
          puVar40[4] = CONCAT44(CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar61))),
                                CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45))));
          *(int *)(puVar40 + 9) =
               (int)(CONCAT14(uVar84,CONCAT13(uVar83,CONCAT12(uVar82,CONCAT11(uVar81,uVar80)))) >> 8
                    );
          *(int *)((long)puVar40 + 0x4c) =
               (int)(CONCAT14(uVar100,CONCAT13(uVar99,CONCAT12(uVar98,CONCAT11(uVar97,uVar96)))) >>
                    8);
          *(int *)(puVar40 + 8) =
               (int)(CONCAT14(uVar52,CONCAT13(uVar51,CONCAT12(uVar50,CONCAT11(uVar49,uVar48)))) >> 8
                    );
          *(int *)((long)puVar40 + 0x44) =
               (int)(CONCAT14(uVar68,CONCAT13(uVar67,CONCAT12(uVar66,CONCAT11(uVar65,uVar64)))) >> 8
                    );
          *(int *)(puVar40 + 0xd) =
               (int)(CONCAT14(uVar88,CONCAT13(uVar87,CONCAT12(uVar86,CONCAT11(uVar85,uVar84)))) >> 8
                    );
          *(int *)((long)puVar40 + 0x6c) =
               (int)(CONCAT14(uVar104,CONCAT13(uVar103,CONCAT12(uVar102,CONCAT11(uVar101,uVar100))))
                    >> 8);
          *(int *)(puVar40 + 0xc) =
               (int)(CONCAT14(uVar56,CONCAT13(uVar55,CONCAT12(uVar54,CONCAT11(uVar53,uVar52)))) >> 8
                    );
          *(int *)((long)puVar40 + 100) =
               (int)(CONCAT14(uVar72,CONCAT13(uVar71,CONCAT12(uVar70,CONCAT11(uVar69,uVar68)))) >> 8
                    );
          puVar40 = puVar40 + 0x10;
        }
        uVar28 = uVar28 & 3;
        plVar29 = (long *)(ulong)uVar28;
        if (uVar28 != 0) {
          uVar41 = 0;
          uVar42 = 0;
          uVar43 = 0;
          uVar44 = 0;
          uVar45 = 0;
          uVar46 = 0;
          uVar47 = 0;
          uVar48 = 0;
          uVar49 = 0;
          uVar50 = 0;
          uVar51 = 0;
          uVar52 = 0;
          uVar53 = 0;
          uVar54 = 0;
          uVar55 = 0;
          uVar56 = 0;
          uVar57 = 0;
          uVar58 = 0;
          uVar59 = 0;
          uVar60 = 0;
          uVar61 = 0;
          uVar62 = 0;
          uVar63 = 0;
          uVar64 = 0;
          uVar65 = 0;
          uVar66 = 0;
          uVar67 = 0;
          uVar68 = 0;
          uVar69 = 0;
          uVar70 = 0;
          uVar71 = 0;
          uVar72 = 0;
          uVar73 = 0;
          uVar74 = 0;
          uVar75 = 0;
          uVar76 = 0;
          uVar77 = 0;
          uVar78 = 0;
          uVar79 = 0;
          uVar80 = 0;
          uVar81 = 0;
          uVar82 = 0;
          uVar83 = 0;
          uVar84 = 0;
          uVar85 = 0;
          uVar86 = 0;
          uVar87 = 0;
          uVar88 = 0;
          uVar89 = 0;
          uVar90 = 0;
          uVar91 = 0;
          uVar92 = 0;
          uVar93 = 0;
          uVar94 = 0;
          uVar95 = 0;
          uVar96 = 0;
          uVar97 = 0;
          uVar98 = 0;
          uVar99 = 0;
          uVar100 = 0;
          uVar101 = 0;
          uVar102 = 0;
          uVar103 = 0;
          uVar104 = 0;
          if (uVar28 != 0) {
            uVar8 = *(undefined4 *)puVar39;
            uVar41 = (undefined1)uVar8;
            uVar42 = (undefined1)((uint)uVar8 >> 8);
            uVar43 = (undefined1)((uint)uVar8 >> 0x10);
            uVar44 = (undefined1)((uint)uVar8 >> 0x18);
            uVar8 = *(undefined4 *)puVar30;
            uVar57 = (undefined1)uVar8;
            uVar58 = (undefined1)((uint)uVar8 >> 8);
            uVar59 = (undefined1)((uint)uVar8 >> 0x10);
            uVar60 = (undefined1)((uint)uVar8 >> 0x18);
            uVar8 = *(undefined4 *)puVar31;
            uVar73 = (undefined1)uVar8;
            uVar74 = (undefined1)((uint)uVar8 >> 8);
            uVar75 = (undefined1)((uint)uVar8 >> 0x10);
            uVar76 = (undefined1)((uint)uVar8 >> 0x18);
            uVar8 = *(undefined4 *)puVar32;
            uVar89 = (undefined1)uVar8;
            uVar90 = (undefined1)((uint)uVar8 >> 8);
            uVar91 = (undefined1)((uint)uVar8 >> 0x10);
            uVar92 = (undefined1)((uint)uVar8 >> 0x18);
            if (uVar28 != 1) {
              uVar8 = *(undefined4 *)((long)puVar39 + 4);
              uVar45 = (undefined1)uVar8;
              uVar46 = (undefined1)((uint)uVar8 >> 8);
              uVar47 = (undefined1)((uint)uVar8 >> 0x10);
              uVar48 = (undefined1)((uint)uVar8 >> 0x18);
              uVar8 = *(undefined4 *)((long)puVar30 + 4);
              uVar61 = (undefined1)uVar8;
              uVar62 = (undefined1)((uint)uVar8 >> 8);
              uVar63 = (undefined1)((uint)uVar8 >> 0x10);
              uVar64 = (undefined1)((uint)uVar8 >> 0x18);
              uVar8 = *(undefined4 *)((long)puVar31 + 4);
              uVar77 = (undefined1)uVar8;
              uVar78 = (undefined1)((uint)uVar8 >> 8);
              uVar79 = (undefined1)((uint)uVar8 >> 0x10);
              uVar80 = (undefined1)((uint)uVar8 >> 0x18);
              uVar8 = *(undefined4 *)((long)puVar32 + 4);
              uVar93 = (undefined1)uVar8;
              uVar94 = (undefined1)((uint)uVar8 >> 8);
              uVar95 = (undefined1)((uint)uVar8 >> 0x10);
              uVar96 = (undefined1)((uint)uVar8 >> 0x18);
              if (uVar28 != 2) {
                uVar8 = *(undefined4 *)(puVar39 + 1);
                uVar49 = (undefined1)uVar8;
                uVar50 = (undefined1)((uint)uVar8 >> 8);
                uVar51 = (undefined1)((uint)uVar8 >> 0x10);
                uVar52 = (undefined1)((uint)uVar8 >> 0x18);
                uVar8 = *(undefined4 *)(puVar30 + 1);
                uVar65 = (undefined1)uVar8;
                uVar66 = (undefined1)((uint)uVar8 >> 8);
                uVar67 = (undefined1)((uint)uVar8 >> 0x10);
                uVar68 = (undefined1)((uint)uVar8 >> 0x18);
                uVar8 = *(undefined4 *)(puVar31 + 1);
                uVar81 = (undefined1)uVar8;
                uVar82 = (undefined1)((uint)uVar8 >> 8);
                uVar83 = (undefined1)((uint)uVar8 >> 0x10);
                uVar84 = (undefined1)((uint)uVar8 >> 0x18);
                uVar8 = *(undefined4 *)(puVar32 + 1);
                uVar97 = (undefined1)uVar8;
                uVar98 = (undefined1)((uint)uVar8 >> 8);
                uVar99 = (undefined1)((uint)uVar8 >> 0x10);
                uVar100 = (undefined1)((uint)uVar8 >> 0x18);
                if (uVar28 != 3) {
                  uVar8 = *(undefined4 *)((long)puVar39 + 0xc);
                  uVar53 = (undefined1)uVar8;
                  uVar54 = (undefined1)((uint)uVar8 >> 8);
                  uVar55 = (undefined1)((uint)uVar8 >> 0x10);
                  uVar56 = (undefined1)((uint)uVar8 >> 0x18);
                  uVar8 = *(undefined4 *)((long)puVar30 + 0xc);
                  uVar69 = (undefined1)uVar8;
                  uVar70 = (undefined1)((uint)uVar8 >> 8);
                  uVar71 = (undefined1)((uint)uVar8 >> 0x10);
                  uVar72 = (undefined1)((uint)uVar8 >> 0x18);
                  uVar8 = *(undefined4 *)((long)puVar31 + 0xc);
                  uVar85 = (undefined1)uVar8;
                  uVar86 = (undefined1)((uint)uVar8 >> 8);
                  uVar87 = (undefined1)((uint)uVar8 >> 0x10);
                  uVar88 = (undefined1)((uint)uVar8 >> 0x18);
                  uVar8 = *(undefined4 *)((long)puVar32 + 0xc);
                  uVar101 = (undefined1)uVar8;
                  uVar102 = (undefined1)((uint)uVar8 >> 8);
                  uVar103 = (undefined1)((uint)uVar8 >> 0x10);
                  uVar104 = (undefined1)((uint)uVar8 >> 0x18);
                }
              }
            }
          }
          plVar26 = (long *)0x20;
          if (uVar28 != 0) {
            *(uint *)puVar40 = CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41)));
            *(uint *)((long)puVar40 + 4) = CONCAT13(uVar60,CONCAT12(uVar59,CONCAT11(uVar58,uVar57)))
            ;
            *(uint *)(puVar40 + 1) = CONCAT13(uVar76,CONCAT12(uVar75,CONCAT11(uVar74,uVar73)));
            *(uint *)((long)puVar40 + 0xc) =
                 CONCAT13(uVar92,CONCAT12(uVar91,CONCAT11(uVar90,uVar89)));
            if (uVar28 != 1) {
              *(uint *)(puVar40 + 4) = CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45)));
              *(uint *)((long)puVar40 + 0x24) =
                   CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar61)));
              *(uint *)(puVar40 + 5) = CONCAT13(uVar80,CONCAT12(uVar79,CONCAT11(uVar78,uVar77)));
              *(uint *)((long)puVar40 + 0x2c) =
                   CONCAT13(uVar96,CONCAT12(uVar95,CONCAT11(uVar94,uVar93)));
              if (uVar28 != 2) {
                *(int *)(puVar40 + 8) =
                     (int)(CONCAT14(uVar52,CONCAT13(uVar51,CONCAT12(uVar50,CONCAT11(uVar49,uVar48)))
                                   ) >> 8);
                *(int *)((long)puVar40 + 0x44) =
                     (int)(CONCAT14(uVar68,CONCAT13(uVar67,CONCAT12(uVar66,CONCAT11(uVar65,uVar64)))
                                   ) >> 8);
                *(int *)(puVar40 + 9) =
                     (int)(CONCAT14(uVar84,CONCAT13(uVar83,CONCAT12(uVar82,CONCAT11(uVar81,uVar80)))
                                   ) >> 8);
                *(int *)((long)puVar40 + 0x4c) =
                     (int)(CONCAT14(uVar100,CONCAT13(uVar99,CONCAT12(uVar98,CONCAT11(uVar97,uVar96))
                                                    )) >> 8);
                if (uVar28 != 3) {
                  *(int *)(puVar40 + 0xc) =
                       (int)(CONCAT14(uVar56,CONCAT13(uVar55,CONCAT12(uVar54,CONCAT11(uVar53,uVar52)
                                                                     ))) >> 8);
                  *(int *)((long)puVar40 + 100) =
                       (int)(CONCAT14(uVar72,CONCAT13(uVar71,CONCAT12(uVar70,CONCAT11(uVar69,uVar68)
                                                                     ))) >> 8);
                  *(int *)(puVar40 + 0xd) =
                       (int)(CONCAT14(uVar88,CONCAT13(uVar87,CONCAT12(uVar86,CONCAT11(uVar85,uVar84)
                                                                     ))) >> 8);
                  *(int *)((long)puVar40 + 0x6c) =
                       (int)(CONCAT14(uVar104,CONCAT13(uVar103,CONCAT12(uVar102,CONCAT11(uVar101,
                                                  uVar100)))) >> 8);
                }
              }
            }
          }
        }
      }
      else {
        plVar26 = (long *)0x0;
        uVar2 = uVar28 & 0xfffffffc;
        if (uVar2 != 0) {
          plVar26 = (long *)0x4;
          uVar8 = *(undefined4 *)puVar39;
          uVar41 = (undefined1)uVar8;
          uVar42 = (undefined1)((uint)uVar8 >> 8);
          uVar43 = (undefined1)((uint)uVar8 >> 0x10);
          uVar44 = (undefined1)((uint)uVar8 >> 0x18);
          uVar8 = *(undefined4 *)((long)puVar39 + 4);
          uVar45 = (undefined1)uVar8;
          uVar46 = (undefined1)((uint)uVar8 >> 8);
          uVar47 = (undefined1)((uint)uVar8 >> 0x10);
          uVar48 = (undefined1)((uint)uVar8 >> 0x18);
          uVar8 = *(undefined4 *)(puVar39 + 1);
          uVar49 = (undefined1)uVar8;
          uVar50 = (undefined1)((uint)uVar8 >> 8);
          uVar51 = (undefined1)((uint)uVar8 >> 0x10);
          uVar52 = (undefined1)((uint)uVar8 >> 0x18);
          uVar8 = *(undefined4 *)((long)puVar39 + 0xc);
          uVar53 = (undefined1)uVar8;
          uVar54 = (undefined1)((uint)uVar8 >> 8);
          uVar55 = (undefined1)((uint)uVar8 >> 0x10);
          uVar56 = (undefined1)((uint)uVar8 >> 0x18);
          puVar39 = (undefined8 *)((long)puVar39 + lVar34);
          uVar8 = *(undefined4 *)puVar30;
          uVar57 = (undefined1)uVar8;
          uVar58 = (undefined1)((uint)uVar8 >> 8);
          uVar59 = (undefined1)((uint)uVar8 >> 0x10);
          uVar60 = (undefined1)((uint)uVar8 >> 0x18);
          uVar8 = *(undefined4 *)((long)puVar30 + 4);
          uVar61 = (undefined1)uVar8;
          uVar62 = (undefined1)((uint)uVar8 >> 8);
          uVar63 = (undefined1)((uint)uVar8 >> 0x10);
          uVar64 = (undefined1)((uint)uVar8 >> 0x18);
          uVar8 = *(undefined4 *)(puVar30 + 1);
          uVar65 = (undefined1)uVar8;
          uVar66 = (undefined1)((uint)uVar8 >> 8);
          uVar67 = (undefined1)((uint)uVar8 >> 0x10);
          uVar68 = (undefined1)((uint)uVar8 >> 0x18);
          uVar8 = *(undefined4 *)((long)puVar30 + 0xc);
          uVar69 = (undefined1)uVar8;
          uVar70 = (undefined1)((uint)uVar8 >> 8);
          uVar71 = (undefined1)((uint)uVar8 >> 0x10);
          uVar72 = (undefined1)((uint)uVar8 >> 0x18);
          puVar30 = (undefined8 *)((long)puVar30 + lVar3);
          uVar8 = *(undefined4 *)puVar31;
          uVar73 = (undefined1)uVar8;
          uVar74 = (undefined1)((uint)uVar8 >> 8);
          uVar75 = (undefined1)((uint)uVar8 >> 0x10);
          uVar76 = (undefined1)((uint)uVar8 >> 0x18);
          uVar8 = *(undefined4 *)((long)puVar31 + 4);
          uVar77 = (undefined1)uVar8;
          uVar78 = (undefined1)((uint)uVar8 >> 8);
          uVar79 = (undefined1)((uint)uVar8 >> 0x10);
          uVar80 = (undefined1)((uint)uVar8 >> 0x18);
          uVar8 = *(undefined4 *)(puVar31 + 1);
          uVar81 = (undefined1)uVar8;
          uVar82 = (undefined1)((uint)uVar8 >> 8);
          uVar83 = (undefined1)((uint)uVar8 >> 0x10);
          uVar84 = (undefined1)((uint)uVar8 >> 0x18);
          uVar8 = *(undefined4 *)((long)puVar31 + 0xc);
          uVar85 = (undefined1)uVar8;
          uVar86 = (undefined1)((uint)uVar8 >> 8);
          uVar87 = (undefined1)((uint)uVar8 >> 0x10);
          uVar88 = (undefined1)((uint)uVar8 >> 0x18);
          puVar31 = (undefined8 *)((long)puVar31 + lVar4);
          uVar8 = *(undefined4 *)puVar32;
          uVar89 = (undefined1)uVar8;
          uVar90 = (undefined1)((uint)uVar8 >> 8);
          uVar91 = (undefined1)((uint)uVar8 >> 0x10);
          uVar92 = (undefined1)((uint)uVar8 >> 0x18);
          uVar8 = *(undefined4 *)((long)puVar32 + 4);
          uVar93 = (undefined1)uVar8;
          uVar94 = (undefined1)((uint)uVar8 >> 8);
          uVar95 = (undefined1)((uint)uVar8 >> 0x10);
          uVar96 = (undefined1)((uint)uVar8 >> 0x18);
          uVar8 = *(undefined4 *)(puVar32 + 1);
          uVar97 = (undefined1)uVar8;
          uVar98 = (undefined1)((uint)uVar8 >> 8);
          uVar99 = (undefined1)((uint)uVar8 >> 0x10);
          uVar100 = (undefined1)((uint)uVar8 >> 0x18);
          uVar8 = *(undefined4 *)((long)puVar32 + 0xc);
          uVar101 = (undefined1)uVar8;
          uVar102 = (undefined1)((uint)uVar8 >> 8);
          uVar103 = (undefined1)((uint)uVar8 >> 0x10);
          uVar104 = (undefined1)((uint)uVar8 >> 0x18);
          puVar32 = (undefined8 *)((long)puVar32 + lVar6);
          if (uVar2 != 4) {
            do {
              uVar1 = (int)plVar26 + 4;
              plVar26 = (long *)(ulong)uVar1;
              uVar10 = CONCAT13(uVar60,CONCAT12(uVar59,CONCAT11(uVar58,uVar57)));
              uVar19 = CONCAT14(uVar68,CONCAT13(uVar67,CONCAT12(uVar66,CONCAT11(uVar65,uVar64))));
              uVar8 = CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41)));
              uVar18 = CONCAT14(uVar52,CONCAT13(uVar51,CONCAT12(uVar50,CONCAT11(uVar49,uVar48))));
              uVar14 = CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar61)));
              uVar21 = CONCAT14(uVar72,CONCAT13(uVar71,CONCAT12(uVar70,CONCAT11(uVar69,uVar68))));
              uVar13 = CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45)));
              uVar20 = CONCAT14(uVar56,CONCAT13(uVar55,CONCAT12(uVar54,CONCAT11(uVar53,uVar52))));
              uVar12 = CONCAT13(uVar92,CONCAT12(uVar91,CONCAT11(uVar90,uVar89)));
              uVar23 = CONCAT14(uVar100,CONCAT13(uVar99,CONCAT12(uVar98,CONCAT11(uVar97,uVar96))));
              uVar11 = CONCAT13(uVar76,CONCAT12(uVar75,CONCAT11(uVar74,uVar73)));
              uVar22 = CONCAT14(uVar84,CONCAT13(uVar83,CONCAT12(uVar82,CONCAT11(uVar81,uVar80))));
              uVar16 = CONCAT13(uVar96,CONCAT12(uVar95,CONCAT11(uVar94,uVar93)));
              uVar25 = CONCAT14(uVar104,CONCAT13(uVar103,CONCAT12(uVar102,CONCAT11(uVar101,uVar100))
                                                ));
              uVar15 = CONCAT13(uVar80,CONCAT12(uVar79,CONCAT11(uVar78,uVar77)));
              uVar24 = CONCAT14(uVar88,CONCAT13(uVar87,CONCAT12(uVar86,CONCAT11(uVar85,uVar84))));
              uVar9 = *(undefined4 *)puVar39;
              uVar41 = (undefined1)uVar9;
              uVar42 = (undefined1)((uint)uVar9 >> 8);
              uVar43 = (undefined1)((uint)uVar9 >> 0x10);
              uVar44 = (undefined1)((uint)uVar9 >> 0x18);
              uVar9 = *(undefined4 *)((long)puVar39 + 4);
              uVar45 = (undefined1)uVar9;
              uVar46 = (undefined1)((uint)uVar9 >> 8);
              uVar47 = (undefined1)((uint)uVar9 >> 0x10);
              uVar48 = (undefined1)((uint)uVar9 >> 0x18);
              uVar9 = *(undefined4 *)(puVar39 + 1);
              uVar49 = (undefined1)uVar9;
              uVar50 = (undefined1)((uint)uVar9 >> 8);
              uVar51 = (undefined1)((uint)uVar9 >> 0x10);
              uVar52 = (undefined1)((uint)uVar9 >> 0x18);
              uVar9 = *(undefined4 *)((long)puVar39 + 0xc);
              uVar53 = (undefined1)uVar9;
              uVar54 = (undefined1)((uint)uVar9 >> 8);
              uVar55 = (undefined1)((uint)uVar9 >> 0x10);
              uVar56 = (undefined1)((uint)uVar9 >> 0x18);
              puVar39 = (undefined8 *)((long)puVar39 + lVar34);
              uVar9 = *(undefined4 *)puVar30;
              uVar57 = (undefined1)uVar9;
              uVar58 = (undefined1)((uint)uVar9 >> 8);
              uVar59 = (undefined1)((uint)uVar9 >> 0x10);
              uVar60 = (undefined1)((uint)uVar9 >> 0x18);
              uVar9 = *(undefined4 *)((long)puVar30 + 4);
              uVar61 = (undefined1)uVar9;
              uVar62 = (undefined1)((uint)uVar9 >> 8);
              uVar63 = (undefined1)((uint)uVar9 >> 0x10);
              uVar64 = (undefined1)((uint)uVar9 >> 0x18);
              uVar9 = *(undefined4 *)(puVar30 + 1);
              uVar65 = (undefined1)uVar9;
              uVar66 = (undefined1)((uint)uVar9 >> 8);
              uVar67 = (undefined1)((uint)uVar9 >> 0x10);
              uVar68 = (undefined1)((uint)uVar9 >> 0x18);
              uVar9 = *(undefined4 *)((long)puVar30 + 0xc);
              uVar69 = (undefined1)uVar9;
              uVar70 = (undefined1)((uint)uVar9 >> 8);
              uVar71 = (undefined1)((uint)uVar9 >> 0x10);
              uVar72 = (undefined1)((uint)uVar9 >> 0x18);
              puVar30 = (undefined8 *)((long)puVar30 + lVar3);
              uVar9 = *(undefined4 *)puVar31;
              uVar73 = (undefined1)uVar9;
              uVar74 = (undefined1)((uint)uVar9 >> 8);
              uVar75 = (undefined1)((uint)uVar9 >> 0x10);
              uVar76 = (undefined1)((uint)uVar9 >> 0x18);
              uVar9 = *(undefined4 *)((long)puVar31 + 4);
              uVar77 = (undefined1)uVar9;
              uVar78 = (undefined1)((uint)uVar9 >> 8);
              uVar79 = (undefined1)((uint)uVar9 >> 0x10);
              uVar80 = (undefined1)((uint)uVar9 >> 0x18);
              uVar9 = *(undefined4 *)(puVar31 + 1);
              uVar81 = (undefined1)uVar9;
              uVar82 = (undefined1)((uint)uVar9 >> 8);
              uVar83 = (undefined1)((uint)uVar9 >> 0x10);
              uVar84 = (undefined1)((uint)uVar9 >> 0x18);
              uVar9 = *(undefined4 *)((long)puVar31 + 0xc);
              uVar85 = (undefined1)uVar9;
              uVar86 = (undefined1)((uint)uVar9 >> 8);
              uVar87 = (undefined1)((uint)uVar9 >> 0x10);
              uVar88 = (undefined1)((uint)uVar9 >> 0x18);
              puVar31 = (undefined8 *)((long)puVar31 + lVar4);
              uVar9 = *(undefined4 *)puVar32;
              uVar89 = (undefined1)uVar9;
              uVar90 = (undefined1)((uint)uVar9 >> 8);
              uVar91 = (undefined1)((uint)uVar9 >> 0x10);
              uVar92 = (undefined1)((uint)uVar9 >> 0x18);
              uVar9 = *(undefined4 *)((long)puVar32 + 4);
              uVar93 = (undefined1)uVar9;
              uVar94 = (undefined1)((uint)uVar9 >> 8);
              uVar95 = (undefined1)((uint)uVar9 >> 0x10);
              uVar96 = (undefined1)((uint)uVar9 >> 0x18);
              uVar9 = *(undefined4 *)(puVar32 + 1);
              uVar97 = (undefined1)uVar9;
              uVar98 = (undefined1)((uint)uVar9 >> 8);
              uVar99 = (undefined1)((uint)uVar9 >> 0x10);
              uVar100 = (undefined1)((uint)uVar9 >> 0x18);
              uVar9 = *(undefined4 *)((long)puVar32 + 0xc);
              uVar101 = (undefined1)uVar9;
              uVar102 = (undefined1)((uint)uVar9 >> 8);
              uVar103 = (undefined1)((uint)uVar9 >> 0x10);
              uVar104 = (undefined1)((uint)uVar9 >> 0x18);
              puVar32 = (undefined8 *)((long)puVar32 + lVar6);
              puVar40[1] = CONCAT44(uVar12,uVar11);
              *puVar40 = CONCAT44(uVar10,uVar8);
              puVar40[5] = CONCAT44(uVar16,uVar15);
              puVar40[4] = CONCAT44(uVar14,uVar13);
              *(int *)(puVar40 + 9) = (int)((uint5)uVar22 >> 8);
              *(int *)((long)puVar40 + 0x4c) = (int)((uint5)uVar23 >> 8);
              *(int *)(puVar40 + 8) = (int)((uint5)uVar18 >> 8);
              *(int *)((long)puVar40 + 0x44) = (int)((uint5)uVar19 >> 8);
              *(int *)(puVar40 + 0xd) = (int)((uint5)uVar24 >> 8);
              *(int *)((long)puVar40 + 0x6c) = (int)((uint5)uVar25 >> 8);
              *(int *)(puVar40 + 0xc) = (int)((uint5)uVar20 >> 8);
              *(int *)((long)puVar40 + 100) = (int)((uint5)uVar21 >> 8);
              puVar40 = puVar40 + 0x10;
            } while (uVar1 != uVar2);
          }
          puVar40[1] = CONCAT44(CONCAT13(uVar92,CONCAT12(uVar91,CONCAT11(uVar90,uVar89))),
                                CONCAT13(uVar76,CONCAT12(uVar75,CONCAT11(uVar74,uVar73))));
          *puVar40 = CONCAT44(CONCAT13(uVar60,CONCAT12(uVar59,CONCAT11(uVar58,uVar57))),
                              CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41))));
          puVar40[5] = CONCAT44(CONCAT13(uVar96,CONCAT12(uVar95,CONCAT11(uVar94,uVar93))),
                                CONCAT13(uVar80,CONCAT12(uVar79,CONCAT11(uVar78,uVar77))));
          puVar40[4] = CONCAT44(CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar61))),
                                CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45))));
          *(int *)(puVar40 + 9) =
               (int)(CONCAT14(uVar84,CONCAT13(uVar83,CONCAT12(uVar82,CONCAT11(uVar81,uVar80)))) >> 8
                    );
          *(int *)((long)puVar40 + 0x4c) =
               (int)(CONCAT14(uVar100,CONCAT13(uVar99,CONCAT12(uVar98,CONCAT11(uVar97,uVar96)))) >>
                    8);
          *(int *)(puVar40 + 8) =
               (int)(CONCAT14(uVar52,CONCAT13(uVar51,CONCAT12(uVar50,CONCAT11(uVar49,uVar48)))) >> 8
                    );
          *(int *)((long)puVar40 + 0x44) =
               (int)(CONCAT14(uVar68,CONCAT13(uVar67,CONCAT12(uVar66,CONCAT11(uVar65,uVar64)))) >> 8
                    );
          *(int *)(puVar40 + 0xd) =
               (int)(CONCAT14(uVar88,CONCAT13(uVar87,CONCAT12(uVar86,CONCAT11(uVar85,uVar84)))) >> 8
                    );
          *(int *)((long)puVar40 + 0x6c) =
               (int)(CONCAT14(uVar104,CONCAT13(uVar103,CONCAT12(uVar102,CONCAT11(uVar101,uVar100))))
                    >> 8);
          *(int *)(puVar40 + 0xc) =
               (int)(CONCAT14(uVar56,CONCAT13(uVar55,CONCAT12(uVar54,CONCAT11(uVar53,uVar52)))) >> 8
                    );
          *(int *)((long)puVar40 + 100) =
               (int)(CONCAT14(uVar72,CONCAT13(uVar71,CONCAT12(uVar70,CONCAT11(uVar69,uVar68)))) >> 8
                    );
          puVar40 = puVar40 + 0x10;
        }
        uVar28 = uVar28 & 3;
        plVar29 = (long *)(ulong)uVar28;
        if (uVar28 != 0) {
          uVar41 = 0;
          uVar42 = 0;
          uVar43 = 0;
          uVar44 = 0;
          uVar45 = 0;
          uVar46 = 0;
          uVar47 = 0;
          uVar48 = 0;
          uVar49 = 0;
          uVar50 = 0;
          uVar51 = 0;
          uVar52 = 0;
          uVar53 = 0;
          uVar54 = 0;
          uVar55 = 0;
          uVar56 = 0;
          uVar57 = 0;
          uVar58 = 0;
          uVar59 = 0;
          uVar60 = 0;
          uVar61 = 0;
          uVar62 = 0;
          uVar63 = 0;
          uVar64 = 0;
          uVar65 = 0;
          uVar66 = 0;
          uVar67 = 0;
          uVar68 = 0;
          uVar69 = 0;
          uVar70 = 0;
          uVar71 = 0;
          uVar72 = 0;
          uVar73 = 0;
          uVar74 = 0;
          uVar75 = 0;
          uVar76 = 0;
          uVar77 = 0;
          uVar78 = 0;
          uVar79 = 0;
          uVar80 = 0;
          uVar81 = 0;
          uVar82 = 0;
          uVar83 = 0;
          uVar84 = 0;
          uVar85 = 0;
          uVar86 = 0;
          uVar87 = 0;
          uVar88 = 0;
          if (uVar28 != 0) {
            uVar8 = *(undefined4 *)puVar39;
            uVar41 = (undefined1)uVar8;
            uVar42 = (undefined1)((uint)uVar8 >> 8);
            uVar43 = (undefined1)((uint)uVar8 >> 0x10);
            uVar44 = (undefined1)((uint)uVar8 >> 0x18);
            uVar8 = *(undefined4 *)puVar30;
            uVar53 = (undefined1)uVar8;
            uVar54 = (undefined1)((uint)uVar8 >> 8);
            uVar55 = (undefined1)((uint)uVar8 >> 0x10);
            uVar56 = (undefined1)((uint)uVar8 >> 0x18);
            uVar8 = *(undefined4 *)puVar31;
            uVar65 = (undefined1)uVar8;
            uVar66 = (undefined1)((uint)uVar8 >> 8);
            uVar67 = (undefined1)((uint)uVar8 >> 0x10);
            uVar68 = (undefined1)((uint)uVar8 >> 0x18);
            uVar8 = *(undefined4 *)puVar32;
            uVar77 = (undefined1)uVar8;
            uVar78 = (undefined1)((uint)uVar8 >> 8);
            uVar79 = (undefined1)((uint)uVar8 >> 0x10);
            uVar80 = (undefined1)((uint)uVar8 >> 0x18);
            if (uVar28 != 1) {
              uVar8 = *(undefined4 *)((long)puVar39 + 4);
              uVar45 = (undefined1)uVar8;
              uVar46 = (undefined1)((uint)uVar8 >> 8);
              uVar47 = (undefined1)((uint)uVar8 >> 0x10);
              uVar48 = (undefined1)((uint)uVar8 >> 0x18);
              uVar8 = *(undefined4 *)((long)puVar30 + 4);
              uVar57 = (undefined1)uVar8;
              uVar58 = (undefined1)((uint)uVar8 >> 8);
              uVar59 = (undefined1)((uint)uVar8 >> 0x10);
              uVar60 = (undefined1)((uint)uVar8 >> 0x18);
              uVar8 = *(undefined4 *)((long)puVar31 + 4);
              uVar69 = (undefined1)uVar8;
              uVar70 = (undefined1)((uint)uVar8 >> 8);
              uVar71 = (undefined1)((uint)uVar8 >> 0x10);
              uVar72 = (undefined1)((uint)uVar8 >> 0x18);
              uVar8 = *(undefined4 *)((long)puVar32 + 4);
              uVar81 = (undefined1)uVar8;
              uVar82 = (undefined1)((uint)uVar8 >> 8);
              uVar83 = (undefined1)((uint)uVar8 >> 0x10);
              uVar84 = (undefined1)((uint)uVar8 >> 0x18);
              if (uVar28 != 2) {
                uVar8 = *(undefined4 *)(puVar39 + 1);
                uVar49 = (undefined1)uVar8;
                uVar50 = (undefined1)((uint)uVar8 >> 8);
                uVar51 = (undefined1)((uint)uVar8 >> 0x10);
                uVar52 = (undefined1)((uint)uVar8 >> 0x18);
                uVar8 = *(undefined4 *)(puVar30 + 1);
                uVar61 = (undefined1)uVar8;
                uVar62 = (undefined1)((uint)uVar8 >> 8);
                uVar63 = (undefined1)((uint)uVar8 >> 0x10);
                uVar64 = (undefined1)((uint)uVar8 >> 0x18);
                uVar8 = *(undefined4 *)(puVar31 + 1);
                uVar73 = (undefined1)uVar8;
                uVar74 = (undefined1)((uint)uVar8 >> 8);
                uVar75 = (undefined1)((uint)uVar8 >> 0x10);
                uVar76 = (undefined1)((uint)uVar8 >> 0x18);
                uVar8 = *(undefined4 *)(puVar32 + 1);
                uVar85 = (undefined1)uVar8;
                uVar86 = (undefined1)((uint)uVar8 >> 8);
                uVar87 = (undefined1)((uint)uVar8 >> 0x10);
                uVar88 = (undefined1)((uint)uVar8 >> 0x18);
              }
            }
          }
          plVar26 = (long *)0x20;
          if (uVar28 != 0) {
            *(uint *)puVar40 = CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41)));
            *(uint *)((long)puVar40 + 4) = CONCAT13(uVar56,CONCAT12(uVar55,CONCAT11(uVar54,uVar53)))
            ;
            *(uint *)(puVar40 + 1) = CONCAT13(uVar68,CONCAT12(uVar67,CONCAT11(uVar66,uVar65)));
            *(uint *)((long)puVar40 + 0xc) =
                 CONCAT13(uVar80,CONCAT12(uVar79,CONCAT11(uVar78,uVar77)));
            if (uVar28 != 1) {
              *(uint *)(puVar40 + 4) = CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45)));
              *(uint *)((long)puVar40 + 0x24) =
                   CONCAT13(uVar60,CONCAT12(uVar59,CONCAT11(uVar58,uVar57)));
              *(uint *)(puVar40 + 5) = CONCAT13(uVar72,CONCAT12(uVar71,CONCAT11(uVar70,uVar69)));
              *(uint *)((long)puVar40 + 0x2c) =
                   CONCAT13(uVar84,CONCAT12(uVar83,CONCAT11(uVar82,uVar81)));
              if (uVar28 != 2) {
                *(int *)(puVar40 + 8) =
                     (int)(CONCAT14(uVar52,CONCAT13(uVar51,CONCAT12(uVar50,CONCAT11(uVar49,uVar48)))
                                   ) >> 8);
                *(int *)((long)puVar40 + 0x44) =
                     (int)(CONCAT14(uVar64,CONCAT13(uVar63,CONCAT12(uVar62,CONCAT11(uVar61,uVar60)))
                                   ) >> 8);
                *(int *)(puVar40 + 9) =
                     (int)(CONCAT14(uVar76,CONCAT13(uVar75,CONCAT12(uVar74,CONCAT11(uVar73,uVar72)))
                                   ) >> 8);
                *(int *)((long)puVar40 + 0x4c) =
                     (int)(CONCAT14(uVar88,CONCAT13(uVar87,CONCAT12(uVar86,CONCAT11(uVar85,uVar84)))
                                   ) >> 8);
                if (uVar28 != 3) {
                  *(undefined4 *)(puVar40 + 0xc) = 0;
                  *(undefined4 *)((long)puVar40 + 100) = 0;
                  *(undefined4 *)(puVar40 + 0xd) = 0;
                  *(undefined4 *)((long)puVar40 + 0x6c) = 0;
                }
              }
            }
          }
        }
      }
      param_4 = param_4 + 4;
    } while ((int)param_4 < param_5);
  }
  uVar28 = (uint)plVar29;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  if (0 < (int)param_1[1]) {
    lVar34 = 0;
    lVar3 = param_1[2];
    puVar39 = (undefined8 *)((long)plVar26 + (long)(int)(param_4 * uVar28) * 4);
    puVar30 = puVar39;
    do {
      puVar31 = (undefined8 *)(*param_1 + lVar34 * (int)lVar3 * 4 + (long)(int)param_4 * 4);
      iVar7 = *(int *)((long)param_1 + 0xc);
      if (param_5 <= *(int *)((long)param_1 + 0xc)) {
        iVar7 = param_5;
      }
      iVar7 = iVar7 - param_4;
      if (iVar7 < 8) {
        iVar33 = 0;
        puVar40 = puVar39 + lVar34 * 4;
      }
      else {
        iVar33 = 0;
        puVar27 = puVar31;
        puVar40 = puVar30;
        do {
          puVar31 = puVar27 + 4;
          uVar35 = *puVar27;
          uVar37 = puVar27[3];
          uVar36 = puVar27[2];
          puVar40[1] = puVar27[1];
          *puVar40 = uVar35;
          puVar40[3] = uVar37;
          puVar40[2] = uVar36;
          iVar33 = iVar33 + 8;
          puVar40 = (undefined8 *)
                    ((long)puVar40 +
                    (-(ulong)((uVar28 & 0x1fffffff) >> 0x1c) & 0xfffffffc00000000 |
                    (ulong)(uVar28 << 3) << 2));
          puVar27 = puVar31;
        } while (iVar33 <= (int)(iVar7 - 8U));
        iVar33 = (iVar7 - 8U & 0xfffffff8) + 8;
      }
      uVar2 = iVar7 - iVar33;
      if (0 < (int)uVar2) {
        _memcpy(puVar40,puVar31,(ulong)uVar2 << 2);
        _bzero((long)puVar40 + (ulong)uVar2 * 4,
               -(ulong)(8 - uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)(8 - uVar2) << 2);
      }
      lVar34 = lVar34 + 1;
      puVar30 = puVar30 + 4;
    } while (lVar34 < (int)param_1[1]);
  }
  return;
}



/* Entry: 109c22f54; end: 109c2306b;  */

void FUN_109c22f54(long *param_1,long param_2,uint param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if (0 < (int)param_1[1]) {
    lVar9 = 0;
    lVar4 = param_1[2];
    puVar1 = (undefined8 *)(param_2 + (long)(int)(param_4 * param_3) * 4);
    puVar10 = puVar1;
    do {
      puVar6 = (undefined8 *)(*param_1 + lVar9 * (int)lVar4 * 4 + (long)param_4 * 4);
      iVar2 = *(int *)((long)param_1 + 0xc);
      if (param_5 <= *(int *)((long)param_1 + 0xc)) {
        iVar2 = param_5;
      }
      iVar2 = iVar2 - param_4;
      if (iVar2 < 8) {
        iVar7 = 0;
        puVar8 = puVar1 + lVar9 * 4;
      }
      else {
        iVar7 = 0;
        puVar5 = puVar6;
        puVar8 = puVar10;
        do {
          puVar6 = puVar5 + 4;
          uVar11 = *puVar5;
          uVar13 = puVar5[3];
          uVar12 = puVar5[2];
          puVar8[1] = puVar5[1];
          *puVar8 = uVar11;
          puVar8[3] = uVar13;
          puVar8[2] = uVar12;
          iVar7 = iVar7 + 8;
          puVar8 = (undefined8 *)
                   ((long)puVar8 +
                   (-(ulong)((param_3 & 0x1fffffff) >> 0x1c) & 0xfffffffc00000000 |
                   (ulong)(param_3 << 3) << 2));
          puVar5 = puVar6;
        } while (iVar7 <= (int)(iVar2 - 8U));
        iVar7 = (iVar2 - 8U & 0xfffffff8) + 8;
      }
      uVar3 = iVar2 - iVar7;
      if (0 < (int)uVar3) {
        _memcpy(puVar8,puVar6,(ulong)uVar3 << 2);
        _bzero((long)puVar8 + (ulong)uVar3 * 4,
               -(ulong)(8 - uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)(8 - uVar3) << 2);
      }
      lVar9 = lVar9 + 1;
      puVar10 = puVar10 + 4;
    } while (lVar9 < (int)param_1[1]);
  }
  return;
}



/* Entry: 109c2306c; end: 109c230e7;  */

void FUN_109c2306c(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined5 uStack_28;
  undefined3 uStack_23;
  undefined4 uStack_20;
  char cStack_1c;
  float fStack_18;
  undefined1 uStack_14;
  
  uStack_30 = *(undefined8 *)(param_2 + 8);
  uStack_28 = (undefined5)*(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x15);
  uStack_23 = (undefined3)uVar1;
  uStack_20 = (undefined4)((ulong)uVar1 >> 0x18);
  cStack_1c = (char)((ulong)uVar1 >> 0x38);
  fStack_18 = (float)*(int *)(param_2 + 0x20);
  uStack_14 = *(undefined1 *)(param_2 + 0x24);
  uStack_58 = *(undefined8 *)(param_3 + 8);
  uStack_50 = *(undefined8 *)(param_3 + 0x18);
  uStack_40 = *(ulong *)(param_3 + 0x28);
  uStack_48 = *(undefined8 *)(param_3 + 0x20);
  uStack_38 = *(undefined4 *)(param_3 + 0x30);
  if (cStack_1c == '\0') {
    FUN_109c22ad0(param_1,&uStack_30,&uStack_58);
  }
  else {
    FUN_109c22f54(&uStack_30,uStack_58,uStack_40 & 0xffffffff);
  }
  return;
}



/* Entry: 109c230e8; end: 109c236a3;  */

void FUN_109c230e8(int param_1,long param_2,undefined8 *param_3,uint *param_4,undefined8 *param_5,
                  long param_6)

{
  uint uVar1;
  float *pfVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  int iVar36;
  bool bVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 *puVar40;
  undefined8 uVar41;
  undefined8 *puVar42;
  undefined8 uVar43;
  int iVar44;
  ulong uVar45;
  uint uVar46;
  ulong uVar47;
  undefined8 *puVar48;
  undefined8 *puVar49;
  uint uVar50;
  int iVar53;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar61;
  undefined8 uVar60;
  float fVar62;
  float fVar63;
  undefined8 uVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar75;
  float fVar76;
  float fVar77;
  undefined1 auVar74 [16];
  float fVar78;
  float fVar80;
  float fVar81;
  float fVar82;
  undefined1 auVar79 [16];
  float fVar83;
  float fVar85;
  float fVar86;
  float fVar87;
  undefined1 auVar84 [16];
  float fVar88;
  float fVar90;
  float fVar91;
  float fVar92;
  undefined1 auVar89 [16];
  float fVar93;
  float fVar95;
  float fVar96;
  float fVar97;
  undefined1 auVar94 [16];
  float fVar98;
  float fVar100;
  float fVar101;
  float fVar102;
  undefined1 auVar99 [16];
  float fVar103;
  float fVar105;
  float fVar106;
  float fVar107;
  undefined1 auVar104 [16];
  float fVar108;
  float fVar110;
  float fVar111;
  float fVar112;
  undefined1 auVar109 [16];
  float fVar113;
  float fVar115;
  float fVar116;
  float fVar117;
  undefined1 auVar114 [16];
  float fVar118;
  float fVar120;
  float fVar121;
  float fVar122;
  undefined1 auVar119 [16];
  float fVar123;
  float fVar125;
  float fVar126;
  float fVar127;
  undefined1 auVar124 [16];
  float fVar128;
  float fVar130;
  float fVar131;
  float fVar132;
  undefined1 auVar129 [16];
  float fVar133;
  float fVar135;
  float fVar136;
  float fVar137;
  undefined1 auVar134 [16];
  float fVar138;
  float fVar140;
  float fVar141;
  float fVar142;
  undefined1 auVar139 [16];
  float fVar143;
  float fVar145;
  float fVar146;
  float fVar147;
  undefined1 auVar144 [16];
  float fVar148;
  float fVar150;
  float fVar151;
  float fVar152;
  undefined1 auVar149 [16];
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  float *pfStack_1f0;
  uint uStack_1e8;
  uint uStack_1e4;
  undefined8 uStack_1e0;
  int iStack_1d8;
  int iStack_1d4;
  uint uStack_1d0;
  uint uStack_1cc;
  uint uStack_1c8;
  int iStack_1c4;
  undefined8 uStack_1c0;
  byte bStack_1b8;
  float afStack_1b4 [8];
  undefined8 auStack_194 [34];
  
  iStack_1c4 = *(int *)(param_2 + 0x20);
  iStack_1d8 = *(int *)(param_6 + 0x10);
  iStack_1d4 = *(int *)(param_6 + 0x14);
  uStack_1e8 = *param_4;
  uStack_1e4 = param_4[1];
  uVar47 = (ulong)(int)uStack_1e8;
  afStack_1b4[6] = 0.0;
  afStack_1b4[7] = 0.0;
  afStack_1b4[4] = 0.0;
  afStack_1b4[5] = 0.0;
  afStack_1b4[2] = 0.0;
  afStack_1b4[3] = 0.0;
  afStack_1b4[0] = 0.0;
  afStack_1b4[1] = 0.0;
  puStack_208 = (undefined8 *)
                (*(long *)(param_2 + 8) + (long)(int)(uStack_1e8 * *(int *)(param_2 + 0x28)) * 4);
  puStack_200 = (undefined8 *)
                (*(long *)(param_2 + 0x40) + (long)(int)(uStack_1e4 * *(int *)(param_2 + 0x60)) * 4)
  ;
  puStack_1f8 = (undefined8 *)
                (*(long *)(param_6 + 8) + (long)(int)(uStack_1e4 * *(int *)(param_6 + 0x18)) * 4 +
                uVar47 * 4);
  bVar37 = (float *)*param_3 == (float *)0x0;
  pfStack_1f0 = (float *)*param_3;
  if (bVar37) {
    pfStack_1f0 = afStack_1b4;
  }
  bStack_1b8 = 0x20;
  if (!bVar37) {
    bStack_1b8 = 0x21;
  }
  if (*(char *)(param_3 + 2) != '\x01') {
    bStack_1b8 = !bVar37;
  }
  uVar50 = (int)*param_5 - 8;
  iVar53 = (int)((ulong)*param_5 >> 0x20) + -8;
  uStack_1e0 = CONCAT44(iVar53,uVar50);
  uStack_1d0 = *(int *)(param_2 + 0x28) << 2;
  uStack_1cc = *(int *)(param_2 + 0x60) << 2;
  uStack_1c8 = *(int *)(param_6 + 0x18) << 2;
  uVar51 = param_3[1];
  if (param_1 == 2) {
    uVar45 = (ulong)uStack_1c8;
    uVar52 = *puStack_208;
    uVar38 = puStack_208[1];
    uVar54 = puStack_208[2];
    uVar39 = puStack_208[3];
    uVar64 = *puStack_200;
    uVar41 = puStack_200[1];
    uVar60 = puStack_200[2];
    uVar43 = puStack_200[3];
    Hint_Prefetch(puStack_208 + 0xc,0,0,0);
    Hint_Prefetch(puStack_200 + 0xc,0,0,0);
    Hint_Prefetch(puStack_208 + 0x14,0,0,0);
    Hint_Prefetch(puStack_200 + 0x14,0,0,0);
    Hint_Prefetch(puStack_208 + 0x1c,0,0,0);
    Hint_Prefetch(puStack_200 + 0x1c,0,0,0);
    Hint_Prefetch(puStack_208 + 0x24,0,0,0);
    Hint_Prefetch(puStack_200 + 0x24,0,0,0);
    puVar48 = puStack_208;
    puVar49 = puStack_1f8;
    do {
      fVar148 = 0.0;
      fVar150 = 0.0;
      fVar151 = 0.0;
      fVar152 = 0.0;
      fVar143 = 0.0;
      fVar145 = 0.0;
      fVar146 = 0.0;
      fVar147 = 0.0;
      fVar138 = 0.0;
      fVar140 = 0.0;
      fVar141 = 0.0;
      fVar142 = 0.0;
      fVar133 = 0.0;
      fVar135 = 0.0;
      fVar136 = 0.0;
      fVar137 = 0.0;
      fVar128 = 0.0;
      fVar130 = 0.0;
      fVar131 = 0.0;
      fVar132 = 0.0;
      fVar123 = 0.0;
      fVar125 = 0.0;
      fVar126 = 0.0;
      fVar127 = 0.0;
      fVar118 = 0.0;
      fVar120 = 0.0;
      fVar121 = 0.0;
      fVar122 = 0.0;
      fVar113 = 0.0;
      fVar115 = 0.0;
      fVar116 = 0.0;
      fVar117 = 0.0;
      fVar108 = 0.0;
      fVar110 = 0.0;
      fVar111 = 0.0;
      fVar112 = 0.0;
      fVar98 = 0.0;
      fVar100 = 0.0;
      fVar101 = 0.0;
      fVar102 = 0.0;
      fVar88 = 0.0;
      fVar90 = 0.0;
      fVar91 = 0.0;
      fVar92 = 0.0;
      fVar78 = 0.0;
      fVar80 = 0.0;
      fVar81 = 0.0;
      fVar82 = 0.0;
      fVar77 = (float)uVar64;
      fVar103 = (float)uVar52;
      fVar105 = (float)((ulong)uVar52 >> 0x20);
      fVar106 = (float)uVar38;
      fVar107 = (float)((ulong)uVar38 >> 0x20);
      fVar73 = fVar103 * fVar77 + 0.0;
      fVar75 = fVar105 * fVar77 + 0.0;
      fVar76 = fVar106 * fVar77 + 0.0;
      fVar77 = fVar107 * fVar77 + 0.0;
      fVar87 = (float)((ulong)uVar64 >> 0x20);
      fVar83 = fVar103 * fVar87 + 0.0;
      fVar85 = fVar105 * fVar87 + 0.0;
      fVar86 = fVar106 * fVar87 + 0.0;
      fVar87 = fVar107 * fVar87 + 0.0;
      fVar97 = (float)uVar41;
      fVar93 = fVar103 * fVar97 + 0.0;
      fVar95 = fVar105 * fVar97 + 0.0;
      fVar96 = fVar106 * fVar97 + 0.0;
      fVar97 = fVar107 * fVar97 + 0.0;
      fVar65 = (float)((ulong)uVar41 >> 0x20);
      fVar103 = fVar103 * fVar65 + 0.0;
      fVar105 = fVar105 * fVar65 + 0.0;
      fVar106 = fVar106 * fVar65 + 0.0;
      fVar107 = fVar107 * fVar65 + 0.0;
      puVar40 = puVar48;
      puVar42 = puStack_200;
      iVar36 = iStack_1c4;
      while( true ) {
        iVar36 = iVar36 + -1;
        fVar65 = (float)uVar52;
        fVar66 = (float)((ulong)uVar52 >> 0x20);
        fVar67 = (float)uVar38;
        fVar68 = (float)((ulong)uVar38 >> 0x20);
        fVar59 = (float)uVar60;
        fVar61 = (float)((ulong)uVar60 >> 0x20);
        fVar62 = (float)uVar43;
        fVar63 = (float)((ulong)uVar43 >> 0x20);
        fVar69 = (float)uVar54;
        fVar70 = (float)((ulong)uVar54 >> 0x20);
        fVar71 = (float)uVar39;
        fVar72 = (float)((ulong)uVar39 >> 0x20);
        fVar55 = (float)uVar64;
        fVar56 = (float)((ulong)uVar64 >> 0x20);
        fVar57 = (float)uVar41;
        fVar58 = (float)((ulong)uVar41 >> 0x20);
        if (iVar36 == 0) break;
        fVar113 = fVar113 + fVar65 * fVar59;
        fVar115 = fVar115 + fVar66 * fVar59;
        fVar116 = fVar116 + fVar67 * fVar59;
        fVar117 = fVar117 + fVar68 * fVar59;
        uVar38 = puVar40[5];
        fVar123 = fVar123 + fVar65 * fVar61;
        fVar125 = fVar125 + fVar66 * fVar61;
        fVar126 = fVar126 + fVar67 * fVar61;
        fVar127 = fVar127 + fVar68 * fVar61;
        uVar39 = puVar40[7];
        fVar133 = fVar133 + fVar65 * fVar62;
        fVar135 = fVar135 + fVar66 * fVar62;
        fVar136 = fVar136 + fVar67 * fVar62;
        fVar137 = fVar137 + fVar68 * fVar62;
        uVar43 = puVar42[7];
        fVar143 = fVar143 + fVar65 * fVar63;
        fVar145 = fVar145 + fVar66 * fVar63;
        fVar146 = fVar146 + fVar67 * fVar63;
        fVar147 = fVar147 + fVar68 * fVar63;
        uVar41 = puVar42[5];
        fVar118 = fVar118 + fVar69 * fVar59;
        fVar120 = fVar120 + fVar70 * fVar59;
        fVar121 = fVar121 + fVar71 * fVar59;
        fVar122 = fVar122 + fVar72 * fVar59;
        uVar52 = puVar40[4];
        fVar128 = fVar128 + fVar69 * fVar61;
        fVar130 = fVar130 + fVar70 * fVar61;
        fVar131 = fVar131 + fVar71 * fVar61;
        fVar132 = fVar132 + fVar72 * fVar61;
        fVar138 = fVar138 + fVar69 * fVar62;
        fVar140 = fVar140 + fVar70 * fVar62;
        fVar141 = fVar141 + fVar71 * fVar62;
        fVar142 = fVar142 + fVar72 * fVar62;
        fVar148 = fVar148 + fVar69 * fVar63;
        fVar150 = fVar150 + fVar70 * fVar63;
        fVar151 = fVar151 + fVar71 * fVar63;
        fVar152 = fVar152 + fVar72 * fVar63;
        uVar60 = puVar42[6];
        fVar78 = fVar78 + fVar69 * fVar55;
        fVar80 = fVar80 + fVar70 * fVar55;
        fVar81 = fVar81 + fVar71 * fVar55;
        fVar82 = fVar82 + fVar72 * fVar55;
        fVar88 = fVar88 + fVar69 * fVar56;
        fVar90 = fVar90 + fVar70 * fVar56;
        fVar91 = fVar91 + fVar71 * fVar56;
        fVar92 = fVar92 + fVar72 * fVar56;
        uVar64 = puVar42[4];
        fVar98 = fVar98 + fVar69 * fVar57;
        fVar100 = fVar100 + fVar70 * fVar57;
        fVar101 = fVar101 + fVar71 * fVar57;
        fVar102 = fVar102 + fVar72 * fVar57;
        fVar108 = fVar108 + fVar69 * fVar58;
        fVar110 = fVar110 + fVar70 * fVar58;
        fVar111 = fVar111 + fVar71 * fVar58;
        fVar112 = fVar112 + fVar72 * fVar58;
        fVar69 = (float)uVar64;
        fVar65 = (float)uVar52;
        fVar66 = (float)((ulong)uVar52 >> 0x20);
        fVar67 = (float)uVar38;
        fVar68 = (float)((ulong)uVar38 >> 0x20);
        fVar73 = fVar73 + fVar65 * fVar69;
        fVar75 = fVar75 + fVar66 * fVar69;
        fVar76 = fVar76 + fVar67 * fVar69;
        fVar77 = fVar77 + fVar68 * fVar69;
        uVar54 = puVar40[6];
        fVar69 = (float)((ulong)uVar64 >> 0x20);
        fVar83 = fVar83 + fVar65 * fVar69;
        fVar85 = fVar85 + fVar66 * fVar69;
        fVar86 = fVar86 + fVar67 * fVar69;
        fVar87 = fVar87 + fVar68 * fVar69;
        fVar69 = (float)uVar41;
        fVar93 = fVar93 + fVar65 * fVar69;
        fVar95 = fVar95 + fVar66 * fVar69;
        fVar96 = fVar96 + fVar67 * fVar69;
        fVar97 = fVar97 + fVar68 * fVar69;
        Hint_Prefetch(puVar40 + 0x28,0,0,0);
        Hint_Prefetch(puVar42 + 0x28,0,0,0);
        fVar69 = (float)((ulong)uVar41 >> 0x20);
        fVar103 = fVar103 + fVar65 * fVar69;
        fVar105 = fVar105 + fVar66 * fVar69;
        fVar106 = fVar106 + fVar67 * fVar69;
        fVar107 = fVar107 + fVar68 * fVar69;
        puVar40 = puVar40 + 4;
        puVar42 = puVar42 + 4;
      }
      fVar113 = fVar113 + fVar65 * fVar59;
      fVar115 = fVar115 + fVar66 * fVar59;
      fVar116 = fVar116 + fVar67 * fVar59;
      fVar117 = fVar117 + fVar68 * fVar59;
      fVar123 = fVar123 + fVar65 * fVar61;
      fVar125 = fVar125 + fVar66 * fVar61;
      fVar126 = fVar126 + fVar67 * fVar61;
      fVar127 = fVar127 + fVar68 * fVar61;
      fVar133 = fVar133 + fVar65 * fVar62;
      fVar135 = fVar135 + fVar66 * fVar62;
      fVar136 = fVar136 + fVar67 * fVar62;
      fVar137 = fVar137 + fVar68 * fVar62;
      fVar143 = fVar143 + fVar65 * fVar63;
      fVar145 = fVar145 + fVar66 * fVar63;
      fVar146 = fVar146 + fVar67 * fVar63;
      fVar147 = fVar147 + fVar68 * fVar63;
      fVar118 = fVar118 + fVar69 * fVar59;
      fVar120 = fVar120 + fVar70 * fVar59;
      fVar121 = fVar121 + fVar71 * fVar59;
      fVar122 = fVar122 + fVar72 * fVar59;
      fVar128 = fVar128 + fVar69 * fVar61;
      fVar130 = fVar130 + fVar70 * fVar61;
      fVar131 = fVar131 + fVar71 * fVar61;
      fVar132 = fVar132 + fVar72 * fVar61;
      fVar138 = fVar138 + fVar69 * fVar62;
      fVar140 = fVar140 + fVar70 * fVar62;
      fVar141 = fVar141 + fVar71 * fVar62;
      fVar142 = fVar142 + fVar72 * fVar62;
      fVar148 = fVar148 + fVar69 * fVar63;
      fVar150 = fVar150 + fVar70 * fVar63;
      fVar151 = fVar151 + fVar71 * fVar63;
      fVar152 = fVar152 + fVar72 * fVar63;
      fVar78 = fVar78 + fVar69 * fVar55;
      fVar80 = fVar80 + fVar70 * fVar55;
      fVar81 = fVar81 + fVar71 * fVar55;
      fVar82 = fVar82 + fVar72 * fVar55;
      fVar88 = fVar88 + fVar69 * fVar56;
      fVar90 = fVar90 + fVar70 * fVar56;
      fVar91 = fVar91 + fVar71 * fVar56;
      fVar92 = fVar92 + fVar72 * fVar56;
      fVar98 = fVar98 + fVar69 * fVar57;
      fVar100 = fVar100 + fVar70 * fVar57;
      fVar101 = fVar101 + fVar71 * fVar57;
      fVar102 = fVar102 + fVar72 * fVar57;
      fVar108 = fVar108 + fVar69 * fVar58;
      fVar110 = fVar110 + fVar70 * fVar58;
      fVar111 = fVar111 + fVar71 * fVar58;
      fVar112 = fVar112 + fVar72 * fVar58;
      uVar46 = (uint)uVar47;
      if ((int)uVar46 < (int)uVar50) {
        puVar48 = puVar48 + uStack_1d0;
      }
      else {
        puVar48 = puStack_208;
        if ((int)uStack_1e4 < iVar53) {
          puStack_200 = puStack_200 + uStack_1cc;
        }
      }
      uVar1 = uVar46;
      if ((bStack_1b8 & 0x20) != 0) {
        uVar1 = uStack_1e4;
      }
      pfVar2 = pfStack_1f0;
      if ((bStack_1b8 & 1) != 0) {
        pfVar2 = pfStack_1f0 + uVar1;
      }
      fVar65 = *pfVar2;
      fVar66 = pfVar2[1];
      fVar67 = pfVar2[2];
      fVar68 = pfVar2[3];
      fVar69 = pfVar2[4];
      fVar70 = pfVar2[5];
      fVar71 = pfVar2[6];
      fVar72 = pfVar2[7];
      uVar52 = *puVar48;
      uVar38 = puVar48[1];
      uVar54 = puVar48[2];
      uVar39 = puVar48[3];
      uVar64 = *puStack_200;
      uVar41 = puStack_200[1];
      uVar60 = puStack_200[2];
      uVar43 = puStack_200[3];
      if ((bStack_1b8 & 0x20) == 0) {
        auVar74._0_4_ = fVar73 + fVar65;
        auVar74._4_4_ = fVar75 + fVar66;
        auVar74._8_4_ = fVar76 + fVar67;
        auVar74._12_4_ = fVar77 + fVar68;
        auVar79._0_4_ = fVar78 + fVar69;
        auVar79._4_4_ = fVar80 + fVar70;
        auVar79._8_4_ = fVar81 + fVar71;
        auVar79._12_4_ = fVar82 + fVar72;
        auVar84._0_4_ = fVar83 + fVar65;
        auVar84._4_4_ = fVar85 + fVar66;
        auVar84._8_4_ = fVar86 + fVar67;
        auVar84._12_4_ = fVar87 + fVar68;
        auVar89._0_4_ = fVar88 + fVar69;
        auVar89._4_4_ = fVar90 + fVar70;
        auVar89._8_4_ = fVar91 + fVar71;
        auVar89._12_4_ = fVar92 + fVar72;
        auVar94._0_4_ = fVar93 + fVar65;
        auVar94._4_4_ = fVar95 + fVar66;
        auVar94._8_4_ = fVar96 + fVar67;
        auVar94._12_4_ = fVar97 + fVar68;
        auVar99._0_4_ = fVar98 + fVar69;
        auVar99._4_4_ = fVar100 + fVar70;
        auVar99._8_4_ = fVar101 + fVar71;
        auVar99._12_4_ = fVar102 + fVar72;
        auVar104._0_4_ = fVar103 + fVar65;
        auVar104._4_4_ = fVar105 + fVar66;
        auVar104._8_4_ = fVar106 + fVar67;
        auVar104._12_4_ = fVar107 + fVar68;
        auVar109._0_4_ = fVar108 + fVar69;
        auVar109._4_4_ = fVar110 + fVar70;
        auVar109._8_4_ = fVar111 + fVar71;
        auVar109._12_4_ = fVar112 + fVar72;
        auVar114._0_4_ = fVar113 + fVar65;
        auVar114._4_4_ = fVar115 + fVar66;
        auVar114._8_4_ = fVar116 + fVar67;
        auVar114._12_4_ = fVar117 + fVar68;
        auVar119._0_4_ = fVar118 + fVar69;
        auVar119._4_4_ = fVar120 + fVar70;
        auVar119._8_4_ = fVar121 + fVar71;
        auVar119._12_4_ = fVar122 + fVar72;
        auVar124._0_4_ = fVar123 + fVar65;
        auVar124._4_4_ = fVar125 + fVar66;
        auVar124._8_4_ = fVar126 + fVar67;
        auVar124._12_4_ = fVar127 + fVar68;
        auVar129._0_4_ = fVar128 + fVar69;
        auVar129._4_4_ = fVar130 + fVar70;
        auVar129._8_4_ = fVar131 + fVar71;
        auVar129._12_4_ = fVar132 + fVar72;
        auVar134._0_4_ = fVar133 + fVar65;
        auVar134._4_4_ = fVar135 + fVar66;
        auVar134._8_4_ = fVar136 + fVar67;
        auVar134._12_4_ = fVar137 + fVar68;
        auVar139._0_4_ = fVar138 + fVar69;
        auVar139._4_4_ = fVar140 + fVar70;
        auVar139._8_4_ = fVar141 + fVar71;
        auVar139._12_4_ = fVar142 + fVar72;
        auVar144._0_4_ = fVar143 + fVar65;
        auVar144._4_4_ = fVar145 + fVar66;
        auVar144._8_4_ = fVar146 + fVar67;
        auVar144._12_4_ = fVar147 + fVar68;
        auVar149._0_4_ = fVar148 + fVar69;
        auVar149._4_4_ = fVar150 + fVar70;
        auVar149._8_4_ = fVar151 + fVar71;
        auVar149._12_4_ = fVar152 + fVar72;
      }
      else {
        auVar74._0_4_ = fVar73 + fVar65;
        auVar74._4_4_ = fVar75 + fVar65;
        auVar74._8_4_ = fVar76 + fVar65;
        auVar74._12_4_ = fVar77 + fVar65;
        auVar79._0_4_ = fVar78 + fVar65;
        auVar79._4_4_ = fVar80 + fVar65;
        auVar79._8_4_ = fVar81 + fVar65;
        auVar79._12_4_ = fVar82 + fVar65;
        auVar84._0_4_ = fVar83 + fVar66;
        auVar84._4_4_ = fVar85 + fVar66;
        auVar84._8_4_ = fVar86 + fVar66;
        auVar84._12_4_ = fVar87 + fVar66;
        auVar89._0_4_ = fVar88 + fVar66;
        auVar89._4_4_ = fVar90 + fVar66;
        auVar89._8_4_ = fVar91 + fVar66;
        auVar89._12_4_ = fVar92 + fVar66;
        auVar94._0_4_ = fVar93 + fVar67;
        auVar94._4_4_ = fVar95 + fVar67;
        auVar94._8_4_ = fVar96 + fVar67;
        auVar94._12_4_ = fVar97 + fVar67;
        auVar99._0_4_ = fVar98 + fVar67;
        auVar99._4_4_ = fVar100 + fVar67;
        auVar99._8_4_ = fVar101 + fVar67;
        auVar99._12_4_ = fVar102 + fVar67;
        auVar104._0_4_ = fVar103 + fVar68;
        auVar104._4_4_ = fVar105 + fVar68;
        auVar104._8_4_ = fVar106 + fVar68;
        auVar104._12_4_ = fVar107 + fVar68;
        auVar109._0_4_ = fVar108 + fVar68;
        auVar109._4_4_ = fVar110 + fVar68;
        auVar109._8_4_ = fVar111 + fVar68;
        auVar109._12_4_ = fVar112 + fVar68;
        auVar114._0_4_ = fVar113 + fVar69;
        auVar114._4_4_ = fVar115 + fVar69;
        auVar114._8_4_ = fVar116 + fVar69;
        auVar114._12_4_ = fVar117 + fVar69;
        auVar119._0_4_ = fVar118 + fVar69;
        auVar119._4_4_ = fVar120 + fVar69;
        auVar119._8_4_ = fVar121 + fVar69;
        auVar119._12_4_ = fVar122 + fVar69;
        auVar124._0_4_ = fVar123 + fVar70;
        auVar124._4_4_ = fVar125 + fVar70;
        auVar124._8_4_ = fVar126 + fVar70;
        auVar124._12_4_ = fVar127 + fVar70;
        auVar129._0_4_ = fVar128 + fVar70;
        auVar129._4_4_ = fVar130 + fVar70;
        auVar129._8_4_ = fVar131 + fVar70;
        auVar129._12_4_ = fVar132 + fVar70;
        auVar134._0_4_ = fVar133 + fVar71;
        auVar134._4_4_ = fVar135 + fVar71;
        auVar134._8_4_ = fVar136 + fVar71;
        auVar134._12_4_ = fVar137 + fVar71;
        auVar139._0_4_ = fVar138 + fVar71;
        auVar139._4_4_ = fVar140 + fVar71;
        auVar139._8_4_ = fVar141 + fVar71;
        auVar139._12_4_ = fVar142 + fVar71;
        auVar144._0_4_ = fVar143 + fVar72;
        auVar144._4_4_ = fVar145 + fVar72;
        auVar144._8_4_ = fVar146 + fVar72;
        auVar144._12_4_ = fVar147 + fVar72;
        auVar149._0_4_ = fVar148 + fVar72;
        auVar149._4_4_ = fVar150 + fVar72;
        auVar149._8_4_ = fVar151 + fVar72;
        auVar149._12_4_ = fVar152 + fVar72;
      }
      uStack_1c0._0_4_ = (undefined4)uVar51;
      uStack_1c0._4_4_ = (undefined4)((ulong)uVar51 >> 0x20);
      auVar4._4_4_ = (undefined4)uStack_1c0;
      auVar4._0_4_ = (undefined4)uStack_1c0;
      auVar4._8_4_ = (undefined4)uStack_1c0;
      auVar4._12_4_ = (undefined4)uStack_1c0;
      auVar74 = NEON_fmax(auVar74,auVar4,4);
      auVar5._4_4_ = (undefined4)uStack_1c0;
      auVar5._0_4_ = (undefined4)uStack_1c0;
      auVar5._8_4_ = (undefined4)uStack_1c0;
      auVar5._12_4_ = (undefined4)uStack_1c0;
      auVar79 = NEON_fmax(auVar79,auVar5,4);
      auVar6._4_4_ = (undefined4)uStack_1c0;
      auVar6._0_4_ = (undefined4)uStack_1c0;
      auVar6._8_4_ = (undefined4)uStack_1c0;
      auVar6._12_4_ = (undefined4)uStack_1c0;
      auVar84 = NEON_fmax(auVar84,auVar6,4);
      auVar7._4_4_ = (undefined4)uStack_1c0;
      auVar7._0_4_ = (undefined4)uStack_1c0;
      auVar7._8_4_ = (undefined4)uStack_1c0;
      auVar7._12_4_ = (undefined4)uStack_1c0;
      auVar89 = NEON_fmax(auVar89,auVar7,4);
      auVar8._4_4_ = (undefined4)uStack_1c0;
      auVar8._0_4_ = (undefined4)uStack_1c0;
      auVar8._8_4_ = (undefined4)uStack_1c0;
      auVar8._12_4_ = (undefined4)uStack_1c0;
      auVar94 = NEON_fmax(auVar94,auVar8,4);
      auVar9._4_4_ = (undefined4)uStack_1c0;
      auVar9._0_4_ = (undefined4)uStack_1c0;
      auVar9._8_4_ = (undefined4)uStack_1c0;
      auVar9._12_4_ = (undefined4)uStack_1c0;
      auVar99 = NEON_fmax(auVar99,auVar9,4);
      auVar10._4_4_ = (undefined4)uStack_1c0;
      auVar10._0_4_ = (undefined4)uStack_1c0;
      auVar10._8_4_ = (undefined4)uStack_1c0;
      auVar10._12_4_ = (undefined4)uStack_1c0;
      auVar104 = NEON_fmax(auVar104,auVar10,4);
      auVar11._4_4_ = (undefined4)uStack_1c0;
      auVar11._0_4_ = (undefined4)uStack_1c0;
      auVar11._8_4_ = (undefined4)uStack_1c0;
      auVar11._12_4_ = (undefined4)uStack_1c0;
      auVar109 = NEON_fmax(auVar109,auVar11,4);
      auVar12._4_4_ = (undefined4)uStack_1c0;
      auVar12._0_4_ = (undefined4)uStack_1c0;
      auVar12._8_4_ = (undefined4)uStack_1c0;
      auVar12._12_4_ = (undefined4)uStack_1c0;
      auVar114 = NEON_fmax(auVar114,auVar12,4);
      auVar13._4_4_ = (undefined4)uStack_1c0;
      auVar13._0_4_ = (undefined4)uStack_1c0;
      auVar13._8_4_ = (undefined4)uStack_1c0;
      auVar13._12_4_ = (undefined4)uStack_1c0;
      auVar119 = NEON_fmax(auVar119,auVar13,4);
      auVar14._4_4_ = (undefined4)uStack_1c0;
      auVar14._0_4_ = (undefined4)uStack_1c0;
      auVar14._8_4_ = (undefined4)uStack_1c0;
      auVar14._12_4_ = (undefined4)uStack_1c0;
      auVar124 = NEON_fmax(auVar124,auVar14,4);
      auVar15._4_4_ = (undefined4)uStack_1c0;
      auVar15._0_4_ = (undefined4)uStack_1c0;
      auVar15._8_4_ = (undefined4)uStack_1c0;
      auVar15._12_4_ = (undefined4)uStack_1c0;
      auVar129 = NEON_fmax(auVar129,auVar15,4);
      auVar16._4_4_ = (undefined4)uStack_1c0;
      auVar16._0_4_ = (undefined4)uStack_1c0;
      auVar16._8_4_ = (undefined4)uStack_1c0;
      auVar16._12_4_ = (undefined4)uStack_1c0;
      auVar134 = NEON_fmax(auVar134,auVar16,4);
      auVar17._4_4_ = (undefined4)uStack_1c0;
      auVar17._0_4_ = (undefined4)uStack_1c0;
      auVar17._8_4_ = (undefined4)uStack_1c0;
      auVar17._12_4_ = (undefined4)uStack_1c0;
      auVar139 = NEON_fmax(auVar139,auVar17,4);
      auVar18._4_4_ = (undefined4)uStack_1c0;
      auVar18._0_4_ = (undefined4)uStack_1c0;
      auVar18._8_4_ = (undefined4)uStack_1c0;
      auVar18._12_4_ = (undefined4)uStack_1c0;
      auVar144 = NEON_fmax(auVar144,auVar18,4);
      auVar19._4_4_ = (undefined4)uStack_1c0;
      auVar19._0_4_ = (undefined4)uStack_1c0;
      auVar19._8_4_ = (undefined4)uStack_1c0;
      auVar19._12_4_ = (undefined4)uStack_1c0;
      auVar149 = NEON_fmax(auVar149,auVar19,4);
      auVar20._4_4_ = uStack_1c0._4_4_;
      auVar20._0_4_ = uStack_1c0._4_4_;
      auVar20._8_4_ = uStack_1c0._4_4_;
      auVar20._12_4_ = uStack_1c0._4_4_;
      auVar74 = NEON_fmin(auVar74,auVar20,4);
      auVar21._4_4_ = uStack_1c0._4_4_;
      auVar21._0_4_ = uStack_1c0._4_4_;
      auVar21._8_4_ = uStack_1c0._4_4_;
      auVar21._12_4_ = uStack_1c0._4_4_;
      auVar79 = NEON_fmin(auVar79,auVar21,4);
      auVar22._4_4_ = uStack_1c0._4_4_;
      auVar22._0_4_ = uStack_1c0._4_4_;
      auVar22._8_4_ = uStack_1c0._4_4_;
      auVar22._12_4_ = uStack_1c0._4_4_;
      auVar84 = NEON_fmin(auVar84,auVar22,4);
      auVar23._4_4_ = uStack_1c0._4_4_;
      auVar23._0_4_ = uStack_1c0._4_4_;
      auVar23._8_4_ = uStack_1c0._4_4_;
      auVar23._12_4_ = uStack_1c0._4_4_;
      auVar89 = NEON_fmin(auVar89,auVar23,4);
      auVar24._4_4_ = uStack_1c0._4_4_;
      auVar24._0_4_ = uStack_1c0._4_4_;
      auVar24._8_4_ = uStack_1c0._4_4_;
      auVar24._12_4_ = uStack_1c0._4_4_;
      auVar94 = NEON_fmin(auVar94,auVar24,4);
      auVar25._4_4_ = uStack_1c0._4_4_;
      auVar25._0_4_ = uStack_1c0._4_4_;
      auVar25._8_4_ = uStack_1c0._4_4_;
      auVar25._12_4_ = uStack_1c0._4_4_;
      auVar99 = NEON_fmin(auVar99,auVar25,4);
      auVar26._4_4_ = uStack_1c0._4_4_;
      auVar26._0_4_ = uStack_1c0._4_4_;
      auVar26._8_4_ = uStack_1c0._4_4_;
      auVar26._12_4_ = uStack_1c0._4_4_;
      auVar104 = NEON_fmin(auVar104,auVar26,4);
      auVar27._4_4_ = uStack_1c0._4_4_;
      auVar27._0_4_ = uStack_1c0._4_4_;
      auVar27._8_4_ = uStack_1c0._4_4_;
      auVar27._12_4_ = uStack_1c0._4_4_;
      auVar109 = NEON_fmin(auVar109,auVar27,4);
      auVar28._4_4_ = uStack_1c0._4_4_;
      auVar28._0_4_ = uStack_1c0._4_4_;
      auVar28._8_4_ = uStack_1c0._4_4_;
      auVar28._12_4_ = uStack_1c0._4_4_;
      auVar114 = NEON_fmin(auVar114,auVar28,4);
      auVar29._4_4_ = uStack_1c0._4_4_;
      auVar29._0_4_ = uStack_1c0._4_4_;
      auVar29._8_4_ = uStack_1c0._4_4_;
      auVar29._12_4_ = uStack_1c0._4_4_;
      auVar119 = NEON_fmin(auVar119,auVar29,4);
      auVar30._4_4_ = uStack_1c0._4_4_;
      auVar30._0_4_ = uStack_1c0._4_4_;
      auVar30._8_4_ = uStack_1c0._4_4_;
      auVar30._12_4_ = uStack_1c0._4_4_;
      auVar124 = NEON_fmin(auVar124,auVar30,4);
      auVar31._4_4_ = uStack_1c0._4_4_;
      auVar31._0_4_ = uStack_1c0._4_4_;
      auVar31._8_4_ = uStack_1c0._4_4_;
      auVar31._12_4_ = uStack_1c0._4_4_;
      auVar129 = NEON_fmin(auVar129,auVar31,4);
      auVar32._4_4_ = uStack_1c0._4_4_;
      auVar32._0_4_ = uStack_1c0._4_4_;
      auVar32._8_4_ = uStack_1c0._4_4_;
      auVar32._12_4_ = uStack_1c0._4_4_;
      auVar134 = NEON_fmin(auVar134,auVar32,4);
      auVar33._4_4_ = uStack_1c0._4_4_;
      auVar33._0_4_ = uStack_1c0._4_4_;
      auVar33._8_4_ = uStack_1c0._4_4_;
      auVar33._12_4_ = uStack_1c0._4_4_;
      auVar139 = NEON_fmin(auVar139,auVar33,4);
      auVar34._4_4_ = uStack_1c0._4_4_;
      auVar34._0_4_ = uStack_1c0._4_4_;
      auVar34._8_4_ = uStack_1c0._4_4_;
      auVar34._12_4_ = uStack_1c0._4_4_;
      auVar144 = NEON_fmin(auVar144,auVar34,4);
      auVar35._4_4_ = uStack_1c0._4_4_;
      auVar35._0_4_ = uStack_1c0._4_4_;
      auVar35._8_4_ = uStack_1c0._4_4_;
      auVar35._12_4_ = uStack_1c0._4_4_;
      auVar149 = NEON_fmin(auVar149,auVar35,4);
      iVar36 = iStack_1d8 - uVar46;
      iVar3 = iStack_1d4 - uStack_1e4;
      if (8 < iVar36) {
        iVar36 = 8;
      }
      if (8 < iVar3) {
        iVar3 = 8;
      }
      puVar40 = puStack_1f8;
      uVar47 = uVar45;
      if (iVar36 != 8 || iVar3 != 8) {
        puVar40 = auStack_194;
        uVar47 = 0x20;
      }
      Hint_Prefetch(puVar40,2,0,1);
      puVar40[1] = auVar74._8_8_;
      *puVar40 = auVar74._0_8_;
      puVar40[3] = auVar79._8_8_;
      puVar40[2] = auVar79._0_8_;
      puVar40 = (undefined8 *)((long)puVar40 + uVar47);
      Hint_Prefetch(puVar40,2,0,1);
      puVar40[1] = auVar84._8_8_;
      *puVar40 = auVar84._0_8_;
      puVar40[3] = auVar89._8_8_;
      puVar40[2] = auVar89._0_8_;
      puVar40 = (undefined8 *)((long)puVar40 + uVar47);
      Hint_Prefetch(puVar40,2,0,1);
      puVar40[1] = auVar94._8_8_;
      *puVar40 = auVar94._0_8_;
      puVar40[3] = auVar99._8_8_;
      puVar40[2] = auVar99._0_8_;
      puVar40 = (undefined8 *)((long)puVar40 + uVar47);
      Hint_Prefetch(puVar40,2,0,1);
      puVar40[1] = auVar104._8_8_;
      *puVar40 = auVar104._0_8_;
      puVar40[3] = auVar109._8_8_;
      puVar40[2] = auVar109._0_8_;
      puVar40 = (undefined8 *)((long)puVar40 + uVar47);
      Hint_Prefetch(puVar40,2,0,1);
      puVar40[1] = auVar114._8_8_;
      *puVar40 = auVar114._0_8_;
      puVar40[3] = auVar119._8_8_;
      puVar40[2] = auVar119._0_8_;
      puVar40 = (undefined8 *)((long)puVar40 + uVar47);
      Hint_Prefetch(puVar40,2,0,1);
      puVar40[1] = auVar124._8_8_;
      *puVar40 = auVar124._0_8_;
      puVar40[3] = auVar129._8_8_;
      puVar40[2] = auVar129._0_8_;
      puVar40 = (undefined8 *)((long)puVar40 + uVar47);
      Hint_Prefetch(puVar40,2,0,1);
      puVar40[1] = auVar134._8_8_;
      *puVar40 = auVar134._0_8_;
      puVar40[3] = auVar139._8_8_;
      puVar40[2] = auVar139._0_8_;
      puVar40 = (undefined8 *)((long)puVar40 + uVar47);
      Hint_Prefetch(puVar40,2,0,1);
      puVar40[1] = auVar144._8_8_;
      *puVar40 = auVar144._0_8_;
      *(undefined1 (*) [16])(puVar40 + 2) = auVar149;
      if (iVar36 != 8 || iVar3 != 8) {
        iVar44 = 0;
        puVar40 = auStack_194;
        puVar42 = puStack_1f8;
        do {
          Hint_Prefetch(puVar42,2,0,1);
          uVar47 = 0;
          do {
            *(undefined4 *)((long)puVar42 + uVar47 * 4) =
                 *(undefined4 *)((long)puVar40 + uVar47 * 4);
            uVar1 = (int)uVar47 + 1;
            uVar47 = (ulong)uVar1;
          } while ((int)uVar1 < iVar36);
          iVar44 = iVar44 + 1;
          puVar40 = puVar40 + 4;
          puVar42 = (undefined8 *)((long)puVar42 + uVar45);
        } while (iVar44 < iVar3);
      }
      puStack_1f8 = puStack_1f8 + 4;
      if (uVar46 == uVar50) {
        uStack_1e4 = uStack_1e4 + 8;
        puStack_1f8 = puVar49 + uVar45;
        puVar49 = puStack_1f8;
        uVar46 = uStack_1e8;
      }
      else {
        uVar46 = uVar46 + 8;
      }
      uVar47 = (ulong)uVar46;
    } while ((int)uStack_1e4 <= iVar53);
  }
  else {
    uStack_1c0 = uVar51;
    if (param_1 == 3) {
      func_0x000109baaa20(&puStack_208);
    }
    else {
      func_0x000109baa340(&puStack_208);
    }
  }
  return;
}



/* Entry: 109c236a4; end: 109c2387f;  */

void FUN_109c236a4(undefined8 param_1,long param_2,long param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  char cVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  float *pfVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  lVar16 = *(long *)(param_2 + 8);
  iVar6 = *(int *)(param_2 + 0x10);
  iVar7 = *(int *)(param_2 + 0x14);
  iVar12 = *(int *)(param_2 + 0x18);
  lVar19 = (long)iVar12;
  lVar17 = *(long *)(param_3 + 8);
  lVar18 = *(long *)(param_3 + 0x18);
  uVar8 = *(uint *)(param_3 + 0x20);
  uVar9 = *(uint *)(param_3 + 0x28);
  cVar10 = *(char *)(param_3 + 0x2c);
  cVar11 = *(char *)(param_3 + 0x2d);
  uVar14 = (uint)*(byte *)(param_3 + 0x2f);
  uVar13 = (uint)*(byte *)(param_3 + 0x2e);
  if (*(char *)(param_2 + 0x1c) == '\0') {
    if (param_4 < param_5) {
      lVar19 = (long)param_4;
      uVar3 = uVar14;
      if (cVar10 != '\0') {
        uVar3 = uVar9;
      }
      uVar4 = uVar13;
      if (cVar10 != '\x01') {
        uVar4 = uVar9;
      }
      uVar9 = uVar14;
      if (cVar11 == '\0') {
        uVar9 = 1;
      }
      uVar5 = uVar13;
      if (cVar11 == '\x01') {
        uVar5 = 1;
      }
      fVar22 = (float)*(int *)(param_3 + 0x30);
      param_4 = iVar12 * param_4;
      do {
        fVar23 = 0.0;
        if (0 < (int)uVar8) {
          uVar15 = 0;
          uVar1 = (uint)lVar19 & -uVar14;
          do {
            fVar24 = fVar22;
            if ((lVar19 < iVar7) && ((long)uVar15 < (long)iVar6)) {
              fVar24 = *(float *)(lVar16 + (long)param_4 * 4 + uVar15 * 4) + 0.0;
            }
            uVar2 = (uint)uVar15 & -uVar13;
            fVar23 = fVar23 + fVar24;
            *(float *)(lVar17 + (long)(int)(uVar1 * uVar4 + ((uint)lVar19 - uVar1) * uVar5 +
                                            uVar2 * uVar3 + ((uint)uVar15 - uVar2) * uVar9) * 4) =
                 fVar24;
            uVar15 = uVar15 + 1;
          } while (uVar8 != uVar15);
        }
        if (lVar18 != 0) {
          *(float *)(lVar18 + lVar19 * 4) = fVar23;
        }
        lVar19 = lVar19 + 1;
        param_4 = param_4 + iVar12;
      } while (param_5 != (int)lVar19);
    }
  }
  else if (param_4 < param_5) {
    lVar20 = (long)param_4;
    uVar3 = uVar14;
    if (cVar10 != '\0') {
      uVar3 = uVar9;
    }
    uVar4 = uVar13;
    if (cVar10 != '\x01') {
      uVar4 = uVar9;
    }
    uVar9 = uVar14;
    if (cVar11 == '\0') {
      uVar9 = 1;
    }
    uVar5 = uVar13;
    if (cVar11 == '\x01') {
      uVar5 = 1;
    }
    fVar22 = (float)*(int *)(param_3 + 0x30);
    if (*(char *)(param_2 + 0x1c) == '\x01') {
      iVar12 = 1;
    }
    param_4 = iVar12 * param_4;
    do {
      fVar23 = 0.0;
      if (0 < (int)uVar8) {
        uVar15 = 0;
        pfVar21 = (float *)(lVar16 + (long)param_4 * 4);
        uVar1 = (uint)lVar20 & -uVar14;
        do {
          fVar24 = fVar22;
          if ((lVar20 < iVar7) && ((long)uVar15 < (long)iVar6)) {
            fVar24 = *pfVar21 + 0.0;
          }
          uVar2 = (uint)uVar15 & -uVar13;
          fVar23 = fVar23 + fVar24;
          *(float *)(lVar17 + (long)(int)(uVar1 * uVar4 + ((uint)lVar20 - uVar1) * uVar5 +
                                          uVar2 * uVar3 + ((uint)uVar15 - uVar2) * uVar9) * 4) =
               fVar24;
          uVar15 = uVar15 + 1;
          pfVar21 = pfVar21 + lVar19;
        } while (uVar8 != uVar15);
      }
      if (lVar18 != 0) {
        *(float *)(lVar18 + lVar20 * 4) = fVar23;
      }
      lVar20 = lVar20 + 1;
      param_4 = param_4 + iVar12;
    } while (param_5 != (int)lVar20);
  }
  return;
}



/* Entry: 109c23880; end: 109c23af3;  */

void FUN_109c23880(undefined8 param_1,long param_2,long *param_3,int *param_4,int *param_5,
                  long param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  int iVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  int iVar38;
  float fVar39;
  float fVar40;
  
  uVar29 = (ulong)*param_4;
  iVar5 = *(int *)(param_6 + 0x10);
  if (*param_5 <= *(int *)(param_6 + 0x10)) {
    iVar5 = *param_5;
  }
  iVar6 = *(int *)(param_6 + 0x14);
  if (param_5[1] <= *(int *)(param_6 + 0x14)) {
    iVar6 = param_5[1];
  }
  if (*param_4 < iVar5) {
    lVar31 = *(long *)(param_2 + 8);
    lVar30 = *(long *)(param_2 + 0x18);
    uVar13 = *(uint *)(param_2 + 0x20);
    lVar32 = *(long *)(param_2 + 0x40);
    lVar33 = *(long *)(param_2 + 0x50);
    lVar34 = *(long *)(param_6 + 8);
    iVar38 = *(int *)(param_6 + 0x20);
    iVar14 = *(int *)(param_6 + 0x18);
    iVar15 = *(int *)(param_2 + 0x68);
    bVar17 = *(byte *)(param_2 + 0x67);
    bVar18 = *(byte *)(param_2 + 0x66);
    bVar19 = *(byte *)(param_2 + 0x2f);
    bVar20 = *(byte *)(param_2 + 0x2e);
    iVar21 = param_4[1];
    iVar16 = *(int *)(param_2 + 0x30);
    lVar25 = *param_3;
    iVar12 = iVar14;
    if (*(char *)(param_6 + 0x1c) == '\0') {
      iVar12 = 1;
    }
    if (*(char *)(param_6 + 0x1c) == '\x01') {
      iVar14 = 1;
    }
    uVar36 = (uint)bVar19;
    uVar7 = uVar36;
    if (*(char *)(param_2 + 0x2c) != '\0') {
      uVar7 = *(uint *)(param_2 + 0x28);
    }
    uVar37 = (uint)bVar20;
    uVar8 = uVar37;
    if (*(char *)(param_2 + 0x2c) != '\x01') {
      uVar8 = *(uint *)(param_2 + 0x28);
    }
    if (*(char *)(param_2 + 0x2d) == '\0') {
      uVar36 = 1;
    }
    if (*(char *)(param_2 + 0x2d) == '\x01') {
      uVar37 = 1;
    }
    uVar26 = (uint)bVar17;
    uVar9 = uVar26;
    if (*(char *)(param_2 + 100) != '\0') {
      uVar9 = *(uint *)(param_2 + 0x60);
    }
    uVar27 = (uint)bVar18;
    uVar10 = uVar27;
    if (*(char *)(param_2 + 100) != '\x01') {
      uVar10 = *(uint *)(param_2 + 0x60);
    }
    if (*(char *)(param_2 + 0x65) == '\0') {
      uVar26 = 1;
    }
    if (*(char *)(param_2 + 0x65) == '\x01') {
      uVar27 = 1;
    }
    do {
      if (iVar21 < iVar6) {
        lVar22 = param_3[2];
        uVar28 = (uint)uVar29;
        uVar1 = uVar28 & -(uint)bVar19;
        uVar24 = (long)iVar21;
        do {
          uVar23 = (uint)uVar24;
          if ((int)uVar13 < 1) {
            fVar39 = 0.0;
          }
          else {
            uVar35 = 0;
            uVar2 = uVar23 & -(uint)bVar17;
            fVar39 = 0.0;
            do {
              uVar3 = uVar35 & -(uint)bVar20;
              uVar4 = uVar35 & -(uint)bVar18;
              fVar39 = fVar39 + *(float *)(lVar32 + (long)(int)(uVar2 * uVar10 +
                                                                (uVar23 - uVar2) * uVar27 +
                                                                uVar4 * uVar9 +
                                                               (uVar35 - uVar4) * uVar26) * 4) *
                                *(float *)(lVar31 + (long)(int)(uVar1 * uVar8 +
                                                                (uVar28 - uVar1) * uVar37 +
                                                                uVar3 * uVar7 +
                                                               (uVar35 - uVar3) * uVar36) * 4);
              uVar35 = uVar35 + 1;
            } while (uVar13 != uVar35);
          }
          if (lVar25 != 0) {
            uVar11 = uVar29;
            if ((char)lVar22 != '\0') {
              uVar11 = uVar24;
            }
            fVar39 = fVar39 + *(float *)(lVar25 + (-(uVar11 >> 0x1f & 1) & 0xfffffffc00000000 |
                                                  (uVar11 & 0xffffffff) << 2));
          }
          if (iVar16 == 0) {
            if (iVar15 != 0) {
              fVar39 = fVar39 + *(float *)(lVar30 + uVar29 * 4) * -(float)iVar15;
            }
          }
          else {
            fVar39 = fVar39 + *(float *)(lVar33 + uVar24 * 4) * -(float)iVar16;
            if (iVar15 != 0) {
              fVar39 = fVar39 + *(float *)(lVar30 + uVar29 * 4) * -(float)iVar15 +
                       (float)(int)(iVar15 * iVar16 * uVar13);
            }
          }
          fVar39 = fVar39 + (float)iVar38;
          fVar40 = *(float *)((long)param_3 + 0xc);
          if (fVar39 <= *(float *)((long)param_3 + 0xc)) {
            fVar40 = fVar39;
          }
          fVar39 = *(float *)(param_3 + 1);
          if (*(float *)(param_3 + 1) <= fVar40) {
            fVar39 = fVar40;
          }
          *(float *)(lVar34 + (long)(int)(iVar12 * uVar28 + iVar14 * uVar23) * 4) = fVar39;
          uVar24 = uVar24 + 1;
        } while (iVar6 != (int)uVar24);
      }
      uVar29 = uVar29 + 1;
    } while (iVar5 != (int)uVar29);
  }
  return;
}



/* Entry: 109c23af4; end: 109c23c2b;  */

void FUN_109c23af4(uint *param_1,uint *param_2,uint *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar5 = *param_2 & ((int)*param_2 >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar5) {
    uVar5 = 5;
  }
  uVar3 = 0xf5749aa;
  uVar2 = uVar3;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,param_2 + 1,uVar5);
  uVar5 = *param_3 & ((int)*param_3 >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar5) {
    uVar5 = 5;
  }
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,param_3 + 1,uVar5);
  uVar5 = param_2[1];
  if ((int)*param_2 < 1) {
    uVar5 = 0xffffffff;
  }
  uVar8 = *param_3;
  uVar1 = param_3[1];
  uVar6 = uVar1;
  if ((int)uVar8 < 1) {
    uVar6 = 0xffffffff;
  }
  if (((int)uVar8 < 2) || (uVar5 != uVar6)) {
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar6 = (int)uVar2 / (int)uVar5;
    }
    if (0 < (int)uVar8) goto LAB_109c23bc8;
  }
  else {
    if ((param_4 == 1) && (param_3[2] != 0xffffffff)) {
      uVar5 = 1;
      uVar6 = uVar2;
    }
    else {
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = (int)uVar2 / (int)uVar5;
      }
    }
LAB_109c23bc8:
    if ((((uVar1 != 1) && (param_4 != 1)) && (1 < uVar8)) && (param_3[2] != 0xffffffff)) {
      uVar8 = 0;
      uVar4 = uVar3;
      uVar7 = uVar8;
      if (uVar1 != 0) {
        uVar8 = (int)uVar3 / (int)uVar1;
        uVar7 = uVar8;
      }
      goto LAB_109c23c04;
    }
  }
  uVar4 = uVar5 * uVar3;
  uVar8 = uVar3;
  uVar7 = 0;
LAB_109c23c04:
  uVar3 = 0;
  if (uVar4 != 0) {
    uVar3 = (int)uVar2 / (int)uVar4;
  }
  *param_1 = uVar5;
  param_1[1] = uVar3;
  param_1[2] = uVar8;
  param_1[3] = uVar6;
  param_1[4] = uVar7;
  return;
}



/* Entry: 109c23c2c; end: 109c23d77;  */

void FUN_109c23c2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  undefined4 uStack_54;
  
  iVar1 = (int)param_2;
  lVar4 = (long)iVar1;
  uVar3 = (undefined4)param_3;
  if (param_6 == 0) {
    lVar2 = lVar4 << 2;
    if (iVar1 < 0) {
      lVar2 = -1;
    }
    __Znam(lVar2);
    _bzero();
    uStack_54 = 0x3f800000;
    _vDSP_vfill(&uStack_54,lVar2,1,lVar4);
    if ((int)param_1 == 0x65) {
      iVar1 = 1;
    }
    else {
      uVar3 = 1;
    }
    _cblas_sgemm(0x3f800000,0x3f800000,param_1,0x6f,0x6f,param_2,param_3,1,lVar2,iVar1,param_4,uVar3
                );
    __ZdaPv(lVar2);
  }
  else {
    func_0x000109c1a4c0(param_6,lVar4);
    if ((int)param_1 == 0x65) {
      iVar1 = 1;
    }
    else {
      uVar3 = 1;
    }
    _cblas_sgemm(0x3f800000,0x3f800000,param_1,0x6f,0x6f,param_2,param_3,1,param_6,iVar1,param_4,
                 uVar3);
  }
  return;
}



/* Entry: 109c23d78; end: 109c23f67;  */

void FUN_109c23d78(float param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 (*pauVar3) [16];
  float *pfVar4;
  ulong uVar5;
  long lVar6;
  undefined1 (*pauVar7) [16];
  float fVar8;
  undefined1 auVar9 [16];
  
  uVar1 = *(uint *)(param_2 + 8) & ((int)*(uint *)(param_2 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar1) {
    uVar1 = 5;
  }
  uVar2 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,param_2 + 0xc,uVar1);
  pauVar3 = *(undefined1 (**) [16])(param_2 + 0x40);
  uVar1 = uVar2 + 3;
  if (-1 < (int)uVar2) {
    uVar1 = uVar2;
  }
  uVar1 = uVar1 & 0xfffffffc;
  if (3 < (int)uVar2) {
    uVar5 = 0;
    pauVar7 = pauVar3;
    do {
      auVar9._4_4_ = param_1;
      auVar9._0_4_ = param_1;
      auVar9._8_4_ = param_1;
      auVar9._12_4_ = param_1;
      auVar9 = NEON_fmax(*pauVar7,auVar9,4);
      *(long *)(*pauVar7 + 8) = auVar9._8_8_;
      *(long *)*pauVar7 = auVar9._0_8_;
      uVar5 = uVar5 + 4;
      pauVar7 = pauVar7 + 1;
    } while (uVar5 < uVar1);
  }
  if ((int)uVar1 < (int)uVar2) {
    lVar6 = (long)(int)uVar2 - (long)(int)uVar1;
    pfVar4 = (float *)(*pauVar3 + (long)(int)uVar1 * 4);
    do {
      fVar8 = param_1;
      if (param_1 <= *pfVar4) {
        fVar8 = *pfVar4;
      }
      *pfVar4 = fVar8;
      lVar6 = lVar6 + -1;
      pfVar4 = pfVar4 + 1;
    } while (lVar6 != 0);
  }
  return;
}



/* Entry: 109c23f68; end: 109c24267;  */

long FUN_109c23f68(float param_1,float param_2,float param_3,long param_4,int param_5)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  float *pfVar7;
  long lVar8;
  float *pfVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  float *pfVar17;
  ulong uVar18;
  float fVar19;
  float fStack_a4;
  int iStack_a0;
  int iStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  uint auStack_88 [4];
  ulong uStack_78;
  
  auStack_88[0] = 0;
  auStack_88[1] = 0;
  auStack_88[2] = 0;
  auStack_88[3] = 0;
  uStack_78 = 0;
  if (((uint *)(param_4 + 8U) != auStack_88) && (uVar2 = *(uint *)(param_4 + 8U), uVar2 != 0)) {
    _memcpy((ulong)auStack_88 | 4,param_4 + 0xc,(long)(int)uVar2 << 2);
    auStack_88[0] = uVar2;
    if (3 < (int)uVar2) {
      uVar15 = uStack_78 & 0xffffffff;
      goto LAB_109c23fec;
    }
  }
  uVar15 = 0xffffffff;
LAB_109c23fec:
  plVar4 = (long *)0x58;
  __Znwm();
  FUN_109c1106c();
  plVar5 = (long *)0x58;
  __Znwm();
  uStack_98 = 0;
  uStack_90 = 0;
  iVar14 = (int)uVar15;
  iStack_a0 = 1;
  iStack_9c = iVar14;
  FUN_109c1106c();
  pfVar17 = (float *)plVar5[8];
  uVar18 = *(ulong *)(param_4 + 0x40);
  uVar2 = auStack_88[0] & ((int)auStack_88[0] >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar2) {
    uVar2 = 5;
  }
  iVar3 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,(ulong)auStack_88 | 4,uVar2);
  if (0 < iVar3) {
    uVar1 = uVar18 + (long)iVar3 * 4;
    pfVar9 = (float *)plVar4[8];
    uVar10 = -(uVar15 >> 0x1f) & 0xfffffffc00000000 | uVar15 << 2;
    do {
      if (0 < iVar14) {
        lVar11 = 0;
        do {
          *(float *)((long)pfVar17 + lVar11) =
               (param_2 / (float)param_5) *
               *(float *)(uVar18 + lVar11) * *(float *)(uVar18 + lVar11);
          lVar11 = lVar11 + 4;
        } while (uVar15 << 2 != lVar11);
      }
      fVar19 = 0.0;
      uVar6 = (ulong)(uint)(param_5 / 2);
      pfVar7 = pfVar17;
      if (1 < param_5) {
        do {
          fVar19 = fVar19 + *pfVar7;
          uVar6 = uVar6 - 1;
          pfVar7 = pfVar7 + 1;
        } while (uVar6 != 0);
      }
      pfVar7 = pfVar9;
      lVar11 = -(long)(param_5 / 2);
      uVar6 = uVar15;
      lVar8 = (long)((ulong)(uint)(param_5 - (param_5 >> 0x1f)) << 0x20) >> 0x21;
      if (0 < iVar14) {
        do {
          if (lVar8 < iVar14) {
            fVar19 = fVar19 + pfVar17[lVar8];
          }
          *pfVar7 = param_1 + fVar19;
          if (-1 < lVar11) {
            fVar19 = fVar19 - pfVar17[lVar11];
          }
          lVar11 = lVar11 + 1;
          pfVar7 = pfVar7 + 1;
          lVar8 = lVar8 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      uVar18 = uVar18 + uVar10;
      pfVar9 = (float *)((long)pfVar9 + uVar10);
    } while (uVar18 < uVar1);
  }
  iStack_a0 = iVar3;
  (**(code **)(*plVar5 + 8))(plVar5);
  lVar8 = 0x58;
  __Znwm();
  FUN_109c1106c();
  uVar12 = *(undefined8 *)(param_4 + 0x40);
  lVar16 = plVar4[8];
  uVar13 = *(undefined8 *)(lVar8 + 0x40);
  lVar11 = (long)iVar3 << 2;
  if (iVar3 < 0) {
    lVar11 = -1;
  }
  __Znam(lVar11);
  fStack_a4 = -param_3;
  _vDSP_vfill(&fStack_a4,lVar11,1,(long)iVar3);
  _vvpowf(uVar13,lVar11,lVar16,&iStack_a0);
  __ZdaPv(lVar11);
  _vDSP_vmul(uVar13,1,uVar12,1,uVar13,1,(long)iStack_a0);
  (**(code **)(*plVar4 + 8))(plVar4);
  *(undefined4 *)(lVar8 + 0x3c) = 0;
  return lVar8;
}



/* Entry: 109c24268; end: 109c243bf;  */

long FUN_109c24268(long param_1)

{
  int iVar1;
  long lVar2;
  float *pfVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  float *pfVar9;
  ulong uVar10;
  int *piVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  float fVar15;
  int aiStack_58 [6];
  
  aiStack_58[0] = 0;
  aiStack_58[1] = 0;
  aiStack_58[2] = 0;
  aiStack_58[3] = 0;
  aiStack_58[4] = 0;
  aiStack_58[5] = 0;
  if (((int *)(param_1 + 8U) == aiStack_58) || (iVar1 = *(int *)(param_1 + 8U), iVar1 == 0)) {
    uVar13 = 0;
    iVar12 = 0;
    aiStack_58[0] = 0;
    aiStack_58[1] = 0;
  }
  else {
    piVar11 = (int *)((ulong)aiStack_58 | 4);
    _memcpy(piVar11,param_1 + 0xc,(long)iVar1 << 2);
    uVar14 = iVar1 - 1;
    uVar4 = (ulong)uVar14;
    iVar12 = piVar11[(int)uVar14];
    aiStack_58[0] = iVar1;
    uVar13 = (ulong)(uint)(iVar12 / 2);
    piVar11[(int)uVar14] = iVar12 / 2;
    if (1 < iVar1) {
      uVar14 = 1;
      do {
        uVar14 = *piVar11 * uVar14;
        uVar4 = uVar4 - 1;
        piVar11 = piVar11 + 1;
      } while (uVar4 != 0);
      goto LAB_109c24304;
    }
  }
  uVar14 = 1;
LAB_109c24304:
  lVar2 = 0x58;
  __Znwm();
  FUN_109c1106c();
  if (0 < (int)uVar14) {
    uVar5 = 0;
    uVar6 = 0;
    uVar4 = 0;
    lVar7 = *(long *)(param_1 + 0x40);
    lVar8 = *(long *)(lVar2 + 0x40);
    do {
      if (1 < iVar12) {
        pfVar3 = (float *)(lVar7 + (uVar5 >> 1 & 0x7fffffff) * 8);
        pfVar9 = (float *)(lVar8 + uVar6 * 4);
        uVar10 = uVar13;
        do {
          fVar15 = pfVar3[uVar13];
          if (pfVar3[uVar13] <= *pfVar3) {
            fVar15 = *pfVar3;
          }
          *pfVar9 = fVar15;
          pfVar3 = pfVar3 + 1;
          uVar10 = uVar10 - 1;
          pfVar9 = pfVar9 + 1;
        } while (uVar10 != 0);
      }
      uVar4 = uVar4 + 1;
      uVar6 = (ulong)(uint)((int)uVar6 + (int)uVar13);
      uVar5 = uVar5 + uVar13 * 2;
    } while (uVar4 != uVar14);
  }
  return lVar2;
}



/* Entry: 109c243c0; end: 109c243c3;  */

undefined8 * FUN_109c243c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c243c4; end: 109c243d7;  */

void FUN_109c243c4(void)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c243d8; end: 109c2453b;  */

undefined8 * FUN_109c243d8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  int aiStack_b8 [6];
  undefined1 auStack_a0 [72];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109c182f4(param_3,1);
  lVar5 = *(long *)*param_2;
  aiStack_b8[2] = 0;
  aiStack_b8[3] = 0;
  aiStack_b8[4] = 0;
  aiStack_b8[5] = 0;
  aiStack_b8[0] = 0;
  aiStack_b8[1] = 0;
  if ((int *)(lVar5 + 8U) != aiStack_b8) {
    iVar3 = *(int *)(lVar5 + 8U);
    if (iVar3 != 0) {
      _memmove((ulong)aiStack_b8 | 4,lVar5 + 0xc,(long)iVar3 << 2);
    }
    aiStack_b8[0] = iVar3;
  }
  lVar1 = 0x10;
  if (*(int *)(lVar5 + 0x3c) != 0) {
    lVar1 = 8;
  }
  *(undefined4 *)((long)aiStack_b8 + lVar1) = 1;
  (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
            (auStack_a0,(undefined8 *)**(undefined8 **)(param_1 + 0x68),aiStack_b8,1);
  func_0x000109c18360(*param_3,auStack_a0);
  FUN_109c180ec(auStack_a0);
  uVar2 = 1;
  if (*(int *)(*(long *)*param_2 + 0x3c) != 1) {
    uVar2 = 0xffffffff;
  }
  puVar4 = (undefined8 *)(ulong)uVar2;
  FUN_109c24850(puVar4,*(long *)*param_2,*(undefined8 *)*param_3,0);
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*(long *)*param_2 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar4;
  }
  ___stack_chk_fail();
  FUN_109c180ec(auStack_a0);
  __Unwind_Resume();
  *puVar4 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(puVar4 + 0xd);
  if (*(char *)((long)puVar4 + 0x5f) < '\0') {
    __ZdlPv(puVar4[9]);
  }
  if (*(char *)((long)puVar4 + 0x47) < '\0') {
    __ZdlPv(puVar4[6]);
  }
  FUN_109c61bbc(puVar4 + 1);
  return puVar4;
}


