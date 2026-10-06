/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a053980; end: 10a053abb;  */

void FUN_10a053980(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  func_0x000109898610(&lStack_40);
  if (lStack_40 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    ___dynamic_cast(lStack_40,&PTR_DAT_110b178e0,&PTR_DAT_110c46558,0x10);
    if (lStack_40 == 0) {
      plVar5 = &lStack_50;
    }
    else {
      plStack_48 = plStack_38;
      plVar5 = &lStack_40;
      lStack_50 = lStack_40;
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    if (lStack_50 == 0) {
      func_0x00010988bd28(&UNK_10f685500);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a053a9c);
      (*pcVar4)();
    }
    uStack_60 = param_2;
    uStack_58 = param_3;
    FUN_10a053abc(param_1,&lStack_50,&uStack_60);
    plVar5 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  if (plStack_38 != (long *)0x0) {
    plVar5 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return;
}



/* Entry: 10a053abc; end: 10a053e3f;  */

void FUN_10a053abc(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  undefined **ppuVar7;
  undefined *extraout_x8;
  long lVar8;
  undefined *puVar9;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  FUN_10a0533bc(&plStack_50,*param_2);
  if (plStack_50 == (long *)0x0) {
    lVar8 = *param_3;
    func_0x0001098849a4(&lStack_40,lVar8,param_3[1]);
    plVar5 = (long *)0x30;
    __Znwm();
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_DAT_110b174d8;
    plStack_60 = plVar5 + 3;
    if ((int)lStack_40 == 3) {
      plVar5[3] = lVar8;
      *(undefined4 *)(plVar5 + 4) = 3;
      plVar5[5] = (long)plStack_38;
    }
    else if ((int)lStack_40 == 2) {
      plVar5[3] = lVar8;
      *(undefined4 *)(plVar5 + 4) = 2;
      *(undefined1 *)(plVar5 + 5) = plStack_38._0_1_;
    }
    else if ((int)lStack_40 < 4) {
      plVar5[3] = lVar8;
      *(int *)(plVar5 + 4) = (int)lStack_40;
    }
    else {
      plVar5[3] = lVar8;
      *(int *)(plVar5 + 4) = (int)lStack_40;
      plVar5[5] = (long)plStack_38;
    }
    lVar8 = *param_2;
    lVar2 = param_2[1];
    if (lVar2 != 0) {
      plVar6 = (long *)(lVar2 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar6 = (long *)0x90;
    plStack_58 = plVar5;
    lStack_40 = lVar8;
    plStack_38 = (long *)lVar2;
    __Znwm();
    plVar5 = plStack_48;
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110b9fe30;
    plStack_50 = plVar6 + 3;
    *plStack_50 = lVar8;
    lStack_40 = 0;
    plStack_38 = (long *)0x0;
    plVar6[4] = lVar2;
    plVar6[5] = 0;
    plVar6[6] = 0;
    plVar6[7] = 0x32aaaba7;
    plVar6[9] = 0;
    plVar6[8] = 0;
    plVar6[0xb] = 0;
    plVar6[10] = 0;
    plVar6[0xd] = 0;
    plVar6[0xc] = 0;
    plVar6[0xf] = 0;
    plVar6[0xe] = 0;
    plVar6[0x11] = 0;
    plVar6[0x10] = 0;
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
        lVar8 = *plStack_48;
        plStack_48 = plVar6;
        (**(code **)(lVar8 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        plVar6 = plStack_48;
      }
    }
    plStack_48 = plVar6;
    plVar5 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar6 = plStack_38 + 1;
      do {
        lVar8 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    func_0x00010a04a7fc(plStack_50 + 2,&plStack_60);
    lStack_40 = *param_2;
    *param_1 = lStack_40;
    param_1[1] = (long)plStack_48;
    if (plStack_48 == (long *)0x0) {
      plStack_38 = (long *)0x0;
    }
    else {
      plVar5 = plStack_48 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *plVar5 = *plVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plStack_38 = plStack_48;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *plVar5 = *plVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    func_0x00010a053e8c(plStack_50,&lStack_40);
    plVar5 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar6 = plStack_38 + 1;
      do {
        lVar8 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    func_0x00010a053ee8(*param_2,&plStack_50);
    ppuVar7 = &PTR___tlv_bootstrap_11340df48;
    (*(code *)PTR___tlv_bootstrap_11340df48)(*(undefined8 *)(*param_2 + 0x50));
    puVar9 = *ppuVar7;
    if (extraout_x8 != (undefined *)0x0) {
      puVar9 = extraout_x8;
    }
    FUN_10aa89b3c(*(undefined8 *)(puVar9 + 0x870),&plStack_50);
    plVar5 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar6 = plStack_58 + 1;
      do {
        lVar8 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  else {
    FUN_10a053e40(&lStack_40);
    param_1[1] = (long)plStack_38;
    *param_1 = lStack_40;
  }
  plVar5 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar6 = plStack_48 + 1;
    do {
      lVar8 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return;
}



/* Entry: 10a053e40; end: 10a053f43;  */

void FUN_10a053e40(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  __ZNSt3__15mutex4lockEv(param_2 + 0x20);
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = *(long *)(param_2 + 0x68);
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *(undefined8 *)(param_2 + 0x60);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_2 + 0x20);
  return;
}



/* Entry: 10a053f44; end: 10a053f53;  */

void FUN_10a053f44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9fe30;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a053f54; end: 10a053f73;  */

void FUN_10a053f54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9fe30;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a053f74; end: 10a053f7f;  */

void FUN_10a053f74(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lStack_60;
  code *pcStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  plVar9 = (long *)(param_1 + 0x28);
  if (*plVar9 != 0) {
    ppuVar5 = &PTR___tlv_bootstrap_11340df48;
    (*(code *)PTR___tlv_bootstrap_11340df48)();
    if (*ppuVar5 == (undefined *)0x0) {
      puVar6 = *(undefined8 **)(param_1 + 0x88);
    }
    else {
      puVar6 = *(undefined8 **)(param_1 + 0x88);
      if (*(undefined8 **)(*ppuVar5 + 0x870) == puVar6) goto LAB_10aa88a0c;
    }
    FUN_10a4620c0();
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    plVar2 = *(long **)(param_1 + 0x30);
    *plVar9 = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    plVar10 = (long *)puVar6[2];
    if (plVar10 == (long *)0x0) {
      puVar7 = (undefined8 *)0x20;
      __Znwm();
      *puVar7 = uVar1;
      puVar7[1] = plVar2;
      puVar7[3] = 0x10aaab4fc;
      pcStack_58 = FUN_10aaab4c4;
      puStack_50 = puVar7;
      puStack_48 = puVar6;
      (**(code **)*puVar6)(puVar6,&pcStack_58);
    }
    else {
      lStack_60 = 0;
      (**(code **)(*plVar10 + 0x28))(plVar10,0,&lStack_60);
      if (lStack_60 != 0) {
        __ZNSt13exception_ptrD1Ev(&lStack_60);
        if (plVar2 != (long *)0x0) {
          plVar10 = plVar2 + 1;
          do {
            lVar8 = *plVar10;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar4) {
              *plVar10 = lVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
          }
        }
        goto LAB_10aa88a0c;
      }
      puVar7 = (undefined8 *)0x28;
      __Znwm();
      *puVar7 = uVar1;
      puVar7[1] = plVar2;
      puVar7[3] = FUN_10aaab4e0;
      puVar7[4] = plVar10;
      pcStack_58 = FUN_10aaab490;
      puStack_50 = puVar7;
      puStack_48 = puVar6;
      (**(code **)*puVar6)(puVar6,&pcStack_58);
      __ZNSt13exception_ptrD1Ev(&lStack_60);
    }
    lStack_60 = 0;
    __ZNSt13exception_ptrD1Ev(&lStack_60);
  }
LAB_10aa88a0c:
  if (*(long *)(param_1 + 0x80) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x38);
  func_0x00010a004dac(plVar9);
  func_0x00010a0536d4(param_1 + 0x18);
  return;
}



/* Entry: 10a053f80; end: 10a053fd7;  */

ulong FUN_10a053f80(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a052828(param_1,*param_2,FUN_10a053fd8,FUN_10a0540c0);
  }
  return param_1;
}



/* Entry: 10a053fd8; end: 10a0540bf;  */

void FUN_10a053fd8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a052bc4(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar4 = plVar4 + 0x28;
  FUN_10a814778(plVar4,&stack0xffffffffffffffb6,&UNK_10dd5b8f9,&stack0xffffffffffffffb8,
                &stack0xffffffffffffffb7);
  FUN_10a052e5c(param_1,param_2,plVar4 + 3);
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



/* Entry: 10a0540c0; end: 10a054177;  */

void FUN_10a0540c0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a05372c(param_1,param_2,FUN_10a009bc8,0,param_3,param_4,param_5);
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



/* Entry: 10a054178; end: 10a054233;  */

void FUN_10a054178(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f633480,0x1c);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a054234);
  (*pcVar4)();
}



/* Entry: 10a054234; end: 10a05431b;  */

void FUN_10a054234(undefined8 param_1,long param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    if (param_3[1] == 0) {
      return;
    }
    param_3 = (long *)*param_3;
  }
  else if (*(char *)((long)param_3 + 0x17) == '\0') {
    return;
  }
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_78 = *(undefined8 *)(param_2 + 0x20);
  uStack_80 = *(undefined8 *)(param_2 + 0x18);
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = *(undefined8 *)(param_2 + 0x48);
  uStack_48 = *(undefined4 *)(param_2 + 0x50);
  uStack_40 = 0;
  uStack_38 = 0;
  puStack_98 = (undefined *)param_3;
  FUN_10a054394(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f63474c;
  uStack_78 = *(undefined8 *)(param_2 + 0x20);
  uStack_80 = *(undefined8 *)(param_2 + 0x18);
  puStack_70 = &UNK_10e4929db;
  uStack_68 = 0xcd;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = *(undefined8 *)(param_2 + 0x48);
  uStack_48 = *(undefined4 *)(param_2 + 0x50);
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_a8 = param_4;
  uStack_a0 = param_5;
  FUN_10a0543e4(param_1,&puStack_98,&uStack_a8);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a05431c; end: 10a054393;  */

void FUN_10a05431c(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  lVar1 = *(long *)(param_1 + 0x200);
  while (lVar1 != 0) {
    func_0x00010a054784(auStack_48,param_1 + 0x1e8);
    for (plVar2 = (long *)lStack_38; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      (*(code *)plVar2[2])(param_1);
    }
    FUN_10a0547f0(auStack_48);
    lVar1 = *(long *)(param_1 + 0x200);
  }
  return;
}



/* Entry: 10a054394; end: 10a0543e3;  */

ulong FUN_10a054394(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  FUN_10a0050a8(param_1 + 0x168);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x0001098948a4(param_1,*param_2);
  }
  return param_1;
}



/* Entry: 10a0543e4; end: 10a05443b;  */

ulong FUN_10a0543e4(ulong param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a05443c(param_1,*param_2,param_3);
  }
  return param_1;
}



/* Entry: 10a05443c; end: 10a0544d7;  */

void FUN_10a05443c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined ***pppuVar2;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  undefined **ppuVar5;
  code **ppcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 **ppuVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  int aiStack_190 [2];
  undefined **ppuStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined8 uStack_170;
  undefined8 **ppuStack_168;
  undefined1 **ppuStack_160;
  code *pcStack_158;
  undefined8 *puStack_150;
  code *pcStack_148;
  undefined8 *apuStack_140 [7];
  code *pcStack_108;
  undefined8 *apuStack_100 [7];
  long lStack_c8;
  undefined1 *puStack_80;
  code *pcStack_78;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = param_3[1];
  uStack_58 = *param_3;
  pcStack_68 = FUN_10a0546b0;
  ppuStack_60 = &PTR_FUN_110b9fac0;
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0544d4);
    (*pcVar1)();
  }
  lVar10 = *(long *)(param_1 + 0x18) + -8;
  ppcVar6 = &pcStack_68;
  uVar8 = 0;
  FUN_10a0544d8();
  pppuVar2 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  ppuVar9 = &puStack_150;
  pcStack_78 = FUN_10a0544d8;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar12 = pppuVar2[1];
  puStack_80 = &stack0xfffffffffffffff0;
  if (((ulong)ppuVar12[0x3c] & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0545fc);
    (*pcVar1)();
  }
  ppuVar11 = *pppuVar2;
  pcStack_148 = *ppcVar6;
  (**(code **)(ppcVar6[1] + 0x10))(apuStack_140,ppcVar6 + 1);
  pcStack_108 = pcStack_148;
  (*(code *)apuStack_140[0][2])(apuStack_100,apuStack_140);
  (**(code **)(*ppuVar11 + 0x2a0))(&puStack_150,ppuVar11,ppuVar12 + 0x23,uVar8,&pcStack_108);
  (*(code *)*apuStack_100[0])(apuStack_100);
  ppuVar12 = ppuVar11;
  uVar7 = param_2;
  FUN_10a054628(lVar10,ppuVar11,param_2);
  if (puStack_150 != (undefined8 *)0x0) {
    (**(code **)*puStack_150)();
  }
  ppuVar3 = apuStack_140;
  (*(code *)*apuStack_140[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar12 == 0) {
    __Unwind_Resume(ppuVar3);
  }
  (*(code *)*apuStack_100[0])(apuStack_100);
  ppuVar4 = ppuVar3;
  func_0x000104bd46a0(ppuVar3);
  pcStack_158 = FUN_10a054628;
  aiStack_190[0] = 7;
  ppuVar5 = ppuVar12;
  uStack_180 = uVar8;
  ppuStack_178 = ppuVar11;
  uStack_170 = param_2;
  ppuStack_168 = ppuVar3;
  ppuStack_160 = &puStack_80;
  (**(code **)(*ppuVar12 + 0x98))(ppuVar12,*ppuVar9);
  ppuStack_188 = ppuVar5;
  FUN_10a005308(ppuVar4,ppuVar12,uVar7,aiStack_190);
  if ((3 < aiStack_190[0]) && (ppuStack_188 != (undefined **)0x0)) {
    (**(code **)*ppuStack_188)();
  }
  return;
}



/* Entry: 10a0544d8; end: 10a054627;  */

void FUN_10a0544d8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined8 **ppuVar2;
  undefined8 **ppuVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 **ppuVar7;
  long *plVar8;
  long lVar9;
  int aiStack_120 [2];
  long *plStack_118;
  undefined8 uStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  undefined8 **ppuStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 *apuStack_d0 [7];
  undefined8 uStack_98;
  undefined8 *apuStack_90 [7];
  long lStack_58;
  
  ppuVar7 = &puStack_e0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = param_1[1];
  if ((*(byte *)(lVar9 + 0x1e0) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0545fc);
    (*pcVar1)();
  }
  plVar8 = (long *)*param_1;
  uStack_d8 = *param_3;
  (**(code **)(param_3[1] + 0x10))(apuStack_d0,param_3 + 1);
  uStack_98 = uStack_d8;
  (*(code *)apuStack_d0[0][2])(apuStack_90,apuStack_d0);
  (**(code **)(*plVar8 + 0x2a0))(&puStack_e0,plVar8,lVar9 + 0x118,param_4,&uStack_98);
  (*(code *)*apuStack_90[0])(apuStack_90);
  plVar5 = plVar8;
  uVar6 = param_2;
  FUN_10a054628(param_5,plVar8,param_2);
  if (puStack_e0 != (undefined8 *)0x0) {
    (**(code **)*puStack_e0)();
  }
  ppuVar2 = apuStack_d0;
  (*(code *)*apuStack_d0[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if ((int)plVar5 == 0) {
    __Unwind_Resume(ppuVar2);
  }
  (*(code *)*apuStack_90[0])(apuStack_90);
  ppuVar3 = ppuVar2;
  func_0x000104bd46a0(ppuVar2);
  pcStack_e8 = FUN_10a054628;
  aiStack_120[0] = 7;
  plVar4 = plVar5;
  uStack_110 = param_4;
  plStack_108 = plVar8;
  uStack_100 = param_2;
  ppuStack_f8 = ppuVar2;
  puStack_f0 = &stack0xfffffffffffffff0;
  (**(code **)(*plVar5 + 0x98))(plVar5,*ppuVar7);
  plStack_118 = plVar4;
  FUN_10a005308(ppuVar3,plVar5,uVar6,aiStack_120);
  if ((3 < aiStack_120[0]) && (plStack_118 != (long *)0x0)) {
    (**(code **)*plStack_118)();
  }
  return;
}



/* Entry: 10a054628; end: 10a0546af;  */

void FUN_10a054628(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  int aiStack_40 [2];
  long *plStack_38;
  
  aiStack_40[0] = 7;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x98))(param_2,*param_4);
  plStack_38 = plVar1;
  FUN_10a005308(param_1,param_2,param_3,aiStack_40);
  if ((3 < aiStack_40[0]) && (plStack_38 != (long *)0x0)) {
    (**(code **)*plStack_38)();
  }
  return;
}



/* Entry: 10a0546b0; end: 10a054767;  */

void FUN_10a0546b0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

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
  FUN_10a052e3c(param_5);
  (**(code **)(*param_2 + 0x128))
            (param_1 + 2,param_2,*(undefined8 *)(param_6 + 0x10),*(undefined8 *)(param_6 + 0x18));
  *param_1 = 6;
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



/* Entry: 10a054768; end: 10a0547ef;  */

void FUN_10a054768(void)

{
  return;
}



/* Entry: 10a0547f0; end: 10a054837;  */

long * FUN_10a0547f0(long *param_1)

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



/* Entry: 10a054838; end: 10a05485b;  */

void FUN_10a054838(void)

{
  undefined1 uStack_11;
  
  func_0x000107c2b060(&uStack_11);
  return;
}



/* Entry: 10a05485c; end: 10a054917;  */

void FUN_10a05485c(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (param_1[3] != 0) {
    plVar1 = (long *)param_1[2];
    while (plVar1 != (long *)0x0) {
      plVar1 = (long *)*plVar1;
      __ZdlPv();
    }
    param_1[2] = 0;
    lVar2 = param_1[1];
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*param_1 + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    param_1[3] = 0;
  }
  return;
}



/* Entry: 10a054918; end: 10a054a7b;  */

void FUN_10a054918(long *param_1,long *param_2)

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



/* Entry: 10a054a7c; end: 10a054b9b;  */

void FUN_10a054a7c(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 10a054b9c; end: 10a054bdb;  */

void FUN_10a054b9c(long param_1)

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



/* Entry: 10a054bdc; end: 10a054c17;  */

long FUN_10a054bdc(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110b9d998);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a054c18; end: 10a054c2b;  */

void FUN_10a054c18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a054c2c; end: 10a054c4b;  */

void FUN_10a054c2c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b9d9b8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a054c4c; end: 10a054c5b;  */

void FUN_10a054c4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a054c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a054c5c; end: 10a054dab;  */

long FUN_10a054c5c(long param_1)

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



/* Entry: 10a054dac; end: 10a054ebb;  */

/* WARNING: Possible PIC construction at 0x00010a0551f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a0551f4) */
/* WARNING: Removing unreachable block (ram,0x00010a055214) */
/* WARNING: Removing unreachable block (ram,0x00010a055224) */
/* WARNING: Removing unreachable block (ram,0x00010a05524c) */
/* WARNING: Removing unreachable block (ram,0x00010a055258) */
/* WARNING: Removing unreachable block (ram,0x00010a055274) */
/* WARNING: Removing unreachable block (ram,0x00010a055318) */
/* WARNING: Removing unreachable block (ram,0x00010a055324) */
/* WARNING: Removing unreachable block (ram,0x00010a05532c) */
/* WARNING: Removing unreachable block (ram,0x00010a055338) */
/* WARNING: Removing unreachable block (ram,0x00010a055344) */
/* WARNING: Removing unreachable block (ram,0x00010a05534c) */
/* WARNING: Removing unreachable block (ram,0x00010a055358) */
/* WARNING: Removing unreachable block (ram,0x00010a055270) */
/* WARNING: Removing unreachable block (ram,0x00010a055240) */

void FUN_10a054dac(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined ***pppuVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long *plVar12;
  long *plVar13;
  undefined ***pppuVar14;
  undefined *puVar15;
  undefined *puVar16;
  long *extraout_x8;
  undefined *puVar17;
  ulong uVar18;
  long *plVar19;
  long lVar20;
  undefined **ppuVar21;
  undefined1 *unaff_x23;
  undefined *puVar22;
  long *unaff_x24;
  undefined *puVar23;
  long *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 ****ppppuVar24;
  long *plStack_150;
  ulong uStack_148;
  int iStack_140;
  undefined8 *puStack_138;
  char cStack_130;
  int aiStack_128 [2];
  undefined8 *puStack_120;
  ulong uStack_118;
  int iStack_110;
  undefined8 *puStack_108;
  char cStack_100;
  undefined1 auStack_f8 [24];
  byte bStack_e0;
  long lStack_d8;
  undefined8 ***pppuStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  long lStack_38;
  
  pppuVar14 = &ppuStack_80;
  pppuVar6 = &ppuStack_80;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_1[1] + 0x1e0) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a054e90);
    (*pcVar5)();
  }
  plVar19 = (long *)*param_1;
  ppuVar21 = &puStack_78;
  puStack_78 = &UNK_10989e1b0;
  ppuStack_70 = &PTR_DAT_110b17718;
  uStack_68 = param_3;
  (**(code **)(*plVar19 + 0x2a0))(&ppuStack_80,plVar19,param_1[1] + 0x118,param_4,&puStack_78);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  plVar12 = plVar19;
  plVar13 = param_2;
  FUN_10a054628(param_5);
  ppuVar8 = ppuStack_80;
  if (ppuStack_80 != (undefined **)0x0) {
    (**(code **)*ppuStack_80)();
    ppuVar8 = ppuStack_80;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if ((int)plVar12 == 0) {
    __Unwind_Resume(ppuVar8);
  }
  (*(code *)*ppuStack_70)(&ppuStack_70);
  ppuVar9 = ppuVar8;
  func_0x000104bd46a0();
  pcStack_88 = FUN_10a054ebc;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar10 = ppuVar9;
  pppuStack_90 = (undefined8 ***)&stack0xfffffffffffffff0;
  (**(code **)(*ppuVar9 + 0x58))();
  if (ppuVar10[0x59] < (undefined *)0x8) {
    ppuVar10[(long)(ppuVar10[0x59] + 0x4e)] = ppuVar10[0x5a];
    ppuVar10[0x59] = ppuVar10[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(ppuVar10 + 0x4b);
  }
  ppuVar11 = ppuVar9;
  FUN_10a0551fc(ppuVar9,plVar12);
  FUN_10a055264(pppuVar14);
  aiStack_128[0] = 0;
  plVar12 = (long *)aiStack_128;
  if (pppuVar14 != (undefined ***)0x0) {
    plVar12 = plVar13;
  }
  func_0x00010a0580bc(auStack_f8,ppuVar9,plVar12);
  plVar12 = (long *)aiStack_128;
  if ((undefined1 *)0x1 < pppuVar14) {
    plVar12 = plVar13 + 2;
  }
  func_0x00010a058028(&uStack_148,ppuVar9,plVar12);
  uStack_118 = uStack_118 & 0xffffffffffffff00;
  cStack_100 = '\0';
  if (cStack_130 == '\x01') {
    uStack_118 = uStack_148;
    iStack_110 = iStack_140;
    if (iStack_140 == 3) {
      puStack_108 = puStack_138;
    }
    else if (iStack_140 == 2) {
      puStack_108 = (undefined8 *)CONCAT71(puStack_108._1_7_,puStack_138._0_1_);
    }
    else if (3 < iStack_140) {
      puStack_108 = puStack_138;
      puStack_138 = (undefined8 *)0x0;
    }
    iStack_140 = 0;
    cStack_100 = '\x01';
  }
  FUN_10a00bcd0(&plStack_150,ppuVar11,auStack_f8,&uStack_118);
  if (((cStack_100 == '\x01') && (3 < iStack_110)) && (puStack_108 != (undefined8 *)0x0)) {
    (**(code **)*puStack_108)();
  }
  if (((cStack_130 == '\x01') && (3 < iStack_140)) && (puStack_138 != (undefined8 *)0x0)) {
    (**(code **)*puStack_138)();
  }
  if (2 < (ulong)bStack_e0) {
LAB_10a0551bc:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a0551c0);
    (*pcVar5)();
  }
  (*(code *)(&PTR_FUN_110b9ebd0)[bStack_e0])(auStack_f8);
  if ((3 < aiStack_128[0]) && (puStack_120 != (undefined8 *)0x0)) {
    (**(code **)*puStack_120)();
  }
  FUN_10a05528c(extraout_x8,ppuVar9,&plStack_150);
  plVar12 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_150 + 1);
    do {
      uVar18 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar18 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar18 & 0x1fffffffc) == 4) {
      do {
        uVar18 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar18 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar18 - 1 == 0) {
        (**(code **)(*plStack_150 + 8))();
        plVar12 = plStack_150;
      }
    }
  }
  ppppuVar24 = (undefined8 ****)pppuStack_90;
  pcVar5 = pcStack_88;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
    ___stack_chk_fail();
    if (((cStack_100 == '\x01') && (3 < iStack_110)) && (puStack_108 != (undefined8 *)0x0)) {
      (**(code **)*puStack_108)();
    }
    if (((cStack_130 == '\x01') && (3 < iStack_140)) && (puStack_138 != (undefined8 *)0x0)) {
      (**(code **)*puStack_138)();
    }
    if (2 < (ulong)bStack_e0) goto LAB_10a0551bc;
    (*(code *)(&PTR_FUN_110b9ebd0)[bStack_e0])(auStack_f8);
    if ((3 < aiStack_128[0]) && (puStack_120 != (undefined8 *)0x0)) {
      (**(code **)*puStack_120)();
    }
    pppuVar6 = (undefined ***)&plStack_150;
    ppuVar8 = ppuVar10;
    param_2 = plVar12;
    plVar19 = extraout_x8;
    ppuVar21 = ppuVar11;
    unaff_x23 = (undefined1 *)pppuVar14;
    unaff_x24 = plVar13;
    unaff_x25 = (long *)aiStack_128;
    ppppuVar24 = &pppuStack_90;
    pcVar5 = (code *)0x10a0551f4;
  }
  ppuVar9 = ppuVar10 + 0x4b;
  puVar15 = ppuVar10[0x59];
  puVar16 = puVar15 + -1;
  ppuVar10[0x59] = puVar16;
  if (puVar16 < (undefined *)0x8) {
    puVar15 = ppuVar9[(long)(puVar15 + 2)];
    if (ppuVar10[0x5a] == puVar15) {
      return;
    }
  }
  else {
    puVar15 = *(undefined **)(ppuVar10[0x57] + -8);
    ppuVar10[0x57] = ppuVar10[0x57] + -8;
    if (ppuVar10[0x5a] == puVar15) {
      return;
    }
  }
  *(undefined8 *)((long)pppuVar6 + -0x60) = unaff_x28;
  *(undefined8 *)((long)pppuVar6 + -0x58) = unaff_x27;
  *(undefined8 *)((long)pppuVar6 + -0x50) = unaff_x26;
  *(long **)((long)pppuVar6 + -0x48) = unaff_x25;
  *(long **)((long)pppuVar6 + -0x40) = unaff_x24;
  *(undefined1 **)((long)pppuVar6 + -0x38) = unaff_x23;
  *(undefined ***)((long)pppuVar6 + -0x30) = ppuVar21;
  *(long **)((long)pppuVar6 + -0x28) = plVar19;
  *(long **)((long)pppuVar6 + -0x20) = param_2;
  *(undefined ***)((long)pppuVar6 + -0x18) = ppuVar8;
  *(undefined8 *****)((long)pppuVar6 + -0x10) = ppppuVar24;
  *(code **)((long)pppuVar6 + -8) = pcVar5;
  puVar16 = *ppuVar9;
  puVar17 = ppuVar10[0x4c];
  lVar20 = (long)puVar17 - (long)puVar16;
  puVar23 = (undefined *)(lVar20 >> 4);
  if (puVar23 < puVar15) {
    uVar18 = (long)puVar15 - (long)puVar23;
    puVar22 = ppuVar10[0x4d];
    if ((ulong)((long)puVar22 - (long)puVar17 >> 4) < uVar18) {
      if ((ulong)puVar15 >> 0x3c == 0) {
        puVar17 = (undefined *)((long)puVar22 - (long)puVar16 >> 3);
        if (puVar17 <= puVar15) {
          puVar17 = puVar15;
        }
        if (0x7fffffffffffffef < (ulong)((long)puVar22 - (long)puVar16)) {
          puVar17 = (undefined *)0xfffffffffffffff;
        }
        *(undefined ***)((long)pppuVar6 + -0x68) = ppuVar9;
        if ((ulong)puVar17 >> 0x3c == 0) {
          lVar7 = (long)puVar17 << 4;
          __Znwm();
          lVar2 = lVar7 + lVar20;
          _bzero(lVar2,uVar18 * 0x10);
          puVar23 = (undefined *)(lVar2 + (long)puVar23 * -0x10);
          _memcpy(puVar23,puVar16,lVar20);
          *ppuVar9 = puVar23;
          ppuVar10[0x4c] = (undefined *)(lVar2 + uVar18 * 0x10);
          ppuVar10[0x4d] = (undefined *)(lVar7 + (long)puVar17 * 0x10);
          *(undefined **)((long)pppuVar6 + -0x78) = puVar16;
          *(undefined **)((long)pppuVar6 + -0x70) = puVar22;
          *(undefined **)((long)pppuVar6 + -0x88) = puVar16;
          *(undefined **)((long)pppuVar6 + -0x80) = puVar16;
          func_0x00010988c1b8((undefined1 *)((long)pppuVar6 + -0x88));
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar5)();
    }
    _bzero(puVar17,uVar18 * 0x10);
    ppuVar10[0x4c] = puVar17 + uVar18 * 0x10;
  }
  else if (puVar15 < puVar23) {
    while (puVar17 != puVar16 + (long)puVar15 * 0x10) {
      puVar17 = puVar17 + -0x10;
      func_0x00010988c204(puVar17);
    }
    ppuVar10[0x4c] = puVar16 + (long)puVar15 * 0x10;
  }
code_r0x00010988c138:
  ppuVar10[0x5a] = puVar15;
  return;
}



