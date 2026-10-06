/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ad48454; end: 10ad4856b;  */

void FUN_10ad48454(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)**(undefined8 **)(param_1 + 8);
  plVar3 = (long *)**(long **)(param_1 + 0x10);
  while (plVar1 = plVar3, plVar1 != plVar2) {
    plVar3 = plVar1 + -3;
    if (*plVar3 != 0) {
      plVar1[-2] = *plVar3;
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10ad4856c; end: 10ad485bf;  */

void FUN_10ad4856c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)*param_1;
  plVar3 = (long *)param_1[1];
  while (plVar2 = plVar3, plVar2 != plVar1) {
    plVar3 = plVar2 + -3;
    if (*plVar3 != 0) {
      plVar2[-2] = *plVar3;
      __ZdlPv();
    }
  }
  param_1[1] = (long)plVar1;
  return;
}



/* Entry: 10ad485c0; end: 10ad4864b;  */

void FUN_10ad485c0(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_38;
  long lStack_30;
  
  lVar1 = *param_1;
  if (((lVar1 != 0) && (*(byte *)(lVar1 + 0x1a8) - 3 < 2)) && ((*(byte *)(lVar1 + 0x157) & 1) == 0))
  {
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    FUN_10ad490bc(&lStack_38,*(undefined8 *)(*(long *)(lVar1 + 0xf8) + 0x1f0));
    FUN_10ad4864c(uVar2,&lStack_38);
    if (lStack_38 != 0) {
      lStack_30 = lStack_38;
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10ad4864c; end: 10ad486a7;  */

void FUN_10ad4864c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    uVar2 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar2;
    puVar1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    puVar1 = puVar1 + 3;
  }
  else {
    puVar1 = param_1;
    FUN_10ad486a8();
  }
  param_1[1] = puVar1;
  return;
}



/* Entry: 10ad486a8; end: 10ad487c7;  */

long * FUN_10ad486a8(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar6 = param_1[1] - *param_1;
  uVar4 = (lVar6 >> 3) * -0x5555555555555555 + 1;
  if (uVar4 < 0xaaaaaaaaaaaaaab) {
    lVar3 = param_1[2] - *param_1 >> 3;
    uVar5 = lVar3 * 0x5555555555555556;
    if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
      uVar5 = uVar4;
    }
    if (0x555555555555554 < (ulong)(lVar3 * -0x5555555555555555)) {
      uVar5 = 0xaaaaaaaaaaaaaaa;
    }
    plVar2 = param_1;
    plStack_38 = param_1;
    FUN_10ad48324();
    plStack_50 = (long *)((long)plVar2 + lVar6);
    plStack_50[1] = 0;
    plStack_50[2] = 0;
    *plStack_50 = 0;
    uVar7 = *param_2;
    plStack_50[1] = param_2[1];
    *plStack_50 = uVar7;
    plStack_50[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    plVar1 = plStack_50 + 3;
    lVar6 = (long)plStack_50 + (*param_1 - param_1[1]);
    plStack_58 = plVar2;
    plStack_48 = plVar1;
    plStack_40 = plVar2 + uVar5 * 3;
    func_0x00010ad48368(param_1,*param_1,param_1[1],lVar6);
    plStack_58 = (long *)*param_1;
    *param_1 = lVar6;
    param_1[1] = (long)plVar1;
    plStack_40 = (long *)param_1[2];
    param_1[2] = (long)(plVar2 + uVar5 * 3);
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    func_0x00010ad484a0(&plStack_58);
    return plVar1;
  }
  FUN_10ad48310();
  func_0x00010ad484a0(&plStack_58);
  __Unwind_Resume(param_1);
  return param_1;
}



/* Entry: 10ad487c8; end: 10ad487fb;  */

void FUN_10ad487c8(void)

{
  return;
}



/* Entry: 10ad487fc; end: 10ad48853;  */

void FUN_10ad487fc(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x30;
  __Znwm();
  FUN_10ad48854();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10ad48854; end: 10ad4889b;  */

undefined8 * FUN_10ad48854(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110c702f0;
  FUN_10ad488e8(param_1 + 3);
  return param_1;
}



/* Entry: 10ad4889c; end: 10ad488ab;  */

void FUN_10ad4889c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c702f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ad488ac; end: 10ad488cb;  */

void FUN_10ad488ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c702f0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad488cc; end: 10ad488e7;  */

void FUN_10ad488cc(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10ad488e8; end: 10ad4896b;  */

undefined8 * FUN_10ad488e8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar1 = (long *)param_2[1];
  for (plVar2 = (long *)*param_2; plVar2 != plVar1; plVar2 = plVar2 + 3) {
    FUN_10ad4896c(param_1,param_1[1],*plVar2,plVar2[1],
                  (plVar2[1] - *plVar2 >> 2) * -0x3333333333333333);
  }
  return param_1;
}



/* Entry: 10ad4896c; end: 10ad48c6b;  */

long * FUN_10ad4896c(long *param_1,long *param_2,long *param_3,long *param_4,long param_5)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long **pplVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  long *plStack_88;
  long *plStack_80;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  if (0 < param_5) {
    plVar2 = (long *)param_1[1];
    if ((param_1[2] - (long)plVar2 >> 2) * -0x3333333333333333 < param_5) {
      lVar9 = *param_1;
      uVar5 = param_5 + ((long)plVar2 - lVar9 >> 2) * -0x3333333333333333;
      if (0xccccccccccccccc < uVar5) {
        plVar2 = param_1;
        plVar12 = param_2;
        FUN_10a1ce1ec();
        pcStack_48 = FUN_10ad48c6c;
        lVar9 = *plVar2;
        if ((((lVar9 != 0) && (*(byte *)(lVar9 + 0x1a8) - 3 < 2)) &&
            ((*(byte *)(lVar9 + 0x155) & 1) == 0)) && ((*(byte *)(lVar9 + 0x157) & 1) == 0)) {
          lStack_70 = param_5;
          plStack_68 = param_1;
          plStack_60 = param_3;
          plStack_58 = param_2;
          puStack_50 = &stack0xfffffffffffffff0;
          if (*(long *)(plVar12[2] + 0x10) != 0) {
            uVar15 = *(undefined8 *)(*(long *)(lVar9 + 0xf8) + 0x1f0);
            FUN_10a1d6598(auStack_a0);
            FUN_10a1d6598(&plStack_88,auStack_a0);
            FUN_10ad491dc(uVar15,&plStack_88,0);
            FUN_10a1ce910(&plStack_88,plStack_80);
            FUN_10a1ce910(auStack_a0,uStack_98);
            lVar9 = *plVar2;
          }
          if (*(long *)(plVar12[3] + 0x10) != 0) {
            uVar15 = *(undefined8 *)(*(long *)(lVar9 + 0xf8) + 0x1f0);
            FUN_10a1d6598(auStack_b8);
            FUN_10a1d6598(&plStack_88,auStack_b8);
            FUN_10ad491dc(uVar15,&plStack_88,1);
            FUN_10a1ce910(&plStack_88,plStack_80);
            FUN_10a1ce910(auStack_b8,uStack_b0);
            lVar9 = *plVar2;
          }
          FUN_10ad490bc(&plStack_88,*(undefined8 *)(*(long *)(lVar9 + 0xf8) + 0x1f0));
          plVar2 = *(long **)plVar12[2];
          if (plVar2 != (undefined8 *)plVar12[2] + 1) {
            do {
              pplVar4 = &plStack_88;
              FUN_10ad48100(pplVar4,(long)plVar2 + 0x24,0);
              if ((int)pplVar4 == 0) {
                plVar6 = (long *)plVar2[1];
                plVar8 = plVar2;
                if ((long *)plVar2[1] == (long *)0x0) {
                  do {
                    plVar2 = (long *)plVar8[2];
                    bVar1 = (long *)*plVar2 != plVar8;
                    plVar8 = plVar2;
                  } while (bVar1);
                }
                else {
                  do {
                    plVar2 = plVar6;
                    plVar6 = (long *)*plVar2;
                  } while ((long *)*plVar2 != (long *)0x0);
                }
              }
              else {
                FUN_10ad48ecc(plVar12[3],(long)plVar2 + 0x1c,(long)plVar2 + 0x1c);
                plVar6 = (long *)plVar2[1];
                plVar8 = plVar2;
                if ((long *)plVar2[1] == (long *)0x0) {
                  do {
                    plVar16 = (long *)plVar8[2];
                    bVar1 = (long *)*plVar16 != plVar8;
                    plVar8 = plVar16;
                  } while (bVar1);
                }
                else {
                  do {
                    plVar16 = plVar6;
                    plVar6 = (long *)*plVar16;
                  } while ((long *)*plVar16 != (long *)0x0);
                }
                plVar6 = (long *)plVar12[2];
                if ((long *)*plVar6 == plVar2) {
                  *plVar6 = (long)plVar16;
                }
                plVar6[2] = plVar6[2] + -1;
                FUN_10a04815c(plVar6[1],plVar2);
                __ZdlPv(plVar2);
                plVar2 = plVar16;
              }
            } while (plVar2 != (long *)(plVar12[2] + 8));
          }
          plVar2 = plStack_88;
          if (plStack_88 != (long *)0x0) {
            plStack_80 = plStack_88;
            __ZdlPv();
            plVar2 = plStack_88;
          }
        }
        return plVar2;
      }
      lVar7 = param_1[2] - lVar9 >> 2;
      uVar10 = lVar7 * -0x6666666666666666;
      if (uVar10 < uVar5 || uVar10 - uVar5 == 0) {
        uVar10 = uVar5;
      }
      if (0x666666666666665 < (ulong)(lVar7 * -0x3333333333333333)) {
        uVar10 = 0xccccccccccccccc;
      }
      if (uVar10 == 0) {
        plVar2 = (long *)0x0;
      }
      else {
        plVar2 = param_1;
        FUN_10a1ce200();
      }
      plVar12 = (long *)((long)plVar2 + ((long)param_2 - lVar9));
      lVar9 = (long)plVar12 + param_5 * 0x14;
      param_5 = param_5 * 0x14;
      plVar6 = plVar12;
      do {
        lVar3 = param_3[1];
        lVar7 = *param_3;
        *(int *)(plVar6 + 2) = (int)param_3[2];
        plVar6[1] = lVar3;
        *plVar6 = lVar7;
        param_3 = (long *)((long)param_3 + 0x14);
        param_5 = param_5 + -0x14;
        plVar6 = (long *)((long)plVar6 + 0x14);
      } while (param_5 != 0);
      _memcpy(lVar9,param_2,param_1[1] - (long)param_2);
      lVar7 = param_1[1];
      param_1[1] = (long)param_2;
      lVar14 = (long)plVar12 - ((long)param_2 - *param_1);
      _memcpy(lVar14);
      lVar3 = *param_1;
      *param_1 = lVar14;
      param_1[1] = lVar9 + (lVar7 - (long)param_2);
      param_1[2] = (long)plVar2 + uVar10 * 0x14;
      param_2 = plVar12;
      if (lVar3 != 0) {
        __ZdlPv();
      }
    }
    else {
      lVar9 = (long)plVar2 - (long)param_2;
      if ((lVar9 >> 2) * -0x3333333333333333 < param_5) {
        plVar8 = (long *)(lVar9 + (long)param_3);
        plVar16 = plVar2;
        plVar6 = plVar2;
        for (plVar12 = plVar8; plVar12 != param_4; plVar12 = (long *)((long)plVar12 + 0x14)) {
          lVar3 = plVar12[1];
          lVar7 = *plVar12;
          *(int *)(plVar16 + 2) = (int)plVar12[2];
          plVar16[1] = lVar3;
          *plVar16 = lVar7;
          plVar6 = (long *)((long)plVar6 + 0x14);
          plVar16 = (long *)((long)plVar16 + 0x14);
        }
        param_1[1] = (long)plVar6;
        if (0 < lVar9) {
          plVar11 = (long *)((long)param_2 + param_5 * 0x14);
          plVar13 = plVar6;
          for (plVar12 = (long *)((long)plVar6 + param_5 * -0x14); plVar12 < plVar2;
              plVar12 = (long *)((long)plVar12 + 0x14)) {
            lVar7 = plVar12[1];
            lVar9 = *plVar12;
            *(int *)(plVar13 + 2) = (int)plVar12[2];
            plVar13[1] = lVar7;
            *plVar13 = lVar9;
            plVar13 = (long *)((long)plVar13 + 0x14);
          }
          param_1[1] = (long)plVar13;
          plVar2 = param_2;
          if (plVar16 != plVar11) {
            lVar9 = 0;
            param_5 = param_5 * -0x14;
            do {
              uVar15 = *(undefined8 *)((long)plVar6 + param_5 + -0x14);
              *(undefined8 *)((long)plVar6 + lVar9 + -0xc) =
                   *(undefined8 *)((long)plVar6 + param_5 + -0xc);
              *(undefined8 *)((long)plVar6 + lVar9 + -0x14) = uVar15;
              *(undefined4 *)((long)plVar6 + lVar9 + -4) =
                   *(undefined4 *)((long)plVar6 + param_5 + -4);
              lVar9 = lVar9 + -0x14;
              param_5 = param_5 + -0x14;
              plVar11 = (long *)((long)plVar11 + 0x14);
            } while (plVar6 != plVar11);
          }
          do {
            lVar9 = *param_3;
            plVar2[1] = param_3[1];
            *plVar2 = lVar9;
            *(int *)(plVar2 + 2) = (int)param_3[2];
            param_3 = (long *)((long)param_3 + 0x14);
            plVar2 = (long *)((long)plVar2 + 0x14);
          } while (param_3 != plVar8);
        }
      }
      else {
        plVar8 = (long *)((long)plVar2 + param_5 * -0x14);
        plVar6 = plVar2;
        for (plVar12 = plVar8; plVar12 < plVar2; plVar12 = (long *)((long)plVar12 + 0x14)) {
          lVar7 = plVar12[1];
          lVar9 = *plVar12;
          *(int *)(plVar6 + 2) = (int)plVar12[2];
          plVar6[1] = lVar7;
          *plVar6 = lVar9;
          plVar6 = (long *)((long)plVar6 + 0x14);
        }
        param_1[1] = (long)plVar6;
        if (plVar2 != (long *)((long)param_2 + param_5 * 0x14)) {
          lVar9 = 0;
          do {
            uVar15 = *(undefined8 *)((long)plVar8 + lVar9 + -0x14);
            *(undefined8 *)((long)plVar2 + lVar9 + -0xc) =
                 *(undefined8 *)((long)plVar8 + lVar9 + -0xc);
            *(undefined8 *)((long)plVar2 + lVar9 + -0x14) = uVar15;
            *(undefined4 *)((long)plVar2 + lVar9 + -4) = *(undefined4 *)((long)plVar8 + lVar9 + -4);
            lVar9 = lVar9 + -0x14;
          } while ((long)param_2 + (param_5 * 0x14 - (long)plVar2) != lVar9);
        }
        plVar12 = (long *)((long)param_3 + param_5 * 0x14);
        plVar2 = param_2;
        do {
          lVar9 = *param_3;
          plVar2[1] = param_3[1];
          *plVar2 = lVar9;
          *(int *)(plVar2 + 2) = (int)param_3[2];
          param_3 = (long *)((long)param_3 + 0x14);
          plVar2 = (long *)((long)plVar2 + 0x14);
        } while (param_3 != plVar12);
      }
    }
  }
  return param_2;
}



/* Entry: 10ad48c6c; end: 10ad48ecb;  */

void FUN_10ad48c6c(long *param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  long lStack_48;
  long lStack_40;
  
  lVar2 = *param_1;
  if ((((lVar2 != 0) && (*(byte *)(lVar2 + 0x1a8) - 3 < 2)) && ((*(byte *)(lVar2 + 0x155) & 1) == 0)
      ) && ((*(byte *)(lVar2 + 0x157) & 1) == 0)) {
    if (*(long *)(*(long *)(param_2 + 0x10) + 0x10) != 0) {
      uVar6 = *(undefined8 *)(*(long *)(lVar2 + 0xf8) + 0x1f0);
      FUN_10a1d6598(auStack_60);
      FUN_10a1d6598(&lStack_48,auStack_60);
      FUN_10ad491dc(uVar6,&lStack_48,0);
      FUN_10a1ce910(&lStack_48,lStack_40);
      FUN_10a1ce910(auStack_60,uStack_58);
      lVar2 = *param_1;
    }
    if (*(long *)(*(long *)(param_2 + 0x18) + 0x10) != 0) {
      uVar6 = *(undefined8 *)(*(long *)(lVar2 + 0xf8) + 0x1f0);
      FUN_10a1d6598(auStack_78);
      FUN_10a1d6598(&lStack_48,auStack_78);
      FUN_10ad491dc(uVar6,&lStack_48,1);
      FUN_10a1ce910(&lStack_48,lStack_40);
      FUN_10a1ce910(auStack_78,uStack_70);
      lVar2 = *param_1;
    }
    FUN_10ad490bc(&lStack_48,*(undefined8 *)(*(long *)(lVar2 + 0xf8) + 0x1f0));
    plVar5 = (long *)**(undefined8 **)(param_2 + 0x10);
    if (plVar5 != *(undefined8 **)(param_2 + 0x10) + 1) {
      do {
        plVar3 = &lStack_48;
        FUN_10ad48100(plVar3,(long)plVar5 + 0x24,0);
        if ((int)plVar3 == 0) {
          plVar3 = (long *)plVar5[1];
          plVar4 = plVar5;
          if ((long *)plVar5[1] == (long *)0x0) {
            do {
              plVar5 = (long *)plVar4[2];
              bVar1 = (long *)*plVar5 != plVar4;
              plVar4 = plVar5;
            } while (bVar1);
          }
          else {
            do {
              plVar5 = plVar3;
              plVar3 = (long *)*plVar5;
            } while ((long *)*plVar5 != (long *)0x0);
          }
        }
        else {
          FUN_10ad48ecc(*(undefined8 *)(param_2 + 0x18),(long)plVar5 + 0x1c,(long)plVar5 + 0x1c);
          plVar3 = (long *)plVar5[1];
          plVar4 = plVar5;
          if ((long *)plVar5[1] == (long *)0x0) {
            do {
              plVar7 = (long *)plVar4[2];
              bVar1 = (long *)*plVar7 != plVar4;
              plVar4 = plVar7;
            } while (bVar1);
          }
          else {
            do {
              plVar7 = plVar3;
              plVar3 = (long *)*plVar7;
            } while ((long *)*plVar7 != (long *)0x0);
          }
          plVar3 = *(long **)(param_2 + 0x10);
          if ((long *)*plVar3 == plVar5) {
            *plVar3 = (long)plVar7;
          }
          plVar3[2] = plVar3[2] + -1;
          FUN_10a04815c(plVar3[1],plVar5);
          __ZdlPv(plVar5);
          plVar5 = plVar7;
        }
      } while (plVar5 != (long *)(*(long *)(param_2 + 0x10) + 8));
    }
    if (lStack_48 != 0) {
      lStack_40 = lStack_48;
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10ad48ecc; end: 10ad48f83;  */

undefined1  [16] FUN_10ad48ecc(long param_1,uint *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar3 = plVar1, *(uint *)((long)plVar3 + 0x1c) <= *param_2) {
        if (*param_2 <= *(uint *)((long)plVar3 + 0x1c)) {
          uVar2 = 0;
          goto LAB_10ad48f6c;
        }
        plVar1 = (long *)plVar3[1];
        if ((long *)plVar3[1] == (long *)0x0) {
          plVar4 = plVar3 + 1;
          goto LAB_10ad48f34;
        }
      }
      plVar1 = (long *)*plVar3;
      plVar4 = plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
LAB_10ad48f34:
  plVar1 = (long *)0x30;
  __Znwm();
  uVar2 = *param_3;
  *(undefined8 *)((long)plVar1 + 0x24) = param_3[1];
  *(undefined8 *)((long)plVar1 + 0x1c) = uVar2;
  FUN_10a1d6898(param_1,plVar3,plVar4,plVar1);
  uVar2 = 1;
  plVar3 = plVar1;
LAB_10ad48f6c:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = plVar3;
  return auVar5;
}



/* Entry: 10ad48f84; end: 10ad48fb7;  */

void FUN_10ad48f84(void)

{
  return;
}



/* Entry: 10ad48fb8; end: 10ad49087;  */

void FUN_10ad48fb8(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lStack_38;
  long lStack_30;
  
  lVar2 = *param_1;
  if ((((lVar2 != 0) && (*(byte *)(lVar2 + 0x1a8) - 3 < 2)) && ((*(byte *)(lVar2 + 0x157) & 1) == 0)
      ) && (FUN_10ad49454(*(undefined8 *)(*(long *)(lVar2 + 0xf8) + 0x1f0),
                          *(undefined8 *)(param_2 + 0x10),**(undefined1 **)(param_2 + 0x18)),
           (**(byte **)(param_2 + 0x18) & 1) == 0)) {
    FUN_10ad490bc(&lStack_38,*(undefined8 *)(*(long *)(*param_1 + 0xf8) + 0x1f0));
    plVar1 = &lStack_38;
    FUN_10ad48100(plVar1,*(long *)(param_2 + 0x10) + 0x14,
                  *(undefined4 *)(*(long *)(param_2 + 0x10) + 8));
    if ((int)plVar1 != 0) {
      **(undefined1 **)(param_2 + 0x18) = 1;
    }
    if (lStack_38 != 0) {
      lStack_30 = lStack_38;
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10ad49088; end: 10ad490bb;  */

void FUN_10ad49088(void)

{
  return;
}



/* Entry: 10ad490bc; end: 10ad491db;  */

void FUN_10ad490bc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long **pplStack_60;
  long **pplStack_58;
  long *plStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  
  plStack_48 = (long *)0x0;
  plStack_40 = (long *)0x0;
  uStack_38 = 0;
  FUN_10ad47f54(&plStack_48,*(undefined8 *)(param_2 + 0x18));
  plVar1 = plStack_40;
  for (plVar2 = *(long **)(param_2 + 0x10); plStack_40 = plVar1, plVar2 != (long *)0x0;
      plVar2 = (long *)*plVar2) {
    (**(code **)(*(long *)plVar2[2] + 0x20))(&pplStack_60);
    FUN_10ad4864c(&plStack_48,&pplStack_60);
    if (pplStack_60 != (long **)0x0) {
      pplStack_58 = pplStack_60;
      __ZdlPv();
    }
    plVar1 = plStack_40;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  for (plVar2 = plStack_48; plVar2 != plVar1; plVar2 = plVar2 + 3) {
    FUN_10ad4896c(param_1,param_1[1],*plVar2,plVar2[1],
                  (plVar2[1] - *plVar2 >> 2) * -0x3333333333333333);
  }
  pplStack_60 = &plStack_48;
  func_0x00010ad4852c(&pplStack_60);
  return;
}



/* Entry: 10ad491dc; end: 10ad49453;  */

void FUN_10ad491dc(long param_1,undefined8 *param_2,uint param_3)

{
  undefined8 *****pppppuVar1;
  bool bVar2;
  undefined8 ****ppppuVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *****pppppuVar8;
  undefined8 *****pppppuVar9;
  ulong uVar10;
  undefined8 ****ppppuStack_98;
  undefined8 ****ppppuStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 ****ppppuStack_68;
  undefined8 ****ppppuStack_60;
  long lStack_58;
  
  ppppuStack_60 = (undefined8 *****)0x0;
  lStack_58 = 0;
  plVar6 = (long *)*param_2;
  ppppuStack_68 = &ppppuStack_60;
  if (plVar6 != param_2 + 1) {
    do {
      uStack_78 = *(undefined8 *)((long)plVar6 + 0x24);
      uVar10 = *(ulong *)((long)plVar6 + 0x1c);
      plVar5 = *(long **)(param_1 + 0x30);
      uStack_80._4_4_ = (int)(uVar10 >> 0x20);
      uStack_80._0_4_ = (uint)uVar10;
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(uint *)((long)plVar5 + 0x1c) <= (uint)uStack_80) {
          if ((uint)uStack_80 <= *(uint *)((long)plVar5 + 0x1c)) {
            if (uStack_80._4_4_ == 0) {
              iVar4 = 1;
              uStack_80 = CONCAT44(1,(uint)uStack_80);
              uVar10 = uStack_80;
              if (param_3 == 0) goto LAB_10ad492a4;
LAB_10ad49290:
              uStack_80 = uVar10;
              uStack_80 = CONCAT44(4,(uint)uStack_80);
            }
            else {
              iVar4 = uStack_80._4_4_;
              if (param_3 != 0) goto LAB_10ad49290;
LAB_10ad492a4:
              uStack_80 = uVar10;
              if (1 < iVar4 - 3U) goto LAB_10ad492bc;
            }
            func_0x0001077f9f4c(param_1 + 0x28,&uStack_80);
            goto LAB_10ad492bc;
          }
          plVar5 = plVar5 + 1;
        }
      }
      if (((param_3 & 1) == 0) && (1 < uStack_80._4_4_ - 3U)) {
        uStack_80 = uVar10 & 0xffffffff;
        func_0x000107426fd8(param_1 + 0x28,&uStack_80,&uStack_80);
LAB_10ad492bc:
        pppppuVar8 = &ppppuStack_60;
        pppppuVar9 = &ppppuStack_60;
        if ((undefined8 *****)ppppuStack_60 != (undefined8 *****)0x0) {
          pppppuVar1 = (undefined8 *****)ppppuStack_60;
          do {
            while (pppppuVar8 = pppppuVar1, (uint)uStack_80 < *(uint *)((long)pppppuVar8 + 0x1c)) {
              pppppuVar1 = (undefined8 *****)*pppppuVar8;
              pppppuVar9 = pppppuVar8;
              if ((undefined8 *****)*pppppuVar8 == (undefined8 *****)0x0) goto LAB_10ad49304;
            }
            uVar10 = uStack_80;
            if ((uint)uStack_80 <= *(uint *)((long)pppppuVar8 + 0x1c)) goto LAB_10ad4934c;
            pppppuVar1 = (undefined8 *****)pppppuVar8[1];
          } while ((undefined8 *****)pppppuVar8[1] != (undefined8 *****)0x0);
          pppppuVar9 = pppppuVar8 + 1;
        }
LAB_10ad49304:
        ppppuVar3 = (undefined8 ****)0x30;
        __Znwm();
        *(undefined8 *)((long)ppppuVar3 + 0x24) = uStack_78;
        *(ulong *)((long)ppppuVar3 + 0x1c) = uStack_80;
        *ppppuVar3 = (undefined8 ***)0x0;
        ppppuVar3[1] = (undefined8 ***)0x0;
        ppppuVar3[2] = pppppuVar8;
        *pppppuVar9 = ppppuVar3;
        if ((undefined8 *****)*ppppuStack_68 != (undefined8 *****)0x0) {
          ppppuVar3 = *pppppuVar9;
          ppppuStack_68 = (undefined8 ****)*ppppuStack_68;
        }
        func_0x000107c2b058(ppppuStack_60,ppppuVar3);
        lStack_58 = lStack_58 + 1;
        uVar10 = uStack_80;
      }
LAB_10ad4934c:
      uStack_80 = uVar10;
      plVar5 = (long *)plVar6[1];
      plVar7 = plVar6;
      if ((long *)plVar6[1] == (long *)0x0) {
        do {
          plVar6 = (long *)plVar7[2];
          bVar2 = (long *)*plVar6 != plVar7;
          plVar7 = plVar6;
        } while (bVar2);
      }
      else {
        do {
          plVar6 = plVar5;
          plVar5 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
    } while (plVar6 != param_2 + 1);
    if (lStack_58 != 0) {
      ppppuStack_98 = ppppuStack_68;
      ppppuStack_90 = ppppuStack_60;
      lStack_88 = lStack_58;
      ppppuStack_60[2] = &ppppuStack_90;
      ppppuStack_60 = (undefined8 *****)0x0;
      lStack_58 = 0;
      ppppuStack_68 = &ppppuStack_60;
      FUN_10a1d6598(&uStack_80,&ppppuStack_98);
      FUN_10a1ce910(&ppppuStack_98,ppppuStack_90);
      plVar6 = (long *)(param_1 + 0x10);
      while (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0) {
        (**(code **)(*(long *)plVar6[2] + 0x10))((long *)plVar6[2],&uStack_80);
      }
      FUN_10a1ce910(&uStack_80,uStack_78);
    }
  }
  FUN_10a1ce910(&ppppuStack_68,ppppuStack_60);
  return;
}



/* Entry: 10ad49454; end: 10ad4955b;  */

void FUN_10ad49454(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  undefined8 uStack_38;
  
  if (*(int *)(param_2 + 0x10) == 4) {
    if ((param_3 & 1) != 0) {
      return;
    }
    for (plVar3 = *(long **)(param_1 + 0x10); plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      (**(code **)(*(long *)plVar3[2] + 0x18))((long *)plVar3[2],param_2);
    }
    return;
  }
  uStack_38 = *(undefined8 *)(param_2 + 8);
  lVar1 = param_1 + 0x40;
  FUN_10ad4964c(lVar1,&uStack_38);
  uVar4 = *(uint *)(param_2 + 0x10);
  uVar2 = uVar4;
  if (uVar4 == 0 && lVar1 != 0) {
    uVar2 = 1;
  }
  if (lVar1 == 0) {
    if ((param_3 & 1) != 0) {
      return;
    }
    if ((uVar4 & 0xfffffffe) == 2) {
      return;
    }
LAB_10ad49520:
    uStack_38 = *(undefined8 *)(param_2 + 8);
    FUN_10ad496b0(param_1 + 0x40,&uStack_38,&uStack_38);
    uVar2 = 0;
  }
  else {
    if ((param_3 & 1) == 0) {
      if (uVar2 == 0) goto LAB_10ad49520;
      if ((uVar2 & 0xfffffffe) != 2) goto LAB_10ad4953c;
    }
    else {
      uVar4 = 3;
    }
    uStack_38 = *(undefined8 *)(param_2 + 8);
    func_0x00010ad49800(param_1 + 0x40,&uStack_38);
    uVar2 = uVar4;
  }
LAB_10ad4953c:
  FUN_10ad4955c(param_1,param_2,uVar2);
  return;
}



/* Entry: 10ad4955c; end: 10ad4964b;  */

void FUN_10ad4955c(long param_1,long *param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  long *plStack_38;
  
  if ((int)param_2[2] == param_3) {
    for (plVar1 = *(long **)(param_1 + 0x10); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      (**(code **)(*(long *)plVar1[2] + 0x18))((long *)plVar1[2],param_2);
    }
  }
  else {
    (**(code **)(*param_2 + 0x18))(&plStack_38,param_2);
    plVar1 = plStack_38;
    *(int *)(plStack_38 + 2) = param_3;
    plVar2 = *(long **)(param_1 + 0x10);
    if (plVar2 != (long *)0x0) {
      do {
        (**(code **)(*(long *)plVar2[2] + 0x18))((long *)plVar2[2],plVar1);
        plVar2 = (long *)*plVar2;
      } while (plVar2 != (long *)0x0);
      plVar1 = plStack_38;
      if (plStack_38 == (long *)0x0) {
        return;
      }
    }
    plStack_38 = (long *)0x0;
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  return;
}



/* Entry: 10ad4964c; end: 10ad496af;  */

undefined8 FUN_10ad4964c(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 != (long *)0x0) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    do {
      uVar3 = *(uint *)((long)plVar4 + 0x1c);
      if (uVar1 == uVar3) {
        uVar3 = *(uint *)(plVar4 + 4);
        if ((int)uVar3 <= (int)uVar2) {
          if (uVar3 == uVar2 || (int)uVar2 <= (int)uVar3) {
            return 1;
          }
LAB_10ad4969c:
          plVar4 = plVar4 + 1;
        }
      }
      else if (uVar3 <= uVar1) {
        if (uVar1 <= uVar3) {
          return 1;
        }
        goto LAB_10ad4969c;
      }
      plVar4 = (long *)*plVar4;
    } while (plVar4 != (long *)0x0);
  }
  return 0;
}



/* Entry: 10ad496b0; end: 10ad4972f;  */

undefined1  [16] FUN_10ad496b0(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  FUN_10ad49730(param_1,&uStack_38,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    lVar3 = 0x28;
    __Znwm();
    *(undefined8 *)(lVar3 + 0x1c) = *param_3;
    FUN_10ad497ac(param_1,uStack_38,plVar2,lVar3);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 10ad49730; end: 10ad497ab;  */

long * FUN_10ad49730(long param_1,long *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar5 = (long *)(param_1 + 8);
  plVar6 = plVar5;
  if ((long *)*plVar5 != (long *)0x0) {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    plVar4 = (long *)*plVar5;
    do {
      while( true ) {
        plVar6 = plVar4;
        uVar3 = *(uint *)((long)plVar6 + 0x1c);
        if (uVar1 != uVar3) break;
        uVar3 = *(uint *)(plVar6 + 4);
        if ((int)uVar2 < (int)uVar3) goto LAB_10ad49774;
        if (uVar3 == uVar2 || (int)uVar2 <= (int)uVar3) goto LAB_10ad497a4;
LAB_10ad49790:
        plVar5 = plVar6 + 1;
        plVar4 = (long *)*plVar5;
        if ((long *)*plVar5 == (long *)0x0) goto LAB_10ad497a4;
      }
      if (uVar3 <= uVar1) {
        if (uVar3 < uVar1) goto LAB_10ad49790;
        break;
      }
LAB_10ad49774:
      plVar5 = plVar6;
      plVar4 = (long *)*plVar6;
    } while ((long *)*plVar6 != (long *)0x0);
  }
LAB_10ad497a4:
  *param_2 = (long)plVar6;
  return plVar5;
}



/* Entry: 10ad497ac; end: 10ad498bb;  */

void FUN_10ad497ac(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c2b058(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10ad498bc; end: 10ad49903;  */

long FUN_10ad498bc(undefined8 param_1,uint *param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_3 != 0) {
    lVar2 = param_4;
    do {
      uVar3 = 0xff;
      if (*param_2 <= *(uint *)(param_3 + 0x1c)) {
        uVar3 = 0;
      }
      if (*(uint *)(param_3 + 0x1c) == *param_2) {
        uVar1 = 0xff;
        if ((int)param_2[1] <= (int)*(uint *)(param_3 + 0x20)) {
          uVar1 = 0;
        }
        uVar3 = 0;
        if (*(uint *)(param_3 + 0x20) != param_2[1]) {
          uVar3 = uVar1;
        }
      }
      param_4 = param_3;
      if ((uVar3 & 0x80) != 0) {
        param_4 = lVar2;
      }
      param_3 = *(long *)(param_3 + ((uVar3 & 0x80) >> 4));
      lVar2 = param_4;
    } while (param_3 != 0);
  }
  return param_4;
}



/* Entry: 10ad49904; end: 10ad49973;  */

long * FUN_10ad49904(long *param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = param_2;
  plVar1 = (long *)param_2[1];
  if ((long *)param_2[1] == (long *)0x0) {
    do {
      plVar4 = (long *)plVar3[2];
      bVar2 = (long *)*plVar4 != plVar3;
      plVar3 = plVar4;
    } while (bVar2);
  }
  else {
    do {
      plVar4 = plVar1;
      plVar1 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
  if ((long *)*param_1 == param_2) {
    *param_1 = (long)plVar4;
  }
  param_1[2] = param_1[2] + -1;
  FUN_10a04815c(param_1[1]);
  return plVar4;
}



/* Entry: 10ad49974; end: 10ad49d93;  */

undefined1  [16] FUN_10ad49974(long *param_1,ulong *param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  ulong unaff_x24;
  undefined1 auVar19 [16];
  
  uVar7 = *param_2;
  uVar11 = ((ulong)(uint)((int)uVar7 << 3) + 8 ^ uVar7 >> 0x20) * -0x622015f714c7d297;
  uVar11 = (uVar7 >> 0x20 ^ uVar11 >> 0x2f ^ uVar11) * -0x622015f714c7d297;
  uVar18 = (uVar11 ^ uVar11 >> 0x2f) * -0x622015f714c7d297;
  uVar11 = param_1[1];
  if (uVar11 != 0) {
    uVar9 = uVar11 - 1;
    if ((uVar11 & uVar9) == 0) {
      unaff_x24 = uVar18 & uVar9;
    }
    else {
      unaff_x24 = uVar18;
      if (uVar11 <= uVar18) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = uVar18 / uVar11;
        }
        unaff_x24 = uVar18 - uVar13 * uVar11;
      }
    }
    puVar12 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar12 != (undefined8 *)0x0) {
      for (plVar17 = (long *)*puVar12; plVar17 != (long *)0x0; plVar17 = (long *)*plVar17) {
        uVar13 = plVar17[1];
        if (uVar13 == uVar18) {
          if (plVar17[2] == uVar7) {
            uVar6 = 0;
            goto LAB_10ad49d18;
          }
        }
        else {
          if ((uVar11 & uVar9) == 0) {
            uVar13 = uVar13 & uVar9;
          }
          else if (uVar11 <= uVar13) {
            uVar16 = 0;
            if (uVar11 != 0) {
              uVar16 = uVar13 / uVar11;
            }
            uVar13 = uVar13 - uVar16 * uVar11;
          }
          if (uVar13 != unaff_x24) break;
        }
      }
    }
  }
  plVar17 = (long *)0x20;
  __Znwm();
  *plVar17 = 0;
  plVar17[1] = uVar18;
  lVar8 = param_3[1];
  lVar5 = *param_3;
  plVar17[3] = param_3[1];
  plVar17[2] = lVar5;
  if (lVar8 != 0) {
    plVar10 = (long *)(lVar8 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = *plVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if ((uVar11 == 0) || (*(float *)(param_1 + 4) * (float)uVar11 < (float)(param_1[3] + 1))) {
    uVar7 = 1;
    if (2 < uVar11) {
      uVar7 = (ulong)((uVar11 & uVar11 - 1) != 0);
    }
    uVar7 = uVar7 | uVar11 << 1;
    uVar11 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar7 <= uVar11) {
      uVar7 = uVar11;
    }
    if (uVar7 - 1 == 0) {
      uVar7 = 2;
    }
    else if ((uVar7 & uVar7 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    uVar11 = param_1[1];
    if (uVar11 < uVar7) {
LAB_10ad49b28:
      if (uVar7 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad49d80);
        (*pcVar4)();
      }
      lVar8 = uVar7 << 3;
      __Znwm();
      lVar5 = *param_1;
      *param_1 = lVar8;
      if (lVar5 != 0) {
        __ZdlPv();
      }
      uVar11 = 0;
      param_1[1] = uVar7;
      do {
        *(undefined8 *)(*param_1 + uVar11 * 8) = 0;
        uVar11 = uVar11 + 1;
      } while (uVar7 != uVar11);
      plVar10 = (long *)param_1[2];
      uVar11 = uVar7;
      if (plVar10 != (long *)0x0) {
        uVar9 = plVar10[1];
        uVar13 = uVar7 - 1;
        if ((uVar7 & uVar13) == 0) {
          uVar9 = uVar9 & uVar13;
        }
        else if (uVar7 <= uVar9) {
          uVar16 = 0;
          if (uVar7 != 0) {
            uVar16 = uVar9 / uVar7;
          }
          uVar9 = uVar9 - uVar16 * uVar7;
        }
        *(long **)(*param_1 + uVar9 * 8) = param_1 + 2;
        plVar14 = (long *)*plVar10;
        while (plVar14 != (long *)0x0) {
          uVar16 = plVar14[1];
          if ((uVar7 & uVar13) == 0) {
            uVar16 = uVar16 & uVar13;
          }
          else if (uVar7 <= uVar16) {
            uVar3 = 0;
            if (uVar7 != 0) {
              uVar3 = uVar16 / uVar7;
            }
            uVar16 = uVar16 - uVar3 * uVar7;
          }
          plVar15 = plVar14;
          if (uVar16 != uVar9) {
            lVar8 = *param_1;
            if (*(long *)(lVar8 + uVar16 * 8) == 0) {
              *(long **)(lVar8 + uVar16 * 8) = plVar10;
              uVar9 = uVar16;
            }
            else {
              *plVar10 = *plVar14;
              *plVar14 = **(undefined8 **)(lVar8 + uVar16 * 8);
              **(long **)(lVar8 + uVar16 * 8) = (long)plVar14;
              plVar15 = plVar10;
            }
          }
          plVar10 = plVar15;
          plVar14 = (long *)*plVar15;
        }
      }
    }
    else if (uVar7 < uVar11) {
      uVar9 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar11 < 3) || ((uVar11 & uVar11 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar9) {
        uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
      }
      if (uVar7 <= uVar9) {
        uVar7 = uVar9;
      }
      if (uVar7 < uVar11) {
        if (uVar7 != 0) goto LAB_10ad49b28;
        lVar8 = *param_1;
        *param_1 = 0;
        if (lVar8 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar11 = 0;
      }
      else {
        uVar11 = param_1[1];
      }
    }
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x24 = uVar11 - 1 & uVar18;
    }
    else {
      unaff_x24 = uVar18;
      if (uVar11 <= uVar18) {
        uVar7 = 0;
        if (uVar11 != 0) {
          uVar7 = uVar18 / uVar11;
        }
        unaff_x24 = uVar18 - uVar7 * uVar11;
      }
    }
  }
  lVar8 = *param_1;
  plVar10 = *(long **)(lVar8 + unaff_x24 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = param_1 + 2;
    *plVar17 = *plVar10;
    *plVar10 = (long)plVar17;
    *(long **)(lVar8 + unaff_x24 * 8) = plVar10;
    if (*plVar17 == 0) goto LAB_10ad49d08;
    uVar7 = *(ulong *)(*plVar17 + 8);
    if ((uVar11 & uVar11 - 1) == 0) {
      uVar7 = uVar7 & uVar11 - 1;
    }
    else if (uVar11 <= uVar7) {
      uVar18 = 0;
      if (uVar11 != 0) {
        uVar18 = uVar7 / uVar11;
      }
      uVar7 = uVar7 - uVar18 * uVar11;
    }
    plVar10 = (long *)(*param_1 + uVar7 * 8);
  }
  else {
    *plVar17 = *plVar10;
  }
  *plVar10 = (long)plVar17;
LAB_10ad49d08:
  param_1[3] = param_1[3] + 1;
  uVar6 = 1;
LAB_10ad49d18:
  auVar19._8_8_ = uVar6;
  auVar19._0_8_ = plVar17;
  return auVar19;
}



/* Entry: 10ad49d94; end: 10ad49e0f;  */

void FUN_10ad49d94(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a3f5af8(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10ad49e10; end: 10ad49ee7;  */

long * FUN_10ad49e10(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = *param_2;
    uVar4 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
    uVar4 = (uVar3 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar5 = uVar2 - 1;
    if ((uVar2 & uVar5) == 0) {
      uVar6 = uVar4 & uVar5;
    }
    else {
      uVar6 = uVar4;
      if (uVar2 <= uVar4) {
        uVar6 = 0;
        if (uVar2 != 0) {
          uVar6 = uVar4 / uVar2;
        }
        uVar6 = uVar4 - uVar6 * uVar2;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      do {
        if (plVar7 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar8 = plVar7[1];
        if (uVar8 == uVar4) {
          if (plVar7[2] == uVar3) {
            return plVar7;
          }
        }
        else {
          if ((uVar2 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar2 <= uVar8) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar8 / uVar2;
            }
            uVar8 = uVar8 - uVar1 * uVar2;
          }
          if (uVar8 != uVar6) {
            return (long *)0x0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10ad49ee8; end: 10ad49f47;  */

undefined8 FUN_10ad49ee8(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long alStack_38 [2];
  char cStack_28;
  
  if (param_2 != (undefined8 *)0x0) {
    uVar3 = *param_2;
    FUN_10ad49f48(alStack_38);
    lVar1 = alStack_38[0];
    alStack_38[0] = 0;
    if (lVar1 != 0) {
      if (cStack_28 == '\x01') {
        func_0x00010a3f5af8(lVar1 + 0x10);
      }
      __ZdlPv(lVar1);
    }
    return uVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10ad49f48);
  (*pcVar2)();
}



/* Entry: 10ad49f48; end: 10ad4a067;  */

void FUN_10ad49f48(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar5 = uVar4 - 1;
  if ((uVar4 & uVar5) == 0) {
    uVar3 = uVar5 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_3);
  if (plVar7 != param_2 + 2) {
    uVar8 = plVar7[1];
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10ad49ffc;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10ad49ffc;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_10ad49ffc:
  lVar6 = *param_3;
  if (lVar6 != 0) {
    uVar8 = *(ulong *)(lVar6 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar5 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(*param_2 + uVar8 * 8) = plVar7;
      lVar6 = *param_3;
    }
  }
  *plVar7 = lVar6;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10ad4a068; end: 10ad4a0bb;  */

void FUN_10ad4a068(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1[3] != 0) {
    func_0x00010a3f5abc(param_1,param_1[2]);
    param_1[2] = 0;
    lVar1 = param_1[1];
    if (lVar1 != 0) {
      lVar2 = 0;
      do {
        *(undefined8 *)(*param_1 + lVar2 * 8) = 0;
        lVar2 = lVar2 + 1;
      } while (lVar1 != lVar2);
    }
    param_1[3] = 0;
  }
  return;
}



/* Entry: 10ad4a0bc; end: 10ad4a1a7;  */

void FUN_10ad4a0bc(long param_1)

{
  undefined8 *puVar1;
  undefined5 uStack_48;
  undefined3 uStack_43;
  undefined5 uStack_40;
  undefined1 uStack_3b;
  char cStack_31;
  undefined1 uStack_29;
  undefined5 *puStack_28;
  
  cStack_31 = '\r';
  uStack_48 = 0x6567616d49;
  uStack_43 = 0x546f54;
  uStack_40 = 0x726f736e65;
  uStack_3b = 0;
  puStack_28 = &uStack_48;
  func_0x000109a1b56c(param_1,&uStack_48,&UNK_10dd5b8f9,&puStack_28,&uStack_29);
  puVar1 = (undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x28) = &DAT_110c70370;
  *(code **)(param_1 + 0x30) = FUN_10ad4a7cc;
  (**(code **)*puVar1)(puVar1);
  *puVar1 = &PTR_FUN_110c70388;
  *(undefined ***)(param_1 + 0x88) = &PTR_DAT_110c703b0;
  *(undefined8 *)(param_1 + 0x80) = 2;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 1;
  *(undefined8 *)(param_1 + 0xa8) = 1;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined ***)(param_1 + 0x78) = &PTR_DAT_110c703a0;
  *(code **)(param_1 + 0x70) = FUN_10ad4aa30;
  if (cStack_31 < '\0') {
    __ZdlPv(CONCAT35(uStack_43,uStack_48));
  }
  return;
}



/* Entry: 10ad4a1a8; end: 10ad4a7c7;  */

void FUN_10ad4a1a8(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  char *pcVar4;
  long lVar5;
  undefined1 *puStack_f0;
  ulong uStack_e8;
  byte bStack_d9;
  undefined8 uStack_d8;
  undefined1 uStack_c1;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puVar3 = &uStack_40;
  uStack_40 = param_1;
  uStack_38 = param_2;
  func_0x0001096f1fac(puVar3,&UNK_10e50fc58);
  if (((ulong)puVar3 & 1) != 0) {
    pcVar4 = "Undefined";
LAB_10ad4a1e4:
    lVar5 = 9;
    goto LAB_10ad4a24c;
  }
  puVar3 = &uStack_40;
  func_0x0001096f1fac(puVar3,&UNK_10e50fc4c);
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = &uStack_40;
    func_0x0001096f1fac(puVar3,&UNK_10e50fc64);
    if (((ulong)puVar3 & 1) == 0) {
      puVar3 = &uStack_40;
      func_0x0001096f1fac(puVar3,&UNK_10e50fc70);
      if (((ulong)puVar3 & 1) == 0) {
        puVar3 = &uStack_40;
        func_0x0001096f1fac(puVar3,&UNK_10e50fc40);
        if (((ulong)puVar3 & 1) == 0) {
          puVar3 = &uStack_40;
          func_0x0001096f1fac(puVar3,&UNK_10e50fc7c);
          if (((ulong)puVar3 & 1) == 0) {
            puVar3 = &uStack_40;
            func_0x0001096f1fac(puVar3,&UNK_10e50fc28);
            if (((ulong)puVar3 & 1) == 0) {
              puVar3 = &uStack_40;
              func_0x0001096f1fac(puVar3,&UNK_10e50fc88);
              if (((ulong)puVar3 & 1) != 0) {
                pcVar4 = "GreyA8";
                goto LAB_10ad4a3c0;
              }
              puVar3 = &uStack_40;
              func_0x0001096f1fac(puVar3,&UNK_10e50fc34);
              if (((ulong)puVar3 & 1) != 0) {
                lVar5 = 3;
                pcVar4 = "RY8";
                goto LAB_10ad4a24c;
              }
              puVar3 = &uStack_40;
              func_0x0001096f1fac(puVar3,&UNK_10e50fc94);
              if (((ulong)puVar3 & 1) == 0) {
                puVar3 = &uStack_40;
                func_0x0001096f1fac(puVar3,&UNK_10e50fca0);
                if (((ulong)puVar3 & 1) == 0) {
                  puVar3 = &uStack_40;
                  func_0x0001096f1fac(puVar3,&UNK_10e50fcac);
                  if (((ulong)puVar3 & 1) == 0) {
                    puVar3 = &uStack_40;
                    func_0x0001096f1fac(puVar3,&UNK_10e50fcb8);
                    if (((ulong)puVar3 & 1) == 0) {
                      puVar3 = &uStack_40;
                      func_0x0001096f1fac(puVar3,&UNK_10e50fcc4);
                      if (((ulong)puVar3 & 1) == 0) {
                        puVar3 = &uStack_40;
                        func_0x0001096f1fac(puVar3,&UNK_10e50fcd0);
                        if (((ulong)puVar3 & 1) != 0) {
                          pcVar4 = "GreyA16F";
                          goto LAB_10ad4a4ac;
                        }
                        puVar3 = &uStack_40;
                        func_0x0001096f1fac(puVar3,&UNK_10e50fcdc);
                        if (((ulong)puVar3 & 1) != 0) {
                          pcVar4 = "RGBA8U";
LAB_10ad4a3c0:
                          lVar5 = 6;
                          goto LAB_10ad4a24c;
                        }
                        puVar3 = &uStack_40;
                        func_0x0001096f1fac(puVar3,&UNK_10e50fce8);
                        if (((ulong)puVar3 & 1) == 0) {
                          puVar3 = &uStack_40;
                          func_0x0001096f1fac(puVar3,&UNK_10e50fcf4);
                          if (((ulong)puVar3 & 1) == 0) {
                            puVar3 = &uStack_40;
                            func_0x0001096f1fac(puVar3,&UNK_10e50fd00);
                            if (((ulong)puVar3 & 1) != 0) {
                              pcVar4 = "Grey8U";
                              goto LAB_10ad4a3c0;
                            }
                            puVar3 = &uStack_40;
                            func_0x0001096f1fac(puVar3,&UNK_10e50fd0c);
                            if (((ulong)puVar3 & 1) == 0) {
                              puVar3 = &uStack_40;
                              func_0x0001096f1fac(puVar3,&UNK_10e50fd18);
                              if (((ulong)puVar3 & 1) == 0) {
                                puVar3 = &uStack_40;
                                func_0x0001096f1fac(puVar3,&UNK_10e50fd24);
                                if (((ulong)puVar3 & 1) == 0) {
                                  puVar3 = &uStack_40;
                                  func_0x0001096f1fac(puVar3,&UNK_10e50fd30);
                                  if (((ulong)puVar3 & 1) == 0) {
                                    puVar3 = &uStack_40;
                                    func_0x0001096f1fac(puVar3,&UNK_10e50fd3c);
                                    if (((ulong)puVar3 & 1) != 0) {
                                      lVar5 = 10;
                                      pcVar4 = "RGBA8_sRGB";
                                      goto LAB_10ad4a24c;
                                    }
                                    puVar3 = &uStack_40;
                                    func_0x0001096f1fac(puVar3,&UNK_10e50fd48);
                                    if (((ulong)puVar3 & 1) == 0) {
                                      puVar3 = &uStack_40;
                                      func_0x0001096f1fac(puVar3,&UNK_10e50fd54);
                                      if (((ulong)puVar3 & 1) == 0) {
                                        puVar3 = &uStack_40;
                                        func_0x0001096f1fac(puVar3,&UNK_10e50fd60);
                                        if (((ulong)puVar3 & 1) == 0) {
                                          puVar3 = &uStack_40;
                                          func_0x0001096f1fac(puVar3,&UNK_10e50fd6c);
                                          if (((ulong)puVar3 & 1) != 0) {
                                            pcVar4 = "YUV420888";
                                            goto LAB_10ad4a1e4;
                                          }
                                          puVar3 = &uStack_40;
                                          func_0x0001096f1fac(puVar3,&UNK_10e50fd78);
                                          if (((ulong)puVar3 & 1) == 0) {
                                            puVar3 = &uStack_40;
                                            func_0x0001096f1fac(puVar3,&UNK_10e50fd84);
                                            if (((ulong)puVar3 & 1) != 0) {
                                              pcVar4 = "YCbCr8";
                                              goto LAB_10ad4a3c0;
                                            }
                                            puVar3 = &uStack_40;
                                            func_0x0001096f1fac(puVar3,&UNK_10e50fd90);
                                            if (((ulong)puVar3 & 1) != 0) {
                                              pcVar4 = "Depth16";
                                              goto LAB_10ad4a488;
                                            }
                                            puVar3 = &uStack_40;
                                            func_0x0001096f1fac(puVar3,&UNK_10e50fd9c);
                                            if (((ulong)puVar3 & 1) == 0) {
                                              puVar3 = &uStack_40;
                                              func_0x0001096f1fac(puVar3,&UNK_10e50fda8);
                                              if (((ulong)puVar3 & 1) == 0) {
                                                puVar3 = &uStack_40;
                                                func_0x0001096f1fac(puVar3,&UNK_10e50fdb4);
                                                bVar2 = (int)puVar3 == 0;
                                                lVar5 = 0x11;
                                                if (bVar2) {
                                                  lVar5 = 7;
                                                }
                                                pcVar4 = "DepthStencil32F_8";
                                                if (bVar2) {
                                                  pcVar4 = "Unknown";
                                                }
                                              }
                                              else {
                                                lVar5 = 0x10;
                                                pcVar4 = "DepthStencil24_8";
                                              }
                                              goto LAB_10ad4a24c;
                                            }
                                            pcVar4 = "DepthF32";
                                            goto LAB_10ad4a4ac;
                                          }
                                          pcVar4 = "I420";
                                        }
                                        else {
                                          pcVar4 = "P010";
                                        }
                                      }
                                      else {
                                        pcVar4 = "NV21";
                                      }
                                    }
                                    else {
                                      pcVar4 = "NV12";
                                    }
                                    goto LAB_10ad4a37c;
                                  }
                                  pcVar4 = "GreyA32U";
                                }
                                else {
                                  pcVar4 = "GreyA16U";
                                }
LAB_10ad4a4ac:
                                lVar5 = 8;
                                goto LAB_10ad4a24c;
                              }
                              pcVar4 = "Grey32U";
                            }
                            else {
                              pcVar4 = "Grey16U";
                            }
                          }
                          else {
                            pcVar4 = "RGBA32U";
                          }
                        }
                        else {
                          pcVar4 = "RGBA16U";
                        }
                      }
                      else {
                        pcVar4 = "Grey32F";
                      }
                    }
                    else {
                      pcVar4 = "Grey16F";
                    }
                  }
                  else {
                    pcVar4 = "RGBA32F";
                  }
                }
                else {
                  pcVar4 = "RGBA16F";
                }
LAB_10ad4a488:
                lVar5 = 7;
                goto LAB_10ad4a24c;
              }
              pcVar4 = "RGBY8";
            }
            else {
              pcVar4 = "Grey8";
            }
            goto LAB_10ad4a248;
          }
          pcVar4 = "BGR8";
        }
        else {
          pcVar4 = "RGB8";
        }
LAB_10ad4a37c:
        lVar5 = 4;
        goto LAB_10ad4a24c;
      }
      pcVar4 = "ARGB8";
    }
    else {
      pcVar4 = "BGRA8";
    }
  }
  else {
    pcVar4 = "RGBA8";
  }
LAB_10ad4a248:
  lVar5 = 5;
LAB_10ad4a24c:
  uStack_c1 = (undefined1)lVar5;
  _memcpy(&uStack_d8,pcVar4,lVar5);
  *(undefined1 *)((long)&uStack_d8 + lVar5) = 0;
  puVar3 = &uStack_d8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar3,0,&UNK_10f6a73c8,0x2f);
  uStack_b8 = puVar3[1];
  uStack_c0 = *puVar3;
  uStack_b0 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  puVar3 = &uStack_c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar3,&UNK_10f6a73f8,0x2f);
  uStack_98 = puVar3[1];
  uStack_a0 = *puVar3;
  uStack_90 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  __ZNSt3__19to_stringEi(&puStack_f0,param_3);
  if (-1 < (char)bStack_d9) {
    uStack_e8 = (ulong)bStack_d9;
    puStack_f0 = (undefined1 *)&puStack_f0;
  }
  puVar3 = &uStack_a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar3,puStack_f0,uStack_e8);
  uStack_78 = puVar3[1];
  uStack_80 = *puVar3;
  uStack_70 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  puVar3 = &uStack_80;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar3,&UNK_10f6a7428,0x23);
  uStack_58 = puVar3[1];
  uStack_60 = *puVar3;
  uStack_50 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  FUN_10a0029c0(&uStack_60);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad4a340);
  (*pcVar1)();
}



/* Entry: 10ad4a7c8; end: 10ad4a7cb;  */

void FUN_10ad4a7c8(void)

{
  return;
}



/* Entry: 10ad4a7cc; end: 10ad4aa1b;  */

void FUN_10ad4a7cc(ulong *param_1,long *param_2)

{
  undefined **ppuVar1;
  ulong *puVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined **ppuVar10;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined8 auStack_78 [3];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar2 = (ulong *)*param_2;
  if (param_2[1] - (long)puVar2 == 0x60) {
    if ((ulong *)param_2[1] != puVar2) {
      uVar5 = *puVar2;
      ppuVar1 = &PTR_PTR_1134051b0;
      if (*(undefined ***)(puVar2[2] + 0x28) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(puVar2[2] + 0x28);
      }
      func_0x000109a1a810(uVar5,puVar2[1],ppuVar1);
      lVar3 = *param_2;
      if (1 < (ulong)((param_2[1] - lVar3 >> 3) * -0x5555555555555555)) {
        lVar6 = *(long *)(lVar3 + 0x18);
        ppuVar10 = *(undefined ***)(*(long *)(lVar3 + 0x28) + 0x28);
        ppuVar1 = &PTR_PTR_1134051b0;
        if (ppuVar10 != (undefined **)0x0) {
          ppuVar1 = ppuVar10;
        }
        func_0x000109a1a810(lVar6,*(undefined8 *)(lVar3 + 0x20),ppuVar1);
        lVar3 = *param_2;
        if (2 < (ulong)((param_2[1] - lVar3 >> 3) * -0x5555555555555555)) {
          uVar7 = *(ulong *)(lVar3 + 0x30);
          ppuVar10 = *(undefined ***)(*(long *)(lVar3 + 0x40) + 0x28);
          ppuVar1 = &PTR_PTR_1134051b0;
          if (ppuVar10 != (undefined **)0x0) {
            ppuVar1 = ppuVar10;
          }
          func_0x000109a1a810(uVar7,*(undefined8 *)(lVar3 + 0x38),ppuVar1);
          lVar3 = *param_2;
          if (3 < (ulong)((param_2[1] - lVar3 >> 3) * -0x5555555555555555)) {
            lVar8 = *(long *)(lVar3 + 0x48);
            ppuVar10 = *(undefined ***)(*(long *)(lVar3 + 0x58) + 0x28);
            ppuVar1 = &PTR_PTR_1134051b0;
            if (ppuVar10 != (undefined **)0x0) {
              ppuVar1 = ppuVar10;
            }
            func_0x000109a1a810(lVar8,*(undefined8 *)(lVar3 + 0x50),ppuVar1);
            *param_1 = uVar5 & 0xffffffff | lVar6 << 0x20;
            param_1[1] = uVar7 & 0xffffffff | lVar8 << 0x20;
            *(undefined1 *)(param_1 + 2) = 1;
            return;
          }
        }
      }
    }
  }
  else {
    __ZNSt3__19to_stringEm(auStack_a8,4);
    FUN_109feb280(auStack_90,&UNK_10f6a2dee,auStack_a8);
    FUN_10a012db0(auStack_78,auStack_90,&UNK_10f638754);
    __ZNSt3__19to_stringEm(&puStack_c0,(param_2[1] - *param_2 >> 3) * -0x5555555555555555);
    if (-1 < (char)bStack_a9) {
      uStack_b8 = (ulong)bStack_a9;
      puStack_c0 = (undefined1 *)&puStack_c0;
    }
    puVar9 = auStack_78;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar9,puStack_c0,uStack_b8);
    uStack_58 = puVar9[1];
    uStack_60 = *puVar9;
    uStack_50 = puVar9[2];
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
    func_0x000105687ee0(&uStack_60);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad4a9a0);
  (*pcVar4)();
}



/* Entry: 10ad4aa1c; end: 10ad4aa2f;  */

void FUN_10ad4aa1c(void)

{
  return;
}



/* Entry: 10ad4aa30; end: 10ad4ad6f;  */

void FUN_10ad4aa30(undefined8 *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined1 auStack_240 [32];
  undefined *puStack_220;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined4 uStack_1c8;
  undefined8 uStack_110;
  uint uStack_108;
  int iStack_104;
  undefined4 uStack_f8;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = *(undefined8 **)param_1[1];
  if (puVar5 == (undefined8 *)0x0) {
LAB_10ad4ac98:
    FUN_10a00946c(&UNK_10f6a7287);
LAB_10ad4aca4:
    FUN_10a00946c(&UNK_10f6a72ba);
  }
  else {
    piVar6 = (int *)*param_1;
    if (piVar6[3] != 1) goto LAB_10ad4aca4;
    if ((*(int *)((long)puVar5 + 0xc) != piVar6[1]) || (*(int *)(puVar5 + 2) != *piVar6)) {
      FUN_10a00946c(&UNK_10f6a7303);
      goto LAB_10ad4ac98;
    }
    uStack_1f0 = *puVar5;
    uStack_1e8 = *(undefined4 *)(puVar5 + 1);
    iVar1 = piVar6[2];
    if (2 < iVar1) {
      if (iVar1 == 3) {
        puVar3 = &uStack_1f0;
        func_0x0001096f1fac(puVar3,&UNK_10e50fc40);
        if (((ulong)puVar3 & 1) == 0) {
          FUN_10ad4a1a8(uStack_1f0,uStack_1e8,3);
          goto LAB_10ad4ad14;
        }
        goto LAB_10ad4ab60;
      }
      if (iVar1 == 4) {
        puVar3 = &uStack_1f0;
        func_0x0001096f1fac(puVar3,&UNK_10e50fc4c);
        if (((ulong)puVar3 & 1) == 0) {
          FUN_10ad4a1a8(uStack_1f0,uStack_1e8,4);
          goto LAB_10ad4ad14;
        }
        goto LAB_10ad4ab60;
      }
LAB_10ad4acdc:
      __ZNSt3__19to_stringEi(&uStack_110);
      FUN_109feb280(&puStack_1e0,&UNK_10f6a7388,&uStack_110);
      FUN_10a0029c0(&puStack_1e0);
      goto LAB_10ad4ad14;
    }
    if (iVar1 == 1) {
      puVar3 = &uStack_1f0;
      func_0x0001096f1fac(puVar3,&UNK_10e50fc28);
      if (((ulong)puVar3 & 1) == 0) {
        FUN_10ad4a1a8(uStack_1f0,uStack_1e8,1);
        goto LAB_10ad4ad14;
      }
    }
    else {
      if (iVar1 != 2) goto LAB_10ad4acdc;
      puVar3 = &uStack_1f0;
      func_0x0001096f1fac(puVar3,&UNK_10e50fc34);
      if (((ulong)puVar3 & 1) == 0) {
        FUN_10ad4a1a8(uStack_1f0,uStack_1e8,2);
        goto LAB_10ad4ad14;
      }
    }
LAB_10ad4ab60:
    puStack_1e0 = (undefined *)NEON_rev64(*(undefined8 *)piVar6,4);
    uStack_1d8 = CONCAT44(1,piVar6[2]);
    uStack_110 = CONCAT44(1,piVar6[3]);
    FUN_109d0eb9c(auStack_240,&puStack_1e0,&uStack_110);
    FUN_10a314fa4(&puStack_1e0,puVar5);
    if ((puStack_1e0 != (undefined *)0x0) &&
       (_memcpy(&uStack_110,&uStack_1d8,(long)puStack_1e0 << 5), uStack_110 != 0)) {
      puStack_1e0 = &UNK_10f6a7365;
      uStack_1d8 = 0x14;
      if (puStack_220 == (undefined *)0x0) {
        FUN_10a0edfc4(&puStack_1e0);
        goto LAB_10ad4ad14;
      }
      iStack_104 = *piVar6;
      uStack_108 = piVar6[2] * piVar6[1];
      lStack_1d0 = (ulong)uStack_108 << 2;
      puStack_1e0 = puStack_220;
      uStack_1d8 = CONCAT44(iStack_104,uStack_108);
      uStack_1c8 = 4;
      uStack_f8 = 1;
      func_0x0001096f2058(0,0x437f0000,&puStack_1e0,&uStack_110);
      lVar4 = param_1[2];
      FUN_10a07224c(lVar4,auStack_240);
      *(undefined1 *)(lVar4 + 0x50) = 1;
      func_0x000105675c90(auStack_240);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
        return;
      }
      ___stack_chk_fail();
      goto LAB_10ad4acdc;
    }
  }
  uStack_1d8 = 0x13;
  puStack_1e0 = &UNK_10f6a7351;
  FUN_10a0edfc4(&puStack_1e0);
LAB_10ad4ad14:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10ad4ad18);
  (*pcVar2)();
}



/* Entry: 10ad4ad70; end: 10ad4ae17;  */

void FUN_10ad4ad70(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar6 = *param_2;
  uVar7 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  param_1[3] = uVar7;
  param_1[2] = uVar8;
  if (param_3 == 2) {
    uVar4 = *(undefined4 *)param_1;
    uVar3 = 0xfffffffffffffffe;
    do {
      puVar1 = param_1 + 1;
      *param_1 = *puVar1;
      *(undefined4 *)puVar1 = uVar4;
      *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_1 + 4);
      uVar3 = uVar3 + 2;
      param_1 = puVar1;
    } while (uVar3 < 4);
  }
  else {
    if (param_3 == 1) {
      uVar6 = *param_1;
      uVar8 = param_1[1];
      param_1[1] = param_1[3];
      *param_1 = param_1[2];
      param_1[2] = uVar6;
      param_1[3] = uVar8;
      return;
    }
    if (param_3 == 0) {
      lVar2 = 0x10;
      do {
        auVar5 = NEON_ext(*(undefined1 (*) [16])((long)param_1 + lVar2),
                          *(undefined1 (*) [16])((long)param_1 + lVar2),8,1);
        ((undefined8 *)((long)param_1 + lVar2))[1] = auVar5._8_8_;
        *(undefined8 *)((long)param_1 + lVar2) = auVar5._0_8_;
        lVar2 = lVar2 + -8;
      } while (lVar2 != -8);
    }
  }
  return;
}



/* Entry: 10ad4ae18; end: 10ad4ae73;  */

undefined8 FUN_10ad4ae18(void)

{
  undefined1 uStack_21;
  undefined1 **ppuStack_20;
  undefined1 *puStack_18;
  
  if (lRam0000000113836628 != -1) {
    puStack_18 = &uStack_21;
    ppuStack_20 = &puStack_18;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(0x113836628,&ppuStack_20,FUN_10ad4c44c);
  }
  return 0x1133075b0;
}



/* Entry: 10ad4ae74; end: 10ad4af93;  */

undefined4
FUN_10ad4ae74(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uStack_44;
  
  if (((int)param_4 - 0xdU < 2 || (int)param_5 == 4) ||
     (((int)param_5 == 3 && (FUN_10ad4ae18(), (bRam00000001133075cd & 1) == 0)))) {
    param_3 = 1;
  }
  uStack_44 = 0;
  _glGenTextures(1,&uStack_44);
  _glActiveTexture(0x84c0);
  _glBindTexture(0xde1,uStack_44);
  uVar1 = 0x2600;
  if (param_3 == 0) {
    uVar1 = 0x2601;
  }
  _glTexParameteri(0xde1,0x2801,uVar1);
  _glTexParameteri(0xde1,0x2800,uVar1);
  _glTexParameteri(0xde1,0x2802,0x812f);
  _glTexParameteri(0xde1,0x2803,0x812f);
  FUN_10ad4b248(uStack_44,0xde1,2,param_1,param_2,param_4,param_5,param_5,0,0,0);
  _glBindTexture(0xde1,0);
  return uStack_44;
}



/* Entry: 10ad4af94; end: 10ad4b123;  */

undefined4
FUN_10ad4af94(ulong param_1,ulong param_2,undefined8 param_3,int param_4,int param_5,ulong param_6,
             int param_7)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_54;
  
  if (((int)param_6 - 0xdU < 2 || param_7 == 4) ||
     ((param_7 == 3 && (FUN_10ad4ae18(), (bRam00000001133075cd & 1) == 0)))) {
    uStack_54 = 0;
    _glGenTextures(1,&uStack_54);
    uVar2 = 0x2600;
  }
  else {
    uStack_54 = 0;
    _glGenTextures(1,&uStack_54);
    uVar2 = 0x2600;
    if (param_5 == 0) {
      uVar2 = 0x2601;
    }
  }
  FUN_10ad4b124(param_6);
  _glActiveTexture(0x84c0);
  _glBindTexture(0x8c1a,uStack_54);
  _glTexParameteri(0x8c1a,0x2801,uVar2);
  _glTexParameteri(0x8c1a,0x2800,uVar2);
  if (0 < param_4) {
    iVar3 = 0;
    do {
      _glTexImage3D(0x8c1a,iVar3,param_6,param_1,param_2,param_3,0,param_6 >> 0x20,param_7);
      uVar1 = (int)param_1 / 2;
      if ((int)uVar1 < 2) {
        uVar1 = 1;
      }
      param_1 = (ulong)uVar1;
      uVar1 = (int)param_2 / 2;
      if ((int)uVar1 < 2) {
        uVar1 = 1;
      }
      param_2 = (ulong)uVar1;
      iVar3 = iVar3 + 1;
    } while (param_4 != iVar3);
  }
  _glTexParameteri(0x8c1a,0x2802,0x812f);
  _glTexParameteri(0x8c1a,0x2803,0x812f);
  _glBindTexture(0x8c1a,0);
  return uStack_54;
}



/* Entry: 10ad4b124; end: 10ad4b247;  */

undefined1  [16]
FUN_10ad4b124(uint param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
             ulong param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  int *piVar12;
  int *piVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 *puStack_30;
  undefined4 uStack_28;
  uint uStack_24;
  
  uStack_28 = (undefined4)param_2;
  uVar9 = param_2;
  uStack_24 = param_1;
  FUN_10ad4b390();
  uStack_38 = &uStack_24;
  puStack_30 = &uStack_28;
  uVar14 = param_2;
  FUN_10ad4bd78();
  uVar7 = (ulong)uStack_24;
  if ((int)uVar14 < 3000) {
    if (uStack_24 != 0xe) {
      if ((uStack_24 & 0xfffffffb) == 0xb) goto LAB_10ad4b23c;
      uVar14 = 0;
      piVar12 = (int *)&UNK_10e50fe48;
      while( true ) {
        for (; piVar13 = (int *)(&UNK_10e50fe10 + uVar14 * 8), *piVar13 < (int)uStack_24;
            uVar14 = uVar14 * 2 + 2) {
          piVar13 = piVar12;
          if (2 < uVar14) goto LAB_10ad4b1ec;
        }
        if (2 < uVar14) break;
        uVar14 = uVar14 << 1 | 1;
        piVar12 = piVar13;
      }
LAB_10ad4b1ec:
      if ((piVar13 != (int *)&UNK_10e50fe48) &&
         (*piVar13 <= (int)uStack_24 && piVar13 != (int *)&UNK_10e50fe48)) {
        uVar7 = (ulong)(uint)piVar13[1];
        uVar14 = uVar7;
        goto LAB_10ad4b20c;
      }
      goto LAB_10ad4b228;
    }
  }
  else {
    func_0x00010ad4c288(uVar7,param_2);
    uVar9 = param_2;
    if ((int)uVar7 != 0) {
      uVar14 = uVar7 >> 0x20;
LAB_10ad4b20c:
      auVar15._0_8_ = uVar7 & 0xffffffff | uVar14 << 0x20;
      auVar15._8_8_ = param_2 & 0xffffffff;
      return auVar15;
    }
LAB_10ad4b228:
    FUN_10ad4c310(&uStack_38);
  }
  FUN_10a00946c(&UNK_10f6a752b);
LAB_10ad4b23c:
  puVar8 = &UNK_10f6a7562;
  FUN_10a00946c(&UNK_10f6a7562);
  puVar2 = puStack_30;
  uVar1 = uStack_38._4_4_;
  uVar14 = (ulong)uStack_38 & 0xffffffff;
  if (((uint)param_3 >> 1 & 1) == 0) {
    _glActiveTexture(0x84c0);
    _glBindTexture(uVar9,puVar8);
  }
  FUN_10ad4b124(param_6,param_7);
  FUN_10ad4b390();
  uVar11 = param_8;
  FUN_10ad4bd78();
  bVar3 = false;
  bVar4 = false;
  bVar5 = false;
  if ((int)param_7 != 1) {
    iVar6 = (int)uVar11;
    bVar5 = SBORROW4(iVar6,2999);
    bVar3 = iVar6 + -2999 < 0;
    bVar4 = iVar6 == 2999;
  }
  uVar7 = uVar9;
  if (((param_3 & 1) == 0) || (bVar4 || bVar3 != bVar5)) {
    uVar10 = (ulong)puVar2 & 0xffffffff;
    _glTexImage2D(uVar9,uVar10,param_6,param_4,param_5,0,param_6 >> 0x20,param_8,uStack_40);
  }
  else {
    uVar10 = 0;
    _glTexSubImage2D(uVar9,0,uVar14,uVar1,param_4,param_5,param_6 >> 0x20,param_8,uStack_40);
  }
  if (((uint)param_3 >> 1 & 1) != 0) {
    auVar16._8_8_ = uVar10;
    auVar16._0_8_ = uVar7;
    return auVar16;
  }
  uVar11 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe4e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glBindTexture_11034b390)(uVar9,0);
  auVar17._8_8_ = uVar11;
  auVar17._0_8_ = uVar9;
  return auVar17;
}



/* Entry: 10ad4b248; end: 10ad4b38f;  */

void FUN_10ad4b248(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  
  if ((param_3 >> 1 & 1) == 0) {
    _glActiveTexture(0x84c0);
    _glBindTexture(param_2,param_1);
  }
  FUN_10ad4b124(param_6,param_7);
  FUN_10ad4b390();
  uVar5 = param_8;
  FUN_10ad4bd78();
  bVar1 = false;
  bVar2 = false;
  bVar3 = false;
  if ((int)param_7 != 1) {
    iVar4 = (int)uVar5;
    bVar3 = SBORROW4(iVar4,2999);
    bVar1 = iVar4 + -2999 < 0;
    bVar2 = iVar4 == 2999;
  }
  if (((param_3 & 1) == 0) || (bVar2 || bVar1 != bVar3)) {
    _glTexImage2D(param_2,param_12,param_6,param_4,param_5,0,param_6 >> 0x20,param_8,param_9);
  }
  else {
    _glTexSubImage2D(param_2,0,param_10,param_11,param_4,param_5,param_6 >> 0x20,param_8,param_9);
  }
  if ((param_3 >> 1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe4e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glBindTexture_11034b390)(param_2,0);
  return;
}



/* Entry: 10ad4b390; end: 10ad4b49f;  */

undefined4 FUN_10ad4b390(ulong param_1)

{
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined4 uVar4;
  
  uVar4 = 0x1401;
  iVar1 = 0x1401;
  switch(param_1 & 0xffffffff) {
  case 0:
    ppuVar3 = &PTR_PTR_113307718;
    ppuVar2 = ppuVar3;
    FUN_10ae079a0(0,&PTR_PTR_113307718);
    goto code_r0x00010ad4b470;
  case 1:
    break;
  case 2:
    uVar4 = 0x1400;
    break;
  case 3:
    FUN_10ad4bd78();
    uVar4 = 0x140b;
    if (iVar1 < 3000) {
      uVar4 = 0x8d61;
    }
    break;
  case 4:
    uVar4 = 0x1406;
    break;
  case 5:
    FUN_10ad4bd78();
    uVar4 = 0x84fa;
    break;
  case 6:
    uVar4 = 0x1403;
    break;
  case 7:
    uVar4 = 0x1405;
    break;
  case 8:
    uVar4 = 0x1402;
    break;
  case 9:
    uVar4 = 0x1404;
    break;
  case 10:
    uVar4 = 0x8368;
    break;
  case 0xb:
    uVar4 = 0x8c3b;
    break;
  case 0xc:
    uVar4 = 0x8dad;
    break;
  default:
    func_0x00010ae02f4c(0,param_1);
    ppuVar3 = &PTR_PTR_113307748;
    ppuVar2 = ppuVar3;
    FUN_10ae079a0();
    func_0x00010ae02f5c();
code_r0x00010ad4b470:
    FUN_10ae07cd4(ppuVar2,ppuVar3);
    uVar4 = 0;
  }
  return uVar4;
}



/* Entry: 10ad4b4a0; end: 10ad4b5fb;  */

void FUN_10ad4b4a0(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,ulong param_7,undefined8 param_8,int param_9
                  ,undefined4 param_10,undefined8 param_11,undefined4 param_12,undefined4 param_13,
                  undefined4 param_14,undefined4 param_15)

{
  int iVar1;
  
  if ((param_3 >> 1 & 1) == 0) {
    _glActiveTexture(0x84c0);
    _glBindTexture(param_2,param_1);
  }
  FUN_10ad4b124(param_7,param_8);
  FUN_10ad4b390();
  iVar1 = param_9;
  FUN_10ad4bd78();
  if (((param_3 & 1) == 0) || ((int)param_8 != 1 && iVar1 < 3000)) {
    _glTexImage3D(param_2,param_15,param_7,param_4,param_5,param_6,0,param_7 >> 0x20,param_9);
  }
  else {
    _glTexSubImage3D(param_2,0,param_12,param_13,param_14,param_4,param_5,param_6,
                     (int)(param_7 >> 0x20),param_9,param_11);
  }
  if ((param_3 >> 1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe4e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glBindTexture_11034b390)(param_2,0);
  return;
}



/* Entry: 10ad4b5fc; end: 10ad4b6d3;  */

int FUN_10ad4b5fc(int param_1)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  ulong uVar4;
  undefined1 auStack_38 [24];
  
  uVar4 = 0;
  piVar2 = (int *)&UNK_10e50feb4;
  while( true ) {
    for (; piVar3 = (int *)(&UNK_10e50fe4c + uVar4 * 8), *piVar3 < param_1; uVar4 = uVar4 * 2 + 2) {
      piVar3 = piVar2;
      if (5 < uVar4) goto LAB_10ad4b664;
    }
    if (5 < uVar4) break;
    uVar4 = uVar4 << 1 | 1;
    piVar2 = piVar3;
  }
LAB_10ad4b664:
  if ((piVar3 != (int *)&UNK_10e50feb4) && (*piVar3 <= param_1 && piVar3 != (int *)&UNK_10e50feb4))
  {
    return piVar3[1];
  }
  func_0x000107c2b054(auStack_38,&UNK_10f6a759a);
  FUN_10ad4c3d0(auStack_38);
  FUN_10a109200(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad4b6b8);
  (*pcVar1)();
}



/* Entry: 10ad4b6d4; end: 10ad4b7eb;  */

void FUN_10ad4b6d4(undefined8 param_1,int param_2,int param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  _glActiveTexture(0x84c0);
  _glBindTexture(param_4,param_1);
  uVar1 = 0x2703;
  if (param_3 == 0) {
    uVar1 = 0x2700;
  }
  uVar2 = 0x2600;
  if (param_3 != 0) {
    uVar2 = 0x2601;
  }
  if (param_2 == 0) {
    uVar1 = uVar2;
  }
  _glTexParameteri(param_4,0x2801,uVar1);
  _glTexParameteri(param_4,0x2800,uVar2);
  _glHint(0x8192,0x1102);
  if (param_2 != 0) {
    _glGenerateMipmap(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe4e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glBindTexture_11034b390)(param_4,0);
  return;
}



/* Entry: 10ad4b7ec; end: 10ad4b93f;  */

void FUN_10ad4b7ec(void)

{
  int iVar1;
  int iVar2;
  
  _glDisable(0xb44);
  _glDisable(0xb71);
  _glDisable(0xb90);
  _glDisable(0xbe2);
  _glColorMask(1,1,1,1);
  _glDepthMask(0);
  _glFrontFace(0x901);
  _glBindBuffer(0x8893,0);
  FUN_10ad4ae18();
  if (cRam00000001133075d1 == '\x01') {
    FUN_10ad4ae18();
    iVar1 = iRam00000001133075f8;
    if (iRam00000001133075f8 != 0) {
      iVar2 = 0;
      do {
        _glVertexAttribDivisor(iVar2,0);
        iVar2 = iVar2 + 1;
      } while (iVar1 != iVar2);
    }
  }
  return;
}



/* Entry: 10ad4b940; end: 10ad4ba43;  */

undefined1 * FUN_10ad4b940(undefined8 param_1)

{
  long lVar1;
  char cVar2;
  undefined8 ****ppppuVar3;
  char *pcVar4;
  code *pcVar5;
  undefined **ppuVar6;
  long *plVar7;
  long lVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  undefined **ppuVar16;
  ulong uVar17;
  undefined1 *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puStack_968;
  undefined8 uStack_960;
  undefined1 uStack_958;
  undefined *puStack_950;
  undefined8 uStack_948;
  undefined1 uStack_940;
  undefined **ppuStack_938;
  undefined *puStack_930;
  undefined *puStack_928;
  ulong uStack_920;
  ulong uStack_918;
  ulong uStack_910;
  undefined4 uStack_908;
  undefined **ppuStack_900;
  undefined *puStack_8f8;
  undefined8 uStack_8f0;
  undefined1 uStack_8e8;
  undefined *puStack_8e0;
  undefined8 uStack_8d8;
  undefined1 uStack_8d0;
  int iStack_8c8;
  undefined1 auStack_8c0 [1024];
  undefined1 auStack_4c0 [968];
  undefined8 ***pppuStack_f8;
  ulong uStack_f0;
  byte bStack_e1;
  undefined *puStack_48;
  undefined8 uStack_40;
  char cStack_31;
  
  ppuVar6 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  puStack_48 = &UNK_10f635282;
  uStack_40 = 0x2b;
  if (*(long *)(*ppuVar6 + 0x10) != 0) {
    lVar8 = *(long *)(*ppuVar6 + 0x10) + 0x18;
    lVar1 = 0x20;
    if ((int)param_1 == 0) {
      lVar1 = 0x18;
    }
    puVar18 = *(undefined1 **)(lVar8 + lVar1);
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = (undefined1 *)0x1c0;
      __Znwm();
      func_0x000107c2b054(&puStack_48,&UNK_10f6a7698);
      FUN_10a300c88(puVar18,param_1,&puStack_48);
      if (cStack_31 < '\0') {
        __ZdlPv(puStack_48);
      }
      plVar7 = *(long **)(lVar8 + lVar1);
      *(undefined1 **)(lVar8 + lVar1) = puVar18;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
        puVar18 = *(undefined1 **)(lVar8 + lVar1);
      }
    }
    return puVar18;
  }
  ppuVar6 = &puStack_48;
  FUN_10a0edfc4();
  if (cStack_31 < '\0') {
    __ZdlPv(puStack_48);
  }
  __ZdlPv();
  __Unwind_Resume(ppuVar6);
  pcVar9 = &stack0xffffffffffffff80;
  ppuVar6 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  puVar19 = *ppuVar6;
  if ((puVar19 == (undefined *)0x0) ||
     (puVar20 = puVar19, FUN_10a08f3fc(), ((ulong)puVar20 & 1) == 0)) {
    ppuVar6 = &PTR_PTR_113307600;
    ppuVar16 = ppuVar6;
    FUN_10ae079a0(0);
    lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar19 = (undefined *)0x0;
    if (ppuVar16 != (undefined **)0x0) {
      FUN_10ae03188(&puStack_8f8,auStack_4c0,0x400,auStack_8c0,0x400,ppuVar16[0x13],ppuVar16[0xf],
                    ppuVar16 + 0x14,0x400);
      puStack_968 = puStack_8e0;
      uStack_960 = uStack_8d8;
      puStack_950 = puStack_8f8;
      uStack_948 = uStack_8f0;
      uStack_958 = uStack_8d0;
      if (iStack_8c8 != 0) {
        puStack_968 = &UNK_10f6c352e;
        uStack_960 = 0x10;
        puStack_950 = &UNK_10f6c352e;
        uStack_948 = 0x10;
        uStack_958 = 0;
        uStack_8e8 = 0;
      }
      puVar21 = ppuVar16[0x12];
      puVar20 = ppuVar16[0xb];
      uVar13 = 0;
      _clock_gettime_nsec_np();
      uVar14 = uVar13;
      _pthread_self();
      _pthread_mach_thread_np();
      ppuStack_938 = ppuVar16 + 1;
      uStack_908 = *(undefined4 *)(ppuVar16 + 0xe);
      uStack_910 = uVar14 & 0xffffffff;
      ppuStack_900 = ppuVar16 + 0x10;
      puVar19 = *ppuVar16;
      ppuVar6 = (undefined **)&ppuStack_938;
      uStack_940 = uStack_8e8;
      puStack_930 = puVar20;
      puStack_928 = puVar21;
      uStack_920 = (ulong)(puVar21 != (undefined *)0x0);
      uStack_918 = uVar13;
      FUN_10ae0784c(puVar19,ppuVar6,&puStack_950,&puStack_968);
    }
    iVar15 = (int)ppuVar6;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
      return puVar19;
    }
    ___stack_chk_fail();
    if (iVar15 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar19);
    return puVar19;
  }
  if (*(long *)(puVar19 + 0x10) != 0) {
    FUN_10a090760(*(long *)(puVar19 + 0x10) + 0x18);
    ppuVar6 = &PTR___tlv_bootstrap_11340de28;
    (*(code *)PTR___tlv_bootstrap_11340de28)();
    plVar7 = (long *)*ppuVar6;
    if (plVar7 != (long *)0x0) {
      func_0x00010ad5aea0(*plVar7);
      lVar8 = *plVar7;
      if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
        func_0x00010ae06f08(1,4,&UNK_10f6a847f,&UNK_10f6a860e,0x7b,&UNK_10f6a8648);
      }
      if (*(long *)(lVar8 + 0x10) != 0) {
        _CFRelease();
      }
      *(undefined8 *)(lVar8 + 0x10) = 0;
      puVar18 = &stack0xffffffffffffff88;
      FUN_10ad57a20(puVar18);
      return puVar18;
    }
  }
  FUN_10a0edfc4();
  uVar10 = 0x1f03;
  _glGetString(0x1f03);
  func_0x000107c2b054(&pppuStack_f8,uVar10);
  uVar14 = uStack_f0;
  ppppuVar3 = (undefined8 ****)pppuStack_f8;
  if (-1 < (char)bStack_e1) {
    uVar14 = (ulong)bStack_e1;
    ppppuVar3 = &pppuStack_f8;
  }
  uVar13 = *(ulong *)(pcVar9 + 8);
  pcVar4 = *(char **)pcVar9;
  if (-1 < pcVar9[0x17]) {
    uVar13 = (ulong)(byte)pcVar9[0x17];
    pcVar4 = pcVar9;
  }
  if (uVar13 == 0) {
    lVar8 = 0;
LAB_10ad4bb94:
    uVar13 = lVar8 + uVar13;
    if (uVar13 == uVar14) {
      puVar18 = (undefined1 *)0x1;
    }
    else {
      if (uVar14 < uVar13) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10ad4bc5c);
        (*pcVar5)();
      }
      puVar18 = (undefined1 *)(ulong)(*(char *)((long)ppppuVar3 + uVar13) == ' ');
    }
  }
  else {
    if ((long)uVar13 <= (long)uVar14) {
      cVar2 = *pcVar4;
      ppppuVar11 = ppppuVar3;
      uVar17 = uVar14;
      do {
        if ((uVar17 - uVar13 == -1) ||
           (_memchr(ppppuVar11,(long)cVar2,(uVar17 - uVar13) + 1),
           ppppuVar11 == (undefined8 ****)0x0)) break;
        ppppuVar12 = ppppuVar11;
        _memcmp();
        if ((int)ppppuVar12 == 0) {
          puVar18 = (undefined1 *)0x0;
          if ((ppppuVar11 == (undefined8 ****)((long)ppppuVar3 + uVar14)) ||
             (lVar8 = (long)ppppuVar11 - (long)ppppuVar3, lVar8 == -1)) goto LAB_10ad4bc0c;
          goto LAB_10ad4bb94;
        }
        ppppuVar11 = (undefined8 ****)((long)ppppuVar11 + 1);
        uVar17 = (long)((long)ppppuVar3 + uVar14) - (long)ppppuVar11;
      } while ((long)uVar13 <= (long)uVar17);
    }
    puVar18 = (undefined1 *)0x0;
  }
LAB_10ad4bc0c:
  if ((char)bStack_e1 < '\0') {
    __ZdlPv(pppuStack_f8);
  }
  return puVar18;
}



/* Entry: 10ad4ba44; end: 10ad4bb0f;  */

undefined1 * FUN_10ad4ba44(void)

{
  char cVar1;
  undefined8 ****ppppuVar2;
  char *pcVar3;
  code *pcVar4;
  undefined **ppuVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  undefined **ppuVar14;
  ulong uVar15;
  undefined *puVar16;
  long *plVar17;
  undefined1 *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [968];
  undefined8 ***pppuStack_a8;
  ulong uStack_a0;
  byte bStack_91;
  
  pcVar7 = &stack0xffffffffffffffd0;
  ppuVar5 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  puVar16 = *ppuVar5;
  if ((puVar16 == (undefined *)0x0) ||
     (puVar19 = puVar16, FUN_10a08f3fc(), ((ulong)puVar19 & 1) == 0)) {
    ppuVar5 = &PTR_PTR_113307600;
    ppuVar14 = ppuVar5;
    FUN_10ae079a0(0);
    lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar16 = (undefined *)0x0;
    if (ppuVar14 != (undefined **)0x0) {
      FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar14[0x13],ppuVar14[0xf],
                    ppuVar14 + 0x14,0x400);
      puStack_918 = puStack_890;
      uStack_910 = uStack_888;
      puStack_900 = puStack_8a8;
      uStack_8f8 = uStack_8a0;
      uStack_908 = uStack_880;
      if (iStack_878 != 0) {
        puStack_918 = &UNK_10f6c352e;
        uStack_910 = 0x10;
        puStack_900 = &UNK_10f6c352e;
        uStack_8f8 = 0x10;
        uStack_908 = 0;
        uStack_898 = 0;
      }
      puVar20 = ppuVar14[0x12];
      puVar19 = ppuVar14[0xb];
      uVar11 = 0;
      _clock_gettime_nsec_np();
      uVar12 = uVar11;
      _pthread_self();
      _pthread_mach_thread_np();
      ppuStack_8e8 = ppuVar14 + 1;
      uStack_8b8 = *(undefined4 *)(ppuVar14 + 0xe);
      uStack_8c0 = uVar12 & 0xffffffff;
      ppuStack_8b0 = ppuVar14 + 0x10;
      puVar16 = *ppuVar14;
      ppuVar5 = (undefined **)&ppuStack_8e8;
      uStack_8f0 = uStack_898;
      puStack_8e0 = puVar19;
      puStack_8d8 = puVar20;
      uStack_8d0 = (ulong)(puVar20 != (undefined *)0x0);
      uStack_8c8 = uVar11;
      FUN_10ae0784c(puVar16,ppuVar5,&puStack_900,&puStack_918);
    }
    iVar13 = (int)ppuVar5;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
      return puVar16;
    }
    ___stack_chk_fail();
    if (iVar13 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar16);
    return puVar16;
  }
  if (*(long *)(puVar16 + 0x10) != 0) {
    FUN_10a090760(*(long *)(puVar16 + 0x10) + 0x18);
    ppuVar5 = &PTR___tlv_bootstrap_11340de28;
    (*(code *)PTR___tlv_bootstrap_11340de28)();
    plVar17 = (long *)*ppuVar5;
    if (plVar17 != (long *)0x0) {
      func_0x00010ad5aea0(*plVar17);
      lVar6 = *plVar17;
      if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
        func_0x00010ae06f08(1,4,&UNK_10f6a847f,&UNK_10f6a860e,0x7b,&UNK_10f6a8648);
      }
      if (*(long *)(lVar6 + 0x10) != 0) {
        _CFRelease();
      }
      *(undefined8 *)(lVar6 + 0x10) = 0;
      puVar18 = &stack0xffffffffffffffd8;
      FUN_10ad57a20(puVar18);
      return puVar18;
    }
  }
  FUN_10a0edfc4();
  uVar8 = 0x1f03;
  _glGetString(0x1f03);
  func_0x000107c2b054(&pppuStack_a8,uVar8);
  uVar12 = uStack_a0;
  ppppuVar2 = (undefined8 ****)pppuStack_a8;
  if (-1 < (char)bStack_91) {
    uVar12 = (ulong)bStack_91;
    ppppuVar2 = &pppuStack_a8;
  }
  uVar11 = *(ulong *)(pcVar7 + 8);
  pcVar3 = *(char **)pcVar7;
  if (-1 < pcVar7[0x17]) {
    uVar11 = (ulong)(byte)pcVar7[0x17];
    pcVar3 = pcVar7;
  }
  if (uVar11 == 0) {
    lVar6 = 0;
LAB_10ad4bb94:
    uVar11 = lVar6 + uVar11;
    if (uVar11 == uVar12) {
      puVar18 = (undefined1 *)0x1;
    }
    else {
      if (uVar12 < uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad4bc5c);
        (*pcVar4)();
      }
      puVar18 = (undefined1 *)(ulong)(*(char *)((long)ppppuVar2 + uVar11) == ' ');
    }
  }
  else {
    if ((long)uVar11 <= (long)uVar12) {
      cVar1 = *pcVar3;
      ppppuVar9 = ppppuVar2;
      uVar15 = uVar12;
      do {
        if ((uVar15 - uVar11 == -1) ||
           (_memchr(ppppuVar9,(long)cVar1,(uVar15 - uVar11) + 1), ppppuVar9 == (undefined8 ****)0x0)
           ) break;
        ppppuVar10 = ppppuVar9;
        _memcmp();
        if ((int)ppppuVar10 == 0) {
          puVar18 = (undefined1 *)0x0;
          if ((ppppuVar9 == (undefined8 ****)((long)ppppuVar2 + uVar12)) ||
             (lVar6 = (long)ppppuVar9 - (long)ppppuVar2, lVar6 == -1)) goto LAB_10ad4bc0c;
          goto LAB_10ad4bb94;
        }
        ppppuVar9 = (undefined8 ****)((long)ppppuVar9 + 1);
        uVar15 = (long)((long)ppppuVar2 + uVar12) - (long)ppppuVar9;
      } while ((long)uVar11 <= (long)uVar15);
    }
    puVar18 = (undefined1 *)0x0;
  }
