/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1092b6864; end: 1092b6883;  */

void FUN_1092b6864(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae8ec8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092b6884; end: 1092b6893;  */

void FUN_1092b6884(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001092b688c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1092b6894; end: 1092b68ef;  */

undefined8 FUN_1092b6894(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uStack_24;
  
  uStack_24 = *param_2;
  *param_2 = 0xffffffff;
  FUN_1092baf04(param_1,&uStack_24);
  FUN_1092b6464(&uStack_24);
  return param_1;
}



/* Entry: 1092b68f0; end: 1092b68f3;  */

void FUN_1092b68f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1092b68f4; end: 1092b6907;  */

void FUN_1092b68f4(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092b6908; end: 1092b690b;  */

void FUN_1092b6908(void)

{
  return;
}



/* Entry: 1092b690c; end: 1092b6943;  */

undefined8 FUN_1092b690c(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae8df0);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1092b6944; end: 1092b6947;  */

void FUN_1092b6944(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092b6948; end: 1092b6ab7;  */

void FUN_1092b6948(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined1 **ppuVar2;
  undefined4 uVar3;
  undefined8 *****pppppuVar4;
  undefined1 *puStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 ****ppppuStack_40;
  long lStack_38;
  long lStack_30;
  undefined4 uStack_28;
  undefined8 *****pppppuVar5;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&ppppuStack_40,*param_2,param_2[1]);
  }
  else {
    lStack_38 = param_2[1];
    ppppuStack_40 = (undefined8 ****)*param_2;
    lStack_30 = param_2[2];
  }
  pppppuVar4 = (undefined8 *****)ppppuStack_40;
  if (-1 < lStack_30) {
    pppppuVar4 = &ppppuStack_40;
  }
  _fopen(pppppuVar4,&UNK_10f5173d2);
  if (lStack_30 < 0) {
    __ZdlPv(ppppuStack_40);
  }
  if (pppppuVar4 == (undefined8 *****)0x0) {
    pppppuVar5 = &ppppuStack_40;
    func_0x000107c31940(pppppuVar5,&UNK_10f563ca5);
    uVar3 = SUB84(pppppuVar5,0);
    __ZSt19uncaught_exceptionsv();
    uStack_28 = uVar3;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&ppppuStack_40,&UNK_10f563c89,0x1b);
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(&puStack_60,*param_2,param_2[1]);
    }
    else {
      uStack_58 = param_2[1];
      puStack_60 = (undefined1 *)*param_2;
      uStack_50 = param_2[2];
    }
    uVar1 = uStack_58;
    ppuVar2 = (undefined1 **)puStack_60;
    if (-1 < (long)uStack_50) {
      uVar1 = uStack_50 >> 0x38;
      ppuVar2 = &puStack_60;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&ppppuStack_40,ppuVar2,uVar1);
    if ((long)uStack_50 < 0) {
      __ZdlPv(puStack_60);
    }
    FUN_1092a22e8(&ppppuStack_40);
  }
  _fclose(pppppuVar4);
  return;
}



/* Entry: 1092b6ab8; end: 1092b6abb;  */

void FUN_1092b6ab8(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plStack_28;
  
  *param_1 = &PTR_FUN_110ae8f30;
  (**(code **)(*(long *)param_1[1] + 0x38))(&plStack_28);
  func_0x000109d1a244(&plStack_28);
  if (plStack_28 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_28 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plStack_28 + 8))();
      }
    }
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_1092b8ac8(param_1);
  return;
}



/* Entry: 1092b6abc; end: 1092b6acf;  */

void FUN_1092b6abc(void)

{
  FUN_1092b6b90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092b6ad0; end: 1092b6adf;  */

undefined8 FUN_1092b6ad0(void)

{
  return 0;
}



/* Entry: 1092b6ae0; end: 1092b6b8f;  */

void FUN_1092b6ae0(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plStack_30;
  long *plStack_28;
  
  plVar4 = (long *)0x38;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_DAT_110ae8a90;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0x1132cee70;
  plStack_30 = plVar4 + 3;
  *plStack_30 = 0x1132cee70;
  plStack_28 = plVar4;
  FUN_1092b5834(param_1,&plStack_30);
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
  return;
}



/* Entry: 1092b6b90; end: 1092b6c3f;  */

void FUN_1092b6b90(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plStack_28;
  
  *param_1 = &PTR_FUN_110ae8f30;
  (**(code **)(*(long *)param_1[1] + 0x38))(&plStack_28);
  func_0x000109d1a244(&plStack_28);
  if (plStack_28 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_28 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plStack_28 + 8))();
      }
    }
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_1092b8ac8(param_1);
  return;
}



/* Entry: 1092b6c40; end: 1092b70c3;  */

/* WARNING: Removing unreachable block (ram,0x0001092b6d30) */
/* WARNING: Removing unreachable block (ram,0x0001092b6d3c) */
/* WARNING: Removing unreachable block (ram,0x0001092b6d58) */
/* WARNING: Removing unreachable block (ram,0x0001092b6d5c) */
/* WARNING: Removing unreachable block (ram,0x0001092b6d70) */

