/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10951a594; end: 10951a5ef;  */

long * FUN_10951a594(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  func_0x000107c29c1c(param_1 + 0x48);
  plVar1 = (long *)(param_1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x40);
  if (plVar2 == plVar1) {
    lVar3 = 0x18;
  }
  else {
    if (plVar2 == (long *)0x0) {
      return plVar1;
    }
    lVar3 = 0x20;
  }
  (**(code **)(*plVar2 + lVar3))();
  return plVar1;
}



/* Entry: 10951a5f0; end: 10951a603;  */

void FUN_10951a5f0(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 auStack_48 [15];
  undefined1 uStack_39;
  ulong uStack_38;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  plVar4 = (long *)(lVar2 + 0x48);
  lVar3 = *plVar4;
  if (lVar3 != 0) {
    if ((*(byte *)(lVar3 + 0x88) & 1) == 0) {
      uStack_38 = 0;
      lVar3 = *(long *)(lVar3 + 0x10);
      __ZNSt13exception_ptrD1Ev(&uStack_38);
      if (lVar3 == 0) {
        uStack_38 = uStack_38 & 0xffffffff00000000;
        plVar1 = *(long **)(lVar2 + 0x40);
        (**(code **)(*plVar1 + 0x28))(plVar1,&uStack_38);
        uStack_39 = SUB81(plVar1,0);
        func_0x000108820bcc(plVar4,&uStack_39);
        return;
      }
    }
    FUN_1094362d4(2);
  }
  FUN_1094362d4(3);
  ___cxa_begin_catch();
  __ZSt17current_exceptionv(auStack_48);
  FUN_10951a968(plVar4,auStack_48);
  __ZNSt13exception_ptrD1Ev(auStack_48);
  ___cxa_end_catch();
  return;
}



/* Entry: 10951a604; end: 10951a6d7;  */

void FUN_10951a604(long param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined1 auStack_48 [15];
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  plVar3 = (long *)(param_1 + 0x20);
  lVar2 = *plVar3;
  if (lVar2 != 0) {
    if ((*(byte *)(lVar2 + 0x88) & 1) == 0) {
      uStack_38 = 0;
      lVar2 = *(long *)(lVar2 + 0x10);
      __ZNSt13exception_ptrD1Ev(&uStack_38);
      if (lVar2 == 0) {
        uStack_38 = CONCAT44(uStack_38._4_4_,param_2);
        plVar1 = *(long **)(param_1 + 0x18);
        (**(code **)(*plVar1 + 0x28))(plVar1,&uStack_38);
        uStack_39 = SUB81(plVar1,0);
        func_0x000108820bcc(plVar3,&uStack_39);
        return;
      }
    }
    FUN_1094362d4(2);
  }
  FUN_1094362d4(3);
  ___cxa_begin_catch();
  __ZSt17current_exceptionv(auStack_48);
  FUN_10951a968(plVar3,auStack_48);
  __ZNSt13exception_ptrD1Ev(auStack_48);
  ___cxa_end_catch();
  return;
}



/* Entry: 10951a6d8; end: 10951a723;  */

