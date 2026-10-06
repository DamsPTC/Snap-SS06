/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a23298c; end: 10a232a77;  */

long FUN_10a23298c(long param_1)

{
  if (*(char *)(param_1 + 0xaf) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x98));
  }
  if (*(char *)(param_1 + 0x97) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x80));
  }
  if (*(char *)(param_1 + 0x7f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x68));
  }
  if (*(char *)(param_1 + 0x67) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x50));
  }
  if (*(char *)(param_1 + 0x4f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x38));
  }
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 10a232a78; end: 10a232a7b;  */

void FUN_10a232a78(void)

{
  return;
}



/* Entry: 10a232a7c; end: 10a232aef;  */

undefined8 * FUN_10a232a7c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (long *)(param_3 + 8);
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
  *param_1 = param_2;
  param_1[1] = param_3;
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



/* Entry: 10a232af0; end: 10a232af3;  */

void FUN_10a232af0(void)

{
  return;
}



/* Entry: 10a232af4; end: 10a232b2f;  */

long * FUN_10a232af4(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    plVar2[2] = lVar3 + -0xb0;
    FUN_10a23298c();
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10a232b30; end: 10a232b7b;  */

long * FUN_10a232b30(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0xb0;
    FUN_10a23298c();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a232b7c; end: 10a232be7;  */

bool FUN_10a232b7c(char *param_1,ulong param_2,char *param_3,ulong param_4)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 < param_4) {
    bVar2 = false;
  }
  else if (param_4 == 0) {
    bVar2 = true;
  }
  else {
    do {
      param_4 = param_4 - 1;
      cVar1 = *param_1;
      uVar3 = (int)cVar1 + 0x20;
      if (0x19 < (int)cVar1 - 0x41U) {
        uVar3 = (uint)cVar1;
      }
      cVar1 = *param_3;
      uVar4 = (int)cVar1 + 0x20;
      if (0x19 < (int)cVar1 - 0x41U) {
        uVar4 = (uint)cVar1;
      }
      bVar2 = (uVar3 & 0xff) == (uVar4 & 0xff);
    } while ((bVar2) && (param_1 = param_1 + 1, param_3 = param_3 + 1, param_4 != 0));
  }
  return bVar2;
}



/* Entry: 10a232be8; end: 10a232c2f;  */

long * FUN_10a232be8(long *param_1)

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



/* Entry: 10a232c30; end: 10a232d63;  */

long * FUN_10a232c30(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10a23be00(plVar1 + 3);
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



/* Entry: 10a232d64; end: 10a232dbf;  */

void FUN_10a232d64(long *param_1)

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
        FUN_10a23c9c0();
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



/* Entry: 10a232dc0; end: 10a232e33;  */

void FUN_10a232dc0(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    plVar3 = (long *)param_1[1];
    plVar1 = plVar2;
    if (plVar3 != plVar2) {
      do {
        plVar3 = plVar3 + -1;
        plVar1 = (long *)*plVar3;
        *plVar3 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      } while (plVar3 != plVar2);
      plVar1 = (long *)*param_1;
    }
    param_1[1] = plVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar1);
    return;
  }
  return;
}



/* Entry: 10a232e34; end: 10a232e8b;  */

long FUN_10a232e34(long param_1)

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



/* Entry: 10a232e8c; end: 10a232f73;  */

void FUN_10a232e8c(undefined8 *param_1,undefined8 param_2,int param_3)

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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a232f00);
  (*pcVar1)();
}



/* Entry: 10a232f74; end: 10a233057;  */

long FUN_10a232f74(long *param_1,undefined8 param_2)

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
        if (plVar2 == plVar4) {
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



/* Entry: 10a233058; end: 10a23316f;  */

void FUN_10a233058(undefined8 param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined **appuStack_150 [2];
  undefined1 auStack_140 [264];
  char cStack_38;
  
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_258,&UNK_10f646920,param_1);
  FUN_10a002a94(appuStack_150,auStack_258);
  appuStack_150[0] = &PTR_FUN_110b99e70;
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  appuStack_150[0] = &PTR_FUN_110bb4338;
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
  *puVar2 = &PTR_FUN_110bb4338;
  ___cxa_throw(puVar2,&PTR_DAT_110bb4310,FUN_10a233170);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a233140);
  (*pcVar1)();
}



/* Entry: 10a233170; end: 10a233173;  */