void FUN_1092b6c40(long *param_1,long param_2,ulong param_3,long param_4,undefined8 *param_5,
                  undefined8 *param_6)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long lStack_a0;
  long *plStack_98;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long *plStack_68;
  
  lStack_70 = 0;
  plStack_68 = (long *)0x0;
  uStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  __ZNSt3__15mutex4lockEv();
  FUN_1092b70c4(&uStack_88,*(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40) >> 4);
  plVar14 = *(long **)(param_2 + 0x48);
  plVar15 = *(long **)(param_2 + 0x40);
  if (*(long **)(param_2 + 0x40) != plVar14) {
LAB_1092b6ca8:
    plVar6 = plVar15 + 2;
    if ((plVar15[1] != 0) && (*(long *)(plVar15[1] + 8) != -1)) goto code_r0x0001092b6cbc;
    if ((plVar15 != plVar14) && (plVar6 != plVar14)) {
      do {
        lVar9 = plVar6[1];
        if ((lVar9 != 0) && (*(long *)(lVar9 + 8) != -1)) {
          lVar13 = *plVar6;
          *plVar6 = 0;
          plVar6[1] = 0;
          lVar12 = plVar15[1];
          *plVar15 = lVar13;
          plVar15[1] = lVar9;
          if (lVar12 != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          plVar15 = plVar15 + 2;
        }
        plVar6 = plVar6 + 2;
      } while (plVar6 != plVar14);
      plVar14 = *(long **)(param_2 + 0x48);
    }
    if (plVar15 != plVar14) {
      for (; plVar14 != plVar15; plVar14 = plVar14 + -2) {
        if (plVar14[-1] != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
      *(long **)(param_2 + 0x48) = plVar15;
      plVar14 = plVar15;
    }
  }
joined_r0x0001092b6d98:
  if ((param_4 != 0) && (plVar15 = *(long **)(param_2 + 0x40), plVar15 != plVar14)) {
    do {
      lStack_a0 = 0;
      plStack_98 = (long *)0x0;
      plVar6 = (long *)plVar15[1];
      if (plVar6 == (long *)0x0) {
LAB_1092b6e20:
        iVar11 = 3;
LAB_1092b6e24:
        plVar6 = plStack_98;
        if (plStack_98 != (long *)0x0) {
          plVar1 = plStack_98 + 1;
          do {
            lVar9 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_98 + 0x10))(plStack_98);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        if ((iVar11 != 3) && (iVar11 != 0)) {
          __ZNSt3__15mutex6unlockEv(param_2);
          plVar15 = plStack_68;
          FUN_1092b75a4(&uStack_88);
          if (plVar15 == (long *)0x0) {
            return;
          }
          plVar14 = plVar15 + 1;
          do {
            lVar9 = *plVar14;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar4) {
              *plVar14 = lVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar9 != 0) {
            return;
          }
          (**(code **)(*plVar15 + 0x10))(plVar15);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
          return;
        }
      }
      else {
        __ZNSt3__119__shared_weak_count4lockEv();
        plStack_98 = plVar6;
        if (plVar6 != (long *)0x0) {
          lStack_a0 = *plVar15;
          if (lStack_a0 == 0) goto LAB_1092b6e20;
          lVar9 = *(long *)(lStack_a0 + 8);
          uVar2 = *(ulong *)(lStack_a0 + 0x10);
          func_0x0001092b7160(&uStack_88,&lStack_a0);
          if ((param_3 < uVar2 || lVar9 + uVar2 < param_4 + param_3) ||
             ((ulong)(param_4 * 2) < *(ulong *)(*(long *)(lStack_80 + -0x10) + 8))) {
            iVar11 = 0;
          }
          else {
            (*(code *)*param_6)(param_1,(long *)(lStack_80 + -0x10),param_3 - uVar2,param_4);
            iVar11 = 1;
          }
          goto LAB_1092b6e24;
        }
      }
      plVar15 = plVar15 + 2;
    } while (plVar15 != plVar14);
  }
  (*(code *)*param_5)(&lStack_a0,param_5);
  plVar15 = plStack_68;
  plStack_68 = plStack_98;
  lStack_70 = lStack_a0;
  lStack_a0 = 0;
  plStack_98 = (long *)0x0;
  if (plVar15 != (long *)0x0) {
    plVar14 = plVar15 + 1;
    do {
      lVar9 = *plVar14;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *plVar14 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  plVar15 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar14 = plStack_98 + 1;
    do {
      lVar9 = *plVar14;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *plVar14 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  plVar15 = plStack_68;
  lVar9 = lStack_70;
  if (param_4 != 0) {
    if (plStack_68 != (long *)0x0) {
      plVar14 = plStack_68 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *plVar14 = *plVar14 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar14 = *(long **)(param_2 + 0x48);
    if (plVar14 < *(long **)(param_2 + 0x50)) {
      *plVar14 = lStack_70;
      plVar14[1] = (long)plStack_68;
      plVar14 = plVar14 + 2;
    }
    else {
      lVar12 = *(long *)(param_2 + 0x40);
      lVar13 = (long)plVar14 - lVar12;
      uVar2 = (lVar13 >> 4) + 1;
      if (uVar2 >> 0x3c != 0) {
        FUN_1092b7590();
LAB_1092b7068:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1092b706c);
        (*pcVar5)();
      }
      uVar8 = (long)*(long **)(param_2 + 0x50) - lVar12;
      uVar10 = (long)uVar8 >> 3;
      if (uVar10 <= uVar2) {
        uVar10 = uVar2;
      }
      if (0x7fffffffffffffef < uVar8) {
        uVar10 = 0xfffffffffffffff;
      }
      if (uVar10 >> 0x3c != 0) {
        func_0x000104c4f740();
        goto LAB_1092b7068;
      }
      lVar7 = uVar10 << 4;
      __Znwm();
      plVar6 = (long *)(lVar7 + lVar13);
      *plVar6 = lVar9;
      plVar6[1] = (long)plVar15;
      plVar14 = plVar6 + 2;
      _memcpy(plVar6 + (lVar13 >> 4) * -2,lVar12,lVar13);
      *(long **)(param_2 + 0x40) = plVar6 + (lVar13 >> 4) * -2;
      *(long **)(param_2 + 0x48) = plVar14;
      *(ulong *)(param_2 + 0x50) = lVar7 + uVar10 * 0x10;
      if (lVar12 != 0) {
        __ZdlPv(lVar12);
      }
    }
    *(long **)(param_2 + 0x48) = plVar14;
  }
  __ZNSt3__15mutex6unlockEv(param_2);
  *param_1 = lVar9;
  param_1[1] = (long)plVar15;
  FUN_1092b75a4(&uStack_88);
  return;
code_r0x0001092b6cbc:
  plVar15 = plVar6;
  if (plVar6 == plVar14) goto joined_r0x0001092b6d98;
  goto LAB_1092b6ca8;
}



/* Entry: 1092b70c4; end: 1092b723f;  */

/* WARNING: Possible PIC construction at 0x0001092b72b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001092b72b8) */
/* WARNING: Removing unreachable block (ram,0x0001092b72c0) */

void FUN_1092b70c4(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  undefined8 *puVar13;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar14;
  undefined8 uVar15;
  undefined1 auStack_60 [8];
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar9 = *param_1;
  if ((undefined8 *)(param_1[2] - lVar9 >> 4) < param_2) {
    if ((ulong)param_2 >> 0x3c != 0) {
      uVar15 = 0x1092b7160;
      FUN_1092b74fc();
      puVar5 = auStack_60;
SUB_1092b7160:
      puVar14 = (undefined1 *)((long)register0x00000008 + -0x10);
      register0x00000008 = (BADSPACEBASE *)(puVar5 + -0x60);
      *(long **)(puVar5 + -0x30) = unaff_x22;
      *(long **)(puVar5 + -0x28) = unaff_x21;
      *(undefined8 **)(puVar5 + -0x20) = unaff_x20;
      *(long **)(puVar5 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar5 + -0x10) = puVar14;
      *(undefined8 *)(puVar5 + -8) = uVar15;
      puVar7 = (undefined8 *)param_1[1];
      if (puVar7 < (undefined8 *)param_1[2]) {
        uVar15 = *param_2;
        puVar13 = puVar7 + 2;
        puVar7[1] = param_2[1];
        *puVar7 = uVar15;
        *param_2 = 0;
        param_2[1] = 0;
      }
      else {
        unaff_x21 = (long *)((long)puVar7 - *param_1);
        uVar1 = ((long)unaff_x21 >> 4) + 1;
        if (uVar1 >> 0x3c != 0) {
          unaff_x19 = param_1;
          unaff_x20 = param_2;
          FUN_1092b74fc();
          *(undefined8 *)(puVar5 + -0xa0) = unaff_x24;
          *(long **)(puVar5 + -0x98) = unaff_x23;
          *(long **)(puVar5 + -0x90) = unaff_x22;
          *(long **)(puVar5 + -0x88) = unaff_x21;
          *(undefined8 **)(puVar5 + -0x80) = param_2;
          *(long **)(puVar5 + -0x78) = param_1;
          *(undefined1 **)(puVar5 + -0x70) = puVar5 + -0x10;
          *(code **)(puVar5 + -0x68) = FUN_1092b7240;
          *(undefined8 *)(puVar5 + -0xb8) = 0;
          *(undefined8 *)(puVar5 + -0xb0) = 0;
          *(undefined8 *)(puVar5 + -0xa8) = 0;
          __ZNSt3__15mutex4lockEv();
          FUN_1092b70c4(puVar5 + -0xb8,unaff_x19[9] - unaff_x19[8] >> 4);
          unaff_x22 = (long *)unaff_x19[8];
          unaff_x23 = (long *)unaff_x19[9];
          do {
            if (unaff_x22 == unaff_x23) {
              (*(code *)*unaff_x20)
                        (*(long *)(puVar5 + -0xb8),
                         *(long *)(puVar5 + -0xb0) - *(long *)(puVar5 + -0xb8) >> 4,unaff_x20);
              __ZNSt3__15mutex6unlockEv(unaff_x19);
              FUN_1092b75a4(puVar5 + -0xb8);
              return;
            }
            plVar6 = (long *)unaff_x22[1];
            if (plVar6 != (long *)0x0) {
              __ZNSt3__119__shared_weak_count4lockEv();
              *(long **)(puVar5 + -0xc0) = plVar6;
              if (plVar6 != (long *)0x0) {
                lVar9 = *unaff_x22;
                *(long *)(puVar5 + -200) = lVar9;
                if (lVar9 != 0) goto code_r0x0001092b72ac;
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
                unaff_x21 = plVar6;
                if (lVar9 == 0) {
                  (**(code **)(*plVar6 + 0x10))(plVar6);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
                }
              }
            }
            unaff_x22 = unaff_x22 + 2;
          } while( true );
        }
        uVar10 = param_1[2] - *param_1;
        uVar12 = (long)uVar10 >> 3;
        if (uVar12 <= uVar1) {
          uVar12 = uVar1;
        }
        if (0x7fffffffffffffef < uVar10) {
          uVar12 = 0xfffffffffffffff;
        }
        *(long **)(puVar5 + -0x38) = param_1;
        puVar8 = param_2;
        FUN_1092b7510();
        puVar7 = (undefined8 *)(uVar12 + (long)unaff_x21);
        uVar15 = *param_2;
        puVar13 = puVar7 + 2;
        puVar7[1] = param_2[1];
        *puVar7 = uVar15;
        *param_2 = 0;
        param_2[1] = 0;
        lVar11 = (long)puVar7 - (param_1[1] - *param_1);
        _memcpy(lVar11);
        lVar9 = *param_1;
        *param_1 = lVar11;
        param_1[1] = (long)puVar13;
        lVar11 = param_1[2];
        param_1[2] = uVar12 + (long)puVar8 * 0x10;
        *(long *)(puVar5 + -0x48) = lVar9;
        *(long *)(puVar5 + -0x40) = lVar11;
        *(long *)(puVar5 + -0x58) = lVar9;
        *(long *)(puVar5 + -0x50) = lVar9;
        func_0x0001092b7544(puVar5 + -0x58);
      }
      param_1[1] = (long)puVar13;
      return;
    }
    lVar11 = param_1[1];
    puVar7 = param_2;
    plStack_38 = param_1;
    FUN_1092b7510();
    lVar9 = (long)param_2 + (lVar11 - lVar9);
    lVar11 = lVar9 - (param_1[1] - *param_1);
    _memcpy(lVar11);
    lStack_58 = *param_1;
    *param_1 = lVar11;
    param_1[1] = lVar9;
    lStack_40 = param_1[2];
    param_1[2] = (long)(param_2 + (long)puVar7 * 2);
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x0001092b7544(&lStack_58);
  }
  return;
code_r0x0001092b72ac:
  param_1 = (long *)(puVar5 + -0xb8);
  param_2 = (undefined8 *)(puVar5 + -200);
  uVar15 = 0x1092b72b8;
  puVar5 = puVar5 + -0xd0;
  goto SUB_1092b7160;
}



/* Entry: 1092b7240; end: 1092b7377;  */

void FUN_1092b7240(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lStack_68;
  long *plStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lStack_58 = 0;
  lStack_50 = 0;
  uStack_48 = 0;
  __ZNSt3__15mutex4lockEv();
  FUN_1092b70c4(&lStack_58,*(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x40) >> 4);
  plVar1 = *(long **)(param_1 + 0x48);
  for (plVar7 = *(long **)(param_1 + 0x40); plVar7 != plVar1; plVar7 = plVar7 + 2) {
    plVar5 = (long *)plVar7[1];
    if (((plVar5 != (long *)0x0) &&
        (__ZNSt3__119__shared_weak_count4lockEv(), plStack_60 = plVar5, plVar5 != (long *)0x0)) &&
       ((lStack_68 = *plVar7, lStack_68 == 0 ||
        (func_0x0001092b7160(&lStack_58,&lStack_68), plStack_60 != (long *)0x0)))) {
      plVar4 = plStack_60;
      plVar5 = plStack_60 + 1;
      do {
        lVar6 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_60 + 0x10))(plStack_60);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  (*(code *)*param_2)(lStack_58,lStack_50 - lStack_58 >> 4,param_2);
  __ZNSt3__15mutex6unlockEv(param_1);
  FUN_1092b75a4(&lStack_58);
  return;
}



/* Entry: 1092b7378; end: 1092b7497;  */

undefined ***
FUN_1092b7378(undefined ***param_1,undefined8 param_2,ulong param_3,ulong param_4,long param_5,
             undefined8 param_6)

{
  undefined ***pppuVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined ***pppuVar4;
  code **ppcVar5;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  ulong *puStack_78;
  ulong *puStack_70;
  ulong *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar1 = param_1;
  uStack_98 = param_3;
  uStack_90 = param_2;
  FUN_1092bac68();
  uVar2 = -(long)pppuVar1;
  uStack_a0 = param_4 & uVar2;
  FUN_1092bac68();
  ppcVar5 = (code **)((long)pppuVar1 + param_4 + param_5 + -1);
  FUN_1092bac68();
  uStack_a8 = param_3;
  if (((ulong)ppcVar5 & -(long)pppuVar1) <= param_3) {
    uStack_a8 = (ulong)ppcVar5 & -(long)pppuVar1;
  }
  if ((param_4 & uVar2) < uStack_a8) {
    pcStack_88 = FUN_1092b7600;
    ppuStack_80 = &PTR_FUN_110ae8f78;
    ppcVar5 = &pcStack_88;
    puStack_78 = &uStack_98;
    puStack_70 = &uStack_a8;
    puStack_68 = &uStack_a0;
    puStack_58 = &uStack_90;
    uStack_60 = param_6;
    FUN_1092b7240(param_1,&pcStack_88);
    pppuVar1 = &ppuStack_80;
    (*(code *)*ppuStack_80)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_80)(ppcVar5 + 1);
    __Unwind_Resume();
    __ZNSt3__15mutex4lockEv();
    ppuVar3 = pppuVar1[8];
    if (ppuVar3 == pppuVar1[9]) {
      pppuVar4 = (undefined ***)0x0;
    }
    else {
      pppuVar4 = (undefined ***)0x0;
      do {
        if ((ppuVar3[1] != (undefined *)0x0) && (*(long *)(ppuVar3[1] + 8) != -1)) {
          pppuVar4 = (undefined ***)((long)pppuVar4 + 1);
        }
        ppuVar3 = ppuVar3 + 2;
      } while (ppuVar3 != pppuVar1[9]);
    }
    __ZNSt3__15mutex6unlockEv(pppuVar1);
    return pppuVar4;
  }
  return pppuVar1;
}



/* Entry: 1092b7498; end: 1092b74fb;  */

long FUN_1092b7498(long param_1)

{
  long lVar1;
  long lVar2;
  
  __ZNSt3__15mutex4lockEv();
  lVar1 = *(long *)(param_1 + 0x40);
  if (lVar1 == *(long *)(param_1 + 0x48)) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    do {
      if ((*(long *)(lVar1 + 8) != 0) && (*(long *)(*(long *)(lVar1 + 8) + 8) != -1)) {
        lVar2 = lVar2 + 1;
      }
      lVar1 = lVar1 + 0x10;
    } while (lVar1 != *(long *)(param_1 + 0x48));
  }
  __ZNSt3__15mutex6unlockEv(param_1);
  return lVar2;
}



/* Entry: 1092b74fc; end: 1092b750f;  */

undefined1  [16] FUN_1092b74fc(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)plVar1 >> 0x3c == 0) {
    lVar2 = (long)plVar1 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = plVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000104c4f740();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    FUN_1092b0918();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 1092b7510; end: 1092b758f;  */

undefined1  [16] FUN_1092b7510(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_1 >> 0x3c == 0) {
    lVar1 = (long)param_1 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104c4f740();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    FUN_1092b0918();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 1092b7590; end: 1092b75a3;  */

void FUN_1092b7590(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    lVar2 = plVar1[1];
    lVar3 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x10;
        FUN_1092b0918();
      } while (lVar2 != lVar4);
      lVar3 = *plVar1;
    }
    plVar1[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 1092b75a4; end: 1092b75ff;  */

void FUN_1092b75a4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_1092b0918();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 1092b7600; end: 1092b789b;  */

void FUN_1092b7600(long *param_1,long param_2,long param_3)

{
  ulong ****ppppuVar1;
  ulong *puVar2;
  ulong ***pppuVar3;
  code *pcVar4;
  ulong ****ppppuVar5;
  ulong ****ppppuVar6;
  ulong ****ppppuVar7;
  long lVar8;
  ulong ***pppuVar9;
  long lVar10;
  ulong uVar11;
  ulong ***pppuVar12;
  ulong uVar13;
  ulong ***pppuVar14;
  long lVar15;
  ulong ***pppuVar16;
  undefined8 *puVar17;
  ulong ***pppuStack_78;
  ulong ***pppuStack_70;
  ulong ***pppuStack_68;
  
  pppuStack_78 = (ulong ***)0x0;
  pppuStack_70 = (ulong ***)0x0;
  pppuStack_68 = (ulong ***)0x0;
  ppppuVar5 = &pppuStack_78;
  FUN_1092b789c();
  if (param_2 != 0) {
    param_2 = param_2 << 4;
    do {
      uVar13 = *(ulong *)(*param_1 + 0x10);
      FUN_1092bac68();
      lVar10 = *(long *)(*param_1 + 8);
      lVar15 = *(long *)(*param_1 + 0x10);
      ppppuVar6 = ppppuVar5;
      FUN_1092bac68();
      ppppuVar7 = ppppuVar6;
      FUN_1092bac68();
      pppuVar16 = (ulong ***)(uVar13 & -(long)ppppuVar5);
      pppuVar9 = (ulong ***)((long)ppppuVar6 + lVar15 + lVar10 + -1 & -(long)ppppuVar7);
      puVar2 = *(ulong **)(param_3 + 0x18);
      pppuVar12 = (ulong ***)**(undefined8 **)(param_3 + 0x10);
      if (pppuVar9 <= (ulong ***)**(undefined8 **)(param_3 + 0x10)) {
        pppuVar12 = pppuVar9;
      }
      pppuVar9 = (ulong ***)*puVar2;
      ppppuVar5 = ppppuVar7;
      ppppuVar6 = (ulong ****)pppuStack_78;
      if (pppuVar16 < pppuVar9) {
        puVar17 = *(undefined8 **)(param_3 + 0x20);
        pppuVar14 = (ulong ***)*puVar17;
        if (pppuVar14 < pppuVar12) {
          if (pppuStack_70 < pppuStack_68) {
            if (pppuVar16 <= pppuVar14) {
              pppuVar16 = pppuVar14;
            }
            *pppuStack_70 = (ulong **)pppuVar16;
            if (pppuVar9 < pppuVar12) {
              pppuVar12 = (ulong ***)*puVar2;
            }
            pppuStack_70[1] = (ulong **)pppuVar12;
            pppuStack_70 = pppuStack_70 + 2;
          }
          else {
            lVar15 = (long)pppuStack_70 - (long)pppuStack_78;
            lVar10 = lVar15 >> 4;
            uVar13 = lVar10 + 1;
            if (uVar13 >> 0x3c != 0) {
              FUN_1092b7928();
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1092b7868);
              (*pcVar4)();
            }
            uVar11 = (long)pppuStack_68 - (long)pppuStack_78 >> 3;
            if (uVar11 <= uVar13) {
              uVar11 = uVar13;
            }
            if (0x7fffffffffffffef < (ulong)((long)pppuStack_68 - (long)pppuStack_78)) {
              uVar11 = 0xfffffffffffffff;
            }
            if (uVar11 == 0) {
              ppppuVar7 = (ulong ****)0x0;
              lVar8 = lVar15;
            }
            else {
              ppppuVar7 = &pppuStack_78;
              FUN_1092b793c();
              lVar10 = (long)pppuStack_70 - (long)pppuStack_78 >> 4;
              lVar8 = (long)pppuStack_70 - (long)pppuStack_78;
            }
            pppuVar3 = pppuStack_78;
            if (pppuVar16 < pppuVar14) {
              pppuVar16 = (ulong ***)*puVar17;
            }
            puVar17 = (undefined8 *)((long)ppppuVar7 + lVar15);
            *puVar17 = pppuVar16;
            if (pppuVar9 < pppuVar12) {
              pppuVar12 = (ulong ***)*puVar2;
            }
            puVar17[1] = pppuVar12;
            ppppuVar1 = (ulong ****)(puVar17 + 2);
            ppppuVar6 = (ulong ****)(puVar17 + lVar10 * -2);
            _memcpy(ppppuVar6,pppuVar3,lVar8);
            ppppuVar5 = (ulong ****)pppuStack_78;
            pppuStack_70 = (ulong ***)ppppuVar1;
            pppuStack_68 = (ulong ***)(ppppuVar7 + uVar11 * 2);
            if ((ulong ****)pppuStack_78 != (ulong ****)0x0) {
              pppuStack_78 = (ulong ***)ppppuVar6;
              __ZdlPv();
              ppppuVar6 = (ulong ****)pppuStack_78;
              pppuStack_70 = (ulong ***)ppppuVar1;
            }
          }
        }
      }
      pppuStack_78 = (ulong ***)ppppuVar6;
      param_1 = param_1 + 2;
      param_2 = param_2 + -0x10;
    } while (param_2 != 0);
  }
  lVar10 = 0;
  if (pppuStack_70 != pppuStack_78) {
    lVar10 = LZCOUNT((long)pppuStack_70 - (long)pppuStack_78 >> 4) * -2 + 0x7e;
  }
  FUN_1092b7970(pppuStack_78,pppuStack_70,lVar10,1);
  pppuVar16 = pppuStack_70;
  pppuVar12 = (ulong ***)**(undefined8 **)(param_3 + 0x20);
  for (ppppuVar5 = (ulong ****)pppuStack_78; ppppuVar5 != (ulong ****)pppuVar16;
      ppppuVar5 = ppppuVar5 + 2) {
    pppuVar9 = ppppuVar5[1];
    lVar10 = (long)*ppppuVar5 - (long)pppuVar12;
    if (pppuVar12 <= *ppppuVar5 && lVar10 != 0) {
      (*(code *)**(undefined8 **)(param_3 + 0x28))
                (**(long **)(param_3 + 0x30) + (long)pppuVar12,lVar10);
    }
    if (pppuVar12 <= pppuVar9) {
      pppuVar12 = pppuVar9;
    }
  }
  lVar10 = (long)**(undefined8 **)(param_3 + 0x18) - (long)pppuVar12;
  if (pppuVar12 <= (ulong ***)**(undefined8 **)(param_3 + 0x18) && lVar10 != 0) {
    (*(code *)**(undefined8 **)(param_3 + 0x28))
              (**(long **)(param_3 + 0x30) + (long)pppuVar12,lVar10);
  }
  if ((ulong ****)pppuStack_78 != (ulong ****)0x0) {
    pppuStack_70 = pppuStack_78;
    __ZdlPv();
  }
  return;
}



/* Entry: 1092b789c; end: 1092b7927;  */

void FUN_1092b789c(long *param_1,ulong *param_2,long param_3,ulong param_4)

{
  bool bVar1;
  bool bVar2;
  long *plVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  ulong *puVar22;
  
  lVar8 = *param_1;
  if ((ulong *)(param_1[2] - lVar8 >> 4) < param_2) {
    if ((ulong)param_2 >> 0x3c != 0) {
      FUN_1092b7928();
      puVar4 = (ulong *)&DAT_10f62a4d8;
      func_0x000104c4f6cc();
      if ((ulong)param_2 >> 0x3c == 0) {
        __Znwm((long)param_2 << 4);
        return;
      }
      func_0x000104c4f740();
LAB_1092b79a4:
      puVar10 = param_2 + -2;
      puVar16 = puVar4;
LAB_1092b79b8:
      while( true ) {
        puVar4 = puVar16;
        uVar9 = (long)param_2 - (long)puVar4 >> 4;
        if (uVar9 - 2 == 0 || (long)uVar9 < 2) {
          if (uVar9 < 2) {
            return;
          }
          if (uVar9 == 2) {
            uVar9 = param_2[-2];
            uVar12 = *puVar4;
            bVar1 = uVar9 < uVar12;
            if (uVar9 == uVar12) {
              bVar1 = param_2[-1] != puVar4[1] && param_2[-1] < puVar4[1];
            }
            if (!bVar1) {
              return;
            }
            *puVar4 = uVar9;
            param_2[-2] = uVar12;
            uVar9 = puVar4[1];
            puVar4[1] = param_2[-1];
            param_2[-1] = uVar9;
            return;
          }
        }
        else {
          if (uVar9 == 3) {
            puVar16 = puVar4 + 2;
            uVar9 = *puVar16;
            uVar12 = *puVar4;
            bVar1 = uVar9 < uVar12;
            if (uVar9 == uVar12) {
              bVar1 = puVar4[3] != puVar4[1] && puVar4[3] < puVar4[1];
            }
            uVar15 = *puVar10;
            bVar2 = uVar15 < uVar9;
            if (bVar1) {
              if (uVar15 == uVar9) {
                bVar2 = param_2[-1] != puVar4[3] && param_2[-1] < puVar4[3];
              }
              if (bVar2) {
                puVar5 = puVar4 + 1;
                *puVar4 = uVar15;
                *puVar10 = uVar12;
              }
              else {
                *puVar4 = uVar9;
                *puVar16 = uVar12;
                puVar5 = puVar4 + 3;
                uVar15 = puVar4[1];
                puVar4[1] = *puVar5;
                *puVar5 = uVar15;
                uVar12 = *puVar10;
                uVar9 = *puVar16;
                bVar1 = uVar12 < uVar9;
                if (uVar12 == uVar9) {
                  bVar1 = param_2[-1] != uVar15 && param_2[-1] < uVar15;
                }
                if (!bVar1) {
                  return;
                }
                *puVar16 = uVar12;
                *puVar10 = uVar9;
              }
              puVar10 = param_2 + -1;
            }
            else {
              if (uVar15 == uVar9) {
                bVar2 = param_2[-1] != puVar4[3] && param_2[-1] < puVar4[3];
              }
              if (!bVar2) {
                return;
              }
              *puVar16 = uVar15;
              *puVar10 = uVar9;
              puVar10 = puVar4 + 3;
              uVar9 = *puVar10;
              *puVar10 = param_2[-1];
              param_2[-1] = uVar9;
              uVar9 = *puVar16;
              uVar12 = *puVar4;
              bVar1 = uVar9 < uVar12;
              if (uVar9 == uVar12) {
                bVar1 = *puVar10 != puVar4[1] && *puVar10 < puVar4[1];
              }
              if (!bVar1) {
                return;
              }
              puVar5 = puVar4 + 1;
              *puVar4 = uVar9;
              *puVar16 = uVar12;
            }
            uVar9 = *puVar5;
            *puVar5 = *puVar10;
            *puVar10 = uVar9;
            return;
          }
          if (uVar9 == 4) {
            FUN_1092b839c(puVar4,puVar4 + 2,puVar4 + 4);
            uVar9 = param_2[-2];
            uVar12 = puVar4[4];
            bVar1 = uVar9 < uVar12;
            if (uVar9 == uVar12) {
              bVar1 = param_2[-1] != puVar4[5] && param_2[-1] < puVar4[5];
            }
            if (!bVar1) {
              return;
            }
            puVar4[4] = uVar9;
            param_2[-2] = uVar12;
            uVar9 = puVar4[5];
            puVar4[5] = param_2[-1];
            param_2[-1] = uVar9;
            uVar9 = puVar4[4];
            uVar12 = puVar4[2];
            bVar1 = uVar9 < uVar12;
            if (uVar9 == uVar12) {
              bVar1 = puVar4[5] != puVar4[3] && puVar4[5] < puVar4[3];
            }
            if (!bVar1) {
              return;
            }
            uVar13 = puVar4[3];
            uVar15 = puVar4[5];
            puVar4[2] = uVar9;
            puVar4[3] = uVar15;
            puVar4[4] = uVar12;
            puVar4[5] = uVar13;
            uVar12 = *puVar4;
            bVar1 = uVar9 < uVar12;
            if (uVar9 == uVar12) {
              bVar1 = uVar15 != puVar4[1] && uVar15 < puVar4[1];
            }
            if (!bVar1) {
              return;
            }
            uVar13 = puVar4[1];
            *puVar4 = uVar9;
            puVar4[1] = uVar15;
            puVar4[2] = uVar12;
            puVar4[3] = uVar13;
            return;
          }
          if (uVar9 == 5) {
            puVar16 = puVar4 + 2;
            puVar5 = puVar4 + 4;
            puVar6 = puVar4 + 6;
            FUN_1092b839c();
            uVar9 = *puVar6;
            uVar12 = *puVar5;
            bVar1 = uVar9 < uVar12;
            if (uVar9 == uVar12) {
              bVar1 = puVar4[7] != puVar4[5] && puVar4[7] < puVar4[5];
            }
            if (bVar1) {
              *puVar5 = uVar9;
              *puVar6 = uVar12;
              uVar9 = puVar4[5];
              puVar4[5] = puVar4[7];
              puVar4[7] = uVar9;
              uVar9 = *puVar5;
              uVar12 = *puVar16;
              bVar1 = uVar9 < uVar12;
              if (uVar9 == uVar12) {
                bVar1 = puVar4[5] != puVar4[3] && puVar4[5] < puVar4[3];
              }
              if (bVar1) {
                *puVar16 = uVar9;
                *puVar5 = uVar12;
                uVar9 = puVar4[3];
                puVar4[3] = puVar4[5];
                puVar4[5] = uVar9;
                uVar9 = *puVar16;
                uVar12 = *puVar4;
                bVar1 = uVar9 < uVar12;
                if (uVar9 == uVar12) {
                  bVar1 = puVar4[3] != puVar4[1] && puVar4[3] < puVar4[1];
                }
                if (bVar1) {
                  *puVar4 = uVar9;
                  *puVar16 = uVar12;
                  uVar9 = puVar4[1];
                  puVar4[1] = puVar4[3];
                  puVar4[3] = uVar9;
                }
              }
            }
            uVar9 = *puVar10;
            uVar12 = *puVar6;
            bVar1 = uVar9 < uVar12;
            if (uVar9 == uVar12) {
              bVar1 = param_2[-1] != puVar4[7] && param_2[-1] < puVar4[7];
            }
            if (bVar1) {
              *puVar6 = uVar9;
              *puVar10 = uVar12;
              uVar9 = puVar4[7];
              puVar4[7] = param_2[-1];
              param_2[-1] = uVar9;
              uVar9 = *puVar6;
              uVar12 = *puVar5;
              bVar1 = uVar9 < uVar12;
              if (uVar9 == uVar12) {
                bVar1 = puVar4[7] != puVar4[5] && puVar4[7] < puVar4[5];
              }
              if (bVar1) {
                *puVar5 = uVar9;
                *puVar6 = uVar12;
                uVar9 = puVar4[5];
                puVar4[5] = puVar4[7];
                puVar4[7] = uVar9;
                uVar9 = *puVar5;
                uVar12 = *puVar16;
                bVar1 = uVar9 < uVar12;
                if (uVar9 == uVar12) {
                  bVar1 = puVar4[5] != puVar4[3] && puVar4[5] < puVar4[3];
                }
                if (bVar1) {
                  *puVar16 = uVar9;
                  *puVar5 = uVar12;
                  uVar9 = puVar4[3];
                  puVar4[3] = puVar4[5];
                  puVar4[5] = uVar9;
                  uVar9 = *puVar16;
                  uVar12 = *puVar4;
                  bVar1 = uVar9 < uVar12;
                  if (uVar9 == uVar12) {
                    bVar1 = puVar4[3] != puVar4[1] && puVar4[3] < puVar4[1];
                  }
                  if (bVar1) {
                    *puVar4 = uVar9;
                    *puVar16 = uVar12;
                    uVar9 = puVar4[1];
                    puVar4[1] = puVar4[3];
                    puVar4[3] = uVar9;
                  }
                }
              }
            }
            return;
          }
        }
        if ((long)uVar9 < 0x18) {
          puVar16 = puVar4 + 2;
          if ((param_4 & 1) == 0) {
            if (puVar4 == param_2 || puVar16 == param_2) {
              return;
            }
            puVar10 = puVar4 + 3;
            do {
              puVar5 = puVar16;
              uVar9 = puVar4[2];
              uVar12 = *puVar4;
              bVar1 = uVar9 < uVar12;
              if (uVar9 == uVar12) {
                bVar1 = puVar4[3] != puVar4[1] && puVar4[3] < puVar4[1];
              }
              if (bVar1) {
                uVar15 = puVar4[3];
                puVar4 = puVar10;
                do {
                  puVar16 = puVar4;
                  puVar16[-1] = uVar12;
                  *puVar16 = puVar16[-2];
                  uVar12 = puVar16[-5];
                  bVar1 = uVar9 < uVar12;
                  if (uVar9 == uVar12) {
                    bVar1 = uVar15 != puVar16[-4] && uVar15 < puVar16[-4];
                  }
                  puVar4 = puVar16 + -2;
                } while (bVar1);
                puVar16[-3] = uVar9;
                puVar16[-2] = uVar15;
              }
              puVar16 = puVar5 + 2;
              puVar10 = puVar10 + 2;
              puVar4 = puVar5;
            } while (puVar16 != param_2);
            return;
          }
          if (puVar4 == param_2 || puVar16 == param_2) {
            return;
          }
          lVar8 = 0;
          puVar10 = puVar4;
          goto LAB_1092b7f98;
        }
        if (param_3 == 0) {
          if (puVar4 == param_2) {
            return;
          }
          uVar15 = uVar9 - 2 >> 1;
          uVar12 = uVar15;
          goto LAB_1092b804c;
        }
        puVar16 = puVar4 + (uVar9 & 0xfffffffffffffffe);
        if (uVar9 < 0x81) {
          FUN_1092b839c(puVar16,puVar4,puVar10);
        }
        else {
          FUN_1092b839c(puVar4,puVar16,puVar10);
          FUN_1092b839c(puVar4 + 2,puVar16 + -2,param_2 + -4);
          FUN_1092b839c(puVar4 + 4,puVar16 + 2,param_2 + -6);
          FUN_1092b839c(puVar16 + -2,puVar16,puVar16 + 2);
          uVar12 = puVar4[1];
          uVar9 = *puVar4;
          uVar15 = *puVar16;
          puVar4[1] = puVar16[1];
          *puVar4 = uVar15;
          puVar16[1] = uVar12;
          *puVar16 = uVar9;
        }
        param_3 = param_3 + -1;
        uVar9 = *puVar4;
        if ((param_4 & 1) != 0) break;
        bVar1 = puVar4[-2] < uVar9;
        if (puVar4[-2] == uVar9) {
          bVar1 = puVar4[-1] != puVar4[1] && puVar4[-1] < puVar4[1];
        }
        if (bVar1) break;
        uVar12 = puVar4[1];
        bVar1 = uVar9 < *puVar10;
        if (uVar9 == *puVar10) {
          bVar1 = uVar12 != param_2[-1] && uVar12 < param_2[-1];
        }
        puVar5 = puVar4;
        if (bVar1) {
          do {
            puVar16 = puVar5 + 2;
            bVar1 = uVar9 < *puVar16;
            if (uVar9 == *puVar16) {
              bVar1 = uVar12 != puVar5[3] && uVar12 < puVar5[3];
            }
            puVar5 = puVar16;
          } while (!bVar1);
        }
        else {
          do {
            puVar16 = puVar5 + 2;
            if (param_2 <= puVar16) break;
            bVar1 = uVar9 < *puVar16;
            if (uVar9 == *puVar16) {
              bVar1 = uVar12 != puVar5[3] && uVar12 < puVar5[3];
            }
            puVar5 = puVar16;
          } while (!bVar1);
        }
        puVar5 = param_2;
        puVar6 = param_2;
        if (puVar16 < param_2) {
          do {
            puVar5 = puVar6 + -2;
            bVar1 = uVar9 < *puVar5;
            if (uVar9 == *puVar5) {
              bVar1 = uVar12 != puVar6[-1] && uVar12 < puVar6[-1];
            }
            puVar6 = puVar5;
          } while (bVar1);
        }
        if (puVar16 < puVar5) {
          uVar15 = *puVar16;
          uVar13 = *puVar5;
          do {
            *puVar16 = uVar13;
            *puVar5 = uVar15;
            uVar15 = puVar16[1];
            puVar16[1] = puVar5[1];
            puVar5[1] = uVar15;
            puVar6 = puVar16;
            do {
              puVar16 = puVar6 + 2;
              uVar15 = *puVar16;
              bVar1 = uVar9 < uVar15;
              if (uVar9 == uVar15) {
                bVar1 = uVar12 != puVar6[3] && uVar12 < puVar6[3];
              }
              puVar14 = puVar5;
              puVar6 = puVar16;
            } while (!bVar1);
            do {
              puVar5 = puVar14 + -2;
              uVar13 = *puVar5;
              bVar1 = uVar9 < uVar13;
              if (uVar9 == uVar13) {
                bVar1 = uVar12 != puVar14[-1] && uVar12 < puVar14[-1];
              }
              puVar14 = puVar5;
            } while (bVar1);
          } while (puVar16 < puVar5);
        }
        if (puVar16 + -2 != puVar4) {
          *puVar4 = puVar16[-2];
          puVar4[1] = puVar16[-1];
        }
        param_4 = 0;
        puVar16[-2] = uVar9;
        puVar16[-1] = uVar12;
      }
      lVar8 = 0;
      uVar12 = puVar4[1];
      do {
        uVar15 = *(ulong *)((long)puVar4 + lVar8 + 0x10);
        bVar1 = uVar15 < uVar9;
        if (uVar15 == uVar9) {
          uVar13 = *(ulong *)((long)puVar4 + lVar8 + 0x18);
          bVar1 = uVar13 != uVar12 && uVar13 < uVar12;
        }
        lVar8 = lVar8 + 0x10;
      } while (bVar1);
      puVar5 = (ulong *)((long)puVar4 + lVar8);
      puVar16 = param_2;
      if (lVar8 == 0x10) {
        do {
          puVar6 = puVar16;
          if (puVar16 <= puVar5) break;
          puVar6 = puVar16 + -2;
          bVar1 = *puVar6 < uVar9;
          if (*puVar6 == uVar9) {
            bVar1 = puVar16[-1] != uVar12 && puVar16[-1] < uVar12;
          }
          puVar16 = puVar6;
        } while (!bVar1);
      }
      else {
        do {
          puVar6 = puVar16 + -2;
          bVar1 = *puVar6 < uVar9;
          if (*puVar6 == uVar9) {
            bVar1 = puVar16[-1] != uVar12 && puVar16[-1] < uVar12;
          }
          puVar16 = puVar6;
        } while (!bVar1);
      }
      puVar16 = puVar5;
      if (puVar5 < puVar6) {
        uVar13 = *puVar6;
        puVar14 = puVar6;
        do {
          *puVar16 = uVar13;
          *puVar14 = uVar15;
          uVar15 = puVar16[1];
          puVar16[1] = puVar14[1];
          puVar14[1] = uVar15;
          puVar22 = puVar16;
          do {
            puVar16 = puVar22 + 2;
            uVar15 = *puVar16;
            bVar1 = uVar15 < uVar9;
            if (uVar15 == uVar9) {
              bVar1 = puVar22[3] != uVar12 && puVar22[3] < uVar12;
            }
            puVar17 = puVar14;
            puVar22 = puVar16;
          } while (bVar1);
          do {
            puVar14 = puVar17 + -2;
            uVar13 = *puVar14;
            bVar1 = uVar13 < uVar9;
            if (uVar13 == uVar9) {
              bVar1 = puVar17[-1] != uVar12 && puVar17[-1] < uVar12;
            }
            puVar17 = puVar14;
          } while (!bVar1);
        } while (puVar16 < puVar14);
      }
      puVar14 = puVar16 + -2;
      if (puVar14 != puVar4) {
        *puVar4 = puVar16[-2];
        puVar4[1] = puVar16[-1];
      }
      puVar16[-2] = uVar9;
      puVar16[-1] = uVar12;
      if (puVar6 <= puVar5) {
        puVar5 = puVar4;
        FUN_1092b8750(puVar4,puVar14);
        puVar6 = puVar16;
        FUN_1092b8750(puVar16,param_2);
        if ((int)puVar6 != 0) goto LAB_1092b7ddc;
        if (((ulong)puVar5 & 1) != 0) goto LAB_1092b79b8;
      }
      FUN_1092b7970(puVar4,puVar14,param_3,(uint)param_4 & 1);
      param_4 = 0;
      goto LAB_1092b79b8;
    }
    lVar11 = param_1[1];
    plVar3 = param_1;
    FUN_1092b793c();
    lVar8 = (long)plVar3 + (lVar11 - lVar8);
    lVar21 = lVar8 - (param_1[1] - *param_1);
    _memcpy(lVar21);
    lVar11 = *param_1;
    *param_1 = lVar21;
    param_1[1] = lVar8;
    param_1[2] = (long)(plVar3 + (long)param_2 * 2);
    if (lVar11 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
LAB_1092b7f98:
  puVar5 = puVar16;
  uVar9 = puVar10[2];
  uVar12 = *puVar10;
  bVar1 = uVar9 < uVar12;
  if (uVar9 == uVar12) {
    bVar1 = puVar10[3] != puVar10[1] && puVar10[3] < puVar10[1];
  }
  if (bVar1) {
    uVar15 = puVar10[3];
    lVar11 = lVar8;
    do {
      lVar21 = lVar11;
      *(ulong *)((long)puVar4 + lVar21 + 0x10) = uVar12;
      *(undefined8 *)((long)puVar4 + lVar21 + 0x18) = *(undefined8 *)((long)puVar4 + lVar21 + 8);
      puVar16 = puVar4;
      if (lVar21 == 0) goto LAB_1092b801c;
      uVar12 = *(ulong *)((long)puVar4 + lVar21 + -0x10);
      bVar1 = uVar9 < uVar12;
      if (uVar9 == uVar12) {
        uVar13 = *(ulong *)((long)puVar4 + lVar21 + -8);
        bVar1 = uVar15 != uVar13 && uVar15 < uVar13;
      }
      lVar11 = lVar21 + -0x10;
    } while (bVar1);
    puVar16 = (ulong *)((long)puVar4 + lVar21);
LAB_1092b801c:
    *puVar16 = uVar9;
    puVar16[1] = uVar15;
  }
  puVar16 = puVar5 + 2;
  lVar8 = lVar8 + 0x10;
  puVar10 = puVar5;
  if (puVar16 == param_2) {
    return;
  }
  goto LAB_1092b7f98;
LAB_1092b804c:
  do {
    if ((long)uVar12 <= (long)uVar15) {
      uVar20 = uVar12 << 1 | 1;
      puVar16 = puVar4 + uVar20 * 2;
      uVar13 = uVar12 * 2 + 2;
      if ((long)uVar13 < (long)uVar9) {
        uVar18 = puVar16[2];
        bVar1 = *puVar16 < uVar18;
        if (*puVar16 == uVar18) {
          bVar1 = puVar16[1] != puVar16[3] && puVar16[1] < puVar16[3];
        }
        if (bVar1) {
          puVar16 = puVar16 + 2;
          uVar20 = uVar13;
        }
      }
      puVar10 = puVar4 + uVar12 * 2;
      uVar18 = *puVar16;
      uVar13 = *puVar10;
      bVar1 = uVar18 < uVar13;
      if (uVar18 == uVar13) {
        bVar1 = puVar16[1] != puVar10[1] && puVar16[1] < puVar10[1];
      }
      if (!bVar1) {
        uVar19 = puVar10[1];
        do {
          puVar5 = puVar16;
          *puVar10 = uVar18;
          puVar10[1] = puVar5[1];
          if ((long)uVar15 < (long)uVar20) break;
          uVar7 = uVar20 << 1 | 1;
          puVar16 = puVar4 + uVar7 * 2;
          uVar18 = uVar20 * 2 + 2;
          uVar20 = uVar7;
          if ((long)uVar18 < (long)uVar9) {
            uVar7 = puVar16[2];
            bVar1 = *puVar16 < uVar7;
            if (*puVar16 == uVar7) {
              bVar1 = puVar16[1] != puVar16[3] && puVar16[1] < puVar16[3];
            }
            if (bVar1) {
              puVar16 = puVar16 + 2;
              uVar20 = uVar18;
            }
          }
          uVar18 = *puVar16;
          bVar1 = uVar18 < uVar13;
          if (uVar18 == uVar13) {
            bVar1 = puVar16[1] != uVar19 && puVar16[1] < uVar19;
          }
          puVar10 = puVar5;
        } while (!bVar1);
        *puVar5 = uVar13;
        puVar5[1] = uVar19;
      }
    }
    bVar1 = uVar12 != 0;
    uVar12 = uVar12 - 1;
  } while (bVar1);
  do {
    uVar12 = *puVar4;
    uVar15 = puVar4[1];
    puVar16 = puVar4;
    uVar13 = 0;
    do {
      uVar18 = uVar13 << 1 | 1;
      uVar20 = uVar13 * 2 + 2;
      puVar10 = puVar16 + uVar13 * 2 + 2;
      if ((long)uVar20 < (long)uVar9) {
        uVar19 = puVar16[uVar13 * 2 + 4];
        bVar1 = puVar16[uVar13 * 2 + 2] < uVar19;
        if (puVar16[uVar13 * 2 + 2] == uVar19) {
          bVar1 = puVar16[uVar13 * 2 + 3] != puVar16[uVar13 * 2 + 5] &&
                  puVar16[uVar13 * 2 + 3] < puVar16[uVar13 * 2 + 5];
        }
        if (bVar1) {
          puVar10 = puVar16 + uVar13 * 2 + 4;
          uVar18 = uVar20;
        }
      }
      *puVar16 = *puVar10;
      puVar16[1] = puVar10[1];
      puVar16 = puVar10;
      uVar13 = uVar18;
    } while ((long)uVar18 <= (long)(uVar9 - 2 >> 1));
    if (puVar10 == param_2 + -2) {
      *puVar10 = uVar12;
      puVar10[1] = uVar15;
    }
    else {
      *puVar10 = param_2[-2];
      puVar10[1] = param_2[-1];
      param_2[-2] = uVar12;
      param_2[-1] = uVar15;
      lVar8 = (long)((long)puVar10 + (0x10 - (long)puVar4)) >> 4;
      if (1 < lVar8) {
        uVar12 = lVar8 - 2U >> 1;
        puVar16 = puVar4 + uVar12 * 2;
        uVar13 = *puVar16;
        uVar15 = *puVar10;
        bVar1 = uVar13 < uVar15;
        if (uVar13 == uVar15) {
          bVar1 = puVar16[1] != puVar10[1] && puVar16[1] < puVar10[1];
        }
        if (bVar1) {
          uVar20 = puVar10[1];
          do {
            puVar5 = puVar16;
            *puVar10 = uVar13;
            puVar10[1] = puVar5[1];
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1 >> 1;
            puVar16 = puVar4 + uVar12 * 2;
            uVar13 = *puVar16;
            bVar1 = uVar13 < uVar15;
            if (uVar13 == uVar15) {
              bVar1 = puVar16[1] != uVar20 && puVar16[1] < uVar20;
            }
            puVar10 = puVar5;
          } while (bVar1);
          *puVar5 = uVar15;
          puVar5[1] = uVar20;
        }
      }
    }
    bVar1 = (long)uVar9 < 3;
    uVar9 = uVar9 - 1;
    param_2 = param_2 + -2;
    if (bVar1) {
      return;
    }
  } while( true );
LAB_1092b7ddc:
  param_2 = puVar14;
  if (((ulong)puVar5 & 1) != 0) {
    return;
  }
  goto LAB_1092b79a4;
}



/* Entry: 1092b7928; end: 1092b793b;  */

void FUN_1092b7928(undefined8 param_1,ulong *param_2,long param_3,ulong param_4)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  ulong *puVar15;
  ulong *puVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong *puVar21;
  
  puVar4 = (ulong *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)param_2 >> 0x3c == 0) {
    __Znwm((long)param_2 << 4);
    return;
  }
  func_0x000104c4f740();
LAB_1092b79a4:
  puVar9 = param_2 + -2;
  puVar15 = puVar4;
LAB_1092b79b8:
  while( true ) {
    puVar4 = puVar15;
    uVar8 = (long)param_2 - (long)puVar4 >> 4;
    if (uVar8 - 2 == 0 || (long)uVar8 < 2) {
      if (uVar8 < 2) {
        return;
      }
      if (uVar8 == 2) {
        uVar8 = param_2[-2];
        uVar10 = *puVar4;
        bVar2 = uVar8 < uVar10;
        if (uVar8 == uVar10) {
          bVar2 = param_2[-1] != puVar4[1] && param_2[-1] < puVar4[1];
        }
        if (!bVar2) {
          return;
        }
        *puVar4 = uVar8;
        param_2[-2] = uVar10;
        uVar8 = puVar4[1];
        puVar4[1] = param_2[-1];
        param_2[-1] = uVar8;
        return;
      }
    }
    else {
      if (uVar8 == 3) {
        puVar15 = puVar4 + 2;
        uVar8 = *puVar15;
        uVar10 = *puVar4;
        bVar2 = uVar8 < uVar10;
        if (uVar8 == uVar10) {
          bVar2 = puVar4[3] != puVar4[1] && puVar4[3] < puVar4[1];
        }
        uVar13 = *puVar9;
        bVar3 = uVar13 < uVar8;
        if (bVar2) {
          if (uVar13 == uVar8) {
            bVar3 = param_2[-1] != puVar4[3] && param_2[-1] < puVar4[3];
          }
          if (bVar3) {
            puVar5 = puVar4 + 1;
            *puVar4 = uVar13;
            *puVar9 = uVar10;
          }
          else {
            *puVar4 = uVar8;
            *puVar15 = uVar10;
            puVar5 = puVar4 + 3;
            uVar13 = puVar4[1];
            puVar4[1] = *puVar5;
            *puVar5 = uVar13;
            uVar10 = *puVar9;
            uVar8 = *puVar15;
            bVar2 = uVar10 < uVar8;
            if (uVar10 == uVar8) {
              bVar2 = param_2[-1] != uVar13 && param_2[-1] < uVar13;
            }
            if (!bVar2) {
              return;
            }
            *puVar15 = uVar10;
            *puVar9 = uVar8;
          }
          puVar9 = param_2 + -1;
        }
        else {
          if (uVar13 == uVar8) {
            bVar3 = param_2[-1] != puVar4[3] && param_2[-1] < puVar4[3];
          }
          if (!bVar3) {
            return;
          }
          *puVar15 = uVar13;
          *puVar9 = uVar8;
          puVar9 = puVar4 + 3;
          uVar8 = *puVar9;
          *puVar9 = param_2[-1];
          param_2[-1] = uVar8;
          uVar8 = *puVar15;
          uVar10 = *puVar4;
          bVar2 = uVar8 < uVar10;
          if (uVar8 == uVar10) {
            bVar2 = *puVar9 != puVar4[1] && *puVar9 < puVar4[1];
          }
          if (!bVar2) {
            return;
          }
          puVar5 = puVar4 + 1;
          *puVar4 = uVar8;
          *puVar15 = uVar10;
        }
        uVar8 = *puVar5;
        *puVar5 = *puVar9;
        *puVar9 = uVar8;
        return;
      }
      if (uVar8 == 4) {
        FUN_1092b839c(puVar4,puVar4 + 2,puVar4 + 4);
        uVar8 = param_2[-2];
        uVar10 = puVar4[4];
        bVar2 = uVar8 < uVar10;
        if (uVar8 == uVar10) {
          bVar2 = param_2[-1] != puVar4[5] && param_2[-1] < puVar4[5];
        }
        if (!bVar2) {
          return;
        }
        puVar4[4] = uVar8;
        param_2[-2] = uVar10;
        uVar8 = puVar4[5];
        puVar4[5] = param_2[-1];
        param_2[-1] = uVar8;
        uVar8 = puVar4[4];
        uVar10 = puVar4[2];
        bVar2 = uVar8 < uVar10;
        if (uVar8 == uVar10) {
          bVar2 = puVar4[5] != puVar4[3] && puVar4[5] < puVar4[3];
        }
        if (!bVar2) {
          return;
        }
        uVar11 = puVar4[3];
        uVar13 = puVar4[5];
        puVar4[2] = uVar8;
        puVar4[3] = uVar13;
        puVar4[4] = uVar10;
        puVar4[5] = uVar11;
        uVar10 = *puVar4;
        bVar2 = uVar8 < uVar10;
        if (uVar8 == uVar10) {
          bVar2 = uVar13 != puVar4[1] && uVar13 < puVar4[1];
        }
        if (!bVar2) {
          return;
        }
        uVar11 = puVar4[1];
        *puVar4 = uVar8;
        puVar4[1] = uVar13;
        puVar4[2] = uVar10;
        puVar4[3] = uVar11;
        return;
      }
      if (uVar8 == 5) {
        puVar15 = puVar4 + 2;
        puVar5 = puVar4 + 4;
        puVar6 = puVar4 + 6;
        FUN_1092b839c();
        uVar8 = *puVar6;
        uVar10 = *puVar5;
        bVar2 = uVar8 < uVar10;
        if (uVar8 == uVar10) {
          bVar2 = puVar4[7] != puVar4[5] && puVar4[7] < puVar4[5];
        }
        if (bVar2) {
          *puVar5 = uVar8;
          *puVar6 = uVar10;
          uVar8 = puVar4[5];
          puVar4[5] = puVar4[7];
          puVar4[7] = uVar8;
          uVar8 = *puVar5;
          uVar10 = *puVar15;
          bVar2 = uVar8 < uVar10;
          if (uVar8 == uVar10) {
            bVar2 = puVar4[5] != puVar4[3] && puVar4[5] < puVar4[3];
          }
          if (bVar2) {
            *puVar15 = uVar8;
            *puVar5 = uVar10;
            uVar8 = puVar4[3];
            puVar4[3] = puVar4[5];
            puVar4[5] = uVar8;
            uVar8 = *puVar15;
            uVar10 = *puVar4;
            bVar2 = uVar8 < uVar10;
            if (uVar8 == uVar10) {
              bVar2 = puVar4[3] != puVar4[1] && puVar4[3] < puVar4[1];
            }
            if (bVar2) {
              *puVar4 = uVar8;
              *puVar15 = uVar10;
              uVar8 = puVar4[1];
              puVar4[1] = puVar4[3];
              puVar4[3] = uVar8;
            }
          }
        }
        uVar8 = *puVar9;
        uVar10 = *puVar6;
        bVar2 = uVar8 < uVar10;
        if (uVar8 == uVar10) {
          bVar2 = param_2[-1] != puVar4[7] && param_2[-1] < puVar4[7];
        }
        if (bVar2) {
          *puVar6 = uVar8;
          *puVar9 = uVar10;
          uVar8 = puVar4[7];
          puVar4[7] = param_2[-1];
          param_2[-1] = uVar8;
          uVar8 = *puVar6;
          uVar10 = *puVar5;
          bVar2 = uVar8 < uVar10;
          if (uVar8 == uVar10) {
            bVar2 = puVar4[7] != puVar4[5] && puVar4[7] < puVar4[5];
          }
          if (bVar2) {
            *puVar5 = uVar8;
            *puVar6 = uVar10;
            uVar8 = puVar4[5];
            puVar4[5] = puVar4[7];
            puVar4[7] = uVar8;
            uVar8 = *puVar5;
            uVar10 = *puVar15;
            bVar2 = uVar8 < uVar10;
            if (uVar8 == uVar10) {
              bVar2 = puVar4[5] != puVar4[3] && puVar4[5] < puVar4[3];
            }
            if (bVar2) {
              *puVar15 = uVar8;
              *puVar5 = uVar10;
              uVar8 = puVar4[3];
              puVar4[3] = puVar4[5];
              puVar4[5] = uVar8;
              uVar8 = *puVar15;
              uVar10 = *puVar4;
              bVar2 = uVar8 < uVar10;
              if (uVar8 == uVar10) {
                bVar2 = puVar4[3] != puVar4[1] && puVar4[3] < puVar4[1];
              }
              if (bVar2) {
                *puVar4 = uVar8;
                *puVar15 = uVar10;
                uVar8 = puVar4[1];
                puVar4[1] = puVar4[3];
                puVar4[3] = uVar8;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar8 < 0x18) {
      puVar15 = puVar4 + 2;
      if ((param_4 & 1) == 0) {
        if (puVar4 == param_2 || puVar15 == param_2) {
          return;
        }
        puVar9 = puVar4 + 3;
        do {
          puVar5 = puVar15;
          uVar8 = puVar4[2];
          uVar10 = *puVar4;
          bVar2 = uVar8 < uVar10;
          if (uVar8 == uVar10) {
            bVar2 = puVar4[3] != puVar4[1] && puVar4[3] < puVar4[1];
          }
          if (bVar2) {
            uVar13 = puVar4[3];
            puVar4 = puVar9;
            do {
              puVar15 = puVar4;
              puVar15[-1] = uVar10;
              *puVar15 = puVar15[-2];
              uVar10 = puVar15[-5];
              bVar2 = uVar8 < uVar10;
              if (uVar8 == uVar10) {
                bVar2 = uVar13 != puVar15[-4] && uVar13 < puVar15[-4];
              }
              puVar4 = puVar15 + -2;
            } while (bVar2);
            puVar15[-3] = uVar8;
            puVar15[-2] = uVar13;
          }
          puVar15 = puVar5 + 2;
          puVar9 = puVar9 + 2;
          puVar4 = puVar5;
        } while (puVar15 != param_2);
        return;
      }
      if (puVar4 == param_2 || puVar15 == param_2) {
        return;
      }
      lVar14 = 0;
      puVar9 = puVar4;
      goto LAB_1092b7f98;
    }
    if (param_3 == 0) {
      if (puVar4 == param_2) {
        return;
      }
      uVar13 = uVar8 - 2 >> 1;
      uVar10 = uVar13;
      goto LAB_1092b804c;
    }
    puVar15 = puVar4 + (uVar8 & 0xfffffffffffffffe);
    if (uVar8 < 0x81) {
      FUN_1092b839c(puVar15,puVar4,puVar9);
    }
    else {
      FUN_1092b839c(puVar4,puVar15,puVar9);
      FUN_1092b839c(puVar4 + 2,puVar15 + -2,param_2 + -4);
      FUN_1092b839c(puVar4 + 4,puVar15 + 2,param_2 + -6);
      FUN_1092b839c(puVar15 + -2,puVar15,puVar15 + 2);
      uVar10 = puVar4[1];
      uVar8 = *puVar4;
      uVar13 = *puVar15;
      puVar4[1] = puVar15[1];
      *puVar4 = uVar13;
      puVar15[1] = uVar10;
      *puVar15 = uVar8;
    }
    param_3 = param_3 + -1;
    uVar8 = *puVar4;
    if ((param_4 & 1) != 0) break;
    bVar2 = puVar4[-2] < uVar8;
    if (puVar4[-2] == uVar8) {
      bVar2 = puVar4[-1] != puVar4[1] && puVar4[-1] < puVar4[1];
    }
    if (bVar2) break;
    uVar10 = puVar4[1];
    bVar2 = uVar8 < *puVar9;
    if (uVar8 == *puVar9) {
      bVar2 = uVar10 != param_2[-1] && uVar10 < param_2[-1];
    }
    puVar5 = puVar4;
    if (bVar2) {
      do {
        puVar15 = puVar5 + 2;
        bVar2 = uVar8 < *puVar15;
        if (uVar8 == *puVar15) {
          bVar2 = uVar10 != puVar5[3] && uVar10 < puVar5[3];
        }
        puVar5 = puVar15;
      } while (!bVar2);
    }
    else {
      do {
        puVar15 = puVar5 + 2;
        if (param_2 <= puVar15) break;
        bVar2 = uVar8 < *puVar15;
        if (uVar8 == *puVar15) {
          bVar2 = uVar10 != puVar5[3] && uVar10 < puVar5[3];
        }
        puVar5 = puVar15;
      } while (!bVar2);
    }
    puVar5 = param_2;
    puVar6 = param_2;
    if (puVar15 < param_2) {
      do {
        puVar5 = puVar6 + -2;
        bVar2 = uVar8 < *puVar5;
        if (uVar8 == *puVar5) {
          bVar2 = uVar10 != puVar6[-1] && uVar10 < puVar6[-1];
        }
        puVar6 = puVar5;
      } while (bVar2);
    }
    if (puVar15 < puVar5) {
      uVar13 = *puVar15;
      uVar11 = *puVar5;
      do {
        *puVar15 = uVar11;
        *puVar5 = uVar13;
        uVar13 = puVar15[1];
        puVar15[1] = puVar5[1];
        puVar5[1] = uVar13;
        puVar6 = puVar15;
        do {
          puVar15 = puVar6 + 2;
          uVar13 = *puVar15;
          bVar2 = uVar8 < uVar13;
          if (uVar8 == uVar13) {
            bVar2 = uVar10 != puVar6[3] && uVar10 < puVar6[3];
          }
          puVar12 = puVar5;
          puVar6 = puVar15;
        } while (!bVar2);
        do {
          puVar5 = puVar12 + -2;
          uVar11 = *puVar5;
          bVar2 = uVar8 < uVar11;
          if (uVar8 == uVar11) {
            bVar2 = uVar10 != puVar12[-1] && uVar10 < puVar12[-1];
          }
          puVar12 = puVar5;
        } while (bVar2);
      } while (puVar15 < puVar5);
    }
    if (puVar15 + -2 != puVar4) {
      *puVar4 = puVar15[-2];
      puVar4[1] = puVar15[-1];
    }
    param_4 = 0;
    puVar15[-2] = uVar8;
    puVar15[-1] = uVar10;
  }
  lVar14 = 0;
  uVar10 = puVar4[1];
  do {
    uVar13 = *(ulong *)((long)puVar4 + lVar14 + 0x10);
    bVar2 = uVar13 < uVar8;
    if (uVar13 == uVar8) {
      uVar11 = *(ulong *)((long)puVar4 + lVar14 + 0x18);
      bVar2 = uVar11 != uVar10 && uVar11 < uVar10;
    }
    lVar14 = lVar14 + 0x10;
  } while (bVar2);
  puVar5 = (ulong *)((long)puVar4 + lVar14);
  puVar15 = param_2;
  if (lVar14 == 0x10) {
    do {
      puVar6 = puVar15;
      if (puVar15 <= puVar5) break;
      puVar6 = puVar15 + -2;
      bVar2 = *puVar6 < uVar8;
      if (*puVar6 == uVar8) {
        bVar2 = puVar15[-1] != uVar10 && puVar15[-1] < uVar10;
      }
      puVar15 = puVar6;
    } while (!bVar2);
  }
  else {
    do {
      puVar6 = puVar15 + -2;
      bVar2 = *puVar6 < uVar8;
      if (*puVar6 == uVar8) {
        bVar2 = puVar15[-1] != uVar10 && puVar15[-1] < uVar10;
      }
      puVar15 = puVar6;
    } while (!bVar2);
  }
  puVar15 = puVar5;
  if (puVar5 < puVar6) {
    uVar11 = *puVar6;
    puVar12 = puVar6;
    do {
      *puVar15 = uVar11;
      *puVar12 = uVar13;
      uVar13 = puVar15[1];
      puVar15[1] = puVar12[1];
      puVar12[1] = uVar13;
      puVar21 = puVar15;
      do {
        puVar15 = puVar21 + 2;
        uVar13 = *puVar15;
        bVar2 = uVar13 < uVar8;
        if (uVar13 == uVar8) {
          bVar2 = puVar21[3] != uVar10 && puVar21[3] < uVar10;
        }
        puVar16 = puVar12;
        puVar21 = puVar15;
      } while (bVar2);
      do {
        puVar12 = puVar16 + -2;
        uVar11 = *puVar12;
        bVar2 = uVar11 < uVar8;
        if (uVar11 == uVar8) {
          bVar2 = puVar16[-1] != uVar10 && puVar16[-1] < uVar10;
        }
        puVar16 = puVar12;
      } while (!bVar2);
    } while (puVar15 < puVar12);
  }
  puVar12 = puVar15 + -2;
  if (puVar12 != puVar4) {
    *puVar4 = puVar15[-2];
    puVar4[1] = puVar15[-1];
  }
  puVar15[-2] = uVar8;
  puVar15[-1] = uVar10;
  if (puVar6 <= puVar5) {
    puVar5 = puVar4;
    FUN_1092b8750(puVar4,puVar12);
    puVar6 = puVar15;
    FUN_1092b8750(puVar15,param_2);
    if ((int)puVar6 != 0) goto LAB_1092b7ddc;
    if (((ulong)puVar5 & 1) != 0) goto LAB_1092b79b8;
  }
  FUN_1092b7970(puVar4,puVar12,param_3,(uint)param_4 & 1);
  param_4 = 0;
  goto LAB_1092b79b8;
LAB_1092b7f98:
  puVar5 = puVar15;
  uVar8 = puVar9[2];
  uVar10 = *puVar9;
  bVar2 = uVar8 < uVar10;
  if (uVar8 == uVar10) {
    bVar2 = puVar9[3] != puVar9[1] && puVar9[3] < puVar9[1];
  }
  if (bVar2) {
    uVar13 = puVar9[3];
    lVar1 = lVar14;
    do {
      lVar17 = lVar1;
      *(ulong *)((long)puVar4 + lVar17 + 0x10) = uVar10;
      *(undefined8 *)((long)puVar4 + lVar17 + 0x18) = *(undefined8 *)((long)puVar4 + lVar17 + 8);
      puVar15 = puVar4;
      if (lVar17 == 0) goto LAB_1092b801c;
      uVar10 = *(ulong *)((long)puVar4 + lVar17 + -0x10);
      bVar2 = uVar8 < uVar10;
      if (uVar8 == uVar10) {
        uVar11 = *(ulong *)((long)puVar4 + lVar17 + -8);
        bVar2 = uVar13 != uVar11 && uVar13 < uVar11;
      }
      lVar1 = lVar17 + -0x10;
    } while (bVar2);
    puVar15 = (ulong *)((long)puVar4 + lVar17);
LAB_1092b801c:
    *puVar15 = uVar8;
    puVar15[1] = uVar13;
  }
  puVar15 = puVar5 + 2;
  lVar14 = lVar14 + 0x10;
  puVar9 = puVar5;
  if (puVar15 == param_2) {
    return;
  }
  goto LAB_1092b7f98;
LAB_1092b804c:
  do {
    if ((long)uVar10 <= (long)uVar13) {
      uVar20 = uVar10 << 1 | 1;
      puVar15 = puVar4 + uVar20 * 2;
      uVar11 = uVar10 * 2 + 2;
      if ((long)uVar11 < (long)uVar8) {
        uVar18 = puVar15[2];
        bVar2 = *puVar15 < uVar18;
        if (*puVar15 == uVar18) {
          bVar2 = puVar15[1] != puVar15[3] && puVar15[1] < puVar15[3];
        }
        if (bVar2) {
          puVar15 = puVar15 + 2;
          uVar20 = uVar11;
        }
      }
      puVar9 = puVar4 + uVar10 * 2;
      uVar18 = *puVar15;
      uVar11 = *puVar9;
      bVar2 = uVar18 < uVar11;
      if (uVar18 == uVar11) {
        bVar2 = puVar15[1] != puVar9[1] && puVar15[1] < puVar9[1];
      }
      if (!bVar2) {
        uVar19 = puVar9[1];
        do {
          puVar5 = puVar15;
          *puVar9 = uVar18;
          puVar9[1] = puVar5[1];
          if ((long)uVar13 < (long)uVar20) break;
          uVar7 = uVar20 << 1 | 1;
          puVar15 = puVar4 + uVar7 * 2;
          uVar18 = uVar20 * 2 + 2;
          uVar20 = uVar7;
          if ((long)uVar18 < (long)uVar8) {
            uVar7 = puVar15[2];
            bVar2 = *puVar15 < uVar7;
            if (*puVar15 == uVar7) {
              bVar2 = puVar15[1] != puVar15[3] && puVar15[1] < puVar15[3];
            }
            if (bVar2) {
              puVar15 = puVar15 + 2;
              uVar20 = uVar18;
            }
          }
          uVar18 = *puVar15;
          bVar2 = uVar18 < uVar11;
          if (uVar18 == uVar11) {
            bVar2 = puVar15[1] != uVar19 && puVar15[1] < uVar19;
          }
          puVar9 = puVar5;
        } while (!bVar2);
        *puVar5 = uVar11;
        puVar5[1] = uVar19;
      }
    }
    bVar2 = uVar10 != 0;
    uVar10 = uVar10 - 1;
  } while (bVar2);
  do {
    uVar10 = *puVar4;
    uVar13 = puVar4[1];
    puVar15 = puVar4;
    uVar11 = 0;
    do {
      uVar18 = uVar11 << 1 | 1;
      uVar20 = uVar11 * 2 + 2;
      puVar9 = puVar15 + uVar11 * 2 + 2;
      if ((long)uVar20 < (long)uVar8) {
        uVar19 = puVar15[uVar11 * 2 + 4];
        bVar2 = puVar15[uVar11 * 2 + 2] < uVar19;
        if (puVar15[uVar11 * 2 + 2] == uVar19) {
          bVar2 = puVar15[uVar11 * 2 + 3] != puVar15[uVar11 * 2 + 5] &&
                  puVar15[uVar11 * 2 + 3] < puVar15[uVar11 * 2 + 5];
        }
        if (bVar2) {
          puVar9 = puVar15 + uVar11 * 2 + 4;
          uVar18 = uVar20;
        }
      }
      *puVar15 = *puVar9;
      puVar15[1] = puVar9[1];
      puVar15 = puVar9;
      uVar11 = uVar18;
    } while ((long)uVar18 <= (long)(uVar8 - 2 >> 1));
    if (puVar9 == param_2 + -2) {
      *puVar9 = uVar10;
      puVar9[1] = uVar13;
    }
    else {
      *puVar9 = param_2[-2];
      puVar9[1] = param_2[-1];
      param_2[-2] = uVar10;
      param_2[-1] = uVar13;
      lVar14 = (long)((long)puVar9 + (0x10 - (long)puVar4)) >> 4;
      if (1 < lVar14) {
        uVar10 = lVar14 - 2U >> 1;
        puVar15 = puVar4 + uVar10 * 2;
        uVar11 = *puVar15;
        uVar13 = *puVar9;
        bVar2 = uVar11 < uVar13;
        if (uVar11 == uVar13) {
          bVar2 = puVar15[1] != puVar9[1] && puVar15[1] < puVar9[1];
        }
        if (bVar2) {
          uVar20 = puVar9[1];
          do {
            puVar5 = puVar15;
            *puVar9 = uVar11;
            puVar9[1] = puVar5[1];
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1 >> 1;
            puVar15 = puVar4 + uVar10 * 2;
            uVar11 = *puVar15;
            bVar2 = uVar11 < uVar13;
            if (uVar11 == uVar13) {
              bVar2 = puVar15[1] != uVar20 && puVar15[1] < uVar20;
            }
            puVar9 = puVar5;
          } while (bVar2);
          *puVar5 = uVar13;
          puVar5[1] = uVar20;
        }
      }
    }
    bVar2 = (long)uVar8 < 3;
    uVar8 = uVar8 - 1;
    param_2 = param_2 + -2;
    if (bVar2) {
      return;
    }
  } while( true );
LAB_1092b7ddc:
  param_2 = puVar12;
  if (((ulong)puVar5 & 1) != 0) {
    return;
  }
  goto LAB_1092b79a4;
}



/* Entry: 1092b793c; end: 1092b796f;  */

void FUN_1092b793c(ulong *param_1,ulong *param_2,long param_3,ulong param_4)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  ulong *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong *puVar20;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    __Znwm((long)param_2 << 4);
    return;
  }
  func_0x000104c4f740();
LAB_1092b79a4:
  puVar8 = param_2 + -2;
  puVar14 = param_1;
LAB_1092b79b8:
  while( true ) {
    param_1 = puVar14;
    uVar7 = (long)param_2 - (long)param_1 >> 4;
    if (uVar7 - 2 == 0 || (long)uVar7 < 2) {
      if (uVar7 < 2) {
        return;
      }
      if (uVar7 == 2) {
        uVar7 = param_2[-2];
        uVar9 = *param_1;
        bVar2 = uVar7 < uVar9;
        if (uVar7 == uVar9) {
          bVar2 = param_2[-1] != param_1[1] && param_2[-1] < param_1[1];
        }
        if (!bVar2) {
          return;
        }
        *param_1 = uVar7;
        param_2[-2] = uVar9;
        uVar7 = param_1[1];
        param_1[1] = param_2[-1];
        param_2[-1] = uVar7;
        return;
      }
    }
    else {
      if (uVar7 == 3) {
        puVar14 = param_1 + 2;
        uVar7 = *puVar14;
        uVar9 = *param_1;
        bVar2 = uVar7 < uVar9;
        if (uVar7 == uVar9) {
          bVar2 = param_1[3] != param_1[1] && param_1[3] < param_1[1];
        }
        uVar12 = *puVar8;
        bVar3 = uVar12 < uVar7;
        if (bVar2) {
          if (uVar12 == uVar7) {
            bVar3 = param_2[-1] != param_1[3] && param_2[-1] < param_1[3];
          }
          if (bVar3) {
            puVar4 = param_1 + 1;
            *param_1 = uVar12;
            *puVar8 = uVar9;
          }
          else {
            *param_1 = uVar7;
            *puVar14 = uVar9;
            puVar4 = param_1 + 3;
            uVar12 = param_1[1];
            param_1[1] = *puVar4;
            *puVar4 = uVar12;
            uVar9 = *puVar8;
            uVar7 = *puVar14;
            bVar2 = uVar9 < uVar7;
            if (uVar9 == uVar7) {
              bVar2 = param_2[-1] != uVar12 && param_2[-1] < uVar12;
            }
            if (!bVar2) {
              return;
            }
            *puVar14 = uVar9;
            *puVar8 = uVar7;
          }
          puVar8 = param_2 + -1;
        }
        else {
          if (uVar12 == uVar7) {
            bVar3 = param_2[-1] != param_1[3] && param_2[-1] < param_1[3];
          }
          if (!bVar3) {
            return;
          }
          *puVar14 = uVar12;
          *puVar8 = uVar7;
          puVar8 = param_1 + 3;
          uVar7 = *puVar8;
          *puVar8 = param_2[-1];
          param_2[-1] = uVar7;
          uVar7 = *puVar14;
          uVar9 = *param_1;
          bVar2 = uVar7 < uVar9;
          if (uVar7 == uVar9) {
            bVar2 = *puVar8 != param_1[1] && *puVar8 < param_1[1];
          }
          if (!bVar2) {
            return;
          }
          puVar4 = param_1 + 1;
          *param_1 = uVar7;
          *puVar14 = uVar9;
        }
        uVar7 = *puVar4;
        *puVar4 = *puVar8;
        *puVar8 = uVar7;
        return;
      }
      if (uVar7 == 4) {
        FUN_1092b839c(param_1,param_1 + 2,param_1 + 4);
        uVar7 = param_2[-2];
        uVar9 = param_1[4];
        bVar2 = uVar7 < uVar9;
        if (uVar7 == uVar9) {
          bVar2 = param_2[-1] != param_1[5] && param_2[-1] < param_1[5];
        }
        if (!bVar2) {
          return;
        }
        param_1[4] = uVar7;
        param_2[-2] = uVar9;
        uVar7 = param_1[5];
        param_1[5] = param_2[-1];
        param_2[-1] = uVar7;
        uVar7 = param_1[4];
        uVar9 = param_1[2];
        bVar2 = uVar7 < uVar9;
        if (uVar7 == uVar9) {
          bVar2 = param_1[5] != param_1[3] && param_1[5] < param_1[3];
        }
        if (!bVar2) {
          return;
        }
        uVar10 = param_1[3];
        uVar12 = param_1[5];
        param_1[2] = uVar7;
        param_1[3] = uVar12;
        param_1[4] = uVar9;
        param_1[5] = uVar10;
        uVar9 = *param_1;
        bVar2 = uVar7 < uVar9;
        if (uVar7 == uVar9) {
          bVar2 = uVar12 != param_1[1] && uVar12 < param_1[1];
        }
        if (!bVar2) {
          return;
        }
        uVar10 = param_1[1];
        *param_1 = uVar7;
        param_1[1] = uVar12;
        param_1[2] = uVar9;
        param_1[3] = uVar10;
        return;
      }
      if (uVar7 == 5) {
        puVar14 = param_1 + 2;
        puVar4 = param_1 + 4;
        puVar5 = param_1 + 6;
        FUN_1092b839c();
        uVar7 = *puVar5;
        uVar9 = *puVar4;
        bVar2 = uVar7 < uVar9;
        if (uVar7 == uVar9) {
          bVar2 = param_1[7] != param_1[5] && param_1[7] < param_1[5];
        }
        if (bVar2) {
          *puVar4 = uVar7;
          *puVar5 = uVar9;
          uVar7 = param_1[5];
          param_1[5] = param_1[7];
          param_1[7] = uVar7;
          uVar7 = *puVar4;
          uVar9 = *puVar14;
          bVar2 = uVar7 < uVar9;
          if (uVar7 == uVar9) {
            bVar2 = param_1[5] != param_1[3] && param_1[5] < param_1[3];
          }
          if (bVar2) {
            *puVar14 = uVar7;
            *puVar4 = uVar9;
            uVar7 = param_1[3];
            param_1[3] = param_1[5];
            param_1[5] = uVar7;
            uVar7 = *puVar14;
            uVar9 = *param_1;
            bVar2 = uVar7 < uVar9;
            if (uVar7 == uVar9) {
              bVar2 = param_1[3] != param_1[1] && param_1[3] < param_1[1];
            }
            if (bVar2) {
              *param_1 = uVar7;
              *puVar14 = uVar9;
              uVar7 = param_1[1];
              param_1[1] = param_1[3];
              param_1[3] = uVar7;
            }
          }
        }
        uVar7 = *puVar8;
        uVar9 = *puVar5;
        bVar2 = uVar7 < uVar9;
        if (uVar7 == uVar9) {
          bVar2 = param_2[-1] != param_1[7] && param_2[-1] < param_1[7];
        }
        if (bVar2) {
          *puVar5 = uVar7;
          *puVar8 = uVar9;
          uVar7 = param_1[7];
          param_1[7] = param_2[-1];
          param_2[-1] = uVar7;
          uVar7 = *puVar5;
          uVar9 = *puVar4;
          bVar2 = uVar7 < uVar9;
          if (uVar7 == uVar9) {
            bVar2 = param_1[7] != param_1[5] && param_1[7] < param_1[5];
          }
          if (bVar2) {
            *puVar4 = uVar7;
            *puVar5 = uVar9;
            uVar7 = param_1[5];
            param_1[5] = param_1[7];
            param_1[7] = uVar7;
            uVar7 = *puVar4;
            uVar9 = *puVar14;
            bVar2 = uVar7 < uVar9;
            if (uVar7 == uVar9) {
              bVar2 = param_1[5] != param_1[3] && param_1[5] < param_1[3];
            }
            if (bVar2) {
              *puVar14 = uVar7;
              *puVar4 = uVar9;
              uVar7 = param_1[3];
              param_1[3] = param_1[5];
              param_1[5] = uVar7;
              uVar7 = *puVar14;
              uVar9 = *param_1;
              bVar2 = uVar7 < uVar9;
              if (uVar7 == uVar9) {
                bVar2 = param_1[3] != param_1[1] && param_1[3] < param_1[1];
              }
              if (bVar2) {
                *param_1 = uVar7;
                *puVar14 = uVar9;
                uVar7 = param_1[1];
                param_1[1] = param_1[3];
                param_1[3] = uVar7;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar7 < 0x18) {
      puVar14 = param_1 + 2;
      if ((param_4 & 1) == 0) {
        if (param_1 == param_2 || puVar14 == param_2) {
          return;
        }
        puVar8 = param_1 + 3;
        do {
          puVar4 = puVar14;
          uVar7 = param_1[2];
          uVar9 = *param_1;
          bVar2 = uVar7 < uVar9;
          if (uVar7 == uVar9) {
            bVar2 = param_1[3] != param_1[1] && param_1[3] < param_1[1];
          }
          if (bVar2) {
            uVar12 = param_1[3];
            puVar14 = puVar8;
            do {
              puVar5 = puVar14;
              puVar5[-1] = uVar9;
              *puVar5 = puVar5[-2];
              uVar9 = puVar5[-5];
              bVar2 = uVar7 < uVar9;
              if (uVar7 == uVar9) {
                bVar2 = uVar12 != puVar5[-4] && uVar12 < puVar5[-4];
              }
              puVar14 = puVar5 + -2;
            } while (bVar2);
            puVar5[-3] = uVar7;
            puVar5[-2] = uVar12;
          }
          puVar14 = puVar4 + 2;
          puVar8 = puVar8 + 2;
          param_1 = puVar4;
        } while (puVar14 != param_2);
        return;
      }
      if (param_1 == param_2 || puVar14 == param_2) {
        return;
      }
      lVar13 = 0;
      puVar8 = param_1;
      goto LAB_1092b7f98;
    }
    if (param_3 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar12 = uVar7 - 2 >> 1;
      uVar9 = uVar12;
      goto LAB_1092b804c;
    }
    puVar14 = param_1 + (uVar7 & 0xfffffffffffffffe);
    if (uVar7 < 0x81) {
      FUN_1092b839c(puVar14,param_1,puVar8);
    }
    else {
      FUN_1092b839c(param_1,puVar14,puVar8);
      FUN_1092b839c(param_1 + 2,puVar14 + -2,param_2 + -4);
      FUN_1092b839c(param_1 + 4,puVar14 + 2,param_2 + -6);
      FUN_1092b839c(puVar14 + -2,puVar14,puVar14 + 2);
      uVar9 = param_1[1];
      uVar7 = *param_1;
      uVar12 = *puVar14;
      param_1[1] = puVar14[1];
      *param_1 = uVar12;
      puVar14[1] = uVar9;
      *puVar14 = uVar7;
    }
    param_3 = param_3 + -1;
    uVar7 = *param_1;
    if ((param_4 & 1) != 0) break;
    bVar2 = param_1[-2] < uVar7;
    if (param_1[-2] == uVar7) {
      bVar2 = param_1[-1] != param_1[1] && param_1[-1] < param_1[1];
    }
    if (bVar2) break;
    uVar9 = param_1[1];
    bVar2 = uVar7 < *puVar8;
    if (uVar7 == *puVar8) {
      bVar2 = uVar9 != param_2[-1] && uVar9 < param_2[-1];
    }
    puVar4 = param_1;
    if (bVar2) {
      do {
        puVar14 = puVar4 + 2;
        bVar2 = uVar7 < *puVar14;
        if (uVar7 == *puVar14) {
          bVar2 = uVar9 != puVar4[3] && uVar9 < puVar4[3];
        }
        puVar4 = puVar14;
      } while (!bVar2);
    }
    else {
      do {
        puVar14 = puVar4 + 2;
        if (param_2 <= puVar14) break;
        bVar2 = uVar7 < *puVar14;
        if (uVar7 == *puVar14) {
          bVar2 = uVar9 != puVar4[3] && uVar9 < puVar4[3];
        }
        puVar4 = puVar14;
      } while (!bVar2);
    }
    puVar4 = param_2;
    puVar5 = param_2;
    if (puVar14 < param_2) {
      do {
        puVar4 = puVar5 + -2;
        bVar2 = uVar7 < *puVar4;
        if (uVar7 == *puVar4) {
          bVar2 = uVar9 != puVar5[-1] && uVar9 < puVar5[-1];
        }
        puVar5 = puVar4;
      } while (bVar2);
    }
    if (puVar14 < puVar4) {
      uVar12 = *puVar14;
      uVar10 = *puVar4;
      do {
        *puVar14 = uVar10;
        *puVar4 = uVar12;
        uVar12 = puVar14[1];
        puVar14[1] = puVar4[1];
        puVar4[1] = uVar12;
        puVar5 = puVar14;
        do {
          puVar14 = puVar5 + 2;
          uVar12 = *puVar14;
          bVar2 = uVar7 < uVar12;
          if (uVar7 == uVar12) {
            bVar2 = uVar9 != puVar5[3] && uVar9 < puVar5[3];
          }
          puVar11 = puVar4;
          puVar5 = puVar14;
        } while (!bVar2);
        do {
          puVar4 = puVar11 + -2;
          uVar10 = *puVar4;
          bVar2 = uVar7 < uVar10;
          if (uVar7 == uVar10) {
            bVar2 = uVar9 != puVar11[-1] && uVar9 < puVar11[-1];
          }
          puVar11 = puVar4;
        } while (bVar2);
      } while (puVar14 < puVar4);
    }
    if (puVar14 + -2 != param_1) {
      *param_1 = puVar14[-2];
      param_1[1] = puVar14[-1];
    }
    param_4 = 0;
    puVar14[-2] = uVar7;
    puVar14[-1] = uVar9;
  }
  lVar13 = 0;
  uVar9 = param_1[1];
  do {
    uVar12 = *(ulong *)((long)param_1 + lVar13 + 0x10);
    bVar2 = uVar12 < uVar7;
    if (uVar12 == uVar7) {
      uVar10 = *(ulong *)((long)param_1 + lVar13 + 0x18);
      bVar2 = uVar10 != uVar9 && uVar10 < uVar9;
    }
    lVar13 = lVar13 + 0x10;
  } while (bVar2);
  puVar4 = (ulong *)((long)param_1 + lVar13);
  puVar14 = param_2;
  if (lVar13 == 0x10) {
    do {
      puVar5 = puVar14;
      if (puVar14 <= puVar4) break;
      puVar5 = puVar14 + -2;
      bVar2 = *puVar5 < uVar7;
      if (*puVar5 == uVar7) {
        bVar2 = puVar14[-1] != uVar9 && puVar14[-1] < uVar9;
      }
      puVar14 = puVar5;
    } while (!bVar2);
  }
  else {
    do {
      puVar5 = puVar14 + -2;
      bVar2 = *puVar5 < uVar7;
      if (*puVar5 == uVar7) {
        bVar2 = puVar14[-1] != uVar9 && puVar14[-1] < uVar9;
      }
      puVar14 = puVar5;
    } while (!bVar2);
  }
  puVar14 = puVar4;
  if (puVar4 < puVar5) {
    uVar10 = *puVar5;
    puVar11 = puVar5;
    do {
      *puVar14 = uVar10;
      *puVar11 = uVar12;
      uVar12 = puVar14[1];
      puVar14[1] = puVar11[1];
      puVar11[1] = uVar12;
      puVar20 = puVar14;
      do {
        puVar14 = puVar20 + 2;
        uVar12 = *puVar14;
        bVar2 = uVar12 < uVar7;
        if (uVar12 == uVar7) {
          bVar2 = puVar20[3] != uVar9 && puVar20[3] < uVar9;
        }
        puVar15 = puVar11;
        puVar20 = puVar14;
      } while (bVar2);
      do {
        puVar11 = puVar15 + -2;
        uVar10 = *puVar11;
        bVar2 = uVar10 < uVar7;
        if (uVar10 == uVar7) {
          bVar2 = puVar15[-1] != uVar9 && puVar15[-1] < uVar9;
        }
        puVar15 = puVar11;
      } while (!bVar2);
    } while (puVar14 < puVar11);
  }
  puVar11 = puVar14 + -2;
  if (puVar11 != param_1) {
    *param_1 = puVar14[-2];
    param_1[1] = puVar14[-1];
  }
  puVar14[-2] = uVar7;
  puVar14[-1] = uVar9;
  if (puVar5 <= puVar4) {
    puVar4 = param_1;
    FUN_1092b8750(param_1,puVar11);
    puVar5 = puVar14;
    FUN_1092b8750(puVar14,param_2);
    if ((int)puVar5 != 0) goto LAB_1092b7ddc;
    if (((ulong)puVar4 & 1) != 0) goto LAB_1092b79b8;
  }
  FUN_1092b7970(param_1,puVar11,param_3,(uint)param_4 & 1);
  param_4 = 0;
  goto LAB_1092b79b8;
LAB_1092b7f98:
  puVar4 = puVar14;
  uVar7 = puVar8[2];
  uVar9 = *puVar8;
  bVar2 = uVar7 < uVar9;
  if (uVar7 == uVar9) {
    bVar2 = puVar8[3] != puVar8[1] && puVar8[3] < puVar8[1];
  }
  if (bVar2) {
    uVar12 = puVar8[3];
    lVar1 = lVar13;
    do {
      lVar16 = lVar1;
      *(ulong *)((long)param_1 + lVar16 + 0x10) = uVar9;
      *(undefined8 *)((long)param_1 + lVar16 + 0x18) = *(undefined8 *)((long)param_1 + lVar16 + 8);
      puVar14 = param_1;
      if (lVar16 == 0) goto LAB_1092b801c;
      uVar9 = *(ulong *)((long)param_1 + lVar16 + -0x10);
      bVar2 = uVar7 < uVar9;
      if (uVar7 == uVar9) {
        uVar10 = *(ulong *)((long)param_1 + lVar16 + -8);
        bVar2 = uVar12 != uVar10 && uVar12 < uVar10;
      }
      lVar1 = lVar16 + -0x10;
    } while (bVar2);
    puVar14 = (ulong *)((long)param_1 + lVar16);
LAB_1092b801c:
    *puVar14 = uVar7;
    puVar14[1] = uVar12;
  }
  puVar14 = puVar4 + 2;
  lVar13 = lVar13 + 0x10;
  puVar8 = puVar4;
  if (puVar14 == param_2) {
    return;
  }
  goto LAB_1092b7f98;
LAB_1092b804c:
  do {
    if ((long)uVar9 <= (long)uVar12) {
      uVar19 = uVar9 << 1 | 1;
      puVar14 = param_1 + uVar19 * 2;
      uVar10 = uVar9 * 2 + 2;
      if ((long)uVar10 < (long)uVar7) {
        uVar17 = puVar14[2];
        bVar2 = *puVar14 < uVar17;
        if (*puVar14 == uVar17) {
          bVar2 = puVar14[1] != puVar14[3] && puVar14[1] < puVar14[3];
        }
        if (bVar2) {
          puVar14 = puVar14 + 2;
          uVar19 = uVar10;
        }
      }
      puVar8 = param_1 + uVar9 * 2;
      uVar17 = *puVar14;
      uVar10 = *puVar8;
      bVar2 = uVar17 < uVar10;
      if (uVar17 == uVar10) {
        bVar2 = puVar14[1] != puVar8[1] && puVar14[1] < puVar8[1];
      }
      if (!bVar2) {
        uVar18 = puVar8[1];
        do {
          puVar4 = puVar14;
          *puVar8 = uVar17;
          puVar8[1] = puVar4[1];
          if ((long)uVar12 < (long)uVar19) break;
          uVar6 = uVar19 << 1 | 1;
          puVar14 = param_1 + uVar6 * 2;
          uVar17 = uVar19 * 2 + 2;
          uVar19 = uVar6;
          if ((long)uVar17 < (long)uVar7) {
            uVar6 = puVar14[2];
            bVar2 = *puVar14 < uVar6;
            if (*puVar14 == uVar6) {
              bVar2 = puVar14[1] != puVar14[3] && puVar14[1] < puVar14[3];
            }
            if (bVar2) {
              puVar14 = puVar14 + 2;
              uVar19 = uVar17;
            }
          }
          uVar17 = *puVar14;
          bVar2 = uVar17 < uVar10;
          if (uVar17 == uVar10) {
            bVar2 = puVar14[1] != uVar18 && puVar14[1] < uVar18;
          }
          puVar8 = puVar4;
        } while (!bVar2);
        *puVar4 = uVar10;
        puVar4[1] = uVar18;
      }
    }
    bVar2 = uVar9 != 0;
    uVar9 = uVar9 - 1;
  } while (bVar2);
  do {
    uVar9 = *param_1;
    uVar12 = param_1[1];
    puVar14 = param_1;
    uVar10 = 0;
    do {
      uVar17 = uVar10 << 1 | 1;
      uVar19 = uVar10 * 2 + 2;
      puVar8 = puVar14 + uVar10 * 2 + 2;
      if ((long)uVar19 < (long)uVar7) {
        uVar18 = puVar14[uVar10 * 2 + 4];
        bVar2 = puVar14[uVar10 * 2 + 2] < uVar18;
        if (puVar14[uVar10 * 2 + 2] == uVar18) {
          bVar2 = puVar14[uVar10 * 2 + 3] != puVar14[uVar10 * 2 + 5] &&
                  puVar14[uVar10 * 2 + 3] < puVar14[uVar10 * 2 + 5];
        }
        if (bVar2) {
          puVar8 = puVar14 + uVar10 * 2 + 4;
          uVar17 = uVar19;
        }
      }
      *puVar14 = *puVar8;
      puVar14[1] = puVar8[1];
      puVar14 = puVar8;
      uVar10 = uVar17;
    } while ((long)uVar17 <= (long)(uVar7 - 2 >> 1));
    if (puVar8 == param_2 + -2) {
      *puVar8 = uVar9;
      puVar8[1] = uVar12;
    }
    else {
      *puVar8 = param_2[-2];
      puVar8[1] = param_2[-1];
      param_2[-2] = uVar9;
      param_2[-1] = uVar12;
      lVar13 = (long)puVar8 + (0x10 - (long)param_1) >> 4;
      if (1 < lVar13) {
        uVar9 = lVar13 - 2U >> 1;
        puVar14 = param_1 + uVar9 * 2;
        uVar10 = *puVar14;
        uVar12 = *puVar8;
        bVar2 = uVar10 < uVar12;
        if (uVar10 == uVar12) {
          bVar2 = puVar14[1] != puVar8[1] && puVar14[1] < puVar8[1];
        }
        if (bVar2) {
          uVar19 = puVar8[1];
          do {
            puVar4 = puVar14;
            *puVar8 = uVar10;
            puVar8[1] = puVar4[1];
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1 >> 1;
            puVar14 = param_1 + uVar9 * 2;
            uVar10 = *puVar14;
            bVar2 = uVar10 < uVar12;
            if (uVar10 == uVar12) {
              bVar2 = puVar14[1] != uVar19 && puVar14[1] < uVar19;
            }
            puVar8 = puVar4;
          } while (bVar2);
          *puVar4 = uVar12;
          puVar4[1] = uVar19;
        }
      }
    }
    bVar2 = (long)uVar7 < 3;
    uVar7 = uVar7 - 1;
    param_2 = param_2 + -2;
    if (bVar2) {
      return;
    }
  } while( true );
LAB_1092b7ddc:
  param_2 = puVar11;
  if (((ulong)puVar4 & 1) != 0) {
    return;
  }
  goto LAB_1092b79a4;
}



/* Entry: 1092b7970; end: 1092b839b;  */

void FUN_1092b7970(ulong *param_1,ulong *param_2,long param_3,uint param_4)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  ulong *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong *puVar20;
  
LAB_1092b79a4:
  puVar8 = param_2 + -2;
  puVar14 = param_1;
LAB_1092b79b8:
  while( true ) {
    param_1 = puVar14;
    uVar7 = (long)param_2 - (long)param_1 >> 4;
    if (uVar7 - 2 == 0 || (long)uVar7 < 2) {
      if (uVar7 < 2) {
        return;
      }
      if (uVar7 == 2) {
        uVar7 = param_2[-2];
        uVar9 = *param_1;
        bVar2 = uVar7 < uVar9;
        if (uVar7 == uVar9) {
          bVar2 = param_2[-1] != param_1[1] && param_2[-1] < param_1[1];
        }
        if (!bVar2) {
          return;
        }
        *param_1 = uVar7;
        param_2[-2] = uVar9;
        uVar7 = param_1[1];
        param_1[1] = param_2[-1];
        param_2[-1] = uVar7;
        return;
      }
    }
    else {
      if (uVar7 == 3) {
        puVar14 = param_1 + 2;
        uVar7 = *puVar14;
        uVar9 = *param_1;
        bVar2 = uVar7 < uVar9;
        if (uVar7 == uVar9) {
          bVar2 = param_1[3] != param_1[1] && param_1[3] < param_1[1];
        }
        uVar12 = *puVar8;
        bVar3 = uVar12 < uVar7;
        if (bVar2) {
          if (uVar12 == uVar7) {
            bVar3 = param_2[-1] != param_1[3] && param_2[-1] < param_1[3];
          }
          if (bVar3) {
            puVar4 = param_1 + 1;
            *param_1 = uVar12;
            *puVar8 = uVar9;
          }
          else {
            *param_1 = uVar7;
            *puVar14 = uVar9;
            puVar4 = param_1 + 3;
            uVar12 = param_1[1];
            param_1[1] = *puVar4;
            *puVar4 = uVar12;
            uVar9 = *puVar8;
            uVar7 = *puVar14;
            bVar2 = uVar9 < uVar7;
            if (uVar9 == uVar7) {
              bVar2 = param_2[-1] != uVar12 && param_2[-1] < uVar12;
            }
            if (!bVar2) {
              return;
            }
            *puVar14 = uVar9;
            *puVar8 = uVar7;
          }
          puVar8 = param_2 + -1;
        }
        else {
          if (uVar12 == uVar7) {
            bVar3 = param_2[-1] != param_1[3] && param_2[-1] < param_1[3];
          }
          if (!bVar3) {
            return;
          }
          *puVar14 = uVar12;
          *puVar8 = uVar7;
          puVar8 = param_1 + 3;
          uVar7 = *puVar8;
          *puVar8 = param_2[-1];
          param_2[-1] = uVar7;
          uVar7 = *puVar14;
          uVar9 = *param_1;
          bVar2 = uVar7 < uVar9;
          if (uVar7 == uVar9) {
            bVar2 = *puVar8 != param_1[1] && *puVar8 < param_1[1];
          }
          if (!bVar2) {
            return;
          }
          puVar4 = param_1 + 1;
          *param_1 = uVar7;
          *puVar14 = uVar9;
        }
        uVar7 = *puVar4;
        *puVar4 = *puVar8;
        *puVar8 = uVar7;
        return;
      }
      if (uVar7 == 4) {
        FUN_1092b839c(param_1,param_1 + 2,param_1 + 4);
        uVar7 = param_2[-2];
        uVar9 = param_1[4];
        bVar2 = uVar7 < uVar9;
        if (uVar7 == uVar9) {
          bVar2 = param_2[-1] != param_1[5] && param_2[-1] < param_1[5];
        }
        if (!bVar2) {
          return;
        }
        param_1[4] = uVar7;
        param_2[-2] = uVar9;
        uVar7 = param_1[5];
        param_1[5] = param_2[-1];
        param_2[-1] = uVar7;
        uVar7 = param_1[4];
        uVar9 = param_1[2];
        bVar2 = uVar7 < uVar9;
        if (uVar7 == uVar9) {
          bVar2 = param_1[5] != param_1[3] && param_1[5] < param_1[3];
        }
        if (!bVar2) {
          return;
        }
        uVar10 = param_1[3];
        uVar12 = param_1[5];
        param_1[2] = uVar7;
        param_1[3] = uVar12;
        param_1[4] = uVar9;
        param_1[5] = uVar10;
        uVar9 = *param_1;
        bVar2 = uVar7 < uVar9;
        if (uVar7 == uVar9) {
          bVar2 = uVar12 != param_1[1] && uVar12 < param_1[1];
        }
        if (!bVar2) {
          return;
        }
        uVar10 = param_1[1];
        *param_1 = uVar7;
        param_1[1] = uVar12;
        param_1[2] = uVar9;
        param_1[3] = uVar10;
        return;
      }
      if (uVar7 == 5) {
        puVar14 = param_1 + 2;
        puVar4 = param_1 + 4;
        puVar5 = param_1 + 6;
        FUN_1092b839c();
        uVar7 = *puVar5;
        uVar9 = *puVar4;
        bVar2 = uVar7 < uVar9;
        if (uVar7 == uVar9) {
          bVar2 = param_1[7] != param_1[5] && param_1[7] < param_1[5];
        }
        if (bVar2) {
          *puVar4 = uVar7;
          *puVar5 = uVar9;
          uVar7 = param_1[5];
          param_1[5] = param_1[7];
          param_1[7] = uVar7;
          uVar7 = *puVar4;
          uVar9 = *puVar14;
          bVar2 = uVar7 < uVar9;
          if (uVar7 == uVar9) {
            bVar2 = param_1[5] != param_1[3] && param_1[5] < param_1[3];
          }
          if (bVar2) {
            *puVar14 = uVar7;
            *puVar4 = uVar9;
            uVar7 = param_1[3];
            param_1[3] = param_1[5];
            param_1[5] = uVar7;
            uVar7 = *puVar14;
            uVar9 = *param_1;
            bVar2 = uVar7 < uVar9;
            if (uVar7 == uVar9) {
              bVar2 = param_1[3] != param_1[1] && param_1[3] < param_1[1];
            }
            if (bVar2) {
              *param_1 = uVar7;
              *puVar14 = uVar9;
              uVar7 = param_1[1];
              param_1[1] = param_1[3];
              param_1[3] = uVar7;
            }
          }
        }
        uVar7 = *puVar8;
        uVar9 = *puVar5;
        bVar2 = uVar7 < uVar9;
        if (uVar7 == uVar9) {
          bVar2 = param_2[-1] != param_1[7] && param_2[-1] < param_1[7];
        }
        if (bVar2) {
          *puVar5 = uVar7;
          *puVar8 = uVar9;
          uVar7 = param_1[7];
          param_1[7] = param_2[-1];
          param_2[-1] = uVar7;
          uVar7 = *puVar5;
          uVar9 = *puVar4;
          bVar2 = uVar7 < uVar9;
          if (uVar7 == uVar9) {
            bVar2 = param_1[7] != param_1[5] && param_1[7] < param_1[5];
          }
          if (bVar2) {
            *puVar4 = uVar7;
            *puVar5 = uVar9;
            uVar7 = param_1[5];
            param_1[5] = param_1[7];
            param_1[7] = uVar7;
            uVar7 = *puVar4;
            uVar9 = *puVar14;
            bVar2 = uVar7 < uVar9;
            if (uVar7 == uVar9) {
              bVar2 = param_1[5] != param_1[3] && param_1[5] < param_1[3];
            }
            if (bVar2) {
              *puVar14 = uVar7;
              *puVar4 = uVar9;
              uVar7 = param_1[3];
              param_1[3] = param_1[5];
              param_1[5] = uVar7;
              uVar7 = *puVar14;
              uVar9 = *param_1;
              bVar2 = uVar7 < uVar9;
              if (uVar7 == uVar9) {
                bVar2 = param_1[3] != param_1[1] && param_1[3] < param_1[1];
              }
              if (bVar2) {
                *param_1 = uVar7;
                *puVar14 = uVar9;
                uVar7 = param_1[1];
                param_1[1] = param_1[3];
                param_1[3] = uVar7;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar7 < 0x18) {
      puVar14 = param_1 + 2;
      if ((param_4 & 1) == 0) {
        if (param_1 == param_2 || puVar14 == param_2) {
          return;
        }
        puVar8 = param_1 + 3;
        do {
          puVar4 = puVar14;
          uVar7 = param_1[2];
          uVar9 = *param_1;
          bVar2 = uVar7 < uVar9;
          if (uVar7 == uVar9) {
            bVar2 = param_1[3] != param_1[1] && param_1[3] < param_1[1];
          }
          if (bVar2) {
            uVar12 = param_1[3];
            puVar14 = puVar8;
            do {
              puVar5 = puVar14;
              puVar5[-1] = uVar9;
              *puVar5 = puVar5[-2];
              uVar9 = puVar5[-5];
              bVar2 = uVar7 < uVar9;
              if (uVar7 == uVar9) {
                bVar2 = uVar12 != puVar5[-4] && uVar12 < puVar5[-4];
              }
              puVar14 = puVar5 + -2;
            } while (bVar2);
            puVar5[-3] = uVar7;
            puVar5[-2] = uVar12;
          }
          puVar14 = puVar4 + 2;
          puVar8 = puVar8 + 2;
          param_1 = puVar4;
        } while (puVar14 != param_2);
        return;
      }
      if (param_1 == param_2 || puVar14 == param_2) {
        return;
      }
      lVar13 = 0;
      puVar8 = param_1;
      goto LAB_1092b7f98;
    }
    if (param_3 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar12 = uVar7 - 2 >> 1;
      uVar9 = uVar12;
      goto LAB_1092b804c;
    }
    puVar14 = param_1 + (uVar7 & 0xfffffffffffffffe);
    if (uVar7 < 0x81) {
      FUN_1092b839c(puVar14,param_1,puVar8);
    }
    else {
      FUN_1092b839c(param_1,puVar14,puVar8);
      FUN_1092b839c(param_1 + 2,puVar14 + -2,param_2 + -4);
      FUN_1092b839c(param_1 + 4,puVar14 + 2,param_2 + -6);
      FUN_1092b839c(puVar14 + -2,puVar14,puVar14 + 2);
      uVar9 = param_1[1];
      uVar7 = *param_1;
      uVar12 = *puVar14;
      param_1[1] = puVar14[1];
      *param_1 = uVar12;
      puVar14[1] = uVar9;
      *puVar14 = uVar7;
    }
    param_3 = param_3 + -1;
    uVar7 = *param_1;
    if ((param_4 & 1) != 0) break;
    bVar2 = param_1[-2] < uVar7;
    if (param_1[-2] == uVar7) {
      bVar2 = param_1[-1] != param_1[1] && param_1[-1] < param_1[1];
    }
    if (bVar2) break;
    uVar9 = param_1[1];
    bVar2 = uVar7 < *puVar8;
    if (uVar7 == *puVar8) {
      bVar2 = uVar9 != param_2[-1] && uVar9 < param_2[-1];
    }
    puVar4 = param_1;
    if (bVar2) {
      do {
        puVar14 = puVar4 + 2;
        bVar2 = uVar7 < *puVar14;
        if (uVar7 == *puVar14) {
          bVar2 = uVar9 != puVar4[3] && uVar9 < puVar4[3];
        }
        puVar4 = puVar14;
      } while (!bVar2);
    }
    else {
      do {
        puVar14 = puVar4 + 2;
        if (param_2 <= puVar14) break;
        bVar2 = uVar7 < *puVar14;
        if (uVar7 == *puVar14) {
          bVar2 = uVar9 != puVar4[3] && uVar9 < puVar4[3];
        }
        puVar4 = puVar14;
      } while (!bVar2);
    }
    puVar4 = param_2;
    puVar5 = param_2;
    if (puVar14 < param_2) {
      do {
        puVar4 = puVar5 + -2;
        bVar2 = uVar7 < *puVar4;
        if (uVar7 == *puVar4) {
          bVar2 = uVar9 != puVar5[-1] && uVar9 < puVar5[-1];
        }
        puVar5 = puVar4;
      } while (bVar2);
    }
    if (puVar14 < puVar4) {
      uVar12 = *puVar14;
      uVar10 = *puVar4;
      do {
        *puVar14 = uVar10;
        *puVar4 = uVar12;
        uVar12 = puVar14[1];
        puVar14[1] = puVar4[1];
        puVar4[1] = uVar12;
        puVar5 = puVar14;
        do {
          puVar14 = puVar5 + 2;
          uVar12 = *puVar14;
          bVar2 = uVar7 < uVar12;
          if (uVar7 == uVar12) {
            bVar2 = uVar9 != puVar5[3] && uVar9 < puVar5[3];
          }
          puVar11 = puVar4;
          puVar5 = puVar14;
        } while (!bVar2);
        do {
          puVar4 = puVar11 + -2;
          uVar10 = *puVar4;
          bVar2 = uVar7 < uVar10;
          if (uVar7 == uVar10) {
            bVar2 = uVar9 != puVar11[-1] && uVar9 < puVar11[-1];
          }
          puVar11 = puVar4;
        } while (bVar2);
      } while (puVar14 < puVar4);
    }
    if (puVar14 + -2 != param_1) {
      *param_1 = puVar14[-2];
      param_1[1] = puVar14[-1];
    }
    param_4 = 0;
    puVar14[-2] = uVar7;
    puVar14[-1] = uVar9;
  }
  lVar13 = 0;
  uVar9 = param_1[1];
  do {
    uVar12 = *(ulong *)((long)param_1 + lVar13 + 0x10);
    bVar2 = uVar12 < uVar7;
    if (uVar12 == uVar7) {
      uVar10 = *(ulong *)((long)param_1 + lVar13 + 0x18);
      bVar2 = uVar10 != uVar9 && uVar10 < uVar9;
    }
    lVar13 = lVar13 + 0x10;
  } while (bVar2);
  puVar4 = (ulong *)((long)param_1 + lVar13);
  puVar14 = param_2;
  if (lVar13 == 0x10) {
    do {
      puVar5 = puVar14;
      if (puVar14 <= puVar4) break;
      puVar5 = puVar14 + -2;
      bVar2 = *puVar5 < uVar7;
      if (*puVar5 == uVar7) {
        bVar2 = puVar14[-1] != uVar9 && puVar14[-1] < uVar9;
      }
      puVar14 = puVar5;
    } while (!bVar2);
  }
  else {
    do {
      puVar5 = puVar14 + -2;
      bVar2 = *puVar5 < uVar7;
      if (*puVar5 == uVar7) {
        bVar2 = puVar14[-1] != uVar9 && puVar14[-1] < uVar9;
      }
      puVar14 = puVar5;
    } while (!bVar2);
  }
  puVar14 = puVar4;
  if (puVar4 < puVar5) {
    uVar10 = *puVar5;
    puVar11 = puVar5;
    do {
      *puVar14 = uVar10;
      *puVar11 = uVar12;
      uVar12 = puVar14[1];
      puVar14[1] = puVar11[1];
      puVar11[1] = uVar12;
      puVar20 = puVar14;
      do {
        puVar14 = puVar20 + 2;
        uVar12 = *puVar14;
        bVar2 = uVar12 < uVar7;
        if (uVar12 == uVar7) {
          bVar2 = puVar20[3] != uVar9 && puVar20[3] < uVar9;
        }
        puVar15 = puVar11;
        puVar20 = puVar14;
      } while (bVar2);
      do {
        puVar11 = puVar15 + -2;
        uVar10 = *puVar11;
        bVar2 = uVar10 < uVar7;
        if (uVar10 == uVar7) {
          bVar2 = puVar15[-1] != uVar9 && puVar15[-1] < uVar9;
        }
        puVar15 = puVar11;
      } while (!bVar2);
    } while (puVar14 < puVar11);
  }
  puVar11 = puVar14 + -2;
  if (puVar11 != param_1) {
    *param_1 = puVar14[-2];
    param_1[1] = puVar14[-1];
  }
  puVar14[-2] = uVar7;
  puVar14[-1] = uVar9;
  if (puVar5 <= puVar4) {
    puVar4 = param_1;
    FUN_1092b8750(param_1,puVar11);
    puVar5 = puVar14;
    FUN_1092b8750(puVar14,param_2);
    if ((int)puVar5 != 0) goto LAB_1092b7ddc;
    if (((ulong)puVar4 & 1) != 0) goto LAB_1092b79b8;
  }
  FUN_1092b7970(param_1,puVar11,param_3,param_4 & 1);
  param_4 = 0;
  goto LAB_1092b79b8;
LAB_1092b7f98:
  puVar4 = puVar14;
  uVar7 = puVar8[2];
  uVar9 = *puVar8;
  bVar2 = uVar7 < uVar9;
  if (uVar7 == uVar9) {
    bVar2 = puVar8[3] != puVar8[1] && puVar8[3] < puVar8[1];
  }
  if (bVar2) {
    uVar12 = puVar8[3];
    lVar1 = lVar13;
    do {
      lVar16 = lVar1;
      *(ulong *)((long)param_1 + lVar16 + 0x10) = uVar9;
      *(undefined8 *)((long)param_1 + lVar16 + 0x18) = *(undefined8 *)((long)param_1 + lVar16 + 8);
      puVar14 = param_1;
      if (lVar16 == 0) goto LAB_1092b801c;
      uVar9 = *(ulong *)((long)param_1 + lVar16 + -0x10);
      bVar2 = uVar7 < uVar9;
      if (uVar7 == uVar9) {
        uVar10 = *(ulong *)((long)param_1 + lVar16 + -8);
        bVar2 = uVar12 != uVar10 && uVar12 < uVar10;
      }
      lVar1 = lVar16 + -0x10;
    } while (bVar2);
    puVar14 = (ulong *)((long)param_1 + lVar16);
LAB_1092b801c:
    *puVar14 = uVar7;
    puVar14[1] = uVar12;
  }
  puVar14 = puVar4 + 2;
  lVar13 = lVar13 + 0x10;
  puVar8 = puVar4;
  if (puVar14 == param_2) {
    return;
  }
  goto LAB_1092b7f98;
LAB_1092b804c:
  do {
    if ((long)uVar9 <= (long)uVar12) {
      uVar19 = uVar9 << 1 | 1;
      puVar14 = param_1 + uVar19 * 2;
      uVar10 = uVar9 * 2 + 2;
      if ((long)uVar10 < (long)uVar7) {
        uVar17 = puVar14[2];
        bVar2 = *puVar14 < uVar17;
        if (*puVar14 == uVar17) {
          bVar2 = puVar14[1] != puVar14[3] && puVar14[1] < puVar14[3];
        }
        if (bVar2) {
          puVar14 = puVar14 + 2;
          uVar19 = uVar10;
        }
      }
      puVar8 = param_1 + uVar9 * 2;
      uVar17 = *puVar14;
      uVar10 = *puVar8;
      bVar2 = uVar17 < uVar10;
      if (uVar17 == uVar10) {
        bVar2 = puVar14[1] != puVar8[1] && puVar14[1] < puVar8[1];
      }
      if (!bVar2) {
        uVar18 = puVar8[1];
        do {
          puVar4 = puVar14;
          *puVar8 = uVar17;
          puVar8[1] = puVar4[1];
          if ((long)uVar12 < (long)uVar19) break;
          uVar6 = uVar19 << 1 | 1;
          puVar14 = param_1 + uVar6 * 2;
          uVar17 = uVar19 * 2 + 2;
          uVar19 = uVar6;
          if ((long)uVar17 < (long)uVar7) {
            uVar6 = puVar14[2];
            bVar2 = *puVar14 < uVar6;
            if (*puVar14 == uVar6) {
              bVar2 = puVar14[1] != puVar14[3] && puVar14[1] < puVar14[3];
            }
            if (bVar2) {
              puVar14 = puVar14 + 2;
              uVar19 = uVar17;
            }
          }
          uVar17 = *puVar14;
          bVar2 = uVar17 < uVar10;
          if (uVar17 == uVar10) {
            bVar2 = puVar14[1] != uVar18 && puVar14[1] < uVar18;
          }
          puVar8 = puVar4;
        } while (!bVar2);
        *puVar4 = uVar10;
        puVar4[1] = uVar18;
      }
    }
    bVar2 = uVar9 != 0;
    uVar9 = uVar9 - 1;
  } while (bVar2);
  do {
    uVar9 = *param_1;
    uVar12 = param_1[1];
    puVar14 = param_1;
    uVar10 = 0;
    do {
      uVar17 = uVar10 << 1 | 1;
      uVar19 = uVar10 * 2 + 2;
      puVar8 = puVar14 + uVar10 * 2 + 2;
      if ((long)uVar19 < (long)uVar7) {
        uVar18 = puVar14[uVar10 * 2 + 4];
        bVar2 = puVar14[uVar10 * 2 + 2] < uVar18;
        if (puVar14[uVar10 * 2 + 2] == uVar18) {
          bVar2 = puVar14[uVar10 * 2 + 3] != puVar14[uVar10 * 2 + 5] &&
                  puVar14[uVar10 * 2 + 3] < puVar14[uVar10 * 2 + 5];
        }
        if (bVar2) {
          puVar8 = puVar14 + uVar10 * 2 + 4;
          uVar17 = uVar19;
        }
      }
      *puVar14 = *puVar8;
      puVar14[1] = puVar8[1];
      puVar14 = puVar8;
      uVar10 = uVar17;
    } while ((long)uVar17 <= (long)(uVar7 - 2 >> 1));
    if (puVar8 == param_2 + -2) {
      *puVar8 = uVar9;
      puVar8[1] = uVar12;
    }
    else {
      *puVar8 = param_2[-2];
      puVar8[1] = param_2[-1];
      param_2[-2] = uVar9;
      param_2[-1] = uVar12;
      lVar13 = (long)puVar8 + (0x10 - (long)param_1) >> 4;
      if (1 < lVar13) {
        uVar9 = lVar13 - 2U >> 1;
        puVar14 = param_1 + uVar9 * 2;
        uVar10 = *puVar14;
        uVar12 = *puVar8;
        bVar2 = uVar10 < uVar12;
        if (uVar10 == uVar12) {
          bVar2 = puVar14[1] != puVar8[1] && puVar14[1] < puVar8[1];
        }
        if (bVar2) {
          uVar19 = puVar8[1];
          do {
            puVar4 = puVar14;
            *puVar8 = uVar10;
            puVar8[1] = puVar4[1];
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1 >> 1;
            puVar14 = param_1 + uVar9 * 2;
            uVar10 = *puVar14;
            bVar2 = uVar10 < uVar12;
            if (uVar10 == uVar12) {
              bVar2 = puVar14[1] != uVar19 && puVar14[1] < uVar19;
            }
            puVar8 = puVar4;
          } while (bVar2);
          *puVar4 = uVar12;
          puVar4[1] = uVar19;
        }
      }
    }
    bVar2 = (long)uVar7 < 3;
    uVar7 = uVar7 - 1;
    param_2 = param_2 + -2;
    if (bVar2) {
      return;
    }
  } while( true );
LAB_1092b7ddc:
  param_2 = puVar11;
  if (((ulong)puVar4 & 1) != 0) {
    return;
  }
  goto LAB_1092b79a4;
}



/* Entry: 1092b839c; end: 1092b84fb;  */

void FUN_1092b839c(ulong *param_1,ulong *param_2,ulong *param_3)

{
  bool bVar1;
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar4 = *param_2;
  uVar6 = *param_1;
  bVar1 = uVar4 < uVar6;
  if (uVar4 == uVar6) {
    bVar1 = param_2[1] != param_1[1] && param_2[1] < param_1[1];
  }
  uVar7 = *param_3;
  bVar2 = uVar7 < uVar4;
  if (bVar1) {
    if (uVar7 == uVar4) {
      bVar2 = param_3[1] != param_2[1] && param_3[1] < param_2[1];
    }
    if (bVar2) {
      puVar3 = param_1 + 1;
      *param_1 = uVar7;
      *param_3 = uVar6;
    }
    else {
      *param_1 = uVar4;
      *param_2 = uVar6;
      puVar3 = param_2 + 1;
      uVar7 = param_1[1];
      param_1[1] = *puVar3;
      *puVar3 = uVar7;
      uVar6 = *param_3;
      uVar4 = *param_2;
      bVar1 = uVar6 < uVar4;
      if (uVar6 == uVar4) {
        bVar1 = param_3[1] != uVar7 && param_3[1] < uVar7;
      }
      if (!bVar1) {
        return;
      }
      *param_2 = uVar6;
      *param_3 = uVar4;
    }
    puVar5 = param_3 + 1;
  }
  else {
    if (uVar7 == uVar4) {
      bVar2 = param_3[1] != param_2[1] && param_3[1] < param_2[1];
    }
    if (!bVar2) {
      return;
    }
    *param_2 = uVar7;
    *param_3 = uVar4;
    puVar5 = param_2 + 1;
    uVar4 = *puVar5;
    *puVar5 = param_3[1];
    param_3[1] = uVar4;
    uVar4 = *param_2;
    uVar6 = *param_1;
    bVar1 = uVar4 < uVar6;
    if (uVar4 == uVar6) {
      bVar1 = *puVar5 != param_1[1] && *puVar5 < param_1[1];
    }
    if (!bVar1) {
      return;
    }
    puVar3 = param_1 + 1;
    *param_1 = uVar4;
    *param_2 = uVar6;
  }
  uVar4 = *puVar3;
  *puVar3 = *puVar5;
  *puVar5 = uVar4;
  return;
}



/* Entry: 1092b84fc; end: 1092b874f;  */

void FUN_1092b84fc(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong *param_5)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  FUN_1092b839c();
  uVar2 = *param_4;
  uVar3 = *param_3;
  bVar1 = uVar2 < uVar3;
  if (uVar2 == uVar3) {
    bVar1 = param_4[1] != param_3[1] && param_4[1] < param_3[1];
  }
  if (bVar1) {
    *param_3 = uVar2;
    *param_4 = uVar3;
    uVar2 = param_3[1];
    param_3[1] = param_4[1];
    param_4[1] = uVar2;
    uVar2 = *param_3;
    uVar3 = *param_2;
    bVar1 = uVar2 < uVar3;
    if (uVar2 == uVar3) {
      bVar1 = param_3[1] != param_2[1] && param_3[1] < param_2[1];
    }
    if (bVar1) {
      *param_2 = uVar2;
      *param_3 = uVar3;
      uVar2 = param_2[1];
      param_2[1] = param_3[1];
      param_3[1] = uVar2;
      uVar2 = *param_2;
      uVar3 = *param_1;
      bVar1 = uVar2 < uVar3;
      if (uVar2 == uVar3) {
        bVar1 = param_2[1] != param_1[1] && param_2[1] < param_1[1];
      }
      if (bVar1) {
        *param_1 = uVar2;
        *param_2 = uVar3;
        uVar2 = param_1[1];
        param_1[1] = param_2[1];
        param_2[1] = uVar2;
      }
    }
  }
  uVar2 = *param_5;
  uVar3 = *param_4;
  bVar1 = uVar2 < uVar3;
  if (uVar2 == uVar3) {
    bVar1 = param_5[1] != param_4[1] && param_5[1] < param_4[1];
  }
  if (bVar1) {
    *param_4 = uVar2;
    *param_5 = uVar3;
    uVar2 = param_4[1];
    param_4[1] = param_5[1];
    param_5[1] = uVar2;
    uVar2 = *param_4;
    uVar3 = *param_3;
    bVar1 = uVar2 < uVar3;
    if (uVar2 == uVar3) {
      bVar1 = param_4[1] != param_3[1] && param_4[1] < param_3[1];
    }
    if (bVar1) {
      *param_3 = uVar2;
      *param_4 = uVar3;
      uVar2 = param_3[1];
      param_3[1] = param_4[1];
      param_4[1] = uVar2;
      uVar2 = *param_3;
      uVar3 = *param_2;
      bVar1 = uVar2 < uVar3;
      if (uVar2 == uVar3) {
        bVar1 = param_3[1] != param_2[1] && param_3[1] < param_2[1];
      }
      if (bVar1) {
        *param_2 = uVar2;
        *param_3 = uVar3;
        uVar2 = param_2[1];
        param_2[1] = param_3[1];
        param_3[1] = uVar2;
        uVar2 = *param_2;
        uVar3 = *param_1;
        bVar1 = uVar2 < uVar3;
        if (uVar2 == uVar3) {
          bVar1 = param_2[1] != param_1[1] && param_2[1] < param_1[1];
        }
        if (bVar1) {
          *param_1 = uVar2;
          *param_2 = uVar3;
          uVar2 = param_1[1];
          param_1[1] = param_2[1];
          param_2[1] = uVar2;
        }
      }
    }
  }
  return;
}



/* Entry: 1092b8750; end: 1092b89ef;  */

bool FUN_1092b8750(ulong *param_1,ulong *param_2)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  
  uVar3 = (long)param_2 - (long)param_1 >> 4;
  if ((long)uVar3 < 3) {
    if (uVar3 < 2) {
      return true;
    }
    if (uVar3 == 2) {
      uVar3 = param_2[-2];
      uVar5 = *param_1;
      bVar2 = uVar3 < uVar5;
      if (uVar3 == uVar5) {
        bVar2 = param_2[-1] != param_1[1] && param_2[-1] < param_1[1];
      }
      if (!bVar2) {
        return true;
      }
      *param_1 = uVar3;
      param_2[-2] = uVar5;
      uVar3 = param_1[1];
      param_1[1] = param_2[-1];
      param_2[-1] = uVar3;
      return true;
    }
  }
  else {
    if (uVar3 == 3) {
      FUN_1092b839c(param_1,param_1 + 2,param_2 + -2);
      return true;
    }
    if (uVar3 == 4) {
      FUN_1092b839c(param_1,param_1 + 2,param_1 + 4);
      uVar3 = param_2[-2];
      uVar5 = param_1[4];
      bVar2 = uVar3 < uVar5;
      if (uVar3 == uVar5) {
        bVar2 = param_2[-1] != param_1[5] && param_2[-1] < param_1[5];
      }
      if (!bVar2) {
        return true;
      }
      param_1[4] = uVar3;
      param_2[-2] = uVar5;
      uVar3 = param_1[5];
      param_1[5] = param_2[-1];
      param_2[-1] = uVar3;
      uVar3 = param_1[4];
      uVar5 = param_1[2];
      bVar2 = uVar3 < uVar5;
      if (uVar3 == uVar5) {
        bVar2 = param_1[5] != param_1[3] && param_1[5] < param_1[3];
      }
      if (!bVar2) {
        return true;
      }
      uVar11 = param_1[3];
      uVar9 = param_1[5];
      param_1[2] = uVar3;
      param_1[3] = uVar9;
      param_1[4] = uVar5;
      param_1[5] = uVar11;
      uVar5 = *param_1;
      bVar2 = uVar3 < uVar5;
      if (uVar3 == uVar5) {
        bVar2 = uVar9 != param_1[1] && uVar9 < param_1[1];
      }
      if (!bVar2) {
        return true;
      }
      uVar11 = param_1[1];
      *param_1 = uVar3;
      param_1[1] = uVar9;
      param_1[2] = uVar5;
      param_1[3] = uVar11;
      return true;
    }
    if (uVar3 == 5) {
      FUN_1092b84fc(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2);
      return true;
    }
  }
  FUN_1092b839c(param_1,param_1 + 2,param_1 + 4);
  if (param_1 + 6 != param_2) {
    lVar6 = 0;
    iVar7 = 0;
    puVar8 = param_1 + 6;
    puVar12 = param_1 + 4;
    do {
      puVar4 = puVar8;
      uVar3 = *puVar4;
      uVar5 = *puVar12;
      bVar2 = uVar3 < uVar5;
      if (uVar3 == uVar5) {
        bVar2 = puVar4[1] != puVar12[1] && puVar4[1] < puVar12[1];
      }
      if (bVar2) {
        uVar9 = puVar4[1];
        lVar1 = lVar6;
        do {
          lVar10 = lVar1;
          *(ulong *)((long)param_1 + lVar10 + 0x30) = uVar5;
          *(undefined8 *)((long)param_1 + lVar10 + 0x38) =
               *(undefined8 *)((long)param_1 + lVar10 + 0x28);
          puVar8 = param_1;
          if (lVar10 == -0x20) goto LAB_1092b88cc;
          uVar5 = *(ulong *)((long)param_1 + lVar10 + 0x10);
          bVar2 = uVar3 < uVar5;
          if (uVar3 == uVar5) {
            uVar11 = *(ulong *)((long)param_1 + lVar10 + 0x18);
            bVar2 = uVar9 != uVar11 && uVar9 < uVar11;
          }
          lVar1 = lVar10 + -0x10;
        } while (bVar2);
        puVar8 = (ulong *)((long)param_1 + lVar10 + 0x20);
LAB_1092b88cc:
        *puVar8 = uVar3;
        puVar8[1] = uVar9;
        iVar7 = iVar7 + 1;
        if (iVar7 == 8) {
          return puVar4 + 2 == param_2;
        }
      }
      lVar6 = lVar6 + 0x10;
      puVar8 = puVar4 + 2;
      puVar12 = puVar4;
    } while (puVar4 + 2 != param_2);
  }
  return true;
}



/* Entry: 1092b89f0; end: 1092b8a1b;  */

void FUN_1092b89f0(void)

{
  return;
}



/* Entry: 1092b8a1c; end: 1092b8ac7;  */

undefined8 * FUN_1092b8a1c(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 uStack_21;
  
  *param_1 = &PTR_DAT_110ae8fa0;
  lVar2 = *param_2;
  if (lVar2 == 0) {
    puVar1 = param_1;
    func_0x000109d1a80c();
    lVar2 = puVar1[9];
  }
  FUN_1092ba284(param_1 + 1,&uStack_21,&UNK_10f563cc4,lVar2);
  puVar1 = (undefined8 *)0x70;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110ae9140;
  puVar1[3] = 0x32aaaba7;
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
  param_1[3] = puVar1 + 3;
  param_1[4] = puVar1;
  return param_1;
}



/* Entry: 1092b8ac8; end: 1092b8b77;  */

undefined8 * FUN_1092b8ac8(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plStack_28;
  
  *param_1 = &PTR_DAT_110ae8fa0;
  (**(code **)(*(long *)param_1[1] + 0x38))(&plStack_28);
  func_0x000109d1a244(&plStack_28);
  if (plStack_28 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_28 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plStack_28 + 8))();
      }
    }
  }
  FUN_1092ba470(param_1 + 3);
  func_0x0001092b3360(param_1 + 1);
  return param_1;
}



/* Entry: 1092b8b78; end: 1092b8ca3;  */

void FUN_1092b8b78(long *param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long *aplStack_50 [3];
  undefined4 uStack_38;
  
  uVar4 = SUB84(aplStack_50,0);
  *(undefined1 *)(param_1 + 5) = 1;
  (**(code **)(*(long *)param_1[1] + 0x38))(aplStack_50);
  func_0x000109d1a244(aplStack_50);
  if (aplStack_50[0] != (long *)0x0) {
    puVar1 = (ulong *)(aplStack_50[0] + 1);
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
        (**(code **)(*aplStack_50[0] + 8))();
      }
    }
  }
  lVar5 = param_1[3];
  FUN_1092b7498();
  if (lVar5 != 0) {
    func_0x000107c31940(aplStack_50,&UNK_10f563d34);
    __ZSt19uncaught_exceptionsv();
    uStack_38 = uVar4;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (aplStack_50,&UNK_10f563ce0,10);
    FUN_1092acc7c(aplStack_50,lVar5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
    FUN_1092a22e8(aplStack_50);
  }
  (**(code **)(*param_1 + 0x40))(param_1,param_2);
  return;
}



/* Entry: 1092b8ca4; end: 1092b8cb3;  */

void FUN_1092b8ca4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,ulong param_4,
                  ulong param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined1 auStack_60 [24];
  undefined4 uStack_48;
  undefined1 *puVar5;
  
  plVar11 = (long *)*param_3;
  if (plVar11 == (long *)0x0) {
    puVar7 = (undefined8 *)0x30;
    __Znwm();
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_DAT_110ae89e0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    param_1[1] = puVar7;
    puVar7[3] = 0x1132cee70;
    *param_1 = puVar7 + 3;
  }
  else {
    if ((ulong)plVar11[1] < param_4 || plVar11[1] - param_4 < param_5) {
      puVar5 = auStack_60;
      func_0x000107c31940(puVar5,&UNK_10f563b47);
      uVar4 = SUB84(puVar5,0);
      __ZSt19uncaught_exceptionsv();
      uStack_48 = uVar4;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (auStack_60,&UNK_10f563b12,0x16);
      FUN_1092a22e8(auStack_60);
      plVar11 = (long *)*param_3;
    }
    plVar6 = (long *)0x18;
    __Znwm();
    lVar9 = plVar11[2];
    lVar8 = 0x1132cee70;
    if (*plVar11 != 0) {
      lVar8 = *plVar11 + param_4;
    }
    *plVar6 = lVar8;
    plVar6[1] = param_5;
    plVar6[2] = lVar9 + param_4;
    plVar10 = (long *)param_3[1];
    if (plVar10 != (long *)0x0) {
      plVar1 = plVar10 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *param_1 = plVar6;
    puVar7 = (undefined8 *)0x30;
    __Znwm();
    if (plVar10 == (long *)0x0) {
      *puVar7 = &PTR_FUN_110ae8a30;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = plVar6;
      puVar7[4] = plVar11;
      puVar7[5] = 0;
      param_1[1] = puVar7;
    }
    else {
      plVar1 = plVar10 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *puVar7 = &PTR_FUN_110ae8a30;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = plVar6;
      puVar7[4] = plVar11;
      puVar7[5] = plVar10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      param_1[1] = puVar7;
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
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    if (plVar10 != (long *)0x0) {
      plVar11 = plVar10 + 1;
      do {
        lVar8 = *plVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
  }
  return;
}



/* Entry: 1092b8cb4; end: 1092b8d47;  */

void FUN_1092b8cb4(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [24];
  undefined4 uStack_28;
  
  uVar1 = SUB84(auStack_40,0);
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    func_0x000107c31940(auStack_40,&UNK_10f563d34);
    __ZSt19uncaught_exceptionsv();
    uVar2 = param_2;
    uStack_28 = uVar1;
    _strlen(param_2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (auStack_40,param_2,uVar2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (auStack_40,&UNK_10f563cff,0x18);
    FUN_1092a22e8(auStack_40);
  }
  return;
}



/* Entry: 1092b8d48; end: 1092b8dfb;  */

void FUN_1092b8d48(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plStack_38 = (long *)param_3[1];
  uStack_40 = *param_3;
  if (param_3[1] != 0) {
    plVar1 = (long *)(param_3[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_1092b3bcc(&uStack_30,&uStack_40,param_4,param_5);
  plVar1 = plStack_38;
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 1092b8dfc; end: 1092b9183;  */

void FUN_1092b8dfc(undefined8 *param_1,long *param_2,long *param_3,ulong param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong *puStack_88;
  long *plStack_80;
  undefined8 *puStack_78;
  code *pcStack_70;
  code *pcStack_68;
  ulong *puStack_60;
  undefined8 *puStack_58;
  ulong **ppuVar6;
  
  (**(code **)(*param_2 + 0x30))(param_2,&UNK_10f563d18);
  plVar10 = param_2;
  (**(code **)(*param_2 + 0x10))();
  if (plVar10 < param_3 || (ulong)((long)plVar10 - (long)param_3) < param_4) {
    ppuVar6 = &puStack_88;
    func_0x000107c31940(ppuVar6,&UNK_10f563d34);
    uVar5 = SUB84(ppuVar6,0);
    __ZSt19uncaught_exceptionsv();
    pcStack_70 = (code *)CONCAT44(pcStack_70._4_4_,uVar5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&puStack_88,&UNK_10f563d20,0x13);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&puStack_88,&UNK_10f563d46,9);
    ppuVar6 = &puStack_88;
    FUN_1092acc7c(ppuVar6,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
    FUN_1092acc7c(ppuVar6,param_4);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
    FUN_1092acc7c(ppuVar6,plVar10);
    FUN_1092a22e8(&puStack_88);
  }
  puVar9 = (undefined8 *)param_2[1];
  plVar10 = (long *)puVar9[2];
  plStack_80 = (long *)0x0;
  puStack_78 = (undefined8 *)0x0;
  if (plVar10 == (long *)0x0) {
    puVar7 = (undefined8 *)0xe0;
    __Znwm();
    *(undefined2 *)(puVar7 + 3) = 4;
    puVar7[2] = 0;
    puVar7[1] = 0x200000006;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    puVar7[0xb] = 0;
    puVar7[10] = 0;
    puVar7[0xd] = 0;
    puVar7[0xc] = 0;
    puVar7[0xf] = 0;
    puVar7[0xe] = 0;
    puVar7[0x10] = 0;
    puVar7[0x11] = puVar7 + 3;
    puVar7[0x12] = 0;
    *(undefined1 *)(puVar7 + 0x13) = 0;
    *(undefined1 *)(puVar7 + 0x15) = 0;
    puStack_88 = puVar7 + 0x16;
    *puStack_88 = (ulong)param_2;
    *puVar7 = &PTR_DAT_110ae9088;
    puVar7[0x17] = param_3;
    puVar7[0x18] = param_4;
    *(undefined1 *)(puVar7 + 0x1a) = 1;
    puVar7[0x1b] = 0;
    pcStack_70 = FUN_1092b9a50;
    plStack_80 = puVar7;
    puStack_78 = puVar7;
  }
  else {
    pcStack_68 = (code *)0x0;
    (**(code **)(*plVar10 + 0x28))(plVar10,0,&pcStack_68);
    if (pcStack_68 != (code *)0x0) {
      FUN_1092af97c(&pcStack_68);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1092b914c);
      (*pcVar4)();
    }
    puVar7 = (undefined8 *)0xe8;
    __Znwm();
    puVar7[2] = 0;
    puVar7[1] = 0x200000006;
    *(undefined2 *)(puVar7 + 3) = 4;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    puVar7[0xb] = 0;
    puVar7[10] = 0;
    puVar7[0xd] = 0;
    puVar7[0xc] = 0;
    puVar7[0xf] = 0;
    puVar7[0xe] = 0;
    puVar7[0x10] = 0;
    puVar7[0x11] = puVar7 + 3;
    puVar7[0x12] = 0;
    *(undefined1 *)(puVar7 + 0x13) = 0;
    *(undefined1 *)(puVar7 + 0x15) = 0;
    *puVar7 = &PTR_DAT_110ae9050;
    puVar7[0x16] = param_2;
    puVar7[0x17] = param_3;
    puVar7[0x18] = param_4;
    *(undefined1 *)(puVar7 + 0x1a) = 1;
    puVar7[0x1b] = 0;
    puVar7[0x1c] = plVar10;
    if (plStack_80 != (long *)0x0) {
      puVar1 = (ulong *)(plStack_80 + 1);
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plStack_80 + 8))();
        }
      }
    }
    plStack_80 = puVar7;
    if (puStack_78 != (undefined8 *)0x0) {
      FUN_1092b4274(&puStack_78);
    }
    pcStack_70 = (code *)0x1092b9a20;
    puStack_88 = puVar7 + 0x16;
    puStack_78 = puVar7;
    __ZNSt13exception_ptrD1Ev(&pcStack_68);
  }
  puVar1 = puStack_88;
  if (puStack_88[5] != 0) {
    FUN_1092b4274();
  }
  puVar1[5] = (ulong)puStack_78;
  puStack_78 = (undefined8 *)0x0;
  pcStack_68 = pcStack_70;
  puStack_60 = puStack_88;
  puStack_58 = puVar9;
  (**(code **)*puVar9)(puVar9,&pcStack_68);
  *param_1 = plStack_80;
  plStack_80 = (long *)0x0;
  if ((puStack_78 != (undefined8 *)0x0) && (FUN_1092b4274(&puStack_78), plStack_80 != (long *)0x0))
  {
    puVar1 = (ulong *)(plStack_80 + 1);
    do {
      uVar8 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar8 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar8 & 0x1fffffffc) == 4) {
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar8 - 1 == 0) {
        (**(code **)(*plStack_80 + 8))();
      }
    }
  }
  return;
}



/* Entry: 1092b9184; end: 1092b94b7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1092b9184(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long alStack_50 [2];
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  puVar5 = (undefined8 *)0x80;
  __Znwm();
  *puVar5 = FUN_1092ba950;
  puVar5[1] = FUN_1092baba4;
  FUN_1092b98cc(puVar5 + 2);
  lVar7 = puVar5[7];
  if (lVar7 != 0) {
    plVar6 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar7;
  uVar10 = *param_3;
  puVar5[10] = param_3[1];
  puVar5[9] = uVar10;
  puVar5[0xb] = param_3[2];
  puVar5[0xc] = param_2;
  *(undefined1 *)(puVar5 + 0xd) = 0;
  *(undefined1 *)(puVar5 + 0xf) = 0;
  alStack_50[0] = 0;
  func_0x000109d18960(puVar5 + 2,param_2,alStack_50);
  if (alStack_50[0] != 0) {
    FUN_1092af97c(alStack_50);
LAB_1092b93d4:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1092b93d8);
    (*pcVar4)();
  }
  puStack_40 = puVar5;
  if ((*(byte *)(puVar5 + 0xd) & 1) == 0) {
    puStack_38 = (undefined8 *)puVar5[0xc];
    alStack_50[1] = 0;
    (**(code **)*puStack_38)(puStack_38,alStack_50 + 1);
    __ZNSt13exception_ptrD1Ev(alStack_50);
  }
  else {
    __ZNSt13exception_ptrD1Ev(alStack_50);
    FUN_1092b9578(puVar5 + 0xe,puVar5 + 9);
    puVar5[0xc] = puVar5[0xe];
    plVar6 = (long *)(puVar5[0xe] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(puVar5[0xc] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar5 + 0xf) = 1;
      lVar7 = puVar5[0xc];
      plVar6 = (long *)(lVar7 + 0x10);
      puStack_38 = (undefined8 *)puVar5[3];
      do {
        lVar9 = *plVar6;
        if (lVar9 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            alStack_50[1] = 0;
            func_0x000109d1b588(lVar7 + 0x18,alStack_50 + 1);
            *(undefined8 *)(lVar7 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar9 >> 1 & 1) == 0);
    }
    if (((uint)*(undefined8 *)(puVar5[0xc] + 0x10) >> 5 & 1) != 0) {
      FUN_1092af97c(puVar5[0xc] + 0x90);
      goto LAB_1092b93d4;
    }
    FUN_1092b94b8(puVar5 + 2,puVar5[0xc] + 0x98);
    plVar6 = (long *)puVar5[0xc];
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    plVar6 = (long *)puVar5[0xe];
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    func_0x000109d1a1d0(puVar5 + 2);
    __ZdlPv(puVar5);
  }
  return;
}



/* Entry: 1092b94b8; end: 1092b9577;  */

void FUN_1092b94b8(long param_1,undefined8 *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  
  plVar7 = (long *)(param_1 + 0x30);
  lVar8 = *plVar7;
  plVar4 = (long *)(lVar8 + 0x10);
  do {
    lVar6 = *plVar4;
    if (lVar6 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (*(char *)(lVar8 + 0xa8) == '\x01') {
          func_0x0001092af864(lVar8 + 0x98);
        }
        uVar9 = *param_2;
        *(undefined8 *)(lVar8 + 0xa0) = param_2[1];
        *(undefined8 *)(lVar8 + 0x98) = uVar9;
        *param_2 = 0;
        param_2[1] = 0;
        *(undefined1 *)(lVar8 + 0xa8) = 1;
        *(undefined8 *)(lVar8 + 0x10) = 2;
        func_0x000109d1b4dc(lVar8 + 0x18);
        goto LAB_1092b9548;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar6 >> 1 & 1) != 0) {
LAB_1092b9548:
      plVar4 = (long *)*plVar7;
      *plVar7 = 0;
      if (plVar4 == (long *)0x0) {
        return;
      }
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 0x200000000;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 >> 0x21 == 1) {
        func_0x000109d1b3c4(plVar4,1,plVar7);
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 8))(plVar4);
          return;
        }
      }
      return;
    }
  } while( true );
}



/* Entry: 1092b9578; end: 1092b98cb;  */

void FUN_1092b9578(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  
  uVar11 = *param_2;
  puVar6 = (undefined8 *)0x70;
  __Znwm();
  *puVar6 = FUN_1092ba660;
  puVar6[1] = FUN_1092ba898;
  FUN_1092b98cc(puVar6 + 2);
  lVar8 = puVar6[7];
  if (lVar8 != 0) {
    plVar7 = (long *)(lVar8 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lVar8;
  FUN_1092b8dfc(puVar6 + 0xc,uVar11,param_2[1],param_2[2]);
  puVar6[0xb] = puVar6[0xc];
  plVar7 = (long *)(puVar6[0xc] + 8);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = *plVar7 + 4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (((uint)*(undefined8 *)(puVar6[0xb] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0xd) = 0;
    lVar8 = puVar6[0xb];
    plVar7 = (long *)(lVar8 + 0x10);
    uStack_40 = puVar6[3];
    do {
      lVar10 = *plVar7;
      if (lVar10 == 0) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          uStack_50 = 0;
          plStack_48 = puVar6;
          func_0x000109d1b588(lVar8 + 0x18,&uStack_50);
          *(undefined8 *)(lVar8 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar10 >> 1 & 1) == 0);
  }
  plVar7 = (long *)puVar6[0xb];
  if (((uint)*(undefined8 *)(puVar6[0xb] + 0x10) >> 5 & 1) != 0) {
    FUN_1092af97c(plVar7 + 0x12);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1092b97fc);
    (*pcVar5)();
  }
  lVar8 = plVar7[0x14];
  lVar10 = plVar7[0x13];
  puVar6[10] = plVar7[0x14];
  puVar6[9] = lVar10;
  if (lVar8 != 0) {
    plVar1 = (long *)(lVar8 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar2 = (ulong *)(plVar7 + 1);
  do {
    uVar9 = *puVar2;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar4) {
      *puVar2 = uVar9 - 4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((uVar9 & 0x1fffffffc) == 4) {
    do {
      uVar9 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar9 - 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (uVar9 - 1 == 0) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  plVar7 = (long *)puVar6[0xc];
  if (plVar7 != (long *)0x0) {
    puVar2 = (ulong *)(plVar7 + 1);
    do {
      uVar9 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar9 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar9 & 0x1fffffffc) == 4) {
      do {
        uVar9 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar9 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar9 - 1 == 0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
  }
  plStack_48 = (long *)puVar6[10];
  uStack_50 = puVar6[9];
  puVar6[9] = 0;
  puVar6[10] = 0;
  FUN_1092b94b8(puVar6 + 2,&uStack_50);
  plVar7 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = (long *)puVar6[10];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  func_0x000109d1a1d0(puVar6 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar6);
  return;
}



/* Entry: 1092b98cc; end: 1092b996b;  */

undefined8 * FUN_1092b98cc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  puVar1[2] = 0;
  puVar1[1] = 0x200000006;
  *(undefined2 *)(puVar1 + 3) = 4;
  uVar3 = 0;
  uVar4 = 0;
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
  puVar1[0x10] = 0;
  puVar1[0x11] = puVar1 + 3;
  puVar1[0x12] = 0;
  *puVar1 = &PTR_FUN_110ae9018;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x15) = 0;
  ppuVar2 = &PTR___tlv_bootstrap_11340dd98;
  (*(code *)PTR___tlv_bootstrap_11340dd98)();
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[4] = 0;
  func_0x000109d18960(param_1,*ppuVar2,0);
  param_1[5] = puVar1;
  param_1[6] = puVar1;
  return param_1;
}



/* Entry: 1092b996c; end: 1092b9a4f;  */

undefined8 * FUN_1092b996c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae9018;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    func_0x0001092af864(param_1 + 0x13);
  }
  *param_1 = &PTR_FUN_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_FUN_110ae8c08;
  return param_1;
}



/* Entry: 1092b9a50; end: 1092b9c17;  */

long ***** FUN_1092b9a50(long *param_1)

{
  long ****pppplVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *****ppppplVar5;
  long ****pppplVar6;
  long ***ppplVar7;
  long *****ppppplVar8;
  long ***ppplStack_e0;
  long ****pppplStack_d8;
  long ****pppplStack_d0;
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  code *pcStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar8 = (long *****)param_1[5];
  param_1[5] = 0;
  lStack_b8 = *param_1;
  lStack_70 = param_1[1];
  lStack_68 = param_1[2];
  pcStack_88 = FUN_1092b9e54;
  ppuStack_80 = &PTR_FUN_110ae90b0;
  uStack_c8 = 0x1092ba028;
  ppuStack_c0 = &PTR_DAT_110ae90c8;
  pppplStack_d0 = (long ****)ppppplVar8;
  lStack_78 = lStack_b8;
  FUN_1092b6c40(&ppplStack_e0,*(undefined8 *)(lStack_b8 + 0x18),lStack_70,lStack_68,&pcStack_88,
                &uStack_c8);
  (*(code *)*ppuStack_c0)(&ppuStack_c0);
  (*(code *)*ppuStack_80)(&ppuStack_80);
  FUN_1092b5e04(ppppplVar8,&ppplStack_e0);
  if ((long *****)pppplStack_d8 != (long *****)0x0) {
    ppppplVar5 = (long *****)(pppplStack_d8 + 1);
    do {
      pppplVar6 = *ppppplVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppplVar5,0x10);
      if (bVar3) {
        *ppppplVar5 = (long ****)((long)pppplVar6 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (pppplVar6 == (long ****)0x0) {
      (*(code *)(*pppplStack_d8)[2])(pppplStack_d8);
      ppppplVar8 = (long *****)pppplStack_d8;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  while( true ) {
    pppplVar6 = pppplStack_d0;
    if ((char)param_1[4] == '\x01') {
      *(undefined1 *)(param_1 + 4) = 0;
    }
    pppplStack_d0 = (long ****)0x0;
    ppppplVar5 = (long *****)0x0;
    if ((long *****)pppplVar6 != (long *****)0x0) {
      ppppplVar8 = &pppplStack_d0;
      FUN_1092b4274();
      ppppplVar5 = (long *****)pppplStack_d0;
      if ((long *****)pppplStack_d0 != (long *****)0x0) {
        ppppplVar8 = &pppplStack_d0;
        FUN_1092b4274();
      }
    }
    iVar4 = (int)ppppplVar5;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) break;
    ___stack_chk_fail();
    if (iVar4 == 0) {
      __Unwind_Resume(ppppplVar8);
      func_0x000104bd46a0();
      if (ppppplVar8[2] != (long ****)0x0) {
        FUN_1092b4274();
      }
      pppplVar6 = ppppplVar8[1];
      if (pppplVar6 != (long ****)0x0) {
        pppplVar1 = pppplVar6 + 1;
        do {
          ppplVar7 = *pppplVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppplVar1,0x10);
          if (bVar3) {
            *pppplVar1 = (long ***)((long)ppplVar7 + -4);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (((ulong)ppplVar7 & 0x1fffffffc) == 4) {
          do {
            ppplVar7 = *pppplVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pppplVar1,0x10);
            if (bVar3) {
              *pppplVar1 = (long ***)((long)ppplVar7 + -1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((long ***)((long)ppplVar7 + -1) == (long ***)0x0) {
            (*(code *)(*pppplVar6)[1])();
          }
        }
      }
      return ppppplVar8;
    }
    (*(code *)*ppuStack_c0)(&ppuStack_c0);
    (*(code *)*ppuStack_80)(&ppuStack_80);
    ___cxa_begin_catch(ppppplVar8);
    __ZSt17current_exceptionv(&ppplStack_e0);
    func_0x000109d1b350(pppplStack_d8,&ppplStack_e0);
    ppppplVar8 = (long *****)&ppplStack_e0;
    __ZNSt13exception_ptrD1Ev();
    ___cxa_end_catch();
  }
  return ppppplVar8;
}



/* Entry: 1092b9c18; end: 1092b9e53;  */

long FUN_1092b9c18(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_1092b4274();
  }
  plVar4 = *(long **)(param_1 + 8);
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
  return param_1;
}



/* Entry: 1092b9e54; end: 1092ba003;  */

void FUN_1092b9e54(long *param_1,long param_2)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plStack_30;
  undefined1 auStack_28 [8];
  
  (**(code **)(**(long **)(param_2 + 0x10) + 0x28))
            (&plStack_30,*(long **)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
             *(undefined8 *)(param_2 + 0x20));
  func_0x000109d1a244(&plStack_30);
  if ((((uint)plStack_30[2] >> 1 & 1) != 0) && (((uint)plStack_30[2] >> 5 & 1) == 0)) {
    lVar7 = plStack_30[0x14];
    lVar9 = plStack_30[0x13];
    param_1[1] = plStack_30[0x14];
    *param_1 = lVar9;
    if (lVar7 != 0) {
      plVar1 = (long *)(lVar7 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puVar2 = (ulong *)(plStack_30 + 1);
    do {
      uVar8 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar8 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar8 & 0x1fffffffc) == 4) {
      do {
        uVar8 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar8 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar8 - 1 == 0) {
        (**(code **)(*plStack_30 + 8))();
      }
    }
    return;
  }
  if (((uint)plStack_30[2] >> 5 & 1) == 0) {
    puVar6 = (undefined8 *)0x10;
    ___cxa_allocate_exception();
    __ZNSt13runtime_errorC2EPKc();
    *puVar6 = &PTR_FUN_110ae85c0;
    ___cxa_throw(puVar6,&PTR_DAT_110ae8598,FUN_1092af9d8);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(auStack_28,plStack_30 + 0x12);
    FUN_1092af97c(auStack_28);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1092b9f90);
  (*pcVar5)();
}



/* Entry: 1092ba004; end: 1092ba063;  */

void FUN_1092ba004(void)

{
  return;
}



/* Entry: 1092ba064; end: 1092ba0ff;  */

byte FUN_1092ba064(undefined8 *param_1,long param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 *puStack_40;
  long lStack_38;
  
  lStack_38 = 0;
  func_0x000109d18960(param_2 + 0x10,*param_1,&lStack_38);
  if (lStack_38 == 0) {
    bVar1 = *(byte *)(param_1 + 1);
    if ((bVar1 & 1) == 0) {
      puStack_40 = (undefined8 *)*param_1;
      uStack_50 = 0;
      lStack_48 = param_2;
      (**(code **)*puStack_40)(puStack_40,&uStack_50);
    }
    __ZNSt13exception_ptrD1Ev(&lStack_38);
    return bVar1 ^ 1;
  }
  FUN_1092af97c(&lStack_38);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1092ba0ec);
  (*pcVar2)();
}



/* Entry: 1092ba100; end: 1092ba17b;  */

void FUN_1092ba100(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  
  plVar8 = (long *)(param_1 + 0x30);
  lVar5 = *plVar8;
  plVar4 = (long *)(lVar5 + 0x10);
  do {
    lVar7 = *plVar4;
    if (lVar7 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        func_0x000109d1b4dc(lVar5 + 0x18);
        goto LAB_1092ba154;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar7 >> 1 & 1) != 0) {
LAB_1092ba154:
      plVar4 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar4 == (long *)0x0) {
        return;
      }
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 0x200000000;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 >> 0x21 == 1) {
        func_0x000109d1b3c4(plVar4,1,plVar8);
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar4 != (long *)0x0) && (uVar6 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 8))(plVar4);
          return;
        }
      }
      return;
    }
  } while( true );
}



/* Entry: 1092ba17c; end: 1092ba217;  */

undefined8 * FUN_1092ba17c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)0xa0;
  __Znwm();
  puVar1[2] = 0;
  puVar1[1] = 0x200000006;
  *(undefined2 *)(puVar1 + 3) = 4;
  uVar3 = 0;
  uVar4 = 0;
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
  puVar1[0x10] = 0;
  puVar1[0x11] = puVar1 + 3;
  puVar1[0x12] = 0;
  *puVar1 = &PTR_FUN_110ae91c0;
  *(undefined2 *)(puVar1 + 0x13) = 0;
  ppuVar2 = &PTR___tlv_bootstrap_11340dd98;
  (*(code *)PTR___tlv_bootstrap_11340dd98)();
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[4] = 0;
  func_0x000109d18960(param_1,*ppuVar2,0);
  param_1[5] = puVar1;
  param_1[6] = puVar1;
  return param_1;
}



/* Entry: 1092ba218; end: 1092ba283;  */

undefined8 * FUN_1092ba218(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_FUN_110ae8c08;
  return param_1;
}



/* Entry: 1092ba284; end: 1092ba2e3;  */

void FUN_1092ba284(long *param_1)

{
  long lVar1;
  
  lVar1 = 0xd0;
  __Znwm();
  FUN_1092ba2e4();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 1092ba2e4; end: 1092ba32b;  */

undefined8 * FUN_1092ba2e4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ae90f0;
  FUN_1092ba36c(param_1 + 3);
  return param_1;
}



/* Entry: 1092ba32c; end: 1092ba33b;  */

void FUN_1092ba32c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae90f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1092ba33c; end: 1092ba35b;  */

void FUN_1092ba33c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae90f0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092ba35c; end: 1092ba36b;  */

void FUN_1092ba35c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001092ba364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 8))();
  return;
}



/* Entry: 1092ba36c; end: 1092ba40b;  */

undefined1 * FUN_1092ba36c(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  long lStack_38;
  
  puVar2 = &uStack_80;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_2;
  _strlen(param_2);
  puStack_78 = &UNK_1053a6a3c;
  ppuStack_70 = &PTR_FUN_110ae9180;
  uStack_80 = param_3;
  func_0x000109d18d1c(param_1,param_2,uVar1,&uStack_80);
  FUN_1092ba41c(&uStack_80);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  return (undefined1 *)puVar2;
}



/* Entry: 1092ba40c; end: 1092ba41b;  */

void FUN_1092ba40c(void)

{
  return;
}



/* Entry: 1092ba41c; end: 1092ba46f;  */

long FUN_1092ba41c(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + 0x10);
  puVar1 = (undefined8 *)*plVar2;
  if (*(char *)(puVar1 + 1) == '\x01') {
    (**(code **)(param_1 + 8))();
    puVar1 = (undefined8 *)*plVar2;
  }
  (*(code *)*puVar1)(plVar2);
  return param_1;
}



/* Entry: 1092ba470; end: 1092ba4c7;  */

long FUN_1092ba470(long param_1)

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



/* Entry: 1092ba4c8; end: 1092ba4d7;  */

void FUN_1092ba4c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae9140;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1092ba4d8; end: 1092ba4f7;  */

void FUN_1092ba4d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae9140;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092ba4f8; end: 1092ba55b;  */

void FUN_1092ba4f8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x58);
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x60);
    lVar1 = lVar2;
    if (lVar3 != lVar2) {
      do {
        if (*(long *)(lVar3 + -8) != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        lVar3 = lVar3 + -0x10;
      } while (lVar3 != lVar2);
      lVar1 = *(long *)(param_1 + 0x58);
    }
    *(long *)(param_1 + 0x60) = lVar2;
    __ZdlPv(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 0x18);
  return;
}