/* Entry: 10a054ebc; end: 10a0551fb;  */

/* WARNING: Possible PIC construction at 0x00010a0551f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a0551f4) */
/* WARNING: Removing unreachable block (ram,0x00010a055214) */
/* WARNING: Removing unreachable block (ram,0x00010a055224) */
/* WARNING: Removing unreachable block (ram,0x00010a05524c) */
/* WARNING: Removing unreachable block (ram,0x00010a055258) */
/* WARNING: Removing unreachable block (ram,0x00010a055274) */
/* WARNING: Removing unreachable block (ram,0x00010a055318) */
/* WARNING: Removing unreachable block (ram,0x00010a055324) */
/* WARNING: Removing unreachable block (ram,0x00010a05532c) */
/* WARNING: Removing unreachable block (ram,0x00010a055338) */
/* WARNING: Removing unreachable block (ram,0x00010a055344) */
/* WARNING: Removing unreachable block (ram,0x00010a05534c) */
/* WARNING: Removing unreachable block (ram,0x00010a055358) */
/* WARNING: Removing unreachable block (ram,0x00010a055270) */
/* WARNING: Removing unreachable block (ram,0x00010a055240) */

void FUN_10a054ebc(undefined8 param_1,long *param_2,undefined8 param_3,int *param_4,ulong param_5)

