/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00353c64; end: 00353c6f;  */

long * FUN_00353c64(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (long *)(param_1 + 0x18);
  puVar2 = (undefined8 *)*plVar1;
  *plVar1 = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)();
  }
  return plVar1;
}



/* Entry: 00353c70; end: 00353d5f;  */

void FUN_00353c70(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_00353c70(param_1,*param_2);
    FUN_00353c70(param_1,param_2[1]);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(param_2);
    return;
  }
  return;
}



/* Entry: 00353d60; end: 00353d73;  */

void FUN_00353d60(undefined8 param_1,char *param_2,char *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 *extraout_x8;
  
  pcVar1 = "vector";
  FUN_0033b32c();
  if ((ulong)param_2 >> 0x3d == 0) {
    __Znwm((long)param_2 << 3);
    return;
  }
  FUN_00349558();
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  if (pcVar1 != param_2) {
    pcVar2 = "";
    uVar3 = 0;
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (extraout_x8,pcVar2,uVar3);
      FUN_00353e4c(param_5,extraout_x8,pcVar1);
      pcVar1 = pcVar1 + 8;
      pcVar2 = param_3;
      uVar3 = param_4;
    } while (pcVar1 != param_2);
  }
  return;
}



/* Entry: 00353d74; end: 00353da7;  */

void FUN_00353d74(ulong param_1,ulong param_2,char *param_3,undefined8 param_4,undefined8 param_5)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 *extraout_x8;
  
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  FUN_00349558();
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  if (param_1 != param_2) {
    pcVar1 = "";
    uVar2 = 0;
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (extraout_x8,pcVar1,uVar2);
      FUN_00353e4c(param_5,extraout_x8,param_1);
      param_1 = param_1 + 8;
      pcVar1 = param_3;
      uVar2 = param_4;
    } while (param_1 != param_2);
  }
  return;
}



/* Entry: 00353da8; end: 00353e4b;  */

void FUN_00353da8(undefined8 *param_1,long param_2,long param_3,char *param_4,undefined8 param_5,
                 undefined8 param_6)

{
  char *pcVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != param_3) {
    pcVar1 = "";
    uVar2 = 0;
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,pcVar1,uVar2);
      FUN_00353e4c(param_6,param_1,param_2);
      param_2 = param_2 + 8;
      pcVar1 = param_4;
      uVar2 = param_5;
    } while (param_2 != param_3);
  }
  return;
}



/* Entry: 00353e4c; end: 00353ec7;  */

undefined8 * FUN_00353e4c(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lStack_58;
  long lStack_50;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar2 = *param_3;
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar2;
    _strlen();
  }
  lStack_58 = lVar2;
  lStack_50 = lVar1;
  FUN_005760f0(param_2,&lStack_58);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return param_2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *param_2 = &PTR_FUN_009dbfe8;
  if ((param_2[1] & 1) != 0) {
    FUN_0055293c();
  }
  return param_2;
}



/* Entry: 00353ec8; end: 00353f03;  */