/* Entry: 1092ba55c; end: 1092ba55f;  */

void FUN_1092ba55c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092ba560; end: 1092ba65f;  */

void FUN_1092ba560(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar7 = *param_1;
  if (lVar7 != 0) {
    plVar8 = (long *)(lVar7 + 0x10);
    uVar4 = *param_2;
    uStack_48 = param_3[1];
    uStack_50 = *param_3;
    uStack_40 = param_3[2];
    do {
      lVar6 = *plVar8;
      if (lVar6 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          func_0x000109d1b624(lVar7 + 0x18,&uStack_50,uVar4);
          *(undefined8 *)(lVar7 + 0x10) = 0;
          plVar8 = (long *)*param_1;
          *param_1 = 0;
          if (plVar8 != (long *)0x0) {
            puVar1 = (ulong *)(plVar8 + 1);
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
              (**(code **)(*plVar8 + 0x10))(plVar8);
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
                (**(code **)(*plVar8 + 8))(plVar8);
              }
            }
          }
          *param_2 = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar6 >> 1 & 1) == 0);
  }
  return;
}



/* Entry: 1092ba660; end: 1092ba897;  */

void FUN_1092ba660(long param_1)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uStack_30;
  long *plStack_28;
  
  plVar6 = *(long **)(param_1 + 0x58);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x10) >> 5 & 1) == 0) {
    lVar7 = plVar6[0x14];
    lVar9 = plVar6[0x13];
    *(long *)(param_1 + 0x50) = plVar6[0x14];
    *(long *)(param_1 + 0x48) = lVar9;
    if (lVar7 != 0) {
      plVar1 = (long *)(lVar7 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puVar2 = (ulong *)(plVar6 + 1);
    do {
      uVar8 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar8 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar8 & 0x1fffffffc) == 4) {
      do {
        uVar8 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar8 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar8 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    plVar6 = *(long **)(param_1 + 0x60);
    if (plVar6 != (long *)0x0) {
      puVar2 = (ulong *)(plVar6 + 1);
      do {
        uVar8 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar8 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar8 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    plStack_28 = *(long **)(param_1 + 0x50);
    uStack_30 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    FUN_1092b94b8(param_1 + 0x10,&uStack_30);
    plVar6 = plStack_28;
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
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
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    plVar6 = *(long **)(param_1 + 0x50);
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
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
  FUN_1092af97c(plVar6 + 0x12);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1092ba7e4);
  (*pcVar5)();
}



/* Entry: 1092ba898; end: 1092ba94f;  */

void FUN_1092ba898(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = *(long **)(param_1 + 0x58);
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
  plVar4 = *(long **)(param_1 + 0x60);
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



/* Entry: 1092ba950; end: 1092baba3;  */

void FUN_1092ba950(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
    FUN_1092b9578(param_1 + 0x70,param_1 + 0x48);
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x70);
    plVar5 = (long *)(*(long *)(param_1 + 0x70) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x78) = 1;
      lVar8 = *(long *)(param_1 + 0x60);
      plVar5 = (long *)(lVar8 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar7 = *plVar5;
        if (lVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_38);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar7 >> 1 & 1) == 0);
    }
  }
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10) >> 5 & 1) != 0) {
    FUN_1092af97c(*(long *)(param_1 + 0x60) + 0x90);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1092baae8);
    (*pcVar4)();
  }
  FUN_1092b94b8(param_1 + 0x10,*(long *)(param_1 + 0x60) + 0x98);
  plVar5 = *(long **)(param_1 + 0x60);
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
  plVar5 = *(long **)(param_1 + 0x70);
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
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1092baba4; end: 1092bac67;  */