LAB_10ad4bc0c:
  if ((char)bStack_91 < '\0') {
    __ZdlPv(pppuStack_a8);
  }
  return puVar18;
}



/* Entry: 10ad4bb10; end: 10ad4bc5b;  */

bool FUN_10ad4bb10(char *param_1)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  undefined8 ****ppppuVar4;
  char *pcVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  ulong uVar11;
  long lVar12;
  undefined8 ***pppuStack_78;
  ulong uStack_70;
  byte bStack_61;
  
  uVar8 = 0x1f03;
  _glGetString(0x1f03);
  func_0x000107c2b054(&pppuStack_78,uVar8);
  uVar2 = uStack_70;
  ppppuVar4 = (undefined8 ****)pppuStack_78;
  if (-1 < (char)bStack_61) {
    uVar2 = (ulong)bStack_61;
    ppppuVar4 = &pppuStack_78;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  pcVar5 = *(char **)param_1;
  if (-1 < param_1[0x17]) {
    uVar1 = (ulong)(byte)param_1[0x17];
    pcVar5 = param_1;
  }
  if (uVar1 == 0) {
    lVar12 = 0;
LAB_10ad4bb94:
    uVar1 = lVar12 + uVar1;
    if (uVar1 == uVar2) {
      bVar7 = true;
    }
    else {
      if (uVar2 < uVar1) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10ad4bc5c);
        (*pcVar6)();
      }
      bVar7 = *(char *)((long)ppppuVar4 + uVar1) == ' ';
    }
  }
  else {
    if ((long)uVar1 <= (long)uVar2) {
      cVar3 = *pcVar5;
      ppppuVar9 = ppppuVar4;
      uVar11 = uVar2;
      do {
        if ((uVar11 - uVar1 == -1) ||
           (_memchr(ppppuVar9,(long)cVar3,(uVar11 - uVar1) + 1), ppppuVar9 == (undefined8 ****)0x0))
        break;
        ppppuVar10 = ppppuVar9;
        _memcmp();
        if ((int)ppppuVar10 == 0) {
          bVar7 = false;
          if ((ppppuVar9 == (undefined8 ****)((long)ppppuVar4 + uVar2)) ||
             (lVar12 = (long)ppppuVar9 - (long)ppppuVar4, lVar12 == -1)) goto LAB_10ad4bc0c;
          goto LAB_10ad4bb94;
        }
        ppppuVar9 = (undefined8 ****)((long)ppppuVar9 + 1);
        uVar11 = (long)((long)ppppuVar4 + uVar2) - (long)ppppuVar9;
      } while ((long)uVar1 <= (long)uVar11);
    }
    bVar7 = false;
  }