{
  undefined1 *puVar1;
  int *piVar2;
  ulong *puVar3;
  int *piVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  long lVar15;
  long *unaff_x22;
  long lVar16;
  long lVar17;
  ulong unaff_x23;
  long lVar18;
  int *unaff_x24;
  ulong uVar19;
  int *unaff_x25;
  ulong uVar20;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  long *plStack_d0;
  ulong uStack_c8;
  int iStack_c0;
  undefined8 *puStack_b8;
  char cStack_b0;
  int aiStack_a8 [2];
  undefined8 *puStack_a0;
  ulong uStack_98;
  int iStack_90;
  undefined8 *puStack_88;
  char cStack_80;
  undefined1 auStack_78 [24];
  byte bStack_60;
  long lStack_58;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  plVar10 = param_2;
  FUN_10a0551fc(param_2,param_3);
  FUN_10a055264(param_5);
  aiStack_a8[0] = 0;
  piVar2 = aiStack_a8;
  piVar4 = piVar2;
  if (param_5 != 0) {
    piVar4 = param_4;
  }
  func_0x00010a0580bc(auStack_78,param_2,piVar4);
  piVar4 = piVar2;
  if (1 < param_5) {
    piVar4 = param_4 + 4;
  }
  func_0x00010a058028(&uStack_c8,param_2,piVar4);
  uStack_98 = uStack_98 & 0xffffffffffffff00;
  cStack_80 = '\0';
  if (cStack_b0 == '\x01') {
    uStack_98 = uStack_c8;
    iStack_90 = iStack_c0;
    if (iStack_c0 == 3) {
      puStack_88 = puStack_b8;
    }
    else if (iStack_c0 == 2) {
      puStack_88 = (undefined8 *)CONCAT71(puStack_88._1_7_,puStack_b8._0_1_);
    }
    else if (3 < iStack_c0) {
      puStack_88 = puStack_b8;
      puStack_b8 = (undefined8 *)0x0;
    }
    iStack_c0 = 0;
    cStack_80 = '\x01';
  }
  FUN_10a00bcd0(&plStack_d0,plVar10,auStack_78,&uStack_98);
  if (((cStack_80 == '\x01') && (3 < iStack_90)) && (puStack_88 != (undefined8 *)0x0)) {
    (**(code **)*puStack_88)();
  }
  if (((cStack_b0 == '\x01') && (3 < iStack_c0)) && (puStack_b8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_b8)();
  }
  if (2 < (ulong)bStack_60) {
LAB_10a0551bc:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10a0551c0);
    (*pcVar7)();
  }
  (*(code *)(&PTR_FUN_110b9ebd0)[bStack_60])(auStack_78);
  if ((3 < aiStack_a8[0]) && (puStack_a0 != (undefined8 *)0x0)) {
    (**(code **)*puStack_a0)();
  }
  FUN_10a05528c(param_1,param_2,&plStack_d0);
  plVar11 = plStack_d0;
  if (plStack_d0 != (long *)0x0) {
    puVar3 = (ulong *)(plStack_d0 + 1);
    do {
      uVar14 = *puVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar6) {
        *puVar3 = uVar14 - 4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((uVar14 & 0x1fffffffc) == 4) {
      do {
        uVar14 = *puVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar6) {
          *puVar3 = uVar14 - 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (uVar14 - 1 == 0) {
        (**(code **)(*plStack_d0 + 8))();
        plVar11 = plStack_d0;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    if (((cStack_80 == '\x01') && (3 < iStack_90)) && (puStack_88 != (undefined8 *)0x0)) {
      (**(code **)*puStack_88)();
    }
    if (((cStack_b0 == '\x01') && (3 < iStack_c0)) && (puStack_b8 != (undefined8 *)0x0)) {
      (**(code **)*puStack_b8)();
    }
    if (2 < (ulong)bStack_60) goto LAB_10a0551bc;
    (*(code *)(&PTR_FUN_110b9ebd0)[bStack_60])(auStack_78);
    if ((3 < aiStack_a8[0]) && (puStack_a0 != (undefined8 *)0x0)) {
      (**(code **)*puStack_a0)();
    }
    unaff_x30 = 0x10a0551f4;
    register0x00000008 = (BADSPACEBASE *)&plStack_d0;
    unaff_x19 = plVar9;
    unaff_x20 = plVar11;
    unaff_x21 = param_1;
    unaff_x22 = plVar10;
    unaff_x23 = param_5;
    unaff_x24 = param_4;
    unaff_x25 = piVar2;
    unaff_x29 = puVar1;
  }
  plVar10 = plVar9 + 0x4b;
  lVar12 = plVar9[0x59];
  uVar14 = lVar12 - 1;
  plVar9[0x59] = uVar14;
  if (uVar14 < 8) {
    uVar14 = plVar10[lVar12 + 2];
    if (plVar9[0x5a] == uVar14) {
      return;
    }
  }
  else {
    uVar14 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar14) {
      return;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(int **)((long)register0x00000008 + -0x48) = unaff_x25;
  *(int **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  lVar12 = *plVar10;
  lVar17 = plVar9[0x4c];
  lVar15 = lVar17 - lVar12;
  uVar19 = lVar15 >> 4;
  if (uVar19 < uVar14) {
    uVar20 = uVar14 - uVar19;
    lVar18 = plVar9[0x4d];
    if ((ulong)(lVar18 - lVar17 >> 4) < uVar20) {
      if (uVar14 >> 0x3c == 0) {
        uVar13 = lVar18 - lVar12 >> 3;
        if (uVar13 <= uVar14) {
          uVar13 = uVar14;
        }
        if (0x7fffffffffffffef < (ulong)(lVar18 - lVar12)) {
          uVar13 = 0xfffffffffffffff;
        }
        *(long **)((long)register0x00000008 + -0x68) = plVar10;
        if (uVar13 >> 0x3c == 0) {
          lVar8 = uVar13 << 4;
          __Znwm();
          lVar17 = lVar8 + lVar15;
          _bzero(lVar17,uVar20 * 0x10);
          lVar16 = lVar17 + uVar19 * -0x10;
          _memcpy(lVar16,lVar12,lVar15);
          *plVar10 = lVar16;
          plVar9[0x4c] = lVar17 + uVar20 * 0x10;
          plVar9[0x4d] = lVar8 + uVar13 * 0x10;
          *(long *)((long)register0x00000008 + -0x78) = lVar12;
          *(long *)((long)register0x00000008 + -0x70) = lVar18;
          *(long *)((long)register0x00000008 + -0x88) = lVar12;
          *(long *)((long)register0x00000008 + -0x80) = lVar12;
          func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar7)();
    }
    _bzero(lVar17,uVar20 * 0x10);
    plVar9[0x4c] = lVar17 + uVar20 * 0x10;
  }
  else if (uVar14 < uVar19) {
    lVar12 = lVar12 + uVar14 * 0x10;
    while (lVar17 != lVar12) {
      lVar17 = lVar17 + -0x10;
      func_0x00010988c204(lVar17);
    }
    plVar9[0x4c] = lVar12;
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar14;
  return;
}



/* Entry: 10a0551fc; end: 10a055263;  */

void FUN_10a0551fc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  int aiStack_60 [2];
  undefined8 *puStack_58;
  
  lVar1 = param_1;
  func_0x000109898688();
  if (lVar1 != 0) {
    FUN_10a053854(param_1,lVar1);
    if ((param_1 != 0) && (___dynamic_cast(), param_1 != 0)) {
      return;
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar2 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar2 - 1U < 2) {
    return;
  }
  plVar3 = (long *)0x2;
  puVar4 = (undefined8 *)0x1;
  FUN_10a052ee0(2,1,puVar2);
  puStack_70 = puVar4;
  plStack_68 = plVar3;
  FUN_10a05536c(&puStack_58);
  aiStack_60[0] = 7;
  (**(code **)(*plVar3 + 0x30))(&puStack_78,plVar3);
  func_0x0001098843c0(&puStack_70,&puStack_78,plVar3,&UNK_10f634758);
  (**(code **)(*plVar3 + 0x2b0))(extraout_x8,plVar3,&puStack_70,aiStack_60,1);
  if (puStack_70 != (undefined8 *)0x0) {
    (**(code **)*puStack_70)();
  }
  if (puStack_78 != (undefined8 *)0x0) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_60[0]) && (puStack_58 != (undefined8 *)0x0)) {
    (**(code **)*puStack_58)();
  }
  return;
}



/* Entry: 10a055264; end: 10a05528b;  */

void FUN_10a055264(undefined8 param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  long *plStack_48;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  if ((int)param_1 - 1U < 2) {
    return;
  }
  plVar1 = (long *)0x2;
  puVar2 = (undefined8 *)0x1;
  FUN_10a052ee0(2,1,param_1);
  puStack_50 = puVar2;
  plStack_48 = plVar1;
  FUN_10a05536c(&puStack_38);
  aiStack_40[0] = 7;
  (**(code **)(*plVar1 + 0x30))(&puStack_58,plVar1);
  func_0x0001098843c0(&puStack_50,&puStack_58,plVar1,&UNK_10f634758);
  (**(code **)(*plVar1 + 0x2b0))(extraout_x8,plVar1,&puStack_50,aiStack_40,1);
  if (puStack_50 != (undefined8 *)0x0) {
    (**(code **)*puStack_50)();
  }
  if (puStack_58 != (undefined8 *)0x0) {
    (**(code **)*puStack_58)();
  }
  if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
    (**(code **)*puStack_38)();
  }
  return;
}



/* Entry: 10a05528c; end: 10a05536b;  */

void FUN_10a05528c(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  long *plStack_38;
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  puStack_40 = param_3;
  plStack_38 = param_2;
  FUN_10a05536c(&puStack_28,param_2,2,&puStack_40);
  aiStack_30[0] = 7;
  (**(code **)(*param_2 + 0x30))(&puStack_48,param_2);
  func_0x0001098843c0(&puStack_40,&puStack_48,param_2,&UNK_10f634758);
  (**(code **)(*param_2 + 0x2b0))(param_1,param_2,&puStack_40,aiStack_30,1);
  if (puStack_40 != (undefined8 *)0x0) {
    (**(code **)*puStack_40)();
  }
  if (puStack_48 != (undefined8 *)0x0) {
    (**(code **)*puStack_48)();
  }
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a05536c; end: 10a055487;  */

void FUN_10a05536c(undefined8 param_1,long *param_2,long param_3,undefined8 *param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 **ppuVar4;
  code **ppcVar5;
  undefined4 *extraout_x8;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int aiStack_120 [2];
  undefined8 *puStack_118;
  undefined8 uStack_110;
  int iStack_108;
  undefined8 *puStack_100;
  int aiStack_f8 [2];
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  int iStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_48;
  
  ppuVar4 = &puStack_90;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*param_2 + 0xb0))(&puStack_90,param_2,0,0);
  pcStack_88 = FUN_10a055488;
  ppuStack_80 = &PTR_FUN_110b9ebb8;
  uStack_70 = param_4[1];
  uStack_78 = *param_4;
  ppcVar5 = &pcStack_88;
  (**(code **)(*param_2 + 0x2a0))(param_1,param_2,&puStack_90,param_3,ppcVar5);
  (*(code *)*ppuStack_80)(&ppuStack_80);
  puVar2 = puStack_90;
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
    puVar2 = puStack_90;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar4 == 0) {
    __Unwind_Resume(puVar2);
  }
  else {
    (*(code *)*ppuStack_80)(&ppuStack_80);
  }
  func_0x000104bd46a0(puVar2);
  uVar1 = *(undefined8 *)(param_6 + 0x10);
  plVar3 = *(long **)(param_6 + 0x18);
  (**(code **)(*plVar3 + 0x58))(plVar3,puVar2,ppuVar4,param_3,ppcVar5);
  lVar6 = plVar3[0x47];
  uVar8 = *(undefined8 *)(param_6 + 0x18);
  func_0x0001098849a4(aiStack_f8,uVar8,param_3);
  iStack_e0 = aiStack_f8[0];
  if (aiStack_f8[0] == 3) {
    puStack_d8 = puStack_f0;
  }
  else if (aiStack_f8[0] == 2) {
    puStack_d8 = (undefined8 *)CONCAT71(puStack_d8._1_7_,puStack_f0._0_1_);
  }
  else if (3 < aiStack_f8[0]) {
    puStack_d8 = puStack_f0;
    puStack_f0 = (undefined8 *)0x0;
  }
  aiStack_f8[0] = 0;
  uVar7 = *(undefined8 *)(param_6 + 0x18);
  uStack_e8 = uVar8;
  func_0x0001098849a4(aiStack_120,uVar7,param_3 + 0x10);
  iStack_108 = aiStack_120[0];
  if (aiStack_120[0] == 3) {
    puStack_100 = puStack_118;
  }
  else if (aiStack_120[0] == 2) {
    puStack_100 = (undefined8 *)CONCAT71(puStack_100._1_7_,puStack_118._0_1_);
  }
  else if (3 < aiStack_120[0]) {
    puStack_100 = puStack_118;
    puStack_118 = (undefined8 *)0x0;
  }
  aiStack_120[0] = 0;
  uStack_110 = uVar7;
  FUN_10a0556d8(uVar1,lVar6,&uStack_e8,&uStack_110);
  if ((3 < iStack_108) && (puStack_100 != (undefined8 *)0x0)) {
    (**(code **)*puStack_100)();
  }
  if ((3 < aiStack_120[0]) && (puStack_118 != (undefined8 *)0x0)) {
    (**(code **)*puStack_118)();
  }
  if ((3 < iStack_e0) && (puStack_d8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_d8)();
  }
  if ((3 < aiStack_f8[0]) && (puStack_f0 != (undefined8 *)0x0)) {
    (**(code **)*puStack_f0)();
  }
  *extraout_x8 = 0;
  return;
}



/* Entry: 10a055488; end: 10a0554a3;  */

void FUN_10a055488(undefined4 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int aiStack_90 [2];
  undefined8 *puStack_88;
  undefined8 uStack_80;
  int iStack_78;
  undefined8 *puStack_70;
  int aiStack_68 [2];
  undefined8 *puStack_60;
  undefined8 uStack_58;
  int iStack_50;
  undefined8 *puStack_48;
  
  uVar1 = *(undefined8 *)(param_6 + 0x10);
  plVar2 = *(long **)(param_6 + 0x18);
  (**(code **)(*plVar2 + 0x58))(plVar2,param_2,param_3,param_4,param_5);
  lVar3 = plVar2[0x47];
  uVar5 = *(undefined8 *)(param_6 + 0x18);
  func_0x0001098849a4(aiStack_68,uVar5,param_4);
  iStack_50 = aiStack_68[0];
  if (aiStack_68[0] == 3) {
    puStack_48 = puStack_60;
  }
  else if (aiStack_68[0] == 2) {
    puStack_48 = (undefined8 *)CONCAT71(puStack_48._1_7_,puStack_60._0_1_);
  }
  else if (3 < aiStack_68[0]) {
    puStack_48 = puStack_60;
    puStack_60 = (undefined8 *)0x0;
  }
  aiStack_68[0] = 0;
  uVar4 = *(undefined8 *)(param_6 + 0x18);
  uStack_58 = uVar5;
  func_0x0001098849a4(aiStack_90,uVar4,param_4 + 0x10);
  iStack_78 = aiStack_90[0];
  if (aiStack_90[0] == 3) {
    puStack_70 = puStack_88;
  }
  else if (aiStack_90[0] == 2) {
    puStack_70 = (undefined8 *)CONCAT71(puStack_70._1_7_,puStack_88._0_1_);
  }
  else if (3 < aiStack_90[0]) {
    puStack_70 = puStack_88;
    puStack_88 = (undefined8 *)0x0;
  }
  aiStack_90[0] = 0;
  uStack_80 = uVar4;
  FUN_10a0556d8(uVar1,lVar3,&uStack_58,&uStack_80);
  if ((3 < iStack_78) && (puStack_70 != (undefined8 *)0x0)) {
    (**(code **)*puStack_70)();
  }
  if ((3 < aiStack_90[0]) && (puStack_88 != (undefined8 *)0x0)) {
    (**(code **)*puStack_88)();
  }
  if ((3 < iStack_50) && (puStack_48 != (undefined8 *)0x0)) {
    (**(code **)*puStack_48)();
  }
  if ((3 < aiStack_68[0]) && (puStack_60 != (undefined8 *)0x0)) {
    (**(code **)*puStack_60)();
  }
  *param_1 = 0;
  return;
}



/* Entry: 10a0554a4; end: 10a0556d7;  */

void FUN_10a0554a4(undefined4 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int aiStack_90 [2];
  undefined8 *puStack_88;
  undefined8 uStack_80;
  int iStack_78;
  undefined8 *puStack_70;
  int aiStack_68 [2];
  undefined8 *puStack_60;
  undefined8 uStack_58;
  int iStack_50;
  undefined8 *puStack_48;
  
  uVar1 = *param_2;
  plVar2 = (long *)param_2[1];
  (**(code **)(*plVar2 + 0x58))();
  lVar3 = plVar2[0x47];
  uVar5 = param_2[1];
  func_0x0001098849a4(aiStack_68,uVar5,param_5);
  iStack_50 = aiStack_68[0];
  if (aiStack_68[0] == 3) {
    puStack_48 = puStack_60;
  }
  else if (aiStack_68[0] == 2) {
    puStack_48 = (undefined8 *)CONCAT71(puStack_48._1_7_,puStack_60._0_1_);
  }
  else if (3 < aiStack_68[0]) {
    puStack_48 = puStack_60;
    puStack_60 = (undefined8 *)0x0;
  }
  aiStack_68[0] = 0;
  uVar4 = param_2[1];
  uStack_58 = uVar5;
  func_0x0001098849a4(aiStack_90,uVar4,param_5 + 0x10);
  iStack_78 = aiStack_90[0];
  if (aiStack_90[0] == 3) {
    puStack_70 = puStack_88;
  }
  else if (aiStack_90[0] == 2) {
    puStack_70 = (undefined8 *)CONCAT71(puStack_70._1_7_,puStack_88._0_1_);
  }
  else if (3 < aiStack_90[0]) {
    puStack_70 = puStack_88;
    puStack_88 = (undefined8 *)0x0;
  }
  aiStack_90[0] = 0;
  uStack_80 = uVar4;
  FUN_10a0556d8(uVar1,lVar3,&uStack_58,&uStack_80);
  if ((3 < iStack_78) && (puStack_70 != (undefined8 *)0x0)) {
    (**(code **)*puStack_70)();
  }
  if ((3 < aiStack_90[0]) && (puStack_88 != (undefined8 *)0x0)) {
    (**(code **)*puStack_88)();
  }
  if ((3 < iStack_50) && (puStack_48 != (undefined8 *)0x0)) {
    (**(code **)*puStack_48)();
  }
  if ((3 < aiStack_68[0]) && (puStack_60 != (undefined8 *)0x0)) {
    (**(code **)*puStack_60)();
  }
  *param_1 = 0;
  return;
}



/* Entry: 10a0556d8; end: 10a05589b;  */

void FUN_10a0556d8(long *param_1,undefined8 *param_2,undefined8 *param_3,long *param_4)

{
  long *plVar1;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined1 uStack_61;
  undefined8 uStack_60;
  int iStack_58;
  undefined4 uStack_54;
  long *plStack_50;
  long lStack_48;
  int iStack_40;
  long *plStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*param_1 == 0) {
    FUN_10a055988(&uStack_60,&uStack_61,*param_4,&UNK_10f634760,0x34);
    param_2 = &uStack_60;
    FUN_10a05589c(param_4,param_2);
    if ((int)uStack_60 < 4) goto LAB_10a05582c;
    plVar1 = (long *)CONCAT44(uStack_54,iStack_58);
  }
  else {
    uStack_60 = *param_3;
    iStack_58 = *(int *)(param_3 + 1);
    if (iStack_58 == 3) {
      plStack_50 = (long *)param_3[2];
    }
    else if (iStack_58 == 2) {
      plStack_50 = (long *)CONCAT71(plStack_50._1_7_,*(undefined1 *)(param_3 + 2));
    }
    else if (3 < iStack_58) {
      plStack_50 = (long *)param_3[2];
      param_3[2] = 0;
    }
    *(undefined4 *)(param_3 + 1) = 0;
    lStack_48 = *param_4;
    iStack_40 = (int)param_4[1];
    if (iStack_40 == 3) {
      plStack_38 = (long *)param_4[2];
    }
    else if (iStack_40 == 2) {
      plStack_38 = (long *)CONCAT71(plStack_38._1_7_,(char)param_4[2]);
    }
    else if (3 < iStack_40) {
      plStack_38 = (long *)param_4[2];
      param_4[2] = 0;
    }
    *(undefined4 *)(param_4 + 1) = 0;
    FUN_10a055abc(param_1,param_2,&uStack_60);
    if ((3 < iStack_40) && (param_1 = plStack_38, plStack_38 != (long *)0x0)) {
      (**(code **)*plStack_38)();
    }
    param_4 = param_1;
    plVar1 = plStack_50;
    if (iStack_58 < 4) goto LAB_10a05582c;
  }
  param_4 = plVar1;
  if (param_4 != (long *)0x0) {
    (**(code **)*param_4)();
  }
LAB_10a05582c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    if ((3 < (int)uStack_60) && ((undefined8 *)CONCAT44(uStack_54,iStack_58) != (undefined8 *)0x0))
    {
      (*(code *)**(undefined8 **)CONCAT44(uStack_54,iStack_58))();
    }
    __Unwind_Resume();
    func_0x000109884c0c(&puStack_a0,param_4 + 1,*param_4);
    func_0x000109884820(&puStack_98,&puStack_a0,*param_4);
    if (puStack_a0 != (undefined8 *)0x0) {
      (**(code **)*puStack_a0)();
    }
    (**(code **)(*(long *)*param_4 + 0x30))(&puStack_a0);
    FUN_10a055d38(*param_4,&puStack_a0,&puStack_98,param_2);
    if (puStack_a0 != (undefined8 *)0x0) {
      (**(code **)*puStack_a0)();
    }
    if (puStack_98 != (undefined8 *)0x0) {
      (**(code **)*puStack_98)();
    }
    return;
  }
  return;
}



