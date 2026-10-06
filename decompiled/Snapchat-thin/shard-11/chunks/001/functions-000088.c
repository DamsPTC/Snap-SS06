/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108160164; end: 108160167;  */

undefined8 * FUN_108160164(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a2bbb8;
  if ((*(ushort *)(param_1 + 5) >> 4 & 1) != 0) {
    if (param_1[2] != 0) {
      FUN_10818aa28();
    }
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108160168; end: 10816017b;  */

void FUN_108160168(void)

{
  FUN_10818a578();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10816017c; end: 108160197;  */

undefined8 FUN_10816017c(void)

{
  return 0;
}



/* Entry: 108160198; end: 1081601e3;  */

long * FUN_108160198(long *param_1)

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



/* Entry: 1081601e4; end: 10816022f;  */

long * FUN_1081601e4(long *param_1)

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



/* Entry: 108160230; end: 108160307;  */

void FUN_108160230(void)

{
  return;
}



/* Entry: 108160308; end: 108160387;  */

uint FUN_108160308(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  uVar3 = *(byte *)(param_2 + 5) ^ 1;
  puVar1 = (undefined8 *)param_2[3];
  for (puVar4 = (undefined8 *)param_2[2]; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    plVar2 = (long *)*puVar4;
    (**(code **)(*plVar2 + 0x18))(param_1);
    uVar3 = uVar3 | (uint)plVar2;
  }
  if ((uVar3 & 1) != 0) {
    (**(code **)(*param_2 + 0x20))(param_2);
    *(undefined1 *)(param_2 + 5) = 1;
  }
  return uVar3 & 1;
}



/* Entry: 108160388; end: 10816040b;  */

void FUN_108160388(long param_1,long *param_2)

{
  long *plStack_28;
  
  plStack_28 = (long *)*param_2;
  if (plStack_28 != (long *)0x0) {
    if ((plStack_28[2] == plStack_28[3]) && ((*(byte *)((long)plStack_28 + 0x29) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001081603f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plStack_28 + 0x18))(0);
      return;
    }
    *param_2 = 0;
    FUN_108155570(param_1 + 0x10,&plStack_28);
    func_0x00010816087c();
  }
  return;
}



/* Entry: 10816040c; end: 1081604c7;  */

void FUN_10816040c(long *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  long *plStack_30;
  long *plStack_28;
  
  plVar2 = param_1 + 2;
  lVar1 = *param_1;
  uVar4 = *plVar2 - lVar1;
  uVar5 = param_1[1] - lVar1;
  if (uVar5 < uVar4) {
    plStack_28 = plVar2;
    if (param_1[1] == lVar1) {
      plStack_48 = (long *)0x0;
      uVar3 = 0;
    }
    else {
      uVar3 = (long)uVar5 >> 3;
      FUN_108155734();
      uVar4 = param_1[2] - *param_1;
      plStack_48 = plVar2;
    }
    lStack_40 = (long)plStack_48 + uVar5;
    plStack_30 = plStack_48 + uVar3;
    lStack_38 = lStack_40;
    if (uVar3 < (ulong)((long)uVar4 >> 3)) {
      FUN_1081556a8(param_1,&plStack_48);
    }
    func_0x0001081558b4(&plStack_48);
  }
  return;
}



/* Entry: 1081604c8; end: 108160803;  */

undefined8 FUN_1081604c8(long param_1,ulong *param_2,ulong *param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  byte *pbVar7;
  undefined8 uVar8;
  long *plStack_60;
  long *plStack_58;
  
  if (param_3 == (ulong *)0x0) {
    return 0;
  }
  FUN_108154b58(param_3,&UNK_10f47d1d6);
  FUN_108158a5c();
  puVar4 = (ulong *)0x0;
  if (param_3 != (ulong *)0x0) {
    puVar4 = (ulong *)param_2[0x18];
    if (puVar4 != (ulong *)0x0) {
      if ((*param_3 & 7) == 0) {
        pbVar7 = (byte *)((long)param_3 + 1);
      }
      else {
        pbVar7 = (byte *)((*param_3 & 0xfffffffffffffff8) + 8);
      }
      FUN_108154b58(puVar4,pbVar7);
      FUN_108154e4c();
      if (puVar4 != (ulong *)0x0) {
        FUN_108154b58();
        FUN_108154e4c();
        goto LAB_108160580;
      }
    }
    puVar4 = param_2;
    func_0x000108160884(param_2,0);
  }
LAB_108160580:
  func_0x00010816088c();
  puVar5 = puVar4;
  func_0x00010816088c();
  puVar6 = puVar5;
  func_0x00010816088c();
  FUN_108158a5c();
  if (puVar6 != (ulong *)0x0) {
    plStack_58 = (long *)param_2[6];
    if (plStack_58 == (long *)0x0) {
      plStack_58 = (long *)0x0;
      FUN_10815be4c(&plStack_58);
      func_0x000108160884(param_2,0);
    }
    else {
      plVar1 = plStack_58 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      FUN_10815be4c(&plStack_58);
      func_0x000108160864();
      plStack_60 = (long *)param_2[6];
      if (plStack_60 != (long *)0x0) {
        plVar1 = plStack_60 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if ((*puVar6 & 7) == 0) {
        pbVar7 = (byte *)((long)puVar6 + 1);
      }
      else {
        pbVar7 = (byte *)((*puVar6 & 0xfffffffffffffff8) + 8);
      }
      (**(code **)(*param_4 + 0x18))(&plStack_58,param_4,plStack_60,pbVar7);
      FUN_10815be4c(&plStack_60);
      if (plStack_58 != (long *)0x0) {
        FUN_108155570(param_1 + 0x10,&plStack_58);
        func_0x00010816087c();
        return 1;
      }
      func_0x00010816087c();
    }
  }
  plStack_58 = (long *)((ulong)plStack_58 & 0xffffffffffffff00);
  puVar6 = puVar4;
  FUN_108158ab4(puVar4,&plStack_58);
  if (((ulong)puVar6 & 1) == 0) {
    func_0x000108160864();
    if (((ulong)puVar6 & 1) != 0) {
      return 1;
    }
    FUN_108154e30();
    if (((ulong)puVar4 & 1) == 0) {
      func_0x000108160884(param_2,1);
      return 0;
    }
  }
  plStack_58 = (long *)0x0;
  FUN_108155f00();
  if ((puVar5 != (ulong *)0x0) && (*(long *)(*puVar5 & 0xfffffffffffffff8) != 0)) {
    (**(code **)(*param_4 + 0x10))(&plStack_60,param_4,param_2);
    plVar1 = plStack_60;
    plStack_60 = (long *)0x0;
    plStack_58 = plVar1;
    func_0x000108160838(0);
    FUN_10816080c(&plStack_60);
    if (plVar1 != (long *)0x0) {
      if (plVar1[3] - plVar1[2] == 0xc) {
        (**(code **)(*plVar1 + 0x18))(0,plVar1);
      }
      else {
        plStack_58 = (long *)0x0;
        plStack_60 = plVar1;
        FUN_108155570(param_1 + 0x10,&plStack_60);
        FUN_108155920(&plStack_60);
      }
      uVar8 = 1;
      goto LAB_108160788;
    }
  }
  func_0x000108160884(param_2,1);
  uVar8 = 0;
LAB_108160788:
  FUN_10816080c(&plStack_58);
  return uVar8;
}



/* Entry: 108160804; end: 10816080b;  */

void FUN_108160804(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108160808);
  (*pcVar1)();
}



/* Entry: 10816080c; end: 108160837;  */

undefined8 * FUN_10816080c(undefined8 *param_1)

{
  FUN_108160838(*param_1);
  return param_1;
}



/* Entry: 108160838; end: 108160893;  */

void FUN_108160838(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010816085c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108160894; end: 1081608cf;  */

undefined8 * FUN_108160894(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a289a8;
  FUN_108160fd0(param_1 + 5);
  FUN_108160f8c(param_1 + 2);
  return param_1;
}



/* Entry: 1081608d0; end: 10816099b;  */

undefined1  [16] FUN_1081608d0(ulong param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if ((float)param_1 <= **(float **)(param_2 + 0x10)) {
    fVar2 = (*(float **)(param_2 + 0x10))[1];
  }
  else if (*(float *)(*(long *)(param_2 + 0x18) + -0xc) <= (float)param_1) {
    fVar2 = *(float *)(*(long *)(param_2 + 0x18) + -8);
  }
  else {
    iVar1 = (int)param_2 + 0x40;
    FUN_10816099c(param_1);
    if (iVar1 == 0) {
      lVar4 = param_2;
      func_0x0001081609cc(param_1);
      *(long *)(param_2 + 0x40) = lVar4;
      *(undefined8 *)(param_2 + 0x48) = param_3;
    }
    else {
      lVar4 = *(long *)(param_2 + 0x40);
    }
    if (*(int *)(lVar4 + 8) != 0) {
      func_0x000108160a14(param_1,param_2,param_2 + 0x40);
      fVar2 = *(float *)(lVar4 + 4);
      param_1 = param_1 & 0xffffffff;
      fVar3 = *(float *)(*(long *)(param_2 + 0x48) + 4);
      goto LAB_108160984;
    }
    fVar2 = *(float *)(lVar4 + 4);
  }
  param_1 = 0;
  fVar3 = fVar2;
LAB_108160984:
  auVar5._0_8_ = param_1 | (ulong)(uint)fVar2 << 0x20;
  auVar5._8_4_ = fVar3;
  auVar5._12_4_ = 0;
  return auVar5;
}



/* Entry: 10816099c; end: 108160a4b;  */

bool FUN_10816099c(float param_1,long *param_2)

{
  if (((float *)*param_2 != (float *)0x0) && (*(float *)*param_2 <= param_1)) {
    return param_1 < *(float *)param_2[1];
  }
  return false;
}



/* Entry: 108160a4c; end: 108160a87;  */

undefined8 * FUN_108160a4c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a289d8;
  FUN_108160fd0(param_1 + 4);
  FUN_108160f8c(param_1 + 1);
  return param_1;
}



/* Entry: 108160a88; end: 108160f8b;  */

bool FUN_108160a88(long param_1,undefined8 param_2,ulong *param_3)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong unaff_x24;
  long lVar14;
  byte unaff_w26;
  float *pfVar15;
  ulong unaff_x28;
  float fVar16;
  long *plStack_d8;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  float *pfStack_a8;
  long lStack_a0;
  
  plVar12 = (long *)(param_1 + 8);
  uVar9 = *(ulong *)(*param_3 & 0xfffffffffffffff8);
  plVar13 = (long *)(param_1 + 0x18);
  if ((ulong)((*plVar13 - *plVar12) / 0xc) < uVar9) {
    if (uVar9 < 0x1555555555555556) {
      func_0x000108161050(&uStack_b8,uVar9,(*(long *)(param_1 + 0x10) - *plVar12) / 0xc,plVar13);
      func_0x000108161270();
      func_0x0001081612fc();
      goto LAB_108160b28;
    }
    FUN_108161014();
LAB_108160f78:
    FUN_108161200();
    ___cxa_begin_catch();
    ___cxa_end_catch();
  }
  else {
LAB_108160b28:
    lVar14 = 0;
    unaff_x28 = 0;
    unaff_w26 = true;
    while( true ) {
      unaff_x24 = *(ulong *)(*param_3 & 0xfffffffffffffff8);
      plStack_d8 = plVar13;
      if (unaff_x24 <= unaff_x28) break;
      uVar9 = (long)(*param_3 & 0xfffffffffffffff8) + lVar14 + 8;
      FUN_108154e4c();
      if (uVar9 == 0) goto LAB_108160f40;
      uVar11 = uVar9;
      FUN_108154b58();
      FUN_10815c694();
      if ((uVar11 & 1) == 0) goto LAB_108160f40;
      uVar11 = uVar9;
      FUN_108154b58(uVar9,"s");
      func_0x000108161250();
      if ((unaff_x28 == 0) || ((uVar11 & 1) != 0)) {
        if ((int)uVar11 == 0) goto LAB_108160f40;
        if (unaff_x28 != 0) goto LAB_108160bd4;
      }
      else {
        if (unaff_x28 != *(long *)(*param_3 & 0xfffffffffffffff8) - 1U) goto LAB_108160f40;
        uVar11 = 0;
        FUN_108154e4c();
        FUN_108154b58();
        func_0x000108161250();
        if ((uVar11 & 1) == 0) goto LAB_108160f40;
LAB_108160bd4:
        lVar10 = *(long *)(param_1 + 0x10);
        if (fStack_cc < *(float *)(lVar10 + -0xc)) goto LAB_108160f40;
        if (*(int *)(param_1 + 0x38) == 0) {
          if (fStack_d0 == *(float *)(lVar10 + -8)) goto LAB_108160c14;
        }
        else if (fStack_d0 == *(float *)(lVar10 + -8)) {
LAB_108160c14:
          *(undefined4 *)(lVar10 + -4) = 0;
        }
      }
      unaff_x24 = (ulong)(uint)fStack_d0;
      uVar11 = uVar9;
      FUN_108154b58(uVar9,&DAT_10f30a8b9);
      uStack_b8 = 0;
      FUN_108158ab4();
      fVar16 = 0.0;
      if ((uVar11 & 1) == 0) {
        uVar11 = uVar9;
        FUN_108154b58(uVar9,&DAT_10f3dc193);
        iVar7 = (int)uVar11;
        func_0x00010815c950();
        if (iVar7 != 0) {
          FUN_108154b58(uVar9,"i");
          iVar7 = (int)uVar9;
          func_0x00010815c950();
          if (iVar7 != 0) {
            fVar16 = ABS(fStack_c8 - fStack_c4);
            bVar5 = false;
            bVar6 = true;
            if (ABS(fStack_c0 - fStack_bc) <= 0.00024414062) {
              bVar5 = false;
              bVar6 = true;
              if (!NAN(fVar16)) {
                bVar5 = fVar16 == 0.00024414062;
                bVar6 = 0.00024414062 <= fVar16;
              }
            }
            if (bVar6 && !bVar5) {
              bVar5 = false;
              if ((fStack_c0 == *(float *)(param_1 + 0x3c)) &&
                 (bVar5 = false, !NAN(fStack_bc) && !NAN(*(float *)(param_1 + 0x40)))) {
                bVar5 = fStack_bc == *(float *)(param_1 + 0x40);
              }
              if (bVar5) {
                uVar9 = *(ulong *)(param_1 + 0x28);
                bVar5 = false;
                if ((fStack_c8 == *(float *)(param_1 + 0x44)) &&
                   (bVar5 = false, !NAN(fStack_c4) && !NAN(*(float *)(param_1 + 0x48)))) {
                  bVar5 = fStack_c4 == *(float *)(param_1 + 0x48);
                }
                if ((!bVar5) || (uVar11 = *(ulong *)(param_1 + 0x20), uVar11 == uVar9))
                goto LAB_108160dc4;
              }
              else {
                uVar9 = *(ulong *)(param_1 + 0x28);
LAB_108160dc4:
                if (uVar9 < *(ulong *)(param_1 + 0x30)) {
                  func_0x00010816127c();
                  uVar9 = uVar9 + 0x1c;
                }
                else {
                  lVar10 = (long)(uVar9 - *(long *)(param_1 + 0x20)) / 0x1c;
                  uVar9 = lVar10 + 1;
                  if (0x924924924924924 < uVar9) goto LAB_108160f78;
                  uVar4 = (long)(*(ulong *)(param_1 + 0x30) - *(long *)(param_1 + 0x20)) / 0x1c;
                  uVar11 = uVar4 * 2;
                  if (uVar11 < uVar9 || uVar11 - uVar9 == 0) {
                    uVar11 = uVar9;
                  }
                  if (0x492492492492491 < uVar4) {
                    uVar11 = 0x924924924924924;
                  }
                  func_0x000108161164(&uStack_b8,uVar11,lVar10,param_1 + 0x30);
                  pfVar1 = pfStack_a8;
                  func_0x00010816127c();
                  pfStack_a8 = pfVar1 + 7;
                  func_0x000108161304();
                  uVar9 = *(ulong *)(param_1 + 0x28);
                  FUN_1081611bc(&uStack_b8);
                }
                *(ulong *)(param_1 + 0x28) = uVar9;
                *(ulong *)(param_1 + 0x3c) = CONCAT44(fStack_bc,fStack_c0);
                *(ulong *)(param_1 + 0x44) = CONCAT44(fStack_c4,fStack_c8);
                uVar11 = *(ulong *)(param_1 + 0x20);
              }
              fVar16 = (float)((int)((long)(uVar9 - uVar11) / 0x1c) + 1);
              goto LAB_108160cd4;
            }
          }
        }
        fVar16 = 1.4013e-45;
      }
LAB_108160cd4:
      pfVar1 = *(float **)(param_1 + 0x10);
      if (pfVar1 < *(float **)(param_1 + 0x18)) {
        *pfVar1 = fStack_cc;
        pfVar15 = pfVar1 + 3;
        pfVar1[1] = fStack_d0;
        pfVar1[2] = fVar16;
      }
      else {
        plVar8 = plVar12;
        FUN_1081610e4(plVar12,((long)pfVar1 - *(long *)(param_1 + 8)) / 0xc + 1);
        func_0x000108161050(&uStack_b8,plVar8,
                            (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) / 0xc,plVar13);
        *pfStack_a8 = fStack_cc;
        pfStack_a8[1] = fStack_d0;
        pfStack_a8[2] = fVar16;
        pfStack_a8 = pfStack_a8 + 3;
        func_0x000108161270();
        pfVar15 = *(float **)(param_1 + 0x10);
        func_0x0001081612fc();
      }
      *(float **)(param_1 + 0x10) = pfVar15;
      if ((bool)unaff_w26 == false) {
        unaff_w26 = false;
      }
      else if (*(int *)(param_1 + 0x38) == 0) {
        unaff_w26 = fStack_d0 == *(float *)(*(long *)(param_1 + 8) + 4);
      }
      else {
        unaff_w26 = fStack_d0 == *(float *)(*(long *)(param_1 + 8) + 4);
      }
      unaff_x28 = unaff_x28 + 1;
      lVar14 = lVar14 + 8;
    }
    uVar9 = *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20);
    if (uVar9 < (ulong)(*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x20))) {
      lVar14 = (long)uVar9 / 0x1c;
      func_0x000108161164(&uStack_b8,lVar14,lVar14,param_1 + 0x30);
      if ((ulong)(lStack_a0 - CONCAT71(uStack_b7,uStack_b8)) <
          (ulong)(*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x20))) {
        func_0x000108161304();
      }
      FUN_1081611bc(&uStack_b8);
    }
  }
  if ((unaff_w26 & 1) != 0) {
    puVar2 = *(undefined8 **)(param_1 + 8);
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    if ((long)puVar3 - (long)puVar2 == 0) {
      if ((undefined8 *)*plStack_d8 == puVar3) {
        func_0x000108161050(&uStack_b8,1,0);
        pfStack_a8[0] = 0.0;
        pfStack_a8[1] = 0.0;
        pfStack_a8[2] = 0.0;
        pfStack_a8 = pfStack_a8 + 3;
        func_0x000108161270();
        func_0x0001081612fc();
        goto LAB_108160f40;
      }
      *(undefined4 *)(puVar3 + 1) = 0;
      *puVar3 = 0;
      puVar2 = puVar3;
    }
    else if ((ulong)(((long)puVar3 - (long)puVar2) / 0xc) < 2) goto LAB_108160f40;
    *(long *)(param_1 + 0x10) = (long)puVar2 + 0xc;
  }
