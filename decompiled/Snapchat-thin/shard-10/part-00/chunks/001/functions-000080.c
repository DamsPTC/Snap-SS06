/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10743e508; end: 10743e513;  */

undefined ** FUN_10743e508(void)

{
  return &PTR_DAT_1109b0788;
}



/* Entry: 10743e514; end: 10743e54f;  */

long FUN_10743e514(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) == param_1) {
    uVar1 = 0x20;
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
      return param_1;
    }
    uVar1 = 0x28;
  }
  func_0x00010743e784(uVar1);
  return param_1;
}



/* Entry: 10743e550; end: 10743e557;  */

void FUN_10743e550(void)

{
  return;
}



/* Entry: 10743e558; end: 10743e593;  */

void FUN_10743e558(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  *puVar1 = &PTR_FUN_1109b07a8;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = uVar2;
  return;
}



/* Entry: 10743e594; end: 10743e5c3;  */

void FUN_10743e594(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_1109b07a8;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = uVar1;
  return;
}



/* Entry: 10743e5c4; end: 10743e5fb;  */

void FUN_10743e5c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_1 + 0x10);
  uStack_20 = *(undefined8 *)(param_1 + 8);
  func_0x00010743e718(param_3,param_1,param_2,&uStack_20);
  return;
}



/* Entry: 10743e5fc; end: 10743e627;  */

void FUN_10743e5fc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010743e7a0(param_2,param_1,&PTR_DAT_1109b0808);
  func_0x00010743e774();
  return;
}



/* Entry: 10743e628; end: 10743e63b;  */

undefined ** FUN_10743e628(void)

{
  return &PTR_DAT_1109b0808;
}



/* Entry: 10743e63c; end: 10743e66f;  */

void FUN_10743e63c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_DAT_1109b0828;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10743e670; end: 10743e697;  */

void FUN_10743e670(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_1109b0828;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 10743e698; end: 10743e6d7;  */

void FUN_10743e698(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = (*(undefined8 **)(param_1 + 8))[1];
  uStack_20 = **(undefined8 **)(param_1 + 8);
  func_0x00010743e718(param_3,param_1,param_2,&uStack_20);
  return;
}



/* Entry: 10743e6d8; end: 10743e703;  */

void FUN_10743e6d8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010743e7a0(param_2,param_1,&PTR_DAT_1109b0888);
  func_0x00010743e774();
  return;
}



/* Entry: 10743e704; end: 10743e7bb;  */

undefined ** FUN_10743e704(void)

{
  return &PTR_DAT_1109b0888;
}



/* Entry: 10743e7bc; end: 10743e95f;  */