undefined8 * FUN_00353ec8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009dbfe8;
  if ((param_1[1] & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 00353f04; end: 00353f3f;  */

void FUN_00353f04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009dbfe8;
  if ((param_1[1] & 1) != 0) {
    FUN_0055293c();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_1);
  return;
}



/* Entry: 00353f40; end: 00353f9f;  */

void FUN_00353f40(ulong *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  int *piVar4;
  
  uVar3 = *(ulong *)(param_2 + 8);
  if ((uVar3 & 1) == 0) {
    *param_1 = uVar3;
    *(undefined4 *)(param_1 + 2) = 2;
  }
  else {
    piVar4 = (int *)(uVar3 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *param_1 = uVar3;
    *(undefined4 *)(param_1 + 2) = 2;
    FUN_0055293c();
  }
  return;
}



/* Entry: 00353fa0; end: 00353fe7;  */

ulong * FUN_00353fa0(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong **ppuVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puStack_50;
  ulong uStack_48;
  
  puVar3 = param_1 + 1;
  if ((*param_1 & 1) == 0) {
    uVar7 = 1;
  }
  else {
    puVar3 = (ulong *)param_1[1];
    uVar7 = param_1[2];
  }
  uVar5 = *param_1 >> 1;
  if (uVar5 == uVar7) {
    ppuVar2 = &puStack_50;
    puVar3 = param_1 + 1;
    uVar7 = *param_1;
    if ((uVar7 & 1) == 0) {
      uVar5 = 2;
    }
    else {
      puVar3 = (ulong *)param_1[1];
      uVar5 = param_1[2] << 1;
    }
    puStack_50 = (ulong *)0x0;
    uStack_48 = 0;
    FUN_00353b70();
    uVar4 = uVar7 >> 1;
    puVar1 = (ulong *)(ppuVar2 + uVar4 * 4);
    uVar8 = *param_2;
    uVar10 = param_2[3];
    uVar9 = param_2[2];
    uStack_48 = uVar5;
    puVar1[1] = param_2[1];
    puStack_50 = (ulong *)ppuVar2;
    *puVar1 = uVar8;
    puVar1[3] = uVar10;
    puVar1[2] = uVar9;
    puVar6 = (ulong *)ppuVar2;
    if (1 < uVar7) {
      do {
        uVar7 = *puVar3;
        uVar9 = puVar3[3];
        uVar8 = puVar3[2];
        puVar6[1] = puVar3[1];
        *puVar6 = uVar7;
        puVar6[3] = uVar9;
        puVar6[2] = uVar8;
        uVar4 = uVar4 - 1;
        puVar6 = puVar6 + 4;
        puVar3 = puVar3 + 4;
      } while (uVar4 != 0);
    }
    uVar7 = *param_1;
    if ((uVar7 & 1) != 0) {
      __ZdlPv(param_1[1]);
      uVar7 = *param_1;
      ppuVar2 = (ulong **)puStack_50;
      uVar5 = uStack_48;
    }
    param_1[1] = (ulong)ppuVar2;
    param_1[2] = uVar5;
    *param_1 = (uVar7 | 1) + 2;
    return puVar1;
  }
  puVar3 = puVar3 + uVar5 * 4;
  uVar7 = *param_2;
  uVar4 = param_2[3];
  uVar5 = param_2[2];
  puVar3[1] = param_2[1];
  *puVar3 = uVar7;
  puVar3[3] = uVar4;
  puVar3[2] = uVar5;
  *param_1 = *param_1 + 2;
  return puVar3;
}



/* Entry: 00353fe8; end: 003540bb;  */

ulong * FUN_00353fe8(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong **ppuVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puStack_50;
  ulong uStack_48;
  
  ppuVar2 = &puStack_50;
  puVar6 = param_1 + 1;
  uVar7 = *param_1;
  if ((uVar7 & 1) == 0) {
    uVar3 = 2;
  }
  else {
    puVar6 = (ulong *)param_1[1];
    uVar3 = param_1[2] << 1;
  }
  puStack_50 = (ulong *)0x0;
  uStack_48 = 0;
  FUN_00353b70();
  uVar4 = uVar7 >> 1;
  puVar1 = (ulong *)(ppuVar2 + uVar4 * 4);
  uVar8 = *param_2;
  uVar10 = param_2[3];
  uVar9 = param_2[2];
  uStack_48 = uVar3;
  puVar1[1] = param_2[1];
  puStack_50 = (ulong *)ppuVar2;
  *puVar1 = uVar8;
  puVar1[3] = uVar10;
  puVar1[2] = uVar9;
  puVar5 = (ulong *)ppuVar2;
  if (1 < uVar7) {
    do {
      uVar7 = *puVar6;
      uVar9 = puVar6[3];
      uVar8 = puVar6[2];
      puVar5[1] = puVar6[1];
      *puVar5 = uVar7;
      puVar5[3] = uVar9;
      puVar5[2] = uVar8;
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + 4;
    } while (uVar4 != 0);
  }
  uVar7 = *param_1;
  if ((uVar7 & 1) != 0) {
    __ZdlPv(param_1[1]);
    uVar7 = *param_1;
    ppuVar2 = (ulong **)puStack_50;
    uVar3 = uStack_48;
  }
  param_1[1] = (ulong)ppuVar2;
  param_1[2] = uVar3;
  *param_1 = (uVar7 | 1) + 2;
  return puVar1;
}



/* Entry: 003540bc; end: 003540bf;  */

undefined8 * FUN_003540bc(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_009dc038;
  plVar3 = *(long **)(param_1[1] + 8);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    FUN_004005ec();
  }
  return param_1;
}



/* Entry: 003540c0; end: 003540d3;  */

void FUN_003540c0(void)

{
  FUN_003545a4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 003540d4; end: 00354443;  */

void FUN_003540d4(undefined8 *param_1,long ******param_2,long param_3,ulong param_4,
                 long ******param_5)

{
  long lVar1;
  long ******pppppplVar2;
  undefined8 uVar3;
  long *****ppppplVar4;
  ulong *puVar5;
  long ******pppppplVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uStack_130;
  ulong uStack_128;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  char cStack_109;
  char cStack_108;
  long ****apppplStack_100 [4];
  char *pcStack_e0;
  long *****ppppplStack_d8;
  char *pcStack_d0;
  undefined1 auStack_c8 [48];
  byte bStack_98;
  undefined7 uStack_97;
  long *****appppplStack_90 [4];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  pppppplVar6 = param_2 + 1;
  if ((*pppppplVar6)[0x2e] == (long ****)0x0) {
    *param_1 = 0;
  }
  else {
    uStack_120 = 0;
    cStack_108 = '\0';
    uVar9 = param_4;
    func_0x003a2dcc(param_4,"grpc.internal.health_check_service_name");
    uStack_128 = uVar9;
    if ((uVar9 != 0) &&
       (uVar9 = param_4, func_0x003a2e80(param_4,"grpc.inhibit_health_checking",0), (uVar9 & 1) == 0
       )) {
      FUN_003545f8(&uStack_120,&uStack_128);
    }
    ppppplStack_d8 = (long *****)0x8c0664;
    pcStack_e0 = "grpc.internal.health_check_service_name";
    pcStack_d0 = "grpc.internal.channelz_channel_node";
    FUN_0035472c(&bStack_98,&pcStack_e0,auStack_c8,apppplStack_100);
    FUN_00375ca4(apppplStack_100,(*pppppplVar6)[0x33]);
    FUN_00353aa0(&pcStack_e0,apppplStack_100,&pcStack_e0,&uStack_130);
    uVar9 = param_4;
    func_0x003a2dcc(param_4,"grpc.default_authority");
    puVar5 = *(ulong **)(param_3 + 0x88);
    if ((puVar5 != (ulong *)0x0) && (uVar8 = *puVar5, uVar8 != 0)) {
      lVar10 = 0;
      uVar11 = 0;
      do {
        uVar7 = puVar5[1];
        lVar1 = uVar7 + lVar10;
        uVar3 = *(undefined8 *)(lVar1 + 8);
        _strcmp(uVar3,"grpc.default_authority");
        if ((int)uVar3 == 0) {
          if (uVar9 == 0) {
            uVar9 = *(ulong *)(uVar7 + lVar10 + 0x10);
            goto LAB_00354210;
          }
        }
        else {
LAB_00354210:
          FUN_00354830(&pcStack_e0,lVar1);
          puVar5 = *(ulong **)(param_3 + 0x88);
          uVar8 = *puVar5;
        }
        uVar11 = uVar11 + 1;
        lVar10 = lVar10 + 0x20;
      } while (uVar11 < uVar8);
    }
    if (uVar9 == 0) {
      apppplStack_100[0] = (long ****)0x8bff82;
      FUN_0035494c(&bStack_98,apppplStack_100);
      ppppplVar4 = *pppppplVar6 + 8;
      if (*(char *)((long)*pppppplVar6 + 0x57) < '\0') {
        ppppplVar4 = (long *****)*ppppplVar4;
      }
      FUN_003a2ec4(apppplStack_100,"grpc.default_authority",ppppplVar4);
      FUN_00354a68(&pcStack_e0,apppplStack_100);
    }
    pppppplVar2 = appppplStack_90;
    if ((bStack_98 & 1) != 0) {
      pppppplVar2 = (long ******)appppplStack_90[0];
    }
    param_5 = &ppppplStack_d8;
    if (((ulong)pcStack_e0 & 1) != 0) {
      param_5 = (long ******)ppppplStack_d8;
    }
    FUN_003a24dc(param_4,pppppplVar2,CONCAT71(uStack_97,bStack_98) >> 1,param_5,
                 (ulong)pcStack_e0 >> 1);
    (*(code *)(*(*pppppplVar6)[2])[2])(apppplStack_100,(*pppppplVar6)[2],param_3,param_4);
    FUN_003a2a64(param_4);
    if ((long *****)apppplStack_100[0] == (long *****)0x0) {
      *param_1 = 0;
    }
    else {
      FUN_00372adc(apppplStack_100[0],*(undefined4 *)(*pppppplVar6 + 0x3a));
      FUN_00354638(&uStack_130,pppppplVar6,apppplStack_100,&uStack_120);
      *param_1 = uStack_130;
    }
    param_2 = (long ******)apppplStack_100;
    FUN_0035615c();
    if (((ulong)pcStack_e0 & 1) != 0) {
      param_2 = (long ******)ppppplStack_d8;
      __ZdlPv();
    }
    if ((bStack_98 & 1) != 0) {
      param_2 = (long ******)appppplStack_90[0];
      __ZdlPv();
    }
    if ((cStack_108 != '\0') && (cStack_109 < '\0')) {
      param_2 = (long ******)CONCAT71(uStack_11f,uStack_120);
      __ZdlPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if (((ulong)pcStack_e0 & 1) != 0) {
    __ZdlPv(ppppplStack_d8);
  }
  if ((bStack_98 & 1) != 0) {
    __ZdlPv(appppplStack_90[0]);
  }
  if ((cStack_108 != '\0') && (cStack_109 < '\0')) {
    __ZdlPv(CONCAT71(uStack_11f,uStack_120));
  }
  __Unwind_Resume();
  if ((param_2[1][0x2e] != (long ****)0x0) && (param_2[1][0x3b] == (long ****)0x0)) {
    ppppplVar4 = *param_5;
    *param_5 = (long *****)0x0;
    FUN_003453d8();
    if (ppppplVar4 != (long *****)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003544b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(*ppppplVar4)[1])();
      return;
    }
  }
  return;
}



/* Entry: 00354444; end: 003544d3;  */

void FUN_00354444(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  
  if ((*(long *)(*(long *)(param_1 + 8) + 0x170) != 0) &&
     (*(long *)(*(long *)(param_1 + 8) + 0x1d8) == 0)) {
    plVar1 = (long *)*param_4;
    *param_4 = 0;
    FUN_003453d8();
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003544b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 003544d4; end: 0035450f;  */

void FUN_003544d4(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(*(long *)(param_1 + 8) + 0x170);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003544e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))();
    return;
  }
  return;
}



/* Entry: 00354510; end: 003545a3;  */

undefined8 * FUN_00354510(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined4 uVar4;
  long lVar5;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((*(long *)(param_1[1] + 0x170) != 0) && (lVar5 = *(long *)(param_1[1] + 0x58), lVar5 != 0)) {
    uVar4 = 2;
    if (param_2 != 1) {
      uVar4 = 3;
    }
    if (param_2 == 0) {
      uVar4 = 1;
    }
    func_0x003ec288(auStack_48,param_3,param_4);
    param_1 = (undefined8 *)(lVar5 + 0x70);
    FUN_003a75b4(param_1,uVar4,auStack_48);
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  *param_1 = &PTR_FUN_009dc038;
  plVar3 = *(long **)(param_1[1] + 8);
  do {
    lVar5 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 + -1 == 0) {
    FUN_004005ec();
  }
  return param_1;
}



/* Entry: 003545a4; end: 003545f7;  */

undefined8 * FUN_003545a4(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_009dc038;
  plVar3 = *(long **)(param_1[1] + 8);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    FUN_004005ec();
  }
  return param_1;
}



/* Entry: 003545f8; end: 00354637;  */

long FUN_003545f8(long param_1,undefined8 *param_2)

{
  if (*(char *)(param_1 + 0x18) == '\0') {
    FUN_00353254(param_1,*param_2);
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc();
  }
  return param_1;
}



/* Entry: 00354638; end: 0035472b;  */

void FUN_00354638(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  char cStack_58;
  undefined8 uStack_48;
  
  uVar1 = 0x70;
  __Znwm();
  uVar2 = *param_2;
  uStack_48 = *param_3;
  *param_3 = 0;
  uStack_70 = uStack_70 & 0xffffffffffffff00;
  cStack_58 = (char)param_4[3] != '\0';
  if ((bool)cStack_58) {
    uStack_68 = param_4[1];
    uStack_70 = *param_4;
    uStack_60 = param_4[2];
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
  }
  FUN_00354b84(uVar1,uVar2,&uStack_48,&uStack_70);
  *param_1 = uVar1;
  if ((cStack_58 != '\0') && ((long)uStack_60 < 0)) {
    __ZdlPv(uStack_70);
  }
  FUN_0035615c(&uStack_48);
  return;
}



/* Entry: 0035472c; end: 00354777;  */

undefined8 * FUN_0035472c(undefined8 *param_1,long param_2,long param_3)

{
  *param_1 = 0;
  FUN_00354778(param_1,param_2,param_3 - param_2 >> 3);
  return param_1;
}



/* Entry: 00354778; end: 003547fb;  */

void FUN_00354778(ulong *param_1,ulong *param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = param_3;
  if (param_3 < 5) {
    if (param_3 == 0) goto LAB_003547e0;
    puVar1 = param_1 + 1;
  }
  else {
    uVar2 = param_3;
    if (param_3 < 9) {
      uVar2 = 8;
    }
    puVar1 = param_1;
    FUN_003547fc();
    param_1[1] = (ulong)puVar1;
    param_1[2] = uVar2;
    *param_1 = *param_1 | 1;
  }
  do {
    *puVar1 = *param_2;
    uVar3 = uVar3 - 1;
    puVar1 = puVar1 + 1;
    param_2 = param_2 + 1;
  } while (uVar3 != 0);
LAB_003547e0:
  *param_1 = *param_1 + param_3 * 2;
  return;
}



/* Entry: 003547fc; end: 0035482f;  */

undefined1  [16] FUN_003547fc(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong **ppuVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  ulong *puStack_70;
  ulong uStack_68;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm(lVar2);
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = lVar2;
    return auVar12;
  }
  FUN_00349558();
  puVar4 = param_1 + 1;
  if ((*param_1 & 1) == 0) {
    uVar8 = 2;
  }
  else {
    puVar4 = (ulong *)param_1[1];
    uVar8 = param_1[2];
  }
  uVar6 = *param_1 >> 1;
  if (uVar6 == uVar8) {
    ppuVar3 = &puStack_70;
    puVar4 = param_1 + 1;
    uVar8 = *param_1;
    if ((uVar8 & 1) == 0) {
      uVar6 = 4;
    }
    else {
      puVar4 = (ulong *)param_1[1];
      uVar6 = param_1[2] << 1;
    }
    puStack_70 = (ulong *)0x0;
    uStack_68 = 0;
    FUN_00353b70();
    uVar5 = uVar8 >> 1;
    puVar1 = (ulong *)(ppuVar3 + uVar5 * 4);
    uVar9 = *param_2;
    uVar11 = param_2[3];
    uVar10 = param_2[2];
    uStack_68 = uVar6;
    puVar1[1] = param_2[1];
    puStack_70 = (ulong *)ppuVar3;
    *puVar1 = uVar9;
    puVar1[3] = uVar11;
    puVar1[2] = uVar10;
    puVar7 = (ulong *)ppuVar3;
    if (1 < uVar8) {
      do {
        uVar8 = *puVar4;
        uVar10 = puVar4[3];
        uVar9 = puVar4[2];
        puVar7[1] = puVar4[1];
        *puVar7 = uVar8;
        puVar7[3] = uVar10;
        puVar7[2] = uVar9;
        uVar5 = uVar5 - 1;
        puVar7 = puVar7 + 4;
        puVar4 = puVar4 + 4;
      } while (uVar5 != 0);
    }
    uVar8 = *param_1;
    if ((uVar8 & 1) != 0) {
      __ZdlPv(param_1[1]);
      uVar8 = *param_1;
      ppuVar3 = (ulong **)puStack_70;
      uVar6 = uStack_68;
    }
    param_1[1] = (ulong)ppuVar3;
    param_1[2] = uVar6;
    *param_1 = (uVar8 | 1) + 2;
    auVar14._8_8_ = uVar6;
    auVar14._0_8_ = puVar1;
    return auVar14;
  }
  puVar4 = puVar4 + uVar6 * 4;
  uVar8 = *param_2;
  uVar5 = param_2[3];
  uVar6 = param_2[2];
  puVar4[1] = param_2[1];
  *puVar4 = uVar8;
  puVar4[3] = uVar5;
  puVar4[2] = uVar6;
  *param_1 = *param_1 + 2;
  auVar13._8_8_ = param_2;
  auVar13._0_8_ = puVar4;
  return auVar13;
}



/* Entry: 00354830; end: 00354877;  */

ulong * FUN_00354830(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong **ppuVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puStack_50;
  ulong uStack_48;
  
  puVar3 = param_1 + 1;
  if ((*param_1 & 1) == 0) {
    uVar7 = 2;
  }
  else {
    puVar3 = (ulong *)param_1[1];
    uVar7 = param_1[2];
  }
  uVar5 = *param_1 >> 1;
  if (uVar5 == uVar7) {
    ppuVar2 = &puStack_50;
    puVar3 = param_1 + 1;
    uVar7 = *param_1;
    if ((uVar7 & 1) == 0) {
      uVar5 = 4;
    }
    else {
      puVar3 = (ulong *)param_1[1];
      uVar5 = param_1[2] << 1;
    }
    puStack_50 = (ulong *)0x0;
    uStack_48 = 0;
    FUN_00353b70();
    uVar4 = uVar7 >> 1;
    puVar1 = (ulong *)(ppuVar2 + uVar4 * 4);
    uVar8 = *param_2;
    uVar10 = param_2[3];
    uVar9 = param_2[2];
    uStack_48 = uVar5;
    puVar1[1] = param_2[1];
    puStack_50 = (ulong *)ppuVar2;
    *puVar1 = uVar8;
    puVar1[3] = uVar10;
    puVar1[2] = uVar9;
    puVar6 = (ulong *)ppuVar2;
    if (1 < uVar7) {
      do {
        uVar7 = *puVar3;
        uVar9 = puVar3[3];
        uVar8 = puVar3[2];
        puVar6[1] = puVar3[1];
        *puVar6 = uVar7;
        puVar6[3] = uVar9;
        puVar6[2] = uVar8;
        uVar4 = uVar4 - 1;
        puVar6 = puVar6 + 4;
        puVar3 = puVar3 + 4;
      } while (uVar4 != 0);
    }
    uVar7 = *param_1;
    if ((uVar7 & 1) != 0) {
      __ZdlPv(param_1[1]);
      uVar7 = *param_1;
      ppuVar2 = (ulong **)puStack_50;
      uVar5 = uStack_48;
    }
    param_1[1] = (ulong)ppuVar2;
    param_1[2] = uVar5;
    *param_1 = (uVar7 | 1) + 2;
    return puVar1;
  }
  puVar3 = puVar3 + uVar5 * 4;
  uVar7 = *param_2;
  uVar4 = param_2[3];
  uVar5 = param_2[2];
  puVar3[1] = param_2[1];
  *puVar3 = uVar7;
  puVar3[3] = uVar4;
  puVar3[2] = uVar5;
  *param_1 = *param_1 + 2;
  return puVar3;
}



/* Entry: 00354878; end: 0035494b;  */

ulong * FUN_00354878(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong **ppuVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puStack_50;
  ulong uStack_48;
  
  ppuVar2 = &puStack_50;
  puVar6 = param_1 + 1;
  uVar7 = *param_1;
  if ((uVar7 & 1) == 0) {
    uVar3 = 4;
  }
  else {
    puVar6 = (ulong *)param_1[1];
    uVar3 = param_1[2] << 1;
  }
  puStack_50 = (ulong *)0x0;
  uStack_48 = 0;
  FUN_00353b70();
  uVar4 = uVar7 >> 1;
  puVar1 = (ulong *)(ppuVar2 + uVar4 * 4);
  uVar8 = *param_2;
  uVar10 = param_2[3];
  uVar9 = param_2[2];
  uStack_48 = uVar3;
  puVar1[1] = param_2[1];
  puStack_50 = (ulong *)ppuVar2;
  *puVar1 = uVar8;
  puVar1[3] = uVar10;
  puVar1[2] = uVar9;
  puVar5 = (ulong *)ppuVar2;
  if (1 < uVar7) {
    do {
      uVar7 = *puVar6;
      uVar9 = puVar6[3];
      uVar8 = puVar6[2];
      puVar5[1] = puVar6[1];
      *puVar5 = uVar7;
      puVar5[3] = uVar9;
      puVar5[2] = uVar8;
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + 4;
    } while (uVar4 != 0);
  }
  uVar7 = *param_1;
  if ((uVar7 & 1) != 0) {
    __ZdlPv(param_1[1]);
    uVar7 = *param_1;
    ppuVar2 = (ulong **)puStack_50;
    uVar3 = uStack_48;
  }
  param_1[1] = (ulong)ppuVar2;
  param_1[2] = uVar3;
  *param_1 = (uVar7 | 1) + 2;
  return puVar1;
}



/* Entry: 0035494c; end: 0035498f;  */

ulong * FUN_0035494c(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong **ppuVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puStack_50;
  ulong uStack_48;
  
  puVar3 = param_1 + 1;
  uVar5 = *param_1;
  if ((uVar5 & 1) == 0) {
    uVar7 = 4;
  }
  else {
    puVar3 = (ulong *)param_1[1];
    uVar7 = param_1[2];
  }
  if (uVar5 >> 1 == uVar7) {
    ppuVar2 = &puStack_50;
    puVar3 = param_1 + 1;
    uVar5 = *param_1;
    if ((uVar5 & 1) == 0) {
      uVar7 = 8;
    }
    else {
      puVar3 = (ulong *)param_1[1];
      uVar7 = param_1[2] << 1;
    }
    puStack_50 = (ulong *)0x0;
    uStack_48 = 0;
    FUN_003547fc();
    uVar4 = uVar5 >> 1;
    puVar1 = (ulong *)(ppuVar2 + uVar4);
    puStack_50 = (ulong *)ppuVar2;
    uStack_48 = uVar7;
    *puVar1 = *param_2;
    puVar6 = puStack_50;
    if (1 < uVar5) {
      do {
        *puVar6 = *puVar3;
        uVar4 = uVar4 - 1;
        puVar6 = puVar6 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar4 != 0);
    }
    uVar5 = *param_1;
    if ((uVar5 & 1) != 0) {
      __ZdlPv(param_1[1]);
      uVar5 = *param_1;
      uVar7 = uStack_48;
    }
    param_1[1] = (ulong)puStack_50;
    param_1[2] = uVar7;
    *param_1 = (uVar5 | 1) + 2;
    return puVar1;
  }
  puVar3[uVar5 >> 1] = *param_2;
  *param_1 = uVar5 + 2;
  return puVar3 + (uVar5 >> 1);
}



/* Entry: 00354990; end: 00354a67;  */

ulong * FUN_00354990(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong **ppuVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puStack_50;
  ulong uStack_48;
  
  ppuVar2 = &puStack_50;
  puVar6 = param_1 + 1;
  uVar7 = *param_1;
  if ((uVar7 & 1) == 0) {
    uVar3 = 8;
  }
  else {
    puVar6 = (ulong *)param_1[1];
    uVar3 = param_1[2] << 1;
  }
  puStack_50 = (ulong *)0x0;
  uStack_48 = 0;
  FUN_003547fc();
  uVar4 = uVar7 >> 1;
  puVar1 = (ulong *)(ppuVar2 + uVar4);
  puStack_50 = (ulong *)ppuVar2;
  uStack_48 = uVar3;
  *puVar1 = *param_2;
  puVar5 = puStack_50;
  if (1 < uVar7) {
    do {
      *puVar5 = *puVar6;
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar4 != 0);
  }
  uVar7 = *param_1;
  if ((uVar7 & 1) != 0) {
    __ZdlPv(param_1[1]);
    uVar7 = *param_1;
    uVar3 = uStack_48;
  }
  param_1[1] = (ulong)puStack_50;
  param_1[2] = uVar3;
  *param_1 = (uVar7 | 1) + 2;
  return puVar1;
}



/* Entry: 00354a68; end: 00354aaf;  */

ulong * FUN_00354a68(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong **ppuVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puStack_50;
  ulong uStack_48;
  
  puVar3 = param_1 + 1;
  if ((*param_1 & 1) == 0) {
    uVar7 = 2;
  }
  else {
    puVar3 = (ulong *)param_1[1];
    uVar7 = param_1[2];
  }
  uVar5 = *param_1 >> 1;
  if (uVar5 == uVar7) {
    ppuVar2 = &puStack_50;
    puVar3 = param_1 + 1;
    uVar7 = *param_1;
    if ((uVar7 & 1) == 0) {
      uVar5 = 4;
    }
    else {
      puVar3 = (ulong *)param_1[1];
      uVar5 = param_1[2] << 1;
    }
    puStack_50 = (ulong *)0x0;
    uStack_48 = 0;
    FUN_00353b70();
    uVar4 = uVar7 >> 1;
    puVar1 = (ulong *)(ppuVar2 + uVar4 * 4);
    uVar8 = *param_2;
    uVar10 = param_2[3];
    uVar9 = param_2[2];
    uStack_48 = uVar5;
    puVar1[1] = param_2[1];
    puStack_50 = (ulong *)ppuVar2;
    *puVar1 = uVar8;
    puVar1[3] = uVar10;
    puVar1[2] = uVar9;
    puVar6 = (ulong *)ppuVar2;
    if (1 < uVar7) {
      do {
        uVar7 = *puVar3;
        uVar9 = puVar3[3];
        uVar8 = puVar3[2];
        puVar6[1] = puVar3[1];
        *puVar6 = uVar7;
        puVar6[3] = uVar9;
        puVar6[2] = uVar8;
        uVar4 = uVar4 - 1;
        puVar6 = puVar6 + 4;
        puVar3 = puVar3 + 4;
      } while (uVar4 != 0);
    }
    uVar7 = *param_1;
    if ((uVar7 & 1) != 0) {
      __ZdlPv(param_1[1]);
      uVar7 = *param_1;
      ppuVar2 = (ulong **)puStack_50;
      uVar5 = uStack_48;
    }
    param_1[1] = (ulong)ppuVar2;
    param_1[2] = uVar5;
    *param_1 = (uVar7 | 1) + 2;
    return puVar1;
  }
  puVar3 = puVar3 + uVar5 * 4;
  uVar7 = *param_2;
  uVar4 = param_2[3];
  uVar5 = param_2[2];
  puVar3[1] = param_2[1];
  *puVar3 = uVar7;
  puVar3[3] = uVar4;
  puVar3[2] = uVar5;
  *param_1 = *param_1 + 2;
  return puVar3;
}



/* Entry: 00354ab0; end: 00354b83;  */

ulong * FUN_00354ab0(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong **ppuVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puStack_50;
  ulong uStack_48;
  
  ppuVar2 = &puStack_50;
  puVar6 = param_1 + 1;
  uVar7 = *param_1;
  if ((uVar7 & 1) == 0) {
    uVar3 = 4;
  }
  else {
    puVar6 = (ulong *)param_1[1];
    uVar3 = param_1[2] << 1;
  }
  puStack_50 = (ulong *)0x0;
  uStack_48 = 0;
  FUN_00353b70();
  uVar4 = uVar7 >> 1;
  puVar1 = (ulong *)(ppuVar2 + uVar4 * 4);
  uVar8 = *param_2;
  uVar10 = param_2[3];
  uVar9 = param_2[2];
  uStack_48 = uVar3;
  puVar1[1] = param_2[1];
  puStack_50 = (ulong *)ppuVar2;
  *puVar1 = uVar8;
  puVar1[3] = uVar10;
  puVar1[2] = uVar9;
  puVar5 = (ulong *)ppuVar2;
  if (1 < uVar7) {
    do {
      uVar7 = *puVar6;
      uVar9 = puVar6[3];
      uVar8 = puVar6[2];
      puVar5[1] = puVar6[1];
      *puVar5 = uVar7;
      puVar5[3] = uVar9;
      puVar5[2] = uVar8;
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + 4;
    } while (uVar4 != 0);
  }
  uVar7 = *param_1;
  if ((uVar7 & 1) != 0) {
    __ZdlPv(param_1[1]);
    uVar7 = *param_1;
    ppuVar2 = (ulong **)puStack_50;
    uVar3 = uStack_48;
  }
  param_1[1] = (ulong)ppuVar2;
  param_1[2] = uVar3;
  *param_1 = (uVar7 | 1) + 2;
  return puVar1;
}



/* Entry: 00354b84; end: 00354d4f;  */

undefined8 * FUN_00354b84(undefined8 *param_1,long param_2,ulong *param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uStack_4c;
  undefined8 *puStack_48;
  
  *param_1 = &PTR_FUN_009dc0c0;
  param_1[1] = 1;
  param_1[2] = param_2;
  puVar8 = param_1 + 3;
  *puVar8 = 0;
  *puVar8 = *param_3;
  *param_3 = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  if (*(char *)(param_4 + 3) != '\0') {
    uVar10 = param_4[1];
    uVar9 = *param_4;
    param_1[6] = param_4[2];
    param_1[5] = uVar10;
    param_1[4] = uVar9;
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    *(undefined1 *)(param_1 + 7) = 1;
    param_2 = param_1[2];
  }
  param_1[9] = 0;
  param_1[8] = param_1 + 9;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  plVar6 = *(long **)(param_2 + 8);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = *plVar6 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  lVar7 = param_1[2];
  if (*(long *)(lVar7 + 0x58) == 0) goto LAB_00354cd0;
  uVar4 = *puVar8;
  FUN_00372b94();
  lVar7 = param_1[2];
  if (uVar4 == 0) goto LAB_00354cd0;
  plVar6 = *(long **)(lVar7 + 0x1a8);
  if (plVar6 == (long *)0x0) {
LAB_00354c94:
    FUN_003a973c(*(undefined8 *)(lVar7 + 0x58),*(undefined8 *)(uVar4 + 0x18));
    puStack_48 = (undefined8 *)param_1[3];
    plVar5 = (long *)(param_1[2] + 0x1a0);
    uStack_4c = 0;
    FUN_003550e4(plVar5,&puStack_48,&puStack_48,&uStack_4c);
    lVar7 = param_1[2];
  }
  else {
    plVar5 = (long *)(lVar7 + 0x1a8);
    do {
      plVar3 = plVar6 + 1;
      if (*puVar8 <= (ulong)plVar6[4]) {
        plVar5 = plVar6;
        plVar3 = plVar6;
      }
      plVar6 = (long *)*plVar3;
    } while (plVar6 != (long *)0x0);
    if ((plVar5 == (long *)(lVar7 + 0x1a8)) || (*puVar8 < (ulong)plVar5[4])) goto LAB_00354c94;
  }
  *(int *)(plVar5 + 5) = (int)plVar5[5] + 1;
LAB_00354cd0:
  puStack_48 = param_1;
  FUN_003551fc(lVar7 + 0x1b8,&puStack_48,&puStack_48);
  return param_1;
}



/* Entry: 00354d50; end: 00354d53;  */

undefined8 * FUN_00354d50(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_009dc0c0;
  puStack_28 = param_1;
  FUN_00355538(param_1[2] + 0x1b8,&puStack_28);
  lVar7 = param_1[2];
  if (*(long *)(lVar7 + 0x58) != 0) {
    lVar6 = param_1[3];
    FUN_00372b94();
    lVar7 = param_1[2];
    if (lVar6 != 0) {
      plVar8 = *(long **)(lVar7 + 0x1a8);
      if (plVar8 != (long *)0x0) {
        plVar9 = (long *)(lVar7 + 0x1a8);
        do {
          plVar4 = plVar8 + 1;
          if ((ulong)param_1[3] <= (ulong)plVar8[4]) {
            plVar9 = plVar8;
            plVar4 = plVar8;
          }
          plVar8 = (long *)*plVar4;
        } while (plVar8 != (long *)0x0);
        if ((plVar9 != (long *)(lVar7 + 0x1a8)) && ((ulong)plVar9[4] <= (ulong)param_1[3])) {
          iVar3 = (int)plVar9[5] + -1;
          *(int *)(plVar9 + 5) = iVar3;
          if (iVar3 == 0) {
            FUN_003a97a4(*(undefined8 *)(lVar7 + 0x58),*(undefined8 *)(lVar6 + 0x18));
            func_0x00355620(param_1[2] + 0x1a0,plVar9);
            __ZdlPv(plVar9);
            lVar7 = param_1[2];
          }
          goto LAB_003554c4;
        }
      }
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                   ,0x1f1,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x355488);
      (*pcVar5)();
    }
  }
LAB_003554c4:
  plVar8 = *(long **)(lVar7 + 8);
  do {
    lVar7 = *plVar8;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar2) {
      *plVar8 = lVar7 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar7 + -1 == 0) {
    FUN_004005ec();
  }
  puStack_28 = param_1 + 0xb;
  FUN_00355308(&puStack_28);
  FUN_00355384(param_1 + 8,param_1[9]);
  if ((*(char *)(param_1 + 7) != '\0') && (*(char *)((long)param_1 + 0x37) < '\0')) {
    __ZdlPv(param_1[4]);
  }
  FUN_0035615c(param_1 + 3);
  return param_1;
}



