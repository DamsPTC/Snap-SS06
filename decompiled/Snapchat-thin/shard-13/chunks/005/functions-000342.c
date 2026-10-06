/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a724958; end: 10a7249ef;  */

void FUN_10a724958(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_30;
  long *plStack_28;
  
  func_0x00010989879c(&lStack_30);
  if ((lStack_30 != 0) &&
     (___dynamic_cast(lStack_30,&PTR_DAT_110b178e0,&PTR_DAT_110c25738,0), lStack_30 != 0)) {
    *param_1 = lStack_30;
    param_1[1] = (long)plStack_28;
    param_1 = &lStack_30;
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  return;
}



/* Entry: 10a7249f0; end: 10a724a23;  */

void FUN_10a7249f0(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x20);
  (**(code **)(param_1 + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x00010a724a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10a724a24; end: 10a724a3f;  */

void FUN_10a724a24(long param_1)

{
  (**(code **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a724a40; end: 10a724a77;  */

void FUN_10a724a40(long param_1)

{
  if (param_1 != 0) {
    FUN_10a0535c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a724a78; end: 10a724b03;  */

void FUN_10a724a78(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_10a6f41b8(param_1,&uStack_30);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a724b04; end: 10a724ba3;  */

undefined8 * FUN_10a724b04(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)0xb8;
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
  *puVar1 = &PTR_DAT_110be8e80;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x16) = 0;
  ppuVar2 = &PTR___tlv_bootstrap_11340dd98;
  (*(code *)PTR___tlv_bootstrap_11340dd98)();
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[4] = 0;
  FUN_109d18960(param_1,*ppuVar2,0);
  param_1[5] = puVar1;
  param_1[6] = puVar1;
  return param_1;
}



/* Entry: 10a724ba4; end: 10a724c87;  */

void FUN_10a724ba4(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plStack_28;
  
  plStack_28 = (long *)*param_2;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a724c88(param_1,&plStack_28);
  if (plStack_28 != (long *)0x0) {
    puVar2 = (ulong *)(plStack_28 + 1);
    do {
      uVar5 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar5 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar5 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plStack_28 + 8))();
      }
    }
  }
  return;
}



/* Entry: 10a724c88; end: 10a7251fb;  */

/* WARNING: Removing unreachable block (ram,0x00010a724dd0) */
/* WARNING: Removing unreachable block (ram,0x00010a724fe0) */
/* WARNING: Removing unreachable block (ram,0x00010a724d90) */
/* WARNING: Removing unreachable block (ram,0x00010a724f24) */

void FUN_10a724c88(long *param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_80;
  long lStack_78;
  long *plStack_70;
  code *pcStack_68;
  long *plStack_60;
  undefined **ppuStack_58;
  
  plVar4 = (long *)0x118;
  __Znwm();
  plVar4[2] = 0;
  plVar4[1] = 0x200000006;
  *(undefined2 *)(plVar4 + 3) = 4;
  plVar4[5] = 0;
  plVar4[4] = 0;
  plVar4[7] = 0;
  plVar4[6] = 0;
  plVar4[9] = 0;
  plVar4[8] = 0;
  plVar4[0xb] = 0;
  plVar4[10] = 0;
  plVar4[0xd] = 0;
  plVar4[0xc] = 0;
  plVar4[0xf] = 0;
  plVar4[0xe] = 0;
  plVar4[0x10] = 0;
  plVar4[0x11] = (long)(plVar4 + 3);
  plVar4[0x12] = 0;
  *(undefined1 *)(plVar4 + 0x13) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 0;
  *plVar4 = (long)&PTR_FUN_110c148a0;
  plVar9 = plVar4 + 0x16;
  *plVar9 = *param_3;
  *param_3 = 0;
  lVar5 = *param_2;
  plVar4[0x17] = lVar5;
  if (lVar5 != 0) {
    plVar10 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar4[0x1a] = 0;
  plVar4[0x1b] = 0x32aaaba7;
  plVar4[0x1d] = 0;
  plVar4[0x1c] = 0;
  plVar4[0x1f] = 0;
  plVar4[0x1e] = 0;
  plVar4[0x21] = 0;
  plVar4[0x20] = 0;
  plVar4[0x22] = 0;
  lStack_78 = 0;
  plVar4[0x18] = (long)plVar4;
  plVar4[0x19] = 0;
  plStack_70 = plVar9;
  if (((uint)*(undefined8 *)(plVar4[0x17] + 0x10) >> 1 & 1) == 0) {
    __ZNSt3__15mutex4lockEv(plVar4 + 0x1b);
    lVar5 = *plVar9;
    plVar10 = (long *)(lVar5 + 0x10);
    do {
      lVar7 = *plVar10;
      if (lVar7 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar7 = lVar5 + 0x18;
          pcStack_68 = FUN_10a7251fc;
          ppuStack_58 = &PTR_PTR_1132fed68;
          plStack_60 = plVar9;
          func_0x000109d1b588(lVar7,&pcStack_68);
          *(undefined8 *)(lVar5 + 0x10) = 0;
          plStack_70[3] = lVar7;
          lVar5 = plVar4[0x17];
          plVar10 = (long *)(lVar5 + 0x10);
          goto LAB_10a724f10;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar7 >> 1 & 1) == 0);
    plStack_70[3] = 0;
    lVar5 = plVar4[0x18];
    plVar10 = (long *)(lVar5 + 0x10);
    do {
      lVar7 = *plVar10;
      if (lVar7 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = 2;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          func_0x000109d1b4dc(lVar5 + 0x18);
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar7 >> 1 & 1) == 0);
    plVar10 = (long *)plVar4[0x17];
    plVar4[0x17] = 0;
    if (plVar10 != (long *)0x0) {
      puVar1 = (ulong *)(plVar10 + 1);
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
        (**(code **)(*plVar10 + 0x10))(plVar10);
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
          (**(code **)(*plVar10 + 8))(plVar10);
        }
      }
    }
    lVar5 = plVar4[0x18];
    plVar4[0x18] = 0;
    if (lVar5 != 0) {
      func_0x0001092b4274(plVar4 + 0x18);
    }
    *param_1 = *plVar9;
    *plVar9 = 0;
    plStack_80 = plVar4;
LAB_10a725150:
    __ZNSt3__15mutex6unlockEv(plVar4 + 0x1b);
  }
  else {
    lVar5 = plVar4[0x18];
    plVar10 = plVar4;
    FUN_109d1857c();
    func_0x000109d1b350(lVar5,plVar10);
    plVar10 = (long *)*plVar9;
    *plVar9 = 0;
    if (plVar10 != (long *)0x0) {
      puVar1 = (ulong *)(plVar10 + 1);
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
          (**(code **)(*plVar10 + 8))();
        }
      }
    }
    plVar9 = (long *)plVar4[0x17];
    plVar4[0x17] = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
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
        (**(code **)(*plVar9 + 0x10))(plVar9);
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
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
    lVar5 = plVar4[0x18];
    plVar4[0x18] = 0;
    if (lVar5 != 0) {
      func_0x0001092b4274(plVar4 + 0x18);
    }
    *param_1 = (long)plVar4;
    plStack_80 = (long *)0x0;
  }
  if (lStack_78 != 0) {
    func_0x0001092b4274(&lStack_78);
  }
  if (plStack_80 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_80 + 1);
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
        (**(code **)(*plStack_80 + 8))();
      }
    }
  }
  return;
LAB_10a724f10:
  do {
    lVar8 = *plVar10;
    if (lVar8 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar7 = lVar5 + 0x18;
        pcStack_68 = FUN_10a72530c;
        ppuStack_58 = &PTR_PTR_1132fed68;
        plStack_60 = plVar9;
        func_0x000109d1b588(lVar7,&pcStack_68);
        *(undefined8 *)(lVar5 + 0x10) = 0;
        plStack_70[4] = lVar7;
        *param_1 = (long)plVar4;
        goto LAB_10a72514c;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  } while (((uint)lVar8 >> 1 & 1) == 0);
  plStack_70[4] = 0;
  lVar5 = plVar4[0x18];
  FUN_109d1857c();
  func_0x000109d1b350(lVar5,lVar7);
  plVar10 = (long *)plVar4[0x17];
  plVar4[0x17] = 0;
  if (plVar10 != (long *)0x0) {
    puVar1 = (ulong *)(plVar10 + 1);
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
      (**(code **)(*plVar10 + 0x10))(plVar10);
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
        (**(code **)(*plVar10 + 8))(plVar10);
      }
    }
  }
  lVar7 = *plVar9;
  plVar10 = (long *)(lVar7 + 0x10);
  lVar5 = plStack_70[3];
  while (lVar8 = *plVar10, lVar8 != 0) {
    ClearExclusiveLocal();
LAB_10a724ff4:
    if (((uint)lVar8 >> 1 & 1) != 0) goto LAB_10a725144;
  }
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar3) {
    *plVar10 = 1;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 != '\0') goto LAB_10a724ff4;
  pcStack_68 = FUN_10a7251fc;
  ppuStack_58 = &PTR_PTR_1132fed68;
  plStack_60 = plVar9;
  FUN_109d1b624(lVar7 + 0x18,&pcStack_68,lVar5);
  *(undefined8 *)(lVar7 + 0x10) = 0;
  plStack_70[3] = 0;
  plVar10 = (long *)*plVar9;
  *plVar9 = 0;
  if (plVar10 != (long *)0x0) {
    puVar1 = (ulong *)(plVar10 + 1);
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
        (**(code **)(*plVar10 + 8))();
      }
    }
  }
  lVar5 = plVar4[0x18];
  plVar4[0x18] = 0;
  if (lVar5 != 0) {
    func_0x0001092b4274(plVar4 + 0x18);
  }
LAB_10a725144:
  *param_1 = (long)plVar4;
LAB_10a72514c:
  plStack_80 = (long *)0x0;
  goto LAB_10a725150;
}



/* Entry: 10a7251fc; end: 10a72530b;  */

void FUN_10a7251fc(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  code *pcStack_38;
  long *plStack_30;
  undefined **ppuStack_28;
  
  __ZNSt3__15mutex4lockEv(param_1 + 5);
  pcStack_38 = FUN_10a72530c;
  ppuStack_28 = &PTR_PTR_1132fed68;
  plStack_30 = param_1;
  func_0x0001092ba560(param_1 + 1,param_1 + 4,&pcStack_38);
  lVar7 = param_1[2];
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    func_0x0001092af8bc(param_1);
    if ((*(byte *)(*param_1 + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a725308);
      (*pcVar4)();
    }
    FUN_10a7257d0(lVar7,*param_1 + 0x98);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&pcStack_38,*param_1 + 0x90);
    func_0x000109d1b350(lVar7,&pcStack_38);
    __ZNSt13exception_ptrD1Ev(&pcStack_38);
  }
  plVar5 = (long *)*param_1;
  *param_1 = 0;
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
  func_0x00010a725760(param_1,param_1 + 3);
  return;
}



/* Entry: 10a72530c; end: 10a7253eb;  */

void FUN_10a72530c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x28);
  pcStack_48 = FUN_10a7251fc;
  ppuStack_38 = &PTR_PTR_1132fed68;
  lVar4 = param_1;
  lStack_40 = param_1;
  func_0x0001098adf90(param_1,param_1 + 0x18,&pcStack_48);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  FUN_109d1857c();
  func_0x000109d1b350(uVar6,lVar4);
  plVar7 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar7 != (long *)0x0) {
    puVar1 = (ulong *)(plVar7 + 1);
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
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
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  func_0x00010a725760(param_1,param_1 + 0x20);
  return;
}



/* Entry: 10a7253ec; end: 10a72545f;  */

long * FUN_10a7253ec(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (param_1[1] != 0) {
    func_0x0001092b4274();
  }
  plVar4 = (long *)*param_1;
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



/* Entry: 10a725460; end: 10a7256ab;  */

undefined8 * FUN_10a725460(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_110c148a0;
  __ZNSt3__15mutexD1Ev(param_1 + 0x1b);
  if (param_1[0x18] != 0) {
    func_0x0001092b4274();
  }
  plVar5 = (long *)param_1[0x17];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
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
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  plVar5 = (long *)param_1[0x16];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
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
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  *param_1 = &PTR_FUN_110c14868;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    FUN_10a22ffb4(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a7256ac; end: 10a7257cf;  */

undefined8 * FUN_10a7256ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c14868;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    FUN_10a22ffb4(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a7257d0; end: 10a725847;  */

undefined1 FUN_10a7257d0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = (long *)(param_1 + 0x10);
  do {
    lVar4 = *plVar1;
    if (lVar4 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_10a725848(param_1 + 0x98);
        *(undefined8 *)(param_1 + 0x10) = 2;
        FUN_109d1b4dc(param_1 + 0x18);
        return 1;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar4 >> 1 & 1) != 0) {
      return 0;
    }
  } while( true );
}



/* Entry: 10a725848; end: 10a7258a3;  */

void FUN_10a725848(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_1 + 2) == '\x01') {
    FUN_10a22ffb4();
    *(undefined1 *)(param_1 + 2) = 0;
  }
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
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
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10a7258a4; end: 10a72595b;  */

undefined1 FUN_10a7258a4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  plVar1 = (long *)(param_1 + 0x10);
  do {
    lVar4 = *plVar1;
    if (lVar4 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (*(char *)(param_1 + 0xb0) == '\x01') {
          if (*(char *)(param_1 + 0xaf) < '\0') {
            __ZdlPv(*(undefined8 *)(param_1 + 0x98));
          }
          *(undefined1 *)(param_1 + 0xb0) = 0;
        }
        uVar6 = param_2[1];
        uVar5 = *param_2;
        *(undefined8 *)(param_1 + 0xa8) = param_2[2];
        *(undefined8 *)(param_1 + 0xa0) = uVar6;
        *(undefined8 *)(param_1 + 0x98) = uVar5;
        param_2[1] = 0;
        param_2[2] = 0;
        *param_2 = 0;
        *(undefined1 *)(param_1 + 0xb0) = 1;
        *(undefined8 *)(param_1 + 0x10) = 2;
        FUN_109d1b4dc(param_1 + 0x18);
        return 1;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar4 >> 1 & 1) != 0) {
      return 0;
    }
  } while( true );
}



/* Entry: 10a72595c; end: 10a72596b;  */

void FUN_10a72595c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c14510;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a72596c; end: 10a72598b;  */

void FUN_10a72596c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c14510;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a72598c; end: 10a725a5f;  */

long FUN_10a72598c(long param_1)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    func_0x0001092b4274();
  }
  plVar5 = *(long **)(param_1 + 0x58);
  if (plVar5 != (long *)0x0) {
    puVar2 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0x50);
  if (plVar5 != (long *)0x0) {
    puVar2 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if (*(char *)(param_1 + 0x4f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x38));
  }
  func_0x00010a05a86c(param_1 + 0x28);
  plVar5 = *(long **)(param_1 + 0x20);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1 + 0x18;
}



/* Entry: 10a725a60; end: 10a725a63;  */

void FUN_10a725a60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a725a64; end: 10a725afb;  */

void FUN_10a725a64(undefined8 param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_2[1];
  lStack_30 = 0;
  if (*param_2 != 0) {
    lStack_30 = *param_2 + 0x10;
  }
  *param_2 = 0;
  param_2[1] = 0;
  FUN_10a6f41b8(param_1,&lStack_30);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a725afc; end: 10a725b3b;  */

undefined8 * FUN_10a725afc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = param_2[1];
  *param_1 = *param_2;
  if (lVar1 == 0) {
    param_1[1] = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      return param_1;
    }
  }
  puVar2 = (undefined8 *)0x0;
  FUN_10a043ecc();
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 4) = 0x3f800000;
  if (param_3 != 0) {
    param_3 = param_3 * 0x18;
    do {
      FUN_10a712f2c(puVar2,param_2,param_2);
      param_2 = param_2 + 3;
      param_3 = param_3 + -0x18;
    } while (param_3 != 0);
  }
  return puVar2;
}



/* Entry: 10a725b3c; end: 10a725bb3;  */

undefined8 * FUN_10a725b3c(undefined8 *param_1,long param_2,long param_3)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (param_3 != 0) {
    param_3 = param_3 * 0x18;
    do {
      FUN_10a712f2c(param_1,param_2,param_2);
      param_2 = param_2 + 0x18;
      param_3 = param_3 + -0x18;
    } while (param_3 != 0);
  }
  return param_1;
}



/* Entry: 10a725bb4; end: 10a725bc3;  */

void FUN_10a725bb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c14560;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a725bc4; end: 10a725be3;  */

void FUN_10a725bc4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c14560;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a725be4; end: 10a725c03;  */

void FUN_10a725be4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a725bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a725c04; end: 10a725c23;  */