void FUN_10743e7bc(long *param_1,int param_2,long param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  lVar7 = param_3;
  FUN_10741a9dc(param_3);
  puVar1 = auStack_68;
  func_0x00010002b838(puVar1,lVar7);
  FUN_10741abc0();
  FUN_10741b094();
  if ((puVar1 != (undefined1 *)0x0) && (*(int *)(puVar1 + 0x38) == param_2)) {
    plVar5 = (long *)(param_3 + 0x20);
    (**(code **)(*plVar5 + 0x20))();
    if ((plVar5[1] - *plVar5) / 0x18 ==
        ((*(long *)(puVar1 + 0x48) - *(long *)(puVar1 + 0x40)) / 0x38) * 2) {
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      func_0x0001000fc044(&uStack_80);
      lVar6 = 0;
      lVar7 = 0;
      for (uVar8 = 0; uVar8 < (ulong)((*(long *)(puVar1 + 0x48) - *(long *)(puVar1 + 0x40)) / 0x38);
          uVar8 = uVar8 + 1) {
        plVar3 = (long *)(*plVar5 + lVar6);
        lVar4 = (long)*(char *)((long)plVar3 + 0x17);
        if (lVar4 < 0) {
          lVar4 = plVar3[1];
          plVar3 = (long *)*plVar3;
        }
        uVar2 = *(long *)(puVar1 + 0x40) + lVar7;
        func_0x000107278530(uVar2,plVar3,lVar4);
        if ((uVar2 & 1) == 0) goto LAB_10743e90c;
        func_0x000100206870(&uStack_80,*plVar5 + lVar6 + 0x18);
        lVar7 = lVar7 + 0x38;
        lVar6 = lVar6 + 0x30;
      }
      (**(code **)(*param_1 + 0x18))(param_1,puVar1 + 0x70,&uStack_80,param_4);
LAB_10743e90c:
      func_0x0001000e30f4(&uStack_80);
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  return;
}



/* Entry: 10743e960; end: 10743e9b7;  */

double FUN_10743e960(double *param_1)

{
  double dVar1;
  
  switch(*(float *)(param_1 + 1)) {
  case 0.0:
    return (double)(long)(int)*(float *)param_1;
  case 1.4013e-45:
    return (double)(ulong)(uint)*(float *)param_1;
  case 2.8026e-45:
  case 4.2039e-45:
    return *param_1;
  }
  dVar1 = (double)(long)*(float *)param_1;
  if (*(float *)(param_1 + 1) != 5.60519e-45) {
    dVar1 = (double)(long)*param_1;
  }
  return dVar1;
}



/* Entry: 10743e9b8; end: 10743effb;  */

/* WARNING: Possible PIC construction at 0x00010743ef30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010743ef34) */

long * FUN_10743e9b8(long param_1,long *param_2,undefined8 param_3,long param_4)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 extraout_x8;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  int iVar18;
  long unaff_x25;
  ulong unaff_x26;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined1 auStack_c8 [32];
  int aiStack_a8 [2];
  long alStack_a0 [3];
  long *plStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  plVar4 = param_2;
  func_0x00010743f718();
  lVar5 = plVar4[9];
  uStack_68 = extraout_x8;
  FUN_10741aa3c();
  bVar3 = (int)lVar5 == 1;
  if (bVar3) {
    plStack_88 = *(long **)(param_1 + 0x38);
    plStack_80 = (long *)CONCAT71(plStack_80._1_7_,1);
    func_0x00010724e404();
    lVar5 = param_1 + 0x10;
    FUN_10743f164(lVar5,plVar4);
    if (lVar5 != 0) {
      unaff_x25 = *(long *)(lVar5 + 0x18);
    }
    func_0x00010724e49c(&plStack_88);
    if (lVar5 == 0) {
      uStack_d8 = *(undefined8 *)(param_1 + 0x38);
      uStack_d0 = 1;
      func_0x000107279a5c();
      plVar17 = (long *)(param_1 + 0x10);
      FUN_10743f164(plVar17,plVar4);
      if (plVar17 == (long *)0x0) {
        FUN_10743f200(auStack_c8,param_4);
        lVar5 = 0xa0;
        __Znwm();
        FUN_10743f254(aiStack_a8,auStack_c8);
        uVar6 = 0x28;
        __Znwm();
        func_0x00010743f728();
        FUN_10743f254();
        uStack_70 = uVar6;
        FUN_10743f200(lVar5,&plStack_88);
        *(undefined8 *)(lVar5 + 0x20) = 0x32aaaba7;
        *(undefined8 *)(lVar5 + 0x30) = 0;
        *(undefined8 *)(lVar5 + 0x28) = 0;
        *(undefined8 *)(lVar5 + 0x40) = 0;
        *(undefined8 *)(lVar5 + 0x38) = 0;
        *(undefined8 *)(lVar5 + 0x50) = 0;
        *(undefined8 *)(lVar5 + 0x48) = 0;
        *(undefined8 *)(lVar5 + 0x58) = 0;
        *(undefined1 *)(lVar5 + 0x60) = 1;
        *(undefined8 *)(lVar5 + 0x70) = 0;
        *(undefined8 *)(lVar5 + 0x78) = 0;
        *(undefined8 *)(lVar5 + 0x68) = 1000000;
        *(undefined8 *)(lVar5 + 0x80) = &PTR_FUN_1109b09a0;
        *(undefined8 **)(lVar5 + 0x98) = (undefined8 *)(lVar5 + 0x80);
        func_0x00010743e168(&plStack_88);
        func_0x00010743e168(aiStack_a8);
        func_0x00010743e168(auStack_c8);
        iVar18 = (int)plVar4;
        uStack_e0 = 0;
        uVar9 = (ulong)iVar18;
        uVar7 = *(ulong *)(param_1 + 0x18);
        aiStack_a8[0] = iVar18;
        alStack_a0[0] = lVar5;
        if (uVar7 != 0) {
          uVar12 = uVar7 - 1;
          if ((uVar7 & uVar12) == 0) {
            unaff_x26 = uVar12 & uVar9;
          }
          else {
            unaff_x26 = uVar9;
            if (uVar7 <= uVar9) {
              uVar15 = 0;
              if (uVar7 != 0) {
                uVar15 = uVar9 / uVar7;
              }
              unaff_x26 = uVar9 - uVar15 * uVar7;
            }
          }
          plVar17 = *(long **)(*(long *)(param_1 + 0x10) + unaff_x26 * 8);
          if (plVar17 != (long *)0x0) {
            do {
              while( true ) {
                plVar17 = (long *)*plVar17;
                if (plVar17 == (long *)0x0) goto LAB_10743ec0c;
                uVar15 = plVar17[1];
                if (uVar15 != uVar9) break;
                if ((int)plVar17[2] == iVar18) goto LAB_10743eec8;
              }
              if ((uVar7 & uVar12) == 0) {
                uVar15 = uVar15 & uVar12;
              }
              else if (uVar7 <= uVar15) {
                uVar16 = 0;
                if (uVar7 != 0) {
                  uVar16 = uVar15 / uVar7;
                }
                uVar15 = uVar15 - uVar16 * uVar7;
              }
            } while (uVar15 == unaff_x26);
          }
        }
LAB_10743ec0c:
        plVar17 = (long *)0x20;
        __Znwm();
        plVar4 = (long *)(param_1 + 0x20);
        uStack_78 = 1;
        *plVar17 = 0;
        plVar17[1] = uVar9;
        *(int *)(plVar17 + 2) = iVar18;
        alStack_a0[0] = 0;
        plVar17[3] = lVar5;
        fVar1 = (float)(*(long *)(param_1 + 0x28) + 1);
        plStack_80 = plVar4;
        if ((uVar7 == 0) || (*(float *)(param_1 + 0x30) * (float)uVar7 < fVar1)) {
          uVar12 = 1;
          if (2 < uVar7) {
            uVar12 = (ulong)((uVar7 & uVar7 - 1) != 0);
          }
          uVar12 = uVar12 | uVar7 << 1;
          uVar15 = (ulong)(fVar1 / *(float *)(param_1 + 0x30));
          if (uVar12 <= uVar15) {
            uVar12 = uVar15;
          }
          plStack_88 = plVar17;
          if (uVar12 - 1 == 0) {
            uVar12 = 2;
          }
          else if ((uVar12 & uVar12 - 1) != 0) {
            __ZNSt3__112__next_primeEm();
            uVar7 = *(ulong *)(param_1 + 0x18);
          }
          if (uVar7 < uVar12) {
LAB_10743ecbc:
            if (uVar12 >> 0x3d != 0) goto LAB_10743ef64;
            lVar5 = uVar12 << 3;
            __Znwm(lVar5);
            func_0x00010743f440(param_1 + 0x10,lVar5);
            *(ulong *)(param_1 + 0x18) = uVar12;
            lVar5 = *(long *)(param_1 + 0x10);
            for (uVar7 = 0; uVar12 != uVar7; uVar7 = uVar7 + 1) {
              *(undefined8 *)(lVar5 + uVar7 * 8) = 0;
            }
            plVar10 = (long *)*plVar4;
            uVar7 = uVar12;
            if (plVar10 != (long *)0x0) {
              uVar13 = plVar10[1];
              uVar16 = uVar12 - 1;
              uVar15 = 0;
              if (uVar12 != 0) {
                uVar15 = uVar13 / uVar12;
              }
              uVar14 = uVar13;
              if (uVar12 <= uVar13) {
                uVar14 = uVar13 - uVar15 * uVar12;
              }
              if ((uVar12 & uVar16) == 0) {
                uVar14 = uVar13 & uVar16;
              }
              *(long **)(lVar5 + uVar14 * 8) = plVar4;
              while (plVar11 = plVar10, plVar10 = (long *)*plVar11, plVar10 != (long *)0x0) {
                uVar15 = plVar10[1];
                if ((uVar12 & uVar16) == 0) {
                  uVar15 = uVar15 & uVar16;
                }
                else if (uVar12 <= uVar15) {
                  uVar13 = 0;
                  if (uVar12 != 0) {
                    uVar13 = uVar15 / uVar12;
                  }
                  uVar15 = uVar15 - uVar13 * uVar12;
                }
                if (uVar15 != uVar14) {
                  if (*(long *)(lVar5 + uVar15 * 8) == 0) {
                    *(long **)(lVar5 + uVar15 * 8) = plVar11;
                    uVar14 = uVar15;
                  }
                  else {
                    *plVar11 = *plVar10;
                    *plVar10 = **(undefined8 **)(lVar5 + uVar15 * 8);
                    **(long **)(lVar5 + uVar15 * 8) = (long)plVar10;
                    plVar10 = plVar11;
                  }
                }
              }
            }
          }
          else if (uVar12 < uVar7) {
            uVar15 = (ulong)((float)*(ulong *)(param_1 + 0x28) / *(float *)(param_1 + 0x30));
            if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if (1 < uVar15) {
              uVar15 = 1L << (-LZCOUNT(uVar15 - 1) & 0x3fU);
            }
            if (uVar12 <= uVar15) {
              uVar12 = uVar15;
            }
            if (uVar12 < uVar7) {
              if (uVar12 != 0) goto LAB_10743ecbc;
              func_0x00010743f440(param_1 + 0x10,0);
              *(undefined8 *)(param_1 + 0x18) = 0;
              uVar7 = 0;
            }
            else {
              uVar7 = *(ulong *)(param_1 + 0x18);
            }
          }
          if ((uVar7 & uVar7 - 1) == 0) {
            unaff_x26 = uVar7 - 1 & uVar9;
          }
          else {
            unaff_x26 = uVar9;
            if (uVar7 <= uVar9) {
              uVar12 = 0;
              if (uVar7 != 0) {
                uVar12 = uVar9 / uVar7;
              }
              unaff_x26 = uVar9 - uVar12 * uVar7;
            }
          }
        }
        lVar5 = *(long *)(param_1 + 0x10);
        plVar10 = *(long **)(lVar5 + unaff_x26 * 8);
        if (plVar10 == (long *)0x0) {
          *plVar17 = *plVar4;
          *plVar4 = (long)plVar17;
          *(long **)(lVar5 + unaff_x26 * 8) = plVar4;
          if (*plVar17 != 0) {
            uVar9 = *(ulong *)(*plVar17 + 8);
            if ((uVar7 & uVar7 - 1) == 0) {
              uVar9 = uVar9 & uVar7 - 1;
            }
            else if (uVar7 <= uVar9) {
              uVar12 = 0;
              if (uVar7 != 0) {
                uVar12 = uVar9 / uVar7;
              }
              uVar9 = uVar9 - uVar12 * uVar7;
            }
            *(long **)(lVar5 + uVar9 * 8) = plVar17;
          }
        }
        else {
          *plVar17 = *plVar10;
          *plVar10 = (long)plVar17;
        }
        plStack_88 = (long *)0x0;
        *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
        FUN_10743f458(&plStack_88);
LAB_10743eec8:
        func_0x00010743e0e0(alStack_a0);
        func_0x00010743e0e0(&uStack_e0);
      }
      unaff_x25 = plVar17[3];
      func_0x000107279ee0(&uStack_d8);
    }
    __ZNSt3__15mutex4lockEv(unaff_x25 + 0x20);
    lVar5 = unaff_x25 + 0x80;
    func_0x0001072de338();
    lVar8 = lVar5;
    if ((*(byte *)(unaff_x25 + 0x60) & 1) == 0) {
      lVar8 = *(long *)(unaff_x25 + 0x78);
    }
    lVar8 = *(long *)(unaff_x25 + 0x70) + (lVar5 - lVar8);
    *(long *)(unaff_x25 + 0x70) = lVar8;
    *(long *)(unaff_x25 + 0x78) = lVar5;
    if (((*(byte *)(unaff_x25 + 0x60) & 1) != 0) ||
       (bVar3 = lVar8 == *(long *)(unaff_x25 + 0x68), *(long *)(unaff_x25 + 0x68) <= lVar8)) {
      plVar4 = *(long **)(unaff_x25 + 0x18);
SUB_10743f148:
      iVar18 = (int)param_2;
      if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010743f154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x30))();
        return plVar4;
      }
      func_0x000104bfeb48();
      uVar7 = plVar4[1];
      if ((uVar7 != 0) && (plVar4[3] != 0)) {
        uVar9 = (ulong)iVar18;
        uVar12 = uVar7 - 1;
        if ((uVar7 & uVar12) == 0) {
          uVar15 = uVar12 & uVar9;
        }
        else {
          uVar15 = uVar9;
          if (uVar7 <= uVar9) {
            uVar15 = 0;
            if (uVar7 != 0) {
              uVar15 = uVar9 / uVar7;
            }
            uVar15 = uVar9 - uVar15 * uVar7;
          }
        }
        plVar4 = *(long **)(*plVar4 + uVar15 * 8);
        if (plVar4 == (long *)0x0) {
          return (long *)0x0;
        }
        do {
          while( true ) {
            plVar4 = (long *)*plVar4;
            if (plVar4 == (long *)0x0) {
              return (long *)0x0;
            }
            uVar16 = plVar4[1];
            if (uVar16 != uVar9) break;
            if (*(int *)(plVar4 + 2) == iVar18) {
              return plVar4;
            }
          }
          if ((uVar7 & uVar12) == 0) {
            uVar16 = uVar16 & uVar12;
          }
          else if (uVar7 <= uVar16) {
            uVar13 = 0;
            if (uVar7 != 0) {
              uVar13 = uVar16 / uVar7;
            }
            uVar16 = uVar16 - uVar13 * uVar7;
          }
        } while (uVar16 == uVar15);
      }
      return (long *)0x0;
    }
    *(undefined1 *)(unaff_x25 + 0x60) = 0;
    func_0x00010743f6a0(uStack_68);
    if (bVar3) {
      plVar4 = (long *)(unaff_x25 + 0x20);
      func_0x00010743f798(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
      return plVar4;
    }
  }
  else if ((int)lVar5 == 0) {
    plVar4 = *(long **)(param_4 + 0x18);
    func_0x00010743f6a0(uStack_68);
    if (bVar3) {
      func_0x00010743f798();
      goto SUB_10743f148;
    }
  }
  else {
    func_0x00010743f6a0(uStack_68);
    if (bVar3) {
      func_0x00010743f798();
      return plVar4;
    }
  }
  ___stack_chk_fail();