/* Entry: 00354d54; end: 00354d67;  */

void FUN_00354d54(void)

{
  FUN_003553c4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00354d68; end: 00354efb;  */

void FUN_00354d68(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  dword *pdVar4;
  dword *pdVar5;
  long lVar6;
  dword *pdStack_60;
  long lStack_58;
  undefined1 uStack_49;
  long *plStack_48;
  
  pdVar4 = (dword *)(param_1 + 0x40);
  lStack_58 = *param_2;
  plStack_48 = &lStack_58;
  FUN_00355690(pdVar4,&lStack_58,&UNK_008000a0,&plStack_48,&uStack_49);
  if (*(long *)(pdVar4 + 10) == 0) {
    pdVar5 = &section_00000068.offset;
    __Znwm();
    lVar6 = *param_2;
    *param_2 = 0;
    plVar1 = (long *)(param_1 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(undefined ***)pdVar5 = &PTR_FUN_009dc1d0;
    *(undefined8 *)(pdVar5 + 2) = 1;
    FUN_00339d50(pdVar5 + 4);
    *(undefined8 *)(pdVar5 + 0x1a) = 0;
    *(undefined8 *)(pdVar5 + 0x18) = 0;
    *(undefined8 *)(pdVar5 + 0x1e) = 0;
    *(undefined8 *)(pdVar5 + 0x1c) = 0;
    *(undefined8 *)(pdVar5 + 0x16) = 0;
    *(undefined8 *)(pdVar5 + 0x14) = 0;
    *(undefined ***)pdVar5 = &PTR_FUN_009dc158;
    *(long *)(pdVar5 + 0x20) = lVar6;
    *(long *)(pdVar5 + 0x22) = param_1;
    *(undefined8 *)(pdVar5 + 0x24) = 0;
    *(dword **)(pdVar4 + 10) = pdVar5;
    pdStack_60 = pdVar5;
    FUN_00372b9c(*(undefined8 *)(param_1 + 0x18),param_1 + 0x20,&pdStack_60);
    if (pdStack_60 == (dword *)0x0) {
      return;
    }
    pdVar4 = pdStack_60 + 2;
    do {
      lVar6 = *(long *)pdVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pdVar4,0x10);
      if (bVar3) {
        *(long *)pdVar4 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    pdVar4 = pdStack_60;
    if (lVar6 + -1 != 0) {
      return;
    }
  }
  else {
    FUN_007718cc();
  }
  (**(code **)(*(long *)pdVar4 + 8))();
  return;
}



/* Entry: 00354efc; end: 00354f7f;  */

void FUN_00354efc(long param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long *unaff_x19;
  long *plVar3;
  
  plVar1 = (long *)(param_1 + 0x48);
  plVar2 = (long *)*plVar1;
  plVar3 = plVar1;
  if (plVar2 != (long *)0x0) {
    do {
      unaff_x19 = plVar3;
      plVar3 = plVar2 + 1;
      if (param_2 <= (ulong)plVar2[4]) {
        unaff_x19 = plVar2;
        plVar3 = plVar2;
      }
      plVar2 = (long *)*plVar3;
      plVar3 = unaff_x19;
    } while (plVar2 != (long *)0x0);
    if ((unaff_x19 != plVar1) && ((ulong)unaff_x19[4] <= param_2)) goto LAB_00354f4c;
  }
  func_0x00771900();
LAB_00354f4c:
  FUN_00372e08(*(undefined8 *)(param_1 + 0x18),param_1 + 0x20,unaff_x19[5]);
  FUN_00356044(param_1 + 0x40,unaff_x19);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(unaff_x19);
  return;
}



/* Entry: 00354f80; end: 00354f8f;  */

void FUN_00354f80(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00339d8c(lVar1 + 400);
  if (*(int *)(lVar1 + 0x1d4) == 0) {
    FUN_00372f14(lVar1);
  }
  func_0x00339da8(lVar1 + 400);
  return;
}



/* Entry: 00354f90; end: 003550d7;  */

void FUN_00354f90(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  
  plVar8 = (long *)*param_2;
  *param_2 = 0;
  (**(code **)(*plVar8 + 0x10))(plVar8,*(undefined8 *)(param_1 + 0x18));
  puVar4 = (undefined8 *)(param_1 + 0x68);
  puVar10 = *(undefined8 **)(param_1 + 0x60);
  if (puVar10 < (undefined8 *)*puVar4) {
    puVar12 = puVar10 + 1;
    *puVar10 = plVar8;
  }
  else {
    plVar9 = (long *)(param_1 + 0x58);
    lVar11 = (long)puVar10 - *plVar9 >> 3;
    uVar1 = lVar11 + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_003560b4(plVar9);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x3550bc);
      (*pcVar3)();
    }
    uVar5 = (long)*puVar4 - *plVar9;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    puStack_38 = puVar4;
    if (uVar6 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      FUN_003560c8();
    }
    puVar10 = puVar4 + lVar11;
    puVar12 = puVar10 + 1;
    *puVar10 = plVar8;
    puVar2 = *(undefined8 **)(param_1 + 0x58);
    puStack_58 = *(undefined8 **)(param_1 + 0x60);
    puStack_48 = puStack_58;
    if (puStack_58 != puVar2) {
      do {
        puStack_58 = puStack_58 + -1;
        uVar7 = *puStack_58;
        *puStack_58 = 0;
        puVar10 = puVar10 + -1;
        *puVar10 = uVar7;
      } while (puStack_58 != puVar2);
      puStack_58 = (undefined8 *)*plVar9;
      puStack_48 = *(undefined8 **)(param_1 + 0x60);
    }
    *(undefined8 **)(param_1 + 0x58) = puVar10;
    *(undefined8 **)(param_1 + 0x60) = puVar12;
    uStack_40 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 **)(param_1 + 0x68) = puVar4 + uVar6;
    puStack_50 = puStack_58;
    func_0x003560fc(&puStack_58);
  }
  *(undefined8 **)(param_1 + 0x60) = puVar12;
  return;
}