void FUN_10a233170(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10a233174; end: 10a233187;  */

void FUN_10a233174(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a233188; end: 10a2331b7;  */

void FUN_10a233188(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x80);
  FUN_10a2331b8();
                    /* WARNING: Could not recover jumptable at 0x00010a2331b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10a2331b8; end: 10a233213;  */

void FUN_10a2331b8(undefined8 *param_1)

{
  (**(code **)(*(long *)param_1[9] + 0x40))
            ((long *)param_1[9],param_1 + 0xb,*(undefined4 *)(param_1 + 8));
  (*(code *)*param_1)();
  (*(code *)param_1[0xf])(param_1);
  return;
}



/* Entry: 10a233214; end: 10a2332e3;  */

void FUN_10a233214(long param_1)

{
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x6f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x58));
    }
    FUN_10a09e870(param_1 + 0x48);
    (*(code *)**(undefined8 **)(param_1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a2332e4; end: 10a23333f;  */

void FUN_10a2332e4(undefined8 *param_1)

{
  (**(code **)(*(long *)param_1[9] + 0x48))((long *)param_1[9],param_1 + 0xb,param_1[8]);
  (*(code *)*param_1)();
  (*(code *)param_1[0xf])(param_1);
  return;
}



/* Entry: 10a233340; end: 10a23340f;  */

void FUN_10a233340(long param_1)

{
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x6f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x58));
    }
    FUN_10a09e870(param_1 + 0x48);
    (*(code *)**(undefined8 **)(param_1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a233410; end: 10a23346b;  */

void FUN_10a233410(undefined8 *param_1)

{
  (**(code **)(*(long *)param_1[9] + 0x50))
            ((long *)param_1[9],param_1 + 0xb,*(undefined1 *)(param_1 + 8));
  (*(code *)*param_1)();
  (*(code *)param_1[0xf])(param_1);
  return;
}



/* Entry: 10a23346c; end: 10a23353b;  */

void FUN_10a23346c(long param_1)

{
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x6f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x58));
    }
    FUN_10a09e870(param_1 + 0x48);
    (*(code *)**(undefined8 **)(param_1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a23353c; end: 10a233597;  */

void FUN_10a23353c(undefined8 *param_1)

{
  (**(code **)(*(long *)param_1[9] + 0x58))
            (*(undefined4 *)(param_1 + 8),(long *)param_1[9],param_1 + 0xb);
  (*(code *)*param_1)(param_1);
  (*(code *)param_1[0xf])(param_1);
  return;
}



/* Entry: 10a233598; end: 10a233667;  */

void FUN_10a233598(long param_1)

{
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x6f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x58));
    }
    FUN_10a09e870(param_1 + 0x48);
    (*(code *)**(undefined8 **)(param_1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a233668; end: 10a2336ff;  */

void FUN_10a233668(long param_1)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  (**(code **)(**(long **)(param_1 + 0x58) + 0x60))
            (auStack_38,*(long **)(param_1 + 0x58),param_1 + 0x68,param_1 + 0x40);
  FUN_10a2187a0(param_1,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  (**(code **)(param_1 + 0x88))(param_1);
  return;
}



/* Entry: 10a233700; end: 10a2337ef;  */

void FUN_10a233700(long param_1)

{
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x7f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x68));
    }
    FUN_10a09e870(param_1 + 0x58);
    if (*(char *)(param_1 + 0x57) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x40));
    }
    (*(code *)**(undefined8 **)(param_1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a2337f0; end: 10a233887;  */

void FUN_10a2337f0(long param_1)

{
  long lStack_38;
  long lStack_30;
  
  (**(code **)(**(long **)(param_1 + 0x58) + 0x68))
            (&lStack_38,*(long **)(param_1 + 0x58),param_1 + 0x68,param_1 + 0x40);
  FUN_10a218cb4(param_1,&lStack_38);
  if (lStack_38 != 0) {
    lStack_30 = lStack_38;
    __ZdlPv();
  }
  (**(code **)(param_1 + 0x88))(param_1);
  return;
}



/* Entry: 10a233888; end: 10a233947;  */

void FUN_10a233888(long param_1)

{
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x7f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x68));
    }
    FUN_10a09e870(param_1 + 0x58);
    if (*(long *)(param_1 + 0x40) != 0) {
      *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x40);
      __ZdlPv();
    }
    (*(code *)**(undefined8 **)(param_1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a233948; end: 10a233a1f;  */

long * FUN_10a233948(undefined8 param_1,long *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined **ppuVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  long lStack_40;
  long *plStack_38;
  
  lStack_40 = 0;
  plStack_38 = (long *)0x0;
  ppuVar5 = &PTR___tlv_bootstrap_11340de28;
  (*(code *)PTR___tlv_bootstrap_11340de28)();
  plVar6 = param_2;
  if (*ppuVar5 != (undefined *)0x0) {
    func_0x00010a0f3894(&lStack_40,*ppuVar5 + 0x10);
    if (lStack_40 != 0) {
      pcVar7 = *(code **)(param_3 + 0x10);
      plVar6 = (long *)(lStack_40 + ((long)*(ulong *)(param_3 + 0x18) >> 1));
      if ((*(ulong *)(param_3 + 0x18) & 1) != 0) {
        pcVar7 = *(code **)(*plVar6 + ((ulong)pcVar7 & 0xffffffff));
      }
      (*pcVar7)(plVar6,param_1,param_2);
    }
  }
  plVar4 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return plVar6;
}



/* Entry: 10a233a20; end: 10a233a3b;  */

void FUN_10a233a20(void)

{
  return;
}



/* Entry: 10a233a3c; end: 10a233b6f;  */

void FUN_10a233a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined **ppuVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  uStack_40 = 0;
  plStack_38 = (long *)0x0;
  ppuVar5 = &PTR___tlv_bootstrap_11340de28;
  (*(code *)PTR___tlv_bootstrap_11340de28)();
  if (*ppuVar5 == (undefined *)0x0) {
    pcVar6 = *(code **)(param_4 + 0x10);
    uStack_50 = 0;
    plStack_48 = (long *)0x0;
  }
  else {
    func_0x00010a0f3894(&uStack_40,*ppuVar5 + 0x10);
    pcVar6 = *(code **)(param_4 + 0x10);
    plStack_48 = plStack_38;
    uStack_50 = uStack_40;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  (*pcVar6)(param_1,param_2,param_3,&uStack_50);
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
  return;
}



/* Entry: 10a233b70; end: 10a233ba3;  */

void FUN_10a233b70(void)

{
  return;
}



/* Entry: 10a233ba4; end: 10a233c7b;  */

long * FUN_10a233ba4(undefined8 param_1,long *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined **ppuVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  long lStack_40;
  long *plStack_38;
  
  lStack_40 = 0;
  plStack_38 = (long *)0x0;
  ppuVar5 = &PTR___tlv_bootstrap_11340de28;
  (*(code *)PTR___tlv_bootstrap_11340de28)();
  plVar6 = param_2;
  if (*ppuVar5 != (undefined *)0x0) {
    func_0x00010a0f3894(&lStack_40,*ppuVar5 + 0x10);
    if (lStack_40 != 0) {
      pcVar7 = *(code **)(param_3 + 0x10);
      plVar6 = (long *)(lStack_40 + ((long)*(ulong *)(param_3 + 0x18) >> 1));
      if ((*(ulong *)(param_3 + 0x18) & 1) != 0) {
        pcVar7 = *(code **)(*plVar6 + ((ulong)pcVar7 & 0xffffffff));
      }
      (*pcVar7)(plVar6,param_1,param_2);
    }
  }
  plVar4 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return plVar6;
}



/* Entry: 10a233c7c; end: 10a233c97;  */

void FUN_10a233c7c(void)

{
  return;
}



/* Entry: 10a233c98; end: 10a233dcb;  */

void FUN_10a233c98(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined **ppuVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  uStack_40 = 0;
  plStack_38 = (long *)0x0;
  ppuVar5 = &PTR___tlv_bootstrap_11340de28;
  (*(code *)PTR___tlv_bootstrap_11340de28)();
  if (*ppuVar5 == (undefined *)0x0) {
    pcVar6 = *(code **)(param_4 + 0x10);
    uStack_50 = 0;
    plStack_48 = (long *)0x0;
  }
  else {
    func_0x00010a0f3894(&uStack_40,*ppuVar5 + 0x10);
    pcVar6 = *(code **)(param_4 + 0x10);
    plStack_48 = plStack_38;
    uStack_50 = uStack_40;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  (*pcVar6)(param_1,param_2,param_3,&uStack_50);
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
  return;
}



/* Entry: 10a233dcc; end: 10a233dff;  */

void FUN_10a233dcc(void)

{
  return;
}



/* Entry: 10a233e00; end: 10a233ed7;  */

long * FUN_10a233e00(undefined8 param_1,long *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined **ppuVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  long lStack_40;
  long *plStack_38;
  
  lStack_40 = 0;
  plStack_38 = (long *)0x0;
  ppuVar5 = &PTR___tlv_bootstrap_11340de28;
  (*(code *)PTR___tlv_bootstrap_11340de28)();
  plVar6 = param_2;
  if (*ppuVar5 != (undefined *)0x0) {
    func_0x00010a0f3894(&lStack_40,*ppuVar5 + 0x10);
    if (lStack_40 != 0) {
      pcVar7 = *(code **)(param_3 + 0x10);
      plVar6 = (long *)(lStack_40 + ((long)*(ulong *)(param_3 + 0x18) >> 1));
      if ((*(ulong *)(param_3 + 0x18) & 1) != 0) {
        pcVar7 = *(code **)(*plVar6 + ((ulong)pcVar7 & 0xffffffff));
      }
      (*pcVar7)(plVar6,param_1,param_2);
    }
  }
  plVar4 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return plVar6;
}



/* Entry: 10a233ed8; end: 10a233ef3;  */

void FUN_10a233ed8(void)

{
  return;
}



/* Entry: 10a233ef4; end: 10a234027;  */

void FUN_10a233ef4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined **ppuVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  uStack_40 = 0;
  plStack_38 = (long *)0x0;
  ppuVar5 = &PTR___tlv_bootstrap_11340de28;
  (*(code *)PTR___tlv_bootstrap_11340de28)();
  if (*ppuVar5 == (undefined *)0x0) {
    pcVar6 = *(code **)(param_4 + 0x10);
    uStack_50 = 0;
    plStack_48 = (long *)0x0;
  }
  else {
    func_0x00010a0f3894(&uStack_40,*ppuVar5 + 0x10);
    pcVar6 = *(code **)(param_4 + 0x10);
    plStack_48 = plStack_38;
    uStack_50 = uStack_40;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  (*pcVar6)(param_1,param_2,param_3,&uStack_50);
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
  return;
}



/* Entry: 10a234028; end: 10a23405b;  */

void FUN_10a234028(void)

{
  return;
}



/* Entry: 10a23405c; end: 10a234133;  */

undefined8 FUN_10a23405c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined **ppuVar5;
  code *pcVar6;
  long lVar7;
  long lStack_40;
  long *plStack_38;
  
  lStack_40 = 0;
  plStack_38 = (long *)0x0;
  ppuVar5 = &PTR___tlv_bootstrap_11340de28;
  (*(code *)PTR___tlv_bootstrap_11340de28)();
  if (*ppuVar5 != (undefined *)0x0) {
    func_0x00010a0f3894(&lStack_40,*ppuVar5 + 0x10);
    if (lStack_40 != 0) {
      pcVar6 = *(code **)(param_3 + 0x10);
      plVar2 = (long *)(lStack_40 + ((long)*(ulong *)(param_3 + 0x18) >> 1));
      if ((*(ulong *)(param_3 + 0x18) & 1) != 0) {
        pcVar6 = *(code **)(*plVar2 + ((ulong)pcVar6 & 0xffffffff));
      }
      (*pcVar6)(param_1,plVar2,param_2);
    }
  }
  plVar2 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  return param_1;
}



/* Entry: 10a234134; end: 10a23414f;  */

void FUN_10a234134(void)

{
  return;
}



/* Entry: 10a234150; end: 10a23428b;  */

void FUN_10a234150(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined **ppuVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  uStack_50 = 0;
  plStack_48 = (long *)0x0;
  ppuVar5 = &PTR___tlv_bootstrap_11340de28;
  (*(code *)PTR___tlv_bootstrap_11340de28)();
  if (*ppuVar5 == (undefined *)0x0) {
    pcVar6 = *(code **)(param_4 + 0x10);
    uStack_60 = 0;
    plStack_58 = (long *)0x0;
  }
  else {
    func_0x00010a0f3894(&uStack_50,*ppuVar5 + 0x10);
    pcVar6 = *(code **)(param_4 + 0x10);
    plStack_58 = plStack_48;
    uStack_60 = uStack_50;
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  (*pcVar6)(param_1,param_2,param_3,&uStack_60);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
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
  return;
}



/* Entry: 10a23428c; end: 10a2342bf;  */

void FUN_10a23428c(void)

{
  return;
}



/* Entry: 10a2342c0; end: 10a2343e7;  */

void FUN_10a2342c0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined **ppuVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_40;
  long *plStack_38;
  
  uStack_58 = param_3[1];
  uStack_60 = *param_3;
  lStack_50 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  lStack_40 = 0;
  plStack_38 = (long *)0x0;
  ppuVar5 = &PTR___tlv_bootstrap_11340de28;
  (*(code *)PTR___tlv_bootstrap_11340de28)();
  if (*ppuVar5 != (undefined *)0x0) {
    func_0x00010a0f3894(&lStack_40,*ppuVar5 + 0x10);
    if (lStack_40 != 0) {
      pcVar6 = *(code **)(param_4 + 0x10);
      plVar2 = (long *)(lStack_40 + ((long)*(ulong *)(param_4 + 0x18) >> 1));
      if ((*(ulong *)(param_4 + 0x18) & 1) != 0) {
        pcVar6 = *(code **)(*plVar2 + ((ulong)pcVar6 & 0xffffffff));
      }
      (*pcVar6)(param_1,plVar2,param_2,&uStack_60);
      goto LAB_10a234368;
    }
  }
  param_1[1] = uStack_58;
  *param_1 = uStack_60;
  param_1[2] = lStack_50;
  uStack_58 = 0;
  lStack_50 = 0;
  uStack_60 = 0;
LAB_10a234368:
  plVar2 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  if (lStack_50 < 0) {
    __ZdlPv(uStack_60);
  }
  return;
}



/* Entry: 10a2343e8; end: 10a234403;  */

void FUN_10a2343e8(void)

{
  return;
}



/* Entry: 10a234404; end: 10a234537;  */

void FUN_10a234404(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined **ppuVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  uStack_40 = 0;
  plStack_38 = (long *)0x0;
  ppuVar5 = &PTR___tlv_bootstrap_11340de28;
  (*(code *)PTR___tlv_bootstrap_11340de28)();
  if (*ppuVar5 == (undefined *)0x0) {
    pcVar6 = *(code **)(param_4 + 0x10);
    uStack_50 = 0;
    plStack_48 = (long *)0x0;
  }
  else {
    func_0x00010a0f3894(&uStack_40,*ppuVar5 + 0x10);
    pcVar6 = *(code **)(param_4 + 0x10);
    plStack_48 = plStack_38;
    uStack_50 = uStack_40;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  (*pcVar6)(param_1,param_2,param_3,&uStack_50);
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
  return;
}



/* Entry: 10a234538; end: 10a23456b;  */

void FUN_10a234538(void)

{
  return;
}



/* Entry: 10a23456c; end: 10a234693;  */

void FUN_10a23456c(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined **ppuVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar8 = *param_3;
  lVar3 = param_3[1];
  lVar9 = param_3[2];
  lStack_50 = 0;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  plStack_48 = (long *)0x0;
  ppuVar6 = &PTR___tlv_bootstrap_11340de28;
  lStack_68 = lVar8;
  lStack_60 = lVar3;
  lStack_58 = lVar9;
  (*(code *)PTR___tlv_bootstrap_11340de28)();
  if (*ppuVar6 != (undefined *)0x0) {
    func_0x00010a0f3894(&lStack_50,*ppuVar6 + 0x10);
    if (lStack_50 != 0) {
      pcVar7 = *(code **)(param_4 + 0x10);
      plVar2 = (long *)(lStack_50 + ((long)*(ulong *)(param_4 + 0x18) >> 1));
      if ((*(ulong *)(param_4 + 0x18) & 1) != 0) {
        pcVar7 = *(code **)(*plVar2 + ((ulong)pcVar7 & 0xffffffff));
      }
      (*pcVar7)(param_1,plVar2,param_2,&lStack_68);
      goto LAB_10a234610;
    }
  }
  *param_1 = lVar8;
  param_1[1] = lVar3;
  param_1[2] = lVar9;
  lStack_60 = 0;
  lStack_58 = 0;
  lStack_68 = 0;
LAB_10a234610:
  plVar2 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  if (lStack_68 != 0) {
    lStack_60 = lStack_68;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a234694; end: 10a2346af;  */

void FUN_10a234694(void)

{
  return;
}



/* Entry: 10a2346b0; end: 10a2347e3;  */

void FUN_10a2346b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined **ppuVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  uStack_40 = 0;
  plStack_38 = (long *)0x0;
  ppuVar5 = &PTR___tlv_bootstrap_11340de28;
  (*(code *)PTR___tlv_bootstrap_11340de28)();
  if (*ppuVar5 == (undefined *)0x0) {
    pcVar6 = *(code **)(param_4 + 0x10);
    uStack_50 = 0;
    plStack_48 = (long *)0x0;
  }
  else {
    func_0x00010a0f3894(&uStack_40,*ppuVar5 + 0x10);
    pcVar6 = *(code **)(param_4 + 0x10);
    plStack_48 = plStack_38;
    uStack_50 = uStack_40;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  (*pcVar6)(param_1,param_2,param_3,&uStack_50);
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
  return;
}



/* Entry: 10a2347e4; end: 10a234817;  */

void FUN_10a2347e4(void)

{
  return;
}



/* Entry: 10a234818; end: 10a2348c7;  */

long FUN_10a234818(long param_1)

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



/* Entry: 10a2348c8; end: 10a2348d7;  */

void FUN_10a2348c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb5568;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a2348d8; end: 10a2348f7;  */

void FUN_10a2348d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb5568;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2348f8; end: 10a234903;  */

long FUN_10a2348f8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x90);
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
  return param_1 + 0x88;
}



/* Entry: 10a234904; end: 10a234a0b;  */

long FUN_10a234904(long param_1)

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



/* Entry: 10a234a0c; end: 10a234b1f;  */

void FUN_10a234a0c(ulong *param_1,ulong *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined1 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined1 uStack_38;
  
  uVar2 = 0x50;
  ___cxa_allocate_exception(0x50);
  uStack_50 = uStack_50 & 0xffffffffffffff00;
  uStack_38 = (char)param_1[3] == '\x01';
  if ((bool)uStack_38) {
    uStack_48 = param_1[1];
    uStack_50 = *param_1;
    uStack_40 = param_1[2];
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  uStack_70 = uStack_70 & 0xffffffffffffff00;
  uStack_58 = (char)param_2[3] == '\x01';
  if ((bool)uStack_58) {
    uStack_68 = param_2[1];
    uStack_70 = *param_2;
    uStack_60 = param_2[2];
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
  }
  FUN_10a234b84(uVar2,&uStack_50,&uStack_70);
  ___cxa_throw(uVar2,&PTR_DAT_110bb57a0,FUN_10a234b20);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a234ad0);
  (*pcVar1)();
}



/* Entry: 10a234b20; end: 10a234b83;  */

void FUN_10a234b20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb57c8;
  if ((*(char *)(param_1 + 9) == '\x01') && (*(char *)((long)param_1 + 0x47) < '\0')) {
    __ZdlPv(param_1[6]);
  }
  if ((*(char *)(param_1 + 5) == '\x01') && (*(char *)((long)param_1 + 0x27) < '\0')) {
    __ZdlPv(param_1[2]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)(param_1);
  return;
}



/* Entry: 10a234b84; end: 10a234c8b;  */

undefined8 * FUN_10a234b84(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  FUN_10a234c8c(auStack_48,param_2,param_3);
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (param_1,auStack_48);
  *param_1 = &PTR_FUN_110b3eb08;
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  *param_1 = &PTR_FUN_110bb57c8;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  if (*(char *)(param_2 + 3) == '\x01') {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[4] = param_2[2];
    param_1[3] = uVar2;
    param_1[2] = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  if (*(char *)(param_3 + 3) == '\x01') {
    uVar2 = param_3[1];
    uVar1 = *param_3;
    param_1[8] = param_3[2];
    param_1[7] = uVar2;
    param_1[6] = uVar1;
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  return param_1;
}



/* Entry: 10a234c8c; end: 10a234dbb;  */

void FUN_10a234c8c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  func_0x000107c2b054(param_1,&UNK_10f64693a);
  if (*(char *)(param_2 + 3) == '\x01') {
    uVar1 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    if (uVar1 != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,&UNK_10f646950,0xe);
      if ((*(byte *)(param_2 + 3) & 1) == 0) goto LAB_10a234d9c;
      uVar1 = param_2[1];
      puVar2 = (undefined8 *)*param_2;
      if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
        uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
        puVar2 = param_2;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,puVar2,uVar1);
    }
  }
  if (*(char *)(param_3 + 3) == '\x01') {
    uVar1 = param_3[1];
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    }
    if (uVar1 != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,&UNK_10f64695f,9);
      if ((*(byte *)(param_3 + 3) & 1) == 0) {
LAB_10a234d9c:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10a234da0);
        (*pcVar3)();
      }
      uVar1 = param_3[1];
      puVar2 = (undefined8 *)*param_3;
      if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
        uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
        puVar2 = param_3;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,puVar2,uVar1);
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f62a9de,1);
  return;
}