void FUN_10a725c04(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c145b0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a725c24; end: 10a725c33;  */

void FUN_10a725c24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a725c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a725c34; end: 10a725ce3;  */

long FUN_10a725c34(long param_1)

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



/* Entry: 10a725ce4; end: 10a725cf3;  */

void FUN_10a725ce4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c14600;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a725cf4; end: 10a725d13;  */

void FUN_10a725cf4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c14600;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a725d14; end: 10a725d23;  */

void FUN_10a725d14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a725d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a725d24; end: 10a725dbf;  */

void FUN_10a725d24(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_4 != 0) {
    FUN_10a7063d8(param_1,param_4);
    puVar4 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar5 = param_2[1];
      uVar6 = *param_2;
      puVar4[1] = param_2[1];
      *puVar4 = uVar6;
      if (lVar5 != 0) {
        plVar1 = (long *)(lVar5 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar4 = puVar4 + 2;
    }
    *(undefined8 **)(param_1 + 8) = puVar4;
  }
  return;
}



/* Entry: 10a725dc0; end: 10a725f77;  */

long FUN_10a725dc0(long param_1)

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



/* Entry: 10a725f78; end: 10a7260db;  */

void FUN_10a725f78(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lStack_40;
  long *plStack_38;
  long *plStack_30;
  long *plStack_28;
  
  plVar3 = (long *)0x90;
  __Znwm();
  plVar4 = plVar3 + 1;
  *plVar4 = 0;
  *plVar3 = (long)&PTR_FUN_110b9fe30;
  lStack_40 = *param_2;
  plStack_30 = plVar3 + 3;
  plVar3[4] = param_2[1];
  *plStack_30 = lStack_40;
  plVar3[2] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[7] = 0x32aaaba7;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  plVar3[0x11] = 0;
  plVar3[0x10] = 0;
  *param_1 = lStack_40;
  param_1[1] = (long)plVar3;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plStack_38 = plVar3;
  plStack_28 = plVar3;
  func_0x00010a053e8c(plStack_30,&lStack_40);
  plVar3 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar4 = plStack_38 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  if (*plStack_30 != 0) {
    func_0x00010a053ee8(*plStack_30,&plStack_30);
  }
  plVar3 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar4 = plStack_28 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10a7260dc; end: 10a7261fb;  */

void FUN_10a7260dc(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = param_2[1];
  if ((lVar4 == 0) || (*(long *)(lVar4 + 8) == -1)) {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
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
      lVar4 = param_2[1];
    }
    *param_2 = param_3;
    param_2[1] = plVar5;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
  }
  return;
}



/* Entry: 10a7261fc; end: 10a72623b;  */

void FUN_10a7261fc(long param_1)

{
  FUN_10aa88d20(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a72623c; end: 10a726277;  */

long FUN_10a72623c(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c14690);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a726278; end: 10a72628b;  */

void FUN_10a726278(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a72628c; end: 10a7262ab;  */

void FUN_10a72628c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c146b0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7262ac; end: 10a7262cb;  */

void FUN_10a7262ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a7262b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a7262cc; end: 10a7262eb;  */

void FUN_10a7262cc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c14ce0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7262ec; end: 10a726313;  */

undefined1  [16] FUN_10a7262ec(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  bVar2 = *(byte *)(param_1 + 0x58);
  if (3 < (ulong)bVar2) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a726310);
    (*UNRECOVERED_JUMPTABLE)();
  }
  auVar10._8_8_ = (code **)(&PTR_FUN_110b9a040)[bVar2];
  puVar5 = (undefined8 *)(param_1 + 0x18);
  switch(bVar2) {
  case 0:
    auVar10._0_8_ = puVar5;
    return auVar10;
  case 1:
    puVar5 = (undefined8 *)(param_1 + 0x20);
    UNRECOVERED_JUMPTABLE = *(code **)*puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010a00496c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    auVar11._8_8_ = UNRECOVERED_JUMPTABLE;
    auVar11._0_8_ = puVar5;
    return auVar11;
  case 3:
    auVar12._8_8_ = auVar10._8_8_;
    auVar12._0_8_ = puVar5;
    return auVar12;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  if (((*ppuVar6 == (undefined *)0x0) &&
      (plVar7 = *(long **)(param_1 + 0x30), plVar7 != (long *)0x0)) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 != (long *)0x0)) {
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x870);
      uStack_60 = *(undefined8 *)(param_1 + 0x20);
      uStack_68 = *puVar5;
      *puVar5 = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      pcStack_78 = FUN_10a69fabc;
      ppuStack_70 = &PTR_DAT_110c0ce80;
      auVar10._8_8_ = &pcStack_78;
      FUN_10a4634ec(uVar8);
      (*(code *)*ppuStack_70)(&ppuStack_70);
    }
    plVar1 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a004dac(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar13._8_8_ = auVar10._8_8_;
    auVar13._0_8_ = puVar5;
    return auVar13;
  }
  ___stack_chk_fail();
  if ((int)auVar10._8_8_ == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  auVar14._8_8_ = 0x18;
  auVar14._0_8_ = &UNK_10f66c09c;
  return auVar14;
}



/* Entry: 10a726314; end: 10a726437;  */

void FUN_10a726314(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  
  uVar7 = *param_1;
  plVar2 = (long *)param_1[1];
  if (plVar2 == (long *)0x0) {
    lVar5 = *(long *)(param_2 + 0x10);
  }
  else {
    plVar6 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar5 = *(long *)(param_2 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar6 = *(long **)(lVar5 + 0x1e8);
  *(undefined8 *)(lVar5 + 0x1e0) = uVar7;
  *(long **)(lVar5 + 0x1e8) = plVar2;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f66fb16,&UNK_10f671e08,0x1c4,&UNK_10f671efa,in_x6,in_x7,uVar7);
  }
  if (plVar2 != (long *)0x0) {
    plVar6 = plVar2 + 1;
    do {
      lVar5 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar2);
      return;
    }
  }
  return;
}



/* Entry: 10a726438; end: 10a72646b;  */

void FUN_10a726438(void)

{
  return;
}



/* Entry: 10a72646c; end: 10a7264c3;  */

long FUN_10a72646c(long param_1)

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



/* Entry: 10a7264c4; end: 10a7264d3;  */

void FUN_10a7264c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c14d30;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a7264d4; end: 10a7264f3;  */

void FUN_10a7264d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c14d30;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7264f4; end: 10a72651b;  */

undefined1  [16] FUN_10a7264f4(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  bVar2 = *(byte *)(param_1 + 0x58);
  if (3 < (ulong)bVar2) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a726518);
    (*UNRECOVERED_JUMPTABLE)();
  }
  auVar10._8_8_ = (code **)(&PTR_FUN_110b9a040)[bVar2];
  puVar5 = (undefined8 *)(param_1 + 0x18);
  switch(bVar2) {
  case 0:
    auVar10._0_8_ = puVar5;
    return auVar10;
  case 1:
    puVar5 = (undefined8 *)(param_1 + 0x20);
    UNRECOVERED_JUMPTABLE = *(code **)*puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010a00496c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    auVar11._8_8_ = UNRECOVERED_JUMPTABLE;
    auVar11._0_8_ = puVar5;
    return auVar11;
  case 3:
    auVar12._8_8_ = auVar10._8_8_;
    auVar12._0_8_ = puVar5;
    return auVar12;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  if (((*ppuVar6 == (undefined *)0x0) &&
      (plVar7 = *(long **)(param_1 + 0x30), plVar7 != (long *)0x0)) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 != (long *)0x0)) {
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x870);
      uStack_60 = *(undefined8 *)(param_1 + 0x20);
      uStack_68 = *puVar5;
      *puVar5 = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      pcStack_78 = FUN_10a69fabc;
      ppuStack_70 = &PTR_DAT_110c0ce80;
      auVar10._8_8_ = &pcStack_78;
      FUN_10a4634ec(uVar8);
      (*(code *)*ppuStack_70)(&ppuStack_70);
    }
    plVar1 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a004dac(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar13._8_8_ = auVar10._8_8_;
    auVar13._0_8_ = puVar5;
    return auVar13;
  }
  ___stack_chk_fail();
  if ((int)auVar10._8_8_ == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  auVar14._8_8_ = 0x18;
  auVar14._0_8_ = &UNK_10f66c09c;
  return auVar14;
}



/* Entry: 10a72651c; end: 10a726d6f;  */

/* WARNING: Removing unreachable block (ram,0x00010a7269cc) */

void FUN_10a72651c(long *param_1,code **param_2,long param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  code *pcVar6;
  long *plVar7;
  long lVar8;
  code **ppcVar9;
  code cVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  code **ppcVar16;
  long *plVar17;
  long lVar18;
  code **ppcVar19;
  code *pcVar20;
  code **ppcVar21;
  code **unaff_x23;
  long lVar22;
  long lStack_150;
  long *plStack_148;
  long lStack_140;
  code **ppcStack_138;
  code *pcStack_130;
  long lStack_128;
  float fStack_120;
  code *pcStack_110;
  code *pcStack_108;
  code *pcStack_100;
  code *pcStack_f8;
  code *pcStack_f0;
  code *pcStack_e8;
  code *pcStack_e0;
  code *pcStack_d8;
  code *pcStack_d0;
  code *pcStack_c8;
  code *pcStack_c0;
  undefined **ppuStack_b8;
  code **ppcStack_b0;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = *(long *)(param_3 + 0x10);
  plVar7 = param_1;
  ppcVar9 = param_2;
  if ((bRam000000011330a9e8 & 1) != 0) {
    plVar7 = (long *)0x0;
    ppcVar9 = (code **)0x1;
    func_0x00010ae06f08(0,1,&UNK_10f66fb16,&UNK_10f671f37,0x230,&UNK_10f672020);
  }
  lVar11 = *(long *)(lVar18 + 0x1d0);
  lVar8 = *(long *)(lVar11 + 0x50);
  plVar13 = *(long **)(lVar11 + 0x58);
  if (plVar13 != (long *)0x0) {
    plVar15 = plVar13 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar3) {
        *plVar15 = *plVar15 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_150 = lVar8;
  plStack_148 = plVar13;
  if (lVar8 != 0) {
    lVar18 = *(long *)(lVar18 + 0x1d0);
    ppcStack_138 = (code **)0x0;
    lStack_140 = 0;
    lStack_128 = 0;
    pcStack_130 = (code *)0x0;
    fStack_120 = *(float *)(lVar8 + 0x38);
    ppcVar9 = *(code ***)(lVar8 + 0x20);
    FUN_10a726d70(&lStack_140);
    plVar7 = *(long **)(lVar8 + 0x28);
    pcVar6 = pcStack_130;
    if (plVar7 != (long *)0x0) {
      ppcVar21 = param_2;
      do {
        unaff_x23 = ppcStack_138;
        uVar12 = plVar7[2];
        uVar14 = ((ulong)(uint)((int)uVar12 << 3) + 8 ^ uVar12 >> 0x20) * -0x622015f714c7d297;
        uVar14 = (uVar12 >> 0x20 ^ uVar14 >> 0x2f ^ uVar14) * -0x622015f714c7d297;
        ppcVar19 = (code **)((uVar14 ^ uVar14 >> 0x2f) * -0x622015f714c7d297);
        if (ppcStack_138 != (code **)0x0) {
          uVar14 = (long)ppcStack_138 - 1;
          if (((ulong)ppcStack_138 & uVar14) == 0) {
            ppcVar21 = (code **)((ulong)ppcVar19 & uVar14);
          }
          else {
            ppcVar21 = ppcVar19;
            if (ppcStack_138 <= ppcVar19) {
              uVar5 = 0;
              if (ppcStack_138 != (code **)0x0) {
                uVar5 = (ulong)ppcVar19 / (ulong)ppcStack_138;
              }
              ppcVar21 = (code **)((long)ppcVar19 - uVar5 * (long)ppcStack_138);
            }
          }
          plVar15 = *(long **)(lStack_140 + (long)ppcVar21 * 8);
          if (plVar15 != (long *)0x0) {
            do {
              while( true ) {
                plVar15 = (long *)*plVar15;
                if (plVar15 == (long *)0x0) goto LAB_10a7266e8;
                ppcVar16 = (code **)plVar15[1];
                if (ppcVar16 != ppcVar19) break;
                if (plVar15[2] == uVar12) goto LAB_10a72685c;
              }
              if (((ulong)ppcStack_138 & uVar14) == 0) {
                ppcVar16 = (code **)((ulong)ppcVar16 & uVar14);
              }
              else if (ppcStack_138 <= ppcVar16) {
                uVar5 = 0;
                if (ppcStack_138 != (code **)0x0) {
                  uVar5 = (ulong)ppcVar16 / (ulong)ppcStack_138;
                }
                ppcVar16 = (code **)((long)ppcVar16 - uVar5 * (long)ppcStack_138);
              }
            } while (ppcVar16 == ppcVar21);
          }
        }
LAB_10a7266e8:
        pcVar6 = (code *)0x68;
        __Znwm();
        pcStack_100 = (code *)0x0;
        *(long *)pcVar6 = 0;
        *(code ***)(pcVar6 + 8) = ppcVar19;
        lVar11 = plVar7[3];
        lVar22 = plVar7[2];
        *(long *)(pcVar6 + 0x18) = plVar7[3];
        *(long *)(pcVar6 + 0x10) = lVar22;
        if (lVar11 != 0) {
          plVar15 = (long *)(lVar11 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar3) {
              *plVar15 = *plVar15 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        pcStack_c0 = pcVar6 + 0x20;
        pcVar6[0x60] = (code)0x3;
        pcStack_110 = pcVar6;
        pcStack_108 = (code *)&lStack_140;
        if ((char)plVar7[0xc] == '\0') {
          cVar10 = (code)0x0;
        }
        else {
          ppcVar9 = (code **)(plVar7 + 4);
          FUN_10a005398(&pcStack_c0);
          cVar10 = *(code *)(plVar7 + 0xc);
        }
        pcVar6[0x60] = cVar10;
        pcStack_100 = (code *)CONCAT71(pcStack_100._1_7_,1);
        if ((unaff_x23 == (code **)0x0) || (fStack_120 * (float)unaff_x23 < (float)(lStack_128 + 1))
           ) {
          uVar12 = 1;
          if ((code **)0x2 < unaff_x23) {
            uVar12 = (ulong)(((ulong)unaff_x23 & (long)unaff_x23 - 1U) != 0);
          }
          ppcVar9 = (code **)(uVar12 | (long)unaff_x23 << 1);
          ppcVar21 = (code **)(long)((float)(lStack_128 + 1) / fStack_120);
          if (ppcVar9 <= ppcVar21) {
            ppcVar9 = ppcVar21;
          }
          FUN_10a726d70(&lStack_140);
          unaff_x23 = ppcStack_138;
          if (((ulong)ppcStack_138 & (long)ppcStack_138 - 1U) == 0) {
            ppcVar21 = (code **)((long)ppcStack_138 - 1U & (ulong)ppcVar19);
          }
          else {
            ppcVar21 = ppcVar19;
            if (ppcStack_138 <= ppcVar19) {
              uVar12 = 0;
              if (ppcStack_138 != (code **)0x0) {
                uVar12 = (ulong)ppcVar19 / (ulong)ppcStack_138;
              }
              ppcVar21 = (code **)((long)ppcVar19 - uVar12 * (long)ppcStack_138);
            }
          }
        }
        plVar15 = *(long **)(lStack_140 + (long)ppcVar21 * 8);
        if (plVar15 == (long *)0x0) {
          *(code **)pcStack_110 = pcStack_130;
          pcStack_130 = pcStack_110;
          *(code ***)(lStack_140 + (long)ppcVar21 * 8) = &pcStack_130;
          if (*(long *)pcStack_110 != 0) {
            ppcVar19 = *(code ***)(*(long *)pcStack_110 + 8);
            if (((ulong)unaff_x23 & (long)unaff_x23 - 1U) == 0) {
              ppcVar19 = (code **)((ulong)ppcVar19 & (long)unaff_x23 - 1U);
            }
            else if (unaff_x23 <= ppcVar19) {
              uVar12 = 0;
              if (unaff_x23 != (code **)0x0) {
                uVar12 = (ulong)ppcVar19 / (ulong)unaff_x23;
              }
              ppcVar19 = (code **)((long)ppcVar19 - uVar12 * (long)unaff_x23);
            }
            *(code **)(lStack_140 + (long)ppcVar19 * 8) = pcStack_110;
          }
        }
        else {
          *(long *)pcStack_110 = *plVar15;
          *plVar15 = (long)pcStack_110;
        }
        lStack_128 = lStack_128 + 1;
LAB_10a72685c:
        plVar7 = (long *)*plVar7;
        pcVar6 = pcStack_130;
      } while (plVar7 != (long *)0x0);
    }
    for (; pcVar6 != (code *)0x0; pcVar6 = *(code **)pcVar6) {
      lVar11 = lVar8 + 0x18;
      ppcVar21 = (code **)(pcVar6 + 0x10);
      FUN_10a727088();
      ppcVar9 = ppcVar21;
      if (lVar11 != 0) {
        if (pcVar6[0x60] == (code)0x1) {
          pcVar20 = *(code **)(pcVar6 + 0x20);
          if (*(char *)((long)param_1 + 0x17) < '\0') {
            func_0x000107c3192c(&pcStack_110,*param_1,param_1[1]);
          }
          else {
            pcStack_108 = (code *)param_1[1];
            pcStack_110 = (code *)*param_1;
            pcStack_100 = (code *)param_1[2];
          }
          if (*(char *)((long)param_2 + 0x17) < '\0') {
            func_0x000107c3192c(&pcStack_c0,*param_2,param_2[1]);
          }
          else {
            ppuStack_b8 = (undefined **)param_2[1];
            pcStack_c0 = *param_2;
            ppcStack_b0 = (code **)param_2[2];
          }
          ppcVar9 = &pcStack_110;
          (*pcVar20)(lVar18 + 0x18,ppcVar9,&pcStack_c0,pcVar6 + 0x20);
          if ((long)pcStack_100 < 0) {
            __ZdlPv(pcStack_110);
          }
        }
        else if (pcVar6[0x60] == (code)0x2) {
          ppcVar19 = (code **)(pcVar6 + 0x20);
          FUN_10a688b40();
          if (ppcVar19 == (code **)0x0) {
            ppcVar9 = (code **)0x0;
            if (ppcVar21 != (code **)0x0) {
              pcStack_108 = *(code **)(pcVar6 + 0x28);
              pcStack_110 = *(code **)(pcVar6 + 0x20);
              if (*(long *)(pcVar6 + 0x28) != 0) {
                plVar7 = (long *)(*(long *)(pcVar6 + 0x28) + 8);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                  if (bVar3) {
                    *plVar7 = *plVar7 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              pcStack_f8 = *(code **)(lVar18 + 0x20);
              pcStack_100 = *(code **)(lVar18 + 0x18);
              if (*(long *)(lVar18 + 0x20) != 0) {
                plVar7 = (long *)(*(long *)(lVar18 + 0x20) + 8);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                  if (bVar3) {
                    *plVar7 = *plVar7 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              if (*(char *)((long)param_1 + 0x17) < '\0') {
                func_0x000107c3192c(&pcStack_f0,*param_1,param_1[1]);
              }
              else {
                pcStack_e8 = (code *)param_1[1];
                pcStack_f0 = (code *)*param_1;
                pcStack_e0 = (code *)param_1[2];
              }
              if (*(char *)((long)param_2 + 0x17) < '\0') {
                func_0x000107c3192c(&pcStack_d8,*param_2,param_2[1]);
              }
              else {
                pcStack_d0 = param_2[1];
                pcStack_d8 = *param_2;
                pcStack_c8 = param_2[2];
              }
              pcStack_c0 = FUN_10a72742c;
              ppuStack_b8 = &PTR_FUN_110c14710;
              unaff_x23 = (code **)0x50;
              __Znwm();
              pcVar1 = pcStack_108;
              pcVar20 = pcStack_110;
              pcStack_110 = (code *)0x0;
              pcStack_108 = (code *)0x0;
              unaff_x23[1] = pcVar1;
              *unaff_x23 = pcVar20;
              unaff_x23[3] = pcStack_f8;
              unaff_x23[2] = pcStack_100;
              if (pcStack_f8 != (code *)0x0) {
                pcVar20 = pcStack_f8 + 8;
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(pcVar20,0x10);
                  if (bVar3) {
                    *(long *)pcVar20 = *(long *)pcVar20 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              if ((long)pcStack_e0 < 0) {
                func_0x000107c3192c(unaff_x23 + 4,pcStack_f0,pcStack_e8);
              }
              else {
                unaff_x23[5] = pcStack_e8;
                unaff_x23[4] = pcStack_f0;
                unaff_x23[6] = pcStack_e0;
              }
              if ((long)pcStack_c8 < 0) {
                func_0x000107c3192c(unaff_x23 + 7,pcStack_d8,pcStack_d0);
              }
              else {
                unaff_x23[8] = pcStack_d0;
                unaff_x23[7] = pcStack_d8;
                unaff_x23[9] = pcStack_c8;
              }
              ppcVar9 = &pcStack_c0;
              ppcStack_b0 = unaff_x23;
              FUN_10a4634ec(ppcVar21);
              (*(code *)*ppuStack_b8)(&ppuStack_b8);
              if ((long)pcStack_c8 < 0) {
                __ZdlPv(pcStack_d8);
              }
              if ((long)pcStack_e0 < 0) {
                __ZdlPv(pcStack_f0);
              }
              pcVar20 = pcStack_f8;
              if (pcStack_f8 != (code *)0x0) {
                pcVar1 = pcStack_f8 + 8;
                do {
                  lVar11 = *(long *)pcVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
                  if (bVar3) {
                    *(long *)pcVar1 = lVar11 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (lVar11 == 0) {
                  (**(code **)(*(long *)pcStack_f8 + 0x10))(pcStack_f8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar20);
                }
              }
              pcVar20 = pcStack_108;
              if (pcStack_108 != (code *)0x0) {
                plVar7 = (long *)((long)pcStack_108 + 8);
                do {
                  lVar11 = *plVar7;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                  if (bVar3) {
                    *plVar7 = lVar11 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (lVar11 == 0) {
                  (**(code **)(*(long *)pcStack_108 + 0x10))(pcStack_108);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar20);
                }
              }
            }
          }
          else {
            *ppcVar19 = (code *)CONCAT44((int)((ulong)*ppcVar19 >> 0x20) + 1,(int)*ppcVar19 + 1);
            ppcVar9 = (code **)(lVar18 + 0x18);
            FUN_10a727160(*(long *)(pcVar6 + 0x20),ppcVar9,param_1,param_2);
            iVar4 = *(int *)((long)ppcVar19 + 4) + -1;
            *(int *)((long)ppcVar19 + 4) = iVar4;
            unaff_x23 = ppcVar19;
            if (iVar4 == 0) {
              *(undefined4 *)ppcVar19 = 0;
            }
          }
        }
      }
    }
    plVar7 = &lStack_140;
    func_0x00010a726fe8();
  }
  if (plVar13 == (long *)0x0) {
LAB_10a726b94:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
      return;
    }
  }
  else {
    plVar15 = plVar13 + 1;
    do {
      lVar18 = *plVar15;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar3) {
        *plVar15 = lVar18 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar18 != 0) goto LAB_10a726b94;
    plVar7 = plVar13;
    (**(code **)(*plVar13 + 0x10))();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar13);
      return;
    }
  }
  ___stack_chk_fail();
  if (*(char *)((long)unaff_x23 + 0x37) < '\0') {
    __ZdlPv(unaff_x23[4]);
  }
  FUN_10a0772f0(unaff_x23 + 2);
  func_0x00010a004dac(unaff_x23);
  __ZdlPv();
  FUN_10a7273e4(&pcStack_110);
  func_0x00010a726fe8(&lStack_140);
  FUN_10a7274b4(&lStack_150);
  __Unwind_Resume();
  if ((long)ppcVar9 - 1U == 0) {
    ppcVar9 = (code **)0x2;
  }
  else if (((ulong)ppcVar9 & (long)ppcVar9 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  ppcVar21 = (code **)plVar7[1];
  if (ppcVar21 < ppcVar9) {
LAB_10a726db8:
    if (ppcVar9 == (code **)0x0) {
      lVar18 = *plVar7;
      *plVar7 = 0;
      if (lVar18 != 0) {
        __ZdlPv();
      }
      plVar7[1] = 0;
    }
    else {
      if ((ulong)ppcVar9 >> 0x3d != 0) {
        func_0x000109ffded8();
        if ((char)plVar7[1] == '\x01') {
          if (3 < (ulong)*(byte *)(ppcVar9 + 0xc)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10a726fe8);
            (*pcVar6)();
          }
          (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(ppcVar9 + 0xc)])(ppcVar9 + 4);
          FUN_10a004978(ppcVar9 + 2);
        }
        else if (ppcVar9 == (code **)0x0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(ppcVar9);
        return;
      }
      lVar18 = (long)ppcVar9 << 3;
      __Znwm();
      lVar8 = *plVar7;
      *plVar7 = lVar18;
      if (lVar8 != 0) {
        __ZdlPv();
      }
      ppcVar21 = (code **)0x0;
      plVar7[1] = (long)ppcVar9;
      do {
        *(undefined8 *)(*plVar7 + (long)ppcVar21 * 8) = 0;
        ppcVar21 = (code **)((long)ppcVar21 + 1);
      } while (ppcVar9 != ppcVar21);
      plVar13 = (long *)plVar7[2];
      if (plVar13 != (long *)0x0) {
        ppcVar21 = (code **)plVar13[1];
        uVar12 = (long)ppcVar9 - 1;
        if (((ulong)ppcVar9 & uVar12) == 0) {
          ppcVar21 = (code **)((ulong)ppcVar21 & uVar12);
        }
        else if (ppcVar9 <= ppcVar21) {
          uVar14 = 0;
          if (ppcVar9 != (code **)0x0) {
            uVar14 = (ulong)ppcVar21 / (ulong)ppcVar9;
          }
          ppcVar21 = (code **)((long)ppcVar21 - uVar14 * (long)ppcVar9);
        }
        *(long **)(*plVar7 + (long)ppcVar21 * 8) = plVar7 + 2;
        plVar15 = (long *)*plVar13;
        while (plVar15 != (long *)0x0) {
          ppcVar19 = (code **)plVar15[1];
          if (((ulong)ppcVar9 & uVar12) == 0) {
            ppcVar19 = (code **)((ulong)ppcVar19 & uVar12);
          }
          else if (ppcVar9 <= ppcVar19) {
            uVar14 = 0;
            if (ppcVar9 != (code **)0x0) {
              uVar14 = (ulong)ppcVar19 / (ulong)ppcVar9;
            }
            ppcVar19 = (code **)((long)ppcVar19 - uVar14 * (long)ppcVar9);
          }
          plVar17 = plVar15;
          if (ppcVar19 != ppcVar21) {
            lVar18 = *plVar7;
            if (*(long *)(lVar18 + (long)ppcVar19 * 8) == 0) {
              *(long **)(lVar18 + (long)ppcVar19 * 8) = plVar13;
              ppcVar21 = ppcVar19;
            }
            else {
              *plVar13 = *plVar15;
              *plVar15 = **(undefined8 **)(lVar18 + (long)ppcVar19 * 8);
              **(long **)(lVar18 + (long)ppcVar19 * 8) = (long)plVar15;
              plVar17 = plVar13;
            }
          }
          plVar13 = plVar17;
          plVar15 = (long *)*plVar17;
        }
      }
    }
    return;
  }
  if (ppcVar9 < ppcVar21) {
    ppcVar19 = (code **)(long)((float)(ulong)plVar7[3] / *(float *)(plVar7 + 4));
    if ((ppcVar21 < (code **)0x3) || (((ulong)ppcVar21 & (long)ppcVar21 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((code **)0x1 < ppcVar19) {
      ppcVar19 = (code **)(1L << (-LZCOUNT((long)ppcVar19 + -1) & 0x3fU));
    }
    if (ppcVar9 <= ppcVar19) {
      ppcVar9 = ppcVar19;
    }
    if (ppcVar9 < ppcVar21) goto LAB_10a726db8;
  }
  return;
}



/* Entry: 10a726d70; end: 10a726e3f;  */

void FUN_10a726d70(long *param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar10 = param_1[1];
  if (uVar10 < param_2) {
LAB_10a726db8:
    if (param_2 == 0) {
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        func_0x000109ffded8();
        if ((char)param_1[1] == '\x01') {
          if (3 < (ulong)*(byte *)(param_2 + 0x60)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10a726fe8);
            (*pcVar2)();
          }
          (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_2 + 0x60)])(param_2 + 0x20);
          FUN_10a004978(param_2 + 0x10);
        }
        else if (param_2 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(param_2);
        return;
      }
      lVar3 = param_2 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar10 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar10 * 8) = 0;
        uVar10 = uVar10 + 1;
      } while (param_2 != uVar10);
      plVar6 = (long *)param_1[2];
      if (plVar6 != (long *)0x0) {
        uVar10 = plVar6[1];
        uVar5 = param_2 - 1;
        if ((param_2 & uVar5) == 0) {
          uVar10 = uVar10 & uVar5;
        }
        else if (param_2 <= uVar10) {
          uVar9 = 0;
          if (param_2 != 0) {
            uVar9 = uVar10 / param_2;
          }
          uVar10 = uVar10 - uVar9 * param_2;
        }
        *(long **)(*param_1 + uVar10 * 8) = param_1 + 2;
        plVar7 = (long *)*plVar6;
        while (plVar7 != (long *)0x0) {
          uVar9 = plVar7[1];
          if ((param_2 & uVar5) == 0) {
            uVar9 = uVar9 & uVar5;
          }
          else if (param_2 <= uVar9) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar9 / param_2;
            }
            uVar9 = uVar9 - uVar1 * param_2;
          }
          plVar8 = plVar7;
          if (uVar9 != uVar10) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + uVar9 * 8) == 0) {
              *(long **)(lVar3 + uVar9 * 8) = plVar6;
              uVar10 = uVar9;
            }
            else {
              *plVar6 = *plVar7;
              *plVar7 = **(undefined8 **)(lVar3 + uVar9 * 8);
              **(long **)(lVar3 + uVar9 * 8) = (long)plVar7;
              plVar8 = plVar6;
            }
          }
          plVar6 = plVar8;
          plVar7 = (long *)*plVar8;
        }
      }
    }
    return;
  }
  if (param_2 < uVar10) {
    uVar5 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar10 < 3) || ((uVar10 & uVar10 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar5) {
      uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
    }
    if (param_2 <= uVar5) {
      param_2 = uVar5;
    }
    if (param_2 < uVar10) goto LAB_10a726db8;
  }
  return;
}



/* Entry: 10a726e40; end: 10a72701f;  */

void FUN_10a726e40(long *param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  
  if (param_2 == 0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      if ((char)param_1[1] == '\x01') {
        if (3 < (ulong)*(byte *)(param_2 + 0x60)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10a726fe8);
          (*pcVar2)();
        }
        (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_2 + 0x60)])(param_2 + 0x20);
        FUN_10a004978(param_2 + 0x10);
      }
      else if (param_2 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_2);
      return;
    }
    lVar3 = param_2 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    uVar5 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (param_2 != uVar5);
    plVar7 = (long *)param_1[2];
    if (plVar7 != (long *)0x0) {
      uVar5 = plVar7[1];
      uVar6 = param_2 - 1;
      if ((param_2 & uVar6) == 0) {
        uVar5 = uVar5 & uVar6;
      }
      else if (param_2 <= uVar5) {
        uVar10 = 0;
        if (param_2 != 0) {
          uVar10 = uVar5 / param_2;
        }
        uVar5 = uVar5 - uVar10 * param_2;
      }
      *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
      plVar8 = (long *)*plVar7;
      while (plVar8 != (long *)0x0) {
        uVar10 = plVar8[1];
        if ((param_2 & uVar6) == 0) {
          uVar10 = uVar10 & uVar6;
        }
        else if (param_2 <= uVar10) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar10 / param_2;
          }
          uVar10 = uVar10 - uVar1 * param_2;
        }
        plVar9 = plVar8;
        if (uVar10 != uVar5) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + uVar10 * 8) == 0) {
            *(long **)(lVar3 + uVar10 * 8) = plVar7;
            uVar5 = uVar10;
          }
          else {
            *plVar7 = *plVar8;
            *plVar8 = **(undefined8 **)(lVar3 + uVar10 * 8);
            **(long **)(lVar3 + uVar10 * 8) = (long)plVar8;
            plVar9 = plVar7;
          }
        }
        plVar7 = plVar9;
        plVar8 = (long *)*plVar9;
      }
    }
  }
  return;
}



