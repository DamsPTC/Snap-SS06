/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a3631fc; end: 10a36320b;  */

void FUN_10a3631fc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a363200);
  (*pcVar1)();
}



/* Entry: 10a36320c; end: 10a363273;  */

undefined8 * FUN_10a36320c(undefined8 *param_1,short param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_28 [8];
  
  uVar1 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  if (sRam00000001132ffd50 == -1) {
    sRam00000001132ffd50 = (short)param_1 - param_2;
  }
  func_0x00010a1bd170(auStack_28);
  return param_1;
}



/* Entry: 10a363274; end: 10a3632cb;  */

long FUN_10a363274(long param_1)

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



/* Entry: 10a3632cc; end: 10a3632db;  */

void FUN_10a3632cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc68a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a3632dc; end: 10a3632fb;  */

void FUN_10a3632dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc68a8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3632fc; end: 10a36330b;  */

void FUN_10a3632fc(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_10a36330c(param_1 + 0x18,*puVar1);
    FUN_10a36330c(param_1 + 0x18,puVar1[1]);
    func_0x00010a0da8c8(puVar1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 10a36330c; end: 10a36342f;  */

void FUN_10a36330c(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10a36330c(param_1,*param_2);
    FUN_10a36330c(param_1,param_2[1]);
    func_0x00010a0da8c8(param_2 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10a363430; end: 10a36343f;  */

void FUN_10a363430(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc8478;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a363440; end: 10a36345f;  */

void FUN_10a363440(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc8478;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a363460; end: 10a363477;  */

long FUN_10a363460(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *(undefined ***)(param_1 + 0x28) = &PTR_DAT_110b17898;
  plVar5 = *(long **)(param_1 + 0x38);
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
  return param_1 + 0x30;
}



/* Entry: 10a363478; end: 10a3634cf;  */

long FUN_10a363478(long param_1)

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



/* Entry: 10a3634d0; end: 10a3634df;  */

void FUN_10a3634d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc8818;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a3634e0; end: 10a3634ff;  */

void FUN_10a3634e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc8818;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a363500; end: 10a363517;  */

long FUN_10a363500(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *(undefined ***)(param_1 + 0x28) = &PTR_DAT_110b17898;
  plVar5 = *(long **)(param_1 + 0x38);
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
  return param_1 + 0x30;
}



/* Entry: 10a363518; end: 10a36361f;  */

void FUN_10a363518(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10a363518(param_1,*param_2);
    FUN_10a363518(param_1,param_2[1]);
    func_0x00010a35eaf4(param_2 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10a363620; end: 10a36364b;  */

void FUN_10a363620(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a36364c; end: 10a364c7b;  */

void FUN_10a36364c(long param_1)

{
  long lVar1;
  ulong uVar2;
  ushort uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_48;
  
  uVar2 = 0;
  lVar1 = -0x244;
  if (cRam00000001137eafbc == '\0') {
    lVar1 = -0xffff;
  }
  lVar1 = param_1 + lVar1;
  if ((*(ushort *)(lVar1 + 0x129) >> 8 & 1) == 0) {
    if ((((*(long *)(lVar1 + 0x100) != 0) || ((*(ushort *)(lVar1 + 0x129) >> 9 & 1) != 0)) ||
        (*(long *)(lVar1 + 0x120) != 0)) || ((*(ushort *)(lVar1 + 0x70) >> 8 & 1) == 0)) {
LAB_10a3636c4:
      func_0x00010a1bd170();
      if ((uVar2 & 1) != 0) {
        return;
      }
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      ppuStack_48 = &PTR_DAT_110bc6900;
      uVar2 = (ulong)&uStack_a0 | 8;
      FUN_10a0dad0c(uVar2,&ppuStack_48);
      lVar1 = -0x244;
      if (cRam00000001137eafbc == '\0') {
        lVar1 = -0xffff;
      }
      lVar1 = param_1 + lVar1;
      uVar3 = *(ushort *)(lVar1 + 0x70);
      if (((uVar3 & 0x7f) == 0) && ((*(ushort *)(lVar1 + 0x129) & 0x7f) == 0)) {
        if ((uVar3 >> 8 & 1) == 0) {
          uVar2 = lVar1 + 0x40;
          FUN_10a1bfe94(uVar2,&uStack_a0);
        }
        else {
          FUN_10a1bd5e0();
          if (uVar2 != 0) {
            FUN_10a1bd7d8();
          }
        }
      }
      else {
        if ((uVar3 >> 7 & 1) == 0) {
          *(undefined8 *)(lVar1 + 0x80) = uStack_a0;
          *(ushort *)(lVar1 + 0x70) = uVar3 | 0x80;
        }
        uVar2 = lVar1 + 0x80;
        FUN_10a1bd398(uVar2,&uStack_a0);
      }
      uVar3 = 0x244;
      if (cRam00000001137eafbc == '\0') {
        uVar3 = 0xffff;
      }
      lVar1 = 0x244;
      if (cRam00000001137eafbc == '\0') {
        lVar1 = 0xffff;
      }
      if ((*(ushort *)((param_1 - lVar1) + 0x129) >> 8 & 1) != 0) {
        FUN_10a1bd5e0();
        uVar3 = 0x244;
        if (cRam00000001137eafbc == '\0') {
          uVar3 = 0xffff;
        }
        if (uVar2 != 0) {
          FUN_10a1bd648();
          uVar3 = 0x244;
          if (cRam00000001137eafbc == '\0') {
            uVar3 = 0xffff;
          }
        }
      }
      FUN_10a1c054c((param_1 - (ulong)uVar3) + 0xd0,&uStack_a0);
      return;
    }
    *(long *)(lVar1 + 0xe0) = *(long *)(lVar1 + 0xe0) + 1;
  }
  else if ((*(ushort *)(lVar1 + 0x70) >> 8 & 1) == 0) goto LAB_10a3636c4;
  ppuVar5 = *(undefined ***)(lVar1 + 0x130);
  ppuVar4 = *(undefined ***)(lVar1 + 0x78);
  if ((ppuVar5 != &PTR_DAT_110bc6900 || ppuVar4 != &PTR_DAT_110bc6900) &&
     (FUN_10a1bd5e0(), param_1 != 0)) {
    if (ppuVar5 != &PTR_DAT_110bc6900) {
      FUN_10a1bd648(param_1,lVar1 + 0xd0,&PTR_DAT_110bc6900);
      *(undefined ***)(lVar1 + 0x130) = &PTR_DAT_110bc6900;
    }
    if (ppuVar4 != &PTR_DAT_110bc6900) {
      FUN_10a1bd7d8(param_1,lVar1 + 0x40,&PTR_DAT_110bc6900);
      *(undefined ***)(lVar1 + 0x78) = &PTR_DAT_110bc6900;
    }
  }
  return;
}



/* Entry: 10a364c7c; end: 10a364d0b;  */

void FUN_10a364c7c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar4 = (undefined8 *)0x68;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110bc6a00;
  uVar7 = param_3[1];
  uVar6 = *param_3;
  if (param_3[1] != 0) {
    plVar1 = (long *)(param_3[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar5 = param_3[2];
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[3] = &PTR_FUN_110c4dbc0;
  puVar4[4] = &PTR_DAT_110c4dc10;
  puVar4[8] = uVar7;
  puVar4[7] = uVar6;
  puVar4[0xc] = 0;
  puVar4[0xb] = 0;
  puVar4[9] = uVar5;
  puVar4[10] = puVar4 + 0xb;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  return;
}



/* Entry: 10a364d0c; end: 10a364d1b;  */

void FUN_10a364d0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc6a00;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a364d1c; end: 10a364d3b;  */

void FUN_10a364d1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc6a00;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a364d3c; end: 10a364d7f;  */

long FUN_10a364d3c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a364d84(param_1 + 0x50,*(undefined8 *)(param_1 + 0x58));
  if (*(long *)(param_1 + 0x40) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110b17898;
  plVar5 = *(long **)(param_1 + 0x30);
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
  return param_1 + 0x28;
}



/* Entry: 10a364d80; end: 10a364d83;  */

void FUN_10a364d80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a364d84; end: 10a36504f;  */

void FUN_10a364d84(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10a364d84(param_1,*param_2);
    FUN_10a364d84(param_1,param_2[1]);
    func_0x00010a364dcc(param_2 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10a365050; end: 10a365053;  */

void FUN_10a365050(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a365054; end: 10a365087;  */

void FUN_10a365054(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a365088; end: 10a3650bf;  */

undefined8 FUN_10a365088(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bc6aa0);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a3650c0; end: 10a365117;  */

void FUN_10a3650c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a365118; end: 10a36516b;  */

undefined8 * FUN_10a365118(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_10a363518(*param_1,param_1[2]);
  if (param_1[1] != 0) {
    lVar1 = *(long *)(param_1[1] + 0x10);
    if (lVar1 != 0) {
      do {
        lVar2 = lVar1;
        lVar1 = *(long *)(lVar2 + 0x10);
      } while (lVar1 != 0);
      param_1[1] = lVar2;
    }
    FUN_10a363518(*param_1);
  }
  return param_1;
}



/* Entry: 10a36516c; end: 10a3651c3;  */

void FUN_10a36516c(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x80;
  __Znwm();
  FUN_10a3651c4();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a3651c4; end: 10a36520b;  */

undefined8 * FUN_10a3651c4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110ba1f48;
  FUN_10a36520c(param_1 + 3);
  return param_1;
}



/* Entry: 10a36520c; end: 10a3652d7;  */

undefined8 * FUN_10a36520c(undefined8 *param_1,undefined8 *param_2)

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
  param_1[3] = param_2[3];
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  func_0x00010a365274((long)param_1 + 0x24,(long)param_2 + 0x24);
  return param_1;
}



/* Entry: 10a3652d8; end: 10a365457;  */

void FUN_10a3652d8(long *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_3 == 2) {
    *(undefined1 *)*param_1 = *(undefined1 *)param_2;
    return;
  }
  if (param_3 == 1) {
    *(undefined4 *)*param_1 = *(undefined4 *)param_2;
    return;
  }
  if (param_3 == 4) {
    puVar1 = (undefined8 *)*param_1;
    uVar2 = *param_2;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
  }
  else {
    if (param_3 != 3) {
      if (param_3 == 7) {
        puVar1 = (undefined8 *)*param_1;
        uVar3 = param_2[1];
        uVar2 = *param_2;
        uVar5 = param_2[3];
        uVar4 = param_2[2];
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_2 + 4);
        puVar1[1] = uVar3;
        *puVar1 = uVar2;
        puVar1[3] = uVar5;
        puVar1[2] = uVar4;
        return;
      }
      if ((param_3 == 6) || (param_3 == 5)) {
        puVar1 = (undefined8 *)*param_1;
        uVar2 = *param_2;
        puVar1[1] = param_2[1];
        *puVar1 = uVar2;
        return;
      }
      if (param_3 == 9) {
        *(undefined4 *)*param_1 = *(undefined4 *)param_2;
        return;
      }
      if (param_3 == 8) {
        puVar1 = (undefined8 *)*param_1;
        uVar3 = param_2[1];
        uVar2 = *param_2;
        uVar5 = param_2[3];
        uVar4 = param_2[2];
        uVar6 = param_2[4];
        uVar8 = param_2[7];
        uVar7 = param_2[6];
        puVar1[5] = param_2[5];
        puVar1[4] = uVar6;
        puVar1[7] = uVar8;
        puVar1[6] = uVar7;
        puVar1[1] = uVar3;
        *puVar1 = uVar2;
        puVar1[3] = uVar5;
        puVar1[2] = uVar4;
        return;
      }
      if (param_3 == 0xb) {
        puVar1 = (undefined8 *)*param_1;
        uVar2 = *param_2;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
      }
      else {
        if (param_3 != 10) {
          if (param_3 < 0xe) {
            if (param_3 != 0xc) {
              if (param_3 != 0xd) {
                return;
              }
              puVar1 = (undefined8 *)*param_1;
              uVar2 = *param_2;
LAB_10a365450:
              *puVar1 = uVar2;
              return;
            }
          }
          else {
            if (param_3 == 0xe) {
              puVar1 = (undefined8 *)*param_1;
              uVar2 = *param_2;
              *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
              goto LAB_10a365450;
            }
            if (param_3 != 0xf) {
              return;
            }
          }
          puVar1 = (undefined8 *)*param_1;
          uVar2 = *param_2;
          puVar1[1] = param_2[1];
          *puVar1 = uVar2;
          return;
        }
        puVar1 = (undefined8 *)*param_1;
        uVar2 = *param_2;
      }
      *puVar1 = uVar2;
      return;
    }
    puVar1 = (undefined8 *)*param_1;
    uVar2 = *param_2;
  }
  *puVar1 = uVar2;
  return;
}



/* Entry: 10a365458; end: 10a365637;  */

long * FUN_10a365458(long *param_1)

{
  ushort *puVar1;
  ushort uVar2;
  ulong uVar3;
  long *plVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_48;
  
  uVar3 = 0;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    lVar6 = *param_1 - (ulong)uRam00000001132ffd50;
    puVar1 = (ushort *)(lVar6 + 0x129);
    if ((((*puVar1 >> 8 & 1) == 0) &&
        (((*(long *)(lVar6 + 0x100) != 0 || ((*puVar1 >> 9 & 1) != 0)) ||
         (*(long *)(lVar6 + 0x120) != 0)))) || ((*(ushort *)(lVar6 + 0x70) >> 8 & 1) == 0)) {
      func_0x00010a1bd170();
      if ((uVar3 & 1) == 0) {
        *(undefined1 *)(param_1 + 1) = 1;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        ppuStack_48 = &PTR_DAT_110ba2010;
        uVar3 = (ulong)&uStack_a0 | 8;
        FUN_10a0dad0c(uVar3,&ppuStack_48);
        uVar2 = *(ushort *)(lVar6 + 0x70);
        if (((uVar2 & 0x7f) == 0) && ((*puVar1 & 0x7f) == 0)) {
          if ((uVar2 >> 8 & 1) == 0) {
            uVar3 = lVar6 + 0x40;
            FUN_10a1bfe94(uVar3,&uStack_a0);
          }
          else {
            FUN_10a1bd5e0();
            if (uVar3 != 0) {
              FUN_10a1bd7d8();
            }
          }
        }
        else {
          if ((uVar2 >> 7 & 1) == 0) {
            *(undefined8 *)(lVar6 + 0x80) = uStack_a0;
            *(ushort *)(lVar6 + 0x70) = uVar2 | 0x80;
          }
          uVar3 = lVar6 + 0x80;
          FUN_10a1bd398(uVar3,&uStack_a0);
        }
        if (((*puVar1 >> 8 & 1) != 0) && (FUN_10a1bd5e0(), uVar3 != 0)) {
          FUN_10a1bd648();
        }
        FUN_10a1c054c(lVar6 + 0xd0,&uStack_a0);
      }
    }
    else {
      *(undefined1 *)(param_1 + 1) = 1;
      if ((*puVar1 >> 8 & 1) == 0) {
        *(long *)(lVar6 + 0xe0) = *(long *)(lVar6 + 0xe0) + 1;
      }
      ppuVar5 = *(undefined ***)(lVar6 + 0x130);
      ppuVar7 = *(undefined ***)(lVar6 + 0x78);
      if ((ppuVar5 != &PTR_DAT_110ba2010 || ppuVar7 != &PTR_DAT_110ba2010) &&
         (plVar4 = param_1, FUN_10a1bd5e0(), plVar4 != (long *)0x0)) {
        if (ppuVar5 != &PTR_DAT_110ba2010) {
          FUN_10a1bd648(plVar4,lVar6 + 0xd0,&PTR_DAT_110ba2010);
          *(undefined ***)(lVar6 + 0x130) = &PTR_DAT_110ba2010;
        }
        if (ppuVar7 != &PTR_DAT_110ba2010) {
          FUN_10a1bd7d8(plVar4,lVar6 + 0x40,&PTR_DAT_110ba2010);
          *(undefined ***)(lVar6 + 0x78) = &PTR_DAT_110ba2010;
        }
      }
    }
  }
  return param_1;
}



/* Entry: 10a365638; end: 10a36568b;  */

void FUN_10a365638(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)param_1[2];
  if (plVar1 != (long *)0x0) {
    plVar2 = (long *)*plVar1;
    if (plVar2 == param_1) {
      *plVar1 = 0;
      while (plVar2 = (long *)plVar1[1], (long *)plVar1[1] != (long *)0x0) {
        do {
          plVar1 = plVar2;
          plVar2 = (long *)*plVar1;
        } while ((long *)*plVar1 != (long *)0x0);
      }
    }
    else {
      plVar1[1] = 0;
      while (plVar2 != (long *)0x0) {
        do {
          plVar1 = plVar2;
          plVar2 = (long *)*plVar1;
        } while (plVar2 != (long *)0x0);
        plVar2 = (long *)plVar1[1];
      }
    }
  }
  return;
}



/* Entry: 10a36568c; end: 10a3656df;  */

undefined8 * FUN_10a36568c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010a362fa4(*param_1,param_1[2]);
  if (param_1[1] != 0) {
    lVar1 = *(long *)(param_1[1] + 0x10);
    if (lVar1 != 0) {
      do {
        lVar2 = lVar1;
        lVar1 = *(long *)(lVar2 + 0x10);
      } while (lVar1 != 0);
      param_1[1] = lVar2;
    }
    func_0x00010a362fa4(*param_1);
  }
  return param_1;
}



/* Entry: 10a3656e0; end: 10a36578f;  */

void FUN_10a3656e0(long *param_1,long *param_2,long param_3,long *param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  lVar1 = -0x1e8;
  if (cRam00000001137eafae == '\0') {
    lVar1 = -0xffff;
  }
  lVar1 = *param_1 + lVar1;
  if (param_5 != 0) {
    lVar2 = 0;
    if (*param_1 != 0) {
      lVar2 = lVar1 + 0x40;
    }
    param_5 = param_5 << 4;
    do {
      if (*param_4 != 0) {
        func_0x00010a1bf190(*param_4 + 0xb0,lVar2);
      }
      param_4 = param_4 + 2;
      param_5 = param_5 + -0x10;
    } while (param_5 != 0);
  }
  if (param_3 != 0) {
    param_3 = param_3 << 4;
    do {
      if (*param_2 != 0) {
        func_0x00010a1bf34c(*param_2 + 0xb0,lVar1 + 0x40);
      }
      param_2 = param_2 + 2;
      param_3 = param_3 + -0x10;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 10a365790; end: 10a3657c3;  */

long FUN_10a365790(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10a3657c4(param_1);
  }
  return param_1;
}



/* Entry: 10a3657c4; end: 10a36599b;  */

void FUN_10a3657c4(long *param_1)

{
  ushort *puVar1;
  long lVar2;
  ushort uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_48;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    uVar4 = 0;
    lVar2 = -0x1e8;
    if (cRam00000001137eafae == '\0') {
      lVar2 = -0xffff;
    }
    lVar2 = *param_1 + lVar2;
    puVar1 = (ushort *)(lVar2 + 0x129);
    if ((((*puVar1 >> 8 & 1) == 0) &&
        (((*(long *)(lVar2 + 0x100) != 0 || ((*puVar1 >> 9 & 1) != 0)) ||
         (*(long *)(lVar2 + 0x120) != 0)))) || ((*(ushort *)(lVar2 + 0x70) >> 8 & 1) == 0)) {
      func_0x00010a1bd170();
      if ((uVar4 & 1) == 0) {
        *(undefined1 *)(param_1 + 1) = 1;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        ppuStack_48 = &PTR_DAT_110bc6ab8;
        uVar4 = (ulong)&uStack_a0 | 8;
        FUN_10a0dad0c(uVar4,&ppuStack_48);
        uVar3 = *(ushort *)(lVar2 + 0x70);
        if (((uVar3 & 0x7f) == 0) && ((*puVar1 & 0x7f) == 0)) {
          if ((uVar3 >> 8 & 1) == 0) {
            uVar4 = lVar2 + 0x40;
            FUN_10a1bfe94(uVar4,&uStack_a0);
          }
          else {
            FUN_10a1bd5e0();
            if (uVar4 != 0) {
              FUN_10a1bd7d8();
            }
          }
        }
        else {
          if ((uVar3 >> 7 & 1) == 0) {
            *(undefined8 *)(lVar2 + 0x80) = uStack_a0;
            *(ushort *)(lVar2 + 0x70) = uVar3 | 0x80;
          }
          uVar4 = lVar2 + 0x80;
          FUN_10a1bd398(uVar4,&uStack_a0);
        }
        if (((*puVar1 >> 8 & 1) != 0) && (FUN_10a1bd5e0(), uVar4 != 0)) {
          FUN_10a1bd648();
        }
        FUN_10a1c054c(lVar2 + 0xd0,&uStack_a0);
      }
    }
    else {
      *(undefined1 *)(param_1 + 1) = 1;
      if ((*puVar1 >> 8 & 1) == 0) {
        *(long *)(lVar2 + 0xe0) = *(long *)(lVar2 + 0xe0) + 1;
      }
      ppuVar6 = *(undefined ***)(lVar2 + 0x130);
      ppuVar5 = *(undefined ***)(lVar2 + 0x78);
      if ((ppuVar6 != &PTR_DAT_110bc6ab8 || ppuVar5 != &PTR_DAT_110bc6ab8) &&
         (FUN_10a1bd5e0(), param_1 != (long *)0x0)) {
        if (ppuVar6 != &PTR_DAT_110bc6ab8) {
          FUN_10a1bd648(param_1,lVar2 + 0xd0,&PTR_DAT_110bc6ab8);
          *(undefined ***)(lVar2 + 0x130) = &PTR_DAT_110bc6ab8;
        }
        if (ppuVar5 != &PTR_DAT_110bc6ab8) {
          FUN_10a1bd7d8(param_1,lVar2 + 0x40,&PTR_DAT_110bc6ab8);
          *(undefined ***)(lVar2 + 0x78) = &PTR_DAT_110bc6ab8;
        }
      }
    }
  }
  return;
}



/* Entry: 10a36599c; end: 10a365a53;  */

undefined1  [16]
FUN_10a36599c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  long *aplStack_48 [3];
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar3 = plVar1, (ulong)plVar3[7] <= *(ulong *)(param_2 + 0x18)) {
        if (*(ulong *)(param_2 + 0x18) <= (ulong)plVar3[7]) {
          uVar2 = 0;
          goto LAB_10a365a3c;
        }
        plVar1 = (long *)plVar3[1];
        if ((long *)plVar3[1] == (long *)0x0) {
          plVar4 = plVar3 + 1;
          goto LAB_10a365a00;
        }
      }
      plVar1 = (long *)*plVar3;
      plVar4 = plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
LAB_10a365a00:
  FUN_10a365a54(aplStack_48,param_1,param_3,param_4,param_5);
  FUN_10a365abc(param_1,plVar3,plVar4,aplStack_48[0]);
  uVar2 = 1;
  plVar3 = aplStack_48[0];
LAB_10a365a3c:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = plVar3;
  return auVar5;
}



/* Entry: 10a365a54; end: 10a365abb;  */

void FUN_10a365a54(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  
  lVar1 = 0x50;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  func_0x00010a365b10(lVar1 + 0x20,*param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10a365abc; end: 10a365c13;  */

void FUN_10a365abc(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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



/* Entry: 10a365c14; end: 10a365df7;  */

void FUN_10a365c14(long param_1)

{
  ushort uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_48;
  
  uVar2 = 0;
  lVar4 = param_1 - (ulong)uRam0000000113301c20;
  if ((*(ushort *)(lVar4 + 0x129) >> 8 & 1) == 0) {
    if ((((*(long *)(lVar4 + 0x100) != 0) || ((*(ushort *)(lVar4 + 0x129) >> 9 & 1) != 0)) ||
        (*(long *)(lVar4 + 0x120) != 0)) || ((*(ushort *)(lVar4 + 0x70) >> 8 & 1) == 0)) {
LAB_10a365c7c:
      func_0x00010a1bd170();
      if ((uVar2 & 1) != 0) {
        return;
      }
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      ppuStack_48 = &PTR_DAT_110bc7eb8;
      uVar2 = (ulong)&uStack_a0 | 8;
      FUN_10a0dad0c(uVar2,&ppuStack_48);
      lVar4 = param_1 - (ulong)uRam0000000113301c20;
      uVar1 = *(ushort *)(lVar4 + 0x70);
      if (((uVar1 & 0x7f) == 0) && ((*(ushort *)(lVar4 + 0x129) & 0x7f) == 0)) {
        if ((uVar1 >> 8 & 1) == 0) {
          uVar2 = lVar4 + 0x40;
          FUN_10a1bfe94(uVar2,&uStack_a0);
        }
        else {
          FUN_10a1bd5e0();
          if (uVar2 != 0) {
            FUN_10a1bd7d8();
          }
        }
      }
      else {
        if ((uVar1 >> 7 & 1) == 0) {
          *(undefined8 *)(lVar4 + 0x80) = uStack_a0;
          *(ushort *)(lVar4 + 0x70) = uVar1 | 0x80;
        }
        uVar2 = lVar4 + 0x80;
        FUN_10a1bd398(uVar2,&uStack_a0);
      }
      uVar3 = (ulong)uRam0000000113301c20;
      if ((*(ushort *)((param_1 - uVar3) + 0x129) >> 8 & 1) != 0) {
        FUN_10a1bd5e0();
        uVar3 = (ulong)uRam0000000113301c20;
        if (uVar2 != 0) {
          FUN_10a1bd648();
          uVar3 = (ulong)uRam0000000113301c20;
        }
      }
      FUN_10a1c054c((param_1 - uVar3) + 0xd0,&uStack_a0);
      return;
    }
    *(long *)(lVar4 + 0xe0) = *(long *)(lVar4 + 0xe0) + 1;
  }
  else if ((*(ushort *)(lVar4 + 0x70) >> 8 & 1) == 0) goto LAB_10a365c7c;
  ppuVar6 = *(undefined ***)(lVar4 + 0x130);
  ppuVar5 = *(undefined ***)(lVar4 + 0x78);
  if ((ppuVar6 != &PTR_DAT_110bc7eb8 || ppuVar5 != &PTR_DAT_110bc7eb8) &&
     (FUN_10a1bd5e0(), param_1 != 0)) {
    if (ppuVar6 != &PTR_DAT_110bc7eb8) {
      FUN_10a1bd648(param_1,lVar4 + 0xd0,&PTR_DAT_110bc7eb8);
      *(undefined ***)(lVar4 + 0x130) = &PTR_DAT_110bc7eb8;
    }
    if (ppuVar5 != &PTR_DAT_110bc7eb8) {
      FUN_10a1bd7d8(param_1,lVar4 + 0x40,&PTR_DAT_110bc7eb8);
      *(undefined ***)(lVar4 + 0x78) = &PTR_DAT_110bc7eb8;
    }
  }
  return;
}



/* Entry: 10a365df8; end: 10a365e37;  */

long * FUN_10a365df8(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ushort uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_68;
  
  lVar5 = param_2[1];
  *param_1 = *param_2;
  if (lVar5 == 0) {
    param_1[1] = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar5;
    if (lVar5 != 0) {
      return param_1;
    }
  }
  plVar2 = (long *)0x0;
  FUN_10a043ecc();
  uVar3 = 0;
  if ((*(byte *)(plVar2 + 1) & 1) == 0) {
    lVar5 = -0x1e8;
    if (cRam00000001137eafae == '\0') {
      lVar5 = -0xffff;
    }
    lVar5 = *plVar2 + lVar5;
    uVar6 = *(ushort *)(lVar5 + 0x129);
    if ((((uVar6 >> 8 & 1) == 0) &&
        (((*(long *)(lVar5 + 0x100) != 0 || ((uVar6 >> 9 & 1) != 0)) ||
         (*(long *)(lVar5 + 0x120) != 0)))) || ((*(ushort *)(lVar5 + 0x70) >> 8 & 1) == 0)) {
      func_0x00010a1bd170();
      if ((uVar3 & 1) == 0) {
        *(undefined1 *)(plVar2 + 1) = 1;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        ppuStack_68 = &PTR_DAT_110bc6ab8;
        uVar3 = (ulong)&uStack_c0 | 8;
        FUN_10a0dad0c(uVar3,&ppuStack_68);
        lVar5 = -0x1e8;
        if (cRam00000001137eafae == '\0') {
          lVar5 = -0xffff;
        }
        lVar5 = *plVar2 + lVar5;
        uVar6 = *(ushort *)(lVar5 + 0x70);
        if (((uVar6 & 0x7f) == 0) && ((*(ushort *)(lVar5 + 0x129) & 0x7f) == 0)) {
          if ((uVar6 >> 8 & 1) == 0) {
            uVar3 = lVar5 + 0x40;
            FUN_10a1bfe94(uVar3,&uStack_c0);
          }
          else {
            FUN_10a1bd5e0();
            if (uVar3 != 0) {
              FUN_10a1bd7d8();
            }
          }
        }
        else {
          if ((uVar6 >> 7 & 1) == 0) {
            *(undefined8 *)(lVar5 + 0x80) = uStack_c0;
            *(ushort *)(lVar5 + 0x70) = uVar6 | 0x80;
          }
          uVar3 = lVar5 + 0x80;
          FUN_10a1bd398(uVar3,&uStack_c0);
        }
        lVar5 = *plVar2;
        uVar6 = 0x1e8;
        if (cRam00000001137eafae == '\0') {
          uVar6 = 0xffff;
        }
        lVar1 = 0x1e8;
        if (cRam00000001137eafae == '\0') {
          lVar1 = 0xffff;
        }
        if ((*(ushort *)((lVar5 - lVar1) + 0x129) >> 8 & 1) != 0) {
          FUN_10a1bd5e0();
          lVar5 = *plVar2;
          uVar6 = 0x1e8;
          if (cRam00000001137eafae == '\0') {
            uVar6 = 0xffff;
          }
          if (uVar3 != 0) {
            FUN_10a1bd648();
            lVar5 = *plVar2;
            uVar6 = 0x1e8;
            if (cRam00000001137eafae == '\0') {
              uVar6 = 0xffff;
            }
          }
        }
        FUN_10a1c054c((lVar5 - (ulong)uVar6) + 0xd0,&uStack_c0);
      }
    }
    else {
      *(undefined1 *)(plVar2 + 1) = 1;
      if ((*(ushort *)(lVar5 + 0x129) >> 8 & 1) == 0) {
        *(long *)(lVar5 + 0xe0) = *(long *)(lVar5 + 0xe0) + 1;
      }
      ppuVar7 = *(undefined ***)(lVar5 + 0x130);
      ppuVar8 = *(undefined ***)(lVar5 + 0x78);
      if ((ppuVar7 != &PTR_DAT_110bc6ab8 || ppuVar8 != &PTR_DAT_110bc6ab8) &&
         (plVar4 = plVar2, FUN_10a1bd5e0(), plVar4 != (long *)0x0)) {
        if (ppuVar7 != &PTR_DAT_110bc6ab8) {
          FUN_10a1bd648(plVar4,lVar5 + 0xd0,&PTR_DAT_110bc6ab8);
          *(undefined ***)(lVar5 + 0x130) = &PTR_DAT_110bc6ab8;
        }
        if (ppuVar8 != &PTR_DAT_110bc6ab8) {
          FUN_10a1bd7d8(plVar4,lVar5 + 0x40,&PTR_DAT_110bc6ab8);
          *(undefined ***)(lVar5 + 0x78) = &PTR_DAT_110bc6ab8;
        }
      }
    }
  }
  return plVar2;
}



/* Entry: 10a365e38; end: 10a3660c7;  */

long * FUN_10a365e38(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ushort uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_48;
  
  uVar2 = 0;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    lVar4 = -0x1e8;
    if (cRam00000001137eafae == '\0') {
      lVar4 = -0xffff;
    }
    lVar4 = *param_1 + lVar4;
    uVar5 = *(ushort *)(lVar4 + 0x129);
    if ((((uVar5 >> 8 & 1) == 0) &&
        (((*(long *)(lVar4 + 0x100) != 0 || ((uVar5 >> 9 & 1) != 0)) ||
         (*(long *)(lVar4 + 0x120) != 0)))) || ((*(ushort *)(lVar4 + 0x70) >> 8 & 1) == 0)) {
      func_0x00010a1bd170();
      if ((uVar2 & 1) == 0) {
        *(undefined1 *)(param_1 + 1) = 1;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        ppuStack_48 = &PTR_DAT_110bc6ab8;
        uVar2 = (ulong)&uStack_a0 | 8;
        FUN_10a0dad0c(uVar2,&ppuStack_48);
        lVar4 = -0x1e8;
        if (cRam00000001137eafae == '\0') {
          lVar4 = -0xffff;
        }
        lVar4 = *param_1 + lVar4;
        uVar5 = *(ushort *)(lVar4 + 0x70);
        if (((uVar5 & 0x7f) == 0) && ((*(ushort *)(lVar4 + 0x129) & 0x7f) == 0)) {
          if ((uVar5 >> 8 & 1) == 0) {
            uVar2 = lVar4 + 0x40;
            FUN_10a1bfe94(uVar2,&uStack_a0);
          }
          else {
            FUN_10a1bd5e0();
            if (uVar2 != 0) {
              FUN_10a1bd7d8();
            }
          }
        }
        else {
          if ((uVar5 >> 7 & 1) == 0) {
            *(undefined8 *)(lVar4 + 0x80) = uStack_a0;
            *(ushort *)(lVar4 + 0x70) = uVar5 | 0x80;
          }
          uVar2 = lVar4 + 0x80;
          FUN_10a1bd398(uVar2,&uStack_a0);
        }
        lVar4 = *param_1;
        uVar5 = 0x1e8;
        if (cRam00000001137eafae == '\0') {
          uVar5 = 0xffff;
        }
        lVar1 = 0x1e8;
        if (cRam00000001137eafae == '\0') {
          lVar1 = 0xffff;
        }
        if ((*(ushort *)((lVar4 - lVar1) + 0x129) >> 8 & 1) != 0) {
          FUN_10a1bd5e0();
          lVar4 = *param_1;
          uVar5 = 0x1e8;
          if (cRam00000001137eafae == '\0') {
            uVar5 = 0xffff;
          }
          if (uVar2 != 0) {
            FUN_10a1bd648();
            lVar4 = *param_1;
            uVar5 = 0x1e8;
            if (cRam00000001137eafae == '\0') {
              uVar5 = 0xffff;
            }
          }
        }
        FUN_10a1c054c((lVar4 - (ulong)uVar5) + 0xd0,&uStack_a0);
      }
    }
    else {
      *(undefined1 *)(param_1 + 1) = 1;
      if ((*(ushort *)(lVar4 + 0x129) >> 8 & 1) == 0) {
        *(long *)(lVar4 + 0xe0) = *(long *)(lVar4 + 0xe0) + 1;
      }
      ppuVar6 = *(undefined ***)(lVar4 + 0x130);
      ppuVar7 = *(undefined ***)(lVar4 + 0x78);
      if ((ppuVar6 != &PTR_DAT_110bc6ab8 || ppuVar7 != &PTR_DAT_110bc6ab8) &&
         (plVar3 = param_1, FUN_10a1bd5e0(), plVar3 != (long *)0x0)) {
        if (ppuVar6 != &PTR_DAT_110bc6ab8) {
          FUN_10a1bd648(plVar3,lVar4 + 0xd0,&PTR_DAT_110bc6ab8);
          *(undefined ***)(lVar4 + 0x130) = &PTR_DAT_110bc6ab8;
        }
        if (ppuVar7 != &PTR_DAT_110bc6ab8) {
          FUN_10a1bd7d8(plVar3,lVar4 + 0x40,&PTR_DAT_110bc6ab8);
          *(undefined ***)(lVar4 + 0x78) = &PTR_DAT_110bc6ab8;
        }
      }
    }
  }
  return param_1;
}



/* Entry: 10a3660c8; end: 10a366357;  */

long * FUN_10a3660c8(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ushort uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_48;
  
  uVar2 = 0;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    lVar4 = -0x218;
    if (cRam00000001137eafb0 == '\0') {
      lVar4 = -0xffff;
    }
    lVar4 = *param_1 + lVar4;
    uVar5 = *(ushort *)(lVar4 + 0x129);
    if ((((uVar5 >> 8 & 1) == 0) &&
        (((*(long *)(lVar4 + 0x100) != 0 || ((uVar5 >> 9 & 1) != 0)) ||
         (*(long *)(lVar4 + 0x120) != 0)))) || ((*(ushort *)(lVar4 + 0x70) >> 8 & 1) == 0)) {
      func_0x00010a1bd170();
      if ((uVar2 & 1) == 0) {
        *(undefined1 *)(param_1 + 1) = 1;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        ppuStack_48 = &PTR_DAT_110bc6960;
        uVar2 = (ulong)&uStack_a0 | 8;
        FUN_10a0dad0c(uVar2,&ppuStack_48);
        lVar4 = -0x218;
        if (cRam00000001137eafb0 == '\0') {
          lVar4 = -0xffff;
        }
        lVar4 = *param_1 + lVar4;
        uVar5 = *(ushort *)(lVar4 + 0x70);
        if (((uVar5 & 0x7f) == 0) && ((*(ushort *)(lVar4 + 0x129) & 0x7f) == 0)) {
          if ((uVar5 >> 8 & 1) == 0) {
            uVar2 = lVar4 + 0x40;
            FUN_10a1bfe94(uVar2,&uStack_a0);
          }
          else {
            FUN_10a1bd5e0();
            if (uVar2 != 0) {
              FUN_10a1bd7d8();
            }
          }
        }
        else {
          if ((uVar5 >> 7 & 1) == 0) {
            *(undefined8 *)(lVar4 + 0x80) = uStack_a0;
            *(ushort *)(lVar4 + 0x70) = uVar5 | 0x80;
          }
          uVar2 = lVar4 + 0x80;
          FUN_10a1bd398(uVar2,&uStack_a0);
        }
        lVar4 = *param_1;
        uVar5 = 0x218;
        if (cRam00000001137eafb0 == '\0') {
          uVar5 = 0xffff;
        }
        lVar1 = 0x218;
        if (cRam00000001137eafb0 == '\0') {
          lVar1 = 0xffff;
        }
        if ((*(ushort *)((lVar4 - lVar1) + 0x129) >> 8 & 1) != 0) {
          FUN_10a1bd5e0();
          lVar4 = *param_1;
          uVar5 = 0x218;
          if (cRam00000001137eafb0 == '\0') {
            uVar5 = 0xffff;
          }
          if (uVar2 != 0) {
            FUN_10a1bd648();
            lVar4 = *param_1;
            uVar5 = 0x218;
            if (cRam00000001137eafb0 == '\0') {
              uVar5 = 0xffff;
            }
          }
        }
        FUN_10a1c054c((lVar4 - (ulong)uVar5) + 0xd0,&uStack_a0);
      }
    }
    else {
      *(undefined1 *)(param_1 + 1) = 1;
      if ((*(ushort *)(lVar4 + 0x129) >> 8 & 1) == 0) {
        *(long *)(lVar4 + 0xe0) = *(long *)(lVar4 + 0xe0) + 1;
      }
      ppuVar6 = *(undefined ***)(lVar4 + 0x130);
      ppuVar7 = *(undefined ***)(lVar4 + 0x78);
      if ((ppuVar6 != &PTR_DAT_110bc6960 || ppuVar7 != &PTR_DAT_110bc6960) &&
         (plVar3 = param_1, FUN_10a1bd5e0(), plVar3 != (long *)0x0)) {
        if (ppuVar6 != &PTR_DAT_110bc6960) {
          FUN_10a1bd648(plVar3,lVar4 + 0xd0,&PTR_DAT_110bc6960);
          *(undefined ***)(lVar4 + 0x130) = &PTR_DAT_110bc6960;
        }
        if (ppuVar7 != &PTR_DAT_110bc6960) {
          FUN_10a1bd7d8(plVar3,lVar4 + 0x40,&PTR_DAT_110bc6960);
          *(undefined ***)(lVar4 + 0x78) = &PTR_DAT_110bc6960;
        }
      }
    }
  }
  return param_1;
}



/* Entry: 10a366358; end: 10a3665e7;  */

long * FUN_10a366358(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ushort uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_48;
  
  uVar2 = 0;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    lVar4 = -0x21a;
    if (cRam00000001137eafb4 == '\0') {
      lVar4 = -0xffff;
    }
    lVar4 = *param_1 + lVar4;
    uVar5 = *(ushort *)(lVar4 + 0x129);
    if ((((uVar5 >> 8 & 1) == 0) &&
        (((*(long *)(lVar4 + 0x100) != 0 || ((uVar5 >> 9 & 1) != 0)) ||
         (*(long *)(lVar4 + 0x120) != 0)))) || ((*(ushort *)(lVar4 + 0x70) >> 8 & 1) == 0)) {
      func_0x00010a1bd170();
      if ((uVar2 & 1) == 0) {
        *(undefined1 *)(param_1 + 1) = 1;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        ppuStack_48 = &PTR_DAT_110bc6978;
        uVar2 = (ulong)&uStack_a0 | 8;
        FUN_10a0dad0c(uVar2,&ppuStack_48);
        lVar4 = -0x21a;
        if (cRam00000001137eafb4 == '\0') {
          lVar4 = -0xffff;
        }
        lVar4 = *param_1 + lVar4;
        uVar5 = *(ushort *)(lVar4 + 0x70);
        if (((uVar5 & 0x7f) == 0) && ((*(ushort *)(lVar4 + 0x129) & 0x7f) == 0)) {
          if ((uVar5 >> 8 & 1) == 0) {
            uVar2 = lVar4 + 0x40;
            FUN_10a1bfe94(uVar2,&uStack_a0);
          }
          else {
            FUN_10a1bd5e0();
            if (uVar2 != 0) {
              FUN_10a1bd7d8();
            }
          }
        }
        else {
          if ((uVar5 >> 7 & 1) == 0) {
            *(undefined8 *)(lVar4 + 0x80) = uStack_a0;
            *(ushort *)(lVar4 + 0x70) = uVar5 | 0x80;
          }
          uVar2 = lVar4 + 0x80;
          FUN_10a1bd398(uVar2,&uStack_a0);
        }
        lVar4 = *param_1;
        uVar5 = 0x21a;
        if (cRam00000001137eafb4 == '\0') {
          uVar5 = 0xffff;
        }
        lVar1 = 0x21a;
        if (cRam00000001137eafb4 == '\0') {
          lVar1 = 0xffff;
        }
        if ((*(ushort *)((lVar4 - lVar1) + 0x129) >> 8 & 1) != 0) {
          FUN_10a1bd5e0();
          lVar4 = *param_1;
          uVar5 = 0x21a;
          if (cRam00000001137eafb4 == '\0') {
            uVar5 = 0xffff;
          }
          if (uVar2 != 0) {
            FUN_10a1bd648();
            lVar4 = *param_1;
            uVar5 = 0x21a;
            if (cRam00000001137eafb4 == '\0') {
              uVar5 = 0xffff;
            }
          }
        }
        FUN_10a1c054c((lVar4 - (ulong)uVar5) + 0xd0,&uStack_a0);
      }
    }
    else {
      *(undefined1 *)(param_1 + 1) = 1;
      if ((*(ushort *)(lVar4 + 0x129) >> 8 & 1) == 0) {
        *(long *)(lVar4 + 0xe0) = *(long *)(lVar4 + 0xe0) + 1;
      }
      ppuVar6 = *(undefined ***)(lVar4 + 0x130);
      ppuVar7 = *(undefined ***)(lVar4 + 0x78);
      if ((ppuVar6 != &PTR_DAT_110bc6978 || ppuVar7 != &PTR_DAT_110bc6978) &&
         (plVar3 = param_1, FUN_10a1bd5e0(), plVar3 != (long *)0x0)) {
        if (ppuVar6 != &PTR_DAT_110bc6978) {
          FUN_10a1bd648(plVar3,lVar4 + 0xd0,&PTR_DAT_110bc6978);
          *(undefined ***)(lVar4 + 0x130) = &PTR_DAT_110bc6978;
        }
        if (ppuVar7 != &PTR_DAT_110bc6978) {
          FUN_10a1bd7d8(plVar3,lVar4 + 0x40,&PTR_DAT_110bc6978);
          *(undefined ***)(lVar4 + 0x78) = &PTR_DAT_110bc6978;
        }
      }
    }
  }
  return param_1;
}



/* Entry: 10a3665e8; end: 10a366877;  */

long * FUN_10a3665e8(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ushort uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_48;
  
  uVar2 = 0;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    lVar4 = -0x219;
    if (cRam00000001137eafb2 == '\0') {
      lVar4 = -0xffff;
    }
    lVar4 = *param_1 + lVar4;
    uVar5 = *(ushort *)(lVar4 + 0x129);
    if ((((uVar5 >> 8 & 1) == 0) &&
        (((*(long *)(lVar4 + 0x100) != 0 || ((uVar5 >> 9 & 1) != 0)) ||
         (*(long *)(lVar4 + 0x120) != 0)))) || ((*(ushort *)(lVar4 + 0x70) >> 8 & 1) == 0)) {
      func_0x00010a1bd170();
      if ((uVar2 & 1) == 0) {
        *(undefined1 *)(param_1 + 1) = 1;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        ppuStack_48 = &PTR_DAT_110bc6990;
        uVar2 = (ulong)&uStack_a0 | 8;
        FUN_10a0dad0c(uVar2,&ppuStack_48);
        lVar4 = -0x219;
        if (cRam00000001137eafb2 == '\0') {
          lVar4 = -0xffff;
        }
        lVar4 = *param_1 + lVar4;
        uVar5 = *(ushort *)(lVar4 + 0x70);
        if (((uVar5 & 0x7f) == 0) && ((*(ushort *)(lVar4 + 0x129) & 0x7f) == 0)) {
          if ((uVar5 >> 8 & 1) == 0) {
            uVar2 = lVar4 + 0x40;
            FUN_10a1bfe94(uVar2,&uStack_a0);
          }
          else {
            FUN_10a1bd5e0();
            if (uVar2 != 0) {
              FUN_10a1bd7d8();
            }
          }
        }
        else {
          if ((uVar5 >> 7 & 1) == 0) {
            *(undefined8 *)(lVar4 + 0x80) = uStack_a0;
            *(ushort *)(lVar4 + 0x70) = uVar5 | 0x80;
          }
          uVar2 = lVar4 + 0x80;
          FUN_10a1bd398(uVar2,&uStack_a0);
        }
        lVar4 = *param_1;
        uVar5 = 0x219;
        if (cRam00000001137eafb2 == '\0') {
          uVar5 = 0xffff;
        }
        lVar1 = 0x219;
        if (cRam00000001137eafb2 == '\0') {
          lVar1 = 0xffff;
        }
        if ((*(ushort *)((lVar4 - lVar1) + 0x129) >> 8 & 1) != 0) {
          FUN_10a1bd5e0();
          lVar4 = *param_1;
          uVar5 = 0x219;
          if (cRam00000001137eafb2 == '\0') {
            uVar5 = 0xffff;
          }
          if (uVar2 != 0) {
            FUN_10a1bd648();
            lVar4 = *param_1;
            uVar5 = 0x219;
            if (cRam00000001137eafb2 == '\0') {
              uVar5 = 0xffff;
            }
          }
        }
        FUN_10a1c054c((lVar4 - (ulong)uVar5) + 0xd0,&uStack_a0);
      }
    }
    else {
      *(undefined1 *)(param_1 + 1) = 1;
      if ((*(ushort *)(lVar4 + 0x129) >> 8 & 1) == 0) {
        *(long *)(lVar4 + 0xe0) = *(long *)(lVar4 + 0xe0) + 1;
      }
      ppuVar6 = *(undefined ***)(lVar4 + 0x130);
      ppuVar7 = *(undefined ***)(lVar4 + 0x78);
      if ((ppuVar6 != &PTR_DAT_110bc6990 || ppuVar7 != &PTR_DAT_110bc6990) &&
         (plVar3 = param_1, FUN_10a1bd5e0(), plVar3 != (long *)0x0)) {
        if (ppuVar6 != &PTR_DAT_110bc6990) {
          FUN_10a1bd648(plVar3,lVar4 + 0xd0,&PTR_DAT_110bc6990);
          *(undefined ***)(lVar4 + 0x130) = &PTR_DAT_110bc6990;
        }
        if (ppuVar7 != &PTR_DAT_110bc6990) {
          FUN_10a1bd7d8(plVar3,lVar4 + 0x40,&PTR_DAT_110bc6990);
          *(undefined ***)(lVar4 + 0x78) = &PTR_DAT_110bc6990;
        }
      }
    }
  }
  return param_1;
}



/* Entry: 10a366878; end: 10a366b07;  */

long * FUN_10a366878(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ushort uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_48;
  
  uVar2 = 0;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    lVar4 = -0x244;
    if (cRam00000001137eafbc == '\0') {
      lVar4 = -0xffff;
    }
    lVar4 = *param_1 + lVar4;
    uVar5 = *(ushort *)(lVar4 + 0x129);
    if ((((uVar5 >> 8 & 1) == 0) &&
        (((*(long *)(lVar4 + 0x100) != 0 || ((uVar5 >> 9 & 1) != 0)) ||
         (*(long *)(lVar4 + 0x120) != 0)))) || ((*(ushort *)(lVar4 + 0x70) >> 8 & 1) == 0)) {
      func_0x00010a1bd170();
      if ((uVar2 & 1) == 0) {
        *(undefined1 *)(param_1 + 1) = 1;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        ppuStack_48 = &PTR_DAT_110bc6900;
        uVar2 = (ulong)&uStack_a0 | 8;
        FUN_10a0dad0c(uVar2,&ppuStack_48);
        lVar4 = -0x244;
        if (cRam00000001137eafbc == '\0') {
          lVar4 = -0xffff;
        }
        lVar4 = *param_1 + lVar4;
        uVar5 = *(ushort *)(lVar4 + 0x70);
        if (((uVar5 & 0x7f) == 0) && ((*(ushort *)(lVar4 + 0x129) & 0x7f) == 0)) {
          if ((uVar5 >> 8 & 1) == 0) {
            uVar2 = lVar4 + 0x40;
            FUN_10a1bfe94(uVar2,&uStack_a0);
          }
          else {
            FUN_10a1bd5e0();
            if (uVar2 != 0) {
              FUN_10a1bd7d8();
            }
          }
        }
        else {
          if ((uVar5 >> 7 & 1) == 0) {
            *(undefined8 *)(lVar4 + 0x80) = uStack_a0;
            *(ushort *)(lVar4 + 0x70) = uVar5 | 0x80;
          }
          uVar2 = lVar4 + 0x80;
          FUN_10a1bd398(uVar2,&uStack_a0);
        }
        lVar4 = *param_1;
        uVar5 = 0x244;
        if (cRam00000001137eafbc == '\0') {
          uVar5 = 0xffff;
        }
        lVar1 = 0x244;
        if (cRam00000001137eafbc == '\0') {
          lVar1 = 0xffff;
        }
        if ((*(ushort *)((lVar4 - lVar1) + 0x129) >> 8 & 1) != 0) {
          FUN_10a1bd5e0();
          lVar4 = *param_1;
          uVar5 = 0x244;
          if (cRam00000001137eafbc == '\0') {
            uVar5 = 0xffff;
          }
          if (uVar2 != 0) {
            FUN_10a1bd648();
            lVar4 = *param_1;
            uVar5 = 0x244;
            if (cRam00000001137eafbc == '\0') {
              uVar5 = 0xffff;
            }
          }
        }
        FUN_10a1c054c((lVar4 - (ulong)uVar5) + 0xd0,&uStack_a0);
      }
    }
    else {
      *(undefined1 *)(param_1 + 1) = 1;
      if ((*(ushort *)(lVar4 + 0x129) >> 8 & 1) == 0) {
        *(long *)(lVar4 + 0xe0) = *(long *)(lVar4 + 0xe0) + 1;
      }
      ppuVar6 = *(undefined ***)(lVar4 + 0x130);
      ppuVar7 = *(undefined ***)(lVar4 + 0x78);
      if ((ppuVar6 != &PTR_DAT_110bc6900 || ppuVar7 != &PTR_DAT_110bc6900) &&
         (plVar3 = param_1, FUN_10a1bd5e0(), plVar3 != (long *)0x0)) {
        if (ppuVar6 != &PTR_DAT_110bc6900) {
          FUN_10a1bd648(plVar3,lVar4 + 0xd0,&PTR_DAT_110bc6900);
          *(undefined ***)(lVar4 + 0x130) = &PTR_DAT_110bc6900;
        }
        if (ppuVar7 != &PTR_DAT_110bc6900) {
          FUN_10a1bd7d8(plVar3,lVar4 + 0x40,&PTR_DAT_110bc6900);
          *(undefined ***)(lVar4 + 0x78) = &PTR_DAT_110bc6900;
        }
      }
    }
  }
  return param_1;
}



/* Entry: 10a366b08; end: 10a366d97;  */

long * FUN_10a366b08(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ushort uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_48;
  
  uVar2 = 0;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    lVar4 = -0x21c;
    if (cRam00000001137eafb6 == '\0') {
      lVar4 = -0xffff;
    }
    lVar4 = *param_1 + lVar4;
    uVar5 = *(ushort *)(lVar4 + 0x129);
    if ((((uVar5 >> 8 & 1) == 0) &&
        (((*(long *)(lVar4 + 0x100) != 0 || ((uVar5 >> 9 & 1) != 0)) ||
         (*(long *)(lVar4 + 0x120) != 0)))) || ((*(ushort *)(lVar4 + 0x70) >> 8 & 1) == 0)) {
      func_0x00010a1bd170();
      if ((uVar2 & 1) == 0) {
        *(undefined1 *)(param_1 + 1) = 1;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        ppuStack_48 = &PTR_DAT_110bc69a8;
        uVar2 = (ulong)&uStack_a0 | 8;
        FUN_10a0dad0c(uVar2,&ppuStack_48);
        lVar4 = -0x21c;
        if (cRam00000001137eafb6 == '\0') {
          lVar4 = -0xffff;
        }
        lVar4 = *param_1 + lVar4;
        uVar5 = *(ushort *)(lVar4 + 0x70);
        if (((uVar5 & 0x7f) == 0) && ((*(ushort *)(lVar4 + 0x129) & 0x7f) == 0)) {
          if ((uVar5 >> 8 & 1) == 0) {
            uVar2 = lVar4 + 0x40;
            FUN_10a1bfe94(uVar2,&uStack_a0);
          }
          else {
            FUN_10a1bd5e0();
            if (uVar2 != 0) {
              FUN_10a1bd7d8();
            }
          }
        }
        else {
          if ((uVar5 >> 7 & 1) == 0) {
            *(undefined8 *)(lVar4 + 0x80) = uStack_a0;
            *(ushort *)(lVar4 + 0x70) = uVar5 | 0x80;
          }
          uVar2 = lVar4 + 0x80;
          FUN_10a1bd398(uVar2,&uStack_a0);
        }
        lVar4 = *param_1;
        uVar5 = 0x21c;
        if (cRam00000001137eafb6 == '\0') {
          uVar5 = 0xffff;
        }
        lVar1 = 0x21c;
        if (cRam00000001137eafb6 == '\0') {
          lVar1 = 0xffff;
        }
        if ((*(ushort *)((lVar4 - lVar1) + 0x129) >> 8 & 1) != 0) {
          FUN_10a1bd5e0();
          lVar4 = *param_1;
          uVar5 = 0x21c;
          if (cRam00000001137eafb6 == '\0') {
            uVar5 = 0xffff;
          }
          if (uVar2 != 0) {
            FUN_10a1bd648();
            lVar4 = *param_1;
            uVar5 = 0x21c;
            if (cRam00000001137eafb6 == '\0') {
              uVar5 = 0xffff;
            }
          }
        }
        FUN_10a1c054c((lVar4 - (ulong)uVar5) + 0xd0,&uStack_a0);
      }
    }
    else {
      *(undefined1 *)(param_1 + 1) = 1;
      if ((*(ushort *)(lVar4 + 0x129) >> 8 & 1) == 0) {
        *(long *)(lVar4 + 0xe0) = *(long *)(lVar4 + 0xe0) + 1;
      }
      ppuVar6 = *(undefined ***)(lVar4 + 0x130);
      ppuVar7 = *(undefined ***)(lVar4 + 0x78);
      if ((ppuVar6 != &PTR_DAT_110bc69a8 || ppuVar7 != &PTR_DAT_110bc69a8) &&
         (plVar3 = param_1, FUN_10a1bd5e0(), plVar3 != (long *)0x0)) {
        if (ppuVar6 != &PTR_DAT_110bc69a8) {
          FUN_10a1bd648(plVar3,lVar4 + 0xd0,&PTR_DAT_110bc69a8);
          *(undefined ***)(lVar4 + 0x130) = &PTR_DAT_110bc69a8;
        }
        if (ppuVar7 != &PTR_DAT_110bc69a8) {
          FUN_10a1bd7d8(plVar3,lVar4 + 0x40,&PTR_DAT_110bc69a8);
          *(undefined ***)(lVar4 + 0x78) = &PTR_DAT_110bc69a8;
        }
      }
    }
  }
  return param_1;
}



/* Entry: 10a366d98; end: 10a367027;  */

long * FUN_10a366d98(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ushort uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_48;
  
  uVar2 = 0;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    lVar4 = -0x21d;
    if (cRam00000001137eafb8 == '\0') {
      lVar4 = -0xffff;
    }
    lVar4 = *param_1 + lVar4;
    uVar5 = *(ushort *)(lVar4 + 0x129);
    if ((((uVar5 >> 8 & 1) == 0) &&
        (((*(long *)(lVar4 + 0x100) != 0 || ((uVar5 >> 9 & 1) != 0)) ||
         (*(long *)(lVar4 + 0x120) != 0)))) || ((*(ushort *)(lVar4 + 0x70) >> 8 & 1) == 0)) {
      func_0x00010a1bd170();
      if ((uVar2 & 1) == 0) {
        *(undefined1 *)(param_1 + 1) = 1;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        ppuStack_48 = &PTR_DAT_110bc69c0;
        uVar2 = (ulong)&uStack_a0 | 8;
        FUN_10a0dad0c(uVar2,&ppuStack_48);
        lVar4 = -0x21d;
        if (cRam00000001137eafb8 == '\0') {
          lVar4 = -0xffff;
        }
        lVar4 = *param_1 + lVar4;
        uVar5 = *(ushort *)(lVar4 + 0x70);
        if (((uVar5 & 0x7f) == 0) && ((*(ushort *)(lVar4 + 0x129) & 0x7f) == 0)) {
          if ((uVar5 >> 8 & 1) == 0) {
            uVar2 = lVar4 + 0x40;
            FUN_10a1bfe94(uVar2,&uStack_a0);
          }
          else {
            FUN_10a1bd5e0();
            if (uVar2 != 0) {
              FUN_10a1bd7d8();
            }
          }
        }
        else {
          if ((uVar5 >> 7 & 1) == 0) {
            *(undefined8 *)(lVar4 + 0x80) = uStack_a0;
            *(ushort *)(lVar4 + 0x70) = uVar5 | 0x80;
          }
          uVar2 = lVar4 + 0x80;
          FUN_10a1bd398(uVar2,&uStack_a0);
        }
        lVar4 = *param_1;
        uVar5 = 0x21d;
        if (cRam00000001137eafb8 == '\0') {
          uVar5 = 0xffff;
        }
        lVar1 = 0x21d;
        if (cRam00000001137eafb8 == '\0') {
          lVar1 = 0xffff;
        }
        if ((*(ushort *)((lVar4 - lVar1) + 0x129) >> 8 & 1) != 0) {
          FUN_10a1bd5e0();
          lVar4 = *param_1;
          uVar5 = 0x21d;
          if (cRam00000001137eafb8 == '\0') {
            uVar5 = 0xffff;
          }
          if (uVar2 != 0) {
            FUN_10a1bd648();
            lVar4 = *param_1;
            uVar5 = 0x21d;
            if (cRam00000001137eafb8 == '\0') {
              uVar5 = 0xffff;
            }
          }
        }
        FUN_10a1c054c((lVar4 - (ulong)uVar5) + 0xd0,&uStack_a0);
      }
    }
    else {
      *(undefined1 *)(param_1 + 1) = 1;
      if ((*(ushort *)(lVar4 + 0x129) >> 8 & 1) == 0) {
        *(long *)(lVar4 + 0xe0) = *(long *)(lVar4 + 0xe0) + 1;
      }
      ppuVar6 = *(undefined ***)(lVar4 + 0x130);
      ppuVar7 = *(undefined ***)(lVar4 + 0x78);
      if ((ppuVar6 != &PTR_DAT_110bc69c0 || ppuVar7 != &PTR_DAT_110bc69c0) &&
         (plVar3 = param_1, FUN_10a1bd5e0(), plVar3 != (long *)0x0)) {
        if (ppuVar6 != &PTR_DAT_110bc69c0) {
          FUN_10a1bd648(plVar3,lVar4 + 0xd0,&PTR_DAT_110bc69c0);
          *(undefined ***)(lVar4 + 0x130) = &PTR_DAT_110bc69c0;
        }
        if (ppuVar7 != &PTR_DAT_110bc69c0) {
          FUN_10a1bd7d8(plVar3,lVar4 + 0x40,&PTR_DAT_110bc69c0);
          *(undefined ***)(lVar4 + 0x78) = &PTR_DAT_110bc69c0;
        }
      }
    }
  }
  return param_1;
}



/* Entry: 10a367028; end: 10a3672b7;  */

long * FUN_10a367028(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ushort uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_48;
  
  uVar2 = 0;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    lVar4 = -0x1d0;
    if (cRam00000001137eafac == '\0') {
      lVar4 = -0xffff;
    }
    lVar4 = *param_1 + lVar4;
    uVar5 = *(ushort *)(lVar4 + 0x129);
    if ((((uVar5 >> 8 & 1) == 0) &&
        (((*(long *)(lVar4 + 0x100) != 0 || ((uVar5 >> 9 & 1) != 0)) ||
         (*(long *)(lVar4 + 0x120) != 0)))) || ((*(ushort *)(lVar4 + 0x70) >> 8 & 1) == 0)) {
      func_0x00010a1bd170();
      if ((uVar2 & 1) == 0) {
        *(undefined1 *)(param_1 + 1) = 1;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        ppuStack_48 = &PTR_DAT_110bc6830;
        uVar2 = (ulong)&uStack_a0 | 8;
        FUN_10a0dad0c(uVar2,&ppuStack_48);
        lVar4 = -0x1d0;
        if (cRam00000001137eafac == '\0') {
          lVar4 = -0xffff;
        }
        lVar4 = *param_1 + lVar4;
        uVar5 = *(ushort *)(lVar4 + 0x70);
        if (((uVar5 & 0x7f) == 0) && ((*(ushort *)(lVar4 + 0x129) & 0x7f) == 0)) {
          if ((uVar5 >> 8 & 1) == 0) {
            uVar2 = lVar4 + 0x40;
            FUN_10a1bfe94(uVar2,&uStack_a0);
          }
          else {
            FUN_10a1bd5e0();
            if (uVar2 != 0) {
              FUN_10a1bd7d8();
            }
          }
        }
        else {
          if ((uVar5 >> 7 & 1) == 0) {
            *(undefined8 *)(lVar4 + 0x80) = uStack_a0;
            *(ushort *)(lVar4 + 0x70) = uVar5 | 0x80;
          }
          uVar2 = lVar4 + 0x80;
          FUN_10a1bd398(uVar2,&uStack_a0);
        }
        lVar4 = *param_1;
        uVar5 = 0x1d0;
        if (cRam00000001137eafac == '\0') {
          uVar5 = 0xffff;
        }
        lVar1 = 0x1d0;
        if (cRam00000001137eafac == '\0') {
          lVar1 = 0xffff;
        }
        if ((*(ushort *)((lVar4 - lVar1) + 0x129) >> 8 & 1) != 0) {
          FUN_10a1bd5e0();
          lVar4 = *param_1;
          uVar5 = 0x1d0;
          if (cRam00000001137eafac == '\0') {
            uVar5 = 0xffff;
          }
          if (uVar2 != 0) {
            FUN_10a1bd648();
            lVar4 = *param_1;
            uVar5 = 0x1d0;
            if (cRam00000001137eafac == '\0') {
              uVar5 = 0xffff;
            }
          }
        }
        FUN_10a1c054c((lVar4 - (ulong)uVar5) + 0xd0,&uStack_a0);
      }
    }
    else {
      *(undefined1 *)(param_1 + 1) = 1;
      if ((*(ushort *)(lVar4 + 0x129) >> 8 & 1) == 0) {
        *(long *)(lVar4 + 0xe0) = *(long *)(lVar4 + 0xe0) + 1;
      }
      ppuVar6 = *(undefined ***)(lVar4 + 0x130);
      ppuVar7 = *(undefined ***)(lVar4 + 0x78);
      if ((ppuVar6 != &PTR_DAT_110bc6830 || ppuVar7 != &PTR_DAT_110bc6830) &&
         (plVar3 = param_1, FUN_10a1bd5e0(), plVar3 != (long *)0x0)) {
        if (ppuVar6 != &PTR_DAT_110bc6830) {
          FUN_10a1bd648(plVar3,lVar4 + 0xd0,&PTR_DAT_110bc6830);
          *(undefined ***)(lVar4 + 0x130) = &PTR_DAT_110bc6830;
        }
        if (ppuVar7 != &PTR_DAT_110bc6830) {
          FUN_10a1bd7d8(plVar3,lVar4 + 0x40,&PTR_DAT_110bc6830);
          *(undefined ***)(lVar4 + 0x78) = &PTR_DAT_110bc6830;
        }
      }
    }
  }
  return param_1;
}



/* Entry: 10a3672b8; end: 10a3673a3;  */

long * FUN_10a3672b8(long param_1,ulong param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar1 = (long *)*plVar2;
  do {
    plVar3 = plVar2;
    if (plVar1 == (long *)0x0) {
LAB_10a36731c:
      plVar1 = (long *)0x48;
      __Znwm();
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        func_0x000107c3192c(plVar1 + 4,*param_3,param_3[1]);
      }
      else {
        lVar4 = *param_3;
        plVar1[5] = param_3[1];
        plVar1[4] = lVar4;
        plVar1[6] = param_3[2];
      }
      plVar1[7] = param_3[3];
      *(undefined4 *)(plVar1 + 8) = 0;
      FUN_10a362f50(param_1,plVar2,plVar3,plVar1);
      return plVar1;
    }
    while (plVar2 = plVar1, (ulong)plVar2[7] <= param_2) {
      if (param_2 <= (ulong)plVar2[7]) {
        return plVar2;
      }
      plVar1 = (long *)plVar2[1];
      if ((long *)plVar2[1] == (long *)0x0) {
        plVar3 = plVar2 + 1;
        goto LAB_10a36731c;
      }
    }
    plVar1 = (long *)*plVar2;
  } while( true );
}



/* Entry: 10a3673a4; end: 10a36741f;  */

undefined8 * FUN_10a3673a4(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

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
  param_1[3] = param_2[3];
  *(undefined2 *)(param_1 + 4) = 2;
  *(undefined4 *)((long)param_1 + 0x24) = *param_3;
  *(undefined1 *)((long)param_1 + 100) = 1;
  return param_1;
}



/* Entry: 10a367420; end: 10a36749b;  */

undefined8 * FUN_10a367420(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

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
  param_1[3] = param_2[3];
  *(undefined2 *)(param_1 + 4) = 6;
  *(undefined4 *)((long)param_1 + 0x24) = *param_3;
  *(undefined1 *)((long)param_1 + 100) = 9;
  return param_1;
}



/* Entry: 10a36749c; end: 10a367517;  */

undefined8 * FUN_10a36749c(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

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
  param_1[3] = param_2[3];
  *(undefined2 *)(param_1 + 4) = 1;
  *(undefined1 *)((long)param_1 + 0x24) = *param_3;
  *(undefined1 *)((long)param_1 + 100) = 2;
  return param_1;
}



/* Entry: 10a367518; end: 10a36759b;  */

undefined8 * FUN_10a367518(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
  param_1[3] = param_2[3];
  *(undefined2 *)(param_1 + 4) = 0x1f;
  *(undefined1 *)((long)param_1 + 100) = 0x10;
  *(undefined8 *)((long)param_1 + 0x24) = *param_3;
  *(undefined1 *)((long)param_1 + 100) = 10;
  return param_1;
}



/* Entry: 10a36759c; end: 10a367627;  */

undefined8 * FUN_10a36759c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
  param_1[3] = param_2[3];
  *(undefined2 *)(param_1 + 4) = 0x22;
  *(undefined1 *)((long)param_1 + 100) = 0x10;
  uVar1 = *param_3;
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)((long)param_1 + 0x24) = uVar1;
  *(undefined1 *)((long)param_1 + 100) = 0xb;
  return param_1;
}