/* Entry: 10a234dbc; end: 10a234e23;  */

void FUN_10a234dbc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb57c8;
  if ((*(char *)(param_1 + 9) == '\x01') && (*(char *)((long)param_1 + 0x47) < '\0')) {
    __ZdlPv(param_1[6]);
  }
  if ((*(char *)(param_1 + 5) == '\x01') && (*(char *)((long)param_1 + 0x27) < '\0')) {
    __ZdlPv(param_1[2]);
  }
  __ZNSt13runtime_errorD2Ev(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a234e24; end: 10a234e47;  */

void FUN_10a234e24(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010a234e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x10))();
  return;
}



/* Entry: 10a234e48; end: 10a234ecf;  */

undefined1 FUN_10a234e48(long param_1,undefined1 *param_2)

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
        if (*(char *)(param_1 + 0x99) == '\x01') {
          *(undefined1 *)(param_1 + 0x99) = 0;
        }
        *(undefined1 *)(param_1 + 0x98) = *param_2;
        *(undefined1 *)(param_1 + 0x99) = 1;
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



/* Entry: 10a234ed0; end: 10a234f43;  */

void FUN_10a234ed0(undefined8 *param_1,undefined8 param_2,int param_3)

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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a234f44);
  (*pcVar1)();
}



/* Entry: 10a234f44; end: 10a235293;  */