/* Entry: 003550d8; end: 003550e3;  */

undefined8 FUN_003550d8(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x130);
}



/* Entry: 003550e4; end: 003551a7;  */

undefined1  [16] FUN_003550e4(long param_1,ulong *param_2,qword *param_3,dword *param_4)

{
  qword *pqVar1;
  undefined8 uVar2;
  qword *pqVar3;
  qword *pqVar4;
  undefined1 auVar5 [16];
  
  pqVar3 = (qword *)(param_1 + 8);
  pqVar4 = pqVar3;
  if ((qword *)*pqVar3 != (qword *)0x0) {
    pqVar1 = (qword *)*pqVar3;
    do {
      while (pqVar3 = pqVar1, pqVar3[4] <= *param_2) {
        if (*param_2 <= pqVar3[4]) {
          uVar2 = 0;
          goto LAB_00355190;
        }
        pqVar1 = (qword *)pqVar3[1];
        if ((qword *)pqVar3[1] == (qword *)0x0) {
          pqVar4 = pqVar3 + 1;
          goto LAB_00355150;
        }
      }
      pqVar1 = (qword *)*pqVar3;
      pqVar4 = pqVar3;
    } while ((qword *)*pqVar3 != (qword *)0x0);
  }
LAB_00355150:
  pqVar1 = (qword *)(segment_command_00000020.segname + 8);
  __Znwm();
  pqVar1[4] = *param_3;
  *(dword *)(pqVar1 + 5) = *param_4;
  FUN_003551a8(param_1,pqVar3,pqVar4,pqVar1);
  uVar2 = 1;
  pqVar3 = pqVar1;
LAB_00355190:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = pqVar3;
  return auVar5;
}