/* Entry: 10a367628; end: 10a3676ab;  */

undefined8 * FUN_10a367628(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
  param_1[3] = param_2[3];
  *(undefined2 *)(param_1 + 4) = 0x23;
  *(undefined1 *)((long)param_1 + 100) = 0x10;
  uVar1 = *param_3;
  *(undefined8 *)((long)param_1 + 0x2c) = param_3[1];
  *(undefined8 *)((long)param_1 + 0x24) = uVar1;
  *(undefined1 *)((long)param_1 + 100) = 0xc;
  return param_1;
}



/* Entry: 10a3676ac; end: 10a36772f;  */

undefined8 * FUN_10a3676ac(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
  param_1[3] = param_2[3];
  *(undefined2 *)(param_1 + 4) = 0x24;
  *(undefined1 *)((long)param_1 + 100) = 0x10;
  *(undefined8 *)((long)param_1 + 0x24) = *param_3;
  *(undefined1 *)((long)param_1 + 100) = 0xd;
  return param_1;
}



/* Entry: 10a367730; end: 10a3677bb;  */

undefined8 * FUN_10a367730(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
  param_1[3] = param_2[3];
  *(undefined2 *)(param_1 + 4) = 0x25;
  *(undefined1 *)((long)param_1 + 100) = 0x10;
  uVar1 = *param_3;
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)((long)param_1 + 0x24) = uVar1;
  *(undefined1 *)((long)param_1 + 100) = 0xe;
  return param_1;
}