LAB_10ad4bc0c:
  if ((char)bStack_61 < '\0') {
    __ZdlPv(pppuStack_78);
  }
  return bVar7;
}



/* Entry: 10ad4bc5c; end: 10ad4bd53;  */

uint FUN_10ad4bc5c(undefined **param_1)

{
  uint uVar1;
  undefined **ppuVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  
  _glGetError();
  if ((int)param_1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    uVar5 = 0;
    do {
      ppuVar2 = param_1;
      FUN_10ad4bd54();
      uVar4 = (uint)ppuVar2 | uVar4;
      func_0x00010ae02f4c(0,param_1);
      param_1 = &PTR_PTR_113307668;
      FUN_10ae079a0();
      func_0x00010ae02f5c();
      FUN_10ae07cd4(param_1,&PTR_PTR_113307668);
      uVar1 = uVar5 + 1;
      _glGetError();
      if (0x3e < uVar5) break;
      uVar5 = uVar1;
    } while ((int)param_1 != 0);
    if (uVar1 == 0x40) {
      ppuVar2 = &PTR_PTR_113307690;
      FUN_10ae079a0(0,&PTR_PTR_113307690);
      FUN_10ae07cd4(ppuVar2,&PTR_PTR_113307690);
    }
    if (uVar4 != 0) {
      ppuVar2 = &PTR___tlv_bootstrap_11340de28;
      (*(code *)PTR___tlv_bootstrap_11340de28)();
      if (*ppuVar2 != (undefined *)0x0) {
        lVar3 = 0;
        FUN_10a303694();
        if (lVar3 != 0) {
          *(uint *)(lVar3 + 0x274) = uVar4;
        }
      }
    }
  }
  return uVar4;
}



