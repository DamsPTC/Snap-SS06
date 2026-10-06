/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a23a48c; end: 10a23a643;  */

long FUN_10a23a48c(long param_1)

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



/* Entry: 10a23a644; end: 10a23a653;  */

void FUN_10a23a644(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb4d98;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a23a654; end: 10a23a673;  */

void FUN_10a23a654(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb4d98;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a23a674; end: 10a23a68b;  */

void FUN_10a23a674(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a23a67c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x58))();
  return;
}



/* Entry: 10a23a68c; end: 10a23a70b;  */

undefined8 * FUN_10a23a68c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb4de8;
  func_0x00010a234870(param_1 + 3);
  func_0x00010a234818(param_1 + 1);
  return param_1;
}



/* Entry: 10a23a70c; end: 10a23a713;  */

undefined8 FUN_10a23a70c(void)

{
  return 0x100;
}



/* Entry: 10a23a714; end: 10a23a9fb;  */

undefined8 * FUN_10a23a714(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long alStack_d8 [2];
  char cStack_c1;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 **ppuStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_80;
  long *plStack_78;
  undefined8 **ppuStack_70;
  long lStack_68;
  
  plVar8 = param_1 + 1;
  lVar6 = *plVar8;
  if (lVar6 == 0) {
    return param_1;
  }
  lVar9 = *(long *)(*(long *)(param_4 + 0x218) + 4);
  lVar10 = *(long *)(*(long *)(param_4 + 0x218) + 0xc);
  if ((lVar9 != *(long *)(lVar6 + 4)) || (lVar10 != *(long *)(lVar6 + 0xc))) {
    iVar7 = (int)((ulong)lVar9 >> 0x20);
    iVar1 = iVar7;
    if (*(int *)(lVar6 + 0x90) == 0) {
      iVar1 = iVar7 / 2;
    }
    iVar4 = (int)lVar9 / 2;
    if (*(int *)(lVar6 + 0x90) != 1) {
      iVar7 = iVar1;
      iVar4 = (int)lVar9;
    }
    plVar11 = *(long **)(lVar6 + 0x28);
    if (plVar11 != (long *)0x0) {
      do {
        FUN_10a2288e0(plVar11[3],CONCAT44(iVar7,iVar4));
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
      lVar6 = *plVar8;
    }
    if (*(long *)(lVar6 + 0x40) != 0) {
      lVar12 = *(long *)(lVar6 + 0x40) << 4;
      puVar13 = (undefined8 *)(lVar6 + 0x48);
      do {
        FUN_10a2288e0(*puVar13,CONCAT44(iVar7,iVar4));
        lVar12 = lVar12 + -0x10;
        puVar13 = puVar13 + 2;
      } while (lVar12 != 0);
      lVar6 = *plVar8;
    }
    *(long *)(lVar6 + 4) = lVar9;
    *(long *)(*plVar8 + 0xc) = lVar10;
  }
  FUN_10a23a9fc(param_4 + 0x218,plVar8);
  lVar9 = *plVar8;
  lVar6 = lVar9 + 0x18;
  FUN_10a23aa78(lVar6,lVar9 + 0xa0);
  if (lVar6 == 0) {
    FUN_109ffdddc(&UNK_10f639994);
  }
  else {
    puVar13 = *(undefined8 **)(lVar6 + 0x18);
    plVar8 = *(long **)(lVar6 + 0x20);
    if (plVar8 != (long *)0x0) {
      plVar11 = plVar8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = *plVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puStack_80 = puVar13;
    plStack_78 = plVar8;
    __ZNSt3__19to_stringEi(alStack_d8,*(undefined4 *)(lVar9 + 0xa0));
    plVar11 = alStack_d8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (plVar11,0,&UNK_10f646755,0x19);
    lStack_b8 = plVar11[1];
    lStack_c0 = *plVar11;
    lStack_b0 = plVar11[2];
    plVar11[1] = 0;
    plVar11[2] = 0;
    *plVar11 = 0;
    plVar11 = &lStack_c0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (plVar11,&UNK_10f64676f,10);
    lStack_98 = plVar11[1];
    ppuStack_a0 = (undefined8 **)*plVar11;
    uStack_90 = plVar11[2];
    plVar11[1] = 0;
    plVar11[2] = 0;
    *plVar11 = 0;
    lStack_68 = (long)uStack_90._7_1_;
    if (lStack_68 < 0) {
      ppuStack_70 = ppuStack_a0;
      lStack_68 = lStack_98;
      if (puVar13 != (undefined8 *)0x0) {
        __ZdlPv();
        goto LAB_10a23a8e0;
      }
    }
    else {
      ppuStack_70 = &ppuStack_a0;
      if (puVar13 != (undefined8 *)0x0) {
LAB_10a23a8e0:
        if (lStack_b0 < 0) {
          __ZdlPv(lStack_c0);
        }
        if (cStack_c1 < '\0') {
          __ZdlPv(alStack_d8[0]);
        }
        if (plVar8 != (long *)0x0) {
          plVar11 = plVar8 + 1;
          do {
            lVar6 = *plVar11;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar3) {
              *plVar11 = lVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar6 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        uVar15 = puVar13[1];
        uVar14 = *puVar13;
        uVar16 = puVar13[2];
        uVar18 = puVar13[5];
        uVar17 = puVar13[4];
        *(undefined8 *)(param_4 + 0x1b0) = puVar13[3];
        *(undefined8 *)(param_4 + 0x1a8) = uVar16;
        *(undefined8 *)(param_4 + 0x1c0) = uVar18;
        *(undefined8 *)(param_4 + 0x1b8) = uVar17;
        *(undefined8 *)(param_4 + 0x1a0) = uVar15;
        *(undefined8 *)(param_4 + 0x198) = uVar14;
        uVar15 = puVar13[7];
        uVar14 = puVar13[6];
        uVar17 = puVar13[9];
        uVar16 = puVar13[8];
        uVar19 = puVar13[0xb];
        uVar18 = puVar13[10];
        uVar20 = *(undefined8 *)((long)puVar13 + 0x5c);
        *(undefined8 *)(param_4 + 0x1fc) = *(undefined8 *)((long)puVar13 + 100);
        *(undefined8 *)(param_4 + 500) = uVar20;
        *(undefined8 *)(param_4 + 0x1e0) = uVar17;
        *(undefined8 *)(param_4 + 0x1d8) = uVar16;
        *(undefined8 *)(param_4 + 0x1f0) = uVar19;
        *(undefined8 *)(param_4 + 0x1e8) = uVar18;
        *(undefined8 *)(param_4 + 0x1d0) = uVar15;
        *(undefined8 *)(param_4 + 0x1c8) = uVar14;
        uVar15 = puVar13[0xf];
        uVar14 = puVar13[0xe];
        if (puVar13[0xf] != 0) {
          plVar8 = (long *)(puVar13[0xf] + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = *plVar8 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plVar8 = *(long **)(param_4 + 0x210);
        *(undefined8 *)(param_4 + 0x210) = uVar15;
        *(undefined8 *)(param_4 + 0x208) = uVar14;
        if (plVar8 != (long *)0x0) {
          plVar11 = plVar8 + 1;
          do {
            lVar6 = *plVar11;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar3) {
              *plVar11 = lVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar6 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        return (undefined8 *)(param_4 + 0x208);
      }
    }
  }
  FUN_10a0edfc4(&ppuStack_70);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a23a9a0);
  (*pcVar5)();
}



/* Entry: 10a23a9fc; end: 10a23aa77;  */

undefined8 * FUN_10a23a9fc(undefined8 *param_1,undefined8 *param_2)

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
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
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



/* Entry: 10a23aa78; end: 10a23ab17;  */

long * FUN_10a23aa78(long *param_1,int *param_2)

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
    uVar3 = (ulong)*param_2;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar4 & uVar3;
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
          if (*(int *)(plVar6 + 2) == *param_2) {
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



/* Entry: 10a23ab18; end: 10a23ab8b;  */

void FUN_10a23ab18(undefined8 param_1,long param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_30;
  long lStack_28;
  
  if (param_2 != 0) {
    plVar1 = (long *)(param_2 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_30 = param_1;
  lStack_28 = param_2;
  FUN_10a52f264(*param_3 + 0x690,&uStack_30,&uStack_30);
  if (lStack_28 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10a23ab8c; end: 10a23abbb;  */

void FUN_10a23ab8c(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x28);
  FUN_10a23abbc();
                    /* WARNING: Could not recover jumptable at 0x00010a23abb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10a23abbc; end: 10a23aca7;  */

void FUN_10a23abbc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lStack_28;
  
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a23ac7c);
    (*pcVar4)();
  }
  lVar6 = param_1[4];
  param_1[4] = 0;
  lStack_28 = lVar6;
  FUN_10a23ab18(*(undefined8 *)(param_1[1] + 0x20),*(undefined8 *)(param_1[1] + 0x28),
                *(undefined8 *)(*param_1 + 0xb8));
  plVar1 = (long *)(lVar6 + 0x10);
  do {
    lVar5 = *plVar1;
    if (lVar5 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(lVar6 + 0x18);
        goto LAB_10a23ac34;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar5 >> 1 & 1) != 0) {
LAB_10a23ac34:
      if ((char)param_1[3] == '\x01') {
        *(undefined1 *)(param_1 + 3) = 0;
      }
      lStack_28 = 0;
      if ((lVar6 != 0) && (func_0x0001092b4274(&lStack_28,lVar6), lStack_28 != 0)) {
        func_0x0001092b4274(&lStack_28);
      }
      return;
    }
  } while( true );
}



/* Entry: 10a23aca8; end: 10a23adef;  */

undefined8 * FUN_10a23aca8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb4e88;
  if (param_1[0x18] != 0) {
    func_0x0001092b4274();
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a23adf0; end: 10a23ae5f;  */

void FUN_10a23adf0(undefined8 param_1,long param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_30;
  long lStack_28;
  
  if (param_2 != 0) {
    plVar1 = (long *)(param_2 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_30 = param_1;
  lStack_28 = param_2;
  FUN_10a52f38c(*param_3 + 0x690,&uStack_30);
  if (lStack_28 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10a23ae60; end: 10a23ae8f;  */

void FUN_10a23ae60(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x28);
  FUN_10a23ae90();
                    /* WARNING: Could not recover jumptable at 0x00010a23ae8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10a23ae90; end: 10a23af7b;  */

void FUN_10a23ae90(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lStack_28;
  
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a23af50);
    (*pcVar4)();
  }
  lVar6 = param_1[4];
  param_1[4] = 0;
  lStack_28 = lVar6;
  FUN_10a23adf0(*(undefined8 *)(param_1[1] + 0x20),*(undefined8 *)(param_1[1] + 0x28),
                *(undefined8 *)(*param_1 + 0xb8));
  plVar1 = (long *)(lVar6 + 0x10);
  do {
    lVar5 = *plVar1;
    if (lVar5 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(lVar6 + 0x18);
        goto LAB_10a23af08;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar5 >> 1 & 1) != 0) {
LAB_10a23af08:
      if ((char)param_1[3] == '\x01') {
        *(undefined1 *)(param_1 + 3) = 0;
      }
      lStack_28 = 0;
      if ((lVar6 != 0) && (func_0x0001092b4274(&lStack_28,lVar6), lStack_28 != 0)) {
        func_0x0001092b4274(&lStack_28);
      }
      return;
    }
  } while( true );
}



/* Entry: 10a23af7c; end: 10a23b0c3;  */

undefined8 * FUN_10a23af7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb4ef8;
  if (param_1[0x18] != 0) {
    func_0x0001092b4274();
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a23b0c4; end: 10a23b10b;  */

void FUN_10a23b0c4(long *param_1)

{
  long lVar1;
  
  lVar1 = 0xc0;
  __Znwm();
  FUN_10a23b10c();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a23b10c; end: 10a23b153;  */

undefined8 * FUN_10a23b10c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110bb5518;
  FUN_10a23b190(param_1 + 3);
  return param_1;
}



/* Entry: 10a23b154; end: 10a23b163;  */

void FUN_10a23b154(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb5518;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a23b164; end: 10a23b183;  */

void FUN_10a23b164(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb5518;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a23b184; end: 10a23b18f;  */

long * FUN_10a23b184(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x80);
  if (lVar3 != 0) {
    lVar2 = param_1 + 0x18 + lVar3 * 0x10 + 0x60;
    do {
      lVar3 = lVar3 + -1;
      func_0x00010a234870(lVar2);
      lVar2 = lVar2 + -0x10;
    } while (lVar3 != 0);
  }
  lVar3 = *(long *)(param_1 + 0x58);
  if (lVar3 != 0) {
    lVar2 = param_1 + 0x18 + lVar3 * 0x10 + 0x38;
    do {
      lVar3 = lVar3 + -1;
      func_0x00010a234870(lVar2);
      lVar2 = lVar2 + -0x10;
    } while (lVar3 != 0);
  }
  plVar1 = (long *)(param_1 + 0x30);
  func_0x00010a23b9c8(plVar1,*(undefined8 *)(param_1 + 0x40));
  lVar3 = *plVar1;
  *plVar1 = 0;
  if (lVar3 != 0) {
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 10a23b190; end: 10a23b257;  */

undefined8 FUN_10a23b190(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  uStack_a0 = 0xffffffff;
  uStack_9c = 0;
  auVar6 = NEON_fmov(0xbf800000,4);
  uStack_8c = auVar6._8_8_;
  uStack_94 = auVar6._0_8_;
  uStack_84 = 0x7fc000007fc00000;
  uStack_7c = 0x3f800000;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0x3f800000;
  uStack_5c = 0;
  uStack_64 = 0;
  uStack_54 = 0x3f800000;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0x3f800000;
  uStack_38 = 0;
  uStack_30 = 0;
  plStack_28 = (long *)0x0;
  FUN_10a23b258(param_1,&uStack_a0);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return param_1;
}



/* Entry: 10a23b258; end: 10a23b31b;  */

undefined8 * FUN_10a23b258(undefined8 *param_1)

{
  *param_1 = 0xffffffffffffffff;
  param_1[1] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0x14) = 0;
  *(undefined1 *)((long)param_1 + 0x16) = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  param_1[8] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  FUN_10a23b31c();
  return param_1;
}



/* Entry: 10a23b31c; end: 10a23b49b;  */

void FUN_10a23b31c(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plStack_40;
  long *plStack_38;
  undefined1 uStack_29;
  undefined *puStack_28;
  
  plVar4 = (long *)0x98;
  __Znwm();
  lVar8 = param_2[5];
  lVar5 = param_2[4];
  lVar6 = param_2[6];
  plVar4[10] = param_2[7];
  plVar4[9] = lVar6;
  lVar6 = param_2[8];
  lVar10 = param_2[0xb];
  lVar9 = param_2[10];
  plVar4[0xc] = param_2[9];
  plVar4[0xb] = lVar6;
  plVar4[0xe] = lVar10;
  plVar4[0xd] = lVar9;
  uVar7 = *(undefined8 *)((long)param_2 + 0x5c);
  *(undefined8 *)((long)plVar4 + 0x7c) = *(undefined8 *)((long)param_2 + 100);
  *(undefined8 *)((long)plVar4 + 0x74) = uVar7;
  lVar6 = *param_2;
  lVar10 = param_2[3];
  lVar9 = param_2[2];
  plVar4[4] = param_2[1];
  plVar4[3] = lVar6;
  plVar4[6] = lVar10;
  plVar4[5] = lVar9;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110bb5568;
  plStack_40 = plVar4 + 3;
  plVar4[8] = lVar8;
  plVar4[7] = lVar5;
  lVar6 = param_2[0xf];
  lVar5 = param_2[0xe];
  plVar4[0x12] = param_2[0xf];
  plVar4[0x11] = lVar5;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puStack_28 = &UNK_10e4a1dfc;
  lVar6 = param_1 + 0x18;
  plStack_38 = plVar4;
  FUN_10a23b518(lVar6,&UNK_10e4a1dfc,&UNK_10dd5b8f9,&puStack_28,&uStack_29);
  FUN_10a23b49c(lVar6 + 0x18,&plStack_40);
  lVar5 = *(long *)(param_1 + 0x40);
  lVar6 = param_1 + lVar5 * 0x10;
  *(long **)(lVar6 + 0x50) = plStack_38;
  *(long **)(lVar6 + 0x48) = plStack_40;
  if (plStack_38 != (long *)0x0) {
    plVar4 = plStack_38 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar5 = *(long *)(param_1 + 0x40);
  }
  *(long *)(param_1 + 0x40) = lVar5 + 1;
  puStack_28 = (undefined *)(param_1 + 0xa0);
  lVar6 = param_1 + 0x18;
  FUN_10a23b518(lVar6,puStack_28,&UNK_10dd5b8f9,&puStack_28,&uStack_29);
  plVar4 = plStack_38;
  *(bool *)(param_1 + 0x14) = **(int **)(lVar6 + 0x18) == 0;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a23b49c; end: 10a23b517;  */

undefined8 * FUN_10a23b49c(undefined8 *param_1,undefined8 *param_2)

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
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
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



/* Entry: 10a23b518; end: 10a23b73b;  */

undefined1  [16] FUN_10a23b518(long *param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x24;
  undefined1 auVar11 [16];
  
  uVar10 = (ulong)*param_2;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    if ((uVar9 & uVar3) == 0) {
      unaff_x24 = uVar3 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar6 * uVar9;
      }
    }
    puVar5 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar5 != (undefined8 *)0x0) {
      for (plVar8 = (long *)*puVar5; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar6 = plVar8[1];
        if (uVar6 == uVar10) {
          if ((int)plVar8[2] == *param_2) {
            uVar2 = 0;
            goto LAB_10a23b700;
          }
        }
        else {
          if ((uVar9 & uVar3) == 0) {
            uVar6 = uVar6 & uVar3;
          }
          else if (uVar9 <= uVar6) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar6 / uVar9;
            }
            uVar6 = uVar6 - uVar1 * uVar9;
          }
          if (uVar6 != unaff_x24) break;
        }
      }
    }
  }
  plVar8 = (long *)0x28;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = uVar10;
  *(undefined4 *)(plVar8 + 2) = *(undefined4 *)*param_4;
  plVar8[3] = 0;
  plVar8[4] = 0;
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar9) {
      uVar3 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar3 = uVar3 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    FUN_10a23b73c(param_1,uVar3);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = uVar9 - 1 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar3 * uVar9;
      }
    }
  }
  lVar7 = *param_1;
  plVar4 = *(long **)(lVar7 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar8 = *plVar4;
    *plVar4 = (long)plVar8;
    *(long **)(lVar7 + unaff_x24 * 8) = plVar4;
    if (*plVar8 == 0) goto LAB_10a23b6f0;
    uVar10 = *(ulong *)(*plVar8 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar10 = uVar10 & uVar9 - 1;
    }
    else if (uVar9 <= uVar10) {
      uVar3 = 0;
      if (uVar9 != 0) {
        uVar3 = uVar10 / uVar9;
      }
      uVar10 = uVar10 - uVar3 * uVar9;
    }
    plVar4 = (long *)(*param_1 + uVar10 * 8);
  }
  else {
    *plVar8 = *plVar4;
  }
  *plVar4 = (long)plVar8;
LAB_10a23b6f0:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_10a23b700:
  auVar11._8_8_ = uVar2;
  auVar11._0_8_ = plVar8;
  return auVar11;
}



/* Entry: 10a23b73c; end: 10a23b80b;  */

void FUN_10a23b73c(ulong *param_1,ulong param_2)

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
LAB_10a23b784:
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
        func_0x000109ffded8();
        uVar7 = *param_1;
        *param_1 = param_2;
        if (uVar7 != 0) {
          if ((char)param_1[2] == '\x01') {
            func_0x00010a234870(uVar7 + 0x18);
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
    if (param_2 < uVar7) goto LAB_10a23b784;
  }
  return;
}



/* Entry: 10a23b80c; end: 10a23ba63;  */

void FUN_10a23b80c(ulong *param_1,ulong param_2)

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
      func_0x000109ffded8();
      uVar1 = *param_1;
      *param_1 = param_2;
      if (uVar1 != 0) {
        if ((char)param_1[2] == '\x01') {
          func_0x00010a234870(uVar1 + 0x18);
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



/* Entry: 10a23ba64; end: 10a23ba73;  */

void FUN_10a23ba64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb4f68;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a23ba74; end: 10a23ba93;  */

void FUN_10a23ba74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb4f68;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a23ba94; end: 10a23baa3;  */

void FUN_10a23ba94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a23ba9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a23baa4; end: 10a23bafb;  */

long FUN_10a23baa4(long param_1)

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



/* Entry: 10a23bafc; end: 10a23bb0b;  */

void FUN_10a23bafc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb4fb8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a23bb0c; end: 10a23bb2b;  */

void FUN_10a23bb0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb4fb8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a23bb2c; end: 10a23bb57;  */

void FUN_10a23bb2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a23bb34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a23bb58; end: 10a23bb77;  */

void FUN_10a23bb58(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb5070;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a23bb78; end: 10a23bb87;  */

void FUN_10a23bb78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a23bb80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a23bb88; end: 10a23bbdf;  */

long FUN_10a23bb88(long param_1)

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



/* Entry: 10a23bbe0; end: 10a23bbef;  */

void FUN_10a23bbe0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb50c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a23bbf0; end: 10a23bc0f;  */

void FUN_10a23bbf0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb50c0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a23bc10; end: 10a23bc3b;  */

void FUN_10a23bc10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a23bc18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a23bc3c; end: 10a23bc5b;  */

void FUN_10a23bc3c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb5160;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a23bc5c; end: 10a23bc6b;  */

void FUN_10a23bc5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a23bc64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a23bc6c; end: 10a23bd47;  */

void FUN_10a23bc6c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x10);
  FUN_10a23bf04(lVar6 + 0x58,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x18));
  if (*(long *)(lVar6 + 0x70) == *(long *)(lVar6 + 0x20) - *(long *)(lVar6 + 0x18) >> 3) {
    func_0x00010a23bea0(lVar6 + 0x58);
    for (plVar4 = *(long **)(lVar6 + 0x40); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      lVar5 = plVar4[3];
      *(undefined8 *)(lVar5 + 8) = 0;
      *(undefined8 *)(lVar5 + 0x10) = 0;
    }
    plVar4 = *(long **)(lVar6 + 0x10);
    if ((plVar4 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0)
       ) {
      if (*(long **)(lVar6 + 8) != (long *)0x0) {
        (**(code **)(**(long **)(lVar6 + 8) + 0x18))();
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
      if (lVar6 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  return;
}



/* Entry: 10a23bd48; end: 10a23bd7b;  */

void FUN_10a23bd48(void)

{
  return;
}



/* Entry: 10a23bd7c; end: 10a23bdeb;  */

undefined8 * FUN_10a23bd7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb51d0;
  (**(code **)param_1[4])();
  return param_1;
}



/* Entry: 10a23bdec; end: 10a23bdff;  */

undefined1  [16] FUN_10a23bdec(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 8);
}



/* Entry: 10a23be00; end: 10a23bf03;  */

long FUN_10a23be00(long param_1)

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



/* Entry: 10a23bf04; end: 10a23c29f;  */

void FUN_10a23bf04(long *param_1,int param_2,undefined4 param_3)

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
  ulong unaff_x24;
  
  uVar13 = (ulong)param_2;
  uVar14 = param_1[1];
  if (uVar14 != 0) {
    uVar5 = uVar14 - 1;
    if ((uVar14 & uVar5) == 0) {
      unaff_x24 = uVar5 & uVar13;
    }
    else {
      unaff_x24 = uVar13;
      if (uVar14 <= uVar13) {
        uVar9 = 0;
        if (uVar14 != 0) {
          uVar9 = uVar13 / uVar14;
        }
        unaff_x24 = uVar13 - uVar9 * uVar14;
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_10a23bfb0;
          uVar9 = plVar7[1];
          if (uVar9 != uVar13) break;
          if (*(int *)(plVar7 + 2) == param_2) {
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
      } while (uVar9 == unaff_x24);
    }
  }
LAB_10a23bfb0:
  plVar7 = (long *)0x18;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = uVar13;
  *(undefined4 *)(plVar7 + 2) = param_3;
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
LAB_10a23c048:
      if (uVar5 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a23c28c);
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
        if (uVar5 != 0) goto LAB_10a23c048;
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
      unaff_x24 = uVar14 - 1 & uVar13;
    }
    else {
      unaff_x24 = uVar13;
      if (uVar14 <= uVar13) {
        uVar5 = 0;
        if (uVar14 != 0) {
          uVar5 = uVar13 / uVar14;
        }
        unaff_x24 = uVar13 - uVar5 * uVar14;
      }
    }
  }
  lVar3 = *param_1;
  plVar8 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar7 = *plVar8;
    *plVar8 = (long)plVar7;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar8;
    if (*plVar7 == 0) goto LAB_10a23c228;
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
LAB_10a23c228:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10a23c2a0; end: 10a23c2af;  */

void FUN_10a23c2a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb5218;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a23c2b0; end: 10a23c2cf;  */

void FUN_10a23c2b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb5218;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a23c2d0; end: 10a23c2df;  */

void FUN_10a23c2d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a23c2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a23c2e0; end: 10a23c903;  */

void FUN_10a23c2e0(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  undefined4 *puVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  ulong uVar22;
  ulong unaff_x27;
  float fVar23;
  
  lVar19 = *(long *)(param_3 + 0x10);
  iVar20 = *(int *)(param_3 + 0x18);
  uVar21 = (ulong)iVar20;
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f64656d,&UNK_10f6465af,0x3a,&UNK_10f646611,in_x6,in_x7,iVar20,
                        param_1);
  }
  FUN_10a23bf04(lVar19 + 0x50,iVar20,iVar20);
  uVar22 = *(ulong *)(lVar19 + 0x80);
  if (uVar22 != 0) {
    uVar8 = uVar22 - 1;
    if ((uVar22 & uVar8) == 0) {
      unaff_x27 = uVar8 & uVar21;
    }
    else {
      unaff_x27 = uVar21;
      if (uVar22 <= uVar21) {
        uVar12 = 0;
        if (uVar22 != 0) {
          uVar12 = uVar21 / uVar22;
        }
        unaff_x27 = uVar21 - uVar12 * uVar22;
      }
    }
    puVar11 = *(undefined8 **)(*(long *)(lVar19 + 0x78) + unaff_x27 * 8);
    if (puVar11 != (undefined8 *)0x0) {
      for (plVar18 = (long *)*puVar11; plVar18 != (long *)0x0; plVar18 = (long *)*plVar18) {
        uVar12 = plVar18[1];
        if (uVar12 == uVar21) {
          if ((int)plVar18[2] == iVar20) goto LAB_10a23c67c;
        }
        else {
          if ((uVar22 & uVar8) == 0) {
            uVar12 = uVar12 & uVar8;
          }
          else if (uVar22 <= uVar12) {
            uVar9 = 0;
            if (uVar22 != 0) {
              uVar9 = uVar12 / uVar22;
            }
            uVar12 = uVar12 - uVar9 * uVar22;
          }
          if (uVar12 != unaff_x27) break;
        }
      }
    }
  }
  plVar18 = (long *)0x30;
  __Znwm();
  *plVar18 = 0;
  plVar18[1] = uVar21;
  *(int *)(plVar18 + 2) = iVar20;
  plVar18[4] = 0;
  plVar18[5] = 0;
  plVar18[3] = 0;
  fVar23 = (float)(*(long *)(lVar19 + 0x90) + 1);
  if ((uVar22 == 0) || (*(float *)(lVar19 + 0x98) * (float)uVar22 < fVar23)) {
    uVar8 = 1;
    if (2 < uVar22) {
      uVar8 = (ulong)((uVar22 & uVar22 - 1) != 0);
    }
    uVar8 = uVar8 | uVar22 << 1;
    uVar12 = (ulong)(fVar23 / *(float *)(lVar19 + 0x98));
    if (uVar8 <= uVar12) {
      uVar8 = uVar12;
    }
    if (uVar8 - 1 == 0) {
      uVar8 = 2;
    }
    else if ((uVar8 & uVar8 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar22 = *(ulong *)(lVar19 + 0x80);
    }
    if (uVar22 < uVar8) {
LAB_10a23c490:
      if (uVar8 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a23c8d8);
        (*pcVar5)();
      }
      lVar6 = uVar8 << 3;
      __Znwm();
      lVar7 = *(long *)(lVar19 + 0x78);
      *(long *)(lVar19 + 0x78) = lVar6;
      if (lVar7 != 0) {
        __ZdlPv();
      }
      uVar22 = 0;
      *(ulong *)(lVar19 + 0x80) = uVar8;
      do {
        *(undefined8 *)(*(long *)(lVar19 + 0x78) + uVar22 * 8) = 0;
        uVar22 = uVar22 + 1;
      } while (uVar8 != uVar22);
      plVar13 = *(long **)(lVar19 + 0x88);
      uVar22 = uVar8;
      if (plVar13 != (long *)0x0) {
        uVar12 = plVar13[1];
        uVar9 = uVar8 - 1;
        if ((uVar8 & uVar9) == 0) {
          uVar12 = uVar12 & uVar9;
        }
        else if (uVar8 <= uVar12) {
          uVar17 = 0;
          if (uVar8 != 0) {
            uVar17 = uVar12 / uVar8;
          }
          uVar12 = uVar12 - uVar17 * uVar8;
        }
        *(undefined8 **)(*(long *)(lVar19 + 0x78) + uVar12 * 8) = (undefined8 *)(lVar19 + 0x88);
        plVar16 = (long *)*plVar13;
        while (plVar16 != (long *)0x0) {
          uVar17 = plVar16[1];
          if ((uVar8 & uVar9) == 0) {
            uVar17 = uVar17 & uVar9;
          }
          else if (uVar8 <= uVar17) {
            uVar4 = 0;
            if (uVar8 != 0) {
              uVar4 = uVar17 / uVar8;
            }
            uVar17 = uVar17 - uVar4 * uVar8;
          }
          plVar14 = plVar16;
          if (uVar17 != uVar12) {
            lVar6 = *(long *)(lVar19 + 0x78);
            if (*(long *)(lVar6 + uVar17 * 8) == 0) {
              *(long **)(lVar6 + uVar17 * 8) = plVar13;
              uVar12 = uVar17;
            }
            else {
              *plVar13 = *plVar16;
              *plVar16 = **(undefined8 **)(lVar6 + uVar17 * 8);
              **(long **)(lVar6 + uVar17 * 8) = (long)plVar16;
              plVar14 = plVar13;
            }
          }
          plVar13 = plVar14;
          plVar16 = (long *)*plVar14;
        }
      }
    }
    else if (uVar8 < uVar22) {
      uVar12 = (ulong)((float)*(ulong *)(lVar19 + 0x90) / *(float *)(lVar19 + 0x98));
      if ((uVar22 < 3) || ((uVar22 & uVar22 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar12) {
        uVar12 = 1L << (-LZCOUNT(uVar12 - 1) & 0x3fU);
      }
      if (uVar8 <= uVar12) {
        uVar8 = uVar12;
      }
      if (uVar8 < uVar22) {
        if (uVar8 != 0) goto LAB_10a23c490;
        lVar6 = *(long *)(lVar19 + 0x78);
        *(undefined8 *)(lVar19 + 0x78) = 0;
        if (lVar6 != 0) {
          __ZdlPv();
        }
        *(undefined8 *)(lVar19 + 0x80) = 0;
        uVar22 = 0;
      }
      else {
        uVar22 = *(ulong *)(lVar19 + 0x80);
      }
    }
    if ((uVar22 & uVar22 - 1) == 0) {
      unaff_x27 = uVar22 - 1 & uVar21;
    }
    else {
      unaff_x27 = uVar21;
      if (uVar22 <= uVar21) {
        uVar8 = 0;
        if (uVar22 != 0) {
          uVar8 = uVar21 / uVar22;
        }
        unaff_x27 = uVar21 - uVar8 * uVar22;
      }
    }
  }
  lVar6 = *(long *)(lVar19 + 0x78);
  plVar13 = *(long **)(lVar6 + unaff_x27 * 8);
  if (plVar13 == (long *)0x0) {
    plVar13 = (long *)(lVar19 + 0x88);
    *plVar18 = *plVar13;
    *plVar13 = (long)plVar18;
    *(long **)(lVar6 + unaff_x27 * 8) = plVar13;
    if (*plVar18 == 0) goto LAB_10a23c670;
    uVar21 = *(ulong *)(*plVar18 + 8);
    if ((uVar22 & uVar22 - 1) == 0) {
      uVar21 = uVar21 & uVar22 - 1;
    }
    else if (uVar22 <= uVar21) {
      uVar8 = 0;
      if (uVar22 != 0) {
        uVar8 = uVar21 / uVar22;
      }
      uVar21 = uVar21 - uVar8 * uVar22;
    }
    plVar13 = (long *)(*(long *)(lVar19 + 0x78) + uVar21 * 8);
  }
  else {
    *plVar18 = *plVar13;
  }
  *plVar13 = (long)plVar18;
LAB_10a23c670:
  *(long *)(lVar19 + 0x90) = *(long *)(lVar19 + 0x90) + 1;
LAB_10a23c67c:
  plVar13 = plVar18 + 3;
  lVar6 = *plVar13;
  uVar21 = plVar18[4] - lVar6;
  if (param_1 < uVar21 || param_1 - uVar21 == 0) {
    if (param_1 < uVar21) {
      plVar18[4] = lVar6 + param_1;
    }
  }
  else {
    func_0x000107c27d58(plVar13,param_1 - uVar21);
    lVar6 = *plVar13;
  }
  _memcpy(lVar6,param_2,param_1);
  if (*(long *)(lVar19 + 0x68) == *(long *)(lVar19 + 0x28) - *(long *)(lVar19 + 0x20) >> 3) {
    func_0x00010a23bea0(lVar19 + 0x50);
    plVar18 = *(long **)(lVar19 + 0x18);
    if ((plVar18 != (long *)0x0) &&
       (__ZNSt3__119__shared_weak_count4lockEv(), plVar18 != (long *)0x0)) {
      plVar13 = *(long **)(lVar19 + 0x10);
      if (plVar13 != (long *)0x0) {
        plVar16 = (long *)(lVar19 + 0xa0);
        piVar10 = (int *)*plVar16;
        iVar20 = (int)((ulong)(*(long *)(lVar19 + 0x28) - *(long *)(lVar19 + 0x20)) >> 3);
        uVar21 = (long)iVar20 * 0xc + 4;
        uVar22 = *(long *)(lVar19 + 0xa8) - (long)piVar10;
        if (uVar21 < uVar22 || uVar21 - uVar22 == 0) {
          if (uVar21 < uVar22) {
            *(int **)(lVar19 + 0xa8) = piVar10 + (long)iVar20 * 3 + 1;
          }
        }
        else {
          func_0x000107c27d58(plVar16,uVar21 - uVar22);
          piVar10 = (int *)*plVar16;
        }
        *piVar10 = iVar20;
        lVar6 = *(long *)(lVar19 + 0xa0);
        plVar14 = *(long **)(lVar19 + 0x88);
        if (plVar14 == (long *)0x0) {
          lVar7 = 0;
        }
        else {
          lVar7 = 0;
          puVar15 = (undefined4 *)(lVar6 + 4);
          do {
            lVar6 = plVar14[3];
            lVar1 = plVar14[4];
            *puVar15 = (int)plVar14[2];
            *(long *)(puVar15 + 1) = lVar1 - lVar6;
            puVar15 = puVar15 + 3;
            lVar7 = (lVar1 - lVar6) + lVar7;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
          lVar6 = *plVar16;
        }
        uVar22 = lVar7 + uVar21;
        uVar8 = *(long *)(lVar19 + 0xa8) - lVar6;
        if (uVar22 < uVar8 || uVar22 - uVar8 == 0) {
          if (uVar22 < uVar8) {
            *(ulong *)(lVar19 + 0xa8) = lVar6 + uVar22;
          }
        }
        else {
          func_0x000107c27d58(plVar16,uVar22 - uVar8);
          lVar6 = *plVar16;
        }
        plVar14 = *(long **)(lVar19 + 0x88);
        if (plVar14 != (long *)0x0) {
          lVar6 = lVar6 + uVar21;
          do {
            _memcpy(lVar6,plVar14[3],plVar14[4] - plVar14[3]);
            lVar6 = lVar6 + (plVar14[4] - plVar14[3]);
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
          lVar6 = *plVar16;
        }
        lVar7 = *(long *)(lVar19 + 0xa8);
        if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
          func_0x00010ae06f08(1,4,&UNK_10f64656d,&UNK_10f64664b,100,&UNK_10f64668c,in_x6,in_x7,
                              lVar7 - lVar6);
          lVar6 = *(long *)(lVar19 + 0xa0);
          lVar7 = *(long *)(lVar19 + 0xa8);
        }
        (**(code **)(*plVar13 + 0x10))(plVar13,lVar7 - lVar6);
      }
      plVar13 = plVar18 + 1;
      do {
        lVar19 = *plVar13;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = lVar19 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
      }
    }
  }
  return;
}



/* Entry: 10a23c904; end: 10a23c937;  */

void FUN_10a23c904(void)

{
  return;
}



/* Entry: 10a23c938; end: 10a23c9a7;  */

undefined8 * FUN_10a23c938(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb5288;
  (**(code **)param_1[2])();
  return param_1;
}



/* Entry: 10a23c9a8; end: 10a23c9bf;  */

void FUN_10a23c9a8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010a23c9bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))(param_2,param_3,(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10a23c9c0; end: 10a23caa3;  */

long FUN_10a23c9c0(long param_1)

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



/* Entry: 10a23caa4; end: 10a23cab3;  */

void FUN_10a23caa4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb52c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a23cab4; end: 10a23cad3;  */

void FUN_10a23cab4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb52c8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a23cad4; end: 10a23cae3;  */

void FUN_10a23cad4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a23cadc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x58))();
  return;
}



/* Entry: 10a23cae4; end: 10a23cb57;  */

void FUN_10a23cae4(undefined8 param_1,long param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_30;
  long lStack_28;
  
  if (param_2 != 0) {
    plVar1 = (long *)(param_2 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_30 = param_1;
  lStack_28 = param_2;
  FUN_10a52f264(*param_3 + 0x690,&uStack_30,&uStack_30);
  if (lStack_28 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10a23cb58; end: 10a23cb87;  */

void FUN_10a23cb58(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x28);
  FUN_10a23cb88();
                    /* WARNING: Could not recover jumptable at 0x00010a23cb84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10a23cb88; end: 10a23cc73;  */

void FUN_10a23cb88(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lStack_28;
  
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a23cc48);
    (*pcVar4)();
  }
  lVar6 = param_1[4];
  param_1[4] = 0;
  lStack_28 = lVar6;
  FUN_10a23cae4(*(undefined8 *)(param_1[1] + 0x10),*(undefined8 *)(param_1[1] + 0x18),
                *(undefined8 *)(*param_1 + 0xb8));
  plVar1 = (long *)(lVar6 + 0x10);
  do {
    lVar5 = *plVar1;
    if (lVar5 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(lVar6 + 0x18);
        goto LAB_10a23cc00;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar5 >> 1 & 1) != 0) {
LAB_10a23cc00:
      if ((char)param_1[3] == '\x01') {
        *(undefined1 *)(param_1 + 3) = 0;
      }
      lStack_28 = 0;
      if ((lVar6 != 0) && (func_0x0001092b4274(&lStack_28,lVar6), lStack_28 != 0)) {
        func_0x0001092b4274(&lStack_28);
      }
      return;
    }
  } while( true );
}



/* Entry: 10a23cc74; end: 10a23cdbb;  */

undefined8 * FUN_10a23cc74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb5318;
  if (param_1[0x18] != 0) {
    func_0x0001092b4274();
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a23cdbc; end: 10a23ce2b;  */

void FUN_10a23cdbc(undefined8 param_1,long param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_30;
  long lStack_28;
  
  if (param_2 != 0) {
    plVar1 = (long *)(param_2 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_30 = param_1;
  lStack_28 = param_2;
  FUN_10a52f38c(*param_3 + 0x690,&uStack_30);
  if (lStack_28 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10a23ce2c; end: 10a23ce5b;  */

void FUN_10a23ce2c(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x28);
  FUN_10a23ce5c();
                    /* WARNING: Could not recover jumptable at 0x00010a23ce58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10a23ce5c; end: 10a23cf47;  */

void FUN_10a23ce5c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lStack_28;
  
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a23cf1c);
    (*pcVar4)();
  }
  lVar6 = param_1[4];
  param_1[4] = 0;
  lStack_28 = lVar6;
  FUN_10a23cdbc(*(undefined8 *)(param_1[1] + 0x10),*(undefined8 *)(param_1[1] + 0x18),
                *(undefined8 *)(*param_1 + 0xb8));
  plVar1 = (long *)(lVar6 + 0x10);
  do {
    lVar5 = *plVar1;
    if (lVar5 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(lVar6 + 0x18);
        goto LAB_10a23ced4;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar5 >> 1 & 1) != 0) {
LAB_10a23ced4:
      if ((char)param_1[3] == '\x01') {
        *(undefined1 *)(param_1 + 3) = 0;
      }
      lStack_28 = 0;
      if ((lVar6 != 0) && (func_0x0001092b4274(&lStack_28,lVar6), lStack_28 != 0)) {
        func_0x0001092b4274(&lStack_28);
      }
      return;
    }
  } while( true );
}



/* Entry: 10a23cf48; end: 10a23d08f;  */

undefined8 * FUN_10a23cf48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb5388;
  if (param_1[0x18] != 0) {
    func_0x0001092b4274();
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a23d090; end: 10a23d09f;  */

void FUN_10a23d090(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb53f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a23d0a0; end: 10a23d0bf;  */

void FUN_10a23d0a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb53f8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a23d0c0; end: 10a23d0cf;  */

void FUN_10a23d0c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a23d0c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a23d0d0; end: 10a23d127;  */

long FUN_10a23d0d0(long param_1)

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



/* Entry: 10a23d128; end: 10a23d137;  */

void FUN_10a23d128(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb5448;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a23d138; end: 10a23d157;  */

void FUN_10a23d138(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb5448;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a23d158; end: 10a23d167;  */

void FUN_10a23d158(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a23d160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a23d168; end: 10a23d20f;  */

void FUN_10a23d168(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_2;
  FUN_10a002510();
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    puVar1 = (undefined8 *)(param_2 + 0x40);
    if (*(char *)(param_2 + 0x57) < '\0') {
      puVar1 = (undefined8 *)*puVar1;
    }
    lVar2 = lVar2 - (long)puVar1;
  }
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  param_1[1] = *(undefined8 *)(param_2 + 0x48);
  *param_1 = uVar3;
  param_1[2] = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
            (param_1,lVar2 + param_3,0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm(param_1,0,lVar2);
  FUN_10a002370(param_2);
  return;
}



/* Entry: 10a23d210; end: 10a23d317;  */

void FUN_10a23d210(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  
  plVar5 = *(long **)(param_1 + 0x48);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 5 & 1) == 0) {
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    func_0x00010a225c4c(*(undefined8 *)(param_1 + 0x50));
    func_0x0001092ba100(param_1 + 0x10);
    func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  func_0x0001092af97c(plVar5 + 0x12);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a23d2ac);
  (*pcVar4)();
}



/* Entry: 10a23d318; end: 10a23d387;  */

void FUN_10a23d318(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = *(long **)(param_1 + 0x48);
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a23d388; end: 10a23d65b;  */

void FUN_10a23d388(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
    FUN_10a23239c(param_1 + 0x70,param_1 + 0x48);
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x70);
    plVar6 = (long *)(*(long *)(param_1 + 0x70) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x78) = 1;
      lVar9 = *(long *)(param_1 + 0x60);
      plVar6 = (long *)(lVar9 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar8 = *plVar6;
        if (lVar8 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar9 + 0x18,&uStack_38);
            *(undefined8 *)(lVar9 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar8 >> 1 & 1) == 0);
    }
  }
  plVar6 = *(long **)(param_1 + 0x60);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar6 + 0x12);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a23d598);
    (*pcVar5)();
  }
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  plVar6 = *(long **)(param_1 + 0x70);
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  func_0x0001092ba100(param_1 + 0x10);
  plVar6 = *(long **)(param_1 + 0x58);
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  plVar6 = *(long **)(param_1 + 0x50);
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6 + 1;
    do {
      lVar9 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a23d65c; end: 10a23d79f;  */

void FUN_10a23d65c(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  if (*(char *)(param_1 + 0x78) == '\x01') {
    plVar5 = *(long **)(param_1 + 0x60);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar6 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x70);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar6 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0x58);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar6 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0x50);
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar5 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a23d7a0; end: 10a23d823;  */

undefined1  [16] FUN_10a23d7a0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xb;
  auVar1._0_8_ = &UNK_10f648394;
  return auVar1;
}



/* Entry: 10a23d824; end: 10a23e27b;  */

void FUN_10a23d824(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f648394,0xb);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bb9ba8;
  pppuVar2 = (undefined8 ***)&UNK_10f64697a;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  puStack_48 = (undefined *)0x0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bb9ba8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a23e25c;
    FUN_10a054dac(param_1,&UNK_10f64697b,FUN_10a26f380,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a23e25c;
    FUN_10a054dac(param_1,&UNK_10f64698d,FUN_10a26f5c4,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a23e25c;
    FUN_10a054dac(param_1,&UNK_10f6469a4,FUN_10a26f770,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a23e25c;
    FUN_10a054dac(param_1,&UNK_10f6469be,FUN_10a26f8dc,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a23e25c;
    FUN_10a054dac(param_1,&UNK_10f6469e4,FUN_10a26f98c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a23e25c;
    FUN_10a054dac(param_1,&UNK_10f6469f9,FUN_10a26fa3c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a23e25c;
    FUN_10a054dac(param_1,&UNK_10f646a16,FUN_10a26fb80,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a23e25c;
    FUN_10a054dac(param_1,&UNK_10f646a2a,FUN_10a26fc68,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a23e25c;
    FUN_10a054dac(param_1,&DAT_10f646a38,FUN_10a26fd54,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a23e25c;
    FUN_10a054dac(param_1,&UNK_10f646a44,FUN_10a26fe1c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,8,0xffffffff,0xffffffff,4);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a23e25c;
    FUN_10a054dac(param_1,&UNK_10f646a55,FUN_10a26ff34,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a23e25c;
    FUN_10a054dac(param_1,&UNK_10f646a66,FUN_10a26ffec,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,4);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a23e25c;
    FUN_10a054dac(param_1,&UNK_10f646a78,FUN_10a2700ac,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a23e25c;
    FUN_10a054dac(param_1,&UNK_10f646a89,FUN_10a270170,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a23e25c;
    FUN_10a054dac(param_1,&UNK_10f646a9e,FUN_10a27023c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a23e25c;
    FUN_10a054dac(param_1,&UNK_10f646ab0,FUN_10a27031c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a23e25c;
    FUN_10a054dac(param_1,&UNK_10f646abe,FUN_10a27047c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a23e25c;
    FUN_10a054dac(param_1,&UNK_10f646ad0,FUN_10a2705c8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a23e25c;
    FUN_10a054dac(param_1,&UNK_10f646add,FUN_10a270698,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a23e25c;
    FUN_10a054dac(param_1,&UNK_10f646afd,FUN_10a2707dc,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xb);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a23e25c;
    FUN_10a054dac(param_1,&UNK_10f646b15,FUN_10a2708ac,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a23e25c;
    FUN_10a054dac(param_1,&UNK_10f646b22,FUN_10a270970,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f646b33,FUN_10a270a38,FUN_10a270ae8);
  }
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&UNK_10f6846ca;
  uStack_80 = 0xfffffffffffffffd;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = (undefined *)0x0;
  uStack_40 = 0;
  uVar7 = param_1;
  FUN_10a270d3c(param_1,&ppuStack_a0);
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&UNK_10f646b45;
  uStack_80 = 0xfffffffffffffffd;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f64697a;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f64697a;
  uStack_40 = 0;
  FUN_10a270d3c();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&UNK_10f646b53;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = (undefined *)0x0;
  uStack_40 = 0;
  FUN_10a270efc();
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&UNK_10f646b62;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f64697a;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  puStack_48 = &UNK_10f64697a;
  uStack_40 = 0;
  FUN_10a270efc();
  FUN_10a0051e8();
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f646b6d,FUN_10a2710bc,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f646b79,FUN_10a271180,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,4);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f646b8f,FUN_10a271250,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,2,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f646b9a,FUN_10a271418,FUN_10a2714d4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,2,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f646baa,FUN_10a2717d0,FUN_10a27188c);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_78 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    puStack_48 = *(undefined **)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f648394,0xb);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a23e25c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a23e260);
  (*pcVar6)();
}



/* Entry: 10a23e27c; end: 10a23e2f7;  */

undefined8 * FUN_10a23e27c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb57f8;
  param_1[3] = &PTR_DAT_110bb5868;
  param_1[0xc] = &PTR_DAT_110bb58e0;
  FUN_10a271958(param_1 + 10);
  param_1[3] = &PTR_DAT_110bb6690;
  param_1[0xc] = &PTR_FUN_110bb6708;
  func_0x00010a004e5c(param_1 + 6);
  func_0x00010a004e04(param_1 + 4);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a23e2f8; end: 10a23e313;  */

undefined8 * FUN_10a23e2f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb57f8;
  param_1[3] = &PTR_DAT_110bb5868;
  param_1[0xc] = &PTR_DAT_110bb58e0;
  FUN_10a271958(param_1 + 10);
  param_1[3] = &PTR_DAT_110bb6690;
  param_1[0xc] = &PTR_FUN_110bb6708;
  func_0x00010a004e5c(param_1 + 6);
  func_0x00010a004e04(param_1 + 4);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a23e314; end: 10a23e33f;  */

void FUN_10a23e314(void)

{
  FUN_10a23e27c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a23e340; end: 10a23e36f;  */

void FUN_10a23e340(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a23e27c((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a23e370; end: 10a23e487;  */

undefined8 * FUN_10a23e370(undefined8 *param_1,long param_2)

{
  param_1[0xc] = &PTR_FUN_110c383b8;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0xf) = 0x100;
  *param_1 = &PTR_DAT_110b17898;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a0040d0(param_1 + 3,&PTR_PTR_110bb5920);
  *param_1 = &PTR_FUN_110bb57f8;
  param_1[3] = &PTR_DAT_110bb5868;
  param_1[10] = 0;
  param_1[8] = param_2;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = &PTR_DAT_110bb58e0;
  if ((*(byte *)(param_1 + 0xf) & 1) == 0) {
    *(undefined1 *)(param_1 + 0xf) = 1;
    param_1[0xe] = param_2;
    if (param_2 != 0) {
      param_1[0xd] = *(undefined8 *)(*(long *)(param_2 + 0x850) + 0x2c);
    }
  }
  FUN_10a5ae998(param_1[6],&PTR_DAT_110b99f08,param_2,param_1 + 3);
  return param_1;
}



/* Entry: 10a23e488; end: 10a23e547;  */

void FUN_10a23e488(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_40;
  long *plStack_38;
  
  lVar6 = *(long *)(param_2 + 0x40);
  lVar5 = lVar6;
  uVar4 = param_3;
  FUN_10a3dd220(lVar6);
  func_0x00010a0fda30();
  FUN_10a3dd268(lVar6,lVar5,uVar4,param_3);
  *(undefined1 *)(lVar6 + 8) = 1;
  func_0x00010a0d77bc(&uStack_40);
  param_1[1] = plStack_38;
  *param_1 = uStack_40;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
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
  return;
}



/* Entry: 10a23e548; end: 10a23e8af;  */

void FUN_10a23e548(undefined8 param_1,long param_2,long ****param_3)

{
  long ****pppplVar1;
  ulong uVar2;
  char cVar3;
  code *pcVar4;
  long ****pppplVar5;
  long ****pppplVar6;
  long ****pppplVar7;
  long lVar8;
  long ****pppplVar9;
  long ****pppplVar10;
  undefined8 in_x6;
  undefined8 in_x7;
  long ***ppplVar11;
  long lVar12;
  long ***ppplStack_d0;
  long **pplStack_c8;
  long ***ppplStack_c0;
  long **pplStack_b8;
  long **pplStack_b0;
  long ***ppplStack_a8;
  ulong uStack_a0;
  byte bStack_91;
  undefined1 auStack_90 [24];
  long ***ppplStack_78;
  long **pplStack_70;
  undefined7 uStack_68;
  char cStack_61;
  
  pppplVar10 = (long ****)&UNK_10f646bba;
  pppplVar5 = &ppplStack_a8;
  func_0x000107c2b054(pppplVar5,&UNK_10f646bba);
  cVar3 = *(char *)((long)param_3 + 0x17);
  if (cVar3 < '\0') {
    pppplVar10 = (long ****)*param_3;
    pppplVar5 = &ppplStack_c0;
    func_0x000107c3192c(pppplVar5,pppplVar10,param_3[1]);
    cVar3 = *(char *)((long)param_3 + 0x17);
    if (cVar3 < '\0') {
      pppplVar6 = (long ****)*param_3;
      ppplVar11 = param_3[1];
      goto LAB_10a23e5bc;
    }
  }
  else {
    pplStack_b8 = (long **)param_3[1];
    ppplStack_c0 = *param_3;
    pplStack_b0 = (long **)param_3[2];
  }
  ppplVar11 = (long ***)(long)(int)cVar3;
  pppplVar6 = param_3;
LAB_10a23e5bc:
  uVar2 = uStack_a0;
  pppplVar7 = (long ****)ppplStack_a8;
  if (-1 < (char)bStack_91) {
    uVar2 = (ulong)bStack_91;
    pppplVar7 = &ppplStack_a8;
  }
  if (uVar2 != 0) {
    if ((long)uVar2 <= (long)ppplVar11) {
      pppplVar1 = (long ****)((long)pppplVar6 + (long)ppplVar11);
      cVar3 = *(char *)pppplVar7;
      pppplVar9 = pppplVar6;
      do {
        if ((0xfffffffffffffffe < (long)ppplVar11 - uVar2) ||
           (_memchr(pppplVar9,(long)cVar3,((long)ppplVar11 - uVar2) + 1),
           pppplVar9 == (long ****)0x0)) break;
        pppplVar5 = pppplVar9;
        pppplVar10 = pppplVar7;
        _memcmp();
        if ((int)pppplVar5 == 0) {
          if ((pppplVar9 != pppplVar1) && ((long)pppplVar9 - (long)pppplVar6 != -1))
          goto LAB_10a23e614;
          break;
        }
        pppplVar9 = (long ****)((long)pppplVar9 + 1);
        ppplVar11 = (long ***)((long)pppplVar1 - (long)pppplVar9);
      } while ((long)uVar2 <= (long)ppplVar11);
    }
    pppplVar5 = &ppplStack_a8;
    FUN_10a0b4df8(&ppplStack_78,pppplVar5,param_3);
    pppplVar10 = param_3;
    if ((long)pplStack_b0 < 0) {
      __ZdlPv();
      pppplVar5 = (long ****)ppplStack_c0;
      pppplVar10 = param_3;
    }
    pplStack_b8 = pplStack_70;
    ppplStack_c0 = ppplStack_78;
    pplStack_b0 = (long **)CONCAT17(cStack_61,uStack_68);
  }
LAB_10a23e614:
  lVar12 = *(long *)(param_2 + 0x40);
  pplStack_c8 = pplStack_b8;
  ppplStack_d0 = ppplStack_c0;
  if (-1 < (long)pplStack_b0) {
    pplStack_c8 = (long **)((ulong)pplStack_b0 >> 0x38);
    ppplStack_d0 = (long ***)&ppplStack_c0;
  }
  func_0x00010a0fda30();
  pppplVar6 = pppplVar5;
  FUN_10a3ca004();
  FUN_10a3ca840();
  pppplVar7 = pppplVar6;
  FUN_10a10bbb4();
  if (pppplVar7 == (long ****)0x0) {
    FUN_10a0ee900(&ppplStack_78,&UNK_10f63cd1e,0x2c);
    FUN_10a10bcb0(&ppplStack_78);
  }
  else if (*(int *)(pppplVar7 + 4) < *(int *)(*(long *)(lVar12 + 0x100) + 0x288)) {
    FUN_10a0ee900(&ppplStack_78,&UNK_10f63cd4b,0x32);
    if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
      if (-1 < cStack_61) {
        ppplStack_78 = (long ***)&ppplStack_78;
      }
      func_0x00010ae06f08(1,8,&UNK_10f63cd7e,&UNK_10f648bfe,0xbf,"%s",in_x6,in_x7,ppplStack_78);
    }
    func_0x0001098998d4(auStack_90,&ppplStack_d0);
    FUN_10a10be38(&ppplStack_78,auStack_90,pppplVar5,pppplVar10,*(undefined4 *)(pppplVar7 + 4));
  }
  else {
    lVar8 = lVar12;
    (*(code *)pppplVar7[5])(lVar12,pppplVar5,pppplVar10);
    if ((lVar8 != 0) && (___dynamic_cast(), lVar8 != 0)) {
      FUN_10a570894(pppplVar6,lVar12,ppplStack_d0,pplStack_c8);
      FUN_10a10c7a8(param_1,lVar8);
      if ((long)pplStack_b0 < 0) {
        __ZdlPv(ppplStack_c0);
      }
      if ((char)bStack_91 < '\0') {
        __ZdlPv(ppplStack_a8);
      }
      return;
    }
    FUN_10a2719b0(&UNK_10f648c9d);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a23e840);
  (*pcVar4)();
}



/* Entry: 10a23e8b0; end: 10a23eecf;  */

/* WARNING: Removing unreachable block (ram,0x00010a23f2b4) */
/* WARNING: Removing unreachable block (ram,0x00010a23f2b8) */
/* WARNING: Removing unreachable block (ram,0x00010a23f2c0) */
/* WARNING: Removing unreachable block (ram,0x00010a23f2c8) */
/* WARNING: Removing unreachable block (ram,0x00010a23f2cc) */
/* WARNING: Removing unreachable block (ram,0x00010a23ec9c) */
/* WARNING: Removing unreachable block (ram,0x00010a23eca0) */
/* WARNING: Removing unreachable block (ram,0x00010a23eca8) */
/* WARNING: Removing unreachable block (ram,0x00010a23ecb0) */
/* WARNING: Removing unreachable block (ram,0x00010a23ecb4) */
/* WARNING: Removing unreachable block (ram,0x00010a23f960) */
/* WARNING: Removing unreachable block (ram,0x00010a23f964) */
/* WARNING: Removing unreachable block (ram,0x00010a23f96c) */
/* WARNING: Removing unreachable block (ram,0x00010a23f974) */
/* WARNING: Removing unreachable block (ram,0x00010a23f978) */

void FUN_10a23e8b0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  long *plVar10;
  undefined ****ppppuVar11;
  undefined ****ppppuVar12;
  undefined ***pppuVar13;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined **ppuVar14;
  undefined ***pppuVar15;
  undefined **ppuVar16;
  long lVar17;
  undefined8 uStack_380;
  long *plStack_378;
  long lStack_368;
  long lStack_360;
  undefined ***pppuStack_350;
  undefined ***pppuStack_348;
  undefined1 ***pppuStack_340;
  code *pcStack_338;
  undefined ***pppuStack_330;
  undefined ***pppuStack_328;
  undefined ***pppuStack_320;
  undefined ***pppuStack_318;
  undefined ***pppuStack_310;
  undefined ***pppuStack_308;
  undefined ***pppuStack_300;
  undefined ***pppuStack_2f8;
  code *pcStack_2f0;
  undefined **appuStack_2e8 [8];
  undefined ***pppuStack_2a8;
  undefined ***pppuStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  long lStack_268;
  undefined1 **ppuStack_230;
  code *pcStack_228;
  undefined ***pppuStack_220;
  undefined ***pppuStack_218;
  undefined ***pppuStack_210;
  undefined ***pppuStack_208;
  undefined ***pppuStack_200;
  undefined ***pppuStack_1f8;
  undefined ***pppuStack_1f0;
  undefined ***pppuStack_1e8;
  code *pcStack_1e0;
  undefined **appuStack_1d8 [8];
  undefined ***pppuStack_198;
  undefined ***pppuStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_158;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined ***pppuStack_110;
  undefined ***pppuStack_108;
  undefined ***pppuStack_100;
  undefined ***pppuStack_f8;
  undefined ***pppuStack_f0;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  undefined ***pppuStack_d8;
  code *pcStack_d0;
  undefined **appuStack_c8 [8];
  undefined ***pppuStack_88;
  undefined ***pppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = *(long *)(param_2 + 0x40);
  plVar5 = (long *)0x3e8;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110bbae38;
  pppuVar9 = (undefined ***)(plVar5 + 3);
  FUN_10a1dcc50(pppuVar9,lVar17,0,0);
  plVar10 = plVar5 + 0xb;
  pppuStack_110 = pppuVar9;
  pppuStack_108 = (undefined ***)plVar5;
  FUN_10a271af0(&pppuStack_110,plVar10,pppuVar9);
  if (lVar17 == 0) {
    pppuVar13 = (undefined ***)0x2c0;
    __Znwm();
    pppuVar15 = pppuStack_108;
    pppuVar13[1] = (undefined **)0x0;
    pppuVar13[2] = (undefined **)0x0;
    *pppuVar13 = &PTR_DAT_110b9fda0;
    pppuVar9 = pppuVar13 + 3;
    pppuStack_d8 = pppuStack_108;
    pppuStack_e0 = pppuStack_110;
    pppuStack_110 = (undefined ***)0x0;
    pppuStack_108 = (undefined ***)0x0;
    pppuVar8 = pppuVar13;
    func_0x00010a0fda30();
    FUN_10ab6a888(pppuVar9,0,&pppuStack_e0,pppuVar8,plVar10);
    if (pppuVar15 != (undefined ***)0x0) {
      plVar10 = (long *)(pppuVar15 + 1);
      do {
        lVar17 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar17 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar17 == 0) {
        (**(code **)((long)*pppuVar15 + 0x10))(pppuVar15);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar15);
      }
    }
    pppuStack_88 = pppuVar9;
    pppuStack_80 = pppuVar13;
    FUN_10a05b2a8(&pppuStack_88,pppuVar13 + 8,pppuVar9);
    FUN_10a05b04c(&pppuStack_f0,&pppuStack_88);
    pppuVar9 = pppuStack_80;
    if (pppuStack_80 != (undefined ***)0x0) {
      pppuVar15 = pppuStack_80 + 1;
      do {
        ppuVar14 = *pppuVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar15,0x10);
        if (bVar3) {
          *pppuVar15 = (undefined **)((long)ppuVar14 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppuVar14 == (undefined **)0x0) {
        (*(code *)(*pppuStack_80)[2])(pppuStack_80);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar9);
      }
    }
    if (pppuStack_e8 == (undefined ***)0x0) {
      pppuStack_d8 = (undefined ***)0x0;
    }
    else {
      pppuVar9 = pppuStack_e8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
        if (bVar3) {
          *pppuVar9 = (undefined **)((long)*pppuVar9 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      pppuStack_d8 = pppuStack_e8;
      if (pppuStack_e8 != (undefined ***)0x0) {
        pppuVar9 = pppuStack_e8 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
          if (bVar3) {
            *pppuVar9 = (undefined **)((long)*pppuVar9 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    uStack_70 = 0;
    uStack_78 = 0;
    pppuStack_88 = (undefined ***)&UNK_1053a6a3c;
    appuStack_c8[0] = &PTR_DAT_110bb6d90;
    pcStack_d0 = FUN_10a271ba0;
    pppuStack_e0 = pppuStack_f0;
    pppuStack_80 = (undefined ***)&PTR_DAT_110ae9180;
    FUN_10a044790(&pppuStack_88);
    (*(code *)*pppuStack_80)(&pppuStack_80);
    pppuVar9 = pppuStack_e8;
    if (pppuStack_e8 != (undefined ***)0x0) {
      pppuVar15 = pppuStack_e8 + 1;
      do {
        ppuVar14 = *pppuVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar15,0x10);
        if (bVar3) {
          *pppuVar15 = (undefined **)((long)ppuVar14 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppuVar14 == (undefined **)0x0) {
        (*(code *)(*pppuStack_e8)[2])(pppuStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar9);
      }
    }
    param_1[1] = pppuStack_d8;
    *param_1 = pppuStack_e0;
    if (pppuStack_d8 != (undefined ***)0x0) {
      pppuVar9 = pppuStack_d8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
        if (bVar3) {
          *pppuVar9 = (undefined **)((long)*pppuVar9 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a044790(&pcStack_d0);
    pppuVar9 = appuStack_c8;
    (*(code *)*appuStack_c8[0])();
    if (pppuStack_d8 != (undefined ***)0x0) {
      pppuVar15 = pppuStack_d8 + 1;
      do {
        ppuVar14 = *pppuVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar15,0x10);
        if (bVar3) {
          *pppuVar15 = (undefined **)((long)ppuVar14 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
        pppuVar8 = pppuStack_d8;
      } while (cVar2 != '\0');
      goto LAB_10a23ed84;
    }
  }
  else {
    pppuStack_100 = *(undefined ****)(lVar17 + 0x858);
    pppuStack_f8 = *(undefined ****)(lVar17 + 0x860);
    if (pppuStack_f8 != (undefined ***)0x0) {
      pppuVar9 = pppuStack_f8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
        if (bVar3) {
          *pppuVar9 = (undefined **)((long)*pppuVar9 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar6 = 0x2a8;
    __Znwm(0x2a8);
    pppuVar9 = pppuStack_108;
    pppuStack_d8 = pppuStack_108;
    pppuStack_e0 = pppuStack_110;
    pppuStack_110 = (undefined ***)0x0;
    pppuStack_108 = (undefined ***)0x0;
    uVar7 = uVar6;
    func_0x00010a0fda30();
    FUN_10ab6a888(uVar6,lVar17,&pppuStack_e0,uVar7,plVar10);
    if (pppuVar9 != (undefined ***)0x0) {
      plVar10 = (long *)(pppuVar9 + 1);
      do {
        lVar17 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar17 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar17 == 0) {
        (**(code **)((long)*pppuVar9 + 0x10))(pppuVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar9);
      }
    }
    pppuVar15 = pppuStack_f8;
    pppuVar9 = pppuStack_100;
    pppuStack_f0 = pppuStack_100;
    pppuStack_e8 = pppuStack_f8;
    if (pppuStack_f8 != (undefined ***)0x0) {
      pppuVar8 = pppuStack_f8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
        if (bVar3) {
          *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      pppuVar8 = pppuStack_f8 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
        if (bVar3) {
          *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
        if (bVar3) {
          *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuStack_f8);
    }
    pppuStack_e0 = pppuVar9;
    pppuStack_d8 = pppuVar15;
    FUN_10a05b208(&pppuStack_88,uVar6,&pppuStack_e0);
    FUN_10a05b04c(param_1);
    pppuVar9 = pppuStack_80;
    if (pppuStack_80 != (undefined ***)0x0) {
      pppuVar15 = pppuStack_80 + 1;
      do {
        ppuVar14 = *pppuVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar15,0x10);
        if (bVar3) {
          *pppuVar15 = (undefined **)((long)ppuVar14 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppuVar14 == (undefined **)0x0) {
        (*(code *)(*pppuStack_80)[2])(pppuStack_80);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar9);
      }
    }
    if (pppuStack_d8 != (undefined ***)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    pppuVar9 = pppuStack_e8;
    if (pppuStack_e8 != (undefined ***)0x0) {
      pppuVar15 = pppuStack_e8 + 1;
      do {
        ppuVar14 = *pppuVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar15,0x10);
        if (bVar3) {
          *pppuVar15 = (undefined **)((long)ppuVar14 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppuVar14 == (undefined **)0x0) {
        (*(code *)(*pppuStack_e8)[2])(pppuStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar9);
      }
    }
    pppuVar9 = pppuStack_100;
    if ((pppuStack_100 != (undefined ***)0x0) &&
       (pppuVar15 = (undefined ***)*param_1, pppuVar15 != (undefined ***)0x0)) {
      pppuStack_80 = (undefined ***)param_1[1];
      if (pppuStack_80 != (undefined ***)0x0) {
        pppuVar8 = pppuStack_80 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
          if (bVar3) {
            *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      pppuStack_88 = pppuVar15;
      FUN_10aa88c30(pppuStack_100,&pppuStack_88);
      pppuVar15 = pppuStack_80;
      if (pppuStack_80 != (undefined ***)0x0) {
        pppuVar8 = pppuStack_80 + 1;
        do {
          ppuVar14 = *pppuVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
          if (bVar3) {
            *pppuVar8 = (undefined **)((long)ppuVar14 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (ppuVar14 == (undefined **)0x0) {
          (*(code *)(*pppuStack_80)[2])(pppuStack_80);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar9 = pppuVar15;
        }
      }
    }
    if (pppuStack_f8 != (undefined ***)0x0) {
      pppuVar15 = pppuStack_f8 + 1;
      do {
        ppuVar14 = *pppuVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar15,0x10);
        if (bVar3) {
          *pppuVar15 = (undefined **)((long)ppuVar14 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
        pppuVar8 = pppuStack_f8;
      } while (cVar2 != '\0');
LAB_10a23ed84:
      if (ppuVar14 == (undefined **)0x0) {
        (*(code *)(*pppuVar8)[2])(pppuVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppuVar9 = pppuVar8;
      }
    }
  }
  pppuVar15 = pppuStack_108;
  if (pppuStack_108 != (undefined ***)0x0) {
    pppuVar8 = pppuStack_108 + 1;
    do {
      ppuVar14 = *pppuVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
      if (bVar3) {
        *pppuVar8 = (undefined **)((long)ppuVar14 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppuVar14 == (undefined **)0x0) {
      (*(code *)(*pppuStack_108)[2])(pppuStack_108);
      pppuVar9 = pppuVar15;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a0536d4(&pppuStack_88);
  func_0x00010a05248c(pppuVar15);
  FUN_10a054c5c(&pppuStack_100);
  func_0x00010a216360(&pppuStack_110);
  __Unwind_Resume();
  puStack_120 = &stack0xfffffffffffffff0;
  pcStack_118 = FUN_10a23eed0;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar14 = pppuVar9[8];
  plVar5 = (long *)0x340;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_DAT_110bbae88;
  pppuVar9 = (undefined ***)(plVar5 + 3);
  FUN_10ac25f14(pppuVar9,ppuVar14);
  plVar10 = plVar5 + 0xb;
  pppuStack_220 = pppuVar9;
  pppuStack_218 = (undefined ***)plVar5;
  FUN_10a271c18(&pppuStack_220,plVar10,pppuVar9);
  if (ppuVar14 == (undefined **)0x0) {
    pppuVar13 = (undefined ***)0x2c0;
    __Znwm();
    pppuVar15 = pppuStack_218;
    pppuVar13[1] = (undefined **)0x0;
    pppuVar13[2] = (undefined **)0x0;
    *pppuVar13 = &PTR_DAT_110b9fda0;
    pppuVar9 = pppuVar13 + 3;
    pppuStack_1e8 = pppuStack_218;
    pppuStack_1f0 = pppuStack_220;
    pppuStack_220 = (undefined ***)0x0;
    pppuStack_218 = (undefined ***)0x0;
    pppuVar8 = pppuVar13;
    func_0x00010a0fda30();
    FUN_10ab6a888(pppuVar9,0,&pppuStack_1f0,pppuVar8,plVar10);
    if (pppuVar15 != (undefined ***)0x0) {
      plVar10 = (long *)(pppuVar15 + 1);
      do {
        lVar17 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar17 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar17 == 0) {
        (**(code **)((long)*pppuVar15 + 0x10))(pppuVar15);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar15);
      }
    }
    pppuStack_198 = pppuVar9;
    pppuStack_190 = pppuVar13;
    FUN_10a05b2a8(&pppuStack_198,pppuVar13 + 8,pppuVar9);
    FUN_10a05b04c(&pppuStack_200,&pppuStack_198);
    pppuVar9 = pppuStack_190;
    if (pppuStack_190 != (undefined ***)0x0) {
      pppuVar15 = pppuStack_190 + 1;
      do {
        ppuVar14 = *pppuVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar15,0x10);
        if (bVar3) {
          *pppuVar15 = (undefined **)((long)ppuVar14 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppuVar14 == (undefined **)0x0) {
        (*(code *)(*pppuStack_190)[2])(pppuStack_190);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar9);
      }
    }
    if (pppuStack_1f8 == (undefined ***)0x0) {
      pppuStack_1e8 = (undefined ***)0x0;
    }
    else {
      pppuVar9 = pppuStack_1f8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
        if (bVar3) {
          *pppuVar9 = (undefined **)((long)*pppuVar9 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      pppuStack_1e8 = pppuStack_1f8;
      if (pppuStack_1f8 != (undefined ***)0x0) {
        pppuVar9 = pppuStack_1f8 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
          if (bVar3) {
            *pppuVar9 = (undefined **)((long)*pppuVar9 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    uStack_180 = 0;
    uStack_188 = 0;
    pppuStack_198 = (undefined ***)&UNK_1053a6a3c;
    appuStack_1d8[0] = &PTR_DAT_110bb6da8;
    pcStack_1e0 = FUN_10a271d20;
    pppuStack_1f0 = pppuStack_200;
    pppuStack_190 = (undefined ***)&PTR_DAT_110ae9180;
    FUN_10a044790(&pppuStack_198);
    (*(code *)*pppuStack_190)(&pppuStack_190);
    pppuVar9 = pppuStack_1f8;
    if (pppuStack_1f8 != (undefined ***)0x0) {
      pppuVar15 = pppuStack_1f8 + 1;
      do {
        ppuVar14 = *pppuVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar15,0x10);
        if (bVar3) {
          *pppuVar15 = (undefined **)((long)ppuVar14 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppuVar14 == (undefined **)0x0) {
        (*(code *)(*pppuStack_1f8)[2])(pppuStack_1f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar9);
      }
    }
    extraout_x8[1] = pppuStack_1e8;
    *extraout_x8 = pppuStack_1f0;
    if (pppuStack_1e8 != (undefined ***)0x0) {
      pppuVar9 = pppuStack_1e8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
        if (bVar3) {
          *pppuVar9 = (undefined **)((long)*pppuVar9 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a044790(&pcStack_1e0);
    pppuVar9 = appuStack_1d8;
    (*(code *)*appuStack_1d8[0])();
    if (pppuStack_1e8 != (undefined ***)0x0) {
      pppuVar15 = pppuStack_1e8 + 1;
      do {
        ppuVar14 = *pppuVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar15,0x10);
        if (bVar3) {
          *pppuVar15 = (undefined **)((long)ppuVar14 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
        pppuVar8 = pppuStack_1e8;
      } while (cVar2 != '\0');
      goto LAB_10a23f39c;
    }
  }
  else {
    pppuStack_210 = (undefined ***)ppuVar14[0x10b];
    pppuStack_208 = (undefined ***)ppuVar14[0x10c];
    if (pppuStack_208 != (undefined ***)0x0) {
      pppuVar9 = pppuStack_208 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
        if (bVar3) {
          *pppuVar9 = (undefined **)((long)*pppuVar9 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar6 = 0x2a8;
    __Znwm(0x2a8);
    pppuVar9 = pppuStack_218;
    pppuStack_1e8 = pppuStack_218;
    pppuStack_1f0 = pppuStack_220;
    pppuStack_220 = (undefined ***)0x0;
    pppuStack_218 = (undefined ***)0x0;
    uVar7 = uVar6;
    func_0x00010a0fda30();
    FUN_10ab6a888(uVar6,ppuVar14,&pppuStack_1f0,uVar7,plVar10);
    if (pppuVar9 != (undefined ***)0x0) {
      plVar10 = (long *)(pppuVar9 + 1);
      do {
        lVar17 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar17 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar17 == 0) {
        (**(code **)((long)*pppuVar9 + 0x10))(pppuVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar9);
      }
    }
    pppuVar15 = pppuStack_208;
    pppuVar9 = pppuStack_210;
    pppuStack_200 = pppuStack_210;
    pppuStack_1f8 = pppuStack_208;
    if (pppuStack_208 != (undefined ***)0x0) {
      pppuVar8 = pppuStack_208 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
        if (bVar3) {
          *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      pppuVar8 = pppuStack_208 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
        if (bVar3) {
          *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
        if (bVar3) {
          *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuStack_208);
    }
    pppuStack_1f0 = pppuVar9;
    pppuStack_1e8 = pppuVar15;
    FUN_10a05b208(&pppuStack_198,uVar6,&pppuStack_1f0);
    FUN_10a05b04c(extraout_x8);
    pppuVar9 = pppuStack_190;
    if (pppuStack_190 != (undefined ***)0x0) {
      pppuVar15 = pppuStack_190 + 1;
      do {
        ppuVar14 = *pppuVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar15,0x10);
        if (bVar3) {
          *pppuVar15 = (undefined **)((long)ppuVar14 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppuVar14 == (undefined **)0x0) {
        (*(code *)(*pppuStack_190)[2])(pppuStack_190);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar9);
      }
    }
    if (pppuStack_1e8 != (undefined ***)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    pppuVar9 = pppuStack_1f8;
    if (pppuStack_1f8 != (undefined ***)0x0) {
      pppuVar15 = pppuStack_1f8 + 1;
      do {
        ppuVar14 = *pppuVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar15,0x10);
        if (bVar3) {
          *pppuVar15 = (undefined **)((long)ppuVar14 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppuVar14 == (undefined **)0x0) {
        (*(code *)(*pppuStack_1f8)[2])(pppuStack_1f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar9);
      }
    }
    pppuVar9 = pppuStack_210;
    if ((pppuStack_210 != (undefined ***)0x0) &&
       (pppuVar15 = (undefined ***)*extraout_x8, pppuVar15 != (undefined ***)0x0)) {
      pppuStack_190 = (undefined ***)extraout_x8[1];
      if (pppuStack_190 != (undefined ***)0x0) {
        pppuVar8 = pppuStack_190 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
          if (bVar3) {
            *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      pppuStack_198 = pppuVar15;
      FUN_10aa88c30(pppuStack_210,&pppuStack_198);
      pppuVar15 = pppuStack_190;
      if (pppuStack_190 != (undefined ***)0x0) {
        pppuVar8 = pppuStack_190 + 1;
        do {
          ppuVar14 = *pppuVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
          if (bVar3) {
            *pppuVar8 = (undefined **)((long)ppuVar14 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (ppuVar14 == (undefined **)0x0) {
          (*(code *)(*pppuStack_190)[2])(pppuStack_190);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar9 = pppuVar15;
        }
      }
    }
    if (pppuStack_208 != (undefined ***)0x0) {
      pppuVar15 = pppuStack_208 + 1;
      do {
        ppuVar14 = *pppuVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar15,0x10);
        if (bVar3) {
          *pppuVar15 = (undefined **)((long)ppuVar14 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
        pppuVar8 = pppuStack_208;
      } while (cVar2 != '\0');
LAB_10a23f39c:
      if (ppuVar14 == (undefined **)0x0) {
        (*(code *)(*pppuVar8)[2])(pppuVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppuVar9 = pppuVar8;
      }
    }
  }
  pppuVar15 = pppuStack_218;
  if (pppuStack_218 != (undefined ***)0x0) {
    pppuVar8 = pppuStack_218 + 1;
    do {
      ppuVar14 = *pppuVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
      if (bVar3) {
        *pppuVar8 = (undefined **)((long)ppuVar14 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppuVar14 == (undefined **)0x0) {
      (*(code *)(*pppuStack_218)[2])(pppuStack_218);
      pppuVar9 = pppuVar15;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a0536d4(&pppuStack_198);
  func_0x00010a05248c(pppuVar15);
  FUN_10a054c5c(&pppuStack_210);
  func_0x00010a271cc8(&pppuStack_220);
  __Unwind_Resume();
  ppuStack_230 = &puStack_120;
  pcStack_228 = FUN_10a23f4ec;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar16 = pppuVar9[8];
  plVar10 = (long *)0x358;
  __Znwm();
  plVar5 = plVar10 + 1;
  *plVar5 = 0;
  plVar10[2] = 0;
  pppuVar9 = (undefined ***)(plVar10 + 3);
  *plVar10 = (long)&PTR_DAT_110bb6dd0;
  ppuVar14 = ppuVar16;
  FUN_10ac8e0d8(pppuVar9,ppuVar16);
  lVar17 = plVar10[0xc];
  pppuStack_330 = pppuVar9;
  pppuStack_328 = (undefined ***)plVar10;
  if (lVar17 == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = plVar10 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar10[0xb] = (long)pppuVar9;
    plVar10[0xc] = (long)plVar10;
LAB_10a23f5bc:
    do {
      lVar17 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar17 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar17 != 0) goto LAB_10a23f5d0;
    (**(code **)(*plVar10 + 0x10))(plVar10);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    if (ppuVar16 == (undefined **)0x0) goto LAB_10a23f7f4;
LAB_10a23f5d4:
    pppuStack_320 = (undefined ***)ppuVar16[0x10b];
    pppuStack_318 = (undefined ***)ppuVar16[0x10c];
    if (pppuStack_318 != (undefined ***)0x0) {
      pppuVar9 = pppuStack_318 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
        if (bVar3) {
          *pppuVar9 = (undefined **)((long)*pppuVar9 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppuVar11 = (undefined ****)0x2a8;
    __Znwm();
    pppuVar9 = pppuStack_328;
    pppuStack_2f8 = pppuStack_328;
    pppuStack_300 = pppuStack_330;
    pppuStack_330 = (undefined ***)0x0;
    pppuStack_328 = (undefined ***)0x0;
    ppppuVar12 = ppppuVar11;
    func_0x00010a0fda30();
    FUN_10ab6a888(ppppuVar11,ppuVar16,&pppuStack_300,ppppuVar12,ppuVar14);
    if (pppuVar9 != (undefined ***)0x0) {
      plVar10 = (long *)(pppuVar9 + 1);
      do {
        lVar17 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar17 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar17 == 0) {
        (**(code **)((long)*pppuVar9 + 0x10))(pppuVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar9);
      }
    }
    pppuVar15 = pppuStack_318;
    pppuVar9 = pppuStack_320;
    pppuStack_310 = pppuStack_320;
    pppuStack_308 = pppuStack_318;
    if (pppuStack_318 != (undefined ***)0x0) {
      pppuVar8 = pppuStack_318 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
        if (bVar3) {
          *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      pppuVar8 = pppuStack_318 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
        if (bVar3) {
          *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
        if (bVar3) {
          *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuStack_318);
    }
    pppuStack_300 = pppuVar9;
    pppuStack_2f8 = pppuVar15;
    FUN_10a05b208(&pppuStack_2a8,ppppuVar11,&pppuStack_300);
    FUN_10a05b04c(extraout_x8_00);
    pppuVar9 = pppuStack_2a0;
    if (pppuStack_2a0 != (undefined ***)0x0) {
      pppuVar15 = pppuStack_2a0 + 1;
      do {
        ppuVar14 = *pppuVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar15,0x10);
        if (bVar3) {
          *pppuVar15 = (undefined **)((long)ppuVar14 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppuVar14 == (undefined **)0x0) {
        (*(code *)(*pppuStack_2a0)[2])(pppuStack_2a0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar9);
      }
    }
    if (pppuStack_2f8 != (undefined ***)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    pppuVar9 = pppuStack_308;
    if (pppuStack_308 != (undefined ***)0x0) {
      pppuVar15 = pppuStack_308 + 1;
      do {
        ppuVar14 = *pppuVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar15,0x10);
        if (bVar3) {
          *pppuVar15 = (undefined **)((long)ppuVar14 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppuVar14 == (undefined **)0x0) {
        (*(code *)(*pppuStack_308)[2])(pppuStack_308);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar9);
      }
    }
    pppuVar9 = pppuStack_320;
    if ((pppuStack_320 != (undefined ***)0x0) &&
       (pppuVar15 = (undefined ***)*extraout_x8_00, pppuVar15 != (undefined ***)0x0)) {
      pppuStack_2a0 = (undefined ***)extraout_x8_00[1];
      if (pppuStack_2a0 != (undefined ***)0x0) {
        pppuVar8 = pppuStack_2a0 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
          if (bVar3) {
            *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      ppppuVar11 = &pppuStack_2a8;
      pppuStack_2a8 = pppuVar15;
      FUN_10aa88c30();
      pppuVar15 = pppuStack_2a0;
      if (pppuStack_2a0 != (undefined ***)0x0) {
        pppuVar8 = pppuStack_2a0 + 1;
        do {
          ppuVar14 = *pppuVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
          if (bVar3) {
            *pppuVar8 = (undefined **)((long)ppuVar14 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (ppuVar14 == (undefined **)0x0) {
          (*(code *)(*pppuStack_2a0)[2])(pppuStack_2a0);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar9 = pppuVar15;
        }
      }
    }
    if (pppuStack_318 == (undefined ***)0x0) goto LAB_10a23fa64;
    pppuVar15 = pppuStack_318 + 1;
    do {
      ppuVar14 = *pppuVar15;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar15,0x10);
      if (bVar3) {
        *pppuVar15 = (undefined **)((long)ppuVar14 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      pppuVar8 = pppuStack_318;
    } while (cVar2 != '\0');
  }
  else {
    if (*(long *)(lVar17 + 8) == -1) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar10 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar10[0xb] = (long)pppuVar9;
      plVar10[0xc] = (long)plVar10;
      __ZNSt3__119__shared_weak_count14__release_weakEv(lVar17);
      goto LAB_10a23f5bc;
    }
LAB_10a23f5d0:
    if (ppuVar16 != (undefined **)0x0) goto LAB_10a23f5d4;
LAB_10a23f7f4:
    pppuVar13 = (undefined ***)0x2c0;
    __Znwm();
    pppuVar15 = pppuStack_328;
    pppuVar13[1] = (undefined **)0x0;
    pppuVar13[2] = (undefined **)0x0;
    *pppuVar13 = &PTR_DAT_110b9fda0;
    pppuVar9 = pppuVar13 + 3;
    pppuStack_2f8 = pppuStack_328;
    pppuStack_300 = pppuStack_330;
    pppuStack_330 = (undefined ***)0x0;
    pppuStack_328 = (undefined ***)0x0;
    pppuVar8 = pppuVar13;
    func_0x00010a0fda30();
    FUN_10ab6a888(pppuVar9,0,&pppuStack_300,pppuVar8,ppuVar14);
    if (pppuVar15 != (undefined ***)0x0) {
      plVar10 = (long *)(pppuVar15 + 1);
      do {
        lVar17 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar17 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar17 == 0) {
        (**(code **)((long)*pppuVar15 + 0x10))(pppuVar15);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar15);
      }
    }
    ppppuVar11 = (undefined ****)(pppuVar13 + 8);
    pppuStack_2a8 = pppuVar9;
    pppuStack_2a0 = pppuVar13;
    FUN_10a05b2a8(&pppuStack_2a8,ppppuVar11,pppuVar9);
    FUN_10a05b04c(&pppuStack_310,&pppuStack_2a8);
    pppuVar9 = pppuStack_2a0;
    if (pppuStack_2a0 != (undefined ***)0x0) {
      pppuVar15 = pppuStack_2a0 + 1;
      do {
        ppuVar14 = *pppuVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar15,0x10);
        if (bVar3) {
          *pppuVar15 = (undefined **)((long)ppuVar14 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppuVar14 == (undefined **)0x0) {
        (*(code *)(*pppuStack_2a0)[2])(pppuStack_2a0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar9);
      }
    }
    if (pppuStack_308 == (undefined ***)0x0) {
      pppuStack_2f8 = (undefined ***)0x0;
    }
    else {
      pppuVar9 = pppuStack_308 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
        if (bVar3) {
          *pppuVar9 = (undefined **)((long)*pppuVar9 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      pppuStack_2f8 = pppuStack_308;
      if (pppuStack_308 != (undefined ***)0x0) {
        pppuVar9 = pppuStack_308 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
          if (bVar3) {
            *pppuVar9 = (undefined **)((long)*pppuVar9 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    uStack_290 = 0;
    uStack_298 = 0;
    pppuStack_2a8 = (undefined ***)&UNK_1053a6a3c;
    appuStack_2e8[0] = &PTR_DAT_110bb6e10;
    pcStack_2f0 = FUN_10a271df0;
    pppuStack_300 = pppuStack_310;
    pppuStack_2a0 = (undefined ***)&PTR_DAT_110ae9180;
    FUN_10a044790(&pppuStack_2a8);
    (*(code *)*pppuStack_2a0)(&pppuStack_2a0);
    pppuVar9 = pppuStack_308;
    if (pppuStack_308 != (undefined ***)0x0) {
      pppuVar15 = pppuStack_308 + 1;
      do {
        ppuVar14 = *pppuVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar15,0x10);
        if (bVar3) {
          *pppuVar15 = (undefined **)((long)ppuVar14 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppuVar14 == (undefined **)0x0) {
        (*(code *)(*pppuStack_308)[2])(pppuStack_308);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar9);
      }
    }
    extraout_x8_00[1] = pppuStack_2f8;
    *extraout_x8_00 = pppuStack_300;
    if (pppuStack_2f8 != (undefined ***)0x0) {
      pppuVar9 = pppuStack_2f8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
        if (bVar3) {
          *pppuVar9 = (undefined **)((long)*pppuVar9 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a044790(&pcStack_2f0);
    pppuVar9 = appuStack_2e8;
    (*(code *)*appuStack_2e8[0])();
    if (pppuStack_2f8 == (undefined ***)0x0) goto LAB_10a23fa64;
    pppuVar15 = pppuStack_2f8 + 1;
    do {
      ppuVar14 = *pppuVar15;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar15,0x10);
      if (bVar3) {
        *pppuVar15 = (undefined **)((long)ppuVar14 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      pppuVar8 = pppuStack_2f8;
    } while (cVar2 != '\0');
  }
  if (ppuVar14 == (undefined **)0x0) {
    (*(code *)(*pppuVar8)[2])(pppuVar8);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    pppuVar9 = pppuVar8;
  }
LAB_10a23fa64:
  pppuVar15 = pppuStack_328;
  if (pppuStack_328 != (undefined ***)0x0) {
    pppuVar8 = pppuStack_328 + 1;
    do {
      ppuVar14 = *pppuVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
      if (bVar3) {
        *pppuVar8 = (undefined **)((long)ppuVar14 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppuVar14 == (undefined **)0x0) {
      (*(code *)(*pppuStack_328)[2])(pppuStack_328);
      pppuVar9 = pppuVar15;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a0536d4(&pppuStack_2a8);
  func_0x00010a05248c(pppuVar15);
  FUN_10a054c5c(&pppuStack_320);
  FUN_10a271d98(&pppuStack_330);
  pppuVar8 = pppuVar9;
  __Unwind_Resume();
  pppuStack_348 = pppuVar15;
  pcStack_338 = FUN_10a23fb90;
  pppuStack_350 = pppuVar9;
  pppuStack_340 = &ppuStack_230;
  FUN_10a3dea88(&lStack_368,pppuVar8[8]);
  if ((-1 < (int)ppppuVar11) &&
     (((ulong)ppppuVar11 & 0xffffffff) < (ulong)(lStack_360 - lStack_368 >> 3))) {
    func_0x00010a0d77bc(&uStack_380,
                        *(undefined8 *)(lStack_368 + ((ulong)ppppuVar11 & 0xffffffff) * 8));
    extraout_x8_01[1] = plStack_378;
    *extraout_x8_01 = uStack_380;
    if (plStack_378 != (long *)0x0) {
      plVar10 = plStack_378 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = *plVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar10 = plStack_378 + 1;
      do {
        lVar17 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar17 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plStack_378 + 0x10))(plStack_378);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_378);
      }
    }
    if (lStack_368 != 0) {
      lStack_360 = lStack_368;
      __ZdlPv();
    }
    return;
  }
  FUN_10a00946c(&UNK_10f646bd2);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a23fc5c);
  (*pcVar4)();
}



/* Entry: 10a23eed0; end: 10a23f4eb;  */

/* WARNING: Removing unreachable block (ram,0x00010a23f2b4) */
/* WARNING: Removing unreachable block (ram,0x00010a23f2b8) */
/* WARNING: Removing unreachable block (ram,0x00010a23f2c0) */
/* WARNING: Removing unreachable block (ram,0x00010a23f2c8) */
/* WARNING: Removing unreachable block (ram,0x00010a23f2cc) */
/* WARNING: Removing unreachable block (ram,0x00010a23f960) */
/* WARNING: Removing unreachable block (ram,0x00010a23f964) */
/* WARNING: Removing unreachable block (ram,0x00010a23f96c) */
/* WARNING: Removing unreachable block (ram,0x00010a23f974) */
/* WARNING: Removing unreachable block (ram,0x00010a23f978) */

void FUN_10a23eed0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  long *plVar10;
  undefined ****ppppuVar11;
  undefined ****ppppuVar12;
  undefined ***pppuVar13;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined **ppuVar14;
  undefined ***pppuVar15;
  undefined **ppuVar16;
  long lVar17;
  undefined8 uStack_270;
  long *plStack_268;
  long lStack_258;
  long lStack_250;
  undefined ***pppuStack_240;
  undefined ***pppuStack_238;
  undefined1 **ppuStack_230;
  code *pcStack_228;
  undefined ***pppuStack_220;
  undefined ***pppuStack_218;
  undefined ***pppuStack_210;
  undefined ***pppuStack_208;
  undefined ***pppuStack_200;
  undefined ***pppuStack_1f8;
  undefined ***pppuStack_1f0;
  undefined ***pppuStack_1e8;
  code *pcStack_1e0;
  undefined **appuStack_1d8 [8];
  undefined ***pppuStack_198;
  undefined ***pppuStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_158;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined ***pppuStack_110;
  undefined ***pppuStack_108;
  undefined ***pppuStack_100;
  undefined ***pppuStack_f8;
  undefined ***pppuStack_f0;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  undefined ***pppuStack_d8;
  code *pcStack_d0;
  undefined **appuStack_c8 [8];
  undefined ***pppuStack_88;
  undefined ***pppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = *(long *)(param_2 + 0x40);
  plVar5 = (long *)0x340;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_DAT_110bbae88;
  pppuVar9 = (undefined ***)(plVar5 + 3);
  FUN_10ac25f14(pppuVar9,lVar17);
  plVar10 = plVar5 + 0xb;
  pppuStack_110 = pppuVar9;
  pppuStack_108 = (undefined ***)plVar5;
  FUN_10a271c18(&pppuStack_110,plVar10,pppuVar9);
  if (lVar17 == 0) {
    pppuVar13 = (undefined ***)0x2c0;
    __Znwm();
    pppuVar15 = pppuStack_108;
    pppuVar13[1] = (undefined **)0x0;
    pppuVar13[2] = (undefined **)0x0;
    *pppuVar13 = &PTR_DAT_110b9fda0;
    pppuVar9 = pppuVar13 + 3;
    pppuStack_d8 = pppuStack_108;
    pppuStack_e0 = pppuStack_110;
    pppuStack_110 = (undefined ***)0x0;
    pppuStack_108 = (undefined ***)0x0;
    pppuVar8 = pppuVar13;
    func_0x00010a0fda30();
    FUN_10ab6a888(pppuVar9,0,&pppuStack_e0,pppuVar8,plVar10);
    if (pppuVar15 != (undefined ***)0x0) {
      plVar10 = (long *)(pppuVar15 + 1);
      do {
        lVar17 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar17 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar17 == 0) {
        (**(code **)((long)*pppuVar15 + 0x10))(pppuVar15);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar15);
      }
    }
    pppuStack_88 = pppuVar9;
    pppuStack_80 = pppuVar13;
    FUN_10a05b2a8(&pppuStack_88,pppuVar13 + 8,pppuVar9);
    FUN_10a05b04c(&pppuStack_f0,&pppuStack_88);
    pppuVar9 = pppuStack_80;
    if (pppuStack_80 != (undefined ***)0x0) {
      pppuVar15 = pppuStack_80 + 1;
      do {
        ppuVar14 = *pppuVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar15,0x10);
        if (bVar3) {
          *pppuVar15 = (undefined **)((long)ppuVar14 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppuVar14 == (undefined **)0x0) {
        (*(code *)(*pppuStack_80)[2])(pppuStack_80);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar9);
      }
    }
    if (pppuStack_e8 == (undefined ***)0x0) {
      pppuStack_d8 = (undefined ***)0x0;
    }
    else {
      pppuVar9 = pppuStack_e8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
        if (bVar3) {
          *pppuVar9 = (undefined **)((long)*pppuVar9 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      pppuStack_d8 = pppuStack_e8;
      if (pppuStack_e8 != (undefined ***)0x0) {
        pppuVar9 = pppuStack_e8 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
          if (bVar3) {
            *pppuVar9 = (undefined **)((long)*pppuVar9 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    uStack_70 = 0;
    uStack_78 = 0;
    pppuStack_88 = (undefined ***)&UNK_1053a6a3c;
    appuStack_c8[0] = &PTR_DAT_110bb6da8;
    pcStack_d0 = FUN_10a271d20;
    pppuStack_e0 = pppuStack_f0;
    pppuStack_80 = (undefined ***)&PTR_DAT_110ae9180;
    FUN_10a044790(&pppuStack_88);
    (*(code *)*pppuStack_80)(&pppuStack_80);
    pppuVar9 = pppuStack_e8;
    if (pppuStack_e8 != (undefined ***)0x0) {
      pppuVar15 = pppuStack_e8 + 1;
      do {
        ppuVar14 = *pppuVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar15,0x10);
        if (bVar3) {
          *pppuVar15 = (undefined **)((long)ppuVar14 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppuVar14 == (undefined **)0x0) {
        (*(code *)(*pppuStack_e8)[2])(pppuStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar9);
      }
    }
    param_1[1] = pppuStack_d8;
    *param_1 = pppuStack_e0;
    if (pppuStack_d8 != (undefined ***)0x0) {
      pppuVar9 = pppuStack_d8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
        if (bVar3) {
          *pppuVar9 = (undefined **)((long)*pppuVar9 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a044790(&pcStack_d0);
    pppuVar9 = appuStack_c8;
    (*(code *)*appuStack_c8[0])();
    if (pppuStack_d8 != (undefined ***)0x0) {
      pppuVar15 = pppuStack_d8 + 1;
      do {
        ppuVar14 = *pppuVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar15,0x10);
        if (bVar3) {
          *pppuVar15 = (undefined **)((long)ppuVar14 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
        pppuVar8 = pppuStack_d8;
      } while (cVar2 != '\0');
      goto LAB_10a23f39c;
    }
  }
  else {
    pppuStack_100 = *(undefined ****)(lVar17 + 0x858);
    pppuStack_f8 = *(undefined ****)(lVar17 + 0x860);
    if (pppuStack_f8 != (undefined ***)0x0) {
      pppuVar9 = pppuStack_f8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
        if (bVar3) {
          *pppuVar9 = (undefined **)((long)*pppuVar9 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar6 = 0x2a8;
    __Znwm(0x2a8);
    pppuVar9 = pppuStack_108;
    pppuStack_d8 = pppuStack_108;
    pppuStack_e0 = pppuStack_110;
    pppuStack_110 = (undefined ***)0x0;
    pppuStack_108 = (undefined ***)0x0;
    uVar7 = uVar6;
    func_0x00010a0fda30();
    FUN_10ab6a888(uVar6,lVar17,&pppuStack_e0,uVar7,plVar10);
    if (pppuVar9 != (undefined ***)0x0) {
      plVar10 = (long *)(pppuVar9 + 1);
      do {
        lVar17 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar17 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar17 == 0) {
        (**(code **)((long)*pppuVar9 + 0x10))(pppuVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar9);
      }
    }
    pppuVar15 = pppuStack_f8;
    pppuVar9 = pppuStack_100;
    pppuStack_f0 = pppuStack_100;
    pppuStack_e8 = pppuStack_f8;
    if (pppuStack_f8 != (undefined ***)0x0) {
      pppuVar8 = pppuStack_f8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
        if (bVar3) {
          *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      pppuVar8 = pppuStack_f8 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
        if (bVar3) {
          *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
        if (bVar3) {
          *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuStack_f8);
    }
    pppuStack_e0 = pppuVar9;
    pppuStack_d8 = pppuVar15;
    FUN_10a05b208(&pppuStack_88,uVar6,&pppuStack_e0);
    FUN_10a05b04c(param_1);
    pppuVar9 = pppuStack_80;
    if (pppuStack_80 != (undefined ***)0x0) {
      pppuVar15 = pppuStack_80 + 1;
      do {
        ppuVar14 = *pppuVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar15,0x10);
        if (bVar3) {
          *pppuVar15 = (undefined **)((long)ppuVar14 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppuVar14 == (undefined **)0x0) {
        (*(code *)(*pppuStack_80)[2])(pppuStack_80);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar9);
      }
    }
    if (pppuStack_d8 != (undefined ***)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    pppuVar9 = pppuStack_e8;
    if (pppuStack_e8 != (undefined ***)0x0) {
      pppuVar15 = pppuStack_e8 + 1;
      do {
        ppuVar14 = *pppuVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar15,0x10);
        if (bVar3) {
          *pppuVar15 = (undefined **)((long)ppuVar14 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppuVar14 == (undefined **)0x0) {
        (*(code *)(*pppuStack_e8)[2])(pppuStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar9);
      }
    }
    pppuVar9 = pppuStack_100;
    if ((pppuStack_100 != (undefined ***)0x0) &&
       (pppuVar15 = (undefined ***)*param_1, pppuVar15 != (undefined ***)0x0)) {
      pppuStack_80 = (undefined ***)param_1[1];
      if (pppuStack_80 != (undefined ***)0x0) {
        pppuVar8 = pppuStack_80 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
          if (bVar3) {
            *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      pppuStack_88 = pppuVar15;
      FUN_10aa88c30(pppuStack_100,&pppuStack_88);
      pppuVar15 = pppuStack_80;
      if (pppuStack_80 != (undefined ***)0x0) {
        pppuVar8 = pppuStack_80 + 1;
        do {
          ppuVar14 = *pppuVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
          if (bVar3) {
            *pppuVar8 = (undefined **)((long)ppuVar14 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (ppuVar14 == (undefined **)0x0) {
          (*(code *)(*pppuStack_80)[2])(pppuStack_80);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar9 = pppuVar15;
        }
      }
    }
    if (pppuStack_f8 != (undefined ***)0x0) {
      pppuVar15 = pppuStack_f8 + 1;
      do {
        ppuVar14 = *pppuVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar15,0x10);
        if (bVar3) {
          *pppuVar15 = (undefined **)((long)ppuVar14 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
        pppuVar8 = pppuStack_f8;
      } while (cVar2 != '\0');
LAB_10a23f39c:
      if (ppuVar14 == (undefined **)0x0) {
        (*(code *)(*pppuVar8)[2])(pppuVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppuVar9 = pppuVar8;
      }
    }
  }
  pppuVar15 = pppuStack_108;
  if (pppuStack_108 != (undefined ***)0x0) {
    pppuVar8 = pppuStack_108 + 1;
    do {
      ppuVar14 = *pppuVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
      if (bVar3) {
        *pppuVar8 = (undefined **)((long)ppuVar14 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppuVar14 == (undefined **)0x0) {
      (*(code *)(*pppuStack_108)[2])(pppuStack_108);
      pppuVar9 = pppuVar15;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a0536d4(&pppuStack_88);
  func_0x00010a05248c(pppuVar15);
  FUN_10a054c5c(&pppuStack_100);
  func_0x00010a271cc8(&pppuStack_110);
  __Unwind_Resume();
  puStack_120 = &stack0xfffffffffffffff0;
  pcStack_118 = FUN_10a23f4ec;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar16 = pppuVar9[8];
  plVar10 = (long *)0x358;
  __Znwm();
  plVar5 = plVar10 + 1;
  *plVar5 = 0;
  plVar10[2] = 0;
  pppuVar9 = (undefined ***)(plVar10 + 3);
  *plVar10 = (long)&PTR_DAT_110bb6dd0;
  ppuVar14 = ppuVar16;
  FUN_10ac8e0d8(pppuVar9,ppuVar16);
  lVar17 = plVar10[0xc];
  pppuStack_220 = pppuVar9;
  pppuStack_218 = (undefined ***)plVar10;
  if (lVar17 == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = plVar10 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar10[0xb] = (long)pppuVar9;
    plVar10[0xc] = (long)plVar10;
LAB_10a23f5bc:
    do {
      lVar17 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar17 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar17 != 0) goto LAB_10a23f5d0;
    (**(code **)(*plVar10 + 0x10))(plVar10);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    if (ppuVar16 == (undefined **)0x0) goto LAB_10a23f7f4;
LAB_10a23f5d4:
    pppuStack_210 = (undefined ***)ppuVar16[0x10b];
    pppuStack_208 = (undefined ***)ppuVar16[0x10c];
    if (pppuStack_208 != (undefined ***)0x0) {
      pppuVar9 = pppuStack_208 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
        if (bVar3) {
          *pppuVar9 = (undefined **)((long)*pppuVar9 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppuVar11 = (undefined ****)0x2a8;
    __Znwm();
    pppuVar9 = pppuStack_218;
    pppuStack_1e8 = pppuStack_218;
    pppuStack_1f0 = pppuStack_220;
    pppuStack_220 = (undefined ***)0x0;
    pppuStack_218 = (undefined ***)0x0;
    ppppuVar12 = ppppuVar11;
    func_0x00010a0fda30();
    FUN_10ab6a888(ppppuVar11,ppuVar16,&pppuStack_1f0,ppppuVar12,ppuVar14);
    if (pppuVar9 != (undefined ***)0x0) {
      plVar10 = (long *)(pppuVar9 + 1);
      do {
        lVar17 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar17 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar17 == 0) {
        (**(code **)((long)*pppuVar9 + 0x10))(pppuVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar9);
      }
    }
    pppuVar15 = pppuStack_208;
    pppuVar9 = pppuStack_210;
    pppuStack_200 = pppuStack_210;
    pppuStack_1f8 = pppuStack_208;
    if (pppuStack_208 != (undefined ***)0x0) {
      pppuVar8 = pppuStack_208 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
        if (bVar3) {
          *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      pppuVar8 = pppuStack_208 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
        if (bVar3) {
          *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
        if (bVar3) {
          *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuStack_208);
    }
    pppuStack_1f0 = pppuVar9;
    pppuStack_1e8 = pppuVar15;
    FUN_10a05b208(&pppuStack_198,ppppuVar11,&pppuStack_1f0);
    FUN_10a05b04c(extraout_x8);
    pppuVar9 = pppuStack_190;
    if (pppuStack_190 != (undefined ***)0x0) {
      pppuVar15 = pppuStack_190 + 1;
      do {
        ppuVar14 = *pppuVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar15,0x10);
        if (bVar3) {
          *pppuVar15 = (undefined **)((long)ppuVar14 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppuVar14 == (undefined **)0x0) {
        (*(code *)(*pppuStack_190)[2])(pppuStack_190);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar9);
      }
    }
    if (pppuStack_1e8 != (undefined ***)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    pppuVar9 = pppuStack_1f8;
    if (pppuStack_1f8 != (undefined ***)0x0) {
      pppuVar15 = pppuStack_1f8 + 1;
      do {
        ppuVar14 = *pppuVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar15,0x10);
        if (bVar3) {
          *pppuVar15 = (undefined **)((long)ppuVar14 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppuVar14 == (undefined **)0x0) {
        (*(code *)(*pppuStack_1f8)[2])(pppuStack_1f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar9);
      }
    }
    pppuVar9 = pppuStack_210;
    if ((pppuStack_210 != (undefined ***)0x0) &&
       (pppuVar15 = (undefined ***)*extraout_x8, pppuVar15 != (undefined ***)0x0)) {
      pppuStack_190 = (undefined ***)extraout_x8[1];
      if (pppuStack_190 != (undefined ***)0x0) {
        pppuVar8 = pppuStack_190 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
          if (bVar3) {
            *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      ppppuVar11 = &pppuStack_198;
      pppuStack_198 = pppuVar15;
      FUN_10aa88c30();
      pppuVar15 = pppuStack_190;
      if (pppuStack_190 != (undefined ***)0x0) {
        pppuVar8 = pppuStack_190 + 1;
        do {
          ppuVar14 = *pppuVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
          if (bVar3) {
            *pppuVar8 = (undefined **)((long)ppuVar14 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (ppuVar14 == (undefined **)0x0) {
          (*(code *)(*pppuStack_190)[2])(pppuStack_190);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar9 = pppuVar15;
        }
      }
    }
    if (pppuStack_208 == (undefined ***)0x0) goto LAB_10a23fa64;
    pppuVar15 = pppuStack_208 + 1;
    do {
      ppuVar14 = *pppuVar15;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar15,0x10);
      if (bVar3) {
        *pppuVar15 = (undefined **)((long)ppuVar14 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      pppuVar8 = pppuStack_208;
    } while (cVar2 != '\0');
  }
  else {
    if (*(long *)(lVar17 + 8) == -1) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar10 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar10[0xb] = (long)pppuVar9;
      plVar10[0xc] = (long)plVar10;
      __ZNSt3__119__shared_weak_count14__release_weakEv(lVar17);
      goto LAB_10a23f5bc;
    }
LAB_10a23f5d0:
    if (ppuVar16 != (undefined **)0x0) goto LAB_10a23f5d4;
LAB_10a23f7f4:
    pppuVar13 = (undefined ***)0x2c0;
    __Znwm();
    pppuVar15 = pppuStack_218;
    pppuVar13[1] = (undefined **)0x0;
    pppuVar13[2] = (undefined **)0x0;
    *pppuVar13 = &PTR_DAT_110b9fda0;
    pppuVar9 = pppuVar13 + 3;
    pppuStack_1e8 = pppuStack_218;
    pppuStack_1f0 = pppuStack_220;
    pppuStack_220 = (undefined ***)0x0;
    pppuStack_218 = (undefined ***)0x0;
    pppuVar8 = pppuVar13;
    func_0x00010a0fda30();
    FUN_10ab6a888(pppuVar9,0,&pppuStack_1f0,pppuVar8,ppuVar14);
    if (pppuVar15 != (undefined ***)0x0) {
      plVar10 = (long *)(pppuVar15 + 1);
      do {
        lVar17 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar17 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar17 == 0) {
        (**(code **)((long)*pppuVar15 + 0x10))(pppuVar15);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar15);
      }
    }
    ppppuVar11 = (undefined ****)(pppuVar13 + 8);
    pppuStack_198 = pppuVar9;
    pppuStack_190 = pppuVar13;
    FUN_10a05b2a8(&pppuStack_198,ppppuVar11,pppuVar9);
    FUN_10a05b04c(&pppuStack_200,&pppuStack_198);
    pppuVar9 = pppuStack_190;
    if (pppuStack_190 != (undefined ***)0x0) {
      pppuVar15 = pppuStack_190 + 1;
      do {
        ppuVar14 = *pppuVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar15,0x10);
        if (bVar3) {
          *pppuVar15 = (undefined **)((long)ppuVar14 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppuVar14 == (undefined **)0x0) {
        (*(code *)(*pppuStack_190)[2])(pppuStack_190);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar9);
      }
    }
    if (pppuStack_1f8 == (undefined ***)0x0) {
      pppuStack_1e8 = (undefined ***)0x0;
    }
    else {
      pppuVar9 = pppuStack_1f8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
        if (bVar3) {
          *pppuVar9 = (undefined **)((long)*pppuVar9 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      pppuStack_1e8 = pppuStack_1f8;
      if (pppuStack_1f8 != (undefined ***)0x0) {
        pppuVar9 = pppuStack_1f8 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
          if (bVar3) {
            *pppuVar9 = (undefined **)((long)*pppuVar9 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    uStack_180 = 0;
    uStack_188 = 0;
    pppuStack_198 = (undefined ***)&UNK_1053a6a3c;
    appuStack_1d8[0] = &PTR_DAT_110bb6e10;
    pcStack_1e0 = FUN_10a271df0;
    pppuStack_1f0 = pppuStack_200;
    pppuStack_190 = (undefined ***)&PTR_DAT_110ae9180;
    FUN_10a044790(&pppuStack_198);
    (*(code *)*pppuStack_190)(&pppuStack_190);
    pppuVar9 = pppuStack_1f8;
    if (pppuStack_1f8 != (undefined ***)0x0) {
      pppuVar15 = pppuStack_1f8 + 1;
      do {
        ppuVar14 = *pppuVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar15,0x10);
        if (bVar3) {
          *pppuVar15 = (undefined **)((long)ppuVar14 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppuVar14 == (undefined **)0x0) {
        (*(code *)(*pppuStack_1f8)[2])(pppuStack_1f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar9);
      }
    }
    extraout_x8[1] = pppuStack_1e8;
    *extraout_x8 = pppuStack_1f0;
    if (pppuStack_1e8 != (undefined ***)0x0) {
      pppuVar9 = pppuStack_1e8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
        if (bVar3) {
          *pppuVar9 = (undefined **)((long)*pppuVar9 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a044790(&pcStack_1e0);
    pppuVar9 = appuStack_1d8;
    (*(code *)*appuStack_1d8[0])();
    if (pppuStack_1e8 == (undefined ***)0x0) goto LAB_10a23fa64;
    pppuVar15 = pppuStack_1e8 + 1;
    do {
      ppuVar14 = *pppuVar15;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar15,0x10);
      if (bVar3) {
        *pppuVar15 = (undefined **)((long)ppuVar14 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      pppuVar8 = pppuStack_1e8;
    } while (cVar2 != '\0');
  }
  if (ppuVar14 == (undefined **)0x0) {
    (*(code *)(*pppuVar8)[2])(pppuVar8);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    pppuVar9 = pppuVar8;
  }
LAB_10a23fa64:
  pppuVar15 = pppuStack_218;
  if (pppuStack_218 != (undefined ***)0x0) {
    pppuVar8 = pppuStack_218 + 1;
    do {
      ppuVar14 = *pppuVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
      if (bVar3) {
        *pppuVar8 = (undefined **)((long)ppuVar14 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppuVar14 == (undefined **)0x0) {
      (*(code *)(*pppuStack_218)[2])(pppuStack_218);
      pppuVar9 = pppuVar15;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a0536d4(&pppuStack_198);
  func_0x00010a05248c(pppuVar15);
  FUN_10a054c5c(&pppuStack_210);
  FUN_10a271d98(&pppuStack_220);
  pppuVar8 = pppuVar9;
  __Unwind_Resume();
  pppuStack_238 = pppuVar15;
  pcStack_228 = FUN_10a23fb90;
  pppuStack_240 = pppuVar9;
  ppuStack_230 = &puStack_120;
  FUN_10a3dea88(&lStack_258,pppuVar8[8]);
  if ((-1 < (int)ppppuVar11) &&
     (((ulong)ppppuVar11 & 0xffffffff) < (ulong)(lStack_250 - lStack_258 >> 3))) {
    func_0x00010a0d77bc(&uStack_270,
                        *(undefined8 *)(lStack_258 + ((ulong)ppppuVar11 & 0xffffffff) * 8));
    extraout_x8_00[1] = plStack_268;
    *extraout_x8_00 = uStack_270;
    if (plStack_268 != (long *)0x0) {
      plVar10 = plStack_268 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = *plVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar10 = plStack_268 + 1;
      do {
        lVar17 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar17 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plStack_268 + 0x10))(plStack_268);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_268);
      }
    }
    if (lStack_258 != 0) {
      lStack_250 = lStack_258;
      __ZdlPv();
    }
    return;
  }
  FUN_10a00946c(&UNK_10f646bd2);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a23fc5c);
  (*pcVar4)();
}



/* Entry: 10a23f4ec; end: 10a23fb8f;  */

/* WARNING: Removing unreachable block (ram,0x00010a23f960) */
/* WARNING: Removing unreachable block (ram,0x00010a23f964) */
/* WARNING: Removing unreachable block (ram,0x00010a23f96c) */
/* WARNING: Removing unreachable block (ram,0x00010a23f974) */
/* WARNING: Removing unreachable block (ram,0x00010a23f978) */

void FUN_10a23f4ec(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined ***pppuVar6;
  undefined ****ppppuVar7;
  undefined ****ppppuVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  long lVar11;
  undefined8 *extraout_x8;
  long lVar12;
  undefined **ppuVar13;
  undefined ***pppuVar14;
  long lVar15;
  long *plVar16;
  undefined8 uStack_160;
  long *plStack_158;
  long lStack_148;
  long lStack_140;
  undefined ***pppuStack_130;
  undefined ***pppuStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined ***pppuStack_110;
  undefined ***pppuStack_108;
  undefined ***pppuStack_100;
  undefined ***pppuStack_f8;
  undefined ***pppuStack_f0;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  undefined ***pppuStack_d8;
  code *pcStack_d0;
  undefined **appuStack_c8 [8];
  undefined ***pppuStack_88;
  undefined ***pppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = *(long *)(param_2 + 0x40);
  plVar5 = (long *)0x358;
  __Znwm();
  plVar16 = plVar5 + 1;
  *plVar16 = 0;
  plVar5[2] = 0;
  pppuVar6 = (undefined ***)(plVar5 + 3);
  *plVar5 = (long)&PTR_DAT_110bb6dd0;
  lVar12 = lVar15;
  FUN_10ac8e0d8(pppuVar6,lVar15);
  lVar11 = plVar5[0xc];
  pppuStack_110 = pppuVar6;
  pppuStack_108 = (undefined ***)plVar5;
  if (lVar11 == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *plVar16 = *plVar16 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = plVar5 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar5[0xb] = (long)pppuVar6;
    plVar5[0xc] = (long)plVar5;
LAB_10a23f5bc:
    do {
      lVar11 = *plVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *plVar16 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 != 0) goto LAB_10a23f5d0;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    if (lVar15 == 0) goto LAB_10a23f7f4;
LAB_10a23f5d4:
    pppuStack_100 = *(undefined ****)(lVar15 + 0x858);
    pppuStack_f8 = *(undefined ****)(lVar15 + 0x860);
    if (pppuStack_f8 != (undefined ***)0x0) {
      pppuVar6 = pppuStack_f8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar6,0x10);
        if (bVar3) {
          *pppuVar6 = (undefined **)((long)*pppuVar6 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppuVar7 = (undefined ****)0x2a8;
    __Znwm();
    pppuVar6 = pppuStack_108;
    pppuStack_d8 = pppuStack_108;
    pppuStack_e0 = pppuStack_110;
    pppuStack_110 = (undefined ***)0x0;
    pppuStack_108 = (undefined ***)0x0;
    ppppuVar8 = ppppuVar7;
    func_0x00010a0fda30();
    FUN_10ab6a888(ppppuVar7,lVar15,&pppuStack_e0,ppppuVar8,lVar12);
    if (pppuVar6 != (undefined ***)0x0) {
      plVar5 = (long *)(pppuVar6 + 1);
      do {
        lVar12 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 == 0) {
        (**(code **)((long)*pppuVar6 + 0x10))(pppuVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar6);
      }
    }
    pppuVar14 = pppuStack_f8;
    pppuVar6 = pppuStack_100;
    pppuStack_f0 = pppuStack_100;
    pppuStack_e8 = pppuStack_f8;
    if (pppuStack_f8 != (undefined ***)0x0) {
      pppuVar10 = pppuStack_f8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
        if (bVar3) {
          *pppuVar10 = (undefined **)((long)*pppuVar10 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      pppuVar10 = pppuStack_f8 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
        if (bVar3) {
          *pppuVar10 = (undefined **)((long)*pppuVar10 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
        if (bVar3) {
          *pppuVar10 = (undefined **)((long)*pppuVar10 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuStack_f8);
    }
    pppuStack_e0 = pppuVar6;
    pppuStack_d8 = pppuVar14;
    FUN_10a05b208(&pppuStack_88,ppppuVar7,&pppuStack_e0);
    FUN_10a05b04c(param_1);
    pppuVar6 = pppuStack_80;
    if (pppuStack_80 != (undefined ***)0x0) {
      pppuVar14 = pppuStack_80 + 1;
      do {
        ppuVar13 = *pppuVar14;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar14,0x10);
        if (bVar3) {
          *pppuVar14 = (undefined **)((long)ppuVar13 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppuVar13 == (undefined **)0x0) {
        (*(code *)(*pppuStack_80)[2])(pppuStack_80);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar6);
      }
    }
    if (pppuStack_d8 != (undefined ***)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    pppuVar6 = pppuStack_e8;
    if (pppuStack_e8 != (undefined ***)0x0) {
      pppuVar14 = pppuStack_e8 + 1;
      do {
        ppuVar13 = *pppuVar14;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar14,0x10);
        if (bVar3) {
          *pppuVar14 = (undefined **)((long)ppuVar13 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppuVar13 == (undefined **)0x0) {
        (*(code *)(*pppuStack_e8)[2])(pppuStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar6);
      }
    }
    pppuVar6 = pppuStack_100;
    if ((pppuStack_100 != (undefined ***)0x0) &&
       (pppuVar14 = (undefined ***)*param_1, pppuVar14 != (undefined ***)0x0)) {
      pppuStack_80 = (undefined ***)param_1[1];
      if (pppuStack_80 != (undefined ***)0x0) {
        pppuVar10 = pppuStack_80 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
          if (bVar3) {
            *pppuVar10 = (undefined **)((long)*pppuVar10 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      ppppuVar7 = &pppuStack_88;
      pppuStack_88 = pppuVar14;
      FUN_10aa88c30();
      pppuVar14 = pppuStack_80;
      if (pppuStack_80 != (undefined ***)0x0) {
        pppuVar10 = pppuStack_80 + 1;
        do {
          ppuVar13 = *pppuVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
          if (bVar3) {
            *pppuVar10 = (undefined **)((long)ppuVar13 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (ppuVar13 == (undefined **)0x0) {
          (*(code *)(*pppuStack_80)[2])(pppuStack_80);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar6 = pppuVar14;
        }
      }
    }
    if (pppuStack_f8 == (undefined ***)0x0) goto LAB_10a23fa64;
    pppuVar14 = pppuStack_f8 + 1;
    do {
      ppuVar13 = *pppuVar14;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar14,0x10);
      if (bVar3) {
        *pppuVar14 = (undefined **)((long)ppuVar13 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      pppuVar10 = pppuStack_f8;
    } while (cVar2 != '\0');
  }
  else {
    if (*(long *)(lVar11 + 8) == -1) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = *plVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar5[0xb] = (long)pppuVar6;
      plVar5[0xc] = (long)plVar5;
      __ZNSt3__119__shared_weak_count14__release_weakEv(lVar11);
      goto LAB_10a23f5bc;
    }
LAB_10a23f5d0:
    if (lVar15 != 0) goto LAB_10a23f5d4;
LAB_10a23f7f4:
    pppuVar9 = (undefined ***)0x2c0;
    __Znwm();
    pppuVar14 = pppuStack_108;
    pppuVar9[1] = (undefined **)0x0;
    pppuVar9[2] = (undefined **)0x0;
    *pppuVar9 = &PTR_DAT_110b9fda0;
    pppuVar6 = pppuVar9 + 3;
    pppuStack_d8 = pppuStack_108;
    pppuStack_e0 = pppuStack_110;
    pppuStack_110 = (undefined ***)0x0;
    pppuStack_108 = (undefined ***)0x0;
    pppuVar10 = pppuVar9;
    func_0x00010a0fda30();
    FUN_10ab6a888(pppuVar6,0,&pppuStack_e0,pppuVar10,lVar12);
    if (pppuVar14 != (undefined ***)0x0) {
      plVar5 = (long *)(pppuVar14 + 1);
      do {
        lVar12 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 == 0) {
        (**(code **)((long)*pppuVar14 + 0x10))(pppuVar14);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar14);
      }
    }
    ppppuVar7 = (undefined ****)(pppuVar9 + 8);
    pppuStack_88 = pppuVar6;
    pppuStack_80 = pppuVar9;
    FUN_10a05b2a8(&pppuStack_88,ppppuVar7,pppuVar6);
    FUN_10a05b04c(&pppuStack_f0,&pppuStack_88);
    pppuVar6 = pppuStack_80;
    if (pppuStack_80 != (undefined ***)0x0) {
      pppuVar14 = pppuStack_80 + 1;
      do {
        ppuVar13 = *pppuVar14;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar14,0x10);
        if (bVar3) {
          *pppuVar14 = (undefined **)((long)ppuVar13 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppuVar13 == (undefined **)0x0) {
        (*(code *)(*pppuStack_80)[2])(pppuStack_80);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar6);
      }
    }
    if (pppuStack_e8 == (undefined ***)0x0) {
      pppuStack_d8 = (undefined ***)0x0;
    }
    else {
      pppuVar6 = pppuStack_e8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar6,0x10);
        if (bVar3) {
          *pppuVar6 = (undefined **)((long)*pppuVar6 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      pppuStack_d8 = pppuStack_e8;
      if (pppuStack_e8 != (undefined ***)0x0) {
        pppuVar6 = pppuStack_e8 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar6,0x10);
          if (bVar3) {
            *pppuVar6 = (undefined **)((long)*pppuVar6 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    uStack_70 = 0;
    uStack_78 = 0;
    pppuStack_88 = (undefined ***)&UNK_1053a6a3c;
    appuStack_c8[0] = &PTR_DAT_110bb6e10;
    pcStack_d0 = FUN_10a271df0;
    pppuStack_e0 = pppuStack_f0;
    pppuStack_80 = (undefined ***)&PTR_DAT_110ae9180;
    FUN_10a044790(&pppuStack_88);
    (*(code *)*pppuStack_80)(&pppuStack_80);
    pppuVar6 = pppuStack_e8;
    if (pppuStack_e8 != (undefined ***)0x0) {
      pppuVar14 = pppuStack_e8 + 1;
      do {
        ppuVar13 = *pppuVar14;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar14,0x10);
        if (bVar3) {
          *pppuVar14 = (undefined **)((long)ppuVar13 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppuVar13 == (undefined **)0x0) {
        (*(code *)(*pppuStack_e8)[2])(pppuStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar6);
      }
    }
    param_1[1] = pppuStack_d8;
    *param_1 = pppuStack_e0;
    if (pppuStack_d8 != (undefined ***)0x0) {
      pppuVar6 = pppuStack_d8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar6,0x10);
        if (bVar3) {
          *pppuVar6 = (undefined **)((long)*pppuVar6 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a044790(&pcStack_d0);
    pppuVar6 = appuStack_c8;
    (*(code *)*appuStack_c8[0])();
    if (pppuStack_d8 == (undefined ***)0x0) goto LAB_10a23fa64;
    pppuVar14 = pppuStack_d8 + 1;
    do {
      ppuVar13 = *pppuVar14;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar14,0x10);
      if (bVar3) {
        *pppuVar14 = (undefined **)((long)ppuVar13 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      pppuVar10 = pppuStack_d8;
    } while (cVar2 != '\0');
  }
  if (ppuVar13 == (undefined **)0x0) {
    (*(code *)(*pppuVar10)[2])(pppuVar10);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    pppuVar6 = pppuVar10;
  }
LAB_10a23fa64:
  pppuVar14 = pppuStack_108;
  if (pppuStack_108 != (undefined ***)0x0) {
    pppuVar10 = pppuStack_108 + 1;
    do {
      ppuVar13 = *pppuVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
      if (bVar3) {
        *pppuVar10 = (undefined **)((long)ppuVar13 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppuVar13 == (undefined **)0x0) {
      (*(code *)(*pppuStack_108)[2])(pppuStack_108);
      pppuVar6 = pppuVar14;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a0536d4(&pppuStack_88);
  func_0x00010a05248c(pppuVar14);
  FUN_10a054c5c(&pppuStack_100);
  FUN_10a271d98(&pppuStack_110);
  pppuVar10 = pppuVar6;
  __Unwind_Resume();
  pppuStack_128 = pppuVar14;
  pcStack_118 = FUN_10a23fb90;
  pppuStack_130 = pppuVar6;
  puStack_120 = &stack0xfffffffffffffff0;
  FUN_10a3dea88(&lStack_148,pppuVar10[8]);
  if ((-1 < (int)ppppuVar7) &&
     (((ulong)ppppuVar7 & 0xffffffff) < (ulong)(lStack_140 - lStack_148 >> 3))) {
    func_0x00010a0d77bc(&uStack_160,
                        *(undefined8 *)(lStack_148 + ((ulong)ppppuVar7 & 0xffffffff) * 8));
    extraout_x8[1] = plStack_158;
    *extraout_x8 = uStack_160;
    if (plStack_158 != (long *)0x0) {
      plVar5 = plStack_158 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar5 = plStack_158 + 1;
      do {
        lVar12 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_158 + 0x10))(plStack_158);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_158);
      }
    }
    if (lStack_148 != 0) {
      lStack_140 = lStack_148;
      __ZdlPv();
    }
    return;
  }
  FUN_10a00946c(&UNK_10f646bd2);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a23fc5c);
  (*pcVar4)();
}



/* Entry: 10a23fb90; end: 10a23fc7b;  */

void FUN_10a23fb90(undefined8 *param_1,long param_2,uint param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uStack_50;
  long *plStack_48;
  long lStack_38;
  long lStack_30;
  
  FUN_10a3dea88(&lStack_38,*(undefined8 *)(param_2 + 0x40));
  if (-1 < (int)param_3) {
    if ((ulong)param_3 < (ulong)(lStack_30 - lStack_38 >> 3)) {
      func_0x00010a0d77bc(&uStack_50,*(undefined8 *)(lStack_38 + (ulong)param_3 * 8));
      param_1[1] = plStack_48;
      *param_1 = uStack_50;
      if (plStack_48 != (long *)0x0) {
        plVar1 = plStack_48 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
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
        if (lVar5 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
        }
      }
      if (lStack_38 != 0) {
        lStack_30 = lStack_38;
        __ZdlPv();
      }
      return;
    }
  }
  FUN_10a00946c(&UNK_10f646bd2);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a23fc5c);
  (*pcVar4)();
}



/* Entry: 10a23fc7c; end: 10a23fd03;  */

void FUN_10a23fc7c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(param_2 + 0x40) + 0xbe0);
  *param_1 = *(undefined8 *)(*(long *)(param_2 + 0x40) + 0xbd8);
  param_1[1] = lVar4;
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



/* Entry: 10a23fd04; end: 10a23fd27;  */

/* WARNING: Possible PIC construction at 0x00010a3dedd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a3deddc) */

undefined ** FUN_10a23fd04(long param_1,undefined **param_2,undefined **param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 *extraout_x8;
  undefined **unaff_x19;
  long *plVar8;
  undefined **unaff_x20;
  undefined8 ****unaff_x29;
  undefined8 unaff_x30;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  long *plStack_b0;
  undefined1 uStack_a1;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined8 ***pppuStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [7];
  undefined1 uStack_79;
  undefined **ppuStack_78;
  undefined8 ***pppuStack_50;
  code *pcStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined8 ***pppuStack_30;
  undefined8 uStack_28;
  
  if (*param_2 == (undefined *)0x0) {
    ppuVar5 = (undefined **)&UNK_10f646bf4;
    FUN_10a00946c();
    lVar6 = *(long *)(ppuVar5[8] + 0xc00);
    *extraout_x8 = *(undefined8 *)(ppuVar5[8] + 0xbf8);
    extraout_x8[1] = lVar6;
    if (lVar6 != 0) {
      plVar8 = (long *)(lVar6 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = *plVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return ppuVar5;
  }
  ppuVar5 = *(undefined ***)(param_1 + 0x40);
  if (*param_2 == (undefined *)0x0) {
LAB_10a3dece4:
    ppuVar5 = ppuVar5 + 0x17d;
    puVar4 = (undefined1 *)register0x00000008;
    ppuVar7 = param_2;
    goto SUB_10a04a704;
  }
  lVar6 = *(long *)(*param_2 + 0x268);
  ppuVar7 = param_2;
  if (lVar6 != 0) {
    ppuVar7 = &PTR_DAT_110bb3788;
    param_3 = &PTR_DAT_110bb2dc8;
    ___dynamic_cast();
    if (lVar6 != 0) goto LAB_10a3dece4;
  }
  puVar9 = &UNK_10f654079;
  FUN_10a00946c();
  uStack_28 = 0x10a3ded04;
  ppuStack_40 = ppuVar5;
  ppuStack_38 = param_2;
  pppuStack_30 = (undefined8 ***)&stack0xfffffffffffffff0;
  if (*ppuVar7 == (undefined *)0x0) {
LAB_10a3ded44:
    ppuVar5 = (undefined **)(puVar9 + 0xbf8);
    puVar4 = &stack0xffffffffffffffe0;
    unaff_x19 = ppuStack_38;
    unaff_x20 = ppuStack_40;
    unaff_x29 = (undefined8 ****)pppuStack_30;
    unaff_x30 = uStack_28;
  }
  else {
    lVar6 = *(long *)(*ppuVar7 + 0x268);
    unaff_x20 = ppuVar7;
    if (lVar6 != 0) {
      unaff_x20 = &PTR_DAT_110bb3788;
      param_3 = &PTR_DAT_110bb2dc8;
      ___dynamic_cast();
      if (lVar6 != 0) goto LAB_10a3ded44;
    }
    ppuVar7 = param_3;
    puVar9 = &UNK_10f6540ad;
    FUN_10a00946c();
    puVar4 = auStack_80;
    pcStack_48 = FUN_10a3ded64;
    unaff_x29 = &pppuStack_50;
    pppuStack_50 = &pppuStack_30;
    if ((*ppuVar7 != (undefined *)0x0) &&
       ((lVar6 = *(long *)(*ppuVar7 + 0x268), lVar6 == 0 ||
        (___dynamic_cast(lVar6,&PTR_DAT_110bb3788,&PTR_DAT_110bb2dc8,0), lVar6 == 0)))) {
      puVar9 = &UNK_10f6540de;
      FUN_10a00946c();
      uStack_88 = 0x10a3dedfc;
      if (*(long *)(puVar9 + 0xcc8) == 0) {
        puStack_c0 = puVar9;
        ppuStack_a0 = unaff_x20;
        ppuStack_98 = ppuVar7;
        pppuStack_90 = unaff_x29;
        FUN_10a3f9f00(auStack_b8,&uStack_a1,&puStack_c0);
        func_0x00010a3dee88(puVar9 + 0xcc8,auStack_b8);
        if (plStack_b0 != (long *)0x0) {
          plVar8 = plStack_b0 + 1;
          do {
            lVar6 = *plVar8;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar6 == 0) {
            (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b0);
          }
        }
      }
      return (undefined **)(puVar9 + 0xcc8);
    }
    puVar9 = puVar9 + 0xc30;
    ppuStack_78 = unaff_x20;
    FUN_10a3f9da8(puVar9,unaff_x20,&UNK_10dd5b8f9,&ppuStack_78,&uStack_79);
    ppuVar5 = (undefined **)(puVar9 + 0x30);
    unaff_x30 = 0x10a3deddc;
    unaff_x19 = ppuVar7;
  }
SUB_10a04a704:
  *(undefined ***)(puVar4 + -0x20) = unaff_x20;
  *(undefined ***)(puVar4 + -0x18) = unaff_x19;
  *(undefined8 *****)(puVar4 + -0x10) = unaff_x29;
  *(undefined8 *)(puVar4 + -8) = unaff_x30;
  puVar10 = ppuVar7[1];
  puVar9 = *ppuVar7;
  if (ppuVar7[1] != (undefined *)0x0) {
    plVar8 = (long *)(ppuVar7[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar8 = (long *)ppuVar5[1];
  ppuVar5[1] = puVar10;
  *ppuVar5 = puVar9;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
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
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  return ppuVar5;
}



/* Entry: 10a23fd28; end: 10a23fd5b;  */

void FUN_10a23fd28(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(param_2 + 0x40) + 0xc00);
  *param_1 = *(undefined8 *)(*(long *)(param_2 + 0x40) + 0xbf8);
  param_1[1] = lVar4;
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



/* Entry: 10a23fd5c; end: 10a23fdbf;  */

undefined8 * FUN_10a23fd5c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a23fdc0; end: 10a23ff37;  */

undefined8 * FUN_10a23fdc0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined1 uStack_31;
  
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xf] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x12) = 0x100;
  *param_1 = &PTR_FUN_110bb6a48;
  puVar1 = param_1 + 1;
  FUN_10a0040d0(puVar1,&PTR_PTR_110bb5a50);
  *param_1 = &PTR_FUN_110bb5958;
  param_1[1] = &PTR_DAT_110bb5998;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = param_2;
  param_1[0xf] = &PTR_DAT_110bb5a10;
  FUN_10a27218c(auStack_48,&uStack_31);
  FUN_10a23fd5c(param_1 + 6,auStack_48);
  if (plStack_40 != (long *)0x0) {
    plVar2 = plStack_40 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
    }
  }
  lVar5 = param_1[0xe];
  plVar2 = (long *)((long)puVar1 + *(long *)(param_1[1] + -0x18));
  if ((*(byte *)(plVar2 + 3) & 1) == 0) {
    *(undefined1 *)(plVar2 + 3) = 1;
    plVar2[2] = lVar5;
    if (lVar5 != 0) {
      plVar2[1] = *(long *)(*(long *)(lVar5 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar2 + 0x18))();
  }
  FUN_10a5ae998(param_1[4],&PTR_DAT_110b99f08,lVar5,puVar1);
  return param_1;
}



/* Entry: 10a23ff38; end: 10a23ffa3;  */

undefined8 * FUN_10a23ff38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb5958;
  param_1[1] = &PTR_DAT_110bb5998;
  param_1[0xf] = &PTR_DAT_110bb5a10;
  func_0x00010a2720d8(param_1 + 8);
  func_0x00010a272080(param_1 + 6);
  param_1[1] = &PTR_DAT_110bb6758;
  param_1[0xf] = &PTR_FUN_110bb67d0;
  func_0x00010a004e5c(param_1 + 4);
  func_0x00010a004e04(param_1 + 2);
  return param_1;
}


