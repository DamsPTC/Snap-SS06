/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a506c6c; end: 10a506d0f;  */

void FUN_10a506c6c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x60);
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
  plVar5 = *(long **)(param_1 + 0x50);
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
  if (-1 < *(char *)(param_1 + 0x37)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10a506d10; end: 10a506d13;  */

void FUN_10a506d10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a506d14; end: 10a506d6b;  */

long FUN_10a506d14(long param_1)

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



/* Entry: 10a506d6c; end: 10a506e47;  */

long FUN_10a506d6c(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar2 = param_2;
  FUN_10a506e48();
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar6 = uVar5 - 1;
    if ((uVar5 & uVar6) == 0) {
      uVar7 = uVar6 & uVar2;
    }
    else {
      uVar7 = uVar2;
      if (uVar5 <= uVar2) {
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar2 / uVar5;
        }
        uVar7 = uVar2 - uVar7 * uVar5;
      }
    }
    plVar3 = *(long **)(*param_1 + uVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        uVar4 = plVar3[1];
        if (uVar4 == uVar2) {
          uVar4 = (ulong)(plVar3 + 2);
          func_0x00010a506ea8(uVar4,param_2);
          if ((uVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if ((uVar5 & uVar6) == 0) {
            uVar4 = uVar4 & uVar6;
          }
          else if (uVar5 <= uVar4) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar4 / uVar5;
            }
            uVar4 = uVar4 - uVar1 * uVar5;
          }
          if (uVar4 != uVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10a506e48; end: 10a506fd3;  */

ulong FUN_10a506e48(long param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 uStack_21;
  
  iVar1 = *(int *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x34);
  puVar3 = &uStack_21;
  func_0x000107c2b05c(puVar3,param_1 + 0x18);
  uVar4 = (long)iVar1 + 0x9e3779b9;
  uVar4 = (long)iVar2 + uVar4 * 0x40 + (uVar4 >> 2) + 0x9e3779b9 ^ uVar4;
  return (ulong)(puVar3 + (uVar4 >> 2) + uVar4 * 0x40 + 0x9e3779b9) ^ uVar4;
}



/* Entry: 10a506fd4; end: 10a5070af;  */

long FUN_10a506fd4(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar2 = param_2;
  FUN_10a506e48();
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar6 = uVar5 - 1;
    if ((uVar5 & uVar6) == 0) {
      uVar7 = uVar6 & uVar2;
    }
    else {
      uVar7 = uVar2;
      if (uVar5 <= uVar2) {
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar2 / uVar5;
        }
        uVar7 = uVar2 - uVar7 * uVar5;
      }
    }
    plVar3 = *(long **)(*param_1 + uVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        uVar4 = plVar3[1];
        if (uVar4 == uVar2) {
          uVar4 = (ulong)(plVar3 + 2);
          func_0x00010a506ea8(uVar4,param_2);
          if ((uVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if ((uVar5 & uVar6) == 0) {
            uVar4 = uVar4 & uVar6;
          }
          else if (uVar5 <= uVar4) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar4 / uVar5;
            }
            uVar4 = uVar4 - uVar1 * uVar5;
          }
          if (uVar4 != uVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10a5070b0; end: 10a5072af;  */

void FUN_10a5070b0(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar5 = param_1[1];
  lVar3 = *param_2;
  uVar4 = param_2[1];
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar4 = uVar6 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar8 * uVar5;
  }
  plVar2 = *(long **)(*param_1 + uVar4 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_2);
  if (plVar7 == param_1 + 2) {
LAB_10a50713c:
    if (lVar3 == 0) {
LAB_10a50716c:
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      lVar3 = *param_2;
      goto LAB_10a507174;
    }
    uVar8 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar1 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_10a50716c;
  }
  else {
    uVar8 = plVar7[1];
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar1 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_10a50713c;
LAB_10a507174:
    if (lVar3 == 0) goto LAB_10a5071b0;
  }
  uVar8 = *(ulong *)(lVar3 + 8);
  if ((uVar5 & uVar6) == 0) {
    uVar8 = uVar8 & uVar6;
  }
  else if (uVar5 <= uVar8) {
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar6 = uVar8 / uVar5;
    }
    uVar8 = uVar8 - uVar6 * uVar5;
  }
  if (uVar8 != uVar4) {
    *(long **)(*param_1 + uVar8 * 8) = plVar7;
    lVar3 = *param_2;
  }
LAB_10a5071b0:
  *plVar7 = lVar3;
  *param_2 = 0;
  param_1[3] = param_1[3] + -1;
  func_0x00010a28c3e8(param_2 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a5072b0; end: 10a507433;  */

void FUN_10a5072b0(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_40;
  long *plStack_38;
  long lStack_28;
  
  if ((*(byte *)(param_1 + 9) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a507408);
    (*pcVar5)();
  }
  lVar7 = param_1[10];
  param_1[10] = 0;
  lStack_28 = lVar7;
  (*(code *)*param_1)(&uStack_40,param_1 + 1,*(undefined1 *)(param_1 + 8),
                      *(undefined1 *)((long)param_1 + 0x41));
  plVar1 = (long *)(lVar7 + 0x10);
  do {
    lVar6 = *plVar1;
    if (lVar6 == 0) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        if (*(char *)(lVar7 + 0xa8) == '\x01') {
          func_0x00010a28c31c(lVar7 + 0x98);
        }
        *(long **)(lVar7 + 0xa0) = plStack_38;
        *(undefined8 *)(lVar7 + 0x98) = uStack_40;
        uStack_40 = 0;
        plStack_38 = (long *)0x0;
        *(undefined1 *)(lVar7 + 0xa8) = 1;
        *(undefined8 *)(lVar7 + 0x10) = 2;
        FUN_109d1b4dc(lVar7 + 0x18);
        goto LAB_10a507364;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar6 >> 1 & 1) != 0) {
LAB_10a507364:
      plVar1 = plStack_38;
      if (plStack_38 != (long *)0x0) {
        plVar2 = plStack_38 + 1;
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
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      lVar7 = lStack_28;
      if (*(char *)(param_1 + 9) == '\x01') {
        if (*(char *)((long)param_1 + 0x37) < '\0') {
          __ZdlPv(param_1[4]);
        }
        if (*(char *)((long)param_1 + 0x1f) < '\0') {
          __ZdlPv(param_1[1]);
        }
        *(undefined1 *)(param_1 + 9) = 0;
      }
      lStack_28 = 0;
      if ((lVar7 != 0) && (func_0x0001092b4274(&lStack_28,lVar7), lStack_28 != 0)) {
        func_0x0001092b4274(&lStack_28);
      }
      return;
    }
  } while( true );
}



/* Entry: 10a507434; end: 10a50762f;  */

undefined8 * FUN_10a507434(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bea360;
  if (param_1[0x20] != 0) {
    func_0x0001092b4274(param_1 + 0x20);
  }
  func_0x00010a5075e4(param_1 + 0x16);
  *param_1 = &PTR_DAT_110bea3b0;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    func_0x00010a28c31c(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a507630; end: 10a5076c7;  */

undefined8 * FUN_10a507630(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  if (*(char *)((long)param_2 + 0x2f) < '\0') {
    func_0x000107c3192c(param_1 + 3,param_2[3],param_2[4]);
  }
  else {
    uVar2 = param_2[4];
    uVar1 = param_2[3];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
    param_1[3] = uVar1;
  }
  param_1[6] = param_2[6];
  return param_1;
}



/* Entry: 10a5076c8; end: 10a507863;  */

undefined8 * FUN_10a5076c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bea3d0;
  if (param_1[0x20] != 0) {
    func_0x0001092b4274(param_1 + 0x20);
  }
  func_0x00010a5075e4(param_1 + 0x16);
  *param_1 = &PTR_DAT_110bea3b0;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    func_0x00010a28c31c(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a507864; end: 10a507873;  */

void FUN_10a507864(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bea408;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a507874; end: 10a507893;  */

void FUN_10a507874(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bea408;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a507894; end: 10a507977;  */

/* WARNING: Removing unreachable block (ram,0x00010a5078f4) */

void FUN_10a507894(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x90) == '\x01') {
    func_0x0001094e64a8(param_1 + 0x68);
  }
  lVar2 = *(long *)(param_1 + 0x50);
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x58);
    lVar1 = lVar2;
    if (lVar3 != lVar2) {
      do {
        if (*(long *)(lVar3 + -0x18) != 0) {
          *(long *)(lVar3 + -0x10) = *(long *)(lVar3 + -0x18);
          __ZdlPv();
        }
        func_0x0001094d8004(lVar3 + -0x48);
        lVar3 = lVar3 + -0x80;
      } while (lVar3 != lVar2);
      lVar1 = *(long *)(param_1 + 0x50);
    }
    *(long *)(param_1 + 0x58) = lVar2;
    __ZdlPv(lVar1);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x38);
    __ZdlPv();
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 == 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x28);
  lVar1 = lVar2;
  if (lVar3 != lVar2) {
    do {
      lVar3 = lVar3 + -0x10;
      func_0x00010a50780c();
    } while (lVar3 != lVar2);
    lVar1 = *(long *)(param_1 + 0x20);
  }
  *(long *)(param_1 + 0x28) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10a507978; end: 10a50797b;  */

void FUN_10a507978(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a50797c; end: 10a507a2b;  */

long FUN_10a50797c(long param_1)

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



/* Entry: 10a507a2c; end: 10a507a87;  */

long * FUN_10a507a2c(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x00010a506bf8(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a507a88; end: 10a507b83;  */

void FUN_10a507a88(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1[3] != 0) {
    func_0x00010a28c4ac(param_1,param_1[2]);
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



/* Entry: 10a507b84; end: 10a507de7;  */

undefined1  [16] FUN_10a507b84(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long **pplVar3;
  long lVar4;
  long **pplVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long **pplVar9;
  long **unaff_x25;
  ulong uVar10;
  undefined1 auVar11 [16];
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  pplVar5 = &plStack_68;
  func_0x000107c2b05c(pplVar5,param_2 + 0x20);
  pplVar9 = (long **)param_1[1];
  if (pplVar9 != (long **)0x0) {
    uVar10 = (long)pplVar9 - 1;
    if (((ulong)pplVar9 & uVar10) == 0) {
      unaff_x25 = (long **)(uVar10 & (ulong)pplVar5);
    }
    else {
      unaff_x25 = pplVar5;
      if (pplVar9 <= pplVar5) {
        uVar6 = 0;
        if (pplVar9 != (long **)0x0) {
          uVar6 = (ulong)pplVar5 / (ulong)pplVar9;
        }
        unaff_x25 = (long **)((long)pplVar5 - uVar6 * (long)pplVar9);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      for (plVar7 = (long *)*puVar2; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        pplVar3 = (long **)plVar7[1];
        if (pplVar3 == pplVar5) {
          plVar1 = plVar7 + 2;
          FUN_10a22f138(plVar1,param_2);
          if (((ulong)plVar1 & 1) != 0) {
            uVar8 = 0;
            goto LAB_10a507da4;
          }
        }
        else {
          if (((ulong)pplVar9 & uVar10) == 0) {
            pplVar3 = (long **)((ulong)pplVar3 & uVar10);
          }
          else if (pplVar9 <= pplVar3) {
            uVar6 = 0;
            if (pplVar9 != (long **)0x0) {
              uVar6 = (ulong)pplVar3 / (ulong)pplVar9;
            }
            pplVar3 = (long **)((long)pplVar3 - uVar6 * (long)pplVar9);
          }
          if (pplVar3 != unaff_x25) break;
        }
      }
    }
  }
  uVar8 = *param_4;
  plVar7 = (long *)0xa8;
  __Znwm();
  uStack_58 = 0;
  *plVar7 = 0;
  plVar7[1] = (long)pplVar5;
  plStack_68 = plVar7;
  plStack_60 = param_1;
  FUN_10a22f23c(plVar7 + 2,uVar8);
  plVar7[0x11] = 0;
  plVar7[0x10] = 0;
  plVar7[0x13] = 0;
  plVar7[0x12] = 0;
  *(undefined4 *)(plVar7 + 0x14) = 0x3f800000;
  uStack_58 = CONCAT71(uStack_58._1_7_,1);
  if ((pplVar9 == (long **)0x0) ||
     (*(float *)(param_1 + 4) * (float)pplVar9 < (float)(param_1[3] + 1))) {
    uVar10 = 1;
    if ((long **)0x2 < pplVar9) {
      uVar10 = (ulong)(((ulong)pplVar9 & (long)pplVar9 - 1U) != 0);
    }
    uVar10 = uVar10 | (long)pplVar9 << 1;
    uVar6 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar10 <= uVar6) {
      uVar10 = uVar6;
    }
    FUN_10a22ec88(param_1,uVar10);
    pplVar9 = (long **)param_1[1];
    if (((ulong)pplVar9 & (long)pplVar9 - 1U) == 0) {
      unaff_x25 = (long **)((long)pplVar9 - 1U & (ulong)pplVar5);
    }
    else {
      unaff_x25 = pplVar5;
      if (pplVar9 <= pplVar5) {
        uVar10 = 0;
        if (pplVar9 != (long **)0x0) {
          uVar10 = (ulong)pplVar5 / (ulong)pplVar9;
        }
        unaff_x25 = (long **)((long)pplVar5 - uVar10 * (long)pplVar9);
      }
    }
  }
  lVar4 = *param_1;
  plVar7 = *(long **)(lVar4 + (long)unaff_x25 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 2;
    *plStack_68 = *plVar7;
    *plVar7 = (long)plStack_68;
    *(long **)(lVar4 + (long)unaff_x25 * 8) = plVar7;
    if (*plStack_68 != 0) {
      pplVar5 = *(long ***)(*plStack_68 + 8);
      if (((ulong)pplVar9 & (long)pplVar9 - 1U) == 0) {
        pplVar5 = (long **)((ulong)pplVar5 & (long)pplVar9 - 1U);
      }
      else if (pplVar9 <= pplVar5) {
        uVar10 = 0;
        if (pplVar9 != (long **)0x0) {
          uVar10 = (ulong)pplVar5 / (ulong)pplVar9;
        }
        pplVar5 = (long **)((long)pplVar5 - uVar10 * (long)pplVar9);
      }
      *(long **)(*param_1 + (long)pplVar5 * 8) = plStack_68;
    }
  }
  else {
    *plStack_68 = *plVar7;
    *plVar7 = (long)plStack_68;
  }
  param_1[3] = param_1[3] + 1;
  uVar8 = 1;
  plVar7 = plStack_68;
LAB_10a507da4:
  auVar11._8_8_ = uVar8;
  auVar11._0_8_ = plVar7;
  return auVar11;
}



/* Entry: 10a507de8; end: 10a507e7f;  */

void FUN_10a507de8(long param_1)

{
  func_0x00010a28c264(param_1 + 0xe8);
  func_0x0001092ba41c(param_1 + 0xa0);
  func_0x00010a28c31c(param_1 + 0x90);
  __ZNSt3__15mutexD1Ev(param_1 + 0x50);
  func_0x00010a28c374(param_1 + 0x28);
  func_0x00010a28c474(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a507e80; end: 10a507f67;  */

long FUN_10a507e80(long *param_1,long param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 uStack_41;
  
  puVar1 = &uStack_41;
  func_0x000107c2b05c(puVar1,param_2 + 0x20);
  puVar5 = (undefined1 *)param_1[1];
  if (puVar5 != (undefined1 *)0x0) {
    puVar6 = puVar5 + -1;
    if (((ulong)puVar5 & (ulong)puVar6) == 0) {
      puVar7 = (undefined1 *)((ulong)puVar6 & (ulong)puVar1);
    }
    else {
      puVar7 = puVar1;
      if (puVar5 <= puVar1) {
        uVar2 = 0;
        if (puVar5 != (undefined1 *)0x0) {
          uVar2 = (ulong)puVar1 / (ulong)puVar5;
        }
        puVar7 = puVar1 + -(uVar2 * (long)puVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)puVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        puVar4 = (undefined1 *)plVar3[1];
        if (puVar1 == puVar4) {
          uVar2 = (ulong)(plVar3 + 2);
          FUN_10a22f138(uVar2,param_2);
          if ((uVar2 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)puVar5 & (ulong)puVar6) == 0) {
            puVar4 = (undefined1 *)((ulong)puVar4 & (ulong)puVar6);
          }
          else if (puVar5 <= puVar4) {
            uVar2 = 0;
            if (puVar5 != (undefined1 *)0x0) {
              uVar2 = (ulong)puVar4 / (ulong)puVar5;
            }
            puVar4 = puVar4 + -(uVar2 * (long)puVar5);
          }
          if (puVar4 != puVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10a507f68; end: 10a508293;  */

undefined1  [16] FUN_10a507f68(long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long **pplVar5;
  long **pplVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long **pplVar12;
  long **unaff_x26;
  ulong uVar13;
  undefined1 auVar14 [16];
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  pplVar6 = &plStack_78;
  func_0x000107c2b05c(pplVar6,param_2 + 0x20);
  pplVar12 = (long **)param_1[1];
  if (pplVar12 != (long **)0x0) {
    uVar13 = (long)pplVar12 - 1;
    if (((ulong)pplVar12 & uVar13) == 0) {
      unaff_x26 = (long **)(uVar13 & (ulong)pplVar6);
    }
    else {
      unaff_x26 = pplVar6;
      if (pplVar12 <= pplVar6) {
        uVar9 = 0;
        if (pplVar12 != (long **)0x0) {
          uVar9 = (ulong)pplVar6 / (ulong)pplVar12;
        }
        unaff_x26 = (long **)((long)pplVar6 - uVar9 * (long)pplVar12);
      }
    }
    puVar4 = *(undefined8 **)(*param_1 + (long)unaff_x26 * 8);
    if (puVar4 != (undefined8 *)0x0) {
      for (plVar11 = (long *)*puVar4; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
        pplVar5 = (long **)plVar11[1];
        if (pplVar5 == pplVar6) {
          plVar2 = plVar11 + 2;
          FUN_10a22f138(plVar2,param_2);
          if (((ulong)plVar2 & 1) != 0) {
            uVar3 = 0;
            goto LAB_10a50824c;
          }
        }
        else {
          if (((ulong)pplVar12 & uVar13) == 0) {
            pplVar5 = (long **)((ulong)pplVar5 & uVar13);
          }
          else if (pplVar12 <= pplVar5) {
            uVar9 = 0;
            if (pplVar12 != (long **)0x0) {
              uVar9 = (ulong)pplVar5 / (ulong)pplVar12;
            }
            pplVar5 = (long **)((long)pplVar5 - uVar9 * (long)pplVar12);
          }
          if (pplVar5 != unaff_x26) break;
        }
      }
    }
  }
  plVar11 = (long *)0xe8;
  __Znwm();
  uStack_68 = 0;
  *plVar11 = 0;
  plVar11[1] = (long)pplVar6;
  plStack_78 = plVar11;
  plStack_70 = param_1;
  FUN_10a22f23c(plVar11 + 2,param_3);
  lVar7 = param_4[1];
  lVar10 = *param_4;
  lVar8 = param_4[5];
  plVar11[0x15] = lVar8;
  plVar11[0x11] = lVar7;
  plVar11[0x10] = lVar10;
  *param_4 = 0;
  param_4[1] = 0;
  lVar10 = param_4[2];
  lVar7 = param_4[3];
  uVar13 = param_4[4];
  param_4[3] = 0;
  param_4[4] = 0;
  param_4[2] = 0;
  plVar11[0x12] = lVar10;
  plVar11[0x13] = lVar7;
  plVar11[0x14] = uVar13;
  lVar10 = param_4[6];
  plVar11[0x16] = lVar10;
  *(int *)(plVar11 + 0x17) = (int)param_4[7];
  if (lVar10 != 0) {
    uVar9 = *(ulong *)(lVar8 + 8);
    if ((uVar13 & uVar13 - 1) == 0) {
      uVar9 = uVar9 & uVar13 - 1;
    }
    else if (uVar13 <= uVar9) {
      uVar1 = 0;
      if (uVar13 != 0) {
        uVar1 = uVar9 / uVar13;
      }
      uVar9 = uVar9 - uVar1 * uVar13;
    }
    *(long **)(lVar7 + uVar9 * 8) = plVar11 + 0x15;
    param_4[5] = 0;
    param_4[6] = 0;
  }
  lVar7 = param_4[10];
  lVar10 = param_4[8];
  uVar13 = param_4[9];
  param_4[8] = 0;
  param_4[9] = 0;
  plVar11[0x1a] = lVar7;
  plVar11[0x18] = lVar10;
  plVar11[0x19] = uVar13;
  lVar8 = param_4[0xb];
  plVar11[0x1b] = lVar8;
  *(int *)(plVar11 + 0x1c) = (int)param_4[0xc];
  if (lVar8 != 0) {
    uVar9 = *(ulong *)(lVar7 + 8);
    if ((uVar13 & uVar13 - 1) == 0) {
      uVar9 = uVar9 & uVar13 - 1;
    }
    else {
      uVar1 = 0;
      if (uVar13 != 0) {
        uVar1 = uVar9 / uVar13;
      }
      if (uVar13 <= uVar9) {
        uVar9 = uVar9 - uVar1 * uVar13;
      }
    }
    *(long **)(lVar10 + uVar9 * 8) = plVar11 + 0x1a;
    param_4[10] = 0;
    param_4[0xb] = 0;
  }
  uStack_68 = CONCAT71(uStack_68._1_7_,1);
  if ((pplVar12 == (long **)0x0) ||
     (*(float *)(param_1 + 4) * (float)pplVar12 < (float)(param_1[3] + 1))) {
    uVar13 = 1;
    if ((long **)0x2 < pplVar12) {
      uVar13 = (ulong)(((ulong)pplVar12 & (long)pplVar12 - 1U) != 0);
    }
    uVar13 = uVar13 | (long)pplVar12 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar13 <= uVar9) {
      uVar13 = uVar9;
    }
    FUN_10a4f204c(param_1,uVar13);
    pplVar12 = (long **)param_1[1];
    if (((ulong)pplVar12 & (long)pplVar12 - 1U) == 0) {
      unaff_x26 = (long **)((long)pplVar12 - 1U & (ulong)pplVar6);
    }
    else {
      unaff_x26 = pplVar6;
      if (pplVar12 <= pplVar6) {
        uVar13 = 0;
        if (pplVar12 != (long **)0x0) {
          uVar13 = (ulong)pplVar6 / (ulong)pplVar12;
        }
        unaff_x26 = (long **)((long)pplVar6 - uVar13 * (long)pplVar12);
      }
    }
  }
  lVar10 = *param_1;
  plVar11 = *(long **)(lVar10 + (long)unaff_x26 * 8);
  if (plVar11 == (long *)0x0) {
    plVar11 = param_1 + 2;
    *plStack_78 = *plVar11;
    *plVar11 = (long)plStack_78;
    *(long **)(lVar10 + (long)unaff_x26 * 8) = plVar11;
    if (*plStack_78 != 0) {
      pplVar6 = *(long ***)(*plStack_78 + 8);
      if (((ulong)pplVar12 & (long)pplVar12 - 1U) == 0) {
        pplVar6 = (long **)((ulong)pplVar6 & (long)pplVar12 - 1U);
      }
      else if (pplVar12 <= pplVar6) {
        uVar13 = 0;
        if (pplVar12 != (long **)0x0) {
          uVar13 = (ulong)pplVar6 / (ulong)pplVar12;
        }
        pplVar6 = (long **)((long)pplVar6 - uVar13 * (long)pplVar12);
      }
      *(long **)(*param_1 + (long)pplVar6 * 8) = plStack_78;
    }
  }
  else {
    *plStack_78 = *plVar11;
    *plVar11 = (long)plStack_78;
  }
  param_1[3] = param_1[3] + 1;
  uVar3 = 1;
  plVar11 = plStack_78;
LAB_10a50824c:
  auVar14._8_8_ = uVar3;
  auVar14._0_8_ = plVar11;
  return auVar14;
}



/* Entry: 10a508294; end: 10a508307;  */

void FUN_10a508294(undefined8 *param_1,undefined8 param_2,int param_3)

{
  code *pcVar1;
  int aiStack_20 [2];
  undefined8 *puStack_18;
  
  if (param_1[2] != param_1[3]) {
    aiStack_20[0] = 3;
    puStack_18 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,param_2,aiStack_20);
    if ((3 < aiStack_20[0]) && (puStack_18 != (undefined8 *)0x0)) {
      (**(code **)*puStack_18)();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a508308);
  (*pcVar1)();
}



/* Entry: 10a508308; end: 10a50837f;  */

long * FUN_10a508308(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a508380; end: 10a508423;  */

void FUN_10a508380(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *param_1;
  lVar7 = param_1[2];
  lVar5 = param_1[1];
  if (param_1[2] != 0) {
    plVar1 = (long *)(param_1[2] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = *(long *)(lVar6 + 0x50);
  *(long *)(lVar6 + 0x50) = lVar7;
  *(long *)(lVar6 + 0x48) = lVar5;
  if (lVar4 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  lVar6 = *(long *)(lVar6 + 0x40);
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
        goto LAB_10a508408;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar5 >> 1 & 1) != 0) {
LAB_10a508408:
      (*(code *)param_1[4])(param_1);
      return;
    }
  } while( true );
}



/* Entry: 10a508424; end: 10a50848b;  */

void FUN_10a508424(long param_1)

{
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x10) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a50848c; end: 10a5084db;  */

void FUN_10a50848c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  lVar4 = 0x128;
  __Znwm();
  FUN_10a5084dc();
  lVar6 = lVar4 + 0x18;
  *param_1 = lVar6;
  param_1[1] = lVar4;
  if ((lVar6 != 0) &&
     ((lVar5 = *(long *)(lVar4 + 0x20), lVar5 == 0 || (*(long *)(lVar5 + 8) == -1)))) {
    plVar7 = (long *)param_1[1];
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar5 = *(long *)(lVar4 + 0x20);
    }
    *(long *)lVar6 = lVar6;
    *(long **)(lVar4 + 0x20) = plVar7;
    if (lVar5 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
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
        (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar7);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a5084dc; end: 10a508523;  */

undefined8 * FUN_10a5084dc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110bea458;
  FUN_10a508634(param_1 + 3);
  return param_1;
}



/* Entry: 10a508524; end: 10a508533;  */

void FUN_10a508524(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bea458;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a508534; end: 10a508553;  */

void FUN_10a508534(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bea458;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a508554; end: 10a50862f;  */

void FUN_10a508554(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  func_0x000109d18f34(param_1 + 0x70);
  if (*(long *)(param_1 + 0x68) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    func_0x0001092b4274();
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
  plVar4 = (long *)*(long *)(param_1 + 0x38);
  while (plVar4 != (long *)0x0) {
    lVar6 = *plVar4;
    func_0x00010a4f3fb4(plVar4 + 2);
    __ZdlPv(plVar4);
    plVar4 = (long *)lVar6;
  }
  lVar6 = *(long *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (lVar6 != 0) {
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
  return;
}



/* Entry: 10a508630; end: 10a508633;  */

void FUN_10a508630(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a508634; end: 10a5088e3;  */

long * FUN_10a508634(long *param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined **ppuStack_70;
  undefined *puStack_68;
  undefined **ppuStack_60;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  plVar6 = param_1 + 7;
  param_1[8] = 0;
  *plVar6 = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  ppuStack_70 = &PTR_PTR_1132fed50;
  puStack_68 = &UNK_1053a6a3c;
  ppuStack_60 = &PTR_DAT_110ae9180;
  uVar8 = 0xd;
  FUN_109d228cc(param_1 + 0xb,&UNK_10f65dc97,0xd,1,&ppuStack_70);
  func_0x0001092ba41c(&ppuStack_70);
  FUN_109d1a6fc(&ppuStack_70);
  plVar5 = (long *)*plVar6;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar9 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar9 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar9 & 0x1fffffffc) == 4) {
      do {
        uVar9 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar9 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar9 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  *plVar6 = (long)ppuStack_70;
  puVar7 = (undefined8 *)param_1[8];
  if (puVar7 != (undefined8 *)0x0) {
    plVar5 = param_1 + 8;
    func_0x0001092b4274();
  }
  param_1[8] = (long)puStack_68;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  plVar6 = plVar5;
  if ((puVar7 != (undefined8 *)0x0) &&
     ((plVar6 = (long *)puVar7[1], plVar6 == (long *)0x0 || (plVar6[1] == -1)))) {
    plVar5 = (long *)plVar5[1];
    if (plVar5 != (long *)0x0) {
      plVar6 = plVar5 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar6 = plVar5 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar6 = (long *)puVar7[1];
    }
    *puVar7 = uVar8;
    puVar7[1] = plVar5;
    if (plVar6 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar5 != (long *)0x0) {
      plVar2 = plVar5 + 1;
      do {
        lVar10 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
        return plVar5;
      }
    }
  }
  return plVar6;
}



/* Entry: 10a5088e4; end: 10a508d03;  */

void FUN_10a5088e4(ulong *param_1,ulong param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  ulong *puStack_70;
  
  puVar7 = (undefined8 *)param_1[1];
  puVar18 = (undefined8 *)param_1[2];
  lVar11 = 0;
  if ((long)puVar18 - (long)puVar7 != 0) {
    lVar11 = ((long)puVar18 - (long)puVar7) * 0x200 + -1;
  }
  uVar13 = param_1[4];
  uVar10 = param_1[5];
  uVar8 = uVar10 + uVar13;
  if (param_2 <= lVar11 - uVar8) goto LAB_10a508bdc;
  uVar10 = (ulong)(param_2 != lVar11 - uVar8 || puVar18 == puVar7);
  uVar8 = uVar10;
  if (uVar13 >> 0xc <= uVar10) {
    uVar8 = uVar13 >> 0xc;
  }
  if (uVar13 >> 0xc < uVar10) {
    uVar6 = uVar10 - uVar8;
    lVar11 = (long)puVar18 - (long)puVar7 >> 3;
    if (uVar6 <= (ulong)(((long)(param_1[3] - *param_1) >> 3) - lVar11)) {
      if (uVar6 != 0) {
LAB_10a5089d0:
        if (param_1[3] != param_1[2]) goto code_r0x00010a5089dc;
        lVar11 = uVar8 - uVar10;
        do {
          uVar2 = 0x1000;
          __Znwm(0x1000);
          FUN_10a508efc(param_1,uVar2);
          lVar5 = 0xfff;
          if (param_1[2] - param_1[1] != 8) {
            lVar5 = 0x1000;
          }
          uVar13 = lVar5 + param_1[4];
          param_1[4] = uVar13;
          bVar1 = lVar11 != -1;
          lVar11 = lVar11 + 1;
          uVar8 = uVar10;
        } while (bVar1);
      }
      goto LAB_10a508ba8;
    }
    puVar7 = (undefined8 *)((long)(param_1[3] - *param_1) >> 2);
    if (puVar7 <= (undefined8 *)(uVar6 + lVar11)) {
      puVar7 = (undefined8 *)(uVar6 + lVar11);
    }
    puStack_70 = param_1;
    if (puVar7 == (undefined8 *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = param_2;
      FUN_10a5091fc();
    }
    puStack_88 = puVar7 + (lVar11 - uVar8);
    puStack_78 = puVar7 + uVar6;
    lVar11 = uVar8 - uVar10;
    puStack_90 = puVar7;
    puStack_80 = puStack_88;
    do {
      puVar7 = (undefined8 *)0x1000;
      __Znwm();
      FUN_10a508ffc(&puStack_90);
      bVar1 = lVar11 != -1;
      lVar11 = lVar11 + 1;
    } while (bVar1);
    if (0xfff < uVar13) {
      puVar18 = (undefined8 *)param_1[1];
      uVar13 = uVar8;
      do {
        puVar19 = puStack_80;
        puVar12 = puStack_88;
        puVar14 = puStack_90;
        if (puStack_80 == puStack_78) {
          if (puStack_88 < puStack_90 || (long)puStack_88 - (long)puStack_90 == 0) {
            puVar4 = (undefined8 *)((long)puStack_80 - (long)puStack_90 >> 2);
            if ((long)puStack_80 - (long)puStack_90 == 0) {
              puVar4 = (undefined8 *)0x1;
            }
            puVar3 = puVar4;
            FUN_10a5091fc();
            puStack_88 = puVar3 + ((ulong)puVar4 >> 2);
            lVar11 = (long)puVar19 - (long)puVar12;
            puVar19 = puStack_88;
            if (lVar11 != 0) {
              puVar19 = (undefined8 *)((long)puStack_88 + lVar11);
              puVar4 = puStack_88;
              do {
                *puVar4 = *puVar12;
                lVar11 = lVar11 + -8;
                puVar4 = puVar4 + 1;
                puVar12 = puVar12 + 1;
              } while (lVar11 != 0);
            }
            puStack_78 = puVar3 + (long)puVar7;
            puStack_90 = puVar3;
            puStack_80 = puVar19;
            if (puVar14 != (undefined8 *)0x0) {
              __ZdlPv(puVar14);
            }
          }
          else {
            lVar11 = ((long)puStack_88 - (long)puStack_90 >> 3) + 1;
            puVar14 = puStack_88 + -((ulong)(lVar11 - (lVar11 >> 0x3f)) >> 1);
            lVar11 = (long)puStack_80 - (long)puStack_88;
            if (lVar11 != 0) {
              _memmove(puVar14,puStack_88,lVar11);
              puVar7 = puStack_88;
            }
            puVar19 = (undefined8 *)((long)puVar14 + lVar11);
            puStack_88 = puVar14;
            puStack_80 = puVar19;
          }
        }
        *puVar19 = *puVar18;
        puStack_80 = puStack_80 + 1;
        puVar18 = (undefined8 *)(param_1[1] + 8);
        param_1[1] = (ulong)puVar18;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    uVar13 = param_1[2];
    while (uVar13 != param_1[1]) {
      uVar13 = uVar13 - 8;
      FUN_10a5090f8(&puStack_90,uVar13);
    }
    uVar13 = *param_1;
    param_1[1] = (ulong)puStack_88;
    *param_1 = (ulong)puStack_90;
    param_1[3] = (ulong)puStack_78;
    param_1[2] = (ulong)puStack_80;
    param_1[4] = param_1[4] + uVar8 * -0x1000;
    if (uVar13 != 0) {
      __ZdlPv();
    }
  }
  else {
    param_1[4] = uVar13 + uVar8 * -0x1000;
    if (uVar8 != 0) {
      uVar2 = *puVar7;
      param_1[1] = (ulong)(puVar7 + 1);
      func_0x00010a508d04(param_1,uVar2);
    }
  }
LAB_10a508bd0:
  uVar10 = param_1[5];
  puVar7 = (undefined8 *)param_1[1];
  puVar18 = (undefined8 *)param_1[2];
  uVar8 = param_1[4] + uVar10;
LAB_10a508bdc:
  plVar15 = puVar7 + (uVar8 >> 0xc);
  lVar5 = *plVar15;
  lVar11 = 0;
  if (puVar18 != puVar7) {
    lVar11 = lVar5 + (uVar8 & 0xfff);
  }
  param_2 = (lVar11 - lVar5) + param_2;
  if ((long)param_2 < 1) {
    plVar16 = plVar15 + -(0xfff - param_2 >> 0xc);
    lVar17 = *plVar16 + ((ulong)~(uint)(0xfff - param_2) & 0xfff);
  }
  else {
    plVar16 = plVar15 + (param_2 >> 0xc);
    lVar17 = *plVar16 + (param_2 & 0xfff);
  }
  if (lVar11 != lVar17) {
    do {
      lVar9 = lVar17;
      if (plVar15 != plVar16) {
        lVar9 = lVar5 + 0x1000;
      }
      if (lVar11 == lVar9) {
        lVar9 = 0;
      }
      else {
        lVar9 = lVar9 - lVar11;
        _memset(lVar11,*param_3,lVar9);
      }
      uVar10 = lVar9 + uVar10;
      if (plVar15 == plVar16) break;
      plVar15 = plVar15 + 1;
      lVar11 = *plVar15;
      lVar5 = lVar11;
    } while (lVar11 != lVar17);
    param_1[5] = uVar10;
  }
  return;
code_r0x00010a5089dc:
  uVar2 = 0x1000;
  __Znwm(0x1000);
  func_0x00010a508e00(param_1,uVar2);
  uVar10 = uVar10 - 1;
  if (uVar8 == uVar10) goto code_r0x00010a5089fc;
  goto LAB_10a5089d0;
code_r0x00010a5089fc:
  uVar13 = param_1[4];
LAB_10a508ba8:
  param_1[4] = uVar13 + uVar8 * -0x1000;
  for (; uVar8 != 0; uVar8 = uVar8 - 1) {
    uVar2 = *(undefined8 *)param_1[1];
    param_1[1] = (ulong)((undefined8 *)param_1[1] + 1);
    func_0x00010a508d04(param_1,uVar2);
  }
  goto LAB_10a508bd0;
}



/* Entry: 10a508d04; end: 10a508efb;  */

void FUN_10a508d04(ulong *param_1,undefined8 param_2)

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
      FUN_10a5091fc();
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



/* Entry: 10a508efc; end: 10a508ffb;  */

void FUN_10a508efc(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 == (undefined8 *)*param_1) {
    uVar2 = param_1[2];
    uVar1 = param_1[3];
    if (uVar2 < uVar1) {
      lVar9 = (((long)(uVar1 - uVar2) >> 3) + 1) / 2;
      puVar6 = puVar8 + lVar9;
      if (uVar2 - (long)puVar8 != 0) {
        _memmove(puVar6,puVar8,uVar2 - (long)puVar8);
        uVar2 = param_1[2];
      }
      param_1[1] = (long)puVar6;
      param_1[2] = uVar2 + lVar9 * 8;
      puVar8 = puVar6;
    }
    else {
      lVar9 = (long)(uVar1 - (long)puVar8) >> 2;
      if (uVar1 - (long)puVar8 == 0) {
        lVar9 = 1;
      }
      lVar7 = lVar9 * 2;
      FUN_10a5091fc();
      puVar6 = (undefined8 *)(lVar9 + (lVar7 + 6U & 0xfffffffffffffff8));
      lVar7 = param_1[2] - param_1[1];
      puVar4 = puVar6;
      if (lVar7 != 0) {
        puVar4 = (undefined8 *)((long)puVar6 + lVar7);
        puVar3 = (undefined8 *)param_1[1];
        puVar5 = puVar6;
        do {
          *puVar5 = *puVar3;
          lVar7 = lVar7 + -8;
          puVar3 = puVar3 + 1;
          puVar5 = puVar5 + 1;
        } while (lVar7 != 0);
      }
      lVar7 = *param_1;
      *param_1 = lVar9;
      param_1[1] = (long)puVar6;
      param_1[2] = (long)puVar4;
      param_1[3] = lVar9 + (long)puVar8 * 8;
      puVar8 = puVar6;
      if (lVar7 != 0) {
        __ZdlPv(lVar7);
        puVar8 = (undefined8 *)param_1[1];
      }
    }
  }
  puVar8[-1] = param_2;
  param_1[1] = param_1[1] + -8;
  return;
}



/* Entry: 10a508ffc; end: 10a5090f7;  */

void FUN_10a508ffc(ulong *param_1,undefined8 param_2)

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
      FUN_10a5091fc();
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



/* Entry: 10a5090f8; end: 10a5091fb;  */

void FUN_10a5090f8(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 == (undefined8 *)*param_1) {
    uVar2 = param_1[2];
    uVar1 = param_1[3];
    if (uVar2 < uVar1) {
      lVar9 = (((long)(uVar1 - uVar2) >> 3) + 1) / 2;
      puVar6 = puVar8 + lVar9;
      if (uVar2 - (long)puVar8 != 0) {
        _memmove(puVar6,puVar8,uVar2 - (long)puVar8);
        uVar2 = param_1[2];
      }
      param_1[1] = (long)puVar6;
      param_1[2] = uVar2 + lVar9 * 8;
      puVar8 = puVar6;
    }
    else {
      lVar9 = (long)(uVar1 - (long)puVar8) >> 2;
      if (uVar1 - (long)puVar8 == 0) {
        lVar9 = 1;
      }
      lVar7 = lVar9 * 2;
      FUN_10a5091fc();
      puVar6 = (undefined8 *)(lVar9 + (lVar7 + 6U & 0xfffffffffffffff8));
      lVar7 = param_1[2] - param_1[1];
      puVar4 = puVar6;
      if (lVar7 != 0) {
        puVar4 = (undefined8 *)((long)puVar6 + lVar7);
        puVar3 = (undefined8 *)param_1[1];
        puVar5 = puVar6;
        do {
          *puVar5 = *puVar3;
          lVar7 = lVar7 + -8;
          puVar3 = puVar3 + 1;
          puVar5 = puVar5 + 1;
        } while (lVar7 != 0);
      }
      lVar7 = *param_1;
      *param_1 = lVar9;
      param_1[1] = (long)puVar6;
      param_1[2] = (long)puVar4;
      param_1[3] = lVar9 + (long)puVar8 * 8;
      puVar8 = puVar6;
      if (lVar7 != 0) {
        __ZdlPv(lVar7);
        puVar8 = (undefined8 *)param_1[1];
      }
    }
  }
  puVar8[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}



/* Entry: 10a5091fc; end: 10a5092bb;  */

undefined1  [16] FUN_10a5091fc(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000109ffded8();
  lVar1 = param_1[2];
  if (lVar1 != param_1[1]) {
    param_1[2] = lVar1 + ((param_1[1] - lVar1) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a5092bc; end: 10a509353;  */

long * FUN_10a5092bc(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  param_1[5] = 0;
  lVar3 = (long)puVar1 - (long)puVar4;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar4);
    puVar1 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar4;
    lVar3 = (long)puVar1 - (long)puVar4;
  }
  if (uVar2 == 1) {
    lVar3 = 0x800;
  }
  else {
    if (uVar2 != 2) goto LAB_10a509338;
    lVar3 = 0x1000;
  }
  param_1[4] = lVar3;
LAB_10a509338:
  for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    __ZdlPv(*puVar4);
  }
  lVar3 = param_1[2];
  if (lVar3 != param_1[1]) {
    param_1[2] = lVar3 + ((param_1[1] - lVar3) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a509354; end: 10a509443;  */

long FUN_10a509354(long param_1)

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



/* Entry: 10a509444; end: 10a509447;  */

void FUN_10a509444(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a509448; end: 10a50945b;  */

void FUN_10a509448(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a50945c; end: 10a509473;  */

void FUN_10a50945c(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a50946c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10a509474; end: 10a5094ab;  */

undefined8 FUN_10a509474(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bea4f8);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a5094ac; end: 10a5094af;  */

void FUN_10a5094ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a5094b0; end: 10a509593;  */

long FUN_10a5094b0(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c2b05c();
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
        if (plVar4 == plVar2) {
          plVar4 = param_1;
          func_0x000107c2b068(param_1,plVar3 + 2,param_2);
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



/* Entry: 10a509594; end: 10a5098d7;  */

undefined1  [16]
FUN_10a509594(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x25;
  ulong uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  plVar6 = param_1;
  func_0x000107c2b05c();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      unaff_x25 = (long *)(uVar9 & (ulong)plVar6);
    }
    else {
      unaff_x25 = plVar6;
      if (plVar8 <= plVar6) {
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar6 - uVar5 * (long)plVar8);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      for (plVar7 = (long *)*puVar2; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        plVar3 = (long *)plVar7[1];
        if (plVar3 == plVar6) {
          plVar3 = param_1;
          func_0x000107c2b068(param_1,plVar7 + 2,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar1 = 0;
            goto LAB_10a50986c;
          }
        }
        else {
          if (((ulong)plVar8 & uVar9) == 0) {
            plVar3 = (long *)((ulong)plVar3 & uVar9);
          }
          else if (plVar8 <= plVar3) {
            uVar5 = 0;
            if (plVar8 != (long *)0x0) {
              uVar5 = (ulong)plVar3 / (ulong)plVar8;
            }
            plVar3 = (long *)((long)plVar3 - uVar5 * (long)plVar8);
          }
          if (plVar3 != unaff_x25) break;
        }
      }
    }
  }
  plVar3 = (long *)*param_4;
  plVar7 = (long *)0xc0;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = (long)plVar6;
  if (*(char *)((long)plVar3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar7 + 2,*plVar3,plVar3[1]);
  }
  else {
    lVar10 = plVar3[1];
    lVar4 = *plVar3;
    plVar7[4] = plVar3[2];
    plVar7[3] = lVar10;
    plVar7[2] = lVar4;
  }
  plVar7[6] = 0;
  plVar7[5] = 0;
  plVar7[8] = 0;
  plVar7[7] = 0;
  plVar7[0x17] = 0;
  plVar7[0x14] = 0;
  plVar7[0x13] = 0;
  plVar7[0x16] = 0;
  plVar7[0x15] = 0;
  plVar7[0x10] = 0;
  plVar7[0xf] = 0;
  plVar7[0x12] = 0;
  plVar7[0x11] = 0;
  plVar7[0xc] = 0;
  plVar7[0xb] = 0;
  plVar7[0xe] = 0;
  plVar7[0xd] = 0;
  plVar7[10] = 0;
  plVar7[9] = 0;
  *(undefined4 *)(plVar7 + 8) = 0x3e99999a;
  *(undefined1 *)((long)plVar7 + 0x44) = 1;
  func_0x000107c2b054(plVar7 + 9,"");
  plVar7[0x16] = 0;
  *(undefined4 *)(plVar7 + 0xc) = 0x40;
  *(undefined1 *)((long)plVar7 + 100) = 0;
  *(undefined4 *)(plVar7 + 0xd) = 0x3f800000;
  *(undefined2 *)((long)plVar7 + 0x6c) = 0x101;
  *(undefined1 *)((long)plVar7 + 0x6e) = 0;
  *(undefined4 *)(plVar7 + 0xe) = 0x80;
  *(undefined1 *)((long)plVar7 + 0x74) = 0;
  *(undefined4 *)(plVar7 + 0xf) = 0x3dcccccd;
  *(undefined2 *)((long)plVar7 + 0x7c) = 0;
  plVar7[0x10] = 0;
  *(undefined8 *)((long)plVar7 + 0x95) = 0;
  plVar7[0x12] = 0;
  plVar7[0x11] = 0;
  plVar7[0x14] = 0x300000168;
  plVar7[0x17] = 0;
  plVar7[0x15] = (long)(plVar7 + 0x16);
  if ((plVar8 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar8 < (float)(param_1[3] + 1))
     ) {
    uVar9 = 1;
    if ((long *)0x2 < plVar8) {
      uVar9 = (ulong)(((ulong)plVar8 & (long)plVar8 - 1U) != 0);
    }
    uVar9 = uVar9 | (long)plVar8 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar9 <= uVar5) {
      uVar9 = uVar5;
    }
    FUN_10a22e06c(param_1,uVar9);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar8 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x25 = plVar6;
      if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
    }
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + (long)unaff_x25 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *plVar7 = *plVar6;
    *plVar6 = (long)plVar7;
    *(long **)(lVar4 + (long)unaff_x25 * 8) = plVar6;
    if (*plVar7 != 0) {
      plVar6 = *(long **)(*plVar7 + 8);
      if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar8 - 1U);
      }
      else if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        plVar6 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
      *(long **)(*param_1 + (long)plVar6 * 8) = plVar7;
    }
  }
  else {
    *plVar7 = *plVar6;
    *plVar6 = (long)plVar7;
  }
  param_1[3] = param_1[3] + 1;
  uVar1 = 1;
LAB_10a50986c:
  auVar11._8_8_ = uVar1;
  auVar11._0_8_ = plVar7;
  return auVar11;
}



/* Entry: 10a5098d8; end: 10a509983;  */

void FUN_10a5098d8(undefined8 *param_1)

{
  func_0x0001095b23b4(param_1 + 0x13);
  FUN_10a1f3f34(param_1 + 0x10,param_1[0x11]);
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a509984; end: 10a509a67;  */

long FUN_10a509984(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c2b05c();
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
        if (plVar4 == plVar2) {
          plVar4 = param_1;
          func_0x000107c2b068(param_1,plVar3 + 2,param_2);
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



/* Entry: 10a509a68; end: 10a509aaf;  */

void FUN_10a509a68(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10a502024(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a509ab0; end: 10a509b73;  */

long FUN_10a509ab0(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_38;
  
  plVar1 = param_1;
  FUN_10a503944(param_1,&uStack_38,param_2);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    param_3 = (undefined8 *)*param_3;
    lVar2 = 0x50;
    __Znwm();
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      func_0x000107c3192c(lVar2 + 0x20,*param_3,param_3[1]);
    }
    else {
      uVar4 = param_3[1];
      uVar3 = *param_3;
      *(undefined8 *)(lVar2 + 0x30) = param_3[2];
      *(undefined8 *)(lVar2 + 0x28) = uVar4;
      *(undefined8 *)(lVar2 + 0x20) = uVar3;
    }
    *(undefined8 *)(lVar2 + 0x48) = 0;
    *(undefined8 *)(lVar2 + 0x40) = 0;
    *(undefined8 **)(lVar2 + 0x38) = (undefined8 *)(lVar2 + 0x40);
    FUN_10a5038f0(param_1,uStack_38,plVar1,lVar2);
  }
  return lVar2;
}



/* Entry: 10a509b74; end: 10a509c6b;  */

long * FUN_10a509b74(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar2;
  plVar3 = plVar2;
  if (plVar4 != (long *)0x0) {
    do {
      plVar1 = plVar4 + 4;
      FUN_10a003e3c(plVar1,param_2);
      if (-1 < (char)plVar1) {
        plVar3 = plVar4;
      }
      plVar4 = *(long **)((long)plVar4 + ((ulong)plVar1 >> 4 & 8));
    } while (plVar4 != (long *)0x0);
    if ((plVar3 != plVar2) && (FUN_10a003e3c(param_2,plVar3 + 4), ((uint)param_2 >> 7 & 1) == 0)) {
      return plVar3;
    }
  }
  return plVar2;
}



/* Entry: 10a509c6c; end: 10a509d1b;  */

long FUN_10a509c6c(long param_1)

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



/* Entry: 10a509d1c; end: 10a509e83;  */

long FUN_10a509d1c(long param_1)

{
  long lStack_28;
  
  FUN_10a4e750c();
  if ((*(char *)(param_1 + 0x348) == '\x01') && (*(long *)(param_1 + 0x310) != 0)) {
    *(long *)(param_1 + 0x318) = *(long *)(param_1 + 0x310);
    __ZdlPv();
  }
  FUN_10a230444(param_1 + 0x280);
  if (*(char *)(param_1 + 0x260) == '\x01') {
    func_0x00010a22eba0(param_1 + 0x238);
  }
  if (*(char *)(param_1 + 0x228) == '\x01') {
    func_0x00010a22dfb0(param_1 + 0x210,*(undefined8 *)(param_1 + 0x218));
  }
  if (*(char *)(param_1 + 0x200) == '\x01') {
    func_0x00010a22c9fc(param_1 + 0x1d8);
  }
  if (*(char *)(param_1 + 0x1c0) == '\x01') {
    lStack_28 = param_1 + 0x1a8;
    FUN_10a22ff44(&lStack_28);
  }
  if (*(char *)(param_1 + 0x198) == '\x01') {
    lStack_28 = param_1 + 0x180;
    FUN_10a22ff44(&lStack_28);
  }
  if (*(char *)(param_1 + 0x170) == '\x01') {
    *(undefined ***)(param_1 + 0x138) = &PTR_FUN_110bef348;
    func_0x00010a22fc28(param_1 + 0x148);
  }
  FUN_10a22d294(param_1 + 0x70);
  if ((*(char *)(param_1 + 0x30) == '\x01') && (*(char *)(param_1 + 0x2f) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_1 + 0x18));
  }
  return param_1;
}



/* Entry: 10a509e84; end: 10a509f2b;  */

undefined8 * FUN_10a509e84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bea520;
  (**(code **)param_1[0xf])();
  (**(code **)param_1[7])();
  FUN_10a26cc38(param_1 + 3);
  return param_1;
}



/* Entry: 10a509f2c; end: 10a50a16f;  */

/* WARNING: Removing unreachable block (ram,0x00010a50a104) */
/* WARNING: Removing unreachable block (ram,0x00010a50a108) */
/* WARNING: Removing unreachable block (ram,0x00010a50a110) */
/* WARNING: Removing unreachable block (ram,0x00010a50a118) */
/* WARNING: Removing unreachable block (ram,0x00010a50a11c) */

void FUN_10a509f2c(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 in_x7;
  long lVar6;
  long lVar7;
  undefined8 uStack_50;
  long *plStack_48;
  
  puVar5 = (undefined8 *)0x228;
  __Znwm();
  lVar7 = param_3;
  if (*(long *)(param_2 + 8) != 0) {
    lVar7 = *(long *)(param_2 + 8);
  }
  plStack_48 = *(long **)(param_2 + 0x20);
  uStack_50 = *(undefined8 *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x20) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *puVar5 = &PTR_FUN_110bba0b8;
  func_0x0001098bae4c(puVar5,&UNK_10e4a6ac7,0x29,param_3,lVar7,puVar5 + 0x19,puVar5 + 0x3b,in_x7,0,0
                      ,&uStack_50);
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  *puVar5 = &PTR_FUN_110bba0b8;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  puVar5[0x1c] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x20] = 0;
  puVar5[0x1f] = 0;
  puVar5[0x19] = &PTR_FUN_110bba108;
  puVar5[0x21] = 0;
  puVar5[0x22] = 0;
  puVar5[0x27] = 0;
  puVar5[0x26] = 0;
  puVar5[0x29] = 0;
  puVar5[0x28] = 0;
  puVar5[0x2b] = 0;
  puVar5[0x2a] = 0;
  puVar5[0x23] = 0;
  puVar5[0x24] = &PTR_DAT_110bba1c0;
  puVar5[0x25] = &UNK_110bba190;
  puVar5[0x2c] = 0;
  puVar5[0x2d] = 0;
  puVar5[0x2f] = &PTR_DAT_110bba1c0;
  puVar5[0x30] = &UNK_110bba190;
  puVar5[0x34] = 0;
  puVar5[0x33] = 0;
  puVar5[0x36] = 0;
  puVar5[0x35] = 0;
  puVar5[0x32] = 0;
  puVar5[0x31] = 0;
  puVar5[0x2e] = 0;
  puVar5[0x37] = 0;
  puVar5[0x38] = 0;
  puVar5[0x39] = 0;
  *(undefined2 *)(puVar5 + 0x3a) = 0;
  lVar7 = puVar5[0xc];
  if (lVar7 == 0) {
    bVar4 = false;
    lVar6 = param_2 + 0x28;
  }
  else {
    bVar4 = lVar7 != puVar5[0xb];
    lVar6 = 0;
    if (!bVar4) {
      lVar6 = param_2 + 0x28;
    }
  }
  *(undefined2 *)(puVar5 + 0x3c) = 0;
  puVar5[0x3f] = FUN_10a286930;
  puVar5[0x40] = &UNK_110bba260;
  puVar5[0x44] = 0;
  puVar5[0x43] = 0;
  puVar5[0x42] = 0;
  puVar5[0x41] = 0;
  puVar5[0x3b] = &PTR_FUN_110bba240;
  if ((!bVar4) && (*(char *)(*(long *)(lVar6 + 0x10) + 8) == '\x01')) {
    puVar5[0x44] = lVar6 + 8;
  }
  if ((lVar7 == 0) || (lVar7 == puVar5[0xb])) {
    *(undefined1 *)((long)puVar5 + 0x1d1) = 1;
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 10a50a170; end: 10a50a217;  */

undefined8 * FUN_10a50a170(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bea560;
  (**(code **)param_1[0x10])();
  (**(code **)param_1[8])();
  FUN_10a26cc38(param_1 + 3);
  return param_1;
}



/* Entry: 10a50a218; end: 10a50a507;  */

/* WARNING: Removing unreachable block (ram,0x00010a50a49c) */
/* WARNING: Removing unreachable block (ram,0x00010a50a4a0) */
/* WARNING: Removing unreachable block (ram,0x00010a50a4a8) */
/* WARNING: Removing unreachable block (ram,0x00010a50a4b0) */
/* WARNING: Removing unreachable block (ram,0x00010a50a4b4) */

void FUN_10a50a218(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 in_x7;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_50;
  long *plStack_48;
  
  puVar5 = (undefined8 *)0x248;
  __Znwm();
  lVar8 = param_3;
  if (*(long *)(param_2 + 8) != 0) {
    lVar8 = *(long *)(param_2 + 8);
  }
  plStack_48 = *(long **)(param_2 + 0x20);
  uStack_50 = *(undefined8 *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x20) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *puVar5 = &PTR_FUN_110bea5a0;
  func_0x0001098bae4c(puVar5,&UNK_10e4bc31c,0x20,param_3,lVar8,puVar5 + 0x19,puVar5 + 0x3f,in_x7,0,0
                      ,&uStack_50);
  plVar9 = plStack_48;
  plVar1 = (long *)(param_2 + 0x28);
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
    do {
      lVar8 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  *puVar5 = &PTR_FUN_110bea5a0;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  puVar5[0x1c] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x20] = 0;
  puVar5[0x1f] = 0;
  puVar5[0x19] = &PTR_FUN_110be9988;
  puVar5[0x21] = 0;
  puVar5[0x23] = 0;
  puVar5[0x22] = 0;
  puVar5[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x27) = 0x40000000;
  puVar5[0x24] = &PTR_FUN_110bea610;
  puVar5[0x25] = &UNK_110bea5e0;
  puVar5[0x28] = 0;
  puVar5[0x29] = 0;
  puVar5[0x2c] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x2d) = 0x40000000;
  puVar5[0x2a] = &PTR_FUN_110bea610;
  puVar5[0x2b] = &UNK_110bea5e0;
  *(undefined1 *)(puVar5 + 0x3e) = 0;
  puVar5[0x2e] = 0;
  puVar5[0x2f] = 0;
  *(undefined1 *)(puVar5 + 0x30) = 0;
  lVar8 = puVar5[0xc];
  if (lVar8 == 0) {
    bVar4 = false;
    plVar9 = plVar1;
  }
  else {
    bVar4 = lVar8 != puVar5[0xb];
    plVar9 = (long *)0x0;
    if (!bVar4) {
      plVar9 = plVar1;
    }
  }
  *(undefined2 *)(puVar5 + 0x40) = 0;
  puVar5[0x43] = 0x10a50aa98;
  puVar5[0x44] = &UNK_110be9a10;
  puVar5[0x48] = 0;
  puVar5[0x47] = 0;
  puVar5[0x46] = 0;
  puVar5[0x45] = 0;
  puVar5[0x3f] = &PTR_DAT_110bea650;
  if ((!bVar4) && (*(char *)(plVar9[3] + 8) == '\x01')) {
    puVar5[0x48] = plVar9 + 2;
  }
  if ((lVar8 == 0) || (lVar8 == puVar5[0xb])) {
    lVar10 = *plVar1;
    puVar7 = *(undefined8 **)(lVar10 + 0x490);
    lVar8 = puVar7[1];
    if (lVar8 == 0) {
      *(undefined2 *)(puVar5 + 0x30) = 0;
      puVar5[0x31] = 0;
      puVar5[0x32] = 0;
    }
    else {
      uVar11 = *puVar7;
      plVar1 = (long *)(lVar8 + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      *(undefined2 *)(puVar5 + 0x30) = 0;
      puVar5[0x31] = 0;
      lVar6 = lVar8;
      __ZNSt3__119__shared_weak_count4lockEv();
      puVar5[0x32] = lVar6;
      if (lVar6 != 0) {
        puVar5[0x31] = uVar11;
      }
    }
    puVar5[0x33] = lVar10 + 0x408;
    *(undefined2 *)(puVar5 + 0x34) = 0;
    *(undefined4 *)((long)puVar5 + 0x1a4) = 0x3f800000;
    puVar5[0x35] = 0;
    puVar5[0x36] = 0;
    *(undefined4 *)(puVar5 + 0x37) = 0x3f800000;
    *(undefined8 *)((long)puVar5 + 0x1c4) = 0;
    *(undefined8 *)((long)puVar5 + 0x1bc) = 0;
    *(undefined4 *)((long)puVar5 + 0x1cc) = 0x3f800000;
    puVar5[0x3a] = 0;
    puVar5[0x3b] = 0;
    puVar5[0x3d] = 0;
    puVar5[0x3c] = 0x3f800000;
    if (lVar8 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv(lVar8);
    }
    *(undefined1 *)(puVar5 + 0x3e) = 1;
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 10a50a508; end: 10a50a657;  */

undefined8 * FUN_10a50a508(undefined8 *param_1)

{
  ulong *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  ulong uVar7;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bea5a0;
  if (*(char *)(param_1 + 0x3e) == '\x01') {
    func_0x00010a2941cc(param_1 + 0x31);
  }
  FUN_10a232e34(param_1 + 0x2e);
  FUN_10a232e34(param_1 + 0x28);
  param_1[0x19] = &PTR_FUN_110be9988;
  func_0x00010a4fb5bc(param_1 + 0x21);
  func_0x0001098bba44(param_1 + 0x19);
  *param_1 = &PTR_DAT_110b17ab0;
  if ((*(char *)(param_1 + 0x18) == '\x01') && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
    lVar6 = param_1[0xb];
    lVar2 = *(long *)(lVar6 + 0x148);
    if (-1 < *(char *)(lVar6 + 0x15f)) {
      lVar2 = lVar6 + 0x148;
    }
    func_0x00010ae06f08(1,4,&UNK_10f585d39,&UNK_10f585e3d,0x15,&UNK_10f585e89,in_x6,in_x7,
                        &UNK_10f585f66,lVar2,param_1[1]);
  }
  func_0x0001098ae07c(param_1 + 0x16);
  plVar5 = (long *)param_1[0x12];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 0x200000000;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (uVar7 >> 0x21 == 1) {
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
  *param_1 = &PTR_DAT_110b17b10;
  plVar5 = (long *)param_1[10];
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
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  puStack_28 = param_1 + 3;
  func_0x0001098ad298(&puStack_28);
  return param_1;
}



/* Entry: 10a50a658; end: 10a50a7e3;  */

uint FUN_10a50a658(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puStack_50;
  long *plStack_48;
  
  lVar11 = *(long *)(param_1 + 0x70);
  lVar2 = param_1 + 0x150;
  if (lVar11 != param_1 + 0x120) {
    lVar2 = param_1 + 0x120;
  }
  *(long *)(param_1 + 0x78) = lVar2;
  func_0x00010a286b48(lVar2 + 0x20);
  puVar7 = (undefined8 *)0x38;
  __Znwm();
  lVar10 = *(long *)(param_1 + 0x108);
  lVar3 = *(long *)(param_1 + 0x110);
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  FUN_10a051a50();
  uVar12 = *(undefined8 *)(lVar10 + 0x20);
  uVar9 = *(undefined8 *)(lVar10 + 0x18);
  uVar13 = *(undefined8 *)(lVar10 + 0x25);
  *(undefined8 *)((long)puVar7 + 0x2d) = *(undefined8 *)(lVar10 + 0x2d);
  *(undefined8 *)((long)puVar7 + 0x25) = uVar13;
  puVar7[4] = uVar12;
  puVar7[3] = uVar9;
  while (lVar10 = lVar10 + 0x38, lVar10 != lVar3) {
    FUN_10aaaf6e4(puVar7);
  }
  plVar8 = (long *)0x20;
  puStack_50 = puVar7;
  __Znwm();
  *plVar8 = (long)&PTR_FUN_110bea680;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar8[3] = (long)puVar7;
  plStack_48 = plVar8;
  FUN_10a286fec(lVar2 + 0x20,&puStack_50);
  plVar8 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar10 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  if (lVar11 == 0) {
    uVar6 = 1;
  }
  else {
    uVar9 = *(undefined8 *)(lVar11 + 0x20);
    FUN_10a4fb6f8(uVar9,*(undefined8 *)(lVar2 + 0x20));
    uVar6 = (uint)uVar9 ^ 1;
  }
  return uVar6;
}



/* Entry: 10a50a7e4; end: 10a50a963;  */

/* WARNING: Removing unreachable block (ram,0x00010a50a8d8) */
/* WARNING: Removing unreachable block (ram,0x00010a50a8dc) */
/* WARNING: Removing unreachable block (ram,0x00010a50a8e4) */
/* WARNING: Removing unreachable block (ram,0x00010a50a8ec) */
/* WARNING: Removing unreachable block (ram,0x00010a50a8f8) */
/* WARNING: Removing unreachable block (ram,0x00010a50a900) */
/* WARNING: Removing unreachable block (ram,0x00010a50a908) */
/* WARNING: Removing unreachable block (ram,0x00010a50a90c) */

void FUN_10a50a7e4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puStack_48;
  
  lVar8 = *(long *)(param_2 + 0x70);
  uVar7 = *(undefined8 *)(lVar8 + 0x20);
  puVar5 = (undefined8 *)0xa0;
  __Znwm();
  puVar6 = puVar5 + 3;
  *(undefined2 *)puVar6 = 4;
  puVar5[2] = 0;
  puVar5[1] = 0x200000006;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[9] = 0;
  puVar5[8] = 0;
  puVar5[0xb] = 0;
  puVar5[10] = 0;
  puVar5[0xd] = 0;
  puVar5[0xc] = 0;
  puVar5[0xf] = 0;
  puVar5[0xe] = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = puVar6;
  puVar5[0x12] = 0;
  *puVar5 = &PTR_DAT_110ae91c0;
  *(undefined2 *)(puVar5 + 0x13) = 0;
  puStack_48 = puVar5;
  if ((*(byte *)(param_2 + 0x1f0) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a50a934);
    (*pcVar4)();
  }
  FUN_10ace9d48(param_2 + 0x180,param_2,lVar8 + 0x10,uVar7);
  plVar1 = puVar5 + 2;
  do {
    lVar8 = *plVar1;
    if (lVar8 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(puVar6);
        goto LAB_10a50a8b8;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar8 >> 1 & 1) != 0) {
LAB_10a50a8b8:
      *param_1 = puVar5;
      func_0x0001092b4274(&puStack_48,puVar5);
      return;
    }
  } while( true );
}



/* Entry: 10a50a964; end: 10a50a9b7;  */

void FUN_10a50a964(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR____cxa_pure_virtual_110b17f40;
  param_2[1] = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x18);
  param_2[2] = uVar4;
  *param_2 = &PTR_FUN_110bea610;
  lVar5 = *(long *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  param_2[4] = uVar4;
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
  return;
}



/* Entry: 10a50a9b8; end: 10a50aa3b;  */

void FUN_10a50a9b8(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uStack_34;
  
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  FUN_10a4fb648(uVar2,*(undefined8 *)(param_2 + 0x20));
  if ((int)uVar2 == 0) {
    uStack_34 = 0x40000000;
  }
  else {
    lVar1 = 0x10;
    if (param_4 != 0) {
      lVar1 = 0x18;
    }
    uStack_34 = *(undefined4 *)(param_2 + lVar1);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_10a26d5a0(param_1,&uStack_34,&stack0xffffffffffffffd0,1);
  return;
}



/* Entry: 10a50aa3c; end: 10a50aab3;  */

void FUN_10a50aa3c(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_FUN_110bea610;
  param_1[1] = &UNK_110bea5e0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



/* Entry: 10a50aab4; end: 10a50aaeb;  */

void FUN_10a50aab4(long *param_1)

{
  if (param_1 != (long *)0x0) {
    if (*param_1 != 0) {
      param_1[1] = *param_1;
      __ZdlPv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a50aaec; end: 10a50aaef;  */

void FUN_10a50aaec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a50aaf0; end: 10a50ab03;  */

void FUN_10a50aaf0(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a50ab04; end: 10a50ab0b;  */

void FUN_10a50ab04(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
    if (*plVar1 != 0) {
      plVar1[1] = *plVar1;
      __ZdlPv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar1);
    return;
  }
  return;
}



/* Entry: 10a50ab0c; end: 10a50ab43;  */

undefined8 FUN_10a50ab0c(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bea6c0);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a50ab44; end: 10a50ab47;  */

void FUN_10a50ab44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a50ab48; end: 10a50abef;  */

undefined8 * FUN_10a50ab48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bea6e0;
  (**(code **)param_1[0xf])();
  (**(code **)param_1[7])();
  FUN_10a26cc38(param_1 + 3);
  return param_1;
}



/* Entry: 10a50abf0; end: 10a50b1bb;  */

/* WARNING: Removing unreachable block (ram,0x00010a50b09c) */
/* WARNING: Removing unreachable block (ram,0x00010a50b0a0) */
/* WARNING: Removing unreachable block (ram,0x00010a50b0a8) */
/* WARNING: Removing unreachable block (ram,0x00010a50b0b0) */
/* WARNING: Removing unreachable block (ram,0x00010a50b0b4) */

void FUN_10a50abf0(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined **ppuVar9;
  undefined8 in_x7;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  puVar7 = (undefined8 *)0x1e8;
  __Znwm();
  lVar11 = param_3;
  if (*(long *)(param_2 + 8) != 0) {
    lVar11 = *(long *)(param_2 + 8);
  }
  uStack_d0 = *(undefined8 *)(param_2 + 0x18);
  plStack_c8 = *(long **)(param_2 + 0x20);
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x20) + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  *puVar7 = &PTR_FUN_110bea720;
  func_0x0001098bae4c(puVar7,&UNK_10e4bc5f5,0x23,param_3,lVar11,puVar7 + 0x19,puVar7 + 0x33,in_x7,0,
                      0,&uStack_d0);
  plVar1 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    plVar2 = plStack_c8 + 1;
    do {
      lVar11 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  puVar7[0x1c] = 0;
  puVar7[0x1b] = 0;
  puVar7[0x1e] = 0;
  puVar7[0x1d] = 0;
  puVar7[0x20] = 0;
  puVar7[0x1f] = 0;
  *puVar7 = &PTR_FUN_110bea720;
  *(undefined1 *)(puVar7 + 0x1a) = 0;
  puVar7[0x19] = &PTR_FUN_110bea770;
  puVar7[0x21] = 0;
  puVar7[0x23] = 0;
  puVar7[0x22] = 0;
  puVar7[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar7 + 0x27) = 0x40000000;
  puVar7[0x24] = &PTR_DAT_110bea828;
  puVar7[0x25] = &UNK_110bea7f8;
  puVar7[0x28] = 0;
  puVar7[0x29] = 0;
  puVar7[0x2c] = 0x4000000040000000;
  *(undefined4 *)(puVar7 + 0x2d) = 0x40000000;
  puVar7[0x2a] = &PTR_DAT_110bea828;
  puVar7[0x2b] = &UNK_110bea7f8;
  *(undefined1 *)(puVar7 + 0x32) = 0;
  puVar7[0x2e] = 0;
  puVar7[0x2f] = 0;
  *(undefined1 *)(puVar7 + 0x30) = 0;
  lVar11 = puVar7[0xc];
  if (lVar11 == 0) {
    bVar6 = false;
    lVar10 = param_2 + 0x28;
  }
  else {
    bVar6 = lVar11 != puVar7[0xb];
    lVar10 = 0;
    if (!bVar6) {
      lVar10 = param_2 + 0x28;
    }
  }
  *(undefined2 *)(puVar7 + 0x34) = 0;
  puVar7[0x37] = 0x10a50c298;
  puVar7[0x38] = &UNK_110be9a10;
  puVar7[0x39] = 0;
  puVar7[0x3a] = 0;
  puVar7[0x3b] = 0;
  puVar7[0x3c] = 0;
  puVar7[0x33] = &PTR_FUN_110bea868;
  if ((!bVar6) && (*(char *)(*(long *)(lVar10 + 0x10) + 8) == '\x01')) {
    puVar7[0x3c] = lVar10 + 8;
  }
  if ((lVar11 == 0) || (lVar11 == puVar7[0xb])) {
    puVar7[0x30] = &PTR_FUN_110be8300;
    puVar7[0x31] = 0;
    puVar8 = (undefined4 *)0x3f0;
    __Znwm();
    *(undefined8 *)(puVar8 + 2) = 0;
    *puVar8 = 0x5a;
    puVar8[4] = 0xffffffff;
    puVar8[6] = 0xffffffff;
    *(undefined8 *)(puVar8 + 7) = 0;
    auVar12 = NEON_fmov(0xbf800000,4);
    *(long *)(puVar8 + 0xb) = auVar12._8_8_;
    *(long *)(puVar8 + 9) = auVar12._0_8_;
    *(undefined8 *)(puVar8 + 0xd) = 0x7fc000007fc00000;
    puVar8[0xf] = 0x3f800000;
    *(undefined8 *)(puVar8 + 0x10) = 0;
    *(undefined8 *)(puVar8 + 0x12) = 0;
    puVar8[0x14] = 0x3f800000;
    *(undefined8 *)(puVar8 + 0x17) = 0;
    *(undefined8 *)(puVar8 + 0x15) = 0;
    puVar8[0x19] = 0x3f800000;
    *(undefined8 *)(puVar8 + 0x1a) = 0;
    *(undefined8 *)(puVar8 + 0x1c) = 0;
    puVar8[0x1e] = 0x3f800000;
    *(undefined8 *)(puVar8 + 0x1f) = 0;
    *(undefined8 *)(puVar8 + 0x24) = 0;
    *(undefined8 *)(puVar8 + 0x22) = 0;
    *(undefined8 *)(puVar8 + 0x34) = 0;
    *(undefined8 *)(puVar8 + 0x28) = 0;
    *(undefined8 *)(puVar8 + 0x26) = 0x3f800000;
    *(undefined8 *)(puVar8 + 0x2c) = 0;
    *(undefined8 *)(puVar8 + 0x2a) = 0x3f800000;
    puVar8[0x2e] = 0x3f800000;
    *(undefined8 *)(puVar8 + 0x43) = 0;
    *(undefined8 *)(puVar8 + 0x41) = 0x3f800000;
    *(undefined8 *)(puVar8 + 0x47) = 0;
    *(undefined8 *)(puVar8 + 0x45) = 0x3f800000;
    *(undefined8 *)(puVar8 + 0x58) = 0x3f80000000000000;
    *(undefined8 *)(puVar8 + 0x56) = 0;
    *(undefined8 *)(puVar8 + 0x54) = 0x3f800000;
    *(undefined8 *)(puVar8 + 0x52) = 0;
    *(undefined8 *)(puVar8 + 0x50) = 0;
    *(undefined8 *)(puVar8 + 0x4e) = 0x3f80000000000000;
    *(undefined8 *)(puVar8 + 0x30) = 0x3f80000000000000;
    puVar8[0x32] = 0x40000000;
    *(undefined1 *)(puVar8 + 0x3c) = 0;
    *(undefined1 *)(puVar8 + 0x3d) = 0;
    *(undefined8 *)(puVar8 + 0x36) = 0;
    *(undefined8 *)(puVar8 + 0x38) = 0;
    *(undefined1 *)(puVar8 + 0x3a) = 0;
    puVar8[0x3e] = 0x3f800000;
    *(undefined8 *)(puVar8 + 0x3f) = 0;
    puVar8[0x49] = 0x3f800000;
    *(undefined8 *)(puVar8 + 0x4c) = 0;
    *(undefined8 *)(puVar8 + 0x4a) = 0x3f800000;
    *(undefined8 *)(puVar8 + 0x5a) = 0x3f80000040400000;
    uStack_b8 = 1;
    *(undefined8 *)(puVar8 + 0x5e) = 0;
    *(undefined8 *)(puVar8 + 0x5c) = 0;
    *(undefined8 *)(puVar8 + 0x62) = 0;
    *(undefined8 *)(puVar8 + 0x60) = 0;
    *(undefined8 *)(puVar8 + 0x66) = 0;
    *(undefined8 *)(puVar8 + 100) = 0;
    FUN_10a5088e4(puVar8 + 0x5c,10,&uStack_b8);
    puVar3 = (undefined8 *)(puVar8 + 0x69);
    *(undefined2 *)(puVar8 + 0x68) = 0;
    *(undefined8 *)(puVar8 + 0x6b) = 0;
    *puVar3 = 0x3f800000;
    *(undefined8 *)(puVar8 + 0x6f) = 0;
    *(undefined8 *)(puVar8 + 0x6d) = 0x3f80000000000000;
    *(undefined8 *)(puVar8 + 0x73) = 0x3f800000;
    *(undefined8 *)(puVar8 + 0x71) = 0;
    *(undefined8 *)(puVar8 + 0x77) = 0x3f80000000000000;
    *(undefined8 *)(puVar8 + 0x75) = 0;
    *(undefined8 *)(puVar8 + 0x7b) = 0;
    *(undefined8 *)(puVar8 + 0x79) = 0x3f800000;
    *(undefined8 *)(puVar8 + 0x7f) = 0;
    *(undefined8 *)(puVar8 + 0x7d) = 0x3f80000000000000;
    *(undefined8 *)(puVar8 + 0x83) = 0x3f800000;
    *(undefined8 *)(puVar8 + 0x81) = 0;
    *(undefined8 *)(puVar8 + 0x87) = 0x3f80000000000000;
    *(undefined8 *)(puVar8 + 0x85) = 0;
    *(undefined8 *)(puVar8 + 0x8b) = 0;
    *(undefined8 *)(puVar8 + 0x89) = 0x3f800000;
    *(undefined8 *)(puVar8 + 0x8f) = 0;
    *(undefined8 *)(puVar8 + 0x8d) = 0x3f80000000000000;
    *(undefined8 *)(puVar8 + 0x93) = 0x3f800000;
    *(undefined8 *)(puVar8 + 0x91) = 0;
    *(undefined8 *)(puVar8 + 0x97) = 0x3f80000000000000;
    *(undefined8 *)(puVar8 + 0x95) = 0;
    *(undefined8 *)(puVar8 + 0x9b) = 0;
    *(undefined8 *)(puVar8 + 0x99) = 0x3f800000;
    *(undefined8 *)(puVar8 + 0x9f) = 0;
    *(undefined8 *)(puVar8 + 0x9d) = 0x3f80000000000000;
    *(undefined8 *)(puVar8 + 0xa3) = 0x3f800000;
    *(undefined8 *)(puVar8 + 0xa1) = 0;
    *(undefined8 *)(puVar8 + 0xa7) = 0x3f80000000000000;
    *(undefined8 *)(puVar8 + 0xa5) = 0;
    *(undefined8 *)(puVar8 + 0xab) = 0;
    *(undefined8 *)(puVar8 + 0xa9) = 0x3f800000;
    *(undefined8 *)(puVar8 + 0xaf) = 0;
    *(undefined8 *)(puVar8 + 0xad) = 0x3f80000000000000;
    *(undefined8 *)(puVar8 + 0xb3) = 0x3f800000;
    *(undefined8 *)(puVar8 + 0xb1) = 0;
    *(undefined8 *)(puVar8 + 0xb7) = 0x3f80000000000000;
    *(undefined8 *)(puVar8 + 0xb5) = 0;
    *(undefined8 *)(puVar8 + 0xbb) = 0;
    *(undefined8 *)(puVar8 + 0xb9) = 0x3f800000;
    *(undefined8 *)(puVar8 + 0xbf) = 0;
    *(undefined8 *)(puVar8 + 0xbd) = 0x3f80000000000000;
    *(undefined8 *)(puVar8 + 0xc3) = 0x3f800000;
    *(undefined8 *)(puVar8 + 0xc1) = 0;
    *(undefined8 *)(puVar8 + 199) = 0x3f80000000000000;
    *(undefined8 *)(puVar8 + 0xc5) = 0;
    *(undefined8 *)(puVar8 + 0xcb) = 0x3f80000000000000;
    *(undefined8 *)(puVar8 + 0xc9) = 0;
    *(undefined8 *)(puVar8 + 0xcf) = 0;
    *(undefined8 *)(puVar8 + 0xcd) = 0;
    *(undefined8 *)(puVar8 + 0xd3) = 0;
    *(undefined8 *)(puVar8 + 0xd1) = 0x3f800000;
    *(undefined8 *)(puVar8 + 0xd7) = 0;
    *(undefined8 *)(puVar8 + 0xd5) = 0x3f80000000000000;
    *(undefined8 *)(puVar8 + 0xdb) = 0x3f8000003f800000;
    *(undefined8 *)(puVar8 + 0xd9) = 0;
    puVar8[0xe9] = 0;
    *(undefined8 *)(puVar8 + 0xdf) = 0;
    *(undefined8 *)(puVar8 + 0xdd) = 0;
    *(undefined8 *)(puVar8 + 0xe3) = 0;
    *(undefined8 *)(puVar8 + 0xe1) = 0x3f800000;
    *(undefined8 *)(puVar8 + 0xe7) = 0;
    *(undefined8 *)(puVar8 + 0xe5) = 0x3f80000000000000;
    *(undefined8 *)(puVar8 + 0xea) = 0x3f80000000000000;
    puVar8[0xed] = 0;
    *(undefined8 *)(puVar8 + 0xee) = 0;
    *(undefined8 *)(puVar8 + 0x6b) = 0;
    *puVar3 = 0x3f800000;
    *(undefined8 *)(puVar8 + 0x6f) = 0xb3bbbd2e;
    *(undefined8 *)(puVar8 + 0x6d) = 0xbf80000000000000;
    *(undefined8 *)(puVar8 + 0x73) = 0xbf800000;
    *(undefined8 *)(puVar8 + 0x71) = 0x33bbbd2e00000000;
    *(undefined8 *)(puVar8 + 0x77) = 0x3f80000000000000;
    *(undefined8 *)(puVar8 + 0x75) = 0;
    FUN_10a4d8ba8(&uStack_b8,puVar3);
    *(undefined8 *)(puVar8 + 0x7b) = uStack_b0;
    *(ulong *)(puVar8 + 0x79) = CONCAT71(uStack_b7,uStack_b8);
    *(undefined8 *)(puVar8 + 0x7f) = uStack_a0;
    *(undefined8 *)(puVar8 + 0x7d) = uStack_a8;
    *(undefined8 *)(puVar8 + 0x83) = uStack_90;
    *(undefined8 *)(puVar8 + 0x81) = uStack_98;
    *(undefined8 *)(puVar8 + 0x87) = uStack_80;
    *(undefined8 *)(puVar8 + 0x85) = uStack_88;
    *(undefined8 *)(puVar8 + 0x8b) = 0;
    *(undefined8 *)(puVar8 + 0x89) = 0x3f800000;
    *(undefined8 *)(puVar8 + 0x8f) = 0x3f800000;
    *(undefined8 *)(puVar8 + 0x8d) = 0xb33bbd2e00000000;
    *(undefined8 *)(puVar8 + 0x93) = 0xb33bbd2e;
    *(undefined8 *)(puVar8 + 0x91) = 0xbf80000000000000;
    *(undefined8 *)(puVar8 + 0x97) = 0x3f80000000000000;
    *(undefined8 *)(puVar8 + 0x95) = 0;
    FUN_10a4d8ba8(&uStack_b8,puVar8 + 0x89);
    *(undefined8 *)(puVar8 + 0x9b) = uStack_b0;
    *(ulong *)(puVar8 + 0x99) = CONCAT71(uStack_b7,uStack_b8);
    *(undefined8 *)(puVar8 + 0x9f) = uStack_a0;
    *(undefined8 *)(puVar8 + 0x9d) = uStack_a8;
    *(undefined8 *)(puVar8 + 0xa3) = uStack_90;
    *(undefined8 *)(puVar8 + 0xa1) = uStack_98;
    *(undefined8 *)(puVar8 + 0xa7) = uStack_80;
    *(undefined8 *)(puVar8 + 0xa5) = uStack_88;
    *(undefined1 *)(puVar8 + 0xec) = 0;
    *(undefined2 *)(puVar8 + 0xf0) = 1;
    *(undefined8 *)(puVar8 + 0xf1) = 0;
    iVar4 = puVar8[0x3f];
    if ((int)puVar8[0x3f] <= (int)puVar8[0x40]) {
      iVar4 = puVar8[0x40];
    }
    puVar8[0xf3] = (float)iVar4 * 0.05 * (float)iVar4 * 0.05;
    *(undefined1 *)(puVar8 + 0xf4) = 0;
    *(undefined1 *)(puVar8 + 0xf6) = 0;
    *(undefined8 *)(puVar8 + 0xfa) = 0;
    *(undefined8 *)(puVar8 + 0xf8) = 0;
    puVar7[0x31] = puVar8;
    ppuVar9 = &PTR_PTR_1133023f0;
    FUN_10ae079a0(0,&PTR_PTR_1133023f0);
    FUN_10ae07cd4(ppuVar9,&PTR_PTR_1133023f0);
    *(undefined1 *)(puVar7 + 0x32) = 1;
  }
  *param_1 = puVar7;
  return;
}



/* Entry: 10a50b1bc; end: 10a50b2b7;  */

undefined8 * FUN_10a50b1bc(undefined8 *param_1)

{
  ulong *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  ulong uVar7;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bea720;
  if (*(char *)(param_1 + 0x32) == '\x01') {
    param_1[0x30] = &PTR_FUN_110be8300;
    func_0x00010a508864(param_1 + 0x31);
  }
  FUN_10a232e34(param_1 + 0x2e);
  FUN_10a232e34(param_1 + 0x28);
  param_1[0x19] = &PTR_FUN_110bea770;
  func_0x00010a50beec(param_1 + 0x21);
  func_0x0001098bba44(param_1 + 0x19);
  *param_1 = &PTR_DAT_110b17ab0;
  if ((*(char *)(param_1 + 0x18) == '\x01') && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
    lVar6 = param_1[0xb];
    lVar2 = *(long *)(lVar6 + 0x148);
    if (-1 < *(char *)(lVar6 + 0x15f)) {
      lVar2 = lVar6 + 0x148;
    }
    func_0x00010ae06f08(1,4,&UNK_10f585d39,&UNK_10f585e3d,0x15,&UNK_10f585e89,in_x6,in_x7,
                        &UNK_10f585f66,lVar2,param_1[1]);
  }
  func_0x0001098ae07c(param_1 + 0x16);
  plVar5 = (long *)param_1[0x12];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 0x200000000;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (uVar7 >> 0x21 == 1) {
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
  *param_1 = &PTR_DAT_110b17b10;
  plVar5 = (long *)param_1[10];
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
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  puStack_28 = param_1 + 3;
  func_0x0001098ad298(&puStack_28);
  return param_1;
}



/* Entry: 10a50b2b8; end: 10a50b2d7;  */

void FUN_10a50b2b8(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 400) == '\x01') {
    lVar1 = *(long *)(param_1 + 0x188);
    *(undefined4 *)(lVar1 + 0x3c4) = 0;
    *(undefined1 *)(lVar1 + 0x3c0) = 1;
  }
  return;
}



/* Entry: 10a50b2d8; end: 10a50b47b;  */

uint FUN_10a50b2d8(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puStack_50;
  long *plStack_48;
  
  lVar13 = *(long *)(param_1 + 0x70);
  lVar2 = param_1 + 0x150;
  if (lVar13 != param_1 + 0x120) {
    lVar2 = param_1 + 0x120;
  }
  *(long *)(param_1 + 0x78) = lVar2;
  func_0x00010a286b48(lVar2 + 0x20);
  puVar8 = (undefined8 *)0x38;
  __Znwm();
  puVar10 = *(undefined8 **)(param_1 + 0x108);
  puVar3 = *(undefined8 **)(param_1 + 0x110);
  uVar4 = *(undefined4 *)(puVar10 + 1);
  *puVar8 = *puVar10;
  *(undefined4 *)(puVar8 + 1) = uVar4;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = 0;
  FUN_10a051a50(puVar8 + 2,puVar10[2],puVar10[3],
                ((long)(puVar10[3] - puVar10[2]) >> 2) * -0x5555555555555555);
  uVar11 = puVar10[5];
  *(undefined8 *)((long)puVar8 + 0x2d) = *(undefined8 *)((long)puVar10 + 0x2d);
  puVar8[5] = uVar11;
  while (puVar10 = puVar10 + 7, puVar10 != puVar3) {
    FUN_10a50c1ec(puVar8);
  }
  plVar9 = (long *)0x20;
  puStack_50 = puVar8;
  __Znwm();
  *plVar9 = (long)&PTR_FUN_110bea898;
  plVar9[1] = 0;
  plVar9[2] = 0;
  plVar9[3] = (long)puVar8;
  plStack_48 = plVar9;
  FUN_10a286fec(lVar2 + 0x20,&puStack_50);
  plVar9 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  if (lVar13 == 0) {
    uVar7 = 1;
  }
  else {
    uVar11 = *(undefined8 *)(lVar13 + 0x20);
    func_0x00010a50c118(uVar11,*(undefined8 *)(lVar2 + 0x20));
    uVar7 = (uint)uVar11 ^ 1;
  }
  return uVar7;
}



/* Entry: 10a50b47c; end: 10a50b7ab;  */

void FUN_10a50b47c(undefined8 *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_e0 [8];
  long *plStack_d8;
  undefined8 *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined1 uStack_90;
  undefined1 uStack_8c;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *(long *)(param_2 + 0x70);
  lVar11 = *(long *)(lVar12 + 0x20);
  puVar5 = (undefined8 *)0xa0;
  __Znwm();
  puVar8 = puVar5 + 3;
  *(undefined2 *)puVar8 = 4;
  puVar5[2] = 0;
  puVar5[1] = 0x200000006;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[9] = 0;
  puVar5[8] = 0;
  puVar5[0xb] = 0;
  puVar5[10] = 0;
  puVar5[0xd] = 0;
  puVar5[0xc] = 0;
  puVar5[0xf] = 0;
  puVar5[0xe] = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = puVar8;
  puVar5[0x12] = 0;
  *puVar5 = &PTR_DAT_110ae91c0;
  *(undefined2 *)(puVar5 + 0x13) = 0;
  plStack_d8 = puVar5;
  puStack_d0 = puVar5;
  if ((*(byte *)(param_2 + 400) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a50b720);
    (*pcVar4)();
  }
  pcStack_a8 = (code *)0x77fffffff;
  ppuStack_a0 = (undefined **)CONCAT44(ppuStack_a0._4_4_,0x168);
  lStack_98 = CONCAT35(lStack_98._5_3_,1);
  uStack_90 = 0;
  uStack_8c = 0;
  plVar6 = &lStack_c8;
  lStack_c8 = param_2;
  func_0x0001098ac018(plVar6,&UNK_10e4a7ac1,0x23,&pcStack_a8,0,1);
  pcStack_a8 = (code *)((ulong)pcStack_a8 & 0xffffffffffffff00);
  plVar7 = &lStack_c8;
  func_0x0001098ac018(plVar7,&UNK_10e4c8f08,0x24,&pcStack_a8,0,1);
  FUN_10a4d916c(param_2 + 0x180,lVar11);
  if (*(char *)(lVar11 + 0x30) == '\x01') {
    uVar9 = *(undefined8 *)(lVar11 + 0x28);
    lVar11 = *(long *)(param_2 + 0x188);
    if ((*(byte *)(lVar11 + 0x3d8) & 1) == 0) {
      *(undefined1 *)(lVar11 + 0x3d8) = 1;
    }
    *(undefined8 *)(lVar11 + 0x3d0) = uVar9;
    *(undefined1 *)(lVar11 + 0x1a0) = 1;
  }
  lStack_c0 = 0;
  lStack_b8 = 0;
  uStack_b0 = 0;
  pcStack_a8 = (code *)CONCAT44((int)plVar7,(int)plVar6);
  FUN_10a26ebc0(&lStack_c0,0,&pcStack_a8,&ppuStack_a0,2);
  pcStack_a8 = FUN_10a4f5328;
  ppuStack_a0 = &PTR_FUN_110be8f38;
  lVar11 = param_2 + 0x18;
  lStack_98 = param_2 + 0x180;
  FUN_10a4f520c(lVar11,&pcStack_a8,&lStack_c0);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  if (lStack_c0 != 0) {
    lStack_b8 = lStack_c0;
    __ZdlPv();
  }
  plVar6 = puVar5 + 2;
  *(int *)(lVar12 + 0x10) = (int)lVar11;
  do {
    lVar11 = *plVar6;
    if (lVar11 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(puVar8);
        goto LAB_10a50b684;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar11 >> 1 & 1) != 0) {
LAB_10a50b684:
      while( true ) {
        *param_1 = puVar5;
        plStack_d8 = (long *)0x0;
        puVar8 = puVar5;
        func_0x0001092b4274(&puStack_d0);
        plVar6 = plStack_d8;
        if (plStack_d8 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_d8 + 1);
          do {
            uVar10 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar10 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar10 & 0x1fffffffc) == 4) {
            do {
              uVar10 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar10 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar10 - 1 == 0) {
              (**(code **)(*plStack_d8 + 8))();
            }
          }
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) break;
        ___stack_chk_fail();
        if ((int)puVar8 == 0) {
          do {
            __Unwind_Resume(plVar6);
            func_0x000104bd46a0();
          } while ((int)puVar8 == 0);
        }
        else {
          (*(code *)*ppuStack_a0)(&ppuStack_a0);
          if (lStack_c0 != 0) {
            lStack_b8 = lStack_c0;
            __ZdlPv();
          }
        }
        ___cxa_begin_catch(plVar6);
        __ZSt17current_exceptionv(auStack_e0);
        func_0x000109d1b350(puVar5,auStack_e0);
        __ZNSt13exception_ptrD1Ev(auStack_e0);
        ___cxa_end_catch();
      }
      return;
    }
  } while( true );
}



/* Entry: 10a50b7ac; end: 10a50b92f;  */

void FUN_10a50b7ac(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar4 = (undefined8 *)0x20;
  __Znwm();
  puVar4[1] = 0;
  *puVar4 = &PTR_FUN_110bea7b0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar7 = *(undefined8 **)(param_2 + 0x40);
  puVar1 = *(undefined8 **)(param_2 + 0x48);
  lVar2 = (long)puVar1 - (long)puVar7;
  if (lVar2 != 0) {
    puVar5 = (undefined8 *)((lVar2 >> 3) * 0x6db6db6db6db6db7);
    if ((undefined8 *)0x492492492492492 < puVar5) {
      FUN_10a50be34();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a50b900);
      (*pcVar3)();
    }
    FUN_10a50be48();
    puVar4[1] = puVar5;
    puVar4[2] = puVar5;
    puVar4[3] = puVar5 + param_3 * 7;
    ppuStack_78 = &puStack_60;
    ppuStack_70 = &puStack_58;
    uStack_68 = 0;
    puStack_80 = puVar4 + 1;
    puStack_60 = puVar5;
    do {
      uVar6 = *puVar7;
      *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar7 + 1);
      *puVar5 = uVar6;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puStack_58 = puVar5;
      FUN_10a051a50();
      uVar6 = puVar7[5];
      *(undefined8 *)((long)puVar5 + 0x2d) = *(undefined8 *)((long)puVar7 + 0x2d);
      puVar5[5] = uVar6;
      puVar7 = puVar7 + 7;
      puVar5 = puStack_58 + 7;
    } while (puVar7 != puVar1);
    uStack_68 = 1;
    puStack_58 = puVar5;
    FUN_10a50be90(&puStack_80);
    puVar4[2] = puVar5;
  }
  *param_1 = puVar4;
  return;
}



/* Entry: 10a50b930; end: 10a50bc3b;  */

void FUN_10a50b930(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  puVar12 = *(undefined8 **)(param_1 + 0x48);
  if (puVar12 < *(undefined8 **)(param_1 + 0x50)) {
    uVar6 = *param_2;
    *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(param_2 + 1);
    *puVar12 = uVar6;
    puVar12[3] = 0;
    puVar12[4] = 0;
    puVar12[2] = 0;
    uVar6 = param_2[2];
    puVar12[3] = param_2[3];
    puVar12[2] = uVar6;
    puVar12[4] = param_2[4];
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    uVar6 = param_2[5];
    *(undefined8 *)((long)puVar12 + 0x2d) = *(undefined8 *)((long)param_2 + 0x2d);
    puVar12[5] = uVar6;
    puVar12 = puVar12 + 7;
LAB_10a50bb40:
    *(undefined8 **)(param_1 + 0x48) = puVar12;
    return;
  }
  plVar11 = (long *)(param_1 + 0x40);
  lVar10 = (long)puVar12 - *plVar11;
  uVar5 = (lVar10 >> 3) * 0x6db6db6db6db6db7 + 1;
  if (uVar5 < 0x492492492492493) {
    lVar8 = (long)*(undefined8 **)(param_1 + 0x50) - *plVar11 >> 3;
    uVar9 = lVar8 * -0x2492492492492492;
    if (uVar9 < uVar5 || uVar9 - uVar5 == 0) {
      uVar9 = uVar5;
    }
    if (0x249249249249248 < (ulong)(lVar8 * 0x6db6db6db6db6db7)) {
      uVar9 = 0x492492492492492;
    }
    if (uVar9 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4 = param_2;
      FUN_10a50be48();
    }
    puVar1 = (undefined8 *)(uVar9 + lVar10);
    uVar6 = *param_2;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
    *puVar1 = uVar6;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[2] = 0;
    uVar6 = param_2[2];
    puVar1[3] = param_2[3];
    puVar1[2] = uVar6;
    puVar1[4] = param_2[4];
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    uVar6 = param_2[5];
    *(undefined8 *)((long)puVar1 + 0x2d) = *(undefined8 *)((long)param_2 + 0x2d);
    puVar1[5] = uVar6;
    puVar12 = puVar1 + 7;
    puVar13 = *(undefined8 **)(param_1 + 0x40);
    puVar2 = *(undefined8 **)(param_1 + 0x48);
    ppuStack_68 = &puStack_50;
    ppuStack_60 = &puStack_48;
    puVar1 = (undefined8 *)((long)puVar1 + ((long)puVar13 - (long)puVar2));
    puStack_48 = puVar1;
    puVar7 = puVar13;
    plStack_70 = plVar11;
    puStack_50 = puVar1;
    if ((long)puVar13 - (long)puVar2 == 0) {
      uStack_58 = 1;
    }
    else {
      do {
        uVar6 = *puVar7;
        *(undefined4 *)(puStack_48 + 1) = *(undefined4 *)(puVar7 + 1);
        *puStack_48 = uVar6;
        puStack_48[3] = 0;
        puStack_48[4] = 0;
        puStack_48[2] = 0;
        uVar6 = puVar7[2];
        puStack_48[3] = puVar7[3];
        puStack_48[2] = uVar6;
        puStack_48[4] = puVar7[4];
        puVar7[2] = 0;
        puVar7[3] = 0;
        puVar7[4] = 0;
        uVar6 = puVar7[5];
        *(undefined8 *)((long)puStack_48 + 0x2d) = *(undefined8 *)((long)puVar7 + 0x2d);
        puStack_48[5] = uVar6;
        puVar7 = puVar7 + 7;
        puStack_48 = puStack_48 + 7;
      } while (puVar7 != puVar2);
      uStack_58 = 1;
      do {
        if (puVar13[2] != 0) {
          puVar13[3] = puVar13[2];
          __ZdlPv();
        }
        puVar13 = puVar13 + 7;
      } while (puVar13 != puVar2);
    }
    FUN_10a50be90(&plStack_70);
    lVar10 = *(long *)(param_1 + 0x40);
    *(undefined8 **)(param_1 + 0x40) = puVar1;
    *(undefined8 **)(param_1 + 0x48) = puVar12;
    *(ulong *)(param_1 + 0x50) = uVar9 + (long)puVar4 * 0x38;
    if (lVar10 != 0) {
      __ZdlPv();
    }
    goto LAB_10a50bb40;
  }
  FUN_10a50be34();
  uVar9 = (ulong)(int)param_2;
  lVar10 = *(long *)(param_1 + 0x40);
  lVar8 = *(long *)(param_1 + 0x48);
  uVar5 = (lVar8 - lVar10 >> 3) * 0x6db6db6db6db6db7;
  if (uVar9 + 1 != uVar5) {
    if ((lVar10 == lVar8) || (uVar5 < uVar9 || uVar5 - uVar9 == 0)) goto LAB_10a50bc38;
    uVar6 = *(undefined8 *)(lVar8 + -0x38);
    puVar12 = (undefined8 *)(lVar10 + (long)(int)param_2 * 0x38);
    *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(lVar8 + -0x30);
    *puVar12 = uVar6;
    func_0x0001074293d0(puVar12 + 2,lVar8 + -0x28);
    uVar6 = *(undefined8 *)(lVar8 + -0x10);
    *(undefined8 *)((long)puVar12 + 0x2d) = *(undefined8 *)(lVar8 + -0xb);
    puVar12[5] = uVar6;
    lVar10 = *(long *)(param_1 + 0x40);
    lVar8 = *(long *)(param_1 + 0x48);
    uVar5 = (lVar8 - lVar10 >> 3) * 0x6db6db6db6db6db7;
    if (uVar5 < uVar9 || uVar5 - uVar9 == 0) goto LAB_10a50bc38;
  }
  if (lVar10 != lVar8) {
    if (*(long *)(lVar8 + -0x28) != 0) {
      *(long *)(lVar8 + -0x20) = *(long *)(lVar8 + -0x28);
      __ZdlPv();
    }
    *(long *)(param_1 + 0x48) = lVar8 + -0x38;
    return;
  }
LAB_10a50bc38:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a50bc3c);
  (*pcVar3)();
}



/* Entry: 10a50bc3c; end: 10a50bc9b;  */

undefined8 * FUN_10a50bc3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bea7b0;
  func_0x00010a50beec(param_1 + 1);
  return param_1;
}



/* Entry: 10a50bc9c; end: 10a50be33;  */

undefined1  [16] FUN_10a50bc9c(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  undefined *puVar3;
  code **ppcVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  long lStack_b0;
  long lStack_a8;
  code *pcStack_98;
  undefined **appuStack_90 [7];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a26d314(&lStack_b0,
                (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * 0x6db6db6db6db6db7);
  lVar6 = lStack_a8 - lStack_b0;
  if (lVar6 != 0) {
    lVar7 = 0;
    uVar8 = 0;
    do {
      uVar5 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * 0x6db6db6db6db6db7;
      if (uVar5 < uVar8 || uVar5 - uVar8 == 0) {
LAB_10a50bdf0:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a50bdf4);
        (*pcVar1)();
      }
      plVar2 = param_2;
      func_0x0001098ac018(param_2,&UNK_10e4c8fed,0x22,*(long *)(param_1 + 8) + lVar7,2,1);
      if ((ulong)(lStack_a8 - lStack_b0 >> 2) <= uVar8) goto LAB_10a50bdf0;
      *(int *)(lStack_b0 + uVar8 * 4) = (int)plVar2;
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x38;
    } while (lVar6 >> 2 != uVar8);
  }
  pcStack_98 = FUN_10a50bf5c;
  appuStack_90[0] = &PTR_DAT_110bea7e0;
  ppcVar4 = &pcStack_98;
  func_0x0001098bb6d0(*param_2 + 0x18,ppcVar4,&lStack_b0);
  (*(code *)*appuStack_90[0])(appuStack_90);
  lVar6 = lStack_b0;
  if (lStack_b0 != 0) {
    lStack_a8 = lStack_b0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    auVar9._8_8_ = ppcVar4;
    auVar9._0_8_ = lVar6;
    return auVar9;
  }
  ___stack_chk_fail();
  (*(code *)*appuStack_90[0])(appuStack_90);
  if (lStack_b0 != 0) {
    lStack_a8 = lStack_b0;
    __ZdlPv();
  }
  __Unwind_Resume(lVar6);
  puVar3 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (puVar3 < (undefined *)0x492492492492493) {
    lVar6 = (long)puVar3 * 0x38;
    __Znwm(lVar6);
    auVar10._8_8_ = puVar3;
    auVar10._0_8_ = lVar6;
    return auVar10;
  }
  func_0x000109ffded8();
  if ((puVar3[0x18] & 1) == 0) {
    lVar6 = **(long **)(puVar3 + 8);
    for (lVar7 = **(long **)(puVar3 + 0x10); lVar7 != lVar6; lVar7 = lVar7 + -0x38) {
      if (*(long *)(lVar7 + -0x28) != 0) {
        *(long *)(lVar7 + -0x20) = *(long *)(lVar7 + -0x28);
        __ZdlPv();
      }
    }
  }
  auVar11._8_8_ = ppcVar4;
  auVar11._0_8_ = puVar3;
  return auVar11;
}



/* Entry: 10a50be34; end: 10a50be47;  */

undefined1  [16] FUN_10a50be34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (puVar1 < (undefined *)0x492492492492493) {
    lVar2 = (long)puVar1 * 0x38;
    __Znwm(lVar2);
    auVar4._8_8_ = puVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  if ((puVar1[0x18] & 1) == 0) {
    lVar2 = **(long **)(puVar1 + 8);
    for (lVar3 = **(long **)(puVar1 + 0x10); lVar3 != lVar2; lVar3 = lVar3 + -0x38) {
      if (*(long *)(lVar3 + -0x28) != 0) {
        *(long *)(lVar3 + -0x20) = *(long *)(lVar3 + -0x28);
        __ZdlPv();
      }
    }
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = puVar1;
  return auVar5;
}



/* Entry: 10a50be48; end: 10a50be8f;  */

undefined1  [16] FUN_10a50be48(ulong param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_1 < 0x492492492492493) {
    lVar1 = param_1 * 0x38;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar1 = **(long **)(param_1 + 8);
    for (lVar2 = **(long **)(param_1 + 0x10); lVar2 != lVar1; lVar2 = lVar2 + -0x38) {
      if (*(long *)(lVar2 + -0x28) != 0) {
        *(long *)(lVar2 + -0x20) = *(long *)(lVar2 + -0x28);
        __ZdlPv();
      }
    }
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10a50be90; end: 10a50bf5b;  */

long FUN_10a50be90(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar1 = **(long **)(param_1 + 8);
    for (lVar2 = **(long **)(param_1 + 0x10); lVar2 != lVar1; lVar2 = lVar2 + -0x38) {
      if (*(long *)(lVar2 + -0x28) != 0) {
        *(long *)(lVar2 + -0x20) = *(long *)(lVar2 + -0x28);
        __ZdlPv();
      }
    }
  }
  return param_1;
}



/* Entry: 10a50bf5c; end: 10a50bfc7;  */

void FUN_10a50bf5c(void)

{
  return;
}



/* Entry: 10a50bfc8; end: 10a50c0e3;  */

void FUN_10a50bfc8(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uStack_78;
  undefined4 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined5 uStack_50;
  undefined3 uStack_4b;
  undefined5 uStack_48;
  
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  puVar4 = *(undefined8 **)(param_2 + 0x20);
  uStack_78 = *puVar4;
  uStack_70 = *(undefined4 *)(puVar4 + 1);
  lStack_60 = 0;
  uStack_58 = 0;
  lStack_68 = 0;
  FUN_10a051a50(&lStack_68,puVar4[2],puVar4[3],
                ((long)(puVar4[3] - puVar4[2]) >> 2) * -0x5555555555555555);
  uStack_48 = (undefined5)((ulong)*(undefined8 *)((long)puVar4 + 0x2d) >> 0x18);
  uStack_50 = (undefined5)puVar4[5];
  uStack_4b = (undefined3)((ulong)puVar4[5] >> 0x28);
  FUN_10a50c1ec(&uStack_78,uVar5);
  puVar2 = &uStack_78;
  func_0x00010a50c118(puVar2,puVar4);
  if (lStack_68 != 0) {
    lStack_60 = lStack_68;
    __ZdlPv();
  }
  if ((int)puVar2 == 0) {
    uVar3 = 0x40000000;
  }
  else {
    lVar1 = 0x10;
    if (param_4 != 0) {
      lVar1 = 0x18;
    }
    uVar3 = *(undefined4 *)(param_2 + lVar1);
  }
  uStack_78 = CONCAT44(uStack_78._4_4_,uVar3);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_10a26d5a0(param_1,&uStack_78,(long)&uStack_78 + 4,1);
  return;
}



/* Entry: 10a50c0e4; end: 10a50c1eb;  */

void FUN_10a50c0e4(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_DAT_110bea828;
  param_1[1] = &UNK_110bea7f8;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



/* Entry: 10a50c1ec; end: 10a50c26f;  */

void FUN_10a50c1ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(byte *)((long)param_1 + 0x34) =
       *(byte *)((long)param_1 + 0x34) | *(byte *)((long)param_2 + 0x34);
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = uVar1;
  if (param_2 != param_1) {
    FUN_10a12d500(param_1 + 2,param_2[2],param_2[3],
                  ((long)(param_2[3] - param_2[2]) >> 2) * -0x5555555555555555);
  }
  if (*(char *)(param_2 + 6) == '\x01') {
    uVar1 = param_2[5];
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
    param_1[5] = uVar1;
  }
  return;
}



/* Entry: 10a50c270; end: 10a50c2b3;  */

void FUN_10a50c270(long param_1,undefined8 param_2,long param_3)

{
  if (*(undefined8 **)(param_1 + 0x48) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a50c290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(param_1 + 0x48))
              (param_2,*(undefined4 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x20));
    return;
  }
  return;
}



/* Entry: 10a50c2b4; end: 10a50c2eb;  */

void FUN_10a50c2b4(long param_1)

{
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x10) != 0) {
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x10);
      __ZdlPv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a50c2ec; end: 10a50c2ef;  */

void FUN_10a50c2ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a50c2f0; end: 10a50c303;  */

void FUN_10a50c2f0(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a50c304; end: 10a50c30b;  */

void FUN_10a50c304(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x10) != 0) {
      *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x10);
      __ZdlPv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a50c30c; end: 10a50c343;  */

undefined8 FUN_10a50c30c(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bea8d8);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a50c344; end: 10a50c347;  */

void FUN_10a50c344(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a50c348; end: 10a50c3ef;  */

undefined8 * FUN_10a50c348(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bea8f8;
  (**(code **)param_1[0x10])();
  (**(code **)param_1[8])();
  FUN_10a26cc38(param_1 + 3);
  return param_1;
}



/* Entry: 10a50c3f0; end: 10a50c663;  */

/* WARNING: Removing unreachable block (ram,0x00010a50c5f8) */
/* WARNING: Removing unreachable block (ram,0x00010a50c5fc) */
/* WARNING: Removing unreachable block (ram,0x00010a50c604) */
/* WARNING: Removing unreachable block (ram,0x00010a50c60c) */
/* WARNING: Removing unreachable block (ram,0x00010a50c610) */

void FUN_10a50c3f0(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 in_x7;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_50;
  long *plStack_48;
  
  puVar5 = (undefined8 *)0x1e8;
  __Znwm();
  lVar6 = param_3;
  if (*(long *)(param_2 + 8) != 0) {
    lVar6 = *(long *)(param_2 + 8);
  }
  plStack_48 = *(long **)(param_2 + 0x20);
  uStack_50 = *(undefined8 *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x20) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *puVar5 = &PTR_FUN_110bea938;
  func_0x0001098bae4c(puVar5,&UNK_10e4bc978,0x1b,param_3,lVar6,puVar5 + 0x19,puVar5 + 0x33,in_x7,0,0
                      ,&uStack_50);
  plVar7 = plStack_48;
  plVar1 = (long *)(param_2 + 0x28);
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  puVar5[0x1c] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x20] = 0;
  puVar5[0x1f] = 0;
  *puVar5 = &PTR_FUN_110bea938;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  puVar5[0x19] = &PTR_FUN_110bea988;
  puVar5[0x21] = 0;
  puVar5[0x23] = 0;
  puVar5[0x22] = 0;
  puVar5[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x27) = 0x40000000;
  puVar5[0x24] = &PTR_DAT_110beaa40;
  puVar5[0x25] = &UNK_110beaa10;
  puVar5[0x28] = 0;
  puVar5[0x29] = 0;
  puVar5[0x2c] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x2d) = 0x40000000;
  puVar5[0x2a] = &PTR_DAT_110beaa40;
  puVar5[0x2b] = &UNK_110beaa10;
  *(undefined1 *)(puVar5 + 0x32) = 0;
  puVar5[0x2e] = 0;
  puVar5[0x2f] = 0;
  *(undefined1 *)(puVar5 + 0x30) = 0;
  lVar6 = puVar5[0xc];
  if (lVar6 == 0) {
    bVar4 = false;
    plVar7 = plVar1;
  }
  else {
    bVar4 = lVar6 != puVar5[0xb];
    plVar7 = (long *)0x0;
    if (!bVar4) {
      plVar7 = plVar1;
    }
  }
  *(undefined2 *)(puVar5 + 0x34) = 0;
  puVar5[0x37] = 0x10a50d634;
  puVar5[0x38] = &UNK_110be9e78;
  puVar5[0x39] = 0;
  puVar5[0x3a] = 0;
  puVar5[0x3b] = 0;
  puVar5[0x3c] = 0;
  puVar5[0x33] = &PTR_FUN_110beaa80;
  if ((!bVar4) && (*(char *)(plVar7[3] + 8) == '\x01')) {
    puVar5[0x3c] = plVar7 + 2;
  }
  if ((lVar6 == 0) || (lVar6 == puVar5[0xb])) {
    puVar8 = *(undefined8 **)(*plVar1 + 0x490);
    uVar10 = puVar8[1];
    uVar9 = *puVar8;
    if (puVar8[1] != 0) {
      plVar1 = (long *)(puVar8[1] + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puVar5[0x31] = uVar10;
    puVar5[0x30] = uVar9;
    *(undefined1 *)(puVar5 + 0x32) = 1;
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 10a50c664; end: 10a50c74f;  */

undefined8 * FUN_10a50c664(undefined8 *param_1)

{
  ulong *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  ulong uVar7;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bea938;
  if ((*(char *)(param_1 + 0x32) == '\x01') && (param_1[0x31] != 0)) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a232e34(param_1 + 0x2e);
  FUN_10a232e34(param_1 + 0x28);
  param_1[0x19] = &PTR_FUN_110bea988;
  func_0x00010a50d2fc(param_1 + 0x21);
  func_0x0001098bba44(param_1 + 0x19);
  *param_1 = &PTR_DAT_110b17ab0;
  if ((*(char *)(param_1 + 0x18) == '\x01') && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
    lVar6 = param_1[0xb];
    lVar2 = *(long *)(lVar6 + 0x148);
    if (-1 < *(char *)(lVar6 + 0x15f)) {
      lVar2 = lVar6 + 0x148;
    }
    func_0x00010ae06f08(1,4,&UNK_10f585d39,&UNK_10f585e3d,0x15,&UNK_10f585e89,in_x6,in_x7,
                        &UNK_10f585f66,lVar2,param_1[1]);
  }
  func_0x0001098ae07c(param_1 + 0x16);
  plVar5 = (long *)param_1[0x12];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 0x200000000;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (uVar7 >> 0x21 == 1) {
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
  *param_1 = &PTR_DAT_110b17b10;
  plVar5 = (long *)param_1[10];
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
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  puStack_28 = param_1 + 3;
  func_0x0001098ad298(&puStack_28);
  return param_1;
}



/* Entry: 10a50c750; end: 10a50c753;  */

void FUN_10a50c750(void)

{
  return;
}



/* Entry: 10a50c754; end: 10a50c8e3;  */

uint FUN_10a50c754(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  undefined4 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined4 *puStack_50;
  long *plStack_48;
  
  lVar13 = *(long *)(param_1 + 0x70);
  lVar2 = param_1 + 0x150;
  if (lVar13 != param_1 + 0x120) {
    lVar2 = param_1 + 0x120;
  }
  *(long *)(param_1 + 0x78) = lVar2;
  func_0x00010a286b48(lVar2 + 0x20);
  puVar8 = (undefined4 *)0x20;
  __Znwm();
  puVar11 = *(undefined4 **)(param_1 + 0x108);
  puVar3 = *(undefined4 **)(param_1 + 0x110);
  uVar4 = *puVar11;
  *(undefined2 *)(puVar8 + 1) = *(undefined2 *)(puVar11 + 1);
  *puVar8 = uVar4;
  if (*(char *)((long)puVar11 + 0x1f) < '\0') {
    func_0x000107c3192c(puVar8 + 2,*(undefined8 *)(puVar11 + 2),*(undefined8 *)(puVar11 + 4));
  }
  else {
    uVar14 = *(undefined8 *)(puVar11 + 4);
    uVar10 = *(undefined8 *)(puVar11 + 2);
    *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar11 + 6);
    *(undefined8 *)(puVar8 + 4) = uVar14;
    *(undefined8 *)(puVar8 + 2) = uVar10;
  }
  while (puVar11 = puVar11 + 8, puVar11 != puVar3) {
    FUN_10ace7944(puVar8);
  }
  plVar9 = (long *)0x20;
  puStack_50 = puVar8;
  __Znwm();
  *plVar9 = (long)&PTR_FUN_110beaab0;
  plVar9[1] = 0;
  plVar9[2] = 0;
  plVar9[3] = (long)puVar8;
  plStack_48 = plVar9;
  FUN_10a286fec(lVar2 + 0x20,&puStack_50);
  plVar9 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  if (lVar13 == 0) {
    uVar7 = 1;
  }
  else {
    uVar10 = *(undefined8 *)(lVar13 + 0x20);
    FUN_10a50d540(uVar10,*(undefined8 *)(lVar2 + 0x20));
    uVar7 = (uint)uVar10 ^ 1;
  }
  return uVar7;
}