void FUN_1092baba4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0x78) == '\x01') {
    plVar4 = *(long **)(param_1 + 0x60);
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
    plVar4 = *(long **)(param_1 + 0x70);
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
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1092bac68; end: 1092bacdb;  */

undefined8 FUN_1092bac68(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((bRam0000000113829bc8 & 1) == 0) {
    iVar1 = 0x13829bc8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uVar2 = 0x1d;
      _sysconf();
      uRam0000000113829bc0 = uVar2;
      ___cxa_guard_release(0x113829bc8);
    }
  }
  return uRam0000000113829bc0;
}



/* Entry: 1092bacdc; end: 1092baf03;  */

/* WARNING: Removing unreachable block (ram,0x0001092bae1c) */

void FUN_1092bacdc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *****pppppuVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 **ppuVar4;
  undefined1 **ppuVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined4 uStack_c8;
  long lStack_80;
  undefined8 ****ppppuStack_50;
  ulong uStack_48;
  ulong uStack_40;
  int iStack_38;
  undefined1 uStack_31;
  
  uVar2 = SUB84(&puStack_e0,0);
  ppuVar5 = &puStack_e0;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&puStack_e0,*param_2,param_2[1]);
  }
  else {
    uStack_d8 = param_2[1];
    puStack_e0 = (undefined1 *)*param_2;
    lStack_d0 = param_2[2];
  }
  ppuVar4 = (undefined1 **)puStack_e0;
  if (-1 < lStack_d0) {
    ppuVar4 = &puStack_e0;
  }
  _open(ppuVar4,0);
  iStack_38 = (int)ppuVar4;
  if (lStack_d0 < 0) {
    __ZdlPv(puStack_e0);
  }
  if (iStack_38 < 0) {
    func_0x000107c31940(&puStack_e0,&UNK_10f563e4f);
    __ZSt19uncaught_exceptionsv();
    uStack_c8 = uVar2;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&puStack_e0,&UNK_10f563b83,0x10);
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(&ppppuStack_50,*param_2,param_2[1]);
    }
    else {
      uStack_48 = param_2[1];
      ppppuStack_50 = (undefined8 ****)*param_2;
      uStack_40 = param_2[2];
    }
    uVar7 = uStack_48;
    pppppuVar1 = (undefined8 *****)ppppuStack_50;
    if (-1 < (long)uStack_40) {
      uVar7 = uStack_40 >> 0x38;
      pppppuVar1 = &ppppuStack_50;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&puStack_e0,pppppuVar1,uVar7);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(&puStack_e0,": ",2)
    ;
    ___error();
    uVar6 = (ulong)*(uint *)ppuVar5;
    _strerror(uVar6);
    uVar7 = uVar6;
    _strlen();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&puStack_e0,uVar6,uVar7);
    FUN_1092a22e8(&puStack_e0);
  }
  iVar3 = iStack_38;
  _fstat();
  if (iVar3 == 0 && lStack_80 == 0) {
    FUN_1092b6494(&ppppuStack_50,&uStack_31,param_2,param_3);
  }
  else {
    FUN_1092b679c(&ppppuStack_50,&uStack_31,&iStack_38,param_2,param_3);
  }
  param_1[1] = uStack_48;
  *param_1 = ppppuStack_50;
  FUN_1092b6464(&iStack_38);
  return;
}