/* Entry: 10a3677bc; end: 10a36783f;  */

undefined8 * FUN_10a3677bc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
  param_1[3] = param_2[3];
  *(undefined2 *)(param_1 + 4) = 0x26;
  *(undefined1 *)((long)param_1 + 100) = 0x10;
  uVar1 = *param_3;
  *(undefined8 *)((long)param_1 + 0x2c) = param_3[1];
  *(undefined8 *)((long)param_1 + 0x24) = uVar1;
  *(undefined1 *)((long)param_1 + 100) = 0xf;
  return param_1;
}



/* Entry: 10a367840; end: 10a3678c3;  */

undefined8 * FUN_10a367840(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
  param_1[3] = param_2[3];
  *(undefined2 *)(param_1 + 4) = 0x16;
  *(undefined1 *)((long)param_1 + 100) = 0x10;
  uVar1 = *param_3;
  *(undefined8 *)((long)param_1 + 0x2c) = param_3[1];
  *(undefined8 *)((long)param_1 + 0x24) = uVar1;
  *(undefined1 *)((long)param_1 + 100) = 6;
  return param_1;
}



/* Entry: 10a3678c4; end: 10a367953;  */

undefined8 * FUN_10a3678c4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
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
  param_1[3] = param_2[3];
  *(undefined2 *)(param_1 + 4) = 10;
  *(undefined1 *)((long)param_1 + 100) = 0x10;
  uVar2 = param_3[1];
  uVar1 = *param_3;
  uVar4 = param_3[3];
  uVar3 = param_3[2];
  *(undefined4 *)((long)param_1 + 0x44) = *(undefined4 *)(param_3 + 4);
  *(undefined8 *)((long)param_1 + 0x3c) = uVar4;
  *(undefined8 *)((long)param_1 + 0x34) = uVar3;
  *(undefined8 *)((long)param_1 + 0x2c) = uVar2;
  *(undefined8 *)((long)param_1 + 0x24) = uVar1;
  *(undefined1 *)((long)param_1 + 100) = 7;
  return param_1;
}