LAB_108160f40:
  return unaff_x24 <= unaff_x28;
}



/* Entry: 108160f8c; end: 108160fb7;  */

undefined8 FUN_108160f8c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_108160fb8(&uStack_28);
  return param_1;
}



/* Entry: 108160fb8; end: 108160fcf;  */

void FUN_108160fb8(undefined8 *param_1)

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



/* Entry: 108160fd0; end: 108160ffb;  */

undefined8 FUN_108160fd0(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_108160ffc(&uStack_28);
  return param_1;
}



/* Entry: 108160ffc; end: 108161013;  */

void FUN_108160ffc(undefined8 *param_1)

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



/* Entry: 108161014; end: 10816101f;  */

void FUN_108161014(void)

{
  func_0x0001081612cc();
  func_0x00010816129c();
  func_0x000108161310();
  func_0x00010816120c();
  return;
}



/* Entry: 108161020; end: 1081610a3;  */

void FUN_108161020(void)

{
  func_0x00010816129c();
  func_0x000108161310();
  func_0x00010816120c();
  return;
}



/* Entry: 1081610a4; end: 1081610e3;  */

long * FUN_1081610a4(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0xc;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1081610e4; end: 108161133;  */

long * FUN_1081610e4(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if (param_2 < (long *)0x1555555555555556) {
    uVar1 = (param_1[2] - *param_1) / 0xc;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0xaaaaaaaaaaaaaa9 < uVar1) {
      plVar2 = (long *)0x1555555555555555;
    }
    return plVar2;
  }
  FUN_108161014();
  func_0x00010816129c();
  func_0x000108161310();
  func_0x00010816120c();
  return param_1;
}



/* Entry: 108161134; end: 1081611bb;  */

void FUN_108161134(void)

{
  func_0x00010816129c();
  func_0x000108161310();
  func_0x00010816120c();
  return;
}



/* Entry: 1081611bc; end: 1081611fb;  */

long * FUN_1081611bc(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x1c;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1081611fc; end: 1081611ff;  */

void FUN_1081611fc(float param_1,float param_2,float param_3,float param_4,undefined8 *param_5)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  
  fVar5 = 0.0;
  if (0.0 <= param_1) {
    fVar5 = param_1;
  }
  fVar4 = 1.0;
  if (fVar5 <= 1.0) {
    fVar4 = fVar5;
  }
  fVar5 = 0.0;
  if (0.0 <= param_3) {
    fVar5 = param_3;
  }
  fVar7 = 1.0;
  if (fVar5 <= 1.0) {
    fVar7 = fVar5;
  }
  uVar9 = NEON_fmov(0x40400000,4);
  fVar5 = fVar4 * (float)uVar9;
  fVar8 = (float)((ulong)uVar9 >> 0x20);
  fVar6 = param_2 * fVar8;
  fVar10 = ABS(fVar7 - param_4);
  fVar7 = fVar7 * (float)uVar9;
  param_4 = param_4 * fVar8;
  uVar9 = NEON_fmov(0x3f800000,4);
  fVar8 = (fVar7 - fVar5) - fVar5;
  param_5[1] = CONCAT44((param_4 - fVar6) - fVar6,fVar8);
  *param_5 = CONCAT44((fVar6 + (float)((ulong)uVar9 >> 0x20)) - param_4,
                      (fVar5 + (float)uVar9) - fVar7);
  param_5[2] = CONCAT44(fVar6,fVar5);
  *(undefined4 *)(param_5 + 3) = 2;
  bVar1 = false;
  bVar2 = true;
  if (ABS(fVar4 - param_2) <= 0.00024414062) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar10)) {
      bVar1 = fVar10 == 0.00024414062;
      bVar2 = 0.00024414062 <= fVar10;
    }
  }
  if (!bVar2 || bVar1) {
    uVar3 = 0;
  }
  else {
    if (1e-07 < ABS(fVar8)) {
      return;
    }
    if (1e-07 < ABS(fVar5)) {
      return;
    }
    uVar3 = 1;
  }
  *(undefined4 *)(param_5 + 3) = uVar3;
  return;
}



/* Entry: 108161200; end: 10816120b;  */