/* Entry: 10a05589c; end: 10a055987;  */

void FUN_10a05589c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  func_0x000109884c0c(&puStack_30,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_28,&puStack_30,*param_1);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_30);
  FUN_10a055d38(*param_1,&puStack_30,&puStack_28,param_2);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  if (puStack_28 != (undefined8 *)0x0) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a055988; end: 10a055abb;  */

void FUN_10a055988(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puStack_68;
  long *plStack_60;
  int iStack_58;
  undefined8 *puStack_50;
  undefined1 auStack_48 [8];
  int iStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_4;
  uStack_28 = param_5;
  (**(code **)(*param_3 + 0x30))(&puStack_68,param_3);
  puStack_50 = puStack_68;
  puStack_68 = (undefined8 *)0x0;
  iStack_58 = 7;
  plStack_60 = param_3;
  FUN_10a055e1c(auStack_48,&plStack_60,&DAT_10f685520);
  FUN_10a055f9c(param_1,auStack_48,&uStack_30);
  if ((3 < iStack_40) && (puStack_38 != (undefined8 *)0x0)) {
    (**(code **)*puStack_38)();
  }
  if ((3 < iStack_58) && (puStack_50 != (undefined8 *)0x0)) {
    (**(code **)*puStack_50)();
  }
  if (puStack_68 != (undefined8 *)0x0) {
    (**(code **)*puStack_68)();
  }
  return;
}



/* Entry: 10a055abc; end: 10a055cd7;  */

void FUN_10a055abc(long *param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  code *pcVar5;
  ulong uVar6;
  long *plVar7;
  long *plStack_40;
  undefined1 auStack_38 [8];
  
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 1 & 1) == 0) {
    FUN_10a05668c(&plStack_40,param_2,auStack_38,param_1,param_3);
    if (plStack_40 == (long *)0x0) {
      return;
    }
    puVar1 = (ulong *)(plStack_40 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) != 4) {
      return;
    }
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar6 - 1 != 0) {
      return;
    }
    pcVar5 = *(code **)(*plStack_40 + 8);
    plVar7 = plStack_40;
  }
  else {
    plVar7 = (long *)*param_1;
    *param_1 = 0;
    if (((uint)plVar7[2] >> 5 & 1) == 0) {
      if ((((uint)plVar7[2] >> 1 & 1) == 0) || (((uint)plVar7[2] >> 5 & 1) != 0)) {
        if (((uint)plVar7[2] >> 5 & 1) == 0) {
          puVar4 = (undefined8 *)0x10;
          ___cxa_allocate_exception();
          __ZNSt13runtime_errorC2EPKc();
          *puVar4 = &PTR_DAT_110ae85c0;
          ___cxa_throw(puVar4,&PTR_DAT_110ae8598,&DAT_1092af9d8);
        }
        else {
          __ZNSt13exception_ptrC1ERKS_(auStack_38,plVar7 + 0x12);
          func_0x0001092af97c(auStack_38);
        }
LAB_10a055c60:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a055c64);
        (*pcVar5)();
      }
      if ((*(byte *)(plVar7 + 0x15) & 1) == 0) goto LAB_10a055c60;
      FUN_10a0560a4(param_3,plVar7 + 0x13);
    }
    else {
      __ZNSt13exception_ptrC1ERKS_(auStack_38,plVar7 + 0x12);
      FUN_10a056190(param_3 + 0x18,auStack_38);
      __ZNSt13exception_ptrD1Ev(auStack_38);
    }
    puVar1 = (ulong *)(plVar7 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) != 4) {
      return;
    }
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar6 - 1 != 0) {
      return;
    }
    pcVar5 = *(code **)(*plVar7 + 8);
  }
  (*pcVar5)(plVar7);
  return;
}