/* Entry: 10a367954; end: 10a3679e7;  */

undefined8 * FUN_10a367954(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
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
  param_1[3] = param_2[3];
  *(undefined2 *)(param_1 + 4) = 0xb;
  *(undefined1 *)((long)param_1 + 100) = 0x10;
  uVar2 = param_3[1];
  uVar1 = *param_3;
  uVar4 = param_3[3];
  uVar3 = param_3[2];
  uVar6 = param_3[5];
  uVar5 = param_3[4];
  uVar7 = param_3[6];
  *(undefined8 *)((long)param_1 + 0x5c) = param_3[7];
  *(undefined8 *)((long)param_1 + 0x54) = uVar7;
  *(undefined8 *)((long)param_1 + 0x4c) = uVar6;
  *(undefined8 *)((long)param_1 + 0x44) = uVar5;
  *(undefined8 *)((long)param_1 + 0x3c) = uVar4;
  *(undefined8 *)((long)param_1 + 0x34) = uVar3;
  *(undefined8 *)((long)param_1 + 0x2c) = uVar2;
  *(undefined8 *)((long)param_1 + 0x24) = uVar1;
  *(undefined1 *)((long)param_1 + 100) = 8;
  return param_1;
}



/* Entry: 10a3679e8; end: 10a367ad3;  */