/* Entry: 10ad4bd54; end: 10ad4bd77;  */

undefined4 FUN_10ad4bd54(int param_1)

{
  if (param_1 - 0x500U < 7) {
    return *(undefined4 *)(&UNK_10e50feb8 + (ulong)(param_1 - 0x500U) * 4);
  }
  return 0;
}



/* Entry: 10ad4bd78; end: 10ad4bdd3;  */

undefined4 FUN_10ad4bd78(void)

{
  undefined1 uStack_21;
  undefined1 **ppuStack_20;
  undefined1 *puStack_18;
  
  if (lRam0000000113836638 != -1) {
    puStack_18 = &uStack_21;
    ppuStack_20 = &puStack_18;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(0x113836638,&ppuStack_20,FUN_10ad4cfa8);
  }
  return uRam0000000113836630;
}



/* Entry: 10ad4bdd4; end: 10ad4bfff;  */

void FUN_10ad4bdd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10ad4bd78();
  if (2999 < (int)uVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbeab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__glRenderbufferStorageMultisample_11034b770)
              (0x8d41,param_1,param_2,param_3,param_4);
    return;
  }
  FUN_10ad4ae18();
  if (cRam00000001133075c4 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbeaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__glRenderbufferStorage_11034b768)(0x8d41,param_2,param_3,param_4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbeabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glRenderbufferStorageMultisampleAPPLE_11034b778)
            (0x8d41,param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 10ad4c000; end: 10ad4c0a3;  */

ulong FUN_10ad4c000(void)

{
  ulong uVar1;
  uint uVar2;
  code *pcVar3;
  undefined **ppuVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  ulong uVar7;
  ulong uStack_40;
  undefined *puStack_38;
  undefined8 ***pppuStack_30;
  long **pplStack_28;
  undefined **ppuStack_20;
  undefined1 *puStack_18;
  
  ppuVar4 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  puStack_38 = *ppuVar4;
  if (puStack_38 == (undefined *)0x0) {
    uStack_40 = 0;
  }
  else {
    ppuStack_20 = (undefined **)&UNK_10f635282;
    puStack_18 = (undefined1 *)0x2b;
    if (*(long *)(puStack_38 + 0x10) == 0) {
      pppuVar5 = &ppuStack_20;
      FUN_10a0edfc4();
      pppuVar6 = pppuVar5;
      FUN_10ad4c000();
      if (0x56 < (uint)pppuVar5) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10ad4c15c);
        (*pcVar3)();
      }
      uVar1 = (ulong)pppuVar5 & 0xffffffff;
      uVar2 = *(uint *)((long)pppuVar6 + uVar1 * 8 + 0x46c);
      if (uVar2 == 0) {
        FUN_10a096250(pppuVar5);
        func_0x00010ae02f4c(0,pppuVar5);
        FUN_10ae03140();
        ppuVar4 = &PTR_PTR_1133077a0;
        FUN_10ae079a0();
        func_0x00010ae02f5c();
        FUN_10ae0314c();
        FUN_10ae07cd4(ppuVar4,&PTR_PTR_1133077a0);
        uVar2 = *(uint *)((long)pppuVar6 + uVar1 * 8 + 0x46c);
      }
      uVar7 = (ulong)uVar2;
      func_0x00010ad4be78(uVar7);
      return (ulong)*(uint *)(pppuVar6 + uVar1 + 0x8d) | uVar7 << 0x20;
    }
    uStack_40 = *(ulong *)(*(long *)(puStack_38 + 0x10) + 0xa8);
    ppuStack_20 = &puStack_38;
    if (*(long *)(uStack_40 + 0x748) != -1) {
      pplStack_28 = (long **)&ppuStack_20;
      pppuStack_30 = &pplStack_28;
      puStack_18 = (undefined1 *)&uStack_40;
      __ZNSt3__111__call_onceERVmPvPFvS2_E((long *)(uStack_40 + 0x748),&pppuStack_30,FUN_10ad4d134);
    }
  }
  return uStack_40;
}