long * FUN_10951a6d8(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x18;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x20;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 10951a724; end: 10951a84f;  */

undefined8 * FUN_10951a724(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  *param_1 = &PTR_FUN_110afa490;
  uVar8 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar8;
  param_1[3] = param_2[2];
  uVar9 = param_2[4];
  uVar8 = param_2[3];
  param_2[1] = 0;
  param_2[2] = 0;
  uVar10 = param_2[5];
  param_1[7] = param_2[6];
  param_1[6] = uVar10;
  uVar10 = param_2[7];
  param_1[9] = param_2[8];
  param_1[8] = uVar10;
  lVar5 = param_2[10];
  uVar11 = param_2[10];
  uVar10 = param_2[9];
  param_1[0xe] = 0;
  param_1[0xb] = uVar11;
  param_1[10] = uVar10;
  param_1[0xc] = param_1 + 5;
  param_1[0xd] = param_1 + 0xe;
  param_1[0xf] = 0;
  param_1[5] = uVar9;
  param_1[4] = uVar8;
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (*(int *)((long)param_2 + 0x1c) < 3) {
    puVar6 = (undefined8 *)param_2[0xc];
    puVar7 = (undefined8 *)param_1[0xd];
    *puVar7 = *puVar6;
    puVar7[1] = puVar6[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 0x24) = 0;
    func_0x000109a84868();
  }
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0xf);
  lVar5 = param_2[0x11];
  uVar8 = param_2[0x10];
  param_1[0x12] = param_2[0x11];
  param_1[0x11] = uVar8;
  if (lVar5 != 0) {
    plVar2 = (long *)(lVar5 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar9 = param_2[0x13];
  uVar8 = param_2[0x12];
  uVar10 = param_2[0x14];
  param_1[0x16] = param_2[0x15];
  param_1[0x15] = uVar10;
  param_1[0x14] = uVar9;
  param_1[0x13] = uVar8;
  uVar9 = param_2[0x17];
  uVar8 = param_2[0x16];
  uVar11 = param_2[0x19];
  uVar10 = param_2[0x18];
  uVar13 = param_2[0x1b];
  uVar12 = param_2[0x1a];
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_2 + 0x1c);
  param_1[0x1c] = uVar13;
  param_1[0x1b] = uVar12;
  param_1[0x1a] = uVar11;
  param_1[0x19] = uVar10;
  param_1[0x18] = uVar9;
  param_1[0x17] = uVar8;
  return param_1;
}



/* Entry: 10951a850; end: 10951a8c7;  */

undefined8 * FUN_10951a850(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afa490;
  FUN_1094d92f0(param_1 + 4);
  if (param_1[3] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10951a8c8; end: 10951a8eb;  */

void FUN_10951a8c8(long param_1,undefined8 param_2)

{
  FUN_10951a724(param_2,param_1 + 8);
  return;
}



/* Entry: 10951a8ec; end: 10951a957;  */

void FUN_10951a8ec(long param_1)

{
  FUN_1094d92f0(param_1 + 0x20);
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10951a958; end: 10951a967;  */

long * FUN_10951a958(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long lStack_58;
  long *plStack_50;
  undefined1 *puStack_48;
  
  lVar10 = *(long *)(param_1 + 8);
  lStack_58 = 0;
  plStack_50 = (long *)0x0;
  plVar7 = *(long **)(param_1 + 0x18);
  if (((plVar7 == (long *)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_50 = plVar7, plVar7 == (long *)0x0)) ||
     (lStack_58 = *(long *)(param_1 + 0x10), lStack_58 == 0)) {
    plVar7 = plStack_50;
    FUN_10937e740(&lStack_70,&UNK_10f572861);
    FUN_109388c6c(2,&UNK_10f572551,&UNK_10f55aaab,0x115,&lStack_70);
    if (lStack_60 < 0) {
      __ZdlPv(lStack_70);
    }
    plVar8 = (long *)0x0;
  }
  else {
    lVar9 = lVar10 + 0x1a8;
    __ZNSt3__15mutex4lockEv();
    dVar11 = *(double *)(param_1 + 0xe0);
    uVar3 = *(uint *)(param_1 + 0xe8);
    __ZNSt3__16chrono12system_clock3nowEv();
    if ((uVar3 & 1) == 0) {
      dVar11 = (double)lVar9 * 1e-06;
    }
    *(double *)(lVar10 + 0x140) = dVar11;
    *(undefined1 *)(lVar10 + 0x148) = 1;
    __ZNSt3__15mutex6unlockEv(lVar10 + 0x1a8);
    plVar8 = *(long **)(lVar10 + 0x200);
    lStack_70 = 0;
    plStack_68 = (long *)0x0;
    (**(code **)(*plVar8 + 0x20))(plVar8,param_1 + 0x20,&lStack_70);
    plVar7 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar1 = plStack_68 + 1;
      do {
        lVar9 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    plVar7 = *(long **)(lVar10 + 0x200);
    (**(code **)(*plVar7 + 0x30))();
    lStack_70 = 0;
    plStack_68 = (long *)0x0;
    lStack_60 = 0;
    FUN_109517e34(&lStack_70,*plVar7,plVar7[1],plVar7[1] - *plVar7 >> 7);
    if ((long *)lStack_70 != plStack_68) {
      uVar4 = *(undefined4 *)(lVar10 + 400);
      lVar9 = lStack_70;
      do {
        *(undefined4 *)(lVar9 + 0x60) = uVar4;
        lVar9 = lVar9 + 0x80;
      } while ((long *)lVar9 != plStack_68);
    }
    puVar2 = (undefined1 *)(lVar10 + 0x128);
    if ((long *)puVar2 != &lStack_70) {
      FUN_1094d8118(puVar2,lStack_70,plStack_68,(long)plStack_68 - lStack_70 >> 7);
    }
    FUN_1094fee98(lVar10 + 0x210,puVar2);
    puStack_48 = (undefined1 *)&lStack_70;
    FUN_1094d8bdc(&puStack_48);
    plVar7 = plStack_50;
  }
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return plVar8;
}



/* Entry: 10951a968; end: 10951a9c7;  */

void FUN_10951a968(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 auStack_28 [8];
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    __ZNSt13exception_ptrC1ERKS_(auStack_28);
    __ZNSt3__117__assoc_sub_state13set_exceptionESt13exception_ptr(lVar2,auStack_28);
    __ZNSt13exception_ptrD1Ev(auStack_28);
    return;
  }
  puVar1 = (undefined8 *)0x3;
  FUN_1094362d4();
  __ZNSt13exception_ptrD1Ev(auStack_28);
  __Unwind_Resume();
  *puVar1 = &PTR_FUN_110afa4f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10951a9c8; end: 10951a9d7;  */

void FUN_10951a9c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afa4f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10951a9d8; end: 10951a9f7;  */

void FUN_10951a9d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afa4f8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10951a9f8; end: 10951aa1f;  */

long * FUN_10951a9f8(long param_1)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_110af8b68;
  plVar1 = (long *)(param_1 + 0x20);
  func_0x0001094e84ec(plVar1,*(undefined8 *)(param_1 + 0x30));
  lVar2 = *plVar1;
  *plVar1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 10951aa20; end: 10951aa3f;  */

void FUN_10951aa20(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110afa548;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10951aa40; end: 10951aa4f;  */

void FUN_10951aa40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010951aa48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10951aa50; end: 10951aab3;  */

void FUN_10951aa50(long *param_1)

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



/* Entry: 10951aab4; end: 10951acbf;  */

void FUN_10951aab4(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 == (undefined8 *)*param_1) {
    uVar3 = param_1[2];
    uVar1 = param_1[3];
    if (uVar3 < uVar1) {
      lVar9 = (((long)(uVar1 - uVar3) >> 3) + 1) / 2;
      puVar5 = puVar8 + lVar9;
      if (uVar3 - (long)puVar8 != 0) {
        _memmove(puVar5,puVar8,uVar3 - (long)puVar8);
        uVar3 = param_1[2];
      }
      param_1[1] = (long)puVar5;
      param_1[2] = uVar3 + lVar9 * 8;
      puVar8 = puVar5;
    }
    else {
      lVar9 = (long)(uVar1 - (long)puVar8) >> 2;
      if (uVar1 - (long)puVar8 == 0) {
        lVar9 = 1;
      }
      lVar7 = lVar9 * 2;
      plVar2 = param_1;
      FUN_10951afcc();
      puVar8 = (undefined8 *)((long)plVar2 + (lVar7 + 6U & 0xfffffffffffffff8));
      lVar7 = param_1[2] - param_1[1];
      puVar5 = puVar8;
      if (lVar7 != 0) {
        puVar5 = (undefined8 *)((long)puVar8 + lVar7);
        puVar4 = (undefined8 *)param_1[1];
        puVar6 = puVar8;
        do {
          *puVar6 = *puVar4;
          lVar7 = lVar7 + -8;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (lVar7 != 0);
      }
      lVar7 = *param_1;
      *param_1 = (long)plVar2;
      param_1[1] = (long)puVar8;
      param_1[2] = (long)puVar5;
      param_1[3] = (long)(plVar2 + lVar9);
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



/* Entry: 10951acc0; end: 10951afcb;  */

void FUN_10951acc0(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  
  puVar7 = (ulong *)param_1[2];
  if (puVar7 == (ulong *)param_1[3]) {
    uVar5 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      uVar4 = (long)((long)puVar7 - uVar5) >> 2;
      if ((long)puVar7 - uVar5 == 0) {
        uVar4 = 1;
      }
      puVar3 = param_1;
      uVar5 = uVar4;
      FUN_10951afcc();
      puVar1 = puVar3 + (uVar4 >> 2);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (ulong *)((long)puVar1 + lVar8);
        puVar6 = (ulong *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar4 = *param_1;
      *param_1 = (ulong)puVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = (ulong)(puVar3 + uVar5);
      if (uVar4 != 0) {
        __ZdlPv(uVar4);
        puVar7 = (ulong *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar5) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (ulong *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10951afcc; end: 10951b0d3;  */

void FUN_10951afcc(long *param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104c4f740();
  *param_1 = (long)(PTR___ZTVNSt3__117__assoc_sub_stateE_110346b28 + 0x10);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  __ZNSt13exception_ptrD1Ev(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114__shared_countD2Ev_110346530)(param_1);
  return;
}



/* Entry: 10951b0d4; end: 10951b1a3;  */

undefined8 * FUN_10951b0d4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    if ((*(byte *)(plVar5 + 0x11) & 1) == 0) {
      uStack_38 = 0;
      lVar6 = plVar5[2];
      puVar4 = &uStack_38;
      __ZNSt13exception_ptrD1Ev(puVar4);
      plVar5 = (long *)*param_1;
      if ((lVar6 == 0) && (0 < plVar5[1])) {
        __ZNSt3__115future_categoryEv();
        __ZNSt3__112future_errorC1ENS_10error_codeE(auStack_60,4,puVar4);
        FUN_1094a38bc(auStack_40,auStack_60);
        __ZNSt3__117__assoc_sub_state13set_exceptionESt13exception_ptr(plVar5,auStack_40);
        __ZNSt13exception_ptrD1Ev(auStack_40);
        __ZNSt3__112future_errorD1Ev(auStack_60);
        plVar5 = (long *)*param_1;
      }
    }
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10951b1a4; end: 10951b32b;  */

void FUN_10951b1a4(long param_1,undefined8 *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
    uStack_38 = 0;
    lVar8 = *(long *)(param_1 + 0x10);
    __ZNSt13exception_ptrD1Ev(&uStack_38);
    if (lVar8 == 0) {
      uVar10 = param_2[1];
      uVar9 = *param_2;
      uVar11 = param_2[2];
      *(undefined8 *)(param_1 + 0xa8) = param_2[3];
      *(undefined8 *)(param_1 + 0xa0) = uVar11;
      uVar11 = param_2[4];
      *(undefined8 *)(param_1 + 0xb8) = param_2[5];
      *(undefined8 *)(param_1 + 0xb0) = uVar11;
      lVar8 = param_2[7];
      uVar12 = param_2[7];
      uVar11 = param_2[6];
      *(undefined8 *)(param_1 + 0xe0) = 0;
      *(undefined8 *)(param_1 + 200) = uVar12;
      *(undefined8 *)(param_1 + 0xc0) = uVar11;
      *(long *)(param_1 + 0xd0) = param_1 + 0x98;
      *(undefined8 **)(param_1 + 0xd8) = (undefined8 *)(param_1 + 0xe0);
      *(undefined8 *)(param_1 + 0xe8) = 0;
      *(undefined8 *)(param_1 + 0x98) = uVar10;
      *(undefined8 *)(param_1 + 0x90) = uVar9;
      if (lVar8 != 0) {
        piVar1 = (int *)(lVar8 + 0x14);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (*(int *)((long)param_2 + 4) < 3) {
        puVar6 = (undefined8 *)param_2[9];
        puVar7 = *(undefined8 **)(param_1 + 0xd8);
        *puVar7 = *puVar6;
        puVar7[1] = puVar6[1];
      }
      else {
        *(undefined4 *)(param_1 + 0x94) = 0;
        func_0x000109a84868((undefined8 *)(param_1 + 0x90),param_2);
      }
      *(undefined1 *)(param_1 + 0xf0) = *(undefined1 *)(param_2 + 0xc);
      lVar8 = param_2[0xe];
      uVar9 = param_2[0xd];
      *(undefined8 *)(param_1 + 0x100) = param_2[0xe];
      *(undefined8 *)(param_1 + 0xf8) = uVar9;
      if (lVar8 != 0) {
        plVar2 = (long *)(lVar8 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = *plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uVar9 = param_2[0xf];
      uVar11 = param_2[0x12];
      uVar10 = param_2[0x11];
      *(undefined8 *)(param_1 + 0x110) = param_2[0x10];
      *(undefined8 *)(param_1 + 0x108) = uVar9;
      *(undefined8 *)(param_1 + 0x120) = uVar11;
      *(undefined8 *)(param_1 + 0x118) = uVar10;
      uVar10 = param_2[0x14];
      uVar9 = param_2[0x13];
      uVar12 = param_2[0x16];
      uVar11 = param_2[0x15];
      uVar14 = param_2[0x18];
      uVar13 = param_2[0x17];
      *(undefined1 *)(param_1 + 0x158) = *(undefined1 *)(param_2 + 0x19);
      *(undefined8 *)(param_1 + 0x140) = uVar12;
      *(undefined8 *)(param_1 + 0x138) = uVar11;
      *(undefined8 *)(param_1 + 0x150) = uVar14;
      *(undefined8 *)(param_1 + 0x148) = uVar13;
      *(undefined8 *)(param_1 + 0x130) = uVar10;
      *(undefined8 *)(param_1 + 0x128) = uVar9;
      *(undefined1 *)(param_1 + 0x160) = *(undefined1 *)(param_2 + 0x1a);
      uVar9 = *(undefined8 *)((long)param_2 + 0xd4);
      *(undefined8 *)(param_1 + 0x16c) = *(undefined8 *)((long)param_2 + 0xdc);
      *(undefined8 *)(param_1 + 0x164) = uVar9;
      *(undefined1 *)(param_1 + 0x174) = *(undefined1 *)((long)param_2 + 0xe4);
      *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 5;
      __ZNSt3__118condition_variable10notify_allEv(param_1 + 0x58);
      __ZNSt3__15mutex6unlockEv(param_1 + 0x18);
      return;
    }
  }
  FUN_1094362d4(2);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10951b318);
  (*pcVar5)();
}



/* Entry: 10951b32c; end: 10951b39f;  */

void FUN_10951b32c(long param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_2 + 0x40);
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else if (plVar1 == (long *)(param_2 + 0x28)) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1 + 0x28);
    *(long *)(param_1 + 0x40) = param_1 + 0x28;
  }
  else {
    *(long **)(param_1 + 0x40) = plVar1;
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x48) = 0;
  return;
}



/* Entry: 10951b3a0; end: 10951b3c7;  */

long * FUN_10951b3a0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  FUN_10951b0d4(param_1 + 0x48);
  plVar1 = (long *)(param_1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x40);
  if (plVar2 == plVar1) {
    lVar3 = 0x18;
  }
  else {
    if (plVar2 == (long *)0x0) {
      return plVar1;
    }
    lVar3 = 0x20;
  }
  (**(code **)(*plVar2 + lVar3))();
  return plVar1;
}



/* Entry: 10951b3c8; end: 10951b4c7;  */

void FUN_10951b3c8(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 auStack_120 [29];
  undefined4 uStack_34;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  lVar2 = *(long *)(lVar3 + 0x48);
  if (lVar2 != 0) {
    if ((*(byte *)(lVar2 + 0x88) & 1) == 0) {
      auStack_120[0] = 0;
      lVar2 = *(long *)(lVar2 + 0x10);
      __ZNSt13exception_ptrD1Ev(auStack_120);
      if (lVar2 == 0) {
        uStack_34 = 0;
        (**(code **)(**(long **)(lVar3 + 0x40) + 0x28))
                  (auStack_120,*(long **)(lVar3 + 0x40),&uStack_34);
        if (*(long *)(lVar3 + 0x48) != 0) {
          FUN_10951b1a4(*(long *)(lVar3 + 0x48),auStack_120);
          FUN_1094d92f0(auStack_120);
          return;
        }
        goto LAB_10951b460;
      }
    }
    FUN_1094362d4(2);
  }
  FUN_1094362d4(3);
LAB_10951b460:
  FUN_1094362d4(3);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10951b46c);
  (*pcVar1)();
}



/* Entry: 10951b4c8; end: 10951b513;  */

long * FUN_10951b4c8(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x18;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x20;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 10951b514; end: 10951b547;  */

void FUN_10951b514(void)

{
  return;
}



/* Entry: 10951b548; end: 10951b62f;  */

void FUN_10951b548(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  iVar1 = *(int *)(param_2 + 0x18);
  lVar5 = (long)iVar1;
  plVar4 = *(long **)(param_2 + 8);
  lVar6 = plVar4[0x22];
  (**(code **)(*plVar4 + 0x68))(plVar4,*(undefined8 *)(lVar6 + lVar5 * 8));
  lVar3 = *(long *)(lVar6 + lVar5 * 8);
  if (*(char *)(plVar4[0x3d] + 0x65) == '\x01') {
    lVar2 = *(long *)(lVar3 + 0x20) + 0xb8;
    func_0x0001094e1e48(lVar2,plVar4[0x3d] + 0x68);
    lVar3 = *(long *)(lVar6 + lVar5 * 8);
    if (lVar2 != 0) {
      lVar5 = *(long *)(lVar3 + 0x20);
      *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)(lVar2 + 0x28);
      *(undefined4 *)(lVar5 + 0x38) = *(undefined4 *)(lVar2 + 0x30);
    }
  }
  (**(code **)(*plVar4 + 0x48))
            (param_1,plVar4,*(undefined8 *)(param_2 + 0x10),lVar3 + 0xc,
             *(long *)(lVar3 + 0x20) + 0x30);
  FUN_1094f60dc(param_1,*(undefined1 *)(*(long *)(plVar4[0x3e] + 0x18) + 0x70),
                plVar4[0x2c] + (long)iVar1 * 0x60);
  return;
}



/* Entry: 10951b630; end: 10951b68f;  */

undefined1  [16] FUN_10951b630(long param_1,ulong param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auStack_28 [8];
  
  if (param_1 != 0) {
    __ZNSt13exception_ptrC1ERKS_(auStack_28);
    puVar5 = auStack_28;
    __ZNSt3__117__assoc_sub_state13set_exceptionESt13exception_ptr(param_1,puVar5);
    puVar1 = auStack_28;
    __ZNSt13exception_ptrD1Ev(puVar1);
    auVar7._8_8_ = puVar5;
    auVar7._0_8_ = puVar1;
    return auVar7;
  }
  uVar2 = 3;
  FUN_1094362d4();
  __ZNSt13exception_ptrD1Ev(auStack_28);
  __Unwind_Resume(uVar2);
  plVar3 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 < 0x555555555555556) {
    lVar4 = param_2 * 0x30;
    __Znwm(lVar4);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar4;
    return auVar8;
  }
  func_0x000104c4f740();
  lVar4 = plVar3[1];
  lVar6 = plVar3[2];
  while (lVar6 != lVar4) {
    plVar3[2] = lVar6 + -0x30;
    FUN_10950c748();
    lVar6 = plVar3[2];
  }
  if (*plVar3 != 0) {
    __ZdlPv();
  }
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = plVar3;
  return auVar9;
}



/* Entry: 10951b690; end: 10951b6a3;  */

undefined1  [16] FUN_10951b690(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 < 0x555555555555556) {
    lVar2 = param_2 * 0x30;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000104c4f740();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x30;
    FUN_10950c748();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10951b6a4; end: 10951b733;  */

undefined1  [16] FUN_10951b6a4(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 < 0x555555555555556) {
    lVar1 = param_2 * 0x30;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104c4f740();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x30;
    FUN_10950c748();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10951b734; end: 10951b837;  */

void FUN_10951b734(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  
  puVar7 = (ulong *)param_1[2];
  if (puVar7 == (ulong *)param_1[3]) {
    uVar5 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      uVar4 = (long)((long)puVar7 - uVar5) >> 2;
      if ((long)puVar7 - uVar5 == 0) {
        uVar4 = 1;
      }
      puVar3 = param_1;
      uVar5 = uVar4;
      FUN_10951afcc();
      puVar1 = puVar3 + (uVar4 >> 2);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (ulong *)((long)puVar1 + lVar8);
        puVar6 = (ulong *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar4 = *param_1;
      *param_1 = (ulong)puVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = (ulong)(puVar3 + uVar5);
      if (uVar4 != 0) {
        __ZdlPv(uVar4);
        puVar7 = (ulong *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar5) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (ulong *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10951b838; end: 10951b93f;  */

void FUN_10951b838(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 == (undefined8 *)*param_1) {
    uVar3 = param_1[2];
    uVar1 = param_1[3];
    if (uVar3 < uVar1) {
      lVar9 = (((long)(uVar1 - uVar3) >> 3) + 1) / 2;
      puVar5 = puVar8 + lVar9;
      if (uVar3 - (long)puVar8 != 0) {
        _memmove(puVar5,puVar8,uVar3 - (long)puVar8);
        uVar3 = param_1[2];
      }
      param_1[1] = (long)puVar5;
      param_1[2] = uVar3 + lVar9 * 8;
      puVar8 = puVar5;
    }
    else {
      lVar9 = (long)(uVar1 - (long)puVar8) >> 2;
      if (uVar1 - (long)puVar8 == 0) {
        lVar9 = 1;
      }
      lVar7 = lVar9 * 2;
      lVar2 = param_1[4];
      FUN_10951afcc();
      puVar8 = (undefined8 *)(lVar2 + (lVar7 + 6U & 0xfffffffffffffff8));
      lVar7 = param_1[2] - param_1[1];
      puVar5 = puVar8;
      if (lVar7 != 0) {
        puVar5 = (undefined8 *)((long)puVar8 + lVar7);
        puVar4 = (undefined8 *)param_1[1];
        puVar6 = puVar8;
        do {
          *puVar6 = *puVar4;
          lVar7 = lVar7 + -8;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (lVar7 != 0);
      }
      lVar7 = *param_1;
      *param_1 = lVar2;
      param_1[1] = (long)puVar8;
      param_1[2] = (long)puVar5;
      param_1[3] = lVar2 + lVar9 * 8;
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



/* Entry: 10951b940; end: 10951ba03;  */

long FUN_10951b940(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  long lStack_40;
  char cStack_38;
  
  lStack_40 = param_1 + 0x18;
  cStack_38 = '\x01';
  __ZNSt3__15mutex4lockEv();
  __ZNSt3__117__assoc_sub_state10__sub_waitERNS_11unique_lockINS_5mutexEEE(param_1,&lStack_40);
  lVar2 = *(long *)(param_1 + 0x10);
  uStack_48 = 0;
  __ZNSt13exception_ptrD1Ev(&uStack_48);
  if (lVar2 == 0) {
    if (cStack_38 == '\x01') {
      __ZNSt3__15mutex6unlockEv(lStack_40);
    }
    return param_1 + 0x90;
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_50,(long *)(param_1 + 0x10));
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_50);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10951b9d4);
  (*pcVar1)();
}



/* Entry: 10951ba04; end: 10951ba77;  */

void FUN_10951ba04(long param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_2 + 0x40);
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else if (plVar1 == (long *)(param_2 + 0x28)) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1 + 0x28);
    *(long *)(param_1 + 0x40) = param_1 + 0x28;
  }
  else {
    *(long **)(param_1 + 0x40) = plVar1;
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x48) = 0;
  return;
}



/* Entry: 10951ba78; end: 10951ba9f;  */

long * FUN_10951ba78(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  __ZNSt3__17promiseIvED1Ev(param_1 + 0x48);
  plVar1 = (long *)(param_1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x40);
  if (plVar2 == plVar1) {
    lVar3 = 0x18;
  }
  else {
    if (plVar2 == (long *)0x0) {
      return plVar1;
    }
    lVar3 = 0x20;
  }
  (**(code **)(*plVar2 + lVar3))();
  return plVar1;
}



/* Entry: 10951baa0; end: 10951bab3;  */

void FUN_10951baa0(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 auStack_40 [8];
  ulong uStack_38;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  plVar4 = (long *)(lVar3 + 0x48);
  lVar2 = *plVar4;
  if (lVar2 != 0) {
    if ((*(byte *)(lVar2 + 0x88) & 1) == 0) {
      uStack_38 = 0;
      lVar2 = *(long *)(lVar2 + 0x10);
      __ZNSt13exception_ptrD1Ev(&uStack_38);
      if (lVar2 == 0) {
        uStack_38 = uStack_38 & 0xffffffff00000000;
        plVar1 = *(long **)(lVar3 + 0x40);
        (**(code **)(*plVar1 + 0x28))(plVar1,&uStack_38);
        __ZNSt3__17promiseIvE9set_valueEv(plVar4);
        return;
      }
    }
    FUN_1094362d4(2);
  }
  FUN_1094362d4(3);
  ___cxa_begin_catch();
  __ZSt17current_exceptionv(auStack_40);
  __ZNSt3__17promiseIvE13set_exceptionESt13exception_ptr(plVar4,auStack_40);
  __ZNSt13exception_ptrD1Ev(auStack_40);
  ___cxa_end_catch();
  return;
}



/* Entry: 10951bab4; end: 10951bb13;  */

undefined8 * FUN_10951bab4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afa6a8;
  FUN_1094d92f0(param_1 + 7);
  return param_1;
}



/* Entry: 10951bb14; end: 10951bb63;  */

void FUN_10951bb14(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_2 = &PTR_FUN_110afa6a8;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  *(undefined4 *)(param_2 + 5) = *(undefined4 *)(param_1 + 0x28);
  param_2[6] = *(undefined8 *)(param_1 + 0x30);
  FUN_10951bbac(param_2 + 7,param_1 + 0x38);
  return;
}



/* Entry: 10951bb64; end: 10951bb6b;  */

long FUN_10951bb64(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  func_0x0001094d95d8(param_1 + 0xa0);
  if (*(long *)(param_1 + 0x70) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x70) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x38);
    }
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (0 < *(int *)(param_1 + 0x3c)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x78);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x3c));
  }
  lVar5 = *(long *)(param_1 + 0x80);
  if (lVar5 != param_1 + 0x88 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1 + 0x38;
}



/* Entry: 10951bb6c; end: 10951bb93;  */

void FUN_10951bb6c(long param_1)

{
  FUN_1094d92f0(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10951bb94; end: 10951bbab;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10951bb94(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plStack_220;
  double dStack_218;
  double dStack_210;
  double dStack_208;
  double dStack_200;
  double dStack_1f8;
  double dStack_1f0;
  double dStack_1e8;
  double dStack_1e0;
  double dStack_1d8;
  double dStack_1d0;
  double dStack_1c8;
  double dStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  double dStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  long lStack_78;
  long lStack_70;
  
  iVar4 = *(int *)(param_1 + 0x28);
  plVar11 = *(long **)(param_1 + 8);
  FUN_10952c7c4(&lStack_78,plVar11[0x3e],*(undefined8 *)(param_1 + 0x30),
                plVar11[0x2f] + (long)iVar4 * 8);
  if (lStack_78 == lStack_70) {
    plVar12 = (long *)(plVar11[0x22] + (long)iVar4 * 8);
  }
  else {
    uVar3 = **(undefined4 **)(param_1 + 0x10);
    lVar5 = lStack_78;
    do {
      *(undefined4 *)(lVar5 + 0x17c) = uVar3;
      lVar5 = lVar5 + 0x180;
    } while (lVar5 != lStack_70);
    plVar12 = (long *)(plVar11[0x22] + (long)iVar4 * 8);
    if (((*(byte *)(lStack_78 + 100) & 1) == 0) ||
       (*(float *)(plVar11[0x3d] + 0x14) <= *(float *)(lStack_78 + 0x60))) {
      uStack_80 = 0;
      uStack_c0 = uStack_c0 & 0xffffffffffffff00;
      lVar5 = *(long *)(param_1 + 0x20);
      uStack_d0 = **(undefined8 **)(param_1 + 0x18);
      if ((*(long *)(lVar5 + 0x68) != 0) && (*(char *)(lVar5 + 0xb8) == '\x01')) {
        FUN_10951a084(&plStack_220,*(long *)(lVar5 + 0x68) + 0x130);
        lVar7 = 0;
        uStack_198 = CONCAT44((float)dStack_208,(float)dStack_210);
        uStack_1a0 = CONCAT44((float)dStack_218,(float)(double)plStack_220);
        uStack_188 = CONCAT44((float)dStack_1e8,(float)dStack_1f0);
        uStack_190 = CONCAT44((float)dStack_1f8,(float)dStack_200);
        uStack_178 = CONCAT44((float)dStack_1c8,(float)dStack_1d0);
        uStack_180 = CONCAT44((float)dStack_1d8,(float)dStack_1e0);
        uStack_168 = CONCAT44((float)dStack_1a8,(float)dStack_1b0);
        uStack_170 = CONCAT44((float)dStack_1b8,(float)dStack_1c0);
        auStack_158 = (undefined1  [8])0x0;
        auStack_160 = (undefined1  [8])0x3f800000;
        uStack_148 = 0;
        uStack_150 = 0x3f80000000000000;
        puVar8 = &uStack_1a0;
        uStack_138 = 0x3f800000;
        uStack_140 = 0;
        uStack_128 = 0x3f80000000000000;
        uStack_130 = 0;
        do {
          lVar9 = 0;
          lVar10 = 0;
          do {
            iVar6 = (int)lVar7;
            puVar2 = (undefined8 *)((long)auStack_158 + lVar10 * 0x10 + 4);
            if (iVar6 != 3) {
              puVar2 = (undefined8 *)((long)auStack_160 + lVar9);
            }
            puVar1 = (undefined8 *)((long)auStack_158 + lVar10 * 2 * 8);
            if (iVar6 != 2) {
              puVar1 = puVar2;
            }
            puVar2 = (undefined8 *)((long)auStack_160 + lVar10 * 0x10 + 4);
            if (iVar6 != 1) {
              puVar2 = puVar1;
            }
            *(undefined4 *)puVar2 = *(undefined4 *)((long)puVar8 + lVar9);
            lVar10 = lVar10 + 1;
            lVar9 = lVar9 + 0x10;
          } while (lVar9 != 0x40);
          lVar7 = lVar7 + 1;
          puVar8 = (undefined8 *)((long)puVar8 + 4);
        } while (lVar7 != 4);
        FUN_109519fd0(&uStack_118,auStack_160,*(long *)(param_1 + 0x20) + 0x78);
        uStack_b8 = uStack_110;
        uStack_c0 = uStack_118;
        uStack_a8 = uStack_100;
        uStack_b0 = uStack_108;
        uStack_98 = uStack_f0;
        uStack_a0 = uStack_f8;
        uStack_88 = uStack_e0;
        uStack_90 = uStack_e8;
        uStack_80 = 1;
      }
      uStack_c8 = *(undefined8 *)(lVar5 + 8);
      FUN_1094fd9f4(*(undefined8 *)(*plVar12 + 0x20),lStack_78);
      lVar5 = *plVar12;
      lVar7 = *(long *)(lVar5 + 0x20);
      if (*(char *)(lVar7 + 0x214) == '\x01') {
        *(int *)(lVar7 + 0x1ec) = *(int *)(lVar7 + 0x1ec) + 1;
      }
      (**(code **)(*plVar11 + 0x60))
                (plVar11,lVar5,**(undefined8 **)(param_1 + 0x18),auStack_d8,param_1 + 0x38,iVar4);
      goto LAB_109517020;
    }
  }
  *(undefined4 *)(*plVar12 + 8) = 0;
LAB_109517020:
  plStack_220 = &lStack_78;
  FUN_1095036c4(&plStack_220);
  return;
}



/* Entry: 10951bbac; end: 10951bcc3;  */

undefined8 * FUN_10951bbac(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar8 = *param_2;
  uVar10 = param_2[3];
  uVar9 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar8;
  param_1[3] = uVar10;
  param_1[2] = uVar9;
  uVar8 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar8;
  lVar5 = param_2[7];
  uVar8 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar8;
  param_1[10] = 0;
  param_1[8] = param_1 + 1;
  param_1[9] = param_1 + 10;
  param_1[0xb] = 0;
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (*(int *)((long)param_2 + 4) < 3) {
    puVar6 = (undefined8 *)param_2[9];
    puVar7 = (undefined8 *)param_1[9];
    *puVar7 = *puVar6;
    puVar7[1] = puVar6[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 4) = 0;
    func_0x000109a84868(param_1,param_2);
  }
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  lVar5 = param_2[0xe];
  uVar8 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar8;
  if (lVar5 != 0) {
    plVar2 = (long *)(lVar5 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar9 = param_2[0x10];
  uVar8 = param_2[0xf];
  uVar10 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar10;
  param_1[0x10] = uVar9;
  param_1[0xf] = uVar8;
  uVar9 = param_2[0x14];
  uVar8 = param_2[0x13];
  uVar11 = param_2[0x16];
  uVar10 = param_2[0x15];
  uVar13 = param_2[0x18];
  uVar12 = param_2[0x17];
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  param_1[0x18] = uVar13;
  param_1[0x17] = uVar12;
  param_1[0x16] = uVar11;
  param_1[0x15] = uVar10;
  param_1[0x14] = uVar9;
  param_1[0x13] = uVar8;
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
  uVar8 = *(undefined8 *)((long)param_2 + 0xd4);
  *(undefined8 *)((long)param_1 + 0xdc) = *(undefined8 *)((long)param_2 + 0xdc);
  *(undefined8 *)((long)param_1 + 0xd4) = uVar8;
  *(undefined1 *)((long)param_1 + 0xe4) = *(undefined1 *)((long)param_2 + 0xe4);
  return param_1;
}



/* Entry: 10951bcc4; end: 10951bce7;  */

bool FUN_10951bcc4(undefined8 param_1,long param_2,long param_3)

{
  return *(float *)(param_3 + 0x28) < *(float *)(param_2 + 0x28);
}



/* Entry: 10951bce8; end: 10951be87;  */

undefined8 * FUN_10951bce8(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined ***pppuVar3;
  long lVar4;
  undefined ***apppuStack_60 [2];
  char cStack_49;
  undefined **ppuStack_48;
  code *pcStack_40;
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  func_0x000107c31940(apppuStack_60,&UNK_10f5728c4);
  puVar2 = param_1;
  FUN_10951c00c(param_1,apppuStack_60,apppuStack_60);
  ppuStack_48 = &PTR_FUN_110afa780;
  pcStack_40 = (code *)0x10951bfd8;
  pppuStack_30 = &ppuStack_48;
  FUN_10951c500(&ppuStack_48,puVar2 + 5);
  if (pppuStack_30 == &ppuStack_48) {
    lVar4 = 0x20;
LAB_10951bd84:
    (**(code **)((long)*pppuStack_30 + lVar4))();
  }
  else if (pppuStack_30 != (undefined ***)0x0) {
    lVar4 = 0x28;
    goto LAB_10951bd84;
  }
  if (cStack_49 < '\0') {
    __ZdlPv(apppuStack_60[0]);
  }
  func_0x000107c31940(apppuStack_60,&UNK_10f5728cf);
  puVar2 = param_1;
  FUN_10951c00c(param_1,apppuStack_60,apppuStack_60);
  ppuStack_48 = &PTR_FUN_110afa830;
  pcStack_40 = FUN_10951c66c;
  pppuStack_30 = &ppuStack_48;
  FUN_10951c500(&ppuStack_48,puVar2 + 5);
  pppuVar3 = pppuStack_30;
  if (pppuStack_30 == &ppuStack_48) {
    lVar4 = 0x20;
  }
  else {
    if (pppuStack_30 == (undefined ***)0x0) goto LAB_10951be14;
    lVar4 = 0x28;
  }
  (**(code **)((long)*pppuStack_30 + lVar4))();
LAB_10951be14:
  if (cStack_49 < '\0') {
    pppuVar3 = apppuStack_60[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  if (cStack_49 < '\0') {
    __ZdlPv(apppuStack_60[0]);
  }
  FUN_10951bf1c(param_1);
  __Unwind_Resume(pppuVar3);
  if ((bRam0000000113829f28 & 1) == 0) {
    iVar1 = 0x13829f28;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10951bce8(0x113829f00);
      ___cxa_atexit(FUN_10951bf18,0x113829f00,0x100000000);
      ___cxa_guard_release(0x113829f28);
    }
  }
  return (undefined8 *)0x113829f00;
}



/* Entry: 10951be88; end: 10951bf17;  */

undefined8 FUN_10951be88(void)

{
  int iVar1;
  
  if ((bRam0000000113829f28 & 1) == 0) {
    iVar1 = 0x13829f28;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10951bce8(0x113829f00);
      ___cxa_atexit(FUN_10951bf18,0x113829f00,0x100000000);
      ___cxa_guard_release(0x113829f28);
    }
  }
  return 0x113829f00;
}



/* Entry: 10951bf18; end: 10951bf1b;  */

long * FUN_10951bf18(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10951bf78(plVar1 + 2);
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



/* Entry: 10951bf1c; end: 10951bf77;  */

long * FUN_10951bf1c(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10951bf78(plVar1 + 2);
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



/* Entry: 10951bf78; end: 10951c00b;  */

void FUN_10951bf78(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[6];
  if (plVar1 == param_1 + 3) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_10951bfb4;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_10951bfb4:
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10951c00c; end: 10951c40f;  */

long * FUN_10951c00c(long *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *unaff_x25;
  ulong uVar14;
  
  plVar8 = param_1;
  func_0x000107c31944();
  plVar13 = (long *)param_1[1];
  if (plVar13 != (long *)0x0) {
    uVar14 = (long)plVar13 - 1;
    if (((ulong)plVar13 & uVar14) == 0) {
      unaff_x25 = (long *)(uVar14 & (ulong)plVar8);
    }
    else {
      unaff_x25 = plVar8;
      if (plVar13 <= plVar8) {
        uVar1 = 0;
        if (plVar13 != (long *)0x0) {
          uVar1 = (ulong)plVar8 / (ulong)plVar13;
        }
        unaff_x25 = (long *)((long)plVar8 - uVar1 * (long)plVar13);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        plVar6 = (long *)plVar5[1];
        if (plVar6 == plVar8) {
          plVar6 = param_1;
          func_0x000104c4fbc4(param_1,plVar5 + 2,param_2);
          if (((ulong)plVar6 & 1) != 0) {
            return plVar5;
          }
        }
        else {
          if (((ulong)plVar13 & uVar14) == 0) {
            plVar6 = (long *)((ulong)plVar6 & uVar14);
          }
          else if (plVar13 <= plVar6) {
            uVar1 = 0;
            if (plVar13 != (long *)0x0) {
              uVar1 = (ulong)plVar6 / (ulong)plVar13;
            }
            plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar13);
          }
          if (plVar6 != unaff_x25) break;
        }
      }
    }
  }
  plVar5 = (long *)0x48;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = (long)plVar8;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar5 + 2,*param_3,param_3[1]);
  }
  else {
    lVar3 = *param_3;
    plVar5[3] = param_3[1];
    plVar5[2] = lVar3;
    plVar5[4] = param_3[2];
  }
  plVar5[8] = 0;
  if ((plVar13 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar13)) goto LAB_10951c320;
  uVar14 = 1;
  if ((long *)0x2 < plVar13) {
    uVar14 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
  }
  plVar6 = (long *)(uVar14 | (long)plVar13 << 1);
  plVar13 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar6 <= plVar13) {
    plVar6 = plVar13;
  }
  if ((long)plVar6 - 1U == 0) {
    plVar6 = (long *)0x2;
  }
  else if (((ulong)plVar6 & (long)plVar6 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar13 = (long *)param_1[1];
  if (plVar13 < plVar6) {
LAB_10951c1a8:
    if ((ulong)plVar6 >> 0x3d != 0) {
      func_0x000104c4f740();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10951c3f8);
      (*pcVar2)();
    }
    lVar3 = (long)plVar6 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    plVar13 = (long *)0x0;
    param_1[1] = (long)plVar6;
    do {
      *(undefined8 *)(*param_1 + (long)plVar13 * 8) = 0;
      plVar13 = (long *)((long)plVar13 + 1);
    } while (plVar6 != plVar13);
    plVar7 = (long *)param_1[2];
    plVar13 = plVar6;
    if (plVar7 != (long *)0x0) {
      plVar9 = (long *)plVar7[1];
      uVar14 = (long)plVar6 - 1;
      if (((ulong)plVar6 & uVar14) == 0) {
        plVar9 = (long *)((ulong)plVar9 & uVar14);
      }
      else if (plVar6 <= plVar9) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)plVar6;
        }
        plVar9 = (long *)((long)plVar9 - uVar1 * (long)plVar6);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar7;
      while (plVar10 != (long *)0x0) {
        plVar12 = (long *)plVar10[1];
        if (((ulong)plVar6 & uVar14) == 0) {
          plVar12 = (long *)((ulong)plVar12 & uVar14);
        }
        else if (plVar6 <= plVar12) {
          uVar1 = 0;
          if (plVar6 != (long *)0x0) {
            uVar1 = (ulong)plVar12 / (ulong)plVar6;
          }
          plVar12 = (long *)((long)plVar12 - uVar1 * (long)plVar6);
        }
        plVar11 = plVar10;
        if (plVar12 != plVar9) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)plVar12 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar12 * 8) = plVar7;
            plVar9 = plVar12;
          }
          else {
            *plVar7 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar3 + (long)plVar12 * 8);
            **(long **)(lVar3 + (long)plVar12 * 8) = (long)plVar10;
            plVar11 = plVar7;
          }
        }
        plVar7 = plVar11;
        plVar10 = (long *)*plVar11;
      }
    }
  }
  else if (plVar6 < plVar13) {
    plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar13 < (long *)0x3) || (((ulong)plVar13 & (long)plVar13 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar7) {
      plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 + -1) & 0x3fU));
    }
    if (plVar6 <= plVar7) {
      plVar6 = plVar7;
    }
    if (plVar6 < plVar13) {
      if (plVar6 != (long *)0x0) goto LAB_10951c1a8;
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
    unaff_x25 = (long *)((long)plVar13 - 1U & (ulong)plVar8);
  }
  else {
    unaff_x25 = plVar8;
    if (plVar13 <= plVar8) {
      uVar14 = 0;
      if (plVar13 != (long *)0x0) {
        uVar14 = (ulong)plVar8 / (ulong)plVar13;
      }
      unaff_x25 = (long *)((long)plVar8 - uVar14 * (long)plVar13);
    }
  }
LAB_10951c320:
  lVar3 = *param_1;
  plVar8 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar8;
    if (*plVar5 != 0) {
      plVar8 = *(long **)(*plVar5 + 8);
      if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (long)plVar13 - 1U);
      }
      else if (plVar13 <= plVar8) {
        uVar14 = 0;
        if (plVar13 != (long *)0x0) {
          uVar14 = (ulong)plVar8 / (ulong)plVar13;
        }
        plVar8 = (long *)((long)plVar8 - uVar14 * (long)plVar13);
      }
      *(long **)(*param_1 + (long)plVar8 * 8) = plVar5;
    }
  }
  else {
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
  }
  param_1[3] = param_1[3] + 1;
  return plVar5;
}



/* Entry: 10951c410; end: 10951c457;  */

void FUN_10951c410(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10951bf78(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10951c458; end: 10951c45f;  */

void FUN_10951c458(void)

{
  return;
}



/* Entry: 10951c460; end: 10951c493;  */

void FUN_10951c460(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110afa780;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10951c494; end: 10951c4b7;  */

void FUN_10951c494(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110afa780;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10951c4b8; end: 10951c4f3;  */

long FUN_10951c4b8(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110afa800);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10951c4f4; end: 10951c4ff;  */

undefined ** FUN_10951c4f4(void)

{
  return &PTR_DAT_110afa800;
}



/* Entry: 10951c500; end: 10951c66b;  */

void FUN_10951c500(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *extraout_x8;
  long alStack_40 [3];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_2;
  if (param_2 != param_1) {
    plVar1 = (long *)param_1[3];
    plVar5 = (long *)param_2[3];
    if (plVar1 == param_1) {
      if (plVar5 == param_2) {
        (**(code **)(*plVar1 + 0x18))(plVar1,alStack_40);
        (**(code **)(*(long *)param_1[3] + 0x20))();
        param_1[3] = 0;
        (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
        (**(code **)(*(long *)param_2[3] + 0x20))();
        param_2[3] = 0;
        param_1[3] = (long)param_1;
        (**(code **)(alStack_40[0] + 0x18))(alStack_40);
        (**(code **)(alStack_40[0] + 0x20))(alStack_40);
      }
      else {
        (**(code **)(*plVar1 + 0x18))();
        (**(code **)(*(long *)param_1[3] + 0x20))();
        param_1[3] = param_2[3];
      }
      param_2[3] = (long)param_2;
    }
    else if (plVar5 == param_2) {
      plVar4 = param_1;
      (**(code **)(*plVar5 + 0x18))(plVar5);
      (**(code **)(*(long *)param_2[3] + 0x20))();
      param_2[3] = param_1[3];
      param_1[3] = (long)param_1;
    }
    else {
      param_1[3] = (long)plVar5;
      param_2[3] = (long)plVar1;
    }
  }
  iVar3 = (int)plVar4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar3 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  puVar2 = (undefined8 *)0x10;
  __Znwm();
  *puVar2 = &PTR_DAT_110afa8d0;
  puVar2[1] = 0;
  *extraout_x8 = puVar2;
  return;
}



/* Entry: 10951c66c; end: 10951c69f;  */

void FUN_10951c66c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110afa8d0;
  puVar1[1] = 0;
  *param_1 = puVar1;
  return;
}



/* Entry: 10951c6a0; end: 10951c6a7;  */

void FUN_10951c6a0(void)

{
  return;
}



/* Entry: 10951c6a8; end: 10951c6db;  */

void FUN_10951c6a8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110afa830;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10951c6dc; end: 10951c6ff;  */

void FUN_10951c6dc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110afa830;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10951c700; end: 10951c73b;  */

long FUN_10951c700(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110afa8a0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10951c73c; end: 10951c7bf;  */

undefined ** FUN_10951c73c(void)

{
  return &PTR_DAT_110afa8a0;
}



/* Entry: 10951c7c0; end: 10951c8f3;  */

undefined8 FUN_10951c7c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  func_0x000107c31940(auStack_38,&DAT_10f31a21b);
  func_0x0001094a6db0(param_2,auStack_38,param_1 + 8);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  func_0x000107c31940(auStack_38,&DAT_10f31a21d);
  func_0x0001094a6db0(param_2,auStack_38,param_1 + 0xc);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  func_0x000107c31940(auStack_38,&DAT_10f31a21b);
  uVar1 = param_2;
  FUN_1093781f4(param_2,auStack_38);
  if ((int)uVar1 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c31940(auStack_50,&DAT_10f31a21d);
    FUN_1093781f4(param_2,auStack_50);
    if (cStack_39 < '\0') {
      __ZdlPv(auStack_50[0]);
    }
  }
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return param_2;
}



/* Entry: 10951c8f4; end: 10951c8fb;  */

void FUN_10951c8f4(void)

{
  return;
}



/* Entry: 10951c8fc; end: 10951cd63;  */

/* WARNING: Removing unreachable block (ram,0x00010951cb70) */

undefined8
FUN_10951c8fc(long param_1,undefined8 *param_2,long *param_3,undefined8 param_4,undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined ***pppuVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined **ppuStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined4 uStack_f4;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  long *plStack_98;
  undefined **ppuStack_90;
  undefined ***pppuStack_88;
  undefined2 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined ***pppuStack_48;
  
  plVar4 = (long *)0x28;
  __Znwm();
  plVar4[3] = 0;
  plVar4[4] = 0;
  *plVar4 = (long)&PTR_FUN_110af9d60;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar8 = *(long **)(param_1 + 0xd8);
  *(long **)(param_1 + 0xd8) = plVar4;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))(plVar8);
    plVar4 = *(long **)(param_1 + 0xd8);
  }
  lVar9 = *param_3;
  plStack_b8 = *(long **)(lVar9 + 0x38);
  uStack_c0 = *(undefined8 *)(lVar9 + 0x30);
  if (*(long *)(lVar9 + 0x38) != 0) {
    plVar8 = (long *)(*(long *)(lVar9 + 0x38) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  (**(code **)(*plVar4 + 0x10))();
  plVar8 = plStack_b8;
  if (plStack_b8 != (long *)0x0) {
    plVar1 = plStack_b8 + 1;
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
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  if (((ulong)plVar4 & 1) == 0) {
    FUN_10937e740(&ppuStack_158,&UNK_10f57296a);
    FUN_109388c6c(1,&UNK_10f5728d9,&DAT_10f323079,0x5c,&ppuStack_158);
    if (uStack_148._7_1_ < '\0') {
      __ZdlPv(ppuStack_158);
    }
    uVar6 = 0;
  }
  else {
    ppuStack_158 = &PTR_FUN_110af35e0;
    uStack_150 = 0;
    uStack_140 = 0;
    uStack_148 = 0;
    uStack_130 = 0;
    uStack_138 = 0;
    uStack_120 = 0;
    uStack_128 = 0;
    uStack_110 = 0;
    uStack_118 = 0;
    uStack_104 = 0;
    uStack_10c = 0;
    uStack_108 = 0;
    uStack_fc = 1;
    uStack_f4 = 1;
    puStack_f0 = &DAT_10e5b4a18;
    uStack_e8 = 0;
    puStack_e0 = &DAT_11383d918;
    puStack_d8 = &DAT_11383d918;
    uStack_c8 = 0;
    uStack_d0 = 0;
    (**(code **)(*(long *)*param_2 + 0x10))
              (&plStack_50,(long *)*param_2,*(long *)(param_1 + 0xd8) + 8);
    (**(code **)(*plStack_50 + 0x20))(&plStack_58);
    pppuStack_48 = &ppuStack_a8;
    pppuStack_88 = &ppuStack_a0;
    ppuStack_a8 = &PTR_DAT_110cf0d88;
    ppuStack_a0 = &PTR_DAT_110cf0dd0;
    plStack_98 = plStack_58;
    ppuStack_90 = &PTR_DAT_110cf1000;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0x2000;
    uStack_60 = 0;
    pppuVar5 = &ppuStack_158;
    func_0x000107c30340(pppuVar5,&pppuStack_48);
    func_0x00010b4d6798(&ppuStack_90);
    plVar4 = plStack_58;
    plStack_58 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = plStack_50;
    plStack_50 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    if (((ulong)pppuVar5 & 1) == 0) {
      FUN_10937e740(&ppuStack_a8,&UNK_10f57298f);
      FUN_109388c6c(1,&UNK_10f5728d9,&DAT_10f323079,0x62,&ppuStack_a8);
      uVar6 = 0;
    }
    else {
      uVar7 = uStack_150;
      if ((uStack_150 & 1) != 0) {
        uVar7 = *(ulong *)(uStack_150 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(&puStack_d8,param_5,uVar7);
      uVar6 = 0x168;
      __Znwm(0x168);
      FUN_109563b84();
      FUN_10951eb54(param_1 + 0xe0,uVar6);
      uVar6 = 1;
    }
    FUN_10935ff4c(&ppuStack_158);
  }
  return uVar6;
}



/* Entry: 10951cd64; end: 10951cdff;  */

void FUN_10951cd64(long param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  ulong *puVar9;
  code *pcVar10;
  undefined *puVar11;
  long *plVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  undefined8 *puVar17;
  int iVar18;
  undefined4 *puVar19;
  long lVar20;
  undefined8 *puVar21;
  ulong *extraout_x8;
  ulong uVar22;
  undefined8 *puVar23;
  long lVar24;
  ulong uVar25;
  undefined8 *puVar26;
  long *plVar27;
  ulong *puVar28;
  undefined8 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auStack_720 [24];
  undefined1 auStack_708 [24];
  ulong *puStack_6f0;
  long *plStack_6e8;
  undefined1 ***pppuStack_6e0;
  code *pcStack_6d8;
  ulong *puStack_6c8;
  ulong *puStack_6c0;
  ulong *puStack_6b8;
  ulong *puStack_6b0;
  undefined8 *puStack_6a8;
  ulong *puStack_6a0;
  ulong *puStack_698;
  ulong *puStack_690;
  ulong *puStack_688;
  ulong *puStack_680;
  ulong *puStack_678;
  ulong *puStack_670;
  undefined8 uStack_668;
  long *plStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined5 uStack_648;
  undefined3 uStack_643;
  undefined5 uStack_640;
  undefined2 uStack_63b;
  undefined1 uStack_639;
  undefined4 uStack_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined8 uStack_624;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined4 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined4 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined4 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined4 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined4 uStack_558;
  undefined4 uStack_550;
  undefined1 auStack_54c [8];
  int iStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined4 uStack_538;
  undefined8 uStack_534;
  undefined8 uStack_52c;
  undefined4 uStack_524;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  long lStack_518;
  ulong *puStack_510;
  ulong *puStack_508;
  ulong auStack_500 [2];
  undefined4 uStack_4f0;
  undefined1 auStack_4ec [8];
  undefined8 uStack_4e4;
  undefined8 uStack_4dc;
  undefined8 uStack_4d4;
  undefined8 uStack_4cc;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined8 uStack_4b8;
  ulong *puStack_4b0;
  ulong *puStack_4a8;
  ulong auStack_4a0 [3];
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined8 uStack_47c;
  undefined8 uStack_474;
  undefined1 uStack_46c;
  undefined1 uStack_444;
  ulong auStack_440 [4];
  undefined4 uStack_420;
  undefined4 uStack_418;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  ulong *puStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  ulong *puStack_3d8;
  ulong *puStack_3d0;
  ulong *puStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  ulong *puStack_3b0;
  ulong *puStack_3a8;
  ulong auStack_3a0 [2];
  undefined8 uStack_390;
  undefined8 uStack_388;
  ulong *puStack_380;
  ulong *puStack_378;
  ulong *puStack_370;
  ulong *puStack_368;
  ulong uStack_360;
  ulong uStack_358;
  ulong *puStack_350;
  ulong *puStack_348;
  ulong auStack_340 [2];
  undefined4 *puStack_330;
  undefined8 *puStack_328;
  undefined8 uStack_320;
  code *pcStack_310;
  undefined8 uStack_308;
  long *plStack_300;
  long lStack_2f8;
  undefined1 **ppuStack_280;
  code *pcStack_278;
  undefined8 uStack_270;
  long *plStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  ulong uStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long *plStack_1f8;
  undefined1 auStack_1f0 [8];
  long *plStack_1e8;
  long alStack_1e0 [3];
  long *plStack_1c8;
  undefined **ppuStack_1c0;
  long *plStack_1b8;
  long lStack_1b0;
  undefined ***pppuStack_1a8;
  long *plStack_198;
  long lStack_78;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_38;
  long in_stack_ffffffffffffffd8;
  
  puVar19 = (undefined4 *)*param_2;
  bVar6 = *(byte *)(puVar19 + 0x18);
  if (bVar6 < 2) {
    puVar2 = (undefined4 *)(param_1 + 8);
    if (puVar2 == puVar19) goto LAB_109502fdc;
    if (*(long *)(puVar19 + 0xe) != 0) {
      piVar1 = (int *)(*(long *)(puVar19 + 0xe) + 0x14);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = *piVar1 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    if (*(long *)(param_1 + 0x40) != 0) {
      piVar1 = (int *)(*(long *)(param_1 + 0x40) + 0x14);
      do {
        iVar18 = *piVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar18 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar18 + -1 == 0) {
        func_0x000109a848d4(puVar2);
      }
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (*(int *)(param_1 + 0xc) < 1) {
      *puVar2 = *puVar19;
LAB_109502f84:
      if (2 < (int)puVar19[1]) goto LAB_109502fb8;
      *(undefined4 *)(param_1 + 0xc) = puVar19[1];
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(puVar19 + 2);
      puVar21 = *(undefined8 **)(puVar19 + 0x12);
      puVar26 = *(undefined8 **)(param_1 + 0x50);
      *puVar26 = *puVar21;
      puVar26[1] = puVar21[1];
    }
    else {
      lVar20 = 0;
      lVar24 = *(long *)(param_1 + 0x48);
      do {
        *(undefined4 *)(lVar24 + lVar20 * 4) = 0;
        lVar20 = lVar20 + 1;
      } while (lVar20 < *(int *)(param_1 + 0xc));
      *puVar2 = *puVar19;
      if (*(int *)(param_1 + 0xc) < 3) goto LAB_109502f84;
LAB_109502fb8:
      func_0x000109a84868(puVar2,puVar19);
    }
    uVar29 = *(undefined8 *)(puVar19 + 4);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(puVar19 + 6);
    *(undefined8 *)(param_1 + 0x18) = uVar29;
    uVar29 = *(undefined8 *)(puVar19 + 8);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(puVar19 + 10);
    *(undefined8 *)(param_1 + 0x28) = uVar29;
    uVar29 = *(undefined8 *)(puVar19 + 0xc);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(puVar19 + 0xe);
    *(undefined8 *)(param_1 + 0x38) = uVar29;
LAB_109502fdc:
    *(byte *)(param_1 + 0x68) = bVar6;
    return;
  }
  FUN_10937e740(&uStack_38,&UNK_10f5729e9);
  FUN_109388c6c(1,&UNK_10f5728d9,&UNK_10f5729d7,0x77,&uStack_38);
  if (in_stack_ffffffffffffffd8 < 0) {
    __ZdlPv(uStack_38);
  }
  puVar11 = &UNK_10f572a05;
  func_0x000105688514();
  if (in_stack_ffffffffffffffd8 < 0) {
    __ZdlPv(uStack_38);
  }
  __Unwind_Resume();
  pcStack_48 = FUN_10951ce00;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_260 = *(ulong *)(puVar11 + 8);
  uStack_258 = *(undefined8 *)(puVar11 + 0x10);
  iVar18 = *(int *)(puVar11 + 0xc);
  uStack_220 = (ulong)&uStack_260 | 8;
  uStack_250 = *(undefined8 *)(puVar11 + 0x18);
  uStack_248 = *(undefined8 *)(puVar11 + 0x20);
  uStack_238 = *(undefined8 *)(puVar11 + 0x30);
  uStack_240 = *(undefined8 *)(puVar11 + 0x28);
  uStack_230 = *(undefined8 *)(puVar11 + 0x38);
  lStack_228 = *(long *)(puVar11 + 0x40);
  uStack_210 = 0;
  uStack_208 = 0;
  if (*(long *)(puVar11 + 0x40) != 0) {
    piVar1 = (int *)(*(long *)(puVar11 + 0x40) + 0x14);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = *piVar1 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    iVar18 = *(int *)(puVar11 + 0xc);
  }
  puStack_218 = &uStack_210;
  puStack_50 = &stack0xfffffffffffffff0;
  if (iVar18 < 3) {
    uStack_210 = **(undefined8 **)(puVar11 + 0x50);
    uStack_208 = (*(undefined8 **)(puVar11 + 0x50))[1];
  }
  else {
    uStack_260 = uStack_260 & 0xffffffff;
    func_0x000109a84868(&uStack_260);
  }
  func_0x000105682cb8(&ppuStack_1c0,&uStack_260,0);
  FUN_10951f008(&uStack_200,&uStack_270,&ppuStack_1c0);
  FUN_10951f294(&ppuStack_1c0);
  if (lStack_228 != 0) {
    piVar1 = (int *)(lStack_228 + 0x14);
    do {
      iVar18 = *piVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar18 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar18 + -1 == 0) {
      func_0x000109a848d4(&uStack_260);
    }
  }
  lStack_228 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  if (0 < uStack_260._4_4_) {
    lVar20 = 0;
    do {
      *(undefined4 *)(uStack_220 + lVar20 * 4) = 0;
      lVar20 = lVar20 + 1;
    } while (lVar20 < uStack_260._4_4_);
  }
  if (puStack_218 != &uStack_210 && puStack_218 != (undefined8 *)0x0) {
    _free(puStack_218[-1]);
  }
  plStack_1b8 = (long *)uStack_200;
  plStack_268 = plStack_1f8;
  uStack_270 = uStack_200;
  uStack_200 = 0;
  plStack_1f8 = (long *)0x0;
  ppuStack_1c0 = &PTR_FUN_110afa9c0;
  pppuStack_1a8 = &ppuStack_1c0;
  FUN_109567d5c(auStack_1f0,&uStack_270,&ppuStack_1c0);
  if (pppuStack_1a8 == &ppuStack_1c0) {
    lVar20 = 0x20;
LAB_10951cf98:
    (**(code **)((long)*pppuStack_1a8 + lVar20))();
  }
  else if (pppuStack_1a8 != (undefined ***)0x0) {
    lVar20 = 0x28;
    goto LAB_10951cf98;
  }
  plVar12 = plStack_268;
  if (plStack_268 != (long *)0x0) {
    plVar27 = plStack_268 + 1;
    do {
      lVar20 = *plVar27;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar8) {
        *plVar27 = lVar20 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plStack_268 + 0x10))(plStack_268);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  plVar12 = plStack_1f8;
  if (plStack_1f8 != (long *)0x0) {
    plVar27 = plStack_1f8 + 1;
    do {
      lVar20 = *plVar27;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar8) {
        *plVar27 = lVar20 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  FUN_109564bec(&ppuStack_1c0,*(undefined8 *)(puVar11 + 0xe0),auStack_1f0);
  plVar12 = plStack_1b8;
  ppuVar3 = ppuStack_1c0;
  ppuStack_1c0 = (undefined **)0x0;
  plStack_1b8 = (long *)0x0;
  plVar27 = *(long **)(puVar11 + 0xf0);
  *(long **)(puVar11 + 0xf0) = plVar12;
  *(undefined ***)(puVar11 + 0xe8) = ppuVar3;
  if (plVar27 != (long *)0x0) {
    plVar12 = plVar27 + 1;
    do {
      lVar20 = *plVar12;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar8) {
        *plVar12 = lVar20 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plVar27 + 0x10))(plVar27);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
    }
  }
  plVar12 = &lStack_1b0;
  func_0x00010951eac8(puVar11 + 0xf8);
  iVar18 = (int)plVar12;
  if (plStack_198 == &lStack_1b0) {
    lVar20 = 0x20;
LAB_10951d098:
    (**(code **)(*plStack_198 + lVar20))();
  }
  else if (plStack_198 != (long *)0x0) {
    lVar20 = 0x28;
    goto LAB_10951d098;
  }
  plVar12 = plStack_1b8;
  if (plStack_1b8 != (long *)0x0) {
    plVar27 = plStack_1b8 + 1;
    do {
      lVar20 = *plVar27;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar8) {
        *plVar27 = lVar20 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  if (plStack_1c8 == alStack_1e0) {
    lVar20 = 0x20;
LAB_10951d100:
    (**(code **)(*plStack_1c8 + lVar20))();
  }
  else if (plStack_1c8 != (long *)0x0) {
    lVar20 = 0x28;
    goto LAB_10951d100;
  }
  plVar12 = plStack_1c8;
  if (plStack_1e8 != (long *)0x0) {
    plVar27 = plStack_1e8 + 1;
    do {
      lVar20 = *plVar27;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar8) {
        *plVar27 = lVar20 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plStack_1e8 + 0x10))(plStack_1e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar12 = plStack_1e8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if (iVar18 != 0) {
    func_0x000104bd46a0();
    func_0x000105681f78(auStack_1f0);
  }
  __Unwind_Resume();
  pcStack_278 = FUN_10951d1c4;
  lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  puVar15 = (ulong *)(plVar12 + 0x1d);
  uVar13 = *puVar15;
  ppuStack_280 = &puStack_50;
  if (uVar13 == 0) {
LAB_10951e6a0:
    func_0x000105688514(&UNK_10f572a2c);
LAB_10951e6b4:
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x10951e6b8);
    (*pcVar10)();
  }
  plVar27 = &uStack_658;
  puStack_678 = (ulong *)&uStack_550;
  puStack_670 = extraout_x8;
  FUN_10951f6b4();
  puVar16 = extraout_x8;
  if (uVar13 != 0) {
    FUN_10951e820();
    FUN_109511034(extraout_x8,(long)(int)puVar15[3]);
    uVar13 = puVar15[2];
    puVar28 = puVar15 + 2;
    if ((uVar13 & 1) != 0) {
      puVar28 = (ulong *)(uVar13 + 7);
    }
    if ((int)puVar15[3] != 0) {
      puStack_6b8 = puVar28 + (int)puVar15[3];
      puStack_6c8 = &uStack_3e8;
      puStack_6a0 = auStack_3a0;
      puStack_6a8 = (undefined8 *)((ulong)&uStack_390 | 4);
      puStack_6c0 = (ulong *)((ulong)&uStack_390 | 8);
      puStack_6b0 = auStack_340;
      puStack_698 = (ulong *)auStack_54c;
      puStack_680 = (ulong *)(auStack_54c + 4);
      puStack_688 = (ulong *)(auStack_4ec + 4);
      puStack_690 = auStack_440;
      do {
        puVar15 = puStack_670;
        uVar13 = *puVar28;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(0x113829ec8,0x10);
          if (bVar8) {
            cVar7 = ExclusiveMonitorsStatus();
            iRam0000000113829ec8 = iRam0000000113829ec8 + 1;
          }
        } while (cVar7 != '\0');
        uStack_648 = 0;
        uStack_643 = 0;
        uStack_650 = 0;
        uStack_638 = 0;
        uStack_640 = 0;
        uStack_63b = 0;
        uStack_639 = 0;
        uStack_62c = 0;
        uStack_628 = 0;
        uStack_634 = 0;
        uStack_630 = 0;
        uStack_624 = 0xbf800000;
        uStack_610 = 0;
        uStack_618 = 0;
        uStack_600 = 0;
        uStack_608 = 0;
        uStack_5e8 = 0;
        uStack_5f0 = 0;
        uStack_5d8 = 0;
        uStack_5e0 = 0;
        uStack_5f8 = 0x3f800000;
        uStack_5d0 = 0x3f800000;
        uStack_5c0 = 0;
        uStack_5c8 = 0;
        uStack_5b0 = 0;
        uStack_5b8 = 0;
        uStack_598 = 0;
        uStack_5a0 = 0;
        uStack_588 = 0;
        uStack_590 = 0;
        uStack_5a8 = 0x3f800000;
        uStack_580 = 0x3f800000;
        uStack_570 = 0;
        uStack_578 = 0;
        uStack_560 = 0;
        uStack_568 = 0;
        uStack_558 = 0x3f800000;
        uStack_550 = 0x42ff0000;
        puStack_698[1] = 0;
        *puStack_698 = 0;
        puStack_698[3] = 0;
        puStack_698[2] = 0;
        puStack_698[5] = 0;
        puStack_698[4] = 0;
        *(undefined8 *)((long)puStack_698 + 0x34) = 0;
        *(undefined8 *)((long)puStack_698 + 0x2c) = 0;
        puStack_510 = puStack_680;
        auStack_500[0] = 0;
        auStack_500[1] = 0;
        uStack_4f0 = 0x42ff0000;
        uStack_4e4 = 0;
        auStack_4ec = (undefined1  [8])0x0;
        uStack_4d4 = 0;
        uStack_4dc = 0;
        uStack_4c4 = 0;
        uStack_4cc = 0;
        uStack_4b8 = 0;
        uStack_4c0 = 0;
        uStack_4bc = 0;
        puStack_4b0 = puStack_688;
        auStack_4a0[1] = 0;
        auStack_4a0[0] = 0;
        uStack_488 = 0;
        auStack_4a0[2] = 0;
        uStack_47c = 0;
        uStack_484 = 0;
        uStack_480 = 0;
        uStack_474 = 0x3f8000003f800000;
        uStack_46c = 0;
        uStack_444 = 0;
        puStack_690[1] = 0;
        *puStack_690 = 0;
        puStack_690[3] = 0;
        puStack_690[2] = 0;
        uStack_420 = 0x3f800000;
        uStack_418 = 0;
        uStack_658 = (ulong *)CONCAT44(0x3f000000,(int)*(undefined8 *)(uVar13 + 0x40));
        ppuVar3 = &PTR_PTR_1132da578;
        if (*(undefined ***)(uVar13 + 0x28) != (undefined **)0x0) {
          ppuVar3 = *(undefined ***)(uVar13 + 0x28);
        }
        puStack_508 = auStack_500;
        puStack_4a8 = auStack_4a0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (&uStack_650,(ulong)ppuVar3[2] & 0xfffffffffffffffc);
        ppuVar3 = &PTR_PTR_1132da578;
        if (*(undefined ***)(uVar13 + 0x28) != (undefined **)0x0) {
          ppuVar3 = *(undefined ***)(uVar13 + 0x28);
        }
        uStack_658 = (ulong *)CONCAT44(*(undefined4 *)((long)ppuVar3 + 0x1c),(undefined4)uStack_658)
        ;
        ppuVar3 = &PTR_PTR_1132da178;
        if (*(undefined ***)(uVar13 + 0x18) != (undefined **)0x0) {
          ppuVar3 = *(undefined ***)(uVar13 + 0x18);
        }
        uStack_630 = SUB84(ppuVar3[3],0);
        uStack_62c = (undefined4)((ulong)ppuVar3[3] >> 0x20);
        uStack_638 = SUB84(ppuVar3[2],0);
        uStack_634 = (undefined4)((ulong)ppuVar3[2] >> 0x20);
        if ((*(byte *)(uVar13 + 0x10) >> 4 & 1) != 0) {
          lVar20 = *(long *)(uVar13 + 0x38);
          uStack_3e0 = (ulong *)(*(ulong *)(lVar20 + 0x10) & 0xfffffffffffffffc);
          if (*(char *)((long)uStack_3e0 + 0x17) < '\0') {
            uStack_3e0 = (ulong *)*uStack_3e0;
          }
          iVar18 = *(int *)(lVar20 + 0x18);
          uStack_3f0 = (undefined4 *)0x242ff0000;
          uStack_3e8 = (ulong *)CONCAT44(iVar18,*(int *)(lVar20 + 0x1c));
          puStack_3c8 = (ulong *)0x0;
          puStack_3d0 = (ulong *)0x0;
          uStack_3b8 = 0;
          uStack_3c0 = 0;
          puStack_3b0 = puStack_6c8;
          puStack_3a8 = puStack_6a0;
          lVar20 = (long)*(int *)(lVar20 + 0x1c) * (long)iVar18;
          *puStack_6a0 = 0;
          puStack_6a0[1] = 0;
          puStack_3d8 = uStack_3e0;
          if ((lVar20 != 0) && (uStack_3e0 == (ulong *)0x0)) {
            puVar19 = (undefined4 *)0x24;
            func_0x000107c2ae8c();
            *puVar19 = 1;
            puStack_330 = puVar19 + 1;
            puStack_328 = (undefined8 *)0x1c;
            *(undefined1 *)(puVar19 + 8) = 0;
            *(undefined8 *)(puVar19 + 3) = 0x207c7c2030203d3d;
            *(undefined8 *)(puVar19 + 1) = 0x2029286c61746f74;
            *(undefined8 *)(puVar19 + 6) = 0x4c4c554e203d2120;
            *(undefined8 *)(puVar19 + 4) = 0x61746164207c7c20;
            FUN_109ac3188(0xffffff29,&puStack_330,&UNK_10f2e8162,&UNK_10f566d1b,0x1bb);
            goto LAB_10951e6b4;
          }
          uStack_3f0 = (undefined4 *)0x242ff4000;
          auStack_3a0[1] = 1;
          puStack_3d0 = (ulong *)((long)uStack_3e0 + lVar20);
          uStack_390 = (ulong *)CONCAT44(uStack_390._4_4_,0x42ff0000);
          puStack_6a8[1] = 0;
          *puStack_6a8 = 0;
          puStack_6a8[3] = 0;
          puStack_6a8[2] = 0;
          puStack_6a8[5] = 0;
          puStack_6a8[4] = 0;
          *(undefined8 *)((long)puStack_6a8 + 0x34) = 0;
          *(undefined8 *)((long)puStack_6a8 + 0x2c) = 0;
          puStack_350 = puStack_6c0;
          puStack_348 = puStack_6b0;
          *puStack_6b0 = 0;
          puStack_6b0[1] = 0;
          puStack_330 = (undefined4 *)CONCAT44(puStack_330._4_4_,0x2010000);
          puStack_328 = &uStack_390;
          uStack_320 = 0;
          puStack_3c8 = puStack_3d0;
          auStack_3a0[0] = (long)iVar18;
          FUN_109a479a0(&uStack_3f0,&puStack_330);
          if (lStack_518 != 0) {
            piVar1 = (int *)(lStack_518 + 0x14);
            do {
              iVar18 = *piVar1;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar8) {
                *piVar1 = iVar18 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar18 + -1 == 0) {
              func_0x000109a848d4(puStack_678);
            }
          }
          puVar14 = puStack_378;
          puVar16 = puStack_380;
          uVar13 = (ulong)uStack_390;
          if (0 < (int)auStack_54c._0_4_) {
            lVar20 = 0;
            do {
              *(undefined4 *)((long)puStack_510 + lVar20 * 4) = 0;
              lVar20 = lVar20 + 1;
            } while (lVar20 < (int)auStack_54c._0_4_);
          }
          iVar18 = uStack_390._4_4_;
          puStack_678[1] = (ulong)uStack_388;
          *puStack_678 = uVar13;
          puStack_678[3] = (ulong)puVar14;
          puStack_678[2] = (ulong)puVar16;
          uVar25 = uStack_358;
          uVar13 = uStack_360;
          puVar16 = puStack_370;
          puStack_678[5] = (ulong)puStack_368;
          puStack_678[4] = (ulong)puVar16;
          puStack_678[7] = uVar25;
          puStack_678[6] = uVar13;
          if (puStack_508 != auStack_500) {
            if (puStack_508 != (ulong *)0x0) {
              _free(puStack_508[-1]);
              iVar18 = uStack_390._4_4_;
            }
            puStack_510 = puStack_680;
            puStack_508 = auStack_500;
          }
          puVar16 = puStack_348;
          if (iVar18 < 3) {
            *puStack_508 = *puStack_348;
            puStack_508[1] = puVar16[1];
            uStack_390 = (ulong *)CONCAT44(uStack_390._4_4_,0x42ff0000);
            puStack_6a8[1] = 0;
            *puStack_6a8 = 0;
            puStack_6a8[3] = 0;
            puStack_6a8[2] = 0;
            puStack_6a8[5] = 0;
            puStack_6a8[4] = 0;
            *(undefined8 *)((long)puStack_6a8 + 0x34) = 0;
            *(undefined8 *)((long)puStack_6a8 + 0x2c) = 0;
            if (puVar16 != puStack_6b0) {
              _free(puVar16[-1]);
            }
          }
          else {
            puStack_510 = puStack_350;
            puStack_508 = puStack_348;
            puStack_348 = puStack_6b0;
            puStack_350 = puStack_6c0;
            uStack_390 = (ulong *)CONCAT44(uStack_390._4_4_,0x42ff0000);
            puStack_6a8[1] = 0;
            *puStack_6a8 = 0;
            puStack_6a8[3] = 0;
            puStack_6a8[2] = 0;
            puStack_6a8[5] = 0;
            puStack_6a8[4] = 0;
            *(undefined8 *)((long)puStack_6a8 + 0x34) = 0;
            *(undefined8 *)((long)puStack_6a8 + 0x2c) = 0;
          }
          if (uStack_3b8 != 0) {
            piVar1 = (int *)(uStack_3b8 + 0x14);
            do {
              iVar18 = *piVar1;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar8) {
                *piVar1 = iVar18 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar18 + -1 == 0) {
              func_0x000109a848d4(&uStack_3f0);
            }
          }
          uStack_3b8 = 0;
          puStack_3d8 = (ulong *)0x0;
          uStack_3e0 = (ulong *)0x0;
          puStack_3c8 = (ulong *)0x0;
          puStack_3d0 = (ulong *)0x0;
          if (0 < uStack_3f0._4_4_) {
            lVar20 = 0;
            do {
              *(undefined4 *)((long)puStack_3b0 + lVar20 * 4) = 0;
              lVar20 = lVar20 + 1;
            } while (lVar20 < uStack_3f0._4_4_);
          }
          if (puStack_3a8 != puStack_6a0 && puStack_3a8 != (ulong *)0x0) {
            _free(puStack_3a8[-1]);
          }
          puStack_678[0x19] = CONCAT44(uStack_62c,uStack_630);
          puStack_678[0x18] = CONCAT44(uStack_634,uStack_638);
        }
        FUN_10951f73c(&uStack_410,&uStack_658);
        puVar21 = (undefined8 *)puVar15[1];
        if (puVar21 < (undefined8 *)puVar15[2]) {
          puVar26 = puVar21 + 2;
          puVar21[1] = puStack_408;
          *puVar21 = CONCAT44(uStack_40c,uStack_410);
        }
        else {
          lVar20 = (long)puVar21 - *puVar15;
          uVar13 = (lVar20 >> 4) + 1;
          if (uVar13 >> 0x3c != 0) {
            FUN_109503878();
            goto LAB_10951e6b4;
          }
          uVar22 = (long)puVar15[2] - *puVar15;
          uVar25 = (long)uVar22 >> 3;
          if (uVar25 <= uVar13) {
            uVar25 = uVar13;
          }
          if (0x7fffffffffffffef < uVar22) {
            uVar25 = 0xfffffffffffffff;
          }
          puStack_370 = puVar15;
          puVar16 = puVar15;
          func_0x00010950388c();
          uVar13 = *puVar15;
          puVar21 = (undefined8 *)((long)puVar16 + lVar20);
          uVar22 = (long)puVar21 - (puVar15[1] - uVar13);
          puVar26 = puVar21 + 2;
          puVar21[1] = puStack_408;
          *puVar21 = CONCAT44(uStack_40c,uStack_410);
          _memcpy(uVar22,uVar13);
          puVar15 = puStack_670;
          uStack_390 = (ulong *)*puStack_670;
          *puStack_670 = uVar22;
          puStack_670[1] = (ulong)puVar26;
          puStack_378 = (ulong *)puStack_670[2];
          puStack_670[2] = (ulong)(puVar16 + uVar25 * 2);
          uStack_388 = uStack_390;
          puStack_380 = uStack_390;
          FUN_10951765c(&uStack_390);
        }
        puVar15[1] = (ulong)puVar26;
        puVar16 = &uStack_658;
        FUN_1094e0cf8();
        puVar28 = puVar28 + 1;
        plVar27 = (long *)0x42ff0000;
      } while (puVar28 != puStack_6b8);
    }
    goto LAB_10951e520;
  }
  uVar13 = *puVar15;
  if (uVar13 == 0) goto LAB_10951e6a0;
  FUN_10951f7a4();
  if (uVar13 == 0) {
    uVar13 = *puVar15;
    if ((uVar13 == 0) || (FUN_10951f7ec(), uVar13 == 0)) goto LAB_10951e6a0;
    func_0x000105683010();
    uVar5 = *(uint *)((long)puVar15 + 0xc);
    if (uVar5 == *(uint *)((long)puVar15 + 4)) {
      uStack_3e0 = (ulong *)((ulong)uStack_3e0._4_4_ << 0x20);
      uStack_3f0 = (undefined4 *)0x0;
    }
    else {
      uStack_3e0 = (ulong *)CONCAT44(uStack_3e0._4_4_,uVar5);
      uStack_3f0 = *(undefined4 **)(puVar15[2] + (ulong)uVar5 * 8);
      if (((ulong)uStack_3f0 & 1) != 0) {
        uStack_3f0 = *(undefined4 **)(**(long **)((long)uStack_3f0 + -1) + 0x20);
      }
    }
    plVar27 = &uStack_658;
    puStack_678 = auStack_4a0;
    puStack_680 = auStack_440;
    puVar16 = puVar15;
    uStack_3e8 = puVar15;
    while (puVar19 = uStack_3f0, uStack_3f0 != (undefined4 *)0x0) {
      do {
        iVar18 = iRam0000000113829ec8;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(0x113829ec8,0x10);
        if (bVar8) {
          cVar7 = ExclusiveMonitorsStatus();
          iRam0000000113829ec8 = iRam0000000113829ec8 + 1;
        }
      } while (cVar7 != '\0');
      uStack_658 = (ulong *)CONCAT44(0x3f000000,iVar18);
      uStack_648 = 0;
      uStack_643 = 0;
      uStack_650 = 0;
      uStack_638 = 0;
      uStack_640 = 0;
      uStack_63b = 0;
      uStack_639 = 0;
      uStack_62c = 0;
      uStack_628 = 0;
      uStack_634 = 0;
      uStack_630 = 0;
      uStack_624 = 0xbf800000;
      uStack_610 = 0;
      uStack_618 = 0;
      uStack_600 = 0;
      uStack_608 = 0;
      uStack_5e8 = 0;
      uStack_5f0 = 0;
      uStack_5d8 = 0;
      uStack_5e0 = 0;
      uStack_5f8 = 0x3f800000;
      uStack_5d0 = 0x3f800000;
      uStack_5c0 = 0;
      uStack_5c8 = 0;
      uStack_5b0 = 0;
      uStack_5b8 = 0;
      uStack_598 = 0;
      uStack_5a0 = 0;
      uStack_588 = 0;
      uStack_590 = 0;
      uStack_5a8 = 0x3f800000;
      uStack_580 = 0x3f800000;
      uStack_570 = 0;
      uStack_578 = 0;
      uStack_560 = 0;
      uStack_568 = 0;
      uStack_558 = 0x3f800000;
      uStack_550 = 0x42ff0000;
      iStack_544 = 0;
      uStack_540 = 0;
      auStack_54c = (undefined1  [8])0x0;
      uStack_534 = 0;
      uStack_53c = 0;
      uStack_538 = 0;
      uStack_524 = 0;
      uStack_52c = 0;
      lStack_518 = 0;
      uStack_520 = 0;
      uStack_51c = 0;
      auStack_500[0] = 0;
      auStack_500[1] = 0;
      uStack_4f0 = 0x42ff0000;
      uStack_4e4 = 0;
      auStack_4ec = (undefined1  [8])0x0;
      uStack_4d4 = 0;
      uStack_4dc = 0;
      uStack_4c4 = 0;
      uStack_4cc = 0;
      uStack_4b8 = 0;
      uStack_4c0 = 0;
      uStack_4bc = 0;
      puStack_4a8 = puStack_678;
      *(undefined8 *)((long)puStack_678 + 0x24) = 0;
      *(undefined8 *)((long)puStack_678 + 0x1c) = 0;
      puStack_678[1] = 0;
      *puStack_678 = 0;
      puStack_678[3] = 0;
      puStack_678[2] = 0;
      uStack_474 = 0x3f8000003f800000;
      uStack_46c = 0;
      uStack_444 = 0;
      puStack_680[1] = 0;
      *puStack_680 = 0;
      puStack_680[3] = 0;
      puStack_680[2] = 0;
      uStack_420 = 0x3f800000;
      uStack_418 = 0;
      puStack_510 = (ulong *)(auStack_54c + 4);
      puStack_508 = auStack_500;
      puStack_4b0 = (ulong *)(auStack_4ec + 4);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (&uStack_650,*(ulong *)(puVar19 + 8) & 0xfffffffffffffffc);
      uStack_658 = (ulong *)CONCAT44(puVar19[0xb],puVar19[2]);
      FUN_10951f73c(&puStack_330,&uStack_658);
      puVar15 = puStack_670;
      puVar21 = (undefined8 *)puStack_670[1];
      if (puVar21 < (undefined8 *)puStack_670[2]) {
        puVar26 = puVar21 + 2;
        puVar21[1] = puStack_328;
        *puVar21 = puStack_330;
      }
      else {
        lVar20 = (long)puVar21 - *puStack_670;
        uVar13 = (lVar20 >> 4) + 1;
        if (uVar13 >> 0x3c != 0) {
          FUN_109503878();
          goto LAB_10951e6b4;
        }
        uVar22 = (long)puStack_670[2] - *puStack_670;
        uVar25 = (long)uVar22 >> 3;
        if (uVar25 <= uVar13) {
          uVar25 = uVar13;
        }
        if (0x7fffffffffffffef < uVar22) {
          uVar25 = 0xfffffffffffffff;
        }
        puStack_370 = puStack_670;
        puVar16 = puStack_670;
        func_0x00010950388c();
        uVar13 = *puVar15;
        puVar21 = (undefined8 *)((long)puVar16 + lVar20);
        puStack_688 = puVar16 + uVar25 * 2;
        uVar25 = (long)puVar21 - (puVar15[1] - uVar13);
        puVar26 = puVar21 + 2;
        puVar21[1] = puStack_328;
        *puVar21 = puStack_330;
        _memcpy(uVar25,uVar13);
        uStack_390 = (ulong *)*puVar15;
        *puVar15 = uVar25;
        puVar15[1] = (ulong)puVar26;
        puStack_378 = (ulong *)puVar15[2];
        puVar15[2] = (ulong)puStack_688;
        uStack_388 = uStack_390;
        puStack_380 = uStack_390;
        FUN_10951765c(&uStack_390);
      }
      puVar15[1] = (ulong)puVar26;
      FUN_1094e0cf8(&uStack_658);
      puVar16 = &uStack_3f0;
      func_0x000107c27d54();
    }
    goto LAB_10951e520;
  }
  FUN_10951e8bc();
  if (*(char *)(plVar12[0x1b] + 0x20) != '\x01') {
    FUN_109511034(extraout_x8,(long)(int)puVar15[3]);
    uVar13 = puVar15[2];
    puVar28 = puVar15 + 2;
    if ((uVar13 & 1) != 0) {
      puVar28 = (ulong *)(uVar13 + 7);
    }
    if ((int)puVar15[3] != 0) {
      puVar15 = puVar28 + (int)puVar15[3];
      puStack_6c8 = &uStack_3e8;
      puVar21 = (undefined8 *)((ulong)&uStack_390 | 4);
      puStack_698 = (ulong *)((ulong)&uStack_390 | 8);
      puStack_688 = auStack_340;
      puStack_6a0 = (ulong *)auStack_54c;
      puStack_690 = (ulong *)(auStack_54c + 4);
      puStack_680 = auStack_500;
      puStack_6a8 = (undefined8 *)auStack_4ec;
      puStack_6b0 = (ulong *)(auStack_4ec + 4);
      puStack_6b8 = auStack_4a0;
      puStack_6c0 = auStack_440;
      do {
        uVar13 = *puVar28;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(0x113829ec8,0x10);
          if (bVar8) {
            cVar7 = ExclusiveMonitorsStatus();
            iRam0000000113829ec8 = iRam0000000113829ec8 + 1;
          }
        } while (cVar7 != '\0');
        uStack_648 = 0;
        uStack_643 = 0;
        uStack_650 = 0;
        uStack_638 = 0;
        uStack_640 = 0;
        uStack_63b = 0;
        uStack_639 = 0;
        uStack_62c = 0;
        uStack_628 = 0;
        uStack_634 = 0;
        uStack_630 = 0;
        uStack_624 = 0xbf800000;
        uStack_610 = 0;
        uStack_618 = 0;
        uStack_600 = 0;
        uStack_608 = 0;
        uStack_5e8 = 0;
        uStack_5f0 = 0;
        uStack_5d8 = 0;
        uStack_5e0 = 0;
        uStack_5f8 = 0x3f800000;
        uStack_5d0 = 0x3f800000;
        uStack_5c0 = 0;
        uStack_5c8 = 0;
        uStack_5b0 = 0;
        uStack_5b8 = 0;
        uStack_598 = 0;
        uStack_5a0 = 0;
        uStack_588 = 0;
        uStack_590 = 0;
        uStack_5a8 = 0x3f800000;
        uStack_580 = 0x3f800000;
        uStack_570 = 0;
        uStack_578 = 0;
        uStack_560 = 0;
        uStack_568 = 0;
        uStack_558 = 0x3f800000;
        uStack_550 = 0x42ff0000;
        puStack_6a0[1] = 0;
        *puStack_6a0 = 0;
        puStack_6a0[3] = 0;
        puStack_6a0[2] = 0;
        puStack_6a0[5] = 0;
        puStack_6a0[4] = 0;
        *(undefined8 *)((long)puStack_6a0 + 0x34) = 0;
        *(undefined8 *)((long)puStack_6a0 + 0x2c) = 0;
        puStack_510 = puStack_690;
        puStack_508 = puStack_680;
        *puStack_680 = 0;
        puStack_680[1] = 0;
        uStack_4f0 = 0x42ff0000;
        puStack_6a8[1] = 0;
        *puStack_6a8 = 0;
        puStack_6a8[3] = 0;
        puStack_6a8[2] = 0;
        puStack_6a8[5] = 0;
        puStack_6a8[4] = 0;
        *(undefined8 *)((long)puStack_6a8 + 0x34) = 0;
        *(undefined8 *)((long)puStack_6a8 + 0x2c) = 0;
        puStack_4b0 = puStack_6b0;
        puStack_4a8 = puStack_6b8;
        puStack_6b8[1] = 0;
        *puStack_6b8 = 0;
        puStack_6b8[3] = 0;
        puStack_6b8[2] = 0;
        *(undefined8 *)((long)puStack_6b8 + 0x24) = 0;
        *(undefined8 *)((long)puStack_6b8 + 0x1c) = 0;
        uStack_474 = 0x3f8000003f800000;
        uStack_46c = 0;
        uStack_444 = 0;
        puStack_6c0[1] = 0;
        *puStack_6c0 = 0;
        puStack_6c0[3] = 0;
        puStack_6c0[2] = 0;
        uStack_420 = 0x3f800000;
        uStack_418 = 0;
        uStack_658 = (ulong *)CONCAT44(0x3f000000,iRam0000000113732f50);
        ppuVar3 = &PTR_PTR_1132da578;
        if (*(undefined ***)(uVar13 + 0x18) != (undefined **)0x0) {
          ppuVar3 = *(undefined ***)(uVar13 + 0x18);
        }
        iRam0000000113732f50 = iRam0000000113732f50 + 1;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (&uStack_650,(ulong)ppuVar3[2] & 0xfffffffffffffffc);
        ppuVar3 = &PTR_PTR_1132da578;
        if (*(undefined ***)(uVar13 + 0x18) != (undefined **)0x0) {
          ppuVar3 = *(undefined ***)(uVar13 + 0x18);
        }
        uStack_658 = (ulong *)CONCAT44(*(undefined4 *)((long)ppuVar3 + 0x1c),(undefined4)uStack_658)
        ;
        ppuVar3 = &PTR_PTR_1132da1a0;
        if (*(undefined ***)(uVar13 + 0x28) != (undefined **)0x0) {
          ppuVar3 = *(undefined ***)(uVar13 + 0x28);
        }
        ppuVar4 = &PTR_PTR_1132de100;
        if (*(undefined ***)(uVar13 + 0x20) != (undefined **)0x0) {
          ppuVar4 = *(undefined ***)(uVar13 + 0x20);
        }
        auVar30._0_8_ = ppuVar4[3];
        auVar30._8_8_ = auVar30._0_8_;
        auVar30 = NEON_scvtf(auVar30,4);
        auVar31 = NEON_scvtf(*(undefined1 (*) [16])(ppuVar3 + 2),4);
        *(float *)(puStack_678 + 0x19) = auVar31._8_4_ / auVar30._8_4_;
        *(float *)((long)puStack_678 + 0xcc) = auVar31._12_4_ / auVar30._12_4_;
        *(float *)(puStack_678 + 0x18) = auVar31._0_4_ / auVar30._0_4_;
        *(float *)((long)puStack_678 + 0xc4) = auVar31._4_4_ / auVar30._4_4_;
        uStack_3e0 = (ulong *)((ulong)ppuVar4[2] & 0xfffffffffffffffc);
        if (*(char *)((long)uStack_3e0 + 0x17) < '\0') {
          uStack_3e0 = (ulong *)*uStack_3e0;
        }
        iVar18 = *(int *)(ppuVar4 + 3);
        uStack_3f0 = (undefined4 *)0x242ff0000;
        uStack_3e8 = (ulong *)CONCAT44(iVar18,*(int *)((long)ppuVar4 + 0x1c));
        puStack_3c8 = (ulong *)0x0;
        puStack_3d0 = (ulong *)0x0;
        uStack_3b8 = 0;
        uStack_3c0 = 0;
        puStack_3b0 = puStack_6c8;
        lVar20 = (long)*(int *)((long)ppuVar4 + 0x1c) * (long)iVar18;
        auStack_3a0[0] = 0;
        auStack_3a0[1] = 0;
        puStack_3d8 = uStack_3e0;
        puStack_3a8 = auStack_3a0;
        if ((lVar20 != 0) && (uStack_3e0 == (ulong *)0x0)) {
          puVar19 = (undefined4 *)0x24;
          func_0x000107c2ae8c();
          *puVar19 = 1;
          puStack_330 = puVar19 + 1;
          puStack_328 = (undefined8 *)0x1c;
          *(undefined1 *)(puVar19 + 8) = 0;
          *(undefined8 *)(puVar19 + 3) = 0x207c7c2030203d3d;
          *(undefined8 *)(puVar19 + 1) = 0x2029286c61746f74;
          *(undefined8 *)(puVar19 + 6) = 0x4c4c554e203d2120;
          *(undefined8 *)(puVar19 + 4) = 0x61746164207c7c20;
          FUN_109ac3188(0xffffff29,&puStack_330,&UNK_10f2e8162,&UNK_10f566d1b,0x1bb);
          goto LAB_10951e6b4;
        }
        uStack_3f0 = (undefined4 *)0x242ff4000;
        auStack_3a0[1] = 1;
        puStack_3d0 = (ulong *)((long)uStack_3e0 + lVar20);
        uStack_390 = (ulong *)CONCAT44(uStack_390._4_4_,0x42ff0000);
        puVar21[1] = 0;
        *puVar21 = 0;
        puVar21[3] = 0;
        puVar21[2] = 0;
        puVar21[5] = 0;
        puVar21[4] = 0;
        *(undefined8 *)((long)puVar21 + 0x34) = 0;
        *(undefined8 *)((long)puVar21 + 0x2c) = 0;
        puStack_350 = puStack_698;
        puStack_348 = puStack_688;
        *puStack_688 = 0;
        puStack_688[1] = 0;
        puStack_330 = (undefined4 *)CONCAT44(puStack_330._4_4_,0x2010000);
        puStack_328 = &uStack_390;
        uStack_320 = 0;
        puStack_3c8 = puStack_3d0;
        auStack_3a0[0] = (long)iVar18;
        FUN_109a479a0(&uStack_3f0,&puStack_330);
        if (lStack_518 != 0) {
          piVar1 = (int *)(lStack_518 + 0x14);
          do {
            iVar18 = *piVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar8) {
              *piVar1 = iVar18 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar18 + -1 == 0) {
            func_0x000109a848d4(puStack_678);
          }
        }
        puVar14 = puStack_378;
        puVar16 = puStack_380;
        uVar13 = (ulong)uStack_390;
        if (0 < (int)auStack_54c._0_4_) {
          lVar20 = 0;
          do {
            *(undefined4 *)((long)puStack_510 + lVar20 * 4) = 0;
            lVar20 = lVar20 + 1;
          } while (lVar20 < (int)auStack_54c._0_4_);
        }
        iVar18 = uStack_390._4_4_;
        puStack_678[1] = (ulong)uStack_388;
        *puStack_678 = uVar13;
        puStack_678[3] = (ulong)puVar14;
        puStack_678[2] = (ulong)puVar16;
        uVar25 = uStack_358;
        uVar13 = uStack_360;
        puVar16 = puStack_370;
        puStack_678[5] = (ulong)puStack_368;
        puStack_678[4] = (ulong)puVar16;
        puStack_678[7] = uVar25;
        puStack_678[6] = uVar13;
        if (puStack_508 != puStack_680) {
          if (puStack_508 != (ulong *)0x0) {
            _free(puStack_508[-1]);
            iVar18 = uStack_390._4_4_;
          }
          puStack_510 = puStack_690;
          puStack_508 = puStack_680;
        }
        if (iVar18 < 3) {
          *puStack_508 = *puStack_348;
          puStack_508[1] = puStack_348[1];
          uStack_390 = (ulong *)CONCAT44(uStack_390._4_4_,0x42ff0000);
          puVar21[1] = 0;
          *puVar21 = 0;
          puVar21[3] = 0;
          puVar21[2] = 0;
          puVar21[5] = 0;
          puVar21[4] = 0;
          *(undefined8 *)((long)puVar21 + 0x34) = 0;
          *(undefined8 *)((long)puVar21 + 0x2c) = 0;
          if (puStack_348 != puStack_688) {
            _free(puStack_348[-1]);
          }
        }
        else {
          puStack_510 = puStack_350;
          puStack_508 = puStack_348;
          puStack_348 = puStack_688;
          puStack_350 = puStack_698;
          uStack_390 = (ulong *)CONCAT44(uStack_390._4_4_,0x42ff0000);
          puVar21[1] = 0;
          *puVar21 = 0;
          puVar21[3] = 0;
          puVar21[2] = 0;
          puVar21[5] = 0;
          puVar21[4] = 0;
          *(undefined8 *)((long)puVar21 + 0x34) = 0;
          *(undefined8 *)((long)puVar21 + 0x2c) = 0;
        }
        if (uStack_3b8 != 0) {
          piVar1 = (int *)(uStack_3b8 + 0x14);
          do {
            iVar18 = *piVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar8) {
              *piVar1 = iVar18 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar18 + -1 == 0) {
            func_0x000109a848d4(&uStack_3f0);
          }
        }
        uStack_3b8 = 0;
        puStack_3d8 = (ulong *)0x0;
        uStack_3e0 = (ulong *)0x0;
        puStack_3c8 = (ulong *)0x0;
        puStack_3d0 = (ulong *)0x0;
        if (0 < uStack_3f0._4_4_) {
          lVar20 = 0;
          do {
            *(undefined4 *)((long)puStack_3b0 + lVar20 * 4) = 0;
            lVar20 = lVar20 + 1;
          } while (lVar20 < uStack_3f0._4_4_);
        }
        if (puStack_3a8 != auStack_3a0 && puStack_3a8 != (ulong *)0x0) {
          _free(puStack_3a8[-1]);
        }
        FUN_10951f73c(&uStack_410,&uStack_658);
        puVar16 = puStack_670;
        puVar26 = (undefined8 *)puStack_670[1];
        if (puVar26 < (undefined8 *)puStack_670[2]) {
          puVar23 = puVar26 + 2;
          puVar26[1] = puStack_408;
          *puVar26 = CONCAT44(uStack_40c,uStack_410);
        }
        else {
          lVar20 = (long)puVar26 - *puStack_670;
          uVar13 = (lVar20 >> 4) + 1;
          if (uVar13 >> 0x3c != 0) {
            FUN_109503878();
            goto LAB_10951e6b4;
          }
          uVar22 = (long)puStack_670[2] - *puStack_670;
          uVar25 = (long)uVar22 >> 3;
          if (uVar25 <= uVar13) {
            uVar25 = uVar13;
          }
          if (0x7fffffffffffffef < uVar22) {
            uVar25 = 0xfffffffffffffff;
          }
          puStack_370 = puStack_670;
          puVar14 = puStack_670;
          func_0x00010950388c();
          uVar13 = *puVar16;
          puVar26 = (undefined8 *)((long)puVar14 + lVar20);
          uVar22 = (long)puVar26 - (puVar16[1] - uVar13);
          puVar23 = puVar26 + 2;
          puVar26[1] = puStack_408;
          *puVar26 = CONCAT44(uStack_40c,uStack_410);
          _memcpy(uVar22,uVar13);
          uStack_390 = (ulong *)*puVar16;
          *puVar16 = uVar22;
          puVar16[1] = (ulong)puVar23;
          puStack_378 = (ulong *)puVar16[2];
          puVar16[2] = (ulong)(puVar14 + uVar25 * 2);
          uStack_388 = uStack_390;
          puStack_380 = uStack_390;
          FUN_10951765c(&uStack_390);
        }
        puVar16[1] = (ulong)puVar23;
        puVar16 = &uStack_658;
        FUN_1094e0cf8();
        puVar28 = puVar28 + 1;
        plVar27 = &uStack_3f0;
      } while (puVar28 != puVar15);
    }
    goto LAB_10951e520;
  }
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(0x113829ec8,0x10);
    if (bVar8) {
      cVar7 = ExclusiveMonitorsStatus();
      iRam0000000113829ec8 = iRam0000000113829ec8 + 1;
    }
  } while (cVar7 != '\0');
  uStack_63b = 0;
  uStack_638 = 0;
  uStack_634 = 0;
  uStack_628 = 0;
  uStack_630 = 0;
  uStack_62c = 0;
  uStack_624 = 0xbf800000;
  uStack_610 = 0;
  uStack_618 = 0;
  uStack_600 = 0;
  uStack_608 = 0;
  uStack_5f8 = 0x3f800000;
  uStack_5e8 = 0;
  uStack_5f0 = 0;
  uStack_5d8 = 0;
  uStack_5e0 = 0;
  uStack_5d0 = 0x3f800000;
  uStack_5c0 = 0;
  uStack_5c8 = 0;
  uStack_5b0 = 0;
  uStack_5b8 = 0;
  uStack_598 = 0;
  uStack_5a0 = 0;
  uStack_588 = 0;
  uStack_590 = 0;
  uStack_5a8 = 0x3f800000;
  uStack_580 = 0x3f800000;
  uStack_560 = 0;
  uStack_568 = 0;
  uStack_570 = 0;
  uStack_578 = 0;
  uStack_558 = 0x3f800000;
  uStack_550 = 0x42ff0000;
  puStack_680 = (ulong *)(auStack_54c + 4);
  iStack_544 = 0;
  uStack_540 = 0;
  auStack_54c = (undefined1  [8])0x0;
  uStack_534 = 0;
  uStack_53c = 0;
  uStack_538 = 0;
  uStack_524 = 0;
  uStack_52c = 0;
  lStack_518 = 0;
  uStack_520 = 0;
  uStack_51c = 0;
  auStack_500[0] = 0;
  auStack_500[1] = 0;
  uStack_4f0 = 0x42ff0000;
  puStack_4b0 = (ulong *)(auStack_4ec + 4);
  uStack_4e4 = 0;
  auStack_4ec = (undefined1  [8])0x0;
  uStack_4d4 = 0;
  uStack_4dc = 0;
  uStack_4c4 = 0;
  uStack_4cc = 0;
  uStack_4b8 = 0;
  uStack_4c0 = 0;
  uStack_4bc = 0;
  puStack_4a8 = auStack_4a0;
  auStack_4a0[1] = 0;
  auStack_4a0[0] = 0;
  uStack_47c = 0;
  uStack_480 = 0;
  uStack_474 = 0x3f8000003f800000;
  uStack_46c = 0;
  uStack_444 = 0;
  auStack_440[1] = 0;
  auStack_440[0] = 0;
  auStack_440[3] = 0;
  auStack_440[2] = 0;
  uStack_420 = 0x3f800000;
  uStack_418 = 0;
  uStack_658 = (ulong *)0x3f80000000000000;
  uStack_639 = 0x15;
  uStack_640 = 0x6e6f697461;
  uStack_648 = 0x6d6765735f;
  uStack_643 = 0x746e65;
  uStack_650 = 0x6369746e616d6573;
  auStack_4a0[2] = 0;
  uVar29 = NEON_fmov(0x3f800000,4);
  uStack_488 = (undefined4)uVar29;
  uStack_484 = (undefined4)((ulong)uVar29 >> 0x20);
  uVar13 = puVar15[2];
  puVar16 = puVar15 + 2;
  if ((uVar13 & 1) != 0) {
    puVar16 = (ulong *)(uVar13 + 7);
  }
  puStack_510 = puStack_680;
  puStack_508 = auStack_500;
  if ((int)puVar15[3] != 0) {
    puVar28 = puVar16 + (int)puVar15[3];
    puVar21 = (undefined8 *)((ulong)&uStack_3f0 | 4);
    do {
      ppuVar3 = &PTR_PTR_1132de100;
      if (*(undefined ***)(*puVar16 + 0x20) != (undefined **)0x0) {
        ppuVar3 = *(undefined ***)(*puVar16 + 0x20);
      }
      puStack_380 = (ulong *)((ulong)ppuVar3[2] & 0xfffffffffffffffc);
      if (*(char *)((long)puStack_380 + 0x17) < '\0') {
        puStack_380 = (ulong *)*puStack_380;
      }
      iVar18 = *(int *)(ppuVar3 + 3);
      uStack_390 = (ulong *)0x242ff0000;
      uStack_388 = (ulong *)CONCAT44(iVar18,*(int *)((long)ppuVar3 + 0x1c));
      puStack_368 = (ulong *)0x0;
      puStack_370 = (ulong *)0x0;
      uStack_358 = 0;
      uStack_360 = 0;
      auStack_340[0] = 0;
      auStack_340[1] = 0;
      lVar20 = (long)*(int *)((long)ppuVar3 + 0x1c) * (long)iVar18;
      puStack_378 = puStack_380;
      puStack_350 = &uStack_388;
      puStack_348 = auStack_340;
      if (lVar20 != 0 && puStack_380 == (ulong *)0x0) {
        puVar19 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar19 = 1;
        uStack_3f0 = puVar19 + 1;
        uStack_3e8 = (ulong *)0x1c;
        *(undefined1 *)(puVar19 + 8) = 0;
        *(undefined8 *)(puVar19 + 3) = 0x207c7c2030203d3d;
        *(undefined8 *)(puVar19 + 1) = 0x2029286c61746f74;
        *(undefined8 *)(puVar19 + 6) = 0x4c4c554e203d2120;
        *(undefined8 *)(puVar19 + 4) = 0x61746164207c7c20;
        FUN_109ac3188(0xffffff29,&uStack_3f0,&UNK_10f2e8162,&UNK_10f566d1b,0x1bb);
        goto LAB_10951e6b4;
      }
      uStack_390 = (ulong *)0x242ff4000;
      auStack_340[1] = 1;
      puStack_370 = (ulong *)((long)puStack_380 + lVar20);
      puStack_368 = puStack_370;
      auStack_340[0] = (long)iVar18;
      if (CONCAT44(uStack_53c,uStack_540) == 0) {
LAB_10951da3c:
        uStack_3f0 = (undefined4 *)CONCAT44(uStack_3f0._4_4_,0x42ff0000);
        puVar21[1] = 0;
        *puVar21 = 0;
        puVar21[3] = 0;
        puVar21[2] = 0;
        puVar21[5] = 0;
        puVar21[4] = 0;
        *(undefined8 *)((long)puVar21 + 0x34) = 0;
        *(undefined8 *)((long)puVar21 + 0x2c) = 0;
        auStack_3a0[0] = 0;
        auStack_3a0[1] = 0;
        puStack_330 = (undefined4 *)CONCAT44(puStack_330._4_4_,0x2010000);
        puStack_328 = &uStack_3f0;
        uStack_320 = 0;
        puVar14 = &uStack_390;
        puStack_3b0 = (ulong *)((ulong)&uStack_3f0 | 8);
        puStack_3a8 = auStack_3a0;
        FUN_109a479a0(puVar14,&puStack_330);
        if (lStack_518 != 0) {
          piVar1 = (int *)(lStack_518 + 0x14);
          do {
            iVar18 = *piVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar8) {
              *piVar1 = iVar18 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar18 + -1 == 0) {
            puVar14 = puStack_678;
            func_0x000109a848d4(puStack_678);
          }
        }
        puVar9 = puStack_3d8;
        puVar15 = uStack_3e0;
        puVar19 = uStack_3f0;
        if (0 < (int)auStack_54c._0_4_) {
          lVar20 = 0;
          do {
            *(undefined4 *)((long)puStack_510 + lVar20 * 4) = 0;
            lVar20 = lVar20 + 1;
          } while (lVar20 < (int)auStack_54c._0_4_);
        }
        iVar18 = uStack_3f0._4_4_;
        puStack_678[1] = (ulong)uStack_3e8;
        *puStack_678 = (ulong)puVar19;
        puStack_678[3] = (ulong)puVar9;
        puStack_678[2] = (ulong)puVar15;
        uVar25 = uStack_3b8;
        uVar13 = uStack_3c0;
        puVar15 = puStack_3d0;
        puStack_678[5] = (ulong)puStack_3c8;
        puStack_678[4] = (ulong)puVar15;
        puStack_678[7] = uVar25;
        puStack_678[6] = uVar13;
        if (puStack_508 != auStack_500) {
          if (puStack_508 != (ulong *)0x0) {
            puVar14 = (ulong *)puStack_508[-1];
            _free(puVar14);
            iVar18 = uStack_3f0._4_4_;
          }
          puStack_510 = puStack_680;
          puStack_508 = auStack_500;
        }
        puVar15 = puStack_3a8;
        if (iVar18 < 3) {
          *puStack_508 = *puStack_3a8;
          puStack_508[1] = puVar15[1];
          uStack_3f0 = (undefined4 *)CONCAT44(uStack_3f0._4_4_,0x42ff0000);
          puVar21[1] = 0;
          *puVar21 = 0;
          puVar21[3] = 0;
          puVar21[2] = 0;
          puVar21[5] = 0;
          puVar21[4] = 0;
          *(undefined8 *)((long)puVar21 + 0x34) = 0;
          *(undefined8 *)((long)puVar21 + 0x2c) = 0;
          if (puVar15 != auStack_3a0) {
            puVar14 = (ulong *)puVar15[-1];
            _free(puVar14);
          }
        }
        else {
          puStack_510 = puStack_3b0;
          puStack_508 = puStack_3a8;
        }
      }
      else {
        uVar13 = (ulong)auStack_54c & 0xffffffff;
        if ((int)auStack_54c._0_4_ < 3) {
          lVar20 = (long)iStack_544 * (long)(int)auStack_54c._4_4_;
        }
        else {
          lVar20 = 1;
          puVar14 = puStack_510;
          do {
            lVar20 = lVar20 * (int)*puVar14;
            uVar13 = uVar13 - 1;
            puVar14 = (ulong *)((long)puVar14 + 4);
          } while (uVar13 != 0);
        }
        if (lVar20 == 0) goto LAB_10951da3c;
        uStack_3e0 = (ulong *)0x0;
        uStack_3f0 = (undefined4 *)CONCAT44(uStack_3f0._4_4_,0x1010000);
        uStack_3e8 = puStack_678;
        uStack_320 = 0;
        puStack_330 = (undefined4 *)CONCAT44(puStack_330._4_4_,0x1010000);
        uStack_410 = 0x2010000;
        uStack_400 = 0;
        puStack_408 = puStack_678;
        puStack_328 = &uStack_390;
        FUN_109a91d90();
        pcStack_310 = FUN_109a28f7c;
        puVar14 = &uStack_3f0;
        FUN_109a279fc(puVar14,&puStack_330,&uStack_410,puVar15,&pcStack_310,1,10);
      }
      if (uStack_358 != 0) {
        piVar1 = (int *)(uStack_358 + 0x14);
        do {
          iVar18 = *piVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar18 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar18 + -1 == 0) {
          puVar14 = &uStack_390;
          func_0x000109a848d4();
        }
      }
      uStack_358 = 0;
      puStack_378 = (ulong *)0x0;
      puStack_380 = (ulong *)0x0;
      puStack_368 = (ulong *)0x0;
      puStack_370 = (ulong *)0x0;
      if (0 < uStack_390._4_4_) {
        lVar20 = 0;
        do {
          *(undefined4 *)((long)puStack_350 + lVar20 * 4) = 0;
          lVar20 = lVar20 + 1;
        } while (lVar20 < uStack_390._4_4_);
      }
      if (puStack_348 != auStack_340 && puStack_348 != (ulong *)0x0) {
        puVar14 = (ulong *)puStack_348[-1];
        _free();
      }
      puVar16 = puVar16 + 1;
      puVar15 = puVar14;
    } while (puVar16 != puVar28);
  }
  FUN_10951f73c(&uStack_668,&uStack_658);
  plVar12 = plStack_660;
  uVar29 = uStack_668;
  puVar15 = puStack_670;
  uStack_308 = uStack_668;
  plStack_300 = plStack_660;
  uStack_668 = 0;
  plStack_660 = (long *)0x0;
  puVar26 = (undefined8 *)puStack_670[2];
  puVar21 = (undefined8 *)*puStack_670;
  if (puVar26 == puVar21) {
    if (puVar26 != (undefined8 *)0x0) {
      puVar17 = (undefined8 *)puStack_670[1];
      puVar23 = puVar21;
      if (puVar17 != puVar26) {
        do {
          puVar17 = puVar17 + -2;
          func_0x0001095038c0();
        } while (puVar17 != puVar26);
        puVar23 = (undefined8 *)*puVar15;
      }
      puVar15[1] = (ulong)puVar21;
      __ZdlPv(puVar23);
      *puVar15 = 0;
      puVar15[1] = 0;
      puVar15[2] = 0;
    }
    puVar26 = (undefined8 *)0x10;
    __Znwm();
    *puVar15 = (ulong)puVar26;
    puVar15[1] = (ulong)puVar26;
    puVar21 = puVar26 + 2;
    puVar15[2] = (ulong)puVar21;
    *puVar26 = uStack_308;
    puVar26[1] = plVar12;
    if (plVar12 != (long *)0x0) {
      plVar27 = plVar12 + 1;
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar8) {
          *plVar27 = *plVar27 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
LAB_10951e4a8:
    puVar15[1] = (ulong)puVar21;
  }
  else {
    puVar26 = (undefined8 *)puStack_670[1];
    if (puVar26 == puVar21) {
      *puVar26 = uVar29;
      puVar26[1] = plVar12;
      if (plVar12 != (long *)0x0) {
        plVar27 = plVar12 + 1;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar8) {
            *plVar27 = *plVar27 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      puVar21 = (undefined8 *)(((long)puVar26 * 2 + 0x10) - (long)puVar21);
      goto LAB_10951e4a8;
    }
    if (plVar12 != (long *)0x0) {
      plVar27 = plVar12 + 1;
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar8) {
          *plVar27 = *plVar27 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    plVar27 = (long *)puVar21[1];
    *puVar21 = uVar29;
    puVar21[1] = plVar12;
    if (plVar27 != (long *)0x0) {
      plVar12 = plVar27 + 1;
      do {
        lVar20 = *plVar12;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar8) {
          *plVar12 = lVar20 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plVar27 + 0x10))(plVar27);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
      }
    }
    puVar26 = (undefined8 *)puVar15[1];
    while (puVar26 != puVar21 + 2) {
      puVar26 = puVar26 + -2;
      func_0x0001095038c0();
    }
    puVar15[1] = (ulong)(puVar21 + 2);
    plVar12 = plStack_300;
  }
  if (plVar12 != (long *)0x0) {
    plVar27 = plVar12 + 1;
    do {
      lVar20 = *plVar27;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar8) {
        *plVar27 = lVar20 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  plVar27 = plStack_660;
  if (plStack_660 != (long *)0x0) {
    plVar12 = plStack_660 + 1;
    do {
      lVar20 = *plVar12;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar8) {
        *plVar12 = lVar20 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plStack_660 + 0x10))(plStack_660);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
    }
  }
  puVar16 = &uStack_658;
  FUN_1094e0cf8();
LAB_10951e520:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2f8) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001095038c0(&uStack_308);
  FUN_109503e90(&uStack_668);
  FUN_1094e0cf8(&uStack_658);
  uStack_658 = puStack_670;
  FUN_109503918(&uStack_658);
  puVar15 = puVar16;
  __Unwind_Resume();
  pcStack_6d8 = FUN_10951e820;
  uVar13 = *puVar15;
  puStack_6f0 = puVar16;
  plStack_6e8 = plVar27;
  pppuStack_6e0 = &ppuStack_280;
  FUN_10951f6b4();
  if (uVar13 != 0) {
    return;
  }
  func_0x000107c31940(auStack_720,&UNK_10f2e5846);
  uVar13 = *puVar15;
  FUN_10951f6fc();
  FUN_109259240(auStack_708,auStack_720,*(ulong *)(uVar13 + 8) & 0x7fffffffffffffff);
  func_0x000105687ee0(auStack_708);
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x10951e888);
  (*pcVar10)();
}



/* Entry: 10951ce00; end: 10951d1c3;  */

void FUN_10951ce00(long param_1)

{
  int *piVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  ulong *puVar7;
  code *pcVar8;
  long *plVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  int iVar16;
  long lVar17;
  ulong *extraout_x8;
  ulong uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long *plVar21;
  undefined8 *puVar22;
  ulong *puVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auStack_6e0 [24];
  undefined1 auStack_6c8 [24];
  ulong *puStack_6b0;
  long *plStack_6a8;
  undefined1 **ppuStack_6a0;
  code *pcStack_698;
  ulong *puStack_688;
  ulong *puStack_680;
  ulong *puStack_678;
  ulong *puStack_670;
  undefined8 *puStack_668;
  ulong *puStack_660;
  ulong *puStack_658;
  ulong *puStack_650;
  ulong *puStack_648;
  ulong *puStack_640;
  ulong *puStack_638;
  ulong *puStack_630;
  undefined8 uStack_628;
  long *plStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined5 uStack_608;
  undefined3 uStack_603;
  undefined5 uStack_600;
  undefined2 uStack_5fb;
  undefined1 uStack_5f9;
  undefined4 uStack_5f8;
  undefined4 uStack_5f4;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  undefined4 uStack_5e8;
  undefined8 uStack_5e4;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined4 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined4 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined4 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined4 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined4 uStack_518;
  undefined4 uStack_510;
  undefined1 auStack_50c [8];
  int iStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  undefined8 uStack_4f4;
  undefined8 uStack_4ec;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  long lStack_4d8;
  ulong *puStack_4d0;
  ulong *puStack_4c8;
  ulong auStack_4c0 [2];
  undefined4 uStack_4b0;
  undefined1 auStack_4ac [8];
  undefined8 uStack_4a4;
  undefined8 uStack_49c;
  undefined8 uStack_494;
  undefined8 uStack_48c;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined8 uStack_478;
  ulong *puStack_470;
  ulong *puStack_468;
  ulong auStack_460 [3];
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined8 uStack_43c;
  undefined8 uStack_434;
  undefined1 uStack_42c;
  undefined1 uStack_404;
  ulong auStack_400 [4];
  undefined4 uStack_3e0;
  undefined4 uStack_3d8;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  ulong *puStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  ulong *puStack_398;
  ulong *puStack_390;
  ulong *puStack_388;
  ulong uStack_380;
  ulong uStack_378;
  ulong *puStack_370;
  ulong *puStack_368;
  ulong auStack_360 [2];
  undefined8 uStack_350;
  undefined8 uStack_348;
  ulong *puStack_340;
  ulong *puStack_338;
  ulong *puStack_330;
  ulong *puStack_328;
  ulong uStack_320;
  ulong uStack_318;
  ulong *puStack_310;
  ulong *puStack_308;
  ulong auStack_300 [2];
  undefined4 *puStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 uStack_2e0;
  code *pcStack_2d0;
  undefined8 uStack_2c8;
  long *plStack_2c0;
  long lStack_2b8;
  undefined1 *puStack_240;
  code *pcStack_238;
  undefined8 uStack_230;
  long *plStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  ulong uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long *plStack_1b8;
  undefined1 auStack_1b0 [8];
  long *plStack_1a8;
  long alStack_1a0 [3];
  long *plStack_188;
  undefined **ppuStack_180;
  long *plStack_178;
  long lStack_170;
  undefined ***pppuStack_168;
  long *plStack_158;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_220 = *(ulong *)(param_1 + 8);
  uStack_218 = *(undefined8 *)(param_1 + 0x10);
  iVar16 = *(int *)(param_1 + 0xc);
  uStack_1e0 = (ulong)&uStack_220 | 8;
  uStack_210 = *(undefined8 *)(param_1 + 0x18);
  uStack_208 = *(undefined8 *)(param_1 + 0x20);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x30);
  uStack_200 = *(undefined8 *)(param_1 + 0x28);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x38);
  lStack_1e8 = *(long *)(param_1 + 0x40);
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x40) + 0x14);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    iVar16 = *(int *)(param_1 + 0xc);
  }
  puStack_1d8 = &uStack_1d0;
  if (iVar16 < 3) {
    uStack_1d0 = **(undefined8 **)(param_1 + 0x50);
    uStack_1c8 = (*(undefined8 **)(param_1 + 0x50))[1];
  }
  else {
    uStack_220 = uStack_220 & 0xffffffff;
    func_0x000109a84868(&uStack_220);
  }
  func_0x000105682cb8(&ppuStack_180,&uStack_220,0);
  FUN_10951f008(&uStack_1c0,&uStack_230,&ppuStack_180);
  FUN_10951f294(&ppuStack_180);
  if (lStack_1e8 != 0) {
    piVar1 = (int *)(lStack_1e8 + 0x14);
    do {
      iVar16 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar16 + -1 == 0) {
      func_0x000109a848d4(&uStack_220);
    }
  }
  lStack_1e8 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  if (0 < uStack_220._4_4_) {
    lVar17 = 0;
    do {
      *(undefined4 *)(uStack_1e0 + lVar17 * 4) = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < uStack_220._4_4_);
  }
  if (puStack_1d8 != &uStack_1d0 && puStack_1d8 != (undefined8 *)0x0) {
    _free(puStack_1d8[-1]);
  }
  plStack_178 = (long *)uStack_1c0;
  plStack_228 = plStack_1b8;
  uStack_230 = uStack_1c0;
  uStack_1c0 = 0;
  plStack_1b8 = (long *)0x0;
  ppuStack_180 = &PTR_FUN_110afa9c0;
  pppuStack_168 = &ppuStack_180;
  FUN_109567d5c(auStack_1b0,&uStack_230,&ppuStack_180);
  if (pppuStack_168 == &ppuStack_180) {
    lVar17 = 0x20;
LAB_10951cf98:
    (**(code **)((long)*pppuStack_168 + lVar17))();
  }
  else if (pppuStack_168 != (undefined ***)0x0) {
    lVar17 = 0x28;
    goto LAB_10951cf98;
  }
  plVar9 = plStack_228;
  if (plStack_228 != (long *)0x0) {
    plVar21 = plStack_228 + 1;
    do {
      lVar17 = *plVar21;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *plVar21 = lVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_228 + 0x10))(plStack_228);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar9 = plStack_1b8;
  if (plStack_1b8 != (long *)0x0) {
    plVar21 = plStack_1b8 + 1;
    do {
      lVar17 = *plVar21;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *plVar21 = lVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  FUN_109564bec(&ppuStack_180,*(undefined8 *)(param_1 + 0xe0),auStack_1b0);
  plVar9 = plStack_178;
  ppuVar2 = ppuStack_180;
  ppuStack_180 = (undefined **)0x0;
  plStack_178 = (long *)0x0;
  plVar21 = *(long **)(param_1 + 0xf0);
  *(long **)(param_1 + 0xf0) = plVar9;
  *(undefined ***)(param_1 + 0xe8) = ppuVar2;
  if (plVar21 != (long *)0x0) {
    plVar9 = plVar21 + 1;
    do {
      lVar17 = *plVar9;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = lVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
    }
  }
  plVar9 = &lStack_170;
  func_0x00010951eac8(param_1 + 0xf8);
  iVar16 = (int)plVar9;
  if (plStack_158 == &lStack_170) {
    lVar17 = 0x20;
LAB_10951d098:
    (**(code **)(*plStack_158 + lVar17))();
  }
  else if (plStack_158 != (long *)0x0) {
    lVar17 = 0x28;
    goto LAB_10951d098;
  }
  plVar9 = plStack_178;
  if (plStack_178 != (long *)0x0) {
    plVar21 = plStack_178 + 1;
    do {
      lVar17 = *plVar21;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *plVar21 = lVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_178 + 0x10))(plStack_178);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  if (plStack_188 == alStack_1a0) {
    lVar17 = 0x20;
LAB_10951d100:
    (**(code **)(*plStack_188 + lVar17))();
  }
  else if (plStack_188 != (long *)0x0) {
    lVar17 = 0x28;
    goto LAB_10951d100;
  }
  plVar9 = plStack_188;
  if (plStack_1a8 != (long *)0x0) {
    plVar21 = plStack_1a8 + 1;
    do {
      lVar17 = *plVar21;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *plVar21 = lVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_1a8 + 0x10))(plStack_1a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar9 = plStack_1a8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (iVar16 != 0) {
    func_0x000104bd46a0();
    func_0x000105681f78(auStack_1b0);
  }
  __Unwind_Resume();
  pcStack_238 = FUN_10951d1c4;
  lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  puVar12 = (ulong *)(plVar9 + 0x1d);
  uVar10 = *puVar12;
  puStack_240 = &stack0xfffffffffffffff0;
  if (uVar10 == 0) {
LAB_10951e6a0:
    func_0x000105688514(&UNK_10f572a2c);
LAB_10951e6b4:
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10951e6b8);
    (*pcVar8)();
  }
  plVar21 = &uStack_618;
  puStack_638 = (ulong *)&uStack_510;
  puStack_630 = extraout_x8;
  FUN_10951f6b4();
  puVar13 = extraout_x8;
  if (uVar10 != 0) {
    FUN_10951e820();
    FUN_109511034(extraout_x8,(long)(int)puVar12[3]);
    uVar10 = puVar12[2];
    puVar23 = puVar12 + 2;
    if ((uVar10 & 1) != 0) {
      puVar23 = (ulong *)(uVar10 + 7);
    }
    if ((int)puVar12[3] != 0) {
      puStack_678 = puVar23 + (int)puVar12[3];
      puStack_688 = &uStack_3a8;
      puStack_660 = auStack_360;
      puStack_668 = (undefined8 *)((ulong)&uStack_350 | 4);
      puStack_680 = (ulong *)((ulong)&uStack_350 | 8);
      puStack_670 = auStack_300;
      puStack_658 = (ulong *)auStack_50c;
      puStack_640 = (ulong *)(auStack_50c + 4);
      puStack_648 = (ulong *)(auStack_4ac + 4);
      puStack_650 = auStack_400;
      do {
        puVar12 = puStack_630;
        uVar10 = *puVar23;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(0x113829ec8,0x10);
          if (bVar6) {
            cVar5 = ExclusiveMonitorsStatus();
            iRam0000000113829ec8 = iRam0000000113829ec8 + 1;
          }
        } while (cVar5 != '\0');
        uStack_608 = 0;
        uStack_603 = 0;
        uStack_610 = 0;
        uStack_5f8 = 0;
        uStack_600 = 0;
        uStack_5fb = 0;
        uStack_5f9 = 0;
        uStack_5ec = 0;
        uStack_5e8 = 0;
        uStack_5f4 = 0;
        uStack_5f0 = 0;
        uStack_5e4 = 0xbf800000;
        uStack_5d0 = 0;
        uStack_5d8 = 0;
        uStack_5c0 = 0;
        uStack_5c8 = 0;
        uStack_5a8 = 0;
        uStack_5b0 = 0;
        uStack_598 = 0;
        uStack_5a0 = 0;
        uStack_5b8 = 0x3f800000;
        uStack_590 = 0x3f800000;
        uStack_580 = 0;
        uStack_588 = 0;
        uStack_570 = 0;
        uStack_578 = 0;
        uStack_558 = 0;
        uStack_560 = 0;
        uStack_548 = 0;
        uStack_550 = 0;
        uStack_568 = 0x3f800000;
        uStack_540 = 0x3f800000;
        uStack_530 = 0;
        uStack_538 = 0;
        uStack_520 = 0;
        uStack_528 = 0;
        uStack_518 = 0x3f800000;
        uStack_510 = 0x42ff0000;
        puStack_658[1] = 0;
        *puStack_658 = 0;
        puStack_658[3] = 0;
        puStack_658[2] = 0;
        puStack_658[5] = 0;
        puStack_658[4] = 0;
        *(undefined8 *)((long)puStack_658 + 0x34) = 0;
        *(undefined8 *)((long)puStack_658 + 0x2c) = 0;
        puStack_4d0 = puStack_640;
        auStack_4c0[0] = 0;
        auStack_4c0[1] = 0;
        uStack_4b0 = 0x42ff0000;
        uStack_4a4 = 0;
        auStack_4ac = (undefined1  [8])0x0;
        uStack_494 = 0;
        uStack_49c = 0;
        uStack_484 = 0;
        uStack_48c = 0;
        uStack_478 = 0;
        uStack_480 = 0;
        uStack_47c = 0;
        puStack_470 = puStack_648;
        auStack_460[1] = 0;
        auStack_460[0] = 0;
        uStack_448 = 0;
        auStack_460[2] = 0;
        uStack_43c = 0;
        uStack_444 = 0;
        uStack_440 = 0;
        uStack_434 = 0x3f8000003f800000;
        uStack_42c = 0;
        uStack_404 = 0;
        puStack_650[1] = 0;
        *puStack_650 = 0;
        puStack_650[3] = 0;
        puStack_650[2] = 0;
        uStack_3e0 = 0x3f800000;
        uStack_3d8 = 0;
        uStack_618 = (ulong *)CONCAT44(0x3f000000,(int)*(undefined8 *)(uVar10 + 0x40));
        ppuVar2 = &PTR_PTR_1132da578;
        if (*(undefined ***)(uVar10 + 0x28) != (undefined **)0x0) {
          ppuVar2 = *(undefined ***)(uVar10 + 0x28);
        }
        puStack_4c8 = auStack_4c0;
        puStack_468 = auStack_460;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (&uStack_610,(ulong)ppuVar2[2] & 0xfffffffffffffffc);
        ppuVar2 = &PTR_PTR_1132da578;
        if (*(undefined ***)(uVar10 + 0x28) != (undefined **)0x0) {
          ppuVar2 = *(undefined ***)(uVar10 + 0x28);
        }
        uStack_618 = (ulong *)CONCAT44(*(undefined4 *)((long)ppuVar2 + 0x1c),(undefined4)uStack_618)
        ;
        ppuVar2 = &PTR_PTR_1132da178;
        if (*(undefined ***)(uVar10 + 0x18) != (undefined **)0x0) {
          ppuVar2 = *(undefined ***)(uVar10 + 0x18);
        }
        uStack_5f0 = SUB84(ppuVar2[3],0);
        uStack_5ec = (undefined4)((ulong)ppuVar2[3] >> 0x20);
        uStack_5f8 = SUB84(ppuVar2[2],0);
        uStack_5f4 = (undefined4)((ulong)ppuVar2[2] >> 0x20);
        if ((*(byte *)(uVar10 + 0x10) >> 4 & 1) != 0) {
          lVar17 = *(long *)(uVar10 + 0x38);
          uStack_3a0 = (ulong *)(*(ulong *)(lVar17 + 0x10) & 0xfffffffffffffffc);
          if (*(char *)((long)uStack_3a0 + 0x17) < '\0') {
            uStack_3a0 = (ulong *)*uStack_3a0;
          }
          iVar16 = *(int *)(lVar17 + 0x18);
          uStack_3b0 = (undefined4 *)0x242ff0000;
          uStack_3a8 = (ulong *)CONCAT44(iVar16,*(int *)(lVar17 + 0x1c));
          puStack_388 = (ulong *)0x0;
          puStack_390 = (ulong *)0x0;
          uStack_378 = 0;
          uStack_380 = 0;
          puStack_370 = puStack_688;
          puStack_368 = puStack_660;
          lVar17 = (long)*(int *)(lVar17 + 0x1c) * (long)iVar16;
          *puStack_660 = 0;
          puStack_660[1] = 0;
          puStack_398 = uStack_3a0;
          if ((lVar17 != 0) && (uStack_3a0 == (ulong *)0x0)) {
            puVar15 = (undefined4 *)0x24;
            func_0x000107c2ae8c();
            *puVar15 = 1;
            puStack_2f0 = puVar15 + 1;
            puStack_2e8 = (undefined8 *)0x1c;
            *(undefined1 *)(puVar15 + 8) = 0;
            *(undefined8 *)(puVar15 + 3) = 0x207c7c2030203d3d;
            *(undefined8 *)(puVar15 + 1) = 0x2029286c61746f74;
            *(undefined8 *)(puVar15 + 6) = 0x4c4c554e203d2120;
            *(undefined8 *)(puVar15 + 4) = 0x61746164207c7c20;
            FUN_109ac3188(0xffffff29,&puStack_2f0,&UNK_10f2e8162,&UNK_10f566d1b,0x1bb);
            goto LAB_10951e6b4;
          }
          uStack_3b0 = (undefined4 *)0x242ff4000;
          auStack_360[1] = 1;
          puStack_390 = (ulong *)((long)uStack_3a0 + lVar17);
          uStack_350 = (ulong *)CONCAT44(uStack_350._4_4_,0x42ff0000);
          puStack_668[1] = 0;
          *puStack_668 = 0;
          puStack_668[3] = 0;
          puStack_668[2] = 0;
          puStack_668[5] = 0;
          puStack_668[4] = 0;
          *(undefined8 *)((long)puStack_668 + 0x34) = 0;
          *(undefined8 *)((long)puStack_668 + 0x2c) = 0;
          puStack_310 = puStack_680;
          puStack_308 = puStack_670;
          *puStack_670 = 0;
          puStack_670[1] = 0;
          puStack_2f0 = (undefined4 *)CONCAT44(puStack_2f0._4_4_,0x2010000);
          puStack_2e8 = &uStack_350;
          uStack_2e0 = 0;
          puStack_388 = puStack_390;
          auStack_360[0] = (long)iVar16;
          FUN_109a479a0(&uStack_3b0,&puStack_2f0);
          if (lStack_4d8 != 0) {
            piVar1 = (int *)(lStack_4d8 + 0x14);
            do {
              iVar16 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar16 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar16 + -1 == 0) {
              func_0x000109a848d4(puStack_638);
            }
          }
          puVar11 = puStack_338;
          puVar13 = puStack_340;
          uVar10 = (ulong)uStack_350;
          if (0 < (int)auStack_50c._0_4_) {
            lVar17 = 0;
            do {
              *(undefined4 *)((long)puStack_4d0 + lVar17 * 4) = 0;
              lVar17 = lVar17 + 1;
            } while (lVar17 < (int)auStack_50c._0_4_);
          }
          iVar16 = uStack_350._4_4_;
          puStack_638[1] = (ulong)uStack_348;
          *puStack_638 = uVar10;
          puStack_638[3] = (ulong)puVar11;
          puStack_638[2] = (ulong)puVar13;
          uVar20 = uStack_318;
          uVar10 = uStack_320;
          puVar13 = puStack_330;
          puStack_638[5] = (ulong)puStack_328;
          puStack_638[4] = (ulong)puVar13;
          puStack_638[7] = uVar20;
          puStack_638[6] = uVar10;
          if (puStack_4c8 != auStack_4c0) {
            if (puStack_4c8 != (ulong *)0x0) {
              _free(puStack_4c8[-1]);
              iVar16 = uStack_350._4_4_;
            }
            puStack_4d0 = puStack_640;
            puStack_4c8 = auStack_4c0;
          }
          puVar13 = puStack_308;
          if (iVar16 < 3) {
            *puStack_4c8 = *puStack_308;
            puStack_4c8[1] = puVar13[1];
            uStack_350 = (ulong *)CONCAT44(uStack_350._4_4_,0x42ff0000);
            puStack_668[1] = 0;
            *puStack_668 = 0;
            puStack_668[3] = 0;
            puStack_668[2] = 0;
            puStack_668[5] = 0;
            puStack_668[4] = 0;
            *(undefined8 *)((long)puStack_668 + 0x34) = 0;
            *(undefined8 *)((long)puStack_668 + 0x2c) = 0;
            if (puVar13 != puStack_670) {
              _free(puVar13[-1]);
            }
          }
          else {
            puStack_4d0 = puStack_310;
            puStack_4c8 = puStack_308;
            puStack_308 = puStack_670;
            puStack_310 = puStack_680;
            uStack_350 = (ulong *)CONCAT44(uStack_350._4_4_,0x42ff0000);
            puStack_668[1] = 0;
            *puStack_668 = 0;
            puStack_668[3] = 0;
            puStack_668[2] = 0;
            puStack_668[5] = 0;
            puStack_668[4] = 0;
            *(undefined8 *)((long)puStack_668 + 0x34) = 0;
            *(undefined8 *)((long)puStack_668 + 0x2c) = 0;
          }
          if (uStack_378 != 0) {
            piVar1 = (int *)(uStack_378 + 0x14);
            do {
              iVar16 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar16 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar16 + -1 == 0) {
              func_0x000109a848d4(&uStack_3b0);
            }
          }
          uStack_378 = 0;
          puStack_398 = (ulong *)0x0;
          uStack_3a0 = (ulong *)0x0;
          puStack_388 = (ulong *)0x0;
          puStack_390 = (ulong *)0x0;
          if (0 < uStack_3b0._4_4_) {
            lVar17 = 0;
            do {
              *(undefined4 *)((long)puStack_370 + lVar17 * 4) = 0;
              lVar17 = lVar17 + 1;
            } while (lVar17 < uStack_3b0._4_4_);
          }
          if (puStack_368 != puStack_660 && puStack_368 != (ulong *)0x0) {
            _free(puStack_368[-1]);
          }
          puStack_638[0x19] = CONCAT44(uStack_5ec,uStack_5f0);
          puStack_638[0x18] = CONCAT44(uStack_5f4,uStack_5f8);
        }
        FUN_10951f73c(&uStack_3d0,&uStack_618);
        puVar24 = (undefined8 *)puVar12[1];
        if (puVar24 < (undefined8 *)puVar12[2]) {
          puVar22 = puVar24 + 2;
          puVar24[1] = puStack_3c8;
          *puVar24 = CONCAT44(uStack_3cc,uStack_3d0);
        }
        else {
          lVar17 = (long)puVar24 - *puVar12;
          uVar10 = (lVar17 >> 4) + 1;
          if (uVar10 >> 0x3c != 0) {
            FUN_109503878();
            goto LAB_10951e6b4;
          }
          uVar18 = (long)puVar12[2] - *puVar12;
          uVar20 = (long)uVar18 >> 3;
          if (uVar20 <= uVar10) {
            uVar20 = uVar10;
          }
          if (0x7fffffffffffffef < uVar18) {
            uVar20 = 0xfffffffffffffff;
          }
          puStack_330 = puVar12;
          puVar13 = puVar12;
          func_0x00010950388c();
          uVar10 = *puVar12;
          puVar24 = (undefined8 *)((long)puVar13 + lVar17);
          uVar18 = (long)puVar24 - (puVar12[1] - uVar10);
          puVar22 = puVar24 + 2;
          puVar24[1] = puStack_3c8;
          *puVar24 = CONCAT44(uStack_3cc,uStack_3d0);
          _memcpy(uVar18,uVar10);
          puVar12 = puStack_630;
          uStack_350 = (ulong *)*puStack_630;
          *puStack_630 = uVar18;
          puStack_630[1] = (ulong)puVar22;
          puStack_338 = (ulong *)puStack_630[2];
          puStack_630[2] = (ulong)(puVar13 + uVar20 * 2);
          uStack_348 = uStack_350;
          puStack_340 = uStack_350;
          FUN_10951765c(&uStack_350);
        }
        puVar12[1] = (ulong)puVar22;
        puVar13 = &uStack_618;
        FUN_1094e0cf8();
        puVar23 = puVar23 + 1;
        plVar21 = (long *)0x42ff0000;
      } while (puVar23 != puStack_678);
    }
    goto LAB_10951e520;
  }
  uVar10 = *puVar12;
  if (uVar10 == 0) goto LAB_10951e6a0;
  FUN_10951f7a4();
  if (uVar10 == 0) {
    uVar10 = *puVar12;
    if ((uVar10 == 0) || (FUN_10951f7ec(), uVar10 == 0)) goto LAB_10951e6a0;
    func_0x000105683010();
    uVar4 = *(uint *)((long)puVar12 + 0xc);
    if (uVar4 == *(uint *)((long)puVar12 + 4)) {
      uStack_3a0 = (ulong *)((ulong)uStack_3a0._4_4_ << 0x20);
      uStack_3b0 = (undefined4 *)0x0;
    }
    else {
      uStack_3a0 = (ulong *)CONCAT44(uStack_3a0._4_4_,uVar4);
      uStack_3b0 = *(undefined4 **)(puVar12[2] + (ulong)uVar4 * 8);
      if (((ulong)uStack_3b0 & 1) != 0) {
        uStack_3b0 = *(undefined4 **)(**(long **)((long)uStack_3b0 + -1) + 0x20);
      }
    }
    plVar21 = &uStack_618;
    puStack_638 = auStack_460;
    puStack_640 = auStack_400;
    puVar13 = puVar12;
    uStack_3a8 = puVar12;
    while (puVar15 = uStack_3b0, uStack_3b0 != (undefined4 *)0x0) {
      do {
        iVar16 = iRam0000000113829ec8;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(0x113829ec8,0x10);
        if (bVar6) {
          cVar5 = ExclusiveMonitorsStatus();
          iRam0000000113829ec8 = iRam0000000113829ec8 + 1;
        }
      } while (cVar5 != '\0');
      uStack_618 = (ulong *)CONCAT44(0x3f000000,iVar16);
      uStack_608 = 0;
      uStack_603 = 0;
      uStack_610 = 0;
      uStack_5f8 = 0;
      uStack_600 = 0;
      uStack_5fb = 0;
      uStack_5f9 = 0;
      uStack_5ec = 0;
      uStack_5e8 = 0;
      uStack_5f4 = 0;
      uStack_5f0 = 0;
      uStack_5e4 = 0xbf800000;
      uStack_5d0 = 0;
      uStack_5d8 = 0;
      uStack_5c0 = 0;
      uStack_5c8 = 0;
      uStack_5a8 = 0;
      uStack_5b0 = 0;
      uStack_598 = 0;
      uStack_5a0 = 0;
      uStack_5b8 = 0x3f800000;
      uStack_590 = 0x3f800000;
      uStack_580 = 0;
      uStack_588 = 0;
      uStack_570 = 0;
      uStack_578 = 0;
      uStack_558 = 0;
      uStack_560 = 0;
      uStack_548 = 0;
      uStack_550 = 0;
      uStack_568 = 0x3f800000;
      uStack_540 = 0x3f800000;
      uStack_530 = 0;
      uStack_538 = 0;
      uStack_520 = 0;
      uStack_528 = 0;
      uStack_518 = 0x3f800000;
      uStack_510 = 0x42ff0000;
      iStack_504 = 0;
      uStack_500 = 0;
      auStack_50c = (undefined1  [8])0x0;
      uStack_4f4 = 0;
      uStack_4fc = 0;
      uStack_4f8 = 0;
      uStack_4e4 = 0;
      uStack_4ec = 0;
      lStack_4d8 = 0;
      uStack_4e0 = 0;
      uStack_4dc = 0;
      auStack_4c0[0] = 0;
      auStack_4c0[1] = 0;
      uStack_4b0 = 0x42ff0000;
      uStack_4a4 = 0;
      auStack_4ac = (undefined1  [8])0x0;
      uStack_494 = 0;
      uStack_49c = 0;
      uStack_484 = 0;
      uStack_48c = 0;
      uStack_478 = 0;
      uStack_480 = 0;
      uStack_47c = 0;
      puStack_468 = puStack_638;
      *(undefined8 *)((long)puStack_638 + 0x24) = 0;
      *(undefined8 *)((long)puStack_638 + 0x1c) = 0;
      puStack_638[1] = 0;
      *puStack_638 = 0;
      puStack_638[3] = 0;
      puStack_638[2] = 0;
      uStack_434 = 0x3f8000003f800000;
      uStack_42c = 0;
      uStack_404 = 0;
      puStack_640[1] = 0;
      *puStack_640 = 0;
      puStack_640[3] = 0;
      puStack_640[2] = 0;
      uStack_3e0 = 0x3f800000;
      uStack_3d8 = 0;
      puStack_4d0 = (ulong *)(auStack_50c + 4);
      puStack_4c8 = auStack_4c0;
      puStack_470 = (ulong *)(auStack_4ac + 4);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (&uStack_610,*(ulong *)(puVar15 + 8) & 0xfffffffffffffffc);
      uStack_618 = (ulong *)CONCAT44(puVar15[0xb],puVar15[2]);
      FUN_10951f73c(&puStack_2f0,&uStack_618);
      puVar12 = puStack_630;
      puVar24 = (undefined8 *)puStack_630[1];
      if (puVar24 < (undefined8 *)puStack_630[2]) {
        puVar22 = puVar24 + 2;
        puVar24[1] = puStack_2e8;
        *puVar24 = puStack_2f0;
      }
      else {
        lVar17 = (long)puVar24 - *puStack_630;
        uVar10 = (lVar17 >> 4) + 1;
        if (uVar10 >> 0x3c != 0) {
          FUN_109503878();
          goto LAB_10951e6b4;
        }
        uVar18 = (long)puStack_630[2] - *puStack_630;
        uVar20 = (long)uVar18 >> 3;
        if (uVar20 <= uVar10) {
          uVar20 = uVar10;
        }
        if (0x7fffffffffffffef < uVar18) {
          uVar20 = 0xfffffffffffffff;
        }
        puStack_330 = puStack_630;
        puVar13 = puStack_630;
        func_0x00010950388c();
        uVar10 = *puVar12;
        puVar24 = (undefined8 *)((long)puVar13 + lVar17);
        puStack_648 = puVar13 + uVar20 * 2;
        uVar20 = (long)puVar24 - (puVar12[1] - uVar10);
        puVar22 = puVar24 + 2;
        puVar24[1] = puStack_2e8;
        *puVar24 = puStack_2f0;
        _memcpy(uVar20,uVar10);
        uStack_350 = (ulong *)*puVar12;
        *puVar12 = uVar20;
        puVar12[1] = (ulong)puVar22;
        puStack_338 = (ulong *)puVar12[2];
        puVar12[2] = (ulong)puStack_648;
        uStack_348 = uStack_350;
        puStack_340 = uStack_350;
        FUN_10951765c(&uStack_350);
      }
      puVar12[1] = (ulong)puVar22;
      FUN_1094e0cf8(&uStack_618);
      puVar13 = &uStack_3b0;
      func_0x000107c27d54();
    }
    goto LAB_10951e520;
  }
  FUN_10951e8bc();
  if (*(char *)(plVar9[0x1b] + 0x20) != '\x01') {
    FUN_109511034(extraout_x8,(long)(int)puVar12[3]);
    uVar10 = puVar12[2];
    puVar23 = puVar12 + 2;
    if ((uVar10 & 1) != 0) {
      puVar23 = (ulong *)(uVar10 + 7);
    }
    if ((int)puVar12[3] != 0) {
      puVar12 = puVar23 + (int)puVar12[3];
      puStack_688 = &uStack_3a8;
      puVar24 = (undefined8 *)((ulong)&uStack_350 | 4);
      puStack_658 = (ulong *)((ulong)&uStack_350 | 8);
      puStack_648 = auStack_300;
      puStack_660 = (ulong *)auStack_50c;
      puStack_650 = (ulong *)(auStack_50c + 4);
      puStack_640 = auStack_4c0;
      puStack_668 = (undefined8 *)auStack_4ac;
      puStack_670 = (ulong *)(auStack_4ac + 4);
      puStack_678 = auStack_460;
      puStack_680 = auStack_400;
      do {
        uVar10 = *puVar23;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(0x113829ec8,0x10);
          if (bVar6) {
            cVar5 = ExclusiveMonitorsStatus();
            iRam0000000113829ec8 = iRam0000000113829ec8 + 1;
          }
        } while (cVar5 != '\0');
        uStack_608 = 0;
        uStack_603 = 0;
        uStack_610 = 0;
        uStack_5f8 = 0;
        uStack_600 = 0;
        uStack_5fb = 0;
        uStack_5f9 = 0;
        uStack_5ec = 0;
        uStack_5e8 = 0;
        uStack_5f4 = 0;
        uStack_5f0 = 0;
        uStack_5e4 = 0xbf800000;
        uStack_5d0 = 0;
        uStack_5d8 = 0;
        uStack_5c0 = 0;
        uStack_5c8 = 0;
        uStack_5a8 = 0;
        uStack_5b0 = 0;
        uStack_598 = 0;
        uStack_5a0 = 0;
        uStack_5b8 = 0x3f800000;
        uStack_590 = 0x3f800000;
        uStack_580 = 0;
        uStack_588 = 0;
        uStack_570 = 0;
        uStack_578 = 0;
        uStack_558 = 0;
        uStack_560 = 0;
        uStack_548 = 0;
        uStack_550 = 0;
        uStack_568 = 0x3f800000;
        uStack_540 = 0x3f800000;
        uStack_530 = 0;
        uStack_538 = 0;
        uStack_520 = 0;
        uStack_528 = 0;
        uStack_518 = 0x3f800000;
        uStack_510 = 0x42ff0000;
        puStack_660[1] = 0;
        *puStack_660 = 0;
        puStack_660[3] = 0;
        puStack_660[2] = 0;
        puStack_660[5] = 0;
        puStack_660[4] = 0;
        *(undefined8 *)((long)puStack_660 + 0x34) = 0;
        *(undefined8 *)((long)puStack_660 + 0x2c) = 0;
        puStack_4d0 = puStack_650;
        puStack_4c8 = puStack_640;
        *puStack_640 = 0;
        puStack_640[1] = 0;
        uStack_4b0 = 0x42ff0000;
        puStack_668[1] = 0;
        *puStack_668 = 0;
        puStack_668[3] = 0;
        puStack_668[2] = 0;
        puStack_668[5] = 0;
        puStack_668[4] = 0;
        *(undefined8 *)((long)puStack_668 + 0x34) = 0;
        *(undefined8 *)((long)puStack_668 + 0x2c) = 0;
        puStack_470 = puStack_670;
        puStack_468 = puStack_678;
        puStack_678[1] = 0;
        *puStack_678 = 0;
        puStack_678[3] = 0;
        puStack_678[2] = 0;
        *(undefined8 *)((long)puStack_678 + 0x24) = 0;
        *(undefined8 *)((long)puStack_678 + 0x1c) = 0;
        uStack_434 = 0x3f8000003f800000;
        uStack_42c = 0;
        uStack_404 = 0;
        puStack_680[1] = 0;
        *puStack_680 = 0;
        puStack_680[3] = 0;
        puStack_680[2] = 0;
        uStack_3e0 = 0x3f800000;
        uStack_3d8 = 0;
        uStack_618 = (ulong *)CONCAT44(0x3f000000,iRam0000000113732f50);
        ppuVar2 = &PTR_PTR_1132da578;
        if (*(undefined ***)(uVar10 + 0x18) != (undefined **)0x0) {
          ppuVar2 = *(undefined ***)(uVar10 + 0x18);
        }
        iRam0000000113732f50 = iRam0000000113732f50 + 1;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (&uStack_610,(ulong)ppuVar2[2] & 0xfffffffffffffffc);
        ppuVar2 = &PTR_PTR_1132da578;
        if (*(undefined ***)(uVar10 + 0x18) != (undefined **)0x0) {
          ppuVar2 = *(undefined ***)(uVar10 + 0x18);
        }
        uStack_618 = (ulong *)CONCAT44(*(undefined4 *)((long)ppuVar2 + 0x1c),(undefined4)uStack_618)
        ;
        ppuVar2 = &PTR_PTR_1132da1a0;
        if (*(undefined ***)(uVar10 + 0x28) != (undefined **)0x0) {
          ppuVar2 = *(undefined ***)(uVar10 + 0x28);
        }
        ppuVar3 = &PTR_PTR_1132de100;
        if (*(undefined ***)(uVar10 + 0x20) != (undefined **)0x0) {
          ppuVar3 = *(undefined ***)(uVar10 + 0x20);
        }
        auVar26._0_8_ = ppuVar3[3];
        auVar26._8_8_ = auVar26._0_8_;
        auVar26 = NEON_scvtf(auVar26,4);
        auVar27 = NEON_scvtf(*(undefined1 (*) [16])(ppuVar2 + 2),4);
        *(float *)(puStack_638 + 0x19) = auVar27._8_4_ / auVar26._8_4_;
        *(float *)((long)puStack_638 + 0xcc) = auVar27._12_4_ / auVar26._12_4_;
        *(float *)(puStack_638 + 0x18) = auVar27._0_4_ / auVar26._0_4_;
        *(float *)((long)puStack_638 + 0xc4) = auVar27._4_4_ / auVar26._4_4_;
        uStack_3a0 = (ulong *)((ulong)ppuVar3[2] & 0xfffffffffffffffc);
        if (*(char *)((long)uStack_3a0 + 0x17) < '\0') {
          uStack_3a0 = (ulong *)*uStack_3a0;
        }
        iVar16 = *(int *)(ppuVar3 + 3);
        uStack_3b0 = (undefined4 *)0x242ff0000;
        uStack_3a8 = (ulong *)CONCAT44(iVar16,*(int *)((long)ppuVar3 + 0x1c));
        puStack_388 = (ulong *)0x0;
        puStack_390 = (ulong *)0x0;
        uStack_378 = 0;
        uStack_380 = 0;
        puStack_370 = puStack_688;
        lVar17 = (long)*(int *)((long)ppuVar3 + 0x1c) * (long)iVar16;
        auStack_360[0] = 0;
        auStack_360[1] = 0;
        puStack_398 = uStack_3a0;
        puStack_368 = auStack_360;
        if ((lVar17 != 0) && (uStack_3a0 == (ulong *)0x0)) {
          puVar15 = (undefined4 *)0x24;
          func_0x000107c2ae8c();
          *puVar15 = 1;
          puStack_2f0 = puVar15 + 1;
          puStack_2e8 = (undefined8 *)0x1c;
          *(undefined1 *)(puVar15 + 8) = 0;
          *(undefined8 *)(puVar15 + 3) = 0x207c7c2030203d3d;
          *(undefined8 *)(puVar15 + 1) = 0x2029286c61746f74;
          *(undefined8 *)(puVar15 + 6) = 0x4c4c554e203d2120;
          *(undefined8 *)(puVar15 + 4) = 0x61746164207c7c20;
          FUN_109ac3188(0xffffff29,&puStack_2f0,&UNK_10f2e8162,&UNK_10f566d1b,0x1bb);
          goto LAB_10951e6b4;
        }
        uStack_3b0 = (undefined4 *)0x242ff4000;
        auStack_360[1] = 1;
        puStack_390 = (ulong *)((long)uStack_3a0 + lVar17);
        uStack_350 = (ulong *)CONCAT44(uStack_350._4_4_,0x42ff0000);
        puVar24[1] = 0;
        *puVar24 = 0;
        puVar24[3] = 0;
        puVar24[2] = 0;
        puVar24[5] = 0;
        puVar24[4] = 0;
        *(undefined8 *)((long)puVar24 + 0x34) = 0;
        *(undefined8 *)((long)puVar24 + 0x2c) = 0;
        puStack_310 = puStack_658;
        puStack_308 = puStack_648;
        *puStack_648 = 0;
        puStack_648[1] = 0;
        puStack_2f0 = (undefined4 *)CONCAT44(puStack_2f0._4_4_,0x2010000);
        puStack_2e8 = &uStack_350;
        uStack_2e0 = 0;
        puStack_388 = puStack_390;
        auStack_360[0] = (long)iVar16;
        FUN_109a479a0(&uStack_3b0,&puStack_2f0);
        if (lStack_4d8 != 0) {
          piVar1 = (int *)(lStack_4d8 + 0x14);
          do {
            iVar16 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar16 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar16 + -1 == 0) {
            func_0x000109a848d4(puStack_638);
          }
        }
        puVar11 = puStack_338;
        puVar13 = puStack_340;
        uVar10 = (ulong)uStack_350;
        if (0 < (int)auStack_50c._0_4_) {
          lVar17 = 0;
          do {
            *(undefined4 *)((long)puStack_4d0 + lVar17 * 4) = 0;
            lVar17 = lVar17 + 1;
          } while (lVar17 < (int)auStack_50c._0_4_);
        }
        iVar16 = uStack_350._4_4_;
        puStack_638[1] = (ulong)uStack_348;
        *puStack_638 = uVar10;
        puStack_638[3] = (ulong)puVar11;
        puStack_638[2] = (ulong)puVar13;
        uVar20 = uStack_318;
        uVar10 = uStack_320;
        puVar13 = puStack_330;
        puStack_638[5] = (ulong)puStack_328;
        puStack_638[4] = (ulong)puVar13;
        puStack_638[7] = uVar20;
        puStack_638[6] = uVar10;
        if (puStack_4c8 != puStack_640) {
          if (puStack_4c8 != (ulong *)0x0) {
            _free(puStack_4c8[-1]);
            iVar16 = uStack_350._4_4_;
          }
          puStack_4d0 = puStack_650;
          puStack_4c8 = puStack_640;
        }
        if (iVar16 < 3) {
          *puStack_4c8 = *puStack_308;
          puStack_4c8[1] = puStack_308[1];
          uStack_350 = (ulong *)CONCAT44(uStack_350._4_4_,0x42ff0000);
          puVar24[1] = 0;
          *puVar24 = 0;
          puVar24[3] = 0;
          puVar24[2] = 0;
          puVar24[5] = 0;
          puVar24[4] = 0;
          *(undefined8 *)((long)puVar24 + 0x34) = 0;
          *(undefined8 *)((long)puVar24 + 0x2c) = 0;
          if (puStack_308 != puStack_648) {
            _free(puStack_308[-1]);
          }
        }
        else {
          puStack_4d0 = puStack_310;
          puStack_4c8 = puStack_308;
          puStack_308 = puStack_648;
          puStack_310 = puStack_658;
          uStack_350 = (ulong *)CONCAT44(uStack_350._4_4_,0x42ff0000);
          puVar24[1] = 0;
          *puVar24 = 0;
          puVar24[3] = 0;
          puVar24[2] = 0;
          puVar24[5] = 0;
          puVar24[4] = 0;
          *(undefined8 *)((long)puVar24 + 0x34) = 0;
          *(undefined8 *)((long)puVar24 + 0x2c) = 0;
        }
        if (uStack_378 != 0) {
          piVar1 = (int *)(uStack_378 + 0x14);
          do {
            iVar16 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar16 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar16 + -1 == 0) {
            func_0x000109a848d4(&uStack_3b0);
          }
        }
        uStack_378 = 0;
        puStack_398 = (ulong *)0x0;
        uStack_3a0 = (ulong *)0x0;
        puStack_388 = (ulong *)0x0;
        puStack_390 = (ulong *)0x0;
        if (0 < uStack_3b0._4_4_) {
          lVar17 = 0;
          do {
            *(undefined4 *)((long)puStack_370 + lVar17 * 4) = 0;
            lVar17 = lVar17 + 1;
          } while (lVar17 < uStack_3b0._4_4_);
        }
        if (puStack_368 != auStack_360 && puStack_368 != (ulong *)0x0) {
          _free(puStack_368[-1]);
        }
        FUN_10951f73c(&uStack_3d0,&uStack_618);
        puVar13 = puStack_630;
        puVar22 = (undefined8 *)puStack_630[1];
        if (puVar22 < (undefined8 *)puStack_630[2]) {
          puVar19 = puVar22 + 2;
          puVar22[1] = puStack_3c8;
          *puVar22 = CONCAT44(uStack_3cc,uStack_3d0);
        }
        else {
          lVar17 = (long)puVar22 - *puStack_630;
          uVar10 = (lVar17 >> 4) + 1;
          if (uVar10 >> 0x3c != 0) {
            FUN_109503878();
            goto LAB_10951e6b4;
          }
          uVar18 = (long)puStack_630[2] - *puStack_630;
          uVar20 = (long)uVar18 >> 3;
          if (uVar20 <= uVar10) {
            uVar20 = uVar10;
          }
          if (0x7fffffffffffffef < uVar18) {
            uVar20 = 0xfffffffffffffff;
          }
          puStack_330 = puStack_630;
          puVar11 = puStack_630;
          func_0x00010950388c();
          uVar10 = *puVar13;
          puVar22 = (undefined8 *)((long)puVar11 + lVar17);
          uVar18 = (long)puVar22 - (puVar13[1] - uVar10);
          puVar19 = puVar22 + 2;
          puVar22[1] = puStack_3c8;
          *puVar22 = CONCAT44(uStack_3cc,uStack_3d0);
          _memcpy(uVar18,uVar10);
          uStack_350 = (ulong *)*puVar13;
          *puVar13 = uVar18;
          puVar13[1] = (ulong)puVar19;
          puStack_338 = (ulong *)puVar13[2];
          puVar13[2] = (ulong)(puVar11 + uVar20 * 2);
          uStack_348 = uStack_350;
          puStack_340 = uStack_350;
          FUN_10951765c(&uStack_350);
        }
        puVar13[1] = (ulong)puVar19;
        puVar13 = &uStack_618;
        FUN_1094e0cf8();
        puVar23 = puVar23 + 1;
        plVar21 = &uStack_3b0;
      } while (puVar23 != puVar12);
    }
    goto LAB_10951e520;
  }
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(0x113829ec8,0x10);
    if (bVar6) {
      cVar5 = ExclusiveMonitorsStatus();
      iRam0000000113829ec8 = iRam0000000113829ec8 + 1;
    }
  } while (cVar5 != '\0');
  uStack_5fb = 0;
  uStack_5f8 = 0;
  uStack_5f4 = 0;
  uStack_5e8 = 0;
  uStack_5f0 = 0;
  uStack_5ec = 0;
  uStack_5e4 = 0xbf800000;
  uStack_5d0 = 0;
  uStack_5d8 = 0;
  uStack_5c0 = 0;
  uStack_5c8 = 0;
  uStack_5b8 = 0x3f800000;
  uStack_5a8 = 0;
  uStack_5b0 = 0;
  uStack_598 = 0;
  uStack_5a0 = 0;
  uStack_590 = 0x3f800000;
  uStack_580 = 0;
  uStack_588 = 0;
  uStack_570 = 0;
  uStack_578 = 0;
  uStack_558 = 0;
  uStack_560 = 0;
  uStack_548 = 0;
  uStack_550 = 0;
  uStack_568 = 0x3f800000;
  uStack_540 = 0x3f800000;
  uStack_520 = 0;
  uStack_528 = 0;
  uStack_530 = 0;
  uStack_538 = 0;
  uStack_518 = 0x3f800000;
  uStack_510 = 0x42ff0000;
  puStack_640 = (ulong *)(auStack_50c + 4);
  iStack_504 = 0;
  uStack_500 = 0;
  auStack_50c = (undefined1  [8])0x0;
  uStack_4f4 = 0;
  uStack_4fc = 0;
  uStack_4f8 = 0;
  uStack_4e4 = 0;
  uStack_4ec = 0;
  lStack_4d8 = 0;
  uStack_4e0 = 0;
  uStack_4dc = 0;
  auStack_4c0[0] = 0;
  auStack_4c0[1] = 0;
  uStack_4b0 = 0x42ff0000;
  puStack_470 = (ulong *)(auStack_4ac + 4);
  uStack_4a4 = 0;
  auStack_4ac = (undefined1  [8])0x0;
  uStack_494 = 0;
  uStack_49c = 0;
  uStack_484 = 0;
  uStack_48c = 0;
  uStack_478 = 0;
  uStack_480 = 0;
  uStack_47c = 0;
  puStack_468 = auStack_460;
  auStack_460[1] = 0;
  auStack_460[0] = 0;
  uStack_43c = 0;
  uStack_440 = 0;
  uStack_434 = 0x3f8000003f800000;
  uStack_42c = 0;
  uStack_404 = 0;
  auStack_400[1] = 0;
  auStack_400[0] = 0;
  auStack_400[3] = 0;
  auStack_400[2] = 0;
  uStack_3e0 = 0x3f800000;
  uStack_3d8 = 0;
  uStack_618 = (ulong *)0x3f80000000000000;
  uStack_5f9 = 0x15;
  uStack_600 = 0x6e6f697461;
  uStack_608 = 0x6d6765735f;
  uStack_603 = 0x746e65;
  uStack_610 = 0x6369746e616d6573;
  auStack_460[2] = 0;
  uVar25 = NEON_fmov(0x3f800000,4);
  uStack_448 = (undefined4)uVar25;
  uStack_444 = (undefined4)((ulong)uVar25 >> 0x20);
  uVar10 = puVar12[2];
  puVar13 = puVar12 + 2;
  if ((uVar10 & 1) != 0) {
    puVar13 = (ulong *)(uVar10 + 7);
  }
  puStack_4d0 = puStack_640;
  puStack_4c8 = auStack_4c0;
  if ((int)puVar12[3] != 0) {
    puVar23 = puVar13 + (int)puVar12[3];
    puVar24 = (undefined8 *)((ulong)&uStack_3b0 | 4);
    do {
      ppuVar2 = &PTR_PTR_1132de100;
      if (*(undefined ***)(*puVar13 + 0x20) != (undefined **)0x0) {
        ppuVar2 = *(undefined ***)(*puVar13 + 0x20);
      }
      puStack_340 = (ulong *)((ulong)ppuVar2[2] & 0xfffffffffffffffc);
      if (*(char *)((long)puStack_340 + 0x17) < '\0') {
        puStack_340 = (ulong *)*puStack_340;
      }
      iVar16 = *(int *)(ppuVar2 + 3);
      uStack_350 = (ulong *)0x242ff0000;
      uStack_348 = (ulong *)CONCAT44(iVar16,*(int *)((long)ppuVar2 + 0x1c));
      puStack_328 = (ulong *)0x0;
      puStack_330 = (ulong *)0x0;
      uStack_318 = 0;
      uStack_320 = 0;
      auStack_300[0] = 0;
      auStack_300[1] = 0;
      lVar17 = (long)*(int *)((long)ppuVar2 + 0x1c) * (long)iVar16;
      puStack_338 = puStack_340;
      puStack_310 = &uStack_348;
      puStack_308 = auStack_300;
      if (lVar17 != 0 && puStack_340 == (ulong *)0x0) {
        puVar15 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar15 = 1;
        uStack_3b0 = puVar15 + 1;
        uStack_3a8 = (ulong *)0x1c;
        *(undefined1 *)(puVar15 + 8) = 0;
        *(undefined8 *)(puVar15 + 3) = 0x207c7c2030203d3d;
        *(undefined8 *)(puVar15 + 1) = 0x2029286c61746f74;
        *(undefined8 *)(puVar15 + 6) = 0x4c4c554e203d2120;
        *(undefined8 *)(puVar15 + 4) = 0x61746164207c7c20;
        FUN_109ac3188(0xffffff29,&uStack_3b0,&UNK_10f2e8162,&UNK_10f566d1b,0x1bb);
        goto LAB_10951e6b4;
      }
      uStack_350 = (ulong *)0x242ff4000;
      auStack_300[1] = 1;
      puStack_330 = (ulong *)((long)puStack_340 + lVar17);
      puStack_328 = puStack_330;
      auStack_300[0] = (long)iVar16;
      if (CONCAT44(uStack_4fc,uStack_500) == 0) {
LAB_10951da3c:
        uStack_3b0 = (undefined4 *)CONCAT44(uStack_3b0._4_4_,0x42ff0000);
        puVar24[1] = 0;
        *puVar24 = 0;
        puVar24[3] = 0;
        puVar24[2] = 0;
        puVar24[5] = 0;
        puVar24[4] = 0;
        *(undefined8 *)((long)puVar24 + 0x34) = 0;
        *(undefined8 *)((long)puVar24 + 0x2c) = 0;
        auStack_360[0] = 0;
        auStack_360[1] = 0;
        puStack_2f0 = (undefined4 *)CONCAT44(puStack_2f0._4_4_,0x2010000);
        puStack_2e8 = &uStack_3b0;
        uStack_2e0 = 0;
        puVar11 = &uStack_350;
        puStack_370 = (ulong *)((ulong)&uStack_3b0 | 8);
        puStack_368 = auStack_360;
        FUN_109a479a0(puVar11,&puStack_2f0);
        if (lStack_4d8 != 0) {
          piVar1 = (int *)(lStack_4d8 + 0x14);
          do {
            iVar16 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar16 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar16 + -1 == 0) {
            puVar11 = puStack_638;
            func_0x000109a848d4(puStack_638);
          }
        }
        puVar7 = puStack_398;
        puVar12 = uStack_3a0;
        puVar15 = uStack_3b0;
        if (0 < (int)auStack_50c._0_4_) {
          lVar17 = 0;
          do {
            *(undefined4 *)((long)puStack_4d0 + lVar17 * 4) = 0;
            lVar17 = lVar17 + 1;
          } while (lVar17 < (int)auStack_50c._0_4_);
        }
        iVar16 = uStack_3b0._4_4_;
        puStack_638[1] = (ulong)uStack_3a8;
        *puStack_638 = (ulong)puVar15;
        puStack_638[3] = (ulong)puVar7;
        puStack_638[2] = (ulong)puVar12;
        uVar20 = uStack_378;
        uVar10 = uStack_380;
        puVar12 = puStack_390;
        puStack_638[5] = (ulong)puStack_388;
        puStack_638[4] = (ulong)puVar12;
        puStack_638[7] = uVar20;
        puStack_638[6] = uVar10;
        if (puStack_4c8 != auStack_4c0) {
          if (puStack_4c8 != (ulong *)0x0) {
            puVar11 = (ulong *)puStack_4c8[-1];
            _free(puVar11);
            iVar16 = uStack_3b0._4_4_;
          }
          puStack_4d0 = puStack_640;
          puStack_4c8 = auStack_4c0;
        }
        puVar12 = puStack_368;
        if (iVar16 < 3) {
          *puStack_4c8 = *puStack_368;
          puStack_4c8[1] = puVar12[1];
          uStack_3b0 = (undefined4 *)CONCAT44(uStack_3b0._4_4_,0x42ff0000);
          puVar24[1] = 0;
          *puVar24 = 0;
          puVar24[3] = 0;
          puVar24[2] = 0;
          puVar24[5] = 0;
          puVar24[4] = 0;
          *(undefined8 *)((long)puVar24 + 0x34) = 0;
          *(undefined8 *)((long)puVar24 + 0x2c) = 0;
          if (puVar12 != auStack_360) {
            puVar11 = (ulong *)puVar12[-1];
            _free(puVar11);
          }
        }
        else {
          puStack_4d0 = puStack_370;
          puStack_4c8 = puStack_368;
        }
      }
      else {
        uVar10 = (ulong)auStack_50c & 0xffffffff;
        if ((int)auStack_50c._0_4_ < 3) {
          lVar17 = (long)iStack_504 * (long)(int)auStack_50c._4_4_;
        }
        else {
          lVar17 = 1;
          puVar11 = puStack_4d0;
          do {
            lVar17 = lVar17 * (int)*puVar11;
            uVar10 = uVar10 - 1;
            puVar11 = (ulong *)((long)puVar11 + 4);
          } while (uVar10 != 0);
        }
        if (lVar17 == 0) goto LAB_10951da3c;
        uStack_3a0 = (ulong *)0x0;
        uStack_3b0 = (undefined4 *)CONCAT44(uStack_3b0._4_4_,0x1010000);
        uStack_3a8 = puStack_638;
        uStack_2e0 = 0;
        puStack_2f0 = (undefined4 *)CONCAT44(puStack_2f0._4_4_,0x1010000);
        uStack_3d0 = 0x2010000;
        uStack_3c0 = 0;
        puStack_3c8 = puStack_638;
        puStack_2e8 = &uStack_350;
        FUN_109a91d90();
        pcStack_2d0 = FUN_109a28f7c;
        puVar11 = &uStack_3b0;
        FUN_109a279fc(puVar11,&puStack_2f0,&uStack_3d0,puVar12,&pcStack_2d0,1,10);
      }
      if (uStack_318 != 0) {
        piVar1 = (int *)(uStack_318 + 0x14);
        do {
          iVar16 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar16 + -1 == 0) {
          puVar11 = &uStack_350;
          func_0x000109a848d4();
        }
      }
      uStack_318 = 0;
      puStack_338 = (ulong *)0x0;
      puStack_340 = (ulong *)0x0;
      puStack_328 = (ulong *)0x0;
      puStack_330 = (ulong *)0x0;
      if (0 < uStack_350._4_4_) {
        lVar17 = 0;
        do {
          *(undefined4 *)((long)puStack_310 + lVar17 * 4) = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < uStack_350._4_4_);
      }
      if (puStack_308 != auStack_300 && puStack_308 != (ulong *)0x0) {
        puVar11 = (ulong *)puStack_308[-1];
        _free();
      }
      puVar13 = puVar13 + 1;
      puVar12 = puVar11;
    } while (puVar13 != puVar23);
  }
  FUN_10951f73c(&uStack_628,&uStack_618);
  plVar9 = plStack_620;
  uVar25 = uStack_628;
  puVar12 = puStack_630;
  uStack_2c8 = uStack_628;
  plStack_2c0 = plStack_620;
  uStack_628 = 0;
  plStack_620 = (long *)0x0;
  puVar22 = (undefined8 *)puStack_630[2];
  puVar24 = (undefined8 *)*puStack_630;
  if (puVar22 == puVar24) {
    if (puVar22 != (undefined8 *)0x0) {
      puVar14 = (undefined8 *)puStack_630[1];
      puVar19 = puVar24;
      if (puVar14 != puVar22) {
        do {
          puVar14 = puVar14 + -2;
          func_0x0001095038c0();
        } while (puVar14 != puVar22);
        puVar19 = (undefined8 *)*puVar12;
      }
      puVar12[1] = (ulong)puVar24;
      __ZdlPv(puVar19);
      *puVar12 = 0;
      puVar12[1] = 0;
      puVar12[2] = 0;
    }
    puVar22 = (undefined8 *)0x10;
    __Znwm();
    *puVar12 = (ulong)puVar22;
    puVar12[1] = (ulong)puVar22;
    puVar24 = puVar22 + 2;
    puVar12[2] = (ulong)puVar24;
    *puVar22 = uStack_2c8;
    puVar22[1] = plVar9;
    if (plVar9 != (long *)0x0) {
      plVar21 = plVar9 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar6) {
          *plVar21 = *plVar21 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
LAB_10951e4a8:
    puVar12[1] = (ulong)puVar24;
  }
  else {
    puVar22 = (undefined8 *)puStack_630[1];
    if (puVar22 == puVar24) {
      *puVar22 = uVar25;
      puVar22[1] = plVar9;
      if (plVar9 != (long *)0x0) {
        plVar21 = plVar9 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar6) {
            *plVar21 = *plVar21 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      puVar24 = (undefined8 *)(((long)puVar22 * 2 + 0x10) - (long)puVar24);
      goto LAB_10951e4a8;
    }
    if (plVar9 != (long *)0x0) {
      plVar21 = plVar9 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar6) {
          *plVar21 = *plVar21 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar21 = (long *)puVar24[1];
    *puVar24 = uVar25;
    puVar24[1] = plVar9;
    if (plVar21 != (long *)0x0) {
      plVar9 = plVar21 + 1;
      do {
        lVar17 = *plVar9;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *plVar9 = lVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
      }
    }
    puVar22 = (undefined8 *)puVar12[1];
    while (puVar22 != puVar24 + 2) {
      puVar22 = puVar22 + -2;
      func_0x0001095038c0();
    }
    puVar12[1] = (ulong)(puVar24 + 2);
    plVar9 = plStack_2c0;
  }
  if (plVar9 != (long *)0x0) {
    plVar21 = plVar9 + 1;
    do {
      lVar17 = *plVar21;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *plVar21 = lVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar21 = plStack_620;
  if (plStack_620 != (long *)0x0) {
    plVar9 = plStack_620 + 1;
    do {
      lVar17 = *plVar9;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = lVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_620 + 0x10))(plStack_620);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
    }
  }
  puVar13 = &uStack_618;
  FUN_1094e0cf8();
LAB_10951e520:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001095038c0(&uStack_2c8);
  FUN_109503e90(&uStack_628);
  FUN_1094e0cf8(&uStack_618);
  uStack_618 = puStack_630;
  FUN_109503918(&uStack_618);
  puVar12 = puVar13;
  __Unwind_Resume();
  pcStack_698 = FUN_10951e820;
  uVar10 = *puVar12;
  puStack_6b0 = puVar13;
  plStack_6a8 = plVar21;
  ppuStack_6a0 = &puStack_240;
  FUN_10951f6b4();
  if (uVar10 != 0) {
    return;
  }
  func_0x000107c31940(auStack_6e0,&UNK_10f2e5846);
  uVar10 = *puVar12;
  FUN_10951f6fc();
  FUN_109259240(auStack_6c8,auStack_6e0,*(ulong *)(uVar10 + 8) & 0x7fffffffffffffff);
  func_0x000105687ee0(auStack_6c8);
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10951e888);
  (*pcVar8)();
}



/* Entry: 10951d1c4; end: 10951e81f;  */

void FUN_10951d1c4(ulong *param_1,long param_2)

{
  int *piVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  ulong *puVar7;
  code *pcVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  int iVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  ulong *puVar21;
  undefined8 *puVar22;
  long *plVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auStack_4b0 [24];
  undefined1 auStack_498 [24];
  ulong *puStack_480;
  long *plStack_478;
  undefined1 *puStack_470;
  code *pcStack_468;
  ulong *puStack_458;
  ulong *puStack_450;
  ulong *puStack_448;
  ulong *puStack_440;
  undefined8 *puStack_438;
  ulong *puStack_430;
  ulong *puStack_428;
  ulong *puStack_420;
  ulong *puStack_418;
  ulong *puStack_410;
  ulong *puStack_408;
  ulong *puStack_400;
  undefined8 uStack_3f8;
  long *plStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined5 uStack_3d8;
  undefined3 uStack_3d3;
  undefined5 uStack_3d0;
  undefined2 uStack_3cb;
  undefined1 uStack_3c9;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined8 uStack_3b4;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined4 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined4 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined4 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined4 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2e0;
  undefined1 auStack_2dc [8];
  int iStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined8 uStack_2c4;
  undefined8 uStack_2bc;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  long lStack_2a8;
  ulong *puStack_2a0;
  ulong *puStack_298;
  ulong auStack_290 [2];
  undefined4 uStack_280;
  undefined1 auStack_27c [8];
  undefined8 uStack_274;
  undefined8 uStack_26c;
  undefined8 uStack_264;
  undefined8 uStack_25c;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 uStack_248;
  ulong *puStack_240;
  ulong *puStack_238;
  ulong auStack_230 [3];
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined8 uStack_20c;
  undefined8 uStack_204;
  undefined1 uStack_1fc;
  undefined1 uStack_1d4;
  ulong auStack_1d0 [4];
  undefined4 uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  ulong *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  ulong *puStack_168;
  ulong *puStack_160;
  ulong *puStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong *puStack_140;
  ulong *puStack_138;
  ulong auStack_130 [2];
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong *puStack_110;
  ulong *puStack_108;
  ulong *puStack_100;
  ulong *puStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong *puStack_e0;
  ulong *puStack_d8;
  ulong auStack_d0 [2];
  undefined4 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar21 = (ulong *)(param_2 + 0xe8);
  uVar9 = *puVar21;
  puStack_400 = param_1;
  if (uVar9 == 0) {
LAB_10951e6a0:
    func_0x000105688514(&UNK_10f572a2c);
LAB_10951e6b4:
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10951e6b8);
    (*pcVar8)();
  }
  plVar20 = &uStack_3e8;
  puStack_408 = (ulong *)&uStack_2e0;
  FUN_10951f6b4();
  if (uVar9 != 0) {
    FUN_10951e820();
    FUN_109511034(param_1,(long)(int)puVar21[3]);
    uVar9 = puVar21[2];
    puVar12 = puVar21 + 2;
    if ((uVar9 & 1) != 0) {
      puVar12 = (ulong *)(uVar9 + 7);
    }
    if ((int)puVar21[3] != 0) {
      puStack_448 = puVar12 + (int)puVar21[3];
      puStack_458 = &uStack_178;
      puStack_430 = auStack_130;
      puStack_438 = (undefined8 *)((ulong)&uStack_120 | 4);
      puStack_450 = (ulong *)((ulong)&uStack_120 | 8);
      puStack_440 = auStack_d0;
      puStack_428 = (ulong *)auStack_2dc;
      puStack_410 = (ulong *)(auStack_2dc + 4);
      puStack_418 = (ulong *)(auStack_27c + 4);
      puStack_420 = auStack_1d0;
      do {
        puVar21 = puStack_400;
        uVar9 = *puVar12;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(0x113829ec8,0x10);
          if (bVar6) {
            cVar5 = ExclusiveMonitorsStatus();
            iRam0000000113829ec8 = iRam0000000113829ec8 + 1;
          }
        } while (cVar5 != '\0');
        uStack_3d8 = 0;
        uStack_3d3 = 0;
        uStack_3e0 = 0;
        uStack_3c8 = 0;
        uStack_3d0 = 0;
        uStack_3cb = 0;
        uStack_3c9 = 0;
        uStack_3bc = 0;
        uStack_3b8 = 0;
        uStack_3c4 = 0;
        uStack_3c0 = 0;
        uStack_3b4 = 0xbf800000;
        uStack_3a0 = 0;
        uStack_3a8 = 0;
        uStack_390 = 0;
        uStack_398 = 0;
        uStack_378 = 0;
        uStack_380 = 0;
        uStack_368 = 0;
        uStack_370 = 0;
        uStack_388 = 0x3f800000;
        uStack_360 = 0x3f800000;
        uStack_350 = 0;
        uStack_358 = 0;
        uStack_340 = 0;
        uStack_348 = 0;
        uStack_328 = 0;
        uStack_330 = 0;
        uStack_318 = 0;
        uStack_320 = 0;
        uStack_338 = 0x3f800000;
        uStack_310 = 0x3f800000;
        uStack_300 = 0;
        uStack_308 = 0;
        uStack_2f0 = 0;
        uStack_2f8 = 0;
        uStack_2e8 = 0x3f800000;
        uStack_2e0 = 0x42ff0000;
        puStack_428[1] = 0;
        *puStack_428 = 0;
        puStack_428[3] = 0;
        puStack_428[2] = 0;
        puStack_428[5] = 0;
        puStack_428[4] = 0;
        *(undefined8 *)((long)puStack_428 + 0x34) = 0;
        *(undefined8 *)((long)puStack_428 + 0x2c) = 0;
        puStack_2a0 = puStack_410;
        auStack_290[0] = 0;
        auStack_290[1] = 0;
        uStack_280 = 0x42ff0000;
        uStack_274 = 0;
        auStack_27c = (undefined1  [8])0x0;
        uStack_264 = 0;
        uStack_26c = 0;
        uStack_254 = 0;
        uStack_25c = 0;
        uStack_248 = 0;
        uStack_250 = 0;
        uStack_24c = 0;
        puStack_240 = puStack_418;
        auStack_230[1] = 0;
        auStack_230[0] = 0;
        uStack_218 = 0;
        auStack_230[2] = 0;
        uStack_20c = 0;
        uStack_214 = 0;
        uStack_210 = 0;
        uStack_204 = 0x3f8000003f800000;
        uStack_1fc = 0;
        uStack_1d4 = 0;
        puStack_420[1] = 0;
        *puStack_420 = 0;
        puStack_420[3] = 0;
        puStack_420[2] = 0;
        uStack_1b0 = 0x3f800000;
        uStack_1a8 = 0;
        uStack_3e8 = (ulong *)CONCAT44(0x3f000000,(int)*(undefined8 *)(uVar9 + 0x40));
        ppuVar2 = &PTR_PTR_1132da578;
        if (*(undefined ***)(uVar9 + 0x28) != (undefined **)0x0) {
          ppuVar2 = *(undefined ***)(uVar9 + 0x28);
        }
        puStack_298 = auStack_290;
        puStack_238 = auStack_230;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (&uStack_3e0,(ulong)ppuVar2[2] & 0xfffffffffffffffc);
        ppuVar2 = &PTR_PTR_1132da578;
        if (*(undefined ***)(uVar9 + 0x28) != (undefined **)0x0) {
          ppuVar2 = *(undefined ***)(uVar9 + 0x28);
        }
        uStack_3e8 = (ulong *)CONCAT44(*(undefined4 *)((long)ppuVar2 + 0x1c),(undefined4)uStack_3e8)
        ;
        ppuVar2 = &PTR_PTR_1132da178;
        if (*(undefined ***)(uVar9 + 0x18) != (undefined **)0x0) {
          ppuVar2 = *(undefined ***)(uVar9 + 0x18);
        }
        uStack_3c0 = SUB84(ppuVar2[3],0);
        uStack_3bc = (undefined4)((ulong)ppuVar2[3] >> 0x20);
        uStack_3c8 = SUB84(ppuVar2[2],0);
        uStack_3c4 = (undefined4)((ulong)ppuVar2[2] >> 0x20);
        if ((*(byte *)(uVar9 + 0x10) >> 4 & 1) != 0) {
          lVar18 = *(long *)(uVar9 + 0x38);
          uStack_170 = (ulong *)(*(ulong *)(lVar18 + 0x10) & 0xfffffffffffffffc);
          if (*(char *)((long)uStack_170 + 0x17) < '\0') {
            uStack_170 = (ulong *)*uStack_170;
          }
          iVar15 = *(int *)(lVar18 + 0x18);
          uStack_180 = (undefined4 *)0x242ff0000;
          uStack_178 = (ulong *)CONCAT44(iVar15,*(int *)(lVar18 + 0x1c));
          puStack_158 = (ulong *)0x0;
          puStack_160 = (ulong *)0x0;
          uStack_148 = 0;
          uStack_150 = 0;
          puStack_140 = puStack_458;
          puStack_138 = puStack_430;
          lVar18 = (long)*(int *)(lVar18 + 0x1c) * (long)iVar15;
          *puStack_430 = 0;
          puStack_430[1] = 0;
          puStack_168 = uStack_170;
          if ((lVar18 != 0) && (uStack_170 == (ulong *)0x0)) {
            puVar14 = (undefined4 *)0x24;
            func_0x000107c2ae8c();
            *puVar14 = 1;
            puStack_c0 = puVar14 + 1;
            puStack_b8 = (undefined8 *)0x1c;
            *(undefined1 *)(puVar14 + 8) = 0;
            *(undefined8 *)(puVar14 + 3) = 0x207c7c2030203d3d;
            *(undefined8 *)(puVar14 + 1) = 0x2029286c61746f74;
            *(undefined8 *)(puVar14 + 6) = 0x4c4c554e203d2120;
            *(undefined8 *)(puVar14 + 4) = 0x61746164207c7c20;
            FUN_109ac3188(0xffffff29,&puStack_c0,&UNK_10f2e8162,&UNK_10f566d1b,0x1bb);
            goto LAB_10951e6b4;
          }
          uStack_180 = (undefined4 *)0x242ff4000;
          auStack_130[1] = 1;
          puStack_160 = (ulong *)((long)uStack_170 + lVar18);
          uStack_120 = (ulong *)CONCAT44(uStack_120._4_4_,0x42ff0000);
          puStack_438[1] = 0;
          *puStack_438 = 0;
          puStack_438[3] = 0;
          puStack_438[2] = 0;
          puStack_438[5] = 0;
          puStack_438[4] = 0;
          *(undefined8 *)((long)puStack_438 + 0x34) = 0;
          *(undefined8 *)((long)puStack_438 + 0x2c) = 0;
          puStack_e0 = puStack_450;
          puStack_d8 = puStack_440;
          *puStack_440 = 0;
          puStack_440[1] = 0;
          puStack_c0 = (undefined4 *)CONCAT44(puStack_c0._4_4_,0x2010000);
          puStack_b8 = &uStack_120;
          uStack_b0 = 0;
          puStack_158 = puStack_160;
          auStack_130[0] = (long)iVar15;
          FUN_109a479a0(&uStack_180,&puStack_c0);
          if (lStack_2a8 != 0) {
            piVar1 = (int *)(lStack_2a8 + 0x14);
            do {
              iVar15 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar15 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar15 + -1 == 0) {
              func_0x000109a848d4(puStack_408);
            }
          }
          puVar11 = puStack_108;
          puVar10 = puStack_110;
          uVar9 = (ulong)uStack_120;
          if (0 < (int)auStack_2dc._0_4_) {
            lVar18 = 0;
            do {
              *(undefined4 *)((long)puStack_2a0 + lVar18 * 4) = 0;
              lVar18 = lVar18 + 1;
            } while (lVar18 < (int)auStack_2dc._0_4_);
          }
          iVar15 = uStack_120._4_4_;
          puStack_408[1] = (ulong)uStack_118;
          *puStack_408 = uVar9;
          puStack_408[3] = (ulong)puVar11;
          puStack_408[2] = (ulong)puVar10;
          uVar19 = uStack_e8;
          uVar9 = uStack_f0;
          puVar10 = puStack_100;
          puStack_408[5] = (ulong)puStack_f8;
          puStack_408[4] = (ulong)puVar10;
          puStack_408[7] = uVar19;
          puStack_408[6] = uVar9;
          if (puStack_298 != auStack_290) {
            if (puStack_298 != (ulong *)0x0) {
              _free(puStack_298[-1]);
              iVar15 = uStack_120._4_4_;
            }
            puStack_2a0 = puStack_410;
            puStack_298 = auStack_290;
          }
          puVar10 = puStack_d8;
          if (iVar15 < 3) {
            *puStack_298 = *puStack_d8;
            puStack_298[1] = puVar10[1];
            uStack_120 = (ulong *)CONCAT44(uStack_120._4_4_,0x42ff0000);
            puStack_438[1] = 0;
            *puStack_438 = 0;
            puStack_438[3] = 0;
            puStack_438[2] = 0;
            puStack_438[5] = 0;
            puStack_438[4] = 0;
            *(undefined8 *)((long)puStack_438 + 0x34) = 0;
            *(undefined8 *)((long)puStack_438 + 0x2c) = 0;
            if (puVar10 != puStack_440) {
              _free(puVar10[-1]);
            }
          }
          else {
            puStack_2a0 = puStack_e0;
            puStack_298 = puStack_d8;
            puStack_d8 = puStack_440;
            puStack_e0 = puStack_450;
            uStack_120 = (ulong *)CONCAT44(uStack_120._4_4_,0x42ff0000);
            puStack_438[1] = 0;
            *puStack_438 = 0;
            puStack_438[3] = 0;
            puStack_438[2] = 0;
            puStack_438[5] = 0;
            puStack_438[4] = 0;
            *(undefined8 *)((long)puStack_438 + 0x34) = 0;
            *(undefined8 *)((long)puStack_438 + 0x2c) = 0;
          }
          if (uStack_148 != 0) {
            piVar1 = (int *)(uStack_148 + 0x14);
            do {
              iVar15 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar15 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar15 + -1 == 0) {
              func_0x000109a848d4(&uStack_180);
            }
          }
          uStack_148 = 0;
          puStack_168 = (ulong *)0x0;
          uStack_170 = (ulong *)0x0;
          puStack_158 = (ulong *)0x0;
          puStack_160 = (ulong *)0x0;
          if (0 < uStack_180._4_4_) {
            lVar18 = 0;
            do {
              *(undefined4 *)((long)puStack_140 + lVar18 * 4) = 0;
              lVar18 = lVar18 + 1;
            } while (lVar18 < uStack_180._4_4_);
          }
          if (puStack_138 != puStack_430 && puStack_138 != (ulong *)0x0) {
            _free(puStack_138[-1]);
          }
          puStack_408[0x19] = CONCAT44(uStack_3bc,uStack_3c0);
          puStack_408[0x18] = CONCAT44(uStack_3c4,uStack_3c8);
        }
        FUN_10951f73c(&uStack_1a0,&uStack_3e8);
        puVar24 = (undefined8 *)puVar21[1];
        if (puVar24 < (undefined8 *)puVar21[2]) {
          puVar22 = puVar24 + 2;
          puVar24[1] = puStack_198;
          *puVar24 = CONCAT44(uStack_19c,uStack_1a0);
        }
        else {
          lVar18 = (long)puVar24 - *puVar21;
          uVar9 = (lVar18 >> 4) + 1;
          if (uVar9 >> 0x3c != 0) {
            FUN_109503878();
            goto LAB_10951e6b4;
          }
          uVar16 = (long)puVar21[2] - *puVar21;
          uVar19 = (long)uVar16 >> 3;
          if (uVar19 <= uVar9) {
            uVar19 = uVar9;
          }
          if (0x7fffffffffffffef < uVar16) {
            uVar19 = 0xfffffffffffffff;
          }
          puStack_100 = puVar21;
          puVar10 = puVar21;
          func_0x00010950388c();
          uVar9 = *puVar21;
          puVar24 = (undefined8 *)((long)puVar10 + lVar18);
          uVar16 = (long)puVar24 - (puVar21[1] - uVar9);
          puVar22 = puVar24 + 2;
          puVar24[1] = puStack_198;
          *puVar24 = CONCAT44(uStack_19c,uStack_1a0);
          _memcpy(uVar16,uVar9);
          puVar21 = puStack_400;
          uStack_120 = (ulong *)*puStack_400;
          *puStack_400 = uVar16;
          puStack_400[1] = (ulong)puVar22;
          puStack_108 = (ulong *)puStack_400[2];
          puStack_400[2] = (ulong)(puVar10 + uVar19 * 2);
          uStack_118 = uStack_120;
          puStack_110 = uStack_120;
          FUN_10951765c(&uStack_120);
        }
        puVar21[1] = (ulong)puVar22;
        param_1 = &uStack_3e8;
        FUN_1094e0cf8();
        puVar12 = puVar12 + 1;
        plVar20 = (long *)0x42ff0000;
      } while (puVar12 != puStack_448);
    }
    goto LAB_10951e520;
  }
  uVar9 = *puVar21;
  if (uVar9 == 0) goto LAB_10951e6a0;
  FUN_10951f7a4();
  if (uVar9 == 0) {
    uVar9 = *puVar21;
    if ((uVar9 == 0) || (FUN_10951f7ec(), uVar9 == 0)) goto LAB_10951e6a0;
    func_0x000105683010();
    uVar4 = *(uint *)((long)puVar21 + 0xc);
    if (uVar4 == *(uint *)((long)puVar21 + 4)) {
      uStack_170 = (ulong *)((ulong)uStack_170._4_4_ << 0x20);
      uStack_180 = (undefined4 *)0x0;
    }
    else {
      uStack_170 = (ulong *)CONCAT44(uStack_170._4_4_,uVar4);
      uStack_180 = *(undefined4 **)(puVar21[2] + (ulong)uVar4 * 8);
      if (((ulong)uStack_180 & 1) != 0) {
        uStack_180 = *(undefined4 **)(**(long **)((long)uStack_180 + -1) + 0x20);
      }
    }
    plVar20 = &uStack_3e8;
    puStack_408 = auStack_230;
    puStack_410 = auStack_1d0;
    param_1 = puVar21;
    uStack_178 = puVar21;
    while (puVar14 = uStack_180, uStack_180 != (undefined4 *)0x0) {
      do {
        iVar15 = iRam0000000113829ec8;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(0x113829ec8,0x10);
        if (bVar6) {
          cVar5 = ExclusiveMonitorsStatus();
          iRam0000000113829ec8 = iRam0000000113829ec8 + 1;
        }
      } while (cVar5 != '\0');
      uStack_3e8 = (ulong *)CONCAT44(0x3f000000,iVar15);
      uStack_3d8 = 0;
      uStack_3d3 = 0;
      uStack_3e0 = 0;
      uStack_3c8 = 0;
      uStack_3d0 = 0;
      uStack_3cb = 0;
      uStack_3c9 = 0;
      uStack_3bc = 0;
      uStack_3b8 = 0;
      uStack_3c4 = 0;
      uStack_3c0 = 0;
      uStack_3b4 = 0xbf800000;
      uStack_3a0 = 0;
      uStack_3a8 = 0;
      uStack_390 = 0;
      uStack_398 = 0;
      uStack_378 = 0;
      uStack_380 = 0;
      uStack_368 = 0;
      uStack_370 = 0;
      uStack_388 = 0x3f800000;
      uStack_360 = 0x3f800000;
      uStack_350 = 0;
      uStack_358 = 0;
      uStack_340 = 0;
      uStack_348 = 0;
      uStack_328 = 0;
      uStack_330 = 0;
      uStack_318 = 0;
      uStack_320 = 0;
      uStack_338 = 0x3f800000;
      uStack_310 = 0x3f800000;
      uStack_300 = 0;
      uStack_308 = 0;
      uStack_2f0 = 0;
      uStack_2f8 = 0;
      uStack_2e8 = 0x3f800000;
      uStack_2e0 = 0x42ff0000;
      iStack_2d4 = 0;
      uStack_2d0 = 0;
      auStack_2dc = (undefined1  [8])0x0;
      uStack_2c4 = 0;
      uStack_2cc = 0;
      uStack_2c8 = 0;
      uStack_2b4 = 0;
      uStack_2bc = 0;
      lStack_2a8 = 0;
      uStack_2b0 = 0;
      uStack_2ac = 0;
      auStack_290[0] = 0;
      auStack_290[1] = 0;
      uStack_280 = 0x42ff0000;
      uStack_274 = 0;
      auStack_27c = (undefined1  [8])0x0;
      uStack_264 = 0;
      uStack_26c = 0;
      uStack_254 = 0;
      uStack_25c = 0;
      uStack_248 = 0;
      uStack_250 = 0;
      uStack_24c = 0;
      puStack_238 = puStack_408;
      *(undefined8 *)((long)puStack_408 + 0x24) = 0;
      *(undefined8 *)((long)puStack_408 + 0x1c) = 0;
      puStack_408[1] = 0;
      *puStack_408 = 0;
      puStack_408[3] = 0;
      puStack_408[2] = 0;
      uStack_204 = 0x3f8000003f800000;
      uStack_1fc = 0;
      uStack_1d4 = 0;
      puStack_410[1] = 0;
      *puStack_410 = 0;
      puStack_410[3] = 0;
      puStack_410[2] = 0;
      uStack_1b0 = 0x3f800000;
      uStack_1a8 = 0;
      puStack_2a0 = (ulong *)(auStack_2dc + 4);
      puStack_298 = auStack_290;
      puStack_240 = (ulong *)(auStack_27c + 4);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (&uStack_3e0,*(ulong *)(puVar14 + 8) & 0xfffffffffffffffc);
      uStack_3e8 = (ulong *)CONCAT44(puVar14[0xb],puVar14[2]);
      FUN_10951f73c(&puStack_c0,&uStack_3e8);
      puVar21 = puStack_400;
      puVar24 = (undefined8 *)puStack_400[1];
      if (puVar24 < (undefined8 *)puStack_400[2]) {
        puVar22 = puVar24 + 2;
        puVar24[1] = puStack_b8;
        *puVar24 = puStack_c0;
      }
      else {
        lVar18 = (long)puVar24 - *puStack_400;
        uVar9 = (lVar18 >> 4) + 1;
        if (uVar9 >> 0x3c != 0) {
          FUN_109503878();
          goto LAB_10951e6b4;
        }
        uVar16 = (long)puStack_400[2] - *puStack_400;
        uVar19 = (long)uVar16 >> 3;
        if (uVar19 <= uVar9) {
          uVar19 = uVar9;
        }
        if (0x7fffffffffffffef < uVar16) {
          uVar19 = 0xfffffffffffffff;
        }
        puStack_100 = puStack_400;
        puVar12 = puStack_400;
        func_0x00010950388c();
        uVar9 = *puVar21;
        puVar24 = (undefined8 *)((long)puVar12 + lVar18);
        puStack_418 = puVar12 + uVar19 * 2;
        uVar19 = (long)puVar24 - (puVar21[1] - uVar9);
        puVar22 = puVar24 + 2;
        puVar24[1] = puStack_b8;
        *puVar24 = puStack_c0;
        _memcpy(uVar19,uVar9);
        uStack_120 = (ulong *)*puVar21;
        *puVar21 = uVar19;
        puVar21[1] = (ulong)puVar22;
        puStack_108 = (ulong *)puVar21[2];
        puVar21[2] = (ulong)puStack_418;
        uStack_118 = uStack_120;
        puStack_110 = uStack_120;
        FUN_10951765c(&uStack_120);
      }
      puVar21[1] = (ulong)puVar22;
      FUN_1094e0cf8(&uStack_3e8);
      param_1 = &uStack_180;
      func_0x000107c27d54();
    }
    goto LAB_10951e520;
  }
  FUN_10951e8bc();
  if (*(char *)(*(long *)(param_2 + 0xd8) + 0x20) != '\x01') {
    FUN_109511034(param_1,(long)(int)puVar21[3]);
    uVar9 = puVar21[2];
    puVar12 = puVar21 + 2;
    if ((uVar9 & 1) != 0) {
      puVar12 = (ulong *)(uVar9 + 7);
    }
    if ((int)puVar21[3] != 0) {
      puVar21 = puVar12 + (int)puVar21[3];
      puStack_458 = &uStack_178;
      puVar24 = (undefined8 *)((ulong)&uStack_120 | 4);
      puStack_428 = (ulong *)((ulong)&uStack_120 | 8);
      puStack_418 = auStack_d0;
      puStack_430 = (ulong *)auStack_2dc;
      puStack_420 = (ulong *)(auStack_2dc + 4);
      puStack_410 = auStack_290;
      puStack_438 = (undefined8 *)auStack_27c;
      puStack_440 = (ulong *)(auStack_27c + 4);
      puStack_448 = auStack_230;
      puStack_450 = auStack_1d0;
      do {
        uVar9 = *puVar12;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(0x113829ec8,0x10);
          if (bVar6) {
            cVar5 = ExclusiveMonitorsStatus();
            iRam0000000113829ec8 = iRam0000000113829ec8 + 1;
          }
        } while (cVar5 != '\0');
        uStack_3d8 = 0;
        uStack_3d3 = 0;
        uStack_3e0 = 0;
        uStack_3c8 = 0;
        uStack_3d0 = 0;
        uStack_3cb = 0;
        uStack_3c9 = 0;
        uStack_3bc = 0;
        uStack_3b8 = 0;
        uStack_3c4 = 0;
        uStack_3c0 = 0;
        uStack_3b4 = 0xbf800000;
        uStack_3a0 = 0;
        uStack_3a8 = 0;
        uStack_390 = 0;
        uStack_398 = 0;
        uStack_378 = 0;
        uStack_380 = 0;
        uStack_368 = 0;
        uStack_370 = 0;
        uStack_388 = 0x3f800000;
        uStack_360 = 0x3f800000;
        uStack_350 = 0;
        uStack_358 = 0;
        uStack_340 = 0;
        uStack_348 = 0;
        uStack_328 = 0;
        uStack_330 = 0;
        uStack_318 = 0;
        uStack_320 = 0;
        uStack_338 = 0x3f800000;
        uStack_310 = 0x3f800000;
        uStack_300 = 0;
        uStack_308 = 0;
        uStack_2f0 = 0;
        uStack_2f8 = 0;
        uStack_2e8 = 0x3f800000;
        uStack_2e0 = 0x42ff0000;
        puStack_430[1] = 0;
        *puStack_430 = 0;
        puStack_430[3] = 0;
        puStack_430[2] = 0;
        puStack_430[5] = 0;
        puStack_430[4] = 0;
        *(undefined8 *)((long)puStack_430 + 0x34) = 0;
        *(undefined8 *)((long)puStack_430 + 0x2c) = 0;
        puStack_2a0 = puStack_420;
        puStack_298 = puStack_410;
        *puStack_410 = 0;
        puStack_410[1] = 0;
        uStack_280 = 0x42ff0000;
        puStack_438[1] = 0;
        *puStack_438 = 0;
        puStack_438[3] = 0;
        puStack_438[2] = 0;
        puStack_438[5] = 0;
        puStack_438[4] = 0;
        *(undefined8 *)((long)puStack_438 + 0x34) = 0;
        *(undefined8 *)((long)puStack_438 + 0x2c) = 0;
        puStack_240 = puStack_440;
        puStack_238 = puStack_448;
        puStack_448[1] = 0;
        *puStack_448 = 0;
        puStack_448[3] = 0;
        puStack_448[2] = 0;
        *(undefined8 *)((long)puStack_448 + 0x24) = 0;
        *(undefined8 *)((long)puStack_448 + 0x1c) = 0;
        uStack_204 = 0x3f8000003f800000;
        uStack_1fc = 0;
        uStack_1d4 = 0;
        puStack_450[1] = 0;
        *puStack_450 = 0;
        puStack_450[3] = 0;
        puStack_450[2] = 0;
        uStack_1b0 = 0x3f800000;
        uStack_1a8 = 0;
        uStack_3e8 = (ulong *)CONCAT44(0x3f000000,iRam0000000113732f50);
        ppuVar2 = &PTR_PTR_1132da578;
        if (*(undefined ***)(uVar9 + 0x18) != (undefined **)0x0) {
          ppuVar2 = *(undefined ***)(uVar9 + 0x18);
        }
        iRam0000000113732f50 = iRam0000000113732f50 + 1;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (&uStack_3e0,(ulong)ppuVar2[2] & 0xfffffffffffffffc);
        ppuVar2 = &PTR_PTR_1132da578;
        if (*(undefined ***)(uVar9 + 0x18) != (undefined **)0x0) {
          ppuVar2 = *(undefined ***)(uVar9 + 0x18);
        }
        uStack_3e8 = (ulong *)CONCAT44(*(undefined4 *)((long)ppuVar2 + 0x1c),(undefined4)uStack_3e8)
        ;
        ppuVar2 = &PTR_PTR_1132da1a0;
        if (*(undefined ***)(uVar9 + 0x28) != (undefined **)0x0) {
          ppuVar2 = *(undefined ***)(uVar9 + 0x28);
        }
        ppuVar3 = &PTR_PTR_1132de100;
        if (*(undefined ***)(uVar9 + 0x20) != (undefined **)0x0) {
          ppuVar3 = *(undefined ***)(uVar9 + 0x20);
        }
        auVar26._0_8_ = ppuVar3[3];
        auVar26._8_8_ = auVar26._0_8_;
        auVar26 = NEON_scvtf(auVar26,4);
        auVar27 = NEON_scvtf(*(undefined1 (*) [16])(ppuVar2 + 2),4);
        *(float *)(puStack_408 + 0x19) = auVar27._8_4_ / auVar26._8_4_;
        *(float *)((long)puStack_408 + 0xcc) = auVar27._12_4_ / auVar26._12_4_;
        *(float *)(puStack_408 + 0x18) = auVar27._0_4_ / auVar26._0_4_;
        *(float *)((long)puStack_408 + 0xc4) = auVar27._4_4_ / auVar26._4_4_;
        uStack_170 = (ulong *)((ulong)ppuVar3[2] & 0xfffffffffffffffc);
        if (*(char *)((long)uStack_170 + 0x17) < '\0') {
          uStack_170 = (ulong *)*uStack_170;
        }
        iVar15 = *(int *)(ppuVar3 + 3);
        uStack_180 = (undefined4 *)0x242ff0000;
        uStack_178 = (ulong *)CONCAT44(iVar15,*(int *)((long)ppuVar3 + 0x1c));
        puStack_158 = (ulong *)0x0;
        puStack_160 = (ulong *)0x0;
        uStack_148 = 0;
        uStack_150 = 0;
        puStack_140 = puStack_458;
        lVar18 = (long)*(int *)((long)ppuVar3 + 0x1c) * (long)iVar15;
        auStack_130[0] = 0;
        auStack_130[1] = 0;
        puStack_168 = uStack_170;
        puStack_138 = auStack_130;
        if ((lVar18 != 0) && (uStack_170 == (ulong *)0x0)) {
          puVar14 = (undefined4 *)0x24;
          func_0x000107c2ae8c();
          *puVar14 = 1;
          puStack_c0 = puVar14 + 1;
          puStack_b8 = (undefined8 *)0x1c;
          *(undefined1 *)(puVar14 + 8) = 0;
          *(undefined8 *)(puVar14 + 3) = 0x207c7c2030203d3d;
          *(undefined8 *)(puVar14 + 1) = 0x2029286c61746f74;
          *(undefined8 *)(puVar14 + 6) = 0x4c4c554e203d2120;
          *(undefined8 *)(puVar14 + 4) = 0x61746164207c7c20;
          FUN_109ac3188(0xffffff29,&puStack_c0,&UNK_10f2e8162,&UNK_10f566d1b,0x1bb);
          goto LAB_10951e6b4;
        }
        uStack_180 = (undefined4 *)0x242ff4000;
        auStack_130[1] = 1;
        puStack_160 = (ulong *)((long)uStack_170 + lVar18);
        uStack_120 = (ulong *)CONCAT44(uStack_120._4_4_,0x42ff0000);
        puVar24[1] = 0;
        *puVar24 = 0;
        puVar24[3] = 0;
        puVar24[2] = 0;
        puVar24[5] = 0;
        puVar24[4] = 0;
        *(undefined8 *)((long)puVar24 + 0x34) = 0;
        *(undefined8 *)((long)puVar24 + 0x2c) = 0;
        puStack_e0 = puStack_428;
        puStack_d8 = puStack_418;
        *puStack_418 = 0;
        puStack_418[1] = 0;
        puStack_c0 = (undefined4 *)CONCAT44(puStack_c0._4_4_,0x2010000);
        puStack_b8 = &uStack_120;
        uStack_b0 = 0;
        puStack_158 = puStack_160;
        auStack_130[0] = (long)iVar15;
        FUN_109a479a0(&uStack_180,&puStack_c0);
        if (lStack_2a8 != 0) {
          piVar1 = (int *)(lStack_2a8 + 0x14);
          do {
            iVar15 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar15 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar15 + -1 == 0) {
            func_0x000109a848d4(puStack_408);
          }
        }
        puVar11 = puStack_108;
        puVar10 = puStack_110;
        uVar9 = (ulong)uStack_120;
        if (0 < (int)auStack_2dc._0_4_) {
          lVar18 = 0;
          do {
            *(undefined4 *)((long)puStack_2a0 + lVar18 * 4) = 0;
            lVar18 = lVar18 + 1;
          } while (lVar18 < (int)auStack_2dc._0_4_);
        }
        iVar15 = uStack_120._4_4_;
        puStack_408[1] = (ulong)uStack_118;
        *puStack_408 = uVar9;
        puStack_408[3] = (ulong)puVar11;
        puStack_408[2] = (ulong)puVar10;
        uVar19 = uStack_e8;
        uVar9 = uStack_f0;
        puVar10 = puStack_100;
        puStack_408[5] = (ulong)puStack_f8;
        puStack_408[4] = (ulong)puVar10;
        puStack_408[7] = uVar19;
        puStack_408[6] = uVar9;
        if (puStack_298 != puStack_410) {
          if (puStack_298 != (ulong *)0x0) {
            _free(puStack_298[-1]);
            iVar15 = uStack_120._4_4_;
          }
          puStack_2a0 = puStack_420;
          puStack_298 = puStack_410;
        }
        if (iVar15 < 3) {
          *puStack_298 = *puStack_d8;
          puStack_298[1] = puStack_d8[1];
          uStack_120 = (ulong *)CONCAT44(uStack_120._4_4_,0x42ff0000);
          puVar24[1] = 0;
          *puVar24 = 0;
          puVar24[3] = 0;
          puVar24[2] = 0;
          puVar24[5] = 0;
          puVar24[4] = 0;
          *(undefined8 *)((long)puVar24 + 0x34) = 0;
          *(undefined8 *)((long)puVar24 + 0x2c) = 0;
          if (puStack_d8 != puStack_418) {
            _free(puStack_d8[-1]);
          }
        }
        else {
          puStack_2a0 = puStack_e0;
          puStack_298 = puStack_d8;
          puStack_d8 = puStack_418;
          puStack_e0 = puStack_428;
          uStack_120 = (ulong *)CONCAT44(uStack_120._4_4_,0x42ff0000);
          puVar24[1] = 0;
          *puVar24 = 0;
          puVar24[3] = 0;
          puVar24[2] = 0;
          puVar24[5] = 0;
          puVar24[4] = 0;
          *(undefined8 *)((long)puVar24 + 0x34) = 0;
          *(undefined8 *)((long)puVar24 + 0x2c) = 0;
        }
        if (uStack_148 != 0) {
          piVar1 = (int *)(uStack_148 + 0x14);
          do {
            iVar15 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar15 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar15 + -1 == 0) {
            func_0x000109a848d4(&uStack_180);
          }
        }
        uStack_148 = 0;
        puStack_168 = (ulong *)0x0;
        uStack_170 = (ulong *)0x0;
        puStack_158 = (ulong *)0x0;
        puStack_160 = (ulong *)0x0;
        if (0 < uStack_180._4_4_) {
          lVar18 = 0;
          do {
            *(undefined4 *)((long)puStack_140 + lVar18 * 4) = 0;
            lVar18 = lVar18 + 1;
          } while (lVar18 < uStack_180._4_4_);
        }
        if (puStack_138 != auStack_130 && puStack_138 != (ulong *)0x0) {
          _free(puStack_138[-1]);
        }
        FUN_10951f73c(&uStack_1a0,&uStack_3e8);
        puVar10 = puStack_400;
        puVar22 = (undefined8 *)puStack_400[1];
        if (puVar22 < (undefined8 *)puStack_400[2]) {
          puVar17 = puVar22 + 2;
          puVar22[1] = puStack_198;
          *puVar22 = CONCAT44(uStack_19c,uStack_1a0);
        }
        else {
          lVar18 = (long)puVar22 - *puStack_400;
          uVar9 = (lVar18 >> 4) + 1;
          if (uVar9 >> 0x3c != 0) {
            FUN_109503878();
            goto LAB_10951e6b4;
          }
          uVar16 = (long)puStack_400[2] - *puStack_400;
          uVar19 = (long)uVar16 >> 3;
          if (uVar19 <= uVar9) {
            uVar19 = uVar9;
          }
          if (0x7fffffffffffffef < uVar16) {
            uVar19 = 0xfffffffffffffff;
          }
          puStack_100 = puStack_400;
          puVar11 = puStack_400;
          func_0x00010950388c();
          uVar9 = *puVar10;
          puVar22 = (undefined8 *)((long)puVar11 + lVar18);
          uVar16 = (long)puVar22 - (puVar10[1] - uVar9);
          puVar17 = puVar22 + 2;
          puVar22[1] = puStack_198;
          *puVar22 = CONCAT44(uStack_19c,uStack_1a0);
          _memcpy(uVar16,uVar9);
          uStack_120 = (ulong *)*puVar10;
          *puVar10 = uVar16;
          puVar10[1] = (ulong)puVar17;
          puStack_108 = (ulong *)puVar10[2];
          puVar10[2] = (ulong)(puVar11 + uVar19 * 2);
          uStack_118 = uStack_120;
          puStack_110 = uStack_120;
          FUN_10951765c(&uStack_120);
        }
        puVar10[1] = (ulong)puVar17;
        param_1 = &uStack_3e8;
        FUN_1094e0cf8();
        puVar12 = puVar12 + 1;
        plVar20 = &uStack_180;
      } while (puVar12 != puVar21);
    }
    goto LAB_10951e520;
  }
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(0x113829ec8,0x10);
    if (bVar6) {
      cVar5 = ExclusiveMonitorsStatus();
      iRam0000000113829ec8 = iRam0000000113829ec8 + 1;
    }
  } while (cVar5 != '\0');
  uStack_3cb = 0;
  uStack_3c8 = 0;
  uStack_3c4 = 0;
  uStack_3b8 = 0;
  uStack_3c0 = 0;
  uStack_3bc = 0;
  uStack_3b4 = 0xbf800000;
  uStack_3a0 = 0;
  uStack_3a8 = 0;
  uStack_390 = 0;
  uStack_398 = 0;
  uStack_388 = 0x3f800000;
  uStack_378 = 0;
  uStack_380 = 0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_360 = 0x3f800000;
  uStack_350 = 0;
  uStack_358 = 0;
  uStack_340 = 0;
  uStack_348 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_338 = 0x3f800000;
  uStack_310 = 0x3f800000;
  uStack_2f0 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_308 = 0;
  uStack_2e8 = 0x3f800000;
  uStack_2e0 = 0x42ff0000;
  puStack_410 = (ulong *)(auStack_2dc + 4);
  iStack_2d4 = 0;
  uStack_2d0 = 0;
  auStack_2dc = (undefined1  [8])0x0;
  uStack_2c4 = 0;
  uStack_2cc = 0;
  uStack_2c8 = 0;
  uStack_2b4 = 0;
  uStack_2bc = 0;
  lStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_2ac = 0;
  auStack_290[0] = 0;
  auStack_290[1] = 0;
  uStack_280 = 0x42ff0000;
  puStack_240 = (ulong *)(auStack_27c + 4);
  uStack_274 = 0;
  auStack_27c = (undefined1  [8])0x0;
  uStack_264 = 0;
  uStack_26c = 0;
  uStack_254 = 0;
  uStack_25c = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_24c = 0;
  puStack_238 = auStack_230;
  auStack_230[1] = 0;
  auStack_230[0] = 0;
  uStack_20c = 0;
  uStack_210 = 0;
  uStack_204 = 0x3f8000003f800000;
  uStack_1fc = 0;
  uStack_1d4 = 0;
  auStack_1d0[1] = 0;
  auStack_1d0[0] = 0;
  auStack_1d0[3] = 0;
  auStack_1d0[2] = 0;
  uStack_1b0 = 0x3f800000;
  uStack_1a8 = 0;
  uStack_3e8 = (ulong *)0x3f80000000000000;
  uStack_3c9 = 0x15;
  uStack_3d0 = 0x6e6f697461;
  uStack_3d8 = 0x6d6765735f;
  uStack_3d3 = 0x746e65;
  uStack_3e0 = 0x6369746e616d6573;
  auStack_230[2] = 0;
  uVar25 = NEON_fmov(0x3f800000,4);
  uStack_218 = (undefined4)uVar25;
  uStack_214 = (undefined4)((ulong)uVar25 >> 0x20);
  uVar9 = puVar21[2];
  puVar12 = puVar21 + 2;
  if ((uVar9 & 1) != 0) {
    puVar12 = (ulong *)(uVar9 + 7);
  }
  puStack_2a0 = puStack_410;
  puStack_298 = auStack_290;
  if ((int)puVar21[3] != 0) {
    puVar10 = puVar12 + (int)puVar21[3];
    puVar24 = (undefined8 *)((ulong)&uStack_180 | 4);
    do {
      ppuVar2 = &PTR_PTR_1132de100;
      if (*(undefined ***)(*puVar12 + 0x20) != (undefined **)0x0) {
        ppuVar2 = *(undefined ***)(*puVar12 + 0x20);
      }
      puStack_110 = (ulong *)((ulong)ppuVar2[2] & 0xfffffffffffffffc);
      if (*(char *)((long)puStack_110 + 0x17) < '\0') {
        puStack_110 = (ulong *)*puStack_110;
      }
      iVar15 = *(int *)(ppuVar2 + 3);
      uStack_120 = (ulong *)0x242ff0000;
      uStack_118 = (ulong *)CONCAT44(iVar15,*(int *)((long)ppuVar2 + 0x1c));
      puStack_f8 = (ulong *)0x0;
      puStack_100 = (ulong *)0x0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      auStack_d0[0] = 0;
      auStack_d0[1] = 0;
      lVar18 = (long)*(int *)((long)ppuVar2 + 0x1c) * (long)iVar15;
      puStack_108 = puStack_110;
      puStack_e0 = &uStack_118;
      puStack_d8 = auStack_d0;
      if (lVar18 != 0 && puStack_110 == (ulong *)0x0) {
        puVar14 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar14 = 1;
        uStack_180 = puVar14 + 1;
        uStack_178 = (ulong *)0x1c;
        *(undefined1 *)(puVar14 + 8) = 0;
        *(undefined8 *)(puVar14 + 3) = 0x207c7c2030203d3d;
        *(undefined8 *)(puVar14 + 1) = 0x2029286c61746f74;
        *(undefined8 *)(puVar14 + 6) = 0x4c4c554e203d2120;
        *(undefined8 *)(puVar14 + 4) = 0x61746164207c7c20;
        FUN_109ac3188(0xffffff29,&uStack_180,&UNK_10f2e8162,&UNK_10f566d1b,0x1bb);
        goto LAB_10951e6b4;
      }
      uStack_120 = (ulong *)0x242ff4000;
      auStack_d0[1] = 1;
      puStack_100 = (ulong *)((long)puStack_110 + lVar18);
      puStack_f8 = puStack_100;
      auStack_d0[0] = (long)iVar15;
      if (CONCAT44(uStack_2cc,uStack_2d0) == 0) {
LAB_10951da3c:
        uStack_180 = (undefined4 *)CONCAT44(uStack_180._4_4_,0x42ff0000);
        puVar24[1] = 0;
        *puVar24 = 0;
        puVar24[3] = 0;
        puVar24[2] = 0;
        puVar24[5] = 0;
        puVar24[4] = 0;
        *(undefined8 *)((long)puVar24 + 0x34) = 0;
        *(undefined8 *)((long)puVar24 + 0x2c) = 0;
        auStack_130[0] = 0;
        auStack_130[1] = 0;
        puStack_c0 = (undefined4 *)CONCAT44(puStack_c0._4_4_,0x2010000);
        puStack_b8 = &uStack_180;
        uStack_b0 = 0;
        puVar11 = &uStack_120;
        puStack_140 = (ulong *)((ulong)&uStack_180 | 8);
        puStack_138 = auStack_130;
        FUN_109a479a0(puVar11,&puStack_c0);
        if (lStack_2a8 != 0) {
          piVar1 = (int *)(lStack_2a8 + 0x14);
          do {
            iVar15 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar15 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar15 + -1 == 0) {
            puVar11 = puStack_408;
            func_0x000109a848d4(puStack_408);
          }
        }
        puVar7 = puStack_168;
        puVar21 = uStack_170;
        puVar14 = uStack_180;
        if (0 < (int)auStack_2dc._0_4_) {
          lVar18 = 0;
          do {
            *(undefined4 *)((long)puStack_2a0 + lVar18 * 4) = 0;
            lVar18 = lVar18 + 1;
          } while (lVar18 < (int)auStack_2dc._0_4_);
        }
        iVar15 = uStack_180._4_4_;
        puStack_408[1] = (ulong)uStack_178;
        *puStack_408 = (ulong)puVar14;
        puStack_408[3] = (ulong)puVar7;
        puStack_408[2] = (ulong)puVar21;
        uVar19 = uStack_148;
        uVar9 = uStack_150;
        puVar21 = puStack_160;
        puStack_408[5] = (ulong)puStack_158;
        puStack_408[4] = (ulong)puVar21;
        puStack_408[7] = uVar19;
        puStack_408[6] = uVar9;
        if (puStack_298 != auStack_290) {
          if (puStack_298 != (ulong *)0x0) {
            puVar11 = (ulong *)puStack_298[-1];
            _free(puVar11);
            iVar15 = uStack_180._4_4_;
          }
          puStack_2a0 = puStack_410;
          puStack_298 = auStack_290;
        }
        puVar21 = puStack_138;
        if (iVar15 < 3) {
          *puStack_298 = *puStack_138;
          puStack_298[1] = puVar21[1];
          uStack_180 = (undefined4 *)CONCAT44(uStack_180._4_4_,0x42ff0000);
          puVar24[1] = 0;
          *puVar24 = 0;
          puVar24[3] = 0;
          puVar24[2] = 0;
          puVar24[5] = 0;
          puVar24[4] = 0;
          *(undefined8 *)((long)puVar24 + 0x34) = 0;
          *(undefined8 *)((long)puVar24 + 0x2c) = 0;
          if (puVar21 != auStack_130) {
            puVar11 = (ulong *)puVar21[-1];
            _free(puVar11);
          }
        }
        else {
          puStack_2a0 = puStack_140;
          puStack_298 = puStack_138;
        }
      }
      else {
        uVar9 = (ulong)auStack_2dc & 0xffffffff;
        if ((int)auStack_2dc._0_4_ < 3) {
          lVar18 = (long)iStack_2d4 * (long)(int)auStack_2dc._4_4_;
        }
        else {
          lVar18 = 1;
          puVar11 = puStack_2a0;
          do {
            lVar18 = lVar18 * (int)*puVar11;
            uVar9 = uVar9 - 1;
            puVar11 = (ulong *)((long)puVar11 + 4);
          } while (uVar9 != 0);
        }
        if (lVar18 == 0) goto LAB_10951da3c;
        uStack_170 = (ulong *)0x0;
        uStack_180 = (undefined4 *)CONCAT44(uStack_180._4_4_,0x1010000);
        uStack_178 = puStack_408;
        uStack_b0 = 0;
        puStack_c0 = (undefined4 *)CONCAT44(puStack_c0._4_4_,0x1010000);
        uStack_1a0 = 0x2010000;
        uStack_190 = 0;
        puStack_198 = puStack_408;
        puStack_b8 = &uStack_120;
        FUN_109a91d90();
        pcStack_a0 = FUN_109a28f7c;
        puVar11 = &uStack_180;
        FUN_109a279fc(puVar11,&puStack_c0,&uStack_1a0,puVar21,&pcStack_a0,1,10);
      }
      if (uStack_e8 != 0) {
        piVar1 = (int *)(uStack_e8 + 0x14);
        do {
          iVar15 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar15 + -1 == 0) {
          puVar11 = &uStack_120;
          func_0x000109a848d4();
        }
      }
      uStack_e8 = 0;
      puStack_108 = (ulong *)0x0;
      puStack_110 = (ulong *)0x0;
      puStack_f8 = (ulong *)0x0;
      puStack_100 = (ulong *)0x0;
      if (0 < uStack_120._4_4_) {
        lVar18 = 0;
        do {
          *(undefined4 *)((long)puStack_e0 + lVar18 * 4) = 0;
          lVar18 = lVar18 + 1;
        } while (lVar18 < uStack_120._4_4_);
      }
      if (puStack_d8 != auStack_d0 && puStack_d8 != (ulong *)0x0) {
        puVar11 = (ulong *)puStack_d8[-1];
        _free();
      }
      puVar12 = puVar12 + 1;
      puVar21 = puVar11;
    } while (puVar12 != puVar10);
  }
  FUN_10951f73c(&uStack_3f8,&uStack_3e8);
  plVar20 = plStack_3f0;
  uVar25 = uStack_3f8;
  puVar21 = puStack_400;
  uStack_98 = uStack_3f8;
  plStack_90 = plStack_3f0;
  uStack_3f8 = 0;
  plStack_3f0 = (long *)0x0;
  puVar22 = (undefined8 *)puStack_400[2];
  puVar24 = (undefined8 *)*puStack_400;
  if (puVar22 == puVar24) {
    if (puVar22 != (undefined8 *)0x0) {
      puVar13 = (undefined8 *)puStack_400[1];
      puVar17 = puVar24;
      if (puVar13 != puVar22) {
        do {
          puVar13 = puVar13 + -2;
          func_0x0001095038c0();
        } while (puVar13 != puVar22);
        puVar17 = (undefined8 *)*puVar21;
      }
      puVar21[1] = (ulong)puVar24;
      __ZdlPv(puVar17);
      *puVar21 = 0;
      puVar21[1] = 0;
      puVar21[2] = 0;
    }
    puVar22 = (undefined8 *)0x10;
    __Znwm();
    *puVar21 = (ulong)puVar22;
    puVar21[1] = (ulong)puVar22;
    puVar24 = puVar22 + 2;
    puVar21[2] = (ulong)puVar24;
    *puVar22 = uStack_98;
    puVar22[1] = plVar20;
    if (plVar20 != (long *)0x0) {
      plVar23 = plVar20 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar6) {
          *plVar23 = *plVar23 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
LAB_10951e4a8:
    puVar21[1] = (ulong)puVar24;
  }
  else {
    puVar22 = (undefined8 *)puStack_400[1];
    if (puVar22 == puVar24) {
      *puVar22 = uVar25;
      puVar22[1] = plVar20;
      if (plVar20 != (long *)0x0) {
        plVar23 = plVar20 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar6) {
            *plVar23 = *plVar23 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      puVar24 = (undefined8 *)(((long)puVar22 * 2 + 0x10) - (long)puVar24);
      goto LAB_10951e4a8;
    }
    if (plVar20 != (long *)0x0) {
      plVar23 = plVar20 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar6) {
          *plVar23 = *plVar23 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar23 = (long *)puVar24[1];
    *puVar24 = uVar25;
    puVar24[1] = plVar20;
    if (plVar23 != (long *)0x0) {
      plVar20 = plVar23 + 1;
      do {
        lVar18 = *plVar20;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar6) {
          *plVar20 = lVar18 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plVar23 + 0x10))(plVar23);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
      }
    }
    puVar22 = (undefined8 *)puVar21[1];
    while (puVar22 != puVar24 + 2) {
      puVar22 = puVar22 + -2;
      func_0x0001095038c0();
    }
    puVar21[1] = (ulong)(puVar24 + 2);
    plVar20 = plStack_90;
  }
  if (plVar20 != (long *)0x0) {
    plVar23 = plVar20 + 1;
    do {
      lVar18 = *plVar23;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *plVar23 = lVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
    }
  }
  plVar20 = plStack_3f0;
  if (plStack_3f0 != (long *)0x0) {
    plVar23 = plStack_3f0 + 1;
    do {
      lVar18 = *plVar23;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *plVar23 = lVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_3f0 + 0x10))(plStack_3f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
    }
  }
  param_1 = &uStack_3e8;
  FUN_1094e0cf8();