void FUN_108161200(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  func_0x0001081612cc();
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



/* Entry: 10816120c; end: 10816132f;  */

void FUN_10816120c(void)

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



/* Entry: 108161330; end: 10816146b;  */

long FUN_108161330(long param_1,long param_2,ulong *param_3,undefined8 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar4 = param_3;
  FUN_10815ca50();
  if (puVar4 != (ulong *)0x0) {
    *(undefined1 *)(param_1 + 0x29) = 1;
    uVar6 = *(undefined8 *)(param_2 + 0x48);
    if ((*puVar4 & 7) == 0) {
      pbVar5 = (byte *)((long)puVar4 + 1);
    }
    else {
      pbVar5 = (byte *)((*puVar4 & 0xfffffffffffffff8) + 8);
    }
    FUN_1083a3348(&ppuStack_a0,pbVar5);
    piVar1 = (int *)(param_1 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lStack_48 = param_1;
    FUN_10815d1d4(uVar6,&ppuStack_a0,param_4,&lStack_48);
    FUN_10815db6c(&lStack_48);
    FUN_1083a3ca0(ppuStack_a0);
  }
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_68 = 1;
  uStack_5c = 0;
  uStack_64 = 0;
  ppuStack_a0 = &PTR_FUN_110a28a48;
  uStack_50 = param_4;
  FUN_1081604c8(param_1,param_2,param_3,&ppuStack_a0);
  FUN_108160a4c(&ppuStack_a0);
  return param_1;
}



/* Entry: 10816146c; end: 10816146f;  */

undefined8 * FUN_10816146c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a289d8;
  FUN_108160fd0(param_1 + 4);
  FUN_108160f8c(param_1 + 1);
  return param_1;
}



/* Entry: 108161470; end: 108161483;  */

void FUN_108161470(void)

{
  FUN_108160a4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108161484; end: 10816157f;  */

void FUN_108161484(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar1 = param_2;
  FUN_108160a88();
  if ((uVar1 & 1) == 0) {
    *param_1 = 0;
  }
  else {
    puVar2 = (undefined8 *)0x58;
    __Znwm();
    uStack_40 = *(undefined8 *)(param_2 + 0x18);
    uStack_48 = *(undefined8 *)(param_2 + 0x10);
    uStack_50 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    uStack_60 = *(undefined8 *)(param_2 + 0x30);
    uStack_68 = *(undefined8 *)(param_2 + 0x28);
    uStack_70 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    uVar3 = *(undefined8 *)(param_2 + 0x50);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    func_0x000108161650();
    FUN_108160fd0(&uStack_70);
    FUN_108160f8c(&uStack_50);
    *puVar2 = &PTR_DAT_110a28aa0;
    puVar2[10] = uVar3;
    *param_1 = puVar2;
    FUN_108160fd0(&uStack_a0);
    FUN_108160f8c(&uStack_88);
  }
  return;
}



/* Entry: 108161580; end: 108161637;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_108161580(undefined8 *param_1,long param_2,long *param_3,undefined8 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long alStack_40 [2];
  
  (**(code **)(*param_3 + 0x18))(alStack_40,param_3,param_4);
  puVar4 = (undefined8 *)0x20;
  __Znwm();
  if (alStack_40[0] != 0) {
    piVar1 = (int *)(alStack_40[0] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar5 = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(puVar4 + 1) = 1;
  *puVar4 = &PTR_DAT_110a28ae8;
  alStack_40[1] = 0;
  puVar4[2] = alStack_40[0];
  puVar4[3] = uVar5;
  FUN_10816179c(alStack_40 + 1);
  *param_1 = puVar4;
  FUN_10816179c(alStack_40);
  return;
}



/* Entry: 108161638; end: 1081616b3;  */

bool FUN_108161638(long param_1,undefined8 param_2,ulong *param_3)

{
  undefined1 in_ZR;
  ulong *puVar1;
  ulong *puVar2;
  float *pfVar3;
  float fVar4;
  
  pfVar3 = *(float **)(param_1 + 0x50);
  do {
    puVar2 = param_3;
    puVar1 = puVar2;
    FUN_108155f00();
    if (puVar1 == (ulong *)0x0) break;
    param_3 = (ulong *)((long *)(*puVar1 & 0xfffffffffffffff8) + 1);
  } while (*(long *)(*puVar1 & 0xfffffffffffffff8) != 0);
  func_0x00010815c6f8();
  if (puVar2 != (ulong *)0x0) {
    func_0x00010815caa4();
    if ((bool)in_ZR) {
      fVar4 = (float)*(int *)((long)puVar2 + 4);
    }
    else {
      fVar4 = *(float *)((long)puVar2 + 4);
    }
    *pfVar3 = fVar4;
  }
  return puVar2 != (ulong *)0x0;
}



/* Entry: 1081616b4; end: 1081616c7;  */

void FUN_1081616b4(void)

{
  FUN_108160894();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081616c8; end: 108161753;  */

bool FUN_1081616c8(long param_1,float param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = param_1;
  FUN_1081608d0();
  fVar2 = (float)((ulong)lVar1 >> 0x20);
  fVar3 = **(float **)(param_1 + 0x50);
  fVar2 = fVar2 + (float)lVar1 * (param_2 - fVar2);
  **(float **)(param_1 + 0x50) = fVar2;
  return fVar2 != fVar3;
}



/* Entry: 108161754; end: 10816179b;  */

bool FUN_108161754(float param_1,long param_2)

{
  float fVar1;
  
  fVar1 = **(float **)(param_2 + 0x18);
  (**(code **)(**(long **)(param_2 + 0x10) + 0x18))();
  **(float **)(param_2 + 0x18) = param_1;
  return param_1 != fVar1;
}



/* Entry: 10816179c; end: 1081617eb;  */

long * FUN_10816179c(long *param_1)

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



/* Entry: 1081617ec; end: 1081617f7;  */

long * FUN_1081617ec(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
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
  return (long *)(param_1 + 0x10);
}



/* Entry: 1081617f8; end: 10816192b;  */

void FUN_1081617f8(undefined8 param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plStack_e0;
  undefined1 *puStack_d8;
  undefined1 auStack_d0 [136];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = param_2[1] - *param_2 >> 2;
  uVar6 = uVar8 / 6;
  func_0x00010837cf98(auStack_d0);
  if (5 < uVar8) {
    param_3 = (ulong)((int)uVar6 * 3 + 1);
    FUN_10816192c(auStack_d0);
    func_0x000108161934(*(undefined4 *)*param_2,((undefined4 *)*param_2)[1],auStack_d0);
  }
  plStack_e0 = param_2;
  puStack_d8 = auStack_d0;
  for (uVar7 = 1; iVar4 = (int)param_3, uVar7 < uVar6; uVar7 = uVar7 + 1) {
    param_3 = uVar7 - 1;
    func_0x000108161938(&plStack_e0,param_3,uVar7);
  }
  if ((5 < uVar8) && (*(float *)(param_2[1] + -4) != 0.0)) {
    lVar5 = uVar6 - 1;
    func_0x000108161938(&plStack_e0,lVar5,0);
    iVar4 = (int)lVar5;
    FUN_10837d20c(auStack_d0);
  }
  FUN_10837d48c(param_1,auStack_d0);
  puVar2 = auStack_d0;
  FUN_10837d00c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  FUN_10837d00c(auStack_d0);
  __Unwind_Resume();
  lVar5 = (long)*(int *)(puVar2 + 0x28) + (long)iVar4;
  if (lVar5 < -0x7ffffffe) {
    lVar5 = -0x7fffffff;
  }
  if (0x7ffffffe < lVar5) {
    lVar5 = 0x7fffffff;
  }
  FUN_10837c5b4(puVar2 + 0x20,lVar5);
  lVar5 = (long)*(int *)(puVar2 + 0x40) + (long)iVar4;
  if (lVar5 < -0x7ffffffe) {
    lVar5 = -0x7fffffff;
  }
  if (0x7ffffffe < lVar5) {
    lVar5 = 0x7fffffff;
  }
  uVar1 = (int)lVar5 - *(int *)(puVar2 + 0x40);
  uVar6 = (ulong)uVar1;
  if (uVar1 == 0 || (int)lVar5 < *(int *)(puVar2 + 0x40)) {
    return;
  }
  if ((int)uVar1 <= (int)((*(uint *)(puVar2 + 0x44) >> 1) - *(int *)(puVar2 + 0x40))) {
    return;
  }
  puVar3 = puVar2 + 0x38;
  FUN_1082f3938(0x3ff0000000000000);
  if (*(int *)(puVar2 + 0x40) != 0) {
    func_0x0001082f3a48(puVar2 + 0x38,puVar3);
  }
  if ((puVar2[0x44] & 1) != 0) {
    func_0x0001082f3a40();
  }
  if (0x7ffffffe < uVar6) {
    uVar6 = 0x7fffffff;
  }
  func_0x0001082f3a54(uVar6);
  return;
}



/* Entry: 10816192c; end: 108161997;  */

void FUN_10816192c(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = (long)*(int *)(param_1 + 0x28) + (long)param_2;
  if (lVar2 < -0x7ffffffe) {
    lVar2 = -0x7fffffff;
  }
  if (0x7ffffffe < lVar2) {
    lVar2 = 0x7fffffff;
  }
  FUN_10837c5b4(param_1 + 0x20,lVar2);
  lVar2 = (long)*(int *)(param_1 + 0x40) + (long)param_2;
  if (lVar2 < -0x7ffffffe) {
    lVar2 = -0x7fffffff;
  }
  if (0x7ffffffe < lVar2) {
    lVar2 = 0x7fffffff;
  }
  uVar1 = (int)lVar2 - *(int *)(param_1 + 0x40);
  uVar3 = (ulong)uVar1;
  if (uVar1 != 0 && *(int *)(param_1 + 0x40) <= (int)lVar2) {
    if ((int)((*(uint *)(param_1 + 0x44) >> 1) - *(int *)(param_1 + 0x40)) < (int)uVar1) {
      lVar2 = param_1 + 0x38;
      FUN_1082f3938(0x3ff0000000000000);
      if (*(int *)(param_1 + 0x40) != 0) {
        func_0x0001082f3a48(param_1 + 0x38,lVar2);
      }
      if ((*(byte *)(param_1 + 0x44) & 1) != 0) {
        func_0x0001082f3a40();
      }
      if (0x7ffffffe < uVar3) {
        uVar3 = 0x7fffffff;
      }
      func_0x0001082f3a54(uVar3);
      return;
    }
    return;
  }
  return;
}



/* Entry: 108161998; end: 108161a2b;  */

undefined8
FUN_108161998(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  code *pcStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  ppuStack_b0 = &PTR_FUN_110a28d00;
  pcStack_60 = FUN_108161a2c;
  pcStack_58 = FUN_108161a74;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_28 = param_4;
  FUN_1081604c8();
  FUN_108161ccc(&ppuStack_b0);
  return param_1;
}



/* Entry: 108161a2c; end: 108161a73;  */

void FUN_108161a2c(long param_1,ulong *param_2)

{
  long *extraout_x8;
  
  FUN_108161bb0();
  if (param_1 != 0) {
    func_0x000108161d00();
    FUN_108155f00();
    if (param_1 != 0) {
      func_0x000108161d14();
      *param_2 = *extraout_x8 * 6 | 1;
    }
  }
  return;
}



/* Entry: 108161a74; end: 108161baf;  */

void FUN_108161a74(ulong *param_1,ulong param_2,long param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  
  FUN_108161bb0();
  if (param_1 != (ulong *)0x0) {
    func_0x000108161d00();
    FUN_108155f00();
    puVar1 = param_1;
    func_0x000108161d0c();
    FUN_108155f00();
    puVar2 = puVar1;
    func_0x000108161d0c();
    FUN_108155f00();
    if ((param_1 != (ulong *)0x0) &&
       (param_2 == (*(long *)(*param_1 & 0xfffffffffffffff8) * 6 | 1U))) {
      uVar5 = 0;
      lVar6 = param_3;
      while (uVar3 = *param_1, uVar5 < *(ulong *)(uVar3 & 0xfffffffffffffff8)) {
        FUN_108161be8(uVar3,uVar5,lVar6,lVar6 + 4);
        if ((int)uVar3 == 0) {
          return;
        }
        puVar4 = puVar1;
        func_0x000108161c64(puVar1,uVar5,lVar6 + 8,lVar6 + 0xc);
        if ((int)puVar4 == 0) {
          return;
        }
        puVar4 = puVar2;
        func_0x000108161c64(puVar2,uVar5,lVar6 + 0x10,lVar6 + 0x14);
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x18;
        if (((ulong)puVar4 & 1) == 0) {
          return;
        }
      }
      func_0x000108161d0c(uVar3,&DAT_10f30a8b7);
      FUN_108158ab4();
      *(float *)(param_3 + param_2 * 4 + -4) = (float)(uVar3 & 0xffffffff);
    }
  }
  return;
}



/* Entry: 108161bb0; end: 108161be7;  */

long * FUN_108161bb0(long *param_1)

{
  long *plVar1;
  long *extraout_x8;
  long *plVar2;
  
  plVar1 = param_1;
  FUN_108155f00();
  plVar2 = param_1;
  if (plVar1 != (long *)0x0) {
    func_0x000108161d14();
    plVar2 = extraout_x8 + 1;
    if (*extraout_x8 != 1) {
      plVar2 = param_1;
    }
  }
  plVar1 = plVar2;
  FUN_10815545c();
  if ((int)plVar1 == 0) {
    plVar2 = (long *)0x0;
  }
  return plVar2;
}



/* Entry: 108161be8; end: 108161ccb;  */

bool FUN_108161be8(ulong param_1,long param_2,undefined8 param_3,float *param_4)

{
  undefined1 uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  long *plVar5;
  long *extraout_x8;
  float fVar6;
  
  puVar4 = (ulong *)((param_1 & 0xfffffffffffffff8) + param_2 * 8 + 8);
  FUN_108155f00();
  if (puVar4 != (ulong *)0x0) {
    func_0x000108161d14();
    uVar1 = *extraout_x8 == 2;
    if ((bool)uVar1) {
      plVar5 = extraout_x8 + 1;
      FUN_10815c694(plVar5,param_3);
      if ((int)plVar5 != 0) {
        puVar4 = (ulong *)((*puVar4 & 0xfffffffffffffff8) + 0x10);
        do {
          puVar3 = puVar4;
          puVar2 = puVar3;
          FUN_108155f00();
          if (puVar2 == (ulong *)0x0) break;
          puVar4 = (ulong *)((long *)(*puVar2 & 0xfffffffffffffff8) + 1);
        } while (*(long *)(*puVar2 & 0xfffffffffffffff8) != 0);
        func_0x00010815c6f8();
        if (puVar3 != (ulong *)0x0) {
          func_0x00010815caa4();
          if ((bool)uVar1) {
            fVar6 = (float)*(int *)((long)puVar3 + 4);
          }
          else {
            fVar6 = *(float *)((long)puVar3 + 4);
          }
          *param_4 = fVar6;
        }
        return puVar3 != (ulong *)0x0;
      }
    }
  }
  return false;
}



/* Entry: 108161ccc; end: 108161cf3;  */

undefined8 * FUN_108161ccc(undefined8 *param_1)

{
  func_0x0001056d1ce4(param_1 + 0xc);
  *param_1 = &PTR_DAT_110a289d8;
  FUN_108160fd0(param_1 + 4);
  FUN_108160f8c(param_1 + 1);
  return param_1;
}



/* Entry: 108161cf4; end: 108161d1f;  */

void FUN_108161cf4(void)

{
  return;
}



/* Entry: 108161d20; end: 108161d93;  */

undefined8
FUN_108161d20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  ppuStack_90 = &PTR_FUN_110a28b30;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = param_4;
  FUN_1081604c8();
  FUN_108161d94(&ppuStack_90);
  return param_1;
}



/* Entry: 108161d94; end: 108161db3;  */

void FUN_108161d94(void)

{
  undefined8 *unaff_x19;
  
  func_0x0001081629a8();
  *unaff_x19 = &PTR_DAT_110a289d8;
  FUN_108160fd0(unaff_x19 + 4);
  FUN_108160f8c(unaff_x19 + 1);
  return;
}



/* Entry: 108161db4; end: 108161dc7;  */

void FUN_108161db4(void)

{
  FUN_108161d94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108161dc8; end: 10816200b;  */

void FUN_108161dc8(undefined8 *param_1,ulong param_2,undefined8 param_3,ulong *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  plVar6 = (long *)(param_2 + 0x50);
  uVar5 = *(ulong *)(*param_4 & 0xfffffffffffffff8);
  plVar7 = (long *)(param_2 + 0x60);
  if ((ulong)((*plVar7 - *plVar6) / 0x78) < uVar5) {
    if (0x222222222222222 < uVar5) {
      uVar5 = param_2;
      FUN_10816227c();
      func_0x00010816295c();
      ___cxa_begin_catch(uVar5);
      ___cxa_end_catch();
      goto LAB_108161ec4;
    }
    FUN_1081623a0(&lStack_70,uVar5,(*(long *)(param_2 + 0x58) - *plVar6) / 0x78,plVar7);
    func_0x000108162984();
    func_0x00010816295c();
  }
  uVar5 = param_2;
  FUN_108160a88(param_2,param_3,param_4);
  if ((uVar5 & 1) == 0) {
    *param_1 = 0;
    return;
  }
  uVar5 = *(long *)(param_2 + 0x58) - *(long *)(param_2 + 0x50);
  if (uVar5 < (ulong)(*(long *)(param_2 + 0x60) - *(long *)(param_2 + 0x50))) {
    lVar2 = (long)uVar5 / 0x78;
    FUN_1081623a0(&lStack_70,lVar2,lVar2,plVar7);
    if ((ulong)(lStack_58 - lStack_70) < (ulong)(*plVar7 - *plVar6)) {
      func_0x000108162984();
    }
    func_0x00010816295c();
  }
LAB_108161ec4:
  puVar4 = (undefined8 *)0x70;
  __Znwm();
  uStack_60 = *(undefined8 *)(param_2 + 0x18);
  uStack_68 = *(undefined8 *)(param_2 + 0x10);
  lStack_70 = *(long *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  uStack_80 = *(undefined8 *)(param_2 + 0x30);
  uStack_88 = *(undefined8 *)(param_2 + 0x28);
  uStack_90 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  uStack_d8 = *(undefined8 *)(param_2 + 0x58);
  uStack_e0 = *(undefined8 *)(param_2 + 0x50);
  uStack_d0 = *(undefined8 *)(param_2 + 0x60);
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *plVar6 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  func_0x000108161650();
  FUN_108160fd0(&uStack_90);
  FUN_108160f8c(&lStack_70);
  uVar3 = uStack_d0;
  *puVar4 = &PTR_SUB_110a28b88;
  puVar4[0xb] = uStack_d8;
  puVar4[10] = uStack_e0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  puVar4[0xc] = uVar3;
  puVar4[0xd] = uVar1;
  *param_1 = puVar4;
  FUN_1081626b8(&uStack_e0);
  FUN_108160fd0(&uStack_c0);
  FUN_108160f8c(&uStack_a8);
  return;
}



/* Entry: 10816200c; end: 1081620bf;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10816200c(undefined8 *param_1,long param_2,long *param_3,undefined8 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long alStack_40 [2];
  
  (**(code **)(*param_3 + 0x20))(alStack_40,param_3,param_4);
  puVar4 = (undefined8 *)0x20;
  __Znwm();
  if (alStack_40[0] != 0) {
    piVar1 = (int *)(alStack_40[0] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar5 = *(undefined8 *)(param_2 + 0x68);
  *(undefined4 *)(puVar4 + 1) = 1;
  *puVar4 = &PTR_DAT_110a28bd0;
  alStack_40[1] = 0;
  puVar4[2] = alStack_40[0];
  puVar4[3] = uVar5;
  FUN_108162864(alStack_40 + 1);
  *param_1 = puVar4;
  FUN_108162864(alStack_40);
  return;
}



/* Entry: 1081620c0; end: 1081620cf;  */

void FUN_1081620c0(long param_1,ulong param_2,ulong *param_3)

{
  undefined1 uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined2 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar10;
  byte *pbVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  ulong uVar15;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  lVar7 = *(long *)(param_1 + 0x68);
  FUN_108154e4c();
  if (param_3 == (ulong *)0x0) {
    return;
  }
  FUN_108154b58();
  FUN_108158a5c();
  puVar2 = param_3;
  func_0x000108182b14();
  FUN_108158a5c();
  puVar3 = puVar2;
  func_0x000108182b14();
  func_0x00010815c6f8();
  puVar4 = puVar3;
  func_0x000108182b14();
  func_0x00010815c6f8();
  if (param_3 == (ulong *)0x0) {
    return;
  }
  if (puVar2 == (ulong *)0x0) {
    return;
  }
  if (puVar3 == (ulong *)0x0) {
    return;
  }
  if (puVar4 == (ulong *)0x0) {
    return;
  }
  if ((*param_3 & 7) == 0) {
    pbVar11 = (byte *)((long)param_3 + 1);
  }
  else {
    pbVar11 = (byte *)((*param_3 & 0xfffffffffffffff8) + 8);
  }
  FUN_108158a80(param_3);
  FUN_1083a3394(&uStack_68,pbVar11,param_3);
  lVar5 = param_2 + 0x98;
  FUN_108176d2c(lVar5,&uStack_68);
  FUN_1083a3ca0(CONCAT44(uStack_64,uStack_68));
  if (lVar5 == 0) {
    FUN_108159fb8(param_2,1,0,&UNK_10f47da4a);
    return;
  }
  if ((*puVar2 & 7) == 0) {
    pbVar11 = (byte *)((long)puVar2 + 1);
  }
  else {
    pbVar11 = (byte *)((*puVar2 & 0xfffffffffffffff8) + 8);
  }
  FUN_108158a80(puVar2);
  FUN_1083a36b8(lVar7 + 8,pbVar11,puVar2);
  if ((*puVar3 & 7) == 3) {
    fVar12 = (float)*(int *)((long)puVar3 + 4);
  }
  else {
    fVar12 = *(float *)((long)puVar3 + 4);
  }
  *(float *)(lVar7 + 0x10) = fVar12;
  if ((*puVar4 & 7) == 3) {
    fVar12 = (float)*(int *)((long)puVar4 + 4);
  }
  else {
    fVar12 = *(float *)((long)puVar4 + 4);
  }
  *(float *)(lVar7 + 0x20) = fVar12;
  func_0x000108162618(lVar7,lVar5 + 0x20);
  uVar6 = lVar7 + 0x70;
  func_0x0001083a34dc(uVar6,lVar5);
  fVar12 = *(float *)(lVar5 + 0x18) * -0.01 * *(float *)(lVar7 + 0x10);
  uVar15 = (ulong)(uint)fVar12;
  *(float *)(lVar7 + 0x28) = fVar12;
  func_0x000108182b14();
  uStack_68 = 0;
  func_0x000108182b34();
  *(int *)(lVar7 + 0x24) = (int)uVar15;
  func_0x000108182b14();
  func_0x000108182b08();
  uVar1 = uVar6 == 2;
  uVar10 = uVar6;
  if (1 < uVar6) {
    uVar10 = 2;
  }
  *(undefined4 *)(lVar7 + 0x38) = *(undefined4 *)(&UNK_10df06ce0 + uVar10 * 4);
  func_0x000108182b14();
  FUN_108155f00();
  uVar10 = uVar15;
  if ((uVar6 != 0) && (func_0x000108182b3c(), uVar10 = uVar15, (bool)uVar1)) {
    uStack_68 = 0;
    uVar6 = extraout_x8 + 8;
    func_0x000108182b34();
    uVar10 = uVar15;
    func_0x000108182b1c();
    *(undefined4 *)(lVar7 + 0x44) = 0;
    *(undefined4 *)(lVar7 + 0x48) = 0;
    *(int *)(lVar7 + 0x4c) = (int)uVar15;
    *(int *)(lVar7 + 0x50) = (int)uVar10;
  }
  func_0x000108182b14();
  FUN_108155f00();
  if (uVar6 != 0) {
    func_0x000108182b3c();
    fVar12 = (float)uVar10;
    if ((bool)uVar1) {
      uStack_68 = 0;
      uVar6 = extraout_x8_00 + 8;
      func_0x000108182b34();
      fVar13 = fVar12;
      func_0x000108182b1c();
      uVar10 = CONCAT44(fVar13 + (float)((ulong)*(undefined8 *)(lVar7 + 0x44) >> 0x20),
                        fVar12 + (float)*(undefined8 *)(lVar7 + 0x44));
      *(ulong *)(lVar7 + 0x4c) =
           CONCAT44(fVar13 + (float)((ulong)*(undefined8 *)(lVar7 + 0x4c) >> 0x20),
                    fVar12 + (float)*(undefined8 *)(lVar7 + 0x4c));
      *(ulong *)(lVar7 + 0x44) = uVar10;
    }
  }
  uVar14 = (undefined4)uVar10;
  func_0x000108182b14();
  func_0x000108182b08();
  puVar8 = &UNK_10df06cec;
  if (uVar6 != 0) {
    puVar8 = &UNK_10df06ced;
  }
  *(undefined *)(lVar7 + 0x3f) = *puVar8;
  func_0x000108182b14();
  func_0x000108182b08();
  uVar10 = uVar6;
  func_0x000108182b14();
  FUN_108154b1c();
  if (uVar6 <= uVar10) {
    uVar6 = uVar10;
  }
  if (1 < uVar6) {
    uVar6 = 2;
  }
  *(undefined *)(lVar7 + 0x3d) = (&UNK_10df06cfe)[uVar6];
  func_0x000108182b14();
  uStack_68 = 0;
  func_0x000108182b34();
  *(undefined4 *)(lVar7 + 0x14) = uVar14;
  func_0x000108182b14();
  uStack_68 = 0x7f7fffff;
  func_0x000108182b34();
  *(undefined4 *)(lVar7 + 0x18) = uVar14;
  func_0x000108182b14();
  func_0x000108182b08();
  *(ulong *)(lVar7 + 0x30) = uVar10;
  if (*(float *)(lVar7 + 0x4c) <= *(float *)(lVar7 + 0x44)) {
    uVar1 = 1;
  }
  else {
    func_0x000108182b54();
    uVar1 = extraout_w8;
  }
  *(undefined1 *)(lVar7 + 0x3e) = uVar1;
  func_0x000108182b14();
  uStack_68 = 0xffffffff;
  func_0x000108155f24();
  if (-1 < (int)uVar10) {
    *(bool *)(lVar7 + 0x3e) = (int)uVar10 == 0;
  }
  func_0x000108182b14();
  func_0x000108182b08();
  *(undefined4 *)(lVar7 + 0x40) = *(undefined4 *)(&UNK_10df06cf0 + (ulong)(uVar10 != 0) * 4);
  fVar12 = *(float *)(lVar7 + 0x44);
  if (*(float *)(lVar7 + 0x4c) <= fVar12) {
    uVar1 = 1;
  }
  else {
    func_0x000108182b54();
    uVar1 = extraout_w8_00;
  }
  *(undefined1 *)(lVar7 + 0x3c) = uVar1;
  func_0x000108182b14();
  func_0x00010815c80c();
  if ((int)uVar10 == 0) {
    func_0x000108182b14();
    func_0x00010815c80c();
    if ((int)uVar10 == 0) goto LAB_108182954;
    uVar6 = CONCAT44(uStack_64,uStack_68);
    if (2 < uVar6) {
      if (uVar6 == 3) {
        uVar9 = 0x103;
      }
      else {
        if (uVar6 != 4) {
          puVar8 = &UNK_10f47daa3;
          goto LAB_10818290c;
        }
        uVar9 = 0x203;
      }
      *(undefined2 *)(lVar7 + 0x3c) = uVar9;
      goto LAB_108182954;
    }
  }
  else {
    uVar6 = CONCAT44(uStack_64,uStack_68);
    if (5 < uVar6) {
      puVar8 = &UNK_10f47da7c;
LAB_10818290c:
      FUN_108159fb8(param_2,0,0,puVar8);
      uVar10 = param_2;
      goto LAB_108182954;
    }
  }
  *(undefined *)(lVar7 + 0x3c) = (&UNK_10df06cf8)[uVar6];
LAB_108182954:
  func_0x000108182b14();
  FUN_108155f00();
  FUN_108182a94();
  *(char *)(lVar7 + 0x5e) = (char)uVar10;
  func_0x000108182b14();
  FUN_108155f00();
  FUN_108182a94();
  *(char *)(lVar7 + 0x5f) = (char)uVar10;
  if ((int)uVar10 != 0) {
    func_0x000108182b14();
    FUN_1081572c0();
    *(float *)(lVar7 + 0x1c) = fVar12;
    func_0x000108182b14();
    FUN_108158ab4();
    *(byte *)(lVar7 + 0x5c) = (byte)uVar10 ^ 1;
    func_0x000108182b14();
    FUN_108154b1c();
    uVar10 = uVar10 - 1;
    if (1 < uVar10) {
      uVar10 = 2;
    }
    *(undefined *)(lVar7 + 0x5d) = (&UNK_10df06cfe)[uVar10];
  }
  return;
}



/* Entry: 1081620d0; end: 10816227b;  */

ulong FUN_1081620d0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,int *param_5)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c4;
  undefined8 uStack_bc;
  undefined6 uStack_b0;
  undefined2 uStack_aa;
  undefined6 uStack_a8;
  undefined1 uStack_a2;
  undefined8 uStack_a1;
  undefined8 uStack_99;
  undefined8 uStack_91;
  undefined1 uStack_89;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  iVar3 = (int)&uStack_e0;
  uStack_e0 = 0;
  uStack_d8 = 0x1138270b0;
  uStack_d0 = 0;
  uStack_c8 = 0x7f7fffff;
  uStack_bc = 0;
  uStack_c4 = 0;
  uStack_b0 = 0;
  uStack_aa = 0;
  uStack_a8 = 0;
  uStack_a2 = 1;
  uStack_99 = 0;
  uStack_a1 = 0;
  uStack_89 = 0;
  uStack_91 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_81 = 0;
  uStack_78 = 0x1138270b0;
  uStack_70 = 0x1138270b0;
  FUN_108182508(param_4,param_2,&uStack_e0);
  if ((param_4 & 1) == 0) goto LAB_108162230;
  puVar5 = (ulong *)(param_1 + 0x50);
  uVar6 = *(ulong *)(param_1 + 0x58);
  if (*puVar5 == uVar6) {
LAB_10816216c:
    if (uVar6 < *(ulong *)(param_1 + 0x60)) {
      FUN_1081628f8(uVar6,&uStack_e0);
      uVar6 = uVar6 + 0x78;
      *(ulong *)(param_1 + 0x58) = uVar6;
    }
    else {
      uVar6 = (long)(uVar6 - *puVar5) / 0x78 + 1;
      if (0x222222222222222 < uVar6) {
        FUN_10816227c();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10816225c);
        (*pcVar2)();
      }
      uVar1 = (long)(*(ulong *)(param_1 + 0x60) - *puVar5) / 0x78;
      uVar4 = uVar1 * 2;
      if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
        uVar4 = uVar6;
      }
      if (0x111111111111110 < uVar1) {
        uVar4 = 0x222222222222222;
      }
      FUN_1081623a0(auStack_68,uVar4);
      FUN_1081628f8(lStack_58,&uStack_e0);
      lStack_58 = lStack_58 + 0x78;
      FUN_108162290(puVar5,auStack_68);
      uVar6 = *(ulong *)(param_1 + 0x58);
      func_0x0001081624e4(auStack_68);
    }
    *(ulong *)(param_1 + 0x58) = uVar6;
  }
  else {
    FUN_10815ccb4(&uStack_e0,uVar6 - 0x78);
    uVar6 = *(ulong *)(param_1 + 0x58);
    if (iVar3 != 0) goto LAB_10816216c;
  }
  *param_5 = (int)((long)(uVar6 - *puVar5) / 0x78) + -1;
LAB_108162230:
  FUN_108162460(&uStack_e0);
  return param_4;
}