/* Entry: 10a055cd8; end: 10a055d37;  */

long FUN_10a055cd8(long param_1)

{
  if ((3 < *(int *)(param_1 + 0x20)) && (*(undefined8 **)(param_1 + 0x28) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x28))();
  }
  if ((3 < *(int *)(param_1 + 8)) && (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x10))();
  }
  return param_1;
}



/* Entry: 10a055d38; end: 10a055e1b;  */

void FUN_10a055d38(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  func_0x0001098849a4(aiStack_70,param_1,param_4);
  uStack_38 = 1;
  piStack_40 = aiStack_70;
  (**(code **)(*param_1 + 0x58))(param_1);
  ppuStack_48 = &piStack_40;
  uStack_60 = param_3;
  plStack_58 = param_1;
  uStack_50 = param_2;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  return;
}



/* Entry: 10a055e1c; end: 10a055f9b;  */

void FUN_10a055e1c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  int aiStack_50 [2];
  undefined8 uStack_48;
  
  uVar2 = *param_2;
  func_0x000109884c0c(&puStack_58,param_2 + 1,uVar2);
  plVar3 = (long *)*param_2;
  uVar1 = param_3;
  _strlen(param_3);
  (**(code **)(*plVar3 + 0xb8))(&puStack_60,plVar3,param_3,uVar1);
  (**(code **)(*plVar3 + 0x1a0))(aiStack_50,plVar3,&puStack_58,&puStack_60);
  *param_1 = uVar2;
  *(int *)(param_1 + 1) = aiStack_50[0];
  if (aiStack_50[0] == 3) {
    param_1[2] = uStack_48;
  }
  else if (aiStack_50[0] == 2) {
    *(undefined1 *)(param_1 + 2) = (undefined1)uStack_48;
  }
  else if (3 < aiStack_50[0]) {
    param_1[2] = uStack_48;
    uStack_48 = 0;
  }
  aiStack_50[0] = 0;
  if (puStack_60 != (undefined8 *)0x0) {
    (**(code **)*puStack_60)();
  }
  if (puStack_58 != (undefined8 *)0x0) {
    (**(code **)*puStack_58)();
  }
  return;
}



/* Entry: 10a055f9c; end: 10a0560a3;  */

void FUN_10a055f9c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  int aiStack_78 [2];
  undefined8 *puStack_70;
  int aiStack_68 [2];
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  long *plStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  (**(code **)(*(long *)*param_2 + 0x128))(&puStack_60,(long *)*param_2,*param_3,param_3[1]);
  plVar1 = (long *)*param_2;
  aiStack_68[0] = 6;
  uStack_38 = 1;
  piStack_40 = aiStack_68;
  (**(code **)(*plVar1 + 0x58))(plVar1);
  ppuStack_48 = &piStack_40;
  puStack_58 = param_2 + 1;
  plStack_50 = plVar1;
  func_0x00010989824c(aiStack_78);
  func_0x0001098849a4(param_1,plVar1,aiStack_78);
  if ((3 < aiStack_78[0]) && (puStack_70 != (undefined8 *)0x0)) {
    (**(code **)*puStack_70)();
  }
  if ((3 < aiStack_68[0]) && (puStack_60 != (undefined8 *)0x0)) {
    (**(code **)*puStack_60)();
  }
  return;
}



/* Entry: 10a0560a4; end: 10a05618f;  */

void FUN_10a0560a4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  func_0x000109884c0c(&puStack_30,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_28,&puStack_30,*param_1);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_30);
  FUN_10a0562e8(*param_1,&puStack_30,&puStack_28,param_2);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  if (puStack_28 != (undefined8 *)0x0) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a056190; end: 10a0562e7;  */

void FUN_10a056190(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  
  func_0x0001092af97c(param_2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0561b8);
  (*pcVar1)();
}



/* Entry: 10a0562e8; end: 10a0563c7;  */

void FUN_10a0562e8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  FUN_10a0563c8(aiStack_70,param_1,param_4);
  uStack_38 = 1;
  piStack_40 = aiStack_70;
  (**(code **)(*param_1 + 0x58))(param_1);
  ppuStack_48 = &piStack_40;
  uStack_60 = param_3;
  plStack_58 = param_1;
  uStack_50 = param_2;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  return;
}



/* Entry: 10a0563c8; end: 10a0564bb;  */

void FUN_10a0563c8(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_38 = &PTR_DAT_110c352e0;
  func_0x000109899de4(param_1,&uStack_30,&ppuStack_38,0,0);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a0564bc; end: 10a0565a7;  */

void FUN_10a0564bc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  func_0x000109884c0c(&puStack_30,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_28,&puStack_30,*param_1);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_30);
  FUN_10a0565a8(*param_1,&puStack_30,&puStack_28,param_2);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  if (puStack_28 != (undefined8 *)0x0) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a0565a8; end: 10a05668b;  */

void FUN_10a0565a8(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  func_0x0001098849a4(aiStack_70,param_1,param_4 + 8);
  uStack_38 = 1;
  piStack_40 = aiStack_70;
  (**(code **)(*param_1 + 0x58))(param_1);
  ppuStack_48 = &piStack_40;
  uStack_60 = param_3;
  plStack_58 = param_1;
  uStack_50 = param_2;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  return;
}



/* Entry: 10a05668c; end: 10a056c2f;  */