undefined *** FUN_10a3679e8(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  undefined *puVar6;
  long lVar7;
  undefined **ppuVar8;
  code *pcStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  undefined1 uStack_50;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *(long *)(param_2 + 0x10);
  lStack_58 = lVar7 + 0x20;
  uVar2 = *(ushort *)(lVar7 + 0x109);
  *(ushort *)(lVar7 + 0x109) = uVar2 & 0xff80 | uVar2 + 1 & 0x7f;
  *(ushort *)(lVar7 + 0x50) =
       *(ushort *)(lVar7 + 0x50) & 0xff80 | *(ushort *)(lVar7 + 0x50) + 1 & 0x7f;
  uStack_50 = 1;
  pcStack_68 = FUN_10a1d3648;
  ppuStack_60 = &PTR_FUN_110bad818;
  FUN_10a32f140(*(undefined8 *)(param_2 + 0x10),param_1);
  FUN_10a044790(&pcStack_68);
  pppuVar5 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pppuVar5;
  }
  ___stack_chk_fail();
  FUN_10a044790(&pcStack_68);
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume();
  ppuVar8 = pppuVar5[2];
  if (ppuVar8 != (undefined **)0x0) {
    ppuVar1 = ppuVar8 + 1;
    do {
      puVar6 = *ppuVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar4) {
        *ppuVar1 = puVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar6 == (undefined *)0x0) {
      (**(code **)(*ppuVar8 + 0x10))(ppuVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
    }
  }
  return pppuVar5 + 1;
}