/* Entry: 003551a8; end: 003551fb;  */

void FUN_003551a8(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_00340874(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 003551fc; end: 003552b3;  */

undefined1  [16] FUN_003551fc(long param_1,ulong *param_2,qword *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 auVar5 [16];
  
  pcVar3 = (char *)(param_1 + 8);
  pcVar4 = pcVar3;
  if (*(char **)pcVar3 != (char *)0x0) {
    pcVar1 = *(char **)pcVar3;
    do {
      while (pcVar3 = pcVar1, *(ulong *)(pcVar3 + 0x20) <= *param_2) {
        if (*param_2 <= *(ulong *)(pcVar3 + 0x20)) {
          uVar2 = 0;
          goto LAB_0035529c;
        }
        pcVar1 = *(char **)(pcVar3 + 8);
        if (*(char **)(pcVar3 + 8) == (char *)0x0) {
          pcVar4 = pcVar3 + 8;
          goto LAB_00355264;
        }
      }
      pcVar1 = *(char **)pcVar3;
      pcVar4 = pcVar3;
    } while (*(char **)pcVar3 != (char *)0x0);
  }
LAB_00355264:
  pcVar1 = segment_command_00000020.segname;
  __Znwm();
  *(qword *)(pcVar1 + 0x20) = *param_3;
  FUN_003552b4(param_1,pcVar3,pcVar4,pcVar1);
  uVar2 = 1;
  pcVar3 = pcVar1;
LAB_0035529c:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = pcVar3;
  return auVar5;
}



/* Entry: 003552b4; end: 00355307;  */

void FUN_003552b4(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_00340874(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 00355308; end: 00355383;  */

void FUN_00355308(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  
  puVar2 = (undefined8 *)*param_1;
  plVar3 = (long *)*puVar2;
  if (plVar3 != (long *)0x0) {
    plVar4 = (long *)puVar2[1];
    plVar1 = plVar3;
    if (plVar4 != plVar3) {
      do {
        plVar4 = plVar4 + -1;
        plVar1 = (long *)*plVar4;
        *plVar4 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      } while (plVar4 != plVar3);
      plVar1 = *(long **)*param_1;
    }
    puVar2[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(plVar1);
    return;
  }
  return;
}



/* Entry: 00355384; end: 003553c3;  */

void FUN_00355384(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_00355384(param_1,*param_2);
    FUN_00355384(param_1,param_2[1]);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(param_2);
    return;
  }
  return;
}



/* Entry: 003553c4; end: 00355537;  */

undefined8 * FUN_003553c4(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_009dc0c0;
  puStack_28 = param_1;
  FUN_00355538(param_1[2] + 0x1b8,&puStack_28);
  lVar7 = param_1[2];
  if (*(long *)(lVar7 + 0x58) != 0) {
    lVar6 = param_1[3];
    FUN_00372b94();
    lVar7 = param_1[2];
    if (lVar6 != 0) {
      plVar8 = *(long **)(lVar7 + 0x1a8);
      if (plVar8 != (long *)0x0) {
        plVar9 = (long *)(lVar7 + 0x1a8);
        do {
          plVar4 = plVar8 + 1;
          if ((ulong)param_1[3] <= (ulong)plVar8[4]) {
            plVar9 = plVar8;
            plVar4 = plVar8;
          }
          plVar8 = (long *)*plVar4;
        } while (plVar8 != (long *)0x0);
        if ((plVar9 != (long *)(lVar7 + 0x1a8)) && ((ulong)plVar9[4] <= (ulong)param_1[3])) {
          iVar3 = (int)plVar9[5] + -1;
          *(int *)(plVar9 + 5) = iVar3;
          if (iVar3 == 0) {
            FUN_003a97a4(*(undefined8 *)(lVar7 + 0x58),*(undefined8 *)(lVar6 + 0x18));
            func_0x00355620(param_1[2] + 0x1a0,plVar9);
            __ZdlPv(plVar9);
            lVar7 = param_1[2];
          }
          goto LAB_003554c4;
        }
      }
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                   ,0x1f1,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x355488);
      (*pcVar5)();
    }
  }
LAB_003554c4:
  plVar8 = *(long **)(lVar7 + 8);
  do {
    lVar7 = *plVar8;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar2) {
      *plVar8 = lVar7 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar7 + -1 == 0) {
    FUN_004005ec();
  }
  puStack_28 = param_1 + 0xb;
  FUN_00355308(&puStack_28);
  FUN_00355384(param_1 + 8,param_1[9]);
  if ((*(char *)(param_1 + 7) != '\0') && (*(char *)((long)param_1 + 0x37) < '\0')) {
    __ZdlPv(param_1[4]);
  }
  FUN_0035615c(param_1 + 3);
  return param_1;
}



/* Entry: 00355538; end: 0035568f;  */

undefined8 FUN_00355538(long param_1,ulong *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar3 = (long *)*plVar2;
  if (plVar3 != (long *)0x0) {
    plVar4 = plVar2;
    do {
      plVar1 = plVar3 + 1;
      if (*param_2 <= (ulong)plVar3[4]) {
        plVar4 = plVar3;
        plVar1 = plVar3;
      }
      plVar3 = (long *)*plVar1;
    } while (plVar3 != (long *)0x0);
    if ((plVar4 != plVar2) && ((ulong)plVar4[4] <= *param_2)) {
      func_0x003555b0(param_1,plVar4);
      __ZdlPv(plVar4);
      return 1;
    }
  }
  return 0;
}



/* Entry: 00355690; end: 0035574b;  */

undefined1  [16] FUN_00355690(long param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  qword *pqVar1;
  undefined8 uVar2;
  qword *pqVar3;
  qword *pqVar4;
  undefined1 auVar5 [16];
  
  pqVar3 = (qword *)(param_1 + 8);
  pqVar4 = pqVar3;
  if ((qword *)*pqVar3 != (qword *)0x0) {
    pqVar1 = (qword *)*pqVar3;
    do {
      while (pqVar3 = pqVar1, pqVar3[4] <= *param_2) {
        if (*param_2 <= pqVar3[4]) {
          uVar2 = 0;
          goto LAB_00355734;
        }
        pqVar1 = (qword *)pqVar3[1];
        if ((qword *)pqVar3[1] == (qword *)0x0) {
          pqVar4 = pqVar3 + 1;
          goto LAB_003556f8;
        }
      }
      pqVar1 = (qword *)*pqVar3;
      pqVar4 = pqVar3;
    } while ((qword *)*pqVar3 != (qword *)0x0);
  }
LAB_003556f8:
  pqVar1 = (qword *)(segment_command_00000020.segname + 8);
  __Znwm();
  pqVar1[4] = *(qword *)*param_4;
  pqVar1[5] = 0;
  FUN_0035574c(param_1,pqVar3,pqVar4,pqVar1);
  uVar2 = 1;
  pqVar3 = pqVar1;
LAB_00355734:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = pqVar3;
  return auVar5;
}



/* Entry: 0035574c; end: 0035579f;  */

void FUN_0035574c(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_00340874(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 003557a0; end: 003557a3;  */

undefined8 * FUN_003557a0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  long *plVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  undefined1 uStack_49;
  undefined **ppuStack_48;
  long lStack_40;
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  *param_1 = &PTR_FUN_009dc158;
  lStack_40 = param_1[0x11];
  param_1[0x11] = 0;
  ppuStack_48 = &PTR_FUN_009dc200;
  pppuVar4 = &ppuStack_48;
  pppuStack_30 = &ppuStack_48;
  FUN_003d0dec(*(undefined8 *)(*(long *)(lStack_40 + 0x10) + 0x130),pppuVar4,&uStack_49);
  iVar7 = (int)pppuVar4;
  if (pppuStack_30 == &ppuStack_48) {
    lVar8 = 4;
    pppuVar4 = &ppuStack_48;
  }
  else {
    if (pppuStack_30 == (undefined ***)0x0) goto LAB_0035595c;
    lVar8 = 5;
    pppuVar4 = pppuStack_30;
  }
  (*(code *)(*pppuVar4)[lVar8])();
LAB_0035595c:
  plVar5 = (long *)param_1[0x11];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  plVar5 = (long *)param_1[0x10];
  param_1[0x10] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  puVar6 = param_1;
  FUN_003559e8();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  if (iVar7 == 0) {
    __Unwind_Resume();
  }
  func_0x0040cf10();
  *puVar6 = &PTR_FUN_009dc1d0;
  FUN_00355afc(puVar6 + 10);
  func_0x00339d70(puVar6 + 2);
  return puVar6;
}



/* Entry: 003557a4; end: 003557b7;  */

void FUN_003557a4(void)

{
  FUN_003558d0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 003557b8; end: 003558af;  */

void FUN_003557b8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined1 uStack_49;
  undefined **ppuStack_48;
  long lStack_40;
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar1 = (long *)(param_1 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  ppuStack_48 = &PTR_FUN_009dc280;
  lStack_40 = param_1;
  pppuStack_30 = &ppuStack_48;
  FUN_003d0dec(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x88) + 0x10) + 0x130),&ppuStack_48,
               &uStack_49);
  if (pppuStack_30 == &ppuStack_48) {
    lVar7 = 4;
    pppuVar4 = &ppuStack_48;
LAB_0035583c:
    (*(code *)(*pppuVar4)[lVar7])();
  }
  else {
    pppuVar4 = pppuStack_30;
    if (pppuStack_30 != (undefined ***)0x0) {
      lVar7 = 5;
      goto LAB_0035583c;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (pppuStack_30 == &ppuStack_48) {
    lVar7 = 4;
    pppuVar5 = &ppuStack_48;
  }
  else {
    if (pppuStack_30 == (undefined ***)0x0) goto LAB_003558a8;
    lVar7 = 5;
    pppuVar5 = pppuStack_30;
  }
  (*(code *)(*pppuVar5)[lVar7])();
LAB_003558a8:
  __Unwind_Resume();
  ppuVar6 = pppuVar4[0x10];
  if (ppuVar6 == (undefined **)0x0) {
    ppuVar6 = (undefined **)pppuVar4[0x12][0x10];
  }
                    /* WARNING: Could not recover jumptable at 0x003558cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*ppuVar6 + 0x18))();
  return;
}



/* Entry: 003558b0; end: 003558cf;  */

void FUN_003558b0(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x80);
  if (plVar1 == (long *)0x0) {
    plVar1 = *(long **)(*(long *)(param_1 + 0x90) + 0x80);
  }
                    /* WARNING: Could not recover jumptable at 0x003558cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))();
  return;
}



/* Entry: 003558d0; end: 003559e7;  */

undefined8 * FUN_003558d0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  long *plVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  undefined1 uStack_49;
  undefined **ppuStack_48;
  long lStack_40;
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  *param_1 = &PTR_FUN_009dc158;
  lStack_40 = param_1[0x11];
  param_1[0x11] = 0;
  ppuStack_48 = &PTR_FUN_009dc200;
  pppuVar4 = &ppuStack_48;
  pppuStack_30 = &ppuStack_48;
  FUN_003d0dec(*(undefined8 *)(*(long *)(lStack_40 + 0x10) + 0x130),pppuVar4,&uStack_49);
  iVar7 = (int)pppuVar4;
  if (pppuStack_30 == &ppuStack_48) {
    lVar8 = 4;
    pppuVar4 = &ppuStack_48;
  }
  else {
    if (pppuStack_30 == (undefined ***)0x0) goto LAB_0035595c;
    lVar8 = 5;
    pppuVar4 = pppuStack_30;
  }
  (*(code *)(*pppuVar4)[lVar8])();
LAB_0035595c:
  plVar5 = (long *)param_1[0x11];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  plVar5 = (long *)param_1[0x10];
  param_1[0x10] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  puVar6 = param_1;
  FUN_003559e8();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  if (iVar7 == 0) {
    __Unwind_Resume();
  }
  func_0x0040cf10();
  *puVar6 = &PTR_FUN_009dc1d0;
  FUN_00355afc(puVar6 + 10);
  func_0x00339d70(puVar6 + 2);
  return puVar6;
}



/* Entry: 003559e8; end: 00355a2b;  */

undefined8 * FUN_003559e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009dc1d0;
  FUN_00355afc(param_1 + 10);
  func_0x00339d70(param_1 + 2);
  return param_1;
}



/* Entry: 00355a2c; end: 00355a33;  */

void FUN_00355a2c(void)

{
  return;
}



/* Entry: 00355a34; end: 00355a67;  */

void FUN_00355a34(long param_1)

{
  dword *pdVar1;
  undefined8 uVar2;
  
  pdVar1 = &MACH_HEADER.ncmds;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined ***)pdVar1 = &PTR_FUN_009dc200;
  *(undefined8 *)(pdVar1 + 2) = uVar2;
  return;
}



/* Entry: 00355a68; end: 00355ab3;  */

void FUN_00355a68(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_009dc200;
  param_2[1] = uVar1;
  return;
}



/* Entry: 00355ab4; end: 00355aef;  */

long FUN_00355ab4(long param_1,undefined8 param_2)

{
  FUN_0033ff44(param_2,&PTR_DAT_009dc260);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 00355af0; end: 00355afb;  */

undefined ** FUN_00355af0(void)

{
  return &PTR_DAT_009dc260;
}



/* Entry: 00355afc; end: 00355c13;  */

long * FUN_00355afc(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  puVar4 = (undefined8 *)param_1[1];
  puVar5 = puVar4;
  if ((undefined8 *)param_1[2] != puVar4) {
    uVar2 = param_1[4];
    plVar6 = puVar4 + (uVar2 >> 8);
    lVar3 = *plVar6 + (uVar2 & 0xff) * 0x10;
    lVar1 = *(long *)((long)puVar4 + (param_1[5] + uVar2 >> 5 & 0x7fffffffffffff8)) +
            (param_1[5] + uVar2 & 0xff) * 0x10;
    puVar5 = (undefined8 *)param_1[2];
    if (lVar3 != lVar1) {
      do {
        FUN_00355c14(param_1 + 5,lVar3);
        lVar3 = lVar3 + 0x10;
        if (lVar3 - *plVar6 == 0x1000) {
          plVar6 = plVar6 + 1;
          lVar3 = *plVar6;
        }
      } while (lVar3 != lVar1);
      puVar4 = (undefined8 *)param_1[1];
      puVar5 = (undefined8 *)param_1[2];
    }
  }
  param_1[5] = 0;
  uVar2 = (long)puVar5 - (long)puVar4;
  while (0x10 < uVar2) {
    __ZdlPv(*puVar4);
    puVar5 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar4;
    uVar2 = (long)puVar5 - (long)puVar4;
  }
  if (uVar2 >> 3 == 1) {
    lVar3 = 0x80;
  }
  else {
    if (uVar2 >> 3 != 2) goto LAB_00355bf0;
    lVar3 = 0x100;
  }
  param_1[4] = lVar3;
LAB_00355bf0:
  for (; puVar4 != puVar5; puVar4 = puVar4 + 1) {
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



/* Entry: 00355c14; end: 00355c33;  */

void FUN_00355c14(undefined8 param_1,long param_2)

{
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 00355c34; end: 00355c63;  */

long FUN_00355c34(long param_1)

{
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 00355c64; end: 00355caf;  */

long * FUN_00355c64(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 != param_1[1]) {
    param_1[2] = lVar1 + ((param_1[1] - lVar1) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 00355cb0; end: 00355cb7;  */

void FUN_00355cb0(void)

{
  return;
}



/* Entry: 00355cb8; end: 00355ceb;  */

void FUN_00355cb8(long param_1)

{
  dword *pdVar1;
  undefined8 uVar2;
  
  pdVar1 = &MACH_HEADER.ncmds;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined ***)pdVar1 = &PTR_FUN_009dc280;
  *(undefined8 *)(pdVar1 + 2) = uVar2;
  return;
}



/* Entry: 00355cec; end: 00355d0f;  */

void FUN_00355cec(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_009dc280;
  param_2[1] = uVar1;
  return;
}



/* Entry: 00355d10; end: 00355d4b;  */

long FUN_00355d10(long param_1,undefined8 param_2)

{
  FUN_0033ff44(param_2,&PTR_DAT_009dc2e0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 00355d4c; end: 00355d57;  */

undefined ** FUN_00355d4c(void)

{
  return &PTR_DAT_009dc2e0;
}



/* Entry: 00355d58; end: 00355daf;  */

void FUN_00355d58(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  FUN_00355db0(plVar5);
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
  if (lVar4 + -1 != 0 || plVar5 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00355dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 8))(plVar5);
  return;
}



/* Entry: 00355db0; end: 00356043;  */

void FUN_00355db0(long param_1)

{
  char cVar1;
  ulong uVar2;
  long *plVar3;
  code *pcVar4;
  bool bVar5;
  char *pcVar6;
  int *piVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  ulong uStack_90;
  char *pcStack_88;
  ulong uStack_80;
  byte bStack_71;
  undefined1 auStack_70 [16];
  char cStack_60;
  int aiStack_58 [2];
  ulong uStack_50;
  int iStack_44;
  
  FUN_00371bec(aiStack_58);
  FUN_00552040(auStack_70,&uStack_50,"grpc.internal.keepalive_throttling",0x22);
  if (cStack_60 != '\0') {
    FUN_00559e74(&pcStack_88,auStack_70);
    pcVar6 = pcStack_88;
    if (-1 < (char)bStack_71) {
      uStack_80 = (ulong)bStack_71;
      pcVar6 = (char *)&pcStack_88;
    }
    FUN_00575540(pcVar6,uStack_80,&iStack_44,10);
    if ((char)bStack_71 < '\0') {
      __ZdlPv(pcStack_88);
    }
    lVar10 = *(long *)(*(long *)(param_1 + 0x88) + 0x10);
    if ((int)pcVar6 == 0) {
      if (cStack_60 == '\0') {
        FUN_0034b1d8();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x355fd0);
        (*pcVar4)();
      }
      FUN_00559e74(&pcStack_88,auStack_70);
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                   ,0x28c,2,"chand=%p: Illegal keepalive throttling value %s");
      if ((char)bStack_71 < '\0') {
        __ZdlPv(pcStack_88);
      }
    }
    else if (*(int *)(lVar10 + 0x1d0) < iStack_44) {
      *(int *)(lVar10 + 0x1d0) = iStack_44;
      plVar8 = *(long **)(lVar10 + 0x1b8);
      while (plVar8 != (long *)(lVar10 + 0x1c0)) {
        FUN_00372adc(*(undefined8 *)(plVar8[4] + 0x18),iStack_44);
        plVar3 = (long *)plVar8[1];
        plVar9 = plVar8;
        if ((long *)plVar8[1] == (long *)0x0) {
          do {
            plVar8 = (long *)plVar9[2];
            bVar5 = (long *)*plVar8 != plVar9;
            plVar9 = plVar8;
          } while (bVar5);
        }
        else {
          do {
            plVar8 = plVar3;
            plVar3 = (long *)*plVar8;
          } while ((long *)*plVar8 != (long *)0x0);
        }
      }
    }
  }
  uVar2 = uStack_50;
  plVar8 = *(long **)(param_1 + 0x80);
  if (plVar8 != (long *)0x0) {
    if (aiStack_58[0] == 3) {
      aiStack_58[0] = 3;
    }
    else {
      if (uStack_50 != 0) {
        uStack_50 = 0;
        pcStack_88 = segment_command_00000020.segname + 0xe;
        if ((uVar2 & 1) != 0) {
          FUN_0055293c(uVar2);
        }
      }
      plVar8 = *(long **)(param_1 + 0x80);
    }
    uStack_90 = uStack_50;
    if ((uStack_50 & 1) != 0) {
      piVar7 = (int *)(uStack_50 - 1);
      do {
        cVar1 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar5) {
          *piVar7 = *piVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    (**(code **)(*plVar8 + 0x10))(plVar8,aiStack_58[0],&uStack_90);
    if ((uStack_90 & 1) != 0) {
      FUN_0055293c();
    }
  }
  if (cStack_60 != '\0') {
    FUN_00543968(auStack_70);
  }
  if ((uStack_50 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 00356044; end: 003560b3;  */

long * FUN_00356044(long *param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = param_2;
  plVar1 = (long *)param_2[1];
  if ((long *)param_2[1] == (long *)0x0) {
    do {
      plVar4 = (long *)plVar3[2];
      bVar2 = (long *)*plVar4 != plVar3;
      plVar3 = plVar4;
    } while (bVar2);
  }
  else {
    do {
      plVar4 = plVar1;
      plVar1 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
  if ((long *)*param_1 == param_2) {
    *param_1 = (long)plVar4;
  }
  param_1[2] = param_1[2] + -1;
  FUN_003535bc(param_1[1]);
  return plVar4;
}



/* Entry: 003560b4; end: 003560c7;  */

undefined1  [16] FUN_003560b4(undefined8 param_1,ulong param_2)

{
  char *pcVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  pcVar1 = "vector";
  FUN_0033b32c();
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  FUN_00349558();
  lVar2 = *(long *)((long)pcVar1 + 8);
  lVar4 = *(long *)((long)pcVar1 + 0x10);
  while (lVar4 != lVar2) {
    *(long *)((long)pcVar1 + 0x10) = lVar4 + -8;
    plVar3 = *(long **)(lVar4 + -8);
    *(undefined8 *)(lVar4 + -8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    lVar4 = *(long *)((long)pcVar1 + 0x10);
  }
  if (*(long *)pcVar1 != 0) {
    __ZdlPv();
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = pcVar1;
  return auVar6;
}



/* Entry: 003560c8; end: 0035615b;  */

undefined1  [16] FUN_003560c8(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
    __Znwm(lVar1);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  FUN_00349558();
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  while (lVar3 != lVar1) {
    param_1[2] = lVar3 + -8;
    plVar2 = *(long **)(lVar3 + -8);
    *(undefined8 *)(lVar3 + -8) = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    lVar3 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 0035615c; end: 003561ef;  */

undefined8 * FUN_0035615c(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0xffffffff;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x20 == 1) {
      (**(code **)*plVar5)(plVar5);
    }
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  return param_1;
}



/* Entry: 003561f0; end: 003562db;  */

undefined8 * FUN_003561f0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_50;
  long *plStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  
  plStack_48 = (long *)param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  plStack_40 = (long *)param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_0035b588(param_1,&uStack_50,1);
  plVar4 = plStack_40;
  plStack_40 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = plStack_48;
  if (plStack_48 != (long *)0x0) {
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  *param_1 = &PTR_FUN_009dcd58;
  param_1[6] = param_3;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  return param_1;
}



/* Entry: 003562dc; end: 00356393;  */

undefined8 * FUN_003562dc(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_009dc300;
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  return param_1;
}



/* Entry: 00356394; end: 003563bb;  */

undefined * FUN_00356394(void)

{
  return &UNK_009122d1;
}



/* Entry: 003563bc; end: 00356473;  */

void FUN_003563bc(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1 + 4;
  param_1[5] = 0;
  param_1[6] = 0;
  plVar4 = *(long **)(param_2 + 0x10);
  (**(code **)(*plVar4 + 0x20))(plVar4,*param_3);
  param_1[1] = plVar4;
  if (*(long *)(param_2 + 0x10) == 0) {
    uVar6 = 0;
  }
  else {
    plVar4 = (long *)(*(long *)(param_2 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar6 = *(undefined8 *)(param_2 + 0x10);
  }
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  param_1[2] = uVar6;
  return;
}



/* Entry: 00356474; end: 00356487;  */

undefined1  [16] FUN_00356474(undefined8 param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  long lVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  pcVar3 = "vector";
  FUN_0033b32c();
  if (param_2 >> 0x3d == 0) {
    lVar4 = param_2 << 3;
    __Znwm(lVar4);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar4;
    return auVar6;
  }
  FUN_00349558();
  *(undefined ***)pcVar3 = &PTR_FUN_009dc390;
  plVar5 = *(long **)(*(long *)(pcVar3 + 8) + 8);
  do {
    lVar4 = *plVar5;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    FUN_004005ec();
  }
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = pcVar3;
  return auVar7;
}



/* Entry: 00356488; end: 003564bb;  */

undefined1  [16] FUN_00356488(undefined8 *param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 >> 0x3d == 0) {
    lVar3 = param_2 << 3;
    __Znwm(lVar3);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar3;
    return auVar5;
  }
  FUN_00349558();
  *param_1 = &PTR_FUN_009dc390;
  plVar4 = *(long **)(param_1[1] + 8);
  do {
    lVar3 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar3 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar3 + -1 == 0) {
    FUN_004005ec();
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 003564bc; end: 003564bf;  */

undefined8 * FUN_003564bc(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_009dc390;
  plVar3 = *(long **)(param_1[1] + 8);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    FUN_004005ec();
  }
  return param_1;
}



/* Entry: 003564c0; end: 003564d3;  */

void FUN_003564c0(void)

{
  FUN_00356528();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 003564d4; end: 00356527;  */

void FUN_003564d4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_70 [80];
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x003d3ad8(auStack_70);
  FUN_00343454(uVar1,auStack_70);
  FUN_003d3950(auStack_70);
  return;
}



/* Entry: 00356528; end: 0035657b;  */

undefined8 * FUN_00356528(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_009dc390;
  plVar3 = *(long **)(param_1[1] + 8);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    FUN_004005ec();
  }
  return param_1;
}



/* Entry: 0035657c; end: 00356583;  */

void FUN_0035657c(void)

{
  return;
}



/* Entry: 00356584; end: 003565b7;  */

void FUN_00356584(long param_1)

{
  dword *pdVar1;
  undefined8 uVar2;
  
  pdVar1 = &MACH_HEADER.ncmds;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined ***)pdVar1 = &PTR_FUN_009dc3e0;
  *(undefined8 *)(pdVar1 + 2) = uVar2;
  return;
}



/* Entry: 003565b8; end: 003565d3;  */

void FUN_003565b8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_009dc3e0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 003565d4; end: 0035666b;  */

void FUN_003565d4(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plStack_28;
  
  FUN_003566b4(&plStack_28,*(undefined8 *)(*(long *)*param_3 + 0x18));
  FUN_00370ce4(plStack_28,*(undefined8 *)(*(long *)(param_2 + 8) + 0x70),
               *(undefined8 *)(*(long *)(param_2 + 8) + 0x78));
  *param_1 = 0;
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
    if (lVar4 + -1 == 0) {
      (**(code **)(*plStack_28 + 8))();
    }
  }
  return;
}



/* Entry: 0035666c; end: 003566a7;  */

long FUN_0035666c(long param_1,undefined8 param_2)

{
  FUN_0033ff44(param_2,&PTR_DAT_009dc450);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 003566a8; end: 003566b3;  */

undefined ** FUN_003566a8(void)

{
  return &PTR_DAT_009dc450;
}



/* Entry: 003566b4; end: 00356717;  */

void FUN_003566b4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  func_0x00339d8c(param_2 + 400);
  uVar4 = 0;
  if (*(long *)(param_2 + 0x210) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x210) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar4 = *(undefined8 *)(param_2 + 0x210);
  }
  *param_1 = uVar4;
  func_0x00339da8(param_2 + 400);
  return;
}



/* Entry: 00356718; end: 0035671f;  */

void FUN_00356718(void)

{
  return;
}



/* Entry: 00356720; end: 00356743;  */

void FUN_00356720(void)

{
  dword *pdVar1;
  
  pdVar1 = &MACH_HEADER.ncmds;
  __Znwm();
  *(undefined ***)pdVar1 = &PTR_FUN_009dc470;
  return;
}



/* Entry: 00356744; end: 0035675b;  */

void FUN_00356744(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_009dc470;
  return;
}



/* Entry: 0035675c; end: 003567cb;  */

void FUN_0035675c(void)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_29;
  undefined8 *puStack_28;
  
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  FUN_003b646c(2,"LB picker queued call",0x15,&uStack_29,&uStack_48);
  puStack_28 = &uStack_48;
  FUN_0033d548(&puStack_28);
  return;
}



/* Entry: 003567cc; end: 00356807;  */

long FUN_003567cc(long param_1,undefined8 param_2)

{
  FUN_0033ff44(param_2,&PTR_DAT_009dc4e0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 00356808; end: 0035681b;  */

undefined ** FUN_00356808(void)

{
  return &PTR_DAT_009dc4e0;
}



/* Entry: 0035681c; end: 0035683f;  */

void FUN_0035681c(void)

{
  dword *pdVar1;
  
  pdVar1 = &MACH_HEADER.ncmds;
  __Znwm();
  *(undefined ***)pdVar1 = &PTR_DAT_009dc500;
  return;
}



/* Entry: 00356840; end: 00356857;  */

void FUN_00356840(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_009dc500;
  return;
}



/* Entry: 00356858; end: 003568cf;  */

void FUN_00356858(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uStack_28;
  
  uStack_28 = *(ulong *)*param_2;
  if ((uStack_28 & 1) != 0) {
    piVar3 = (int *)(uStack_28 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003fbec4(&uStack_28);
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003568d0; end: 0035690b;  */

long FUN_003568d0(long param_1,undefined8 param_2)

{
  FUN_0033ff44(param_2,&PTR_DAT_009dc570);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}