LAB_10951e520:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001095038c0(&uStack_98);
  FUN_109503e90(&uStack_3f8);
  FUN_1094e0cf8(&uStack_3e8);
  uStack_3e8 = puStack_400;
  FUN_109503918(&uStack_3e8);
  puVar21 = param_1;
  __Unwind_Resume();
  pcStack_468 = FUN_10951e820;
  uVar9 = *puVar21;
  puStack_480 = param_1;
  plStack_478 = plVar20;
  puStack_470 = &stack0xfffffffffffffff0;
  FUN_10951f6b4();
  if (uVar9 != 0) {
    return;
  }
  func_0x000107c31940(auStack_4b0,&UNK_10f2e5846);
  uVar9 = *puVar21;
  FUN_10951f6fc();
  FUN_109259240(auStack_498,auStack_4b0,*(ulong *)(uVar9 + 8) & 0x7fffffffffffffff);
  func_0x000105687ee0(auStack_498);
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10951e888);
  (*pcVar8)();
}



/* Entry: 10951e820; end: 10951e8bb;  */

void FUN_10951e820(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  lVar2 = *param_1;
  FUN_10951f6b4();
  if (lVar2 != 0) {
    return;
  }
  func_0x000107c31940(auStack_50,&UNK_10f2e5846);
  lVar2 = *param_1;
  FUN_10951f6fc();
  FUN_109259240(auStack_38,auStack_50,*(ulong *)(lVar2 + 8) & 0x7fffffffffffffff);
  func_0x000105687ee0(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10951e888);
  (*pcVar1)();
}