/* Entry: 10a727020; end: 10a727087;  */

void FUN_10a727020(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  
  while( true ) {
    if (param_2 == (long *)0x0) {
      return;
    }
    if (3 < (ulong)*(byte *)(param_2 + 0xc)) break;
    lVar2 = *param_2;
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_2 + 0xc)])(param_2 + 4);
    FUN_10a004978(param_2 + 2);
    __ZdlPv(param_2);
    param_2 = (long *)lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a727088);
  (*pcVar1)();
}



/* Entry: 10a727088; end: 10a72715f;  */

long * FUN_10a727088(long *param_1,ulong *param_2)

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



/* Entry: 10a727160; end: 10a7273e3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a727160(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  int aiStack_b0 [2];
  undefined8 *puStack_a8;
  undefined8 *apuStack_a0 [2];
  undefined4 uStack_90;
  undefined8 **ppuStack_88;
  int aiStack_80 [2];
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined8 ***pppuStack_58;
  undefined8 **ppuStack_50;
  undefined8 uStack_48;
  
  func_0x000109884c0c(apuStack_a0,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_b8,apuStack_a0,*param_1);
  if (apuStack_a0[0] != (undefined8 *)0x0) {
    (**(code **)*apuStack_a0[0])();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_c0);
  plVar4 = (long *)*param_1;
  FUN_10a080b34(apuStack_a0,plVar4,param_2);
  uVar1 = param_3[1];
  puVar2 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar2 = param_3;
  }
  (**(code **)(*plVar4 + 0x128))(&ppuStack_70,plVar4,puVar2,uVar1);
  uStack_90 = 6;
  ppuStack_88 = ppuStack_70;
  uVar1 = param_4[1];
  puVar2 = (undefined8 *)*param_4;
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_4 + 0x17);
    puVar2 = param_4;
  }
  (**(code **)(*plVar4 + 0x128))(&ppuStack_70,plVar4,puVar2,uVar1);
  aiStack_80[0] = 6;
  ppuStack_78 = ppuStack_70;
  ppuStack_50 = apuStack_a0;
  uStack_48 = 3;
  (**(code **)(*plVar4 + 0x58))(plVar4);
  ppuStack_70 = &puStack_b8;
  pppuStack_58 = &ppuStack_50;
  plStack_68 = plVar4;
  puStack_60 = (undefined1 *)&puStack_c0;
  func_0x0001098960c0(aiStack_b0);
  if ((3 < aiStack_b0[0]) && (puStack_a8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_a8)();
  }
  lVar3 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_80 + lVar3)) &&
       (*(undefined8 **)((long)&ppuStack_78 + lVar3) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&ppuStack_78 + lVar3))();
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != -0x30);
  if (puStack_c0 != (undefined8 *)0x0) {
    (**(code **)*puStack_c0)();
  }
  if (puStack_b8 != (undefined8 *)0x0) {
    (**(code **)*puStack_b8)();
  }
  return;
}



/* Entry: 10a7273e4; end: 10a72742b;  */

long FUN_10a7273e4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x4f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x38));
  }
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  FUN_10a0772f0(param_1 + 0x10);
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



/* Entry: 10a72742c; end: 10a72743f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a72742c(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  int aiStack_b0 [2];
  undefined8 *puStack_a8;
  undefined8 *apuStack_a0 [2];
  undefined4 uStack_90;
  undefined8 **ppuStack_88;
  int aiStack_80 [2];
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined8 ***pppuStack_58;
  undefined8 **ppuStack_50;
  undefined8 uStack_48;
  
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  puVar3 = (undefined8 *)*puVar4;
  func_0x000109884c0c(apuStack_a0,puVar3 + 1,*puVar3);
  func_0x000109884820(&puStack_b8,apuStack_a0,*puVar3);
  if (apuStack_a0[0] != (undefined8 *)0x0) {
    (**(code **)*apuStack_a0[0])();
  }
  (**(code **)(*(long *)*puVar3 + 0x30))(&puStack_c0);
  plVar6 = (long *)*puVar3;
  FUN_10a080b34(apuStack_a0,plVar6,puVar4 + 2);
  uVar1 = puVar4[5];
  plVar2 = (long *)puVar4[4];
  if (-1 < (char)*(byte *)((long)puVar4 + 0x37)) {
    uVar1 = (ulong)*(byte *)((long)puVar4 + 0x37);
    plVar2 = puVar4 + 4;
  }
  (**(code **)(*plVar6 + 0x128))(&ppuStack_70,plVar6,plVar2,uVar1);
  uStack_90 = 6;
  ppuStack_88 = ppuStack_70;
  uVar1 = puVar4[8];
  puVar3 = (undefined8 *)puVar4[7];
  if (-1 < (char)*(byte *)((long)puVar4 + 0x4f)) {
    uVar1 = (ulong)*(byte *)((long)puVar4 + 0x4f);
    puVar3 = puVar4 + 7;
  }
  (**(code **)(*plVar6 + 0x128))(&ppuStack_70,plVar6,puVar3,uVar1);
  aiStack_80[0] = 6;
  ppuStack_78 = ppuStack_70;
  ppuStack_50 = apuStack_a0;
  uStack_48 = 3;
  (**(code **)(*plVar6 + 0x58))(plVar6);
  ppuStack_70 = &puStack_b8;
  pppuStack_58 = &ppuStack_50;
  plStack_68 = plVar6;
  puStack_60 = (undefined1 *)&puStack_c0;
  func_0x0001098960c0(aiStack_b0);
  if ((3 < aiStack_b0[0]) && (puStack_a8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_a8)();
  }
  lVar5 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_80 + lVar5)) &&
       (*(undefined8 **)((long)&ppuStack_78 + lVar5) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&ppuStack_78 + lVar5))();
    }
    lVar5 = lVar5 + -0x10;
  } while (lVar5 != -0x30);
  if (puStack_c0 != (undefined8 *)0x0) {
    (**(code **)*puStack_c0)();
  }
  if (puStack_b8 != (undefined8 *)0x0) {
    (**(code **)*puStack_b8)();
  }
  return;
}



/* Entry: 10a727440; end: 10a72749b;  */

void FUN_10a727440(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x4f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x38));
    }
    if (*(char *)(lVar1 + 0x37) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x20));
    }
    FUN_10a0772f0(lVar1 + 0x10);
    func_0x00010a004dac(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a72749c; end: 10a7274b3;  */

void FUN_10a72749c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a7274b4; end: 10a72750b;  */

long FUN_10a7274b4(long param_1)

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



/* Entry: 10a72750c; end: 10a72754f;  */

void FUN_10a72750c(void)

{
  return;
}



/* Entry: 10a727550; end: 10a72756f;  */

void FUN_10a727550(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c14818;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a727570; end: 10a72757f;  */

void FUN_10a727570(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a727578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a727580; end: 10a7275d7;  */

long FUN_10a727580(long param_1)

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



/* Entry: 10a7275d8; end: 10a7275e7;  */

void FUN_10a7275d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c14758;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a7275e8; end: 10a727607;  */

void FUN_10a7275e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c14758;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a727608; end: 10a727617;  */

void FUN_10a727608(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a727610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a727618; end: 10a72766f;  */

long FUN_10a727618(long param_1)

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



/* Entry: 10a727670; end: 10a72773f;  */

void FUN_10a727670(long *param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar10 = param_1[1];
  if (uVar10 < param_2) {
LAB_10a7276b8:
    if (param_2 == 0) {
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        func_0x000109ffded8();
        if ((char)param_1[1] == '\x01') {
          if (3 < (ulong)*(byte *)(param_2 + 0x60)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10a7278e8);
            (*pcVar2)();
          }
          (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_2 + 0x60)])(param_2 + 0x20);
          FUN_10a004978(param_2 + 0x10);
        }
        else if (param_2 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(param_2);
        return;
      }
      lVar3 = param_2 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar10 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar10 * 8) = 0;
        uVar10 = uVar10 + 1;
      } while (param_2 != uVar10);
      plVar6 = (long *)param_1[2];
      if (plVar6 != (long *)0x0) {
        uVar10 = plVar6[1];
        uVar5 = param_2 - 1;
        if ((param_2 & uVar5) == 0) {
          uVar10 = uVar10 & uVar5;
        }
        else if (param_2 <= uVar10) {
          uVar9 = 0;
          if (param_2 != 0) {
            uVar9 = uVar10 / param_2;
          }
          uVar10 = uVar10 - uVar9 * param_2;
        }
        *(long **)(*param_1 + uVar10 * 8) = param_1 + 2;
        plVar7 = (long *)*plVar6;
        while (plVar7 != (long *)0x0) {
          uVar9 = plVar7[1];
          if ((param_2 & uVar5) == 0) {
            uVar9 = uVar9 & uVar5;
          }
          else if (param_2 <= uVar9) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar9 / param_2;
            }
            uVar9 = uVar9 - uVar1 * param_2;
          }
          plVar8 = plVar7;
          if (uVar9 != uVar10) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + uVar9 * 8) == 0) {
              *(long **)(lVar3 + uVar9 * 8) = plVar6;
              uVar10 = uVar9;
            }
            else {
              *plVar6 = *plVar7;
              *plVar7 = **(undefined8 **)(lVar3 + uVar9 * 8);
              **(long **)(lVar3 + uVar9 * 8) = (long)plVar7;
              plVar8 = plVar6;
            }
          }
          plVar6 = plVar8;
          plVar7 = (long *)*plVar8;
        }
      }
    }
    return;
  }
  if (param_2 < uVar10) {
    uVar5 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar10 < 3) || ((uVar10 & uVar10 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar5) {
      uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
    }
    if (param_2 <= uVar5) {
      param_2 = uVar5;
    }
    if (param_2 < uVar10) goto LAB_10a7276b8;
  }
  return;
}