LAB_10743ef64:
  func_0x000104bd35f4();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10743ef6c);
  (*pcVar2)();
}



/* Entry: 10743effc; end: 10743f05f;  */

void FUN_10743effc(undefined8 param_1,long param_2,long *param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  int extraout_w8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [24];
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  undefined ***pppuStack_c0;
  long lStack_b0;
  long lStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined ***pppuStack_50;
  long lStack_40;
  undefined4 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010743f718();
  lStack_40 = *param_3;
  uStack_30 = 0;
  ppuStack_68 = &PTR_FUN_1109b0a20;
  pppuStack_50 = &ppuStack_68;
  uStack_60 = param_1;
  uStack_28 = extraout_x8;
  func_0x00010743f738();
  func_0x00010743f6f8();
  func_0x00010743f6a0(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010743f6f8();
    func_0x00010743f700();
    func_0x00010743f718();
    lStack_a8 = param_3[1];
    lStack_b0 = *param_3;
    uStack_a0 = 1;
    ppuStack_d8 = &PTR_DAT_1109b0aa0;
    pppuStack_c0 = &ppuStack_d8;
    uStack_d0 = param_1;
    uStack_98 = extraout_x8_00;
    func_0x00010743f738();
    func_0x00010743f6f8();
    func_0x00010743f6a0(uStack_98);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010743f6f8();
      func_0x00010743f700();
      FUN_10743e960();
      func_0x00010743f74c();
      func_0x00010743f708();
      if (extraout_w8 != 0) {
        func_0x00010743f770();
                    /* WARNING: Could not recover jumptable at 0x00010743f6dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)*param_3 + 8))((long *)*param_3,param_2 + 0x20);
        return;
      }
      func_0x00010743f744();
      lVar7 = param_2;
      FUN_10741a9dc(param_2);
      puVar1 = auStack_148;
      func_0x00010002b838(puVar1,lVar7);
      FUN_10741abc0();
      FUN_10741b094();
      if ((puVar1 != (undefined1 *)0x0) && (*(int *)(puVar1 + 0x38) == 0)) {
        plVar5 = (long *)(param_2 + 0x20);
        (**(code **)(*plVar5 + 0x20))();
        if ((plVar5[1] - *plVar5) / 0x18 ==
            ((*(long *)(puVar1 + 0x48) - *(long *)(puVar1 + 0x40)) / 0x38) * 2) {
          uStack_160 = 0;
          uStack_158 = 0;
          uStack_150 = 0;
          func_0x0001000fc044(&uStack_160);
          lVar6 = 0;
          lVar7 = 0;
          for (uVar8 = 0;
              uVar8 < (ulong)((*(long *)(puVar1 + 0x48) - *(long *)(puVar1 + 0x40)) / 0x38);
              uVar8 = uVar8 + 1) {
            plVar3 = (long *)(*plVar5 + lVar6);
            lVar4 = (long)*(char *)((long)plVar3 + 0x17);
            if (lVar4 < 0) {
              lVar4 = plVar3[1];
              plVar3 = (long *)*plVar3;
            }
            uVar2 = *(long *)(puVar1 + 0x40) + lVar7;
            func_0x000107278530(uVar2,plVar3,lVar4);
            if ((uVar2 & 1) == 0) goto LAB_10743e90c;
            func_0x000100206870(&uStack_160,*plVar5 + lVar6 + 0x18);
            lVar7 = lVar7 + 0x38;
            lVar6 = lVar6 + 0x30;
          }
          (**(code **)(*param_3 + 0x18))(param_3,puVar1 + 0x70,&uStack_160);
LAB_10743e90c:
          func_0x0001000e30f4(&uStack_160);
        }
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_148);
      return;
    }
  }
  return;
}



/* Entry: 10743f060; end: 10743f0c7;  */

void FUN_10743f060(undefined8 param_1,long param_2,long *param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  int extraout_w8;
  undefined8 extraout_x8;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [24];
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined ***pppuStack_50;
  long lStack_40;
  long lStack_38;
  undefined4 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010743f718();
  lStack_38 = param_3[1];
  lStack_40 = *param_3;
  uStack_30 = 1;
  ppuStack_68 = &PTR_DAT_1109b0aa0;
  pppuStack_50 = &ppuStack_68;
  uStack_60 = param_1;
  uStack_28 = extraout_x8;
  func_0x00010743f738();
  func_0x00010743f6f8();
  func_0x00010743f6a0(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010743f6f8();
  func_0x00010743f700();
  FUN_10743e960();
  func_0x00010743f74c();
  func_0x00010743f708();
  if (extraout_w8 != 0) {
    func_0x00010743f770();
                    /* WARNING: Could not recover jumptable at 0x00010743f6dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*param_3 + 8))((long *)*param_3,param_2 + 0x20);
    return;
  }
  func_0x00010743f744();
  lVar7 = param_2;
  FUN_10741a9dc(param_2);
  puVar1 = auStack_d8;
  func_0x00010002b838(puVar1,lVar7);
  FUN_10741abc0();
  FUN_10741b094();
  if ((puVar1 != (undefined1 *)0x0) && (*(int *)(puVar1 + 0x38) == 0)) {
    plVar5 = (long *)(param_2 + 0x20);
    (**(code **)(*plVar5 + 0x20))();
    if ((plVar5[1] - *plVar5) / 0x18 ==
        ((*(long *)(puVar1 + 0x48) - *(long *)(puVar1 + 0x40)) / 0x38) * 2) {
      uStack_f0 = 0;
      uStack_e8 = 0;
      uStack_e0 = 0;
      func_0x0001000fc044(&uStack_f0);
      lVar6 = 0;
      lVar7 = 0;
      for (uVar8 = 0; uVar8 < (ulong)((*(long *)(puVar1 + 0x48) - *(long *)(puVar1 + 0x40)) / 0x38);
          uVar8 = uVar8 + 1) {
        plVar3 = (long *)(*plVar5 + lVar6);
        lVar4 = (long)*(char *)((long)plVar3 + 0x17);
        if (lVar4 < 0) {
          lVar4 = plVar3[1];
          plVar3 = (long *)*plVar3;
        }
        uVar2 = *(long *)(puVar1 + 0x40) + lVar7;
        func_0x000107278530(uVar2,plVar3,lVar4);
        if ((uVar2 & 1) == 0) goto LAB_10743e90c;
        func_0x000100206870(&uStack_f0,*plVar5 + lVar6 + 0x18);
        lVar7 = lVar7 + 0x38;
        lVar6 = lVar6 + 0x30;
      }
      (**(code **)(*param_3 + 0x18))(param_3,puVar1 + 0x70,&uStack_f0);
LAB_10743e90c:
      func_0x0001000e30f4(&uStack_f0);
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
  return;
}



/* Entry: 10743f0c8; end: 10743f12b;  */

void FUN_10743f0c8(undefined8 param_1,long param_2,long *param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  int extraout_w8;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  FUN_10743e960();
  func_0x00010743f74c();
  func_0x00010743f708();
  if (extraout_w8 != 0) {
    func_0x00010743f770();
                    /* WARNING: Could not recover jumptable at 0x00010743f6dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*param_3 + 8))((long *)*param_3,param_2 + 0x20);
    return;
  }
  func_0x00010743f744();
  lVar7 = param_2;
  FUN_10741a9dc(param_2);
  puVar1 = auStack_68;
  func_0x00010002b838(puVar1,lVar7);
  FUN_10741abc0();
  FUN_10741b094();
  if ((puVar1 != (undefined1 *)0x0) && (*(int *)(puVar1 + 0x38) == 0)) {
    plVar5 = (long *)(param_2 + 0x20);
    (**(code **)(*plVar5 + 0x20))();
    if ((plVar5[1] - *plVar5) / 0x18 ==
        ((*(long *)(puVar1 + 0x48) - *(long *)(puVar1 + 0x40)) / 0x38) * 2) {
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      func_0x0001000fc044(&uStack_80);
      lVar6 = 0;
      lVar7 = 0;
      for (uVar8 = 0; uVar8 < (ulong)((*(long *)(puVar1 + 0x48) - *(long *)(puVar1 + 0x40)) / 0x38);
          uVar8 = uVar8 + 1) {
        plVar3 = (long *)(*plVar5 + lVar6);
        lVar4 = (long)*(char *)((long)plVar3 + 0x17);
        if (lVar4 < 0) {
          lVar4 = plVar3[1];
          plVar3 = (long *)*plVar3;
        }
        uVar2 = *(long *)(puVar1 + 0x40) + lVar7;
        func_0x000107278530(uVar2,plVar3,lVar4);
        if ((uVar2 & 1) == 0) goto LAB_10743e90c;
        func_0x000100206870(&uStack_80,*plVar5 + lVar6 + 0x18);
        lVar7 = lVar7 + 0x38;
        lVar6 = lVar6 + 0x30;
      }
      (**(code **)(*param_3 + 0x18))(param_3,puVar1 + 0x70,&uStack_80);
LAB_10743e90c:
      func_0x0001000e30f4(&uStack_80);
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  return;
}



/* Entry: 10743f12c; end: 10743f133;  */

void FUN_10743f12c(void)

{
  return;
}



/* Entry: 10743f134; end: 10743f163;  */

void FUN_10743f134(void)

{
  FUN_10743e1e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10743f164; end: 10743f1ff;  */

long FUN_10743f164(long *param_1,int param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = (ulong)param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar5 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar7 = plVar2[1];
        if (uVar7 != uVar4) break;
        if (*(int *)(plVar2 + 2) == param_2) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
      }
    } while (uVar7 == uVar6);
  }
  return 0;
}



/* Entry: 10743f200; end: 10743f253;  */

long FUN_10743f200(long param_1,long *param_2)

{
  long *plVar1;
  code *extraout_x8;
  
  plVar1 = (long *)param_2[3];
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (plVar1 == param_2) {
    func_0x00010743f784();
    (*extraout_x8)();
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    *(long **)(param_1 + 0x18) = plVar1;
  }
  return param_1;
}



/* Entry: 10743f254; end: 10743f2a3;  */

long FUN_10743f254(long param_1,long param_2)

{
  long lVar1;
  code *extraout_x8;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    func_0x00010743f784();
    (*extraout_x8)();
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 10743f2a4; end: 10743f2c7;  */

undefined8 FUN_10743f2a4(undefined8 param_1)

{
  func_0x00010743f728();
  func_0x00010743e168();
  return param_1;
}



/* Entry: 10743f2c8; end: 10743f2db;  */

void FUN_10743f2c8(void)

{
  FUN_10743f2a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10743f2dc; end: 10743f31f;  */

undefined8 FUN_10743f2dc(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x28;
  __Znwm(0x28);
  FUN_10743f380();
  return uVar1;
}



/* Entry: 10743f320; end: 10743f34b;  */

undefined8 FUN_10743f320(long param_1,undefined8 param_2)

{
  func_0x00010743f728(param_2,param_1 + 8);
  FUN_10743f200();
  return param_2;
}



/* Entry: 10743f34c; end: 10743f373;  */

void FUN_10743f34c(undefined8 param_1)

{
  func_0x00010743f778();
  func_0x00010743f6f0(param_1,&PTR_DAT_1109b0980);
  func_0x00010743f6e0();
  return;
}



/* Entry: 10743f374; end: 10743f37f;  */

undefined ** FUN_10743f374(void)

{
  return &PTR_DAT_1109b0980;
}



/* Entry: 10743f380; end: 10743f3a3;  */

undefined8 FUN_10743f380(undefined8 param_1)

{
  func_0x00010743f728();
  FUN_10743f200();
  return param_1;
}



/* Entry: 10743f3a4; end: 10743f3ab;  */

void FUN_10743f3a4(void)

{
  return;
}



/* Entry: 10743f3ac; end: 10743f3cf;  */

void FUN_10743f3ac(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_1109b09a0;
  return;
}



/* Entry: 10743f3d0; end: 10743f3ef;  */

void FUN_10743f3d0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1109b09a0;
  return;
}



/* Entry: 10743f3f0; end: 10743f40b;  */

long FUN_10743f3f0(long param_1)

{
  __ZNSt3__16chrono12steady_clock3nowEv();
  return param_1 / 1000;
}



/* Entry: 10743f40c; end: 10743f433;  */

void FUN_10743f40c(undefined8 param_1)

{
  func_0x00010743f778();
  func_0x00010743f6f0(param_1,&PTR_DAT_1109b0a00);
  func_0x00010743f6e0();
  return;
}



/* Entry: 10743f434; end: 10743f457;  */

undefined ** FUN_10743f434(void)

{
  return &PTR_DAT_1109b0a00;
}



/* Entry: 10743f458; end: 10743f49b;  */

long * FUN_10743f458(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010743e0e0(lVar1 + 0x18);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10743f49c; end: 10743f4a3;  */

void FUN_10743f49c(void)

{
  return;
}



/* Entry: 10743f4a4; end: 10743f4cb;  */

void FUN_10743f4a4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x00010743f758();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_1109b0a20;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10743f4cc; end: 10743f4ef;  */

void FUN_10743f4cc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109b0a20;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10743f4f0; end: 10743f56f;  */

void FUN_10743f4f0(undefined8 param_1,long *param_2,long param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  int extraout_w8;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  if (*(int *)(param_3 + 0x18) != 0) {
    func_0x00010563ab98();
    func_0x00010743f778();
    func_0x00010743f6f0();
    func_0x00010743f6e0();
    return;
  }
  plVar4 = param_2;
  FUN_10741aa3c();
  func_0x00010743f708();
  if (extraout_w8 != 0) {
    func_0x00010743f770();
                    /* WARNING: Could not recover jumptable at 0x00010743f6dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)*plVar4)
              ((undefined8 *)*plVar4,param_2 + 4,*(long *)(param_3 + 8) * 1000);
    return;
  }
  func_0x00010743f744();
  lVar6 = *(long *)(param_3 + 8);
  plVar1 = param_2;
  FUN_10741a9dc(param_2);
  puVar2 = auStack_68;
  func_0x00010002b838(puVar2,plVar1);
  FUN_10741abc0();
  FUN_10741b094();
  if ((puVar2 != (undefined1 *)0x0) && (*(int *)(puVar2 + 0x38) == 1)) {
    param_2 = param_2 + 4;
    (**(code **)(*param_2 + 0x20))();
    if ((param_2[1] - *param_2) / 0x18 ==
        ((*(long *)(puVar2 + 0x48) - *(long *)(puVar2 + 0x40)) / 0x38) * 2) {
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      func_0x0001000fc044(&uStack_80);
      lVar7 = 0;
      lVar8 = 0;
      for (uVar9 = 0; uVar9 < (ulong)((*(long *)(puVar2 + 0x48) - *(long *)(puVar2 + 0x40)) / 0x38);
          uVar9 = uVar9 + 1) {
        plVar1 = (long *)(*param_2 + lVar7);
        lVar5 = (long)*(char *)((long)plVar1 + 0x17);
        if (lVar5 < 0) {
          lVar5 = plVar1[1];
          plVar1 = (long *)*plVar1;
        }
        uVar3 = *(long *)(puVar2 + 0x40) + lVar8;
        func_0x000107278530(uVar3,plVar1,lVar5);
        if ((uVar3 & 1) == 0) goto LAB_10743e90c;
        func_0x000100206870(&uStack_80,*param_2 + lVar7 + 0x18);
        lVar8 = lVar8 + 0x38;
        lVar7 = lVar7 + 0x30;
      }
      (**(code **)(*plVar4 + 0x18))(plVar4,puVar2 + 0x70,&uStack_80,lVar6 / 1000);
LAB_10743e90c:
      func_0x0001000e30f4(&uStack_80);
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  return;
}



/* Entry: 10743f570; end: 10743f597;  */

void FUN_10743f570(undefined8 param_1)

{
  func_0x00010743f778();
  func_0x00010743f6f0(param_1,&PTR_DAT_1109b0a80);
  func_0x00010743f6e0();
  return;
}



/* Entry: 10743f598; end: 10743f5ab;  */

undefined ** FUN_10743f598(void)

{
  return &PTR_DAT_1109b0a80;
}



/* Entry: 10743f5ac; end: 10743f5d3;  */

void FUN_10743f5ac(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x00010743f758();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_1109b0aa0;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10743f5d4; end: 10743f5f7;  */

void FUN_10743f5d4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109b0aa0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10743f5f8; end: 10743f66b;  */

void FUN_10743f5f8(undefined8 param_1,long param_2,long param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  int extraout_w8;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  if (*(int *)(param_3 + 0x18) != 1) {
    func_0x00010563ab98();
    func_0x00010743f778();
    func_0x00010743f6f0();
    func_0x00010743f6e0();
    return;
  }
  plVar3 = (long *)(param_3 + 8);
  FUN_10743e960();
  func_0x00010743f74c();
  func_0x00010743f708();
  if (extraout_w8 != 0) {
    func_0x00010743f770();
                    /* WARNING: Could not recover jumptable at 0x00010743f6dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*plVar3 + 0x10))((long *)*plVar3,param_2 + 0x20);
    return;
  }
  func_0x00010743f744();
  lVar8 = param_2;
  FUN_10741a9dc(param_2);
  puVar1 = auStack_68;
  func_0x00010002b838(puVar1,lVar8);
  FUN_10741abc0();
  FUN_10741b094();
  if ((puVar1 != (undefined1 *)0x0) && (*(int *)(puVar1 + 0x38) == 2)) {
    plVar6 = (long *)(param_2 + 0x20);
    (**(code **)(*plVar6 + 0x20))();
    if ((plVar6[1] - *plVar6) / 0x18 ==
        ((*(long *)(puVar1 + 0x48) - *(long *)(puVar1 + 0x40)) / 0x38) * 2) {
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      func_0x0001000fc044(&uStack_80);
      lVar7 = 0;
      lVar8 = 0;
      for (uVar9 = 0; uVar9 < (ulong)((*(long *)(puVar1 + 0x48) - *(long *)(puVar1 + 0x40)) / 0x38);
          uVar9 = uVar9 + 1) {
        plVar4 = (long *)(*plVar6 + lVar7);
        lVar5 = (long)*(char *)((long)plVar4 + 0x17);
        if (lVar5 < 0) {
          lVar5 = plVar4[1];
          plVar4 = (long *)*plVar4;
        }
        uVar2 = *(long *)(puVar1 + 0x40) + lVar8;
        func_0x000107278530(uVar2,plVar4,lVar5);
        if ((uVar2 & 1) == 0) goto LAB_10743e90c;
        func_0x000100206870(&uStack_80,*plVar6 + lVar7 + 0x18);
        lVar8 = lVar8 + 0x38;
        lVar7 = lVar7 + 0x30;
      }
      (**(code **)(*plVar3 + 0x18))(plVar3,puVar1 + 0x70,&uStack_80);
LAB_10743e90c:
      func_0x0001000e30f4(&uStack_80);
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  return;
}



/* Entry: 10743f66c; end: 10743f693;  */

void FUN_10743f66c(undefined8 param_1)

{
  func_0x00010743f778();
  func_0x00010743f6f0(param_1,&PTR_DAT_1109b0b00);
  func_0x00010743f6e0();
  return;
}



/* Entry: 10743f694; end: 10743f7b3;  */

undefined ** FUN_10743f694(void)

{
  return &PTR_DAT_1109b0b00;
}



/* Entry: 10743f7b4; end: 10743f7df;  */

undefined8 * FUN_10743f7b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b0b20;
  FUN_10743f808(param_1 + 2);
  return param_1;
}



/* Entry: 10743f7e0; end: 10743f7e3;  */

undefined8 * FUN_10743f7e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b0b20;
  FUN_10743f808(param_1 + 2);
  return param_1;
}



/* Entry: 10743f7e4; end: 10743f7f7;  */

void FUN_10743f7e4(void)

{
  FUN_10743f7b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10743f7f8; end: 10743f807;  */

void FUN_10743f7f8(void)

{
  return;
}



/* Entry: 10743f808; end: 10743f82b;  */

undefined8 FUN_10743f808(undefined8 param_1)

{
  FUN_10743f82c(param_1,0);
  return param_1;
}



/* Entry: 10743f82c; end: 10743f84b;  */

void FUN_10743f82c(long *param_1,long param_2)

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



/* Entry: 10743f84c; end: 10743f8e7;  */

undefined8 * FUN_10743f84c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  param_1[1] = 0x32aaaba7;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  FUN_10743f8e8(&uStack_30,param_2,param_3);
  param_1[10] = uStack_28;
  param_1[9] = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010743fe50();
  param_1[0xb] = 0x32aaaba7;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x18) = 0;
  return param_1;
}



/* Entry: 10743f8e8; end: 10743f90f;  */

void FUN_10743f8e8(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_10743fc3c(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 10743f910; end: 10743f94b;  */

long FUN_10743f910(long param_1)

{
  FUN_10743f94c(param_1 + 0x48);
  FUN_10743fb4c(param_1 + 0x58);
  FUN_10743fc14(param_1 + 0x48);
  __ZNSt3__15mutexD1Ev(param_1 + 8);
  return param_1;
}



/* Entry: 10743f94c; end: 10743f973;  */

void FUN_10743f94c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  func_0x00010743fe50();
  return;
}



/* Entry: 10743f974; end: 10743f9db;  */

void FUN_10743f974(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = param_1 + 1;
  __ZNSt3__15mutex4lockEv(plVar3);
  plVar4 = (long *)param_1[9];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__16chrono12steady_clock3nowEv();
    (**(code **)(*plVar4 + 0x10))(plVar4,plVar3);
  }
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = *param_1 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 1);
  return;
}



/* Entry: 10743f9dc; end: 10743fa43;  */

void FUN_10743f9dc(long *param_1)

{
  long extraout_x8;
  int extraout_w10;
  long *aplStack_30 [2];
  
  func_0x00010743fe30();
  aplStack_30[0] = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x00010743fe20();
    } while (extraout_w10 != 0);
  }
  if (param_1 != (long *)0x0) {
    func_0x00010743fe70(*(undefined8 *)(*param_1 + 0x18));
  }
  FUN_10743fc14(aplStack_30);
  return;
}



/* Entry: 10743fa44; end: 10743fa9b;  */

void FUN_10743fa44(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  
  func_0x00010743fe30();
  if (extraout_x8 != 0) {
    do {
      func_0x00010743fe20();
    } while (extraout_w10 != 0);
  }
  if (param_1 != 0) {
    func_0x00010743fe78();
    func_0x00010743fe70(*(undefined8 *)(extraout_x8_00 + 0x20));
  }
  func_0x00010743fe58();
  return;
}



/* Entry: 10743fa9c; end: 10743faf3;  */

void FUN_10743fa9c(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  
  func_0x00010743fe30();
  if (extraout_x8 != 0) {
    do {
      func_0x00010743fe20();
    } while (extraout_w10 != 0);
  }
  if (param_1 != 0) {
    func_0x00010743fe78();
    func_0x00010743fe70(*(undefined8 *)(extraout_x8_00 + 0x28));
  }
  func_0x00010743fe58();
  return;
}



/* Entry: 10743faf4; end: 10743fb4b;  */

void FUN_10743faf4(long *param_1)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010743fe30();
  if (extraout_x8 != 0) {
    do {
      func_0x00010743fe20();
    } while (extraout_w10 != 0);
  }
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x30))();
  }
  func_0x00010743fe50();
  return;
}



/* Entry: 10743fb4c; end: 10743fbfb;  */

void FUN_10743fb4c(long param_1)

{
  func_0x00010743fb74(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 10743fbfc; end: 10743fc13;  */

void FUN_10743fbfc(long *param_1)

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



/* Entry: 10743fc14; end: 10743fc3b;  */

long FUN_10743fc14(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10743fc3c; end: 10743fce3;  */

undefined1 * FUN_10743fc3c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [16];
  long lStack_40;
  long lStack_38;
  
  puVar2 = auStack_50;
  puVar3 = auStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10743fce4(auStack_50,1);
  FUN_10743fd38(lStack_40,param_3,param_4);
  lVar1 = lStack_40;
  lStack_40 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x00010743fe10();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010743fe10();
  func_0x00010743fe40();
  *(undefined8 *)(puVar3 + 8) = param_3;
  puVar2 = puVar3;
  FUN_10743fd0c();
  *(undefined1 **)(puVar3 + 0x10) = puVar2;
  return puVar3;
}



/* Entry: 10743fce4; end: 10743fd0b;  */

long FUN_10743fce4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10743fd0c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10743fd0c; end: 10743fd37;  */

undefined8 * FUN_10743fd0c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x666666666666667) {
    puVar1 = (undefined8 *)(param_2 * 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109b0b78;
  FUN_10743fda0(param_1 + 3);
  return param_1;
}



/* Entry: 10743fd38; end: 10743fd77;  */

undefined8 * FUN_10743fd38(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109b0b78;
  FUN_10743fda0(param_1 + 3);
  return param_1;
}



/* Entry: 10743fd78; end: 10743fd7b;  */

void FUN_10743fd78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b0b78;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10743fd7c; end: 10743fd8f;  */

void FUN_10743fd7c(void)

{
  FUN_10743fe00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10743fd90; end: 10743fd9f;  */

void FUN_10743fd90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010743fd98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10743fda0; end: 10743fdff;  */

undefined8 FUN_10743fda0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = param_3[1];
  uStack_40 = *param_3;
  uStack_30 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  FUN_10743dc8c(param_1,param_2,&uStack_40);
  func_0x00010743e2a8(&uStack_40);
  return param_1;
}



/* Entry: 10743fe00; end: 10743fe8b;  */

void FUN_10743fe00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b0b78;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10743fe8c; end: 10743fee3;  */

long FUN_10743fe8c(long param_1)

{
  func_0x00010743febc(param_1 + 0x28);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 8);
  return param_1;
}



/* Entry: 10743fee4; end: 10743fefb;  */

void FUN_10743fee4(long *param_1,long param_2)

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



/* Entry: 10743fefc; end: 10743ff6b;  */

long * FUN_10743fefc(long *param_1,long param_2,undefined1 param_3)

{
  long *plVar1;
  
  plVar1 = param_1;
  FUN_10743ff6c();
  FUN_1074400ec();
  func_0x0001078a95a0();
  *param_1 = (long)plVar1;
  param_1[1] = 0;
  param_1[2] = param_2;
  *(undefined1 *)(param_1 + 3) = param_3;
  *(undefined1 *)((long)param_1 + 0x19) = 0;
  if (plVar1 != (long *)0x0) {
    plVar1[1] = (long)param_1;
    FUN_10743ffd8();
  }
  func_0x000107440024(param_1);
  FUN_10743ff6c();
  FUN_1074400ec();
  func_0x0001078a95a8();
  return param_1;
}



/* Entry: 10743ff6c; end: 10743ffd7;  */

void FUN_10743ff6c(void)

{
  int iVar1;
  
  if ((bRam0000000113822c20 & 1) == 0) {
    iVar1 = 0x13822c20;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1074400ec();
      func_0x0001078a9570();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113822c20);
      return;
    }
  }
  return;
}



/* Entry: 10743ffd8; end: 10744008b;  */

void FUN_10743ffd8(long param_1)

{
  if (*(char *)(param_1 + 0x19) == '\x01') {
    if ((*(long *)(param_1 + 8) == 0) ||
       (*(long **)(param_1 + 0x10) != *(long **)(*(long *)(param_1 + 8) + 0x10))) {
      (**(code **)(**(long **)(param_1 + 0x10) + 0x60))();
      *(undefined1 *)(param_1 + 0x19) = 0;
    }
  }
  return;
}



/* Entry: 10744008c; end: 1074400eb;  */

long * FUN_10744008c(long *param_1)

{
  FUN_10743ffd8();
  if (*param_1 == 0) {
    FUN_10743ff6c();
    FUN_1074400ec();
    func_0x0001078a95a8();
  }
  else {
    func_0x000107440024();
    FUN_10743ff6c();
    FUN_1074400ec();
    func_0x0001078a95a8();
    *(undefined8 *)(*param_1 + 8) = 0;
  }
  return param_1;
}



/* Entry: 1074400ec; end: 1074400f7;  */

undefined8 FUN_1074400ec(void)

{
  return 0x113822c18;
}



/* Entry: 1074400f8; end: 1074401bb;  */

void FUN_1074400f8(undefined8 *param_1,undefined1 (*param_2) [16])

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  auVar3 = NEON_ext(*param_2,*param_2,8,1);
  param_1[1] = auVar3._8_8_;
  *param_1 = auVar3._0_8_;
  func_0x000107440158(param_1 + 2,param_2[1] + 8);
  uVar1 = *(undefined8 *)(param_2[3] + 8);
  uVar2 = *(undefined8 *)param_2[4];
  param_1[6] = *(undefined8 *)param_2[1];
  param_1[7] = uVar1;
  func_0x000104c2fe00(param_1 + 8,uVar2);
  func_0x000104c2fe00(param_1 + 0xf,*(undefined8 *)(param_2[4] + 8));
  param_1[0x16] = *(undefined8 *)(param_2[5] + 8);
  return;
}



/* Entry: 1074401bc; end: 107440713;  */

char * FUN_1074401bc(char *param_1,undefined8 param_2,char param_3,char param_4,undefined8 param_5,
                    undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined4 param_9,
                    undefined4 param_10,undefined8 param_11)

{
  uint uVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [16];
  undefined8 *puStack_78;
  
  puVar3 = auStack_d0;
  puVar4 = auStack_d0;
  puVar5 = auStack_d0;
  *param_1 = param_3;
  param_1[1] = param_4;
  *(undefined8 *)(param_1 + 8) = param_5;
  *(undefined8 *)(param_1 + 0x10) = param_6;
  *(undefined8 *)(param_1 + 0x18) = param_7;
  *(undefined8 *)(param_1 + 0x20) = param_8;
  *(undefined4 *)(param_1 + 0x28) = param_9;
  FUN_107440ae8(param_1 + 0x30,param_11);
  dVar11 = 0.0;
  param_1[0xa0] = '\0';
  param_1[0xa1] = '\0';
  param_1[0xa2] = '\0';
  param_1[0xa3] = '\0';
  param_1[0xa4] = '\0';
  param_1[0xa5] = '\0';
  param_1[0xa6] = '\0';
  param_1[0xa7] = '\0';
  param_1[0x98] = '\0';
  param_1[0x99] = '\0';
  param_1[0x9a] = '\0';
  param_1[0x9b] = '\0';
  param_1[0x9c] = '\0';
  param_1[0x9d] = '\0';
  param_1[0x9e] = '\0';
  param_1[0x9f] = '\0';
  param_1[0x78] = '\0';
  param_1[0x79] = '\0';
  param_1[0x7a] = '\0';
  param_1[0x7b] = '\0';
  param_1[0x7c] = '\0';
  param_1[0x7d] = '\0';
  param_1[0x7e] = '\0';
  param_1[0x7f] = '\0';
  param_1[0x80] = '\0';
  param_1[0x81] = '\0';
  param_1[0x82] = '\0';
  param_1[0x83] = '\0';
  param_1[0x84] = '\0';
  param_1[0x85] = '\0';
  param_1[0x86] = '\0';
  param_1[0x87] = '\0';
  param_1[0x88] = '\0';
  param_1[0x89] = '\0';
  param_1[0x8a] = '\0';
  param_1[0x8b] = '\0';
  param_1[0x8c] = '\0';
  param_1[0x8d] = '\0';
  param_1[0x8e] = '\0';
  param_1[0x8f] = '\0';
  *(undefined ***)(param_1 + 0x90) = &PTR_FUN_1109ad9e0;
  param_1[0x110] = '\0';
  param_1[0x118] = '\0';
  param_1[0x130] = '\0';
  param_1[0x138] = '\0';
  param_1[0x150] = '\0';
  param_1[0xb0] = '\0';
  param_1[0xb1] = '\0';
  param_1[0xb2] = '\0';
  param_1[0xb3] = '\0';
  param_1[0xb4] = '\0';
  param_1[0xb5] = '\0';
  param_1[0xb6] = '\0';
  param_1[0xb7] = '\0';
  param_1[0xa8] = '\0';
  param_1[0xa9] = '\0';
  param_1[0xaa] = '\0';
  param_1[0xab] = '\0';
  param_1[0xac] = '\0';
  param_1[0xad] = '\0';
  param_1[0xae] = '\0';
  param_1[0xaf] = '\0';
  param_1[0xc0] = '\0';
  param_1[0xc1] = '\0';
  param_1[0xc2] = '\0';
  param_1[0xc3] = '\0';
  param_1[0xc4] = '\0';
  param_1[0xc5] = '\0';
  param_1[0xc6] = '\0';
  param_1[199] = '\0';
  param_1[0xb8] = '\0';
  param_1[0xb9] = '\0';
  param_1[0xba] = '\0';
  param_1[0xbb] = '\0';
  param_1[0xbc] = '\0';
  param_1[0xbd] = '\0';
  param_1[0xbe] = '\0';
  param_1[0xbf] = '\0';
  param_1[0xd0] = '\0';
  param_1[0xd1] = '\0';
  param_1[0xd2] = '\0';
  param_1[0xd3] = '\0';
  param_1[0xd4] = '\0';
  param_1[0xd5] = '\0';
  param_1[0xd6] = '\0';
  param_1[0xd7] = '\0';
  param_1[200] = '\0';
  param_1[0xc9] = '\0';
  param_1[0xca] = '\0';
  param_1[0xcb] = '\0';
  param_1[0xcc] = '\0';
  param_1[0xcd] = '\0';
  param_1[0xce] = '\0';
  param_1[0xcf] = '\0';
  param_1[0xd9] = '\0';
  param_1[0xda] = '\0';
  param_1[0xdb] = '\0';
  param_1[0xdc] = '\0';
  param_1[0xdd] = '\0';
  param_1[0xde] = '\0';
  param_1[0xdf] = '\0';
  param_1[0xe0] = '\0';
  param_1[0xd1] = '\0';
  param_1[0xd2] = '\0';
  param_1[0xd3] = '\0';
  param_1[0xd4] = '\0';
  param_1[0xd5] = '\0';
  param_1[0xd6] = '\0';
  param_1[0xd7] = '\0';
  param_1[0xd8] = '\0';
  uVar1 = *(uint *)(param_1 + 0x28);
  if ((uVar1 >> 2 & 1) == 0) {
    dVar12 = 200.0;
  }
  else {
    func_0x00010784b468(auStack_b8,param_2);
    func_0x00010048a6c8(auStack_a0,auStack_b8,&DAT_10f415643);
    if ((param_1[1] & 1U) == 0) {
      pcVar6 = "renderable";
      if (*param_1 == '\0') {
        pcVar6 = "pending";
      }
    }
    else {
      pcVar6 = "complete";
    }
    func_0x00010048a6c8(auStack_88,auStack_a0,pcVar6);
    func_0x000107440eb0();
    func_0x000107440ec4();
    func_0x000107440ee4();
    FUN_107440714(param_1,auStack_88);
    if (*(int *)(param_1 + 0x40) == 1) {
      dVar12 = 400.0;
    }
    else {
      if (*(int *)(param_1 + 0x40) == 0) {
        func_0x000107440ed4();
        dVar11 = 400.0;
        func_0x000107440e80(0x4079000000000000);
        FUN_107440714();
        puVar3 = auStack_a0;
      }
      else {
        plVar2 = (long *)(param_1 + 0x30);
        FUN_107440e54();
        func_0x000107440edc(*(undefined8 *)(*plVar2 + 0x18));
        func_0x000107440eb8(&UNK_10f415672);
        func_0x000107440e90();
        dVar11 = 400.0;
        func_0x000107440e80(0x4079000000000000);
        FUN_107440714();
        func_0x000107440eb0();
        func_0x000107440ec4();
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar3);
      dVar12 = 600.0;
    }
    if (*(int *)(param_1 + 0x58) != 1) {
      if (*(int *)(param_1 + 0x58) == 0) {
        func_0x000107440ed4();
        func_0x000107440e70();
        puVar4 = auStack_a0;
      }
      else {
        plVar2 = (long *)(param_1 + 0x48);
        FUN_107440e54();
        func_0x000107440edc(*(undefined8 *)(*plVar2 + 0x18));
        func_0x000107440eb8(&UNK_10f4156b0);
        func_0x000107440e90();
        func_0x000107440e70();
        func_0x000107440eb0();
        func_0x000107440ec4();
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar4);
      func_0x000107440ee4();
      dVar12 = dVar12 + dVar11;
    }
    if (*(int *)(param_1 + 0x70) != 1) {
      if (*(int *)(param_1 + 0x70) == 0) {
        func_0x000107440ed4();
        func_0x000107440e70();
        puVar5 = auStack_a0;
      }
      else {
        plVar2 = (long *)(param_1 + 0x60);
        FUN_107440e54();
        func_0x000107440edc(*(undefined8 *)(*plVar2 + 0x18));
        func_0x000107440eb8(&UNK_10f4156e6);
        func_0x000107440e90();
        func_0x000107440e70();
        func_0x000107440eb0();
        func_0x000107440ec4();
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar5);
      func_0x000107440ee4();
      dVar12 = dVar12 + dVar11;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
    uVar1 = *(uint *)(param_1 + 0x28);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    if ((param_1[0x10] == '\x01') && (param_1[0x20] == '\x01')) {
      func_0x00010785d404(auStack_a0,*(undefined8 *)(param_1 + 8));
      func_0x0001004c3cd0(auStack_88,&UNK_10f4156f8,auStack_a0);
      func_0x000107440eb0();
      func_0x000107440e70();
      func_0x00010785d404(auStack_b8,*(undefined8 *)(param_1 + 0x18));
      func_0x0001004c3cd0(auStack_a0,&UNK_10f415703,auStack_b8);
      func_0x000107440ec4();
      func_0x000107440ee4();
      func_0x000107440e80(dVar12 + dVar11);
      FUN_107440714();
      func_0x000107440eb0();
    }
    else {
      func_0x00010002b838(auStack_88,&UNK_10f41570d);
      FUN_107440714(dVar12,0x4024000000000000,param_1,auStack_88);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
  }
  lVar9 = *(long *)(param_1 + 0x80) - *(long *)(param_1 + 0x78) >> 2;
  lVar10 = *(long *)(param_1 + 0xa0) - *(long *)(param_1 + 0x98) >> 1;
  puVar7 = *(undefined8 **)(param_1 + 0xb8);
  if (puVar7 < *(undefined8 **)(param_1 + 0xc0)) {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = lVar9;
    puVar7[3] = lVar10;
    puVar8 = puVar7 + 5;
    *(undefined4 *)(puVar7 + 4) = 0;
  }
  else {
    pcVar6 = param_1 + 0xb0;
    FUN_1074084f8(pcVar6,((long)puVar7 - *(long *)(param_1 + 0xb0)) / 0x28 + 1);
    FUN_10740857c(auStack_88,pcVar6,(*(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xb0)) / 0x28,
                  param_1 + 0xc0);
    *puStack_78 = 0;
    puStack_78[1] = 0;
    puStack_78[2] = lVar9;
    puStack_78[3] = lVar10;
    *(undefined4 *)(puStack_78 + 4) = 0;
    puStack_78 = puStack_78 + 5;
    FUN_107408540(param_1 + 0xb0,auStack_88);
    puVar8 = *(undefined8 **)(param_1 + 0xb8);
    FUN_1074085fc(auStack_88);
  }
  *(undefined8 **)(param_1 + 0xb8) = puVar8;
  return param_1;
}



/* Entry: 107440714; end: 10744087b;  */

void FUN_107440714(double param_1,double param_2,long param_3,byte *param_4)

{
  long lVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  byte *pbVar7;
  ulong uVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  short sStack_88;
  short sStack_86;
  uint uStack_84;
  
  uVar8 = *(ulong *)(param_4 + 8);
  pbVar7 = *(byte **)param_4;
  if (-1 < (char)param_4[0x17]) {
    uVar8 = (ulong)param_4[0x17];
    pbVar7 = param_4;
  }
  pbVar2 = pbVar7 + uVar8;
  dVar11 = 50.0;
  for (; pbVar7 != pbVar2; pbVar7 = pbVar7 + 1) {
    if (0xffffffa0 < *pbVar7 - 0x7f) {
      lVar1 = (ulong)(*pbVar7 - 0x20) * 0x10;
      bVar3 = (&UNK_1109b0bb9)[lVar1];
      bVar9 = false;
      for (uVar8 = 0; uVar8 < bVar3; uVar8 = uVar8 + 2) {
        bVar4 = *(byte *)(*(long *)(&UNK_1109b0bc0 + lVar1) + uVar8);
        bVar5 = ((byte *)(*(long *)(&UNK_1109b0bc0 + lVar1) + uVar8))[1];
        bVar6 = (bVar5 & bVar4) != 0xff;
        if (bVar6) {
          uStack_84 = (int)(dVar11 + param_2 * (double)(int)(char)bVar4) & 0xffffU |
                      (int)(param_1 - param_2 * (double)(int)(char)bVar5) << 0x10;
          FUN_107440b48(param_3 + 0x78,&uStack_84);
          if (bVar9) {
            sStack_86 = (short)((uint)(*(int *)(param_3 + 0x80) - *(int *)(param_3 + 0x78)) >> 2);
            sStack_88 = sStack_86 + -2;
            sStack_86 = sStack_86 + -1;
            func_0x0001074086a4(param_3 + 0x90,&sStack_88,2);
          }
        }
        bVar9 = bVar6;
      }
      dVar10 = (double)NEON_ucvtf((ulong)(byte)(&UNK_1109b0bb8)[lVar1]);
      dVar11 = dVar11 + param_2 * dVar10;
    }
  }
  return;
}



/* Entry: 10744087c; end: 1074409eb;  */

void FUN_10744087c(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uStack_5c;
  undefined1 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [16];
  long lStack_40;
  long lStack_28;
  
  if (*(long *)(param_1 + 0x78) != *(long *)(param_1 + 0x80)) {
    FUN_1074409ec(auStack_50,param_2,(long *)(param_1 + 0x78),1);
    func_0x000107309708(param_1 + 0xe0,auStack_50);
    lVar1 = lStack_28;
    lStack_28 = 0;
    if (lVar1 != 0) {
      func_0x000107440ea4();
    }
    FUN_1073da574(auStack_50,param_2,param_1 + 0x90,1);
    func_0x000107309778(param_1 + 0x118,auStack_50);
    lVar1 = lStack_40;
    lStack_40 = 0;
    if (lVar1 != 0) {
      func_0x000107440ea4();
    }
  }
  if ((*(byte *)(param_1 + 0x150) & 1) == 0) {
    uStack_54 = 0;
    if ((bRam00000001136cb8e8 & 1) == 0) {
      iVar2 = 0x136cb8e8;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        FUN_10743a370(0x1136cb8f0,0x100000001,&uStack_54,4);
        ___cxa_guard_release(0x1136cb8e8);
      }
    }
    uStack_58 = 0;
    uStack_5c = 0;
    FUN_107432024(auStack_50,param_2,0x1136cb8f0,&uStack_5c,0);
    FUN_107440a90(param_1 + 0x138,auStack_50);
    lVar1 = lStack_40;
    lStack_40 = 0;
    if (lVar1 != 0) {
      func_0x000107440ea4();
    }
  }
  return;
}



/* Entry: 1074409ec; end: 107440a8f;  */

void FUN_1074409ec(long *param_1,long *param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  long lStack_48;
  
  FUN_1073da3e8(param_2,0xac,1);
  FUN_1073da3e8(param_2,0xad,param_3[1] - *param_3);
  lVar1 = param_3[1] - *param_3;
  (**(code **)(*param_2 + 0x40))(&lStack_48,param_2,*param_3,lVar1,param_4);
  *param_1 = lVar1 >> 2;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 4;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[5] = lStack_48;
  return;
}



/* Entry: 107440a90; end: 107440ae7;  */

undefined8 * FUN_107440a90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 3) == '\x01') {
    FUN_1073c8358(param_1);
  }
  else {
    uVar1 = *param_2;
    *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)((long)param_2 + 5);
    *param_1 = uVar1;
    uVar1 = param_2[2];
    param_2[2] = 0;
    param_1[2] = uVar1;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return param_1;
}