/* Entry: 10816227c; end: 10816228f;  */

void FUN_10816227c(undefined8 param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined1 uStack_68;
  long lStack_60;
  long lStack_58;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  func_0x0001081629b4();
  lVar4 = *plVar2;
  lVar1 = plVar2[1];
  lVar6 = *(long *)(param_2 + 8) + ((lVar1 - lVar4) / -0x78) * 0x78;
  plStack_80 = plVar2 + 2;
  plStack_78 = &lStack_60;
  plStack_70 = &lStack_58;
  uStack_68 = 0;
  lStack_58 = lVar6;
  lStack_60 = lVar6;
  for (lVar5 = lVar4; lVar5 != lVar1; lVar5 = lVar5 + 0x78) {
    FUN_10815cccc(lStack_58,lVar5);
    lStack_58 = lStack_58 + 0x78;
  }
  uStack_68 = 1;
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0x78) {
    FUN_108162460(lVar4);
  }
  func_0x0001081624a0(&plStack_80);
  unaff_x19[1] = lVar6;
  uVar3 = *unaff_x20;
  unaff_x20[1] = uVar3;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar3;
  uVar3 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar3;
  uVar3 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar3;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 108162290; end: 10816239f;  */

void FUN_108162290(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x0001081629b4();
  lVar3 = *param_1;
  lVar1 = param_1[1];
  lVar5 = *(long *)(param_2 + 8) + ((lVar1 - lVar3) / -0x78) * 0x78;
  plStack_70 = param_1 + 2;
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_58 = 0;
  lStack_48 = lVar5;
  lStack_50 = lVar5;
  for (lVar4 = lVar3; lVar4 != lVar1; lVar4 = lVar4 + 0x78) {
    FUN_10815cccc(lStack_48,lVar4);
    lStack_48 = lStack_48 + 0x78;
  }
  uStack_58 = 1;
  for (; lVar3 != lVar1; lVar3 = lVar3 + 0x78) {
    FUN_108162460(lVar3);
  }
  func_0x0001081624a0(&plStack_70);
  unaff_x19[1] = lVar5;
  uVar2 = *unaff_x20;
  unaff_x20[1] = uVar2;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar2;
  uVar2 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar2;
  uVar2 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar2;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 1081623a0; end: 108162417;  */

long * FUN_1081623a0(long *param_1,ulong param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar5 = 0;
  }
  else {
    if (0x222222222222222 < param_2) {
      func_0x000104bd35f4();
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
                    /* WARNING: Could not recover jumptable at 0x000108162998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x10))();
          return param_1;
        }
      }
      return param_1;
    }
    lVar5 = param_2 * 0x78;
    __Znwm();
  }
  lVar6 = lVar5 + param_3 * 0x78;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  param_1[2] = lVar6;
  param_1[3] = lVar5 + param_2 * 0x78;
  return param_1;
}



/* Entry: 108162418; end: 10816245f;  */

void FUN_108162418(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000108162998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108162460; end: 10816254b;  */

long * FUN_108162460(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  FUN_1083a3c7c(param_1 + 0xe);
  FUN_1083a3c7c(param_1 + 0xd);
  FUN_10815cda0(param_1 + 0xc);
  FUN_1083a3c7c(param_1 + 1);
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



/* Entry: 10816254c; end: 10816255f;  */

void FUN_10816254c(void)

{
  func_0x00010816252c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108162560; end: 1081625c3;  */

undefined8 FUN_108162560(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  FUN_1081608d0();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  FUN_10815ccb4(uVar2,*(long *)(param_1 + 0x50) + (uVar1 >> 0x20) * 0x78);
  if ((int)uVar2 != 0) {
    FUN_1081625c4(*(undefined8 *)(param_1 + 0x68),*(long *)(param_1 + 0x50) + (uVar1 >> 0x20) * 0x78
                 );
  }
  return uVar2;
}



/* Entry: 1081625c4; end: 108162697;  */

void FUN_1081625c4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001081629b4();
  func_0x000108162618();
  func_0x0001083a34dc(unaff_x20 + 8,unaff_x19 + 8);
  func_0x000108162964();
  func_0x000108162658(unaff_x20 + 0x60,unaff_x19 + 0x60);
  func_0x0001083a34dc(unaff_x20 + 0x68,unaff_x19 + 0x68);
  func_0x0001083a34dc(unaff_x20 + 0x70,unaff_x19 + 0x70);
  return;
}



/* Entry: 108162698; end: 1081626b7;  */

void FUN_108162698(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  *param_1 = param_2;
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
                    /* WARNING: Could not recover jumptable at 0x000108162998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 1081626b8; end: 10816272b;  */

undefined8 FUN_1081626b8(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x0001081626ec(&uStack_28);
  return param_1;
}



/* Entry: 10816272c; end: 108162733;  */

void FUN_10816272c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001081629b4(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x78;
    FUN_108162460();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108162734; end: 1081627a7;  */

void FUN_108162734(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001081629b4();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x78;
    FUN_108162460();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1081627a8; end: 108162863;  */

uint FUN_1081627a8(long param_1)

{
  long lVar1;
  int extraout_w10;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 8);
  if (lVar2 != 0 && lVar2 != 0x1138270b0) {
    do {
      func_0x000108162974();
    } while (extraout_w10 != 0);
  }
  lStack_28 = lVar2;
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))(&lStack_30);
  lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 8);
  if (lVar1 != lStack_30) {
    *(long *)(*(long *)(param_1 + 0x18) + 8) = lStack_30;
    lStack_30 = lVar1;
  }
  FUN_1083a3ca0(lStack_30);
  lVar1 = *(long *)(param_1 + 0x18) + 8;
  FUN_1083a3440(lVar1,&lStack_28);
  FUN_1083a3ca0(lVar2);
  return (uint)lVar1 ^ 1;
}



/* Entry: 108162864; end: 1081628af;  */

long * FUN_108162864(long *param_1)

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



/* Entry: 1081628b0; end: 1081628f7;  */

void FUN_1081628b0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0x1138270b0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0x7f7fffff;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  param_1[6] = 0;
  *(undefined8 *)((long)param_1 + 0x36) = 0;
  *(undefined1 *)((long)param_1 + 0x3e) = 1;
  *(undefined8 *)((long)param_1 + 0x47) = 0;
  *(undefined8 *)((long)param_1 + 0x3f) = 0;
  *(undefined8 *)((long)param_1 + 0x57) = 0;
  *(undefined8 *)((long)param_1 + 0x4f) = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0x1138270b0;
  param_1[0xe] = 0x1138270b0;
  return;
}



/* Entry: 1081628f8; end: 10816294b;  */

void FUN_1081628f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001081629b4();
  uVar1 = *param_2;
  *param_2 = 0;
  *param_1 = uVar1;
  FUN_1083a33c4(param_1 + 1,param_2 + 1);
  func_0x000108162964();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x60);
  *(undefined8 *)(unaff_x19 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = uVar1;
  FUN_1083a33c4(unaff_x20 + 0x68,unaff_x19 + 0x68);
  FUN_1083a33c4(unaff_x20 + 0x70,unaff_x19 + 0x70);
  return;
}



/* Entry: 10816294c; end: 1081629bf;  */

void FUN_10816294c(void)

{
  return;
}



/* Entry: 1081629c0; end: 108162b77;  */

uint FUN_1081629c0(long param_1,long param_2,ulong *param_3,long param_4,undefined8 param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined **ppuStack_d8;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  long lStack_48;
  
  if (param_3 == (ulong *)0x0) {
    uVar9 = 0;
  }
  else {
    puVar4 = param_3;
    FUN_10815ca50();
    ppuVar5 = (undefined **)0x0;
    if (puVar4 != (ulong *)0x0) {
      *(undefined1 *)(param_1 + 0x29) = 1;
      uVar10 = *(undefined8 *)(param_2 + 0x48);
      if ((*puVar4 & 7) == 0) {
        pbVar8 = (byte *)((long)puVar4 + 1);
      }
      else {
        pbVar8 = (byte *)((*puVar4 & 0xfffffffffffffff8) + 8);
      }
      FUN_1083a3348(&ppuStack_d8,pbVar8);
      piVar1 = (int *)(param_1 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lStack_48 = param_1;
      FUN_10815d2dc(uVar10,&ppuStack_d8,param_4,&lStack_48);
      FUN_10815db6c(&lStack_48);
      ppuVar5 = ppuStack_d8;
      FUN_1083a3ca0();
    }
    func_0x0001081637a4();
    ppuStack_d8 = (undefined **)((ulong)ppuStack_d8 & 0xffffffffffffff00);
    FUN_108158ab4();
    if (((ulong)ppuVar5 & 1) == 0) {
      uStack_90 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      ppuStack_d8 = &PTR_FUN_110a28c18;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      lStack_70 = param_4;
      uStack_68 = param_5;
      FUN_1081604c8(param_1,param_2,param_3,&ppuStack_d8);
      uVar9 = (uint)param_1;
      FUN_108162b78(&ppuStack_d8);
    }
    else {
      func_0x0001081637a4();
      FUN_108154e4c();
      lVar6 = param_1;
      FUN_108161330(param_1,param_2,ppuVar5,param_4);
      lVar7 = lVar6;
      func_0x0001081637a4();
      FUN_108154e4c();
      FUN_108161330(param_1,param_2,lVar7,param_4 + 4);
      uVar9 = (uint)lVar6 | (uint)param_1;
    }
  }
  return uVar9 & 1;
}



/* Entry: 108162b78; end: 108162b97;  */

void FUN_108162b78(void)

{
  undefined8 *unaff_x19;
  
  func_0x0001081637c0();
  *unaff_x19 = &PTR_DAT_110a289d8;
  FUN_108160fd0(unaff_x19 + 4);
  FUN_108160f8c(unaff_x19 + 1);
  return;
}



/* Entry: 108162b98; end: 108162b9f;  */

uint FUN_108162b98(long param_1,long param_2,ulong *param_3,long param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined **ppuStack_d8;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  long lStack_48;
  
  if (param_3 == (ulong *)0x0) {
    uVar9 = 0;
  }
  else {
    puVar4 = param_3;
    FUN_10815ca50();
    ppuVar5 = (undefined **)0x0;
    if (puVar4 != (ulong *)0x0) {
      *(undefined1 *)(param_1 + 0x29) = 1;
      uVar10 = *(undefined8 *)(param_2 + 0x48);
      if ((*puVar4 & 7) == 0) {
        pbVar8 = (byte *)((long)puVar4 + 1);
      }
      else {
        pbVar8 = (byte *)((*puVar4 & 0xfffffffffffffff8) + 8);
      }
      FUN_1083a3348(&ppuStack_d8,pbVar8);
      piVar1 = (int *)(param_1 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lStack_48 = param_1;
      FUN_10815d2dc(uVar10,&ppuStack_d8,param_4,&lStack_48);
      FUN_10815db6c(&lStack_48);
      ppuVar5 = ppuStack_d8;
      FUN_1083a3ca0();
    }
    func_0x0001081637a4();
    ppuStack_d8 = (undefined **)((ulong)ppuStack_d8 & 0xffffffffffffff00);
    FUN_108158ab4();
    if (((ulong)ppuVar5 & 1) == 0) {
      uStack_90 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      ppuStack_d8 = &PTR_FUN_110a28c18;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_68 = 0;
      uStack_50 = 0;
      lStack_70 = param_4;
      FUN_1081604c8(param_1,param_2,param_3,&ppuStack_d8);
      uVar9 = (uint)param_1;
      FUN_108162b78(&ppuStack_d8);
    }
    else {
      func_0x0001081637a4();
      FUN_108154e4c();
      lVar6 = param_1;
      FUN_108161330(param_1,param_2,ppuVar5,param_4);
      lVar7 = lVar6;
      func_0x0001081637a4();
      FUN_108154e4c();
      FUN_108161330(param_1,param_2,lVar7,param_4 + 4);
      uVar9 = (uint)lVar6 | (uint)param_1;
    }
  }
  return uVar9 & 1;
}



/* Entry: 108162ba0; end: 108162bb3;  */

void FUN_108162ba0(void)

{
  FUN_108162b78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108162bb4; end: 108162dcf;  */

void FUN_108162bb4(undefined8 *param_1,ulong param_2,undefined8 param_3,ulong *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  plVar6 = (long *)(param_2 + 0x50);
  uVar4 = *(ulong *)(*param_4 & 0xfffffffffffffff8);
  plVar7 = (long *)(param_2 + 0x60);
  if ((ulong)(*plVar7 - *plVar6 >> 4) < uVar4) {
    if (uVar4 >> 0x3c != 0) {
      FUN_10816322c();
      ___cxa_begin_catch();
      ___cxa_end_catch();
      goto LAB_108162ca0;
    }
    FUN_108163240(&lStack_a0,uVar4,*(long *)(param_2 + 0x58) - *plVar6 >> 4,plVar7);
    func_0x0001081637e0();
    FUN_108163368(&lStack_a0);
  }
  uVar4 = param_2;
  FUN_108160a88(param_2,param_3,param_4);
  if ((uVar4 & 1) == 0) {
    *param_1 = 0;
    return;
  }
  uVar4 = *(long *)(param_2 + 0x58) - *(long *)(param_2 + 0x50);
  if (uVar4 < (ulong)(*(long *)(param_2 + 0x60) - *(long *)(param_2 + 0x50))) {
    lVar5 = (long)uVar4 >> 4;
    FUN_108163240(&lStack_a0,lVar5,lVar5,plVar7);
    if ((ulong)(lStack_88 - lStack_a0) < (ulong)(*plVar7 - *plVar6)) {
      func_0x0001081637e0();
    }
    FUN_108163368(&lStack_a0);
  }
LAB_108162ca0:
  puVar3 = (undefined8 *)0x78;
  __Znwm();
  uStack_90 = *(undefined8 *)(param_2 + 0x18);
  uStack_98 = *(undefined8 *)(param_2 + 0x10);
  lStack_a0 = *(long *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  uVar8 = *(undefined8 *)(param_2 + 0x60);
  uStack_d0 = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *plVar6 = 0;
  uVar10 = *(undefined8 *)(param_2 + 0x70);
  uVar9 = *(undefined8 *)(param_2 + 0x68);
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_e8 = uVar1;
  uStack_e0 = uVar2;
  uStack_d8 = uVar8;
  func_0x000108161650();
  FUN_108160fd0(&uStack_70);
  FUN_108160f8c(&lStack_a0);
  *puVar3 = &PTR_FUN_110a28c70;
  puVar3[10] = uVar1;
  puVar3[0xb] = uVar2;
  puVar3[0xc] = uVar8;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_e8 = 0;
  puVar3[0xe] = uVar10;
  puVar3[0xd] = uVar9;
  *param_1 = puVar3;
  FUN_1081631d8(&uStack_e8);
  FUN_108160fd0(&uStack_d0);
  FUN_108160f8c(&uStack_b8);
  return;
}



/* Entry: 108162dd0; end: 108162e83;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_108162dd0(undefined8 *param_1,long param_2,long *param_3,undefined8 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long alStack_40 [2];
  
  (**(code **)(*param_3 + 0x28))(alStack_40,param_3,param_4);
  puVar4 = (undefined8 *)0x20;
  __Znwm();
  if (alStack_40[0] != 0) {
    piVar1 = (int *)(alStack_40[0] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar5 = *(undefined8 *)(param_2 + 0x68);
  *(undefined4 *)(puVar4 + 1) = 1;
  *puVar4 = &PTR_DAT_110a28cb8;
  alStack_40[1] = 0;
  puVar4[2] = alStack_40[0];
  puVar4[3] = uVar5;
  FUN_1081636b0(alStack_40 + 1);
  *param_1 = puVar4;
  FUN_1081636b0(alStack_40);
  return;
}



/* Entry: 108162e84; end: 108162e8f;  */

bool FUN_108162e84(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  undefined1 uVar2;
  int iVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  long unaff_x19;
  ulong *unaff_x20;
  float fVar7;
  
  func_0x00010815cab4(param_3,*(undefined8 *)(param_1 + 0x68));
  if ((int)param_3 != 0) {
    uVar6 = *(ulong *)(*unaff_x20 & 0xfffffffffffffff8);
    uVar2 = uVar6 == 2;
    if (1 < uVar6) {
      iVar3 = (int)(ulong *)(*unaff_x20 & 0xfffffffffffffff8) + 8;
      FUN_10815c694();
      if (iVar3 != 0) {
        puVar1 = (ulong *)((*unaff_x20 & 0xfffffffffffffff8) + 0x10);
        do {
          puVar5 = puVar1;
          puVar4 = puVar5;
          FUN_108155f00();
          if (puVar4 == (ulong *)0x0) break;
          puVar1 = (ulong *)((long *)(*puVar4 & 0xfffffffffffffff8) + 1);
        } while (*(long *)(*puVar4 & 0xfffffffffffffff8) != 0);
        func_0x00010815c6f8();
        if (puVar5 != (ulong *)0x0) {
          func_0x00010815caa4();
          if ((bool)uVar2) {
            fVar7 = (float)*(int *)((long)puVar5 + 4);
          }
          else {
            fVar7 = *(float *)((long)puVar5 + 4);
          }
          *(float *)(unaff_x19 + 4) = fVar7;
        }
        return puVar5 != (ulong *)0x0;
      }
    }
  }
  return false;
}



/* Entry: 108162e90; end: 1081631d7;  */

ulong FUN_108162e90(float param_1,float param_2,long param_3,undefined8 param_4,undefined8 param_5,
                   ulong param_6,int *param_7)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  float fStack_130;
  float fStack_12c;
  undefined8 uStack_128;
  undefined8 auStack_120 [2];
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  undefined1 auStack_100 [16];
  undefined8 *puStack_f0;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_128 = 0;
  FUN_10815c8f0(param_6,&fStack_130);
  fVar2 = fStack_12c;
  fVar1 = fStack_130;
  if ((param_6 & 1) != 0) {
    if (*(char *)(param_3 + 0x88) == '\x01') {
      lVar10 = *(long *)(param_3 + 0x58);
      fVar12 = *(float *)(lVar10 + -0x10);
      fVar13 = *(float *)(lVar10 + -0xc);
      bVar5 = false;
      if ((fStack_130 == fVar12) && (bVar5 = false, !NAN(fStack_12c) && !NAN(fVar13))) {
        bVar5 = fStack_12c == fVar13;
      }
      if (!bVar5) {
        uVar6 = param_6;
        FUN_108163740(fStack_130 - fVar12,fStack_12c - fVar13,*(undefined4 *)(param_3 + 0x80),
                      *(undefined4 *)(param_3 + 0x84));
        if ((int)uVar6 != 0) {
          param_1 = fVar12 - fVar1;
          param_2 = fVar13 - fVar2;
          FUN_108163740(param_1,param_2,*(undefined4 *)(param_3 + 0x78),
                        *(undefined4 *)(param_3 + 0x7c));
          if ((uVar6 & 1) != 0) goto LAB_108162fd0;
        }
        func_0x00010837cf98(auStack_100);
        func_0x000108161934(*(undefined4 *)(lVar10 + -0x10),*(undefined4 *)(lVar10 + -0xc),
                            auStack_100);
        param_2 = *(float *)(lVar10 + -0xc) + *(float *)(param_3 + 0x84);
        func_0x000108163788(*(float *)(lVar10 + -0x10) + *(float *)(param_3 + 0x80),param_2,
                            fStack_130 + *(float *)(param_3 + 0x78),
                            fStack_12c + *(float *)(param_3 + 0x7c),auStack_100);
        FUN_10837d48c(auStack_120,auStack_100);
        param_1 = 1.0;
        FUN_108345058(auStack_110,auStack_120,0);
        FUN_108345194(&uStack_108,auStack_110);
        uVar3 = uStack_108;
        uStack_108 = 0;
        func_0x00010816378c(lVar10 + -8,uVar3);
        func_0x0001081428c0(&uStack_108);
        FUN_1083456f8(auStack_110);
        FUN_10837ca5c(auStack_120[0]);
        FUN_10837d00c(auStack_100);
      }
    }
LAB_108162fd0:
    FUN_108154b58(param_5,&DAT_10f47d2f0);
    FUN_1081636fc();
    *(float *)(param_3 + 0x78) = param_1;
    *(float *)(param_3 + 0x7c) = param_2;
    FUN_108154b58(param_5,"to");
    FUN_1081636fc();
    uVar3 = uStack_128;
    *(float *)(param_3 + 0x80) = param_1;
    *(float *)(param_3 + 0x84) = param_2;
    if (*(float *)(param_3 + 0x78) == 0.0) {
      bVar5 = param_2 != 0.0 || (param_1 != 0.0 || *(float *)(param_3 + 0x7c) != 0.0);
    }
    else {
      bVar5 = true;
    }
    puVar7 = *(undefined8 **)(param_3 + 0x50);
    *(bool *)(param_3 + 0x88) = bVar5;
    puVar11 = *(undefined8 **)(param_3 + 0x58);
    if ((puVar7 == puVar11) ||
       ((bool)((fStack_12c != *(float *)((long)puVar11 + -0xc) ||
               fStack_130 != *(float *)(puVar11 + -2)) | bVar5))) {
      if (puVar11 < *(undefined8 **)(param_3 + 0x60)) {
        *puVar11 = CONCAT44(fStack_12c,fStack_130);
        uStack_128 = 0;
        puVar11[1] = uVar3;
        puVar11 = puVar11 + 2;
      }
      else {
        uVar6 = ((long)puVar11 - (long)puVar7 >> 4) + 1;
        if (uVar6 >> 0x3c != 0) goto LAB_108163170;
        uVar8 = (long)*(undefined8 **)(param_3 + 0x60) - (long)puVar7;
        uVar9 = (long)uVar8 >> 3;
        if (uVar9 <= uVar6) {
          uVar9 = uVar6;
        }
        if (0x7fffffffffffffef < uVar8) {
          uVar9 = 0xfffffffffffffff;
        }
        FUN_108163240(auStack_100,uVar9);
        uVar3 = uStack_128;
        *puStack_f0 = CONCAT44(fStack_12c,fStack_130);
        uStack_128 = 0;
        puStack_f0[1] = uVar3;
        puStack_f0 = puStack_f0 + 2;
        FUN_10816329c((undefined8 *)(param_3 + 0x50),auStack_100);
        puVar11 = *(undefined8 **)(param_3 + 0x58);
        FUN_108163368(auStack_100);
      }
      *(undefined8 **)(param_3 + 0x58) = puVar11;
      puVar7 = *(undefined8 **)(param_3 + 0x50);
    }
    *param_7 = (int)((ulong)((long)puVar11 - (long)puVar7) >> 4) + -1;
  }
  func_0x0001081637d8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return param_6;
  }
  ___stack_chk_fail();
LAB_108163170:
  FUN_10816322c();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x108163178);
  (*pcVar4)();
}



/* Entry: 1081631d8; end: 10816322b;  */

long * FUN_1081631d8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    for (lVar1 = param_1[1]; lVar1 != lVar2; lVar1 = lVar1 + -0x10) {
      func_0x0001081428c0(lVar1 + -8);
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10816322c; end: 10816323f;  */

long * FUN_10816322c(undefined8 param_1,undefined8 *param_2,long param_3,long param_4)

{
  int *piVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  plVar7 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  plVar7[3] = 0;
  plVar7[4] = param_4;
  if (param_2 == (undefined8 *)0x0) {
    lVar8 = 0;
  }
  else {
    if ((ulong)param_2 >> 0x3c != 0) {
      func_0x000104bd35f4();
      puVar12 = (undefined8 *)*plVar7;
      puVar4 = (undefined8 *)plVar7[1];
      puVar3 = (undefined8 *)((long)puVar12 + (param_2[1] - (long)puVar4));
      puVar10 = puVar3;
      for (puVar11 = puVar12; plVar9 = plVar7, puVar11 != puVar4; puVar11 = puVar11 + 2) {
        *puVar10 = *puVar11;
        lVar8 = puVar11[1];
        if (lVar8 != 0) {
          piVar1 = (int *)(lVar8 + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = *piVar1 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        puVar10[1] = lVar8;
        puVar10 = puVar10 + 2;
      }
      for (; puVar12 != puVar4; puVar12 = puVar12 + 2) {
        func_0x0001081637d8();
      }
      param_2[1] = puVar3;
      lVar8 = *plVar7;
      *plVar7 = (long)puVar3;
      plVar7[1] = lVar8;
      param_2[1] = lVar8;
      lVar8 = plVar7[1];
      plVar7[1] = param_2[2];
      param_2[2] = lVar8;
      lVar8 = plVar7[2];
      plVar7[2] = param_2[3];
      param_2[3] = lVar8;
      *param_2 = param_2[1];
      return plVar9;
    }
    lVar8 = (long)param_2 << 4;
    __Znwm();
  }
  lVar2 = lVar8 + param_3 * 0x10;
  *plVar7 = lVar8;
  plVar7[1] = lVar2;
  plVar7[2] = lVar2;
  plVar7[3] = lVar8 + (long)param_2 * 0x10;
  return plVar7;
}



/* Entry: 108163240; end: 10816329b;  */

long * FUN_108163240(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  int *piVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == (undefined8 *)0x0) {
    lVar7 = 0;
  }
  else {
    if ((ulong)param_2 >> 0x3c != 0) {
      func_0x000104bd35f4();
      puVar11 = (undefined8 *)*param_1;
      puVar4 = (undefined8 *)param_1[1];
      puVar3 = (undefined8 *)((long)puVar11 + (param_2[1] - (long)puVar4));
      puVar9 = puVar3;
      for (puVar10 = puVar11; plVar8 = param_1, puVar10 != puVar4; puVar10 = puVar10 + 2) {
        *puVar9 = *puVar10;
        lVar7 = puVar10[1];
        if (lVar7 != 0) {
          piVar1 = (int *)(lVar7 + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = *piVar1 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        puVar9[1] = lVar7;
        puVar9 = puVar9 + 2;
      }
      for (; puVar11 != puVar4; puVar11 = puVar11 + 2) {
        func_0x0001081637d8();
      }
      param_2[1] = puVar3;
      lVar7 = *param_1;
      *param_1 = (long)puVar3;
      param_1[1] = lVar7;
      param_2[1] = lVar7;
      lVar7 = param_1[1];
      param_1[1] = param_2[2];
      param_2[2] = lVar7;
      lVar7 = param_1[2];
      param_1[2] = param_2[3];
      param_2[3] = lVar7;
      *param_2 = param_2[1];
      return plVar8;
    }
    lVar7 = (long)param_2 << 4;
    __Znwm();
  }
  lVar2 = lVar7 + param_3 * 0x10;
  *param_1 = lVar7;
  param_1[1] = lVar2;
  param_1[2] = lVar2;
  param_1[3] = lVar7 + (long)param_2 * 0x10;
  return param_1;
}



/* Entry: 10816329c; end: 108163367;  */

void FUN_10816329c(long *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  
  puVar9 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)((long)puVar9 + (param_2[1] - (long)puVar3));
  puVar6 = puVar2;
  for (puVar7 = puVar9; puVar7 != puVar3; puVar7 = puVar7 + 2) {
    *puVar6 = *puVar7;
    lVar8 = puVar7[1];
    if (lVar8 != 0) {
      piVar1 = (int *)(lVar8 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar6[1] = lVar8;
    puVar6 = puVar6 + 2;
  }
  for (; puVar9 != puVar3; puVar9 = puVar9 + 2) {
    func_0x0001081637d8();
  }
  param_2[1] = puVar2;
  lVar8 = *param_1;
  *param_1 = (long)puVar2;
  param_1[1] = lVar8;
  param_2[1] = lVar8;
  lVar8 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar8;
  lVar8 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar8;
  *param_2 = param_2[1];
  return;
}



/* Entry: 108163368; end: 1081633b3;  */

long * FUN_108163368(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  while (lVar1 = param_1[2], lVar2 != lVar1) {
    param_1[2] = lVar1 + -0x10;
    func_0x0001081428c0(lVar1 + -8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1081633b4; end: 1081633df;  */

void FUN_1081633b4(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001081633d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 1081633e0; end: 1081633ff;  */

void FUN_1081633e0(void)

{
  undefined8 *unaff_x19;
  
  func_0x0001081637c0();
  *unaff_x19 = &PTR_DAT_110a289a8;
  FUN_108160fd0(unaff_x19 + 5);
  FUN_108160f8c(unaff_x19 + 2);
  return;
}



/* Entry: 108163400; end: 108163413;  */

void FUN_108163400(void)

{
  FUN_1081633e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108163414; end: 10816355b;  */

void FUN_108163414(ulong param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ulong uVar9;
  long lVar10;
  float *pfVar11;
  long lVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined8 uStack_48;
  
  uVar9 = param_1;
  FUN_1081608d0();
  uVar13 = uVar9 >> 0x20;
  if (*(long *)(param_1 + 0x70) == 0) {
    lVar12 = *(long *)(param_1 + 0x50);
  }
  else {
    lVar12 = *(long *)(param_1 + 0x50);
    uVar3 = uVar13;
    uVar2 = uVar9;
    if (uVar13 == (*(long *)(param_1 + 0x58) - lVar12 >> 4) - 1U) {
      uVar2 = 0x3f800000;
      uVar3 = (ulong)((int)(uVar9 >> 0x20) - 1);
    }
    if (uVar13 != 0) {
      uVar9 = uVar2;
      uVar13 = uVar3;
    }
  }
  fVar15 = (float)uVar9;
  puVar1 = (undefined8 *)(lVar12 + uVar13 * 0x10);
  lVar10 = puVar1[1];
  if (lVar10 != 0) {
    fVar16 = *(float *)(lVar10 + 0x40);
    fVar14 = fVar16 * fVar15;
    FUN_10834533c(lVar10,&uStack_48,&fStack_50);
    if ((int)lVar10 != 0) {
      bVar6 = false;
      bVar7 = false;
      bVar8 = false;
      if (0.0 <= fVar14) {
        bVar6 = false;
        bVar7 = false;
        bVar8 = true;
        if (!NAN(fVar14) && !NAN(fVar16)) {
          bVar6 = fVar14 < fVar16;
          bVar7 = fVar14 == fVar16;
          bVar8 = false;
        }
      }
      fStack_58 = (float)uStack_48;
      fStack_54 = uStack_48._4_4_;
      if (!bVar7 && bVar6 == bVar8) {
        fVar15 = fVar14 - fVar16;
        if (fVar14 - fVar16 <= -fVar14) {
          fVar15 = -fVar14;
        }
        fVar14 = (float)((uint)fVar14 ^ ((uint)fVar14 ^ (uint)fVar15) & 0x7fffffff);
        fStack_58 = (float)uStack_48 + fVar14 * fStack_50;
        fStack_54 = fVar14 * fStack_4c + uStack_48._4_4_;
        uStack_48 = CONCAT44(fStack_54,fStack_58);
      }
      pfVar11 = &fStack_58;
      goto LAB_108163540;
    }
    lVar12 = *(long *)(param_1 + 0x50);
  }
  uVar4 = *(undefined8 *)(lVar12 + (param_2 & 0xffffffff) * 0x10);
  uVar5 = *puVar1;
  fVar14 = (float)uVar5;
  fVar16 = (float)((ulong)uVar5 >> 0x20);
  fStack_50 = (float)uVar4 - fVar14;
  fStack_4c = (float)((ulong)uVar4 >> 0x20) - fVar16;
  uStack_48 = CONCAT44(fVar16 + fStack_4c * fVar15,fVar14 + fStack_50 * fVar15);
  pfVar11 = (float *)&uStack_48;
LAB_108163540:
  FUN_10816355c(fStack_50,fStack_4c,param_1,pfVar11);
  return;
}



/* Entry: 10816355c; end: 10816360f;  */

bool FUN_10816355c(undefined8 param_1,undefined8 param_2,long param_3,float *param_4)

{
  bool bVar1;
  float *pfVar2;
  float fVar3;
  
  pfVar2 = *(float **)(param_3 + 0x68);
  bVar1 = param_4[1] != pfVar2[1] || *param_4 != *pfVar2;
  *(undefined8 *)pfVar2 = *(undefined8 *)param_4;
  pfVar2 = *(float **)(param_3 + 0x70);
  if (pfVar2 != (float *)0x0) {
    _atan2f(param_2,param_1);
    fVar3 = (float)param_2 * 57.295776;
    bVar1 = fVar3 != *pfVar2 || bVar1;
    *pfVar2 = fVar3;
  }
  return bVar1;
}



/* Entry: 108163610; end: 1081636af;  */

bool FUN_108163610(long param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfStack_48;
  float *pfStack_40;
  
  fVar5 = **(float **)(param_1 + 0x18);
  fVar4 = (*(float **)(param_1 + 0x18))[1];
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))(&pfStack_48);
  if (pfStack_40 == pfStack_48) {
    pfVar1 = *(float **)(param_1 + 0x18);
    *pfVar1 = 0.0;
    fVar2 = 0.0;
    fVar3 = 0.0;
  }
  else {
    fVar2 = *pfStack_48;
    pfVar1 = *(float **)(param_1 + 0x18);
    *pfVar1 = fVar2;
    fVar3 = 0.0;
    if (4 < (ulong)((long)pfStack_40 - (long)pfStack_48)) {
      fVar3 = pfStack_48[1];
    }
  }
  pfVar1[1] = fVar3;
  func_0x0001056d1ce4(&pfStack_48);
  return fVar3 != fVar4 || fVar2 != fVar5;
}



/* Entry: 1081636b0; end: 1081636fb;  */

long * FUN_1081636b0(long *param_1)

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



/* Entry: 1081636fc; end: 10816373f;  */

undefined4 FUN_1081636fc(int param_1,undefined4 param_2)

{
  undefined4 auStack_28 [2];
  
  FUN_10815c8f0(param_1,auStack_28);
  if (param_1 != 0) {
    param_2 = auStack_28[0];
  }
  return param_2;
}



/* Entry: 108163740; end: 10816382f;  */

bool FUN_108163740(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = param_2 * param_2 + param_1 * param_1;
  fVar3 = param_4 * param_4 + param_3 * param_3;
  if (fVar2 < fVar3) {
    return false;
  }
  fVar1 = param_2 * param_4 + param_3 * param_1;
  return ABS(fVar1 * fVar1 - fVar2 * fVar3) <= 0.00024414062;
}



/* Entry: 108163830; end: 10816385b;  */

void FUN_108163830(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FUN_10816385c();
  uStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  func_0x000108343560(&uStack_20);
  return;
}



/* Entry: 10816385c; end: 10816394b;  */

float FUN_10816385c(long *param_1)

{
  float *pfVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  pfVar1 = (float *)*param_1;
  lVar2 = param_1[1] - (long)pfVar1;
  if (lVar2 == 0) {
    fVar4 = 0.0;
  }
  else {
    fVar3 = *pfVar1;
    fVar4 = 1.0;
    if (fVar3 <= 0.0 && fVar3 <= 1.0) {
      fVar4 = 0.0;
    }
    if (0.0 < fVar3 && fVar3 <= 1.0) {
      fVar4 = fVar3;
    }
    if (((1 < (ulong)(lVar2 >> 2)) && (lVar2 != 8)) && (3 < (ulong)(lVar2 >> 2))) {
      fVar3 = pfVar1[3];
      if ((fVar3 <= 1.0) && (fVar3 <= 0.0)) {
        return fVar4;
      }
      if (1.0 < fVar3) {
        return fVar4;
      }
    }
  }
  return fVar4;
}



/* Entry: 10816394c; end: 108163bd7;  */

void FUN_10816394c(undefined8 *param_1,ulong param_2,undefined8 param_3,ulong *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  code *pcVar9;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  char cStack_91;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar6 = (*param_4 & 0xfffffffffffffff8) + 8;
  FUN_108154e4c();
  if (uVar6 != 0) {
    pcVar9 = *(code **)(param_2 + 0x50);
    FUN_108154b58();
    (*pcVar9)();
    if ((uVar6 & 1) != 0) {
      cStack_91 = '\x01';
      pcVar3 = &cStack_91;
      func_0x000108154764(pcVar3,*(undefined8 *)(param_2 + 0x78),
                          *(undefined8 *)(*param_4 & 0xfffffffffffffff8));
      if ((cStack_91 == '\x01') && ((ulong)pcVar3 >> 0x20 == 0)) {
        func_0x00010742a308(param_2 + 0x60,pcVar3);
        uVar6 = param_2;
        FUN_108160a88(param_2,param_3,param_4);
        if ((uVar6 & 1) != 0) {
          func_0x00010742a308(param_2 + 0x60,*(long *)(param_2 + 0x78) * *(long *)(param_2 + 0x80));
          plVar8 = (long *)(param_2 + 0x70);
          uVar6 = *(long *)(param_2 + 0x68) - *(long *)(param_2 + 0x60);
          if (uVar6 < (ulong)(*plVar8 - *(long *)(param_2 + 0x60))) {
            lVar5 = (long)uVar6 >> 2;
            func_0x0001073b531c(&lStack_70,lVar5,lVar5,plVar8);
            if ((ulong)(lStack_58 - lStack_70) < (ulong)(*plVar8 - *(long *)(param_2 + 0x60))) {
              func_0x0001073b52fc(param_2 + 0x60,&lStack_70);
            }
            func_0x0001073b5364(&lStack_70);
          }
          puVar4 = (undefined8 *)0x78;
          __Znwm();
          uStack_60 = *(undefined8 *)(param_2 + 0x18);
          uStack_68 = *(undefined8 *)(param_2 + 0x10);
          lStack_70 = *(long *)(param_2 + 8);
          *(undefined8 *)(param_2 + 8) = 0;
          *(undefined8 *)(param_2 + 0x10) = 0;
          uStack_d0 = *(undefined8 *)(param_2 + 0x70);
          uVar1 = *(undefined8 *)(param_2 + 0x78);
          uStack_80 = *(undefined8 *)(param_2 + 0x30);
          uStack_88 = *(undefined8 *)(param_2 + 0x28);
          uStack_90 = *(undefined8 *)(param_2 + 0x20);
          *(undefined8 *)(param_2 + 0x18) = 0;
          *(undefined8 *)(param_2 + 0x20) = 0;
          *(undefined8 *)(param_2 + 0x28) = 0;
          *(undefined8 *)(param_2 + 0x30) = 0;
          uStack_d8 = *(undefined8 *)(param_2 + 0x68);
          uStack_e0 = *(undefined8 *)(param_2 + 0x60);
          *(undefined8 *)(param_2 + 0x68) = 0;
          *(undefined8 *)(param_2 + 0x70) = 0;
          *(undefined8 *)(param_2 + 0x60) = 0;
          uVar7 = *(undefined8 *)(param_2 + 0x88);
          uStack_b0 = 0;
          uStack_a8 = 0;
          uStack_a0 = 0;
          uStack_c8 = 0;
          uStack_c0 = 0;
          uStack_b8 = 0;
          func_0x000108161650();
          FUN_108160fd0(&uStack_90);
          FUN_108160f8c(&lStack_70);
          uVar2 = uStack_d0;
          *puVar4 = &PTR_FUN_110a28d58;
          puVar4[0xb] = uStack_d8;
          puVar4[10] = uStack_e0;
          uStack_e0 = 0;
          uStack_d8 = 0;
          uStack_d0 = 0;
          puVar4[0xc] = uVar2;
          puVar4[0xd] = uVar1;
          puVar4[0xe] = uVar7;
          func_0x00010742a308(uVar7,uVar1);
          *param_1 = puVar4;
          func_0x0001056d1ce4(&uStack_e0);
          FUN_108160fd0(&uStack_c8);
          FUN_108160f8c(&uStack_b0);
          return;
        }
      }
    }
  }
  *param_1 = 0;
  return;
}