/* Entry: 10a367ad4; end: 10a367b07;  */

long FUN_10a367ad4(long param_1)

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



/* Entry: 10a367b08; end: 10a367b27;  */

void FUN_10a367b08(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bc6af8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a367b28; end: 10a367b37;  */

void FUN_10a367b28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a367b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a367b38; end: 10a367d0f;  */

/* WARNING: Removing unreachable block (ram,0x00010a367c68) */
/* WARNING: Removing unreachable block (ram,0x00010a367c6c) */
/* WARNING: Removing unreachable block (ram,0x00010a367c74) */
/* WARNING: Removing unreachable block (ram,0x00010a367c7c) */
/* WARNING: Removing unreachable block (ram,0x00010a367c80) */

void FUN_10a367b38(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lStack_40;
  long *plStack_38;
  
  puVar8 = *(undefined8 **)(param_2 + 0x10);
  lVar7 = *param_1;
  plVar9 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  lVar10 = (long)*(char *)((long)puVar8 + 0x57);
  if (lVar10 < 0) {
    puVar4 = (undefined8 *)puVar8[8];
    lVar10 = puVar8[9];
  }
  else {
    puVar4 = puVar8 + 8;
  }
  if (lVar7 == 0) {
    plStack_38 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar7,&PTR_DAT_110bf32c0,&PTR_DAT_110c41a10,0);
    if (lVar7 == 0) {
      if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
        puVar3 = (undefined8 *)&UNK_10f64efef;
        if (lVar10 != 0) {
          puVar3 = puVar4;
        }
        func_0x00010ae06f08(1,2,&UNK_10f634897,&UNK_10f6514ed,0x34,&UNK_10f63498b,in_x6,in_x7,lVar10
                            ,puVar3);
      }
      lVar7 = 0;
      plStack_38 = (long *)0x0;
    }
    else {
      plStack_38 = plVar9;
      if (plVar9 != (long *)0x0) {
        plVar1 = plVar9 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = *plVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
    }
  }
  lStack_40 = lVar7;
  (*(code *)*puVar8)(&lStack_40,puVar8);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
    do {
      lVar10 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 1;
    do {
      lVar10 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  return;
}



/* Entry: 10a367d10; end: 10a367d5f;  */

void FUN_10a367d10(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x57) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x40));
    }
    (*(code *)**(undefined8 **)(lVar1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a367d60; end: 10a367dbb;  */

void FUN_10a367d60(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a367dbc; end: 10a367ddb;  */

void FUN_10a367dbc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bc6b78;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a367ddc; end: 10a367deb;  */

void FUN_10a367ddc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a367de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a367dec; end: 10a367edb;  */

void FUN_10a367dec(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_40;
  long *plStack_38;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  lVar7 = *(long *)(param_2 + 0x10);
  plStack_38 = (long *)param_1[1];
  uStack_40 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  lVar6 = (long)*(char *)(lVar7 + 0x57);
  if (lVar6 < 0) {
    lVar5 = *(long *)(lVar7 + 0x40);
    lVar6 = *(long *)(lVar7 + 0x48);
  }
  else {
    lVar5 = lVar7 + 0x40;
  }
  FUN_10a367f68(auStack_30,&uStack_40,lVar5,lVar6);
  FUN_10a367edc(lVar7,auStack_30);
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a367edc; end: 10a367f67;  */

void FUN_10a367edc(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  pcVar5 = (code *)*param_1;
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar5)(&uStack_30,param_1);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a367f68; end: 10a36803f;  */

void FUN_10a367f68(long *param_1,long *param_2,undefined *param_3,long param_4)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  
  lVar5 = *param_2;
  if (lVar5 != 0) {
    ___dynamic_cast(lVar5,&PTR_DAT_110bf32c0,&PTR_DAT_110c4eb38,0);
    if (lVar5 != 0) {
      lVar6 = param_2[1];
      *param_1 = lVar5;
      param_1[1] = lVar6;
      if (lVar6 == 0) {
        return;
      }
      plVar1 = (long *)(lVar6 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      return;
    }
    *param_1 = 0;
    param_1[1] = 0;
    func_0x00010a35e87c(param_1);
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      puVar2 = &UNK_10f64efef;
      if (param_4 != 0) {
        puVar2 = param_3;
      }
      func_0x00010ae06f08(1,2,&UNK_10f634897,&UNK_10f6515a8,0x34,&UNK_10f63498b,in_x6,in_x7,param_4,
                          puVar2);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a368040; end: 10a36808f;  */

void FUN_10a368040(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x57) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x40));
    }
    (*(code *)**(undefined8 **)(lVar1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a368090; end: 10a3680db;  */

void FUN_10a368090(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a3680dc; end: 10a36818b;  */

void FUN_10a3680dc(long param_1,float *param_2)

{
  int aiStack_20 [2];
  undefined8 *puStack_18;
  
  puStack_18 = (undefined8 *)(double)*param_2;
  aiStack_20[0] = 3;
  func_0x0001098968d0(param_1 + 8,aiStack_20);
  if ((3 < aiStack_20[0]) && (puStack_18 != (undefined8 *)0x0)) {
    (**(code **)*puStack_18)();
  }
  return;
}



/* Entry: 10a36818c; end: 10a3682fb;  */

void FUN_10a36818c(undefined8 *param_1)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  FUN_10a07aef4(aiStack_30,*param_1);
  func_0x0001098968d0(param_1 + 1,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a3682fc; end: 10a3683b3;  */

void FUN_10a3682fc(undefined8 param_1,long *param_2,long *param_3)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long *plStack_40;
  long *plStack_38;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((*(byte *)(plVar2 + 0x3c) & 1) != 0) {
    plStack_40 = (long *)plVar2[4];
    if (plStack_40 == (long *)0x0) {
      func_0x000109899fd8(plVar2);
      plStack_40 = (long *)plVar2[4];
    }
    plVar2[4] = *plStack_40;
    plStack_40[1] = 0;
    plStack_40[2] = 0;
    *plStack_40 = (long)&PTR_FUN_110bc7bb8;
    lVar3 = *param_3;
    plStack_40[2] = param_3[1];
    plStack_40[1] = lVar3;
    plStack_38 = plVar2;
    FUN_10a3683b4(param_1,param_2,&plStack_40);
    plVar2 = plStack_40;
    plStack_40 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plStack_38);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a3683b0);
  (*pcVar1)();
}



/* Entry: 10a3683b4; end: 10a368497;  */

void FUN_10a3683b4(undefined4 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  int aiStack_50 [2];
  long *plStack_48;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x58))();
  uVar5 = *param_3;
  *param_3 = 0;
  plVar3 = plVar2;
  FUN_10a065534();
  if (plVar3 == (long *)0x0) {
    if ((*(byte *)(plVar2 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a368498);
      (*pcVar1)();
    }
    plVar3 = plVar2 + 0x1b;
  }
  aiStack_50[0] = 7;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x98))(param_2,*plVar3);
  plStack_48 = plVar4;
  (**(code **)(*param_2 + 0x2f8))(param_1 + 2,param_2,uVar5,plVar2,&UNK_10989ba24,aiStack_50);
  *param_1 = 7;
  if ((3 < aiStack_50[0]) && (plStack_48 != (long *)0x0)) {
    (**(code **)*plStack_48)();
  }
  return;
}



/* Entry: 10a368498; end: 10a3684c3;  */

undefined8 FUN_10a368498(void)

{
  return 0;
}



/* Entry: 10a3684c4; end: 10a36851f;  */

void FUN_10a3684c4(undefined8 *param_1)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  FUN_10a368520(aiStack_30,*param_1);
  func_0x0001098968d0(param_1 + 1,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a368520; end: 10a3685f3;  */

void FUN_10a368520(undefined8 param_1,long *param_2,long *param_3)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plStack_40;
  long *plStack_38;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((*(byte *)(plVar2 + 0x3c) & 1) != 0) {
    plStack_40 = (long *)plVar2[9];
    if (plStack_40 == (long *)0x0) {
      FUN_10a140784(plVar2 + 5);
      plStack_40 = (long *)plVar2[9];
    }
    plVar2[9] = *plStack_40;
    plStack_40[8] = 0;
    plStack_40[7] = 0;
    plStack_40[6] = 0;
    plStack_40[5] = 0;
    plStack_40[4] = 0;
    plStack_40[3] = 0;
    plStack_40[2] = 0;
    plStack_40[1] = 0;
    *plStack_40 = (long)&PTR_FUN_110bb3c68;
    lVar4 = param_3[1];
    lVar3 = *param_3;
    lVar6 = param_3[3];
    lVar5 = param_3[2];
    *(int *)(plStack_40 + 5) = (int)param_3[4];
    plStack_40[4] = lVar6;
    plStack_40[3] = lVar5;
    plStack_40[2] = lVar4;
    plStack_40[1] = lVar3;
    plStack_38 = plVar2;
    FUN_10a1f8534(param_1,param_2,&plStack_40);
    plVar2 = plStack_40;
    plStack_40 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plStack_38);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a3685f0);
  (*pcVar1)();
}



/* Entry: 10a3685f4; end: 10a36864f;  */

void FUN_10a3685f4(undefined8 *param_1)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  FUN_10a368650(aiStack_30,*param_1);
  func_0x0001098968d0(param_1 + 1,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a368650; end: 10a368727;  */

void FUN_10a368650(undefined8 param_1,long *param_2,long *param_3)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plStack_40;
  long *plStack_38;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((*(byte *)(plVar2 + 0x3c) & 1) != 0) {
    plStack_40 = (long *)plVar2[9];
    if (plStack_40 == (long *)0x0) {
      FUN_10a140784(plVar2 + 5);
      plStack_40 = (long *)plVar2[9];
    }
    plVar2[9] = *plStack_40;
    plStack_40[8] = 0;
    plStack_40[7] = 0;
    plStack_40[6] = 0;
    plStack_40[5] = 0;
    plStack_40[4] = 0;
    plStack_40[3] = 0;
    plStack_40[2] = 0;
    plStack_40[1] = 0;
    *plStack_40 = (long)&PTR_FUN_110ba79f8;
    lVar4 = param_3[1];
    lVar3 = *param_3;
    lVar6 = param_3[3];
    lVar5 = param_3[2];
    lVar8 = param_3[5];
    lVar7 = param_3[4];
    lVar9 = param_3[6];
    plStack_40[8] = param_3[7];
    plStack_40[7] = lVar9;
    plStack_40[6] = lVar8;
    plStack_40[5] = lVar7;
    plStack_40[4] = lVar6;
    plStack_40[3] = lVar5;
    plStack_40[2] = lVar4;
    plStack_40[1] = lVar3;
    plStack_38 = plVar2;
    FUN_10a1406a0(param_1,param_2,&plStack_40);
    plVar2 = plStack_40;
    plStack_40 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plStack_38);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a368724);
  (*pcVar1)();
}