/* Entry: 107440ae8; end: 107440b47;  */

long FUN_107440ae8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1073ebbdc();
  FUN_1073ebbdc(lVar1 + 0x18,param_2 + 0x18);
  FUN_1073ebbdc(param_1 + 0x30,param_2 + 0x30);
  return param_1;
}



/* Entry: 107440b48; end: 107440b8b;  */

undefined4 * FUN_107440b48(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 2);
  if (puVar1 < *(undefined4 **)(param_1 + 4)) {
    puVar2 = puVar1 + 1;
    *puVar1 = *param_2;
  }
  else {
    puVar2 = param_1;
    FUN_107440b8c();
  }
  *(undefined4 **)(param_1 + 2) = puVar2;
  return puVar2 + -1;
}



/* Entry: 107440b8c; end: 107440c2b;  */

long FUN_107440b8c(long *param_1,undefined4 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [16];
  undefined4 *puStack_38;
  
  plVar1 = param_1;
  FUN_107440c2c(param_1,(param_1[1] - *param_1 >> 2) + 1);
  FUN_107440d00(auStack_48,plVar1,param_1[1] - *param_1 >> 2,param_1 + 2);
  *puStack_38 = *param_2;
  puStack_38 = puStack_38 + 1;
  FUN_107440c6c(param_1,auStack_48);
  lVar2 = param_1[1];
  FUN_107440d88(auStack_48);
  return lVar2;
}



