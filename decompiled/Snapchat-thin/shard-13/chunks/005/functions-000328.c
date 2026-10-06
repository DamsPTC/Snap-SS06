/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a6aa76c; end: 10a6aa78b;  */

void FUN_10a6aa76c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c0d958;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6aa78c; end: 10a6aa79b;  */

void FUN_10a6aa78c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a6aa794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a6aa79c; end: 10a6aa7f3;  */

long FUN_10a6aa79c(long param_1)

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



/* Entry: 10a6aa7f4; end: 10a6aa953;  */

/* WARNING: Removing unreachable block (ram,0x00010a586308) */

void FUN_10a6aa7f4(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char cVar7;
  bool bVar8;
  long lVar9;
  ulong *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined1 auStack_70 [8];
  long *plStack_68;
  
  if ((*(uint *)(param_1 + 0x10) & 0xfffffffe) != 2) {
    return;
  }
  lVar12 = *(long *)(param_2 + 0x18);
  lVar9 = **(long **)(param_2 + 0x10);
  if (lVar9 != 0) {
    plStack_68 = *(long **)(param_1 + 0x14);
    FUN_10a601f04(lVar9,&plStack_68);
    if ((int)lVar9 == 0) {
      return;
    }
  }
  puVar14 = (ulong *)(lVar12 + 0xc0);
  *(undefined8 *)(lVar12 + 0xb8) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 **)(lVar12 + 200) = (undefined8 *)*puVar14;
  puVar5 = *(undefined8 **)(param_1 + 0x20);
  puVar6 = *(undefined8 **)(param_1 + 0x28);
  puVar4 = (undefined8 *)*puVar14;
  do {
    if (puVar5 == puVar6) {
      if ((*(char *)(lVar12 + 0x88) == '\x01') && (*(char *)(lVar12 + 0x90) == '\x01')) {
        uVar17 = *(undefined8 *)(lVar12 + 0x68);
        if (*(long *)(lVar12 + 0x70) != 0) {
          plVar1 = (long *)(*(long *)(lVar12 + 0x70) + 8);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar8) {
              *plVar1 = *plVar1 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        if (*(long *)(lVar12 + 0x80) != 0) {
          plVar1 = (long *)(*(long *)(lVar12 + 0x80) + 0x10);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar8) {
              *plVar1 = *plVar1 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        func_0x00010a58dd14(auStack_70);
        plVar1 = plStack_68;
        if (plStack_68 != (long *)0x0) {
          plVar2 = plStack_68 + 2;
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *plVar2 = *plVar2 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          plVar2 = plStack_68 + 1;
          do {
            lVar12 = *plVar2;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *plVar2 = lVar12 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_68 + 0x10))(plStack_68);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
        FUN_10a58dda4(uVar17,&stack0xffffffffffffffa0);
        if (plVar1 != (long *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        FUN_10a688c1c(&stack0xffffffffffffffb0);
      }
      return;
    }
    if (puVar4 < *(undefined8 **)(lVar12 + 0xd0)) {
      puVar16 = puVar4 + 1;
      *puVar4 = *puVar5;
    }
    else {
      lVar9 = (long)puVar4 - *puVar14;
      uVar3 = (lVar9 >> 3) + 1;
      if (uVar3 >> 0x3d != 0) {
        FUN_10a050828();
        return;
      }
      uVar11 = (long)*(undefined8 **)(lVar12 + 0xd0) - *puVar14;
      uVar13 = (long)uVar11 >> 2;
      if (uVar13 <= uVar3) {
        uVar13 = uVar3;
      }
      if (0x7ffffffffffffff7 < uVar11) {
        uVar13 = 0x1fffffffffffffff;
      }
      puVar10 = puVar14;
      FUN_10a05083c();
      puVar4 = (undefined8 *)((long)puVar10 + lVar9);
      puVar16 = puVar4 + 1;
      *puVar4 = *puVar5;
      lVar15 = (long)puVar4 - (*(long *)(lVar12 + 200) - *(long *)(lVar12 + 0xc0));
      _memcpy(lVar15);
      lVar9 = *(long *)(lVar12 + 0xc0);
      *(long *)(lVar12 + 0xc0) = lVar15;
      *(undefined8 **)(lVar12 + 200) = puVar16;
      *(ulong **)(lVar12 + 0xd0) = puVar10 + uVar13;
      if (lVar9 != 0) {
        __ZdlPv();
      }
    }
    *(undefined8 **)(lVar12 + 200) = puVar16;
    puVar5 = puVar5 + 1;
    puVar4 = puVar16;
  } while( true );
}



/* Entry: 10a6aa954; end: 10a6aa987;  */

void FUN_10a6aa954(void)

{
  return;
}



/* Entry: 10a6aa988; end: 10a6aaa37;  */

void FUN_10a6aa988(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  lVar5 = *(long *)(param_2 + 0x10);
  lVar7 = param_1[1];
  lVar6 = *param_1;
  if (param_1[1] != 0) {
    plVar1 = (long *)(param_1[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = *(long *)(lVar5 + 0xb0);
  *(long *)(lVar5 + 0xb0) = lVar7;
  *(long *)(lVar5 + 0xa8) = lVar6;
  if (lVar4 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*param_1 != 0) {
    lVar5 = *(long *)(lVar5 + 0x60);
    func_0x000107c2b054(auStack_38,&UNK_10f66c8a6);
    if (lVar5 != 0) {
      FUN_10a76c080(*(undefined8 *)(lVar5 + 0x8d8),auStack_38);
    }
    if (cStack_21 < '\0') {
      __ZdlPv(auStack_38[0]);
    }
  }
  return;
}



/* Entry: 10a6aaa38; end: 10a6aaa63;  */

void FUN_10a6aaa38(void)

{
  return;
}



/* Entry: 10a6aaa64; end: 10a6aaa83;  */

void FUN_10a6aaa64(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c0d9e0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6aaa84; end: 10a6aaa93;  */

void FUN_10a6aaa84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a6aaa8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a6aaa94; end: 10a6aaaeb;  */

long FUN_10a6aaa94(long param_1)

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



/* Entry: 10a6aaaec; end: 10a6aab3f;  */

void FUN_10a6aaaec(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  byte bStack_30;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    return;
  }
  lVar5 = *(long *)(param_2 + 0x10);
  *(undefined8 *)(lVar5 + 0xb8) = *(undefined8 *)(param_1 + 0x14);
  if ((*(char *)(lVar5 + 0x88) == '\x01') && (*(char *)(lVar5 + 0x90) == '\x01')) {
    uStack_48 = *(undefined8 *)(lVar5 + 0x70);
    uStack_50 = *(undefined8 *)(lVar5 + 0x68);
    if (*(long *)(lVar5 + 0x70) != 0) {
      plVar1 = (long *)(*(long *)(lVar5 + 0x70) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_38 = *(undefined8 *)(lVar5 + 0x80);
    uStack_40 = *(undefined8 *)(lVar5 + 0x78);
    if (*(long *)(lVar5 + 0x80) != 0) {
      plVar1 = (long *)(*(long *)(lVar5 + 0x80) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    bStack_30 = 1;
    func_0x00010a58dd14(&uStack_70);
    plStack_58 = plStack_68;
    uStack_60 = uStack_70;
    if (plStack_68 != (long *)0x0) {
      plVar1 = plStack_68 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plStack_68 + 1;
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
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
      }
    }
    if ((bStack_30 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a58630c);
      (*pcVar4)();
    }
    FUN_10a58dda4(uStack_50,&uStack_60);
    if (plStack_58 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (bStack_30 == 1) {
      FUN_10a688c1c(&uStack_50);
    }
  }
  return;
}



/* Entry: 10a6aab40; end: 10a6aabef;  */

void FUN_10a6aab40(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  lVar5 = *(long *)(param_2 + 0x10);
  lVar7 = param_1[1];
  lVar6 = *param_1;
  if (param_1[1] != 0) {
    plVar1 = (long *)(param_1[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = *(long *)(lVar5 + 0xb0);
  *(long *)(lVar5 + 0xb0) = lVar7;
  *(long *)(lVar5 + 0xa8) = lVar6;
  if (lVar4 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*param_1 != 0) {
    lVar5 = *(long *)(lVar5 + 0x60);
    func_0x000107c2b054(auStack_38,&UNK_10f66c8d8);
    if (lVar5 != 0) {
      FUN_10a76c080(*(undefined8 *)(lVar5 + 0x8d8),auStack_38);
    }
    if (cStack_21 < '\0') {
      __ZdlPv(auStack_38[0]);
    }
  }
  return;
}



/* Entry: 10a6aabf0; end: 10a6aac1b;  */

void FUN_10a6aabf0(void)

{
  return;
}



/* Entry: 10a6aac1c; end: 10a6aac3b;  */

void FUN_10a6aac1c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c0da68;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6aac3c; end: 10a6aac4b;  */

void FUN_10a6aac3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a6aac44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a6aac4c; end: 10a6aaca3;  */

long FUN_10a6aac4c(long param_1)

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



/* Entry: 10a6aaca4; end: 10a6aaceb;  */

void FUN_10a6aaca4(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  byte bStack_30;
  
  lVar5 = *(long *)(param_2 + 0x10);
  *(undefined8 *)(lVar5 + 0xb8) = *(undefined8 *)(param_1 + 0x14);
  if ((*(char *)(lVar5 + 0x88) == '\x01') && (*(char *)(lVar5 + 0x90) == '\x01')) {
    uStack_48 = *(undefined8 *)(lVar5 + 0x70);
    uStack_50 = *(undefined8 *)(lVar5 + 0x68);
    if (*(long *)(lVar5 + 0x70) != 0) {
      plVar1 = (long *)(*(long *)(lVar5 + 0x70) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_38 = *(undefined8 *)(lVar5 + 0x80);
    uStack_40 = *(undefined8 *)(lVar5 + 0x78);
    if (*(long *)(lVar5 + 0x80) != 0) {
      plVar1 = (long *)(*(long *)(lVar5 + 0x80) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    bStack_30 = 1;
    func_0x00010a58dd14(&uStack_70);
    plStack_58 = plStack_68;
    uStack_60 = uStack_70;
    if (plStack_68 != (long *)0x0) {
      plVar1 = plStack_68 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plStack_68 + 1;
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
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
      }
    }
    if ((bStack_30 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a58630c);
      (*pcVar4)();
    }
    FUN_10a58dda4(uStack_50,&uStack_60);
    if (plStack_58 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (bStack_30 == 1) {
      FUN_10a688c1c(&uStack_50);
    }
  }
  return;
}



/* Entry: 10a6aacec; end: 10a6aad9b;  */

void FUN_10a6aacec(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  lVar5 = *(long *)(param_2 + 0x10);
  lVar7 = param_1[1];
  lVar6 = *param_1;
  if (param_1[1] != 0) {
    plVar1 = (long *)(param_1[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = *(long *)(lVar5 + 0xb0);
  *(long *)(lVar5 + 0xb0) = lVar7;
  *(long *)(lVar5 + 0xa8) = lVar6;
  if (lVar4 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*param_1 != 0) {
    lVar5 = *(long *)(lVar5 + 0x60);
    func_0x000107c2b054(auStack_38,&UNK_10f66c905);
    if (lVar5 != 0) {
      FUN_10a76c080(*(undefined8 *)(lVar5 + 0x8d8),auStack_38);
    }
    if (cStack_21 < '\0') {
      __ZdlPv(auStack_38[0]);
    }
  }
  return;
}



/* Entry: 10a6aad9c; end: 10a6aadc7;  */

void FUN_10a6aad9c(void)

{
  return;
}



/* Entry: 10a6aadc8; end: 10a6aade7;  */

void FUN_10a6aadc8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c0daf0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6aade8; end: 10a6aadf7;  */

void FUN_10a6aade8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a6aadf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a6aadf8; end: 10a6aae4f;  */

long FUN_10a6aadf8(long param_1)

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



/* Entry: 10a6aae50; end: 10a6aaeab;  */

void FUN_10a6aae50(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  byte bStack_30;
  
  if ((*(uint *)(param_1 + 0x10) & 0xfffffffe) != 2) {
    return;
  }
  lVar5 = *(long *)(param_2 + 0x10);
  *(undefined8 *)(lVar5 + 0xb8) = *(undefined8 *)(param_1 + 0x14);
  if ((*(char *)(lVar5 + 0x88) == '\x01') && (*(char *)(lVar5 + 0x90) == '\x01')) {
    uStack_48 = *(undefined8 *)(lVar5 + 0x70);
    uStack_50 = *(undefined8 *)(lVar5 + 0x68);
    if (*(long *)(lVar5 + 0x70) != 0) {
      plVar1 = (long *)(*(long *)(lVar5 + 0x70) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_38 = *(undefined8 *)(lVar5 + 0x80);
    uStack_40 = *(undefined8 *)(lVar5 + 0x78);
    if (*(long *)(lVar5 + 0x80) != 0) {
      plVar1 = (long *)(*(long *)(lVar5 + 0x80) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    bStack_30 = 1;
    func_0x00010a58dd14(&uStack_70);
    plStack_58 = plStack_68;
    uStack_60 = uStack_70;
    if (plStack_68 != (long *)0x0) {
      plVar1 = plStack_68 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plStack_68 + 1;
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
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
      }
    }
    if ((bStack_30 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a58630c);
      (*pcVar4)();
    }
    FUN_10a58dda4(uStack_50,&uStack_60);
    if (plStack_58 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (bStack_30 == 1) {
      FUN_10a688c1c(&uStack_50);
    }
  }
  return;
}



/* Entry: 10a6aaeac; end: 10a6aafa7;  */

undefined1  [16] FUN_10a6aaeac(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c0bd08;
  puVar1 = &UNK_10f66b8c1;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c0bd08;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c0f758;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a6aafa8; end: 10a6ab063;  */

void FUN_10a6aafa8(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f66c379,0x1c);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a6ab064);
  (*pcVar4)();
}



/* Entry: 10a6ab064; end: 10a6ab073;  */

void FUN_10a6ab064(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c0db60;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a6ab074; end: 10a6ab093;  */

void FUN_10a6ab074(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c0db60;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6ab094; end: 10a6ab0a3;  */

void FUN_10a6ab094(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a6ab09c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a6ab0a4; end: 10a6ab0fb;  */

long FUN_10a6ab0a4(long param_1)

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



/* Entry: 10a6ab0fc; end: 10a6ab1f7;  */

undefined1  [16] FUN_10a6ab0fc(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c0bf70;
  puVar1 = &UNK_10f66b8c1;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c0bf70;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c0f758;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a6ab1f8; end: 10a6ab2b3;  */

void FUN_10a6ab1f8(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f66c396,0x1b);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a6ab2b4);
  (*pcVar4)();
}



/* Entry: 10a6ab2b4; end: 10a6ab2c3;  */

void FUN_10a6ab2b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c0dbb0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a6ab2c4; end: 10a6ab2e3;  */

void FUN_10a6ab2c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c0dbb0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6ab2e4; end: 10a6ab2f3;  */

void FUN_10a6ab2e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a6ab2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a6ab2f4; end: 10a6ab34b;  */

long FUN_10a6ab2f4(long param_1)

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



/* Entry: 10a6ab34c; end: 10a6ab447;  */

undefined1  [16] FUN_10a6ab34c(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c0bf88;
  puVar1 = &UNK_10f66b8c1;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c0bf88;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110bf6810;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a6ab448; end: 10a6ab4ab;  */

ulong FUN_10a6ab448(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a6ab4ac);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a6ab4ac,1,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10a6ab4ac; end: 10a6ab5b3;  */

void FUN_10a6ab4ac(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  float fVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x000109898688(param_2,param_3);
  if (plVar4 == (long *)0x0) {
    puVar5 = &UNK_10f68f52e;
  }
  else {
    FUN_10a052c2c(param_2,plVar4);
    if ((param_2 != (long *)0x0) && (___dynamic_cast(), param_2 != (long *)0x0)) {
      FUN_10a052e3c(param_5);
      fVar15 = *(float *)((long)param_2 + 0x94);
      *param_1 = 3;
      *(double *)(param_1 + 2) = (double)fVar15;
      plVar4 = plVar3 + 0x4b;
      lVar6 = plVar3[0x59];
      uVar7 = lVar6 - 1;
      plVar3[0x59] = uVar7;
      if (uVar7 < 8) {
        uVar7 = plVar4[lVar6 + 2];
        if (plVar3[0x5a] == uVar7) {
          return;
        }
      }
      else {
        uVar7 = *(ulong *)(plVar3[0x57] + -8);
        plVar3[0x57] = plVar3[0x57] + -8;
        if (plVar3[0x5a] == uVar7) {
          return;
        }
      }
      lVar6 = *plVar4;
      lVar11 = plVar3[0x4c];
      lVar9 = lVar11 - lVar6;
      uVar13 = lVar9 >> 4;
      if (uVar13 < uVar7) {
        uVar14 = uVar7 - uVar13;
        lVar12 = plVar3[0x4d];
        if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
          if (uVar7 >> 0x3c == 0) {
            uVar8 = lVar12 - lVar6 >> 3;
            if (uVar8 <= uVar7) {
              uVar8 = uVar7;
            }
            if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
              uVar8 = 0xfffffffffffffff;
            }
            plStack_68 = plVar4;
            if (uVar8 >> 0x3c == 0) {
              lVar2 = uVar8 << 4;
              __Znwm();
              lVar11 = lVar2 + lVar9;
              _bzero(lVar11,uVar14 * 0x10);
              lVar10 = lVar11 + uVar13 * -0x10;
              _memcpy(lVar10,lVar6,lVar9);
              *plVar4 = lVar10;
              plVar3[0x4c] = lVar11 + uVar14 * 0x10;
              plVar3[0x4d] = lVar2 + uVar8 * 0x10;
              lStack_88 = lVar6;
              lStack_80 = lVar6;
              lStack_78 = lVar6;
              lStack_70 = lVar12;
              func_0x00010988c1b8(&lStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar1)();
        }
        _bzero(lVar11,uVar14 * 0x10);
        plVar3[0x4c] = lVar11 + uVar14 * 0x10;
      }
      else if (uVar7 < uVar13) {
        lVar6 = lVar6 + uVar7 * 0x10;
        while (lVar11 != lVar6) {
          lVar11 = lVar11 + -0x10;
          func_0x00010988c204(lVar11);
        }
        plVar3[0x4c] = lVar6;
      }
code_r0x00010988c138:
      plVar3[0x5a] = uVar7;
      return;
    }
    puVar5 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar5);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a6ab5a0);
  (*pcVar1)();
}



/* Entry: 10a6ab5b4; end: 10a6ab66f;  */

void FUN_10a6ab5b4(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f66c3b2,0x1a);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a6ab670);
  (*pcVar4)();
}



/* Entry: 10a6ab670; end: 10a6ab67f;  */

void FUN_10a6ab670(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c0dc00;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a6ab680; end: 10a6ab69f;  */

void FUN_10a6ab680(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c0dc00;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6ab6a0; end: 10a6ab6af;  */

void FUN_10a6ab6a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a6ab6a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a6ab6b0; end: 10a6ac007;  */

/* WARNING: Possible PIC construction at 0x00010a6abffc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a6ac000) */
/* WARNING: Removing unreachable block (ram,0x00010a6ac018) */
/* WARNING: Removing unreachable block (ram,0x00010a6ac108) */
/* WARNING: Removing unreachable block (ram,0x00010a6ac074) */
/* WARNING: Removing unreachable block (ram,0x00010a6ac08c) */
/* WARNING: Removing unreachable block (ram,0x00010a6ac0d8) */
/* WARNING: Removing unreachable block (ram,0x00010a6ac0e0) */
/* WARNING: Removing unreachable block (ram,0x00010a6ac0ec) */
/* WARNING: Removing unreachable block (ram,0x00010a6ac014) */
/* WARNING: Removing unreachable block (ram,0x00010a6aba8c) */
/* WARNING: Removing unreachable block (ram,0x00010a6ab9d8) */
/* WARNING: Removing unreachable block (ram,0x00010a6aba9c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a6ab6b0(undefined4 *param_1,uint *******param_2,undefined8 param_3,uint *******param_4,
                  uint *******param_5)

{
  undefined1 *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  uint *******pppppppuVar8;
  uint *******pppppppuVar9;
  uint *******pppppppuVar10;
  uint ******ppppppuVar11;
  uint *******pppppppuVar12;
  undefined8 *puVar13;
  uint *******pppppppuVar14;
  uint *******pppppppuVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint ******ppppppuVar19;
  uint *****pppppuVar20;
  uint **ppuVar21;
  uint *******unaff_x19;
  undefined4 *unaff_x20;
  uint *******unaff_x21;
  uint ******ppppppuVar22;
  long lVar23;
  uint *******unaff_x22;
  uint *******unaff_x23;
  uint ******ppppppuVar24;
  uint *******unaff_x24;
  uint ******ppppppuVar25;
  uint *******unaff_x25;
  ulong unaff_x26;
  ulong uVar26;
  uint *******unaff_x27;
  undefined8 *unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  uint *******pppppppuStack_2c0;
  uint ****ppppuStack_2b8;
  undefined8 *puStack_2b0;
  long *plStack_2a0;
  int iStack_298;
  uint *******pppppppuStack_290;
  int aiStack_288 [2];
  uint *******pppppppuStack_280;
  uint *******apppppppuStack_278 [2];
  char cStack_261;
  undefined1 uStack_260;
  uint *******pppppppuStack_258;
  uint *******pppppppuStack_250;
  uint *******pppppppuStack_248;
  uint *******pppppppuStack_240;
  uint ******ppppppuStack_238;
  uint **ppuStack_230;
  uint ***pppuStack_228;
  long lStack_220;
  undefined4 uStack_218;
  uint *******pppppppuStack_210;
  uint ****ppppuStack_208;
  uint ****ppppuStack_200;
  uint *******pppppppuStack_1f0;
  uint *******pppppppuStack_1e8;
  uint ******ppppppuStack_1e0;
  uint *******pppppppuStack_1d0;
  uint ******ppppppuStack_1c8;
  uint ******ppppppuStack_1c0;
  uint ******ppppppuStack_1b0;
  uint *******pppppppuStack_1a8;
  uint *******pppppppuStack_1a0;
  uint ******ppppppuStack_198;
  uint ******ppppppuStack_190;
  uint ******ppppppuStack_180;
  uint **ppuStack_178;
  uint ****ppppuStack_170;
  long lStack_168;
  undefined4 uStack_160;
  uint *******apppppppuStack_158 [2];
  long alStack_148 [7];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined **appuStack_100 [7];
  uint *******pppppppuStack_c8;
  undefined2 uStack_c0;
  undefined5 uStack_be;
  undefined1 uStack_b9;
  undefined7 uStack_b8;
  char cStack_b1;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_80;
  long lStack_78;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuVar8 = param_2;
  (*(code *)(*param_2)[0xb])();
  if (pppppppuVar8[0x59] < (uint ******)0x8) {
    pppppppuVar8[(long)pppppppuVar8[0x59] + 0x4e] = pppppppuVar8[0x5a];
    pppppppuVar8[0x59] = (uint ******)((long)pppppppuVar8[0x59] + 1);
  }
  else {
    func_0x00010988bfcc(pppppppuVar8 + 0x4b);
  }
  pppppppuVar9 = param_2;
  func_0x000109898688(param_2,param_3);
  if (pppppppuVar9 == (uint *******)0x0) {
    puVar16 = &UNK_10f68f52e;
LAB_10a6abe10:
    func_0x00010988bd28(puVar16);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a6abe18);
    (*pcVar6)();
  }
  pppppppuVar14 = param_2;
  FUN_10a053854(param_2,pppppppuVar9);
  if ((pppppppuVar14 == (uint *******)0x0) ||
     (___dynamic_cast(), pppppppuVar14 == (uint *******)0x0)) {
    puVar16 = &UNK_10f685496;
    goto LAB_10a6abe10;
  }
  FUN_10a6ac008(param_5);
  pppppppuVar12 = (uint *******)&pppppppuStack_c8;
  aiStack_288[0] = 0;
  pppppppuVar9 = (uint *******)aiStack_288;
  if (param_5 != (uint *******)0x0) {
    pppppppuVar9 = param_4;
  }
  pppppppuVar10 = param_2;
  func_0x00010a0582f4(&plStack_2a0,param_2,pppppppuVar9);
  pppppppuVar9 = (uint *******)aiStack_288;
  if ((uint *******)0x1 < param_5) {
    pppppppuVar9 = param_4 + 2;
  }
  if (*(uint *)pppppppuVar9 < 2) {
    uVar26 = 0;
    apppppppuStack_278[0] = (uint *******)((ulong)apppppppuStack_278[0] & 0xffffffffffffff00);
    uStack_260 = 0;
LAB_10a6ab80c:
    pppppppuVar9 = pppppppuVar14 + 0x2e;
    bVar4 = true;
    if (*(char *)((long)pppppppuVar14 + 0x187) < '\0') goto LAB_10a6ab7f0;
LAB_10a6ab81c:
    ppppppuStack_198 = pppppppuVar9[1];
    pppppppuStack_1a0 = (uint *******)*pppppppuVar9;
    ppppppuStack_190 = pppppppuVar9[2];
  }
  else {
    func_0x000109898570(&pppppppuStack_c8);
    apppppppuStack_278[0] = pppppppuStack_c8;
    cStack_261 = cStack_b1;
    uStack_260 = 1;
    uVar26 = (ulong)(long)cStack_b1 >> 0x3f;
    uVar5 = CONCAT17(uStack_b9,CONCAT52(uStack_be,uStack_c0));
    if (-1 < cStack_b1) {
      uVar5 = (long)cStack_b1;
    }
    pppppppuVar10 = param_2;
    if (uVar5 == 0) goto LAB_10a6ab80c;
    bVar4 = false;
    pppppppuVar9 = (uint *******)apppppppuStack_278;
    if (((uint)(int)cStack_b1 >> 7 & 1) == 0) goto LAB_10a6ab81c;
LAB_10a6ab7f0:
    pppppppuVar10 = (uint *******)&pppppppuStack_1a0;
    func_0x000107c3192c(pppppppuVar10,*pppppppuVar9,pppppppuVar9[1]);
  }
  ppppppuVar22 = ppppppuStack_198;
  if (-1 < (long)ppppppuStack_190) {
    ppppppuVar22 = (uint ******)((ulong)ppppppuStack_190 >> 0x38);
  }
  pppppppuVar9 = unaff_x27;
  puVar13 = unaff_x28;
  if (ppppppuVar22 == (uint ******)0x0) {
    if (bVar4) {
      if ((uRam000000011330a9e8 & 1) != 0) {
        pppppppuVar10 = (uint *******)0x0;
        uVar18 = 0xb0;
        uVar17 = 1;
        puVar16 = &UNK_10f66bd14;
LAB_10a6ab89c:
        func_0x00010ae06f08(pppppppuVar10,uVar17,&UNK_10f66bb8c,&UNK_10f66bca7,uVar18,puVar16);
      }
    }
    else if ((uRam000000011330a9e8 >> 1 & 1) != 0) {
      uVar18 = 0xb2;
      uVar17 = 2;
      pppppppuVar10 = (uint *******)0x1;
      puVar16 = &UNK_10f66be4e;
      goto LAB_10a6ab89c;
    }
  }
  else {
    if (bVar4) {
      if (*(char *)((long)pppppppuVar14 + 0x187) < '\0') {
        *(undefined1 *)pppppppuVar14[0x2e] = 0;
        pppppppuVar14[0x2f] = (uint ******)0x0;
      }
      else {
        *(undefined1 *)(pppppppuVar14 + 0x2e) = 0;
        *(undefined1 *)((long)pppppppuVar14 + 0x187) = 0;
      }
    }
    pppppppuVar10 = (uint *******)pppppppuVar14[0x33];
    if ((pppppppuVar10 != (uint *******)0x0) &&
       (__ZNSt3__119__shared_weak_count4lockEv(), pppppppuStack_1a8 = pppppppuVar10,
       pppppppuVar10 != (uint *******)0x0)) {
      ppppppuVar22 = pppppppuVar14[0x32];
      ppppppuStack_1b0 = ppppppuVar22;
      if (ppppppuVar22 != (uint ******)0x0) {
        pppppppuStack_1d0 = (uint *******)0x0;
        ppppppuStack_1c8 = (uint ******)0x0;
        ppppppuStack_1c0 = (uint ******)0x0;
        (**(code **)(*plStack_2a0 + 0x58))();
        func_0x00010989bc08(&pppppppuStack_c8);
        pppppppuVar9 = pppppppuStack_c8;
        if (pppppppuStack_c8 != (uint *******)0x0) {
          ___dynamic_cast(pppppppuStack_c8,&PTR_DAT_110b17678,&PTR_DAT_110b17688,0);
          if (pppppppuStack_c8 != (uint *******)0x0) {
            ppppppuStack_1c8 = pppppppuStack_c8[2];
            pppppppuStack_1d0 = (uint *******)pppppppuStack_c8[1];
            ppppppuStack_1c0 = pppppppuStack_c8[3];
            *(undefined1 *)((long)pppppppuStack_c8 + 0x1f) = 0;
            *(undefined1 *)(pppppppuStack_c8 + 1) = 0;
          }
          pppppppuStack_c8 = (uint *******)0x0;
          (*(code *)(*pppppppuVar9)[1])(pppppppuVar9);
        }
        ppppppuVar11 = (uint ******)0x20;
        __Znwm();
        uStack_b8 = 0x20;
        cStack_b1 = 0x80;
        uStack_c0 = 0x1a;
        uStack_be = 0;
        uStack_b9 = 0;
        ppppppuVar11[1] = (uint *****)0x6976697463656e6e;
        *ppppppuVar11 = (uint *****)0x6f632f2f3a707061;
        *(undefined8 *)((long)ppppppuVar11 + 0x12) = 0x2f796c7065725f2f;
        *(undefined8 *)((long)ppppppuVar11 + 10) = 0x7974697669746365;
        *(undefined1 *)((long)ppppppuVar11 + 0x1a) = 0;
        ppppppuVar19 = ppppppuStack_198;
        pppppppuVar9 = pppppppuStack_1a0;
        if (-1 < (long)ppppppuStack_190) {
          ppppppuVar19 = (uint ******)((ulong)ppppppuStack_190 >> 0x38);
          pppppppuVar9 = (uint *******)&pppppppuStack_1a0;
        }
        pppppppuVar12 = (uint *******)&pppppppuStack_c8;
        pppppppuStack_c8 = (uint *******)ppppppuVar11;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (pppppppuVar12,pppppppuVar9,ppppppuVar19);
        pppppppuStack_1e8 = (uint *******)pppppppuVar12[1];
        pppppppuStack_1f0 = (uint *******)*pppppppuVar12;
        ppppppuStack_1e0 = pppppppuVar12[2];
        pppppppuVar12[1] = (uint ******)0x0;
        pppppppuVar12[2] = (uint ******)0x0;
        *pppppppuVar12 = (uint ******)0x0;
        if ((pppppppuVar14[0xc] == (uint ******)0x0) ||
           (pppppuVar20 = pppppppuVar14[0xc][0x20], pppppuVar20 == (uint *****)0x0)) {
          pppppppuStack_210 = (uint *******)0x0;
          ppppuStack_208 = (uint ****)0x0;
          ppppuStack_200 = (uint ****)0x0;
        }
        else if (*(char *)((long)pppppuVar20 + 0x21f) < '\0') {
          func_0x000107c3192c(&pppppppuStack_210,pppppuVar20[0x41],pppppuVar20[0x42]);
        }
        else {
          ppppuStack_208 = pppppuVar20[0x42];
          pppppppuStack_210 = (uint *******)pppppuVar20[0x41];
          ppppuStack_200 = pppppuVar20[0x43];
        }
        puVar13 = (undefined8 *)0x28;
        __Znwm();
        *(undefined4 *)((long)puVar13 + 0x1f) = 0x736a2d64;
        puVar13[1] = 0x2e646e762f6e6f69;
        *puVar13 = 0x746163696c707061;
        puVar13[3] = 0x6465696669676e69;
        puVar13[2] = 0x7274732e70616e73;
        *(undefined1 *)((long)puVar13 + 0x23) = 0;
        pppppppuStack_c8 = (uint *******)0x7079745f656d696d;
        uStack_c0 = 0x65;
        cStack_b1 = '\t';
        uStack_a0 = 0x8000000000000028;
        uStack_a8 = 0x23;
        puStack_b0 = puVar13;
        func_0x000104bd4884(&ppppppuStack_238,&pppppppuStack_c8,1);
        ppppppuVar19 = ppppppuStack_1c8;
        pppppppuVar9 = pppppppuStack_1d0;
        if (-1 < (long)ppppppuStack_1c0) {
          ppppppuVar19 = (uint ******)((ulong)ppppppuStack_1c0 >> 0x38);
          pppppppuVar9 = (uint *******)&pppppppuStack_1d0;
        }
        FUN_10a3bf330(apppppppuStack_158,pppppppuVar9,ppppppuVar19);
        pppppppuVar14 = (uint *******)0x138;
        __Znwm();
        pppppppuStack_c8 = apppppppuStack_158[0];
        pppppppuVar9 = pppppppuVar14 + 1;
        *pppppppuVar9 = (uint ******)0x0;
        pppppppuVar14[2] = (uint ******)0x0;
        *pppppppuVar14 = (uint ******)&PTR_FUN_110b9f3b0;
        pppppppuVar10 = pppppppuVar14 + 3;
        pppppppuVar12 = pppppppuStack_1e8;
        param_4 = pppppppuStack_1f0;
        if (-1 < (long)ppppppuStack_1e0) {
          pppppppuVar12 = (uint *******)((ulong)ppppppuStack_1e0 >> 0x38);
          param_4 = (uint *******)&pppppppuStack_1f0;
        }
        apppppppuStack_158[0] = (uint *******)0x0;
        uStack_c0 = SUB82(apppppppuStack_158[1],0);
        uStack_be = (undefined5)((ulong)apppppppuStack_158[1] >> 0x10);
        uStack_b9 = (undefined1)((ulong)apppppppuStack_158[1] >> 0x38);
        (**(code **)(alStack_148[0] + 0x10))(&uStack_b8,alStack_148);
        ppuStack_178 = ppuStack_230;
        ppppppuStack_180 = ppppppuStack_238;
        uStack_80 = uStack_110;
        ppppppuStack_238 = (uint ******)0x0;
        ppuStack_230 = (uint **)0x0;
        ppppuStack_170 = (uint ****)pppuStack_228;
        lStack_168 = lStack_220;
        uStack_160 = uStack_218;
        if (lStack_220 != 0) {
          ppuVar21 = pppuStack_228[1];
          if (((ulong)ppuStack_178 & (long)ppuStack_178 - 1U) == 0) {
            ppuVar21 = (uint **)((ulong)ppuVar21 & (long)ppuStack_178 - 1U);
          }
          else if (ppuStack_178 <= ppuVar21) {
            uVar5 = 0;
            if (ppuStack_178 != (uint **)0x0) {
              uVar5 = (ulong)ppuVar21 / (ulong)ppuStack_178;
            }
            ppuVar21 = (uint **)((long)ppuVar21 - uVar5 * (long)ppuStack_178);
          }
          ppppppuStack_180[(long)ppuVar21] = &ppppuStack_170;
          pppuStack_228 = (uint ***)0x0;
          lStack_220 = 0;
        }
        ppppuStack_2b8 = ppppuStack_208;
        pppppppuStack_2c0 = pppppppuStack_210;
        if (-1 < (long)ppppuStack_200) {
          ppppuStack_2b8 = (uint ****)((ulong)ppppuStack_200 >> 0x38);
          pppppppuStack_2c0 = (uint *******)&pppppppuStack_210;
        }
        uStack_108 = 0x10a6acf60;
        appuStack_100[0] = &PTR_DAT_110c0dca8;
        puStack_2b0 = &uStack_108;
        FUN_10a05c494(pppppppuVar10,param_4,pppppppuVar12,"POST",4,&pppppppuStack_c8,4,
                      &ppppppuStack_180);
        (*(code *)*appuStack_100[0])(appuStack_100);
        func_0x000104c4f944(&ppppppuStack_180);
        FUN_10a042634(&pppppppuStack_c8);
        pppppppuStack_248 = pppppppuVar10;
        pppppppuStack_240 = pppppppuVar14;
        FUN_10a042634(apppppppuStack_158);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar9,0x10);
          if (bVar4) {
            *pppppppuVar9 = (uint ******)((long)*pppppppuVar9 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        pppppppuStack_258 = pppppppuVar10;
        pppppppuStack_250 = pppppppuVar14;
        (*(code *)**ppppppuVar22)(ppppppuVar22,&pppppppuStack_258);
        pppppppuVar10 = pppppppuStack_250;
        if (pppppppuStack_250 != (uint *******)0x0) {
          pppppppuVar15 = pppppppuStack_250 + 1;
          do {
            ppppppuVar22 = *pppppppuVar15;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar15,0x10);
            if (bVar4) {
              *pppppppuVar15 = (uint ******)((long)ppppppuVar22 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (ppppppuVar22 == (uint ******)0x0) {
            (*(code *)(*pppppppuStack_250)[2])(pppppppuStack_250);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar10);
          }
        }
        pppppppuVar10 = pppppppuStack_240;
        if (pppppppuStack_240 != (uint *******)0x0) {
          pppppppuVar15 = pppppppuStack_240 + 1;
          do {
            ppppppuVar22 = *pppppppuVar15;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar15,0x10);
            if (bVar4) {
              *pppppppuVar15 = (uint ******)((long)ppppppuVar22 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (ppppppuVar22 == (uint ******)0x0) {
            (*(code *)(*pppppppuStack_240)[2])(pppppppuStack_240);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar10);
          }
        }
        pppppppuVar10 = &ppppppuStack_238;
        func_0x000104c4f944();
        if ((long)ppppuStack_200 < 0) {
          pppppppuVar10 = pppppppuStack_210;
          __ZdlPv();
        }
        if ((long)ppppppuStack_1e0 < 0) {
          pppppppuVar10 = pppppppuStack_1f0;
          __ZdlPv();
        }
        if ((long)ppppppuStack_1c0 < 0) {
          pppppppuVar10 = pppppppuStack_1d0;
          __ZdlPv();
        }
        param_5 = pppppppuStack_1a8;
        puVar13 = &uStack_108;
        if (pppppppuStack_1a8 == (uint *******)0x0) goto LAB_10a6abd38;
      }
      param_5 = pppppppuStack_1a8;
      pppppppuVar15 = pppppppuStack_1a8 + 1;
      do {
        ppppppuVar22 = *pppppppuVar15;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar15,0x10);
        if (bVar4) {
          *pppppppuVar15 = (uint ******)((long)ppppppuVar22 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppppppuVar22 == (uint ******)0x0) {
        (*(code *)(*pppppppuStack_1a8)[2])(pppppppuStack_1a8);
        pppppppuVar10 = param_5;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
  }
LAB_10a6abd38:
  pppppppuVar15 = apppppppuStack_278[0];
  if ((long)ppppppuStack_190 < 0) {
    pppppppuVar10 = pppppppuStack_1a0;
    __ZdlPv();
    pppppppuVar15 = apppppppuStack_278[0];
  }
  apppppppuStack_278[0] = pppppppuVar15;
  if ((int)uVar26 != 0) {
    __ZdlPv();
    pppppppuVar10 = pppppppuVar15;
  }
  if ((3 < iStack_298) &&
     (pppppppuVar10 = pppppppuStack_290, pppppppuStack_290 != (uint *******)0x0)) {
    (*(code *)**pppppppuStack_290)();
  }
  if ((3 < aiStack_288[0]) &&
     (pppppppuVar10 = pppppppuStack_280, pppppppuStack_280 != (uint *******)0x0)) {
    (*(code *)**pppppppuStack_280)();
  }
  *param_1 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    if ((long)ppppppuStack_1e0 < 0) {
      __ZdlPv(pppppppuStack_1f0);
    }
    if ((long)ppppppuStack_1c0 < 0) {
      __ZdlPv(pppppppuStack_1d0);
    }
    func_0x00010a05a8c4(&ppppppuStack_1b0);
    if ((long)ppppppuStack_190 < 0) {
      __ZdlPv(pppppppuStack_1a0);
    }
    if ((int)uVar26 != 0) {
      __ZdlPv(apppppppuStack_278[0]);
    }
    if ((3 < iStack_298) && (pppppppuStack_290 != (uint *******)0x0)) {
      (*(code *)**pppppppuStack_290)();
    }
    if ((3 < aiStack_288[0]) && (pppppppuStack_280 != (uint *******)0x0)) {
      (*(code *)**pppppppuStack_280)();
    }
    unaff_x30 = 0x10a6ac000;
    register0x00000008 = (BADSPACEBASE *)&pppppppuStack_2c0;
    unaff_x19 = pppppppuVar8;
    unaff_x20 = param_1;
    unaff_x21 = pppppppuVar10;
    unaff_x22 = pppppppuVar14;
    unaff_x23 = param_5;
    unaff_x24 = param_4;
    unaff_x25 = pppppppuVar12;
    unaff_x26 = uVar26;
    unaff_x27 = pppppppuVar9;
    unaff_x28 = puVar13;
    unaff_x29 = puVar1;
  }
  pppppppuVar9 = pppppppuVar8 + 0x4b;
  ppppppuVar22 = pppppppuVar8[0x59];
  ppppppuVar19 = (uint ******)((long)ppppppuVar22 + -1);
  pppppppuVar8[0x59] = ppppppuVar19;
  if (ppppppuVar19 < (uint ******)0x8) {
    ppppppuVar22 = pppppppuVar9[(long)ppppppuVar22 + 2];
    if (pppppppuVar8[0x5a] == ppppppuVar22) {
      return;
    }
  }
  else {
    ppppppuVar22 = (uint ******)pppppppuVar8[0x57][-1];
    pppppppuVar8[0x57] = pppppppuVar8[0x57] + -1;
    if (pppppppuVar8[0x5a] == ppppppuVar22) {
      return;
    }
  }
  *(undefined8 **)((long)register0x00000008 + -0x60) = unaff_x28;
  *(uint ********)((long)register0x00000008 + -0x58) = unaff_x27;
  *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(uint ********)((long)register0x00000008 + -0x48) = unaff_x25;
  *(uint ********)((long)register0x00000008 + -0x40) = unaff_x24;
  *(uint ********)((long)register0x00000008 + -0x38) = unaff_x23;
  *(uint ********)((long)register0x00000008 + -0x30) = unaff_x22;
  *(uint ********)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined4 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(uint ********)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  ppppppuVar19 = *pppppppuVar9;
  ppppppuVar11 = pppppppuVar8[0x4c];
  lVar23 = (long)ppppppuVar11 - (long)ppppppuVar19;
  ppppppuVar25 = (uint ******)(lVar23 >> 4);
  if (ppppppuVar25 < ppppppuVar22) {
    uVar26 = (long)ppppppuVar22 - (long)ppppppuVar25;
    ppppppuVar24 = pppppppuVar8[0x4d];
    if ((ulong)((long)ppppppuVar24 - (long)ppppppuVar11 >> 4) < uVar26) {
      if ((ulong)ppppppuVar22 >> 0x3c == 0) {
        ppppppuVar11 = (uint ******)((long)ppppppuVar24 - (long)ppppppuVar19 >> 3);
        if (ppppppuVar11 <= ppppppuVar22) {
          ppppppuVar11 = ppppppuVar22;
        }
        if (0x7fffffffffffffef < (ulong)((long)ppppppuVar24 - (long)ppppppuVar19)) {
          ppppppuVar11 = (uint ******)0xfffffffffffffff;
        }
        *(uint ********)((long)register0x00000008 + -0x68) = pppppppuVar9;
        if ((ulong)ppppppuVar11 >> 0x3c == 0) {
          lVar7 = (long)ppppppuVar11 << 4;
          __Znwm();
          lVar2 = lVar7 + lVar23;
          _bzero(lVar2,uVar26 * 0x10);
          ppppppuVar25 = (uint ******)(lVar2 + (long)ppppppuVar25 * -0x10);
          _memcpy(ppppppuVar25,ppppppuVar19,lVar23);
          *pppppppuVar9 = ppppppuVar25;
          pppppppuVar8[0x4c] = (uint ******)(lVar2 + uVar26 * 0x10);
          pppppppuVar8[0x4d] = (uint ******)(lVar7 + (long)ppppppuVar11 * 0x10);
          *(uint *******)((long)register0x00000008 + -0x78) = ppppppuVar19;
          *(uint *******)((long)register0x00000008 + -0x70) = ppppppuVar24;
          *(uint *******)((long)register0x00000008 + -0x88) = ppppppuVar19;
          *(uint *******)((long)register0x00000008 + -0x80) = ppppppuVar19;
          func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar6)();
    }
    _bzero(ppppppuVar11,uVar26 * 0x10);
    pppppppuVar8[0x4c] = ppppppuVar11 + uVar26 * 2;
  }
  else if (ppppppuVar22 < ppppppuVar25) {
    while (ppppppuVar11 != ppppppuVar19 + (long)ppppppuVar22 * 2) {
      ppppppuVar11 = ppppppuVar11 + -2;
      func_0x00010988c204(ppppppuVar11);
    }
    pppppppuVar8[0x4c] = ppppppuVar19 + (long)ppppppuVar22 * 2;
  }
code_r0x00010988c138:
  pppppppuVar8[0x5a] = ppppppuVar22;
  return;
}



/* Entry: 10a6ac008; end: 10a6ac02f;  */

void FUN_10a6ac008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  int in_stack_ffffffffffffffa0;
  undefined8 *in_stack_ffffffffffffffa8;
  
  if ((int)param_1 - 1U < 2) {
    return;
  }
  plVar3 = (long *)0x2;
  uVar6 = 1;
  FUN_10a052ee0(2,1,param_1);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = plVar3;
  FUN_10a6ac128(plVar3,uVar6);
  FUN_10a052e3c(param_4);
  func_0x0001098849a4(&stack0xffffffffffffffa0,plVar5[0x2b],plVar5 + 0x2c);
  func_0x0001098849a4(extraout_x8,plVar3,&stack0xffffffffffffffa0);
  if ((3 < in_stack_ffffffffffffffa0) && (in_stack_ffffffffffffffa8 != (undefined8 *)0x0)) {
    (**(code **)*in_stack_ffffffffffffffa8)();
  }
  plVar3 = plVar4 + 0x4b;
  lVar7 = plVar4[0x59];
  uVar8 = lVar7 - 1;
  plVar4[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar3[lVar7 + 2];
    if (plVar4[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar8) {
      return;
    }
  }
  lVar7 = *plVar3;
  lVar12 = plVar4[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar4[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_78 = plVar3;
        if (uVar9 >> 0x3c == 0) {
          lVar2 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar2 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar3 = lVar11;
          plVar4[0x4c] = lVar12 + uVar15 * 0x10;
          plVar4[0x4d] = lVar2 + uVar9 * 0x10;
          lStack_98 = lVar7;
          lStack_90 = lVar7;
          lStack_88 = lVar7;
          lStack_80 = lVar13;
          func_0x00010988c1b8(&lStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar4[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar4[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar8;
  return;
}



/* Entry: 10a6ac030; end: 10a6ac127;  */

void FUN_10a6ac030(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  int in_stack_ffffffffffffffb0;
  undefined8 *in_stack_ffffffffffffffb8;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a6ac128(param_2,param_3);
  FUN_10a052e3c(param_5);
  func_0x0001098849a4(&stack0xffffffffffffffb0,plVar4[0x2b],plVar4 + 0x2c);
  func_0x0001098849a4(param_1,param_2,&stack0xffffffffffffffb0);
  if ((3 < in_stack_ffffffffffffffb0) && (in_stack_ffffffffffffffb8 != (undefined8 *)0x0)) {
    (**(code **)*in_stack_ffffffffffffffb8)();
  }
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a6ac128; end: 10a6ac18f;  */

void FUN_10a6ac128(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined **ppuVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar4 = param_1;
  func_0x000109898688();
  if (ppuVar4 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar4);
    param_2 = ppuVar4;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar5 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = plVar5;
  FUN_10a6ac128(plVar5,param_2);
  FUN_10a052e3c(param_4);
  uVar9 = plVar7[0x18];
  plVar1 = (long *)plVar7[0x17];
  if (-1 < (char)*(byte *)((long)plVar7 + 0xcf)) {
    uVar9 = (ulong)*(byte *)((long)plVar7 + 0xcf);
    plVar1 = plVar7 + 0x17;
  }
  (**(code **)(*plVar5 + 0x128))(extraout_x8 + 2,plVar5,plVar1,uVar9);
  *extraout_x8 = 6;
  plVar5 = plVar6 + 0x4b;
  lVar8 = plVar6[0x59];
  uVar9 = lVar8 - 1;
  plVar6[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar5[lVar8 + 2];
    if (plVar6[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar9) {
      return;
    }
  }
  lVar8 = *plVar5;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_88 = plVar5;
        if (uVar10 >> 0x3c == 0) {
          lVar3 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar3 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar5 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar3 + uVar10 * 0x10;
          lStack_a8 = lVar8;
          lStack_a0 = lVar8;
          lStack_98 = lVar8;
          lStack_90 = lVar14;
          func_0x00010988c1b8(&lStack_a8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar6[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar9 < uVar15) {
    lVar8 = lVar8 + uVar9 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar9;
  return;
}



/* Entry: 10a6ac190; end: 10a6ac26f;  */

void FUN_10a6ac190(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  FUN_10a6ac128(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar7 = plVar5[0x18];
  plVar1 = (long *)plVar5[0x17];
  if (-1 < (char)*(byte *)((long)plVar5 + 0xcf)) {
    uVar7 = (ulong)*(byte *)((long)plVar5 + 0xcf);
    plVar1 = plVar5 + 0x17;
  }
  (**(code **)(*param_2 + 0x128))(param_1 + 2,param_2,plVar1,uVar7);
  *param_1 = 6;
  plVar1 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a6ac270; end: 10a6ac34f;  */

void FUN_10a6ac270(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  FUN_10a6ac128(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar7 = plVar5[0x1b];
  plVar1 = (long *)plVar5[0x1a];
  if (-1 < (char)*(byte *)((long)plVar5 + 0xe7)) {
    uVar7 = (ulong)*(byte *)((long)plVar5 + 0xe7);
    plVar1 = plVar5 + 0x1a;
  }
  (**(code **)(*param_2 + 0x128))(param_1 + 2,param_2,plVar1,uVar7);
  *param_1 = 6;
  plVar1 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a6ac350; end: 10a6ac473;  */

void FUN_10a6ac350(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined1 *in_stack_ffffffffffffffa0;
  ulong in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  undefined8 in_stack_ffffffffffffffb8;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  FUN_10a6ac128(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a697634(&stack0xffffffffffffffa0,plVar5);
  puVar1 = in_stack_ffffffffffffffa0;
  if (-1 < (long)in_stack_ffffffffffffffb0) {
    in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffb0 >> 0x38;
    puVar1 = &stack0xffffffffffffffa0;
  }
  (**(code **)(*param_2 + 0x128))(&stack0xffffffffffffffb8,param_2,puVar1,in_stack_ffffffffffffffa8)
  ;
  *param_1 = 6;
  *(undefined8 *)(param_1 + 2) = in_stack_ffffffffffffffb8;
  if ((long)in_stack_ffffffffffffffb0 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa0);
  }
  plVar5 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar5[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar5;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar5;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar5 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a6ac474; end: 10a6ac483;  */

void FUN_10a6ac474(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c0dc50;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a6ac484; end: 10a6ac4a3;  */

void FUN_10a6ac484(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c0dc50;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6ac4a4; end: 10a6ac4b3;  */

void FUN_10a6ac4a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a6ac4ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a6ac4b4; end: 10a6ac5b3;  */

long FUN_10a6ac4b4(long param_1)

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



/* Entry: 10a6ac5b4; end: 10a6ac6b7;  */

/* WARNING: Removing unreachable block (ram,0x00010a6ac858) */
/* WARNING: Removing unreachable block (ram,0x00010a6ac7d8) */
/* WARNING: Removing unreachable block (ram,0x00010a6ac8d4) */
/* WARNING: Removing unreachable block (ram,0x00010a6acc78) */
/* WARNING: Removing unreachable block (ram,0x00010a6acc98) */
/* WARNING: Removing unreachable block (ram,0x00010a6acc88) */

long * FUN_10a6ac5b4(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,long *param_6)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long *plVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  long lVar25;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long *plStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long *plStack_158;
  undefined8 uStack_150;
  undefined2 uStack_148;
  undefined1 uStack_146;
  undefined1 uStack_139;
  long lStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [56];
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_b8 = *param_6;
  lStack_b0 = param_6[1];
  *param_6 = 0;
  (**(code **)(param_6[2] + 0x10))(auStack_a8);
  lStack_70 = param_6[9];
  FUN_10a23708c(param_1,param_2,param_3,param_4,param_5,&lStack_b8,4);
  plVar20 = &lStack_b8;
  FUN_10a042634();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_10a042634(&lStack_b8);
  __Unwind_Resume();
  if (99 < (int)plVar20[6] - 200U) {
    return plVar20;
  }
  plVar10 = *(long **)(param_2 + 0x18);
  if (plVar10 == (long *)0x0) {
    return (long *)0x0;
  }
  __ZNSt3__119__shared_weak_count4lockEv();
  if (plVar10 == (long *)0x0) {
    return (long *)0x0;
  }
  lVar25 = *(long *)(param_2 + 0x10);
  plVar11 = plVar10;
  lStack_160 = lVar25;
  plStack_158 = plVar10;
  if (lVar25 == 0) goto LAB_10a6accb8;
  if (plVar20[7] == 0) {
    plStack_178 = (long *)0x0;
    lStack_170 = 0;
    lStack_168 = 0;
  }
  else {
    FUN_109ffe064(&plStack_178,plVar20[7],plVar20[0x10]);
  }
  __ZNSt3__15mutex4lockEv(lVar25 + 0xe8);
  if (0xff < *(ulong *)(lVar25 + 0x150)) {
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f66bb8c,&UNK_10f66c935,0x58,&UNK_10f66c9aa);
    }
    func_0x00010a6ac50c(lVar25 + 0x128);
  }
  lVar9 = lStack_168;
  lVar8 = lStack_170;
  plVar7 = plStack_178;
  plStack_178 = (long *)0x0;
  lStack_170 = 0;
  lStack_168 = 0;
  uStack_139 = 5;
  uStack_150 = CONCAT26(uStack_150._6_2_,0x6369706f74);
  plVar11 = plVar20 + 0x12;
  func_0x000104c5e210(plVar11,&uStack_150);
  if (plVar11 == (long *)0x0) {
    lStack_1c8 = 0;
    lStack_1c0 = 0;
    lStack_1b8 = 0;
  }
  else if (*(char *)((long)plVar11 + 0x3f) < '\0') {
    func_0x000107c3192c(&lStack_1c8,plVar11[5],plVar11[6]);
  }
  else {
    lStack_1c0 = plVar11[6];
    lStack_1c8 = plVar11[5];
    lStack_1b8 = plVar11[7];
  }
  uStack_139 = 10;
  uStack_148 = 0x6469;
  uStack_150 = 0x5f74736575716572;
  uStack_146 = 0;
  plVar11 = plVar20 + 0x12;
  func_0x000104c5e210(plVar11,&uStack_150);
  if (plVar11 == (long *)0x0) {
    lStack_1b0 = 0;
    lStack_1a8 = 0;
    lStack_1a0 = 0;
  }
  else if (*(char *)((long)plVar11 + 0x3f) < '\0') {
    func_0x000107c3192c(&lStack_1b0,plVar11[5],plVar11[6]);
  }
  else {
    lStack_1a8 = plVar11[6];
    lStack_1b0 = plVar11[5];
    lStack_1a0 = plVar11[7];
  }
  uStack_139 = 9;
  uStack_148 = 0x65;
  uStack_150 = 0x7079745f656d696d;
  plVar20 = plVar20 + 0x12;
  puVar18 = &uStack_150;
  func_0x000104c5e210();
  if (plVar20 == (long *)0x0) {
    lStack_198 = 0;
    lStack_190 = 0;
    lStack_188 = 0;
  }
  else if (*(char *)((long)plVar20 + 0x3f) < '\0') {
    puVar18 = (undefined8 *)plVar20[5];
    func_0x000107c3192c(&lStack_198,puVar18,plVar20[6]);
  }
  else {
    lStack_190 = plVar20[6];
    lStack_198 = plVar20[5];
    lStack_188 = plVar20[7];
  }
  puVar23 = *(undefined8 **)(lVar25 + 0x130);
  puVar21 = *(undefined8 **)(lVar25 + 0x138);
  uVar5 = (long)puVar21 - (long)puVar23;
  uVar1 = 0;
  if (uVar5 != 0) {
    uVar1 = ((long)puVar21 - (long)puVar23 >> 3) * 0x2a - 1;
  }
  uVar2 = *(ulong *)(lVar25 + 0x148);
  uVar19 = *(long *)(lVar25 + 0x150) + uVar2;
  if (uVar1 == uVar19) {
    if (uVar2 < 0x2a) {
      puVar22 = *(undefined8 **)(lVar25 + 0x140);
      puVar24 = *(undefined8 **)(lVar25 + 0x128);
      if (uVar5 < (ulong)((long)puVar22 - (long)puVar24)) {
        uVar14 = 0xfc0;
        __Znwm();
        if (puVar22 == puVar21) {
          if (puVar23 == puVar24) {
            lVar17 = (long)puVar22 - (long)puVar23 >> 2;
            if (puVar21 == puVar23) {
              lVar17 = 1;
            }
            lVar12 = lVar17;
            FUN_10a6acf00();
            puVar23 = (undefined8 *)(lVar12 + (lVar17 * 2 + 6U & 0xfffffffffffffff8));
            lVar17 = *(long *)(lVar25 + 0x138) - (long)*(undefined8 **)(lVar25 + 0x130);
            puVar21 = puVar23;
            if (lVar17 != 0) {
              puVar21 = (undefined8 *)((long)puVar23 + lVar17);
              puVar22 = *(undefined8 **)(lVar25 + 0x130);
              puVar24 = puVar23;
              do {
                *puVar24 = *puVar22;
                lVar17 = lVar17 + -8;
                puVar22 = puVar22 + 1;
                puVar24 = puVar24 + 1;
              } while (lVar17 != 0);
            }
            lVar17 = *(long *)(lVar25 + 0x128);
            *(long *)(lVar25 + 0x128) = lVar12;
            *(undefined8 **)(lVar25 + 0x130) = puVar23;
            *(undefined8 **)(lVar25 + 0x138) = puVar21;
            *(long *)(lVar25 + 0x140) = lVar12 + (long)puVar18 * 8;
            if (lVar17 != 0) {
              __ZdlPv(lVar17);
              puVar23 = *(undefined8 **)(lVar25 + 0x130);
            }
          }
          puVar23[-1] = uVar14;
          puVar18 = *(undefined8 **)(lVar25 + 0x130);
          puVar23 = puVar18 + -1;
          *(undefined8 **)(lVar25 + 0x130) = puVar23;
          goto LAB_10a6ac958;
        }
        *puVar21 = uVar14;
        *(long *)(lVar25 + 0x138) = *(long *)(lVar25 + 0x138) + 8;
      }
      else {
        puVar16 = (undefined8 *)((long)puVar22 - (long)puVar24 >> 2);
        if (puVar22 == puVar24) {
          puVar16 = (undefined8 *)0x1;
        }
        FUN_10a6acf00();
        uVar14 = 0xfc0;
        puVar15 = puVar18;
        __Znwm();
        puVar22 = (undefined8 *)((long)puVar16 + uVar5);
        puVar24 = puVar16 + (long)puVar18;
        puVar13 = puVar16;
        if (uVar5 == (long)puVar18 * 8) {
          if ((long)uVar5 < 1) {
            puVar18 = (undefined8 *)((long)puVar22 - (long)puVar16 >> 2);
            if (puVar21 == puVar23) {
              puVar18 = (undefined8 *)0x1;
            }
            puVar13 = puVar18;
            FUN_10a6acf00();
            puVar22 = puVar13 + ((ulong)puVar18 >> 2);
            puVar24 = puVar13 + (long)puVar15;
            if (puVar16 != (undefined8 *)0x0) {
              __ZdlPv(puVar16);
            }
          }
          else {
            lVar17 = ((long)puVar22 - (long)puVar16 >> 3) + 1;
            puVar22 = puVar22 + -((ulong)(lVar17 - (lVar17 >> 0x3f)) >> 1);
          }
        }
        puVar18 = puVar22 + 1;
        *puVar22 = uVar14;
        puVar23 = *(undefined8 **)(lVar25 + 0x138);
        puVar21 = puVar13;
        if (puVar23 != *(undefined8 **)(lVar25 + 0x130)) {
          do {
            puVar13 = puVar21;
            puVar16 = puVar22;
            if (puVar22 == puVar21) {
              if (puVar18 < puVar24) {
                lVar17 = ((long)puVar24 - (long)puVar18 >> 3) + 1;
                lVar12 = (long)puVar18 - (long)puVar21;
                lVar6 = (long)puVar18 - (long)puVar21;
                puVar18 = puVar18 + ((ulong)(lVar17 - (lVar17 >> 0x3f)) >> 1);
                puVar16 = (undefined8 *)((long)puVar18 - lVar12);
                if (lVar6 != 0) {
                  _memmove(puVar16,puVar22,lVar6);
                  puVar15 = puVar22;
                }
              }
              else {
                puVar16 = (undefined8 *)((long)puVar24 - (long)puVar21 >> 2);
                if ((long)puVar24 - (long)puVar21 == 0) {
                  puVar16 = (undefined8 *)0x1;
                }
                puVar13 = puVar16;
                FUN_10a6acf00();
                puVar16 = (undefined8 *)
                          ((long)puVar13 + ((long)puVar16 * 2 + 6U & 0xfffffffffffffff8));
                lVar17 = (long)puVar18 - (long)puVar21;
                puVar18 = puVar16;
                if (lVar17 != 0) {
                  puVar18 = (undefined8 *)((long)puVar16 + lVar17);
                  puVar24 = puVar16;
                  do {
                    *puVar24 = *puVar22;
                    lVar17 = lVar17 + -8;
                    puVar24 = puVar24 + 1;
                    puVar22 = puVar22 + 1;
                  } while (lVar17 != 0);
                }
                puVar24 = puVar13 + (long)puVar15;
                if (puVar21 != (undefined8 *)0x0) {
                  __ZdlPv(puVar21);
                }
              }
            }
            puVar23 = puVar23 + -1;
            puVar22 = puVar16 + -1;
            *puVar22 = *puVar23;
            puVar21 = puVar13;
          } while (puVar23 != *(undefined8 **)(lVar25 + 0x130));
        }
        lVar17 = *(long *)(lVar25 + 0x128);
        *(undefined8 **)(lVar25 + 0x128) = puVar13;
        *(undefined8 **)(lVar25 + 0x130) = puVar22;
        *(undefined8 **)(lVar25 + 0x138) = puVar18;
        *(undefined8 **)(lVar25 + 0x140) = puVar24;
        if (lVar17 != 0) {
          __ZdlPv();
        }
      }
    }
    else {
      *(ulong *)(lVar25 + 0x148) = uVar2 - 0x2a;
      puVar18 = puVar23 + 1;
LAB_10a6ac958:
      uVar14 = *puVar23;
      *(undefined8 **)(lVar25 + 0x130) = puVar18;
      FUN_10a6ace04(lVar25 + 0x128,uVar14);
    }
    puVar23 = *(undefined8 **)(lVar25 + 0x130);
    uVar19 = *(long *)(lVar25 + 0x150) + *(long *)(lVar25 + 0x148);
  }
  plVar20 = (long *)(puVar23[uVar19 / 0x2a] + (uVar19 % 0x2a) * 0x60);
  plVar20[2] = lVar9;
  plVar20[1] = lVar8;
  *plVar20 = (long)plVar7;
  plVar20[5] = lStack_1b8;
  plVar20[4] = lStack_1c0;
  plVar20[3] = lStack_1c8;
  plVar20[8] = lStack_1a0;
  plVar20[7] = lStack_1a8;
  plVar20[6] = lStack_1b0;
  plVar20[0xb] = lStack_188;
  plVar20[10] = lStack_190;
  plVar20[9] = lStack_198;
  *(long *)(lVar25 + 0x150) = *(long *)(lVar25 + 0x150) + 1;
  lStack_188 = 0;
  lStack_190 = 0;
  lStack_198 = 0;
  lStack_1a0 = 0;
  lStack_1a8 = 0;
  lStack_1b0 = 0;
  lStack_1b8 = 0;
  lStack_1c0 = 0;
  lStack_1c8 = 0;
  plVar11 = (long *)(lVar25 + 0xe8);
  __ZNSt3__15mutex6unlockEv(plVar11);
  if (lStack_168 < 0) {
    plVar11 = plStack_178;
    __ZdlPv(plStack_178);
  }
LAB_10a6accb8:
  plVar20 = plVar10 + 1;
  do {
    lVar25 = *plVar20;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar4) {
      *plVar20 = lVar25 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar25 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    plVar11 = plVar10;
  }
  return plVar11;
}



/* Entry: 10a6ac6b8; end: 10a6ace03;  */

/* WARNING: Removing unreachable block (ram,0x00010a6ac858) */
/* WARNING: Removing unreachable block (ram,0x00010a6ac7d8) */
/* WARNING: Removing unreachable block (ram,0x00010a6ac8d4) */
/* WARNING: Removing unreachable block (ram,0x00010a6acc78) */
/* WARNING: Removing unreachable block (ram,0x00010a6acc98) */
/* WARNING: Removing unreachable block (ram,0x00010a6acc88) */

void FUN_10a6ac6b8(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 *puVar16;
  long lVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  long lVar24;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined2 uStack_78;
  undefined1 uStack_76;
  undefined1 uStack_69;
  
  if (99 < *(int *)(param_1 + 0x30) - 200U) {
    return;
  }
  plVar11 = *(long **)(param_2 + 0x18);
  if (plVar11 == (long *)0x0) {
    return;
  }
  __ZNSt3__119__shared_weak_count4lockEv();
  if (plVar11 == (long *)0x0) {
    return;
  }
  lVar24 = *(long *)(param_2 + 0x10);
  lStack_90 = lVar24;
  plStack_88 = plVar11;
  if (lVar24 == 0) goto LAB_10a6accb8;
  if (*(long *)(param_1 + 0x38) == 0) {
    uStack_a8 = 0;
    uStack_a0 = 0;
    lStack_98 = 0;
  }
  else {
    FUN_109ffe064(&uStack_a8,*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x80));
  }
  __ZNSt3__15mutex4lockEv(lVar24 + 0xe8);
  if (0xff < *(ulong *)(lVar24 + 0x150)) {
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f66bb8c,&UNK_10f66c935,0x58,&UNK_10f66c9aa,in_x6,in_x7,0x100);
    }
    func_0x00010a6ac50c(lVar24 + 0x128);
  }
  lVar10 = lStack_98;
  uVar9 = uStack_a0;
  uVar8 = uStack_a8;
  uStack_a8 = 0;
  uStack_a0 = 0;
  lStack_98 = 0;
  uStack_69 = 5;
  uStack_80 = CONCAT26(uStack_80._6_2_,0x6369706f74);
  lVar17 = param_1 + 0x90;
  func_0x000104c5e210(lVar17,&uStack_80);
  if (lVar17 == 0) {
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
  }
  else if (*(char *)(lVar17 + 0x3f) < '\0') {
    func_0x000107c3192c(&uStack_f8,*(undefined8 *)(lVar17 + 0x28),*(undefined8 *)(lVar17 + 0x30));
  }
  else {
    uStack_f0 = *(undefined8 *)(lVar17 + 0x30);
    uStack_f8 = *(undefined8 *)(lVar17 + 0x28);
    uStack_e8 = *(undefined8 *)(lVar17 + 0x38);
  }
  uStack_69 = 10;
  uStack_78 = 0x6469;
  uStack_80 = 0x5f74736575716572;
  uStack_76 = 0;
  lVar17 = param_1 + 0x90;
  func_0x000104c5e210(lVar17,&uStack_80);
  if (lVar17 == 0) {
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
  }
  else if (*(char *)(lVar17 + 0x3f) < '\0') {
    func_0x000107c3192c(&uStack_e0,*(undefined8 *)(lVar17 + 0x28),*(undefined8 *)(lVar17 + 0x30));
  }
  else {
    uStack_d8 = *(undefined8 *)(lVar17 + 0x30);
    uStack_e0 = *(undefined8 *)(lVar17 + 0x28);
    uStack_d0 = *(undefined8 *)(lVar17 + 0x38);
  }
  uStack_69 = 9;
  uStack_78 = 0x65;
  uStack_80 = 0x7079745f656d696d;
  param_1 = param_1 + 0x90;
  puVar19 = &uStack_80;
  func_0x000104c5e210();
  if (param_1 == 0) {
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
  }
  else if (*(char *)(param_1 + 0x3f) < '\0') {
    puVar19 = *(undefined8 **)(param_1 + 0x28);
    func_0x000107c3192c(&uStack_c8,puVar19,*(undefined8 *)(param_1 + 0x30));
  }
  else {
    uStack_c0 = *(undefined8 *)(param_1 + 0x30);
    uStack_c8 = *(undefined8 *)(param_1 + 0x28);
    uStack_b8 = *(undefined8 *)(param_1 + 0x38);
  }
  puVar22 = *(undefined8 **)(lVar24 + 0x130);
  puVar20 = *(undefined8 **)(lVar24 + 0x138);
  uVar6 = (long)puVar20 - (long)puVar22;
  uVar2 = 0;
  if (uVar6 != 0) {
    uVar2 = ((long)puVar20 - (long)puVar22 >> 3) * 0x2a - 1;
  }
  uVar3 = *(ulong *)(lVar24 + 0x148);
  uVar18 = *(long *)(lVar24 + 0x150) + uVar3;
  if (uVar2 == uVar18) {
    if (uVar3 < 0x2a) {
      puVar21 = *(undefined8 **)(lVar24 + 0x140);
      puVar23 = *(undefined8 **)(lVar24 + 0x128);
      if (uVar6 < (ulong)((long)puVar21 - (long)puVar23)) {
        uVar14 = 0xfc0;
        __Znwm();
        if (puVar21 == puVar20) {
          if (puVar22 == puVar23) {
            lVar17 = (long)puVar21 - (long)puVar22 >> 2;
            if (puVar20 == puVar22) {
              lVar17 = 1;
            }
            lVar12 = lVar17;
            FUN_10a6acf00();
            puVar22 = (undefined8 *)(lVar12 + (lVar17 * 2 + 6U & 0xfffffffffffffff8));
            lVar17 = *(long *)(lVar24 + 0x138) - (long)*(undefined8 **)(lVar24 + 0x130);
            puVar20 = puVar22;
            if (lVar17 != 0) {
              puVar20 = (undefined8 *)((long)puVar22 + lVar17);
              puVar21 = *(undefined8 **)(lVar24 + 0x130);
              puVar23 = puVar22;
              do {
                *puVar23 = *puVar21;
                lVar17 = lVar17 + -8;
                puVar21 = puVar21 + 1;
                puVar23 = puVar23 + 1;
              } while (lVar17 != 0);
            }
            lVar17 = *(long *)(lVar24 + 0x128);
            *(long *)(lVar24 + 0x128) = lVar12;
            *(undefined8 **)(lVar24 + 0x130) = puVar22;
            *(undefined8 **)(lVar24 + 0x138) = puVar20;
            *(long *)(lVar24 + 0x140) = lVar12 + (long)puVar19 * 8;
            if (lVar17 != 0) {
              __ZdlPv(lVar17);
              puVar22 = *(undefined8 **)(lVar24 + 0x130);
            }
          }
          puVar22[-1] = uVar14;
          puVar19 = *(undefined8 **)(lVar24 + 0x130);
          puVar22 = puVar19 + -1;
          *(undefined8 **)(lVar24 + 0x130) = puVar22;
          goto LAB_10a6ac958;
        }
        *puVar20 = uVar14;
        *(long *)(lVar24 + 0x138) = *(long *)(lVar24 + 0x138) + 8;
      }
      else {
        puVar16 = (undefined8 *)((long)puVar21 - (long)puVar23 >> 2);
        if (puVar21 == puVar23) {
          puVar16 = (undefined8 *)0x1;
        }
        FUN_10a6acf00();
        uVar14 = 0xfc0;
        puVar15 = puVar19;
        __Znwm();
        puVar21 = (undefined8 *)((long)puVar16 + uVar6);
        puVar23 = puVar16 + (long)puVar19;
        puVar13 = puVar16;
        if (uVar6 == (long)puVar19 * 8) {
          if ((long)uVar6 < 1) {
            puVar19 = (undefined8 *)((long)puVar21 - (long)puVar16 >> 2);
            if (puVar20 == puVar22) {
              puVar19 = (undefined8 *)0x1;
            }
            puVar13 = puVar19;
            FUN_10a6acf00();
            puVar21 = puVar13 + ((ulong)puVar19 >> 2);
            puVar23 = puVar13 + (long)puVar15;
            if (puVar16 != (undefined8 *)0x0) {
              __ZdlPv(puVar16);
            }
          }
          else {
            lVar17 = ((long)puVar21 - (long)puVar16 >> 3) + 1;
            puVar21 = puVar21 + -((ulong)(lVar17 - (lVar17 >> 0x3f)) >> 1);
          }
        }
        puVar19 = puVar21 + 1;
        *puVar21 = uVar14;
        puVar22 = *(undefined8 **)(lVar24 + 0x138);
        puVar20 = puVar13;
        if (puVar22 != *(undefined8 **)(lVar24 + 0x130)) {
          do {
            puVar13 = puVar20;
            puVar16 = puVar21;
            if (puVar21 == puVar20) {
              if (puVar19 < puVar23) {
                lVar17 = ((long)puVar23 - (long)puVar19 >> 3) + 1;
                lVar12 = (long)puVar19 - (long)puVar20;
                lVar7 = (long)puVar19 - (long)puVar20;
                puVar19 = puVar19 + ((ulong)(lVar17 - (lVar17 >> 0x3f)) >> 1);
                puVar16 = (undefined8 *)((long)puVar19 - lVar12);
                if (lVar7 != 0) {
                  _memmove(puVar16,puVar21,lVar7);
                  puVar15 = puVar21;
                }
              }
              else {
                puVar16 = (undefined8 *)((long)puVar23 - (long)puVar20 >> 2);
                if ((long)puVar23 - (long)puVar20 == 0) {
                  puVar16 = (undefined8 *)0x1;
                }
                puVar13 = puVar16;
                FUN_10a6acf00();
                puVar16 = (undefined8 *)
                          ((long)puVar13 + ((long)puVar16 * 2 + 6U & 0xfffffffffffffff8));
                lVar17 = (long)puVar19 - (long)puVar20;
                puVar19 = puVar16;
                if (lVar17 != 0) {
                  puVar19 = (undefined8 *)((long)puVar16 + lVar17);
                  puVar23 = puVar16;
                  do {
                    *puVar23 = *puVar21;
                    lVar17 = lVar17 + -8;
                    puVar23 = puVar23 + 1;
                    puVar21 = puVar21 + 1;
                  } while (lVar17 != 0);
                }
                puVar23 = puVar13 + (long)puVar15;
                if (puVar20 != (undefined8 *)0x0) {
                  __ZdlPv(puVar20);
                }
              }
            }
            puVar22 = puVar22 + -1;
            puVar21 = puVar16 + -1;
            *puVar21 = *puVar22;
            puVar20 = puVar13;
          } while (puVar22 != *(undefined8 **)(lVar24 + 0x130));
        }
        lVar17 = *(long *)(lVar24 + 0x128);
        *(undefined8 **)(lVar24 + 0x128) = puVar13;
        *(undefined8 **)(lVar24 + 0x130) = puVar21;
        *(undefined8 **)(lVar24 + 0x138) = puVar19;
        *(undefined8 **)(lVar24 + 0x140) = puVar23;
        if (lVar17 != 0) {
          __ZdlPv();
        }
      }
    }
    else {
      *(ulong *)(lVar24 + 0x148) = uVar3 - 0x2a;
      puVar19 = puVar22 + 1;
LAB_10a6ac958:
      uVar14 = *puVar22;
      *(undefined8 **)(lVar24 + 0x130) = puVar19;
      FUN_10a6ace04(lVar24 + 0x128,uVar14);
    }
    puVar22 = *(undefined8 **)(lVar24 + 0x130);
    uVar18 = *(long *)(lVar24 + 0x150) + *(long *)(lVar24 + 0x148);
  }
  puVar19 = (undefined8 *)(puVar22[uVar18 / 0x2a] + (uVar18 % 0x2a) * 0x60);
  puVar19[2] = lVar10;
  puVar19[1] = uVar9;
  *puVar19 = uVar8;
  puVar19[5] = uStack_e8;
  puVar19[4] = uStack_f0;
  puVar19[3] = uStack_f8;
  puVar19[8] = uStack_d0;
  puVar19[7] = uStack_d8;
  puVar19[6] = uStack_e0;
  puVar19[0xb] = uStack_b8;
  puVar19[10] = uStack_c0;
  puVar19[9] = uStack_c8;
  *(long *)(lVar24 + 0x150) = *(long *)(lVar24 + 0x150) + 1;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_f8 = 0;
  __ZNSt3__15mutex6unlockEv(lVar24 + 0xe8);
  if (lStack_98 < 0) {
    __ZdlPv(uStack_a8);
  }
LAB_10a6accb8:
  plVar1 = plVar11 + 1;
  do {
    lVar24 = *plVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar24 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar24 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
  }
  return;
}



/* Entry: 10a6ace04; end: 10a6aceff;  */

void FUN_10a6ace04(ulong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar7 = (undefined8 *)param_1[2];
  if (puVar7 == (undefined8 *)param_1[3]) {
    uVar3 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar5 = (long)((long)puVar7 - uVar3) >> 2;
      if ((long)puVar7 - uVar3 == 0) {
        uVar5 = 1;
      }
      uVar3 = uVar5;
      FUN_10a6acf00();
      puVar1 = (undefined8 *)(uVar3 + (uVar5 >> 2) * 8);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (undefined8 *)((long)puVar1 + lVar8);
        puVar6 = (undefined8 *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar5 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar4 * 8;
      if (uVar5 != 0) {
        __ZdlPv(uVar5);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar3) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (undefined8 *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10a6acf00; end: 10a6acf33;  */

void FUN_10a6acf00(ulong param_1)

{
  if (param_1 >> 0x3d == 0) {
    __Znwm(param_1 << 3);
    return;
  }
  func_0x000109ffded8();
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a6acf34; end: 10a6acf8f;  */

void FUN_10a6acf34(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a6acf90; end: 10a6ad08b;  */

undefined1  [16] FUN_10a6acf90(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c0c228;
  puVar1 = &UNK_10f66b8c1;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c0c228;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c0f758;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a6ad08c; end: 10a6ad147;  */

void FUN_10a6ad08c(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f66c3fb,0x1b);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a6ad148);
  (*pcVar4)();
}



/* Entry: 10a6ad148; end: 10a6ad157;  */

void FUN_10a6ad148(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c0dce8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a6ad158; end: 10a6ad177;  */

void FUN_10a6ad158(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c0dce8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6ad178; end: 10a6ad187;  */

void FUN_10a6ad178(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a6ad180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a6ad188; end: 10a6ad1df;  */

long FUN_10a6ad188(long param_1)

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



/* Entry: 10a6ad1e0; end: 10a6ad2db;  */

undefined1  [16] FUN_10a6ad1e0(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c0c490;
  puVar1 = &UNK_10f66b8c1;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c0c490;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c0f758;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a6ad2dc; end: 10a6ad397;  */

void FUN_10a6ad2dc(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f66c417,0x1b);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a6ad398);
  (*pcVar4)();
}



/* Entry: 10a6ad398; end: 10a6ad3a7;  */

void FUN_10a6ad398(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c0dd38;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a6ad3a8; end: 10a6ad3c7;  */

void FUN_10a6ad3a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c0dd38;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6ad3c8; end: 10a6ad3d7;  */

void FUN_10a6ad3c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a6ad3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a6ad3d8; end: 10a6ad42f;  */

long FUN_10a6ad3d8(long param_1)

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



/* Entry: 10a6ad430; end: 10a6ad54b;  */

void FUN_10a6ad430(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffb8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10a6ad54c(param_2,param_3);
  FUN_10a05395c(param_5);
  FUN_10a053980(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10a699434(plVar6,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffb8 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  *param_1 = 0;
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a6ad54c; end: 10a6ad5b3;  */

void FUN_10a6ad54c(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar3);
    param_2 = ppuVar3;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar4 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a6ad744(plVar4,param_2);
  FUN_10a052e3c(param_4);
  lVar6 = plVar4[0x2b];
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)(int)lVar6;
  plVar4 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar4[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar4;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_88 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar4 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_a8 = lVar6;
          lStack_a0 = lVar6;
          lStack_98 = lVar6;
          lStack_90 = lVar12;
          func_0x00010988c1b8(&lStack_a8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a6ad5b4; end: 10a6ad66f;  */

void FUN_10a6ad5b4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a6ad744(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[0x2b];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)lVar5;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a6ad670; end: 10a6ad743;  */

void FUN_10a6ad670(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a6ad54c(param_2,param_3);
  FUN_10a076f00(param_5);
  func_0x000109898518(param_2,param_4);
  if ((int)param_2 < 0) {
    FUN_10a00946c(&UNK_10f63b8ac);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a6ad730);
    (*pcVar1)();
  }
  *(int *)(plVar4 + 0x2b) = (int)param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a6ad744; end: 10a6ad7ab;  */

void FUN_10a6ad744(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined **ppuVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar4 = param_1;
  func_0x000109898688();
  if (ppuVar4 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar4);
    param_2 = ppuVar4;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar5 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = plVar5;
  FUN_10a6ad744(plVar5,param_2);
  FUN_10a052e3c(param_4);
  uVar9 = plVar7[0x2d];
  plVar1 = (long *)plVar7[0x2c];
  if (-1 < (char)*(byte *)((long)plVar7 + 0x177)) {
    uVar9 = (ulong)*(byte *)((long)plVar7 + 0x177);
    plVar1 = plVar7 + 0x2c;
  }
  (**(code **)(*plVar5 + 0x128))(extraout_x8 + 2,plVar5,plVar1,uVar9);
  *extraout_x8 = 6;
  plVar5 = plVar6 + 0x4b;
  lVar8 = plVar6[0x59];
  uVar9 = lVar8 - 1;
  plVar6[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar5[lVar8 + 2];
    if (plVar6[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar9) {
      return;
    }
  }
  lVar8 = *plVar5;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_88 = plVar5;
        if (uVar10 >> 0x3c == 0) {
          lVar3 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar3 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar5 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar3 + uVar10 * 0x10;
          lStack_a8 = lVar8;
          lStack_a0 = lVar8;
          lStack_98 = lVar8;
          lStack_90 = lVar14;
          func_0x00010988c1b8(&lStack_a8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar6[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar9 < uVar15) {
    lVar8 = lVar8 + uVar9 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar9;
  return;
}



/* Entry: 10a6ad7ac; end: 10a6ad88b;  */

void FUN_10a6ad7ac(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  FUN_10a6ad744(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar7 = plVar5[0x2d];
  plVar1 = (long *)plVar5[0x2c];
  if (-1 < (char)*(byte *)((long)plVar5 + 0x177)) {
    uVar7 = (ulong)*(byte *)((long)plVar5 + 0x177);
    plVar1 = plVar5 + 0x2c;
  }
  (**(code **)(*param_2 + 0x128))(param_1 + 2,param_2,plVar1,uVar7);
  *param_1 = 6;
  plVar1 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a6ad88c; end: 10a6ad987;  */

void FUN_10a6ad88c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a6ad54c(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (plVar4 + 0x2c,&stack0xffffffffffffffa8);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a6ad988; end: 10a6adac7;  */

void FUN_10a6ad988(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined1 *in_stack_ffffffffffffffa0;
  ulong in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  undefined8 in_stack_ffffffffffffffb8;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  FUN_10a6ad744(param_2,param_3);
  FUN_10a052e3c(param_5);
  if (*(char *)((long)plVar5 + 0xd7) < '\0') {
    func_0x000107c3192c(&stack0xffffffffffffffa0,plVar5[0x18],plVar5[0x19]);
  }
  else {
    in_stack_ffffffffffffffa8 = plVar5[0x19];
    in_stack_ffffffffffffffa0 = (undefined1 *)plVar5[0x18];
    in_stack_ffffffffffffffb0 = plVar5[0x1a];
  }
  puVar1 = in_stack_ffffffffffffffa0;
  if (-1 < (long)in_stack_ffffffffffffffb0) {
    in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffb0 >> 0x38;
    puVar1 = &stack0xffffffffffffffa0;
  }
  (**(code **)(*param_2 + 0x128))(&stack0xffffffffffffffb8,param_2,puVar1,in_stack_ffffffffffffffa8)
  ;
  *param_1 = 6;
  *(undefined8 *)(param_1 + 2) = in_stack_ffffffffffffffb8;
  if ((long)in_stack_ffffffffffffffb0 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa0);
  }
  plVar5 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar5[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar5;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar5;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar5 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a6adac8; end: 10a6adc23;  */

/* WARNING: Possible PIC construction at 0x00010a6adc18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a6adc1c) */
/* WARNING: Removing unreachable block (ram,0x00010a6adcbc) */
/* WARNING: Removing unreachable block (ram,0x00010a6adc64) */
/* WARNING: Removing unreachable block (ram,0x00010a6adc7c) */

void FUN_10a6adac8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined7 uVar2;
  undefined1 uVar3;
  undefined7 uVar4;
  byte bVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long lVar13;
  ulong unaff_x22;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long *unaff_x23;
  long lVar17;
  undefined8 unaff_x24;
  ulong uVar18;
  undefined8 unaff_x25;
  ulong uVar19;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  long *plStack_70;
  undefined7 uStack_68;
  undefined1 uStack_61;
  undefined7 uStack_60;
  byte bStack_59;
  undefined7 uStack_58;
  undefined1 uStack_51;
  undefined7 uStack_50;
  long lStack_48;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar9 = param_2;
  FUN_10a6ad54c(param_2,param_3);
  FUN_10a06cd04(param_5);
  func_0x000109898570(&plStack_70,param_2,param_4);
  bVar5 = bStack_59;
  uVar4 = uStack_60;
  uVar3 = uStack_61;
  uVar2 = uStack_68;
  plVar10 = plStack_70;
  uStack_58 = uStack_68;
  uStack_51 = uStack_61;
  uStack_50 = uStack_60;
  uVar14 = (ulong)bStack_59;
  uStack_68 = 0;
  uStack_61 = 0;
  uStack_60 = 0;
  bStack_59 = '\0';
  plStack_70 = (long *)0x0;
  if (*(char *)((long)plVar9 + 0xd7) < '\0') {
    param_2 = (long *)plVar9[0x18];
    __ZdlPv();
    plVar9[0x18] = (long)plVar10;
    plVar9[0x19] = CONCAT17(uStack_51,uStack_58);
    *(ulong *)((long)plVar9 + 0xcf) = CONCAT71(uStack_50,uStack_51);
    *(byte *)((long)plVar9 + 0xd7) = bVar5;
    if ((char)bStack_59 < '\0') {
      param_2 = plStack_70;
      __ZdlPv();
    }
  }
  else {
    plVar9[0x18] = (long)plVar10;
    plVar9[0x19] = CONCAT17(uVar3,uVar2);
    *(ulong *)((long)plVar9 + 0xcf) = CONCAT71(uVar4,uVar3);
    *(byte *)((long)plVar9 + 0xd7) = bVar5;
  }
  *param_1 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    unaff_x30 = 0x10a6adc1c;
    register0x00000008 = (BADSPACEBASE *)&plStack_70;
    unaff_x19 = plVar8;
    unaff_x20 = param_2;
    unaff_x21 = plVar9;
    unaff_x22 = uVar14;
    unaff_x23 = plVar10;
    unaff_x24 = param_5;
    unaff_x29 = puVar1;
  }
  plVar10 = plVar8 + 0x4b;
  lVar11 = plVar8[0x59];
  uVar14 = lVar11 - 1;
  plVar8[0x59] = uVar14;
  if (uVar14 < 8) {
    uVar14 = plVar10[lVar11 + 2];
    if (plVar8[0x5a] == uVar14) {
      return;
    }
  }
  else {
    uVar14 = *(ulong *)(plVar8[0x57] + -8);
    plVar8[0x57] = plVar8[0x57] + -8;
    if (plVar8[0x5a] == uVar14) {
      return;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  lVar11 = *plVar10;
  lVar16 = plVar8[0x4c];
  lVar13 = lVar16 - lVar11;
  uVar18 = lVar13 >> 4;
  if (uVar18 < uVar14) {
    uVar19 = uVar14 - uVar18;
    lVar17 = plVar8[0x4d];
    if ((ulong)(lVar17 - lVar16 >> 4) < uVar19) {
      if (uVar14 >> 0x3c == 0) {
        uVar12 = lVar17 - lVar11 >> 3;
        if (uVar12 <= uVar14) {
          uVar12 = uVar14;
        }
        if (0x7fffffffffffffef < (ulong)(lVar17 - lVar11)) {
          uVar12 = 0xfffffffffffffff;
        }
        *(long **)((long)register0x00000008 + -0x68) = plVar10;
        if (uVar12 >> 0x3c == 0) {
          lVar7 = uVar12 << 4;
          __Znwm();
          lVar16 = lVar7 + lVar13;
          _bzero(lVar16,uVar19 * 0x10);
          lVar15 = lVar16 + uVar18 * -0x10;
          _memcpy(lVar15,lVar11,lVar13);
          *plVar10 = lVar15;
          plVar8[0x4c] = lVar16 + uVar19 * 0x10;
          plVar8[0x4d] = lVar7 + uVar12 * 0x10;
          *(long *)((long)register0x00000008 + -0x78) = lVar11;
          *(long *)((long)register0x00000008 + -0x70) = lVar17;
          *(long *)((long)register0x00000008 + -0x88) = lVar11;
          *(long *)((long)register0x00000008 + -0x80) = lVar11;
          func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar6)();
    }
    _bzero(lVar16,uVar19 * 0x10);
    plVar8[0x4c] = lVar16 + uVar19 * 0x10;
  }
  else if (uVar14 < uVar18) {
    lVar11 = lVar11 + uVar14 * 0x10;
    while (lVar16 != lVar11) {
      lVar16 = lVar16 + -0x10;
      func_0x00010988c204(lVar16);
    }
    plVar8[0x4c] = lVar11;
  }
code_r0x00010988c138:
  plVar8[0x5a] = uVar14;
  return;
}



/* Entry: 10a6adc24; end: 10a6adcdb;  */

void FUN_10a6adc24(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a6ad744(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a2f8144(param_1,param_2,plVar4 + 0x1b);
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a6adcdc; end: 10a6ade03;  */

void FUN_10a6adcdc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffb8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10a6ad54c(param_2,param_3);
  FUN_10a2f81c8(param_5);
  FUN_10a2f81ec(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10a2e25b8(plVar6 + 0x1b,&stack0xffffffffffffffb0);
  FUN_10a32df84(plVar6 + 0x1d,plVar6[0x1b]);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffb8 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  *param_1 = 0;
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a6ade04; end: 10a6adeff;  */

undefined1  [16] FUN_10a6ade04(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c0c718;
  puVar1 = &UNK_10f66b8c1;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c0c718;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c0c4a8;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a6adf00; end: 10a6adfbb;  */

void FUN_10a6adf00(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f66c452,0x23);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a6adfbc);
  (*pcVar4)();
}



/* Entry: 10a6adfbc; end: 10a6ae0b7;  */

undefined1  [16] FUN_10a6adfbc(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c0c968;
  puVar1 = &UNK_10f66b8c1;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c0c968;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c0c4a8;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a6ae0b8; end: 10a6ae173;  */

void FUN_10a6ae0b8(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f66c476,0x21);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a6ae174);
  (*pcVar4)();
}



/* Entry: 10a6ae174; end: 10a6ae207;  */

void FUN_10a6ae174(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_1[1];
  uStack_30 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  lVar5 = *(long *)(param_2 + 0x10);
  FUN_10a2e25b8(lVar5 + 0xd8,&uStack_30);
  FUN_10a32df84(lVar5 + 0xe8,*(undefined8 *)(lVar5 + 0xd8));
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



/* Entry: 10a6ae208; end: 10a6ae233;  */

void FUN_10a6ae208(void)

{
  return;
}



/* Entry: 10a6ae234; end: 10a6ae253;  */

void FUN_10a6ae234(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c0dda0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6ae254; end: 10a6ae263;  */

void FUN_10a6ae254(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a6ae25c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a6ae264; end: 10a6ae2bb;  */

long FUN_10a6ae264(long param_1)

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



/* Entry: 10a6ae2bc; end: 10a6ae2cb;  */

void FUN_10a6ae2bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c0ddf0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a6ae2cc; end: 10a6ae2eb;  */

void FUN_10a6ae2cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c0ddf0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6ae2ec; end: 10a6ae2fb;  */

void FUN_10a6ae2ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a6ae2f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a6ae2fc; end: 10a6ae353;  */

long FUN_10a6ae2fc(long param_1)

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



/* Entry: 10a6ae354; end: 10a6ae44f;  */

undefined1  [16] FUN_10a6ae354(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c0c980;
  puVar1 = &UNK_10f66b8c1;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c0c980;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110bf6810;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a6ae450; end: 10a6ae50b;  */

void FUN_10a6ae450(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f66c4ac,0x17);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a6ae50c);
  (*pcVar4)();
}



/* Entry: 10a6ae50c; end: 10a6ae51b;  */

void FUN_10a6ae50c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c0de40;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a6ae51c; end: 10a6ae53b;  */

void FUN_10a6ae51c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c0de40;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6ae53c; end: 10a6ae54b;  */

void FUN_10a6ae53c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a6ae544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a6ae54c; end: 10a6ae647;  */

undefined1  [16] FUN_10a6ae54c(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c0c998;
  puVar1 = &UNK_10f66b8c1;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c0c998;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110bf6810;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}