long * FUN_10a234f44(long *param_1)

{
  long lVar1;
  
  func_0x00010a22bcb4(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a235294; end: 10a235297;  */

undefined8 * FUN_10a235294(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb44c8;
  __ZNSt3__118condition_variableD1Ev(param_1 + 0xf);
  __ZNSt3__15mutexD1Ev(param_1 + 7);
  FUN_10a2369a8(param_1 + 1);
  return param_1;
}



/* Entry: 10a235298; end: 10a2352df;  */

undefined8 * FUN_10a235298(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb44c8;
  __ZNSt3__118condition_variableD1Ev(param_1 + 0xf);
  __ZNSt3__15mutexD1Ev(param_1 + 7);
  FUN_10a2369a8(param_1 + 1);
  return param_1;
}



/* Entry: 10a2352e0; end: 10a2352f3;  */

void FUN_10a2352e0(void)

{
  FUN_10a235298();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2352f4; end: 10a235303;  */

void FUN_10a2352f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb44f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a235304; end: 10a235323;  */

void FUN_10a235304(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb44f8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a235324; end: 10a23532f;  */

undefined8 * FUN_10a235324(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)(param_1 + 0x18);
  func_0x00010ad5aea0(*puVar1);
  FUN_10ad5b0cc(*puVar1);
  func_0x00010a06e21c(param_1 + 0x48);
  FUN_10a071d0c(param_1 + 0x38);
  FUN_10a09e870(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  FUN_10a109a70(puVar1,0);
  return puVar1;
}



/* Entry: 10a235330; end: 10a235387;  */

long FUN_10a235330(long param_1)

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



/* Entry: 10a235388; end: 10a235397;  */

void FUN_10a235388(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb5498;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a235398; end: 10a2353b7;  */

void FUN_10a235398(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb5498;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2353b8; end: 10a2353d3;  */

long * FUN_10a2353b8(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  long *plVar6;
  undefined8 extraout_x8;
  undefined *extraout_x9;
  undefined *puVar7;
  undefined **ppuStack_138;
  undefined *apuStack_130 [3];
  long alStack_118 [8];
  long lStack_d8;
  undefined1 auStack_98 [96];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a08f044(auStack_98);
  ppuVar1 = &PTR___tlv_bootstrap_11340df00;
  (*(code *)PTR___tlv_bootstrap_11340df00)();
  puVar7 = *ppuVar1;
  puVar2 = (undefined *)0x1;
  FUN_10a303694();
  *ppuVar1 = puVar2;
  FUN_10a08f118(param_1 + 0x28,0);
  *ppuVar1 = puVar7;
  func_0x00010a09a9f4(auStack_98);
  if (*(long *)(param_1 + 0x168) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a09a5c0(param_1 + 0x120);
  FUN_10a09a790(param_1 + 0xf0);
  FUN_10a043fd8(param_1 + 0xe0);
  func_0x00010a09a970(param_1 + 0x30);
  iVar5 = 0;
  FUN_10a08f118(param_1 + 0x28);
  func_0x00010a09e8c8((long *)(param_1 + 0x18));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return (long *)(param_1 + 0x18);
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  puVar2 = *ppuVar1;
  *ppuVar1 = extraout_x9;
  FUN_10a156070(alStack_118,*(undefined8 *)(extraout_x9 + 0x10));
  ppuStack_138 = &PTR_FUN_110ba0998;
  plVar6 = alStack_118;
  apuStack_130[0] = puVar2;
  func_0x00010a09aa40(extraout_x8,plVar6,&ppuStack_138);
  if (ppuStack_138 != (undefined **)0x0) {
    (*(code *)ppuStack_138[2])(apuStack_130);
    if (ppuStack_138 != (undefined **)0x0) {
      (*(code *)*ppuStack_138)(apuStack_130);
    }
  }
  plVar3 = alStack_118;
  func_0x00010a09ab04();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return plVar3;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  plVar4 = (long *)*plVar3;
  *plVar3 = (long)plVar6;
  if (plVar4 != (long *)0x0) {
    FUN_10a0a0170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return plVar4;
  }
  return (long *)0x0;
}



/* Entry: 10a2353d4; end: 10a2353f3;  */

void FUN_10a2353d4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb4548;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2353f4; end: 10a235403;  */

void FUN_10a2353f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a2353fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 8))();
  return;
}



/* Entry: 10a235404; end: 10a23545b;  */

long FUN_10a235404(long param_1)

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



/* Entry: 10a23545c; end: 10a2354a3;  */

void FUN_10a23545c(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x28;
  __Znwm();
  FUN_10a2354a4();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a2354a4; end: 10a2354fb;  */

undefined8 * FUN_10a2354a4(undefined8 *param_1)

{
  undefined1 uStack_21;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110bb5728;
  FUN_10a50848c(param_1 + 3,&uStack_21);
  return param_1;
}



/* Entry: 10a2354fc; end: 10a23550b;  */

void FUN_10a2354fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb5728;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a23550c; end: 10a23552b;  */

void FUN_10a23550c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb5728;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a23552c; end: 10a235537;  */

long FUN_10a23552c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x20);
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
  return param_1 + 0x18;
}



/* Entry: 10a235538; end: 10a23563f;  */

long FUN_10a235538(long param_1)

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



/* Entry: 10a235640; end: 10a2356ab;  */

undefined8 * FUN_10a235640(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110bb5678;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  param_1[1] = puVar1;
  return param_1;
}



/* Entry: 10a2356ac; end: 10a2356af;  */

void FUN_10a2356ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a2356b0; end: 10a2356c3;  */

void FUN_10a2356b0(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2356c4; end: 10a2356cb;  */

void FUN_10a2356c4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    FUN_10a235404(lVar1 + 0x58);
    func_0x00010a2355e8(lVar1 + 0x48);
    func_0x00010a23495c(lVar1 + 0x30);
    func_0x00010a235590(lVar1 + 0x20);
    func_0x00010a235538(lVar1 + 0x10);
    func_0x00010a06e274(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a2356cc; end: 10a235703;  */

undefined8 FUN_10a2356cc(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bb56c8);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a235704; end: 10a235707;  */

void FUN_10a235704(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a235708; end: 10a2357b3;  */

void FUN_10a235708(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10a235404(param_2 + 0x58);
    func_0x00010a2355e8(param_2 + 0x48);
    func_0x00010a23495c(param_2 + 0x30);
    func_0x00010a235590(param_2 + 0x20);
    func_0x00010a235538(param_2 + 0x10);
    func_0x00010a06e274(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a2357b4; end: 10a2357c3;  */

void FUN_10a2357b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb4598;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a2357c4; end: 10a2357e3;  */

void FUN_10a2357c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb4598;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2357e4; end: 10a235803;  */

void FUN_10a2357e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a2357ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a235804; end: 10a235823;  */

void FUN_10a235804(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb45e8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a235824; end: 10a235843;  */

void FUN_10a235824(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a23582c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a235844; end: 10a235863;  */

void FUN_10a235844(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb4638;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