/* Entry: 10ad4c0a4; end: 10ad4c15b;  */

ulong FUN_10ad4c0a4(ulong param_1)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  ulong uVar4;
  undefined **ppuVar5;
  
  uVar4 = param_1;
  FUN_10ad4c000();
  if ((uint)param_1 < 0x57) {
    lVar1 = uVar4 + (param_1 & 0xffffffff) * 8;
    uVar2 = *(uint *)(lVar1 + 0x46c);
    if (uVar2 == 0) {
      FUN_10a096250(param_1);
      func_0x00010ae02f4c(0,param_1);
      FUN_10ae03140();
      ppuVar5 = &PTR_PTR_1133077a0;
      FUN_10ae079a0();
      func_0x00010ae02f5c();
      FUN_10ae0314c();
      FUN_10ae07cd4(ppuVar5,&PTR_PTR_1133077a0);
      uVar2 = *(uint *)(lVar1 + 0x46c);
    }
    uVar4 = (ulong)uVar2;
    func_0x00010ad4be78(uVar4);
    return (ulong)*(uint *)(lVar1 + 0x468) | uVar4 << 0x20;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10ad4c15c);
  (*pcVar3)();
}



/* Entry: 10ad4c15c; end: 10ad4c30f;  */

undefined4 FUN_10ad4c15c(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  uint uStack_24;
  
  uStack_24 = (uint)param_1;
  uVar1 = param_1;
  FUN_10ad4c000();
  if (uVar1 != 0) {
    lVar2 = uVar1 + 0x418;
    FUN_10ad4dd84(lVar2,&uStack_24);
    if (lVar2 != 0) {
      return *(undefined4 *)(lVar2 + 0x14);
    }
    param_1 = (ulong)uStack_24;
  }
  iVar3 = (int)param_1;
  if (iVar3 < 0x1908) {
    if (iVar3 == 0x1903) {
      return 1;
    }
    if (iVar3 == 0x1907) {
      return 3;
    }
  }
  else {
    if (iVar3 == 0x1908) {
      return 4;
    }
    if (iVar3 == 0x80e1) {
      return 0x27;
    }
    if (iVar3 == 0x8227) {
      return 2;
    }
  }
  return 0;
}



/* Entry: 10ad4c310; end: 10ad4c3cf;  */

void FUN_10ad4c310(void)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined8 ***pppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  FUN_10a0ee900(&pppuStack_48,&UNK_10f6a765e,0x39);
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    pppuStack_48 = &pppuStack_48;
  }
  FUN_10ae03140(0,pppuStack_48,uStack_40);
  ppuVar2 = &PTR_PTR_113300cb8;
  FUN_10ae079a0();
  FUN_10ae0314c();
  FUN_10ae07cd4(ppuVar2,&PTR_PTR_113300cb8);
  FUN_10a109200(&pppuStack_48);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad4c3b4);
  (*pcVar1)();
}



/* Entry: 10ad4c3d0; end: 10ad4c44b;  */

undefined * FUN_10ad4c3d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [1024];
  long lStack_70;
  
  uVar3 = param_1[1];
  puVar1 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar3 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar1 = param_1;
  }
  FUN_10ae03140(0,puVar1,uVar3);
  ppuVar7 = &PTR_PTR_113300cb8;
  ppuVar6 = ppuVar7;
  FUN_10ae079a0();
  FUN_10ae0314c();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (undefined *)0x0;
  if (ppuVar6 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar6[0x13],ppuVar6[0xf],
                  ppuVar6 + 0x14,0x400);
    puStack_918 = puStack_890;
    uStack_910 = uStack_888;
    puStack_900 = puStack_8a8;
    uStack_8f8 = uStack_8a0;
    uStack_908 = uStack_880;
    if (iStack_878 != 0) {
      puStack_918 = &UNK_10f6c352e;
      uStack_910 = 0x10;
      puStack_900 = &UNK_10f6c352e;
      uStack_8f8 = 0x10;
      uStack_908 = 0;
      uStack_898 = 0;
    }
    puVar9 = ppuVar6[0x12];
    puVar8 = ppuVar6[0xb];
    uVar2 = 0;
    _clock_gettime_nsec_np();
    uVar3 = uVar2;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar6 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar6 + 0xe);
    uStack_8c0 = uVar3 & 0xffffffff;
    ppuStack_8b0 = ppuVar6 + 0x10;
    puVar4 = *ppuVar6;
    ppuVar7 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar8;
    puStack_8d8 = puVar9;
    uStack_8d0 = (ulong)(puVar9 != (undefined *)0x0);
    uStack_8c8 = uVar2;
    FUN_10ae0784c(puVar4,ppuVar7,&puStack_900,&puStack_918);
  }
  iVar5 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar5 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar4);
    return puVar4;
  }
  return puVar4;
}



/* Entry: 10ad4c44c; end: 10ad4cf8f;  */

/* WARNING: Removing unreachable block (ram,0x00010ad4c5a8) */
/* WARNING: Removing unreachable block (ram,0x00010ad4c550) */
/* WARNING: Removing unreachable block (ram,0x00010ad4c4c8) */
/* WARNING: Removing unreachable block (ram,0x00010ad4c50c) */
/* WARNING: Removing unreachable block (ram,0x00010ad4c57c) */
/* WARNING: Removing unreachable block (ram,0x00010ad4c5d4) */

void FUN_10ad4c44c(uint param_1)

{
  undefined1 uVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  char *pcVar8;
  undefined **ppuVar9;
  undefined4 uVar10;
  undefined8 uStack_340;
  int aiStack_338 [5];
  char cStack_321;
  undefined8 auStack_320 [2];
  char cStack_309;
  undefined8 auStack_308 [2];
  char cStack_2f1;
  undefined8 auStack_2f0 [2];
  char cStack_2d9;
  undefined8 auStack_2d8 [2];
  char cStack_2c1;
  int aiStack_2c0 [5];
  char cStack_2a9;
  undefined8 auStack_2a8 [2];
  char cStack_291;
  undefined8 auStack_290 [2];
  char cStack_279;
  int aiStack_278 [5];
  char cStack_261;
  undefined8 auStack_260 [2];
  char cStack_249;
  undefined8 auStack_248 [2];
  char cStack_231;
  undefined8 auStack_230 [2];
  char cStack_219;
  undefined8 auStack_218 [2];
  char cStack_201;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  undefined8 auStack_1e8 [2];
  char cStack_1d1;
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  undefined8 auStack_188 [2];
  char cStack_171;
  undefined8 auStack_170 [2];
  char cStack_159;
  undefined8 auStack_158 [2];
  char cStack_141;
  undefined8 auStack_140 [2];
  char cStack_129;
  undefined8 auStack_128 [2];
  char cStack_111;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  undefined4 uStack_74;
  undefined **ppuStack_70;
  undefined *puStack_68;
  undefined4 *puStack_60;
  undefined8 *puStack_58;
  
  FUN_10a0ee65c();
  FUN_10ad59950();
  uVar4 = param_1;
  FUN_10a0ee554();
  uVar6 = 0x1f02;
  _glGetString();
  puVar7 = auStack_98;
  uRam00000001133075b0 = uVar6;
  func_0x000107c2b054(puVar7,&UNK_10f63560e);
  FUN_10ad4bb10();
  iVar5 = (int)puVar7;
  if (((ulong)puVar7 & 1) == 0) {
    FUN_10ad4bd78();
    uRam00000001133075ba = 2999 < iVar5;
  }
  else {
    uRam00000001133075ba = true;
  }
  puVar7 = auStack_b0;
  func_0x000107c2b054(puVar7,&UNK_10f6a75c4);
  FUN_10ad4bb10();
  iVar5 = (int)puVar7;
  if (((ulong)puVar7 & 1) == 0) {
    FUN_10ad4bd78();
    uRam00000001133075bb = 0xc1b < iVar5;
  }
  else {
    uRam00000001133075bb = true;
  }
  puVar7 = auStack_c8;
  func_0x000107c2b054(puVar7,&UNK_10f560239);
  FUN_10ad4bb10();
  iVar5 = (int)puVar7;
  if (((ulong)puVar7 & 1) == 0) {
    FUN_10ad4bd78();
    uRam00000001133075bc = 2999 < iVar5;
  }
  else {
    uRam00000001133075bc = true;
  }
  puVar7 = auStack_e0;
  func_0x000107c2b054(puVar7,&UNK_10f560fb6);
  uVar1 = (char)puVar7;
  FUN_10ad4bb10();
  uRam00000001133075bd = uVar1;
  puVar7 = auStack_f8;
  func_0x000107c2b054(puVar7,&DAT_10f560328);
  bVar2 = (byte)puVar7;
  FUN_10ad4bb10();
  bRam00000001133075c5 = bVar2;
  puVar7 = auStack_110;
  func_0x000107c2b054(puVar7,&DAT_10f560348);
  bVar2 = (byte)puVar7;
  FUN_10ad4bb10();
  bRam00000001133075c6 = bVar2;
  func_0x000107c2b054(auStack_128,&UNK_10f6a75e3);
  uVar1 = (char)auStack_128;
  FUN_10ad4bb10();
  uRam00000001133075c3 = uVar1;
  if (cStack_111 < '\0') {
    __ZdlPv(auStack_128[0]);
  }
  func_0x000107c2b054(auStack_140,&UNK_10f560d30);
  uVar1 = (char)auStack_140;
  FUN_10ad4bb10();
  uRam00000001133075c7 = uVar1;
  if (cStack_129 < '\0') {
    __ZdlPv(auStack_140[0]);
  }
  func_0x000107c2b054(auStack_158,&UNK_10f635b9d);
  uVar1 = (char)auStack_158;
  FUN_10ad4bb10();
  uRam00000001133075c4 = uVar1;
  if (cStack_141 < '\0') {
    __ZdlPv(auStack_158[0]);
  }
  func_0x000107c2b054(auStack_170,&UNK_10f6a75fb);
  bVar2 = (byte)auStack_170;
  FUN_10ad4bb10();
  bRam00000001133075b8 = bVar2;
  if (cStack_159 < '\0') {
    __ZdlPv(auStack_170[0]);
  }
  func_0x000107c2b054(auStack_188,&UNK_10f635ad5);
  uVar1 = (char)auStack_188;
  FUN_10ad4bb10();
  uRam00000001133075be = uVar1;
  if (cStack_171 < '\0') {
    __ZdlPv(auStack_188[0]);
  }
  func_0x000107c2b054(auStack_1a0,&UNK_10f560368);
  uVar1 = (char)auStack_1a0;
  FUN_10ad4bb10();
  uRam00000001133075bf = uVar1;
  if (cStack_189 < '\0') {
    __ZdlPv(auStack_1a0[0]);
  }
  func_0x000107c2b054(auStack_1b8,&UNK_10f560383);
  uVar1 = (char)auStack_1b8;
  FUN_10ad4bb10();
  uRam00000001133075b9 = uVar1;
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  func_0x000107c2b054(auStack_1d0,&UNK_10f6a761c);
  uVar1 = (char)auStack_1d0;
  FUN_10ad4bb10();
  uRam00000001133075c9 = uVar1;
  if (cStack_1b9 < '\0') {
    __ZdlPv(auStack_1d0[0]);
  }
  func_0x000107c2b054(auStack_1e8,&DAT_10f613b69);
  uVar1 = (char)auStack_1e8;
  FUN_10ad4bb10();
  uRam00000001133075ca = uVar1;
  if (cStack_1d1 < '\0') {
    __ZdlPv(auStack_1e8[0]);
  }
  func_0x000107c2b054(auStack_200,&UNK_10f560d73);
  uVar1 = 0;
  FUN_10ad4bb10();
  uRam00000001133075cb = uVar1;
  if (cStack_1e9 < '\0') {
    __ZdlPv(auStack_200[0]);
  }
  func_0x000107c2b054(auStack_218,&UNK_10f560d88);
  uVar1 = (char)auStack_218;
  FUN_10ad4bb10();
  uRam00000001133075cc = uVar1;
  if (cStack_201 < '\0') {
    __ZdlPv(auStack_218[0]);
  }
  func_0x000107c2b054(auStack_230,&UNK_10f636388);
  uVar1 = (char)auStack_230;
  FUN_10ad4bb10();
  uRam00000001133075cd = uVar1;
  if (cStack_219 < '\0') {
    __ZdlPv(auStack_230[0]);
  }
  func_0x000107c2b054(auStack_248,&UNK_10f560e36);
  uVar1 = (char)auStack_248;
  FUN_10ad4bb10();
  uRam00000001133075ce = uVar1;
  if (cStack_231 < '\0') {
    __ZdlPv(auStack_248[0]);
  }
  func_0x000107c2b054(auStack_260,&UNK_10f560d5e);
  bVar2 = (byte)auStack_260;
  FUN_10ad4bb10();
  bRam00000001133075cf = bVar2;
  if (cStack_249 < '\0') {
    __ZdlPv(auStack_260[0]);
  }
  func_0x000107c2b054(aiStack_278,&UNK_10f560d42);
  iVar5 = (int)aiStack_278;
  FUN_10ad4bb10();
  bRam00000001133075d0 = (byte)iVar5;
  if (cStack_261 < '\0') {
    iVar5 = aiStack_278[0];
    __ZdlPv();
  }
  FUN_10ad4bd78();
  uRam00000001133075d1 = 2999 < iVar5;
  bRam00000001133075d3 = bRam00000001133075cf & bRam00000001133075d0 | uRam00000001133075d1;
  func_0x000107c2b054(auStack_290,&UNK_10f6a762d);
  uVar1 = (char)auStack_290;
  FUN_10ad4bb10();
  uRam00000001133075c0 = uVar1;
  if (cStack_279 < '\0') {
    __ZdlPv(auStack_290[0]);
  }
  func_0x000107c2b054(auStack_2a8,&UNK_10f636363);
  uVar1 = (char)auStack_2a8;
  FUN_10ad4bb10();
  uRam00000001133075c1 = uVar1;
  if (cStack_291 < '\0') {
    __ZdlPv(auStack_2a8[0]);
  }
  func_0x000107c2b054(aiStack_2c0,&UNK_10f6a7641);
  iVar5 = (int)aiStack_2c0;
  FUN_10ad4bb10();
  uRam00000001133075db = (undefined1)iVar5;
  if (cStack_2a9 < '\0') {
    iVar5 = aiStack_2c0[0];
    __ZdlPv();
  }
  FUN_10ad4bd78();
  uRam00000001133075d7 = uRam00000001133075d7 & 0xff00;
  FUN_10ad4bd78();
  uRam00000001133075d7 = CONCAT11(2999 < iVar5,(undefined1)uRam00000001133075d7);
  FUN_10ad4bd78();
  if (iVar5 < 0xc80) {
    func_0x000107c2b054(auStack_2d8,&UNK_10f5601b6);
    uVar1 = (char)auStack_2d8;
    FUN_10ad4bb10();
    uRam00000001133075d9 = uVar1;
    if (cStack_2c1 < '\0') {
      __ZdlPv(auStack_2d8[0]);
    }
  }
  else {
    uRam00000001133075d9 = 1;
  }
  func_0x000107c2b054(auStack_2f0,&UNK_10f635cac);
  iVar5 = (int)auStack_2f0;
  FUN_10ad4bb10();
  if (iVar5 == 0) {
    func_0x000107c2b054(auStack_308,&UNK_10f635d83);
    iVar5 = (int)auStack_308;
    FUN_10ad4bb10();
    if (iVar5 == 0) {
      uRam00000001133075da = 0;
    }
    else {
      func_0x000107c2b054(auStack_320,&UNK_10f635c8c);
      uVar1 = (char)auStack_320;
      FUN_10ad4bb10();
      uRam00000001133075da = uVar1;
      if (cStack_309 < '\0') {
        __ZdlPv(auStack_320[0]);
      }
    }
    if (cStack_2f1 < '\0') {
      __ZdlPv(auStack_308[0]);
    }
  }
  else {
    uRam00000001133075da = 1;
  }
  if (cStack_2d9 < '\0') {
    __ZdlPv(auStack_2f0[0]);
  }
  if (((uRam00000001133075d7 & 1) != 0) || ((uRam00000001133075d7 & 0x100) != 0)) {
    pcVar8 = (char *)0x1138365c8;
    FUN_10a08f69c();
    if (*pcVar8 == '\x01') {
      FUN_10a0ee404();
      FUN_10ae030a0(0,pcVar8);
      ppuVar9 = &PTR_PTR_1133077f0;
      FUN_10ae079a0();
      FUN_10ae030d8();
      FUN_10ae07cd4(ppuVar9,&PTR_PTR_1133077f0);
      uRam00000001133075d7 = 0;
    }
  }
  uRam00000001133075f8 = 0;
  _glGetIntegerv(0x8869);
  func_0x000107c2b054(aiStack_338,&UNK_10f5603d6);
  iVar5 = (int)aiStack_338;
  FUN_10ad4bb10();
  uRam00000001133075c8 = (undefined1)iVar5;
  if (cStack_321 < '\0') {
    iVar5 = aiStack_338[0];
    __ZdlPv();
  }
  if ((uVar4 < 0xb) && ((1 << (ulong)(uVar4 & 0x1f) & 0x602U) != 0)) {
    uRam00000001133075d4 = false;
  }
  else {
    FUN_10ad4bd78();
    uRam00000001133075d4 = 2999 < iVar5;
  }
  FUN_10a0ee368();
  if (iVar5 == 2) {
    uRam00000001133075d6 = false;
  }
  else {
    FUN_10ad4bd78();
    uRam00000001133075d6 = 2999 < iVar5;
  }
  if ((param_1 == 6) || ((uVar4 - 0x1a < 6 && ((0x35U >> (ulong)(uVar4 - 0x1a & 0x1f) & 1) != 0))))
  {
    bVar3 = false;
  }
  else {
    bVar3 = param_1 != 0;
  }
  bRam00000001133075c5 = bVar3 & bRam00000001133075c5;
  bRam00000001133075d2 = bRam00000001133075c5 | bRam00000001133075c6 & 1;
  uStack_340 = 0;
  iVar5 = 0x8b30;
  _glGetShaderPrecisionFormat(0x8b30,0x8df2,(long)&uStack_340 + 4,&uStack_340);
  uRam00000001133075d5 = uStack_340._4_4_ != 0 || (int)uStack_340 != 0;
  FUN_10ad4bd78();
  if ((2999 < iVar5) || ((bRam00000001133075b8 & 1) != 0)) {
    _glGetIntegerv(0x8d57,0x1133075dc);
  }
  _glGetIntegerv(0x8dfc,0x1133075e0);
  _glGetIntegerv(0x8872,0x1133075e8);
  _glGetIntegerv(0x8dfb,0x1133075ec);
  iVar5 = 0x8dfd;
  _glGetIntegerv(0x8dfd,0x1133075f0);
  FUN_10ad4bd78();
  if (iVar5 < 3000) {
    iRam00000001133075f4 = 1;
  }
  else {
    iVar5 = 0x8cdf;
    _glGetIntegerv(0x8cdf,0x1133075f4);
    if (3 < iRam00000001133075f4) {
      iRam00000001133075f4 = 4;
    }
  }
  FUN_10a0ee554();
  if (iVar5 == 0) {
    uVar10 = 0;
  }
  else {
    uStack_74 = 0x8b4c;
    uStack_80 = 0x1137ecdb0;
    uVar10 = uRam00000001137ecdb0;
    if (lRam00000001137ecdb8 != -1) {
      puStack_60 = &uStack_74;
      puStack_68 = PTR__glGetIntegerv_11034b648;
      puStack_58 = &uStack_80;
      ppuStack_70 = &puStack_68;
      __ZNSt3__111__call_onceERVmPvPFvS2_E(0x1137ecdb8,&ppuStack_70,FUN_10ad4cf90);
      uVar10 = uRam00000001137ecdb0;
    }
  }
  uRam00000001133075e4 = uVar10;
  return;
}