/* Entry: 10a727740; end: 10a72791f;  */

void FUN_10a727740(long *param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  
  if (param_2 == 0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      if ((char)param_1[1] == '\x01') {
        if (3 < (ulong)*(byte *)(param_2 + 0x60)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10a7278e8);
          (*pcVar2)();
        }
        (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_2 + 0x60)])(param_2 + 0x20);
        FUN_10a004978(param_2 + 0x10);
      }
      else if (param_2 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_2);
      return;
    }
    lVar3 = param_2 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    uVar5 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (param_2 != uVar5);
    plVar7 = (long *)param_1[2];
    if (plVar7 != (long *)0x0) {
      uVar5 = plVar7[1];
      uVar6 = param_2 - 1;
      if ((param_2 & uVar6) == 0) {
        uVar5 = uVar5 & uVar6;
      }
      else if (param_2 <= uVar5) {
        uVar10 = 0;
        if (param_2 != 0) {
          uVar10 = uVar5 / param_2;
        }
        uVar5 = uVar5 - uVar10 * param_2;
      }
      *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
      plVar8 = (long *)*plVar7;
      while (plVar8 != (long *)0x0) {
        uVar10 = plVar8[1];
        if ((param_2 & uVar6) == 0) {
          uVar10 = uVar10 & uVar6;
        }
        else if (param_2 <= uVar10) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar10 / param_2;
          }
          uVar10 = uVar10 - uVar1 * param_2;
        }
        plVar9 = plVar8;
        if (uVar10 != uVar5) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + uVar10 * 8) == 0) {
            *(long **)(lVar3 + uVar10 * 8) = plVar7;
            uVar5 = uVar10;
          }
          else {
            *plVar7 = *plVar8;
            *plVar8 = **(undefined8 **)(lVar3 + uVar10 * 8);
            **(long **)(lVar3 + uVar10 * 8) = (long)plVar8;
            plVar9 = plVar7;
          }
        }
        plVar7 = plVar9;
        plVar8 = (long *)*plVar9;
      }
    }
  }
  return;
}



/* Entry: 10a727920; end: 10a727987;  */

void FUN_10a727920(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  
  while( true ) {
    if (param_2 == (long *)0x0) {
      return;
    }
    if (3 < (ulong)*(byte *)(param_2 + 0xc)) break;
    lVar2 = *param_2;
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_2 + 0xc)])(param_2 + 4);
    FUN_10a004978(param_2 + 2);
    __ZdlPv(param_2);
    param_2 = (long *)lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a727988);
  (*pcVar1)();
}



/* Entry: 10a727988; end: 10a727a5f;  */

long * FUN_10a727988(long *param_1,ulong *param_2)

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



/* Entry: 10a727a60; end: 10a727ca7;  */

void FUN_10a727a60(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  int aiStack_90 [2];
  undefined8 *puStack_88;
  undefined *apuStack_80 [2];
  int aiStack_70 [2];
  long lStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_98,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_a0);
  plVar6 = (long *)*param_1;
  FUN_10a080b34(apuStack_80,plVar6,param_2);
  plStack_58 = (long *)param_3[1];
  ppuStack_60 = (undefined8 **)*param_3;
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
  ppuStack_40 = &PTR_DAT_110c235b0;
  func_0x000109899de4(aiStack_70,plVar6,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  ppuStack_40 = apuStack_80;
  uStack_38 = 2;
  (**(code **)(*plVar6 + 0x58))(plVar6);
  ppuStack_60 = &puStack_98;
  plStack_58 = plVar6;
  puStack_50 = (undefined1 *)&puStack_a0;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_90);
  if ((3 < aiStack_90[0]) && (puStack_88 != (undefined8 *)0x0)) {
    (**(code **)*puStack_88)();
  }
  lVar5 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_70 + lVar5)) &&
       (*(undefined8 **)((long)&lStack_68 + lVar5) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_68 + lVar5))();
    }
    lVar5 = lVar5 + -0x10;
  } while (lVar5 != -0x20);
  if (puStack_a0 != (undefined8 *)0x0) {
    (**(code **)*puStack_a0)();
  }
  if (puStack_98 != (undefined8 *)0x0) {
    (**(code **)*puStack_98)();
  }
  return;
}



/* Entry: 10a727ca8; end: 10a727cd7;  */

long FUN_10a727ca8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a727618(param_1 + 0x20);
  FUN_10a0772f0(param_1 + 0x10);
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



/* Entry: 10a727cd8; end: 10a727ceb;  */

void FUN_10a727cd8(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  int aiStack_90 [2];
  undefined8 *puStack_88;
  undefined *apuStack_80 [2];
  int aiStack_70 [2];
  long lStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar5 + 1,*puVar5);
  func_0x000109884820(&puStack_98,&ppuStack_60,*puVar5);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar5 + 0x30))(&puStack_a0);
  plVar7 = (long *)*puVar5;
  FUN_10a080b34(apuStack_80,plVar7,param_1 + 0x20);
  plStack_58 = *(long **)(param_1 + 0x38);
  ppuStack_60 = *(undefined8 ***)(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x38) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110c235b0;
  func_0x000109899de4(aiStack_70,plVar7,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  ppuStack_40 = apuStack_80;
  uStack_38 = 2;
  (**(code **)(*plVar7 + 0x58))(plVar7);
  ppuStack_60 = &puStack_98;
  plStack_58 = plVar7;
  puStack_50 = (undefined1 *)&puStack_a0;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_90);
  if ((3 < aiStack_90[0]) && (puStack_88 != (undefined8 *)0x0)) {
    (**(code **)*puStack_88)();
  }
  lVar6 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_70 + lVar6)) &&
       (*(undefined8 **)((long)&lStack_68 + lVar6) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_68 + lVar6))();
    }
    lVar6 = lVar6 + -0x10;
  } while (lVar6 != -0x20);
  if (puStack_a0 != (undefined8 *)0x0) {
    (**(code **)*puStack_a0)();
  }
  if (puStack_98 != (undefined8 *)0x0) {
    (**(code **)*puStack_98)();
  }
  return;
}



/* Entry: 10a727cec; end: 10a727d1b;  */

long FUN_10a727cec(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a727618(param_1 + 0x28);
  FUN_10a0772f0(param_1 + 0x18);
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



/* Entry: 10a727d1c; end: 10a727d7f;  */

void FUN_10a727d1c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c14798;
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar4 = *(long *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
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
  lVar4 = *(long *)(param_2 + 0x30);
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  param_1[5] = uVar5;
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



/* Entry: 10a727d80; end: 10a727ebf;  */

long FUN_10a727d80(long param_1)

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



/* Entry: 10a727ec0; end: 10a72816b;  */

void FUN_10a727ec0(long param_1)

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
  undefined8 uStack_70;
  long lStack_68;
  undefined8 auStack_60 [5];
  long lStack_38;
  
  if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
    func_0x0001092ba17c(auStack_60);
    if (lStack_38 != 0) {
      plVar6 = (long *)(lStack_38 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *(long *)(param_1 + 0x68) = lStack_38;
    func_0x0001092ba100(auStack_60);
    func_0x000109d1a1d0(auStack_60);
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x68);
    plVar6 = (long *)(*(long *)(param_1 + 0x68) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x78) = 1;
      lVar9 = *(long *)(param_1 + 0x58);
      plVar6 = (long *)(lVar9 + 0x10);
      auStack_60[0] = *(undefined8 *)(param_1 + 0x18);
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
            uStack_70 = 0;
            lStack_68 = param_1;
            func_0x000109d1b588(lVar9 + 0x18,&uStack_70);
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
  plVar6 = *(long **)(param_1 + 0x58);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x10) >> 5 & 1) == 0) {
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
    plVar6 = *(long **)(param_1 + 0x68);
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
    __ZdlPv(param_1);
    return;
  }
  func_0x0001092af97c(plVar6 + 0x12);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a7280b0);
  (*pcVar5)();
}



/* Entry: 10a72816c; end: 10a728277;  */

void FUN_10a72816c(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  
  if (*(char *)(param_1 + 0x78) == '\x01') {
    plVar5 = *(long **)(param_1 + 0x58);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
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
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x68);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
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
        if (uVar7 == 1) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    lVar6 = 0x50;
  }
  else {
    lVar6 = 0x70;
  }
  plVar5 = *(long **)(param_1 + lVar6);
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar5 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
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



/* Entry: 10a728278; end: 10a728513;  */

void FUN_10a728278(long param_1)

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
    FUN_10a6fc1a8(param_1 + 0x70,param_1 + 0x48);
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
  lVar9 = *(long *)(param_1 + 0x60);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar9 + 0xa8) & 1) != 0) {
      FUN_10a6fc0e8(param_1 + 0x10,lVar9 + 0x98);
      plVar6 = *(long **)(param_1 + 0x60);
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
  }
  else {
    func_0x0001092af97c(lVar9 + 0x90);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a728450);
  (*pcVar5)();
}



/* Entry: 10a728514; end: 10a72862b;  */

void FUN_10a728514(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  
  if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
    plVar5 = *(long **)(param_1 + 0x50);
    if (plVar5 == (long *)0x0) goto LAB_10a728614;
    plVar2 = plVar5 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    plVar5 = *(long **)(param_1 + 0x60);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
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
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x70);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
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
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x50);
    if (plVar5 == (long *)0x0) goto LAB_10a728614;
    plVar2 = plVar5 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
LAB_10a728614:
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a72862c; end: 10a7288d7;  */

void FUN_10a72862c(long param_1)

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
  undefined8 uStack_70;
  long lStack_68;
  undefined8 auStack_60 [5];
  long lStack_38;
  
  if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
    func_0x0001092ba17c(auStack_60);
    if (lStack_38 != 0) {
      plVar6 = (long *)(lStack_38 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *(long *)(param_1 + 0x68) = lStack_38;
    func_0x0001092ba100(auStack_60);
    func_0x000109d1a1d0(auStack_60);
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x68);
    plVar6 = (long *)(*(long *)(param_1 + 0x68) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x78) = 1;
      lVar9 = *(long *)(param_1 + 0x58);
      plVar6 = (long *)(lVar9 + 0x10);
      auStack_60[0] = *(undefined8 *)(param_1 + 0x18);
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
            uStack_70 = 0;
            lStack_68 = param_1;
            func_0x000109d1b588(lVar9 + 0x18,&uStack_70);
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
  plVar6 = *(long **)(param_1 + 0x58);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x10) >> 5 & 1) == 0) {
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
    plVar6 = *(long **)(param_1 + 0x68);
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
    __ZdlPv(param_1);
    return;
  }
  func_0x0001092af97c(plVar6 + 0x12);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a72881c);
  (*pcVar5)();
}



/* Entry: 10a7288d8; end: 10a7289e3;  */

void FUN_10a7288d8(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  
  if (*(char *)(param_1 + 0x78) == '\x01') {
    plVar5 = *(long **)(param_1 + 0x58);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
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
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x68);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
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
        if (uVar7 == 1) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    lVar6 = 0x50;
  }
  else {
    lVar6 = 0x70;
  }
  plVar5 = *(long **)(param_1 + lVar6);
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar5 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
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



/* Entry: 10a7289e4; end: 10a728d3b;  */

void FUN_10a7289e4(long param_1)

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
  undefined8 uVar10;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  plVar6 = *(long **)(param_1 + 0x90);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(plVar6 + 0x15) & 1) != 0) {
      lVar7 = plVar6[0x14];
      lVar9 = plVar6[0x13];
      *(long *)(param_1 + 0x60) = plVar6[0x14];
      *(long *)(param_1 + 0x58) = lVar9;
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
      *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x60);
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x58);
      if (*(long *)(param_1 + 0x60) != 0) {
        plVar6 = (long *)(*(long *)(param_1 + 0x60) + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = *plVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lVar9 = *(long *)(param_1 + 0x98);
      lVar7 = *(long *)(lVar9 + 0x10);
      uVar10 = *(undefined8 *)(lVar9 + 8);
      *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(lVar9 + 0x10);
      *(undefined8 *)(param_1 + 0x78) = uVar10;
      if (lVar7 != 0) {
        plVar6 = (long *)(lVar7 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = *plVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_10a6d9d58(auStack_30,param_1 + 0x68,param_1 + 0x78);
      FUN_10a6d9c98(param_1 + 0x10,auStack_30);
      if (plStack_28 != (long *)0x0) {
        plVar6 = plStack_28 + 1;
        do {
          lVar7 = *plVar6;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_28 + 0x10))(plStack_28);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
        }
      }
      plVar6 = *(long **)(param_1 + 0x80);
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
      plVar6 = *(long **)(param_1 + 0x70);
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
      plVar6 = *(long **)(param_1 + 0x60);
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
      plVar6 = *(long **)(param_1 + 0x88);
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
      func_0x000109d1a1d0(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_1);
      return;
    }
  }
  else {
    func_0x0001092af97c(plVar6 + 0x12);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a728c68);
  (*pcVar5)();
}



/* Entry: 10a728d3c; end: 10a728e2b;  */

void FUN_10a728d3c(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  plVar5 = *(long **)(param_1 + 0x90);
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
  plVar5 = *(long **)(param_1 + 0x88);
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
  func_0x000109d1a1d0(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a728e2c; end: 10a72940b;  */

void FUN_10a728e2c(long param_1)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  
  if ((*(byte *)(param_1 + 0xc0) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0xb8);
    lVar9 = *(long *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x70);
    *(long *)(param_1 + 0x88) = lVar9;
    if (lVar9 != 0) {
      plVar6 = (long *)(lVar9 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a6d9404(param_1 + 0xa8,*(undefined8 *)(param_1 + 0xb0),param_1 + 0x80);
    FUN_10a6da07c(param_1 + 0xa0,param_1 + 0x90,*(undefined8 *)(param_1 + 0xa8));
    *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0xa0);
    plVar6 = (long *)(*(long *)(param_1 + 0xa0) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x98) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xc0) = 1;
      lVar9 = *(long *)(param_1 + 0x98);
      plVar6 = (long *)(lVar9 + 0x10);
      uStack_60 = *(undefined8 *)(param_1 + 0x18);
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
            uStack_70 = 0;
            lStack_68 = param_1;
            func_0x000109d1b588(lVar9 + 0x18,&uStack_70);
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
  plVar6 = *(long **)(param_1 + 0x98);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x98) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(plVar6 + 0x15) & 1) != 0) {
      lVar9 = plVar6[0x14];
      lVar8 = plVar6[0x13];
      *(long *)(param_1 + 0x78) = plVar6[0x14];
      *(long *)(param_1 + 0x70) = lVar8;
      if (lVar9 != 0) {
        plVar1 = (long *)(lVar9 + 8);
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
        uVar7 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar7 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        do {
          uVar7 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar7 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
      plVar6 = *(long **)(param_1 + 0xa0);
      if (plVar6 != (long *)0x0) {
        puVar2 = (ulong *)(plVar6 + 1);
        do {
          uVar7 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar7 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar7 & 0x1fffffffc) == 4) {
          do {
            uVar7 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar7 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar7 - 1 == 0) {
            (**(code **)(*plVar6 + 8))();
          }
        }
      }
      plVar6 = *(long **)(param_1 + 0xa8);
      if (plVar6 != (long *)0x0) {
        puVar2 = (ulong *)(plVar6 + 1);
        do {
          uVar7 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar7 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar7 & 0x1fffffffc) == 4) {
          do {
            uVar7 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar7 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar7 - 1 == 0) {
            (**(code **)(*plVar6 + 8))();
          }
        }
      }
      plVar6 = *(long **)(param_1 + 0x88);
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6 + 1;
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
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      FUN_10a6da600(&lStack_50,*(undefined8 *)(param_1 + 0x70));
      uStack_58 = 0;
      *(long *)(param_1 + 0x50) = lStack_48;
      *(long *)(param_1 + 0x48) = lStack_50;
      *(undefined8 *)(param_1 + 0x58) = uStack_40;
      lStack_50 = 0;
      lStack_48 = 0;
      uStack_40 = 0;
      FUN_10a6fc658(&uStack_70,&uStack_70,param_1 + 0x48);
      if (*(long *)(param_1 + 0x48) != 0) {
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x48);
        __ZdlPv();
      }
      FUN_10a6db2e4(param_1 + 0x10,&uStack_70);
      FUN_10a6fc01c(&uStack_70);
      if (lStack_50 != 0) {
        lStack_48 = lStack_50;
        __ZdlPv();
      }
      plVar6 = *(long **)(param_1 + 0x78);
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6 + 1;
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
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      plVar6 = *(long **)(param_1 + 0x90);
      if (plVar6 != (long *)0x0) {
        puVar2 = (ulong *)(plVar6 + 1);
        do {
          uVar7 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar7 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar7 & 0x1fffffffc) == 4) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          do {
            uVar7 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar7 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar7 - 1 == 0) {
            (**(code **)(*plVar6 + 8))(plVar6);
          }
        }
      }
      func_0x000109d1a1d0(param_1 + 0x10);
      plVar6 = *(long **)(param_1 + 0x68);
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6 + 1;
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
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      __ZdlPv(param_1);
      return;
    }
  }
  else {
    func_0x0001092af97c(plVar6 + 0x12);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a72926c);
  (*pcVar5)();
}



/* Entry: 10a72940c; end: 10a729633;  */