/* Entry: 10951e8bc; end: 10951e957;  */

void FUN_10951e8bc(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  lVar2 = *param_1;
  FUN_10951f7a4();
  if (lVar2 != 0) {
    return;
  }
  func_0x000107c31940(auStack_50,&UNK_10f2e5846);
  lVar2 = *param_1;
  FUN_10951f6fc();
  FUN_109259240(auStack_38,auStack_50,*(ulong *)(lVar2 + 8) & 0x7fffffffffffffff);
  func_0x000105687ee0(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10951e924);
  (*pcVar1)();
}



/* Entry: 10951e958; end: 10951eb53;  */

undefined8 * FUN_10951e958(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110afa918;
  plVar1 = (long *)param_1[0x22];
  if (plVar1 == param_1 + 0x1f) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_10951e9a0;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_10951e9a0:
  func_0x00010951ea70(param_1 + 0x1d);
  FUN_10951eb54(param_1 + 0x1c,0);
  plVar1 = (long *)param_1[0x1b];
  param_1[0x1b] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_1094d92f0(param_1 + 1);
  return param_1;
}



/* Entry: 10951eb54; end: 10951eb7b;  */

void FUN_10951eb54(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x000105687f94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10951eb7c; end: 10951ed23;  */

void FUN_10951eb7c(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10951eb7c(param_1,*param_2);
    FUN_10951eb7c(param_1,param_2[1]);
    func_0x00010951ebc4(param_2 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10951ed24; end: 10951ee63;  */

void FUN_10951ed24(long *param_1)

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



/* Entry: 10951ee64; end: 10951ee9f;  */

void FUN_10951ee64(undefined8 *param_1)

{
  FUN_10951eea0(param_1 + 3);
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10951eea0; end: 10951f007;  */

long * FUN_10951eea0(long *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  
  puVar5 = (undefined8 *)param_1[1];
  puVar6 = puVar5;
  if ((undefined8 *)param_1[2] != puVar5) {
    uVar3 = param_1[4];
    plVar7 = puVar5 + uVar3 / 0x55;
    lVar4 = *plVar7 + (uVar3 % 0x55) * 0x30;
    lVar8 = puVar5[(param_1[5] + uVar3) / 0x55] + ((param_1[5] + uVar3) % 0x55) * 0x30;
    puVar6 = (undefined8 *)param_1[2];
    if (lVar4 != lVar8) {
      do {
        plVar1 = *(long **)(lVar4 + 0x28);
        if (plVar1 == (long *)(lVar4 + 0x10)) {
          lVar2 = 0x20;
LAB_10951ef3c:
          (**(code **)(*plVar1 + lVar2))();
        }
        else if (plVar1 != (long *)0x0) {
          lVar2 = 0x28;
          goto LAB_10951ef3c;
        }
        func_0x00010951ea70(lVar4);
        lVar4 = lVar4 + 0x30;
        if (lVar4 - *plVar7 == 0xff0) {
          plVar7 = plVar7 + 1;
          lVar4 = *plVar7;
        }
      } while (lVar4 != lVar8);
      puVar5 = (undefined8 *)param_1[1];
      puVar6 = (undefined8 *)param_1[2];
    }
  }
  param_1[5] = 0;
  lVar4 = (long)puVar6 - (long)puVar5;
  while (uVar3 = lVar4 >> 3, 2 < uVar3) {
    __ZdlPv(*puVar5);
    puVar6 = (undefined8 *)param_1[2];
    puVar5 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar5;
    lVar4 = (long)puVar6 - (long)puVar5;
  }
  if (uVar3 == 1) {
    lVar4 = 0x2a;
  }
  else {
    if (uVar3 != 2) goto LAB_10951efe4;
    lVar4 = 0x55;
  }
  param_1[4] = lVar4;
LAB_10951efe4:
  for (; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    __ZdlPv(*puVar5);
  }
  lVar4 = param_1[1] - param_1[2];
  if (lVar4 != 0) {
    param_1[2] = param_1[2] + (lVar4 + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10951f008; end: 10951f05f;  */

void FUN_10951f008(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x38;
  __Znwm();
  FUN_10951f060();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10951f060; end: 10951f0b3;  */

undefined8 * FUN_10951f060(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108a6378;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  FUN_10951f0b4();
  return param_1;
}



/* Entry: 10951f0b4; end: 10951f12b;  */

long FUN_10951f0b4(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0x140;
  __Znwm();
  FUN_10951f1f0();
  *(undefined8 *)(lVar1 + 0x138) = *(undefined8 *)(param_2 + 0x138);
  uVar2 = *(undefined8 *)(param_2 + 0x128);
  *(undefined8 *)(lVar1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  *(undefined8 *)(lVar1 + 0x128) = uVar2;
  *param_1 = FUN_10951f12c;
  param_1[1] = lVar1;
  return lVar1;
}



/* Entry: 10951f12c; end: 10951f1ef;  */

undefined **
FUN_10951f12c(int param_1,undefined8 *param_2,undefined8 *param_3,long param_4,undefined *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (param_1 < 2) {
    if (param_1 != 0) {
      FUN_10951f430(param_3,param_2[1]);
      return (undefined **)0x0;
    }
    uVar2 = param_2[1];
    FUN_10951f294(uVar2);
    __ZdlPv(uVar2);
  }
  else {
    if (param_1 != 2) {
      if (param_1 != 3) {
        return &PTR_DAT_1108a63b8;
      }
      if (param_4 == 0) {
        uVar1 = (uint)(param_5 == &UNK_10ddb89a8);
      }
      else {
        func_0x000107c31948(param_4,&PTR_DAT_1108a63b8);
        uVar1 = (uint)param_4;
      }
      if (uVar1 != 0) {
        return (undefined **)param_2[1];
      }
      return (undefined **)0x0;
    }
    uVar2 = param_2[1];
    *param_3 = FUN_10951f12c;
    param_3[1] = uVar2;
  }
  *param_2 = 0;
  return (undefined **)0x0;
}



/* Entry: 10951f1f0; end: 10951f233;  */

undefined1 * FUN_10951f1f0(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  FUN_10951f234();
  return param_1;
}



/* Entry: 10951f234; end: 10951f293;  */

void FUN_10951f234(long param_1,long param_2)

{
  uint uVar1;
  long lStack_38;
  
  FUN_10951f294();
  uVar1 = *(uint *)(param_2 + 0x120);
  if (uVar1 != 0xffffffff) {
    lStack_38 = param_1;
    (*(code *)(&PTR_DAT_110afa980)[uVar1])(&lStack_38,param_2);
    *(uint *)(param_1 + 0x120) = uVar1;
  }
  return;
}



/* Entry: 10951f294; end: 10951f2e7;  */

void FUN_10951f294(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x120) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110afa968)[*(uint *)(param_1 + 0x120)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  return;
}



/* Entry: 10951f2e8; end: 10951f387;  */

void FUN_10951f2e8(undefined8 param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_2 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_2 + 0x38) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_2);
    }
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  if (0 < *(int *)(param_2 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_2 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_2 + 4));
  }
  lVar5 = *(long *)(param_2 + 0x48);
  if (lVar5 == param_2 + 0x50 || lVar5 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(*(undefined8 *)(lVar5 + -8));
  return;
}



/* Entry: 10951f388; end: 10951f42f;  */

void FUN_10951f388(void)

{
  return;
}



/* Entry: 10951f430; end: 10951f4a7;  */

long FUN_10951f430(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0x140;
  __Znwm();
  FUN_10951f4a8();
  *(undefined8 *)(lVar1 + 0x138) = *(undefined8 *)(param_2 + 0x138);
  uVar2 = *(undefined8 *)(param_2 + 0x128);
  *(undefined8 *)(lVar1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  *(undefined8 *)(lVar1 + 0x128) = uVar2;
  *param_1 = FUN_10951f12c;
  param_1[1] = lVar1;
  return lVar1;
}



/* Entry: 10951f4a8; end: 10951f4eb;  */

undefined1 * FUN_10951f4a8(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  FUN_10951f4ec();
  return param_1;
}



/* Entry: 10951f4ec; end: 10951f54b;  */

void FUN_10951f4ec(long param_1,long param_2)

{
  uint uVar1;
  long lStack_38;
  
  FUN_10951f294();
  uVar1 = *(uint *)(param_2 + 0x120);
  if (uVar1 != 0xffffffff) {
    lStack_38 = param_1;
    (*(code *)(&PTR_FUN_110afa998)[uVar1])(&lStack_38,param_2);
    *(uint *)(param_1 + 0x120) = uVar1;
  }
  return;
}



/* Entry: 10951f54c; end: 10951f563;  */

undefined8 * FUN_10951f54c(long *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar4 = (undefined8 *)*param_1;
  uVar8 = *param_2;
  uVar10 = param_2[3];
  uVar9 = param_2[2];
  puVar4[1] = param_2[1];
  *puVar4 = uVar8;
  puVar4[3] = uVar10;
  puVar4[2] = uVar9;
  uVar8 = param_2[4];
  puVar4[5] = param_2[5];
  puVar4[4] = uVar8;
  lVar5 = param_2[7];
  uVar8 = param_2[6];
  puVar4[7] = param_2[7];
  puVar4[6] = uVar8;
  puVar4[10] = 0;
  puVar4[8] = puVar4 + 1;
  puVar4[9] = puVar4 + 10;
  puVar4[0xb] = 0;
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(int *)((long)param_2 + 4) < 3) {
    puVar6 = (undefined8 *)param_2[9];
    puVar7 = (undefined8 *)puVar4[9];
    *puVar7 = *puVar6;
    puVar7[1] = puVar6[1];
  }
  else {
    *(undefined4 *)((long)puVar4 + 4) = 0;
    func_0x000109a84868(puVar4);
  }
  return puVar4;
}



/* Entry: 10951f564; end: 10951f5ff;  */

undefined8 * FUN_10951f564(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar7 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar7;
  lVar4 = param_2[7];
  uVar7 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar7;
  param_1[10] = 0;
  param_1[8] = param_1 + 1;
  param_1[9] = param_1 + 10;
  param_1[0xb] = 0;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(int *)((long)param_2 + 4) < 3) {
    puVar5 = (undefined8 *)param_2[9];
    puVar6 = (undefined8 *)param_1[9];
    *puVar6 = *puVar5;
    puVar6[1] = puVar5[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 4) = 0;
    func_0x000109a84868(param_1);
  }
  return param_1;
}



/* Entry: 10951f600; end: 10951f607;  */

void FUN_10951f600(void)

{
  return;
}



/* Entry: 10951f608; end: 10951f63b;  */

void FUN_10951f608(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110afa9c0;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10951f63c; end: 10951f657;  */

void FUN_10951f63c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110afa9c0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10951f658; end: 10951f66b;  */

undefined * FUN_10951f658(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10f2e581e;
  func_0x000105688514(&UNK_10f2e581e);
  func_0x000107c31948(param_2,&PTR_DAT_110afaa20);
  puVar1 = puVar1 + 8;
  if ((int)param_2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}



/* Entry: 10951f66c; end: 10951f6a7;  */

long FUN_10951f66c(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110afaa20);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10951f6a8; end: 10951f6b3;  */

undefined ** FUN_10951f6a8(void)

{
  return &PTR_DAT_110afaa20;
}



/* Entry: 10951f6b4; end: 10951f6fb;  */

void FUN_10951f6b4(undefined8 *param_1)

{
  if ((param_1 != (undefined8 *)0x0) && ((code *)*param_1 != (code *)0x0)) {
    (*(code *)*param_1)(3,param_1,0,&PTR_DAT_110af40f0,&UNK_10dfd168c);
  }
  return;
}



/* Entry: 10951f6fc; end: 10951f73b;  */

void FUN_10951f6fc(undefined8 *param_1)

{
  if ((code *)*param_1 != (code *)0x0) {
    (*(code *)*param_1)(4,param_1,0,0,0);
  }
  return;
}



/* Entry: 10951f73c; end: 10951f7a3;  */

void FUN_10951f73c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x260;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_FUN_110af9ae8;
  FUN_1094e1598(puVar2,param_2);
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10951f7a4; end: 10951f7eb;  */

void FUN_10951f7a4(undefined8 *param_1)

{
  if ((param_1 != (undefined8 *)0x0) && ((code *)*param_1 != (code *)0x0)) {
    (*(code *)*param_1)(3,param_1,0,&PTR_DAT_110af38f0,&UNK_10dfd1690);
  }
  return;
}