void FUN_10a05668c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  puVar6 = (undefined8 *)0xe8;
  __Znwm();
  *puVar6 = FUN_10a088fd4;
  puVar6[1] = FUN_10a089438;
  func_0x0001092ba17c(puVar6 + 2);
  lVar9 = puVar6[7];
  if (lVar9 != 0) {
    plVar8 = (long *)(lVar9 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lVar9;
  uVar10 = *param_4;
  *param_4 = 0;
  uVar11 = *param_5;
  puVar6[9] = uVar10;
  puVar6[10] = uVar11;
  iVar2 = *(int *)(param_5 + 1);
  *(int *)(puVar6 + 0xb) = iVar2;
  if (iVar2 == 3) {
    puVar6[0xc] = param_5[2];
  }
  else if (iVar2 == 2) {
    *(undefined1 *)(puVar6 + 0xc) = *(undefined1 *)(param_5 + 2);
  }
  else if (3 < iVar2) {
    puVar6[0xc] = param_5[2];
    param_5[2] = 0;
  }
  *(undefined4 *)(param_5 + 1) = 0;
  puVar6[0xd] = param_5[3];
  iVar2 = *(int *)(param_5 + 4);
  *(int *)(puVar6 + 0xe) = iVar2;
  if (iVar2 == 3) {
    puVar6[0xf] = param_5[5];
  }
  else if (iVar2 == 2) {
    *(undefined1 *)(puVar6 + 0xf) = *(undefined1 *)(param_5 + 5);
  }
  else if (3 < iVar2) {
    puVar6[0xf] = param_5[5];
    param_5[5] = 0;
  }
  *(undefined4 *)(param_5 + 4) = 0;
  puVar6[0x18] = param_2;
  *(undefined1 *)(puVar6 + 0x19) = 0;
  *(undefined1 *)(puVar6 + 0x1c) = 0;
  puVar7 = puVar6 + 0x18;
  func_0x0001092ba064(puVar7,puVar6);
  if (((ulong)puVar7 & 1) == 0) {
    puVar6[0x1b] = puVar6[9];
    puVar6[9] = 0;
    puVar6[0x11] = puVar6[10];
    iVar2 = *(int *)(puVar6 + 0xb);
    *(int *)(puVar6 + 0x12) = iVar2;
    if (iVar2 == 3) {
      puVar6[0x13] = puVar6[0xc];
    }
    else if (iVar2 == 2) {
      *(undefined1 *)(puVar6 + 0x13) = *(undefined1 *)(puVar6 + 0xc);
    }
    else if (3 < iVar2) {
      puVar6[0x13] = puVar6[0xc];
      puVar6[0xc] = 0;
    }
    *(undefined4 *)(puVar6 + 0xb) = 0;
    puVar6[0x14] = puVar6[0xd];
    iVar2 = *(int *)(puVar6 + 0xe);
    *(int *)(puVar6 + 0x15) = iVar2;
    if (iVar2 == 3) {
      puVar6[0x16] = puVar6[0xf];
    }
    else if (iVar2 == 2) {
      *(undefined1 *)(puVar6 + 0x16) = *(undefined1 *)(puVar6 + 0xf);
    }
    else if (3 < iVar2) {
      puVar6[0x16] = puVar6[0xf];
      puVar6[0xf] = 0;
    }
    *(undefined4 *)(puVar6 + 0xe) = 0;
    FUN_10a056c30(puVar6 + 0x1a,(long)puVar6 + 0xe1,puVar6 + 0x1b,puVar6 + 0x11);
    puVar6[0x18] = puVar6[0x1a];
    plVar8 = (long *)(puVar6[0x1a] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(puVar6[0x18] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar6 + 0x1c) = 1;
      lVar9 = puVar6[0x18];
      plVar8 = (long *)(lVar9 + 0x10);
      uStack_48 = puVar6[3];
      do {
        lVar13 = *plVar8;
        if (lVar13 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            uStack_58 = 0;
            puStack_50 = puVar6;
            func_0x000109d1b588(lVar9 + 0x18,&uStack_58);
            *(undefined8 *)(lVar9 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar13 >> 1 & 1) == 0);
    }
    plVar8 = (long *)puVar6[0x18];
    if (((uint)*(undefined8 *)(puVar6[0x18] + 0x10) >> 5 & 1) == 0) {
      if (plVar8 != (long *)0x0) {
        puVar1 = (ulong *)(plVar8 + 1);
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
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
      plVar8 = (long *)puVar6[0x1a];
      if (plVar8 != (long *)0x0) {
        puVar1 = (ulong *)(plVar8 + 1);
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
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
      if ((3 < *(int *)(puVar6 + 0x15)) && ((undefined8 *)puVar6[0x16] != (undefined8 *)0x0)) {
        (*(code *)**(undefined8 **)puVar6[0x16])();
      }
      if ((3 < *(int *)(puVar6 + 0x12)) && ((undefined8 *)puVar6[0x13] != (undefined8 *)0x0)) {
        (*(code *)**(undefined8 **)puVar6[0x13])();
      }
      plVar8 = (long *)puVar6[0x1b];
      if (plVar8 != (long *)0x0) {
        puVar1 = (ulong *)(plVar8 + 1);
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
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
      func_0x0001092ba100(puVar6 + 2);
      if ((3 < *(int *)(puVar6 + 0xe)) && ((undefined8 *)puVar6[0xf] != (undefined8 *)0x0)) {
        (*(code *)**(undefined8 **)puVar6[0xf])();
      }
      if ((3 < *(int *)(puVar6 + 0xb)) && ((undefined8 *)puVar6[0xc] != (undefined8 *)0x0)) {
        (*(code *)**(undefined8 **)puVar6[0xc])();
      }
      plVar8 = (long *)puVar6[9];
      if (plVar8 != (long *)0x0) {
        puVar1 = (ulong *)(plVar8 + 1);
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
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
      func_0x000109d1a1d0(puVar6 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(puVar6);
      return;
    }
    func_0x0001092af97c(plVar8 + 0x12);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a056b00);
    (*pcVar5)();
  }
  return;
}



/* Entry: 10a056c30; end: 10a0571bf;  */

void FUN_10a056c30(long *param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  puVar6 = (undefined8 *)0xb0;
  __Znwm();
  *puVar6 = FUN_10a0889d0;
  puVar6[1] = FUN_10a088ddc;
  lVar10 = *param_3;
  *param_3 = 0;
  puVar6[9] = *param_4;
  plVar9 = puVar6 + 0x10;
  *plVar9 = lVar10;
  iVar2 = *(int *)(param_4 + 1);
  *(int *)(puVar6 + 10) = iVar2;
  if (iVar2 == 3) {
    puVar6[0xb] = param_4[2];
  }
  else if (iVar2 == 2) {
    *(undefined1 *)(puVar6 + 0xb) = *(undefined1 *)(param_4 + 2);
  }
  else if (3 < iVar2) {
    puVar6[0xb] = param_4[2];
    param_4[2] = 0;
  }
  *(undefined4 *)(param_4 + 1) = 0;
  puVar6[0xc] = param_4[3];
  iVar2 = *(int *)(param_4 + 4);
  *(int *)(puVar6 + 0xd) = iVar2;
  if (iVar2 == 3) {
    puVar6[0xe] = param_4[5];
  }
  else if (iVar2 == 2) {
    *(undefined1 *)(puVar6 + 0xe) = *(undefined1 *)(param_4 + 5);
  }
  else if (3 < iVar2) {
    puVar6[0xe] = param_4[5];
    param_4[5] = 0;
  }
  *(undefined4 *)(param_4 + 4) = 0;
  func_0x0001092ba17c(puVar6 + 2);
  lVar10 = puVar6[7];
  if (lVar10 != 0) {
    plVar8 = (long *)(lVar10 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lVar10;
  puVar6[0x12] = 0;
  *(undefined1 *)(puVar6 + 0x15) = 0;
  puVar7 = puVar6 + 0x12;
  FUN_10a057268(puVar7,puVar6);
  if (((ulong)puVar7 & 1) == 0) {
    puVar6[0x11] = puVar6[0x12];
    FUN_10a05730c(puVar6 + 0x13,puVar6 + 0x11,plVar9);
    puVar6[0x12] = puVar6[0x13];
    plVar8 = (long *)(puVar6[0x13] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(puVar6[0x12] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar6 + 0x15) = 1;
      lVar10 = puVar6[0x12];
      plVar8 = (long *)(lVar10 + 0x10);
      uStack_48 = puVar6[3];
      do {
        lVar12 = *plVar8;
        if (lVar12 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            uStack_58 = 0;
            puStack_50 = puVar6;
            func_0x000109d1b588(lVar10 + 0x18,&uStack_58);
            *(undefined8 *)(lVar10 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar12 >> 1 & 1) == 0);
    }
    plVar8 = (long *)puVar6[0x12];
    if (plVar8 != (long *)0x0) {
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar11 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar11 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar11 & 0x1fffffffc) == 4) {
        do {
          uVar11 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar11 - 1 == 0) {
          (**(code **)(*plVar8 + 8))();
        }
      }
    }
    plVar8 = (long *)puVar6[0x13];
    if (plVar8 != (long *)0x0) {
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar11 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar11 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar11 & 0x1fffffffc) == 4) {
        do {
          uVar11 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar11 - 1 == 0) {
          (**(code **)(*plVar8 + 8))();
        }
      }
    }
    if (((uint)*(undefined8 *)(puVar6[0x11] + 0x10) >> 1 & 1) == 0) {
      lVar10 = *plVar9;
      puVar6[0x14] = lVar10;
      *plVar9 = 0;
      if (((uint)*(undefined8 *)(lVar10 + 0x10) >> 5 & 1) == 0) {
        func_0x0001092af8bc(puVar6 + 0x14);
        if ((*(byte *)(puVar6[0x14] + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a05707c);
          (*pcVar5)();
        }
        FUN_10a0560a4(puVar6 + 9,puVar6[0x14] + 0x98);
      }
      else {
        __ZNSt13exception_ptrC1ERKS_(&uStack_58,puVar6[0x14] + 0x90);
        FUN_10a056190(puVar6 + 0xc,&uStack_58);
        __ZNSt13exception_ptrD1Ev(&uStack_58);
      }
      plVar8 = (long *)puVar6[0x14];
      if (plVar8 != (long *)0x0) {
        puVar1 = (ulong *)(plVar8 + 1);
        do {
          uVar11 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar11 & 0x1fffffffc) == 4) {
          do {
            uVar11 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar11 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar11 - 1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
    }
    func_0x0001092ba100(puVar6 + 2);
    plVar8 = (long *)puVar6[0x11];
    if (plVar8 != (long *)0x0) {
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar11 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar11 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar11 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        do {
          uVar11 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar11 - 1 == 0) {
          (**(code **)(*plVar8 + 8))(plVar8);
        }
      }
    }
    func_0x000109d1a1d0(puVar6 + 2);
    if ((3 < *(int *)(puVar6 + 0xd)) && ((undefined8 *)puVar6[0xe] != (undefined8 *)0x0)) {
      (*(code *)**(undefined8 **)puVar6[0xe])();
    }
    if ((3 < *(int *)(puVar6 + 10)) && ((undefined8 *)puVar6[0xb] != (undefined8 *)0x0)) {
      (*(code *)**(undefined8 **)puVar6[0xb])();
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar11 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar11 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar11 & 0x1fffffffc) == 4) {
        do {
          uVar11 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar11 - 1 == 0) {
          (**(code **)(*plVar9 + 8))();
        }
      }
    }
    __ZdlPv(puVar6);
  }
  return;
}



/* Entry: 10a0571c0; end: 10a057267;  */

long * FUN_10a0571c0(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if ((3 < (int)param_1[5]) && ((undefined8 *)param_1[6] != (undefined8 *)0x0)) {
    (*(code *)**(undefined8 **)param_1[6])();
  }
  if ((3 < (int)param_1[2]) && ((undefined8 *)param_1[3] != (undefined8 *)0x0)) {
    (*(code *)**(undefined8 **)param_1[3])();
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



/* Entry: 10a057268; end: 10a05730b;  */

undefined8 FUN_10a057268(long *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_2 + 0x30);
  if (lVar6 != 0) {
    plVar5 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)*param_1;
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
  *param_1 = lVar6;
  return 0;
}



/* Entry: 10a05730c; end: 10a0573ef;  */

void FUN_10a05730c(undefined8 param_1,undefined8 *param_2)

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
  FUN_10a0573f0(param_1,&plStack_28);
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



/* Entry: 10a0573f0; end: 10a057963;  */

/* WARNING: Removing unreachable block (ram,0x00010a057538) */
/* WARNING: Removing unreachable block (ram,0x00010a057748) */
/* WARNING: Removing unreachable block (ram,0x00010a0574f8) */
/* WARNING: Removing unreachable block (ram,0x00010a05768c) */

void FUN_10a0573f0(long *param_1,long *param_2,long *param_3)

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
  *plVar4 = (long)&PTR_FUN_110b9eb58;
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
          pcStack_68 = FUN_10a057964;
          ppuStack_58 = &PTR_PTR_1132fed68;
          plStack_60 = plVar9;
          func_0x000109d1b588(lVar7,&pcStack_68);
          *(undefined8 *)(lVar5 + 0x10) = 0;
          plStack_70[3] = lVar7;
          lVar5 = plVar4[0x17];
          plVar10 = (long *)(lVar5 + 0x10);
          goto LAB_10a057678;
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
LAB_10a0578b8:
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
LAB_10a057678:
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
        pcStack_68 = FUN_10a057a74;
        ppuStack_58 = &PTR_PTR_1132fed68;
        plStack_60 = plVar9;
        func_0x000109d1b588(lVar7,&pcStack_68);
        *(undefined8 *)(lVar5 + 0x10) = 0;
        plStack_70[4] = lVar7;
        *param_1 = (long)plVar4;
        goto LAB_10a0578b4;
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
LAB_10a05775c:
    if (((uint)lVar8 >> 1 & 1) != 0) goto LAB_10a0578ac;
  }
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar3) {
    *plVar10 = 1;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 != '\0') goto LAB_10a05775c;
  pcStack_68 = FUN_10a057964;
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
LAB_10a0578ac:
  *param_1 = (long)plVar4;
LAB_10a0578b4:
  plStack_80 = (long *)0x0;
  goto LAB_10a0578b8;
}



/* Entry: 10a057964; end: 10a057a73;  */

void FUN_10a057964(long *param_1)

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
  pcStack_38 = FUN_10a057a74;
  ppuStack_28 = &PTR_PTR_1132fed68;
  plStack_30 = param_1;
  func_0x0001092ba560(param_1 + 1,param_1 + 4,&pcStack_38);
  lVar7 = param_1[2];
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    func_0x0001092af8bc(param_1);
    if ((*(byte *)(*param_1 + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a057a70);
      (*pcVar4)();
    }
    FUN_10a057f38(lVar7,*param_1 + 0x98);
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
  func_0x00010a057ec8(param_1,param_1 + 3);
  return;
}



/* Entry: 10a057a74; end: 10a057b53;  */

void FUN_10a057a74(long param_1)

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
  pcStack_48 = FUN_10a057964;
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
  func_0x00010a057ec8(param_1,param_1 + 0x20);
  return;
}



/* Entry: 10a057b54; end: 10a057bc7;  */

long * FUN_10a057b54(long *param_1)

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



/* Entry: 10a057bc8; end: 10a057e13;  */

undefined8 * FUN_10a057bc8(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_110b9eb58;
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
  *param_1 = &PTR_FUN_110b9eba8;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    func_0x00010a056464(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a057e14; end: 10a057f37;  */

undefined8 * FUN_10a057e14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9eba8;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    func_0x00010a056464(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a057f38; end: 10a057faf;  */

undefined1 FUN_10a057f38(long param_1)

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
        FUN_10a057fb0(param_1 + 0x98);
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



/* Entry: 10a057fb0; end: 10a05800b;  */

void FUN_10a057fb0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_1 + 2) == '\x01') {
    func_0x00010a056464();
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



/* Entry: 10a05800c; end: 10a058027;  */

void FUN_10a05800c(void)

{
  return;
}



/* Entry: 10a058028; end: 10a0580ff;  */

void FUN_10a058028(undefined8 *param_1,undefined8 param_2,uint *param_3)

{
  undefined8 uStack_38;
  int iStack_30;
  undefined1 uStack_28;
  undefined7 uStack_27;
  
  if (*param_3 < 2) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    func_0x00010a0582f4(&uStack_38);
    *param_1 = uStack_38;
    *(int *)(param_1 + 1) = iStack_30;
    if (iStack_30 == 3) {
      param_1[2] = CONCAT71(uStack_27,uStack_28);
    }
    else if (iStack_30 == 2) {
      *(undefined1 *)(param_1 + 2) = uStack_28;
    }
    else if (3 < iStack_30) {
      param_1[2] = CONCAT71(uStack_27,uStack_28);
    }
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return;
}



/* Entry: 10a058100; end: 10a058167;  */

ulong FUN_10a058100(undefined8 *param_1,ulong param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar6 = param_2;
  FUN_10a058168();
  if ((int)uVar6 != 0) {
    FUN_10a0581e4(&uStack_40,param_2,param_3);
    param_1[1] = uStack_38;
    *param_1 = uStack_40;
    *(undefined1 *)(param_1 + 3) = 1;
    return param_2;
  }
  puVar4 = &UNK_10f634795;
  func_0x00010988bd28();
  pcStack_48 = FUN_10a058168;
  uStack_60 = param_3;
  puStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x000109898688();
  if (puVar4 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    FUN_10a05825c(&lStack_70);
    uVar6 = (ulong)(lStack_70 != 0);
    if (plStack_68 != (long *)0x0) {
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
  }
  return uVar6;
}



/* Entry: 10a058168; end: 10a0581e3;  */

bool FUN_10a058168(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long lStack_30;
  long *plStack_28;
  
  func_0x000109898688();
  if (param_1 == 0) {
    bVar4 = false;
  }
  else {
    FUN_10a05825c(&lStack_30);
    bVar4 = lStack_30 != 0;
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
  }
  return bVar4;
}



/* Entry: 10a0581e4; end: 10a05825b;  */

void FUN_10a0581e4(long *param_1,long param_2,int *param_3)

{
  code *pcVar1;
  
  if (*param_3 == 1) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  func_0x000109898688();
  if (param_2 == 0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else {
    FUN_10a05825c(param_1);
    if (*param_1 != 0) {
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a058248);
  (*pcVar1)();
}



/* Entry: 10a05825c; end: 10a05836f;  */

void FUN_10a05825c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_30;
  long *plStack_28;
  
  func_0x00010989879c(&lStack_30);
  if ((lStack_30 != 0) &&
     (___dynamic_cast(lStack_30,&PTR_DAT_110b178e0,&PTR_DAT_110c35318,0x48), lStack_30 != 0)) {
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



/* Entry: 10a058370; end: 10a05838b;  */

void FUN_10a058370(undefined8 *param_1)

{
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a05838c; end: 10a0584c7;  */

void FUN_10a05838c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
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
  long *in_stack_ffffffffffffffa0;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  FUN_10a0551fc(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  FUN_10a00cf8c(&plStack_68);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  FUN_10a0584ec(param_1,param_2,&plStack_68);
  if (in_stack_ffffffffffffffa0 != (long *)0x0) {
    plVar1 = in_stack_ffffffffffffffa0 + 1;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*in_stack_ffffffffffffffa0 + 0x10))(in_stack_ffffffffffffffa0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa0);
    }
  }
  plVar1 = plVar6 + 0x4b;
  lVar9 = plVar6[0x59];
  uVar7 = lVar9 - 1;
  plVar6[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar9 + 2];
    if (plVar6[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar7) {
      return;
    }
  }
  lVar9 = *plVar1;
  lVar12 = plVar6[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar6[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar5 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar5 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar1 = lVar11;
          plVar6[0x4c] = lVar12 + uVar15 * 0x10;
          plVar6[0x4d] = lVar5 + uVar8 * 0x10;
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
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar4)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar6[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar6[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar7;
  return;
}



/* Entry: 10a0584c8; end: 10a0584eb;  */

void FUN_10a0584c8(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  
  if ((int)param_1 == 1) {
    return;
  }
  puVar4 = (undefined8 *)0x0;
  FUN_10a052ee0(1,0,param_1);
  plVar6 = (long *)puVar4[1];
  *puVar4 = 0;
  puVar4[1] = 0;
  func_0x000109899de4();
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return;
}



/* Entry: 10a0584ec; end: 10a05856f;  */

void FUN_10a0584ec(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  ppuStack_38 = &PTR_DAT_110c5ef50;
  func_0x000109899de4(param_1,&uStack_30,&ppuStack_38,0,0);
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



/* Entry: 10a058570; end: 10a05879b;  */

void FUN_10a058570(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 in_stack_ffffffffffffffa0;
  long *in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb0;
  
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
  FUN_10a0551fc(param_2,param_3);
  FUN_10a05879c(param_5);
  plVar7 = param_2;
  func_0x000109898688(param_2,param_4);
  if (plVar7 == (long *)0x0) {
    puVar9 = &UNK_10f68f52e;
  }
  else {
    plVar8 = param_2;
    FUN_10a053854(param_2,plVar7);
    if ((plVar8 != (long *)0x0) && (___dynamic_cast(), plVar8 != (long *)0x0)) {
      lVar15 = plVar6[10];
      func_0x000107c2b054(&stack0xffffffffffffffa0,&UNK_10f6313a2);
      if (lVar15 != 0) {
        FUN_10a76c080(*(undefined8 *)(lVar15 + 0x8d8),&stack0xffffffffffffffa0);
      }
      if (in_stack_ffffffffffffffb0 < 0) {
        __ZdlPv(in_stack_ffffffffffffffa0);
      }
      lStack_70 = *(long *)plVar8[3];
      lStack_80 = lStack_70 + ((long *)plVar8[3])[1];
      FUN_10a05c7a4(&stack0xffffffffffffffa0,&stack0xffffffffffffffbf,&lStack_70,&lStack_80);
      FUN_10a05c91c(&lStack_70,&lStack_80,&stack0xffffffffffffffa0);
      plStack_78 = plStack_68;
      lStack_80 = lStack_70;
      if (in_stack_ffffffffffffffa8 != (long *)0x0) {
        plVar6 = in_stack_ffffffffffffffa8 + 1;
        do {
          lVar15 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar15 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
        }
      }
      FUN_10a0584ec(param_1,param_2,&lStack_80);
      plVar6 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar7 = plStack_78 + 1;
        do {
          lVar15 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar15 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      plVar6 = plVar5 + 0x4b;
      lVar15 = plVar5[0x59];
      uVar10 = lVar15 - 1;
      plVar5[0x59] = uVar10;
      if (uVar10 < 8) {
        uVar10 = plVar6[lVar15 + 2];
        if (plVar5[0x5a] == uVar10) {
          return;
        }
      }
      else {
        uVar10 = *(ulong *)(plVar5[0x57] + -8);
        plVar5[0x57] = plVar5[0x57] + -8;
        if (plVar5[0x5a] == uVar10) {
          return;
        }
      }
      lVar15 = *plVar6;
      lVar14 = plVar5[0x4c];
      lVar12 = lVar14 - lVar15;
      uVar17 = lVar12 >> 4;
      if (uVar17 < uVar10) {
        uVar18 = uVar10 - uVar17;
        lVar16 = plVar5[0x4d];
        if ((ulong)(lVar16 - lVar14 >> 4) < uVar18) {
          if (uVar10 >> 0x3c == 0) {
            uVar11 = lVar16 - lVar15 >> 3;
            if (uVar11 <= uVar10) {
              uVar11 = uVar10;
            }
            if (0x7fffffffffffffef < (ulong)(lVar16 - lVar15)) {
              uVar11 = 0xfffffffffffffff;
            }
            plStack_68 = plVar6;
            if (uVar11 >> 0x3c == 0) {
              lVar4 = uVar11 << 4;
              __Znwm();
              lVar14 = lVar4 + lVar12;
              _bzero(lVar14,uVar18 * 0x10);
              lVar13 = lVar14 + uVar17 * -0x10;
              _memcpy(lVar13,lVar15,lVar12);
              *plVar6 = lVar13;
              plVar5[0x4c] = lVar14 + uVar18 * 0x10;
              plVar5[0x4d] = lVar4 + uVar11 * 0x10;
              lStack_88 = lVar15;
              lStack_80 = lVar15;
              plStack_78 = (long *)lVar15;
              lStack_70 = lVar16;
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
        _bzero(lVar14,uVar18 * 0x10);
        plVar5[0x4c] = lVar14 + uVar18 * 0x10;
      }
      else if (uVar10 < uVar17) {
        lVar15 = lVar15 + uVar10 * 0x10;
        while (lVar14 != lVar15) {
          lVar14 = lVar14 + -0x10;
          func_0x00010988c204(lVar14);
        }
        plVar5[0x4c] = lVar15;
      }
code_r0x00010988c138:
      plVar5[0x5a] = uVar10;
      return;
    }
    puVar9 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar9);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a058760);
  (*pcVar3)();
}



/* Entry: 10a05879c; end: 10a0587bf;  */

/* WARNING: Removing unreachable block (ram,0x00010a0588f4) */
/* WARNING: Removing unreachable block (ram,0x00010a0588fc) */

void FUN_10a05879c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined4 *extraout_x8;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 auStack_b0 [8];
  long *plStack_a8;
  long lStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined8 *puStack_80;
  long *plStack_78;
  long in_stack_ffffffffffffff90;
  long in_stack_ffffffffffffffa0;
  long *in_stack_ffffffffffffffa8;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar6 = (long *)0x1;
  uVar11 = 0;
  FUN_10a052ee0(1,0,param_1);
  plVar7 = plVar6;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  plVar8 = plVar6;
  FUN_10a0551fc(plVar6,uVar11);
  FUN_10a058b78(param_4);
  FUN_10a058b9c(&lStack_a0,plVar6,param_1);
  FUN_10a058cac(auStack_b0,plVar6,param_1 + 0x10);
  if ((int)plVar8[0x1c] != 1) {
    lVar9 = plVar8[10];
    FUN_10a3df7b0(lVar9,2);
    if ((int)lVar9 == 0) {
      puVar10 = &UNK_10f630fd8;
      goto LAB_10a058af0;
    }
  }
  if (lStack_a0 != 0) {
    if (*(char *)(lStack_a0 + 0x1f) < '\0') {
      func_0x000107c3192c(&puStack_80,*(undefined8 *)(lStack_a0 + 8),
                          *(undefined8 *)(lStack_a0 + 0x10));
    }
    else {
      plStack_78 = *(long **)(lStack_a0 + 0x10);
      puStack_80 = *(undefined8 **)(lStack_a0 + 8);
      in_stack_ffffffffffffff90 = *(long *)(lStack_a0 + 0x18);
    }
    plVar6 = plVar8;
    FUN_10a00b004(plVar8,&puStack_80);
    if (in_stack_ffffffffffffff90 < 0) {
      __ZdlPv(puStack_80);
    }
    if (((ulong)plVar6 & 1) == 0) {
      puVar10 = &UNK_10f631004;
LAB_10a058af0:
      FUN_10a00946c(puVar10);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a058af8);
      (*pcVar4)();
    }
  }
  puStack_80 = (undefined8 *)((ulong)puStack_80 & 0xffffffffffffff00);
  FUN_10a00c7b8(&stack0xffffffffffffffa0,plVar8,&lStack_a0,auStack_b0,&puStack_80);
  if (in_stack_ffffffffffffffa0 != 0) {
    puStack_80 = (undefined8 *)0x0;
    plStack_78 = (long *)0x0;
    plVar6 = (long *)plVar8[0x1e];
    if (((plVar6 == (long *)0x0) ||
        (__ZNSt3__119__shared_weak_count4lockEv(), plStack_78 = plVar6, plVar6 == (long *)0x0)) ||
       (puStack_80 = (undefined8 *)plVar8[0x1d], puStack_80 == (undefined8 *)0x0)) {
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f631118,&UNK_10f631489,0x16a,&UNK_10f6311d9);
      }
    }
    else {
      if (in_stack_ffffffffffffffa8 != (long *)0x0) {
        plVar6 = in_stack_ffffffffffffffa8 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plStack_88 = in_stack_ffffffffffffffa8;
      (**(code **)*puStack_80)(puStack_80,&plStack_90);
      if (plStack_88 != (long *)0x0) {
        plVar6 = plStack_88 + 1;
        do {
          lVar9 = *plVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
        }
      }
    }
    plVar6 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar8 = plStack_78 + 1;
      do {
        lVar9 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  if (in_stack_ffffffffffffffa8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffa8 + 1;
    do {
      lVar9 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
    }
  }
  if (plStack_a8 != (long *)0x0) {
    plVar6 = plStack_a8 + 1;
    do {
      lVar9 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
    }
  }
  if (plStack_98 != (long *)0x0) {
    plVar6 = plStack_98 + 1;
    do {
      lVar9 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_98);
    }
  }
  *extraout_x8 = 0;
  plVar6 = plVar7 + 0x4b;
  lVar9 = plVar7[0x59];
  uVar12 = lVar9 - 1;
  plVar7[0x59] = uVar12;
  if (uVar12 < 8) {
    uVar12 = plVar6[lVar9 + 2];
    if (plVar7[0x5a] == uVar12) {
      return;
    }
  }
  else {
    uVar12 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar12) {
      return;
    }
  }
  plVar8 = (long *)*plVar6;
  plVar15 = (long *)plVar7[0x4c];
  lVar9 = (long)plVar15 - (long)plVar8;
  uVar17 = lVar9 >> 4;
  if (uVar17 < uVar12) {
    uVar18 = uVar12 - uVar17;
    puVar16 = (undefined8 *)plVar7[0x4d];
    if ((ulong)((long)puVar16 - (long)plVar15 >> 4) < uVar18) {
      if (uVar12 >> 0x3c == 0) {
        uVar13 = (long)puVar16 - (long)plVar8 >> 3;
        if (uVar13 <= uVar12) {
          uVar13 = uVar12;
        }
        if (0x7fffffffffffffef < (ulong)((long)puVar16 - (long)plVar8)) {
          uVar13 = 0xfffffffffffffff;
        }
        plStack_78 = plVar6;
        if (uVar13 >> 0x3c == 0) {
          lVar5 = uVar13 << 4;
          __Znwm();
          lVar1 = lVar5 + lVar9;
          _bzero(lVar1,uVar18 * 0x10);
          lVar14 = lVar1 + uVar17 * -0x10;
          _memcpy(lVar14,plVar8,lVar9);
          *plVar6 = lVar14;
          plVar7[0x4c] = lVar1 + uVar18 * 0x10;
          plVar7[0x4d] = lVar5 + uVar13 * 0x10;
          plStack_98 = plVar8;
          plStack_90 = plVar8;
          plStack_88 = plVar8;
          puStack_80 = puVar16;
          func_0x00010988c1b8(&plStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar4)();
    }
    _bzero(plVar15,uVar18 * 0x10);
    plVar7[0x4c] = (long)(plVar15 + uVar18 * 2);
  }
  else if (uVar12 < uVar17) {
    while (plVar15 != plVar8 + uVar12 * 2) {
      plVar15 = plVar15 + -2;
      func_0x00010988c204(plVar15);
    }
    plVar7[0x4c] = (long)(plVar8 + uVar12 * 2);
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar12;
  return;
}



/* Entry: 10a0587c0; end: 10a058b77;  */

/* WARNING: Removing unreachable block (ram,0x00010a0588f4) */
/* WARNING: Removing unreachable block (ram,0x00010a0588fc) */

void FUN_10a0587c0(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 auStack_a0 [8];
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa0;
  long in_stack_ffffffffffffffb0;
  long *in_stack_ffffffffffffffb8;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = param_2;
  FUN_10a0551fc(param_2,param_3);
  FUN_10a058b78(param_5);
  FUN_10a058b9c(&lStack_90,param_2,param_4);
  FUN_10a058cac(auStack_a0,param_2,param_4 + 0x10);
  if ((int)plVar7[0x1c] != 1) {
    lVar8 = plVar7[10];
    FUN_10a3df7b0(lVar8,2);
    if ((int)lVar8 == 0) {
      puVar10 = &UNK_10f630fd8;
      goto LAB_10a058af0;
    }
  }
  if (lStack_90 != 0) {
    if (*(char *)(lStack_90 + 0x1f) < '\0') {
      func_0x000107c3192c(&puStack_70,*(undefined8 *)(lStack_90 + 8),
                          *(undefined8 *)(lStack_90 + 0x10));
    }
    else {
      plStack_68 = *(long **)(lStack_90 + 0x10);
      puStack_70 = *(undefined8 **)(lStack_90 + 8);
      in_stack_ffffffffffffffa0 = *(long *)(lStack_90 + 0x18);
    }
    plVar9 = plVar7;
    FUN_10a00b004(plVar7,&puStack_70);
    if (in_stack_ffffffffffffffa0 < 0) {
      __ZdlPv(puStack_70);
    }
    if (((ulong)plVar9 & 1) == 0) {
      puVar10 = &UNK_10f631004;
LAB_10a058af0:
      FUN_10a00946c(puVar10);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a058af8);
      (*pcVar4)();
    }
  }
  puStack_70 = (undefined8 *)((ulong)puStack_70 & 0xffffffffffffff00);
  FUN_10a00c7b8(&stack0xffffffffffffffb0,plVar7,&lStack_90,auStack_a0,&puStack_70);
  if (in_stack_ffffffffffffffb0 != 0) {
    puStack_70 = (undefined8 *)0x0;
    plStack_68 = (long *)0x0;
    plVar9 = (long *)plVar7[0x1e];
    if (((plVar9 == (long *)0x0) ||
        (__ZNSt3__119__shared_weak_count4lockEv(), plStack_68 = plVar9, plVar9 == (long *)0x0)) ||
       (puStack_70 = (undefined8 *)plVar7[0x1d], puStack_70 == (undefined8 *)0x0)) {
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f631118,&UNK_10f631489,0x16a,&UNK_10f6311d9);
      }
    }
    else {
      if (in_stack_ffffffffffffffb8 != (long *)0x0) {
        plVar7 = in_stack_ffffffffffffffb8 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = *plVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plStack_78 = in_stack_ffffffffffffffb8;
      (**(code **)*puStack_70)(puStack_70,&plStack_80);
      if (plStack_78 != (long *)0x0) {
        plVar7 = plStack_78 + 1;
        do {
          lVar8 = *plVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
        }
      }
    }
    plVar7 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar9 = plStack_68 + 1;
      do {
        lVar8 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar7 = in_stack_ffffffffffffffb8 + 1;
    do {
      lVar8 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  if (plStack_98 != (long *)0x0) {
    plVar7 = plStack_98 + 1;
    do {
      lVar8 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_98);
    }
  }
  if (plStack_88 != (long *)0x0) {
    plVar7 = plStack_88 + 1;
    do {
      lVar8 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
    }
  }
  *param_1 = 0;
  plVar7 = plVar6 + 0x4b;
  lVar8 = plVar6[0x59];
  uVar11 = lVar8 - 1;
  plVar6[0x59] = uVar11;
  if (uVar11 < 8) {
    uVar11 = plVar7[lVar8 + 2];
    if (plVar6[0x5a] == uVar11) {
      return;
    }
  }
  else {
    uVar11 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar11) {
      return;
    }
  }
  plVar9 = (long *)*plVar7;
  plVar14 = (long *)plVar6[0x4c];
  lVar8 = (long)plVar14 - (long)plVar9;
  uVar16 = lVar8 >> 4;
  if (uVar16 < uVar11) {
    uVar17 = uVar11 - uVar16;
    puVar15 = (undefined8 *)plVar6[0x4d];
    if ((ulong)((long)puVar15 - (long)plVar14 >> 4) < uVar17) {
      if (uVar11 >> 0x3c == 0) {
        uVar12 = (long)puVar15 - (long)plVar9 >> 3;
        if (uVar12 <= uVar11) {
          uVar12 = uVar11;
        }
        if (0x7fffffffffffffef < (ulong)((long)puVar15 - (long)plVar9)) {
          uVar12 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar12 >> 0x3c == 0) {
          lVar5 = uVar12 << 4;
          __Znwm();
          lVar1 = lVar5 + lVar8;
          _bzero(lVar1,uVar17 * 0x10);
          lVar13 = lVar1 + uVar16 * -0x10;
          _memcpy(lVar13,plVar9,lVar8);
          *plVar7 = lVar13;
          plVar6[0x4c] = lVar1 + uVar17 * 0x10;
          plVar6[0x4d] = lVar5 + uVar12 * 0x10;
          plStack_88 = plVar9;
          plStack_80 = plVar9;
          plStack_78 = plVar9;
          puStack_70 = puVar15;
          func_0x00010988c1b8(&plStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar4)();
    }
    _bzero(plVar14,uVar17 * 0x10);
    plVar6[0x4c] = (long)(plVar14 + uVar17 * 2);
  }
  else if (uVar11 < uVar16) {
    while (plVar14 != plVar9 + uVar11 * 2) {
      plVar14 = plVar14 + -2;
      func_0x00010988c204(plVar14);
    }
    plVar6[0x4c] = (long)(plVar9 + uVar11 * 2);
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar11;
  return;
}



/* Entry: 10a058b78; end: 10a058b9b;  */

void FUN_10a058b78(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  int *piVar3;
  long *extraout_x8;
  
  if ((int)param_1 == 2) {
    return;
  }
  lVar2 = 2;
  piVar3 = (int *)0x0;
  FUN_10a052ee0(2,0,param_1);
  if (*piVar3 != 1) {
    func_0x000109898688();
    if (lVar2 == 0) {
      func_0x00010988bd28(&UNK_10f68f52e);
    }
    else {
      FUN_10a058c14(extraout_x8);
      if (*extraout_x8 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a058c00);
    (*pcVar1)();
  }
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  return;
}



/* Entry: 10a058b9c; end: 10a058c13;  */

void FUN_10a058b9c(long *param_1,long param_2,int *param_3)

{
  code *pcVar1;
  
  if (*param_3 == 1) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  func_0x000109898688();
  if (param_2 == 0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else {
    FUN_10a058c14(param_1);
    if (*param_1 != 0) {
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a058c00);
  (*pcVar1)();
}



/* Entry: 10a058c14; end: 10a058cab;  */

void FUN_10a058c14(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_30;
  long *plStack_28;
  
  func_0x00010989879c(&lStack_30);
  if ((lStack_30 != 0) &&
     (___dynamic_cast(lStack_30,&PTR_DAT_110b178e0,&PTR_DAT_110c35368,0x48), lStack_30 != 0)) {
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



/* Entry: 10a058cac; end: 10a058d03;  */

void FUN_10a058cac(undefined8 param_1)

{
  undefined1 auStack_48 [39];
  undefined1 uStack_21;
  
  FUN_10a058d04(auStack_48);
  FUN_10a058e3c(param_1,&uStack_21,auStack_48);
  FUN_10a688c1c(auStack_48);
  return;
}



/* Entry: 10a058d04; end: 10a058e3b;  */

void FUN_10a058d04(undefined8 param_1,long *param_2,int *param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plStack_50;
  int iStack_48;
  long *plStack_40;
  long *plStack_38;
  
  if (*param_3 == 7) {
    plVar2 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_3 + 2));
    plVar3 = param_2;
    plStack_38 = plVar2;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_38);
    if ((int)plVar3 != 0) {
      plVar2 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar4 = plVar2[0x48];
      if ((lVar4 == 0) ||
         (___dynamic_cast(lVar4,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), lVar4 == 0))
      goto LAB_10a058e0c;
      plStack_40 = plStack_38;
      plStack_38 = (long *)0x0;
      iStack_48 = 7;
      plStack_50 = param_2;
      FUN_10a688ac0(param_1,&plStack_50,*(undefined8 *)(lVar4 + 8));
      if ((3 < iStack_48) && (plStack_40 != (long *)0x0)) {
        (**(code **)*plStack_40)();
      }
    }
    if (plStack_38 != (long *)0x0) {
      (**(code **)*plStack_38)();
    }
    if (((ulong)plVar3 & 1) != 0) {
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a058e0c:
  func_0x00010988bd28(&UNK_10f685540);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a058e1c);
  (*pcVar1)();
}



/* Entry: 10a058e3c; end: 10a058e93;  */

void FUN_10a058e3c(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x60;
  __Znwm();
  FUN_10a058e94();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a058e94; end: 10a058f0f;  */

void FUN_10a058e94(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110b9ebf8;
  *(undefined1 *)(param_1 + 0xb) = 3;
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[4] = param_2[1];
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
  lVar4 = param_2[3];
  uVar5 = param_2[2];
  param_1[6] = param_2[3];
  param_1[5] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined1 *)(param_1 + 0xb) = 2;
  return;
}



/* Entry: 10a058f10; end: 10a058f2f;  */

void FUN_10a058f10(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b9ebf8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a058f30; end: 10a058f57;  */

undefined1  [16] FUN_10a058f30(long param_1)

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
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a058f54);
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



/* Entry: 10a058f58; end: 10a058faf;  */

long FUN_10a058f58(long param_1)

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



/* Entry: 10a058fb0; end: 10a05925f;  */

void FUN_10a058fb0(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
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
  FUN_10a0551fc(param_2,param_3);
  FUN_10a059260(param_5);
  FUN_10a059284(&plStack_80,param_2,param_4);
  FUN_10a0592fc(&uStack_90,param_2,param_4 + 0x10);
  FUN_10a059354(&lStack_a0,param_2,param_4 + 0x20);
  plVar14 = plStack_78;
  plVar3 = plStack_88;
  plVar1 = plStack_98;
  plStack_80 = (long *)0x0;
  plStack_78 = (long *)0x0;
  uStack_90 = 0;
  plStack_88 = (long *)0x0;
  plStack_68 = plStack_98;
  lStack_70 = lStack_a0;
  lStack_a0 = 0;
  plStack_98 = (long *)0x0;
  FUN_10a00b408(plVar9,&stack0xffffffffffffffb0,&stack0xffffffffffffffa0,&lStack_70);
  if (plVar1 != (long *)0x0) {
    plVar9 = plVar1 + 1;
    do {
      lVar12 = *plVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      lVar12 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  if (plVar14 != (long *)0x0) {
    plVar1 = plVar14 + 1;
    do {
      lVar12 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
    }
  }
  plVar1 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar3 = plStack_98 + 1;
    do {
      lVar12 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  plVar1 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar3 = plStack_88 + 1;
    do {
      lVar12 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  plVar1 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar3 = plStack_78 + 1;
    do {
      lVar12 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  *param_1 = 0;
  plVar1 = plVar8 + 0x4b;
  lVar12 = plVar8[0x59];
  uVar10 = lVar12 - 1;
  plVar8[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar1[lVar12 + 2];
    if (plVar8[0x5a] == uVar10) {
      return;
    }
  }
  else {
    uVar10 = *(ulong *)(plVar8[0x57] + -8);
    plVar8[0x57] = plVar8[0x57] + -8;
    if (plVar8[0x5a] == uVar10) {
      return;
    }
  }
  plVar3 = (long *)*plVar1;
  plVar14 = (long *)plVar8[0x4c];
  lVar12 = (long)plVar14 - (long)plVar3;
  uVar16 = lVar12 >> 4;
  if (uVar16 < uVar10) {
    uVar17 = uVar10 - uVar16;
    lVar15 = plVar8[0x4d];
    if ((ulong)(lVar15 - (long)plVar14 >> 4) < uVar17) {
      if (uVar10 >> 0x3c == 0) {
        uVar11 = lVar15 - (long)plVar3 >> 3;
        if (uVar11 <= uVar10) {
          uVar11 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - (long)plVar3)) {
          uVar11 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar11 >> 0x3c == 0) {
          lVar7 = uVar11 << 4;
          __Znwm();
          lVar2 = lVar7 + lVar12;
          _bzero(lVar2,uVar17 * 0x10);
          lVar13 = lVar2 + uVar16 * -0x10;
          _memcpy(lVar13,plVar3,lVar12);
          *plVar1 = lVar13;
          plVar8[0x4c] = lVar2 + uVar17 * 0x10;
          plVar8[0x4d] = lVar7 + uVar11 * 0x10;
          plStack_88 = plVar3;
          plStack_80 = plVar3;
          plStack_78 = plVar3;
          lStack_70 = lVar15;
          func_0x00010988c1b8(&plStack_88);
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
    _bzero(plVar14,uVar17 * 0x10);
    plVar8[0x4c] = (long)(plVar14 + uVar17 * 2);
  }
  else if (uVar10 < uVar16) {
    while (plVar14 != plVar3 + uVar10 * 2) {
      plVar14 = plVar14 + -2;
      func_0x00010988c204(plVar14);
    }
    plVar8[0x4c] = (long)(plVar3 + uVar10 * 2);
  }
code_r0x00010988c138:
  plVar8[0x5a] = uVar10;
  return;
}



/* Entry: 10a059260; end: 10a059283;  */

void FUN_10a059260(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  int *piVar3;
  long *extraout_x8;
  
  if ((int)param_1 == 3) {
    return;
  }
  lVar2 = 3;
  piVar3 = (int *)0x0;
  FUN_10a052ee0(3,0,param_1);
  if (*piVar3 != 1) {
    func_0x000109898688();
    if (lVar2 == 0) {
      func_0x00010988bd28(&UNK_10f68f52e);
    }
    else {
      FUN_10a0593ac(extraout_x8);
      if (*extraout_x8 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0592e8);
    (*pcVar1)();
  }
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  return;
}



/* Entry: 10a059284; end: 10a0592fb;  */

void FUN_10a059284(long *param_1,long param_2,int *param_3)

{
  code *pcVar1;
  
  if (*param_3 == 1) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  func_0x000109898688();
  if (param_2 == 0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else {
    FUN_10a0593ac(param_1);
    if (*param_1 != 0) {
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0592e8);
  (*pcVar1)();
}



/* Entry: 10a0592fc; end: 10a059353;  */

void FUN_10a0592fc(undefined8 param_1)

{
  undefined1 auStack_48 [39];
  undefined1 uStack_21;
  
  FUN_10a059444(auStack_48);
  FUN_10a05957c(param_1,&uStack_21,auStack_48);
  FUN_10a688c1c(auStack_48);
  return;
}



/* Entry: 10a059354; end: 10a0593ab;  */

void FUN_10a059354(undefined8 param_1)

{
  undefined1 auStack_48 [39];
  undefined1 uStack_21;
  
  FUN_10a059698(auStack_48);
  FUN_10a0597d0(param_1,&uStack_21,auStack_48);
  FUN_10a688c1c(auStack_48);
  return;
}



/* Entry: 10a0593ac; end: 10a059443;  */

void FUN_10a0593ac(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_30;
  long *plStack_28;
  
  func_0x00010989879c(&lStack_30);
  if ((lStack_30 != 0) &&
     (___dynamic_cast(lStack_30,&PTR_DAT_110b178e0,&PTR_DAT_110c353a0,0), lStack_30 != 0)) {
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



/* Entry: 10a059444; end: 10a05957b;  */

void FUN_10a059444(undefined8 param_1,long *param_2,int *param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plStack_50;
  int iStack_48;
  long *plStack_40;
  long *plStack_38;
  
  if (*param_3 == 7) {
    plVar2 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_3 + 2));
    plVar3 = param_2;
    plStack_38 = plVar2;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_38);
    if ((int)plVar3 != 0) {
      plVar2 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar4 = plVar2[0x48];
      if ((lVar4 == 0) ||
         (___dynamic_cast(lVar4,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), lVar4 == 0))
      goto LAB_10a05954c;
      plStack_40 = plStack_38;
      plStack_38 = (long *)0x0;
      iStack_48 = 7;
      plStack_50 = param_2;
      FUN_10a688ac0(param_1,&plStack_50,*(undefined8 *)(lVar4 + 8));
      if ((3 < iStack_48) && (plStack_40 != (long *)0x0)) {
        (**(code **)*plStack_40)();
      }
    }
    if (plStack_38 != (long *)0x0) {
      (**(code **)*plStack_38)();
    }
    if (((ulong)plVar3 & 1) != 0) {
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a05954c:
  func_0x00010988bd28(&UNK_10f685540);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a05955c);
  (*pcVar1)();
}



/* Entry: 10a05957c; end: 10a0595d3;  */

void FUN_10a05957c(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x60;
  __Znwm();
  FUN_10a0595d4();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a0595d4; end: 10a05964f;  */

void FUN_10a0595d4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110b9f5b8;
  *(undefined1 *)(param_1 + 0xb) = 3;
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[4] = param_2[1];
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
  lVar4 = param_2[3];
  uVar5 = param_2[2];
  param_1[6] = param_2[3];
  param_1[5] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined1 *)(param_1 + 0xb) = 2;
  return;
}



/* Entry: 10a059650; end: 10a05966f;  */

void FUN_10a059650(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b9f5b8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a059670; end: 10a059697;  */

undefined1  [16] FUN_10a059670(long param_1)

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
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a059694);
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



/* Entry: 10a059698; end: 10a0597cf;  */

void FUN_10a059698(undefined8 param_1,long *param_2,int *param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plStack_50;
  int iStack_48;
  long *plStack_40;
  long *plStack_38;
  
  if (*param_3 == 7) {
    plVar2 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_3 + 2));
    plVar3 = param_2;
    plStack_38 = plVar2;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_38);
    if ((int)plVar3 != 0) {
      plVar2 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar4 = plVar2[0x48];
      if ((lVar4 == 0) ||
         (___dynamic_cast(lVar4,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), lVar4 == 0))
      goto LAB_10a0597a0;
      plStack_40 = plStack_38;
      plStack_38 = (long *)0x0;
      iStack_48 = 7;
      plStack_50 = param_2;
      FUN_10a688ac0(param_1,&plStack_50,*(undefined8 *)(lVar4 + 8));
      if ((3 < iStack_48) && (plStack_40 != (long *)0x0)) {
        (**(code **)*plStack_40)();
      }
    }
    if (plStack_38 != (long *)0x0) {
      (**(code **)*plStack_38)();
    }
    if (((ulong)plVar3 & 1) != 0) {
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a0597a0:
  func_0x00010988bd28(&UNK_10f685540);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0597b0);
  (*pcVar1)();
}