/* Entry: 1092baf04; end: 1092bb483;  */

undefined8 * FUN_1092baf04(undefined8 *param_1,int *param_2,long *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 **ppuVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar8;
  ulong uVar9;
  undefined8 ***pppuVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  int iStack_12c;
  undefined8 **ppuStack_128;
  undefined8 **ppuStack_120;
  ulong uStack_118;
  ulong uStack_110;
  undefined8 **ppuStack_100;
  undefined8 *puStack_f8;
  ulong uStack_f0;
  undefined4 uStack_e8;
  undefined1 auStack_e0 [24];
  undefined4 uStack_c8;
  long lStack_80;
  undefined1 *puVar7;
  
  puVar11 = param_1;
  FUN_1092b8a1c(param_1,param_4);
  plVar12 = puVar11 + 5;
  *puVar11 = &PTR_FUN_110ae91e0;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar12,*param_3,param_3[1]);
  }
  else {
    lVar17 = param_3[1];
    lVar15 = *param_3;
    puVar11[7] = param_3[2];
    puVar11[6] = lVar17;
    *plVar12 = lVar15;
  }
  plVar13 = param_1 + 8;
  param_1[9] = 0;
  *plVar13 = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  iStack_12c = *param_2;
  if (iStack_12c < 0) {
    puVar7 = auStack_e0;
    func_0x000107c31940(puVar7,&UNK_10f563e4f);
    uVar5 = SUB84(puVar7,0);
    __ZSt19uncaught_exceptionsv();
    uStack_c8 = uVar5;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (auStack_e0,&UNK_10f563d64,0x10);
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      func_0x000107c3192c(&ppuStack_100,*param_3,param_3[1]);
    }
    else {
      puStack_f8 = (undefined8 *)param_3[1];
      ppuStack_100 = (undefined8 **)*param_3;
      uStack_f0 = param_3[2];
    }
    puVar1 = puStack_f8;
    pppuVar10 = (undefined8 ***)ppuStack_100;
    if (-1 < (long)uStack_f0) {
      puVar1 = (undefined8 *)(uStack_f0 >> 0x38);
      pppuVar10 = &ppuStack_100;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (auStack_e0,pppuVar10,puVar1);
    if ((long)uStack_f0 < 0) {
      __ZdlPv(ppuStack_100);
    }
    FUN_1092a22e8(auStack_e0);
    iStack_12c = *param_2;
  }
  *param_2 = -1;
  iVar6 = iStack_12c;
  _fstat(iStack_12c,auStack_e0);
  if (iVar6 != 0) {
    pppuVar10 = &ppuStack_100;
    func_0x000107c31940(pppuVar10,&UNK_10f563e4f);
    uVar5 = SUB84(pppuVar10,0);
    __ZSt19uncaught_exceptionsv();
    uStack_e8 = uVar5;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&ppuStack_100,&UNK_10f563d75,0xe);
    if (*(char *)((long)param_1 + 0x3f) < '\0') {
      func_0x000107c3192c(&ppuStack_120,param_1[5],param_1[6]);
    }
    else {
      uStack_118 = puVar11[6];
      ppuStack_120 = (undefined8 **)*plVar12;
      uStack_110 = puVar11[7];
    }
    uVar9 = uStack_118;
    pppuVar10 = (undefined8 ***)ppuStack_120;
    if (-1 < (long)uStack_110) {
      uVar9 = uStack_110 >> 0x38;
      pppuVar10 = &ppuStack_120;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&ppuStack_100,pppuVar10,uVar9);
    pppuVar10 = &ppuStack_100;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(pppuVar10,": ",2);
    ___error();
    uVar8 = (ulong)*(uint *)pppuVar10;
    _strerror(uVar8);
    uVar9 = uVar8;
    _strlen();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&ppuStack_100,uVar8,uVar9);
    if ((long)uStack_110 < 0) {
      __ZdlPv(ppuStack_120);
    }
    FUN_1092a22e8(&ppuStack_100);
  }
  *plVar13 = lStack_80;
  if (lStack_80 == 0) {
    pppuVar10 = &ppuStack_100;
    func_0x000107c31940(pppuVar10,&UNK_10f563e4f);
    uVar5 = SUB84(pppuVar10,0);
    __ZSt19uncaught_exceptionsv();
    uStack_e8 = uVar5;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&ppuStack_100,&UNK_10f563d84,0x39);
    if (*(char *)((long)param_1 + 0x3f) < '\0') {
      func_0x000107c3192c(&ppuStack_120,param_1[5],param_1[6]);
    }
    else {
      uStack_118 = puVar11[6];
      ppuStack_120 = (undefined8 **)*plVar12;
      uStack_110 = puVar11[7];
    }
    uVar9 = uStack_118;
    pppuVar10 = (undefined8 ***)ppuStack_120;
    if (-1 < (long)uStack_110) {
      uVar9 = uStack_110 >> 0x38;
      pppuVar10 = &ppuStack_120;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&ppuStack_100,pppuVar10,uVar9);
    if ((long)uStack_110 < 0) {
      __ZdlPv(ppuStack_120);
    }
    FUN_1092a22e8(&ppuStack_100);
    lStack_80 = *plVar13;
  }
  pppuVar10 = (undefined8 ***)0x0;
  _mmap(0,lStack_80,1,1,iStack_12c,0);
  ppuStack_128 = pppuVar10;
  if (pppuVar10 == (undefined8 ***)0xffffffffffffffff) {
    pppuVar10 = &ppuStack_100;
    func_0x000107c31940(pppuVar10,&UNK_10f563e4f);
    uVar5 = SUB84(pppuVar10,0);
    __ZSt19uncaught_exceptionsv();
    uStack_e8 = uVar5;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&ppuStack_100,&UNK_10f563dbe,0xd);
    if (*(char *)((long)param_1 + 0x3f) < '\0') {
      func_0x000107c3192c(&ppuStack_120,param_1[5],param_1[6]);
    }
    else {
      uStack_118 = puVar11[6];
      ppuStack_120 = (undefined8 **)*plVar12;
      uStack_110 = puVar11[7];
    }
    uVar9 = uStack_118;
    pppuVar10 = (undefined8 ***)ppuStack_120;
    if (-1 < (long)uStack_110) {
      uVar9 = uStack_110 >> 0x38;
      pppuVar10 = &ppuStack_120;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&ppuStack_100,pppuVar10,uVar9);
    pppuVar10 = &ppuStack_100;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(pppuVar10,": ",2);
    ___error();
    uVar8 = (ulong)*(uint *)pppuVar10;
    _strerror(uVar8);
    uVar9 = uVar8;
    _strlen();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&ppuStack_100,uVar8,uVar9);
    if ((long)uStack_110 < 0) {
      __ZdlPv(ppuStack_120);
    }
    pppuVar10 = &ppuStack_100;
    FUN_1092a22e8();
  }
  uVar5 = SUB84(pppuVar10,0);
  ppuStack_100 = &ppuStack_128;
  puStack_f8 = param_1;
  __ZSt19uncaught_exceptionsv();
  ppuVar4 = ppuStack_128;
  uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar5);
  param_1[0xb] = ppuStack_128;
  uVar14 = param_1[8];
  lVar15 = param_1[4];
  uVar18 = param_1[4];
  uVar16 = param_1[3];
  puVar11 = (undefined8 *)0x40;
  __Znwm();
  iVar6 = iStack_12c;
  puVar11[1] = 0;
  puVar11[2] = 0;
  *puVar11 = &PTR_FUN_110ae92e8;
  iStack_12c = -1;
  if (lVar15 != 0) {
    plVar12 = (long *)(lVar15 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = *plVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar11[3] = ppuVar4;
  puVar11[4] = uVar14;
  ppuStack_120 = (undefined8 **)CONCAT44(ppuStack_120._4_4_,0xffffffff);
  *(int *)(puVar11 + 5) = iVar6;
  puVar11[7] = uVar18;
  puVar11[6] = uVar16;
  FUN_1092b6464(&ppuStack_120);
  plVar12 = (long *)param_1[10];
  param_1[9] = puVar11 + 3;
  param_1[10] = puVar11;
  if (plVar12 != (long *)0x0) {
    plVar13 = plVar12 + 1;
    do {
      lVar15 = *plVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar15 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  FUN_1092bb484(&ppuStack_100);
  FUN_1092b6464(&iStack_12c);
  return param_1;
}



/* Entry: 1092bb484; end: 1092bb4c7;  */

undefined8 * FUN_1092bb484(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = *(int *)(param_1 + 2);
  puVar2 = param_1;
  __ZSt19uncaught_exceptionsv();
  if (iVar1 < (int)puVar2) {
    _munmap(*(undefined8 *)*param_1,*(undefined8 *)(param_1[1] + 0x40));
  }
  return param_1;
}



/* Entry: 1092bb4c8; end: 1092bb793;  */

/* WARNING: Removing unreachable block (ram,0x0001092bb694) */
/* WARNING: Removing unreachable block (ram,0x0001092bb5a4) */

void FUN_1092bb4c8(int *param_1,int param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  uint *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = &uStack_b0;
  _fileno();
  if (param_2 < 0) {
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_70,*param_3,param_3[1]);
    }
    else {
      uStack_68 = param_3[1];
      uStack_70 = *param_3;
      lStack_60 = param_3[2];
    }
    puVar1 = &uStack_70;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar1,0,&UNK_10f563dcc,0x2a);
    uStack_48 = puVar1[1];
    uStack_50 = *puVar1;
    uStack_40 = puVar1[2];
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    (**(code **)(param_4 + 0x90))(&uStack_50,param_4 + 0x90);
    if (lStack_60 < 0) {
      __ZdlPv(uStack_70);
    }
    *param_1 = -1;
  }
  else {
    _dup();
    if (param_2 < 0) {
      iStack_74 = param_2;
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        func_0x000107c3192c(&uStack_b0,*param_3,param_3[1]);
      }
      else {
        uStack_a8 = param_3[1];
        uStack_b0 = *param_3;
        lStack_a0 = param_3[2];
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (&uStack_b0,0,&UNK_10f563df7,0x12);
      uStack_88 = puVar1[1];
      uStack_90 = *puVar1;
      lStack_80 = puVar1[2];
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = 0;
      puVar2 = (uint *)&uStack_90;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar2,": ",2);
      uStack_68 = *(undefined8 *)(puVar2 + 2);
      uStack_70 = *(undefined8 *)puVar2;
      lStack_60 = *(long *)(puVar2 + 4);
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[0] = 0;
      puVar2[1] = 0;
      ___error();
      uVar3 = (ulong)*puVar2;
      _strerror(uVar3);
      uVar4 = uVar3;
      _strlen();
      puVar1 = &uStack_70;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar1,uVar3,uVar4);
      uStack_48 = puVar1[1];
      uStack_50 = *puVar1;
      uStack_40 = puVar1[2];
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = 0;
      (**(code **)(param_4 + 0x90))(&uStack_50,param_4 + 0x90);
      if (lStack_60 < 0) {
        __ZdlPv(uStack_70);
      }
      if (lStack_80 < 0) {
        __ZdlPv(uStack_90);
      }
      if (lStack_a0 < 0) {
        __ZdlPv(uStack_b0);
      }
      param_2 = -1;
    }
    else {
      iStack_74 = -1;
    }
    *param_1 = param_2;
    FUN_1092b6464(&iStack_74);
  }
  return;
}



