/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a10b9d8; end: 10a10bbb3;  */

void FUN_10a10b9d8(long *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  undefined1 auStack_50 [8];
  long *plStack_48;
  
  lVar5 = *param_2;
  plVar2 = (long *)param_2[1];
  lStack_70 = lVar5;
  plStack_68 = plVar2;
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plVar2 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
  }
  lStack_60 = lVar5;
  plStack_58 = plVar2;
  FUN_10a10c188(auStack_50,param_3,&lStack_60);
  FUN_10a10c078(param_1,auStack_50);
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  if (plStack_58 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar2 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
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
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  lVar5 = *param_2;
  if ((lVar5 != 0) && (lStack_80 = *param_1, lStack_80 != 0)) {
    plStack_78 = (long *)param_1[1];
    if (plStack_78 != (long *)0x0) {
      plVar2 = plStack_78 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10aa88c30(lVar5,&lStack_80);
    plVar2 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar1 = plStack_78 + 1;
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
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
  }
  return;
}



/* Entry: 10a10bbb4; end: 10a10bcaf;  */

long * FUN_10a10bbb4(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  
  plVar4 = param_1;
  FUN_10a054838(param_1,*param_2,param_2[1]);
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      plVar10 = (long *)(uVar9 & (ulong)plVar4);
    }
    else {
      plVar10 = plVar4;
      if (plVar8 <= plVar4) {
        uVar3 = 0;
        if (plVar8 != (long *)0x0) {
          uVar3 = (ulong)plVar4 / (ulong)plVar8;
        }
        plVar10 = (long *)((long)plVar4 - uVar3 * (long)plVar8);
      }
    }
    plVar6 = *(long **)(*param_1 + (long)plVar10 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        return (long *)0x0;
      }
      uVar1 = *param_2;
      lVar2 = param_2[1];
      do {
        plVar7 = (long *)plVar6[1];
        if (plVar7 == plVar4) {
          if (plVar6[3] == lVar2) {
            lVar5 = plVar6[2];
            _memcmp(lVar5,uVar1,lVar2);
            if ((int)lVar5 == 0) {
              return plVar6;
            }
          }
        }
        else {
          if (((ulong)plVar8 & uVar9) == 0) {
            plVar7 = (long *)((ulong)plVar7 & uVar9);
          }
          else if (plVar8 <= plVar7) {
            uVar3 = 0;
            if (plVar8 != (long *)0x0) {
              uVar3 = (ulong)plVar7 / (ulong)plVar8;
            }
            plVar7 = (long *)((long)plVar7 - uVar3 * (long)plVar8);
          }
          if (plVar7 != plVar10) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a10bcb0; end: 10a10bd7f;  */

void FUN_10a10bcb0(undefined8 param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_258 [264];
  undefined **appuStack_150 [2];
  undefined1 auStack_140 [264];
  char cStack_38;
  
  FUN_10a10bd84(appuStack_150,param_1);
  appuStack_150[0] = &PTR_FUN_110ba5648;
  func_0x00010a0ec6dc(auStack_258,1);
  if (cStack_38 == '\x01') {
    _memcpy(auStack_140,auStack_258,0x104);
  }
  else {
    _memcpy(auStack_140,auStack_258,0x108);
    cStack_38 = '\x01';
  }
  puVar2 = (undefined8 *)0x120;
  ___cxa_allocate_exception();
  puVar3 = puVar2;
  __ZNSt13runtime_errorC2ERKS_();
  *puVar3 = &PTR_FUN_110b99e98;
  _memcpy(puVar3 + 2,auStack_140,0x110);
  *puVar2 = &PTR_FUN_110ba5648;
  ___cxa_throw(puVar2,&PTR_DAT_110ba5620,FUN_10a10bd80);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a10bd68);
  (*pcVar1)();
}



/* Entry: 10a10bd80; end: 10a10bd83;  */

void FUN_10a10bd80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10a10bd84; end: 10a10be0b;  */

undefined8 * FUN_10a10bd84(undefined8 *param_1)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_38,&UNK_10f63ce44);
  FUN_10a002a94(param_1,auStack_38);
  *param_1 = &PTR_FUN_110b99e70;
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  *param_1 = &PTR_FUN_110ba5670;
  return param_1;
}



/* Entry: 10a10be0c; end: 10a10be1f;  */

void FUN_10a10be0c(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a10be20; end: 10a10be23;  */

void FUN_10a10be20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10a10be24; end: 10a10be37;  */

void FUN_10a10be24(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a10be38; end: 10a10bf67;  */

void FUN_10a10be38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_288 [264];
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [264];
  char cStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  FUN_10a10bfa4(auStack_180,param_1,param_2,param_3,param_4,param_5);
  func_0x00010a0ec6dc(auStack_288,1);
  if (cStack_68 == '\x01') {
    _memcpy(auStack_170,auStack_288,0x104);
  }
  else {
    _memcpy(auStack_170,auStack_288,0x108);
    cStack_68 = '\x01';
  }
  puVar2 = (undefined8 *)0x150;
  ___cxa_allocate_exception();
  puVar3 = puVar2;
  __ZNSt13runtime_errorC2ERKS_();
  *puVar3 = &PTR_FUN_110b99e98;
  _memcpy(puVar3 + 2,auStack_170,0x110);
  *puVar2 = &PTR_FUN_110ba5300;
  puVar2[0x25] = uStack_58;
  puVar2[0x24] = uStack_60;
  puVar2[0x26] = uStack_50;
  uStack_50 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  *(undefined4 *)(puVar2 + 0x29) = uStack_38;
  puVar2[0x28] = uStack_40;
  puVar2[0x27] = uStack_48;
  ___cxa_throw(puVar2,&PTR_DAT_110ba5688,FUN_10a10bf68);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a10bf34);
  (*pcVar1)();
}



/* Entry: 10a10bf68; end: 10a10bfa3;  */

void FUN_10a10bf68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba5300;
  if (*(char *)((long)param_1 + 0x137) < '\0') {
    __ZdlPv(param_1[0x24]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)(param_1);
  return;
}



/* Entry: 10a10bfa4; end: 10a10c037;  */

undefined8 *
FUN_10a10bfa4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = param_1;
  FUN_10a10bd84();
  *puVar1 = &PTR_FUN_110ba5300;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 0x24,*param_3,param_3[1]);
  }
  else {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    param_1[0x26] = param_3[2];
    param_1[0x25] = uVar3;
    param_1[0x24] = uVar2;
  }
  param_1[0x27] = param_4;
  param_1[0x28] = param_5;
  *(undefined4 *)(param_1 + 0x29) = param_6;
  return param_1;
}



/* Entry: 10a10c038; end: 10a10c077;  */