void FUN_10a72940c(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  if ((*(byte *)(param_1 + 0xc0) & 1) == 0) {
    plVar5 = *(long **)(param_1 + 0x70);
    if (plVar5 == (long *)0x0) goto LAB_10a7295e0;
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
    if ((uVar6 & 0x1fffffffc) != 4) goto LAB_10a7295e0;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    do {
      uVar6 = *puVar1 - 1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    plVar5 = *(long **)(param_1 + 0x98);
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
    plVar5 = *(long **)(param_1 + 0xa0);
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
    plVar5 = *(long **)(param_1 + 0xa8);
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
    plVar5 = *(long **)(param_1 + 0x88);
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
    plVar5 = *(long **)(param_1 + 0x90);
    if (plVar5 == (long *)0x0) goto LAB_10a7295e0;
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
    if ((uVar6 & 0x1fffffffc) != 4) goto LAB_10a7295e0;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    do {
      uVar6 = *puVar1 - 1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (uVar6 == 0) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
LAB_10a7295e0:
  func_0x000109d1a1d0(param_1 + 0x10);
  plVar5 = *(long **)(param_1 + 0x68);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a729634; end: 10a729bdf;  */

void FUN_10a729634(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  puVar1 = (undefined8 *)(param_1 + 0x90);
  if ((*(byte *)(param_1 + 0xf0) & 1) == 0) {
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0x48);
    FUN_10a6d937c(param_1 + 0x68,*(undefined8 *)(param_1 + 0xe0));
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    FUN_10a6d878c(puVar1,*(undefined8 *)(param_1 + 0xe0),param_1 + 0xa0);
    plVar11 = *(long **)(param_1 + 0xa8);
    if (plVar11 != (long *)0x0) {
      plVar2 = plVar11 + 1;
      do {
        lVar7 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0xb0) = *puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    FUN_10a6d8be4(param_1 + 0xd8,param_1 + 0x68,param_1 + 0xb0);
    FUN_10a6d8b00(param_1 + 0xd0,param_1 + 0xc0,param_1 + 0xd8);
    *(long *)(param_1 + 200) = *(long *)(param_1 + 0xd0);
    plVar11 = (long *)(*(long *)(param_1 + 0xd0) + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = *plVar11 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 200) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xf0) = 1;
      lVar7 = *(long *)(param_1 + 200);
      plVar11 = (long *)(lVar7 + 0x10);
      uVar8 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar10 = *plVar11;
        if (lVar10 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *plVar11 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lStack_48 = 0;
            lStack_40 = param_1;
            uStack_38 = uVar8;
            func_0x000109d1b588(lVar7 + 0x18,&lStack_48);
            *(undefined8 *)(lVar7 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar10 >> 1 & 1) == 0);
    }
  }
  lVar7 = *(long *)(param_1 + 200);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 200) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar7 + 0xb8) & 1) != 0) {
      FUN_10a6fbf78(param_1 + 0x48,lVar7 + 0x98);
      plVar11 = *(long **)(param_1 + 200);
      if (plVar11 != (long *)0x0) {
        puVar3 = (ulong *)(plVar11 + 1);
        do {
          uVar9 = *puVar3;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar5) {
            *puVar3 = uVar9 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar5) {
              *puVar3 = uVar9 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar11 + 8))();
          }
        }
      }
      plVar11 = *(long **)(param_1 + 0xd0);
      if (plVar11 != (long *)0x0) {
        puVar3 = (ulong *)(plVar11 + 1);
        do {
          uVar9 = *puVar3;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar5) {
            *puVar3 = uVar9 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar5) {
              *puVar3 = uVar9 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar11 + 8))();
          }
        }
      }
      plVar11 = *(long **)(param_1 + 0xd8);
      if (plVar11 != (long *)0x0) {
        puVar3 = (ulong *)(plVar11 + 1);
        do {
          uVar9 = *puVar3;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar5) {
            *puVar3 = uVar9 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar5) {
              *puVar3 = uVar9 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar11 + 8))();
          }
        }
      }
      plVar11 = *(long **)(param_1 + 0xb8);
      if (plVar11 != (long *)0x0) {
        plVar2 = plVar11 + 1;
        do {
          lVar7 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar7 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      if (*(int *)(param_1 + 0x60) == 2) {
        lStack_40 = 0;
        uStack_38 = 0;
        lStack_48 = 0;
        func_0x000107c2b048(&lStack_48,*(long *)(param_1 + 0x48),*(long *)(param_1 + 0x50),
                            *(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48));
        FUN_10a6d9290(param_1 + 0x10,&lStack_48);
        if (lStack_48 != 0) {
          lStack_40 = lStack_48;
          __ZdlPv();
        }
      }
      else {
        FUN_10a6d86cc(param_1 + 0x10);
      }
      FUN_10a6fc01c(param_1 + 0x48);
      plVar11 = *(long **)(param_1 + 0x98);
      if (plVar11 != (long *)0x0) {
        plVar2 = plVar11 + 1;
        do {
          lVar7 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar7 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      plVar11 = *(long **)(param_1 + 0x78);
      if (plVar11 != (long *)0x0) {
        plVar2 = plVar11 + 1;
        do {
          lVar7 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar7 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      plVar11 = *(long **)(param_1 + 0xc0);
      if (plVar11 != (long *)0x0) {
        puVar3 = (ulong *)(plVar11 + 1);
        do {
          uVar9 = *puVar3;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar5) {
            *puVar3 = uVar9 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          do {
            uVar9 = *puVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar5) {
              *puVar3 = uVar9 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar11 + 8))(plVar11);
          }
        }
      }
      func_0x000109d1a1d0(param_1 + 0x10);
      plVar11 = *(long **)(param_1 + 0x88);
      if (plVar11 != (long *)0x0) {
        plVar2 = plVar11 + 1;
        do {
          lVar7 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar7 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      __ZdlPv(param_1);
      return;
    }
  }
  else {
    func_0x0001092af97c(lVar7 + 0x90);
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a729a3c);
  (*pcVar6)();
}



/* Entry: 10a729be0; end: 10a729e77;  */

void FUN_10a729be0(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  if ((*(byte *)(param_1 + 0xf0) & 1) == 0) {
    plVar5 = *(long **)(param_1 + 0x48);
    if (plVar5 == (long *)0x0) goto LAB_10a729e24;
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
    if ((uVar6 & 0x1fffffffc) != 4) goto LAB_10a729e24;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    do {
      uVar6 = *puVar1 - 1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    plVar5 = *(long **)(param_1 + 200);
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
    plVar5 = *(long **)(param_1 + 0xd0);
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
    plVar5 = *(long **)(param_1 + 0xd8);
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
    plVar5 = *(long **)(param_1 + 0xb8);
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
    plVar5 = *(long **)(param_1 + 0x98);
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
    plVar5 = *(long **)(param_1 + 0x78);
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
    plVar5 = *(long **)(param_1 + 0xc0);
    if (plVar5 == (long *)0x0) goto LAB_10a729e24;
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
    if ((uVar6 & 0x1fffffffc) != 4) goto LAB_10a729e24;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    do {
      uVar6 = *puVar1 - 1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (uVar6 == 0) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
LAB_10a729e24:
  func_0x000109d1a1d0(param_1 + 0x10);
  plVar5 = *(long **)(param_1 + 0x88);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a729e78; end: 10a72a30f;  */

void FUN_10a729e78(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x50);
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x10) >> 1 & 1) != 0) {
      func_0x0001092ba100(param_1 + 0x10);
      bVar3 = false;
      goto LAB_10a72a104;
    }
    puVar7 = *(undefined8 **)(param_1 + 0x68);
    FUN_10a6e8d8c(param_1 + 0x50,*puVar7,puVar7 + 1,puVar7 + 4);
    FUN_10a4f3e88(param_1 + 0x58,param_1 + 0x48,param_1 + 0x50);
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x58);
    plVar5 = (long *)(*(long *)(param_1 + 0x58) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x70) = 1;
      lVar6 = *(long *)(param_1 + 0x60);
      plVar5 = (long *)(lVar6 + 0x10);
      uVar10 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar9 = *plVar5;
        if (lVar9 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_48 = 0;
            lStack_40 = param_1;
            uStack_38 = uVar10;
            func_0x000109d1b588(lVar6 + 0x18,&uStack_48);
            *(undefined8 *)(lVar6 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar9 >> 1 & 1) == 0);
    }
  }
  uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10);
  plVar5 = *(long **)(param_1 + 0x60);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
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
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if (((uint)uVar10 >> 5 & 1) == 0) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x68) + 0x100);
    (**(code **)(lVar6 + 0x168))(lVar6 + 0x168);
LAB_10a72a050:
    bVar3 = true;
  }
  else {
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 1 & 1) == 0) {
      lVar6 = *(long *)(*(long *)(param_1 + 0x68) + 0x100);
      __ZNSt13exception_ptrC1ERKS_(auStack_50,*(long *)(param_1 + 0x58) + 0x90);
      func_0x0001098bc760(&uStack_48,auStack_50);
      puVar7 = &uStack_48;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (puVar7,0,&UNK_10f670ede,0x19);
      uStack_68 = puVar7[1];
      uStack_70 = *puVar7;
      lStack_60 = puVar7[2];
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      (**(code **)(lVar6 + 0x1a8))(&uStack_70,lVar6 + 0x1a8);
      if (lStack_60 < 0) {
        __ZdlPv(uStack_70);
      }
      if (uStack_38._7_1_ < '\0') {
        __ZdlPv(uStack_48);
      }
      __ZNSt13exception_ptrD1Ev(auStack_50);
      goto LAB_10a72a050;
    }
    func_0x0001092ba100(param_1 + 0x10);
    bVar3 = false;
  }
  plVar5 = *(long **)(param_1 + 0x58);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar8 = *puVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar8 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar8 & 0x1fffffffc) == 4) {
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar8 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar8 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0x50);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar8 = *puVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar8 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar8 & 0x1fffffffc) == 4) {
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar8 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar8 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
LAB_10a72a104:
  plVar5 = *(long **)(param_1 + 0x48);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar8 = *puVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar8 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar8 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar8 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar8 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  if (bVar3) {
    func_0x0001092ba100(param_1 + 0x10);
  }
  func_0x000109d1a1d0(param_1 + 0x10);
  __ZdlPv(param_1);
  return;
}



/* Entry: 10a72a310; end: 10a72a4c7;  */

void FUN_10a72a310(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
    plVar4 = *(long **)(param_1 + 0x50);
    if (plVar4 == (long *)0x0) goto LAB_10a72a4ac;
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
    if ((uVar5 & 0x1fffffffc) != 4) goto LAB_10a72a4ac;
    (**(code **)(*plVar4 + 0x10))(plVar4);
    do {
      uVar5 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
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
    plVar4 = *(long **)(param_1 + 0x50);
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
    plVar4 = *(long **)(param_1 + 0x48);
    if (plVar4 == (long *)0x0) goto LAB_10a72a4ac;
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
    if ((uVar5 & 0x1fffffffc) != 4) goto LAB_10a72a4ac;
    (**(code **)(*plVar4 + 0x10))(plVar4);
    do {
      uVar5 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (uVar5 == 0) {
    (**(code **)(*plVar4 + 8))(plVar4);
  }
LAB_10a72a4ac:
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a72a4c8; end: 10a72a76b;  */

void FUN_10a72a4c8(long param_1)

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
  
  if ((*(byte *)(param_1 + 0x170) & 1) == 0) {
    FUN_10a700ee0(param_1 + 0x168,param_1 + 0x48);
    *(long *)(param_1 + 0x158) = *(long *)(param_1 + 0x168);
    plVar6 = (long *)(*(long *)(param_1 + 0x168) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x158) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x170) = 1;
      lVar9 = *(long *)(param_1 + 0x158);
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
  plVar6 = *(long **)(param_1 + 0x158);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x158) + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar6 + 0x12);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a72a6a8);
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
  plVar6 = *(long **)(param_1 + 0x168);
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
  plVar6 = *(long **)(param_1 + 0x150);
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
  FUN_10ae0e238(param_1 + 0x68);
  if (*(char *)(param_1 + 0x67) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x50));
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a72a76c; end: 10a72a87f;  */

void FUN_10a72a76c(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  if (*(char *)(param_1 + 0x170) == '\x01') {
    plVar5 = *(long **)(param_1 + 0x158);
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
    plVar5 = *(long **)(param_1 + 0x168);
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
  plVar5 = *(long **)(param_1 + 0x150);
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
  FUN_10ae0e238(param_1 + 0x68);
  if (*(char *)(param_1 + 0x67) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x50));
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a72a880; end: 10a72abaf;  */

void FUN_10a72a880(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x50);
    FUN_10a7157bc(param_1 + 0x58,param_1 + 0x48,**(undefined8 **)(param_1 + 0x60));
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x58);
    plVar5 = (long *)(*(long *)(param_1 + 0x58) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x68) = 1;
      lVar8 = *(long *)(param_1 + 0x50);
      plVar5 = (long *)(lVar8 + 0x10);
      uStack_38 = *(undefined8 *)(param_1 + 0x18);
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
            uStack_48 = 0;
            lStack_40 = param_1;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_48);
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
  lVar8 = *(long *)(param_1 + 0x50);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar8 + 200) & 1) != 0) {
      FUN_10a71577c(param_1 + 0x10,lVar8 + 0x98);
      plVar5 = *(long **)(param_1 + 0x50);
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
      plVar5 = *(long **)(param_1 + 0x58);
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
      plVar5 = *(long **)(param_1 + 0x48);
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
          (**(code **)(*plVar5 + 0x10))(plVar5);
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
            (**(code **)(*plVar5 + 8))(plVar5);
          }
        }
      }
      func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_1);
      return;
    }
  }
  else {
    func_0x0001092af97c(lVar8 + 0x90);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a72aa98);
  (*pcVar4)();
}



/* Entry: 10a72abb0; end: 10a72ad1f;  */

void FUN_10a72abb0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x50);
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    if (plVar5 == (long *)0x0) goto LAB_10a72ad04;
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10a72ad04;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    do {
      uVar4 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
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
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x58);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
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
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x48);
    if (plVar5 == (long *)0x0) goto LAB_10a72ad04;
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10a72ad04;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    do {
      uVar4 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (uVar4 == 0) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
LAB_10a72ad04:
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a72ad20; end: 10a72b00b;  */

void FUN_10a72ad20(long param_1)

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
  
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    FUN_10a7152d4(param_1 + 0x60,param_1 + 0x58);
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x60);
    plVar5 = (long *)(*(long *)(param_1 + 0x60) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x68) = 1;
      lVar8 = *(long *)(param_1 + 0x48);
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
  lVar8 = *(long *)(param_1 + 0x48);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar8 + 200) & 1) != 0) {
      FUN_10a7151fc(param_1 + 0x10,lVar8 + 0x98);
      plVar5 = *(long **)(param_1 + 0x48);
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
      plVar5 = *(long **)(param_1 + 0x58);
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
  }
  else {
    func_0x0001092af97c(lVar8 + 0x90);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a72af08);
  (*pcVar4)();
}



/* Entry: 10a72b00c; end: 10a72b113;  */

void FUN_10a72b00c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if ((*(byte *)(param_1 + 0x68) & 1) != 0) {
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
  }
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
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a72b114; end: 10a72d45f;  */

/* WARNING: Removing unreachable block (ram,0x00010a72c324) */
/* WARNING: Removing unreachable block (ram,0x00010a72b51c) */