/* Entry: 1092bb794; end: 1092bb84b;  */

void FUN_1092bb794(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plStack_28;
  
  *param_1 = &PTR_FUN_110ae91e0;
  (**(code **)(*(long *)param_1[1] + 0x38))(&plStack_28);
  func_0x000109d1a244(&plStack_28);
  if (plStack_28 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_28 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plStack_28 + 8))();
      }
    }
  }
  FUN_1092bc814(param_1 + 9);
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    __ZdlPv(param_1[5]);
  }
  FUN_1092b8ac8(param_1);
  return;
}



/* Entry: 1092bb84c; end: 1092bb84f;  */

void FUN_1092bb84c(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plStack_28;
  
  *param_1 = &PTR_FUN_110ae91e0;
  (**(code **)(*(long *)param_1[1] + 0x38))(&plStack_28);
  func_0x000109d1a244(&plStack_28);
  if (plStack_28 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_28 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plStack_28 + 8))();
      }
    }
  }
  FUN_1092bc814(param_1 + 9);
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    __ZdlPv(param_1[5]);
  }
  FUN_1092b8ac8(param_1);
  return;
}



/* Entry: 1092bb850; end: 1092bb863;  */

void FUN_1092bb850(void)

{
  FUN_1092bb794();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092bb864; end: 1092bbaa7;  */

void FUN_1092bb864(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *****pppppuVar4;
  undefined *****pppppuVar5;
  undefined *****pppppuVar6;
  ulong uVar7;
  undefined ****ppppuVar8;
  undefined ****ppppuVar9;
  long lVar10;
  ulong uVar11;
  undefined ****ppppuStack_a8;
  undefined ****ppppuStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined1 auStack_88 [8];
  long *plStack_80;
  undefined8 uStack_78;
  undefined ****ppppuStack_70;
  code *pcStack_68;
  undefined ***pppuStack_60;
  undefined8 uStack_58;
  undefined ****ppppuStack_50;
  ulong uStack_48;
  ulong uStack_40;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_4 == 0) {
    pppppuVar4 = (undefined *****)0x30;
    __Znwm();
    pppppuVar4[1] = (undefined ****)0x0;
    pppppuVar4[2] = (undefined ****)0x0;
    *pppppuVar4 = (undefined ****)&PTR_DAT_110ae89e0;
    pppppuVar4[4] = (undefined ****)0x0;
    pppppuVar4[5] = (undefined ****)0x0;
    ppppuStack_a8 = (undefined ****)(pppppuVar4 + 3);
    *ppppuStack_a8 = (undefined ***)0x1132cee70;
    pppppuVar5 = &ppppuStack_a8;
    ppppuStack_a0 = (undefined ****)pppppuVar4;
    FUN_1092b56ec(param_1);
    uVar11 = param_4;
    if ((undefined *****)ppppuStack_a0 == (undefined *****)0x0) goto LAB_1092bba30;
    pppppuVar4 = (undefined *****)(ppppuStack_a0 + 1);
    do {
      ppppuVar9 = *pppppuVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppppuVar4,0x10);
      if (bVar3) {
        *pppppuVar4 = (undefined ****)((long)ppppuVar9 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      pppppuVar6 = (undefined *****)ppppuStack_a0;
    } while (cVar2 != '\0');
  }
  else {
    uStack_78 = *(undefined8 *)(param_2 + 0x48);
    ppppuStack_70 = *(undefined *****)(param_2 + 0x50);
    if ((undefined *****)ppppuStack_70 == (undefined *****)0x0) {
      lVar10 = *(long *)(param_2 + 0x58);
    }
    else {
      pppppuVar5 = (undefined *****)(ppppuStack_70 + 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar5,0x10);
        if (bVar3) {
          *pppppuVar5 = (undefined ****)((long)*pppppuVar5 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar10 = *(long *)(param_2 + 0x58);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar5,0x10);
        if (bVar3) {
          *pppppuVar5 = (undefined ****)((long)*pppppuVar5 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pcStack_68 = FUN_1092bc940;
    pppuStack_60 = (undefined ***)&PTR_FUN_110ae9328;
    ppppuStack_a8 = (undefined ****)0x0;
    ppppuStack_a0 = (undefined ****)0x0;
    uStack_98 = param_3;
    uStack_90 = param_4;
    uStack_58 = uStack_78;
    ppppuStack_50 = ppppuStack_70;
    uStack_48 = param_3;
    uStack_40 = param_4;
    FUN_1092b368c(auStack_88,lVar10 + param_3,param_4,param_3,&pcStack_68);
    FUN_1092b56ec(param_1,auStack_88);
    uVar11 = param_3;
    if (plStack_80 != (long *)0x0) {
      plVar1 = plStack_80 + 1;
      do {
        lVar10 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_80 + 0x10))(plStack_80);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
        uVar11 = param_3;
      }
    }
    pppppuVar5 = (undefined *****)&pppuStack_60;
    (*(code *)*pppuStack_60)();
    pppppuVar4 = (undefined *****)ppppuStack_a0;
    if ((undefined *****)ppppuStack_a0 != (undefined *****)0x0) {
      pppppuVar6 = (undefined *****)(ppppuStack_a0 + 1);
      do {
        ppppuVar9 = *pppppuVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar6,0x10);
        if (bVar3) {
          *pppppuVar6 = (undefined ****)((long)ppppuVar9 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppppuVar9 == (undefined ****)0x0) {
        (*(code *)(*ppppuStack_a0)[2])(ppppuStack_a0);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppppuVar5 = pppppuVar4;
      }
    }
    param_3 = param_4;
    if ((undefined *****)ppppuStack_70 == (undefined *****)0x0) goto LAB_1092bba30;
    pppppuVar4 = (undefined *****)(ppppuStack_70 + 1);
    do {
      ppppuVar9 = *pppppuVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppppuVar4,0x10);
      if (bVar3) {
        *pppppuVar4 = (undefined ****)((long)ppppuVar9 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      pppppuVar6 = (undefined *****)ppppuStack_70;
    } while (cVar2 != '\0');
  }
  if (ppppuVar9 == (undefined ****)0x0) {
    (*(code *)(*pppppuVar6)[2])(pppppuVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    pppppuVar5 = pppppuVar6;
  }
LAB_1092bba30:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  FUN_1092b0918(&ppppuStack_a8);
  __Unwind_Resume();
  if ((uVar11 != 0) && (pppppuVar5[0xb] != (undefined ****)0x0)) {
    pppppuVar4 = pppppuVar5;
    FUN_1092bac68();
    uVar7 = -(long)pppppuVar4;
    FUN_1092bac68();
    uVar11 = (long)pppppuVar4 + param_3 + uVar11 + -1;
    FUN_1092bac68();
    ppppuVar8 = (undefined ****)(uVar11 & -(long)pppppuVar4);
    ppppuVar9 = pppppuVar5[8];
    if (ppppuVar8 <= pppppuVar5[8]) {
      ppppuVar9 = ppppuVar8;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbeffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__madvise_11034c5e0)
              ((long)pppppuVar5[0xb] + (param_3 & uVar7),(long)ppppuVar9 - (param_3 & uVar7),3);
    return;
  }
  return;
}



/* Entry: 1092bbaa8; end: 1092bbb33;  */

void FUN_1092bbaa8(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  if ((param_3 != 0) && (*(long *)(param_1 + 0x58) != 0)) {
    lVar3 = param_1;
    FUN_1092bac68();
    uVar4 = -lVar3;
    FUN_1092bac68();
    lVar1 = param_2 + param_3 + lVar3;
    FUN_1092bac68();
    uVar5 = lVar1 - 1U & -lVar3;
    uVar2 = *(ulong *)(param_1 + 0x40);
    if (uVar5 <= *(ulong *)(param_1 + 0x40)) {
      uVar2 = uVar5;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbeffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__madvise_11034c5e0)
              (*(long *)(param_1 + 0x58) + (param_2 & uVar4),uVar2 - (param_2 & uVar4),3);
    return;
  }
  return;
}



/* Entry: 1092bbb34; end: 1092bc16b;  */

/* WARNING: Removing unreachable block (ram,0x0001092bbbcc) */
/* WARNING: Type propagation algorithm not settling */

int * FUN_1092bbb34(int *param_1,undefined8 *param_2,ulong param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *******pppppppuVar4;
  undefined7 uVar5;
  undefined1 uVar6;
  undefined7 uVar7;
  byte bVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *******pppppppuVar14;
  undefined8 *puVar15;
  int *piVar16;
  long lVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 *******pppppppuStack_c8;
  int *piStack_c0;
  int iStack_b8;
  undefined8 *******pppppppuStack_b0;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined7 uStack_a0;
  byte bStack_99;
  undefined8 *******pppppppuStack_90;
  ulong *puStack_88;
  long lStack_80;
  undefined4 uStack_78;
  int iStack_6c;
  ulong uStack_68;
  undefined4 uStack_5c;
  undefined7 uStack_58;
  undefined1 uStack_51;
  undefined7 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar11 = param_1;
  uStack_68 = param_3;
  FUN_1092b8a1c(param_1,param_4);
  *(undefined1 *)(piVar11 + 10) = 0;
  *(undefined ***)piVar11 = &PTR_FUN_110ae9230;
  uVar20 = param_2[1];
  uVar19 = *param_2;
  *(undefined8 *)(piVar11 + 0x10) = param_2[2];
  *(undefined8 *)(piVar11 + 0xe) = uVar20;
  *(undefined8 *)(piVar11 + 0xc) = uVar19;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  piVar11[0x16] = 0;
  piVar11[0x17] = 0;
  *(ulong *)(piVar11 + 0x12) = param_3;
  *(undefined1 *)(piVar11 + 0x14) = 0;
  piVar11[0x18] = 0;
  piVar11[0x19] = 0;
  piVar11[0x1a] = 0;
  piVar11[0x1b] = 0;
  puStack_88 = *(ulong **)(param_1 + 0xe);
  pppppppuStack_90 = *(undefined8 ********)(param_1 + 0xc);
  lStack_80 = *(long *)(param_1 + 0x10);
  pppppppuVar14 = pppppppuStack_90;
  if (-1 < lStack_80) {
    pppppppuVar14 = &pppppppuStack_90;
  }
  _open(pppppppuVar14,0x602);
  iStack_6c = (int)pppppppuVar14;
  iStack_b8 = iStack_6c;
  if (lStack_80 < 0) {
    __ZdlPv(pppppppuStack_90);
    iStack_b8 = iStack_6c;
  }
  iStack_6c = iStack_b8;
  if (iStack_b8 < 0) {
    pppppppuVar14 = &pppppppuStack_90;
    func_0x000107c31940(pppppppuVar14,&UNK_10f563e67);
    uVar9 = SUB84(pppppppuVar14,0);
    __ZSt19uncaught_exceptionsv();
    uStack_78 = uVar9;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&pppppppuStack_90,&UNK_10f563e0a,0x12);
    if (*(char *)((long)param_1 + 0x47) < '\0') {
      func_0x000107c3192c(&pppppppuStack_b0,*(undefined8 *)(param_1 + 0xc),
                          *(undefined8 *)(param_1 + 0xe));
    }
    else {
      pppppppuStack_b0 = *(undefined8 ********)(param_1 + 0xc);
      uStack_a8 = (undefined7)*(undefined8 *)(param_1 + 0xe);
      uStack_a1 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0xe) >> 0x38);
      uStack_a0 = (undefined7)*(undefined8 *)(param_1 + 0x10);
      bStack_99 = (byte)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x38);
    }
    uVar12 = CONCAT17(uStack_a1,uStack_a8);
    pppppppuVar14 = pppppppuStack_b0;
    if (-1 < (char)bStack_99) {
      uVar12 = (ulong)bStack_99;
      pppppppuVar14 = &pppppppuStack_b0;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&pppppppuStack_90,pppppppuVar14,uVar12);
    pppppppuVar14 = &pppppppuStack_90;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppppppuVar14,": ",2);
    ___error();
    uVar13 = (ulong)*(uint *)pppppppuVar14;
    _strerror(uVar13);
    uVar12 = uVar13;
    _strlen();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&pppppppuStack_90,uVar13,uVar12);
    if ((char)bStack_99 < '\0') {
      __ZdlPv(pppppppuStack_b0);
    }
    iStack_b8 = (int)&pppppppuStack_90;
    FUN_1092a22e8();
  }
  piStack_c0 = param_1;
  __ZSt19uncaught_exceptionsv();
  iVar10 = iStack_6c;
  _ftruncate(iStack_6c,param_3);
  if (iVar10 != 0) {
    pppppppuVar14 = &pppppppuStack_90;
    func_0x000107c31940(pppppppuVar14,&UNK_10f563e67);
    uVar9 = SUB84(pppppppuVar14,0);
    __ZSt19uncaught_exceptionsv();
    uStack_78 = uVar9;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&pppppppuStack_90,&UNK_10f563e1d,0x12);
    if (*(char *)((long)param_1 + 0x47) < '\0') {
      func_0x000107c3192c(&pppppppuStack_b0,*(undefined8 *)(param_1 + 0xc),
                          *(undefined8 *)(param_1 + 0xe));
    }
    else {
      pppppppuStack_b0 = *(undefined8 ********)(param_1 + 0xc);
      uStack_a8 = (undefined7)*(undefined8 *)(param_1 + 0xe);
      uStack_a1 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0xe) >> 0x38);
      uStack_a0 = (undefined7)*(undefined8 *)(param_1 + 0x10);
      bStack_99 = (byte)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x38);
    }
    uVar12 = CONCAT17(uStack_a1,uStack_a8);
    pppppppuVar14 = pppppppuStack_b0;
    if (-1 < (char)bStack_99) {
      uVar12 = (ulong)bStack_99;
      pppppppuVar14 = &pppppppuStack_b0;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&pppppppuStack_90,pppppppuVar14,uVar12);
    pppppppuVar14 = &pppppppuStack_90;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppppppuVar14,": ",2);
    ___error();
    uVar13 = (ulong)*(uint *)pppppppuVar14;
    _strerror(uVar13);
    uVar12 = uVar13;
    _strlen();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&pppppppuStack_90,uVar13,uVar12);
    if ((char)bStack_99 < '\0') {
      __ZdlPv(pppppppuStack_b0);
    }
    FUN_1092a22e8(&pppppppuStack_90);
  }
  pppppppuVar14 = (undefined8 *******)0x0;
  _mmap(0,param_3,3,1,iStack_6c,0);
  pppppppuStack_c8 = pppppppuVar14;
  if (pppppppuVar14 == (undefined8 *******)0xffffffffffffffff) {
    pppppppuVar14 = &pppppppuStack_90;
    func_0x000107c31940(pppppppuVar14,&UNK_10f563e67);
    uVar9 = SUB84(pppppppuVar14,0);
    __ZSt19uncaught_exceptionsv();
    uStack_78 = uVar9;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&pppppppuStack_90,&UNK_10f563dbe,0xd);
    if (*(char *)((long)param_1 + 0x47) < '\0') {
      func_0x000107c3192c(&pppppppuStack_b0,*(undefined8 *)(param_1 + 0xc),
                          *(undefined8 *)(param_1 + 0xe));
    }
    else {
      pppppppuStack_b0 = *(undefined8 ********)(param_1 + 0xc);
      uStack_a8 = (undefined7)*(undefined8 *)(param_1 + 0xe);
      uStack_a1 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0xe) >> 0x38);
      uStack_a0 = (undefined7)*(undefined8 *)(param_1 + 0x10);
      bStack_99 = (byte)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x38);
    }
    uVar12 = CONCAT17(uStack_a1,uStack_a8);
    pppppppuVar14 = pppppppuStack_b0;
    if (-1 < (char)bStack_99) {
      uVar12 = (ulong)bStack_99;
      pppppppuVar14 = &pppppppuStack_b0;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&pppppppuStack_90,pppppppuVar14,uVar12);
    pppppppuVar14 = &pppppppuStack_90;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppppppuVar14,": ",2);
    ___error();
    param_3 = (ulong)*(uint *)pppppppuVar14;
    _strerror();
    uVar12 = param_3;
    _strlen();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&pppppppuStack_90,param_3,uVar12);
    if ((char)bStack_99 < '\0') {
      __ZdlPv(pppppppuStack_b0);
    }
    pppppppuVar14 = &pppppppuStack_90;
    FUN_1092a22e8();
  }
  uVar9 = SUB84(pppppppuVar14,0);
  pppppppuStack_90 = &pppppppuStack_c8;
  puStack_88 = &uStack_68;
  __ZSt19uncaught_exceptionsv();
  lStack_80 = CONCAT44(lStack_80._4_4_,uVar9);
  *(undefined8 ********)(param_1 + 0x1a) = pppppppuStack_c8;
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    param_3 = *(ulong *)(param_1 + 0xc);
    func_0x000107c3192c(&pppppppuStack_b0,param_3,*(undefined8 *)(param_1 + 0xe));
  }
  else {
    pppppppuStack_b0 = *(undefined8 ********)(param_1 + 0xc);
    uStack_a8 = (undefined7)*(undefined8 *)(param_1 + 0xe);
    uStack_a1 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0xe) >> 0x38);
    uStack_a0 = (undefined7)*(undefined8 *)(param_1 + 0x10);
    bStack_99 = (byte)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x38);
  }
  uVar12 = uStack_68;
  pppppppuVar14 = pppppppuStack_c8;
  puVar15 = (undefined8 *)0x60;
  __Znwm();
  iVar10 = iStack_6c;
  bVar8 = bStack_99;
  uVar7 = uStack_a0;
  uVar6 = uStack_a1;
  uVar5 = uStack_a8;
  pppppppuVar4 = pppppppuStack_b0;
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &PTR_DAT_110ae9350;
  iStack_6c = -1;
  uStack_58 = uStack_a8;
  uStack_51 = uStack_a1;
  uStack_50 = uStack_a0;
  uStack_a8 = 0;
  uStack_a1 = 0;
  uStack_a0 = 0;
  bStack_99 = '\0';
  pppppppuStack_b0 = (undefined8 *******)0x0;
  uVar20 = *(undefined8 *)(param_1 + 8);
  uVar19 = *(undefined8 *)(param_1 + 6);
  if (*(long *)(param_1 + 8) != 0) {
    plVar18 = (long *)(*(long *)(param_1 + 8) + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar3) {
        *plVar18 = *plVar18 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar15[3] = pppppppuVar14;
  puVar15[4] = uVar12;
  uStack_5c = 0xffffffff;
  *(int *)(puVar15 + 5) = iVar10;
  puVar15[6] = pppppppuVar4;
  puVar15[7] = CONCAT17(uVar6,uVar5);
  *(ulong *)((long)puVar15 + 0x3f) = CONCAT71(uVar7,uVar6);
  *(byte *)((long)puVar15 + 0x47) = bVar8;
  puVar15[10] = uVar20;
  puVar15[9] = uVar19;
  *(undefined1 *)(puVar15 + 0xb) = 0;
  FUN_1092b6464(&uStack_5c);
  plVar18 = *(long **)(param_1 + 0x18);
  *(undefined8 **)(param_1 + 0x16) = puVar15 + 3;
  *(undefined8 **)(param_1 + 0x18) = puVar15;
  if (plVar18 != (long *)0x0) {
    plVar1 = plVar18 + 1;
    do {
      lVar17 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar17 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
    }
  }
  if ((char)bStack_99 < '\0') {
    __ZdlPv(pppppppuStack_b0);
  }
  FUN_1092bc16c(&pppppppuStack_90);
  FUN_1092bc1b0(&piStack_c0);
  piVar11 = &iStack_6c;
  FUN_1092b6464();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_1092a22e8(&pppppppuStack_90);
  FUN_1092bc1b0(&piStack_c0);
  FUN_1092b6464(&iStack_6c);
  FUN_1092bc814(plVar18);
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xc));
  }
  FUN_1092b8ac8(param_1);
  do {
    __Unwind_Resume();
  } while ((int)param_3 == 0);
  func_0x000104bd46a0();
  iVar10 = piVar11[4];
  piVar16 = piVar11;
  __ZSt19uncaught_exceptionsv();
  if (iVar10 < (int)piVar16) {
    _munmap(**(undefined8 **)piVar11,**(undefined8 **)(piVar11 + 2));
  }
  return piVar11;
}