void FUN_10a10c038(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba5300;
  if (*(char *)((long)param_1 + 0x137) < '\0') {
    __ZdlPv(param_1[0x24]);
  }
  __ZNSt13runtime_errorD2Ev(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a10c078; end: 10a10c187;  */

void FUN_10a10c078(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plStack_40;
  long *plStack_38;
  
  plVar3 = (long *)0x90;
  __Znwm();
  plVar4 = plVar3 + 1;
  *plVar4 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_110b9fe30;
  lVar5 = *param_2;
  plVar6 = plVar3 + 3;
  plVar3[4] = param_2[1];
  *plVar6 = lVar5;
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
  *param_1 = lVar5;
  param_1[1] = (long)plVar3;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plStack_40 = plVar6;
  plStack_38 = plVar3;
  func_0x00010a053e8c(plVar6,param_1);
  if ((*plVar6 != 0) &&
     (func_0x00010a053ee8(*plVar6,&plStack_40), plVar3 = plStack_38, plStack_38 == (long *)0x0)) {
    return;
  }
  plVar4 = plVar3 + 1;
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
    (**(code **)(*plVar3 + 0x10))(plVar3);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
  }
  return;
}



/* Entry: 10a10c188; end: 10a10c227;  */

long * FUN_10a10c188(long *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x30;
  __Znwm();
  uVar4 = param_3[1];
  uVar3 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  *puVar2 = &PTR_DAT_110ba4e08;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  puVar2[5] = uVar4;
  puVar2[4] = uVar3;
  param_1[1] = (long)puVar2;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x28;
  }
  FUN_10a10c228(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 10a10c228; end: 10a10c34b;  */

void FUN_10a10c228(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((lVar4 = param_2[1], lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
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



/* Entry: 10a10c34c; end: 10a10c38b;  */

void FUN_10a10c34c(long param_1)

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



/* Entry: 10a10c38c; end: 10a10c3c7;  */

long FUN_10a10c38c(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba4e48);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a10c3c8; end: 10a10c3cb;  */

void FUN_10a10c3c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a10c3cc; end: 10a10c45f;  */

long * FUN_10a10c3cc(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x28;
  __Znwm();
  *puVar2 = &PTR_FUN_110ba5328;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  puVar2[4] = param_3;
  param_1[1] = (long)puVar2;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x28;
  }
  FUN_10a10c460(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 10a10c460; end: 10a10c50f;  */

void FUN_10a10c460(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((lVar4 = param_2[1], lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
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



/* Entry: 10a10c510; end: 10a10c513;  */

void FUN_10a10c510(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a10c514; end: 10a10c527;  */

void FUN_10a10c514(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a10c528; end: 10a10c543;  */

void FUN_10a10c528(long param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10a10c544; end: 10a10c57f;  */

long FUN_10a10c544(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba2110);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a10c580; end: 10a10c583;  */

void FUN_10a10c580(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a10c584; end: 10a10c617;  */

long * FUN_10a10c584(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x28;
  __Znwm();
  *puVar2 = &PTR_FUN_110ba5280;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  puVar2[4] = param_3;
  param_1[1] = (long)puVar2;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x28;
  }
  FUN_10a10c618(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 10a10c618; end: 10a10c6c7;  */

void FUN_10a10c618(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((lVar4 = param_2[1], lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
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



/* Entry: 10a10c6c8; end: 10a10c6cb;  */

void FUN_10a10c6c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a10c6cc; end: 10a10c6df;  */

void FUN_10a10c6cc(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a10c6e0; end: 10a10c6fb;  */

void FUN_10a10c6e0(long param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10a10c6fc; end: 10a10c737;  */

long FUN_10a10c6fc(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba52d0);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a10c738; end: 10a10c73f;  */

void FUN_10a10c738(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a10c740; end: 10a10c753;  */

void FUN_10a10c740(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a10c754; end: 10a10c76b;  */

void FUN_10a10c754(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a10c764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10a10c76c; end: 10a10c7a3;  */

undefined8 FUN_10a10c76c(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba4eb8);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a10c7a4; end: 10a10c7a7;  */

void FUN_10a10c7a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a10c7a8; end: 10a10c823;  */

long * FUN_10a10c7a8(long *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *puVar2 = &PTR_FUN_110ba5208;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  param_1[1] = (long)puVar2;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x40;
  }
  FUN_10a10c824(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 10a10c824; end: 10a10c8d3;  */

void FUN_10a10c824(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((lVar4 = param_2[1], lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
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



/* Entry: 10a10c8d4; end: 10a10c8d7;  */

void FUN_10a10c8d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a10c8d8; end: 10a10c8eb;  */

void FUN_10a10c8d8(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a10c8ec; end: 10a10c903;  */

void FUN_10a10c8ec(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a10c8fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10a10c904; end: 10a10c93b;  */

undefined8 FUN_10a10c904(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba5258);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a10c93c; end: 10a10c943;  */

void FUN_10a10c93c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a10c944; end: 10a10c957;  */

void FUN_10a10c944(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a10c958; end: 10a10c96f;  */

void FUN_10a10c958(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a10c968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10a10c970; end: 10a10c9a7;  */

undefined8 FUN_10a10c970(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba4f30);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a10c9a8; end: 10a10c9ab;  */

void FUN_10a10c9a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a10c9ac; end: 10a10ca03;  */

long FUN_10a10c9ac(long param_1)

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



/* Entry: 10a10ca04; end: 10a10caf7;  */

undefined1  [16] FUN_10a10ca04(long *param_1,long *param_2,uint *param_3,undefined4 *param_4)

{
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  uint uVar8;
  undefined8 *puVar9;
  int iVar10;
  ulong uVar11;
  uint *puVar12;
  int *piVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  ulong unaff_x24;
  long lVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  uint auStack_40 [9];
  uint uStack_1c;
  long lStack_18;
  uint *puVar13;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = 9;
  while (lVar5 = *param_1, 0xf5 < (byte)((char)lVar5 - 0x3aU)) {
    param_1 = (long *)((long)param_1 + 1);
    auStack_40[lVar4] = (uint)(byte)((char)lVar5 - 0x30);
    bVar2 = lVar4 == 0;
    lVar4 = lVar4 + -1;
    if ((bVar2) || (param_1 == param_2)) break;
  }
  lVar5 = lVar4 + 1 << 0x20;
  iVar10 = (int)(lVar4 + 1);
  uVar8 = auStack_40[iVar10];
  if (iVar10 < 8) {
    puVar12 = (uint *)((long)auStack_40 + (lVar5 >> 0x1e) + 4);
    piVar14 = (int *)&UNK_10de6dc94;
    do {
      puVar13 = puVar12 + 1;
      uVar8 = uVar8 + *piVar14 * *puVar12;
      puVar12 = puVar13;
      piVar14 = piVar14 + 1;
    } while (puVar13 < &uStack_1c);
  }
  *param_3 = uVar8;
  uVar8 = *(uint *)(&UNK_10de6dc90 + (0x900000000 - lVar5 >> 0x1e));
  *param_4 = (int)((ulong)uStack_1c * (ulong)uVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    auVar19._0_8_ =
         (long)param_1 - (ulong)(((ulong)uStack_1c * (ulong)uVar8 & 0xffffffff00000000) != 0);
    auVar19._8_8_ = param_2;
    return auVar19;
  }
  ___stack_chk_fail();
  uVar17 = param_2[1];
  uVar16 = param_1[1];
  if (uVar16 != 0) {
    uVar6 = uVar16 - 1;
    if ((uVar16 & uVar6) == 0) {
      unaff_x24 = uVar6 & uVar17;
    }
    else {
      unaff_x24 = uVar17;
      if (uVar16 <= uVar17) {
        uVar11 = 0;
        if (uVar16 != 0) {
          uVar11 = uVar17 / uVar16;
        }
        unaff_x24 = uVar17 - uVar11 * uVar16;
      }
    }
    puVar9 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if ((puVar9 != (undefined8 *)0x0) && (plVar15 = (long *)*puVar9, plVar15 != (long *)0x0)) {
      do {
        uVar11 = plVar15[1];
        if (uVar11 == uVar17) {
          if (plVar15[2] == *param_2 && plVar15[3] == uVar17) {
            uVar3 = 0;
            goto LAB_10a10cce4;
          }
        }
        else {
          if ((uVar16 & uVar6) == 0) {
            uVar11 = uVar11 & uVar6;
          }
          else if (uVar16 <= uVar11) {
            uVar1 = 0;
            if (uVar16 != 0) {
              uVar1 = uVar11 / uVar16;
            }
            uVar11 = uVar11 - uVar1 * uVar16;
          }
          if (uVar11 != unaff_x24) break;
        }
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
  }
  plVar15 = (long *)0x30;
  __Znwm();
  *plVar15 = 0;
  plVar15[1] = uVar17;
  lVar4 = *(long *)param_3;
  lVar18 = *(long *)(param_3 + 6);
  lVar5 = *(long *)(param_3 + 4);
  plVar15[3] = *(long *)(param_3 + 2);
  plVar15[2] = lVar4;
  plVar15[5] = lVar18;
  plVar15[4] = lVar5;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  if ((uVar16 == 0) || (*(float *)(param_1 + 4) * (float)uVar16 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar16) {
      uVar6 = (ulong)((uVar16 & uVar16 - 1) != 0);
    }
    uVar6 = uVar6 | uVar16 << 1;
    uVar16 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar16) {
      uVar6 = uVar16;
    }
    FUN_10a10cd20(param_1,uVar6);
    uVar16 = param_1[1];
    if ((uVar16 & uVar16 - 1) == 0) {
      unaff_x24 = uVar16 - 1 & uVar17;
    }
    else {
      unaff_x24 = uVar17;
      if (uVar16 <= uVar17) {
        uVar6 = 0;
        if (uVar16 != 0) {
          uVar6 = uVar17 / uVar16;
        }
        unaff_x24 = uVar17 - uVar6 * uVar16;
      }
    }
  }
  lVar4 = *param_1;
  plVar7 = *(long **)(lVar4 + unaff_x24 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 2;
    *plVar15 = *plVar7;
    *plVar7 = (long)plVar15;
    *(long **)(lVar4 + unaff_x24 * 8) = plVar7;
    if (*plVar15 == 0) goto LAB_10a10ccd4;
    uVar17 = *(ulong *)(*plVar15 + 8);
    if ((uVar16 & uVar16 - 1) == 0) {
      uVar17 = uVar17 & uVar16 - 1;
    }
    else if (uVar16 <= uVar17) {
      uVar6 = 0;
      if (uVar16 != 0) {
        uVar6 = uVar17 / uVar16;
      }
      uVar17 = uVar17 - uVar6 * uVar16;
    }
    plVar7 = (long *)(*param_1 + uVar17 * 8);
  }
  else {
    *plVar15 = *plVar7;
  }
  *plVar7 = (long)plVar15;
LAB_10a10ccd4:
  param_1[3] = param_1[3] + 1;
  uVar3 = 1;
LAB_10a10cce4:
  auVar20._8_8_ = uVar3;
  auVar20._0_8_ = plVar15;
  return auVar20;
}



/* Entry: 10a10caf8; end: 10a10cd1f;  */

undefined1  [16] FUN_10a10caf8(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x24;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  
  uVar10 = param_2[1];
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    if ((uVar9 & uVar3) == 0) {
      unaff_x24 = uVar3 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar7 * uVar9;
      }
    }
    puVar5 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if ((puVar5 != (undefined8 *)0x0) && (plVar8 = (long *)*puVar5, plVar8 != (long *)0x0)) {
      do {
        uVar7 = plVar8[1];
        if (uVar7 == uVar10) {
          if (plVar8[2] == *param_2 && plVar8[3] == uVar10) {
            uVar2 = 0;
            goto LAB_10a10cce4;
          }
        }
        else {
          if ((uVar9 & uVar3) == 0) {
            uVar7 = uVar7 & uVar3;
          }
          else if (uVar9 <= uVar7) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar7 / uVar9;
            }
            uVar7 = uVar7 - uVar1 * uVar9;
          }
          if (uVar7 != unaff_x24) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  plVar8 = (long *)0x30;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = uVar10;
  lVar6 = *param_3;
  lVar12 = param_3[3];
  lVar11 = param_3[2];
  plVar8[3] = param_3[1];
  plVar8[2] = lVar6;
  plVar8[5] = lVar12;
  plVar8[4] = lVar11;
  param_3[2] = 0;
  param_3[3] = 0;
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
    FUN_10a10cd20(param_1,uVar3);
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
  lVar6 = *param_1;
  plVar4 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar8 = *plVar4;
    *plVar4 = (long)plVar8;
    *(long **)(lVar6 + unaff_x24 * 8) = plVar4;
    if (*plVar8 == 0) goto LAB_10a10ccd4;
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
LAB_10a10ccd4:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_10a10cce4:
  auVar13._8_8_ = uVar2;
  auVar13._0_8_ = plVar8;
  return auVar13;
}



/* Entry: 10a10cd20; end: 10a10cdef;  */

void FUN_10a10cd20(ulong *param_1,ulong param_2)

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
LAB_10a10cd68:
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
            func_0x00010a052384(uVar7 + 0x20);
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
    if (param_2 < uVar7) goto LAB_10a10cd68;
  }
  return;
}



/* Entry: 10a10cdf0; end: 10a10cf73;  */

void FUN_10a10cdf0(ulong *param_1,ulong param_2)

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
          func_0x00010a052384(uVar1 + 0x20);
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



/* Entry: 10a10cf74; end: 10a10d18b;  */

undefined1  [16] FUN_10a10cf74(long *param_1,long *param_2,undefined8 param_3,long *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x24;
  undefined1 auVar11 [16];
  
  uVar10 = param_2[1];
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    if ((uVar9 & uVar3) == 0) {
      unaff_x24 = uVar3 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar7 * uVar9;
      }
    }
    puVar5 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if ((puVar5 != (undefined8 *)0x0) && (plVar8 = (long *)*puVar5, plVar8 != (long *)0x0)) {
      do {
        uVar7 = plVar8[1];
        if (uVar7 == uVar10) {
          if (plVar8[2] == *param_2 && plVar8[3] == uVar10) {
            uVar2 = 0;
            goto LAB_10a10d158;
          }
        }
        else {
          if ((uVar9 & uVar3) == 0) {
            uVar7 = uVar7 & uVar3;
          }
          else if (uVar9 <= uVar7) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar7 / uVar9;
            }
            uVar7 = uVar7 - uVar1 * uVar9;
          }
          if (uVar7 != unaff_x24) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  plVar8 = (long *)0x30;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = uVar10;
  lVar6 = *(long *)*param_4;
  plVar8[3] = ((long *)*param_4)[1];
  plVar8[2] = lVar6;
  plVar4 = plVar8;
  func_0x00010a0fda30();
  plVar8[4] = (long)plVar4;
  plVar8[5] = (long)param_2;
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
    FUN_10a10d18c(param_1,uVar3);
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
  lVar6 = *param_1;
  plVar4 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar8 = *plVar4;
    *plVar4 = (long)plVar8;
    *(long **)(lVar6 + unaff_x24 * 8) = plVar4;
    if (*plVar8 == 0) goto LAB_10a10d148;
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
LAB_10a10d148:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_10a10d158:
  auVar11._8_8_ = uVar2;
  auVar11._0_8_ = plVar8;
  return auVar11;
}



/* Entry: 10a10d18c; end: 10a10d25b;  */

void FUN_10a10d18c(ulong *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong *puVar11;
  long lVar12;
  long *plVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  ulong *puVar20;
  ulong uVar21;
  ulong *puVar22;
  ulong *puStack_d0;
  ulong *puStack_c8;
  ulong *puStack_c0;
  ulong *puStack_b8;
  ulong *puStack_b0;
  ulong *puStack_a8;
  ulong *puStack_a0;
  ulong *puStack_98;
  ulong *puStack_90;
  ulong *puStack_88;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar21 = param_1[1];
  if (uVar21 < param_2) {
LAB_10a10d1d4:
    if (param_2 == 0) {
      uVar21 = *param_1;
      *param_1 = 0;
      if (uVar21 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        func_0x000109ffded8();
        if (0xa9 < param_1[5]) {
          param_1[5] = param_1[5] - 0xaa;
          lVar8 = *(long *)param_1[1];
          param_1[1] = (ulong)((long *)param_1[1] + 1);
          plVar13 = (long *)param_1[2];
          if (plVar13 == (long *)param_1[3]) {
            plVar7 = (long *)*param_1;
            plVar10 = (long *)param_1[1];
            if (plVar10 < plVar7 || (long)plVar10 - (long)plVar7 == 0) {
              uVar21 = (long)plVar13 - (long)plVar7 >> 2;
              if ((long)plVar13 - (long)plVar7 == 0) {
                uVar21 = 1;
              }
              plVar7 = (long *)param_1[4];
              if (plVar7 != (long *)0x0) {
                (**(code **)(*plVar7 + 0x10))(plVar7,uVar21 << 3,8);
                plVar10 = (long *)param_1[1];
                plVar13 = (long *)param_1[2];
              }
              plVar1 = plVar7 + (uVar21 >> 2);
              plVar17 = plVar1;
              if (plVar13 != plVar10) {
                lVar12 = (long)plVar13 - (long)plVar10;
                plVar17 = (long *)((long)plVar1 + lVar12);
                plVar13 = plVar1;
                do {
                  *plVar13 = *plVar10;
                  lVar12 = lVar12 + -8;
                  plVar10 = plVar10 + 1;
                  plVar13 = plVar13 + 1;
                } while (lVar12 != 0);
              }
              puStack_88 = (ulong *)*param_1;
              *param_1 = (ulong)plVar7;
              param_1[1] = (ulong)plVar1;
              param_1[2] = (ulong)plVar17;
              param_1[3] = (ulong)(plVar7 + uVar21);
              FUN_10a10daa0(&puStack_88);
              plVar13 = (long *)param_1[2];
            }
            else {
              lVar12 = (((long)plVar10 - (long)plVar7 >> 3) + 1) / 2;
              plVar7 = plVar10 + -lVar12;
              lVar2 = (long)plVar13 - (long)plVar10;
              if (lVar2 != 0) {
                _memmove(plVar7,plVar10,lVar2);
                plVar10 = (long *)param_1[1];
              }
              plVar13 = (long *)((long)plVar7 + lVar2);
              param_1[1] = (ulong)(plVar10 + -lVar12);
              param_1[2] = (ulong)plVar13;
            }
          }
          *plVar13 = lVar8;
          param_1[2] = param_1[2] + 8;
          return;
        }
        puVar14 = (ulong *)param_1[2];
        puVar11 = (ulong *)param_1[3];
        puVar15 = (ulong *)*param_1;
        puVar22 = (ulong *)param_1[1];
        uVar21 = (long)puVar14 - (long)puVar22;
        if (uVar21 < (ulong)((long)puVar11 - (long)puVar15)) {
          plVar13 = (long *)param_1[7];
          if (puVar11 == puVar14) {
            if (plVar13 == (long *)0x0) {
              plVar13 = (long *)0x0;
            }
            else {
              (**(code **)(*plVar13 + 0x10))(plVar13,0xff0,8);
              puVar15 = (ulong *)*param_1;
              puVar22 = (ulong *)param_1[1];
            }
            if (puVar22 == puVar15) {
              puVar14 = (ulong *)param_1[2];
              puVar11 = (ulong *)param_1[3];
              if (puVar14 < puVar11) {
                lVar8 = (((long)puVar11 - (long)puVar14 >> 3) + 1) / 2;
                puVar11 = puVar15 + lVar8;
                if ((long)puVar14 - (long)puVar15 != 0) {
                  _memmove(puVar11,puVar22,(long)puVar14 - (long)puVar15);
                  puVar14 = (ulong *)param_1[2];
                }
                param_1[1] = (ulong)puVar11;
                param_1[2] = (ulong)(puVar14 + lVar8);
                puVar22 = puVar11;
              }
              else {
                lVar8 = (long)puVar11 - (long)puVar15 >> 2;
                if ((long)puVar11 - (long)puVar15 == 0) {
                  lVar8 = 1;
                }
                puStack_88 = param_1 + 4;
                plVar7 = (long *)*puStack_88;
                puStack_a0 = puVar22;
                if (plVar7 != (long *)0x0) {
                  (**(code **)(*plVar7 + 0x10))(plVar7,lVar8 << 3,8);
                  puVar15 = (ulong *)param_1[1];
                  puVar14 = (ulong *)param_1[2];
                  puStack_a0 = puVar15;
                }
                puVar22 = (ulong *)(plVar7 + (lVar8 + 3U >> 2));
                puVar11 = puVar22;
                if (puVar14 != puStack_a0) {
                  lVar12 = (long)puVar14 - (long)puVar15;
                  puVar11 = (ulong *)((long)puVar22 + lVar12);
                  puVar14 = puVar22;
                  do {
                    *puVar14 = *puStack_a0;
                    lVar12 = lVar12 + -8;
                    puVar14 = puVar14 + 1;
                    puStack_a0 = puStack_a0 + 1;
                  } while (lVar12 != 0);
                  puStack_a0 = (ulong *)param_1[1];
                  puVar14 = (ulong *)param_1[2];
                }
                puStack_a8 = (ulong *)*param_1;
                *param_1 = (ulong)plVar7;
                param_1[1] = (ulong)puVar22;
                puStack_90 = (ulong *)param_1[3];
                param_1[2] = (ulong)puVar11;
                param_1[3] = (ulong)(plVar7 + lVar8);
                puStack_98 = puVar14;
                FUN_10a10daa0(&puStack_a8);
                puVar22 = (ulong *)param_1[1];
              }
            }
            puVar22[-1] = (ulong)plVar13;
            uVar21 = param_1[1];
            param_1[1] = uVar21 - 8;
            uVar9 = *(undefined8 *)(uVar21 - 8);
            param_1[1] = uVar21;
            FUN_10a10d964(param_1,uVar9);
          }
          else {
            if (plVar13 == (long *)0x0) {
              plVar13 = (long *)0x0;
            }
            else {
              (**(code **)(*plVar13 + 0x10))(plVar13,0xff0,8);
              puVar14 = (ulong *)param_1[2];
              puVar11 = (ulong *)param_1[3];
            }
            if (puVar14 == puVar11) {
              puVar15 = (ulong *)*param_1;
              puStack_a0 = (ulong *)param_1[1];
              if (puStack_a0 < puVar15 || (long)puStack_a0 - (long)puVar15 == 0) {
                uVar21 = (long)puVar11 - (long)puVar15 >> 2;
                if ((long)puVar11 - (long)puVar15 == 0) {
                  uVar21 = 1;
                }
                puStack_88 = param_1 + 4;
                plVar7 = (long *)*puStack_88;
                puStack_98 = puVar14;
                if (plVar7 != (long *)0x0) {
                  (**(code **)(*plVar7 + 0x10))(plVar7,uVar21 << 3,8);
                  puStack_a0 = (ulong *)param_1[1];
                  puVar11 = (ulong *)param_1[2];
                  puStack_98 = puVar11;
                }
                puVar14 = (ulong *)(plVar7 + (uVar21 >> 2));
                puVar15 = puVar14;
                if (puStack_98 != puStack_a0) {
                  lVar8 = (long)puVar11 - (long)puStack_a0;
                  puVar15 = (ulong *)((long)puVar14 + lVar8);
                  puVar22 = puVar14;
                  do {
                    *puVar22 = *puStack_a0;
                    lVar8 = lVar8 + -8;
                    puStack_a0 = puStack_a0 + 1;
                    puVar22 = puVar22 + 1;
                  } while (lVar8 != 0);
                  puStack_a0 = (ulong *)param_1[1];
                  puStack_98 = (ulong *)param_1[2];
                }
                puStack_a8 = (ulong *)*param_1;
                *param_1 = (ulong)plVar7;
                param_1[1] = (ulong)puVar14;
                puStack_90 = (ulong *)param_1[3];
                param_1[2] = (ulong)puVar15;
                param_1[3] = (ulong)(plVar7 + uVar21);
                FUN_10a10daa0(&puStack_a8);
                puVar14 = (ulong *)param_1[2];
              }
              else {
                lVar8 = (((long)puStack_a0 - (long)puVar15 >> 3) + 1) / 2;
                puVar14 = puStack_a0 + -lVar8;
                lVar12 = (long)puVar11 - (long)puStack_a0;
                if (lVar12 != 0) {
                  _memmove(puVar14,puStack_a0,lVar12);
                  puStack_a0 = (ulong *)param_1[1];
                }
                puVar14 = (ulong *)((long)puVar14 + lVar12);
                param_1[1] = (ulong)(puStack_a0 + -lVar8);
                param_1[2] = (ulong)puVar14;
              }
            }
            *puVar14 = (ulong)plVar13;
            param_1[2] = param_1[2] + 8;
          }
        }
        else {
          puVar6 = param_1 + 4;
          puVar4 = (ulong *)*puVar6;
          uVar3 = 8;
          if (puVar11 != puVar15) {
            uVar3 = ((long)puVar11 - (long)puVar15) * 2;
          }
          puStack_b0 = puVar6;
          if (puVar4 == (ulong *)0x0) {
            puVar4 = (ulong *)0x0;
          }
          else {
            (**(code **)(*puVar4 + 0x10))(puVar4,uVar3,8);
          }
          puVar15 = (ulong *)((long)puVar4 + uVar21);
          puVar11 = (ulong *)((long)puVar4 + uVar3);
          plVar13 = (long *)param_1[7];
          puStack_c0 = puVar15;
          puStack_d0 = puVar4;
          puStack_c8 = puVar15;
          puStack_b8 = puVar11;
          if (plVar13 == (long *)0x0) {
            plVar13 = (long *)0x0;
          }
          else {
            (**(code **)(*plVar13 + 0x10))(plVar13,0xff0,8);
          }
          puVar20 = puVar15;
          puVar5 = puVar4;
          puVar16 = puVar11;
          if (uVar21 == uVar3) {
            if ((long)uVar21 < 1) {
              uVar21 = (long)uVar21 >> 2;
              if (puVar14 == puVar22) {
                uVar21 = 1;
              }
              puVar5 = (ulong *)*puVar6;
              puStack_88 = puVar6;
              if (puVar5 == (ulong *)0x0) {
                puVar5 = (ulong *)0x0;
              }
              else {
                (**(code **)(*puVar5 + 0x10))(puVar5,uVar21 << 3,8);
              }
              puVar20 = puVar5 + (uVar21 >> 2);
              puVar16 = puVar5 + uVar21;
              puStack_d0 = puVar5;
              puStack_c8 = puVar20;
              puStack_b8 = puVar16;
              puStack_a8 = puVar4;
              puStack_a0 = puVar15;
              puStack_98 = puVar15;
              puStack_90 = puVar11;
              FUN_10a10daa0(&puStack_a8);
            }
            else {
              puVar20 = (ulong *)((long)puVar15 - ((uVar21 >> 1) + 4 & 0xfffffffffffffff8));
              puStack_c8 = puVar20;
            }
          }
          puStack_c0 = puVar20 + 1;
          *puVar20 = (ulong)plVar13;
          puVar14 = (ulong *)param_1[1];
          puVar15 = (ulong *)param_1[2];
          if (puVar15 != puVar14) {
            do {
              puVar4 = puStack_b8;
              puVar14 = puStack_c0;
              puVar11 = puStack_d0;
              puVar22 = puVar20;
              puVar6 = puStack_c8;
              if (puVar20 == puStack_d0) {
                if (puStack_c0 < puStack_b8) {
                  lVar8 = ((long)puStack_b8 - (long)puStack_c0 >> 3) + 1;
                  puVar14 = puStack_c0 + ((ulong)(lVar8 - (lVar8 >> 0x3f)) >> 1);
                  puVar22 = (ulong *)((long)puVar14 - ((long)puStack_c0 - (long)puVar20));
                  puVar6 = puVar22;
                  if ((long)puStack_c0 - (long)puVar20 != 0) {
                    _memmove(puVar22,puVar20,(long)puStack_c0 - (long)puVar20);
                  }
                }
                else {
                  lVar8 = (long)puStack_b8 - (long)puVar20 >> 2;
                  if ((long)puStack_b8 - (long)puVar20 == 0) {
                    lVar8 = 1;
                  }
                  puStack_88 = puStack_b0;
                  puVar6 = (ulong *)*puStack_b0;
                  if (puVar6 != (ulong *)0x0) {
                    (**(code **)(*puVar6 + 0x10))(puVar6,lVar8 << 3,8);
                  }
                  puVar22 = puVar6 + (lVar8 + 3U >> 2);
                  lVar12 = (long)puVar14 - (long)puVar20;
                  puStack_c0 = puVar22;
                  puStack_a8 = puVar11;
                  if (lVar12 != 0) {
                    puStack_c0 = (ulong *)((long)puVar22 + lVar12);
                    puVar11 = puVar22;
                    puVar16 = puVar20;
                    do {
                      *puVar11 = *puVar16;
                      lVar12 = lVar12 + -8;
                      puVar11 = puVar11 + 1;
                      puVar16 = puVar16 + 1;
                      puStack_a8 = puStack_d0;
                    } while (lVar12 != 0);
                  }
                  puStack_b8 = puVar6 + lVar8;
                  puStack_98 = puVar14;
                  puStack_90 = puVar4;
                  puStack_d0 = puVar6;
                  puStack_c8 = puVar22;
                  puStack_a0 = puVar20;
                  FUN_10a10daa0(&puStack_a8);
                  puVar6 = puStack_c8;
                  puVar14 = puStack_c0;
                }
              }
              puStack_c0 = puVar14;
              puStack_c8 = puVar6;
              puVar15 = puVar15 + -1;
              puVar22[-1] = *puVar15;
              puVar20 = puStack_c8 + -1;
              puVar14 = (ulong *)param_1[1];
              puStack_c8 = puVar20;
            } while (puVar15 != puVar14);
            puVar15 = (ulong *)param_1[2];
            puVar5 = puStack_d0;
            puVar16 = puStack_b8;
          }
          puStack_d0 = (ulong *)*param_1;
          *param_1 = (ulong)puVar5;
          param_1[1] = (ulong)puVar20;
          puStack_b8 = (ulong *)param_1[3];
          param_1[2] = (ulong)puStack_c0;
          param_1[3] = (ulong)puVar16;
          puStack_c8 = puVar14;
          puStack_c0 = puVar15;
          FUN_10a10daa0(&puStack_d0);
        }
        return;
      }
      uVar21 = param_2 << 3;
      __Znwm();
      uVar3 = *param_1;
      *param_1 = uVar21;
      if (uVar3 != 0) {
        __ZdlPv();
      }
      uVar21 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar21 * 8) = 0;
        uVar21 = uVar21 + 1;
      } while (param_2 != uVar21);
      puVar14 = (ulong *)param_1[2];
      if (puVar14 != (ulong *)0x0) {
        uVar21 = puVar14[1];
        uVar3 = param_2 - 1;
        if ((param_2 & uVar3) == 0) {
          uVar21 = uVar21 & uVar3;
        }
        else if (param_2 <= uVar21) {
          uVar18 = 0;
          if (param_2 != 0) {
            uVar18 = uVar21 / param_2;
          }
          uVar21 = uVar21 - uVar18 * param_2;
        }
        *(ulong **)(*param_1 + uVar21 * 8) = param_1 + 2;
        puVar15 = (ulong *)*puVar14;
        while (puVar15 != (ulong *)0x0) {
          uVar18 = puVar15[1];
          if ((param_2 & uVar3) == 0) {
            uVar18 = uVar18 & uVar3;
          }
          else if (param_2 <= uVar18) {
            uVar19 = 0;
            if (param_2 != 0) {
              uVar19 = uVar18 / param_2;
            }
            uVar18 = uVar18 - uVar19 * param_2;
          }
          puVar22 = puVar15;
          if (uVar18 != uVar21) {
            uVar19 = *param_1;
            if (*(long *)(uVar19 + uVar18 * 8) == 0) {
              *(ulong **)(uVar19 + uVar18 * 8) = puVar14;
              uVar21 = uVar18;
            }
            else {
              *puVar14 = *puVar15;
              *puVar15 = **(ulong **)(uVar19 + uVar18 * 8);
              **(ulong **)(uVar19 + uVar18 * 8) = (ulong)puVar15;
              puVar22 = puVar14;
            }
          }
          puVar14 = puVar22;
          puVar15 = (ulong *)*puVar22;
        }
      }
    }
    return;
  }
  if (param_2 < uVar21) {
    uVar3 = (ulong)((float)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar21 < 3) || ((uVar21 & uVar21 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar3) {
      uVar3 = 1L << (-LZCOUNT(uVar3 - 1) & 0x3fU);
    }
    if (param_2 <= uVar3) {
      param_2 = uVar3;
    }
    if (param_2 < uVar21) goto LAB_10a10d1d4;
  }
  return;
}



/* Entry: 10a10d25c; end: 10a10d397;  */

void FUN_10a10d25c(ulong *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong *puVar12;
  long lVar13;
  long *plVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  ulong *puVar21;
  ulong *puVar22;
  ulong *puStack_d0;
  ulong *puStack_c8;
  ulong *puStack_c0;
  ulong *puStack_b8;
  ulong *puStack_b0;
  ulong *puStack_a8;
  ulong *puStack_a0;
  ulong *puStack_98;
  ulong *puStack_90;
  ulong *puStack_88;
  
  if (param_2 == 0) {
    uVar3 = *param_1;
    *param_1 = 0;
    if (uVar3 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      if (0xa9 < param_1[5]) {
        param_1[5] = param_1[5] - 0xaa;
        lVar9 = *(long *)param_1[1];
        param_1[1] = (ulong)((long *)param_1[1] + 1);
        plVar14 = (long *)param_1[2];
        if (plVar14 == (long *)param_1[3]) {
          plVar8 = (long *)*param_1;
          plVar11 = (long *)param_1[1];
          if (plVar11 < plVar8 || (long)plVar11 - (long)plVar8 == 0) {
            uVar3 = (long)plVar14 - (long)plVar8 >> 2;
            if ((long)plVar14 - (long)plVar8 == 0) {
              uVar3 = 1;
            }
            plVar8 = (long *)param_1[4];
            if (plVar8 != (long *)0x0) {
              (**(code **)(*plVar8 + 0x10))(plVar8,uVar3 << 3,8);
              plVar11 = (long *)param_1[1];
              plVar14 = (long *)param_1[2];
            }
            plVar1 = plVar8 + (uVar3 >> 2);
            plVar18 = plVar1;
            if (plVar14 != plVar11) {
              lVar13 = (long)plVar14 - (long)plVar11;
              plVar18 = (long *)((long)plVar1 + lVar13);
              plVar14 = plVar1;
              do {
                *plVar14 = *plVar11;
                lVar13 = lVar13 + -8;
                plVar11 = plVar11 + 1;
                plVar14 = plVar14 + 1;
              } while (lVar13 != 0);
            }
            puStack_88 = (ulong *)*param_1;
            *param_1 = (ulong)plVar8;
            param_1[1] = (ulong)plVar1;
            param_1[2] = (ulong)plVar18;
            param_1[3] = (ulong)(plVar8 + uVar3);
            FUN_10a10daa0(&puStack_88);
            plVar14 = (long *)param_1[2];
          }
          else {
            lVar13 = (((long)plVar11 - (long)plVar8 >> 3) + 1) / 2;
            plVar8 = plVar11 + -lVar13;
            lVar2 = (long)plVar14 - (long)plVar11;
            if (lVar2 != 0) {
              _memmove(plVar8,plVar11,lVar2);
              plVar11 = (long *)param_1[1];
            }
            plVar14 = (long *)((long)plVar8 + lVar2);
            param_1[1] = (ulong)(plVar11 + -lVar13);
            param_1[2] = (ulong)plVar14;
          }
        }
        *plVar14 = lVar9;
        param_1[2] = param_1[2] + 8;
        return;
      }
      puVar15 = (ulong *)param_1[2];
      puVar12 = (ulong *)param_1[3];
      puVar16 = (ulong *)*param_1;
      puVar22 = (ulong *)param_1[1];
      uVar3 = (long)puVar15 - (long)puVar22;
      if (uVar3 < (ulong)((long)puVar12 - (long)puVar16)) {
        plVar14 = (long *)param_1[7];
        if (puVar12 == puVar15) {
          if (plVar14 == (long *)0x0) {
            plVar14 = (long *)0x0;
          }
          else {
            (**(code **)(*plVar14 + 0x10))(plVar14,0xff0,8);
            puVar16 = (ulong *)*param_1;
            puVar22 = (ulong *)param_1[1];
          }
          if (puVar22 == puVar16) {
            puVar15 = (ulong *)param_1[2];
            puVar12 = (ulong *)param_1[3];
            if (puVar15 < puVar12) {
              lVar9 = (((long)puVar12 - (long)puVar15 >> 3) + 1) / 2;
              puVar12 = puVar16 + lVar9;
              if ((long)puVar15 - (long)puVar16 != 0) {
                _memmove(puVar12,puVar22,(long)puVar15 - (long)puVar16);
                puVar15 = (ulong *)param_1[2];
              }
              param_1[1] = (ulong)puVar12;
              param_1[2] = (ulong)(puVar15 + lVar9);
              puVar22 = puVar12;
            }
            else {
              lVar9 = (long)puVar12 - (long)puVar16 >> 2;
              if ((long)puVar12 - (long)puVar16 == 0) {
                lVar9 = 1;
              }
              puStack_88 = param_1 + 4;
              plVar8 = (long *)*puStack_88;
              puStack_a0 = puVar22;
              if (plVar8 != (long *)0x0) {
                (**(code **)(*plVar8 + 0x10))(plVar8,lVar9 << 3,8);
                puVar16 = (ulong *)param_1[1];
                puVar15 = (ulong *)param_1[2];
                puStack_a0 = puVar16;
              }
              puVar22 = (ulong *)(plVar8 + (lVar9 + 3U >> 2));
              puVar12 = puVar22;
              if (puVar15 != puStack_a0) {
                lVar13 = (long)puVar15 - (long)puVar16;
                puVar12 = (ulong *)((long)puVar22 + lVar13);
                puVar15 = puVar22;
                do {
                  *puVar15 = *puStack_a0;
                  lVar13 = lVar13 + -8;
                  puVar15 = puVar15 + 1;
                  puStack_a0 = puStack_a0 + 1;
                } while (lVar13 != 0);
                puStack_a0 = (ulong *)param_1[1];
                puVar15 = (ulong *)param_1[2];
              }
              puStack_a8 = (ulong *)*param_1;
              *param_1 = (ulong)plVar8;
              param_1[1] = (ulong)puVar22;
              puStack_90 = (ulong *)param_1[3];
              param_1[2] = (ulong)puVar12;
              param_1[3] = (ulong)(plVar8 + lVar9);
              puStack_98 = puVar15;
              FUN_10a10daa0(&puStack_a8);
              puVar22 = (ulong *)param_1[1];
            }
          }
          puVar22[-1] = (ulong)plVar14;
          uVar3 = param_1[1];
          param_1[1] = uVar3 - 8;
          uVar10 = *(undefined8 *)(uVar3 - 8);
          param_1[1] = uVar3;
          FUN_10a10d964(param_1,uVar10);
        }
        else {
          if (plVar14 == (long *)0x0) {
            plVar14 = (long *)0x0;
          }
          else {
            (**(code **)(*plVar14 + 0x10))(plVar14,0xff0,8);
            puVar15 = (ulong *)param_1[2];
            puVar12 = (ulong *)param_1[3];
          }
          if (puVar15 == puVar12) {
            puVar16 = (ulong *)*param_1;
            puStack_a0 = (ulong *)param_1[1];
            if (puStack_a0 < puVar16 || (long)puStack_a0 - (long)puVar16 == 0) {
              uVar3 = (long)puVar12 - (long)puVar16 >> 2;
              if ((long)puVar12 - (long)puVar16 == 0) {
                uVar3 = 1;
              }
              puStack_88 = param_1 + 4;
              plVar8 = (long *)*puStack_88;
              puStack_98 = puVar15;
              if (plVar8 != (long *)0x0) {
                (**(code **)(*plVar8 + 0x10))(plVar8,uVar3 << 3,8);
                puStack_a0 = (ulong *)param_1[1];
                puVar12 = (ulong *)param_1[2];
                puStack_98 = puVar12;
              }
              puVar15 = (ulong *)(plVar8 + (uVar3 >> 2));
              puVar16 = puVar15;
              if (puStack_98 != puStack_a0) {
                lVar9 = (long)puVar12 - (long)puStack_a0;
                puVar16 = (ulong *)((long)puVar15 + lVar9);
                puVar22 = puVar15;
                do {
                  *puVar22 = *puStack_a0;
                  lVar9 = lVar9 + -8;
                  puStack_a0 = puStack_a0 + 1;
                  puVar22 = puVar22 + 1;
                } while (lVar9 != 0);
                puStack_a0 = (ulong *)param_1[1];
                puStack_98 = (ulong *)param_1[2];
              }
              puStack_a8 = (ulong *)*param_1;
              *param_1 = (ulong)plVar8;
              param_1[1] = (ulong)puVar15;
              puStack_90 = (ulong *)param_1[3];
              param_1[2] = (ulong)puVar16;
              param_1[3] = (ulong)(plVar8 + uVar3);
              FUN_10a10daa0(&puStack_a8);
              puVar15 = (ulong *)param_1[2];
            }
            else {
              lVar9 = (((long)puStack_a0 - (long)puVar16 >> 3) + 1) / 2;
              puVar15 = puStack_a0 + -lVar9;
              lVar13 = (long)puVar12 - (long)puStack_a0;
              if (lVar13 != 0) {
                _memmove(puVar15,puStack_a0,lVar13);
                puStack_a0 = (ulong *)param_1[1];
              }
              puVar15 = (ulong *)((long)puVar15 + lVar13);
              param_1[1] = (ulong)(puStack_a0 + -lVar9);
              param_1[2] = (ulong)puVar15;
            }
          }
          *puVar15 = (ulong)plVar14;
          param_1[2] = param_1[2] + 8;
        }
      }
      else {
        puVar7 = param_1 + 4;
        puVar5 = (ulong *)*puVar7;
        uVar4 = 8;
        if (puVar12 != puVar16) {
          uVar4 = ((long)puVar12 - (long)puVar16) * 2;
        }
        puStack_b0 = puVar7;
        if (puVar5 == (ulong *)0x0) {
          puVar5 = (ulong *)0x0;
        }
        else {
          (**(code **)(*puVar5 + 0x10))(puVar5,uVar4,8);
        }
        puVar16 = (ulong *)((long)puVar5 + uVar3);
        puVar12 = (ulong *)((long)puVar5 + uVar4);
        plVar14 = (long *)param_1[7];
        puStack_c0 = puVar16;
        puStack_d0 = puVar5;
        puStack_c8 = puVar16;
        puStack_b8 = puVar12;
        if (plVar14 == (long *)0x0) {
          plVar14 = (long *)0x0;
        }
        else {
          (**(code **)(*plVar14 + 0x10))(plVar14,0xff0,8);
        }
        puVar21 = puVar16;
        puVar6 = puVar5;
        puVar17 = puVar12;
        if (uVar3 == uVar4) {
          if ((long)uVar3 < 1) {
            uVar3 = (long)uVar3 >> 2;
            if (puVar15 == puVar22) {
              uVar3 = 1;
            }
            puVar6 = (ulong *)*puVar7;
            puStack_88 = puVar7;
            if (puVar6 == (ulong *)0x0) {
              puVar6 = (ulong *)0x0;
            }
            else {
              (**(code **)(*puVar6 + 0x10))(puVar6,uVar3 << 3,8);
            }
            puVar21 = puVar6 + (uVar3 >> 2);
            puVar17 = puVar6 + uVar3;
            puStack_d0 = puVar6;
            puStack_c8 = puVar21;
            puStack_b8 = puVar17;
            puStack_a8 = puVar5;
            puStack_a0 = puVar16;
            puStack_98 = puVar16;
            puStack_90 = puVar12;
            FUN_10a10daa0(&puStack_a8);
          }
          else {
            puVar21 = (ulong *)((long)puVar16 - ((uVar3 >> 1) + 4 & 0xfffffffffffffff8));
            puStack_c8 = puVar21;
          }
        }
        puStack_c0 = puVar21 + 1;
        *puVar21 = (ulong)plVar14;
        puVar15 = (ulong *)param_1[1];
        puVar16 = (ulong *)param_1[2];
        if (puVar16 != puVar15) {
          do {
            puVar5 = puStack_b8;
            puVar15 = puStack_c0;
            puVar12 = puStack_d0;
            puVar22 = puVar21;
            puVar7 = puStack_c8;
            if (puVar21 == puStack_d0) {
              if (puStack_c0 < puStack_b8) {
                lVar9 = ((long)puStack_b8 - (long)puStack_c0 >> 3) + 1;
                puVar15 = puStack_c0 + ((ulong)(lVar9 - (lVar9 >> 0x3f)) >> 1);
                puVar22 = (ulong *)((long)puVar15 - ((long)puStack_c0 - (long)puVar21));
                puVar7 = puVar22;
                if ((long)puStack_c0 - (long)puVar21 != 0) {
                  _memmove(puVar22,puVar21,(long)puStack_c0 - (long)puVar21);
                }
              }
              else {
                lVar9 = (long)puStack_b8 - (long)puVar21 >> 2;
                if ((long)puStack_b8 - (long)puVar21 == 0) {
                  lVar9 = 1;
                }
                puStack_88 = puStack_b0;
                puVar7 = (ulong *)*puStack_b0;
                if (puVar7 != (ulong *)0x0) {
                  (**(code **)(*puVar7 + 0x10))(puVar7,lVar9 << 3,8);
                }
                puVar22 = puVar7 + (lVar9 + 3U >> 2);
                lVar13 = (long)puVar15 - (long)puVar21;
                puStack_c0 = puVar22;
                puStack_a8 = puVar12;
                if (lVar13 != 0) {
                  puStack_c0 = (ulong *)((long)puVar22 + lVar13);
                  puVar12 = puVar22;
                  puVar17 = puVar21;
                  do {
                    *puVar12 = *puVar17;
                    lVar13 = lVar13 + -8;
                    puVar12 = puVar12 + 1;
                    puVar17 = puVar17 + 1;
                    puStack_a8 = puStack_d0;
                  } while (lVar13 != 0);
                }
                puStack_b8 = puVar7 + lVar9;
                puStack_98 = puVar15;
                puStack_90 = puVar5;
                puStack_d0 = puVar7;
                puStack_c8 = puVar22;
                puStack_a0 = puVar21;
                FUN_10a10daa0(&puStack_a8);
                puVar7 = puStack_c8;
                puVar15 = puStack_c0;
              }
            }
            puStack_c0 = puVar15;
            puStack_c8 = puVar7;
            puVar16 = puVar16 + -1;
            puVar22[-1] = *puVar16;
            puVar21 = puStack_c8 + -1;
            puVar15 = (ulong *)param_1[1];
            puStack_c8 = puVar21;
          } while (puVar16 != puVar15);
          puVar16 = (ulong *)param_1[2];
          puVar6 = puStack_d0;
          puVar17 = puStack_b8;
        }
        puStack_d0 = (ulong *)*param_1;
        *param_1 = (ulong)puVar6;
        param_1[1] = (ulong)puVar21;
        puStack_b8 = (ulong *)param_1[3];
        param_1[2] = (ulong)puStack_c0;
        param_1[3] = (ulong)puVar17;
        puStack_c8 = puVar15;
        puStack_c0 = puVar16;
        FUN_10a10daa0(&puStack_d0);
      }
      return;
    }
    uVar3 = param_2 << 3;
    __Znwm();
    uVar4 = *param_1;
    *param_1 = uVar3;
    if (uVar4 != 0) {
      __ZdlPv();
    }
    uVar3 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar3 * 8) = 0;
      uVar3 = uVar3 + 1;
    } while (param_2 != uVar3);
    puVar15 = (ulong *)param_1[2];
    if (puVar15 != (ulong *)0x0) {
      uVar3 = puVar15[1];
      uVar4 = param_2 - 1;
      if ((param_2 & uVar4) == 0) {
        uVar3 = uVar3 & uVar4;
      }
      else if (param_2 <= uVar3) {
        uVar19 = 0;
        if (param_2 != 0) {
          uVar19 = uVar3 / param_2;
        }
        uVar3 = uVar3 - uVar19 * param_2;
      }
      *(ulong **)(*param_1 + uVar3 * 8) = param_1 + 2;
      puVar16 = (ulong *)*puVar15;
      while (puVar16 != (ulong *)0x0) {
        uVar19 = puVar16[1];
        if ((param_2 & uVar4) == 0) {
          uVar19 = uVar19 & uVar4;
        }
        else if (param_2 <= uVar19) {
          uVar20 = 0;
          if (param_2 != 0) {
            uVar20 = uVar19 / param_2;
          }
          uVar19 = uVar19 - uVar20 * param_2;
        }
        puVar22 = puVar16;
        if (uVar19 != uVar3) {
          uVar20 = *param_1;
          if (*(long *)(uVar20 + uVar19 * 8) == 0) {
            *(ulong **)(uVar20 + uVar19 * 8) = puVar15;
            uVar3 = uVar19;
          }
          else {
            *puVar15 = *puVar16;
            *puVar16 = **(ulong **)(uVar20 + uVar19 * 8);
            **(ulong **)(uVar20 + uVar19 * 8) = (ulong)puVar16;
            puVar22 = puVar15;
          }
        }
        puVar15 = puVar22;
        puVar16 = (ulong *)*puVar22;
      }
    }
  }
  return;
}



/* Entry: 10a10d398; end: 10a10d963;  */

void FUN_10a10d398(ulong *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong *puVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  ulong *puVar15;
  long *plVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong *puVar20;
  ulong *puStack_b0;
  ulong *puStack_a8;
  ulong *puStack_a0;
  ulong *puStack_98;
  ulong *puStack_90;
  ulong *puStack_88;
  ulong *puStack_80;
  ulong *puStack_78;
  ulong *puStack_70;
  ulong *puStack_68;
  
  if (param_1[5] < 0xaa) {
    puVar20 = (ulong *)param_1[2];
    puVar11 = (ulong *)param_1[3];
    puVar19 = (ulong *)*param_1;
    puVar18 = (ulong *)param_1[1];
    uVar14 = (long)puVar20 - (long)puVar18;
    if (uVar14 < (ulong)((long)puVar11 - (long)puVar19)) {
      plVar13 = (long *)param_1[7];
      if (puVar11 == puVar20) {
        if (plVar13 == (long *)0x0) {
          plVar13 = (long *)0x0;
        }
        else {
          (**(code **)(*plVar13 + 0x10))(plVar13,0xff0,8);
          puVar19 = (ulong *)*param_1;
          puVar18 = (ulong *)param_1[1];
        }
        if (puVar18 == puVar19) {
          puVar20 = (ulong *)param_1[2];
          puVar11 = (ulong *)param_1[3];
          if (puVar20 < puVar11) {
            lVar8 = (((long)puVar11 - (long)puVar20 >> 3) + 1) / 2;
            puVar11 = puVar19 + lVar8;
            if ((long)puVar20 - (long)puVar19 != 0) {
              _memmove(puVar11,puVar18,(long)puVar20 - (long)puVar19);
              puVar20 = (ulong *)param_1[2];
            }
            param_1[1] = (ulong)puVar11;
            param_1[2] = (ulong)(puVar20 + lVar8);
            puVar18 = puVar11;
          }
          else {
            lVar8 = (long)puVar11 - (long)puVar19 >> 2;
            if ((long)puVar11 - (long)puVar19 == 0) {
              lVar8 = 1;
            }
            puStack_68 = param_1 + 4;
            plVar7 = (long *)*puStack_68;
            puStack_80 = puVar18;
            if (plVar7 != (long *)0x0) {
              (**(code **)(*plVar7 + 0x10))(plVar7,lVar8 << 3,8);
              puVar19 = (ulong *)param_1[1];
              puVar20 = (ulong *)param_1[2];
              puStack_80 = puVar19;
            }
            puVar18 = (ulong *)(plVar7 + (lVar8 + 3U >> 2));
            puVar11 = puVar18;
            if (puVar20 != puStack_80) {
              lVar12 = (long)puVar20 - (long)puVar19;
              puVar11 = (ulong *)((long)puVar18 + lVar12);
              puVar20 = puVar18;
              do {
                *puVar20 = *puStack_80;
                lVar12 = lVar12 + -8;
                puVar20 = puVar20 + 1;
                puStack_80 = puStack_80 + 1;
              } while (lVar12 != 0);
              puStack_80 = (ulong *)param_1[1];
              puVar20 = (ulong *)param_1[2];
            }
            puStack_88 = (ulong *)*param_1;
            *param_1 = (ulong)plVar7;
            param_1[1] = (ulong)puVar18;
            puStack_70 = (ulong *)param_1[3];
            param_1[2] = (ulong)puVar11;
            param_1[3] = (ulong)(plVar7 + lVar8);
            puStack_78 = puVar20;
            FUN_10a10daa0(&puStack_88);
            puVar18 = (ulong *)param_1[1];
          }
        }
        puVar18[-1] = (ulong)plVar13;
        uVar14 = param_1[1];
        param_1[1] = uVar14 - 8;
        uVar9 = *(undefined8 *)(uVar14 - 8);
        param_1[1] = uVar14;
        FUN_10a10d964(param_1,uVar9);
      }
      else {
        if (plVar13 == (long *)0x0) {
          plVar13 = (long *)0x0;
        }
        else {
          (**(code **)(*plVar13 + 0x10))(plVar13,0xff0,8);
          puVar20 = (ulong *)param_1[2];
          puVar11 = (ulong *)param_1[3];
        }
        if (puVar20 == puVar11) {
          puVar19 = (ulong *)*param_1;
          puStack_80 = (ulong *)param_1[1];
          if (puStack_80 < puVar19 || (long)puStack_80 - (long)puVar19 == 0) {
            uVar14 = (long)puVar11 - (long)puVar19 >> 2;
            if ((long)puVar11 - (long)puVar19 == 0) {
              uVar14 = 1;
            }
            puStack_68 = param_1 + 4;
            plVar7 = (long *)*puStack_68;
            puStack_78 = puVar20;
            if (plVar7 != (long *)0x0) {
              (**(code **)(*plVar7 + 0x10))(plVar7,uVar14 << 3,8);
              puStack_80 = (ulong *)param_1[1];
              puVar11 = (ulong *)param_1[2];
              puStack_78 = puVar11;
            }
            puVar20 = (ulong *)(plVar7 + (uVar14 >> 2));
            puVar19 = puVar20;
            if (puStack_78 != puStack_80) {
              lVar8 = (long)puVar11 - (long)puStack_80;
              puVar19 = (ulong *)((long)puVar20 + lVar8);
              puVar18 = puVar20;
              do {
                *puVar18 = *puStack_80;
                lVar8 = lVar8 + -8;
                puStack_80 = puStack_80 + 1;
                puVar18 = puVar18 + 1;
              } while (lVar8 != 0);
              puStack_80 = (ulong *)param_1[1];
              puStack_78 = (ulong *)param_1[2];
            }
            puStack_88 = (ulong *)*param_1;
            *param_1 = (ulong)plVar7;
            param_1[1] = (ulong)puVar20;
            puStack_70 = (ulong *)param_1[3];
            param_1[2] = (ulong)puVar19;
            param_1[3] = (ulong)(plVar7 + uVar14);
            FUN_10a10daa0(&puStack_88);
            puVar20 = (ulong *)param_1[2];
          }
          else {
            lVar8 = (((long)puStack_80 - (long)puVar19 >> 3) + 1) / 2;
            puVar20 = puStack_80 + -lVar8;
            lVar12 = (long)puVar11 - (long)puStack_80;
            if (lVar12 != 0) {
              _memmove(puVar20,puStack_80,lVar12);
              puStack_80 = (ulong *)param_1[1];
            }
            puVar20 = (ulong *)((long)puVar20 + lVar12);
            param_1[1] = (ulong)(puStack_80 + -lVar8);
            param_1[2] = (ulong)puVar20;
          }
        }
        *puVar20 = (ulong)plVar13;
        param_1[2] = param_1[2] + 8;
      }
    }
    else {
      puVar6 = param_1 + 4;
      puVar4 = (ulong *)*puVar6;
      uVar2 = 8;
      if (puVar11 != puVar19) {
        uVar2 = ((long)puVar11 - (long)puVar19) * 2;
      }
      puStack_90 = puVar6;
      if (puVar4 == (ulong *)0x0) {
        puVar4 = (ulong *)0x0;
      }
      else {
        (**(code **)(*puVar4 + 0x10))(puVar4,uVar2,8);
      }
      puVar19 = (ulong *)((long)puVar4 + uVar14);
      puVar11 = (ulong *)((long)puVar4 + uVar2);
      plVar13 = (long *)param_1[7];
      puStack_a0 = puVar19;
      puStack_b0 = puVar4;
      puStack_a8 = puVar19;
      puStack_98 = puVar11;
      if (plVar13 == (long *)0x0) {
        plVar13 = (long *)0x0;
      }
      else {
        (**(code **)(*plVar13 + 0x10))(plVar13,0xff0,8);
      }
      puVar17 = puVar19;
      puVar5 = puVar4;
      puVar15 = puVar11;
      if (uVar14 == uVar2) {
        if ((long)uVar14 < 1) {
          uVar14 = (long)uVar14 >> 2;
          if (puVar20 == puVar18) {
            uVar14 = 1;
          }
          puVar5 = (ulong *)*puVar6;
          puStack_68 = puVar6;
          if (puVar5 == (ulong *)0x0) {
            puVar5 = (ulong *)0x0;
          }
          else {
            (**(code **)(*puVar5 + 0x10))(puVar5,uVar14 << 3,8);
          }
          puVar17 = puVar5 + (uVar14 >> 2);
          puVar15 = puVar5 + uVar14;
          puStack_b0 = puVar5;
          puStack_a8 = puVar17;
          puStack_98 = puVar15;
          puStack_88 = puVar4;
          puStack_80 = puVar19;
          puStack_78 = puVar19;
          puStack_70 = puVar11;
          FUN_10a10daa0(&puStack_88);
        }
        else {
          puVar17 = (ulong *)((long)puVar19 - ((uVar14 >> 1) + 4 & 0xfffffffffffffff8));
          puStack_a8 = puVar17;
        }
      }
      puStack_a0 = puVar17 + 1;
      *puVar17 = (ulong)plVar13;
      puVar20 = (ulong *)param_1[1];
      puVar19 = (ulong *)param_1[2];
      if (puVar19 != puVar20) {
        do {
          puVar4 = puStack_98;
          puVar20 = puStack_a0;
          puVar11 = puStack_b0;
          puVar18 = puVar17;
          puVar6 = puStack_a8;
          if (puVar17 == puStack_b0) {
            if (puStack_a0 < puStack_98) {
              lVar8 = ((long)puStack_98 - (long)puStack_a0 >> 3) + 1;
              puVar20 = puStack_a0 + ((ulong)(lVar8 - (lVar8 >> 0x3f)) >> 1);
              puVar18 = (ulong *)((long)puVar20 - ((long)puStack_a0 - (long)puVar17));
              puVar6 = puVar18;
              if ((long)puStack_a0 - (long)puVar17 != 0) {
                _memmove(puVar18,puVar17,(long)puStack_a0 - (long)puVar17);
              }
            }
            else {
              lVar8 = (long)puStack_98 - (long)puVar17 >> 2;
              if ((long)puStack_98 - (long)puVar17 == 0) {
                lVar8 = 1;
              }
              puStack_68 = puStack_90;
              puVar6 = (ulong *)*puStack_90;
              if (puVar6 != (ulong *)0x0) {
                (**(code **)(*puVar6 + 0x10))(puVar6,lVar8 << 3,8);
              }
              puVar18 = puVar6 + (lVar8 + 3U >> 2);
              lVar12 = (long)puVar20 - (long)puVar17;
              puStack_a0 = puVar18;
              puStack_88 = puVar11;
              if (lVar12 != 0) {
                puStack_a0 = (ulong *)((long)puVar18 + lVar12);
                puVar11 = puVar18;
                puVar15 = puVar17;
                do {
                  *puVar11 = *puVar15;
                  lVar12 = lVar12 + -8;
                  puVar11 = puVar11 + 1;
                  puVar15 = puVar15 + 1;
                  puStack_88 = puStack_b0;
                } while (lVar12 != 0);
              }
              puStack_98 = puVar6 + lVar8;
              puStack_78 = puVar20;
              puStack_70 = puVar4;
              puStack_b0 = puVar6;
              puStack_a8 = puVar18;
              puStack_80 = puVar17;
              FUN_10a10daa0(&puStack_88);
              puVar6 = puStack_a8;
              puVar20 = puStack_a0;
            }
          }
          puStack_a0 = puVar20;
          puStack_a8 = puVar6;
          puVar19 = puVar19 + -1;
          puVar18[-1] = *puVar19;
          puVar17 = puStack_a8 + -1;
          puVar20 = (ulong *)param_1[1];
          puStack_a8 = puVar17;
        } while (puVar19 != puVar20);
        puVar19 = (ulong *)param_1[2];
        puVar5 = puStack_b0;
        puVar15 = puStack_98;
      }
      puStack_b0 = (ulong *)*param_1;
      *param_1 = (ulong)puVar5;
      param_1[1] = (ulong)puVar17;
      puStack_98 = (ulong *)param_1[3];
      param_1[2] = (ulong)puStack_a0;
      param_1[3] = (ulong)puVar15;
      puStack_a8 = puVar20;
      puStack_a0 = puVar19;
      FUN_10a10daa0(&puStack_b0);
    }
    return;
  }
  param_1[5] = param_1[5] - 0xaa;
  lVar8 = *(long *)param_1[1];
  param_1[1] = (ulong)((long *)param_1[1] + 1);
  plVar13 = (long *)param_1[2];
  if (plVar13 == (long *)param_1[3]) {
    plVar7 = (long *)*param_1;
    plVar10 = (long *)param_1[1];
    if (plVar10 < plVar7 || (long)plVar10 - (long)plVar7 == 0) {
      uVar14 = (long)plVar13 - (long)plVar7 >> 2;
      if ((long)plVar13 - (long)plVar7 == 0) {
        uVar14 = 1;
      }
      plVar7 = (long *)param_1[4];
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,uVar14 << 3,8);
        plVar10 = (long *)param_1[1];
        plVar13 = (long *)param_1[2];
      }
      plVar1 = plVar7 + (uVar14 >> 2);
      plVar16 = plVar1;
      if (plVar13 != plVar10) {
        lVar12 = (long)plVar13 - (long)plVar10;
        plVar16 = (long *)((long)plVar1 + lVar12);
        plVar13 = plVar1;
        do {
          *plVar13 = *plVar10;
          lVar12 = lVar12 + -8;
          plVar10 = plVar10 + 1;
          plVar13 = plVar13 + 1;
        } while (lVar12 != 0);
      }
      puStack_68 = (ulong *)*param_1;
      *param_1 = (ulong)plVar7;
      param_1[1] = (ulong)plVar1;
      param_1[2] = (ulong)plVar16;
      param_1[3] = (ulong)(plVar7 + uVar14);
      FUN_10a10daa0(&puStack_68);
      plVar13 = (long *)param_1[2];
    }
    else {
      lVar12 = (((long)plVar10 - (long)plVar7 >> 3) + 1) / 2;
      plVar7 = plVar10 + -lVar12;
      lVar3 = (long)plVar13 - (long)plVar10;
      if (lVar3 != 0) {
        _memmove(plVar7,plVar10,lVar3);
        plVar10 = (long *)param_1[1];
      }
      plVar13 = (long *)((long)plVar7 + lVar3);
      param_1[1] = (ulong)(plVar10 + -lVar12);
      param_1[2] = (ulong)plVar13;
    }
  }
  *plVar13 = lVar8;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10a10d964; end: 10a10da9f;  */

void FUN_10a10d964(ulong *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uStack_68;
  long *plStack_60;
  long *plStack_58;
  ulong uStack_50;
  ulong *puStack_48;
  
  plStack_58 = (long *)param_1[2];
  if (plStack_58 == (long *)param_1[3]) {
    plVar3 = (long *)*param_1;
    plStack_60 = (long *)param_1[1];
    if (plStack_60 < plVar3 || (long)plStack_60 - (long)plVar3 == 0) {
      uVar5 = (long)plStack_58 - (long)plVar3 >> 2;
      if ((long)plStack_58 - (long)plVar3 == 0) {
        uVar5 = 1;
      }
      puStack_48 = param_1 + 4;
      plVar3 = (long *)*puStack_48;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,uVar5 << 3,8);
        plStack_60 = (long *)param_1[1];
        plStack_58 = (long *)param_1[2];
      }
      plVar1 = plVar3 + (uVar5 >> 2);
      plVar6 = plVar1;
      if (plStack_58 != plStack_60) {
        lVar4 = (long)plStack_58 - (long)plStack_60;
        plVar6 = (long *)((long)plVar1 + lVar4);
        plVar7 = plVar1;
        do {
          *plVar7 = *plStack_60;
          lVar4 = lVar4 + -8;
          plStack_60 = plStack_60 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar4 != 0);
        plStack_60 = (long *)param_1[1];
        plStack_58 = (long *)param_1[2];
      }
      uStack_68 = *param_1;
      *param_1 = (ulong)plVar3;
      param_1[1] = (ulong)plVar1;
      uStack_50 = param_1[3];
      param_1[2] = (ulong)plVar6;
      param_1[3] = (ulong)(plVar3 + uVar5);
      FUN_10a10daa0(&uStack_68);
      plStack_58 = (long *)param_1[2];
    }
    else {
      lVar4 = (((long)plStack_60 - (long)plVar3 >> 3) + 1) / 2;
      plVar3 = plStack_60 + -lVar4;
      lVar2 = (long)plStack_58 - (long)plStack_60;
      if (lVar2 != 0) {
        _memmove(plVar3,plStack_60,lVar2);
        plStack_60 = (long *)param_1[1];
      }
      plStack_58 = (long *)((long)plVar3 + lVar2);
      param_1[1] = (ulong)(plStack_60 + -lVar4);
      param_1[2] = (ulong)plStack_58;
    }
  }
  *plStack_58 = param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10a10daa0; end: 10a10daf7;  */

long * FUN_10a10daa0(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 != param_1[1]) {
    param_1[2] = lVar1 + ((param_1[1] - lVar1) + 7U & 0xfffffffffffffff8);
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_10a1087a0(param_1[4],lVar1,param_1[3] - lVar1 >> 3);
  }
  return param_1;
}



/* Entry: 10a10daf8; end: 10a10db73;  */

undefined1  [16] FUN_10a10daf8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xc;
  auVar1._0_8_ = &UNK_10f63ced5;
  return auVar1;
}



/* Entry: 10a10db74; end: 10a10de23;  */

void FUN_10a10db74(ulong param_1)

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
  ulong uVar10;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f63ced5,0xc);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110ba76b0;
  pppuVar2 = (undefined8 ***)&UNK_10f63ce51;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0x16f;
  uStack_50 = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110ba76b0;
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
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a10de04;
    FUN_10a054dac(param_1,&UNK_10f63299a,FUN_10a1341bc,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a10de04;
    FUN_10a054dac(param_1,&UNK_10f6329a3,FUN_10a1343c4,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110ba6f40,FUN_10a134564);
    FUN_10a0605c4(param_1,&DAT_10f6846a0,FUN_10a1357a8,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f63ced5,0xc);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a10de04:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a10de08);
  (*pcVar6)();
}



/* Entry: 10a10de24; end: 10a10dfa3;  */

undefined8 *
FUN_10a10de24(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_DAT_110ba7810;
  lVar6 = *(long *)(param_2 + 0x870);
  if (*(long *)(lVar6 + 0x38) == 0) {
    lVar5 = *(long *)(lVar6 + 0x30);
    uVar7 = *(undefined8 *)(lVar6 + 0x28);
    param_1[6] = *(undefined8 *)(lVar6 + 0x30);
    param_1[5] = uVar7;
  }
  else {
    lVar5 = *(long *)(lVar6 + 0x40);
    param_1[5] = *(long *)(lVar6 + 0x38);
    param_1[6] = lVar5;
  }
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
  uVar7 = *param_3;
  param_1[8] = param_3[1];
  param_1[7] = uVar7;
  *param_3 = 0;
  param_3[1] = 0;
  FUN_10a06e05c(param_1 + 9,param_4);
  FUN_10a06e13c(param_1 + 0xe,param_5);
  puVar4 = (undefined8 *)0x98;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110ba6f68;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  puVar4[0xf] = 0;
  puVar4[0xe] = 0;
  puVar4[0x11] = 0;
  puVar4[0x10] = 0;
  puVar4[0x12] = 0;
  puVar4[3] = &PTR_FUN_110ba6fb8;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  puVar4[5] = 0;
  puVar4[4] = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  *(undefined4 *)(puVar4 + 10) = 0x3f800000;
  puVar4[0xb] = FUN_10a135c10;
  puVar4[0xc] = &PTR_DAT_110ae9180;
  param_1[0x13] = puVar4 + 3;
  param_1[0x14] = puVar4;
  param_1[0x15] = 0x32aaaba7;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  return param_1;
}



/* Entry: 10a10dfa4; end: 10a10e09f;  */

void FUN_10a10dfa4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  for (plVar7 = *(long **)(param_1 + 0x58); plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
    uVar6 = plVar7[5];
    plVar5 = (long *)param_2[1];
    uStack_38 = param_2[1];
    uStack_40 = *param_2;
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
    }
    if (*(char *)((long)plVar7 + 0x27) < '\0') {
      func_0x000107c3192c(&lStack_60,plVar7[2],plVar7[3]);
    }
    else {
      uStack_58 = plVar7[3];
      lStack_60 = plVar7[2];
      lStack_50 = plVar7[4];
    }
    FUN_10a10e0a0(uVar6,&uStack_40,&lStack_60);
    if (lStack_50 < 0) {
      __ZdlPv(lStack_60);
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  return;
}



/* Entry: 10a10e0a0; end: 10a10e117;  */

void FUN_10a10e0a0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = param_2[1];
  uVar5 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar6;
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  if (lVar4 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)(param_1 + 0x3f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x28));
  }
  uVar6 = param_3[1];
  uVar5 = *param_3;
  *(undefined8 *)(param_1 + 0x38) = param_3[2];
  *(undefined8 *)(param_1 + 0x30) = uVar6;
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  *(undefined1 *)((long)param_3 + 0x17) = 0;
  *(undefined1 *)param_3 = 0;
  return;
}



/* Entry: 10a10e118; end: 10a10e987;  */

/* WARNING: Removing unreachable block (ram,0x00010a10e450) */

void FUN_10a10e118(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uStack_120;
  long *plStack_118;
  ulong uStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long *plStack_d8;
  char cStack_d0;
  long *plStack_c0;
  char cStack_b8;
  ulong uStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  byte bStack_78;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0xa8);
  if (*(int *)(param_1 + 0xe8) == 1) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (&uStack_68,&UNK_10f63ce52,param_2);
    FUN_10a012db0(&uStack_120,&uStack_68,&UNK_10f63ce77);
    FUN_10a0029c0(&uStack_120);
    goto LAB_10a10e7d0;
  }
  if ((*(byte *)(param_1 + 0x128) & 1) == 0) {
    func_0x000109a17f70(&uStack_120,*(undefined8 *)(param_1 + 0x38));
    func_0x00010a10ea68(param_1 + 0xf0);
    plVar6 = plStack_108;
    uVar12 = uStack_110;
    uStack_110 = 0;
    plStack_108 = (long *)0x0;
    *(long **)(param_1 + 0xf8) = plStack_118;
    *(ulong *)(param_1 + 0xf0) = uStack_120;
    *(long **)(param_1 + 0x108) = plVar6;
    *(ulong *)(param_1 + 0x100) = uVar12;
    *(long *)(param_1 + 0x118) = lStack_f8;
    *(undefined8 *)(param_1 + 0x110) = uStack_100;
    uStack_100 = 0;
    lStack_f8 = 0;
    *(long *)(param_1 + 0x120) = lStack_f0;
    *(undefined1 *)(param_1 + 0x128) = 1;
    func_0x000109a18110((ulong)&uStack_120 | 8);
    if ((*(byte *)(param_1 + 0x128) & 1) == 0) goto LAB_10a10e7d0;
  }
  (*(code *)*param_3)(param_1 + 0xf0,param_3);
  lVar13 = *(long *)(param_1 + 0x130) + 1;
  *(long *)(param_1 + 0x130) = lVar13;
  if (lVar13 == *(long *)(param_1 + 0x60)) {
    *(undefined4 *)(param_1 + 0xe8) = 1;
    *(undefined8 *)(param_1 + 0x130) = 0;
    if ((*(byte *)(param_1 + 0x128) & 1) == 0) goto LAB_10a10e7d0;
    uVar12 = *(ulong *)(param_1 + 0xf0);
    uVar16 = *(undefined8 *)(param_1 + 0x110);
    uVar15 = *(undefined8 *)(param_1 + 0x108);
    uVar10 = *(undefined8 *)(param_1 + 0x118);
    lVar13 = *(long *)(param_1 + 0x120);
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
    uVar14 = *(undefined8 *)(param_1 + 0x100);
    plVar6 = *(long **)(param_1 + 0xf8);
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    uStack_120 = uVar12;
    plStack_118 = plVar6;
    lStack_f0 = lVar13;
    func_0x00010a10ea68(param_1 + 0xf0);
    uStack_110 = 0;
    plStack_108 = (long *)0x0;
    uStack_100 = 0;
    lStack_f8 = 0;
    bStack_78 = 1;
    uStack_b0 = uVar12;
    plStack_a8 = plVar6;
    uStack_a0 = uVar14;
    uStack_98 = uVar15;
    uStack_90 = uVar16;
    uStack_88 = uVar10;
    lStack_80 = lVar13;
    func_0x000109a18110(&plStack_118);
  }
  else {
    uStack_b0 = uStack_b0 & 0xffffffffffffff00;
    bStack_78 = 0;
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0xa8);
  if (bStack_78 != 1) {
LAB_10a10e764:
    func_0x00010a051fb0(&uStack_b0);
    return;
  }
  plStack_c0 = (long *)((ulong)plStack_c0 & 0xffffffffffffff00);
  cStack_b8 = '\0';
  plVar6 = *(long **)(param_1 + 0x28);
  (**(code **)(*plVar6 + 0x18))();
  if (plVar6 != (long *)0x0) {
    if (cStack_b8 == '\x01') {
      FUN_109d19404(&plStack_c0,plVar6 + 7);
    }
    else {
      plStack_c0 = (long *)plVar6[7];
      if (plStack_c0 != (long *)0x0) {
        plVar6 = plStack_c0 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = *plVar6 + 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      cStack_b8 = '\x01';
    }
  }
  plVar6 = *(long **)(param_1 + 0x20);
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  uStack_120 = *(ulong *)(param_1 + 0x18);
  if (plVar6 == (long *)0x0) {
    plStack_118 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    uVar15 = uStack_98;
    uVar14 = uStack_a0;
    plStack_118 = plVar6;
    if (plVar6 != (long *)0x0) {
      if ((bStack_78 & 1) != 0) {
        uStack_a0 = 0;
        uStack_98 = 0;
        plStack_108 = plStack_a8;
        uStack_110 = uStack_b0;
        lStack_f8 = uVar15;
        uStack_100 = uVar14;
        uStack_e8 = uStack_88;
        lStack_f0 = uStack_90;
        uStack_90 = 0;
        uStack_88 = 0;
        lStack_e0 = lStack_80;
        plStack_d8 = (long *)((ulong)plStack_d8 & 0xffffffffffffff00);
        cStack_d0 = cStack_b8 == '\x01';
        if ((bool)cStack_d0) {
          plStack_d8 = plStack_c0;
          plStack_c0 = (long *)0x0;
        }
        puVar7 = (undefined8 *)0xc0;
        __Znwm();
        *puVar7 = FUN_10a145b60;
        puVar7[1] = FUN_10a145e78;
        func_0x0001092ba17c(puVar7 + 2);
        plVar6 = (long *)puVar7[7];
        if (plVar6 != (long *)0x0) {
          plVar9 = plVar6 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar4) {
              *plVar9 = *plVar9 + 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        puVar7[10] = plStack_118;
        puVar7[9] = uStack_120;
        puVar7[0xc] = plStack_108;
        puVar7[0xb] = uStack_110;
        puVar7[0xe] = lStack_f8;
        puVar7[0xd] = uStack_100;
        uStack_120 = 0;
        plStack_118 = (long *)0x0;
        uStack_100 = 0;
        puVar7[0x10] = uStack_e8;
        puVar7[0xf] = lStack_f0;
        lStack_f0 = 0;
        uStack_e8 = 0;
        lStack_f8 = 0;
        puVar7[0x11] = lStack_e0;
        *(undefined1 *)(puVar7 + 0x12) = 0;
        *(undefined1 *)(puVar7 + 0x13) = 0;
        if (cStack_d0 == '\x01') {
          puVar7[0x12] = plStack_d8;
          plStack_d8 = (long *)0x0;
          *(undefined1 *)(puVar7 + 0x13) = 1;
        }
        puVar7[0x14] = uVar10;
        *(undefined1 *)(puVar7 + 0x15) = 0;
        *(undefined1 *)(puVar7 + 0x17) = 0;
        puVar8 = puVar7 + 0x14;
        func_0x0001092ba064(puVar8,puVar7);
        if (((ulong)puVar8 & 1) == 0) {
          FUN_10a12a290(puVar7 + 0x16,puVar7 + 9);
          puVar7[0x14] = puVar7[0x16];
          plVar9 = (long *)(puVar7[0x16] + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar4) {
              *plVar9 = *plVar9 + 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (((uint)*(undefined8 *)(puVar7[0x14] + 0x10) >> 1 & 1) == 0) {
            *(undefined1 *)(puVar7 + 0x17) = 1;
            lVar13 = puVar7[0x14];
            plVar9 = (long *)(lVar13 + 0x10);
            uVar10 = puVar7[3];
            do {
              lVar11 = *plVar9;
              if (lVar11 == 0) {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar4) {
                  *plVar9 = 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 == '\0') {
                  uStack_68 = 0;
                  puStack_60 = puVar7;
                  uStack_58 = uVar10;
                  func_0x000109d1b588(lVar13 + 0x18,&uStack_68);
                  *(undefined8 *)(lVar13 + 0x10) = 0;
                  goto joined_r0x00010a10e640;
                }
              }
              else {
                ClearExclusiveLocal();
              }
            } while (((uint)lVar11 >> 1 & 1) == 0);
          }
          plVar9 = (long *)puVar7[0x14];
          if (((uint)*(undefined8 *)(puVar7[0x14] + 0x10) >> 5 & 1) != 0) {
            func_0x0001092af97c(plVar9 + 0x12);
            goto LAB_10a10e7d0;
          }
          if (plVar9 != (long *)0x0) {
            puVar1 = (ulong *)(plVar9 + 1);
            do {
              uVar12 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar12 - 4;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((uVar12 & 0x1fffffffc) == 4) {
              do {
                uVar12 = *puVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                  *puVar1 = uVar12 - 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (uVar12 - 1 == 0) {
                (**(code **)(*plVar9 + 8))();
              }
            }
          }
          plVar9 = (long *)puVar7[0x16];
          if (plVar9 != (long *)0x0) {
            puVar1 = (ulong *)(plVar9 + 1);
            do {
              uVar12 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar12 - 4;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((uVar12 & 0x1fffffffc) == 4) {
              do {
                uVar12 = *puVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                  *puVar1 = uVar12 - 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (uVar12 - 1 == 0) {
                (**(code **)(*plVar9 + 8))();
              }
            }
          }
          func_0x0001092ba100(puVar7 + 2);
          if ((*(char *)(puVar7 + 0x13) == '\x01') &&
             (plVar9 = (long *)puVar7[0x12], plVar9 != (long *)0x0)) {
            puVar1 = (ulong *)(plVar9 + 1);
            do {
              uVar12 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar12 - 4;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((uVar12 & 0x1fffffffc) == 4) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
              do {
                uVar12 = *puVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                  *puVar1 = uVar12 - 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (uVar12 - 1 == 0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
            }
          }
          if (puVar7[0xe] != 0) {
            puVar7[0xf] = puVar7[0xe];
            __ZdlPv();
          }
          func_0x000109a18110(puVar7 + 0xc);
          plVar9 = (long *)puVar7[10];
          if (plVar9 != (long *)0x0) {
            plVar2 = plVar9 + 1;
            do {
              lVar13 = *plVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar4) {
                *plVar2 = lVar13 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar13 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
            }
          }
          func_0x000109d1a1d0(puVar7 + 2);
          __ZdlPv(puVar7);
        }
joined_r0x00010a10e640:
        if (plVar6 != (long *)0x0) {
          puVar1 = (ulong *)(plVar6 + 1);
          do {
            uVar12 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar12 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar12 & 0x1fffffffc) == 4) {
            do {
              uVar12 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar12 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar12 - 1 == 0) {
              (**(code **)(*plVar6 + 8))(plVar6);
            }
          }
        }
        plVar6 = plStack_d8;
        if ((cStack_d0 == '\x01') && (plStack_d8 != (long *)0x0)) {
          puVar1 = (ulong *)(plStack_d8 + 1);
          do {
            uVar12 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar12 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar12 & 0x1fffffffc) == 4) {
            (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
            do {
              uVar12 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar12 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar12 - 1 == 0) {
              (**(code **)(*plVar6 + 8))(plVar6);
            }
          }
        }
        if (lStack_f8 != 0) {
          lStack_f0 = lStack_f8;
          __ZdlPv();
        }
        func_0x000109a18110(&plStack_108);
        plVar6 = plStack_118;
        if (plStack_118 != (long *)0x0) {
          plVar9 = plStack_118 + 1;
          do {
            lVar13 = *plVar9;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar4) {
              *plVar9 = lVar13 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_118 + 0x10))(plStack_118);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        plVar6 = plStack_c0;
        if ((cStack_b8 == '\x01') && (plStack_c0 != (long *)0x0)) {
          puVar1 = (ulong *)(plStack_c0 + 1);
          do {
            uVar12 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar12 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar12 & 0x1fffffffc) == 4) {
            (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
            do {
              uVar12 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar12 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar12 - 1 == 0) {
              (**(code **)(*plVar6 + 8))(plVar6);
            }
          }
        }
        goto LAB_10a10e764;
      }
      goto LAB_10a10e7d0;
    }
  }
  FUN_10a043ecc();
LAB_10a10e7d0:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a10e7d4);
  (*pcVar5)();
}



/* Entry: 10a10e988; end: 10a10ea2f;  */

long FUN_10a10e988(long param_1)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  if ((*(char *)(param_1 + 0x50) == '\x01') &&
     (plVar7 = *(long **)(param_1 + 0x48), plVar7 != (long *)0x0)) {
    puVar2 = (ulong *)(plVar7 + 1);
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
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
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
    __ZdlPv();
  }
  func_0x000109a18110(param_1 + 0x18);
  plVar7 = *(long **)(param_1 + 8);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return param_1;
}



/* Entry: 10a10ea30; end: 10a10eaab;  */

long FUN_10a10ea30(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
    __ZdlPv();
  }
  func_0x000109a18110(param_1 + 8);
  return param_1;
}



/* Entry: 10a10eaac; end: 10a10eb5b;  */

void FUN_10a10eaac(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  FUN_10a135cc0(auStack_58,param_1 + 0x18);
  for (plVar2 = (long *)lStack_48; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    lVar1 = param_1 + 0x18;
    FUN_10a1352f8(lVar1,plVar2 + 2);
    if (lVar1 != 0) {
      if (*(char *)(plVar2 + 0xc) == '\x01') {
        (*(code *)plVar2[4])(param_2,plVar2 + 4);
      }
      else if (*(char *)(plVar2 + 0xc) == '\x02') {
        FUN_10a05aad0(plVar2 + 4,param_2);
      }
    }
  }
  FUN_10a135c20(auStack_58);
  return;
}



/* Entry: 10a10eb5c; end: 10a10eba3;  */

undefined8 * FUN_10a10eb5c(undefined8 *param_1)

{
  long lVar1;
  
  if (*(char *)*param_1 == '\x01') {
    lVar1 = param_1[1];
    __ZNSt3__15mutex4lockEv(lVar1 + 0xa8);
    *(undefined4 *)(lVar1 + 0xe8) = 0;
    __ZNSt3__15mutex6unlockEv(lVar1 + 0xa8);
  }
  return param_1;
}



/* Entry: 10a10eba4; end: 10a10ed17;  */

void FUN_10a10eba4(undefined8 *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  uVar5 = param_2 + 0x48;
  func_0x000107c2b05c();
  uVar9 = *(ulong *)(param_2 + 0x50);
  if (uVar9 != 0) {
    uVar10 = uVar9 - 1;
    if ((uVar9 & uVar10) == 0) {
      uVar11 = uVar10 & uVar5;
    }
    else {
      uVar11 = uVar5;
      if (uVar9 <= uVar5) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = uVar5 / uVar9;
        }
        uVar11 = uVar5 - uVar11 * uVar9;
      }
    }
    plVar6 = *(long **)(*(long *)(param_2 + 0x48) + uVar11 * 8);
    if (plVar6 != (long *)0x0) {
      for (plVar6 = (long *)*plVar6; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        uVar7 = plVar6[1];
        if (uVar5 == uVar7) {
          uVar7 = param_2 + 0x48;
          func_0x000107c2b068(uVar7,plVar6 + 2,param_3);
          if ((uVar7 & 1) != 0) {
            lVar8 = plVar6[6];
            uVar12 = plVar6[5];
            param_1[1] = plVar6[6];
            *param_1 = uVar12;
            if (lVar8 != 0) {
              plVar6 = (long *)(lVar8 + 8);
              do {
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar2) {
                  *plVar6 = *plVar6 + 1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            return;
          }
        }
        else {
          if ((uVar9 & uVar10) == 0) {
            uVar7 = uVar7 & uVar10;
          }
          else if (uVar9 <= uVar7) {
            uVar3 = 0;
            if (uVar9 != 0) {
              uVar3 = uVar7 / uVar9;
            }
            uVar7 = uVar7 - uVar3 * uVar9;
          }
          if (uVar7 != uVar11) break;
        }
      }
    }
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_80,&UNK_10f63ce90,param_3);
  FUN_10a012db0(auStack_68,auStack_80,&DAT_10f638984);
  FUN_10a0029c0(auStack_68);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a10eca4);
  (*pcVar4)();
}



/* Entry: 10a10ed18; end: 10a10ee8b;  */

void FUN_10a10ed18(undefined8 *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  uVar5 = param_2 + 0x70;
  func_0x000107c2b05c();
  uVar9 = *(ulong *)(param_2 + 0x78);
  if (uVar9 != 0) {
    uVar10 = uVar9 - 1;
    if ((uVar9 & uVar10) == 0) {
      uVar11 = uVar10 & uVar5;
    }
    else {
      uVar11 = uVar5;
      if (uVar9 <= uVar5) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = uVar5 / uVar9;
        }
        uVar11 = uVar5 - uVar11 * uVar9;
      }
    }
    plVar6 = *(long **)(*(long *)(param_2 + 0x70) + uVar11 * 8);
    if (plVar6 != (long *)0x0) {
      for (plVar6 = (long *)*plVar6; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        uVar7 = plVar6[1];
        if (uVar5 == uVar7) {
          uVar7 = param_2 + 0x70;
          func_0x000107c2b068(uVar7,plVar6 + 2,param_3);
          if ((uVar7 & 1) != 0) {
            lVar8 = plVar6[6];
            uVar12 = plVar6[5];
            param_1[1] = plVar6[6];
            *param_1 = uVar12;
            if (lVar8 != 0) {
              plVar6 = (long *)(lVar8 + 8);
              do {
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar2) {
                  *plVar6 = *plVar6 + 1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            return;
          }
        }
        else {
          if ((uVar9 & uVar10) == 0) {
            uVar7 = uVar7 & uVar10;
          }
          else if (uVar9 <= uVar7) {
            uVar3 = 0;
            if (uVar9 != 0) {
              uVar3 = uVar7 / uVar9;
            }
            uVar7 = uVar7 - uVar3 * uVar9;
          }
          if (uVar7 != uVar11) break;
        }
      }
    }
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_80,&UNK_10f63ceb2,param_3);
  FUN_10a012db0(auStack_68,auStack_80,&DAT_10f638984);
  FUN_10a0029c0(auStack_68);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a10ee18);
  (*pcVar4)();
}



/* Entry: 10a10ee8c; end: 10a10eeef;  */

undefined1  [16] FUN_10a10ee8c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 4;
  auVar1._0_8_ = &UNK_10f63e06e;
  return auVar1;
}



/* Entry: 10a10eef0; end: 10a10f1db;  */

void FUN_10a10eef0(ulong param_1)

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
  ulong uVar10;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  FUN_10a003e74(param_1,&UNK_10f63ced5,0xc);
  func_0x000109887da8(appuStack_c8,&UNK_10f63e06e,4);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110ba7678;
  pppuVar2 = (undefined8 ***)&UNK_10f63ce51;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0x16f;
  uStack_50 = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110ba7678;
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
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a10f1bc;
    FUN_10a054dac(param_1,&UNK_10f63cee2,FUN_10a1360d8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a10f1bc;
    FUN_10a054dac(param_1,&UNK_10f63ceea,FUN_10a1362cc,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f63cef3,FUN_10a136444,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f63cefe,FUN_10a136508,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f63e06e,4);
      FUN_10a05431c(param_1);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a10f1bc:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a10f1c0);
  (*pcVar6)();
}



/* Entry: 10a10f1dc; end: 10a10f2af;  */

undefined8 * FUN_10a10f1dc(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 *puStack_48;
  
  *param_1 = &PTR_DAT_110b17898;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  FUN_10a12acb0(&uStack_60,*param_2,param_2[1],param_2[1] - *param_2 >> 4);
  func_0x000109a22940(param_1 + 3,&uStack_60,param_3);
  puStack_48 = (undefined1 *)&uStack_60;
  func_0x00010a04b0f8(&puStack_48);
  *param_1 = &PTR_DAT_110ba57a0;
  param_1[3] = &PTR_DAT_110ba57f8;
  return param_1;
}



/* Entry: 10a10f2b0; end: 10a10f30b;  */

ulong FUN_10a10f2b0(long *param_1,ulong param_2,long *param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  
  if (param_3 < (long *)(*(long *)(param_2 + 0x38) - *(long *)(param_2 + 0x30) >> 4)) {
    plVar1 = (long *)(*(long *)(param_2 + 0x30) + (long)param_3 * 0x10);
    lVar3 = *plVar1;
    lVar4 = plVar1[1];
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    lVar2 = 0;
    if (lVar3 != 0) {
      lVar2 = lVar3 + -0x18;
    }
    *param_1 = lVar2;
    param_1[1] = lVar4;
    return param_2;
  }
  func_0x000105688514(&UNK_10f59499e);
  if (param_4 == 0xc) {
    bVar6 = false;
    if (*param_3 == 0x624f747069726353) {
      bVar6 = (int)param_3[1] == 0x7463656a;
    }
  }
  else {
    if (param_4 != 6) {
      return 0;
    }
    bVar6 = (int)*param_3 == 0x7074754f && *(short *)((long)param_3 + 4) == 0x7475;
  }
  return (ulong)bVar6;
}



/* Entry: 10a10f30c; end: 10a10f36b;  */

bool FUN_10a10f30c(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 6) {
      return false;
    }
    bVar1 = (int)*param_2 == 0x7074754f && *(short *)((long)param_2 + 4) == 0x7475;
  }
  return bVar1;
}



/* Entry: 10a10f36c; end: 10a10f3f7;  */

void FUN_10a10f36c(undefined8 param_1)

{
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  
  FUN_10a003e74(param_1,&UNK_10f63ced5,0xc);
  uStack_60 = 0xffffffff00000001;
  uStack_68 = 0;
  uStack_58 = 0xffffffff;
  puStack_50 = &UNK_10f63ce51;
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_2c = 0xffffffff0000016f;
  FUN_10a10f3f8(param_1,&uStack_68);
  FUN_10a1366c8();
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a10f3f8; end: 10a10f4cf;  */

/* WARNING: Removing unreachable block (ram,0x00010a10f490) */

undefined1  [16] FUN_10a10f3f8(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f63e07a,6);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a1365cc(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a10f4d0; end: 10a10f66f;  */

void FUN_10a10f4d0(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_10a003e74(param_1,&UNK_10f63ced5,0xc);
  FUN_10a003e74(param_1,&UNK_10f63cf0a,5);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f63cf10;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  puStack_70 = &UNK_10f63ce51;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff0000016f;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_4c._4_4_,
                uStack_78 & 0xffffffff,uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f61d667;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  puStack_70 = &UNK_10f63ce51;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_4c = 0xffffffff0000016f;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a10f670(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f54c3cc;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  puStack_70 = &UNK_10f63ce51;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff0000016f;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a10f670();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f571594;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  puStack_70 = &UNK_10f63ce51;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff0000016f;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a10f670();
  FUN_10a003ff4();
  func_0x00010a004064(param_1);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a10f670; end: 10a10f713;  */

undefined8 * FUN_10a10f670(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a10f714);
      (*pcVar1)();
    }
    puStack_38 = (undefined8 *)(double)param_3;
    aiStack_40[0] = 3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a10f714; end: 10a10f793;  */

undefined1  [16] FUN_10a10f714(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = &UNK_10f63e081;
  return auVar1;
}



/* Entry: 10a10f794; end: 10a10f8af;  */

void FUN_10a10f794(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  FUN_10a003e74(param_1,&UNK_10f63ced5,0xc);
  FUN_10a003e74(param_1,&UNK_10f63cf0a,5);
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f63ce51;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  uVar1 = param_1;
  FUN_10a10f8b0(param_1,&puStack_98);
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000019;
  puStack_70 = &UNK_10f63ce51;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = (undefined *)0x0;
  uStack_38 = 0;
  FUN_10a136880();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f63cf59;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000019;
  puStack_70 = &UNK_10f63ce51;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f63ce51;
  uStack_38 = 0;
  func_0x00010a136aa8(uVar1,&puStack_98);
  FUN_10a136d28(uVar1);
  func_0x00010a004064(param_1);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a10f8b0; end: 10a10f987;  */

/* WARNING: Removing unreachable block (ram,0x00010a10f948) */

undefined1  [16] FUN_10a10f8b0(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f63e081,0x10);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a136784(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a10f988; end: 10a10fadf;  */

undefined1  [16] FUN_10a10f988(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x13;
  auVar1._0_8_ = &UNK_10f63cf64;
  return auVar1;
}



/* Entry: 10a10fae0; end: 10a10fc0f;  */

void FUN_10a10fae0(undefined8 param_1)

{
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_10a003e74(param_1,&UNK_10f63ced5,0xc);
  puStack_98 = (undefined *)0x0;
  ppuStack_90 = (undefined **)0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  puStack_70 = &UNK_10f63ce51;
  uStack_68 = 0;
  puStack_60 = (undefined *)0x16f00000000;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a10fc10(param_1,&puStack_98);
  FUN_10a136f38();
  ppuStack_90 = (undefined **)0x0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f63cf64;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000019;
  puStack_70 = &UNK_10f63ce51;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  puStack_60 = &UNK_10f63ce51;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a004eb4(param_1,&puStack_98);
  ppuStack_90 = &puStack_a0;
  puStack_a0 = &UNK_10f63cf7f;
  puStack_98 = &UNK_10f63cf78;
  uStack_88 = 1;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000019;
  puStack_70 = &UNK_10f63ce51;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  pcStack_a8 = FUN_10a10fd40;
  FUN_10a10fce8(param_1,&puStack_98,&pcStack_a8);
  func_0x00010a004064(param_1);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a10fc10; end: 10a10fce7;  */

/* WARNING: Removing unreachable block (ram,0x00010a10fca8) */

undefined1  [16] FUN_10a10fc10(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f63cf64,0x13);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a136e3c(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a10fce8; end: 10a10fd3f;  */

ulong FUN_10a10fce8(ulong param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x00010a136ff4(param_1,*param_2,param_3);
  }
  return param_1;
}



/* Entry: 10a10fd40; end: 10a10ff93;  */

void FUN_10a10fd40(undefined8 *param_1,long param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long unaff_x19;
  long *plVar10;
  long *plVar11;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  if (*param_3 == 0) {
    FUN_10a00946c(&UNK_10f63cf95);
  }
  else {
    uVar2 = *(uint *)(*param_3 + 0x18);
    if (uVar2 < 3) {
      uVar3 = *(undefined4 *)(&UNK_10e498dc0 + (ulong)uVar2 * 4);
      plVar6 = (long *)0x150;
      __Znwm();
      plVar11 = plVar6 + 1;
      *plVar11 = 0;
      plVar6[2] = 0;
      *plVar6 = (long)&PTR_FUN_110ba70c8;
      plVar10 = plVar6 + 3;
      *plVar10 = (long)&PTR_FUN_110ba63b0;
      plVar6[0x27] = 0;
      plVar6[0x28] = 0;
      plVar6[0x26] = (long)&PTR_FUN_110c383b8;
      *(undefined2 *)(plVar6 + 0x29) = 0x100;
      plVar6[5] = 0;
      plVar6[4] = 0;
      plVar6[7] = 0;
      plVar6[6] = 0;
      plVar6[8] = 0x32aaaba7;
      plVar6[10] = 0;
      plVar6[9] = 0;
      plVar6[0xc] = 0;
      plVar6[0xb] = 0;
      plVar6[0xe] = 0;
      plVar6[0xd] = 0;
      plVar6[0x10] = 0;
      plVar6[0xf] = 0;
      plVar6[0x12] = 0;
      plVar6[0x11] = 0;
      plVar6[0x13] = 1;
      FUN_10a0040d0(plVar6 + 0x14,&PTR_PTR_110ba5968);
      plVar6[3] = (long)&PTR_FUN_110ba5830;
      plVar6[0x14] = (long)&PTR_FUN_110ba58b0;
      plVar6[0x26] = (long)&PTR_FUN_110ba5928;
      *(undefined4 *)(plVar6 + 0x19) = 0x7fffffff;
      *(undefined4 *)((long)plVar6 + 0xcc) = uVar3;
      plVar6[0x1a] = 0;
      *(undefined1 *)(plVar6 + 0x1b) = 0;
      *(undefined1 *)(plVar6 + 0x1e) = 0;
      *(undefined1 *)((long)plVar6 + 0xf4) = 0;
      *(undefined1 *)(plVar6 + 0x22) = 0;
      *(undefined1 *)((long)plVar6 + 0x114) = 0;
      *(undefined1 *)(plVar6 + 0x25) = 0;
      if ((*(byte *)(plVar6 + 0x29) & 1) == 0) {
        *(undefined1 *)(plVar6 + 0x29) = 1;
        plVar6[0x28] = param_2;
        if (param_2 != 0) {
          plVar6[0x27] = *(long *)(*(long *)(param_2 + 0x850) + 0x2c);
        }
      }
      FUN_10a5ae998(plVar6[0x17],&PTR_DAT_110b99f08,param_2,plVar6 + 0x14);
      *param_1 = plVar10;
      param_1[1] = plVar6;
      if (plVar6[7] == 0) {
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *plVar11 = *plVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        plVar1 = plVar6 + 2;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        plVar6[6] = (long)plVar10;
        plVar6[7] = (long)plVar6;
      }
      else {
        if (*(long *)(plVar6[7] + 8) != -1) {
          return;
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *plVar11 = *plVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        plVar1 = plVar6 + 2;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        plVar6[6] = (long)plVar10;
        plVar6[7] = (long)plVar6;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      do {
        lVar9 = *plVar11;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *plVar11 = lVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar9 != 0) {
        return;
      }
      (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
      return;
    }
  }
  puVar7 = &UNK_10f63cf1b;
  FUN_10a00946c();
  FUN_10a004174(unaff_x19 + 0xa0,&PTR_PTR_110ba5968);
  FUN_10a110190();
  __ZNSt3__119__shared_weak_countD2Ev();
  __ZdlPv();
  __Unwind_Resume(puVar7);
  FUN_10a003e74();
  FUN_10a003e74(puVar7,&UNK_10f63cf64,0x13);
  puStack_d8 = (undefined *)0x0;
  uStack_d0 = 0xffffffff00000001;
  uStack_c8 = CONCAT44(uStack_c8._4_4_,0xffffffff);
  puStack_c0 = &UNK_10f63ce51;
  uStack_b8 = 0;
  puStack_b0 = &UNK_10f63ce51;
  uStack_a8 = 0;
  uStack_a0 = 0x16f00000000;
  uStack_98 = CONCAT44(uStack_98._4_4_,0xffffffff);
  puVar8 = puVar7;
  FUN_10a1100b8(puVar7,&puStack_d8);
  puStack_d8 = (undefined *)0x0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_b8 = 0xffffffffffffffff;
  puStack_c0 = (undefined *)0x100000019;
  puStack_b0 = &UNK_10f63ce51;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffff;
  puStack_80 = (undefined *)0x0;
  uStack_78 = 0;
  FUN_10a1374a4();
  uStack_d0 = 0;
  uStack_c8 = 0;
  puStack_d8 = &UNK_10f63cf8a;
  uStack_b8 = 0xffffffffffffffff;
  puStack_c0 = (undefined *)0x100000019;
  puStack_b0 = &UNK_10f63ce51;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffff;
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  FUN_10a137674(puVar8,&puStack_d8);
  FUN_10a137954(puVar8);
  func_0x00010a004064(puVar7);
  func_0x00010a004064(puVar7);
  return;
}



/* Entry: 10a10ff94; end: 10a1100b7;  */

void FUN_10a10ff94(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  FUN_10a003e74(param_1,&UNK_10f63ced5,0xc);
  FUN_10a003e74(param_1,&UNK_10f63cf64,0x13);
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  puStack_70 = &UNK_10f63ce51;
  uStack_68 = 0;
  uStack_60 = 0x16f00000000;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  uVar1 = param_1;
  FUN_10a1100b8(param_1,&puStack_98);
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000019;
  puStack_70 = &UNK_10f63ce51;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = (undefined *)0x0;
  uStack_38 = 0;
  FUN_10a1374a4();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f63cf8a;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000019;
  puStack_70 = &UNK_10f63ce51;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f63ce51;
  uStack_38 = 0;
  FUN_10a137674(uVar1,&puStack_98);
  FUN_10a137954(uVar1);
  func_0x00010a004064(param_1);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a1100b8; end: 10a11018f;  */

/* WARNING: Removing unreachable block (ram,0x00010a110150) */

undefined1  [16] FUN_10a1100b8(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f63e092,10);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a1373a8(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a110190; end: 10a110233;  */

undefined8 * FUN_10a110190(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_110ba63b0;
  puVar2 = (undefined8 *)param_1[0xd];
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2;
    if ((undefined8 *)param_1[0xe] != puVar2) {
      puVar1 = (undefined8 *)param_1[0xe] + -7;
      do {
        puVar3 = puVar1 + -2;
        (**(code **)*puVar1)(puVar1);
        puVar1 = puVar1 + -9;
      } while (puVar3 != puVar2);
      puVar1 = (undefined8 *)param_1[0xd];
    }
    param_1[0xe] = puVar2;
    __ZdlPv(puVar1);
  }
  __ZNSt3__15mutexD1Ev(param_1 + 5);
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a110234; end: 10a11029b;  */

void FUN_10a110234(long param_1,long param_2)

{
  undefined1 uStack_29;
  long lStack_28;
  
  if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined4 *)(param_2 + 0x40) = 0x3f800000;
    *(undefined1 *)(param_2 + 0x48) = 1;
  }
  param_2 = param_2 + 0x20;
  lStack_28 = param_1 + 0xb0;
  FUN_10aae6e98(param_2,lStack_28,&UNK_10dd5b8f9,&lStack_28,&uStack_29);
  FUN_10a22c4c8(param_2 + 0x18,param_1 + 0xb4,param_1 + 0xb4);
  return;
}



/* Entry: 10a11029c; end: 10a11064f;  */

void FUN_10a11029c(long param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong *puVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  long lVar11;
  ulong *puVar12;
  ulong *puVar13;
  long lStack_d0;
  long *plStack_c8;
  long lStack_c0;
  long *plStack_b8;
  long lStack_b0;
  long *plStack_a8;
  byte bStack_98;
  ulong *puStack_90;
  ulong *puStack_88;
  ulong *puStack_80;
  ulong uStack_78;
  ulong *puStack_70;
  ulong *puStack_68;
  long lStack_60;
  long **pplStack_58;
  
  puVar9 = (ulong *)(param_1 + 0xb0);
  FUN_10aad301c(&lStack_b0,*(undefined8 *)(param_2 + 0x58));
  if (bStack_98 == 1) {
    if (lStack_b0 != 0) {
      lStack_d0 = lStack_b0;
      plStack_c8 = plStack_a8;
      if (plStack_a8 != (long *)0x0) {
        plVar2 = plStack_a8 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = *plVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      FUN_10a110650(&lStack_c0,&lStack_d0);
      if (lStack_c0 != 0) {
        puStack_90 = (ulong *)0x0;
        puStack_88 = (ulong *)0x0;
        puStack_80 = (ulong *)0x0;
        __ZNSt3__15mutex4lockEv(param_1 + 0x28);
        puVar3 = puStack_88;
        puVar13 = puStack_90;
        puVar10 = *(ulong **)(param_1 + 0x68);
        puVar12 = *(ulong **)(param_1 + 0x70);
        uVar8 = ((long)puVar12 - (long)puVar10 >> 3) * -0x71c71c71c71c71c7;
        uVar1 = (long)puStack_80 - (long)puStack_90 >> 6;
        if (uVar1 <= uVar8 && uVar8 - uVar1 != 0) {
          if (uVar8 >> 0x3a != 0) {
            func_0x00010a12b440();
LAB_10a1105a0:
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10a1105a4);
            (*pcVar7)();
          }
          pplStack_58 = (long **)&puStack_90;
          FUN_10a12b538();
          puStack_70 = (ulong *)((long)puVar3 + (uVar8 - (long)puVar13));
          lStack_60 = uVar8 + (long)puVar9 * 0x40;
          puVar9 = &uStack_78;
          uStack_78 = uVar8;
          puStack_68 = puStack_70;
          FUN_10a12b454(&puStack_90);
          func_0x00010a12b56c(&uStack_78);
          puVar10 = *(ulong **)(param_1 + 0x68);
          puVar12 = *(ulong **)(param_1 + 0x70);
        }
        if (puVar10 != puVar12) {
          puVar10 = puVar10 + 2;
          do {
            puVar13 = puStack_88;
            if (puStack_88 < puStack_80) {
              *puStack_88 = puVar10[-1];
              puVar9 = puVar10;
              (**(code **)(*puVar10 + 0x18))(puStack_88 + 1);
              puVar13 = puVar13 + 8;
            }
            else {
              lVar11 = (long)puStack_88 - (long)puStack_90;
              uVar1 = (lVar11 >> 6) + 1;
              if (uVar1 >> 0x3a != 0) {
                func_0x00010a12b440();
                goto LAB_10a1105a0;
              }
              uVar8 = (long)puStack_80 - (long)puStack_90 >> 5;
              if (uVar8 <= uVar1) {
                uVar8 = uVar1;
              }
              if (0x7fffffffffffffbf < (ulong)((long)puStack_80 - (long)puStack_90)) {
                uVar8 = 0x3ffffffffffffff;
              }
              pplStack_58 = (long **)&puStack_90;
              if (uVar8 == 0) {
                puVar9 = (ulong *)0x0;
              }
              else {
                FUN_10a12b538();
              }
              puVar13 = (ulong *)(uVar8 + lVar11);
              lStack_60 = uVar8 + (long)puVar9 * 0x40;
              *puVar13 = puVar10[-1];
              uStack_78 = uVar8;
              puStack_70 = puVar13;
              puStack_68 = puVar13;
              (**(code **)(*puVar10 + 0x18))(puVar13 + 1,puVar10);
              puStack_68 = puVar13 + 8;
              puVar9 = &uStack_78;
              FUN_10a12b454(&puStack_90);
              puVar13 = puStack_88;
              func_0x00010a12b56c(&uStack_78);
            }
            puVar3 = puVar10 + 7;
            puVar10 = puVar10 + 9;
            puStack_88 = puVar13;
          } while (puVar3 != puVar12);
        }
        __ZNSt3__15mutex6unlockEv(param_1 + 0x28);
        puVar10 = puStack_88;
        for (puVar9 = puStack_90; puVar9 != puVar10; puVar9 = puVar9 + 8) {
          (*(code *)*puVar9)(&lStack_c0,puVar9);
        }
        FUN_10a12b5c0(&puStack_90);
      }
      if (plStack_b8 != (long *)0x0) {
        plVar2 = plStack_b8 + 1;
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
          (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
        }
      }
      plVar2 = plStack_c8;
      if (plStack_c8 != (long *)0x0) {
        plVar4 = plStack_c8 + 1;
        do {
          lVar11 = *plVar4;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar6) {
            *plVar4 = lVar11 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
      if ((bStack_98 & 1) == 0) {
        return;
      }
    }
    if (plStack_a8 != (long *)0x0) {
      plVar2 = plStack_a8 + 1;
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
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
      }
    }
  }
  return;
}



/* Entry: 10a110650; end: 10a1109db;  */

void FUN_10a110650(undefined8 *param_1,long *param_2)

{
  undefined **ppuVar1;
  undefined ***pppuVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  ulong *puVar7;
  code *pcVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined ***pppuVar12;
  undefined ***pppuVar13;
  undefined ***pppuVar14;
  undefined1 *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong *puVar19;
  undefined ***pppuVar20;
  undefined8 uVar21;
  long lStack_620;
  long *plStack_618;
  long lStack_610;
  long *plStack_608;
  long lStack_600;
  long *plStack_5f8;
  byte bStack_5e8;
  ulong *puStack_5e0;
  ulong *puStack_5d8;
  ulong *puStack_5d0;
  undefined **ppuStack_5c8;
  undefined8 *puStack_5c0;
  undefined8 *puStack_5b8;
  undefined **ppuStack_5b0;
  ulong **ppuStack_5a8;
  undefined **ppuStack_5a0;
  code *pcStack_598;
  undefined1 *puStack_588;
  undefined **ppuStack_580;
  undefined **ppuStack_578;
  undefined1 *puStack_570;
  undefined ***pppuStack_568;
  undefined1 *puStack_560;
  code *pcStack_558;
  long lStack_550;
  long lStack_548;
  undefined8 auStack_540 [3];
  undefined4 auStack_528 [18];
  undefined *puStack_4e0;
  undefined8 *apuStack_4d8 [7];
  code *pcStack_4a0;
  undefined **ppuStack_498;
  long lStack_490;
  long lStack_488;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined4 uStack_450;
  undefined1 auStack_440 [72];
  undefined1 auStack_3f8 [96];
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined4 uStack_388;
  undefined4 uStack_384;
  long lStack_380;
  undefined1 auStack_378 [48];
  undefined8 *apuStack_348 [24];
  undefined *puStack_288;
  undefined **appuStack_280 [7];
  code *pcStack_248;
  undefined **ppuStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 auStack_200 [3];
  undefined4 auStack_1e8 [18];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  long lStack_188;
  undefined1 auStack_180 [72];
  long lStack_138;
  undefined1 auStack_130 [96];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [72];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a12add4(&lStack_138,*param_2 + 0x10);
  if (lStack_138 != 0) {
    _memcpy(auStack_3f8,auStack_130,lStack_138 << 5);
  }
  lVar17 = lStack_b8;
  uStack_390 = uStack_c8;
  uStack_398 = uStack_d0;
  uStack_388 = uStack_c0;
  lStack_380 = lStack_b8;
  if (lStack_b8 != 0) {
    _memcpy(auStack_378,auStack_b0,lStack_b8 * 0x18);
  }
  if (lStack_138 != 0) {
    _memcpy(auStack_200,auStack_3f8,lStack_138 << 5);
  }
  uStack_198 = uStack_c8;
  uStack_1a0 = uStack_d0;
  uStack_190 = uStack_c0;
  lStack_188 = lVar17;
  if (lVar17 != 0) {
    _memcpy(auStack_180,auStack_378,lVar17 * 0x18);
  }
  lVar16 = 0;
  do {
    *(undefined8 *)((long)auStack_540 + lVar16) = 0;
    *(undefined8 *)((long)auStack_540 + lVar16 + 8) = 0;
    *(undefined8 *)((long)auStack_528 + lVar16 + -8) = 0;
    *(undefined4 *)((long)auStack_528 + lVar16) = 1;
    lVar16 = lVar16 + 0x20;
  } while (lVar16 != 0x60);
  if (lStack_138 != 0) {
    puVar10 = auStack_200 + 1;
    puVar11 = auStack_540 + 1;
    lVar18 = 0x60;
    lVar16 = lStack_138;
    do {
      if (lVar18 == 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10a110950);
        (*pcVar8)();
      }
      puVar11[-1] = puVar10[-1];
      uVar21 = *puVar10;
      puVar11[1] = puVar10[1];
      *puVar11 = uVar21;
      *(undefined4 *)(puVar11 + 2) = *(undefined4 *)(puVar10 + 2);
      lVar18 = lVar18 + -0x20;
      puVar10 = puVar10 + 4;
      puVar11 = puVar11 + 4;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  lStack_548 = param_2[1];
  lStack_550 = *param_2;
  if (param_2[1] != 0) {
    plVar4 = (long *)(param_2[1] + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar6) {
        *plVar4 = *plVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      lVar17 = lStack_b8;
    } while (cVar5 != '\0');
  }
  puStack_288 = &UNK_1096f3754;
  appuStack_280[0] = &PTR_DAT_110b0b008;
  pcStack_248 = FUN_10a12b35c;
  ppuStack_240 = &PTR_DAT_110ba6a90;
  uStack_458 = uStack_c8;
  uStack_460 = uStack_d0;
  uStack_450 = uStack_c0;
  if (lVar17 != 0) {
    _memcpy(auStack_440,auStack_b0,lVar17 * 0x18);
  }
  puStack_4e0 = &UNK_1096f3754;
  func_0x0001096f3760(apuStack_4d8,appuStack_280);
  pcStack_4a0 = FUN_10a12b35c;
  ppuStack_498 = &PTR_DAT_110ba6a90;
  lStack_488 = lStack_548;
  lStack_490 = lStack_550;
  uStack_238 = 0;
  uStack_230 = 0;
  func_0x0001096f2d54(auStack_3f8,auStack_540,lStack_138,&uStack_460,&puStack_4e0);
  puVar10 = (undefined8 *)0x188;
  __Znwm();
  puVar10[1] = 0;
  puVar10[2] = 0;
  puVar11 = puVar10 + 3;
  *puVar10 = &PTR_DAT_110ba6ac0;
  puVar15 = auStack_3f8;
  func_0x0001096f2390();
  *param_1 = puVar11;
  param_1[1] = puVar10;
  func_0x0001096f2328(auStack_3f8);
  (*(code *)*apuStack_348[0])(apuStack_348);
  (**(code **)CONCAT44(uStack_384,uStack_388))(&uStack_388);
  (*(code *)*ppuStack_498)(&ppuStack_498);
  (*(code *)*apuStack_4d8[0])(apuStack_4d8);
  (*(code *)*ppuStack_240)(&ppuStack_240);
  pppuVar12 = appuStack_280;
  (*(code *)*appuStack_280[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001096f2328(auStack_3f8);
  (*(code *)*apuStack_348[0])(apuStack_348);
  (**(code **)CONCAT44(uStack_384,uStack_388))(&uStack_388);
  (*(code *)*ppuStack_498)(&ppuStack_498);
  (*(code *)*apuStack_4d8[0])(apuStack_4d8);
  (*(code *)*ppuStack_240)(&ppuStack_240);
  (*(code *)*appuStack_280[0])(appuStack_280);
  pppuVar13 = pppuVar12;
  __Unwind_Resume();
  ppuStack_5a0 = &PTR_DAT_110ba6a90;
  pcStack_598 = FUN_10a12b35c;
  pcStack_558 = FUN_10a1109dc;
  pppuVar14 = pppuVar13 + 5;
  puStack_588 = auStack_3f8;
  ppuStack_580 = &puStack_4e0;
  ppuStack_578 = &puStack_288;
  puStack_570 = auStack_3f8;
  pppuStack_568 = pppuVar12;
  puStack_560 = &stack0xfffffffffffffff0;
  FUN_10aad301c(&lStack_600,*(undefined8 *)(puVar15 + 0x58));
  if (bStack_5e8 == 1) {
    if (lStack_600 != 0) {
      lStack_620 = lStack_600;
      plStack_618 = plStack_5f8;
      if (plStack_5f8 != (long *)0x0) {
        plVar4 = plStack_5f8 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar6) {
            *plVar4 = *plVar4 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      FUN_10a110650(&lStack_610,&lStack_620);
      if (lStack_610 != 0) {
        puStack_5e0 = (ulong *)0x0;
        puStack_5d8 = (ulong *)0x0;
        puStack_5d0 = (ulong *)0x0;
        __ZNSt3__15mutex4lockEv(pppuVar13 + -0xc);
        puVar7 = puStack_5d8;
        puVar19 = puStack_5e0;
        pppuVar12 = (undefined ***)pppuVar13[-4];
        pppuVar20 = (undefined ***)pppuVar13[-3];
        ppuVar9 = (undefined **)(((long)pppuVar20 - (long)pppuVar12 >> 3) * -0x71c71c71c71c71c7);
        ppuVar1 = (undefined **)((long)puStack_5d0 - (long)puStack_5e0 >> 6);
        if (ppuVar1 <= ppuVar9 && (long)ppuVar9 - (long)ppuVar1 != 0) {
          if ((ulong)ppuVar9 >> 0x3a != 0) {
            func_0x00010a12b440();
LAB_10a1105a0:
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10a1105a4);
            (*pcVar8)();
          }
          ppuStack_5a8 = &puStack_5e0;
          FUN_10a12b538();
          puStack_5c0 = (undefined8 *)((long)puVar7 + ((long)ppuVar9 - (long)puVar19));
          ppuStack_5b0 = ppuVar9 + (long)pppuVar14 * 8;
          pppuVar14 = &ppuStack_5c8;
          ppuStack_5c8 = ppuVar9;
          puStack_5b8 = puStack_5c0;
          FUN_10a12b454(&puStack_5e0);
          func_0x00010a12b56c(&ppuStack_5c8);
          pppuVar12 = (undefined ***)pppuVar13[-4];
          pppuVar20 = (undefined ***)pppuVar13[-3];
        }
        if (pppuVar12 != pppuVar20) {
          pppuVar12 = pppuVar12 + 2;
          do {
            puVar19 = puStack_5d8;
            if (puStack_5d8 < puStack_5d0) {
              *puStack_5d8 = (ulong)pppuVar12[-1];
              pppuVar14 = pppuVar12;
              (*(code *)(*pppuVar12)[3])(puStack_5d8 + 1);
              puVar19 = puVar19 + 8;
            }
            else {
              lVar17 = (long)puStack_5d8 - (long)puStack_5e0;
              ppuVar1 = (undefined **)((lVar17 >> 6) + 1);
              if ((ulong)ppuVar1 >> 0x3a != 0) {
                func_0x00010a12b440();
                goto LAB_10a1105a0;
              }
              ppuVar9 = (undefined **)((long)puStack_5d0 - (long)puStack_5e0 >> 5);
              if (ppuVar9 <= ppuVar1) {
                ppuVar9 = ppuVar1;
              }
              if (0x7fffffffffffffbf < (ulong)((long)puStack_5d0 - (long)puStack_5e0)) {
                ppuVar9 = (undefined **)0x3ffffffffffffff;
              }
              ppuStack_5a8 = &puStack_5e0;
              if (ppuVar9 == (undefined **)0x0) {
                pppuVar14 = (undefined ***)0x0;
              }
              else {
                FUN_10a12b538();
              }
              puVar10 = (undefined8 *)((long)ppuVar9 + lVar17);
              ppuStack_5b0 = ppuVar9 + (long)pppuVar14 * 8;
              *puVar10 = pppuVar12[-1];
              ppuStack_5c8 = ppuVar9;
              puStack_5c0 = puVar10;
              puStack_5b8 = puVar10;
              (*(code *)(*pppuVar12)[3])(puVar10 + 1,pppuVar12);
              puStack_5b8 = puVar10 + 8;
              pppuVar14 = &ppuStack_5c8;
              FUN_10a12b454(&puStack_5e0);
              puVar19 = puStack_5d8;
              func_0x00010a12b56c(&ppuStack_5c8);
            }
            pppuVar2 = pppuVar12 + 7;
            pppuVar12 = pppuVar12 + 9;
            puStack_5d8 = puVar19;
          } while (pppuVar2 != pppuVar20);
        }
        __ZNSt3__15mutex6unlockEv(pppuVar13 + -0xc);
        puVar7 = puStack_5d8;
        for (puVar19 = puStack_5e0; puVar19 != puVar7; puVar19 = puVar19 + 8) {
          (*(code *)*puVar19)(&lStack_610,puVar19);
        }
        FUN_10a12b5c0(&puStack_5e0);
      }
      if (plStack_608 != (long *)0x0) {
        plVar4 = plStack_608 + 1;
        do {
          lVar17 = *plVar4;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar6) {
            *plVar4 = lVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plStack_608 + 0x10))(plStack_608);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_608);
        }
      }
      plVar4 = plStack_618;
      if (plStack_618 != (long *)0x0) {
        plVar3 = plStack_618 + 1;
        do {
          lVar17 = *plVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *plVar3 = lVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plStack_618 + 0x10))(plStack_618);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      if ((bStack_5e8 & 1) == 0) {
        return;
      }
    }
    if (plStack_5f8 != (long *)0x0) {
      plVar4 = plStack_5f8 + 1;
      do {
        lVar17 = *plVar4;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar6) {
          *plVar4 = lVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plStack_5f8 + 0x10))(plStack_5f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_5f8);
      }
    }
  }
  return;
}



/* Entry: 10a1109dc; end: 10a1109e3;  */

void FUN_10a1109dc(long param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong *puVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  long lVar11;
  ulong *puVar12;
  ulong *puVar13;
  long lStack_d0;
  long *plStack_c8;
  long lStack_c0;
  long *plStack_b8;
  long lStack_b0;
  long *plStack_a8;
  byte bStack_98;
  ulong *puStack_90;
  ulong *puStack_88;
  ulong *puStack_80;
  ulong uStack_78;
  ulong *puStack_70;
  ulong *puStack_68;
  long lStack_60;
  long **pplStack_58;
  
  puVar9 = (ulong *)(param_1 + 0x28);
  FUN_10aad301c(&lStack_b0,*(undefined8 *)(param_2 + 0x58));
  if (bStack_98 == 1) {
    if (lStack_b0 != 0) {
      lStack_d0 = lStack_b0;
      plStack_c8 = plStack_a8;
      if (plStack_a8 != (long *)0x0) {
        plVar2 = plStack_a8 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = *plVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      FUN_10a110650(&lStack_c0,&lStack_d0);
      if (lStack_c0 != 0) {
        puStack_90 = (ulong *)0x0;
        puStack_88 = (ulong *)0x0;
        puStack_80 = (ulong *)0x0;
        __ZNSt3__15mutex4lockEv(param_1 + -0x60);
        puVar3 = puStack_88;
        puVar13 = puStack_90;
        puVar10 = *(ulong **)(param_1 + -0x20);
        puVar12 = *(ulong **)(param_1 + -0x18);
        uVar8 = ((long)puVar12 - (long)puVar10 >> 3) * -0x71c71c71c71c71c7;
        uVar1 = (long)puStack_80 - (long)puStack_90 >> 6;
        if (uVar1 <= uVar8 && uVar8 - uVar1 != 0) {
          if (uVar8 >> 0x3a != 0) {
            func_0x00010a12b440();
LAB_10a1105a0:
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10a1105a4);
            (*pcVar7)();
          }
          pplStack_58 = (long **)&puStack_90;
          FUN_10a12b538();
          puStack_70 = (ulong *)((long)puVar3 + (uVar8 - (long)puVar13));
          lStack_60 = uVar8 + (long)puVar9 * 0x40;
          puVar9 = &uStack_78;
          uStack_78 = uVar8;
          puStack_68 = puStack_70;
          FUN_10a12b454(&puStack_90);
          func_0x00010a12b56c(&uStack_78);
          puVar10 = *(ulong **)(param_1 + -0x20);
          puVar12 = *(ulong **)(param_1 + -0x18);
        }
        if (puVar10 != puVar12) {
          puVar10 = puVar10 + 2;
          do {
            puVar13 = puStack_88;
            if (puStack_88 < puStack_80) {
              *puStack_88 = puVar10[-1];
              puVar9 = puVar10;
              (**(code **)(*puVar10 + 0x18))(puStack_88 + 1);
              puVar13 = puVar13 + 8;
            }
            else {
              lVar11 = (long)puStack_88 - (long)puStack_90;
              uVar1 = (lVar11 >> 6) + 1;
              if (uVar1 >> 0x3a != 0) {
                func_0x00010a12b440();
                goto LAB_10a1105a0;
              }
              uVar8 = (long)puStack_80 - (long)puStack_90 >> 5;
              if (uVar8 <= uVar1) {
                uVar8 = uVar1;
              }
              if (0x7fffffffffffffbf < (ulong)((long)puStack_80 - (long)puStack_90)) {
                uVar8 = 0x3ffffffffffffff;
              }
              pplStack_58 = (long **)&puStack_90;
              if (uVar8 == 0) {
                puVar9 = (ulong *)0x0;
              }
              else {
                FUN_10a12b538();
              }
              puVar13 = (ulong *)(uVar8 + lVar11);
              lStack_60 = uVar8 + (long)puVar9 * 0x40;
              *puVar13 = puVar10[-1];
              uStack_78 = uVar8;
              puStack_70 = puVar13;
              puStack_68 = puVar13;
              (**(code **)(*puVar10 + 0x18))(puVar13 + 1,puVar10);
              puStack_68 = puVar13 + 8;
              puVar9 = &uStack_78;
              FUN_10a12b454(&puStack_90);
              puVar13 = puStack_88;
              func_0x00010a12b56c(&uStack_78);
            }
            puVar3 = puVar10 + 7;
            puVar10 = puVar10 + 9;
            puStack_88 = puVar13;
          } while (puVar3 != puVar12);
        }
        __ZNSt3__15mutex6unlockEv(param_1 + -0x60);
        puVar10 = puStack_88;
        for (puVar9 = puStack_90; puVar9 != puVar10; puVar9 = puVar9 + 8) {
          (*(code *)*puVar9)(&lStack_c0,puVar9);
        }
        FUN_10a12b5c0(&puStack_90);
      }
      if (plStack_b8 != (long *)0x0) {
        plVar2 = plStack_b8 + 1;
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
          (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
        }
      }
      plVar2 = plStack_c8;
      if (plStack_c8 != (long *)0x0) {
        plVar4 = plStack_c8 + 1;
        do {
          lVar11 = *plVar4;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar6) {
            *plVar4 = lVar11 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
      if ((bStack_98 & 1) == 0) {
        return;
      }
    }
    if (plStack_a8 != (long *)0x0) {
      plVar2 = plStack_a8 + 1;
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
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
      }
    }
  }
  return;
}



/* Entry: 10a1109e4; end: 10a110a63;  */

bool FUN_10a1109e4(long param_1)

{
  long lVar1;
  long lVar2;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0x68);
  lVar2 = *(long *)(param_1 + 0x70);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x28);
  return lVar1 != lVar2;
}



/* Entry: 10a110a64; end: 10a110af7;  */

void FUN_10a110a64(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x10);
  if (lVar1 != 0) {
    *(undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18) + 8) =
         *(undefined8 *)(*(long *)(lVar1 + 0x850) + 0x2c);
  }
  return;
}



/* Entry: 10a110af8; end: 10a110b83;  */

void FUN_10a110af8(undefined8 param_1)

{
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  
  FUN_10a003e74(param_1,&UNK_10f63ced5,0xc);
  uStack_60 = 0xffffffff00000001;
  uStack_68 = 0;
  uStack_58 = 0xffffffff;
  puStack_50 = &UNK_10f63ce51;
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_2c = 0xffffffff0000016f;
  FUN_10a110b84(param_1,&uStack_68);
  FUN_10a137b4c();
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a110b84; end: 10a110c5b;  */

/* WARNING: Removing unreachable block (ram,0x00010a110c1c) */

undefined1  [16] FUN_10a110b84(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f63e09d,5);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a137a50(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a110c5c; end: 10a110ca7;  */

undefined1  [16] FUN_10a110c5c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 10;
  auVar1._0_8_ = &UNK_10f63e0a3;
  return auVar1;
}



/* Entry: 10a110ca8; end: 10a110d77;  */

void FUN_10a110ca8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  FUN_10a003e74(param_1,&UNK_10f63ced5,0xc);
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f63ce51;
  uStack_78 = 0;
  puStack_70 = &UNK_10f63ce51;
  uStack_68 = 0;
  uStack_60 = 0x16f00000000;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  uVar1 = param_1;
  FUN_10a110d78(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f63cfc4;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000019;
  puStack_70 = &UNK_10f63ce51;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f63ce51;
  uStack_38 = 0;
  FUN_10a137d04();
  FUN_10a138480(uVar1);
  func_0x00010a004064(param_1);
  return;
}