/* Entry: 10a368728; end: 10a36877f;  */

void FUN_10a368728(long param_1,uint *param_2)

{
  int aiStack_20 [2];
  undefined8 *puStack_18;
  
  puStack_18 = (undefined8 *)NEON_ucvtf((ulong)*param_2);
  aiStack_20[0] = 3;
  func_0x0001098968d0(param_1 + 8,aiStack_20);
  if ((3 < aiStack_20[0]) && (puStack_18 != (undefined8 *)0x0)) {
    (**(code **)*puStack_18)();
  }
  return;
}



/* Entry: 10a368780; end: 10a3687db;  */

void FUN_10a368780(undefined8 *param_1)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  FUN_10a3687dc(aiStack_30,*param_1);
  func_0x0001098968d0(param_1 + 1,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a3687dc; end: 10a368893;  */

void FUN_10a3687dc(undefined8 param_1,long *param_2,long *param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plStack_40;
  long *plStack_38;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((*(byte *)(plVar2 + 0x3c) & 1) != 0) {
    plStack_40 = (long *)plVar2[4];
    if (plStack_40 == (long *)0x0) {
      func_0x000109899fd8(plVar2);
      plStack_40 = (long *)plVar2[4];
    }
    plVar2[4] = *plStack_40;
    plStack_40[1] = 0;
    plStack_40[2] = 0;
    *plStack_40 = (long)&PTR_FUN_110bc6bf8;
    plStack_40[1] = *param_3;
    plStack_38 = plVar2;
    FUN_10a368894(param_1,param_2,&plStack_40);
    plVar2 = plStack_40;
    plStack_40 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plStack_38);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a368890);
  (*pcVar1)();
}