/* Entry: 1092bc16c; end: 1092bc1af;  */

undefined8 * FUN_1092bc16c(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = *(int *)(param_1 + 2);
  puVar2 = param_1;
  __ZSt19uncaught_exceptionsv();
  if (iVar1 < (int)puVar2) {
    _munmap(*(undefined8 *)*param_1,*(undefined8 *)param_1[1]);
  }
  return param_1;
}



/* Entry: 1092bc1b0; end: 1092bc23f;  */

long * FUN_1092bc1b0(long *param_1)

{
  undefined1 **ppuVar1;
  long *plVar2;
  long lVar3;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  lVar3 = param_1[1];
  plVar2 = param_1;
  __ZSt19uncaught_exceptionsv();
  if ((int)lVar3 < (int)plVar2) {
    lVar3 = *param_1;
    if (*(char *)(lVar3 + 0x47) < '\0') {
      func_0x000107c3192c(&puStack_40,*(undefined8 *)(lVar3 + 0x30),*(undefined8 *)(lVar3 + 0x38));
    }
    else {
      uStack_38 = *(undefined8 *)(lVar3 + 0x38);
      puStack_40 = *(undefined1 **)(lVar3 + 0x30);
      lStack_30 = *(long *)(lVar3 + 0x40);
    }
    ppuVar1 = (undefined1 **)puStack_40;
    if (-1 < lStack_30) {
      ppuVar1 = &puStack_40;
    }
    _unlink(ppuVar1);
    if (lStack_30 < 0) {
      __ZdlPv(puStack_40);
    }
  }
  return param_1;
}