/* Entry: 107440c2c; end: 107440c6b;  */

undefined8 * FUN_107440c2c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if ((ulong)param_2 >> 0x3e == 0) {
    puVar2 = (undefined8 *)(param_1[2] - *param_1 >> 1);
    if (puVar2 <= param_2) {
      puVar2 = param_2;
    }
    if (0x7ffffffffffffffb < (ulong)(param_1[2] - *param_1)) {
      puVar2 = (undefined8 *)0x3fffffffffffffff;
    }
    return puVar2;
  }
  FUN_107440cec();
  puVar3 = (undefined8 *)(param_2[1] - (param_1[1] - *param_1));
  puVar2 = puVar3;
  _memcpy(puVar3);
  param_2[1] = puVar3;
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
  return puVar2;
}



/* Entry: 107440c6c; end: 107440ceb;  */

void FUN_107440c6c(long *param_1,undefined8 *param_2)

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



/* Entry: 107440cec; end: 107440cff;  */

long * FUN_107440cec(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)&UNK_10f41571b;
  func_0x000104bd47e8();
  plVar2[3] = 0;
  plVar2[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107440d48();
  }
  lVar1 = param_4 + param_3 * 4;
  *plVar2 = param_4;
  plVar2[1] = lVar1;
  plVar2[2] = lVar1;
  plVar2[3] = param_4 + param_2 * 4;
  return plVar2;
}



/* Entry: 107440d00; end: 107440d6b;  */

long * FUN_107440d00(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107440d48();
  }
  lVar1 = param_4 + param_3 * 4;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 4;
  return param_1;
}



/* Entry: 107440d6c; end: 107440d87;  */

long * FUN_107440d6c(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3e == 0) {
    plVar1 = (long *)(param_2 << 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_107440db4();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107440d88; end: 107440db3;  */

long * FUN_107440d88(long *param_1)

{
  FUN_107440db4();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107440db4; end: 107440dd7;  */

void FUN_107440db4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -4;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 107440dd8; end: 107440e3b;  */

long FUN_107440dd8(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010730b0e8(param_1 + 0x10);
  }
  return param_1;
}