/* Entry: 10a368894; end: 10a368977;  */

void FUN_10a368894(undefined4 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  int aiStack_50 [2];
  long *plStack_48;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x58))();
  uVar5 = *param_3;
  *param_3 = 0;
  plVar3 = plVar2;
  FUN_10a065534();
  if (plVar3 == (long *)0x0) {
    if ((*(byte *)(plVar2 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a368978);
      (*pcVar1)();
    }
    plVar3 = plVar2 + 0x1b;
  }
  aiStack_50[0] = 7;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x98))(param_2,*plVar3);
  plStack_48 = plVar4;
  (**(code **)(*param_2 + 0x2f8))(param_1 + 2,param_2,uVar5,plVar2,&UNK_10989ba24,aiStack_50);
  *param_1 = 7;
  if ((3 < aiStack_50[0]) && (plStack_48 != (long *)0x0)) {
    (**(code **)*plStack_48)();
  }
  return;
}



/* Entry: 10a368978; end: 10a3689a3;  */

undefined8 FUN_10a368978(void)

{
  return 0;
}



/* Entry: 10a3689a4; end: 10a3689ff;  */

void FUN_10a3689a4(undefined8 *param_1)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  FUN_10a368a00(aiStack_30,*param_1);
  func_0x0001098968d0(param_1 + 1,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a368a00; end: 10a368abf;  */

void FUN_10a368a00(undefined8 param_1,long *param_2,long *param_3)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long *plStack_40;
  long *plStack_38;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((*(byte *)(plVar2 + 0x3c) & 1) != 0) {
    plStack_40 = (long *)plVar2[4];
    if (plStack_40 == (long *)0x0) {
      func_0x000109899fd8(plVar2);
      plStack_40 = (long *)plVar2[4];
    }
    plVar2[4] = *plStack_40;
    plStack_40[1] = 0;
    plStack_40[2] = 0;
    *plStack_40 = (long)&PTR_FUN_110bc6c30;
    lVar3 = *param_3;
    *(int *)(plStack_40 + 2) = (int)param_3[1];
    plStack_40[1] = lVar3;
    plStack_38 = plVar2;
    FUN_10a368ac0(param_1,param_2,&plStack_40);
    plVar2 = plStack_40;
    plStack_40 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plStack_38);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a368abc);
  (*pcVar1)();
}



/* Entry: 10a368ac0; end: 10a368ba3;  */

void FUN_10a368ac0(undefined4 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  int aiStack_50 [2];
  long *plStack_48;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x58))();
  uVar5 = *param_3;
  *param_3 = 0;
  plVar3 = plVar2;
  FUN_10a065534();
  if (plVar3 == (long *)0x0) {
    if ((*(byte *)(plVar2 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a368ba4);
      (*pcVar1)();
    }
    plVar3 = plVar2 + 0x1b;
  }
  aiStack_50[0] = 7;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x98))(param_2,*plVar3);
  plStack_48 = plVar4;
  (**(code **)(*param_2 + 0x2f8))(param_1 + 2,param_2,uVar5,plVar2,&UNK_10989ba24,aiStack_50);
  *param_1 = 7;
  if ((3 < aiStack_50[0]) && (plStack_48 != (long *)0x0)) {
    (**(code **)*plStack_48)();
  }
  return;
}



/* Entry: 10a368ba4; end: 10a368bcf;  */

undefined8 FUN_10a368ba4(void)

{
  return 0;
}



/* Entry: 10a368bd0; end: 10a368c2b;  */

void FUN_10a368bd0(undefined8 *param_1)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  FUN_10a368c2c(aiStack_30,*param_1);
  func_0x0001098968d0(param_1 + 1,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a368c2c; end: 10a368ce3;  */

void FUN_10a368c2c(undefined8 param_1,long *param_2,long *param_3)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long *plStack_40;
  long *plStack_38;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((*(byte *)(plVar2 + 0x3c) & 1) != 0) {
    plStack_40 = (long *)plVar2[4];
    if (plStack_40 == (long *)0x0) {
      func_0x000109899fd8(plVar2);
      plStack_40 = (long *)plVar2[4];
    }
    plVar2[4] = *plStack_40;
    plStack_40[1] = 0;
    plStack_40[2] = 0;
    *plStack_40 = (long)&PTR_FUN_110bc6c68;
    lVar3 = *param_3;
    plStack_40[2] = param_3[1];
    plStack_40[1] = lVar3;
    plStack_38 = plVar2;
    FUN_10a368ce4(param_1,param_2,&plStack_40);
    plVar2 = plStack_40;
    plStack_40 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plStack_38);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a368ce0);
  (*pcVar1)();
}



/* Entry: 10a368ce4; end: 10a368dc7;  */

void FUN_10a368ce4(undefined4 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  int aiStack_50 [2];
  long *plStack_48;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x58))();
  uVar5 = *param_3;
  *param_3 = 0;
  plVar3 = plVar2;
  FUN_10a065534();
  if (plVar3 == (long *)0x0) {
    if ((*(byte *)(plVar2 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a368dc8);
      (*pcVar1)();
    }
    plVar3 = plVar2 + 0x1b;
  }
  aiStack_50[0] = 7;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x98))(param_2,*plVar3);
  plStack_48 = plVar4;
  (**(code **)(*param_2 + 0x2f8))(param_1 + 2,param_2,uVar5,plVar2,&UNK_10989ba24,aiStack_50);
  *param_1 = 7;
  if ((3 < aiStack_50[0]) && (plStack_48 != (long *)0x0)) {
    (**(code **)*plStack_48)();
  }
  return;
}



/* Entry: 10a368dc8; end: 10a368df3;  */

undefined8 FUN_10a368dc8(void)

{
  return 0;
}