/* Entry: 1092bc240; end: 1092bc2f7;  */

void FUN_1092bc240(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plStack_28;
  
  *param_1 = &PTR_FUN_110ae9230;
  (**(code **)(*(long *)param_1[1] + 0x38))(&plStack_28);
  func_0x000109d1a244(&plStack_28);
  if (plStack_28 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_28 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plStack_28 + 8))();
      }
    }
  }
  FUN_1092bc814(param_1 + 0xb);
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_1092b8ac8(param_1);
  return;
}



/* Entry: 1092bc2f8; end: 1092bc2fb;  */

void FUN_1092bc2f8(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plStack_28;
  
  *param_1 = &PTR_FUN_110ae9230;
  (**(code **)(*(long *)param_1[1] + 0x38))(&plStack_28);
  func_0x000109d1a244(&plStack_28);
  if (plStack_28 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_28 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plStack_28 + 8))();
      }
    }
  }
  FUN_1092bc814(param_1 + 0xb);
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_1092b8ac8(param_1);
  return;
}



/* Entry: 1092bc2fc; end: 1092bc30f;  */

void FUN_1092bc2fc(void)

{
  FUN_1092bc240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092bc310; end: 1092bc557;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1092bc310(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined *******pppppppuVar2;
  undefined1 **ppuVar3;
  undefined *******pppppppuVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined ********ppppppppuVar8;
  undefined ********ppppppppuVar9;
  undefined ********ppppppppuVar10;
  ulong uVar12;
  ulong uVar13;
  undefined *******pppppppuVar14;
  undefined ******ppppppuVar15;
  long lVar16;
  undefined1 *puStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 *******pppppppuStack_120;
  undefined *******pppppppuStack_118;
  undefined *******pppppppuStack_110;
  undefined4 uStack_108;
  undefined *******pppppppuStack_100;
  undefined *******pppppppuStack_f8;
  undefined ********ppppppppuStack_a8;
  undefined ********ppppppppuStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined1 auStack_88 [8];
  long *plStack_80;
  undefined8 uStack_78;
  undefined ********ppppppppuStack_70;
  code *pcStack_68;
  undefined *******pppppppuStack_60;
  undefined8 uStack_58;
  undefined ********ppppppppuStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  long lStack_28;
  undefined8 *******pppppppuVar11;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_4 == (undefined8 *)0x0) {
    ppppppppuVar8 = (undefined ********)0x38;
    __Znwm();
    ppppppppuVar8[1] = (undefined *******)0x0;
    ppppppppuVar8[2] = (undefined *******)0x0;
    *ppppppppuVar8 = (undefined *******)&PTR_DAT_110ae8a90;
    ppppppppuVar8[4] = (undefined *******)0x0;
    ppppppppuVar8[5] = (undefined *******)0x0;
    ppppppppuVar8[6] = (undefined *******)0x1132cee70;
    ppppppppuStack_a8 = ppppppppuVar8 + 3;
    *ppppppppuStack_a8 = (undefined *******)0x1132cee70;
    ppppppppuVar9 = (undefined ********)&ppppppppuStack_a8;
    ppppppppuStack_a0 = ppppppppuVar8;
    FUN_1092b5834(param_1);
    if (ppppppppuStack_a0 == (undefined ********)0x0) goto LAB_1092bc4e0;
    ppppppppuVar8 = ppppppppuStack_a0 + 1;
    do {
      pppppppuVar14 = *ppppppppuVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar8,0x10);
      if (bVar6) {
        *ppppppppuVar8 = (undefined *******)((long)pppppppuVar14 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
      ppppppppuVar10 = ppppppppuStack_a0;
    } while (cVar5 != '\0');
  }
  else {
    uStack_78 = *(undefined8 *)(param_2 + 0x58);
    ppppppppuStack_70 = *(undefined *********)(param_2 + 0x60);
    if (ppppppppuStack_70 == (undefined ********)0x0) {
      lVar16 = *(long *)(param_2 + 0x68);
    }
    else {
      ppppppppuVar9 = ppppppppuStack_70 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar9,0x10);
        if (bVar6) {
          *ppppppppuVar9 = (undefined *******)((long)*ppppppppuVar9 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar16 = *(long *)(param_2 + 0x68);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar9,0x10);
        if (bVar6) {
          *ppppppppuVar9 = (undefined *******)((long)*ppppppppuVar9 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    pcStack_68 = FUN_1092bcb90;
    pppppppuStack_60 = (undefined *******)&PTR_FUN_110ae9390;
    ppppppppuStack_a8 = (undefined ********)0x0;
    ppppppppuStack_a0 = (undefined ********)0x0;
    puStack_98 = param_3;
    puStack_90 = param_4;
    uStack_58 = uStack_78;
    ppppppppuStack_50 = ppppppppuStack_70;
    puStack_48 = param_3;
    puStack_40 = param_4;
    FUN_1092b3818(auStack_88,lVar16 + (long)param_3,param_4,param_3,&pcStack_68);
    FUN_1092b5834(param_1,auStack_88);
    if (plStack_80 != (long *)0x0) {
      plVar1 = plStack_80 + 1;
      do {
        lVar16 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar16 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_80 + 0x10))(plStack_80);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
      }
    }
    ppppppppuVar9 = &pppppppuStack_60;
    (*(code *)*pppppppuStack_60)();
    ppppppppuVar8 = ppppppppuStack_a0;
    if (ppppppppuStack_a0 != (undefined ********)0x0) {
      ppppppppuVar10 = ppppppppuStack_a0 + 1;
      do {
        pppppppuVar14 = *ppppppppuVar10;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar10,0x10);
        if (bVar6) {
          *ppppppppuVar10 = (undefined *******)((long)pppppppuVar14 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (pppppppuVar14 == (undefined *******)0x0) {
        (*(code *)(*ppppppppuStack_a0)[2])(ppppppppuStack_a0);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppppuVar9 = ppppppppuVar8;
      }
    }
    param_3 = param_4;
    if (ppppppppuStack_70 == (undefined ********)0x0) goto LAB_1092bc4e0;
    ppppppppuVar8 = ppppppppuStack_70 + 1;
    do {
      pppppppuVar14 = *ppppppppuVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar8,0x10);
      if (bVar6) {
        *ppppppppuVar8 = (undefined *******)((long)pppppppuVar14 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
      ppppppppuVar10 = ppppppppuStack_70;
    } while (cVar5 != '\0');
  }
  if (pppppppuVar14 == (undefined *******)0x0) {
    (*(code *)(*ppppppppuVar10)[2])(ppppppppuVar10);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppppppppuVar9 = ppppppppuVar10;
  }
LAB_1092bc4e0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001092af864(&ppppppppuStack_a8);
  __Unwind_Resume();
  pppppppuVar14 = ppppppppuVar9[0xb];
  pppppppuVar4 = ppppppppuVar9[0xc];
  if (pppppppuVar4 != (undefined *******)0x0) {
    pppppppuVar2 = pppppppuVar4 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pppppppuVar2,0x10);
      if (bVar6) {
        *pppppppuVar2 = (undefined ******)((long)*pppppppuVar2 + 1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  ppppppuVar15 = *pppppppuVar14;
  pppppppuStack_100 = pppppppuVar14;
  pppppppuStack_f8 = pppppppuVar4;
  _msync(ppppppuVar15,pppppppuVar14[1],0x10);
  if ((int)ppppppuVar15 != 0) {
    pppppppuVar11 = &pppppppuStack_120;
    func_0x000107c31940(pppppppuVar11,&UNK_10f563e67);
    uVar7 = SUB84(pppppppuVar11,0);
    __ZSt19uncaught_exceptionsv();
    pppppppuVar11 = &pppppppuStack_120;
    uStack_108 = uVar7;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppppppuVar11,&UNK_10f563e30,0xe);
    ___error();
    uVar12 = (ulong)*(uint *)pppppppuVar11;
    _strerror(uVar12);
    uVar13 = uVar12;
    _strlen();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&pppppppuStack_120,uVar12,uVar13);
    FUN_1092a22e8(&pppppppuStack_120);
  }
  if (*(char *)((long)ppppppppuVar9 + 0x47) < '\0') {
    func_0x000107c3192c(&pppppppuStack_120,ppppppppuVar9[6],ppppppppuVar9[7]);
  }
  else {
    pppppppuStack_118 = ppppppppuVar9[7];
    pppppppuStack_120 = (undefined8 *******)ppppppppuVar9[6];
    pppppppuStack_110 = ppppppppuVar9[8];
  }
  pppppppuVar11 = pppppppuStack_120;
  if (-1 < (long)pppppppuStack_110) {
    pppppppuVar11 = &pppppppuStack_120;
  }
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(&puStack_140,*param_3,param_3[1]);
  }
  else {
    uStack_138 = param_3[1];
    puStack_140 = (undefined1 *)*param_3;
    lStack_130 = param_3[2];
  }
  ppuVar3 = (undefined1 **)puStack_140;
  if (-1 < lStack_130) {
    ppuVar3 = &puStack_140;
  }
  _rename(pppppppuVar11,ppuVar3);
  if (lStack_130 < 0) {
    __ZdlPv(puStack_140);
  }
  if ((long)pppppppuStack_110 < 0) {
    __ZdlPv(pppppppuStack_120);
  }
  if ((int)pppppppuVar11 != 0) {
    pppppppuVar11 = &pppppppuStack_120;
    func_0x000107c31940(pppppppuVar11,&UNK_10f563e67);
    uVar7 = SUB84(pppppppuVar11,0);
    __ZSt19uncaught_exceptionsv();
    pppppppuVar11 = &pppppppuStack_120;
    uStack_108 = uVar7;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppppppuVar11,&UNK_10f563e3f,0xf);
    ___error();
    uVar12 = (ulong)*(uint *)pppppppuVar11;
    _strerror(uVar12);
    uVar13 = uVar12;
    _strlen();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&pppppppuStack_120,uVar12,uVar13);
    FUN_1092a22e8(&pppppppuStack_120);
  }
  *(undefined1 *)(pppppppuVar14 + 8) = 1;
  *(undefined1 *)(ppppppppuVar9 + 10) = 1;
  if (pppppppuVar4 != (undefined *******)0x0) {
    pppppppuVar14 = pppppppuVar4 + 1;
    do {
      ppppppuVar15 = *pppppppuVar14;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pppppppuVar14,0x10);
      if (bVar6) {
        *pppppppuVar14 = (undefined ******)((long)ppppppuVar15 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (ppppppuVar15 == (undefined ******)0x0) {
      (*(code *)(*pppppppuVar4)[2])(pppppppuVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar4);
    }
  }
  return;
}



/* Entry: 1092bc558; end: 1092bc7bb;  */

void FUN_1092bc558(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined1 **ppuVar2;
  undefined8 *puVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 ****ppppuStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined4 uStack_58;
  undefined8 *puStack_50;
  long *plStack_48;
  undefined8 *****pppppuVar9;
  
  puVar3 = *(undefined8 **)(param_1 + 0x58);
  plVar4 = *(long **)(param_1 + 0x60);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  uVar8 = *puVar3;
  puStack_50 = puVar3;
  plStack_48 = plVar4;
  _msync(uVar8,puVar3[1],0x10);
  if ((int)uVar8 != 0) {
    pppppuVar9 = &ppppuStack_70;
    func_0x000107c31940(pppppuVar9,&UNK_10f563e67);
    uVar7 = SUB84(pppppuVar9,0);
    __ZSt19uncaught_exceptionsv();
    pppppuVar9 = &ppppuStack_70;
    uStack_58 = uVar7;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppppuVar9,&UNK_10f563e30,0xe);
    ___error();
    uVar10 = (ulong)*(uint *)pppppuVar9;
    _strerror(uVar10);
    uVar11 = uVar10;
    _strlen();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&ppppuStack_70,uVar10,uVar11);
    FUN_1092a22e8(&ppppuStack_70);
  }
  if (*(char *)(param_1 + 0x47) < '\0') {
    func_0x000107c3192c(&ppppuStack_70,*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x38));
  }
  else {
    uStack_68 = *(undefined8 *)(param_1 + 0x38);
    ppppuStack_70 = *(undefined8 *****)(param_1 + 0x30);
    lStack_60 = *(long *)(param_1 + 0x40);
  }
  pppppuVar9 = (undefined8 *****)ppppuStack_70;
  if (-1 < lStack_60) {
    pppppuVar9 = &ppppuStack_70;
  }
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&puStack_90,*param_2,param_2[1]);
  }
  else {
    uStack_88 = param_2[1];
    puStack_90 = (undefined1 *)*param_2;
    lStack_80 = param_2[2];
  }
  ppuVar2 = (undefined1 **)puStack_90;
  if (-1 < lStack_80) {
    ppuVar2 = &puStack_90;
  }
  _rename(pppppuVar9,ppuVar2);
  if (lStack_80 < 0) {
    __ZdlPv(puStack_90);
  }
  if (lStack_60 < 0) {
    __ZdlPv(ppppuStack_70);
  }
  if ((int)pppppuVar9 != 0) {
    pppppuVar9 = &ppppuStack_70;
    func_0x000107c31940(pppppuVar9,&UNK_10f563e67);
    uVar7 = SUB84(pppppuVar9,0);
    __ZSt19uncaught_exceptionsv();
    pppppuVar9 = &ppppuStack_70;
    uStack_58 = uVar7;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppppuVar9,&UNK_10f563e3f,0xf);
    ___error();
    uVar10 = (ulong)*(uint *)pppppuVar9;
    _strerror(uVar10);
    uVar11 = uVar10;
    _strlen();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&ppppuStack_70,uVar10,uVar11);
    FUN_1092a22e8(&ppppuStack_70);
  }
  *(undefined1 *)(puVar3 + 8) = 1;
  *(undefined1 *)(param_1 + 0x50) = 1;
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar12 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 1092bc7bc; end: 1092bc813;  */

undefined8 FUN_1092bc7bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1092bc814; end: 1092bc86b;  */

long FUN_1092bc814(long param_1)

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



/* Entry: 1092bc86c; end: 1092bc87b;  */

void FUN_1092bc86c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae92e8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1092bc87c; end: 1092bc89b;  */

void FUN_1092bc87c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae92e8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092bc89c; end: 1092bc8e3;  */

void FUN_1092bc89c(long param_1)

{
  _munmap(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  _close(*(undefined4 *)(param_1 + 0x28));
  if (*(long *)(param_1 + 0x38) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 1092bc8e4; end: 1092bc8e7;  */

void FUN_1092bc8e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092bc8e8; end: 1092bc93f;  */

long FUN_1092bc8e8(long param_1)

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



/* Entry: 1092bc940; end: 1092bca53;  */

undefined *** FUN_1092bc940(undefined ***param_1)

{
  undefined ***pppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  char cVar4;
  bool bVar5;
  undefined ***pppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puStack_88;
  undefined ***pppuStack_80;
  undefined *puStack_78;
  undefined **appuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = param_1[2];
  pppuVar6 = (undefined ***)ppuVar9[4];
  if (pppuVar6 != (undefined ***)0x0) {
    ppuVar8 = param_1[4];
    ppuVar3 = param_1[5];
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1 = pppuVar6;
    pppuStack_80 = pppuVar6;
    if (pppuVar6 != (undefined ***)0x0) {
      puStack_88 = ppuVar9[3];
      param_1 = (undefined ***)0x0;
      if (puStack_88 != (undefined *)0x0) {
        puVar7 = *ppuVar9;
        ppuVar2 = ppuVar9 + 1;
        ppuVar9 = &puStack_78;
        puStack_78 = (undefined *)0x1092bc7dc;
        appuStack_70[0] = &PTR_DAT_110ae92a8;
        FUN_1092b7378(puStack_88,puVar7,*ppuVar2,ppuVar8,ppuVar3,&puStack_78);
        param_1 = appuStack_70;
        (*(code *)*appuStack_70[0])();
      }
      pppuVar1 = pppuVar6 + 1;
      do {
        ppuVar8 = *pppuVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
        if (bVar5) {
          *pppuVar1 = (undefined **)((long)ppuVar8 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (ppuVar8 == (undefined **)0x0) {
        (*(code *)(*pppuVar6)[2])(pppuVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_1 = pppuVar6;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  (*(code *)*appuStack_70[0])(ppuVar9 + 1);
  FUN_1092ba470(&puStack_88);
  __Unwind_Resume();
  ppuVar9 = param_1[2];
  if (ppuVar9 != (undefined **)0x0) {
    ppuVar8 = ppuVar9 + 1;
    do {
      puVar7 = *ppuVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
      if (bVar5) {
        *ppuVar8 = puVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar7 == (undefined *)0x0) {
      (**(code **)(*ppuVar9 + 0x10))(ppuVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar9);
    }
  }
  return param_1 + 1;
}



/* Entry: 1092bca54; end: 1092bca8f;  */

long FUN_1092bca54(long param_1)

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



/* Entry: 1092bca90; end: 1092bcaaf;  */

void FUN_1092bca90(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ae9350;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092bcab0; end: 1092bcb33;  */

void FUN_1092bcab0(long param_1)

{
  long *plVar1;
  
  _munmap(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  _close(*(undefined4 *)(param_1 + 0x28));
  if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
    plVar1 = (long *)(param_1 + 0x30);
    if (*(char *)(param_1 + 0x47) < '\0') {
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_1092bcb00;
      plVar1 = (long *)*plVar1;
    }
    else if (*(char *)(param_1 + 0x47) == '\0') goto LAB_1092bcb00;
    _unlink(plVar1);
  }
LAB_1092bcb00:
  if (*(long *)(param_1 + 0x50) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)(param_1 + 0x47) < '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 0x30));
    return;
  }
  return;
}



/* Entry: 1092bcb34; end: 1092bcb37;  */

void FUN_1092bcb34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