void FUN_10a72b114(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong *puVar8;
  long *******ppppppplVar9;
  long *plVar10;
  undefined4 uVar11;
  byte bVar12;
  char cVar13;
  bool bVar14;
  long ******pppppplVar15;
  code *pcVar16;
  long *plVar17;
  long *******ppppppplVar18;
  long *plVar19;
  long *plVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  long *plVar23;
  undefined8 uVar24;
  undefined8 in_x7;
  long lVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  undefined1 auVar32 [16];
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  char cStack_1c9;
  char cStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  long ******pppppplStack_190;
  long *plStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  
  plVar30 = (long *)(param_1 + 0x168);
  plVar1 = (long *)(param_1 + 0x248);
  puVar2 = (undefined8 *)(param_1 + 0x3a0);
  plVar20 = (long *)(param_1 + 0x3f0);
  plVar19 = (long *)(param_1 + 0x430);
  puVar3 = (undefined8 *)(param_1 + 0x470);
  plVar4 = (long *)(param_1 + 0x598);
  plVar5 = (long *)(param_1 + 0x5e0);
  plVar6 = (long *)(param_1 + 0x610);
  plVar17 = (long *)(param_1 + 0x628);
  plVar7 = (long *)(param_1 + 0x678);
  plVar23 = (long *)(param_1 + 0x6a8);
  plVar31 = (long *)(param_1 + 0x6f0);
  bVar12 = *(byte *)(param_1 + 0x704);
  if (bVar12 < 3) {
    if (bVar12 == 0) {
      *(undefined8 *)(param_1 + 0x6f0) = *(undefined8 *)(param_1 + 0x48);
      lVar25 = *(long *)(param_1 + 0x6b8);
      if (lVar25 == 0) {
        *plVar17 = 0;
        *(undefined8 *)(param_1 + 0x630) = 0;
      }
      else {
        *(undefined8 *)(param_1 + 0x628) = *(undefined8 *)(lVar25 + 0xe0);
        lVar25 = *(long *)(lVar25 + 0xe8);
        *(long *)(param_1 + 0x630) = lVar25;
        if (lVar25 != 0) {
          plVar29 = (long *)(lVar25 + 8);
          do {
            cVar13 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar29,0x10);
            if (bVar14) {
              *plVar29 = *plVar29 + 1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
        }
      }
      FUN_10a7d2014(puVar2,plVar17);
      *(long *)(param_1 + 0x658) = 0;
      *(undefined8 *)(param_1 + 0x660) = 0;
      if (*plVar17 != 0) {
        FUN_10a7cfeec(&pppppplStack_190,*(undefined8 *)(param_1 + 0x6d8),plVar17);
        plVar17 = plStack_188;
        pppppplVar15 = pppppplStack_190;
        pppppplStack_190 = (long ******)0x0;
        plStack_188 = (long *)0x0;
        plVar29 = *(long **)(param_1 + 0x660);
        *(long **)(param_1 + 0x660) = plVar17;
        *(long *)(param_1 + 0x658) = (long)pppppplVar15;
        if (plVar29 != (long *)0x0) {
          plVar17 = plVar29 + 1;
          do {
            lVar25 = *plVar17;
            cVar13 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar14) {
              *plVar17 = lVar25 + -1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          if (lVar25 == 0) {
            (**(code **)(*plVar29 + 0x10))(plVar29);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar29);
          }
        }
        plVar17 = plStack_188;
        if (plStack_188 != (long *)0x0) {
          plVar29 = plStack_188 + 1;
          do {
            lVar25 = *plVar29;
            cVar13 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar29,0x10);
            if (bVar14) {
              *plVar29 = lVar25 + -1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          if (lVar25 == 0) {
            (**(code **)(*plStack_188 + 0x10))(plStack_188);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
          }
        }
      }
      plVar17 = *(long **)(param_1 + 0x6d8);
      FUN_10a6de3f8(param_1 + 0x668);
      if (*(char *)(param_1 + 0x518) == '\x01') {
        if (*(char *)(param_1 + 0x517) < '\0') {
          plVar17 = plVar5;
          func_0x000107c3192c(plVar5,*(undefined8 *)(param_1 + 0x500),
                              *(undefined8 *)(param_1 + 0x508));
        }
        else {
          *(undefined8 *)(param_1 + 0x5e8) = *(undefined8 *)(param_1 + 0x508);
          *plVar5 = *(long *)(param_1 + 0x500);
          *(undefined8 *)(param_1 + 0x5f0) = *(undefined8 *)(param_1 + 0x510);
        }
      }
      else {
        *plVar5 = 0;
        *(undefined8 *)(param_1 + 0x5e8) = 0;
        *(undefined8 *)(param_1 + 0x5f0) = 0;
      }
      uVar26 = *(ulong *)(param_1 + 0x5e8);
      if (-1 < (char)*(byte *)(param_1 + 0x5f7)) {
        uVar26 = (ulong)*(byte *)(param_1 + 0x5f7);
      }
      if (uVar26 == 0) {
        uVar24 = 0xc;
        if (*(int *)(param_1 + 0x700) != 0) {
          uVar24 = 0x1a;
        }
        plVar17 = *(long **)(param_1 + 0x668);
        FUN_10a6de474(&pppppplStack_190,plVar17,uVar24);
        if (*(char *)(param_1 + 0x5f7) < '\0') {
          plVar17 = (long *)*plVar5;
          __ZdlPv();
        }
        *(long **)(param_1 + 0x5e8) = plStack_188;
        *plVar5 = (long)pppppplStack_190;
        *(long *)(param_1 + 0x5f0) = lStack_180;
      }
      if ((*(double *)(param_1 + 0x3b8) == 0.0) && (*(double *)(param_1 + 0x3c0) == 0.0)) {
        plVar17 = *(long **)(param_1 + 0x698);
        if ((plVar17 != (long *)0x0) && ((*(byte *)(param_1 + 0x398) & 1) == 0)) {
          FUN_10a03867c(param_1 + 0x48);
          FUN_10a078cd0(plVar30,plVar31,param_1 + 0x48);
          *(long *)(param_1 + 0x248) = *plVar30;
          plVar17 = (long *)(*plVar30 + 8);
          do {
            cVar13 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar14) {
              *plVar17 = *plVar17 + 4;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          if (((uint)*(undefined8 *)(*plVar1 + 0x10) >> 1 & 1) == 0) {
            *(undefined1 *)(param_1 + 0x704) = 1;
            lVar27 = *(long *)(param_1 + 0x248);
            plVar17 = (long *)(lVar27 + 0x10);
            lVar25 = *(undefined8 *)(param_1 + 0x18);
            do {
              lVar28 = *plVar17;
              if (lVar28 == 0) {
                cVar13 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                if (bVar14) {
                  *plVar17 = 1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
                if (cVar13 == '\0') goto LAB_10a72c440;
              }
              else {
                ClearExclusiveLocal();
              }
            } while (((uint)lVar28 >> 1 & 1) == 0);
          }
          goto LAB_10a72b1b4;
        }
LAB_10a72b538:
        if (*(char *)(param_1 + 0x398) == '\x01') {
          if ((uRam000000011330a9e8 >> 2 & 1) != 0) {
            plVar17 = (long *)0x1;
            func_0x00010ae06f08(1,4,&UNK_10f66dea2,&UNK_10f66deed,0xb1,&UNK_10f66e087);
            if ((*(byte *)(param_1 + 0x398) & 1) == 0) goto LAB_10a72cb1c;
          }
          *(undefined8 *)(param_1 + 0x3c0) = *(undefined8 *)(param_1 + 0x358);
          *(undefined8 *)(param_1 + 0x3b8) = *(undefined8 *)(param_1 + 0x350);
          *(undefined8 *)(param_1 + 0x3c8) = *(undefined8 *)(param_1 + 0x368);
        }
        else if ((uRam000000011330a9e8 >> 2 & 1) != 0) {
          plVar17 = (long *)0x1;
          func_0x00010ae06f08(1,4,&UNK_10f66dea2,&UNK_10f66deed,0xb7,&UNK_10f66e0d0);
        }
      }
      __ZNSt3__16chrono12steady_clock3nowEv();
      *(long **)(param_1 + 0x6f8) = plVar17;
      plVar17 = *(long **)(param_1 + 0x668);
      (**(code **)(*plVar17 + 0x10))(plVar4,plVar17,0x10);
      lVar27 = *(long *)(*(long *)(param_1 + 0x6d8) + 0x960);
      lVar25 = *(long *)(lVar27 + 0xa0);
      *(long *)(param_1 + 0x648) = lVar25;
      lVar27 = *(long *)(lVar27 + 0xa8);
      *(long *)(param_1 + 0x650) = lVar27;
      if (lVar27 != 0) {
        plVar29 = (long *)(lVar27 + 8);
        do {
          cVar13 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar14) {
            *plVar29 = *plVar29 + 1;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
      }
      if (lVar25 == 0) {
        if (*(char *)(param_1 + 0x5af) < '\0') {
          plVar17 = &lStack_1c0;
          func_0x000107c3192c(plVar17,*(undefined8 *)(param_1 + 0x598),
                              *(undefined8 *)(param_1 + 0x5a0));
        }
        else {
          uStack_1b8 = *(undefined8 *)(param_1 + 0x5a0);
          lStack_1c0 = *plVar4;
          lStack_1b0 = *(long *)(param_1 + 0x5a8);
        }
        plVar29 = (long *)(param_1 + 0x4c0);
        uStack_1a8 = CONCAT71(uStack_1a8._1_7_,1);
        plStack_188 = (long *)0x0;
        pppppplStack_190 = (long ******)0x0;
        uStack_178 = 0;
        lStack_180 = 0;
        uStack_170 = 0x3f800000;
        if (*(char *)(param_1 + 0x627) < '\0') {
          plVar17 = plVar29;
          func_0x000107c3192c(plVar29,*(undefined8 *)(param_1 + 0x610),
                              *(undefined8 *)(param_1 + 0x618));
        }
        else {
          *(undefined8 *)(param_1 + 0x4c8) = *(undefined8 *)(param_1 + 0x618);
          *plVar29 = *plVar6;
          *(undefined8 *)(param_1 + 0x4d0) = *(undefined8 *)(param_1 + 0x620);
        }
        uVar11 = *(undefined4 *)(param_1 + 0x700);
        *(undefined1 *)(param_1 + 0x4d8) = 1;
        __ZNSt3__16chrono12system_clock3nowEv();
        FUN_10a6e53f0(param_1 + 0x48,puVar2,&lStack_1c0,&pppppplStack_190,plVar29,uVar11,1,in_x7,
                      plVar17,1);
        if ((*(char *)(param_1 + 0x4d8) == '\x01') && (*(char *)(param_1 + 0x4d7) < '\0')) {
          __ZdlPv(*plVar29);
        }
        func_0x00010a71245c(&pppppplStack_190);
        if (((char)uStack_1a8 == '\x01') && (lStack_1b0 < 0)) {
          __ZdlPv(lStack_1c0);
        }
        FUN_10a6dee68(plVar1,plVar5,param_1 + 0x48);
        plVar17 = (long *)(param_1 + 0x5c8);
        *(undefined8 *)(param_1 + 0x478) = 0;
        *puVar3 = 0;
        *(undefined8 *)(param_1 + 0x488) = 0;
        *(undefined8 *)(param_1 + 0x480) = 0;
        *(undefined4 *)(param_1 + 0x490) = 0x3f800000;
        if (*(long *)(param_1 + 0x658) != 0) {
          pppppplStack_190 = (long ******)((ulong)pppppplStack_190 & 0xffffffff00000000);
          *plVar17 = (long)&pppppplStack_190;
          puVar21 = puVar3;
          FUN_10a7126b0(puVar3,0,&pppppplStack_190);
          FUN_10a6df2bc(puVar21 + 3,*(undefined8 *)(param_1 + 0x658),
                        *(undefined8 *)(param_1 + 0x660));
        }
        if (*(long *)(param_1 + 0x638) != 0) {
          pppppplStack_190 = (long ******)CONCAT44(pppppplStack_190._4_4_,1);
          *plVar7 = (long)&pppppplStack_190;
          puVar21 = puVar3;
          FUN_10a7126b0(puVar3,1,&pppppplStack_190);
          func_0x00010a6df330(puVar21 + 3,*(undefined8 *)(param_1 + 0x638),
                              *(undefined8 *)(param_1 + 0x640));
        }
        FUN_109d1a6fc(plVar23);
        lVar25 = *(long *)(param_1 + 0x6b0);
        *(long *)(param_1 + 0x6e0) = lVar25;
        if (lVar25 == 0) {
          *(long *)(param_1 + 0x6e8) = 0;
        }
        else {
          plVar29 = (long *)(lVar25 + 8);
          do {
            cVar13 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar29,0x10);
            if (bVar14) {
              *plVar29 = *plVar29 + 0x200000000;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          lVar25 = *(long *)(param_1 + 0x6b0);
          *(long *)(param_1 + 0x6e8) = lVar25;
          if (lVar25 != 0) {
            plVar29 = (long *)(lVar25 + 8);
            do {
              cVar13 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar29,0x10);
              if (bVar14) {
                *plVar29 = *plVar29 + 0x200000000;
                cVar13 = ExclusiveMonitorsStatus();
              }
            } while (cVar13 != '\0');
          }
        }
        if (*(char *)(param_1 + 0x578) == '\x01') {
          if (*(char *)(param_1 + 0x577) < '\0') {
            func_0x000107c3192c(plVar17,*(undefined8 *)(param_1 + 0x560),
                                *(undefined8 *)(param_1 + 0x568));
          }
          else {
            *(undefined8 *)(param_1 + 0x5d0) = *(undefined8 *)(param_1 + 0x568);
            *plVar17 = *(long *)(param_1 + 0x560);
            *(undefined8 *)(param_1 + 0x5d8) = *(undefined8 *)(param_1 + 0x570);
          }
        }
        else {
          *plVar17 = 0;
          *(undefined8 *)(param_1 + 0x5d0) = 0;
          *(undefined8 *)(param_1 + 0x5d8) = 0;
        }
        puVar22 = (undefined8 *)0x210;
        __Znwm();
        plVar29 = (long *)(param_1 + 0x580);
        puVar22[1] = 0;
        puVar22[2] = 0;
        *puVar22 = &PTR_FUN_110c13a98;
        uVar24 = *(undefined8 *)(param_1 + 0x6d8);
        *(undefined8 *)(param_1 + 0x588) = *(undefined8 *)(param_1 + 0x5d0);
        *plVar29 = *plVar17;
        *(undefined8 *)(param_1 + 0x590) = *(undefined8 *)(param_1 + 0x5d8);
        *plVar17 = 0;
        *(undefined8 *)(param_1 + 0x5d0) = 0;
        *(undefined8 *)(param_1 + 0x5d8) = 0;
        FUN_10ae0e0f0(plVar30,0,plVar1);
        puVar21 = puVar22 + 3;
        *(undefined8 *)(param_1 + 0x3f0) = 0x10a712b54;
        *(undefined ***)(param_1 + 0x3f8) = &PTR_DAT_110c13ad8;
        lVar25 = *(long *)(param_1 + 0x6e0);
        *(long *)(param_1 + 0x400) = lVar25;
        if (lVar25 != 0) {
          plVar10 = (long *)(lVar25 + 8);
          do {
            cVar13 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar14) {
              *plVar10 = *plVar10 + 0x200000000;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
        }
        *(code **)(param_1 + 0x430) = FUN_10a712bf0;
        *(undefined ***)(param_1 + 0x438) = &PTR_FUN_110c13af8;
        lVar25 = *(long *)(param_1 + 0x6e8);
        *(long *)(param_1 + 0x440) = lVar25;
        if (lVar25 != 0) {
          plVar10 = (long *)(lVar25 + 8);
          do {
            cVar13 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar14) {
              *plVar10 = *plVar10 + 0x200000000;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
        }
        FUN_10a6e5dd0(puVar21,uVar24,plVar29,plVar30,plVar20,plVar19);
        (*(code *)**(undefined8 **)(param_1 + 0x438))(param_1 + 0x438);
        (*(code *)**(undefined8 **)(param_1 + 0x3f8))(param_1 + 0x3f8);
        FUN_10ae0e238(plVar30);
        if (*(char *)(param_1 + 0x597) < '\0') {
          __ZdlPv(*plVar29);
        }
        *(undefined8 **)(param_1 + 0x678) = puVar21;
        *(undefined8 **)(param_1 + 0x680) = puVar22;
        func_0x00010a712e08(plVar7,puVar21,puVar21);
        if (*(char *)(param_1 + 0x5df) < '\0') {
          __ZdlPv(*plVar17);
        }
        FUN_10a6df3a4(*plVar7,puVar3);
        func_0x0001098ad440(plVar20,plVar31,plVar23);
        *plVar30 = *plVar20;
        plVar19 = (long *)(*plVar20 + 8);
        do {
          cVar13 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar14) {
            *plVar19 = *plVar19 + 4;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        if (((uint)*(undefined8 *)(*plVar30 + 0x10) >> 1 & 1) == 0) {
          *(undefined1 *)(param_1 + 0x704) = 5;
          lVar27 = *(long *)(param_1 + 0x168);
          plVar19 = (long *)(lVar27 + 0x10);
          lVar25 = *(undefined8 *)(param_1 + 0x18);
          do {
            lVar28 = *plVar19;
            if (lVar28 == 0) {
              cVar13 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar14) {
                *plVar19 = 1;
                cVar13 = ExclusiveMonitorsStatus();
              }
              if (cVar13 == '\0') {
LAB_10a72c440:
                lStack_180 = lVar25;
                pppppplStack_190 = (long ******)0x0;
                plStack_188 = (long *)param_1;
                func_0x000109d1b588(lVar27 + 0x18,&pppppplStack_190);
                *(undefined8 *)(lVar27 + 0x10) = 0;
                return;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)lVar28 >> 1 & 1) == 0);
        }
LAB_10a72c33c:
        uVar24 = *(undefined8 *)(*plVar30 + 0x10);
        plVar19 = (long *)*plVar30;
        if (plVar19 != (long *)0x0) {
          puVar8 = (ulong *)(plVar19 + 1);
          do {
            uVar26 = *puVar8;
            cVar13 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(puVar8,0x10);
            if (bVar14) {
              *puVar8 = uVar26 - 4;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          if ((uVar26 & 0x1fffffffc) == 4) {
            do {
              uVar26 = *puVar8;
              cVar13 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(puVar8,0x10);
              if (bVar14) {
                *puVar8 = uVar26 - 1;
                cVar13 = ExclusiveMonitorsStatus();
              }
            } while (cVar13 != '\0');
            if (uVar26 - 1 == 0) {
              (**(code **)(*plVar19 + 8))();
            }
          }
        }
        if (((uint)uVar24 >> 5 & 1) != 0) {
          if (((uint)*(undefined8 *)(*plVar31 + 0x10) >> 1 & 1) == 0) {
            lVar25 = *(long *)(param_1 + 0x6d8);
            ppppppplVar18 = &pppppplStack_190;
            func_0x000107c2b054(ppppppplVar18,&UNK_10f66e1a2);
            lVar27 = *(long *)(param_1 + 0x6f8);
            __ZNSt3__16chrono12steady_clock3nowEv();
            if (lVar25 != 0) {
              FUN_10a76bf18((double)((float)((long)ppppppplVar18 - lVar27) / 1e+09),
                            *(undefined8 *)(lVar25 + 0x8d8),&pppppplStack_190);
            }
            if (lStack_180 < 0) {
              __ZdlPv(pppppplStack_190);
            }
          }
          __ZNSt13exception_ptrC1ERKS_(&lStack_1c0,*plVar20 + 0x90);
          func_0x0001098bc760(&pppppplStack_190,&lStack_1c0);
          __ZNSt13exception_ptrD1Ev(&lStack_1c0);
          if (((byte)uRam000000011330a9e8 >> 2 & 1) != 0) {
            func_0x00010ae06f08(1,4,&UNK_10f66dea2,&UNK_10f66deed,0x11d,&UNK_10f66e218);
          }
          FUN_10a1084cc(&pppppplStack_190);
          goto LAB_10a72cb1c;
        }
        FUN_10a6dec9c(plVar30,*(undefined8 *)(param_1 + 0x6d8),1,plVar5);
        lVar25 = *(long *)(param_1 + 0x6d8);
        ppppppplVar18 = &pppppplStack_190;
        func_0x000107c2b054(ppppppplVar18,&UNK_10f66e1e2);
        lVar27 = *(long *)(param_1 + 0x6f8);
        __ZNSt3__16chrono12steady_clock3nowEv();
        if (lVar25 != 0) {
          FUN_10a76bf18((double)((float)((long)ppppppplVar18 - lVar27) / 1e+09),
                        *(undefined8 *)(lVar25 + 0x8d8),&pppppplStack_190);
        }
        if (lStack_180 < 0) {
          __ZdlPv(pppppplStack_190);
        }
        lVar25 = *(long *)(param_1 + 0x6d8);
        func_0x000107c2b054(&pppppplStack_190,&UNK_10f66e1fe);
        plVar19 = (long *)(param_1 + 0x5b0);
        if (*(char *)(param_1 + 0x5f7) < '\0') {
          func_0x000107c3192c(plVar19,*(undefined8 *)(param_1 + 0x5e0),
                              *(undefined8 *)(param_1 + 0x5e8));
        }
        else {
          *(undefined8 *)(param_1 + 0x5b8) = *(undefined8 *)(param_1 + 0x5e8);
          *plVar19 = *plVar5;
          *(undefined8 *)(param_1 + 0x5c0) = *(undefined8 *)(param_1 + 0x5f0);
        }
        if (lVar25 != 0) {
          FUN_10a76bdb0(*(undefined8 *)(lVar25 + 0x8d8),&pppppplStack_190,plVar19);
        }
        if (*(char *)(param_1 + 0x5c7) < '\0') {
          __ZdlPv(*plVar19);
        }
        if (lStack_180 < 0) {
          __ZdlPv(pppppplStack_190);
        }
        lVar25 = *(long *)(param_1 + 0x678);
        uVar24 = *(undefined8 *)(*(long *)(param_1 + 0x6d8) + 0x960);
        FUN_10a712eb8(param_1 + 0x498,puVar3);
        FUN_10a6e5564(&pppppplStack_190,lVar25 + 0x78,param_1 + 0x498);
        FUN_10a6ded90(uVar24,plVar30,&pppppplStack_190);
        FUN_10a6fd048(&pppppplStack_190);
        func_0x00010a71259c(param_1 + 0x498);
        FUN_10a6dee28(param_1 + 0x10,plVar30);
        plVar30 = *(long **)(param_1 + 0x170);
        if (plVar30 != (long *)0x0) {
          plVar19 = plVar30 + 1;
          do {
            lVar25 = *plVar19;
            cVar13 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar14) {
              *plVar19 = lVar25 + -1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          if (lVar25 == 0) {
            (**(code **)(*plVar30 + 0x10))(plVar30);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar30);
          }
        }
        plVar20 = (long *)*plVar20;
        if (plVar20 != (long *)0x0) {
          puVar8 = (ulong *)(plVar20 + 1);
          do {
            uVar26 = *puVar8;
            cVar13 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(puVar8,0x10);
            if (bVar14) {
              *puVar8 = uVar26 - 4;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          if ((uVar26 & 0x1fffffffc) == 4) {
            do {
              uVar26 = *puVar8;
              cVar13 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(puVar8,0x10);
              if (bVar14) {
                *puVar8 = uVar26 - 1;
                cVar13 = ExclusiveMonitorsStatus();
              }
            } while (cVar13 != '\0');
            if (uVar26 - 1 == 0) {
              (**(code **)(*plVar20 + 8))();
            }
          }
        }
        plVar30 = *(long **)(param_1 + 0x680);
        if (plVar30 != (long *)0x0) {
          plVar20 = plVar30 + 1;
          do {
            lVar25 = *plVar20;
            cVar13 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar14) {
              *plVar20 = lVar25 + -1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          if (lVar25 == 0) {
            (**(code **)(*plVar30 + 0x10))(plVar30);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar30);
          }
        }
        if (*(long *)(param_1 + 0x6e8) != 0) {
          func_0x0001092b4274();
        }
        if (*(long *)(param_1 + 0x6e0) != 0) {
          func_0x0001092b4274();
        }
        if (*(long *)(param_1 + 0x6b0) != 0) {
          func_0x0001092b4274(param_1 + 0x6b0);
        }
        plVar23 = (long *)*plVar23;
        if (plVar23 != (long *)0x0) {
          puVar8 = (ulong *)(plVar23 + 1);
          do {
            uVar26 = *puVar8;
            cVar13 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(puVar8,0x10);
            if (bVar14) {
              *puVar8 = uVar26 - 4;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          if ((uVar26 & 0x1fffffffc) == 4) {
            do {
              uVar26 = *puVar8;
              cVar13 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(puVar8,0x10);
              if (bVar14) {
                *puVar8 = uVar26 - 1;
                cVar13 = ExclusiveMonitorsStatus();
              }
            } while (cVar13 != '\0');
            if (uVar26 - 1 == 0) {
              (**(code **)(*plVar23 + 8))();
            }
          }
        }
        func_0x00010a71259c(puVar3);
        FUN_10ae0e238(plVar1);
        FUN_10a6fd048(param_1 + 0x48);
        goto LAB_10a72c640;
      }
      if (((byte)uRam000000011330a9e8 >> 2 & 1) != 0) {
        func_0x00010ae06f08(1,4,&UNK_10f66dea2,&UNK_10f66deed,0xc2,&UNK_10f66e132);
      }
      uVar24 = *(undefined8 *)(param_1 + 0x6d8);
      *(undefined8 *)(param_1 + 0x688) = *(undefined8 *)(param_1 + 0x658);
      lVar25 = *(long *)(param_1 + 0x660);
      *(long *)(param_1 + 0x690) = lVar25;
      if (lVar25 != 0) {
        plVar17 = (long *)(lVar25 + 8);
        do {
          cVar13 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar14) {
            *plVar17 = *plVar17 + 1;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
      }
      FUN_10a6d7f90(param_1 + 0x48,uVar24,param_1 + 0x688);
      FUN_10a6de718(plVar20,plVar31,*(undefined8 *)(param_1 + 0x48));
      *plVar30 = *plVar20;
      plVar17 = (long *)(*plVar20 + 8);
      do {
        cVar13 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar14) {
          *plVar17 = *plVar17 + 4;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if (((uint)*(undefined8 *)(*plVar30 + 0x10) >> 1 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x704) = 2;
        lVar27 = *(long *)(param_1 + 0x168);
        plVar17 = (long *)(lVar27 + 0x10);
        lVar25 = *(undefined8 *)(param_1 + 0x18);
        do {
          lVar28 = *plVar17;
          if (lVar28 == 0) {
            cVar13 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar14) {
              *plVar17 = 1;
              cVar13 = ExclusiveMonitorsStatus();
            }
            if (cVar13 == '\0') goto LAB_10a72c440;
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar28 >> 1 & 1) == 0);
      }
    }
    else if (bVar12 == 1) {
LAB_10a72b1b4:
      lVar25 = *plVar1;
      if (((uint)*(undefined8 *)(*plVar1 + 0x10) >> 5 & 1) != 0) {
        func_0x0001092af97c(lVar25 + 0x90);
        goto LAB_10a72cb1c;
      }
      if ((*(byte *)(lVar25 + 0xa8) & 1) == 0) goto LAB_10a72cb1c;
      FUN_10a6de5fc(param_1 + 0x328,*(undefined8 *)(lVar25 + 0x98));
      plVar17 = (long *)*plVar1;
      if (plVar17 != (long *)0x0) {
        puVar8 = (ulong *)(plVar17 + 1);
        do {
          uVar26 = *puVar8;
          cVar13 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(puVar8,0x10);
          if (bVar14) {
            *puVar8 = uVar26 - 4;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        if ((uVar26 & 0x1fffffffc) == 4) {
          do {
            uVar26 = *puVar8;
            cVar13 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(puVar8,0x10);
            if (bVar14) {
              *puVar8 = uVar26 - 1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          if (uVar26 - 1 == 0) {
            (**(code **)(*plVar17 + 8))();
          }
        }
      }
      plVar17 = (long *)*plVar30;
      if (plVar17 != (long *)0x0) {
        puVar8 = (ulong *)(plVar17 + 1);
        do {
          uVar26 = *puVar8;
          cVar13 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(puVar8,0x10);
          if (bVar14) {
            *puVar8 = uVar26 - 4;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        if ((uVar26 & 0x1fffffffc) == 4) {
          do {
            uVar26 = *puVar8;
            cVar13 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(puVar8,0x10);
            if (bVar14) {
              *puVar8 = uVar26 - 1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          if (uVar26 - 1 == 0) {
            (**(code **)(*plVar17 + 8))();
          }
        }
      }
      plVar17 = *(long **)(param_1 + 0x48);
      if (plVar17 != (long *)0x0) {
        puVar8 = (ulong *)(plVar17 + 1);
        do {
          uVar26 = *puVar8;
          cVar13 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(puVar8,0x10);
          if (bVar14) {
            *puVar8 = uVar26 - 4;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        if ((uVar26 & 0x1fffffffc) == 4) {
          do {
            uVar26 = *puVar8;
            cVar13 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(puVar8,0x10);
            if (bVar14) {
              *puVar8 = uVar26 - 1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          if (uVar26 - 1 == 0) {
            (**(code **)(*plVar17 + 8))();
          }
        }
      }
      goto LAB_10a72b538;
    }
    lVar25 = *plVar30;
    if (((uint)*(undefined8 *)(*plVar30 + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(lVar25 + 0x90);
      goto LAB_10a72cb1c;
    }
    if ((*(byte *)(lVar25 + 0xb8) & 1) == 0) goto LAB_10a72cb1c;
    FUN_10a1cffac(plVar1,lVar25 + 0x98);
    plVar17 = (long *)*plVar30;
    if (plVar17 != (long *)0x0) {
      puVar8 = (ulong *)(plVar17 + 1);
      do {
        uVar26 = *puVar8;
        cVar13 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(puVar8,0x10);
        if (bVar14) {
          *puVar8 = uVar26 - 4;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if ((uVar26 & 0x1fffffffc) == 4) {
        do {
          uVar26 = *puVar8;
          cVar13 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(puVar8,0x10);
          if (bVar14) {
            *puVar8 = uVar26 - 1;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        if (uVar26 - 1 == 0) {
          (**(code **)(*plVar17 + 8))();
        }
      }
    }
    plVar17 = (long *)*plVar20;
    if (plVar17 != (long *)0x0) {
      puVar8 = (ulong *)(plVar17 + 1);
      do {
        uVar26 = *puVar8;
        cVar13 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(puVar8,0x10);
        if (bVar14) {
          *puVar8 = uVar26 - 4;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if ((uVar26 & 0x1fffffffc) == 4) {
        do {
          uVar26 = *puVar8;
          cVar13 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(puVar8,0x10);
          if (bVar14) {
            *puVar8 = uVar26 - 1;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        if (uVar26 - 1 == 0) {
          (**(code **)(*plVar17 + 8))();
        }
      }
    }
    plVar17 = *(long **)(param_1 + 0x48);
    if (plVar17 != (long *)0x0) {
      puVar8 = (ulong *)(plVar17 + 1);
      do {
        uVar26 = *puVar8;
        cVar13 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(puVar8,0x10);
        if (bVar14) {
          *puVar8 = uVar26 - 4;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if ((uVar26 & 0x1fffffffc) == 4) {
        do {
          uVar26 = *puVar8;
          cVar13 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(puVar8,0x10);
          if (bVar14) {
            *puVar8 = uVar26 - 1;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        if (uVar26 - 1 == 0) {
          (**(code **)(*plVar17 + 8))();
        }
      }
    }
    plVar17 = *(long **)(param_1 + 0x690);
    if (plVar17 != (long *)0x0) {
      plVar7 = plVar17 + 1;
      do {
        lVar25 = *plVar7;
        cVar13 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar14) {
          *plVar7 = lVar25 + -1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if (lVar25 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
      }
    }
    if ((*(byte *)(param_1 + 0x260) & 1) == 0) {
      FUN_10a00946c(&UNK_10f66e17f);
      goto LAB_10a72cb1c;
    }
    uVar24 = *(undefined8 *)(param_1 + 0x6d8);
    *(undefined8 *)(param_1 + 0x6c8) = *(undefined8 *)(param_1 + 0x638);
    lVar25 = *(long *)(param_1 + 0x640);
    *(long *)(param_1 + 0x6d0) = lVar25;
    if (lVar25 != 0) {
      plVar17 = (long *)(lVar25 + 8);
      do {
        cVar13 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar14) {
          *plVar17 = *plVar17 + 1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
    }
    FUN_10a6d7f90(param_1 + 0x48,uVar24,param_1 + 0x6c8);
    FUN_10a6de718(plVar20,plVar31,*(undefined8 *)(param_1 + 0x48));
    *plVar19 = *plVar20;
    plVar17 = (long *)(*plVar20 + 8);
    do {
      cVar13 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar14) {
        *plVar17 = *plVar17 + 4;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if (((uint)*(undefined8 *)(*plVar19 + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x704) = 3;
      lVar27 = *(long *)(param_1 + 0x430);
      plVar17 = (long *)(lVar27 + 0x10);
      lVar25 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar28 = *plVar17;
        if (lVar28 == 0) {
          cVar13 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar14) {
            *plVar17 = 1;
            cVar13 = ExclusiveMonitorsStatus();
          }
          if (cVar13 == '\0') goto LAB_10a72c440;
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar28 >> 1 & 1) == 0);
    }
LAB_10a72b918:
    lVar25 = *plVar19;
    if (((uint)*(undefined8 *)(*plVar19 + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(lVar25 + 0x90);
      goto LAB_10a72cb1c;
    }
    if ((*(byte *)(lVar25 + 0xb8) & 1) == 0) goto LAB_10a72cb1c;
    FUN_10a1cffac(plVar30,lVar25 + 0x98);
    plVar17 = (long *)*plVar19;
    if (plVar17 != (long *)0x0) {
      puVar8 = (ulong *)(plVar17 + 1);
      do {
        uVar26 = *puVar8;
        cVar13 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(puVar8,0x10);
        if (bVar14) {
          *puVar8 = uVar26 - 4;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if ((uVar26 & 0x1fffffffc) == 4) {
        do {
          uVar26 = *puVar8;
          cVar13 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(puVar8,0x10);
          if (bVar14) {
            *puVar8 = uVar26 - 1;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        if (uVar26 - 1 == 0) {
          (**(code **)(*plVar17 + 8))();
        }
      }
    }
    plVar17 = (long *)*plVar20;
    if (plVar17 != (long *)0x0) {
      puVar8 = (ulong *)(plVar17 + 1);
      do {
        uVar26 = *puVar8;
        cVar13 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(puVar8,0x10);
        if (bVar14) {
          *puVar8 = uVar26 - 4;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if ((uVar26 & 0x1fffffffc) == 4) {
        do {
          uVar26 = *puVar8;
          cVar13 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(puVar8,0x10);
          if (bVar14) {
            *puVar8 = uVar26 - 1;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        if (uVar26 - 1 == 0) {
          (**(code **)(*plVar17 + 8))();
        }
      }
    }
    plVar17 = *(long **)(param_1 + 0x48);
    if (plVar17 != (long *)0x0) {
      puVar8 = (ulong *)(plVar17 + 1);
      do {
        uVar26 = *puVar8;
        cVar13 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(puVar8,0x10);
        if (bVar14) {
          *puVar8 = uVar26 - 4;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if ((uVar26 & 0x1fffffffc) == 4) {
        do {
          uVar26 = *puVar8;
          cVar13 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(puVar8,0x10);
          if (bVar14) {
            *puVar8 = uVar26 - 1;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        if (uVar26 - 1 == 0) {
          (**(code **)(*plVar17 + 8))();
        }
      }
    }
    plVar17 = *(long **)(param_1 + 0x6d0);
    if (plVar17 != (long *)0x0) {
      plVar7 = plVar17 + 1;
      do {
        lVar25 = *plVar7;
        cVar13 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar14) {
          *plVar7 = lVar25 + -1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if (lVar25 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
      }
    }
    lVar25 = -(ulong)(*(char *)(param_1 + 0x398) != '\0');
    *(undefined1 *)(param_1 + 0x540) = 0;
    *(undefined1 *)(param_1 + 0x558) = 0;
    if ((*(byte *)(param_1 + 0x260) & 1) != 0) {
      *(undefined8 *)(param_1 + 0x548) = *(undefined8 *)(param_1 + 0x250);
      *(long *)(param_1 + 0x540) = *plVar1;
      *(undefined8 *)(param_1 + 0x550) = *(undefined8 *)(param_1 + 600);
      *(undefined8 *)(param_1 + 0x250) = 0;
      *(undefined8 *)(param_1 + 600) = 0;
      *plVar1 = 0;
      *(undefined1 *)(param_1 + 0x558) = 1;
    }
    auVar32._8_8_ = lVar25;
    auVar32._0_8_ = lVar25;
    auVar32 = *(undefined1 (*) [16])(param_1 + 0x350) ^
              (*(undefined1 (*) [16])(param_1 + 0x350) ^ ZEXT216(0)) & ~auVar32;
    *(undefined1 *)(param_1 + 0x520) = 0;
    *(undefined1 *)(param_1 + 0x538) = 0;
    if (*(char *)(param_1 + 0x180) == '\x01') {
      *(undefined8 *)(param_1 + 0x528) = *(undefined8 *)(param_1 + 0x170);
      *(long *)(param_1 + 0x520) = *plVar30;
      *(undefined8 *)(param_1 + 0x530) = *(undefined8 *)(param_1 + 0x178);
      *(undefined8 *)(param_1 + 0x170) = 0;
      *(undefined8 *)(param_1 + 0x178) = 0;
      *plVar30 = 0;
      *(undefined1 *)(param_1 + 0x538) = 1;
    }
    *(long *)(param_1 + 0x50) = auVar32._8_8_;
    *(long *)(param_1 + 0x48) = auVar32._0_8_;
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x368);
    *(char *)(param_1 + 0x60) = *(char *)(param_1 + 0x398);
    (**(code **)(**(long **)(param_1 + 0x648) + 0x10))
              (plVar20,*(long **)(param_1 + 0x648),plVar5,(long *)(param_1 + 0x540),
               (long *)(param_1 + 0x520),param_1 + 0x48,*(int *)(param_1 + 0x700) == 0);
    if ((*(char *)(param_1 + 0x538) == '\x01') && (lVar25 = *(long *)(param_1 + 0x520), lVar25 != 0)
       ) {
      *(long *)(param_1 + 0x528) = lVar25;
      __ZdlPv();
    }
    if ((*(char *)(param_1 + 0x558) == '\x01') && (lVar25 = *(long *)(param_1 + 0x540), lVar25 != 0)
       ) {
      *(long *)(param_1 + 0x548) = lVar25;
      __ZdlPv();
    }
    func_0x0001098ad440(plVar19,plVar31,plVar20);
    *(long *)(param_1 + 0x48) = *plVar19;
    plVar17 = (long *)(*plVar19 + 8);
    do {
      cVar13 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar14) {
        *plVar17 = *plVar17 + 4;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x704) = 4;
      lVar27 = *(long *)(param_1 + 0x48);
      plVar17 = (long *)(lVar27 + 0x10);
      lVar25 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar28 = *plVar17;
        if (lVar28 == 0) {
          cVar13 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar14) {
            *plVar17 = 1;
            cVar13 = ExclusiveMonitorsStatus();
          }
          if (cVar13 == '\0') goto LAB_10a72c440;
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar28 >> 1 & 1) == 0);
    }
  }
  else {
    if (bVar12 == 3) goto LAB_10a72b918;
    if (bVar12 != 4) goto LAB_10a72c33c;
  }
  uVar24 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10);
  plVar17 = *(long **)(param_1 + 0x48);
  if (plVar17 != (long *)0x0) {
    puVar8 = (ulong *)(plVar17 + 1);
    do {
      uVar26 = *puVar8;
      cVar13 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(puVar8,0x10);
      if (bVar14) {
        *puVar8 = uVar26 - 4;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if ((uVar26 & 0x1fffffffc) == 4) {
      do {
        uVar26 = *puVar8;
        cVar13 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(puVar8,0x10);
        if (bVar14) {
          *puVar8 = uVar26 - 1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if (uVar26 - 1 == 0) {
        (**(code **)(*plVar17 + 8))();
      }
    }
  }
  if (((uint)uVar24 >> 5 & 1) == 0) {
    FUN_10a6dec9c(param_1 + 0x48,*(undefined8 *)(param_1 + 0x6d8),1,plVar5);
    lVar25 = *(long *)(param_1 + 0x6d8);
    ppppppplVar18 = &pppppplStack_190;
    func_0x000107c2b054(ppppppplVar18,&UNK_10f66e1e2);
    lVar27 = *(long *)(param_1 + 0x6f8);
    __ZNSt3__16chrono12steady_clock3nowEv();
    if (lVar25 != 0) {
      FUN_10a76bf18((double)((float)((long)ppppppplVar18 - lVar27) / 1e+09),
                    *(undefined8 *)(lVar25 + 0x8d8),&pppppplStack_190);
    }
    if (lStack_180 < 0) {
      __ZdlPv(pppppplStack_190);
    }
    lVar25 = *(long *)(param_1 + 0x6d8);
    ppppppplVar18 = &pppppplStack_190;
    func_0x000107c2b054(ppppppplVar18,&UNK_10f66e1fe);
    ppppppplVar9 = (long *******)(param_1 + 0x5f8);
    if (*(char *)(param_1 + 0x5f7) < '\0') {
      ppppppplVar18 = ppppppplVar9;
      func_0x000107c3192c(ppppppplVar9,*(undefined8 *)(param_1 + 0x5e0),
                          *(undefined8 *)(param_1 + 0x5e8));
    }
    else {
      *(undefined8 *)(param_1 + 0x600) = *(undefined8 *)(param_1 + 0x5e8);
      *ppppppplVar9 = (long ******)*plVar5;
      *(undefined8 *)(param_1 + 0x608) = *(undefined8 *)(param_1 + 0x5f0);
    }
    if (lVar25 != 0) {
      ppppppplVar18 = *(long ********)(lVar25 + 0x8d8);
      FUN_10a76bdb0(ppppppplVar18,&pppppplStack_190,ppppppplVar9);
    }
    if (*(char *)(param_1 + 0x60f) < '\0') {
      ppppppplVar18 = (long *******)*ppppppplVar9;
      __ZdlPv();
    }
    if (lStack_180 < 0) {
      ppppppplVar18 = (long *******)pppppplStack_190;
      __ZdlPv();
    }
    ppppppplVar9 = (long *******)(param_1 + 0x4e0);
    uStack_1e0 = 0;
    cStack_1c8 = '\0';
    uStack_1b8 = 0;
    lStack_1c0 = 0;
    uStack_1a8 = 0;
    lStack_1b0 = 0;
    uStack_1a0 = 0x3f800000;
    if (*(char *)(param_1 + 0x627) < '\0') {
      ppppppplVar18 = ppppppplVar9;
      func_0x000107c3192c(ppppppplVar9,*(undefined8 *)(param_1 + 0x610),
                          *(undefined8 *)(param_1 + 0x618));
    }
    else {
      *(undefined8 *)(param_1 + 0x4e8) = *(undefined8 *)(param_1 + 0x618);
      *ppppppplVar9 = (long ******)*plVar6;
      *(undefined8 *)(param_1 + 0x4f0) = *(undefined8 *)(param_1 + 0x620);
    }
    uVar11 = *(undefined4 *)(param_1 + 0x700);
    *(undefined1 *)(param_1 + 0x4f8) = 1;
    __ZNSt3__16chrono12system_clock3nowEv();
    FUN_10a6e53f0(&pppppplStack_190,puVar2,&uStack_1e0,&lStack_1c0,ppppppplVar9,uVar11,1,in_x7,
                  ppppppplVar18,1);
    if ((*(char *)(param_1 + 0x4f8) == '\x01') && (*(char *)(param_1 + 0x4f7) < '\0')) {
      __ZdlPv(*ppppppplVar9);
    }
    func_0x00010a71245c(&lStack_1c0);
    if ((cStack_1c8 == '\x01') && (cStack_1c9 < '\0')) {
      __ZdlPv(CONCAT71(uStack_1df,uStack_1e0));
    }
    FUN_10a6ded90(*(undefined8 *)(*(long *)(param_1 + 0x6d8) + 0x960),param_1 + 0x48,
                  &pppppplStack_190);
    FUN_10a6dee28(param_1 + 0x10,param_1 + 0x48);
    FUN_10a6fd048(&pppppplStack_190);
    plVar17 = *(long **)(param_1 + 0x50);
    if (plVar17 != (long *)0x0) {
      plVar7 = plVar17 + 1;
      do {
        lVar25 = *plVar7;
        cVar13 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar14) {
          *plVar7 = lVar25 + -1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if (lVar25 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
      }
    }
    plVar19 = (long *)*plVar19;
    if (plVar19 != (long *)0x0) {
      puVar8 = (ulong *)(plVar19 + 1);
      do {
        uVar26 = *puVar8;
        cVar13 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(puVar8,0x10);
        if (bVar14) {
          *puVar8 = uVar26 - 4;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if ((uVar26 & 0x1fffffffc) == 4) {
        do {
          uVar26 = *puVar8;
          cVar13 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(puVar8,0x10);
          if (bVar14) {
            *puVar8 = uVar26 - 1;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        if (uVar26 - 1 == 0) {
          (**(code **)(*plVar19 + 8))();
        }
      }
    }
    plVar20 = (long *)*plVar20;
    if (plVar20 != (long *)0x0) {
      puVar8 = (ulong *)(plVar20 + 1);
      do {
        uVar26 = *puVar8;
        cVar13 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(puVar8,0x10);
        if (bVar14) {
          *puVar8 = uVar26 - 4;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if ((uVar26 & 0x1fffffffc) == 4) {
        do {
          uVar26 = *puVar8;
          cVar13 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(puVar8,0x10);
          if (bVar14) {
            *puVar8 = uVar26 - 1;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        if (uVar26 - 1 == 0) {
          (**(code **)(*plVar20 + 8))();
        }
      }
    }
    if ((*(char *)(param_1 + 0x180) == '\x01') && (*plVar30 != 0)) {
      *(long *)(param_1 + 0x170) = *plVar30;
      __ZdlPv();
    }
    if ((*(char *)(param_1 + 0x260) == '\x01') && (*plVar1 != 0)) {
      *(long *)(param_1 + 0x250) = *plVar1;
      __ZdlPv();
    }
LAB_10a72c640:
    plVar30 = *(long **)(param_1 + 0x650);
    if (plVar30 != (long *)0x0) {
      plVar1 = plVar30 + 1;
      do {
        lVar25 = *plVar1;
        cVar13 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar14) {
          *plVar1 = lVar25 + -1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if (lVar25 == 0) {
        (**(code **)(*plVar30 + 0x10))(plVar30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar30);
      }
    }
    if (*(char *)(param_1 + 0x5af) < '\0') {
      __ZdlPv(*plVar4);
    }
    if (*(char *)(param_1 + 0x5f7) < '\0') {
      __ZdlPv(*plVar5);
    }
    plVar30 = *(long **)(param_1 + 0x670);
    if (plVar30 != (long *)0x0) {
      plVar1 = plVar30 + 1;
      do {
        lVar25 = *plVar1;
        cVar13 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar14) {
          *plVar1 = lVar25 + -1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if (lVar25 == 0) {
        (**(code **)(*plVar30 + 0x10))(plVar30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar30);
      }
    }
    plVar30 = *(long **)(param_1 + 0x660);
    if (plVar30 != (long *)0x0) {
      plVar1 = plVar30 + 1;
      do {
        lVar25 = *plVar1;
        cVar13 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar14) {
          *plVar1 = lVar25 + -1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if (lVar25 == 0) {
        (**(code **)(*plVar30 + 0x10))(plVar30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar30);
      }
    }
    if (*(char *)(param_1 + 0x3ef) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x3d8));
    }
    if (*(char *)(param_1 + 0x3b7) < '\0') {
      __ZdlPv(*puVar2);
    }
    plVar30 = *(long **)(param_1 + 0x630);
    if (plVar30 != (long *)0x0) {
      plVar1 = plVar30 + 1;
      do {
        lVar25 = *plVar1;
        cVar13 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar14) {
          *plVar1 = lVar25 + -1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if (lVar25 == 0) {
        (**(code **)(*plVar30 + 0x10))(plVar30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar30);
      }
    }
    plVar31 = (long *)*plVar31;
    if (plVar31 != (long *)0x0) {
      puVar8 = (ulong *)(plVar31 + 1);
      do {
        uVar26 = *puVar8;
        cVar13 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(puVar8,0x10);
        if (bVar14) {
          *puVar8 = uVar26 - 4;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if ((uVar26 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar31 + 0x10))(plVar31);
        do {
          uVar26 = *puVar8;
          cVar13 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(puVar8,0x10);
          if (bVar14) {
            *puVar8 = uVar26 - 1;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        if (uVar26 - 1 == 0) {
          (**(code **)(*plVar31 + 8))(plVar31);
        }
      }
    }
    func_0x000109d1a1d0(param_1 + 0x10);
    if ((*(char *)(param_1 + 0x578) == '\x01') && (*(char *)(param_1 + 0x577) < '\0')) {
      __ZdlPv(*(long *)(param_1 + 0x560));
    }
    if (*(char *)(param_1 + 0x398) == '\x01') {
      func_0x00010a052168(param_1 + 0x328);
    }
    plVar30 = *(long **)(param_1 + 0x6a0);
    if (plVar30 != (long *)0x0) {
      plVar1 = plVar30 + 1;
      do {
        lVar25 = *plVar1;
        cVar13 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar14) {
          *plVar1 = lVar25 + -1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if (lVar25 == 0) {
        (**(code **)(*plVar30 + 0x10))(plVar30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar30);
      }
    }
    plVar30 = *(long **)(param_1 + 0x640);
    if (plVar30 != (long *)0x0) {
      plVar1 = plVar30 + 1;
      do {
        lVar25 = *plVar1;
        cVar13 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar14) {
          *plVar1 = lVar25 + -1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if (lVar25 == 0) {
        (**(code **)(*plVar30 + 0x10))(plVar30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar30);
      }
    }
    plVar30 = *(long **)(param_1 + 0x6c0);
    if (plVar30 != (long *)0x0) {
      plVar1 = plVar30 + 1;
      do {
        lVar25 = *plVar1;
        cVar13 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar14) {
          *plVar1 = lVar25 + -1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if (lVar25 == 0) {
        (**(code **)(*plVar30 + 0x10))(plVar30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar30);
      }
    }
    if (*(char *)(param_1 + 0x627) < '\0') {
      __ZdlPv(*plVar6);
    }
    if ((*(char *)(param_1 + 0x518) == '\x01') && (*(char *)(param_1 + 0x517) < '\0')) {
      __ZdlPv(*(long *)(param_1 + 0x500));
    }
    __ZdlPv(param_1);
    return;
  }
  if (((uint)*(undefined8 *)(*plVar31 + 0x10) >> 1 & 1) == 0) {
    lVar25 = *(long *)(param_1 + 0x6d8);
    ppppppplVar18 = &pppppplStack_190;
    func_0x000107c2b054(ppppppplVar18,&UNK_10f66e1a2);
    lVar27 = *(long *)(param_1 + 0x6f8);
    __ZNSt3__16chrono12steady_clock3nowEv();
    if (lVar25 != 0) {
      FUN_10a76bf18((double)((float)((long)ppppppplVar18 - lVar27) / 1e+09),
                    *(undefined8 *)(lVar25 + 0x8d8),&pppppplStack_190);
    }
    if (lStack_180 < 0) {
      __ZdlPv(pppppplStack_190);
    }
  }
  __ZNSt13exception_ptrC1ERKS_(&lStack_1c0,*plVar19 + 0x90);
  func_0x0001098bc760(&pppppplStack_190,&lStack_1c0);
  __ZNSt13exception_ptrD1Ev(&lStack_1c0);
  if (((byte)uRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f66dea2,&UNK_10f66deed,0xdf,&UNK_10f66e1b5);
  }
  FUN_10a1084cc(&pppppplStack_190);
LAB_10a72cb1c:
                    /* WARNING: Does not return */
  pcVar16 = (code *)SoftwareBreakpoint(1,0x10a72cb20);
  (*pcVar16)();
}



/* Entry: 10a72d460; end: 10a72dcff;  */

void FUN_10a72d460(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  
  plVar6 = (long *)(param_1 + 0x248);
  bVar3 = *(byte *)(param_1 + 0x704);
  if (bVar3 < 3) {
    if (bVar3 != 0) {
      if (bVar3 != 1) {
        plVar6 = *(long **)(param_1 + 0x168);
        if (plVar6 != (long *)0x0) {
          puVar1 = (ulong *)(plVar6 + 1);
          do {
            uVar8 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar8 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar8 & 0x1fffffffc) == 4) {
            do {
              uVar8 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar8 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar8 - 1 == 0) {
              (**(code **)(*plVar6 + 8))();
            }
          }
        }
        plVar6 = *(long **)(param_1 + 0x3f0);
        if (plVar6 != (long *)0x0) {
          puVar1 = (ulong *)(plVar6 + 1);
          do {
            uVar8 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar8 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar8 & 0x1fffffffc) == 4) {
            do {
              uVar8 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar8 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar8 - 1 == 0) {
              (**(code **)(*plVar6 + 8))();
            }
          }
        }
        plVar6 = *(long **)(param_1 + 0x48);
        if (plVar6 != (long *)0x0) {
          puVar1 = (ulong *)(plVar6 + 1);
          do {
            uVar8 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar8 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar8 & 0x1fffffffc) == 4) {
            do {
              uVar8 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar8 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar8 - 1 == 0) {
              (**(code **)(*plVar6 + 8))();
            }
          }
        }
        plVar6 = *(long **)(param_1 + 0x690);
        if (plVar6 != (long *)0x0) {
          plVar7 = plVar6 + 1;
          do {
            lVar9 = *plVar7;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar5) {
              *plVar7 = lVar9 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        goto LAB_10a72da64;
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 != (long *)0x0) {
        puVar1 = (ulong *)(plVar6 + 1);
        do {
          uVar8 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar8 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar8 & 0x1fffffffc) == 4) {
          do {
            uVar8 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar8 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar8 - 1 == 0) {
            (**(code **)(*plVar6 + 8))();
          }
        }
      }
      plVar6 = *(long **)(param_1 + 0x168);
      if (plVar6 != (long *)0x0) {
        puVar1 = (ulong *)(plVar6 + 1);
        do {
          uVar8 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar8 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar8 & 0x1fffffffc) == 4) {
          do {
            uVar8 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar8 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar8 - 1 == 0) {
            (**(code **)(*plVar6 + 8))();
          }
        }
      }
      plVar6 = *(long **)(param_1 + 0x48);
      if (plVar6 != (long *)0x0) {
        puVar1 = (ulong *)(plVar6 + 1);
        do {
          uVar8 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar8 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar8 & 0x1fffffffc) == 4) {
          do {
            uVar8 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar8 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar8 - 1 == 0) {
            (**(code **)(*plVar6 + 8))();
          }
        }
      }
      goto LAB_10a72daac;
    }
    plVar6 = *(long **)(param_1 + 0x48);
    if (plVar6 == (long *)0x0) goto LAB_10a72dbe0;
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar8 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar8 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar8 & 0x1fffffffc) != 4) goto LAB_10a72dbe0;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    do {
      uVar8 = *puVar1 - 1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  else {
    if (bVar3 == 3) {
      plVar7 = *(long **)(param_1 + 0x430);
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar8 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar8 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar8 & 0x1fffffffc) == 4) {
          do {
            uVar8 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar8 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar8 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      plVar7 = *(long **)(param_1 + 0x3f0);
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar8 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar8 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar8 & 0x1fffffffc) == 4) {
          do {
            uVar8 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar8 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar8 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      plVar7 = *(long **)(param_1 + 0x48);
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar8 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar8 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar8 & 0x1fffffffc) == 4) {
          do {
            uVar8 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar8 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar8 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      plVar7 = *(long **)(param_1 + 0x6d0);
      if (plVar7 != (long *)0x0) {
        plVar2 = plVar7 + 1;
        do {
          lVar9 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
    }
    else {
      if (bVar3 != 4) {
        plVar7 = *(long **)(param_1 + 0x168);
        if (plVar7 != (long *)0x0) {
          puVar1 = (ulong *)(plVar7 + 1);
          do {
            uVar8 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar8 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar8 & 0x1fffffffc) == 4) {
            do {
              uVar8 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar8 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar8 - 1 == 0) {
              (**(code **)(*plVar7 + 8))();
            }
          }
        }
        plVar7 = *(long **)(param_1 + 0x3f0);
        if (plVar7 != (long *)0x0) {
          puVar1 = (ulong *)(plVar7 + 1);
          do {
            uVar8 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar8 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar8 & 0x1fffffffc) == 4) {
            do {
              uVar8 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar8 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar8 - 1 == 0) {
              (**(code **)(*plVar7 + 8))();
            }
          }
        }
        plVar7 = *(long **)(param_1 + 0x680);
        if (plVar7 != (long *)0x0) {
          plVar2 = plVar7 + 1;
          do {
            lVar9 = *plVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *plVar2 = lVar9 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
        if (*(long *)(param_1 + 0x6e8) != 0) {
          func_0x0001092b4274((long *)(param_1 + 0x6e8));
        }
        if (*(long *)(param_1 + 0x6e0) != 0) {
          func_0x0001092b4274((long *)(param_1 + 0x6e0));
        }
        if (*(long *)(param_1 + 0x6b0) != 0) {
          func_0x0001092b4274(param_1 + 0x6b0);
        }
        plVar7 = *(long **)(param_1 + 0x6a8);
        if (plVar7 != (long *)0x0) {
          puVar1 = (ulong *)(plVar7 + 1);
          do {
            uVar8 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar8 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar8 & 0x1fffffffc) == 4) {
            do {
              uVar8 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar8 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar8 - 1 == 0) {
              (**(code **)(*plVar7 + 8))();
            }
          }
        }
        func_0x00010a71259c(param_1 + 0x470);
        FUN_10ae0e238(plVar6);
        FUN_10a6fd048(param_1 + 0x48);
        goto LAB_10a72da64;
      }
      plVar7 = *(long **)(param_1 + 0x48);
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar8 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar8 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar8 & 0x1fffffffc) == 4) {
          do {
            uVar8 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar8 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar8 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      plVar7 = *(long **)(param_1 + 0x430);
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar8 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar8 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar8 & 0x1fffffffc) == 4) {
          do {
            uVar8 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar8 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar8 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      plVar7 = *(long **)(param_1 + 0x3f0);
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar8 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar8 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar8 & 0x1fffffffc) == 4) {
          do {
            uVar8 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar8 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar8 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      if ((*(char *)(param_1 + 0x180) == '\x01') && (*(long *)(param_1 + 0x168) != 0)) {
        *(long *)(param_1 + 0x170) = *(long *)(param_1 + 0x168);
        __ZdlPv();
      }
    }
    if ((*(char *)(param_1 + 0x260) == '\x01') && (*plVar6 != 0)) {
      *(long *)(param_1 + 0x250) = *plVar6;
      __ZdlPv();
    }
LAB_10a72da64:
    plVar6 = *(long **)(param_1 + 0x650);
    if (plVar6 != (long *)0x0) {
      plVar7 = plVar6 + 1;
      do {
        lVar9 = *plVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = lVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (*(char *)(param_1 + 0x5af) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x598));
    }
LAB_10a72daac:
    if (*(char *)(param_1 + 0x5f7) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x5e0));
    }
    plVar6 = *(long **)(param_1 + 0x670);
    if (plVar6 != (long *)0x0) {
      plVar7 = plVar6 + 1;
      do {
        lVar9 = *plVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = lVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    plVar6 = *(long **)(param_1 + 0x660);
    if (plVar6 != (long *)0x0) {
      plVar7 = plVar6 + 1;
      do {
        lVar9 = *plVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = lVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (*(char *)(param_1 + 0x3ef) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x3d8));
    }
    if (*(char *)(param_1 + 0x3b7) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x3a0));
    }
    plVar6 = *(long **)(param_1 + 0x630);
    if (plVar6 != (long *)0x0) {
      plVar7 = plVar6 + 1;
      do {
        lVar9 = *plVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = lVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    plVar6 = *(long **)(param_1 + 0x6f0);
    if (plVar6 == (long *)0x0) goto LAB_10a72dbe0;
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar8 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar8 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar8 & 0x1fffffffc) != 4) goto LAB_10a72dbe0;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    do {
      uVar8 = *puVar1 - 1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (uVar8 == 0) {
    (**(code **)(*plVar6 + 8))(plVar6);
  }
LAB_10a72dbe0:
  func_0x000109d1a1d0(param_1 + 0x10);
  if ((*(char *)(param_1 + 0x578) == '\x01') && (*(char *)(param_1 + 0x577) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_1 + 0x560));
  }
  if (*(char *)(param_1 + 0x398) == '\x01') {
    func_0x00010a052168(param_1 + 0x328);
  }
  plVar6 = *(long **)(param_1 + 0x6a0);
  if (plVar6 != (long *)0x0) {
    plVar7 = plVar6 + 1;
    do {
      lVar9 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  plVar6 = *(long **)(param_1 + 0x640);
  if (plVar6 != (long *)0x0) {
    plVar7 = plVar6 + 1;
    do {
      lVar9 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  plVar6 = *(long **)(param_1 + 0x6c0);
  if (plVar6 != (long *)0x0) {
    plVar7 = plVar6 + 1;
    do {
      lVar9 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  if (*(char *)(param_1 + 0x627) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x610));
  }
  if ((*(char *)(param_1 + 0x518) == '\x01') && (*(char *)(param_1 + 0x517) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_1 + 0x500));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}