/* Entry: 10ad4cf90; end: 10ad4cfa7;  */

void FUN_10ad4cf90(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
                    /* WARNING: Could not recover jumptable at 0x00010ad4cfa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)(*(undefined4 *)param_1[1],*(undefined8 *)param_1[2]);
  return;
}



/* Entry: 10ad4cfa8; end: 10ad4d06f;  */

void FUN_10ad4cfa8(double param_1,int param_2)

{
  long lVar1;
  undefined **ppuVar2;
  char *pcVar3;
  char *pcVar4;
  
  FUN_10a0ee554();
  if (param_2 != 0x2b) {
    lVar1 = 0x1f02;
    _glGetString();
    pcVar3 = (char *)(lVar1 + -1);
    do {
      pcVar4 = pcVar3;
      pcVar3 = pcVar4 + 1;
    } while (*pcVar3 == ' ');
    FUN_10ae030a0(0,pcVar3);
    ppuVar2 = &PTR_PTR_1133076f0;
    FUN_10ae079a0();
    FUN_10ae030d8();
    FUN_10ae07cd4(ppuVar2,&PTR_PTR_1133076f0);
    _strncmp(pcVar3,&UNK_10f6a7699,10);
    if (((int)pcVar3 != 0) || (_strtod(pcVar4 + 0xb,0), param_1 <= 0.0)) {
      iRam0000000113836630 = 0;
    }
    else {
      iRam0000000113836630 = (int)(param_1 * 1000.0 + 0.5);
    }
  }
  return;
}



/* Entry: 10ad4d070; end: 10ad4d133;  */

long * FUN_10ad4d070(long *param_1,int *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = (long)*param_2 + 0x9e3779b9;
    uVar3 = (ulong)(uint)param_2[1] + uVar3 * 0x40 + (uVar3 >> 2) + 0x9e3779b9 ^ uVar3;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar3 & uVar4;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (*(int *)(plVar6 + 2) == *param_2 && *(uint *)((long)plVar6 + 0x14) == param_2[1]) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10ad4d134; end: 10ad4d9bb;  */

void FUN_10ad4d134(undefined8 *param_1)

{
  ulong uVar1;
  code *pcVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  undefined4 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  ulong unaff_x21;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  uint uVar22;
  float fVar23;
  uint uStack_68;
  uint uStack_64;
  
  puVar16 = *(undefined8 **)*param_1;
  lVar5 = **(long **)(**(long **)*puVar16 + 8);
  lVar21 = 1;
  do {
    if (lVar21 == 0x26) {
      uVar22 = 0x1401;
      uVar20 = 0x1909;
      uVar3 = 0x1909;
    }
    else {
      puVar6 = (uint *)(lVar5 + 0xb7c + lVar21 * 0xc);
      uVar22 = puVar6[2];
      uVar20 = (ulong)*puVar6;
      uVar3 = 0x1908;
      if ((byte)(&UNK_110ae4719)[lVar21 * 0x20] < 2 && (byte)(&UNK_110ae4718)[lVar21 * 0x20] < 2 ||
          puVar6[1] != 0x1907) {
        uVar3 = puVar6[1];
      }
    }
    lVar17 = *(long *)puVar16[1];
    puVar7 = (undefined4 *)(lVar17 + lVar21 * 0xc);
    *puVar7 = (int)uVar20;
    puVar7[1] = uVar3;
    puVar7[2] = uVar22;
    uVar19 = *(ulong *)(lVar17 + 0x420);
    if (uVar19 != 0) {
      uVar8 = uVar19 - 1;
      if ((uVar19 & uVar8) == 0) {
        unaff_x21 = (int)uVar19 - 1 & uVar20;
      }
      else {
        unaff_x21 = uVar20;
        if (uVar19 <= uVar20) {
          uVar12 = 0;
          if (uVar19 != 0) {
            uVar12 = uVar20 / uVar19;
          }
          unaff_x21 = uVar20 - uVar12 * uVar19;
        }
      }
      plVar10 = *(long **)(*(long *)(lVar17 + 0x418) + unaff_x21 * 8);
      if (plVar10 != (long *)0x0) {
        do {
          while( true ) {
            plVar10 = (long *)*plVar10;
            if (plVar10 == (long *)0x0) goto LAB_10ad4d278;
            uVar12 = plVar10[1];
            if (uVar12 != uVar20) break;
            if (*(uint *)(plVar10 + 2) == uVar20) goto LAB_10ad4d500;
          }
          if ((uVar19 & uVar8) == 0) {
            uVar12 = uVar12 & uVar8;
          }
          else if (uVar19 <= uVar12) {
            uVar9 = 0;
            if (uVar19 != 0) {
              uVar9 = uVar12 / uVar19;
            }
            uVar12 = uVar12 - uVar9 * uVar19;
          }
        } while (uVar12 == unaff_x21);
      }
    }
LAB_10ad4d278:
    plVar10 = (long *)0x18;
    __Znwm();
    *plVar10 = 0;
    plVar10[1] = uVar20;
    *(int *)(plVar10 + 2) = (int)uVar20;
    *(int *)((long)plVar10 + 0x14) = (int)lVar21;
    fVar23 = (float)(*(long *)(lVar17 + 0x430) + 1);
    if ((uVar19 == 0) || (*(float *)(lVar17 + 0x438) * (float)uVar19 < fVar23)) {
      uVar8 = 1;
      if (2 < uVar19) {
        uVar8 = (ulong)((uVar19 & uVar19 - 1) != 0);
      }
      uVar8 = uVar8 | uVar19 << 1;
      uVar12 = (ulong)(fVar23 / *(float *)(lVar17 + 0x438));
      if (uVar8 <= uVar12) {
        uVar8 = uVar12;
      }
      if (uVar8 - 1 == 0) {
        uVar8 = 2;
      }
      else if ((uVar8 & uVar8 - 1) != 0) {
        __ZNSt3__112__next_primeEm();
        uVar19 = *(ulong *)(lVar17 + 0x420);
      }
      if (uVar19 < uVar8) {
LAB_10ad4d310:
        if (uVar8 >> 0x3d != 0) {
          func_0x000109ffded8();
          goto LAB_10ad4d998;
        }
        lVar18 = uVar8 << 3;
        __Znwm();
        lVar4 = *(long *)(lVar17 + 0x418);
        *(long *)(lVar17 + 0x418) = lVar18;
        if (lVar4 != 0) {
          __ZdlPv();
        }
        uVar19 = 0;
        *(ulong *)(lVar17 + 0x420) = uVar8;
        do {
          *(undefined8 *)(*(long *)(lVar17 + 0x418) + uVar19 * 8) = 0;
          uVar19 = uVar19 + 1;
        } while (uVar8 != uVar19);
        plVar11 = *(long **)(lVar17 + 0x428);
        uVar19 = uVar8;
        if (plVar11 != (long *)0x0) {
          uVar12 = plVar11[1];
          uVar9 = uVar8 - 1;
          if ((uVar8 & uVar9) == 0) {
            uVar12 = uVar12 & uVar9;
          }
          else if (uVar8 <= uVar12) {
            uVar15 = 0;
            if (uVar8 != 0) {
              uVar15 = uVar12 / uVar8;
            }
            uVar12 = uVar12 - uVar15 * uVar8;
          }
          *(long *)(*(long *)(lVar17 + 0x418) + uVar12 * 8) = lVar17 + 0x428;
          plVar13 = (long *)*plVar11;
          while (plVar13 != (long *)0x0) {
            uVar15 = plVar13[1];
            if ((uVar8 & uVar9) == 0) {
              uVar15 = uVar15 & uVar9;
            }
            else if (uVar8 <= uVar15) {
              uVar1 = 0;
              if (uVar8 != 0) {
                uVar1 = uVar15 / uVar8;
              }
              uVar15 = uVar15 - uVar1 * uVar8;
            }
            plVar14 = plVar13;
            if (uVar15 != uVar12) {
              lVar18 = *(long *)(lVar17 + 0x418);
              if (*(long *)(lVar18 + uVar15 * 8) == 0) {
                *(long **)(lVar18 + uVar15 * 8) = plVar11;
                uVar12 = uVar15;
              }
              else {
                *plVar11 = *plVar13;
                *plVar13 = **(undefined8 **)(lVar18 + uVar15 * 8);
                **(long **)(lVar18 + uVar15 * 8) = (long)plVar13;
                plVar14 = plVar11;
              }
            }
            plVar11 = plVar14;
            plVar13 = (long *)*plVar14;
          }
        }
      }
      else if (uVar8 < uVar19) {
        uVar12 = (ulong)((float)*(ulong *)(lVar17 + 0x430) / *(float *)(lVar17 + 0x438));
        if ((uVar19 < 3) || ((uVar19 & uVar19 - 1) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if (1 < uVar12) {
          uVar12 = 1L << (-LZCOUNT(uVar12 - 1) & 0x3fU);
        }
        if (uVar8 <= uVar12) {
          uVar8 = uVar12;
        }
        if (uVar8 < uVar19) {
          if (uVar8 != 0) goto LAB_10ad4d310;
          lVar18 = *(long *)(lVar17 + 0x418);
          *(undefined8 *)(lVar17 + 0x418) = 0;
          if (lVar18 != 0) {
            __ZdlPv();
          }
          *(undefined8 *)(lVar17 + 0x420) = 0;
          uVar19 = 0;
        }
        else {
          uVar19 = *(ulong *)(lVar17 + 0x420);
        }
      }
      if ((uVar19 & uVar19 - 1) == 0) {
        unaff_x21 = (int)uVar19 - 1 & uVar20;
      }
      else {
        unaff_x21 = uVar20;
        if (uVar19 <= uVar20) {
          uVar8 = 0;
          if (uVar19 != 0) {
            uVar8 = uVar20 / uVar19;
          }
          unaff_x21 = uVar20 - uVar8 * uVar19;
        }
      }
    }
    lVar18 = *(long *)(lVar17 + 0x418);
    plVar11 = *(long **)(lVar18 + unaff_x21 * 8);
    if (plVar11 == (long *)0x0) {
      *plVar10 = *(long *)(lVar17 + 0x428);
      *(long **)(lVar17 + 0x428) = plVar10;
      *(long *)(lVar18 + unaff_x21 * 8) = lVar17 + 0x428;
      if (*plVar10 != 0) {
        uVar20 = *(ulong *)(*plVar10 + 8);
        if ((uVar19 & uVar19 - 1) == 0) {
          uVar20 = uVar20 & uVar19 - 1;
        }
        else if (uVar19 <= uVar20) {
          uVar8 = 0;
          if (uVar19 != 0) {
            uVar8 = uVar20 / uVar19;
          }
          uVar20 = uVar20 - uVar8 * uVar19;
        }
        plVar11 = (long *)(*(long *)(lVar17 + 0x418) + uVar20 * 8);
        goto LAB_10ad4d4f0;
      }
    }
    else {
      *plVar10 = *plVar11;
LAB_10ad4d4f0:
      *plVar11 = (long)plVar10;
    }
    *(long *)(lVar17 + 0x430) = *(long *)(lVar17 + 0x430) + 1;
LAB_10ad4d500:
    if ((uVar3 != 0) && (FUN_10a316bdc(), uVar3 != 0xffffffff)) {
      lVar17 = *(long *)puVar16[1] + 0x440;
      uStack_68 = uVar3;
      uStack_64 = uVar22;
      FUN_10ad4d070(lVar17,&uStack_68);
      if (lVar17 == 0) {
        lVar18 = *(long *)puVar16[1];
        lVar17 = CONCAT44(uStack_64,uStack_68);
        uVar20 = (long)(int)uStack_68 + 0x9e3779b9;
        uVar20 = (ulong)uStack_64 + 0x9e3779b9 + uVar20 * 0x40 + (uVar20 >> 2) ^ uVar20;
        uVar19 = *(ulong *)(lVar18 + 0x448);
        if (uVar19 != 0) {
          uVar8 = uVar19 - 1;
          if ((uVar19 & uVar8) == 0) {
            unaff_x21 = uVar20 & uVar8;
          }
          else {
            unaff_x21 = uVar20;
            if (uVar19 <= uVar20) {
              uVar12 = 0;
              if (uVar19 != 0) {
                uVar12 = uVar20 / uVar19;
              }
              unaff_x21 = uVar20 - uVar12 * uVar19;
            }
          }
          plVar10 = *(long **)(*(long *)(lVar18 + 0x440) + unaff_x21 * 8);
          if (plVar10 != (long *)0x0) {
            do {
              while( true ) {
                plVar10 = (long *)*plVar10;
                if (plVar10 == (long *)0x0) goto LAB_10ad4d62c;
                uVar12 = plVar10[1];
                if (uVar12 != uVar20) break;
                if (*(uint *)(plVar10 + 2) == uStack_68 &&
                    *(uint *)((long)plVar10 + 0x14) == uStack_64) goto LAB_10ad4d8b4;
              }
              if ((uVar19 & uVar8) == 0) {
                uVar12 = uVar12 & uVar8;
              }
              else if (uVar19 <= uVar12) {
                uVar9 = 0;
                if (uVar19 != 0) {
                  uVar9 = uVar12 / uVar19;
                }
                uVar12 = uVar12 - uVar9 * uVar19;
              }
            } while (uVar12 == unaff_x21);
          }
        }
LAB_10ad4d62c:
        plVar10 = (long *)0x20;
        __Znwm();
        *plVar10 = 0;
        plVar10[1] = uVar20;
        plVar10[2] = lVar17;
        *(int *)(plVar10 + 3) = (int)lVar21;
        fVar23 = (float)(*(long *)(lVar18 + 0x458) + 1);
        if ((uVar19 == 0) || (*(float *)(lVar18 + 0x460) * (float)uVar19 < fVar23)) {
          uVar8 = 1;
          if (2 < uVar19) {
            uVar8 = (ulong)((uVar19 & uVar19 - 1) != 0);
          }
          uVar8 = uVar8 | uVar19 << 1;
          uVar12 = (ulong)(fVar23 / *(float *)(lVar18 + 0x460));
          if (uVar8 <= uVar12) {
            uVar8 = uVar12;
          }
          if (uVar8 - 1 == 0) {
            uVar8 = 2;
          }
          else if ((uVar8 & uVar8 - 1) != 0) {
            __ZNSt3__112__next_primeEm();
            uVar19 = *(ulong *)(lVar18 + 0x448);
          }
          if (uVar19 < uVar8) {
LAB_10ad4d6c8:
            if (uVar8 >> 0x3d != 0) {
              func_0x000109ffded8();
LAB_10ad4d998:
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10ad4d99c);
              (*pcVar2)();
            }
            lVar17 = uVar8 << 3;
            __Znwm();
            lVar4 = *(long *)(lVar18 + 0x440);
            *(long *)(lVar18 + 0x440) = lVar17;
            if (lVar4 != 0) {
              __ZdlPv();
            }
            uVar19 = 0;
            *(ulong *)(lVar18 + 0x448) = uVar8;
            do {
              *(undefined8 *)(*(long *)(lVar18 + 0x440) + uVar19 * 8) = 0;
              uVar19 = uVar19 + 1;
            } while (uVar8 != uVar19);
            plVar11 = *(long **)(lVar18 + 0x450);
            uVar19 = uVar8;
            if (plVar11 != (long *)0x0) {
              uVar12 = plVar11[1];
              uVar9 = uVar8 - 1;
              if ((uVar8 & uVar9) == 0) {
                uVar12 = uVar12 & uVar9;
              }
              else if (uVar8 <= uVar12) {
                uVar15 = 0;
                if (uVar8 != 0) {
                  uVar15 = uVar12 / uVar8;
                }
                uVar12 = uVar12 - uVar15 * uVar8;
              }
              *(long *)(*(long *)(lVar18 + 0x440) + uVar12 * 8) = lVar18 + 0x450;
              plVar13 = (long *)*plVar11;
              while (plVar13 != (long *)0x0) {
                uVar15 = plVar13[1];
                if ((uVar8 & uVar9) == 0) {
                  uVar15 = uVar15 & uVar9;
                }
                else if (uVar8 <= uVar15) {
                  uVar1 = 0;
                  if (uVar8 != 0) {
                    uVar1 = uVar15 / uVar8;
                  }
                  uVar15 = uVar15 - uVar1 * uVar8;
                }
                plVar14 = plVar13;
                if (uVar15 != uVar12) {
                  lVar17 = *(long *)(lVar18 + 0x440);
                  if (*(long *)(lVar17 + uVar15 * 8) == 0) {
                    *(long **)(lVar17 + uVar15 * 8) = plVar11;
                    uVar12 = uVar15;
                  }
                  else {
                    *plVar11 = *plVar13;
                    *plVar13 = **(undefined8 **)(lVar17 + uVar15 * 8);
                    **(long **)(lVar17 + uVar15 * 8) = (long)plVar13;
                    plVar14 = plVar11;
                  }
                }
                plVar11 = plVar14;
                plVar13 = (long *)*plVar14;
              }
            }
          }
          else if (uVar8 < uVar19) {
            uVar12 = (ulong)((float)*(ulong *)(lVar18 + 0x458) / *(float *)(lVar18 + 0x460));
            if ((uVar19 < 3) || ((uVar19 & uVar19 - 1) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if (1 < uVar12) {
              uVar12 = 1L << (-LZCOUNT(uVar12 - 1) & 0x3fU);
            }
            if (uVar8 <= uVar12) {
              uVar8 = uVar12;
            }
            if (uVar8 < uVar19) {
              if (uVar8 != 0) goto LAB_10ad4d6c8;
              lVar17 = *(long *)(lVar18 + 0x440);
              *(undefined8 *)(lVar18 + 0x440) = 0;
              if (lVar17 != 0) {
                __ZdlPv();
              }
              *(undefined8 *)(lVar18 + 0x448) = 0;
              uVar19 = 0;
            }
            else {
              uVar19 = *(ulong *)(lVar18 + 0x448);
            }
          }
          if ((uVar19 & uVar19 - 1) == 0) {
            unaff_x21 = uVar19 - 1 & uVar20;
          }
          else {
            unaff_x21 = uVar20;
            if (uVar19 <= uVar20) {
              uVar8 = 0;
              if (uVar19 != 0) {
                uVar8 = uVar20 / uVar19;
              }
              unaff_x21 = uVar20 - uVar8 * uVar19;
            }
          }
        }
        lVar17 = *(long *)(lVar18 + 0x440);
        plVar11 = *(long **)(lVar17 + unaff_x21 * 8);
        if (plVar11 == (long *)0x0) {
          *plVar10 = *(long *)(lVar18 + 0x450);
          *(long **)(lVar18 + 0x450) = plVar10;
          *(long *)(lVar17 + unaff_x21 * 8) = lVar18 + 0x450;
          if (*plVar10 != 0) {
            uVar20 = *(ulong *)(*plVar10 + 8);
            if ((uVar19 & uVar19 - 1) == 0) {
              uVar20 = uVar20 & uVar19 - 1;
            }
            else if (uVar19 <= uVar20) {
              uVar8 = 0;
              if (uVar19 != 0) {
                uVar8 = uVar20 / uVar19;
              }
              uVar20 = uVar20 - uVar8 * uVar19;
            }
            plVar11 = (long *)(*(long *)(lVar18 + 0x440) + uVar20 * 8);
            goto LAB_10ad4d8a4;
          }
        }
        else {
          *plVar10 = *plVar11;
LAB_10ad4d8a4:
          *plVar11 = (long)plVar10;
        }
        *(long *)(lVar18 + 0x458) = *(long *)(lVar18 + 0x458) + 1;
      }
LAB_10ad4d8b4:
      lVar17 = *(long *)puVar16[1] + lVar21 * 8;
      *(uint *)(lVar17 + 0x468) = uVar3;
      *(uint *)(lVar17 + 0x46c) = uVar22;
    }
    lVar21 = lVar21 + 1;
    if (lVar21 == 0x57) {
      FUN_10ad4d9bc(*(long *)puVar16[1] + 0x720,3,0x140b,0x140b00000003,0x19070000881b);
      FUN_10ad4d9bc(*(long *)puVar16[1] + 0x720,3,0x1406,0x140600000003,0x190700008815);
      return;
    }
  } while( true );
}



/* Entry: 10ad4d9bc; end: 10ad4dd83;  */

void FUN_10ad4d9bc(long *param_1,int param_2,uint param_3,long param_4,long param_5)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x25;
  
  uVar13 = (long)param_2 + 0x9e3779b9;
  uVar13 = uVar13 * 0x40 + (ulong)param_3 + (uVar13 >> 2) + 0x9e3779b9 ^ uVar13;
  uVar14 = param_1[1];
  if (uVar14 != 0) {
    uVar5 = uVar14 - 1;
    if ((uVar14 & uVar5) == 0) {
      unaff_x25 = uVar5 & uVar13;
    }
    else {
      unaff_x25 = uVar13;
      if (uVar14 <= uVar13) {
        uVar9 = 0;
        if (uVar14 != 0) {
          uVar9 = uVar13 / uVar14;
        }
        unaff_x25 = uVar13 - uVar9 * uVar14;
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_10ad4da90;
          uVar9 = plVar7[1];
          if (uVar9 != uVar13) break;
          if (*(int *)(plVar7 + 2) == param_2 && *(uint *)((long)plVar7 + 0x14) == param_3) {
            return;
          }
        }
        if ((uVar14 & uVar5) == 0) {
          uVar9 = uVar9 & uVar5;
        }
        else if (uVar14 <= uVar9) {
          uVar6 = 0;
          if (uVar14 != 0) {
            uVar6 = uVar9 / uVar14;
          }
          uVar9 = uVar9 - uVar6 * uVar14;
        }
      } while (uVar9 == unaff_x25);
    }
  }
LAB_10ad4da90:
  plVar7 = (long *)0x20;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = uVar13;
  plVar7[2] = param_4;
  plVar7[3] = param_5;
  if ((uVar14 == 0) || (*(float *)(param_1 + 4) * (float)uVar14 < (float)(param_1[3] + 1))) {
    uVar5 = 1;
    if (2 < uVar14) {
      uVar5 = (ulong)((uVar14 & uVar14 - 1) != 0);
    }
    uVar5 = uVar5 | uVar14 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar5 <= uVar9) {
      uVar5 = uVar9;
    }
    if (uVar5 - 1 == 0) {
      uVar5 = 2;
    }
    else if ((uVar5 & uVar5 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar14 = param_1[1];
    }
    if (uVar14 < uVar5) {
LAB_10ad4db28:
      if (uVar5 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10ad4dd70);
        (*pcVar2)();
      }
      lVar3 = uVar5 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar14 = 0;
      param_1[1] = uVar5;
      do {
        *(undefined8 *)(*param_1 + uVar14 * 8) = 0;
        uVar14 = uVar14 + 1;
      } while (uVar5 != uVar14);
      plVar8 = (long *)param_1[2];
      uVar14 = uVar5;
      if (plVar8 != (long *)0x0) {
        uVar9 = plVar8[1];
        uVar6 = uVar5 - 1;
        if ((uVar5 & uVar6) == 0) {
          uVar9 = uVar9 & uVar6;
        }
        else if (uVar5 <= uVar9) {
          uVar12 = 0;
          if (uVar5 != 0) {
            uVar12 = uVar9 / uVar5;
          }
          uVar9 = uVar9 - uVar12 * uVar5;
        }
        *(long **)(*param_1 + uVar9 * 8) = param_1 + 2;
        plVar10 = (long *)*plVar8;
        while (plVar10 != (long *)0x0) {
          uVar12 = plVar10[1];
          if ((uVar5 & uVar6) == 0) {
            uVar12 = uVar12 & uVar6;
          }
          else if (uVar5 <= uVar12) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar12 / uVar5;
            }
            uVar12 = uVar12 - uVar1 * uVar5;
          }
          plVar11 = plVar10;
          if (uVar12 != uVar9) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + uVar12 * 8) == 0) {
              *(long **)(lVar3 + uVar12 * 8) = plVar8;
              uVar9 = uVar12;
            }
            else {
              *plVar8 = *plVar10;
              *plVar10 = **(undefined8 **)(lVar3 + uVar12 * 8);
              **(long **)(lVar3 + uVar12 * 8) = (long)plVar10;
              plVar11 = plVar8;
            }
          }
          plVar8 = plVar11;
          plVar10 = (long *)*plVar11;
        }
      }
    }
    else if (uVar5 < uVar14) {
      uVar9 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar14 < 3) || ((uVar14 & uVar14 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar9) {
        uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
      }
      if (uVar5 <= uVar9) {
        uVar5 = uVar9;
      }
      if (uVar5 < uVar14) {
        if (uVar5 != 0) goto LAB_10ad4db28;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar14 = 0;
      }
      else {
        uVar14 = param_1[1];
      }
    }
    if ((uVar14 & uVar14 - 1) == 0) {
      unaff_x25 = uVar14 - 1 & uVar13;
    }
    else {
      unaff_x25 = uVar13;
      if (uVar14 <= uVar13) {
        uVar5 = 0;
        if (uVar14 != 0) {
          uVar5 = uVar13 / uVar14;
        }
        unaff_x25 = uVar13 - uVar5 * uVar14;
      }
    }
  }
  lVar3 = *param_1;
  plVar8 = *(long **)(lVar3 + unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar7 = *plVar8;
    *plVar8 = (long)plVar7;
    *(long **)(lVar3 + unaff_x25 * 8) = plVar8;
    if (*plVar7 == 0) goto LAB_10ad4dd08;
    uVar13 = *(ulong *)(*plVar7 + 8);
    if ((uVar14 & uVar14 - 1) == 0) {
      uVar13 = uVar13 & uVar14 - 1;
    }
    else if (uVar14 <= uVar13) {
      uVar5 = 0;
      if (uVar14 != 0) {
        uVar5 = uVar13 / uVar14;
      }
      uVar13 = uVar13 - uVar5 * uVar14;
    }
    plVar8 = (long *)(*param_1 + uVar13 * 8);
  }
  else {
    *plVar7 = *plVar8;
  }
  *plVar8 = (long)plVar7;
LAB_10ad4dd08:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10ad4dd84; end: 10ad4defb;  */

long * FUN_10ad4dd84(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar1 = *param_2;
    uVar6 = (ulong)uVar1;
    uVar7 = uVar5 - 1;
    uVar4 = (uint)uVar5;
    if ((uVar5 & uVar7) == 0) {
      uVar8 = (ulong)(uVar4 - 1 & uVar1);
    }
    else {
      uVar8 = uVar6;
      if (uVar5 <= uVar6) {
        uVar2 = 0;
        if (uVar4 != 0) {
          uVar2 = uVar1 / uVar4;
        }
        uVar8 = (ulong)(uVar1 - uVar2 * uVar4);
      }
    }
    plVar9 = *(long **)(*param_1 + uVar8 * 8);
    if (plVar9 != (long *)0x0) {
      plVar9 = (long *)*plVar9;
      do {
        if (plVar9 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar10 = plVar9[1];
        if (uVar10 == uVar6) {
          if (*(uint *)(plVar9 + 2) == uVar1) {
            return plVar9;
          }
        }
        else {
          if ((uVar5 & uVar7) == 0) {
            uVar10 = uVar10 & uVar7;
          }
          else if (uVar5 <= uVar10) {
            uVar3 = 0;
            if (uVar5 != 0) {
              uVar3 = uVar10 / uVar5;
            }
            uVar10 = uVar10 - uVar3 * uVar5;
          }
          if (uVar10 != uVar8) {
            return (long *)0x0;
          }
        }
        plVar9 = (long *)*plVar9;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10ad4defc; end: 10ad4df1b;  */

void FUN_10ad4defc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c70410;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad4df1c; end: 10ad4df33;  */

void FUN_10ad4df1c(void)

{
  return;
}



/* Entry: 10ad4df34; end: 10ad4dfd7;  */

void FUN_10ad4df34(long param_1,long param_2,undefined1 param_3,long *param_4)

{
  long *plVar1;
  
  if (param_1 != 0) {
    plVar1 = (long *)0x60;
    __Znwm();
    plVar1[5] = (long)&PTR_DAT_110ae9180;
    *(undefined1 *)((long)plVar1 + 0x19) = 1;
    *(undefined1 *)(plVar1 + 3) = param_3;
    plVar1[1] = param_2;
    plVar1[2] = 0;
    *plVar1 = param_1;
    plVar1[4] = *param_4;
    (**(code **)(param_4[1] + 0x10))(plVar1 + 5,param_4 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__funopen_11034c390)(plVar1,FUN_10ad4dfd8,0,FUN_10ad4e03c,FUN_10ad4e088);
    return;
  }
  return;
}



/* Entry: 10ad4dfd8; end: 10ad4e03b;  */

ulong FUN_10ad4dfd8(long *param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  
  if ((int)param_3 < 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1[1] - param_1[2];
    if (param_3 <= uVar1) {
      uVar1 = (ulong)param_3;
    }
    _memcpy(param_2,*param_1 + param_1[2],uVar1);
    param_1[2] = param_1[2] + uVar1;
  }
  return uVar1;
}



/* Entry: 10ad4e03c; end: 10ad4e087;  */

ulong FUN_10ad4e03c(long param_1,ulong param_2,int param_3)

{
  long *plVar1;
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      plVar1 = (long *)(param_1 + 0x10);
    }
    else {
      if (param_3 != 2) {
        return 0xffffffffffffffff;
      }
      plVar1 = (long *)(param_1 + 8);
    }
    param_2 = *plVar1 + param_2;
  }
  param_2 = param_2 & ((long)param_2 >> 0x3f ^ 0xffffffffffffffffU);
  if (*(ulong *)(param_1 + 8) <= param_2) {
    param_2 = *(ulong *)(param_1 + 8);
  }
  *(ulong *)(param_1 + 0x10) = param_2;
  return param_2;
}



/* Entry: 10ad4e088; end: 10ad4e103;  */

undefined8 FUN_10ad4e088(long *param_1)

{
  if (((char)param_1[3] == '\x01') && (*param_1 != 0)) {
    __ZdaPv();
  }
  if (*(char *)(param_1[5] + 8) == '\x01') {
    (*(code *)param_1[4])();
  }
  if (*(char *)((long)param_1 + 0x19) == '\x01') {
    (**(code **)param_1[5])(param_1 + 5);
    __ZdlPv(param_1);
  }
  return 0;
}



/* Entry: 10ad4e104; end: 10ad4e1bb;  */

void FUN_10ad4e104(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  func_0x00010bf64b80(PTR__OBJC_CLASS___NSMutableData_1126b4958,param_3,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010c0d3c60();
  uVar4 = *(undefined8 *)PTR__kSecRandomDefault_110347808;
  _SecRandomCopyBytes(uVar4,param_3,puVar3);
  if ((int)uVar4 == 0) {
    puVar3 = puVar2;
    _objc_retainAutorelease(puVar2);
    func_0x00010bf25f00();
    puVar5 = puVar2;
    func_0x00010c08fa60(puVar2);
    FUN_109ffe064(param_1,puVar3,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  FUN_10a00946c(&UNK_10f6a76a4);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad4e1a8);
  (*pcVar1)();
}



/* Entry: 10ad4e1bc; end: 10ad4e1e3;  */

void FUN_10ad4e1bc(void)

{
  return;
}



/* Entry: 10ad4e1e4; end: 10ad4e2a7;  */

undefined *** FUN_10ad4e1e4(undefined ***param_1,code **param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *extraout_x8;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined ***pppuVar8;
  code **unaff_x20;
  undefined1 auStack_b0 [8];
  undefined ***pppuStack_a8;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined ***pppuStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*param_1[0x3e] == (undefined *)0x0) {
    pppuVar8 = (undefined ***)0x0;
    FUN_10ad515f4(0);
    unaff_x20 = &pcStack_68;
    pcStack_68 = FUN_10ad4ea94;
    ppuStack_60 = &PTR_FUN_110c705e8;
    param_2 = &pcStack_68;
    pppuStack_58 = param_1;
    FUN_10a1020f8();
    param_1 = &ppuStack_60;
    (*(code *)*ppuStack_60)();
  }
  else {
    pppuVar8 = (undefined ***)0x1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_60)(unaff_x20 + 1);
    __Unwind_Resume();
    puVar7 = param_1[0x3e][3];
    if ((puVar7 == (undefined *)0x0) ||
       (*(int *)(puVar7 + 0x18) != (int)param_2 ||
        *(int *)(puVar7 + 0x1c) != (int)((ulong)param_2 >> 0x20))) {
      FUN_10ad55970(auStack_b0,param_2,(ulong)param_2 >> 0x20,param_3,0);
      pppuVar8 = (undefined ***)(param_1[0x3e] + 3);
      func_0x00010a099dfc(pppuVar8,auStack_b0);
      if (pppuStack_a8 != (undefined ***)0x0) {
        pppuVar1 = pppuStack_a8 + 1;
        do {
          ppuVar6 = *pppuVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
          if (bVar4) {
            *pppuVar1 = (undefined **)((long)ppuVar6 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar6 == (undefined **)0x0) {
          (*(code *)(*pppuStack_a8)[2])(pppuStack_a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppuStack_a8);
          pppuVar8 = pppuStack_a8;
        }
      }
      ppuVar6 = param_1[0x3e];
      puVar5 = ppuVar6[4];
      puVar7 = ppuVar6[3];
      extraout_x8[1] = ppuVar6[4];
      *extraout_x8 = puVar7;
      param_1 = pppuVar8;
    }
    else {
      puVar5 = param_1[0x3e][4];
      *extraout_x8 = puVar7;
      extraout_x8[1] = puVar5;
    }
    if (puVar5 != (undefined *)0x0) {
      plVar2 = (long *)(puVar5 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    return param_1;
  }
  return pppuVar8;
}



/* Entry: 10ad4e2a8; end: 10ad4e38b;  */

void FUN_10ad4e2a8(long *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  lVar5 = *(long *)(*(long *)(param_2 + 0x1f0) + 0x18);
  if ((lVar5 == 0) ||
     (*(int *)(lVar5 + 0x18) != (int)param_3 || *(int *)(lVar5 + 0x1c) != (int)(param_3 >> 0x20))) {
    FUN_10ad55970(auStack_40,param_3,param_3 >> 0x20,param_4,0);
    func_0x00010a099dfc(*(long *)(param_2 + 0x1f0) + 0x18,auStack_40);
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
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
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      }
    }
    lVar5 = *(long *)(param_2 + 0x1f0);
    lVar4 = *(long *)(lVar5 + 0x20);
    lVar6 = *(long *)(lVar5 + 0x18);
    param_1[1] = *(long *)(lVar5 + 0x20);
    *param_1 = lVar6;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_2 + 0x1f0) + 0x20);
    *param_1 = lVar5;
    param_1[1] = lVar4;
  }
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
  return;
}



/* Entry: 10ad4e38c; end: 10ad4e4b7;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_10ad4e38c(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long alStack_40 [2];
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  alStack_40[0] = *param_3;
  *param_3 = 0;
  FUN_10aab8180(param_1,param_2,alStack_40);
  if (alStack_40[0] != 0) {
    FUN_10a08ef58();
    __ZdlPv();
  }
  *param_1 = &PTR_FUN_110c704f0;
  param_1[3] = &PTR_FUN_110c705b8;
  param_1[0x3e] = 0;
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  param_1[0x3e] = puVar1;
  FUN_10ad4e1e4(param_1);
  alStack_40[1] = 0x800000007;
  uStack_30 = 1;
  puVar1 = param_1 + 5;
  FUN_10ad4e924(puVar1,alStack_40 + 1,auStack_2c,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar2 = param_1[0x3e];
  param_1[0x3e] = 0;
  if (lVar2 != 0) {
    FUN_10ad4ea54(param_1 + 0x3e);
  }
  FUN_10aabafc8(param_1);
  do {
    do {
      __Unwind_Resume(puVar1);
    } while (alStack_40[0] == 0);
    FUN_10a08ef58();
    __ZdlPv();
  } while( true );
}



/* Entry: 10ad4e4b8; end: 10ad4e4fb;  */

undefined8 * FUN_10ad4e4b8(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)param_1[0x3e];
  *(undefined8 *)param_1[0x3e] = 0;
  _objc_release(uVar2);
  lVar3 = param_1[0x3e];
  param_1[0x3e] = 0;
  if (lVar3 != 0) {
    FUN_10ad4ea54(param_1 + 0x3e);
  }
  *param_1 = &PTR_FUN_110c42cc0;
  param_1[3] = &PTR_FUN_110c42d88;
  FUN_10aab82e4(param_1,1);
  FUN_10aabb088(param_1 + 4,0);
  func_0x00010a136de4(param_1 + 0x3c);
  func_0x00010a1bb0e8(param_1 + 0x39);
  func_0x000109d18f34(param_1 + 0x22);
  lVar3 = param_1[0x21];
  param_1[0x21] = 0;
  if (lVar3 != 0) {
    func_0x00010a237b14(param_1 + 0x21);
  }
  plVar1 = (long *)param_1[0x1f];
  param_1[0x1f] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  func_0x000109d18f34(param_1 + 8);
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  FUN_10aabb088(param_1 + 4,0);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10ad4e4fc; end: 10ad4e507;  */

undefined8 * FUN_10ad4e4fc(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)param_1[0x3e];
  *(undefined8 *)param_1[0x3e] = 0;
  _objc_release(uVar2);
  lVar3 = param_1[0x3e];
  param_1[0x3e] = 0;
  if (lVar3 != 0) {
    FUN_10ad4ea54(param_1 + 0x3e);
  }
  *param_1 = &PTR_FUN_110c42cc0;
  param_1[3] = &PTR_FUN_110c42d88;
  FUN_10aab82e4(param_1,1);
  FUN_10aabb088(param_1 + 4,0);
  func_0x00010a136de4(param_1 + 0x3c);
  func_0x00010a1bb0e8(param_1 + 0x39);
  func_0x000109d18f34(param_1 + 0x22);
  lVar3 = param_1[0x21];
  param_1[0x21] = 0;
  if (lVar3 != 0) {
    func_0x00010a237b14(param_1 + 0x21);
  }
  plVar1 = (long *)param_1[0x1f];
  param_1[0x1f] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  func_0x000109d18f34(param_1 + 8);
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  FUN_10aabb088(param_1 + 4,0);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10ad4e508; end: 10ad4e533;  */

void FUN_10ad4e508(void)

{
  FUN_10ad4e4b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad4e534; end: 10ad4e58f;  */

undefined8 * FUN_10ad4e534(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = **(undefined8 **)(param_1 + 0x1f0);
  **(undefined8 **)(param_1 + 0x1f0) = 0;
  _objc_release(uVar1);
  puVar2 = (undefined8 *)0x28;
  __Znwm();
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[4] = 0;
  puVar3 = *(undefined8 **)(param_1 + 0x1f0);
  *(undefined8 **)(param_1 + 0x1f0) = puVar2;
  if (puVar3 == (undefined8 *)0x0) {
    return puVar2;
  }
  if (puVar3 != (undefined8 *)0x0) {
    func_0x00010a09db0c(puVar3 + 3);
    _objc_release(puVar3[1]);
    _objc_release(*puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar3);
    return puVar3;
  }
  return (undefined8 *)(param_1 + 0x1f0);
}



/* Entry: 10ad4e590; end: 10ad4e8b7;  */

void FUN_10ad4e590(undefined8 *param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined1 (*pauVar1) [12];
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined1 (*pauVar7) [12];
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_198;
  uint uStack_18c;
  long *plStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  code *pcStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long *plStack_d0;
  undefined8 *puStack_c8;
  uint *puStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_98;
  
  uVar15 = (undefined4)((ulong)param_5 >> 0x20);
  fVar14 = (float)param_5;
  uVar13 = (undefined4)((ulong)param_4 >> 0x20);
  fVar12 = (float)param_4;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_188 = (long *)0x0;
  plStack_180 = (long *)0x0;
  uStack_178 = 0;
  uStack_a8 = 0x600000003;
  uStack_b0 = 0x800000001;
  uVar2 = param_6;
  _objc_autoreleasePoolPush();
  uStack_18c = *(uint *)(param_7 + 0xbc) & 3;
  lStack_198 = 0;
  FUN_10ad515f4(0);
  pcStack_f0 = FUN_10ad4ecc4;
  ppuStack_e8 = &PTR_FUN_110c70608;
  plStack_d0 = &lStack_198;
  puStack_c8 = &uStack_b0;
  puStack_c0 = &uStack_18c;
  uStack_e0 = param_6;
  lStack_d8 = param_7;
  FUN_10a1020f8();
  (*(code *)*ppuStack_e8)(&ppuStack_e8);
  lVar3 = lStack_198;
  func_0x00010bf529e0(lStack_198);
  FUN_10aabaf20(&plStack_188,lVar3);
  lVar3 = lStack_198;
  dVar11 = 0.0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  lStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  plStack_1d0 = (long *)0x0;
  _objc_retain(lStack_198);
  lVar4 = lVar3;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar9 = *plStack_1d0;
    do {
      lVar10 = 0;
      do {
        if (*plStack_1d0 != lVar9) {
          _objc_enumerationMutation(lVar3);
        }
        uVar8 = *(undefined8 *)(lStack_1d8 + lVar10 * 8);
        func_0x00010bf20c00(uVar8);
        func_0x00010bf20c00(uVar8);
        func_0x00010bf20c00(uVar8);
        func_0x00010bf20c00(uVar8);
        fStack_1ec = (float)dVar11;
        fVar12 = fStack_1ec + (float)(double)CONCAT44(uVar13,fVar12);
        uVar13 = 0;
        fVar14 = (float)*(int *)(param_7 + 0xb0) -
                 ((float)param_3 + (float)(double)CONCAT44(uVar15,fVar14));
        uVar15 = 0;
        fStack_1e4 = (float)-(int)(*(double *)
                                    (&UNK_10e510038 + ((ulong)*(uint *)(param_7 + 0xbc) & 3) * 8) /
                                  180.0);
        fStack_1e8 = (float)*(int *)(param_7 + 0xb0) - (float)param_3;
        fStack_1f4 = (fVar12 + fStack_1ec) * 0.5;
        fStack_1f0 = (fVar14 + fStack_1e8) * 0.5;
        fStack_1ec = fVar12 - fStack_1ec;
        dVar11 = (double)(ulong)(uint)fStack_1ec;
        fStack_1e8 = fStack_1e8 - fVar14;
        param_3 = (double)(ulong)(uint)fStack_1e8;
        FUN_10aad6dd0(&plStack_188,&fStack_1f4);
        lVar10 = lVar10 + 1;
      } while (lVar4 != lVar10);
      lVar4 = lVar3;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar3);
  _objc_release(lStack_198);
  _objc_autoreleasePoolPop(uVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar6 = plStack_188;
  FUN_10a22cc2c(param_1,plStack_188,plStack_180,
                ((long)plStack_180 - (long)plStack_188 >> 2) * -0x3333333333333333);
  plVar5 = plStack_188;
  if (plStack_188 != (long *)0x0) {
    plStack_180 = plStack_188;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar3);
  _objc_release(lStack_198);
  if (plStack_188 != (long *)0x0) {
    plStack_180 = plStack_188;
    __ZdlPv();
  }
  __Unwind_Resume();
  if (*(int *)((long)plVar5 + 0x104) == 2) {
    pauVar1 = (undefined1 (*) [12])plVar6[1];
    for (pauVar7 = (undefined1 (*) [12])*plVar6; pauVar7 != pauVar1;
        pauVar7 = (undefined1 (*) [12])(pauVar7[1] + 8)) {
      fVar12 = (float)*(undefined8 *)(*pauVar7 + 8);
      fVar14 = (float)((ulong)*(undefined8 *)(*pauVar7 + 8) >> 0x20);
      uVar2 = *(undefined8 *)*pauVar7;
      *(ulong *)(*pauVar7 + 8) = CONCAT44(fVar14 + fVar14 * 0.46,fVar12 + SUB124(*pauVar7,8) * 0.32)
      ;
      *(ulong *)*pauVar7 =
           CONCAT44((float)((ulong)uVar2 >> 0x20) - fVar14 * 0.22999999 * 0.5,
                    (float)uVar2 + fVar12 * 0.0 * 0.5);
    }
  }
  return;
}



/* Entry: 10ad4e8b8; end: 10ad4e923;  */

void FUN_10ad4e8b8(long param_1,undefined8 *param_2)

{
  undefined1 (*pauVar1) [12];
  undefined8 uVar2;
  undefined1 (*pauVar3) [12];
  float fVar4;
  float fVar5;
  
  if (*(int *)(param_1 + 0x104) == 2) {
    pauVar1 = (undefined1 (*) [12])param_2[1];
    for (pauVar3 = (undefined1 (*) [12])*param_2; pauVar3 != pauVar1;
        pauVar3 = (undefined1 (*) [12])(pauVar3[1] + 8)) {
      fVar4 = (float)*(undefined8 *)(*pauVar3 + 8);
      fVar5 = (float)((ulong)*(undefined8 *)(*pauVar3 + 8) >> 0x20);
      uVar2 = *(undefined8 *)*pauVar3;
      *(ulong *)(*pauVar3 + 8) = CONCAT44(fVar5 + fVar5 * 0.46,fVar4 + SUB124(*pauVar3,8) * 0.32);
      *(ulong *)*pauVar3 =
           CONCAT44((float)((ulong)uVar2 >> 0x20) - fVar5 * 0.22999999 * 0.5,
                    (float)uVar2 + fVar4 * 0.0 * 0.5);
    }
  }
  return;
}



/* Entry: 10ad4e924; end: 10ad4ea53;  */

void FUN_10ad4e924(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  
  uVar3 = param_1[2];
  puVar7 = (undefined4 *)*param_1;
  if ((ulong)((long)(uVar3 - (long)puVar7) >> 2) < param_4) {
    puVar6 = param_2;
    if (puVar7 != (undefined4 *)0x0) {
      param_1[1] = puVar7;
      __ZdlPv(puVar7);
      uVar3 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (param_4 >> 0x3e != 0) {
      FUN_10aad4d5c();
      if (puVar6 == (undefined8 *)0x0) {
        return;
      }
      func_0x00010a09db0c(puVar6 + 3);
      _objc_release(puVar6[1]);
      _objc_release(*puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(puVar6);
      return;
    }
    uVar1 = (long)uVar3 >> 1;
    if ((ulong)((long)uVar3 >> 1) <= param_4) {
      uVar1 = param_4;
    }
    if (0x7ffffffffffffffb < uVar3) {
      uVar1 = 0x3fffffffffffffff;
    }
    FUN_10aad4d24(param_1,uVar1);
    puVar4 = (undefined4 *)param_1[1];
    for (; param_2 != param_3; param_2 = (undefined8 *)((long)param_2 + 4)) {
      *puVar4 = *(undefined4 *)param_2;
      puVar4 = puVar4 + 1;
    }
  }
  else {
    puVar5 = (undefined4 *)param_1[1];
    if ((ulong)((long)puVar5 - (long)puVar7 >> 2) < param_4) {
      puVar6 = (undefined8 *)((long)param_2 + ((long)puVar5 - (long)puVar7));
      puVar4 = puVar5;
      if (puVar5 != puVar7) {
        _memmove(puVar7,param_2);
        puVar5 = (undefined4 *)param_1[1];
        puVar4 = puVar5;
      }
      for (; puVar6 != param_3; puVar6 = (undefined8 *)((long)puVar6 + 4)) {
        *puVar5 = *(undefined4 *)puVar6;
        puVar5 = puVar5 + 1;
        puVar4 = puVar4 + 1;
      }
    }
    else {
      lVar2 = (long)param_3 - (long)param_2;
      if (lVar2 != 0) {
        _memmove(puVar7,param_2,lVar2);
      }
      puVar4 = (undefined4 *)((long)puVar7 + lVar2);
    }
  }
  param_1[1] = puVar4;
  return;
}



/* Entry: 10ad4ea54; end: 10ad4ea93;  */

void FUN_10ad4ea54(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    func_0x00010a09db0c(param_2 + 3);
    _objc_release(param_2[1]);
    _objc_release(*param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10ad4ea94; end: 10ad4eae7;  */

void FUN_10ad4ea94(long param_1)

{
  long *plVar1;
  long lStack_28;
  undefined8 **ppuStack_20;
  long *plStack_18;
  
  lStack_28 = *(long *)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(lStack_28 + 0x1f0) + 0x10);
  if (*plVar1 != -1) {
    plStack_18 = &lStack_28;
    ppuStack_20 = &plStack_18;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(plVar1,&ppuStack_20,FUN_10ad4eae8);
  }
  return;
}



/* Entry: 10ad4eae8; end: 10ad4ec8f;  */

void FUN_10ad4eae8(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = **(long **)*param_1;
  _objc_autoreleasePoolPush();
  uVar1 = 0;
  if (*(uint *)(lVar8 + 0x104) != 3) {
    uVar1 = *(uint *)(lVar8 + 0x104);
  }
  puVar5 = (undefined8 *)PTR__CIDetectorAccuracyHigh_11034ac38;
  if ((uVar1 == 2) || (puVar5 = (undefined8 *)PTR__CIDetectorAccuracyLow_11034ac40, uVar1 < 2)) {
    uVar7 = *puVar5;
    _objc_retain(uVar7);
  }
  else {
    uVar7 = 0;
  }
  uVar2 = *(undefined8 *)(*(long *)(lVar8 + 0x1f0) + 8);
  *(undefined8 *)(*(long *)(lVar8 + 0x1f0) + 8) = 0;
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___CIContext_1126b3120;
  _objc_opt_respondsToSelector
            (PTR__OBJC_CLASS___CIContext_1126b3120,PTR_s_contextWithEAGLContext__1125b1720);
  puVar4 = PTR__OBJC_CLASS___CIContext_1126b3120;
  if (((ulong)puVar3 & 1) != 0) {
    if ((*(long *)(lVar8 + 0x20) != 0) &&
       (lVar6 = *(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0x10) + 8), lVar6 != 0)) {
      (**(code **)(**(long **)(lVar6 + 0x40) + 0x38))();
    }
    func_0x00010bf4f5e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(*(long *)(lVar8 + 0x1f0) + 8);
    *(undefined **)(*(long *)(lVar8 + 0x1f0) + 8) = puVar4;
    _objc_release(uVar2);
  }
  puVar4 = PTR__OBJC_CLASS___CIDetector_1126bd658;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72040(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6fba0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = **(undefined8 **)(lVar8 + 0x1f0);
  **(undefined8 **)(lVar8 + 0x1f0) = puVar4;
  _objc_release(uVar2);
  _objc_release(puVar3);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10ad4ec90; end: 10ad4ecc3;  */

void FUN_10ad4ec90(void)

{
  return;
}



/* Entry: 10ad4ecc4; end: 10ad4f23f;  */

void FUN_10ad4ecc4(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x10);
  lVar14 = *(long *)(param_1 + 0x18);
  lVar5 = lVar14;
  FUN_10aab8a44();
  FUN_10aab8884(&plStack_90,lVar14);
  _objc_autoreleasePoolPush();
  lVar6 = lVar2;
  FUN_10ad4e1e4();
  if (plStack_90 == (long *)0x0) {
LAB_10ad4edac:
    lStack_a8 = 0;
    if (*(uint *)(lVar5 + 0x24) < 0x17 &&
        (1 << (ulong)(*(uint *)(lVar5 + 0x24) & 0x1f) & 0x600580U) != 0) {
      _CGColorSpaceCreateDeviceGray();
      if (lStack_a8 != 0) {
        lStack_b0 = lVar6;
        _CFRelease(lStack_a8);
        lVar6 = lStack_b0;
      }
      lStack_b0 = 0;
      lStack_a8 = lVar6;
      FUN_10aa10fc0(&lStack_b0);
    }
    else {
      _CGColorSpaceCreateDeviceRGB();
      if (lStack_a8 != 0) {
        lStack_b0 = lVar6;
        _CFRelease(lStack_a8);
        lVar6 = lStack_b0;
      }
      lStack_b0 = 0;
      lStack_a8 = lVar6;
      FUN_10aa10fc0(&lStack_b0);
    }
    puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64a40(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___CIImage_1126b3128;
    _objc_alloc();
    func_0x00010bff79c0((double)*(int *)(lVar5 + 0x10),(double)*(int *)(lVar5 + 0x14));
    _objc_release(puVar7);
    FUN_10aa10fc0(&lStack_a8);
    bVar4 = true;
  }
  else {
    if (plStack_90 == *(long **)(*(long *)(lVar2 + 0x1f0) + 0x18)) {
      _glFlush();
      FUN_10ad55b2c(*(undefined8 *)(*(long *)(lVar2 + 0x1f0) + 0x18));
      puVar8 = PTR__OBJC_CLASS___CIImage_1126b3128;
      _objc_alloc();
      func_0x00010bffa620();
      _objc_retain();
    }
    else {
      if (*(long *)(*(long *)(lVar2 + 0x1f0) + 8) == 0) goto LAB_10ad4edac;
      _CGColorSpaceCreateDeviceRGB();
      puVar8 = PTR__OBJC_CLASS___CIImage_1126b3128;
      lStack_a8 = lVar6;
      _objc_alloc();
      (**(code **)(*plStack_90 + 0x48))();
      func_0x00010c051ba0((double)(int)plStack_90[3],(double)*(int *)((long)plStack_90 + 0x1c));
      _objc_retain();
      FUN_10aa10fc0(&lStack_a8);
    }
    bVar4 = false;
  }
  _objc_autoreleasePoolPop(lVar14);
  if (bVar4) {
    _objc_retain(puVar8);
  }
  _objc_release(puVar8);
  if (plStack_88 != (long *)0x0) {
    plVar1 = plStack_88 + 1;
    do {
      lVar14 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
    }
  }
  lVar14 = *(long *)(param_1 + 0x18);
  iVar18 = *(int *)(lVar14 + 0xac);
  fVar17 = (float)*(int *)(lVar14 + 0xb0);
  fVar16 = 20.0 / fVar17;
  if (20.0 / fVar17 <= *(float *)(lVar14 + 0x98)) {
    fVar16 = *(float *)(lVar14 + 0x98);
  }
  puVar7 = puVar8;
  _objc_retain(puVar8);
  puVar9 = puVar8;
  if ((*(int *)(lVar2 + 0x104) != 2) &&
     (puVar7 = puVar8, _objc_opt_respondsToSelector(puVar8,PTR_s_imageByClampingToExtent_1125d7540),
     ((ulong)puVar7 & 1) != 0)) {
    puVar7 = puVar8;
    func_0x00010bfe6de0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010bfe6e40((double)((float)iVar18 * -0.25),(double)(fVar17 * -0.1),
                        (double)((float)iVar18 * 1.5),(double)(fVar17 * 1.2));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
  _objc_autoreleasePoolPush();
  uVar15 = **(undefined8 **)(lVar2 + 0x1f0);
  lStack_a8 = *(long *)PTR__CIDetectorTracking_11034ac70;
  plStack_90 = (long *)PTR____kCFBooleanFalse_11034ab60;
  uStack_a0 = *(undefined8 *)PTR__CIDetectorMinFeatureSize_11034ac60;
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720((double)fVar16);
  _objc_retainAutoreleasedReturnValue();
  uStack_98 = *(undefined8 *)PTR__CIDetectorImageOrientation_11034ac50;
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  plStack_88 = (long *)puVar10;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_80 = puVar11;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa3560();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = **(undefined8 **)(param_1 + 0x20);
  **(undefined8 **)(param_1 + 0x20) = uVar15;
  _objc_release(uVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_autoreleasePoolPop(puVar7);
  _objc_release(puVar9);
  _objc_release(puVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  FUN_10aa10fc0(&lStack_b0);
  FUN_10aa10fc0(&lStack_a8);
  func_0x00010a09db0c(&plStack_90);
  __Unwind_Resume(puVar8);
  return;
}



/* Entry: 10ad4f240; end: 10ad4f293;  */

void FUN_10ad4f240(void)

{
  return;
}



/* Entry: 10ad4f294; end: 10ad4f31b;  */

undefined4 FUN_10ad4f294(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 3;
  }
  lVar1 = param_1;
  _CFStringCompare(param_1,*(undefined8 *)PTR__kCVImageBufferColorPrimaries_ITU_R_2020_11034a2c8,0);
  if (lVar1 == 0) {
    uVar2 = 1;
  }
  else {
    lVar1 = param_1;
    _CFStringCompare(param_1,*(undefined8 *)PTR__kCVImageBufferColorPrimaries_ITU_R_709_2_11034a2d0,
                     0);
    uVar2 = 0;
    if (lVar1 != 0) {
      _CFStringCompare(param_1,*(undefined8 *)PTR__kCVImageBufferColorPrimaries_P3_D65_11034a2d8,0);
      uVar2 = 2;
      if (param_1 != 0) {
        uVar2 = 3;
      }
    }
  }
  return uVar2;
}



/* Entry: 10ad4f31c; end: 10ad4f4eb; +[HDRImageCapture captureAndSaveHDRFrame:completion:] */

void FUN_10ad4f31c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *apuStack_f0 [21];
  undefined8 uStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
  if (param_3 == 0) {
    uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_40 = &PTR____CFConstantStringClassReference_110f2dc38;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = &PTR____CFConstantStringClassReference_110f2dc18;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    if (param_4 != 0) {
      ppuVar5 = ppuVar2;
      (**(code **)(param_4 + 0x10))(param_4,0);
    }
    _objc_release(ppuVar2);
  }
  else {
    FUN_10ad50544(apuStack_f0,param_3,1);
    ppuVar2 = (undefined **)PTR_PTR_1126de058;
    _objc_retain(param_4);
    ppuVar5 = apuStack_f0;
    func_0x00010bf9d000(ppuVar2);
    _objc_release(param_4);
    FUN_10a1b2b9c(apuStack_f0);
  }
  lVar4 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar2);
  _objc_release(param_4);
  __Unwind_Resume();
  _objc_retain(ppuVar5);
  if ((int)ppuVar2 == 0) {
    ppuVar3 = ppuVar5;
    func_0x00010c09e4e0();
    _objc_retainAutoreleasedReturnValue();
    _NSLog(&PTR____CFConstantStringClassReference_110f2dc78);
    _objc_release(ppuVar3);
  }
  else {
    _NSLog(&PTR____CFConstantStringClassReference_110f2dc58);
  }
  lVar4 = *(long *)(lVar4 + 0x20);
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x10))(lVar4,ppuVar2,ppuVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar5);
  return;
}



/* Entry: 10ad4f4ec; end: 10ad4f5a7;  */

void FUN_10ad4f4ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if ((int)param_2 == 0) {
    uVar1 = param_3;
    func_0x00010c09e4e0();
    _objc_retainAutoreleasedReturnValue();
    _NSLog(&PTR____CFConstantStringClassReference_110f2dc78);
    _objc_release(uVar1);
  }
  else {
    _NSLog(&PTR____CFConstantStringClassReference_110f2dc58);
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ad4f5a8; end: 10ad5001b; +[HDRImageExporter exportHDRImageToPhotos:completion:] */

void FUN_10ad4f5a8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined1 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *unaff_x27;
  undefined *puStack_258;
  undefined8 uStack_250;
  code *pcStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  long lStack_230;
  undefined1 uStack_228;
  long lStack_220;
  undefined *puStack_218;
  undefined **ppuStack_210;
  long lStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined **ppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar12 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_10ad5001c;
  puStack_100 = &UNK_110c70628;
  _objc_retain(param_4);
  ppuVar4 = &puStack_118;
  lStack_f8 = param_4;
  _objc_retainBlock();
  lVar9 = *(long *)(param_3 + 0x18) * (long)*(int *)(param_3 + 0x14);
  if (*(long *)(param_3 + 0x40) != 0) {
    lVar9 = *(long *)(param_3 + 0x40);
  }
  lVar5 = 0;
  _CGDataProviderCreateWithData(0,*(undefined8 *)(param_3 + 0x28),lVar9,0);
  puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar5 == 0) {
    uStack_90 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_88 = &PTR____CFConstantStringClassReference_110f2dcb8;
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    uVar11 = 0;
    puVar12 = puVar7;
    (*(code *)ppuVar4[2])(ppuVar4);
  }
  else {
    func_0x00010bf578a0();
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (param_1 == 0) {
      uStack_a0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_98 = &PTR____CFConstantStringClassReference_110f2dcd8;
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      uVar11 = 0;
      puVar12 = puVar7;
      (*(code *)ppuVar4[2])(ppuVar4);
      _CGDataProviderRelease(lVar5);
    }
    else {
      puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_alloc_init();
      func_0x00010c1d0640();
      func_0x00010c1d0640(puVar7);
      func_0x00010c1d0640(puVar7);
      if (0.0 < *(float *)(param_3 + 0xa0)) {
        iVar3 = 2;
        func_0x000107c31924(2,0xf,0,0);
        if (iVar3 != 0) {
          uStack_b0 = *(undefined8 *)PTR__kCVImageBufferAmbientViewingEnvironmentKey_11034a2b0;
          puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df740(*(undefined4 *)(param_3 + 0xa0));
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          puStack_a8 = puVar6;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar7);
          _objc_release(puVar8);
          _objc_release(puVar6);
        }
      }
      _CVBufferSetAttachments(param_1,puVar7,1);
      plVar1 = (long *)PTR__kCGColorSpaceDisplayP3_110347628;
      if (*(int *)(param_3 + 0x90) != 2) {
        plVar1 = (long *)PTR__kCGColorSpaceITUR_2020_110347630;
      }
      plVar2 = (long *)PTR__kCGColorSpaceITUR_709_110347638;
      if (*(int *)(param_3 + 0x90) != 0) {
        plVar2 = plVar1;
      }
      lVar9 = *plVar2;
      _CGColorSpaceCreateWithName();
      puVar8 = PTR__OBJC_CLASS___CIImage_1126b3128;
      if (lVar9 == 0) {
        _NSLog(&PTR____CFConstantStringClassReference_110f2dcf8);
        puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
        uStack_c0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
        ppuStack_b8 = &PTR____CFConstantStringClassReference_110f2dcf8;
        puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar12);
        uVar11 = 0;
        puVar12 = puVar6;
        (*(code *)ppuVar4[2])(ppuVar4);
        _CVPixelBufferRelease(param_1);
      }
      else {
        uStack_d0 = *(undefined8 *)PTR__kCIImageColorSpace_11034ad58;
        puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        lStack_c8 = lVar9;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfe9320();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        if (puVar8 == (undefined *)0x0) {
          _NSLog(&PTR____CFConstantStringClassReference_110f2dd18);
          puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
          uStack_e0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
          ppuStack_d8 = &PTR____CFConstantStringClassReference_110f2dd18;
          puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf99240();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar12);
          _CGColorSpaceRelease(lVar9);
          _CVPixelBufferRelease(param_1);
          uVar11 = 0;
          puVar12 = puVar6;
          (*(code *)ppuVar4[2])(ppuVar4);
        }
        else {
          _CGAffineTransformMakeRotation(&uStack_148,0xbff921fb54442d18);
          uStack_178 = uStack_140;
          uStack_180 = uStack_148;
          uStack_168 = uStack_130;
          uStack_170 = uStack_138;
          uStack_158 = uStack_120;
          uStack_160 = uStack_128;
          puVar6 = puVar8;
          func_0x00010bfe6dc0(puVar8);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _NSTemporaryDirectory();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          puVar10 = PTR__OBJC_CLASS___NSDate_1126ae770;
          puStack_1c8 = puVar8;
          func_0x00010bf64de0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = puVar10;
          func_0x00010bf6e340();
          _objc_retainAutoreleasedReturnValue();
          puStack_1f0 = unaff_x27;
          func_0x00010c25d9e0();
          _objc_retainAutoreleasedReturnValue();
          puStack_1d0 = puVar13;
          _objc_release(unaff_x27);
          _objc_release(puVar10);
          puVar8 = puStack_1c8;
          func_0x00010c25ce00();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = PTR__OBJC_CLASS___NSURL_1126ae598;
          puStack_1e0 = puVar8;
          func_0x00010bfad300();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR__OBJC_CLASS___CIContext_1126b3120;
          puStack_1c0 = puVar13;
          func_0x00010bf4e080();
          _objc_retainAutoreleasedReturnValue();
          iVar3 = 2;
          uVar11 = 0xf;
          puStack_1d8 = puVar8;
          func_0x000107c31924(2,0xf,0,0);
          puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
          if (iVar3 == 0) {
            uStack_f0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
            ppuStack_e8 = &PTR____CFConstantStringClassReference_110f2dd58;
            unaff_x27 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf99240();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(unaff_x27);
            puVar13 = (undefined *)0x0;
          }
          else {
            puStack_188 = (undefined *)0x0;
            puVar13 = puStack_1d8;
            func_0x00010c2bdee0();
            puVar8 = puStack_188;
            _objc_retain(puStack_188);
          }
          _CGColorSpaceRelease(lVar9);
          if (((ulong)puVar13 & 1) == 0) {
            puVar12 = puVar8;
            func_0x00010c09e4e0();
            _objc_retainAutoreleasedReturnValue();
            puStack_1f0 = puVar12;
            _NSLog(&PTR____CFConstantStringClassReference_110f2dd78);
            _objc_release(puVar12);
            _CGColorSpaceRelease(lVar9);
            _CVPixelBufferRelease(param_1);
            uVar11 = 0;
            puVar12 = puVar8;
            (*(code *)ppuVar4[2])(ppuVar4);
          }
          else {
            _CGColorSpaceRelease(lVar9);
            _CVPixelBufferRelease(param_1);
            puVar10 = puStack_1c0;
            puVar13 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
            puStack_1b8 = puVar12;
            uStack_1b0 = 0xc2000000;
            pcStack_1a8 = FUN_10ad500e4;
            puStack_1a0 = &UNK_110c706b8;
            _objc_retain(puStack_1c0);
            puStack_198 = puVar10;
            _objc_retain(ppuVar4);
            puVar12 = (undefined *)0x1;
            ppuStack_190 = ppuVar4;
            func_0x00010c1349c0(puVar13);
            _objc_release(ppuStack_190);
            _objc_release(puStack_198);
          }
          _objc_release(puVar8);
          _objc_release(puStack_1d8);
          _objc_release(puStack_1c0);
          _objc_release(puStack_1e0);
          _objc_release(puStack_1d0);
          _objc_release(puStack_1c8);
        }
      }
      _objc_release(puVar6);
    }
  }
  _objc_release(puVar7);
  _objc_release(ppuVar4);
  _objc_release(lStack_f8);
  lVar9 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_release(unaff_x27);
    _objc_release(puStack_1d8);
    _objc_release(puStack_1c0);
    _objc_release(puStack_1e0);
    _objc_release(puStack_1d0);
    _objc_release(puStack_1c8);
    _objc_release(puVar6);
    _objc_release(puVar7);
    _objc_release(ppuVar4);
    _objc_release(lStack_f8);
    _objc_release(param_4);
    lVar5 = lVar9;
    __Unwind_Resume();
    pcStack_1f8 = FUN_10ad5001c;
    lStack_220 = lVar9;
    puStack_218 = puVar7;
    ppuStack_210 = ppuVar4;
    lStack_208 = param_4;
    puStack_200 = &stack0xfffffffffffffff0;
    _objc_retain(puVar12);
    lVar9 = *(long *)(lVar5 + 0x20);
    if (lVar9 != 0) {
      puStack_258 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_250 = 0xc2000000;
      pcStack_248 = FUN_10ad500d0;
      puStack_240 = &UNK_110c70658;
      _objc_retain(lVar9);
      lStack_230 = lVar9;
      uStack_228 = uVar11;
      _objc_retain(puVar12);
      puStack_238 = puVar12;
      func_0x000107c27d8c(PTR___dispatch_main_q_11034be20,&puStack_258);
      _objc_release(puStack_238);
      _objc_release(lStack_230);
    }
    _objc_release(puVar12);
    return;
  }
  return;
}



/* Entry: 10ad5001c; end: 10ad500cf;  */

void FUN_10ad5001c(long param_1,undefined1 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10ad500d0;
    puStack_50 = &UNK_110c70658;
    _objc_retain(lVar1);
    lStack_40 = lVar1;
    uStack_38 = param_2;
    _objc_retain(param_3);
    uStack_48 = param_3;
    func_0x000107c27d8c(PTR___dispatch_main_q_11034be20,&puStack_68);
    _objc_release(uStack_48);
    _objc_release(lStack_40);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10ad500d0; end: 10ad500e3;  */

void FUN_10ad500d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ad500e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x20));
  return;
}


