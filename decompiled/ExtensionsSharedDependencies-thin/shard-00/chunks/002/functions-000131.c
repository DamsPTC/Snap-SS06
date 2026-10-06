/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0034ac74; end: 0034accb;  */

long FUN_0034ac74(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
    (*(code *)(&PTR_FUN_009dbbe0)[*(uint *)(param_1 + 0x10)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return param_1;
}



/* Entry: 0034accc; end: 0034ad57;  */

ulong * FUN_0034accc(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 **ppuVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined1 *puStack_60;
  ulong uStack_58;
  
  puVar3 = param_1 + 1;
  if ((*param_1 & 1) == 0) {
    uVar6 = 6;
  }
  else {
    puVar3 = (ulong *)param_1[1];
    uVar6 = param_1[2];
  }
  uVar5 = *param_1 >> 1;
  if (uVar5 != uVar6) {
    FUN_0034ae98(param_1,puVar3 + uVar5 * 3,param_2,param_3,param_4);
    *param_1 = *param_1 + 2;
    return puVar3 + uVar5 * 3;
  }
  ppuVar2 = &puStack_60;
  puVar3 = param_1 + 1;
  uVar6 = *param_1;
  if ((uVar6 & 1) == 0) {
    uVar5 = 0xc;
  }
  else {
    puVar3 = (ulong *)param_1[1];
    uVar5 = param_1[2] << 1;
  }
  puStack_60 = (undefined1 *)0x0;
  uStack_58 = 0;
  FUN_0034aefc();
  uVar8 = uVar6 >> 1;
  lVar1 = uVar8 * 0x18;
  puStack_60 = (undefined1 *)ppuVar2;
  uStack_58 = uVar5;
  FUN_0034ae98(param_1,(ulong *)((long)ppuVar2 + lVar1),param_2,param_3,param_4);
  if (1 < uVar6) {
    puVar4 = (ulong *)(puStack_60 + 0x10);
    uVar6 = uVar8;
    puVar7 = puVar3;
    do {
      uVar5 = *puVar7;
      puVar4[-1] = puVar7[1];
      puVar4[-2] = uVar5;
      puVar7[1] = 0x36;
      *puVar4 = puVar7[2];
      puVar7 = puVar7 + 3;
      uVar6 = uVar6 - 1;
      puVar4 = puVar4 + 3;
    } while (uVar6 != 0);
    puVar3 = puVar3 + uVar8 * 3;
    do {
      puVar3 = puVar3 + -3;
      uVar8 = uVar8 - 1;
      FUN_0034af40(param_1,puVar3);
    } while (uVar8 != 0);
  }
  uVar6 = *param_1;
  if ((uVar6 & 1) != 0) {
    __ZdlPv(param_1[1]);
    uVar6 = *param_1;
  }
  param_1[1] = (ulong)puStack_60;
  param_1[2] = uStack_58;
  *param_1 = (uVar6 | 1) + 2;
  return (ulong *)((long)ppuVar2 + lVar1);
}



/* Entry: 0034ad58; end: 0034ae97;  */

undefined1 * FUN_0034ad58(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 **ppuVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puStack_60;
  ulong uStack_58;
  
  ppuVar2 = &puStack_60;
  puVar6 = param_1 + 1;
  uVar8 = *param_1;
  if ((uVar8 & 1) == 0) {
    uVar3 = 0xc;
  }
  else {
    puVar6 = (ulong *)param_1[1];
    uVar3 = param_1[2] << 1;
  }
  puStack_60 = (undefined1 *)0x0;
  uStack_58 = 0;
  FUN_0034aefc();
  uVar7 = uVar8 >> 1;
  lVar1 = uVar7 * 0x18;
  puStack_60 = (undefined1 *)ppuVar2;
  uStack_58 = uVar3;
  FUN_0034ae98(param_1,(undefined1 *)((long)ppuVar2 + lVar1),param_2,param_3,param_4);
  if (1 < uVar8) {
    puVar4 = (ulong *)(puStack_60 + 0x10);
    uVar8 = uVar7;
    puVar5 = puVar6;
    do {
      uVar3 = *puVar5;
      puVar4[-1] = puVar5[1];
      puVar4[-2] = uVar3;
      puVar5[1] = 0x36;
      *puVar4 = puVar5[2];
      puVar5 = puVar5 + 3;
      uVar8 = uVar8 - 1;
      puVar4 = puVar4 + 3;
    } while (uVar8 != 0);
    puVar6 = puVar6 + uVar7 * 3;
    do {
      puVar6 = puVar6 + -3;
      uVar7 = uVar7 - 1;
      FUN_0034af40(param_1,puVar6);
    } while (uVar7 != 0);
  }
  uVar8 = *param_1;
  if ((uVar8 & 1) != 0) {
    __ZdlPv(param_1[1]);
    uVar8 = *param_1;
  }
  param_1[1] = (ulong)puStack_60;
  param_1[2] = uStack_58;
  *param_1 = (uVar8 | 1) + 2;
  return (undefined1 *)((long)ppuVar2 + lVar1);
}



/* Entry: 0034ae98; end: 0034aefb;  */

void FUN_0034ae98(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,ulong *param_4,
                 undefined8 *param_5)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined8 uVar6;
  
  uVar6 = *param_3;
  uVar3 = *param_4;
  if ((uVar3 & 1) == 0) {
    uVar4 = *param_5;
    *param_2 = uVar6;
    param_2[1] = uVar3;
    param_2[2] = uVar4;
  }
  else {
    piVar5 = (int *)(uVar3 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uVar4 = *param_5;
    *param_2 = uVar6;
    param_2[1] = uVar3;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    param_2[2] = uVar4;
    FUN_0055293c();
  }
  return;
}



/* Entry: 0034aefc; end: 0034af3f;  */

void FUN_0034aefc(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    __Znwm(param_2 * 0x18);
    return;
  }
  FUN_00349558();
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 0034af40; end: 0034af5f;  */

void FUN_0034af40(undefined8 param_1,long param_2)

{
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 0034af60; end: 0034afe3;  */

void FUN_0034af60(ulong *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  puVar3 = param_1 + 1;
  uVar1 = *param_1;
  puVar2 = puVar3;
  if ((uVar1 & 1) != 0) {
    puVar2 = (ulong *)*puVar3;
  }
  if (1 < uVar1) {
    uVar1 = uVar1 >> 1;
    puVar2 = puVar2 + uVar1 * 3;
    do {
      puVar2 = puVar2 + -3;
      uVar1 = uVar1 - 1;
      FUN_0034af40(param_1,puVar2);
    } while (uVar1 != 0);
    uVar1 = *param_1;
  }
  if ((uVar1 & 1) != 0) {
    __ZdlPv(*puVar3);
  }
  *param_1 = 0;
  return;
}



/* Entry: 0034afe4; end: 0034b017;  */

long * FUN_0034afe4(long *param_1)

{
  if (*param_1 != 0) {
    FUN_0034b018(param_1);
  }
  return param_1;
}



/* Entry: 0034b018; end: 0034b0a3;  */

void FUN_0034b018(ulong *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  puVar3 = param_1 + 1;
  uVar1 = *param_1;
  puVar2 = puVar3;
  if ((uVar1 & 1) != 0) {
    puVar2 = (ulong *)*puVar3;
  }
  if (1 < uVar1) {
    uVar1 = uVar1 >> 1;
    puVar2 = puVar2 + uVar1 * 3;
    do {
      puVar2 = puVar2 + -3;
      uVar1 = uVar1 - 1;
      FUN_0034af40(param_1,puVar2);
    } while (uVar1 != 0);
    uVar1 = *param_1;
  }
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(*puVar3);
    return;
  }
  return;
}



/* Entry: 0034b0a4; end: 0034b1c7;  */

void FUN_0034b0a4(long *param_1,ulong *param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  
  lVar1 = *(long *)(*param_1 + 0x10);
  lVar5 = *(long *)(*param_1 + 8) + 0x70;
  func_0x00339d8c(lVar5);
  if ((*(long **)(lVar1 + 0xd8) == param_1) && (uVar7 = *param_2, uVar7 != 0)) {
    if (*(char *)(lVar1 + 0xc1) != '\0') {
      func_0x00345920(*(undefined8 *)(*param_1 + 8),lVar1 + 200,*(undefined8 *)(lVar1 + 0x98));
      *(undefined1 *)(lVar1 + 0xc1) = 0;
      *(undefined8 *)(lVar1 + 0xd8) = 0;
      uVar7 = *param_2;
    }
    if ((uVar7 & 1) != 0) {
      piVar6 = (int *)(uVar7 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = *piVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_00346c1c(lVar1);
    if ((uVar7 & 1) != 0) {
      FUN_0055293c(uVar7);
    }
  }
  func_0x00339da8(lVar5);
  plVar4 = *(long **)(lVar1 + 0x80);
  do {
    lVar5 = *plVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar3) {
      *plVar4 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 == 0) {
    FUN_004005ec();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_1);
  return;
}



/* Entry: 0034b1c8; end: 0034b1d7;  */

bool FUN_0034b1c8(ulong *param_1)

{
  return 1 < *param_1;
}



/* Entry: 0034b1d8; end: 0034b20b;  */

void FUN_0034b1d8(void)

{
  dword *pdVar1;
  undefined *puVar2;
  
  pdVar1 = &MACH_HEADER.cpusubtype;
  ___cxa_allocate_exception();
  *(undefined **)pdVar1 = PTR___ZTVSt19bad_optional_access_00998e18 + 0x10;
  puVar2 = PTR___ZTISt19bad_optional_access_00998d48;
  ___cxa_throw();
  if (puVar2 != (undefined *)0x0) {
    FUN_0034b20c();
    FUN_0034b20c(pdVar1,*(undefined8 *)(puVar2 + 8));
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(puVar2);
    return;
  }
  return;
}



/* Entry: 0034b20c; end: 0034b24b;  */

void FUN_0034b20c(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_0034b20c(param_1,*param_2);
    FUN_0034b20c(param_1,param_2[1]);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(param_2);
    return;
  }
  return;
}



/* Entry: 0034b24c; end: 0034b327;  */

void FUN_0034b24c(long param_1)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  long lVar3;
  undefined1 uStack_49;
  undefined **ppuStack_48;
  long lStack_40;
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuStack_48 = &PTR_FUN_009dbc40;
  lStack_40 = param_1;
  pppuStack_30 = &ppuStack_48;
  FUN_003d0dec(*(undefined8 *)(param_1 + 0x130),&ppuStack_48,&uStack_49);
  if (pppuStack_30 == &ppuStack_48) {
    lVar3 = 4;
    pppuVar1 = &ppuStack_48;
LAB_0034b2b4:
    (*(code *)(*pppuVar1)[lVar3])();
  }
  else {
    pppuVar1 = pppuStack_30;
    if (pppuStack_30 != (undefined ***)0x0) {
      lVar3 = 5;
      goto LAB_0034b2b4;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (pppuStack_30 == &ppuStack_48) {
    lVar3 = 4;
    pppuVar2 = &ppuStack_48;
  }
  else {
    if (pppuStack_30 == (undefined ***)0x0) goto LAB_0034b320;
    lVar3 = 5;
    pppuVar2 = pppuStack_30;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_0034b320:
  __Unwind_Resume(pppuVar1);
  return;
}



/* Entry: 0034b328; end: 0034b32f;  */

void FUN_0034b328(void)

{
  return;
}



/* Entry: 0034b330; end: 0034b363;  */

void FUN_0034b330(long param_1)

{
  dword *pdVar1;
  undefined8 uVar2;
  
  pdVar1 = &MACH_HEADER.ncmds;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined ***)pdVar1 = &PTR_FUN_009dbc40;
  *(undefined8 *)(pdVar1 + 2) = uVar2;
  return;
}



/* Entry: 0034b364; end: 0034b37f;  */

void FUN_0034b364(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_009dbc40;
  param_2[1] = uVar1;
  return;
}



/* Entry: 0034b380; end: 0034b40b;  */

void FUN_0034b380(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uStack_38;
  undefined1 uStack_29;
  ulong uStack_28;
  
  FUN_003468ec(*(undefined8 *)(param_1 + 8),1);
  plVar3 = *(long **)(*(long *)(param_1 + 8) + 8);
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
    plVar4 = plVar3;
    FUN_003c3188();
    if ((((ulong)plVar4 & 1) == 0) && (func_0x003c1f6c(), (*(byte *)(*plVar4 + 0x28) >> 1 & 1) != 0)
       ) {
      uStack_28 = 0;
      FUN_003c2968(plVar3 + 1,&uStack_28,0,0);
      if ((uStack_28 & 1) == 0) {
        return;
      }
      FUN_0055293c();
      return;
    }
    uStack_38 = 0;
    FUN_003c1e6c(&uStack_29,plVar3 + 1,&uStack_38);
    if ((uStack_38 & 1) != 0) {
      FUN_0055293c();
    }
    return;
  }
  return;
}



/* Entry: 0034b40c; end: 0034b417;  */

undefined ** FUN_0034b40c(void)

{
  return &PTR_DAT_009dbca0;
}



/* Entry: 0034b418; end: 0034b463;  */

undefined8 * FUN_0034b418(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar3) {
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
      (*(code *)plVar3[1])();
    }
  }
  return param_1;
}



/* Entry: 0034b464; end: 0034b467;  */

void FUN_0034b464(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0034b468; end: 0034b58f;  */

void FUN_0034b468(long param_1,long *param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  uint *puVar3;
  int iVar4;
  long lVar5;
  undefined8 *extraout_x8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 *puStack_88;
  uint *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar3 = *(uint **)(param_1 + 8);
  if (puVar3 != (uint *)0x0) {
    if ((param_3 == 0x13) &&
       ((*param_2 == 0x635f626c63707267 && param_2[1] == 0x74735f746e65696c) &&
        *(long *)((long)param_2 + 0xb) == 0x73746174735f746e)) {
      *puVar3 = *puVar3 | 0x200000;
      *(undefined8 *)(puVar3 + 0x22) = param_4;
    }
    else {
      puStack_48 = (uint *)((long)&MACH_HEADER.magic + 1);
      uStack_40 = param_5;
      uStack_38 = param_4;
      FUN_0034b65c();
      puVar3 = puStack_48;
      if ((uint *)((long)&MACH_HEADER.magic + 1) < puStack_48) {
        do {
          lVar5 = *(long *)puStack_48;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puStack_48,0x10);
          if (bVar2) {
            *(long *)puStack_48 = lVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar5 + -1 == 0) {
          (**(code **)(puStack_48 + 2))();
        }
      }
    }
  }
  iVar4 = (int)param_2;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar4 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&puStack_48);
  }
  __Unwind_Resume();
  puStack_88 = (undefined1 *)&uStack_a0;
  if (*(long *)(puVar3 + 2) == 0) {
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    extraout_x8[2] = 0;
  }
  else {
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    FUN_0034e140(*(long *)(puVar3 + 2),&uStack_a0);
    extraout_x8[1] = uStack_98;
    *extraout_x8 = uStack_a0;
    extraout_x8[2] = uStack_90;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    FUN_00350d78(&puStack_88);
  }
  return;
}



/* Entry: 0034b590; end: 0034b617;  */

void FUN_0034b590(undefined8 *param_1,long param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(param_2 + 8) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    FUN_0034e140(*(long *)(param_2 + 8),&uStack_40);
    param_1[1] = uStack_38;
    *param_1 = uStack_40;
    param_1[2] = uStack_30;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_40 = 0;
    puStack_28 = (undefined1 *)&uStack_40;
    FUN_00350d78(&puStack_28);
  }
  return;
}



/* Entry: 0034b618; end: 0034b65b;  */

void FUN_0034b618(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lStack_20;
  undefined8 uStack_18;
  
  lStack_20 = *(long *)(param_2 + 8);
  if (lStack_20 == 0) {
    *param_1 = 0;
    param_1[0x10] = 0;
  }
  else {
    uStack_18 = param_5;
    FUN_00350dfc(param_3,param_4,&lStack_20);
  }
  return;
}



/* Entry: 0034b65c; end: 0034b75f;  */

uint * FUN_0034b65c(undefined8 param_1,undefined8 param_2,uint **param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  uint *extraout_x8;
  long lVar8;
  uint *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  undefined8 *****pppppuVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  char acStack_401 [681];
  uint *apuStack_158 [4];
  long lStack_138;
  undefined8 uStack_130;
  uint *puStack_128;
  undefined8 ****ppppuStack_120;
  code *pcStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  uint *puStack_b8;
  undefined8 ***pppuStack_b0;
  code *pcStack_a8;
  uint *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  uint *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034b760(&puStack_a0,param_4);
  uStack_70 = uStack_98;
  puStack_78 = puStack_a0;
  uStack_60 = uStack_88;
  uStack_68 = uStack_90;
  uStack_98 = 0;
  puStack_a0 = (uint *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  puVar6 = (uint *)&uStack_80;
  uStack_80 = param_1;
  uStack_58 = param_5;
  uStack_50 = param_6;
  FUN_0034b7fc(param_2);
  puVar10 = puStack_78;
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puStack_78) {
    do {
      lVar7 = *(long *)puStack_78;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puStack_78,0x10);
      if (bVar3) {
        *(long *)puStack_78 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(puStack_78 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return puVar10;
  }
  ___stack_chk_fail();
  if ((int)param_3 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&puStack_78);
  }
  puVar9 = puVar10;
  __Unwind_Resume();
  puVar5 = (uint *)&lStack_110;
  pcStack_a8 = FUN_0034b760;
  pppppuVar12 = (undefined8 *****)&pppuStack_b0;
  lStack_c8 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_c0 = param_2;
  puStack_b8 = puVar10;
  pppuStack_b0 = (undefined8 ***)&stack0xfffffffffffffff0;
  if (*(long *)puVar9 == 1) {
    lStack_108 = *(long *)(puVar9 + 2);
    lStack_110 = *(long *)puVar9;
    lStack_f8 = *(long *)(puVar9 + 6);
    lStack_100 = *(long *)(puVar9 + 4);
    FUN_003ec030(&lStack_e8);
  }
  else {
    if (*(long *)puVar9 != 0) {
      lVar7 = *(long *)puVar9;
      lVar14 = *(long *)(puVar9 + 6);
      lVar8 = *(long *)(puVar9 + 4);
      *(long *)(extraout_x8 + 2) = *(long *)(puVar9 + 2);
      *(long *)extraout_x8 = lVar7;
      *(long *)(extraout_x8 + 6) = lVar14;
      *(long *)(extraout_x8 + 4) = lVar8;
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9[0] = 0;
      puVar9[1] = 0;
      puVar9[6] = 0;
      puVar9[7] = 0;
      puVar9[4] = 0;
      puVar9[5] = 0;
      goto LAB_0034b7d0;
    }
    lStack_e0 = *(long *)(puVar9 + 2);
    lStack_e8 = *(long *)puVar9;
    lStack_d0 = *(long *)(puVar9 + 6);
    lStack_d8 = *(long *)(puVar9 + 4);
    puVar5 = puVar9;
  }
  *(long *)(extraout_x8 + 2) = lStack_e0;
  *(long *)extraout_x8 = lStack_e8;
  *(long *)(extraout_x8 + 6) = lStack_d0;
  *(long *)(extraout_x8 + 4) = lStack_d8;
  puVar9 = puVar5;
LAB_0034b7d0:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_c8) {
    return puVar9;
  }
  pcVar13 = FUN_0034b7fc;
  ___stack_chk_fail();
  plVar4 = &lStack_110;
  puVar10 = extraout_x8;
  if ((param_3 == (uint **)((long)&MACH_HEADER.cputype + 1)) &&
     (plVar4 = &lStack_110, *puVar9 == 0x7461703a && (char)puVar9[1] == 'h')) {
    uStack_130 = param_2;
    puStack_128 = extraout_x8;
    ppppuStack_120 = pppppuVar12;
    pcStack_118 = FUN_0034b7fc;
    pppppuVar12 = &ppppuStack_120;
    lStack_138 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar11 = *(undefined8 *)puVar6;
    puVar9 = puVar6 + 2;
    puVar10 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(apuStack_158,puVar9,*(undefined8 *)puVar10);
    param_3 = apuStack_158;
    FUN_0034b9f8(uVar11);
    puVar10 = apuStack_158[0];
    if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_158[0]) {
      do {
        lVar7 = *(long *)apuStack_158[0];
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(apuStack_158[0],0x10);
        if (bVar3) {
          *(long *)apuStack_158[0] = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(apuStack_158[0] + 2))();
        puVar10 = apuStack_158[0];
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_138) {
      return puVar10;
    }
    ___stack_chk_fail();
    if ((int)param_3 != 0) {
      func_0x0040cf10();
      FUN_0034b418(apuStack_158);
    }
    pcVar13 = FUN_0034b8f4;
    puVar9 = puVar10;
    __Unwind_Resume();
    plVar4 = (long *)(acStack_401 + 0x2a1);
  }
  if ((param_3 == (uint **)((long)&MACH_HEADER.cpusubtype + 2)) &&
     (*(long *)puVar9 == 0x69726f687475613a && (short)puVar9[2] == 0x7974)) {
    *(undefined8 *)((long)plVar4 + -0x20) = param_2;
    *(uint **)((long)plVar4 + -0x18) = puVar10;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar12;
    *(code **)((long)plVar4 + -8) = pcVar13;
    pppppuVar12 = (undefined8 *****)((long)plVar4 + -0x10);
    *(undefined8 *)((long)plVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar11 = *(undefined8 *)puVar6;
    puVar9 = puVar6 + 2;
    puVar10 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930((undefined1 *)((long)plVar4 + -0x48),puVar9,*(undefined8 *)puVar10);
    param_3 = (uint **)((long)plVar4 + -0x48);
    FUN_0034bbe0(uVar11);
    puVar10 = *(uint **)((long)plVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar10) {
      do {
        lVar7 = *(long *)puVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar10,0x10);
        if (bVar3) {
          *(long *)puVar10 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(puVar10 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)plVar4 + -0x28)) {
      return puVar10;
    }
    ___stack_chk_fail();
    if ((int)param_3 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)plVar4 + -0x48));
    }
    pcVar13 = FUN_0034bba8;
    puVar9 = puVar10;
    __Unwind_Resume();
    plVar4 = (long *)((long)plVar4 + -0x50);
  }
  if ((param_3 == (uint **)((long)&MACH_HEADER.cputype + 3)) &&
     (*puVar9 == 0x74656d3a && *(int *)((long)puVar9 + 3) == 0x646f6874)) {
    *(undefined8 *)((long)plVar4 + -0x20) = param_2;
    *(uint **)((long)plVar4 + -0x18) = puVar10;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar12;
    *(code **)((long)plVar4 + -8) = pcVar13;
    puVar9 = *(uint **)puVar6;
    puVar10 = puVar6 + 2;
    FUN_0034bd40(puVar10,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar9 = *puVar9 | 4;
    puVar9[0x6a] = (uint)puVar10;
    return puVar10;
  }
  if ((param_3 == (uint **)((long)&MACH_HEADER.cputype + 3)) &&
     (*puVar9 == 0x6174733a && *(int *)((long)puVar9 + 3) == 0x73757461)) {
    *(undefined8 *)((long)plVar4 + -0x20) = param_2;
    *(uint **)((long)plVar4 + -0x18) = puVar10;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar12;
    *(code **)((long)plVar4 + -8) = pcVar13;
    puVar9 = *(uint **)puVar6;
    puVar10 = puVar6 + 2;
    FUN_0034be6c(puVar10,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar9 = *puVar9 | 8;
    puVar9[0x69] = (uint)puVar10;
    return puVar10;
  }
  if ((param_3 == (uint **)((long)&MACH_HEADER.cputype + 3)) &&
     (*puVar9 == 0x6863733a && *(int *)((long)puVar9 + 3) == 0x656d6568)) {
    *(undefined8 *)((long)plVar4 + -0x20) = param_2;
    *(uint **)((long)plVar4 + -0x18) = puVar10;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar12;
    *(code **)((long)plVar4 + -8) = pcVar13;
    puVar9 = *(uint **)puVar6;
    puVar10 = puVar6 + 2;
    FUN_0034c020(puVar10,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar9 = *puVar9 | 0x10;
    puVar9[0x68] = (uint)puVar10;
    return puVar10;
  }
  if ((param_3 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)puVar9 == 0x2d746e65746e6f63 && puVar9[2] == 0x65707974)) {
    *(undefined8 *)((long)plVar4 + -0x20) = param_2;
    *(uint **)((long)plVar4 + -0x18) = puVar10;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar12;
    *(code **)((long)plVar4 + -8) = pcVar13;
    puVar9 = *(uint **)puVar6;
    puVar10 = puVar6 + 2;
    FUN_0034c160(puVar10,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar9 = *puVar9 | 0x20;
    puVar9[0x67] = (uint)puVar10;
    return puVar10;
  }
  if ((param_3 == (uint **)((long)&MACH_HEADER.magic + 2)) && ((short)*puVar9 == 0x6574)) {
    *(undefined8 *)((long)plVar4 + -0x20) = param_2;
    *(uint **)((long)plVar4 + -0x18) = puVar10;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar12;
    *(code **)((long)plVar4 + -8) = pcVar13;
    puVar9 = *(uint **)puVar6;
    puVar10 = puVar6 + 2;
    FUN_0034c29c(puVar10,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar9 = *puVar9 | 0x40;
    *(char *)(puVar9 + 0x66) = (char)puVar10;
    return puVar10;
  }
  if ((param_3 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)puVar9 == 0x636e652d63707267 && *(long *)((long)puVar9 + 5) == 0x676e69646f636e65)) {
    *(undefined8 *)((long)plVar4 + -0x20) = param_2;
    *(uint **)((long)plVar4 + -0x18) = puVar10;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar12;
    *(code **)((long)plVar4 + -8) = pcVar13;
    puVar9 = *(uint **)puVar6;
    puVar10 = puVar6 + 2;
    FUN_0034c404(puVar10,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar9 = *puVar9 | 0x80;
    puVar9[0x65] = (uint)puVar10;
    return puVar10;
  }
  if ((param_3 == (uint **)((long)&MACH_HEADER.reserved + 2)) &&
     (((*(long *)puVar9 == 0x746e692d63707267 && *(long *)(puVar9 + 2) == 0x6e652d6c616e7265) &&
      *(long *)(puVar9 + 4) == 0x722d676e69646f63) &&
      *(long *)((long)puVar9 + 0x16) == 0x747365757165722d)) {
    *(undefined8 *)((long)plVar4 + -0x20) = param_2;
    *(uint **)((long)plVar4 + -0x18) = puVar10;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar12;
    *(code **)((long)plVar4 + -8) = pcVar13;
    puVar9 = *(uint **)puVar6;
    puVar10 = puVar6 + 2;
    FUN_0034c404(puVar10,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar9 = *puVar9 | 0x100;
    puVar9[100] = (uint)puVar10;
    return puVar10;
  }
  if ((param_3 == (uint **)&MACH_HEADER.sizeofcmds) &&
     ((*(long *)puVar9 == 0x6363612d63707267 && *(long *)(puVar9 + 2) == 0x6f636e652d747065) &&
      puVar9[4] == 0x676e6964)) {
    *(undefined8 *)((long)plVar4 + -0x20) = param_2;
    *(uint **)((long)plVar4 + -0x18) = puVar10;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar12;
    *(code **)((long)plVar4 + -8) = pcVar13;
    puVar9 = *(uint **)puVar6;
    puVar10 = puVar6 + 2;
    FUN_0034c5d0(puVar10,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar9 = *puVar9 | 0x200;
    *(char *)(puVar9 + 99) = (char)puVar10;
    return puVar10;
  }
  if ((param_3 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)puVar9 == 0x6174732d63707267 && *(long *)((long)puVar9 + 3) == 0x7375746174732d63)) {
    *(undefined8 *)((long)plVar4 + -0x20) = param_2;
    *(uint **)((long)plVar4 + -0x18) = puVar10;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar12;
    *(code **)((long)plVar4 + -8) = pcVar13;
    puVar9 = *(uint **)puVar6;
    puVar10 = puVar6 + 2;
    FUN_0034c724(puVar10,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar9 = *puVar9 | 0x400;
    puVar9[0x62] = (uint)puVar10;
    return puVar10;
  }
  if ((param_3 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)puVar9 == 0x6d69742d63707267 && puVar9[2] == 0x74756f65)) {
    *(undefined8 *)((long)plVar4 + -0x20) = param_2;
    *(uint **)((long)plVar4 + -0x18) = puVar10;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar12;
    *(code **)((long)plVar4 + -8) = pcVar13;
    puVar9 = *(uint **)puVar6;
    puVar10 = puVar6 + 2;
    FUN_0034c900(puVar10,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar9 = *puVar9 | 0x800;
    *(uint **)(puVar9 + 0x60) = puVar10;
    return puVar10;
  }
  if ((param_3 == (uint **)((long)&MACH_HEADER.flags + 2)) &&
     (((*(long *)puVar9 == 0x6572702d63707267 && *(long *)(puVar9 + 2) == 0x70722d73756f6976) &&
      *(long *)(puVar9 + 4) == 0x706d657474612d63) && (short)puVar9[6] == 0x7374)) {
    *(undefined8 *)((long)plVar4 + -0x20) = param_2;
    *(uint **)((long)plVar4 + -0x18) = puVar10;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar12;
    *(code **)((long)plVar4 + -8) = pcVar13;
    puVar9 = *(uint **)puVar6;
    puVar10 = puVar6 + 2;
    FUN_0034be6c(puVar10,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar9 = *puVar9 | 0x1000;
    puVar9[0x5e] = (uint)puVar10;
    return puVar10;
  }
  if ((param_3 == (uint **)((long)&MACH_HEADER.sizeofcmds + 2)) &&
     ((*(long *)puVar9 == 0x7465722d63707267 && *(long *)(puVar9 + 2) == 0x62687375702d7972) &&
      *(long *)((long)puVar9 + 0xe) == 0x736d2d6b63616268)) {
    *(undefined8 *)((long)plVar4 + -0x20) = param_2;
    *(uint **)((long)plVar4 + -0x18) = puVar10;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar12;
    *(code **)((long)plVar4 + -8) = pcVar13;
    puVar9 = *(uint **)puVar6;
    puVar10 = puVar6 + 2;
    FUN_0034cacc(puVar10,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar9 = *puVar9 | 0x2000;
    *(uint **)(puVar9 + 0x5c) = puVar10;
    return puVar10;
  }
  if ((param_3 == (uint **)((long)&MACH_HEADER.cpusubtype + 2)) &&
     (*(long *)puVar9 == 0x6567612d72657375 && (short)puVar9[2] == 0x746e)) {
    *(undefined8 *)((long)plVar4 + -0x20) = param_2;
    *(uint **)((long)plVar4 + -0x18) = puVar10;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar12;
    *(code **)((long)plVar4 + -8) = pcVar13;
    pppppuVar12 = (undefined8 *****)((long)plVar4 + -0x10);
    *(undefined8 *)((long)plVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar11 = *(undefined8 *)puVar6;
    puVar9 = puVar6 + 2;
    puVar10 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930((undefined1 *)((long)plVar4 + -0x48),puVar9,*(undefined8 *)puVar10);
    param_3 = (uint **)((long)plVar4 + -0x48);
    FUN_0034cc88(uVar11);
    puVar10 = *(uint **)((long)plVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar10) {
      do {
        lVar7 = *(long *)puVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar10,0x10);
        if (bVar3) {
          *(long *)puVar10 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(puVar10 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)plVar4 + -0x28)) {
      return puVar10;
    }
    ___stack_chk_fail();
    if ((int)param_3 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)plVar4 + -0x48));
    }
    pcVar13 = FUN_0034cc48;
    puVar9 = puVar10;
    __Unwind_Resume();
    plVar4 = (long *)((long)plVar4 + -0x50);
  }
  if ((param_3 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)puVar9 == 0x73656d2d63707267 && puVar9[2] == 0x65676173)) {
    *(undefined8 *)((long)plVar4 + -0x20) = param_2;
    *(uint **)((long)plVar4 + -0x18) = puVar10;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar12;
    *(code **)((long)plVar4 + -8) = pcVar13;
    pppppuVar12 = (undefined8 *****)((long)plVar4 + -0x10);
    *(undefined8 *)((long)plVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar11 = *(undefined8 *)puVar6;
    puVar9 = puVar6 + 2;
    puVar10 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930((undefined1 *)((long)plVar4 + -0x48),puVar9,*(undefined8 *)puVar10);
    param_3 = (uint **)((long)plVar4 + -0x48);
    FUN_0034ce60(uVar11);
    puVar10 = *(uint **)((long)plVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar10) {
      do {
        lVar7 = *(long *)puVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar10,0x10);
        if (bVar3) {
          *(long *)puVar10 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(puVar10 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)plVar4 + -0x28)) {
      return puVar10;
    }
    ___stack_chk_fail();
    if ((int)param_3 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)plVar4 + -0x48));
    }
    pcVar13 = FUN_0034ce38;
    puVar9 = puVar10;
    __Unwind_Resume();
    plVar4 = (long *)((long)plVar4 + -0x50);
  }
  if ((param_3 == (uint **)&MACH_HEADER.cputype) && (*puVar9 == 0x74736f68)) {
    *(undefined8 *)((long)plVar4 + -0x20) = param_2;
    *(uint **)((long)plVar4 + -0x18) = puVar10;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar12;
    *(code **)((long)plVar4 + -8) = pcVar13;
    pppppuVar12 = (undefined8 *****)((long)plVar4 + -0x10);
    *(undefined8 *)((long)plVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar11 = *(undefined8 *)puVar6;
    puVar9 = puVar6 + 2;
    puVar10 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930((undefined1 *)((long)plVar4 + -0x48),puVar9,*(undefined8 *)puVar10);
    param_3 = (uint **)((long)plVar4 + -0x48);
    FUN_0034d078(uVar11);
    puVar10 = *(uint **)((long)plVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar10) {
      do {
        lVar7 = *(long *)puVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar10,0x10);
        if (bVar3) {
          *(long *)puVar10 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(puVar10 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)plVar4 + -0x28)) {
      return puVar10;
    }
    ___stack_chk_fail();
    if ((int)param_3 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)plVar4 + -0x48));
    }
    pcVar13 = FUN_0034d010;
    puVar9 = puVar10;
    __Unwind_Resume();
    plVar4 = (long *)((long)plVar4 + -0x50);
  }
  if ((param_3 == (uint **)((long)&MACH_HEADER.flags + 1)) &&
     (((*(long *)puVar9 == 0x746e696f70646e65 && *(long *)(puVar9 + 2) == 0x656d2d64616f6c2d) &&
      *(long *)(puVar9 + 4) == 0x69622d7363697274) && (char)puVar9[6] == 'n')) {
    *(undefined8 *)((long)plVar4 + -0x20) = param_2;
    *(uint **)((long)plVar4 + -0x18) = puVar10;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar12;
    *(code **)((long)plVar4 + -8) = pcVar13;
    pppppuVar12 = (undefined8 *****)((long)plVar4 + -0x10);
    *(undefined8 *)((long)plVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar11 = *(undefined8 *)puVar6;
    puVar9 = puVar6 + 2;
    puVar10 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930((undefined1 *)((long)plVar4 + -0x48),puVar9,*(undefined8 *)puVar10);
    param_3 = (uint **)((long)plVar4 + -0x48);
    FUN_0034d284(uVar11);
    puVar10 = *(uint **)((long)plVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar10) {
      do {
        lVar7 = *(long *)puVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar10,0x10);
        if (bVar3) {
          *(long *)puVar10 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(puVar10 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)plVar4 + -0x28)) {
      return puVar10;
    }
    ___stack_chk_fail();
    if ((int)param_3 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)plVar4 + -0x48));
    }
    pcVar13 = FUN_0034d228;
    puVar9 = puVar10;
    __Unwind_Resume();
    plVar4 = (long *)((long)plVar4 + -0x50);
  }
  if ((param_3 == (uint **)((long)&MACH_HEADER.sizeofcmds + 1)) &&
     ((*(long *)puVar9 == 0x7265732d63707267 && *(long *)(puVar9 + 2) == 0x746174732d726576) &&
      *(long *)((long)puVar9 + 0xd) == 0x6e69622d73746174)) {
    *(undefined8 *)((long)plVar4 + -0x20) = param_2;
    *(uint **)((long)plVar4 + -0x18) = puVar10;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar12;
    *(code **)((long)plVar4 + -8) = pcVar13;
    pppppuVar12 = (undefined8 *****)((long)plVar4 + -0x10);
    *(undefined8 *)((long)plVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar11 = *(undefined8 *)puVar6;
    puVar9 = puVar6 + 2;
    puVar10 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930((undefined1 *)((long)plVar4 + -0x48),puVar9,*(undefined8 *)puVar10);
    param_3 = (uint **)((long)plVar4 + -0x48);
    FUN_0034d478(uVar11);
    puVar10 = *(uint **)((long)plVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar10) {
      do {
        lVar7 = *(long *)puVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar10,0x10);
        if (bVar3) {
          *(long *)puVar10 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(puVar10 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)plVar4 + -0x28)) {
      return puVar10;
    }
    ___stack_chk_fail();
    if ((int)param_3 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)plVar4 + -0x48));
    }
    pcVar13 = FUN_0034d430;
    puVar9 = puVar10;
    __Unwind_Resume();
    plVar4 = (long *)((long)plVar4 + -0x50);
  }
  if ((param_3 == (uint **)((long)&MACH_HEADER.filetype + 2)) &&
     (*(long *)puVar9 == 0x6172742d63707267 && *(long *)((long)puVar9 + 6) == 0x6e69622d65636172)) {
    *(undefined8 *)((long)plVar4 + -0x20) = param_2;
    *(uint **)((long)plVar4 + -0x18) = puVar10;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar12;
    *(code **)((long)plVar4 + -8) = pcVar13;
    pppppuVar12 = (undefined8 *****)((long)plVar4 + -0x10);
    *(undefined8 *)((long)plVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar11 = *(undefined8 *)puVar6;
    puVar9 = puVar6 + 2;
    puVar10 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930((undefined1 *)((long)plVar4 + -0x48),puVar9,*(undefined8 *)puVar10);
    param_3 = (uint **)((long)plVar4 + -0x48);
    FUN_0034d66c(uVar11);
    puVar10 = *(uint **)((long)plVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar10) {
      do {
        lVar7 = *(long *)puVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar10,0x10);
        if (bVar3) {
          *(long *)puVar10 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(puVar10 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)plVar4 + -0x28)) {
      return puVar10;
    }
    ___stack_chk_fail();
    if ((int)param_3 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)plVar4 + -0x48));
    }
    pcVar13 = FUN_0034d624;
    puVar9 = puVar10;
    __Unwind_Resume();
    plVar4 = (long *)((long)plVar4 + -0x50);
  }
  if ((param_3 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)puVar9 == 0x6761742d63707267 && *(long *)((long)puVar9 + 5) == 0x6e69622d73676174)) {
    *(undefined8 *)((long)plVar4 + -0x20) = param_2;
    *(uint **)((long)plVar4 + -0x18) = puVar10;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar12;
    *(code **)((long)plVar4 + -8) = pcVar13;
    pppppuVar12 = (undefined8 *****)((long)plVar4 + -0x10);
    *(undefined8 *)((long)plVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar11 = *(undefined8 *)puVar6;
    puVar9 = puVar6 + 2;
    puVar10 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930((undefined1 *)((long)plVar4 + -0x48),puVar9,*(undefined8 *)puVar10);
    param_3 = (uint **)((long)plVar4 + -0x48);
    FUN_0034d874(uVar11);
    puVar10 = *(uint **)((long)plVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar10) {
      do {
        lVar7 = *(long *)puVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar10,0x10);
        if (bVar3) {
          *(long *)puVar10 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(puVar10 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)plVar4 + -0x28)) {
      return puVar10;
    }
    ___stack_chk_fail();
    if ((int)param_3 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)plVar4 + -0x48));
    }
    pcVar13 = FUN_0034d818;
    puVar9 = puVar10;
    __Unwind_Resume();
    plVar4 = (long *)((long)plVar4 + -0x50);
  }
  if ((param_3 == (uint **)((long)&MACH_HEADER.ncmds + 3)) &&
     ((*(long *)puVar9 == 0x635f626c63707267 && *(long *)(puVar9 + 2) == 0x74735f746e65696c) &&
      *(long *)((long)puVar9 + 0xb) == 0x73746174735f746e)) {
    *(undefined8 *)((long)plVar4 + -0x20) = param_2;
    *(uint **)((long)plVar4 + -0x18) = puVar10;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar12;
    *(code **)((long)plVar4 + -8) = pcVar13;
    puVar9 = *(uint **)puVar6;
    puVar10 = puVar6 + 2;
    FUN_0034d9e0(puVar10,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar9 = *puVar9 | 0x200000;
    *(uint **)(puVar9 + 0x22) = puVar10;
    return puVar10;
  }
  if ((param_3 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)puVar9 == 0x2d74736f632d626c && *(long *)((long)puVar9 + 3) == 0x6e69622d74736f63)) {
    *(undefined8 *)((long)plVar4 + -0x20) = param_2;
    *(uint **)((long)plVar4 + -0x18) = puVar10;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar12;
    *(code **)((long)plVar4 + -8) = pcVar13;
    puVar10 = *(uint **)puVar6;
    FUN_0034daf8((undefined1 *)((long)plVar4 + -0x40),puVar6 + 2,*(undefined8 *)(puVar6 + 10),
                 *(undefined8 *)(puVar6 + 0xc));
    uVar1 = *puVar10;
    puVar6 = puVar10 + 0x18;
    *puVar10 = uVar1 | 0x400000;
    if ((uVar1 >> 0x16 & 1) == 0) {
      puVar10[0x20] = 0;
      puVar10[0x21] = 0;
      puVar10[0x1a] = 0;
      puVar10[0x1b] = 0;
      puVar6[0] = 0;
      puVar6[1] = 0;
      puVar10[0x1e] = 0;
      puVar10[0x1f] = 0;
      puVar10[0x1c] = 0;
      puVar10[0x1d] = 0;
    }
    FUN_0034dbcc(puVar6,(undefined1 *)((long)plVar4 + -0x40));
    if (*(char *)((long)plVar4 + -0x21) < '\0') {
      puVar6 = *(uint **)((long)plVar4 + -0x38);
      __ZdlPv(puVar6);
    }
    return puVar6;
  }
  if ((param_3 == (uint **)&MACH_HEADER.cpusubtype) && (*(long *)puVar9 == 0x6e656b6f742d626c)) {
    *(undefined8 *)((long)plVar4 + -0x20) = param_2;
    *(uint **)((long)plVar4 + -0x18) = puVar10;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar12;
    *(code **)((long)plVar4 + -8) = pcVar13;
    *(undefined8 *)((long)plVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar11 = *(undefined8 *)puVar6;
    param_3 = *(uint ***)(puVar6 + 0xc);
    FUN_0034b930((undefined1 *)((long)plVar4 + -0x48),puVar6 + 2,*(undefined8 *)(puVar6 + 10));
    puVar9 = (uint *)((long)plVar4 + -0x48);
    FUN_0034de58(uVar11);
    puVar6 = *(uint **)((long)plVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar6) {
      do {
        lVar7 = *(long *)puVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
        if (bVar3) {
          *(long *)puVar6 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(puVar6 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)plVar4 + -0x28)) {
      return puVar6;
    }
    ___stack_chk_fail();
    if ((int)puVar9 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)plVar4 + -0x48));
    }
    puVar5 = puVar6;
    __Unwind_Resume();
    *(undefined8 *)((long)plVar4 + -0x70) = param_2;
    *(uint **)((long)plVar4 + -0x68) = puVar6;
    *(undefined1 **)((long)plVar4 + -0x60) = (undefined1 *)((long)plVar4 + -0x10);
    *(code **)((long)plVar4 + -0x58) = FUN_0034de58;
    pppppuVar12 = (undefined8 *****)((long)plVar4 + -0x60);
    *(undefined8 *)((long)plVar4 + -0x78) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar1 = *puVar5;
    puVar10 = puVar5 + 0x10;
    *puVar5 = uVar1 | 0x800000;
    if ((uVar1 >> 0x17 & 1) == 0) {
      lVar15 = *(long *)(puVar9 + 2);
      lVar14 = *(long *)puVar9;
      lVar8 = *(long *)(puVar9 + 6);
      lVar7 = *(long *)(puVar9 + 4);
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9[0] = 0;
      puVar9[1] = 0;
      puVar9[6] = 0;
      puVar9[7] = 0;
      puVar9[4] = 0;
      puVar9[5] = 0;
      *(long *)(puVar5 + 0x12) = lVar15;
      *(long *)puVar10 = lVar14;
      *(long *)(puVar5 + 0x16) = lVar8;
      *(long *)(puVar5 + 0x14) = lVar7;
      puVar6 = puVar5;
    }
    else {
      lVar7 = *(long *)puVar9;
      lVar8 = *(long *)(puVar9 + 6);
      *(long *)((long)plVar4 + -0xd0) = lVar8;
      lVar15 = *(long *)(puVar9 + 4);
      lVar14 = *(long *)(puVar9 + 2);
      *(long *)((long)plVar4 + -0xd8) = lVar15;
      *(long *)((long)plVar4 + -0xe0) = lVar14;
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9[0] = 0;
      puVar9[1] = 0;
      puVar9[6] = 0;
      puVar9[7] = 0;
      puVar9[4] = 0;
      puVar9[5] = 0;
      puVar6 = *(uint **)(puVar5 + 0x10);
      uVar11 = *(undefined8 *)(puVar5 + 0x16);
      uVar17 = *(undefined8 *)(puVar5 + 0x14);
      uVar16 = *(undefined8 *)(puVar5 + 0x12);
      *(long *)(puVar5 + 0x10) = lVar7;
      *(long *)(puVar5 + 0x14) = lVar15;
      *(long *)(puVar5 + 0x12) = lVar14;
      *(long *)(puVar5 + 0x16) = lVar8;
      *(undefined8 *)((long)plVar4 + -0xd8) = uVar17;
      *(undefined8 *)((long)plVar4 + -0xe0) = uVar16;
      *(undefined8 *)((long)plVar4 + -0xd0) = uVar11;
      if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar6) {
        do {
          lVar7 = *(long *)puVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
          if (bVar3) {
            *(long *)puVar6 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 + -1 == 0) {
          (**(code **)(puVar6 + 2))();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)plVar4 + -0x78)) {
      return puVar10;
    }
    ___stack_chk_fail();
    if ((int)puVar9 == 0) {
      __Unwind_Resume();
    }
    pcVar13 = FUN_0034df40;
    func_0x0040cf10();
    plVar4 = (long *)((long)plVar4 + -0xe0);
  }
  *(undefined8 *)((long)plVar4 + -0x20) = param_2;
  *(uint **)((long)plVar4 + -0x18) = puVar10;
  *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar12;
  *(code **)((long)plVar4 + -8) = pcVar13;
  *(undefined8 *)((long)plVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  lVar7 = *(long *)puVar6;
  uVar11 = *(undefined8 *)(puVar6 + 2);
  uVar17 = *(undefined8 *)(puVar6 + 8);
  uVar16 = *(undefined8 *)(puVar6 + 6);
  *(undefined8 *)((long)plVar4 + -0x48) = *(undefined8 *)(puVar6 + 4);
  *(undefined8 *)((long)plVar4 + -0x50) = uVar11;
  *(undefined8 *)((long)plVar4 + -0x38) = uVar17;
  *(undefined8 *)((long)plVar4 + -0x40) = uVar16;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  FUN_003fe220(lVar7 + 0x1f0);
  puVar6 = *(uint **)((long)plVar4 + -0x50);
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar6) {
    do {
      lVar7 = *(long *)puVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar3) {
        *(long *)puVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(puVar6 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)plVar4 + -0x28)) {
    return puVar6;
  }
  ___stack_chk_fail();
  if ((int)puVar9 != 0) {
    func_0x0040cf10(puVar6);
    FUN_0034b418((undefined1 *)((long)plVar4 + -0x50));
  }
  __Unwind_Resume(puVar6);
  *(undefined1 **)((long)plVar4 + -0x60) = (undefined1 *)((long)plVar4 + -0x10);
  *(code **)((long)plVar4 + -0x58) = FUN_0034e004;
  *(uint **)((long)plVar4 + -0x70) = puVar9;
  *(uint ***)((long)plVar4 + -0x68) = param_3;
  FUN_0034e02c();
  return puVar6;
}



/* Entry: 0034b760; end: 0034b7fb;  */

uint * FUN_0034b760(uint *param_1,uint *param_2,uint **param_3,uint *param_4)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  undefined8 uVar9;
  undefined8 unaff_x20;
  undefined8 *****pppppuVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  char acStack_361 [681];
  uint *apuStack_b8 [4];
  long lStack_98;
  undefined8 ****ppppuStack_80;
  code *pcStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar5 = (uint *)&lStack_70;
  pppppuVar10 = (undefined8 *****)&stack0xfffffffffffffff0;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  if (*(long *)param_2 == 1) {
    lStack_68 = *(long *)(param_2 + 2);
    lStack_70 = *(long *)param_2;
    lStack_58 = *(long *)(param_2 + 6);
    lStack_60 = *(long *)(param_2 + 4);
    FUN_003ec030(&lStack_48);
  }
  else {
    if (*(long *)param_2 != 0) {
      lVar6 = *(long *)param_2;
      lVar12 = *(long *)(param_2 + 6);
      lVar7 = *(long *)(param_2 + 4);
      *(long *)(param_1 + 2) = *(long *)(param_2 + 2);
      *(long *)param_1 = lVar6;
      *(long *)(param_1 + 6) = lVar12;
      *(long *)(param_1 + 4) = lVar7;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[0] = 0;
      param_2[1] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      goto LAB_0034b7d0;
    }
    lStack_40 = *(long *)(param_2 + 2);
    lStack_48 = *(long *)param_2;
    lStack_30 = *(long *)(param_2 + 6);
    lStack_38 = *(long *)(param_2 + 4);
    puVar5 = param_2;
  }
  *(long *)(param_1 + 2) = lStack_40;
  *(long *)param_1 = lStack_48;
  *(long *)(param_1 + 6) = lStack_30;
  *(long *)(param_1 + 4) = lStack_38;
  param_2 = puVar5;
LAB_0034b7d0:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return param_2;
  }
  pcVar11 = FUN_0034b7fc;
  ___stack_chk_fail();
  plVar4 = &lStack_70;
  if ((param_3 == (uint **)((long)&MACH_HEADER.cputype + 1)) &&
     (plVar4 = &lStack_70, *param_2 == 0x7461703a && (char)param_2[1] == 'h')) {
    pcStack_78 = FUN_0034b7fc;
    lStack_98 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar9 = *(undefined8 *)param_4;
    puVar8 = param_4 + 2;
    puVar5 = param_4 + 10;
    param_4 = *(uint **)(param_4 + 0xc);
    ppppuStack_80 = pppppuVar10;
    FUN_0034b930(apuStack_b8,puVar8,*(undefined8 *)puVar5);
    param_3 = apuStack_b8;
    FUN_0034b9f8(uVar9);
    param_1 = apuStack_b8[0];
    if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_b8[0]) {
      do {
        lVar6 = *(long *)apuStack_b8[0];
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(apuStack_b8[0],0x10);
        if (bVar3) {
          *(long *)apuStack_b8[0] = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(apuStack_b8[0] + 2))();
        param_1 = apuStack_b8[0];
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_98) {
      return param_1;
    }
    ___stack_chk_fail();
    if ((int)param_3 != 0) {
      func_0x0040cf10();
      FUN_0034b418(apuStack_b8);
    }
    pcVar11 = FUN_0034b8f4;
    param_2 = param_1;
    __Unwind_Resume();
    plVar4 = (long *)(acStack_361 + 0x2a1);
    pppppuVar10 = &ppppuStack_80;
  }
  if ((param_3 == (uint **)((long)&MACH_HEADER.cpusubtype + 2)) &&
     (*(long *)param_2 == 0x69726f687475613a && (short)param_2[2] == 0x7974)) {
    *(undefined8 *)((long)plVar4 + -0x20) = unaff_x20;
    *(uint **)((long)plVar4 + -0x18) = param_1;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar10;
    *(code **)((long)plVar4 + -8) = pcVar11;
    pppppuVar10 = (undefined8 *****)((long)plVar4 + -0x10);
    *(undefined8 *)((long)plVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar9 = *(undefined8 *)param_4;
    puVar8 = param_4 + 2;
    puVar5 = param_4 + 10;
    param_4 = *(uint **)(param_4 + 0xc);
    FUN_0034b930((undefined1 *)((long)plVar4 + -0x48),puVar8,*(undefined8 *)puVar5);
    param_3 = (uint **)((long)plVar4 + -0x48);
    FUN_0034bbe0(uVar9);
    param_1 = *(uint **)((long)plVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < param_1) {
      do {
        lVar6 = *(long *)param_1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar3) {
          *(long *)param_1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(param_1 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)plVar4 + -0x28)) {
      return param_1;
    }
    ___stack_chk_fail();
    if ((int)param_3 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)plVar4 + -0x48));
    }
    pcVar11 = FUN_0034bba8;
    param_2 = param_1;
    __Unwind_Resume();
    plVar4 = (long *)((long)plVar4 + -0x50);
  }
  if ((param_3 == (uint **)((long)&MACH_HEADER.cputype + 3)) &&
     (*param_2 == 0x74656d3a && *(int *)((long)param_2 + 3) == 0x646f6874)) {
    *(undefined8 *)((long)plVar4 + -0x20) = unaff_x20;
    *(uint **)((long)plVar4 + -0x18) = param_1;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar10;
    *(code **)((long)plVar4 + -8) = pcVar11;
    puVar8 = *(uint **)param_4;
    puVar5 = param_4 + 2;
    FUN_0034bd40(puVar5,*(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
    *puVar8 = *puVar8 | 4;
    puVar8[0x6a] = (uint)puVar5;
    return puVar5;
  }
  if ((param_3 == (uint **)((long)&MACH_HEADER.cputype + 3)) &&
     (*param_2 == 0x6174733a && *(int *)((long)param_2 + 3) == 0x73757461)) {
    *(undefined8 *)((long)plVar4 + -0x20) = unaff_x20;
    *(uint **)((long)plVar4 + -0x18) = param_1;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar10;
    *(code **)((long)plVar4 + -8) = pcVar11;
    puVar8 = *(uint **)param_4;
    puVar5 = param_4 + 2;
    FUN_0034be6c(puVar5,*(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
    *puVar8 = *puVar8 | 8;
    puVar8[0x69] = (uint)puVar5;
    return puVar5;
  }
  if ((param_3 == (uint **)((long)&MACH_HEADER.cputype + 3)) &&
     (*param_2 == 0x6863733a && *(int *)((long)param_2 + 3) == 0x656d6568)) {
    *(undefined8 *)((long)plVar4 + -0x20) = unaff_x20;
    *(uint **)((long)plVar4 + -0x18) = param_1;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar10;
    *(code **)((long)plVar4 + -8) = pcVar11;
    puVar8 = *(uint **)param_4;
    puVar5 = param_4 + 2;
    FUN_0034c020(puVar5,*(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
    *puVar8 = *puVar8 | 0x10;
    puVar8[0x68] = (uint)puVar5;
    return puVar5;
  }
  if ((param_3 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)param_2 == 0x2d746e65746e6f63 && param_2[2] == 0x65707974)) {
    *(undefined8 *)((long)plVar4 + -0x20) = unaff_x20;
    *(uint **)((long)plVar4 + -0x18) = param_1;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar10;
    *(code **)((long)plVar4 + -8) = pcVar11;
    puVar8 = *(uint **)param_4;
    puVar5 = param_4 + 2;
    FUN_0034c160(puVar5,*(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
    *puVar8 = *puVar8 | 0x20;
    puVar8[0x67] = (uint)puVar5;
    return puVar5;
  }
  if ((param_3 == (uint **)((long)&MACH_HEADER.magic + 2)) && ((short)*param_2 == 0x6574)) {
    *(undefined8 *)((long)plVar4 + -0x20) = unaff_x20;
    *(uint **)((long)plVar4 + -0x18) = param_1;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar10;
    *(code **)((long)plVar4 + -8) = pcVar11;
    puVar8 = *(uint **)param_4;
    puVar5 = param_4 + 2;
    FUN_0034c29c(puVar5,*(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
    *puVar8 = *puVar8 | 0x40;
    *(char *)(puVar8 + 0x66) = (char)puVar5;
    return puVar5;
  }
  if ((param_3 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)param_2 == 0x636e652d63707267 && *(long *)((long)param_2 + 5) == 0x676e69646f636e65))
  {
    *(undefined8 *)((long)plVar4 + -0x20) = unaff_x20;
    *(uint **)((long)plVar4 + -0x18) = param_1;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar10;
    *(code **)((long)plVar4 + -8) = pcVar11;
    puVar8 = *(uint **)param_4;
    puVar5 = param_4 + 2;
    FUN_0034c404(puVar5,*(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
    *puVar8 = *puVar8 | 0x80;
    puVar8[0x65] = (uint)puVar5;
    return puVar5;
  }
  if ((param_3 == (uint **)((long)&MACH_HEADER.reserved + 2)) &&
     (((*(long *)param_2 == 0x746e692d63707267 && *(long *)(param_2 + 2) == 0x6e652d6c616e7265) &&
      *(long *)(param_2 + 4) == 0x722d676e69646f63) &&
      *(long *)((long)param_2 + 0x16) == 0x747365757165722d)) {
    *(undefined8 *)((long)plVar4 + -0x20) = unaff_x20;
    *(uint **)((long)plVar4 + -0x18) = param_1;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar10;
    *(code **)((long)plVar4 + -8) = pcVar11;
    puVar8 = *(uint **)param_4;
    puVar5 = param_4 + 2;
    FUN_0034c404(puVar5,*(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
    *puVar8 = *puVar8 | 0x100;
    puVar8[100] = (uint)puVar5;
    return puVar5;
  }
  if ((param_3 == (uint **)&MACH_HEADER.sizeofcmds) &&
     ((*(long *)param_2 == 0x6363612d63707267 && *(long *)(param_2 + 2) == 0x6f636e652d747065) &&
      param_2[4] == 0x676e6964)) {
    *(undefined8 *)((long)plVar4 + -0x20) = unaff_x20;
    *(uint **)((long)plVar4 + -0x18) = param_1;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar10;
    *(code **)((long)plVar4 + -8) = pcVar11;
    puVar8 = *(uint **)param_4;
    puVar5 = param_4 + 2;
    FUN_0034c5d0(puVar5,*(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
    *puVar8 = *puVar8 | 0x200;
    *(char *)(puVar8 + 99) = (char)puVar5;
    return puVar5;
  }
  if ((param_3 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)param_2 == 0x6174732d63707267 && *(long *)((long)param_2 + 3) == 0x7375746174732d63))
  {
    *(undefined8 *)((long)plVar4 + -0x20) = unaff_x20;
    *(uint **)((long)plVar4 + -0x18) = param_1;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar10;
    *(code **)((long)plVar4 + -8) = pcVar11;
    puVar8 = *(uint **)param_4;
    puVar5 = param_4 + 2;
    FUN_0034c724(puVar5,*(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
    *puVar8 = *puVar8 | 0x400;
    puVar8[0x62] = (uint)puVar5;
    return puVar5;
  }
  if ((param_3 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)param_2 == 0x6d69742d63707267 && param_2[2] == 0x74756f65)) {
    *(undefined8 *)((long)plVar4 + -0x20) = unaff_x20;
    *(uint **)((long)plVar4 + -0x18) = param_1;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar10;
    *(code **)((long)plVar4 + -8) = pcVar11;
    puVar8 = *(uint **)param_4;
    puVar5 = param_4 + 2;
    FUN_0034c900(puVar5,*(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
    *puVar8 = *puVar8 | 0x800;
    *(uint **)(puVar8 + 0x60) = puVar5;
    return puVar5;
  }
  if ((param_3 == (uint **)((long)&MACH_HEADER.flags + 2)) &&
     (((*(long *)param_2 == 0x6572702d63707267 && *(long *)(param_2 + 2) == 0x70722d73756f6976) &&
      *(long *)(param_2 + 4) == 0x706d657474612d63) && (short)param_2[6] == 0x7374)) {
    *(undefined8 *)((long)plVar4 + -0x20) = unaff_x20;
    *(uint **)((long)plVar4 + -0x18) = param_1;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar10;
    *(code **)((long)plVar4 + -8) = pcVar11;
    puVar8 = *(uint **)param_4;
    puVar5 = param_4 + 2;
    FUN_0034be6c(puVar5,*(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
    *puVar8 = *puVar8 | 0x1000;
    puVar8[0x5e] = (uint)puVar5;
    return puVar5;
  }
  if ((param_3 == (uint **)((long)&MACH_HEADER.sizeofcmds + 2)) &&
     ((*(long *)param_2 == 0x7465722d63707267 && *(long *)(param_2 + 2) == 0x62687375702d7972) &&
      *(long *)((long)param_2 + 0xe) == 0x736d2d6b63616268)) {
    *(undefined8 *)((long)plVar4 + -0x20) = unaff_x20;
    *(uint **)((long)plVar4 + -0x18) = param_1;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar10;
    *(code **)((long)plVar4 + -8) = pcVar11;
    puVar8 = *(uint **)param_4;
    puVar5 = param_4 + 2;
    FUN_0034cacc(puVar5,*(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
    *puVar8 = *puVar8 | 0x2000;
    *(uint **)(puVar8 + 0x5c) = puVar5;
    return puVar5;
  }
  if ((param_3 == (uint **)((long)&MACH_HEADER.cpusubtype + 2)) &&
     (*(long *)param_2 == 0x6567612d72657375 && (short)param_2[2] == 0x746e)) {
    *(undefined8 *)((long)plVar4 + -0x20) = unaff_x20;
    *(uint **)((long)plVar4 + -0x18) = param_1;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar10;
    *(code **)((long)plVar4 + -8) = pcVar11;
    pppppuVar10 = (undefined8 *****)((long)plVar4 + -0x10);
    *(undefined8 *)((long)plVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar9 = *(undefined8 *)param_4;
    puVar8 = param_4 + 2;
    puVar5 = param_4 + 10;
    param_4 = *(uint **)(param_4 + 0xc);
    FUN_0034b930((undefined1 *)((long)plVar4 + -0x48),puVar8,*(undefined8 *)puVar5);
    param_3 = (uint **)((long)plVar4 + -0x48);
    FUN_0034cc88(uVar9);
    param_1 = *(uint **)((long)plVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < param_1) {
      do {
        lVar6 = *(long *)param_1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar3) {
          *(long *)param_1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(param_1 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)plVar4 + -0x28)) {
      return param_1;
    }
    ___stack_chk_fail();
    if ((int)param_3 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)plVar4 + -0x48));
    }
    pcVar11 = FUN_0034cc48;
    param_2 = param_1;
    __Unwind_Resume();
    plVar4 = (long *)((long)plVar4 + -0x50);
  }
  if ((param_3 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)param_2 == 0x73656d2d63707267 && param_2[2] == 0x65676173)) {
    *(undefined8 *)((long)plVar4 + -0x20) = unaff_x20;
    *(uint **)((long)plVar4 + -0x18) = param_1;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar10;
    *(code **)((long)plVar4 + -8) = pcVar11;
    pppppuVar10 = (undefined8 *****)((long)plVar4 + -0x10);
    *(undefined8 *)((long)plVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar9 = *(undefined8 *)param_4;
    puVar8 = param_4 + 2;
    puVar5 = param_4 + 10;
    param_4 = *(uint **)(param_4 + 0xc);
    FUN_0034b930((undefined1 *)((long)plVar4 + -0x48),puVar8,*(undefined8 *)puVar5);
    param_3 = (uint **)((long)plVar4 + -0x48);
    FUN_0034ce60(uVar9);
    param_1 = *(uint **)((long)plVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < param_1) {
      do {
        lVar6 = *(long *)param_1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar3) {
          *(long *)param_1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(param_1 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)plVar4 + -0x28)) {
      return param_1;
    }
    ___stack_chk_fail();
    if ((int)param_3 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)plVar4 + -0x48));
    }
    pcVar11 = FUN_0034ce38;
    param_2 = param_1;
    __Unwind_Resume();
    plVar4 = (long *)((long)plVar4 + -0x50);
  }
  if ((param_3 == (uint **)&MACH_HEADER.cputype) && (*param_2 == 0x74736f68)) {
    *(undefined8 *)((long)plVar4 + -0x20) = unaff_x20;
    *(uint **)((long)plVar4 + -0x18) = param_1;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar10;
    *(code **)((long)plVar4 + -8) = pcVar11;
    pppppuVar10 = (undefined8 *****)((long)plVar4 + -0x10);
    *(undefined8 *)((long)plVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar9 = *(undefined8 *)param_4;
    puVar8 = param_4 + 2;
    puVar5 = param_4 + 10;
    param_4 = *(uint **)(param_4 + 0xc);
    FUN_0034b930((undefined1 *)((long)plVar4 + -0x48),puVar8,*(undefined8 *)puVar5);
    param_3 = (uint **)((long)plVar4 + -0x48);
    FUN_0034d078(uVar9);
    param_1 = *(uint **)((long)plVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < param_1) {
      do {
        lVar6 = *(long *)param_1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar3) {
          *(long *)param_1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(param_1 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)plVar4 + -0x28)) {
      return param_1;
    }
    ___stack_chk_fail();
    if ((int)param_3 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)plVar4 + -0x48));
    }
    pcVar11 = FUN_0034d010;
    param_2 = param_1;
    __Unwind_Resume();
    plVar4 = (long *)((long)plVar4 + -0x50);
  }
  if ((param_3 == (uint **)((long)&MACH_HEADER.flags + 1)) &&
     (((*(long *)param_2 == 0x746e696f70646e65 && *(long *)(param_2 + 2) == 0x656d2d64616f6c2d) &&
      *(long *)(param_2 + 4) == 0x69622d7363697274) && (char)param_2[6] == 'n')) {
    *(undefined8 *)((long)plVar4 + -0x20) = unaff_x20;
    *(uint **)((long)plVar4 + -0x18) = param_1;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar10;
    *(code **)((long)plVar4 + -8) = pcVar11;
    pppppuVar10 = (undefined8 *****)((long)plVar4 + -0x10);
    *(undefined8 *)((long)plVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar9 = *(undefined8 *)param_4;
    puVar8 = param_4 + 2;
    puVar5 = param_4 + 10;
    param_4 = *(uint **)(param_4 + 0xc);
    FUN_0034b930((undefined1 *)((long)plVar4 + -0x48),puVar8,*(undefined8 *)puVar5);
    param_3 = (uint **)((long)plVar4 + -0x48);
    FUN_0034d284(uVar9);
    param_1 = *(uint **)((long)plVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < param_1) {
      do {
        lVar6 = *(long *)param_1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar3) {
          *(long *)param_1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(param_1 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)plVar4 + -0x28)) {
      return param_1;
    }
    ___stack_chk_fail();
    if ((int)param_3 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)plVar4 + -0x48));
    }
    pcVar11 = FUN_0034d228;
    param_2 = param_1;
    __Unwind_Resume();
    plVar4 = (long *)((long)plVar4 + -0x50);
  }
  if ((param_3 == (uint **)((long)&MACH_HEADER.sizeofcmds + 1)) &&
     ((*(long *)param_2 == 0x7265732d63707267 && *(long *)(param_2 + 2) == 0x746174732d726576) &&
      *(long *)((long)param_2 + 0xd) == 0x6e69622d73746174)) {
    *(undefined8 *)((long)plVar4 + -0x20) = unaff_x20;
    *(uint **)((long)plVar4 + -0x18) = param_1;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar10;
    *(code **)((long)plVar4 + -8) = pcVar11;
    pppppuVar10 = (undefined8 *****)((long)plVar4 + -0x10);
    *(undefined8 *)((long)plVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar9 = *(undefined8 *)param_4;
    puVar8 = param_4 + 2;
    puVar5 = param_4 + 10;
    param_4 = *(uint **)(param_4 + 0xc);
    FUN_0034b930((undefined1 *)((long)plVar4 + -0x48),puVar8,*(undefined8 *)puVar5);
    param_3 = (uint **)((long)plVar4 + -0x48);
    FUN_0034d478(uVar9);
    param_1 = *(uint **)((long)plVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < param_1) {
      do {
        lVar6 = *(long *)param_1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar3) {
          *(long *)param_1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(param_1 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)plVar4 + -0x28)) {
      return param_1;
    }
    ___stack_chk_fail();
    if ((int)param_3 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)plVar4 + -0x48));
    }
    pcVar11 = FUN_0034d430;
    param_2 = param_1;
    __Unwind_Resume();
    plVar4 = (long *)((long)plVar4 + -0x50);
  }
  if ((param_3 == (uint **)((long)&MACH_HEADER.filetype + 2)) &&
     (*(long *)param_2 == 0x6172742d63707267 && *(long *)((long)param_2 + 6) == 0x6e69622d65636172))
  {
    *(undefined8 *)((long)plVar4 + -0x20) = unaff_x20;
    *(uint **)((long)plVar4 + -0x18) = param_1;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar10;
    *(code **)((long)plVar4 + -8) = pcVar11;
    pppppuVar10 = (undefined8 *****)((long)plVar4 + -0x10);
    *(undefined8 *)((long)plVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar9 = *(undefined8 *)param_4;
    puVar8 = param_4 + 2;
    puVar5 = param_4 + 10;
    param_4 = *(uint **)(param_4 + 0xc);
    FUN_0034b930((undefined1 *)((long)plVar4 + -0x48),puVar8,*(undefined8 *)puVar5);
    param_3 = (uint **)((long)plVar4 + -0x48);
    FUN_0034d66c(uVar9);
    param_1 = *(uint **)((long)plVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < param_1) {
      do {
        lVar6 = *(long *)param_1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar3) {
          *(long *)param_1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(param_1 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)plVar4 + -0x28)) {
      return param_1;
    }
    ___stack_chk_fail();
    if ((int)param_3 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)plVar4 + -0x48));
    }
    pcVar11 = FUN_0034d624;
    param_2 = param_1;
    __Unwind_Resume();
    plVar4 = (long *)((long)plVar4 + -0x50);
  }
  if ((param_3 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)param_2 == 0x6761742d63707267 && *(long *)((long)param_2 + 5) == 0x6e69622d73676174))
  {
    *(undefined8 *)((long)plVar4 + -0x20) = unaff_x20;
    *(uint **)((long)plVar4 + -0x18) = param_1;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar10;
    *(code **)((long)plVar4 + -8) = pcVar11;
    pppppuVar10 = (undefined8 *****)((long)plVar4 + -0x10);
    *(undefined8 *)((long)plVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar9 = *(undefined8 *)param_4;
    puVar8 = param_4 + 2;
    puVar5 = param_4 + 10;
    param_4 = *(uint **)(param_4 + 0xc);
    FUN_0034b930((undefined1 *)((long)plVar4 + -0x48),puVar8,*(undefined8 *)puVar5);
    param_3 = (uint **)((long)plVar4 + -0x48);
    FUN_0034d874(uVar9);
    param_1 = *(uint **)((long)plVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < param_1) {
      do {
        lVar6 = *(long *)param_1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar3) {
          *(long *)param_1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(param_1 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)plVar4 + -0x28)) {
      return param_1;
    }
    ___stack_chk_fail();
    if ((int)param_3 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)plVar4 + -0x48));
    }
    pcVar11 = FUN_0034d818;
    param_2 = param_1;
    __Unwind_Resume();
    plVar4 = (long *)((long)plVar4 + -0x50);
  }
  if ((param_3 == (uint **)((long)&MACH_HEADER.ncmds + 3)) &&
     ((*(long *)param_2 == 0x635f626c63707267 && *(long *)(param_2 + 2) == 0x74735f746e65696c) &&
      *(long *)((long)param_2 + 0xb) == 0x73746174735f746e)) {
    *(undefined8 *)((long)plVar4 + -0x20) = unaff_x20;
    *(uint **)((long)plVar4 + -0x18) = param_1;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar10;
    *(code **)((long)plVar4 + -8) = pcVar11;
    puVar8 = *(uint **)param_4;
    puVar5 = param_4 + 2;
    FUN_0034d9e0(puVar5,*(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
    *puVar8 = *puVar8 | 0x200000;
    *(uint **)(puVar8 + 0x22) = puVar5;
    return puVar5;
  }
  if ((param_3 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)param_2 == 0x2d74736f632d626c && *(long *)((long)param_2 + 3) == 0x6e69622d74736f63))
  {
    *(undefined8 *)((long)plVar4 + -0x20) = unaff_x20;
    *(uint **)((long)plVar4 + -0x18) = param_1;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar10;
    *(code **)((long)plVar4 + -8) = pcVar11;
    puVar8 = *(uint **)param_4;
    FUN_0034daf8((undefined1 *)((long)plVar4 + -0x40),param_4 + 2,*(undefined8 *)(param_4 + 10),
                 *(undefined8 *)(param_4 + 0xc));
    uVar1 = *puVar8;
    puVar5 = puVar8 + 0x18;
    *puVar8 = uVar1 | 0x400000;
    if ((uVar1 >> 0x16 & 1) == 0) {
      puVar8[0x20] = 0;
      puVar8[0x21] = 0;
      puVar8[0x1a] = 0;
      puVar8[0x1b] = 0;
      puVar5[0] = 0;
      puVar5[1] = 0;
      puVar8[0x1e] = 0;
      puVar8[0x1f] = 0;
      puVar8[0x1c] = 0;
      puVar8[0x1d] = 0;
    }
    FUN_0034dbcc(puVar5,(undefined1 *)((long)plVar4 + -0x40));
    if (*(char *)((long)plVar4 + -0x21) < '\0') {
      puVar5 = *(uint **)((long)plVar4 + -0x38);
      __ZdlPv(puVar5);
    }
    return puVar5;
  }
  if ((param_3 == (uint **)&MACH_HEADER.cpusubtype) && (*(long *)param_2 == 0x6e656b6f742d626c)) {
    *(undefined8 *)((long)plVar4 + -0x20) = unaff_x20;
    *(uint **)((long)plVar4 + -0x18) = param_1;
    *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar10;
    *(code **)((long)plVar4 + -8) = pcVar11;
    *(undefined8 *)((long)plVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar9 = *(undefined8 *)param_4;
    param_3 = *(uint ***)(param_4 + 0xc);
    FUN_0034b930((undefined1 *)((long)plVar4 + -0x48),param_4 + 2,*(undefined8 *)(param_4 + 10));
    param_2 = (uint *)((long)plVar4 + -0x48);
    FUN_0034de58(uVar9);
    puVar5 = *(uint **)((long)plVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar5) {
      do {
        lVar6 = *(long *)puVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar3) {
          *(long *)puVar5 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(puVar5 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)plVar4 + -0x28)) {
      return puVar5;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)plVar4 + -0x48));
    }
    puVar8 = puVar5;
    __Unwind_Resume();
    *(undefined8 *)((long)plVar4 + -0x70) = unaff_x20;
    *(uint **)((long)plVar4 + -0x68) = puVar5;
    *(undefined1 **)((long)plVar4 + -0x60) = (undefined1 *)((long)plVar4 + -0x10);
    *(code **)((long)plVar4 + -0x58) = FUN_0034de58;
    pppppuVar10 = (undefined8 *****)((long)plVar4 + -0x60);
    *(undefined8 *)((long)plVar4 + -0x78) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar1 = *puVar8;
    param_1 = puVar8 + 0x10;
    *puVar8 = uVar1 | 0x800000;
    if ((uVar1 >> 0x17 & 1) == 0) {
      lVar13 = *(long *)(param_2 + 2);
      lVar12 = *(long *)param_2;
      lVar7 = *(long *)(param_2 + 6);
      lVar6 = *(long *)(param_2 + 4);
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[0] = 0;
      param_2[1] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      *(long *)(puVar8 + 0x12) = lVar13;
      *(long *)param_1 = lVar12;
      *(long *)(puVar8 + 0x16) = lVar7;
      *(long *)(puVar8 + 0x14) = lVar6;
      param_4 = puVar8;
    }
    else {
      lVar6 = *(long *)param_2;
      lVar7 = *(long *)(param_2 + 6);
      *(long *)((long)plVar4 + -0xd0) = lVar7;
      lVar13 = *(long *)(param_2 + 4);
      lVar12 = *(long *)(param_2 + 2);
      *(long *)((long)plVar4 + -0xd8) = lVar13;
      *(long *)((long)plVar4 + -0xe0) = lVar12;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[0] = 0;
      param_2[1] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_4 = *(uint **)(puVar8 + 0x10);
      uVar9 = *(undefined8 *)(puVar8 + 0x16);
      uVar15 = *(undefined8 *)(puVar8 + 0x14);
      uVar14 = *(undefined8 *)(puVar8 + 0x12);
      *(long *)(puVar8 + 0x10) = lVar6;
      *(long *)(puVar8 + 0x14) = lVar13;
      *(long *)(puVar8 + 0x12) = lVar12;
      *(long *)(puVar8 + 0x16) = lVar7;
      *(undefined8 *)((long)plVar4 + -0xd8) = uVar15;
      *(undefined8 *)((long)plVar4 + -0xe0) = uVar14;
      *(undefined8 *)((long)plVar4 + -0xd0) = uVar9;
      if ((uint *)((long)&MACH_HEADER.magic + 1) < param_4) {
        do {
          lVar6 = *(long *)param_4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_4,0x10);
          if (bVar3) {
            *(long *)param_4 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 + -1 == 0) {
          (**(code **)(param_4 + 2))();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)plVar4 + -0x78)) {
      return param_1;
    }
    ___stack_chk_fail();
    if ((int)param_2 == 0) {
      __Unwind_Resume();
    }
    pcVar11 = FUN_0034df40;
    func_0x0040cf10();
    plVar4 = (long *)((long)plVar4 + -0xe0);
  }
  *(undefined8 *)((long)plVar4 + -0x20) = unaff_x20;
  *(uint **)((long)plVar4 + -0x18) = param_1;
  *(undefined8 ******)((long)plVar4 + -0x10) = pppppuVar10;
  *(code **)((long)plVar4 + -8) = pcVar11;
  *(undefined8 *)((long)plVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  lVar6 = *(long *)param_4;
  uVar9 = *(undefined8 *)(param_4 + 2);
  uVar15 = *(undefined8 *)(param_4 + 8);
  uVar14 = *(undefined8 *)(param_4 + 6);
  *(undefined8 *)((long)plVar4 + -0x48) = *(undefined8 *)(param_4 + 4);
  *(undefined8 *)((long)plVar4 + -0x50) = uVar9;
  *(undefined8 *)((long)plVar4 + -0x38) = uVar15;
  *(undefined8 *)((long)plVar4 + -0x40) = uVar14;
  param_4[4] = 0;
  param_4[5] = 0;
  param_4[2] = 0;
  param_4[3] = 0;
  param_4[8] = 0;
  param_4[9] = 0;
  param_4[6] = 0;
  param_4[7] = 0;
  FUN_003fe220(lVar6 + 0x1f0);
  puVar5 = *(uint **)((long)plVar4 + -0x50);
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar5) {
    do {
      lVar6 = *(long *)puVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
      if (bVar3) {
        *(long *)puVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(puVar5 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)plVar4 + -0x28)) {
    return puVar5;
  }
  ___stack_chk_fail();
  if ((int)param_2 != 0) {
    func_0x0040cf10(puVar5);
    FUN_0034b418((undefined1 *)((long)plVar4 + -0x50));
  }
  __Unwind_Resume(puVar5);
  *(undefined1 **)((long)plVar4 + -0x60) = (undefined1 *)((long)plVar4 + -0x10);
  *(code **)((long)plVar4 + -0x58) = FUN_0034e004;
  *(uint **)((long)plVar4 + -0x70) = param_2;
  *(uint ***)((long)plVar4 + -0x68) = param_3;
  FUN_0034e02c();
  return puVar5;
}



/* Entry: 0034b7fc; end: 0034b82f;  */

uint * FUN_0034b7fc(uint *param_1,uint **param_2,uint *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  uint *unaff_x19;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char acStack_2f1 [681];
  uint *apuStack_48 [4];
  long lStack_28;
  
  if ((param_2 == (uint **)((long)&MACH_HEADER.cputype + 1)) &&
     (*param_1 == 0x7461703a && (char)param_1[1] == 'h')) {
    unaff_x29 = &stack0xfffffffffffffff0;
    lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930(apuStack_48,puVar7,*(undefined8 *)puVar4);
    param_2 = apuStack_48;
    FUN_0034b9f8(uVar8);
    unaff_x19 = apuStack_48[0];
    if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_48[0]) {
      do {
        lVar5 = *(long *)apuStack_48[0];
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(apuStack_48[0],0x10);
        if (bVar3) {
          *(long *)apuStack_48[0] = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(apuStack_48[0] + 2))();
        unaff_x19 = apuStack_48[0];
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418(apuStack_48);
    }
    unaff_x30 = FUN_0034b8f4;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)(acStack_2f1 + 0x2a1);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 2)) &&
     (*(long *)param_1 == 0x69726f687475613a && (short)param_1[2] == 0x7974)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034bbe0(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034bba8;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cputype + 3)) &&
     (*param_1 == 0x74656d3a && *(int *)((long)param_1 + 3) == 0x646f6874)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034bd40(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 4;
    puVar7[0x6a] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cputype + 3)) &&
     (*param_1 == 0x6174733a && *(int *)((long)param_1 + 3) == 0x73757461)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034be6c(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 8;
    puVar7[0x69] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cputype + 3)) &&
     (*param_1 == 0x6863733a && *(int *)((long)param_1 + 3) == 0x656d6568)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c020(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x10;
    puVar7[0x68] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)param_1 == 0x2d746e65746e6f63 && param_1[2] == 0x65707974)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c160(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x20;
    puVar7[0x67] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.magic + 2)) && ((short)*param_1 == 0x6574)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c29c(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x40;
    *(char *)(puVar7 + 0x66) = (char)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)param_1 == 0x636e652d63707267 && *(long *)((long)param_1 + 5) == 0x676e69646f636e65))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c404(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x80;
    puVar7[0x65] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.reserved + 2)) &&
     (((*(long *)param_1 == 0x746e692d63707267 && *(long *)(param_1 + 2) == 0x6e652d6c616e7265) &&
      *(long *)(param_1 + 4) == 0x722d676e69646f63) &&
      *(long *)((long)param_1 + 0x16) == 0x747365757165722d)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c404(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x100;
    puVar7[100] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.sizeofcmds) &&
     ((*(long *)param_1 == 0x6363612d63707267 && *(long *)(param_1 + 2) == 0x6f636e652d747065) &&
      param_1[4] == 0x676e6964)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c5d0(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x200;
    *(char *)(puVar7 + 99) = (char)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)param_1 == 0x6174732d63707267 && *(long *)((long)param_1 + 3) == 0x7375746174732d63))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c724(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x400;
    puVar7[0x62] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)param_1 == 0x6d69742d63707267 && param_1[2] == 0x74756f65)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c900(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x800;
    *(uint **)(puVar7 + 0x60) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.flags + 2)) &&
     (((*(long *)param_1 == 0x6572702d63707267 && *(long *)(param_1 + 2) == 0x70722d73756f6976) &&
      *(long *)(param_1 + 4) == 0x706d657474612d63) && (short)param_1[6] == 0x7374)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034be6c(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x1000;
    puVar7[0x5e] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.sizeofcmds + 2)) &&
     ((*(long *)param_1 == 0x7465722d63707267 && *(long *)(param_1 + 2) == 0x62687375702d7972) &&
      *(long *)((long)param_1 + 0xe) == 0x736d2d6b63616268)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034cacc(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x2000;
    *(uint **)(puVar7 + 0x5c) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 2)) &&
     (*(long *)param_1 == 0x6567612d72657375 && (short)param_1[2] == 0x746e)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034cc88(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034cc48;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)param_1 == 0x73656d2d63707267 && param_1[2] == 0x65676173)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034ce60(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034ce38;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)&MACH_HEADER.cputype) && (*param_1 == 0x74736f68)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d078(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d010;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.flags + 1)) &&
     (((*(long *)param_1 == 0x746e696f70646e65 && *(long *)(param_1 + 2) == 0x656d2d64616f6c2d) &&
      *(long *)(param_1 + 4) == 0x69622d7363697274) && (char)param_1[6] == 'n')) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d284(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d228;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.sizeofcmds + 1)) &&
     ((*(long *)param_1 == 0x7265732d63707267 && *(long *)(param_1 + 2) == 0x746174732d726576) &&
      *(long *)((long)param_1 + 0xd) == 0x6e69622d73746174)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d478(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d430;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 2)) &&
     (*(long *)param_1 == 0x6172742d63707267 && *(long *)((long)param_1 + 6) == 0x6e69622d65636172))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d66c(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d624;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)param_1 == 0x6761742d63707267 && *(long *)((long)param_1 + 5) == 0x6e69622d73676174))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d874(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d818;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.ncmds + 3)) &&
     ((*(long *)param_1 == 0x635f626c63707267 && *(long *)(param_1 + 2) == 0x74735f746e65696c) &&
      *(long *)((long)param_1 + 0xb) == 0x73746174735f746e)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034d9e0(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x200000;
    *(uint **)(puVar7 + 0x22) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)param_1 == 0x2d74736f632d626c && *(long *)((long)param_1 + 3) == 0x6e69622d74736f63))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    FUN_0034daf8((undefined1 *)((long)register0x00000008 + -0x40),param_3 + 2,
                 *(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    uVar1 = *puVar7;
    puVar4 = puVar7 + 0x18;
    *puVar7 = uVar1 | 0x400000;
    if ((uVar1 >> 0x16 & 1) == 0) {
      puVar7[0x20] = 0;
      puVar7[0x21] = 0;
      puVar7[0x1a] = 0;
      puVar7[0x1b] = 0;
      puVar4[0] = 0;
      puVar4[1] = 0;
      puVar7[0x1e] = 0;
      puVar7[0x1f] = 0;
      puVar7[0x1c] = 0;
      puVar7[0x1d] = 0;
    }
    FUN_0034dbcc(puVar4,(undefined1 *)((long)register0x00000008 + -0x40));
    if (*(char *)((long)register0x00000008 + -0x21) < '\0') {
      puVar4 = *(uint **)((long)register0x00000008 + -0x38);
      __ZdlPv(puVar4);
    }
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.cpusubtype) && (*(long *)param_1 == 0x6e656b6f742d626c)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    param_2 = *(uint ***)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),param_3 + 2,
                 *(undefined8 *)(param_3 + 10));
    param_1 = (uint *)((long)register0x00000008 + -0x48);
    FUN_0034de58(uVar8);
    puVar4 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
      do {
        lVar5 = *(long *)puVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar3) {
          *(long *)puVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(puVar4 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return puVar4;
    }
    ___stack_chk_fail();
    if ((int)param_1 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    puVar7 = puVar4;
    __Unwind_Resume();
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x68) = puVar4;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_0034de58;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x60);
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar1 = *puVar7;
    unaff_x19 = puVar7 + 0x10;
    *puVar7 = uVar1 | 0x800000;
    if ((uVar1 >> 0x17 & 1) == 0) {
      lVar10 = *(long *)(param_1 + 2);
      lVar9 = *(long *)param_1;
      lVar6 = *(long *)(param_1 + 6);
      lVar5 = *(long *)(param_1 + 4);
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      *(long *)(puVar7 + 0x12) = lVar10;
      *(long *)unaff_x19 = lVar9;
      *(long *)(puVar7 + 0x16) = lVar6;
      *(long *)(puVar7 + 0x14) = lVar5;
      param_3 = puVar7;
    }
    else {
      lVar5 = *(long *)param_1;
      lVar6 = *(long *)(param_1 + 6);
      *(long *)((long)register0x00000008 + -0xd0) = lVar6;
      lVar10 = *(long *)(param_1 + 4);
      lVar9 = *(long *)(param_1 + 2);
      *(long *)((long)register0x00000008 + -0xd8) = lVar10;
      *(long *)((long)register0x00000008 + -0xe0) = lVar9;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_3 = *(uint **)(puVar7 + 0x10);
      uVar8 = *(undefined8 *)(puVar7 + 0x16);
      uVar12 = *(undefined8 *)(puVar7 + 0x14);
      uVar11 = *(undefined8 *)(puVar7 + 0x12);
      *(long *)(puVar7 + 0x10) = lVar5;
      *(long *)(puVar7 + 0x14) = lVar10;
      *(long *)(puVar7 + 0x12) = lVar9;
      *(long *)(puVar7 + 0x16) = lVar6;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar12;
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar11;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar8;
      if ((uint *)((long)&MACH_HEADER.magic + 1) < param_3) {
        do {
          lVar5 = *(long *)param_3;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_3,0x10);
          if (bVar3) {
            *(long *)param_3 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 + -1 == 0) {
          (**(code **)(param_3 + 2))();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x78)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_1 == 0) {
      __Unwind_Resume();
    }
    unaff_x30 = FUN_0034df40;
    func_0x0040cf10();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xe0);
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  lVar5 = *(long *)param_3;
  uVar8 = *(undefined8 *)(param_3 + 2);
  uVar12 = *(undefined8 *)(param_3 + 8);
  uVar11 = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)((long)register0x00000008 + -0x50) = uVar8;
  *(undefined8 *)((long)register0x00000008 + -0x38) = uVar12;
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar11;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  FUN_003fe220(lVar5 + 0x1f0);
  puVar4 = *(uint **)((long)register0x00000008 + -0x50);
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
    do {
      lVar5 = *(long *)puVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar3) {
        *(long *)puVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(puVar4 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)param_1 != 0) {
    func_0x0040cf10(puVar4);
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x50));
  }
  __Unwind_Resume(puVar4);
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x58) = FUN_0034e004;
  *(uint **)((long)register0x00000008 + -0x70) = param_1;
  *(uint ***)((long)register0x00000008 + -0x68) = param_2;
  FUN_0034e02c();
  return puVar4;
}



/* Entry: 0034b830; end: 0034b8f3;  */

uint * FUN_0034b830(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  uint *puVar5;
  uint *puVar6;
  uint **ppuVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  uint *puVar11;
  uint *puVar12;
  undefined8 unaff_x20;
  undefined8 *****pppppuVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  char acStack_2f1 [601];
  uint *apuStack_98 [4];
  long lStack_78;
  undefined8 ****ppppuStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [8];
  uint *apuStack_48 [4];
  long lStack_28;
  
  pppppuVar13 = (undefined8 *****)&stack0xfffffffffffffff0;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar10 = *param_1;
  puVar6 = (uint *)param_1[6];
  FUN_0034b930(apuStack_48,param_1 + 1,param_1[5]);
  ppuVar7 = apuStack_48;
  FUN_0034b9f8(uVar10);
  puVar12 = apuStack_48[0];
  if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_48[0]) {
    do {
      lVar8 = *(long *)apuStack_48[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_48[0],0x10);
      if (bVar3) {
        *(long *)apuStack_48[0] = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(apuStack_48[0] + 2))();
      puVar12 = apuStack_48[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return puVar12;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    func_0x0040cf10();
    FUN_0034b418(apuStack_48);
  }
  pcVar14 = FUN_0034b8f4;
  puVar11 = puVar12;
  __Unwind_Resume();
  pcVar4 = auStack_50;
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.cpusubtype + 2)) &&
     (pcVar4 = auStack_50, *(long *)puVar11 == 0x69726f687475613a && (short)puVar11[2] == 0x7974)) {
    pcStack_58 = FUN_0034b8f4;
    lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar10 = *(undefined8 *)puVar6;
    puVar11 = puVar6 + 2;
    puVar12 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    ppppuStack_60 = pppppuVar13;
    FUN_0034b930(apuStack_98,puVar11,*(undefined8 *)puVar12);
    ppuVar7 = apuStack_98;
    FUN_0034bbe0(uVar10);
    puVar12 = apuStack_98[0];
    if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_98[0]) {
      do {
        lVar8 = *(long *)apuStack_98[0];
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(apuStack_98[0],0x10);
        if (bVar3) {
          *(long *)apuStack_98[0] = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(apuStack_98[0] + 2))();
        puVar12 = apuStack_98[0];
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
      return puVar12;
    }
    ___stack_chk_fail();
    if ((int)ppuVar7 != 0) {
      func_0x0040cf10();
      FUN_0034b418(apuStack_98);
    }
    pcVar14 = FUN_0034bba8;
    puVar11 = puVar12;
    __Unwind_Resume();
    pcVar4 = acStack_2f1 + 0x251;
    pppppuVar13 = &ppppuStack_60;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.cputype + 3)) &&
     (*puVar11 == 0x74656d3a && *(int *)((long)puVar11 + 3) == 0x646f6874)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    puVar11 = *(uint **)puVar6;
    puVar12 = puVar6 + 2;
    FUN_0034bd40(puVar12,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar11 = *puVar11 | 4;
    puVar11[0x6a] = (uint)puVar12;
    return puVar12;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.cputype + 3)) &&
     (*puVar11 == 0x6174733a && *(int *)((long)puVar11 + 3) == 0x73757461)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    puVar11 = *(uint **)puVar6;
    puVar12 = puVar6 + 2;
    FUN_0034be6c(puVar12,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar11 = *puVar11 | 8;
    puVar11[0x69] = (uint)puVar12;
    return puVar12;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.cputype + 3)) &&
     (*puVar11 == 0x6863733a && *(int *)((long)puVar11 + 3) == 0x656d6568)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    puVar11 = *(uint **)puVar6;
    puVar12 = puVar6 + 2;
    FUN_0034c020(puVar12,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar11 = *puVar11 | 0x10;
    puVar11[0x68] = (uint)puVar12;
    return puVar12;
  }
  if ((ppuVar7 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)puVar11 == 0x2d746e65746e6f63 && puVar11[2] == 0x65707974)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    puVar11 = *(uint **)puVar6;
    puVar12 = puVar6 + 2;
    FUN_0034c160(puVar12,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar11 = *puVar11 | 0x20;
    puVar11[0x67] = (uint)puVar12;
    return puVar12;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.magic + 2)) && ((short)*puVar11 == 0x6574)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    puVar11 = *(uint **)puVar6;
    puVar12 = puVar6 + 2;
    FUN_0034c29c(puVar12,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar11 = *puVar11 | 0x40;
    *(char *)(puVar11 + 0x66) = (char)puVar12;
    return puVar12;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)puVar11 == 0x636e652d63707267 && *(long *)((long)puVar11 + 5) == 0x676e69646f636e65))
  {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    puVar11 = *(uint **)puVar6;
    puVar12 = puVar6 + 2;
    FUN_0034c404(puVar12,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar11 = *puVar11 | 0x80;
    puVar11[0x65] = (uint)puVar12;
    return puVar12;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.reserved + 2)) &&
     (((*(long *)puVar11 == 0x746e692d63707267 && *(long *)(puVar11 + 2) == 0x6e652d6c616e7265) &&
      *(long *)(puVar11 + 4) == 0x722d676e69646f63) &&
      *(long *)((long)puVar11 + 0x16) == 0x747365757165722d)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    puVar11 = *(uint **)puVar6;
    puVar12 = puVar6 + 2;
    FUN_0034c404(puVar12,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar11 = *puVar11 | 0x100;
    puVar11[100] = (uint)puVar12;
    return puVar12;
  }
  if ((ppuVar7 == (uint **)&MACH_HEADER.sizeofcmds) &&
     ((*(long *)puVar11 == 0x6363612d63707267 && *(long *)(puVar11 + 2) == 0x6f636e652d747065) &&
      puVar11[4] == 0x676e6964)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    puVar11 = *(uint **)puVar6;
    puVar12 = puVar6 + 2;
    FUN_0034c5d0(puVar12,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar11 = *puVar11 | 0x200;
    *(char *)(puVar11 + 99) = (char)puVar12;
    return puVar12;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)puVar11 == 0x6174732d63707267 && *(long *)((long)puVar11 + 3) == 0x7375746174732d63))
  {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    puVar11 = *(uint **)puVar6;
    puVar12 = puVar6 + 2;
    FUN_0034c724(puVar12,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar11 = *puVar11 | 0x400;
    puVar11[0x62] = (uint)puVar12;
    return puVar12;
  }
  if ((ppuVar7 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)puVar11 == 0x6d69742d63707267 && puVar11[2] == 0x74756f65)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    puVar11 = *(uint **)puVar6;
    puVar12 = puVar6 + 2;
    FUN_0034c900(puVar12,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar11 = *puVar11 | 0x800;
    *(uint **)(puVar11 + 0x60) = puVar12;
    return puVar12;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.flags + 2)) &&
     (((*(long *)puVar11 == 0x6572702d63707267 && *(long *)(puVar11 + 2) == 0x70722d73756f6976) &&
      *(long *)(puVar11 + 4) == 0x706d657474612d63) && (short)puVar11[6] == 0x7374)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    puVar11 = *(uint **)puVar6;
    puVar12 = puVar6 + 2;
    FUN_0034be6c(puVar12,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar11 = *puVar11 | 0x1000;
    puVar11[0x5e] = (uint)puVar12;
    return puVar12;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.sizeofcmds + 2)) &&
     ((*(long *)puVar11 == 0x7465722d63707267 && *(long *)(puVar11 + 2) == 0x62687375702d7972) &&
      *(long *)((long)puVar11 + 0xe) == 0x736d2d6b63616268)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    puVar11 = *(uint **)puVar6;
    puVar12 = puVar6 + 2;
    FUN_0034cacc(puVar12,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar11 = *puVar11 | 0x2000;
    *(uint **)(puVar11 + 0x5c) = puVar12;
    return puVar12;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.cpusubtype + 2)) &&
     (*(long *)puVar11 == 0x6567612d72657375 && (short)puVar11[2] == 0x746e)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    pppppuVar13 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar10 = *(undefined8 *)puVar6;
    puVar11 = puVar6 + 2;
    puVar12 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar11,*(undefined8 *)puVar12);
    ppuVar7 = (uint **)(pcVar4 + -0x48);
    FUN_0034cc88(uVar10);
    puVar12 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar12) {
      do {
        lVar8 = *(long *)puVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar12,0x10);
        if (bVar3) {
          *(long *)puVar12 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar12 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar12;
    }
    ___stack_chk_fail();
    if ((int)ppuVar7 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar14 = FUN_0034cc48;
    puVar11 = puVar12;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar7 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)puVar11 == 0x73656d2d63707267 && puVar11[2] == 0x65676173)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    pppppuVar13 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar10 = *(undefined8 *)puVar6;
    puVar11 = puVar6 + 2;
    puVar12 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar11,*(undefined8 *)puVar12);
    ppuVar7 = (uint **)(pcVar4 + -0x48);
    FUN_0034ce60(uVar10);
    puVar12 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar12) {
      do {
        lVar8 = *(long *)puVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar12,0x10);
        if (bVar3) {
          *(long *)puVar12 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar12 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar12;
    }
    ___stack_chk_fail();
    if ((int)ppuVar7 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar14 = FUN_0034ce38;
    puVar11 = puVar12;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar7 == (uint **)&MACH_HEADER.cputype) && (*puVar11 == 0x74736f68)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    pppppuVar13 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar10 = *(undefined8 *)puVar6;
    puVar11 = puVar6 + 2;
    puVar12 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar11,*(undefined8 *)puVar12);
    ppuVar7 = (uint **)(pcVar4 + -0x48);
    FUN_0034d078(uVar10);
    puVar12 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar12) {
      do {
        lVar8 = *(long *)puVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar12,0x10);
        if (bVar3) {
          *(long *)puVar12 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar12 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar12;
    }
    ___stack_chk_fail();
    if ((int)ppuVar7 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar14 = FUN_0034d010;
    puVar11 = puVar12;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.flags + 1)) &&
     (((*(long *)puVar11 == 0x746e696f70646e65 && *(long *)(puVar11 + 2) == 0x656d2d64616f6c2d) &&
      *(long *)(puVar11 + 4) == 0x69622d7363697274) && (char)puVar11[6] == 'n')) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    pppppuVar13 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar10 = *(undefined8 *)puVar6;
    puVar11 = puVar6 + 2;
    puVar12 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar11,*(undefined8 *)puVar12);
    ppuVar7 = (uint **)(pcVar4 + -0x48);
    FUN_0034d284(uVar10);
    puVar12 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar12) {
      do {
        lVar8 = *(long *)puVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar12,0x10);
        if (bVar3) {
          *(long *)puVar12 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar12 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar12;
    }
    ___stack_chk_fail();
    if ((int)ppuVar7 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar14 = FUN_0034d228;
    puVar11 = puVar12;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.sizeofcmds + 1)) &&
     ((*(long *)puVar11 == 0x7265732d63707267 && *(long *)(puVar11 + 2) == 0x746174732d726576) &&
      *(long *)((long)puVar11 + 0xd) == 0x6e69622d73746174)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    pppppuVar13 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar10 = *(undefined8 *)puVar6;
    puVar11 = puVar6 + 2;
    puVar12 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar11,*(undefined8 *)puVar12);
    ppuVar7 = (uint **)(pcVar4 + -0x48);
    FUN_0034d478(uVar10);
    puVar12 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar12) {
      do {
        lVar8 = *(long *)puVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar12,0x10);
        if (bVar3) {
          *(long *)puVar12 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar12 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar12;
    }
    ___stack_chk_fail();
    if ((int)ppuVar7 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar14 = FUN_0034d430;
    puVar11 = puVar12;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.filetype + 2)) &&
     (*(long *)puVar11 == 0x6172742d63707267 && *(long *)((long)puVar11 + 6) == 0x6e69622d65636172))
  {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    pppppuVar13 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar10 = *(undefined8 *)puVar6;
    puVar11 = puVar6 + 2;
    puVar12 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar11,*(undefined8 *)puVar12);
    ppuVar7 = (uint **)(pcVar4 + -0x48);
    FUN_0034d66c(uVar10);
    puVar12 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar12) {
      do {
        lVar8 = *(long *)puVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar12,0x10);
        if (bVar3) {
          *(long *)puVar12 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar12 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar12;
    }
    ___stack_chk_fail();
    if ((int)ppuVar7 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar14 = FUN_0034d624;
    puVar11 = puVar12;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)puVar11 == 0x6761742d63707267 && *(long *)((long)puVar11 + 5) == 0x6e69622d73676174))
  {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    pppppuVar13 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar10 = *(undefined8 *)puVar6;
    puVar11 = puVar6 + 2;
    puVar12 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar11,*(undefined8 *)puVar12);
    ppuVar7 = (uint **)(pcVar4 + -0x48);
    FUN_0034d874(uVar10);
    puVar12 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar12) {
      do {
        lVar8 = *(long *)puVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar12,0x10);
        if (bVar3) {
          *(long *)puVar12 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar12 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar12;
    }
    ___stack_chk_fail();
    if ((int)ppuVar7 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar14 = FUN_0034d818;
    puVar11 = puVar12;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.ncmds + 3)) &&
     ((*(long *)puVar11 == 0x635f626c63707267 && *(long *)(puVar11 + 2) == 0x74735f746e65696c) &&
      *(long *)((long)puVar11 + 0xb) == 0x73746174735f746e)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    puVar11 = *(uint **)puVar6;
    puVar12 = puVar6 + 2;
    FUN_0034d9e0(puVar12,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar11 = *puVar11 | 0x200000;
    *(uint **)(puVar11 + 0x22) = puVar12;
    return puVar12;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)puVar11 == 0x2d74736f632d626c && *(long *)((long)puVar11 + 3) == 0x6e69622d74736f63))
  {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    puVar12 = *(uint **)puVar6;
    FUN_0034daf8(pcVar4 + -0x40,puVar6 + 2,*(undefined8 *)(puVar6 + 10),
                 *(undefined8 *)(puVar6 + 0xc));
    uVar1 = *puVar12;
    puVar6 = puVar12 + 0x18;
    *puVar12 = uVar1 | 0x400000;
    if ((uVar1 >> 0x16 & 1) == 0) {
      puVar12[0x20] = 0;
      puVar12[0x21] = 0;
      puVar12[0x1a] = 0;
      puVar12[0x1b] = 0;
      puVar6[0] = 0;
      puVar6[1] = 0;
      puVar12[0x1e] = 0;
      puVar12[0x1f] = 0;
      puVar12[0x1c] = 0;
      puVar12[0x1d] = 0;
    }
    FUN_0034dbcc(puVar6,pcVar4 + -0x40);
    if (pcVar4[-0x21] < '\0') {
      puVar6 = *(uint **)(pcVar4 + -0x38);
      __ZdlPv(puVar6);
    }
    return puVar6;
  }
  if ((ppuVar7 == (uint **)&MACH_HEADER.cpusubtype) && (*(long *)puVar11 == 0x6e656b6f742d626c)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar10 = *(undefined8 *)puVar6;
    ppuVar7 = *(uint ***)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar6 + 2,*(undefined8 *)(puVar6 + 10));
    puVar11 = (uint *)(pcVar4 + -0x48);
    FUN_0034de58(uVar10);
    puVar6 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar6) {
      do {
        lVar8 = *(long *)puVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
        if (bVar3) {
          *(long *)puVar6 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar6 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar6;
    }
    ___stack_chk_fail();
    if ((int)puVar11 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    puVar5 = puVar6;
    __Unwind_Resume();
    *(undefined8 *)(pcVar4 + -0x70) = unaff_x20;
    *(uint **)(pcVar4 + -0x68) = puVar6;
    *(char **)(pcVar4 + -0x60) = pcVar4 + -0x10;
    *(code **)(pcVar4 + -0x58) = FUN_0034de58;
    pppppuVar13 = (undefined8 *****)(pcVar4 + -0x60);
    *(undefined8 *)(pcVar4 + -0x78) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar1 = *puVar5;
    puVar12 = puVar5 + 0x10;
    *puVar5 = uVar1 | 0x800000;
    if ((uVar1 >> 0x17 & 1) == 0) {
      lVar16 = *(long *)(puVar11 + 2);
      lVar15 = *(long *)puVar11;
      lVar9 = *(long *)(puVar11 + 6);
      lVar8 = *(long *)(puVar11 + 4);
      puVar11[2] = 0;
      puVar11[3] = 0;
      puVar11[0] = 0;
      puVar11[1] = 0;
      puVar11[6] = 0;
      puVar11[7] = 0;
      puVar11[4] = 0;
      puVar11[5] = 0;
      *(long *)(puVar5 + 0x12) = lVar16;
      *(long *)puVar12 = lVar15;
      *(long *)(puVar5 + 0x16) = lVar9;
      *(long *)(puVar5 + 0x14) = lVar8;
      puVar6 = puVar5;
    }
    else {
      lVar8 = *(long *)puVar11;
      lVar9 = *(long *)(puVar11 + 6);
      *(long *)(pcVar4 + -0xd0) = lVar9;
      lVar16 = *(long *)(puVar11 + 4);
      lVar15 = *(long *)(puVar11 + 2);
      *(long *)(pcVar4 + -0xd8) = lVar16;
      *(long *)(pcVar4 + -0xe0) = lVar15;
      puVar11[2] = 0;
      puVar11[3] = 0;
      puVar11[0] = 0;
      puVar11[1] = 0;
      puVar11[6] = 0;
      puVar11[7] = 0;
      puVar11[4] = 0;
      puVar11[5] = 0;
      puVar6 = *(uint **)(puVar5 + 0x10);
      uVar10 = *(undefined8 *)(puVar5 + 0x16);
      uVar18 = *(undefined8 *)(puVar5 + 0x14);
      uVar17 = *(undefined8 *)(puVar5 + 0x12);
      *(long *)(puVar5 + 0x10) = lVar8;
      *(long *)(puVar5 + 0x14) = lVar16;
      *(long *)(puVar5 + 0x12) = lVar15;
      *(long *)(puVar5 + 0x16) = lVar9;
      *(undefined8 *)(pcVar4 + -0xd8) = uVar18;
      *(undefined8 *)(pcVar4 + -0xe0) = uVar17;
      *(undefined8 *)(pcVar4 + -0xd0) = uVar10;
      if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar6) {
        do {
          lVar8 = *(long *)puVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
          if (bVar3) {
            *(long *)puVar6 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 + -1 == 0) {
          (**(code **)(puVar6 + 2))();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x78)) {
      return puVar12;
    }
    ___stack_chk_fail();
    if ((int)puVar11 == 0) {
      __Unwind_Resume();
    }
    pcVar14 = FUN_0034df40;
    func_0x0040cf10();
    pcVar4 = pcVar4 + -0xe0;
  }
  *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
  *(uint **)(pcVar4 + -0x18) = puVar12;
  *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
  *(code **)(pcVar4 + -8) = pcVar14;
  *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  lVar8 = *(long *)puVar6;
  uVar10 = *(undefined8 *)(puVar6 + 2);
  uVar18 = *(undefined8 *)(puVar6 + 8);
  uVar17 = *(undefined8 *)(puVar6 + 6);
  *(undefined8 *)(pcVar4 + -0x48) = *(undefined8 *)(puVar6 + 4);
  *(undefined8 *)(pcVar4 + -0x50) = uVar10;
  *(undefined8 *)(pcVar4 + -0x38) = uVar18;
  *(undefined8 *)(pcVar4 + -0x40) = uVar17;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  FUN_003fe220(lVar8 + 0x1f0);
  puVar6 = *(uint **)(pcVar4 + -0x50);
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar6) {
    do {
      lVar8 = *(long *)puVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar3) {
        *(long *)puVar6 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(puVar6 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
    return puVar6;
  }
  ___stack_chk_fail();
  if ((int)puVar11 != 0) {
    func_0x0040cf10(puVar6);
    FUN_0034b418(pcVar4 + -0x50);
  }
  __Unwind_Resume(puVar6);
  *(char **)(pcVar4 + -0x60) = pcVar4 + -0x10;
  *(code **)(pcVar4 + -0x58) = FUN_0034e004;
  *(uint **)(pcVar4 + -0x70) = puVar11;
  *(uint ***)(pcVar4 + -0x68) = ppuVar7;
  FUN_0034e02c();
  return puVar6;
}



/* Entry: 0034b8f4; end: 0034b92f;  */

uint * FUN_0034b8f4(uint *param_1,uint **param_2,uint *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  uint *unaff_x19;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char acStack_2a1 [601];
  uint *apuStack_48 [4];
  long lStack_28;
  
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 2)) &&
     (*(long *)param_1 == 0x69726f687475613a && (short)param_1[2] == 0x7974)) {
    unaff_x29 = &stack0xfffffffffffffff0;
    lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930(apuStack_48,puVar7,*(undefined8 *)puVar4);
    param_2 = apuStack_48;
    FUN_0034bbe0(uVar8);
    unaff_x19 = apuStack_48[0];
    if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_48[0]) {
      do {
        lVar5 = *(long *)apuStack_48[0];
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(apuStack_48[0],0x10);
        if (bVar3) {
          *(long *)apuStack_48[0] = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(apuStack_48[0] + 2))();
        unaff_x19 = apuStack_48[0];
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418(apuStack_48);
    }
    unaff_x30 = FUN_0034bba8;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)(acStack_2a1 + 0x251);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cputype + 3)) &&
     (*param_1 == 0x74656d3a && *(int *)((long)param_1 + 3) == 0x646f6874)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034bd40(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 4;
    puVar7[0x6a] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cputype + 3)) &&
     (*param_1 == 0x6174733a && *(int *)((long)param_1 + 3) == 0x73757461)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034be6c(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 8;
    puVar7[0x69] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cputype + 3)) &&
     (*param_1 == 0x6863733a && *(int *)((long)param_1 + 3) == 0x656d6568)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c020(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x10;
    puVar7[0x68] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)param_1 == 0x2d746e65746e6f63 && param_1[2] == 0x65707974)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c160(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x20;
    puVar7[0x67] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.magic + 2)) && ((short)*param_1 == 0x6574)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c29c(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x40;
    *(char *)(puVar7 + 0x66) = (char)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)param_1 == 0x636e652d63707267 && *(long *)((long)param_1 + 5) == 0x676e69646f636e65))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c404(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x80;
    puVar7[0x65] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.reserved + 2)) &&
     (((*(long *)param_1 == 0x746e692d63707267 && *(long *)(param_1 + 2) == 0x6e652d6c616e7265) &&
      *(long *)(param_1 + 4) == 0x722d676e69646f63) &&
      *(long *)((long)param_1 + 0x16) == 0x747365757165722d)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c404(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x100;
    puVar7[100] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.sizeofcmds) &&
     ((*(long *)param_1 == 0x6363612d63707267 && *(long *)(param_1 + 2) == 0x6f636e652d747065) &&
      param_1[4] == 0x676e6964)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c5d0(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x200;
    *(char *)(puVar7 + 99) = (char)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)param_1 == 0x6174732d63707267 && *(long *)((long)param_1 + 3) == 0x7375746174732d63))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c724(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x400;
    puVar7[0x62] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)param_1 == 0x6d69742d63707267 && param_1[2] == 0x74756f65)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c900(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x800;
    *(uint **)(puVar7 + 0x60) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.flags + 2)) &&
     (((*(long *)param_1 == 0x6572702d63707267 && *(long *)(param_1 + 2) == 0x70722d73756f6976) &&
      *(long *)(param_1 + 4) == 0x706d657474612d63) && (short)param_1[6] == 0x7374)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034be6c(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x1000;
    puVar7[0x5e] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.sizeofcmds + 2)) &&
     ((*(long *)param_1 == 0x7465722d63707267 && *(long *)(param_1 + 2) == 0x62687375702d7972) &&
      *(long *)((long)param_1 + 0xe) == 0x736d2d6b63616268)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034cacc(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x2000;
    *(uint **)(puVar7 + 0x5c) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 2)) &&
     (*(long *)param_1 == 0x6567612d72657375 && (short)param_1[2] == 0x746e)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034cc88(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034cc48;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)param_1 == 0x73656d2d63707267 && param_1[2] == 0x65676173)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034ce60(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034ce38;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)&MACH_HEADER.cputype) && (*param_1 == 0x74736f68)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d078(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d010;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.flags + 1)) &&
     (((*(long *)param_1 == 0x746e696f70646e65 && *(long *)(param_1 + 2) == 0x656d2d64616f6c2d) &&
      *(long *)(param_1 + 4) == 0x69622d7363697274) && (char)param_1[6] == 'n')) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d284(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d228;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.sizeofcmds + 1)) &&
     ((*(long *)param_1 == 0x7265732d63707267 && *(long *)(param_1 + 2) == 0x746174732d726576) &&
      *(long *)((long)param_1 + 0xd) == 0x6e69622d73746174)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d478(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d430;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 2)) &&
     (*(long *)param_1 == 0x6172742d63707267 && *(long *)((long)param_1 + 6) == 0x6e69622d65636172))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d66c(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d624;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)param_1 == 0x6761742d63707267 && *(long *)((long)param_1 + 5) == 0x6e69622d73676174))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d874(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d818;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.ncmds + 3)) &&
     ((*(long *)param_1 == 0x635f626c63707267 && *(long *)(param_1 + 2) == 0x74735f746e65696c) &&
      *(long *)((long)param_1 + 0xb) == 0x73746174735f746e)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034d9e0(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x200000;
    *(uint **)(puVar7 + 0x22) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)param_1 == 0x2d74736f632d626c && *(long *)((long)param_1 + 3) == 0x6e69622d74736f63))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    FUN_0034daf8((undefined1 *)((long)register0x00000008 + -0x40),param_3 + 2,
                 *(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    uVar1 = *puVar7;
    puVar4 = puVar7 + 0x18;
    *puVar7 = uVar1 | 0x400000;
    if ((uVar1 >> 0x16 & 1) == 0) {
      puVar7[0x20] = 0;
      puVar7[0x21] = 0;
      puVar7[0x1a] = 0;
      puVar7[0x1b] = 0;
      puVar4[0] = 0;
      puVar4[1] = 0;
      puVar7[0x1e] = 0;
      puVar7[0x1f] = 0;
      puVar7[0x1c] = 0;
      puVar7[0x1d] = 0;
    }
    FUN_0034dbcc(puVar4,(undefined1 *)((long)register0x00000008 + -0x40));
    if (*(char *)((long)register0x00000008 + -0x21) < '\0') {
      puVar4 = *(uint **)((long)register0x00000008 + -0x38);
      __ZdlPv(puVar4);
    }
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.cpusubtype) && (*(long *)param_1 == 0x6e656b6f742d626c)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    param_2 = *(uint ***)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),param_3 + 2,
                 *(undefined8 *)(param_3 + 10));
    param_1 = (uint *)((long)register0x00000008 + -0x48);
    FUN_0034de58(uVar8);
    puVar4 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
      do {
        lVar5 = *(long *)puVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar3) {
          *(long *)puVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(puVar4 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return puVar4;
    }
    ___stack_chk_fail();
    if ((int)param_1 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    puVar7 = puVar4;
    __Unwind_Resume();
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x68) = puVar4;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_0034de58;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x60);
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar1 = *puVar7;
    unaff_x19 = puVar7 + 0x10;
    *puVar7 = uVar1 | 0x800000;
    if ((uVar1 >> 0x17 & 1) == 0) {
      lVar10 = *(long *)(param_1 + 2);
      lVar9 = *(long *)param_1;
      lVar6 = *(long *)(param_1 + 6);
      lVar5 = *(long *)(param_1 + 4);
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      *(long *)(puVar7 + 0x12) = lVar10;
      *(long *)unaff_x19 = lVar9;
      *(long *)(puVar7 + 0x16) = lVar6;
      *(long *)(puVar7 + 0x14) = lVar5;
      param_3 = puVar7;
    }
    else {
      lVar5 = *(long *)param_1;
      lVar6 = *(long *)(param_1 + 6);
      *(long *)((long)register0x00000008 + -0xd0) = lVar6;
      lVar10 = *(long *)(param_1 + 4);
      lVar9 = *(long *)(param_1 + 2);
      *(long *)((long)register0x00000008 + -0xd8) = lVar10;
      *(long *)((long)register0x00000008 + -0xe0) = lVar9;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_3 = *(uint **)(puVar7 + 0x10);
      uVar8 = *(undefined8 *)(puVar7 + 0x16);
      uVar12 = *(undefined8 *)(puVar7 + 0x14);
      uVar11 = *(undefined8 *)(puVar7 + 0x12);
      *(long *)(puVar7 + 0x10) = lVar5;
      *(long *)(puVar7 + 0x14) = lVar10;
      *(long *)(puVar7 + 0x12) = lVar9;
      *(long *)(puVar7 + 0x16) = lVar6;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar12;
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar11;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar8;
      if ((uint *)((long)&MACH_HEADER.magic + 1) < param_3) {
        do {
          lVar5 = *(long *)param_3;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_3,0x10);
          if (bVar3) {
            *(long *)param_3 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 + -1 == 0) {
          (**(code **)(param_3 + 2))();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x78)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_1 == 0) {
      __Unwind_Resume();
    }
    unaff_x30 = FUN_0034df40;
    func_0x0040cf10();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xe0);
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  lVar5 = *(long *)param_3;
  uVar8 = *(undefined8 *)(param_3 + 2);
  uVar12 = *(undefined8 *)(param_3 + 8);
  uVar11 = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)((long)register0x00000008 + -0x50) = uVar8;
  *(undefined8 *)((long)register0x00000008 + -0x38) = uVar12;
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar11;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  FUN_003fe220(lVar5 + 0x1f0);
  puVar4 = *(uint **)((long)register0x00000008 + -0x50);
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
    do {
      lVar5 = *(long *)puVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar3) {
        *(long *)puVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(puVar4 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)param_1 != 0) {
    func_0x0040cf10(puVar4);
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x50));
  }
  __Unwind_Resume(puVar4);
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x58) = FUN_0034e004;
  *(uint **)((long)register0x00000008 + -0x70) = param_1;
  *(uint ***)((long)register0x00000008 + -0x68) = param_2;
  FUN_0034e02c();
  return puVar4;
}



/* Entry: 0034b930; end: 0034b9f7;  */

uint * FUN_0034b930(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  uint **ppuVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  uint *puVar13;
  uint *puVar14;
  undefined8 unaff_x20;
  undefined8 *****pppppuVar15;
  code *pcVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  char acStack_3a1 [521];
  uint *apuStack_198 [4];
  long lStack_178;
  undefined8 ****ppppuStack_160;
  code *pcStack_158;
  undefined1 auStack_150 [8];
  uint *apuStack_148 [4];
  long lStack_128;
  undefined8 ***pppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_98;
  undefined8 **ppuStack_80;
  code *pcStack_78;
  uint *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_68 = param_2[1];
  puStack_70 = (uint *)*param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  FUN_0034b760(&uStack_50,&puStack_70);
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = uStack_40;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  puVar6 = puStack_70;
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puStack_70) {
    do {
      lVar9 = *(long *)puStack_70;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puStack_70,0x10);
      if (bVar3) {
        *(long *)puStack_70 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(puStack_70 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return puVar6;
  }
  ___stack_chk_fail();
  if ((int)param_3 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&puStack_70);
  }
  __Unwind_Resume();
  pcStack_78 = FUN_0034b9f8;
  lStack_98 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = *puVar6;
  *puVar6 = uVar1 | 1;
  ppuStack_80 = (undefined8 **)&stack0xfffffffffffffff0;
  if ((uVar1 & 1) == 0) {
    uVar19 = param_3[1];
    uVar17 = *param_3;
    uVar10 = param_3[3];
    uVar12 = param_3[2];
    param_3[1] = 0;
    *param_3 = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    *(undefined8 *)(puVar6 + 0x76) = uVar19;
    *(undefined8 *)(puVar6 + 0x74) = uVar17;
    *(undefined8 *)(puVar6 + 0x7a) = uVar10;
    *(undefined8 *)(puVar6 + 0x78) = uVar12;
    puVar14 = puVar6;
  }
  else {
    uVar12 = *param_3;
    uVar10 = param_3[3];
    uVar19 = param_3[2];
    uVar17 = param_3[1];
    param_3[1] = 0;
    *param_3 = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    puVar14 = *(uint **)(puVar6 + 0x74);
    uStack_f0 = *(undefined8 *)(puVar6 + 0x7a);
    uStack_f8 = *(undefined8 *)(puVar6 + 0x78);
    uStack_100 = *(undefined8 *)(puVar6 + 0x76);
    *(undefined8 *)(puVar6 + 0x74) = uVar12;
    *(undefined8 *)(puVar6 + 0x78) = uVar19;
    *(undefined8 *)(puVar6 + 0x76) = uVar17;
    *(undefined8 *)(puVar6 + 0x7a) = uVar10;
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar14) {
      do {
        lVar9 = *(long *)puVar14;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar14,0x10);
        if (bVar3) {
          *(long *)puVar14 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(puVar14 + 2))();
      }
    }
  }
  iVar7 = (int)param_3;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_98) {
    return puVar6 + 0x74;
  }
  ___stack_chk_fail();
  if (iVar7 == 0) {
    __Unwind_Resume();
  }
  func_0x0040cf10();
  pcStack_108 = FUN_0034bae4;
  pppppuVar15 = (undefined8 *****)&pppuStack_110;
  lStack_128 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar12 = *(undefined8 *)puVar14;
  puVar6 = *(uint **)(puVar14 + 0xc);
  pppuStack_110 = &ppuStack_80;
  FUN_0034b930(apuStack_148,puVar14 + 2,*(undefined8 *)(puVar14 + 10));
  ppuVar8 = apuStack_148;
  FUN_0034bbe0(uVar12);
  puVar14 = apuStack_148[0];
  if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_148[0]) {
    do {
      lVar9 = *(long *)apuStack_148[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_148[0],0x10);
      if (bVar3) {
        *(long *)apuStack_148[0] = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(apuStack_148[0] + 2))();
      puVar14 = apuStack_148[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_128) {
    return puVar14;
  }
  ___stack_chk_fail();
  if ((int)ppuVar8 != 0) {
    func_0x0040cf10();
    FUN_0034b418(apuStack_148);
  }
  pcVar16 = FUN_0034bba8;
  puVar13 = puVar14;
  __Unwind_Resume();
  if ((ppuVar8 == (uint **)((long)&MACH_HEADER.cputype + 3)) &&
     (*puVar13 == 0x74656d3a && *(int *)((long)puVar13 + 3) == 0x646f6874)) {
    pcStack_158 = FUN_0034bba8;
    puVar13 = *(uint **)puVar6;
    puVar14 = puVar6 + 2;
    ppppuStack_160 = pppppuVar15;
    FUN_0034bd40(puVar14,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar13 = *puVar13 | 4;
    puVar13[0x6a] = (uint)puVar14;
    return puVar14;
  }
  if ((ppuVar8 == (uint **)((long)&MACH_HEADER.cputype + 3)) &&
     (*puVar13 == 0x6174733a && *(int *)((long)puVar13 + 3) == 0x73757461)) {
    pcStack_158 = FUN_0034bba8;
    puVar13 = *(uint **)puVar6;
    puVar14 = puVar6 + 2;
    ppppuStack_160 = pppppuVar15;
    FUN_0034be6c(puVar14,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar13 = *puVar13 | 8;
    puVar13[0x69] = (uint)puVar14;
    return puVar14;
  }
  if ((ppuVar8 == (uint **)((long)&MACH_HEADER.cputype + 3)) &&
     (*puVar13 == 0x6863733a && *(int *)((long)puVar13 + 3) == 0x656d6568)) {
    pcStack_158 = FUN_0034bba8;
    puVar13 = *(uint **)puVar6;
    puVar14 = puVar6 + 2;
    ppppuStack_160 = pppppuVar15;
    FUN_0034c020(puVar14,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar13 = *puVar13 | 0x10;
    puVar13[0x68] = (uint)puVar14;
    return puVar14;
  }
  if ((ppuVar8 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)puVar13 == 0x2d746e65746e6f63 && puVar13[2] == 0x65707974)) {
    pcStack_158 = FUN_0034bba8;
    puVar13 = *(uint **)puVar6;
    puVar14 = puVar6 + 2;
    ppppuStack_160 = pppppuVar15;
    FUN_0034c160(puVar14,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar13 = *puVar13 | 0x20;
    puVar13[0x67] = (uint)puVar14;
    return puVar14;
  }
  if ((ppuVar8 == (uint **)((long)&MACH_HEADER.magic + 2)) && ((short)*puVar13 == 0x6574)) {
    pcStack_158 = FUN_0034bba8;
    puVar13 = *(uint **)puVar6;
    puVar14 = puVar6 + 2;
    ppppuStack_160 = pppppuVar15;
    FUN_0034c29c(puVar14,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar13 = *puVar13 | 0x40;
    *(char *)(puVar13 + 0x66) = (char)puVar14;
    return puVar14;
  }
  if ((ppuVar8 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)puVar13 == 0x636e652d63707267 && *(long *)((long)puVar13 + 5) == 0x676e69646f636e65))
  {
    pcStack_158 = FUN_0034bba8;
    puVar13 = *(uint **)puVar6;
    puVar14 = puVar6 + 2;
    ppppuStack_160 = pppppuVar15;
    FUN_0034c404(puVar14,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar13 = *puVar13 | 0x80;
    puVar13[0x65] = (uint)puVar14;
    return puVar14;
  }
  if ((ppuVar8 == (uint **)((long)&MACH_HEADER.reserved + 2)) &&
     (((*(long *)puVar13 == 0x746e692d63707267 && *(long *)(puVar13 + 2) == 0x6e652d6c616e7265) &&
      *(long *)(puVar13 + 4) == 0x722d676e69646f63) &&
      *(long *)((long)puVar13 + 0x16) == 0x747365757165722d)) {
    pcStack_158 = FUN_0034bba8;
    puVar13 = *(uint **)puVar6;
    puVar14 = puVar6 + 2;
    ppppuStack_160 = pppppuVar15;
    FUN_0034c404(puVar14,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar13 = *puVar13 | 0x100;
    puVar13[100] = (uint)puVar14;
    return puVar14;
  }
  if ((ppuVar8 == (uint **)&MACH_HEADER.sizeofcmds) &&
     ((*(long *)puVar13 == 0x6363612d63707267 && *(long *)(puVar13 + 2) == 0x6f636e652d747065) &&
      puVar13[4] == 0x676e6964)) {
    pcStack_158 = FUN_0034bba8;
    puVar13 = *(uint **)puVar6;
    puVar14 = puVar6 + 2;
    ppppuStack_160 = pppppuVar15;
    FUN_0034c5d0(puVar14,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar13 = *puVar13 | 0x200;
    *(char *)(puVar13 + 99) = (char)puVar14;
    return puVar14;
  }
  if ((ppuVar8 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)puVar13 == 0x6174732d63707267 && *(long *)((long)puVar13 + 3) == 0x7375746174732d63))
  {
    pcStack_158 = FUN_0034bba8;
    puVar13 = *(uint **)puVar6;
    puVar14 = puVar6 + 2;
    ppppuStack_160 = pppppuVar15;
    FUN_0034c724(puVar14,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar13 = *puVar13 | 0x400;
    puVar13[0x62] = (uint)puVar14;
    return puVar14;
  }
  if ((ppuVar8 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)puVar13 == 0x6d69742d63707267 && puVar13[2] == 0x74756f65)) {
    pcStack_158 = FUN_0034bba8;
    puVar13 = *(uint **)puVar6;
    puVar14 = puVar6 + 2;
    ppppuStack_160 = pppppuVar15;
    FUN_0034c900(puVar14,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar13 = *puVar13 | 0x800;
    *(uint **)(puVar13 + 0x60) = puVar14;
    return puVar14;
  }
  if ((ppuVar8 == (uint **)((long)&MACH_HEADER.flags + 2)) &&
     (((*(long *)puVar13 == 0x6572702d63707267 && *(long *)(puVar13 + 2) == 0x70722d73756f6976) &&
      *(long *)(puVar13 + 4) == 0x706d657474612d63) && (short)puVar13[6] == 0x7374)) {
    pcStack_158 = FUN_0034bba8;
    puVar13 = *(uint **)puVar6;
    puVar14 = puVar6 + 2;
    ppppuStack_160 = pppppuVar15;
    FUN_0034be6c(puVar14,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar13 = *puVar13 | 0x1000;
    puVar13[0x5e] = (uint)puVar14;
    return puVar14;
  }
  if ((ppuVar8 == (uint **)((long)&MACH_HEADER.sizeofcmds + 2)) &&
     ((*(long *)puVar13 == 0x7465722d63707267 && *(long *)(puVar13 + 2) == 0x62687375702d7972) &&
      *(long *)((long)puVar13 + 0xe) == 0x736d2d6b63616268)) {
    pcStack_158 = FUN_0034bba8;
    puVar13 = *(uint **)puVar6;
    puVar14 = puVar6 + 2;
    ppppuStack_160 = pppppuVar15;
    FUN_0034cacc(puVar14,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar13 = *puVar13 | 0x2000;
    *(uint **)(puVar13 + 0x5c) = puVar14;
    return puVar14;
  }
  pcVar4 = auStack_150;
  if ((ppuVar8 == (uint **)((long)&MACH_HEADER.cpusubtype + 2)) &&
     (pcVar4 = auStack_150, *(long *)puVar13 == 0x6567612d72657375 && (short)puVar13[2] == 0x746e))
  {
    pcStack_158 = FUN_0034bba8;
    lStack_178 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar12 = *(undefined8 *)puVar6;
    puVar13 = puVar6 + 2;
    puVar14 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    ppppuStack_160 = pppppuVar15;
    FUN_0034b930(apuStack_198,puVar13,*(undefined8 *)puVar14);
    ppuVar8 = apuStack_198;
    FUN_0034cc88(uVar12);
    puVar14 = apuStack_198[0];
    if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_198[0]) {
      do {
        lVar9 = *(long *)apuStack_198[0];
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(apuStack_198[0],0x10);
        if (bVar3) {
          *(long *)apuStack_198[0] = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(apuStack_198[0] + 2))();
        puVar14 = apuStack_198[0];
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_178) {
      return puVar14;
    }
    ___stack_chk_fail();
    if ((int)ppuVar8 != 0) {
      func_0x0040cf10();
      FUN_0034b418(apuStack_198);
    }
    pcVar16 = FUN_0034cc48;
    puVar13 = puVar14;
    __Unwind_Resume();
    pcVar4 = acStack_3a1 + 0x201;
    pppppuVar15 = &ppppuStack_160;
  }
  if ((ppuVar8 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)puVar13 == 0x73656d2d63707267 && puVar13[2] == 0x65676173)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar14;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    pppppuVar15 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar12 = *(undefined8 *)puVar6;
    puVar13 = puVar6 + 2;
    puVar14 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar13,*(undefined8 *)puVar14);
    ppuVar8 = (uint **)(pcVar4 + -0x48);
    FUN_0034ce60(uVar12);
    puVar14 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar14) {
      do {
        lVar9 = *(long *)puVar14;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar14,0x10);
        if (bVar3) {
          *(long *)puVar14 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(puVar14 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar14;
    }
    ___stack_chk_fail();
    if ((int)ppuVar8 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar16 = FUN_0034ce38;
    puVar13 = puVar14;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar8 == (uint **)&MACH_HEADER.cputype) && (*puVar13 == 0x74736f68)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar14;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    pppppuVar15 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar12 = *(undefined8 *)puVar6;
    puVar13 = puVar6 + 2;
    puVar14 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar13,*(undefined8 *)puVar14);
    ppuVar8 = (uint **)(pcVar4 + -0x48);
    FUN_0034d078(uVar12);
    puVar14 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar14) {
      do {
        lVar9 = *(long *)puVar14;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar14,0x10);
        if (bVar3) {
          *(long *)puVar14 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(puVar14 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar14;
    }
    ___stack_chk_fail();
    if ((int)ppuVar8 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar16 = FUN_0034d010;
    puVar13 = puVar14;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar8 == (uint **)((long)&MACH_HEADER.flags + 1)) &&
     (((*(long *)puVar13 == 0x746e696f70646e65 && *(long *)(puVar13 + 2) == 0x656d2d64616f6c2d) &&
      *(long *)(puVar13 + 4) == 0x69622d7363697274) && (char)puVar13[6] == 'n')) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar14;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    pppppuVar15 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar12 = *(undefined8 *)puVar6;
    puVar13 = puVar6 + 2;
    puVar14 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar13,*(undefined8 *)puVar14);
    ppuVar8 = (uint **)(pcVar4 + -0x48);
    FUN_0034d284(uVar12);
    puVar14 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar14) {
      do {
        lVar9 = *(long *)puVar14;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar14,0x10);
        if (bVar3) {
          *(long *)puVar14 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(puVar14 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar14;
    }
    ___stack_chk_fail();
    if ((int)ppuVar8 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar16 = FUN_0034d228;
    puVar13 = puVar14;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar8 == (uint **)((long)&MACH_HEADER.sizeofcmds + 1)) &&
     ((*(long *)puVar13 == 0x7265732d63707267 && *(long *)(puVar13 + 2) == 0x746174732d726576) &&
      *(long *)((long)puVar13 + 0xd) == 0x6e69622d73746174)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar14;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    pppppuVar15 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar12 = *(undefined8 *)puVar6;
    puVar13 = puVar6 + 2;
    puVar14 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar13,*(undefined8 *)puVar14);
    ppuVar8 = (uint **)(pcVar4 + -0x48);
    FUN_0034d478(uVar12);
    puVar14 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar14) {
      do {
        lVar9 = *(long *)puVar14;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar14,0x10);
        if (bVar3) {
          *(long *)puVar14 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(puVar14 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar14;
    }
    ___stack_chk_fail();
    if ((int)ppuVar8 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar16 = FUN_0034d430;
    puVar13 = puVar14;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar8 == (uint **)((long)&MACH_HEADER.filetype + 2)) &&
     (*(long *)puVar13 == 0x6172742d63707267 && *(long *)((long)puVar13 + 6) == 0x6e69622d65636172))
  {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar14;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    pppppuVar15 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar12 = *(undefined8 *)puVar6;
    puVar13 = puVar6 + 2;
    puVar14 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar13,*(undefined8 *)puVar14);
    ppuVar8 = (uint **)(pcVar4 + -0x48);
    FUN_0034d66c(uVar12);
    puVar14 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar14) {
      do {
        lVar9 = *(long *)puVar14;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar14,0x10);
        if (bVar3) {
          *(long *)puVar14 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(puVar14 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar14;
    }
    ___stack_chk_fail();
    if ((int)ppuVar8 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar16 = FUN_0034d624;
    puVar13 = puVar14;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar8 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)puVar13 == 0x6761742d63707267 && *(long *)((long)puVar13 + 5) == 0x6e69622d73676174))
  {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar14;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    pppppuVar15 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar12 = *(undefined8 *)puVar6;
    puVar13 = puVar6 + 2;
    puVar14 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar13,*(undefined8 *)puVar14);
    ppuVar8 = (uint **)(pcVar4 + -0x48);
    FUN_0034d874(uVar12);
    puVar14 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar14) {
      do {
        lVar9 = *(long *)puVar14;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar14,0x10);
        if (bVar3) {
          *(long *)puVar14 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(puVar14 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar14;
    }
    ___stack_chk_fail();
    if ((int)ppuVar8 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar16 = FUN_0034d818;
    puVar13 = puVar14;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar8 == (uint **)((long)&MACH_HEADER.ncmds + 3)) &&
     ((*(long *)puVar13 == 0x635f626c63707267 && *(long *)(puVar13 + 2) == 0x74735f746e65696c) &&
      *(long *)((long)puVar13 + 0xb) == 0x73746174735f746e)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar14;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    puVar13 = *(uint **)puVar6;
    puVar14 = puVar6 + 2;
    FUN_0034d9e0(puVar14,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar13 = *puVar13 | 0x200000;
    *(uint **)(puVar13 + 0x22) = puVar14;
    return puVar14;
  }
  if ((ppuVar8 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)puVar13 == 0x2d74736f632d626c && *(long *)((long)puVar13 + 3) == 0x6e69622d74736f63))
  {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar14;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    puVar14 = *(uint **)puVar6;
    FUN_0034daf8(pcVar4 + -0x40,puVar6 + 2,*(undefined8 *)(puVar6 + 10),
                 *(undefined8 *)(puVar6 + 0xc));
    uVar1 = *puVar14;
    puVar6 = puVar14 + 0x18;
    *puVar14 = uVar1 | 0x400000;
    if ((uVar1 >> 0x16 & 1) == 0) {
      puVar14[0x20] = 0;
      puVar14[0x21] = 0;
      puVar14[0x1a] = 0;
      puVar14[0x1b] = 0;
      puVar6[0] = 0;
      puVar6[1] = 0;
      puVar14[0x1e] = 0;
      puVar14[0x1f] = 0;
      puVar14[0x1c] = 0;
      puVar14[0x1d] = 0;
    }
    FUN_0034dbcc(puVar6,pcVar4 + -0x40);
    if (pcVar4[-0x21] < '\0') {
      puVar6 = *(uint **)(pcVar4 + -0x38);
      __ZdlPv(puVar6);
    }
    return puVar6;
  }
  if ((ppuVar8 == (uint **)&MACH_HEADER.cpusubtype) && (*(long *)puVar13 == 0x6e656b6f742d626c)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar14;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar12 = *(undefined8 *)puVar6;
    ppuVar8 = *(uint ***)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar6 + 2,*(undefined8 *)(puVar6 + 10));
    puVar13 = (uint *)(pcVar4 + -0x48);
    FUN_0034de58(uVar12);
    puVar6 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar6) {
      do {
        lVar9 = *(long *)puVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
        if (bVar3) {
          *(long *)puVar6 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(puVar6 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar6;
    }
    ___stack_chk_fail();
    if ((int)puVar13 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    puVar5 = puVar6;
    __Unwind_Resume();
    *(undefined8 *)(pcVar4 + -0x70) = unaff_x20;
    *(uint **)(pcVar4 + -0x68) = puVar6;
    *(char **)(pcVar4 + -0x60) = pcVar4 + -0x10;
    *(code **)(pcVar4 + -0x58) = FUN_0034de58;
    pppppuVar15 = (undefined8 *****)(pcVar4 + -0x60);
    *(undefined8 *)(pcVar4 + -0x78) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar1 = *puVar5;
    puVar14 = puVar5 + 0x10;
    *puVar5 = uVar1 | 0x800000;
    if ((uVar1 >> 0x17 & 1) == 0) {
      lVar20 = *(long *)(puVar13 + 2);
      lVar18 = *(long *)puVar13;
      lVar11 = *(long *)(puVar13 + 6);
      lVar9 = *(long *)(puVar13 + 4);
      puVar13[2] = 0;
      puVar13[3] = 0;
      puVar13[0] = 0;
      puVar13[1] = 0;
      puVar13[6] = 0;
      puVar13[7] = 0;
      puVar13[4] = 0;
      puVar13[5] = 0;
      *(long *)(puVar5 + 0x12) = lVar20;
      *(long *)puVar14 = lVar18;
      *(long *)(puVar5 + 0x16) = lVar11;
      *(long *)(puVar5 + 0x14) = lVar9;
      puVar6 = puVar5;
    }
    else {
      lVar9 = *(long *)puVar13;
      lVar11 = *(long *)(puVar13 + 6);
      *(long *)(pcVar4 + -0xd0) = lVar11;
      lVar20 = *(long *)(puVar13 + 4);
      lVar18 = *(long *)(puVar13 + 2);
      *(long *)(pcVar4 + -0xd8) = lVar20;
      *(long *)(pcVar4 + -0xe0) = lVar18;
      puVar13[2] = 0;
      puVar13[3] = 0;
      puVar13[0] = 0;
      puVar13[1] = 0;
      puVar13[6] = 0;
      puVar13[7] = 0;
      puVar13[4] = 0;
      puVar13[5] = 0;
      puVar6 = *(uint **)(puVar5 + 0x10);
      uVar12 = *(undefined8 *)(puVar5 + 0x16);
      uVar17 = *(undefined8 *)(puVar5 + 0x14);
      uVar10 = *(undefined8 *)(puVar5 + 0x12);
      *(long *)(puVar5 + 0x10) = lVar9;
      *(long *)(puVar5 + 0x14) = lVar20;
      *(long *)(puVar5 + 0x12) = lVar18;
      *(long *)(puVar5 + 0x16) = lVar11;
      *(undefined8 *)(pcVar4 + -0xd8) = uVar17;
      *(undefined8 *)(pcVar4 + -0xe0) = uVar10;
      *(undefined8 *)(pcVar4 + -0xd0) = uVar12;
      if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar6) {
        do {
          lVar9 = *(long *)puVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
          if (bVar3) {
            *(long *)puVar6 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (**(code **)(puVar6 + 2))();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x78)) {
      return puVar14;
    }
    ___stack_chk_fail();
    if ((int)puVar13 == 0) {
      __Unwind_Resume();
    }
    pcVar16 = FUN_0034df40;
    func_0x0040cf10();
    pcVar4 = pcVar4 + -0xe0;
  }
  *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
  *(uint **)(pcVar4 + -0x18) = puVar14;
  *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
  *(code **)(pcVar4 + -8) = pcVar16;
  *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  lVar9 = *(long *)puVar6;
  uVar12 = *(undefined8 *)(puVar6 + 2);
  uVar17 = *(undefined8 *)(puVar6 + 8);
  uVar10 = *(undefined8 *)(puVar6 + 6);
  *(undefined8 *)(pcVar4 + -0x48) = *(undefined8 *)(puVar6 + 4);
  *(undefined8 *)(pcVar4 + -0x50) = uVar12;
  *(undefined8 *)(pcVar4 + -0x38) = uVar17;
  *(undefined8 *)(pcVar4 + -0x40) = uVar10;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  FUN_003fe220(lVar9 + 0x1f0);
  puVar6 = *(uint **)(pcVar4 + -0x50);
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar6) {
    do {
      lVar9 = *(long *)puVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar3) {
        *(long *)puVar6 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(puVar6 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
    return puVar6;
  }
  ___stack_chk_fail();
  if ((int)puVar13 != 0) {
    func_0x0040cf10(puVar6);
    FUN_0034b418(pcVar4 + -0x50);
  }
  __Unwind_Resume(puVar6);
  *(char **)(pcVar4 + -0x60) = pcVar4 + -0x10;
  *(code **)(pcVar4 + -0x58) = FUN_0034e004;
  *(uint **)(pcVar4 + -0x70) = puVar13;
  *(uint ***)(pcVar4 + -0x68) = ppuVar8;
  FUN_0034e02c();
  return puVar6;
}



/* Entry: 0034b9f8; end: 0034bae3;  */

uint * FUN_0034b9f8(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  uint **ppuVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  uint *puVar14;
  undefined8 unaff_x20;
  undefined8 *****pppppuVar15;
  code *pcVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  char acStack_331 [521];
  uint *apuStack_128 [4];
  long lStack_108;
  undefined8 ****ppppuStack_f0;
  code *pcStack_e8;
  undefined1 auStack_e0 [8];
  uint *apuStack_d8 [4];
  long lStack_b8;
  undefined8 ***pppuStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = *param_1;
  *param_1 = uVar1 | 1;
  if ((uVar1 & 1) == 0) {
    uVar19 = param_2[1];
    uVar17 = *param_2;
    uVar11 = param_2[3];
    uVar13 = param_2[2];
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    *(undefined8 *)(param_1 + 0x76) = uVar19;
    *(undefined8 *)(param_1 + 0x74) = uVar17;
    *(undefined8 *)(param_1 + 0x7a) = uVar11;
    *(undefined8 *)(param_1 + 0x78) = uVar13;
    puVar7 = param_1;
  }
  else {
    uVar13 = *param_2;
    uVar11 = param_2[3];
    uVar19 = param_2[2];
    uVar17 = param_2[1];
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    puVar7 = *(uint **)(param_1 + 0x74);
    uStack_80 = *(undefined8 *)(param_1 + 0x7a);
    uStack_88 = *(undefined8 *)(param_1 + 0x78);
    uStack_90 = *(undefined8 *)(param_1 + 0x76);
    *(undefined8 *)(param_1 + 0x74) = uVar13;
    *(undefined8 *)(param_1 + 0x78) = uVar19;
    *(undefined8 *)(param_1 + 0x76) = uVar17;
    *(undefined8 *)(param_1 + 0x7a) = uVar11;
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar7) {
      do {
        lVar10 = *(long *)puVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar3) {
          *(long *)puVar7 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(puVar7 + 2))();
      }
    }
  }
  iVar8 = (int)param_2;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return param_1 + 0x74;
  }
  ___stack_chk_fail();
  if (iVar8 == 0) {
    __Unwind_Resume();
  }
  func_0x0040cf10();
  pcStack_98 = FUN_0034bae4;
  pppppuVar15 = (undefined8 *****)&pppuStack_a0;
  lStack_b8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar13 = *(undefined8 *)puVar7;
  puVar6 = *(uint **)(puVar7 + 0xc);
  pppuStack_a0 = (undefined8 ***)&stack0xfffffffffffffff0;
  FUN_0034b930(apuStack_d8,puVar7 + 2,*(undefined8 *)(puVar7 + 10));
  ppuVar9 = apuStack_d8;
  FUN_0034bbe0(uVar13);
  puVar7 = apuStack_d8[0];
  if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_d8[0]) {
    do {
      lVar10 = *(long *)apuStack_d8[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_d8[0],0x10);
      if (bVar3) {
        *(long *)apuStack_d8[0] = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(apuStack_d8[0] + 2))();
      puVar7 = apuStack_d8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_b8) {
    return puVar7;
  }
  ___stack_chk_fail();
  if ((int)ppuVar9 != 0) {
    func_0x0040cf10();
    FUN_0034b418(apuStack_d8);
  }
  pcVar16 = FUN_0034bba8;
  puVar14 = puVar7;
  __Unwind_Resume();
  if ((ppuVar9 == (uint **)((long)&MACH_HEADER.cputype + 3)) &&
     (*puVar14 == 0x74656d3a && *(int *)((long)puVar14 + 3) == 0x646f6874)) {
    pcStack_e8 = FUN_0034bba8;
    puVar14 = *(uint **)puVar6;
    puVar7 = puVar6 + 2;
    ppppuStack_f0 = pppppuVar15;
    FUN_0034bd40(puVar7,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar14 = *puVar14 | 4;
    puVar14[0x6a] = (uint)puVar7;
    return puVar7;
  }
  if ((ppuVar9 == (uint **)((long)&MACH_HEADER.cputype + 3)) &&
     (*puVar14 == 0x6174733a && *(int *)((long)puVar14 + 3) == 0x73757461)) {
    pcStack_e8 = FUN_0034bba8;
    puVar14 = *(uint **)puVar6;
    puVar7 = puVar6 + 2;
    ppppuStack_f0 = pppppuVar15;
    FUN_0034be6c(puVar7,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar14 = *puVar14 | 8;
    puVar14[0x69] = (uint)puVar7;
    return puVar7;
  }
  if ((ppuVar9 == (uint **)((long)&MACH_HEADER.cputype + 3)) &&
     (*puVar14 == 0x6863733a && *(int *)((long)puVar14 + 3) == 0x656d6568)) {
    pcStack_e8 = FUN_0034bba8;
    puVar14 = *(uint **)puVar6;
    puVar7 = puVar6 + 2;
    ppppuStack_f0 = pppppuVar15;
    FUN_0034c020(puVar7,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar14 = *puVar14 | 0x10;
    puVar14[0x68] = (uint)puVar7;
    return puVar7;
  }
  if ((ppuVar9 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)puVar14 == 0x2d746e65746e6f63 && puVar14[2] == 0x65707974)) {
    pcStack_e8 = FUN_0034bba8;
    puVar14 = *(uint **)puVar6;
    puVar7 = puVar6 + 2;
    ppppuStack_f0 = pppppuVar15;
    FUN_0034c160(puVar7,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar14 = *puVar14 | 0x20;
    puVar14[0x67] = (uint)puVar7;
    return puVar7;
  }
  if ((ppuVar9 == (uint **)((long)&MACH_HEADER.magic + 2)) && ((short)*puVar14 == 0x6574)) {
    pcStack_e8 = FUN_0034bba8;
    puVar14 = *(uint **)puVar6;
    puVar7 = puVar6 + 2;
    ppppuStack_f0 = pppppuVar15;
    FUN_0034c29c(puVar7,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar14 = *puVar14 | 0x40;
    *(char *)(puVar14 + 0x66) = (char)puVar7;
    return puVar7;
  }
  if ((ppuVar9 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)puVar14 == 0x636e652d63707267 && *(long *)((long)puVar14 + 5) == 0x676e69646f636e65))
  {
    pcStack_e8 = FUN_0034bba8;
    puVar14 = *(uint **)puVar6;
    puVar7 = puVar6 + 2;
    ppppuStack_f0 = pppppuVar15;
    FUN_0034c404(puVar7,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar14 = *puVar14 | 0x80;
    puVar14[0x65] = (uint)puVar7;
    return puVar7;
  }
  if ((ppuVar9 == (uint **)((long)&MACH_HEADER.reserved + 2)) &&
     (((*(long *)puVar14 == 0x746e692d63707267 && *(long *)(puVar14 + 2) == 0x6e652d6c616e7265) &&
      *(long *)(puVar14 + 4) == 0x722d676e69646f63) &&
      *(long *)((long)puVar14 + 0x16) == 0x747365757165722d)) {
    pcStack_e8 = FUN_0034bba8;
    puVar14 = *(uint **)puVar6;
    puVar7 = puVar6 + 2;
    ppppuStack_f0 = pppppuVar15;
    FUN_0034c404(puVar7,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar14 = *puVar14 | 0x100;
    puVar14[100] = (uint)puVar7;
    return puVar7;
  }
  if ((ppuVar9 == (uint **)&MACH_HEADER.sizeofcmds) &&
     ((*(long *)puVar14 == 0x6363612d63707267 && *(long *)(puVar14 + 2) == 0x6f636e652d747065) &&
      puVar14[4] == 0x676e6964)) {
    pcStack_e8 = FUN_0034bba8;
    puVar14 = *(uint **)puVar6;
    puVar7 = puVar6 + 2;
    ppppuStack_f0 = pppppuVar15;
    FUN_0034c5d0(puVar7,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar14 = *puVar14 | 0x200;
    *(char *)(puVar14 + 99) = (char)puVar7;
    return puVar7;
  }
  if ((ppuVar9 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)puVar14 == 0x6174732d63707267 && *(long *)((long)puVar14 + 3) == 0x7375746174732d63))
  {
    pcStack_e8 = FUN_0034bba8;
    puVar14 = *(uint **)puVar6;
    puVar7 = puVar6 + 2;
    ppppuStack_f0 = pppppuVar15;
    FUN_0034c724(puVar7,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar14 = *puVar14 | 0x400;
    puVar14[0x62] = (uint)puVar7;
    return puVar7;
  }
  if ((ppuVar9 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)puVar14 == 0x6d69742d63707267 && puVar14[2] == 0x74756f65)) {
    pcStack_e8 = FUN_0034bba8;
    puVar14 = *(uint **)puVar6;
    puVar7 = puVar6 + 2;
    ppppuStack_f0 = pppppuVar15;
    FUN_0034c900(puVar7,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar14 = *puVar14 | 0x800;
    *(uint **)(puVar14 + 0x60) = puVar7;
    return puVar7;
  }
  if ((ppuVar9 == (uint **)((long)&MACH_HEADER.flags + 2)) &&
     (((*(long *)puVar14 == 0x6572702d63707267 && *(long *)(puVar14 + 2) == 0x70722d73756f6976) &&
      *(long *)(puVar14 + 4) == 0x706d657474612d63) && (short)puVar14[6] == 0x7374)) {
    pcStack_e8 = FUN_0034bba8;
    puVar14 = *(uint **)puVar6;
    puVar7 = puVar6 + 2;
    ppppuStack_f0 = pppppuVar15;
    FUN_0034be6c(puVar7,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar14 = *puVar14 | 0x1000;
    puVar14[0x5e] = (uint)puVar7;
    return puVar7;
  }
  if ((ppuVar9 == (uint **)((long)&MACH_HEADER.sizeofcmds + 2)) &&
     ((*(long *)puVar14 == 0x7465722d63707267 && *(long *)(puVar14 + 2) == 0x62687375702d7972) &&
      *(long *)((long)puVar14 + 0xe) == 0x736d2d6b63616268)) {
    pcStack_e8 = FUN_0034bba8;
    puVar14 = *(uint **)puVar6;
    puVar7 = puVar6 + 2;
    ppppuStack_f0 = pppppuVar15;
    FUN_0034cacc(puVar7,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar14 = *puVar14 | 0x2000;
    *(uint **)(puVar14 + 0x5c) = puVar7;
    return puVar7;
  }
  pcVar4 = auStack_e0;
  if ((ppuVar9 == (uint **)((long)&MACH_HEADER.cpusubtype + 2)) &&
     (pcVar4 = auStack_e0, *(long *)puVar14 == 0x6567612d72657375 && (short)puVar14[2] == 0x746e)) {
    pcStack_e8 = FUN_0034bba8;
    lStack_108 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar13 = *(undefined8 *)puVar6;
    puVar14 = puVar6 + 2;
    puVar7 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    ppppuStack_f0 = pppppuVar15;
    FUN_0034b930(apuStack_128,puVar14,*(undefined8 *)puVar7);
    ppuVar9 = apuStack_128;
    FUN_0034cc88(uVar13);
    puVar7 = apuStack_128[0];
    if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_128[0]) {
      do {
        lVar10 = *(long *)apuStack_128[0];
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(apuStack_128[0],0x10);
        if (bVar3) {
          *(long *)apuStack_128[0] = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(apuStack_128[0] + 2))();
        puVar7 = apuStack_128[0];
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_108) {
      return puVar7;
    }
    ___stack_chk_fail();
    if ((int)ppuVar9 != 0) {
      func_0x0040cf10();
      FUN_0034b418(apuStack_128);
    }
    pcVar16 = FUN_0034cc48;
    puVar14 = puVar7;
    __Unwind_Resume();
    pcVar4 = acStack_331 + 0x201;
    pppppuVar15 = &ppppuStack_f0;
  }
  if ((ppuVar9 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)puVar14 == 0x73656d2d63707267 && puVar14[2] == 0x65676173)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar7;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    pppppuVar15 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar13 = *(undefined8 *)puVar6;
    puVar14 = puVar6 + 2;
    puVar7 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar14,*(undefined8 *)puVar7);
    ppuVar9 = (uint **)(pcVar4 + -0x48);
    FUN_0034ce60(uVar13);
    puVar7 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar7) {
      do {
        lVar10 = *(long *)puVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar3) {
          *(long *)puVar7 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(puVar7 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar7;
    }
    ___stack_chk_fail();
    if ((int)ppuVar9 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar16 = FUN_0034ce38;
    puVar14 = puVar7;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar9 == (uint **)&MACH_HEADER.cputype) && (*puVar14 == 0x74736f68)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar7;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    pppppuVar15 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar13 = *(undefined8 *)puVar6;
    puVar14 = puVar6 + 2;
    puVar7 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar14,*(undefined8 *)puVar7);
    ppuVar9 = (uint **)(pcVar4 + -0x48);
    FUN_0034d078(uVar13);
    puVar7 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar7) {
      do {
        lVar10 = *(long *)puVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar3) {
          *(long *)puVar7 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(puVar7 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar7;
    }
    ___stack_chk_fail();
    if ((int)ppuVar9 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar16 = FUN_0034d010;
    puVar14 = puVar7;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar9 == (uint **)((long)&MACH_HEADER.flags + 1)) &&
     (((*(long *)puVar14 == 0x746e696f70646e65 && *(long *)(puVar14 + 2) == 0x656d2d64616f6c2d) &&
      *(long *)(puVar14 + 4) == 0x69622d7363697274) && (char)puVar14[6] == 'n')) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar7;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    pppppuVar15 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar13 = *(undefined8 *)puVar6;
    puVar14 = puVar6 + 2;
    puVar7 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar14,*(undefined8 *)puVar7);
    ppuVar9 = (uint **)(pcVar4 + -0x48);
    FUN_0034d284(uVar13);
    puVar7 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar7) {
      do {
        lVar10 = *(long *)puVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar3) {
          *(long *)puVar7 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(puVar7 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar7;
    }
    ___stack_chk_fail();
    if ((int)ppuVar9 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar16 = FUN_0034d228;
    puVar14 = puVar7;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar9 == (uint **)((long)&MACH_HEADER.sizeofcmds + 1)) &&
     ((*(long *)puVar14 == 0x7265732d63707267 && *(long *)(puVar14 + 2) == 0x746174732d726576) &&
      *(long *)((long)puVar14 + 0xd) == 0x6e69622d73746174)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar7;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    pppppuVar15 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar13 = *(undefined8 *)puVar6;
    puVar14 = puVar6 + 2;
    puVar7 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar14,*(undefined8 *)puVar7);
    ppuVar9 = (uint **)(pcVar4 + -0x48);
    FUN_0034d478(uVar13);
    puVar7 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar7) {
      do {
        lVar10 = *(long *)puVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar3) {
          *(long *)puVar7 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(puVar7 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar7;
    }
    ___stack_chk_fail();
    if ((int)ppuVar9 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar16 = FUN_0034d430;
    puVar14 = puVar7;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar9 == (uint **)((long)&MACH_HEADER.filetype + 2)) &&
     (*(long *)puVar14 == 0x6172742d63707267 && *(long *)((long)puVar14 + 6) == 0x6e69622d65636172))
  {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar7;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    pppppuVar15 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar13 = *(undefined8 *)puVar6;
    puVar14 = puVar6 + 2;
    puVar7 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar14,*(undefined8 *)puVar7);
    ppuVar9 = (uint **)(pcVar4 + -0x48);
    FUN_0034d66c(uVar13);
    puVar7 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar7) {
      do {
        lVar10 = *(long *)puVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar3) {
          *(long *)puVar7 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(puVar7 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar7;
    }
    ___stack_chk_fail();
    if ((int)ppuVar9 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar16 = FUN_0034d624;
    puVar14 = puVar7;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar9 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)puVar14 == 0x6761742d63707267 && *(long *)((long)puVar14 + 5) == 0x6e69622d73676174))
  {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar7;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    pppppuVar15 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar13 = *(undefined8 *)puVar6;
    puVar14 = puVar6 + 2;
    puVar7 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar14,*(undefined8 *)puVar7);
    ppuVar9 = (uint **)(pcVar4 + -0x48);
    FUN_0034d874(uVar13);
    puVar7 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar7) {
      do {
        lVar10 = *(long *)puVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar3) {
          *(long *)puVar7 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(puVar7 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar7;
    }
    ___stack_chk_fail();
    if ((int)ppuVar9 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar16 = FUN_0034d818;
    puVar14 = puVar7;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar9 == (uint **)((long)&MACH_HEADER.ncmds + 3)) &&
     ((*(long *)puVar14 == 0x635f626c63707267 && *(long *)(puVar14 + 2) == 0x74735f746e65696c) &&
      *(long *)((long)puVar14 + 0xb) == 0x73746174735f746e)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar7;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    puVar14 = *(uint **)puVar6;
    puVar7 = puVar6 + 2;
    FUN_0034d9e0(puVar7,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar14 = *puVar14 | 0x200000;
    *(uint **)(puVar14 + 0x22) = puVar7;
    return puVar7;
  }
  if ((ppuVar9 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)puVar14 == 0x2d74736f632d626c && *(long *)((long)puVar14 + 3) == 0x6e69622d74736f63))
  {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar7;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    puVar14 = *(uint **)puVar6;
    FUN_0034daf8(pcVar4 + -0x40,puVar6 + 2,*(undefined8 *)(puVar6 + 10),
                 *(undefined8 *)(puVar6 + 0xc));
    uVar1 = *puVar14;
    puVar7 = puVar14 + 0x18;
    *puVar14 = uVar1 | 0x400000;
    if ((uVar1 >> 0x16 & 1) == 0) {
      puVar14[0x20] = 0;
      puVar14[0x21] = 0;
      puVar14[0x1a] = 0;
      puVar14[0x1b] = 0;
      puVar7[0] = 0;
      puVar7[1] = 0;
      puVar14[0x1e] = 0;
      puVar14[0x1f] = 0;
      puVar14[0x1c] = 0;
      puVar14[0x1d] = 0;
    }
    FUN_0034dbcc(puVar7,pcVar4 + -0x40);
    if (pcVar4[-0x21] < '\0') {
      puVar7 = *(uint **)(pcVar4 + -0x38);
      __ZdlPv(puVar7);
    }
    return puVar7;
  }
  if ((ppuVar9 == (uint **)&MACH_HEADER.cpusubtype) && (*(long *)puVar14 == 0x6e656b6f742d626c)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar7;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar13 = *(undefined8 *)puVar6;
    ppuVar9 = *(uint ***)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar6 + 2,*(undefined8 *)(puVar6 + 10));
    puVar14 = (uint *)(pcVar4 + -0x48);
    FUN_0034de58(uVar13);
    puVar7 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar7) {
      do {
        lVar10 = *(long *)puVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar3) {
          *(long *)puVar7 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(puVar7 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar7;
    }
    ___stack_chk_fail();
    if ((int)puVar14 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    puVar5 = puVar7;
    __Unwind_Resume();
    *(undefined8 *)(pcVar4 + -0x70) = unaff_x20;
    *(uint **)(pcVar4 + -0x68) = puVar7;
    *(char **)(pcVar4 + -0x60) = pcVar4 + -0x10;
    *(code **)(pcVar4 + -0x58) = FUN_0034de58;
    pppppuVar15 = (undefined8 *****)(pcVar4 + -0x60);
    *(undefined8 *)(pcVar4 + -0x78) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar1 = *puVar5;
    puVar7 = puVar5 + 0x10;
    *puVar5 = uVar1 | 0x800000;
    if ((uVar1 >> 0x17 & 1) == 0) {
      lVar20 = *(long *)(puVar14 + 2);
      lVar18 = *(long *)puVar14;
      lVar12 = *(long *)(puVar14 + 6);
      lVar10 = *(long *)(puVar14 + 4);
      puVar14[2] = 0;
      puVar14[3] = 0;
      puVar14[0] = 0;
      puVar14[1] = 0;
      puVar14[6] = 0;
      puVar14[7] = 0;
      puVar14[4] = 0;
      puVar14[5] = 0;
      *(long *)(puVar5 + 0x12) = lVar20;
      *(long *)puVar7 = lVar18;
      *(long *)(puVar5 + 0x16) = lVar12;
      *(long *)(puVar5 + 0x14) = lVar10;
      puVar6 = puVar5;
    }
    else {
      lVar10 = *(long *)puVar14;
      lVar12 = *(long *)(puVar14 + 6);
      *(long *)(pcVar4 + -0xd0) = lVar12;
      lVar20 = *(long *)(puVar14 + 4);
      lVar18 = *(long *)(puVar14 + 2);
      *(long *)(pcVar4 + -0xd8) = lVar20;
      *(long *)(pcVar4 + -0xe0) = lVar18;
      puVar14[2] = 0;
      puVar14[3] = 0;
      puVar14[0] = 0;
      puVar14[1] = 0;
      puVar14[6] = 0;
      puVar14[7] = 0;
      puVar14[4] = 0;
      puVar14[5] = 0;
      puVar6 = *(uint **)(puVar5 + 0x10);
      uVar13 = *(undefined8 *)(puVar5 + 0x16);
      uVar17 = *(undefined8 *)(puVar5 + 0x14);
      uVar11 = *(undefined8 *)(puVar5 + 0x12);
      *(long *)(puVar5 + 0x10) = lVar10;
      *(long *)(puVar5 + 0x14) = lVar20;
      *(long *)(puVar5 + 0x12) = lVar18;
      *(long *)(puVar5 + 0x16) = lVar12;
      *(undefined8 *)(pcVar4 + -0xd8) = uVar17;
      *(undefined8 *)(pcVar4 + -0xe0) = uVar11;
      *(undefined8 *)(pcVar4 + -0xd0) = uVar13;
      if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar6) {
        do {
          lVar10 = *(long *)puVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
          if (bVar3) {
            *(long *)puVar6 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(puVar6 + 2))();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x78)) {
      return puVar7;
    }
    ___stack_chk_fail();
    if ((int)puVar14 == 0) {
      __Unwind_Resume();
    }
    pcVar16 = FUN_0034df40;
    func_0x0040cf10();
    pcVar4 = pcVar4 + -0xe0;
  }
  *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
  *(uint **)(pcVar4 + -0x18) = puVar7;
  *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
  *(code **)(pcVar4 + -8) = pcVar16;
  *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  lVar10 = *(long *)puVar6;
  uVar13 = *(undefined8 *)(puVar6 + 2);
  uVar17 = *(undefined8 *)(puVar6 + 8);
  uVar11 = *(undefined8 *)(puVar6 + 6);
  *(undefined8 *)(pcVar4 + -0x48) = *(undefined8 *)(puVar6 + 4);
  *(undefined8 *)(pcVar4 + -0x50) = uVar13;
  *(undefined8 *)(pcVar4 + -0x38) = uVar17;
  *(undefined8 *)(pcVar4 + -0x40) = uVar11;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  FUN_003fe220(lVar10 + 0x1f0);
  puVar7 = *(uint **)(pcVar4 + -0x50);
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar7) {
    do {
      lVar10 = *(long *)puVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
      if (bVar3) {
        *(long *)puVar7 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(puVar7 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
    return puVar7;
  }
  ___stack_chk_fail();
  if ((int)puVar14 != 0) {
    func_0x0040cf10(puVar7);
    FUN_0034b418(pcVar4 + -0x50);
  }
  __Unwind_Resume(puVar7);
  *(char **)(pcVar4 + -0x60) = pcVar4 + -0x10;
  *(code **)(pcVar4 + -0x58) = FUN_0034e004;
  *(uint **)(pcVar4 + -0x70) = puVar14;
  *(uint ***)(pcVar4 + -0x68) = ppuVar9;
  FUN_0034e02c();
  return puVar7;
}



/* Entry: 0034bae4; end: 0034bba7;  */

uint * FUN_0034bae4(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  uint *puVar5;
  uint *puVar6;
  uint **ppuVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  uint *puVar11;
  uint *puVar12;
  undefined8 unaff_x20;
  undefined8 *****pppppuVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  char acStack_2a1 [521];
  uint *apuStack_98 [4];
  long lStack_78;
  undefined8 ****ppppuStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [8];
  uint *apuStack_48 [4];
  long lStack_28;
  
  pppppuVar13 = (undefined8 *****)&stack0xfffffffffffffff0;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar10 = *param_1;
  puVar6 = (uint *)param_1[6];
  FUN_0034b930(apuStack_48,param_1 + 1,param_1[5]);
  ppuVar7 = apuStack_48;
  FUN_0034bbe0(uVar10);
  puVar12 = apuStack_48[0];
  if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_48[0]) {
    do {
      lVar8 = *(long *)apuStack_48[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_48[0],0x10);
      if (bVar3) {
        *(long *)apuStack_48[0] = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(apuStack_48[0] + 2))();
      puVar12 = apuStack_48[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return puVar12;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    func_0x0040cf10();
    FUN_0034b418(apuStack_48);
  }
  pcVar14 = FUN_0034bba8;
  puVar11 = puVar12;
  __Unwind_Resume();
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.cputype + 3)) &&
     (*puVar11 == 0x74656d3a && *(int *)((long)puVar11 + 3) == 0x646f6874)) {
    pcStack_58 = FUN_0034bba8;
    puVar11 = *(uint **)puVar6;
    puVar12 = puVar6 + 2;
    ppppuStack_60 = pppppuVar13;
    FUN_0034bd40(puVar12,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar11 = *puVar11 | 4;
    puVar11[0x6a] = (uint)puVar12;
    return puVar12;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.cputype + 3)) &&
     (*puVar11 == 0x6174733a && *(int *)((long)puVar11 + 3) == 0x73757461)) {
    pcStack_58 = FUN_0034bba8;
    puVar11 = *(uint **)puVar6;
    puVar12 = puVar6 + 2;
    ppppuStack_60 = pppppuVar13;
    FUN_0034be6c(puVar12,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar11 = *puVar11 | 8;
    puVar11[0x69] = (uint)puVar12;
    return puVar12;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.cputype + 3)) &&
     (*puVar11 == 0x6863733a && *(int *)((long)puVar11 + 3) == 0x656d6568)) {
    pcStack_58 = FUN_0034bba8;
    puVar11 = *(uint **)puVar6;
    puVar12 = puVar6 + 2;
    ppppuStack_60 = pppppuVar13;
    FUN_0034c020(puVar12,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar11 = *puVar11 | 0x10;
    puVar11[0x68] = (uint)puVar12;
    return puVar12;
  }
  if ((ppuVar7 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)puVar11 == 0x2d746e65746e6f63 && puVar11[2] == 0x65707974)) {
    pcStack_58 = FUN_0034bba8;
    puVar11 = *(uint **)puVar6;
    puVar12 = puVar6 + 2;
    ppppuStack_60 = pppppuVar13;
    FUN_0034c160(puVar12,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar11 = *puVar11 | 0x20;
    puVar11[0x67] = (uint)puVar12;
    return puVar12;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.magic + 2)) && ((short)*puVar11 == 0x6574)) {
    pcStack_58 = FUN_0034bba8;
    puVar11 = *(uint **)puVar6;
    puVar12 = puVar6 + 2;
    ppppuStack_60 = pppppuVar13;
    FUN_0034c29c(puVar12,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar11 = *puVar11 | 0x40;
    *(char *)(puVar11 + 0x66) = (char)puVar12;
    return puVar12;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)puVar11 == 0x636e652d63707267 && *(long *)((long)puVar11 + 5) == 0x676e69646f636e65))
  {
    pcStack_58 = FUN_0034bba8;
    puVar11 = *(uint **)puVar6;
    puVar12 = puVar6 + 2;
    ppppuStack_60 = pppppuVar13;
    FUN_0034c404(puVar12,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar11 = *puVar11 | 0x80;
    puVar11[0x65] = (uint)puVar12;
    return puVar12;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.reserved + 2)) &&
     (((*(long *)puVar11 == 0x746e692d63707267 && *(long *)(puVar11 + 2) == 0x6e652d6c616e7265) &&
      *(long *)(puVar11 + 4) == 0x722d676e69646f63) &&
      *(long *)((long)puVar11 + 0x16) == 0x747365757165722d)) {
    pcStack_58 = FUN_0034bba8;
    puVar11 = *(uint **)puVar6;
    puVar12 = puVar6 + 2;
    ppppuStack_60 = pppppuVar13;
    FUN_0034c404(puVar12,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar11 = *puVar11 | 0x100;
    puVar11[100] = (uint)puVar12;
    return puVar12;
  }
  if ((ppuVar7 == (uint **)&MACH_HEADER.sizeofcmds) &&
     ((*(long *)puVar11 == 0x6363612d63707267 && *(long *)(puVar11 + 2) == 0x6f636e652d747065) &&
      puVar11[4] == 0x676e6964)) {
    pcStack_58 = FUN_0034bba8;
    puVar11 = *(uint **)puVar6;
    puVar12 = puVar6 + 2;
    ppppuStack_60 = pppppuVar13;
    FUN_0034c5d0(puVar12,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar11 = *puVar11 | 0x200;
    *(char *)(puVar11 + 99) = (char)puVar12;
    return puVar12;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)puVar11 == 0x6174732d63707267 && *(long *)((long)puVar11 + 3) == 0x7375746174732d63))
  {
    pcStack_58 = FUN_0034bba8;
    puVar11 = *(uint **)puVar6;
    puVar12 = puVar6 + 2;
    ppppuStack_60 = pppppuVar13;
    FUN_0034c724(puVar12,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar11 = *puVar11 | 0x400;
    puVar11[0x62] = (uint)puVar12;
    return puVar12;
  }
  if ((ppuVar7 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)puVar11 == 0x6d69742d63707267 && puVar11[2] == 0x74756f65)) {
    pcStack_58 = FUN_0034bba8;
    puVar11 = *(uint **)puVar6;
    puVar12 = puVar6 + 2;
    ppppuStack_60 = pppppuVar13;
    FUN_0034c900(puVar12,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar11 = *puVar11 | 0x800;
    *(uint **)(puVar11 + 0x60) = puVar12;
    return puVar12;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.flags + 2)) &&
     (((*(long *)puVar11 == 0x6572702d63707267 && *(long *)(puVar11 + 2) == 0x70722d73756f6976) &&
      *(long *)(puVar11 + 4) == 0x706d657474612d63) && (short)puVar11[6] == 0x7374)) {
    pcStack_58 = FUN_0034bba8;
    puVar11 = *(uint **)puVar6;
    puVar12 = puVar6 + 2;
    ppppuStack_60 = pppppuVar13;
    FUN_0034be6c(puVar12,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar11 = *puVar11 | 0x1000;
    puVar11[0x5e] = (uint)puVar12;
    return puVar12;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.sizeofcmds + 2)) &&
     ((*(long *)puVar11 == 0x7465722d63707267 && *(long *)(puVar11 + 2) == 0x62687375702d7972) &&
      *(long *)((long)puVar11 + 0xe) == 0x736d2d6b63616268)) {
    pcStack_58 = FUN_0034bba8;
    puVar11 = *(uint **)puVar6;
    puVar12 = puVar6 + 2;
    ppppuStack_60 = pppppuVar13;
    FUN_0034cacc(puVar12,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar11 = *puVar11 | 0x2000;
    *(uint **)(puVar11 + 0x5c) = puVar12;
    return puVar12;
  }
  pcVar4 = auStack_50;
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.cpusubtype + 2)) &&
     (pcVar4 = auStack_50, *(long *)puVar11 == 0x6567612d72657375 && (short)puVar11[2] == 0x746e)) {
    pcStack_58 = FUN_0034bba8;
    lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar10 = *(undefined8 *)puVar6;
    puVar11 = puVar6 + 2;
    puVar12 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    ppppuStack_60 = pppppuVar13;
    FUN_0034b930(apuStack_98,puVar11,*(undefined8 *)puVar12);
    ppuVar7 = apuStack_98;
    FUN_0034cc88(uVar10);
    puVar12 = apuStack_98[0];
    if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_98[0]) {
      do {
        lVar8 = *(long *)apuStack_98[0];
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(apuStack_98[0],0x10);
        if (bVar3) {
          *(long *)apuStack_98[0] = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(apuStack_98[0] + 2))();
        puVar12 = apuStack_98[0];
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
      return puVar12;
    }
    ___stack_chk_fail();
    if ((int)ppuVar7 != 0) {
      func_0x0040cf10();
      FUN_0034b418(apuStack_98);
    }
    pcVar14 = FUN_0034cc48;
    puVar11 = puVar12;
    __Unwind_Resume();
    pcVar4 = acStack_2a1 + 0x201;
    pppppuVar13 = &ppppuStack_60;
  }
  if ((ppuVar7 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)puVar11 == 0x73656d2d63707267 && puVar11[2] == 0x65676173)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    pppppuVar13 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar10 = *(undefined8 *)puVar6;
    puVar11 = puVar6 + 2;
    puVar12 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar11,*(undefined8 *)puVar12);
    ppuVar7 = (uint **)(pcVar4 + -0x48);
    FUN_0034ce60(uVar10);
    puVar12 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar12) {
      do {
        lVar8 = *(long *)puVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar12,0x10);
        if (bVar3) {
          *(long *)puVar12 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar12 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar12;
    }
    ___stack_chk_fail();
    if ((int)ppuVar7 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar14 = FUN_0034ce38;
    puVar11 = puVar12;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar7 == (uint **)&MACH_HEADER.cputype) && (*puVar11 == 0x74736f68)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    pppppuVar13 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar10 = *(undefined8 *)puVar6;
    puVar11 = puVar6 + 2;
    puVar12 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar11,*(undefined8 *)puVar12);
    ppuVar7 = (uint **)(pcVar4 + -0x48);
    FUN_0034d078(uVar10);
    puVar12 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar12) {
      do {
        lVar8 = *(long *)puVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar12,0x10);
        if (bVar3) {
          *(long *)puVar12 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar12 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar12;
    }
    ___stack_chk_fail();
    if ((int)ppuVar7 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar14 = FUN_0034d010;
    puVar11 = puVar12;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.flags + 1)) &&
     (((*(long *)puVar11 == 0x746e696f70646e65 && *(long *)(puVar11 + 2) == 0x656d2d64616f6c2d) &&
      *(long *)(puVar11 + 4) == 0x69622d7363697274) && (char)puVar11[6] == 'n')) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    pppppuVar13 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar10 = *(undefined8 *)puVar6;
    puVar11 = puVar6 + 2;
    puVar12 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar11,*(undefined8 *)puVar12);
    ppuVar7 = (uint **)(pcVar4 + -0x48);
    FUN_0034d284(uVar10);
    puVar12 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar12) {
      do {
        lVar8 = *(long *)puVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar12,0x10);
        if (bVar3) {
          *(long *)puVar12 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar12 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar12;
    }
    ___stack_chk_fail();
    if ((int)ppuVar7 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar14 = FUN_0034d228;
    puVar11 = puVar12;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.sizeofcmds + 1)) &&
     ((*(long *)puVar11 == 0x7265732d63707267 && *(long *)(puVar11 + 2) == 0x746174732d726576) &&
      *(long *)((long)puVar11 + 0xd) == 0x6e69622d73746174)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    pppppuVar13 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar10 = *(undefined8 *)puVar6;
    puVar11 = puVar6 + 2;
    puVar12 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar11,*(undefined8 *)puVar12);
    ppuVar7 = (uint **)(pcVar4 + -0x48);
    FUN_0034d478(uVar10);
    puVar12 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar12) {
      do {
        lVar8 = *(long *)puVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar12,0x10);
        if (bVar3) {
          *(long *)puVar12 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar12 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar12;
    }
    ___stack_chk_fail();
    if ((int)ppuVar7 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar14 = FUN_0034d430;
    puVar11 = puVar12;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.filetype + 2)) &&
     (*(long *)puVar11 == 0x6172742d63707267 && *(long *)((long)puVar11 + 6) == 0x6e69622d65636172))
  {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    pppppuVar13 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar10 = *(undefined8 *)puVar6;
    puVar11 = puVar6 + 2;
    puVar12 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar11,*(undefined8 *)puVar12);
    ppuVar7 = (uint **)(pcVar4 + -0x48);
    FUN_0034d66c(uVar10);
    puVar12 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar12) {
      do {
        lVar8 = *(long *)puVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar12,0x10);
        if (bVar3) {
          *(long *)puVar12 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar12 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar12;
    }
    ___stack_chk_fail();
    if ((int)ppuVar7 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar14 = FUN_0034d624;
    puVar11 = puVar12;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)puVar11 == 0x6761742d63707267 && *(long *)((long)puVar11 + 5) == 0x6e69622d73676174))
  {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    pppppuVar13 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar10 = *(undefined8 *)puVar6;
    puVar11 = puVar6 + 2;
    puVar12 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar11,*(undefined8 *)puVar12);
    ppuVar7 = (uint **)(pcVar4 + -0x48);
    FUN_0034d874(uVar10);
    puVar12 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar12) {
      do {
        lVar8 = *(long *)puVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar12,0x10);
        if (bVar3) {
          *(long *)puVar12 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar12 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar12;
    }
    ___stack_chk_fail();
    if ((int)ppuVar7 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar14 = FUN_0034d818;
    puVar11 = puVar12;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.ncmds + 3)) &&
     ((*(long *)puVar11 == 0x635f626c63707267 && *(long *)(puVar11 + 2) == 0x74735f746e65696c) &&
      *(long *)((long)puVar11 + 0xb) == 0x73746174735f746e)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    puVar11 = *(uint **)puVar6;
    puVar12 = puVar6 + 2;
    FUN_0034d9e0(puVar12,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar11 = *puVar11 | 0x200000;
    *(uint **)(puVar11 + 0x22) = puVar12;
    return puVar12;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)puVar11 == 0x2d74736f632d626c && *(long *)((long)puVar11 + 3) == 0x6e69622d74736f63))
  {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    puVar12 = *(uint **)puVar6;
    FUN_0034daf8(pcVar4 + -0x40,puVar6 + 2,*(undefined8 *)(puVar6 + 10),
                 *(undefined8 *)(puVar6 + 0xc));
    uVar1 = *puVar12;
    puVar6 = puVar12 + 0x18;
    *puVar12 = uVar1 | 0x400000;
    if ((uVar1 >> 0x16 & 1) == 0) {
      puVar12[0x20] = 0;
      puVar12[0x21] = 0;
      puVar12[0x1a] = 0;
      puVar12[0x1b] = 0;
      puVar6[0] = 0;
      puVar6[1] = 0;
      puVar12[0x1e] = 0;
      puVar12[0x1f] = 0;
      puVar12[0x1c] = 0;
      puVar12[0x1d] = 0;
    }
    FUN_0034dbcc(puVar6,pcVar4 + -0x40);
    if (pcVar4[-0x21] < '\0') {
      puVar6 = *(uint **)(pcVar4 + -0x38);
      __ZdlPv(puVar6);
    }
    return puVar6;
  }
  if ((ppuVar7 == (uint **)&MACH_HEADER.cpusubtype) && (*(long *)puVar11 == 0x6e656b6f742d626c)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar10 = *(undefined8 *)puVar6;
    ppuVar7 = *(uint ***)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar6 + 2,*(undefined8 *)(puVar6 + 10));
    puVar11 = (uint *)(pcVar4 + -0x48);
    FUN_0034de58(uVar10);
    puVar6 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar6) {
      do {
        lVar8 = *(long *)puVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
        if (bVar3) {
          *(long *)puVar6 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar6 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar6;
    }
    ___stack_chk_fail();
    if ((int)puVar11 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    puVar5 = puVar6;
    __Unwind_Resume();
    *(undefined8 *)(pcVar4 + -0x70) = unaff_x20;
    *(uint **)(pcVar4 + -0x68) = puVar6;
    *(char **)(pcVar4 + -0x60) = pcVar4 + -0x10;
    *(code **)(pcVar4 + -0x58) = FUN_0034de58;
    pppppuVar13 = (undefined8 *****)(pcVar4 + -0x60);
    *(undefined8 *)(pcVar4 + -0x78) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar1 = *puVar5;
    puVar12 = puVar5 + 0x10;
    *puVar5 = uVar1 | 0x800000;
    if ((uVar1 >> 0x17 & 1) == 0) {
      lVar16 = *(long *)(puVar11 + 2);
      lVar15 = *(long *)puVar11;
      lVar9 = *(long *)(puVar11 + 6);
      lVar8 = *(long *)(puVar11 + 4);
      puVar11[2] = 0;
      puVar11[3] = 0;
      puVar11[0] = 0;
      puVar11[1] = 0;
      puVar11[6] = 0;
      puVar11[7] = 0;
      puVar11[4] = 0;
      puVar11[5] = 0;
      *(long *)(puVar5 + 0x12) = lVar16;
      *(long *)puVar12 = lVar15;
      *(long *)(puVar5 + 0x16) = lVar9;
      *(long *)(puVar5 + 0x14) = lVar8;
      puVar6 = puVar5;
    }
    else {
      lVar8 = *(long *)puVar11;
      lVar9 = *(long *)(puVar11 + 6);
      *(long *)(pcVar4 + -0xd0) = lVar9;
      lVar16 = *(long *)(puVar11 + 4);
      lVar15 = *(long *)(puVar11 + 2);
      *(long *)(pcVar4 + -0xd8) = lVar16;
      *(long *)(pcVar4 + -0xe0) = lVar15;
      puVar11[2] = 0;
      puVar11[3] = 0;
      puVar11[0] = 0;
      puVar11[1] = 0;
      puVar11[6] = 0;
      puVar11[7] = 0;
      puVar11[4] = 0;
      puVar11[5] = 0;
      puVar6 = *(uint **)(puVar5 + 0x10);
      uVar10 = *(undefined8 *)(puVar5 + 0x16);
      uVar18 = *(undefined8 *)(puVar5 + 0x14);
      uVar17 = *(undefined8 *)(puVar5 + 0x12);
      *(long *)(puVar5 + 0x10) = lVar8;
      *(long *)(puVar5 + 0x14) = lVar16;
      *(long *)(puVar5 + 0x12) = lVar15;
      *(long *)(puVar5 + 0x16) = lVar9;
      *(undefined8 *)(pcVar4 + -0xd8) = uVar18;
      *(undefined8 *)(pcVar4 + -0xe0) = uVar17;
      *(undefined8 *)(pcVar4 + -0xd0) = uVar10;
      if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar6) {
        do {
          lVar8 = *(long *)puVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
          if (bVar3) {
            *(long *)puVar6 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 + -1 == 0) {
          (**(code **)(puVar6 + 2))();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x78)) {
      return puVar12;
    }
    ___stack_chk_fail();
    if ((int)puVar11 == 0) {
      __Unwind_Resume();
    }
    pcVar14 = FUN_0034df40;
    func_0x0040cf10();
    pcVar4 = pcVar4 + -0xe0;
  }
  *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
  *(uint **)(pcVar4 + -0x18) = puVar12;
  *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
  *(code **)(pcVar4 + -8) = pcVar14;
  *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  lVar8 = *(long *)puVar6;
  uVar10 = *(undefined8 *)(puVar6 + 2);
  uVar18 = *(undefined8 *)(puVar6 + 8);
  uVar17 = *(undefined8 *)(puVar6 + 6);
  *(undefined8 *)(pcVar4 + -0x48) = *(undefined8 *)(puVar6 + 4);
  *(undefined8 *)(pcVar4 + -0x50) = uVar10;
  *(undefined8 *)(pcVar4 + -0x38) = uVar18;
  *(undefined8 *)(pcVar4 + -0x40) = uVar17;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  FUN_003fe220(lVar8 + 0x1f0);
  puVar6 = *(uint **)(pcVar4 + -0x50);
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar6) {
    do {
      lVar8 = *(long *)puVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar3) {
        *(long *)puVar6 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(puVar6 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
    return puVar6;
  }
  ___stack_chk_fail();
  if ((int)puVar11 != 0) {
    func_0x0040cf10(puVar6);
    FUN_0034b418(pcVar4 + -0x50);
  }
  __Unwind_Resume(puVar6);
  *(char **)(pcVar4 + -0x60) = pcVar4 + -0x10;
  *(code **)(pcVar4 + -0x58) = FUN_0034e004;
  *(uint **)(pcVar4 + -0x70) = puVar11;
  *(uint ***)(pcVar4 + -0x68) = ppuVar7;
  FUN_0034e02c();
  return puVar6;
}



/* Entry: 0034bba8; end: 0034bbdf;  */

uint * FUN_0034bba8(uint *param_1,uint **param_2,uint *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  uint *unaff_x19;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char acStack_251 [521];
  uint *apuStack_48 [4];
  long lStack_28;
  
  if ((param_2 == (uint **)((long)&MACH_HEADER.cputype + 3)) &&
     (*param_1 == 0x74656d3a && *(int *)((long)param_1 + 3) == 0x646f6874)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034bd40(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 4;
    puVar7[0x6a] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cputype + 3)) &&
     (*param_1 == 0x6174733a && *(int *)((long)param_1 + 3) == 0x73757461)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034be6c(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 8;
    puVar7[0x69] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cputype + 3)) &&
     (*param_1 == 0x6863733a && *(int *)((long)param_1 + 3) == 0x656d6568)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c020(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x10;
    puVar7[0x68] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)param_1 == 0x2d746e65746e6f63 && param_1[2] == 0x65707974)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c160(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x20;
    puVar7[0x67] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.magic + 2)) && ((short)*param_1 == 0x6574)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c29c(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x40;
    *(char *)(puVar7 + 0x66) = (char)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)param_1 == 0x636e652d63707267 && *(long *)((long)param_1 + 5) == 0x676e69646f636e65))
  {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c404(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x80;
    puVar7[0x65] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.reserved + 2)) &&
     (((*(long *)param_1 == 0x746e692d63707267 && *(long *)(param_1 + 2) == 0x6e652d6c616e7265) &&
      *(long *)(param_1 + 4) == 0x722d676e69646f63) &&
      *(long *)((long)param_1 + 0x16) == 0x747365757165722d)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c404(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x100;
    puVar7[100] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.sizeofcmds) &&
     ((*(long *)param_1 == 0x6363612d63707267 && *(long *)(param_1 + 2) == 0x6f636e652d747065) &&
      param_1[4] == 0x676e6964)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c5d0(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x200;
    *(char *)(puVar7 + 99) = (char)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)param_1 == 0x6174732d63707267 && *(long *)((long)param_1 + 3) == 0x7375746174732d63))
  {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c724(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x400;
    puVar7[0x62] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)param_1 == 0x6d69742d63707267 && param_1[2] == 0x74756f65)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c900(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x800;
    *(uint **)(puVar7 + 0x60) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.flags + 2)) &&
     (((*(long *)param_1 == 0x6572702d63707267 && *(long *)(param_1 + 2) == 0x70722d73756f6976) &&
      *(long *)(param_1 + 4) == 0x706d657474612d63) && (short)param_1[6] == 0x7374)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034be6c(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x1000;
    puVar7[0x5e] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.sizeofcmds + 2)) &&
     ((*(long *)param_1 == 0x7465722d63707267 && *(long *)(param_1 + 2) == 0x62687375702d7972) &&
      *(long *)((long)param_1 + 0xe) == 0x736d2d6b63616268)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034cacc(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x2000;
    *(uint **)(puVar7 + 0x5c) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 2)) &&
     (*(long *)param_1 == 0x6567612d72657375 && (short)param_1[2] == 0x746e)) {
    unaff_x29 = &stack0xfffffffffffffff0;
    lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930(apuStack_48,puVar7,*(undefined8 *)puVar4);
    param_2 = apuStack_48;
    FUN_0034cc88(uVar8);
    unaff_x19 = apuStack_48[0];
    if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_48[0]) {
      do {
        lVar5 = *(long *)apuStack_48[0];
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(apuStack_48[0],0x10);
        if (bVar3) {
          *(long *)apuStack_48[0] = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(apuStack_48[0] + 2))();
        unaff_x19 = apuStack_48[0];
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418(apuStack_48);
    }
    unaff_x30 = FUN_0034cc48;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)(acStack_251 + 0x201);
  }
  if ((param_2 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)param_1 == 0x73656d2d63707267 && param_1[2] == 0x65676173)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034ce60(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034ce38;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)&MACH_HEADER.cputype) && (*param_1 == 0x74736f68)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d078(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d010;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.flags + 1)) &&
     (((*(long *)param_1 == 0x746e696f70646e65 && *(long *)(param_1 + 2) == 0x656d2d64616f6c2d) &&
      *(long *)(param_1 + 4) == 0x69622d7363697274) && (char)param_1[6] == 'n')) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d284(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d228;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.sizeofcmds + 1)) &&
     ((*(long *)param_1 == 0x7265732d63707267 && *(long *)(param_1 + 2) == 0x746174732d726576) &&
      *(long *)((long)param_1 + 0xd) == 0x6e69622d73746174)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d478(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d430;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 2)) &&
     (*(long *)param_1 == 0x6172742d63707267 && *(long *)((long)param_1 + 6) == 0x6e69622d65636172))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d66c(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d624;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)param_1 == 0x6761742d63707267 && *(long *)((long)param_1 + 5) == 0x6e69622d73676174))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d874(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d818;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.ncmds + 3)) &&
     ((*(long *)param_1 == 0x635f626c63707267 && *(long *)(param_1 + 2) == 0x74735f746e65696c) &&
      *(long *)((long)param_1 + 0xb) == 0x73746174735f746e)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034d9e0(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x200000;
    *(uint **)(puVar7 + 0x22) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)param_1 == 0x2d74736f632d626c && *(long *)((long)param_1 + 3) == 0x6e69622d74736f63))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    FUN_0034daf8((undefined1 *)((long)register0x00000008 + -0x40),param_3 + 2,
                 *(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    uVar1 = *puVar7;
    puVar4 = puVar7 + 0x18;
    *puVar7 = uVar1 | 0x400000;
    if ((uVar1 >> 0x16 & 1) == 0) {
      puVar7[0x20] = 0;
      puVar7[0x21] = 0;
      puVar7[0x1a] = 0;
      puVar7[0x1b] = 0;
      puVar4[0] = 0;
      puVar4[1] = 0;
      puVar7[0x1e] = 0;
      puVar7[0x1f] = 0;
      puVar7[0x1c] = 0;
      puVar7[0x1d] = 0;
    }
    FUN_0034dbcc(puVar4,(undefined1 *)((long)register0x00000008 + -0x40));
    if (*(char *)((long)register0x00000008 + -0x21) < '\0') {
      puVar4 = *(uint **)((long)register0x00000008 + -0x38);
      __ZdlPv(puVar4);
    }
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.cpusubtype) && (*(long *)param_1 == 0x6e656b6f742d626c)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    param_2 = *(uint ***)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),param_3 + 2,
                 *(undefined8 *)(param_3 + 10));
    param_1 = (uint *)((long)register0x00000008 + -0x48);
    FUN_0034de58(uVar8);
    puVar4 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
      do {
        lVar5 = *(long *)puVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar3) {
          *(long *)puVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(puVar4 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return puVar4;
    }
    ___stack_chk_fail();
    if ((int)param_1 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    puVar7 = puVar4;
    __Unwind_Resume();
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x68) = puVar4;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_0034de58;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x60);
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar1 = *puVar7;
    unaff_x19 = puVar7 + 0x10;
    *puVar7 = uVar1 | 0x800000;
    if ((uVar1 >> 0x17 & 1) == 0) {
      lVar10 = *(long *)(param_1 + 2);
      lVar9 = *(long *)param_1;
      lVar6 = *(long *)(param_1 + 6);
      lVar5 = *(long *)(param_1 + 4);
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      *(long *)(puVar7 + 0x12) = lVar10;
      *(long *)unaff_x19 = lVar9;
      *(long *)(puVar7 + 0x16) = lVar6;
      *(long *)(puVar7 + 0x14) = lVar5;
      param_3 = puVar7;
    }
    else {
      lVar5 = *(long *)param_1;
      lVar6 = *(long *)(param_1 + 6);
      *(long *)((long)register0x00000008 + -0xd0) = lVar6;
      lVar10 = *(long *)(param_1 + 4);
      lVar9 = *(long *)(param_1 + 2);
      *(long *)((long)register0x00000008 + -0xd8) = lVar10;
      *(long *)((long)register0x00000008 + -0xe0) = lVar9;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_3 = *(uint **)(puVar7 + 0x10);
      uVar8 = *(undefined8 *)(puVar7 + 0x16);
      uVar12 = *(undefined8 *)(puVar7 + 0x14);
      uVar11 = *(undefined8 *)(puVar7 + 0x12);
      *(long *)(puVar7 + 0x10) = lVar5;
      *(long *)(puVar7 + 0x14) = lVar10;
      *(long *)(puVar7 + 0x12) = lVar9;
      *(long *)(puVar7 + 0x16) = lVar6;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar12;
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar11;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar8;
      if ((uint *)((long)&MACH_HEADER.magic + 1) < param_3) {
        do {
          lVar5 = *(long *)param_3;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_3,0x10);
          if (bVar3) {
            *(long *)param_3 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 + -1 == 0) {
          (**(code **)(param_3 + 2))();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x78)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_1 == 0) {
      __Unwind_Resume();
    }
    unaff_x30 = FUN_0034df40;
    func_0x0040cf10();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xe0);
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  lVar5 = *(long *)param_3;
  uVar8 = *(undefined8 *)(param_3 + 2);
  uVar12 = *(undefined8 *)(param_3 + 8);
  uVar11 = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)((long)register0x00000008 + -0x50) = uVar8;
  *(undefined8 *)((long)register0x00000008 + -0x38) = uVar12;
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar11;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  FUN_003fe220(lVar5 + 0x1f0);
  puVar4 = *(uint **)((long)register0x00000008 + -0x50);
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
    do {
      lVar5 = *(long *)puVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar3) {
        *(long *)puVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(puVar4 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)param_1 != 0) {
    func_0x0040cf10(puVar4);
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x50));
  }
  __Unwind_Resume(puVar4);
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x58) = FUN_0034e004;
  *(uint **)((long)register0x00000008 + -0x70) = param_1;
  *(uint ***)((long)register0x00000008 + -0x68) = param_2;
  FUN_0034e02c();
  return puVar4;
}



/* Entry: 0034bbe0; end: 0034bccb;  */

uint * FUN_0034bbe0(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = *param_1;
  *param_1 = uVar1 | 2;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar13 = param_2[1];
    uVar12 = *param_2;
    uVar10 = param_2[3];
    uVar9 = param_2[2];
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    *(undefined8 *)(param_1 + 0x6e) = uVar13;
    *(undefined8 *)(param_1 + 0x6c) = uVar12;
    *(undefined8 *)(param_1 + 0x72) = uVar10;
    *(undefined8 *)(param_1 + 0x70) = uVar9;
    puVar4 = param_1;
  }
  else {
    uVar9 = *param_2;
    uVar10 = param_2[3];
    uVar13 = param_2[2];
    uVar12 = param_2[1];
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    puVar4 = *(uint **)(param_1 + 0x6c);
    *(undefined8 *)(param_1 + 0x6c) = uVar9;
    *(undefined8 *)(param_1 + 0x70) = uVar13;
    *(undefined8 *)(param_1 + 0x6e) = uVar12;
    *(undefined8 *)(param_1 + 0x72) = uVar10;
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
      do {
        lVar7 = *(long *)puVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar3) {
          *(long *)puVar4 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(puVar4 + 2))();
      }
    }
  }
  iVar6 = (int)param_2;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar8) {
    return param_1 + 0x6c;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x0040cf10();
  puVar11 = *(uint **)puVar4;
  puVar5 = puVar4 + 2;
  FUN_0034bd40(puVar5,*(undefined8 *)(puVar4 + 10),*(undefined8 *)(puVar4 + 0xc));
  *puVar11 = *puVar11 | 4;
  puVar11[0x6a] = (uint)puVar5;
  return puVar5;
}



/* Entry: 0034bccc; end: 0034bd07;  */

void FUN_0034bccc(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  
  puVar2 = (uint *)*param_1;
  puVar1 = param_1 + 1;
  FUN_0034bd40(puVar1,param_1[5],param_1[6]);
  *puVar2 = *puVar2 | 4;
  puVar2[0x6a] = (uint)puVar1;
  return;
}



/* Entry: 0034bd08; end: 0034bd3f;  */

uint * FUN_0034bd08(uint *param_1,uint **param_2,uint *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  uint *unaff_x19;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char acStack_251 [521];
  uint *apuStack_48 [4];
  long lStack_28;
  
  if ((param_2 == (uint **)((long)&MACH_HEADER.cputype + 3)) &&
     (*param_1 == 0x6174733a && *(int *)((long)param_1 + 3) == 0x73757461)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034be6c(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 8;
    puVar7[0x69] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cputype + 3)) &&
     (*param_1 == 0x6863733a && *(int *)((long)param_1 + 3) == 0x656d6568)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c020(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x10;
    puVar7[0x68] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)param_1 == 0x2d746e65746e6f63 && param_1[2] == 0x65707974)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c160(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x20;
    puVar7[0x67] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.magic + 2)) && ((short)*param_1 == 0x6574)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c29c(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x40;
    *(char *)(puVar7 + 0x66) = (char)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)param_1 == 0x636e652d63707267 && *(long *)((long)param_1 + 5) == 0x676e69646f636e65))
  {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c404(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x80;
    puVar7[0x65] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.reserved + 2)) &&
     (((*(long *)param_1 == 0x746e692d63707267 && *(long *)(param_1 + 2) == 0x6e652d6c616e7265) &&
      *(long *)(param_1 + 4) == 0x722d676e69646f63) &&
      *(long *)((long)param_1 + 0x16) == 0x747365757165722d)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c404(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x100;
    puVar7[100] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.sizeofcmds) &&
     ((*(long *)param_1 == 0x6363612d63707267 && *(long *)(param_1 + 2) == 0x6f636e652d747065) &&
      param_1[4] == 0x676e6964)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c5d0(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x200;
    *(char *)(puVar7 + 99) = (char)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)param_1 == 0x6174732d63707267 && *(long *)((long)param_1 + 3) == 0x7375746174732d63))
  {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c724(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x400;
    puVar7[0x62] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)param_1 == 0x6d69742d63707267 && param_1[2] == 0x74756f65)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c900(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x800;
    *(uint **)(puVar7 + 0x60) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.flags + 2)) &&
     (((*(long *)param_1 == 0x6572702d63707267 && *(long *)(param_1 + 2) == 0x70722d73756f6976) &&
      *(long *)(param_1 + 4) == 0x706d657474612d63) && (short)param_1[6] == 0x7374)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034be6c(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x1000;
    puVar7[0x5e] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.sizeofcmds + 2)) &&
     ((*(long *)param_1 == 0x7465722d63707267 && *(long *)(param_1 + 2) == 0x62687375702d7972) &&
      *(long *)((long)param_1 + 0xe) == 0x736d2d6b63616268)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034cacc(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x2000;
    *(uint **)(puVar7 + 0x5c) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 2)) &&
     (*(long *)param_1 == 0x6567612d72657375 && (short)param_1[2] == 0x746e)) {
    unaff_x29 = &stack0xfffffffffffffff0;
    lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930(apuStack_48,puVar7,*(undefined8 *)puVar4);
    param_2 = apuStack_48;
    FUN_0034cc88(uVar8);
    unaff_x19 = apuStack_48[0];
    if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_48[0]) {
      do {
        lVar5 = *(long *)apuStack_48[0];
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(apuStack_48[0],0x10);
        if (bVar3) {
          *(long *)apuStack_48[0] = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(apuStack_48[0] + 2))();
        unaff_x19 = apuStack_48[0];
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418(apuStack_48);
    }
    unaff_x30 = FUN_0034cc48;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)(acStack_251 + 0x201);
  }
  if ((param_2 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)param_1 == 0x73656d2d63707267 && param_1[2] == 0x65676173)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034ce60(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034ce38;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)&MACH_HEADER.cputype) && (*param_1 == 0x74736f68)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d078(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d010;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.flags + 1)) &&
     (((*(long *)param_1 == 0x746e696f70646e65 && *(long *)(param_1 + 2) == 0x656d2d64616f6c2d) &&
      *(long *)(param_1 + 4) == 0x69622d7363697274) && (char)param_1[6] == 'n')) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d284(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d228;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.sizeofcmds + 1)) &&
     ((*(long *)param_1 == 0x7265732d63707267 && *(long *)(param_1 + 2) == 0x746174732d726576) &&
      *(long *)((long)param_1 + 0xd) == 0x6e69622d73746174)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d478(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d430;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 2)) &&
     (*(long *)param_1 == 0x6172742d63707267 && *(long *)((long)param_1 + 6) == 0x6e69622d65636172))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d66c(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d624;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)param_1 == 0x6761742d63707267 && *(long *)((long)param_1 + 5) == 0x6e69622d73676174))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d874(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d818;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.ncmds + 3)) &&
     ((*(long *)param_1 == 0x635f626c63707267 && *(long *)(param_1 + 2) == 0x74735f746e65696c) &&
      *(long *)((long)param_1 + 0xb) == 0x73746174735f746e)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034d9e0(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x200000;
    *(uint **)(puVar7 + 0x22) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)param_1 == 0x2d74736f632d626c && *(long *)((long)param_1 + 3) == 0x6e69622d74736f63))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    FUN_0034daf8((undefined1 *)((long)register0x00000008 + -0x40),param_3 + 2,
                 *(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    uVar1 = *puVar7;
    puVar4 = puVar7 + 0x18;
    *puVar7 = uVar1 | 0x400000;
    if ((uVar1 >> 0x16 & 1) == 0) {
      puVar7[0x20] = 0;
      puVar7[0x21] = 0;
      puVar7[0x1a] = 0;
      puVar7[0x1b] = 0;
      puVar4[0] = 0;
      puVar4[1] = 0;
      puVar7[0x1e] = 0;
      puVar7[0x1f] = 0;
      puVar7[0x1c] = 0;
      puVar7[0x1d] = 0;
    }
    FUN_0034dbcc(puVar4,(undefined1 *)((long)register0x00000008 + -0x40));
    if (*(char *)((long)register0x00000008 + -0x21) < '\0') {
      puVar4 = *(uint **)((long)register0x00000008 + -0x38);
      __ZdlPv(puVar4);
    }
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.cpusubtype) && (*(long *)param_1 == 0x6e656b6f742d626c)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    param_2 = *(uint ***)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),param_3 + 2,
                 *(undefined8 *)(param_3 + 10));
    param_1 = (uint *)((long)register0x00000008 + -0x48);
    FUN_0034de58(uVar8);
    puVar4 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
      do {
        lVar5 = *(long *)puVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar3) {
          *(long *)puVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(puVar4 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return puVar4;
    }
    ___stack_chk_fail();
    if ((int)param_1 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    puVar7 = puVar4;
    __Unwind_Resume();
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x68) = puVar4;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_0034de58;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x60);
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar1 = *puVar7;
    unaff_x19 = puVar7 + 0x10;
    *puVar7 = uVar1 | 0x800000;
    if ((uVar1 >> 0x17 & 1) == 0) {
      lVar10 = *(long *)(param_1 + 2);
      lVar9 = *(long *)param_1;
      lVar6 = *(long *)(param_1 + 6);
      lVar5 = *(long *)(param_1 + 4);
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      *(long *)(puVar7 + 0x12) = lVar10;
      *(long *)unaff_x19 = lVar9;
      *(long *)(puVar7 + 0x16) = lVar6;
      *(long *)(puVar7 + 0x14) = lVar5;
      param_3 = puVar7;
    }
    else {
      lVar5 = *(long *)param_1;
      lVar6 = *(long *)(param_1 + 6);
      *(long *)((long)register0x00000008 + -0xd0) = lVar6;
      lVar10 = *(long *)(param_1 + 4);
      lVar9 = *(long *)(param_1 + 2);
      *(long *)((long)register0x00000008 + -0xd8) = lVar10;
      *(long *)((long)register0x00000008 + -0xe0) = lVar9;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_3 = *(uint **)(puVar7 + 0x10);
      uVar8 = *(undefined8 *)(puVar7 + 0x16);
      uVar12 = *(undefined8 *)(puVar7 + 0x14);
      uVar11 = *(undefined8 *)(puVar7 + 0x12);
      *(long *)(puVar7 + 0x10) = lVar5;
      *(long *)(puVar7 + 0x14) = lVar10;
      *(long *)(puVar7 + 0x12) = lVar9;
      *(long *)(puVar7 + 0x16) = lVar6;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar12;
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar11;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar8;
      if ((uint *)((long)&MACH_HEADER.magic + 1) < param_3) {
        do {
          lVar5 = *(long *)param_3;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_3,0x10);
          if (bVar3) {
            *(long *)param_3 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 + -1 == 0) {
          (**(code **)(param_3 + 2))();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x78)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_1 == 0) {
      __Unwind_Resume();
    }
    unaff_x30 = FUN_0034df40;
    func_0x0040cf10();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xe0);
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  lVar5 = *(long *)param_3;
  uVar8 = *(undefined8 *)(param_3 + 2);
  uVar12 = *(undefined8 *)(param_3 + 8);
  uVar11 = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)((long)register0x00000008 + -0x50) = uVar8;
  *(undefined8 *)((long)register0x00000008 + -0x38) = uVar12;
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar11;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  FUN_003fe220(lVar5 + 0x1f0);
  puVar4 = *(uint **)((long)register0x00000008 + -0x50);
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
    do {
      lVar5 = *(long *)puVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar3) {
        *(long *)puVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(puVar4 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)param_1 != 0) {
    func_0x0040cf10(puVar4);
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x50));
  }
  __Unwind_Resume(puVar4);
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x58) = FUN_0034e004;
  *(uint **)((long)register0x00000008 + -0x70) = param_1;
  *(uint ***)((long)register0x00000008 + -0x68) = param_2;
  FUN_0034e02c();
  return puVar4;
}



/* Entry: 0034bd40; end: 0034bdf7;  */

long * FUN_0034bd40(undefined8 *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  long **pplVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  uint *puVar7;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  pplVar3 = &plStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_003fec68(&plStack_50);
  plVar4 = plStack_50;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_50) {
    do {
      lVar6 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return (long *)pplVar3;
  }
  ___stack_chk_fail();
  if (param_2 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_50);
  }
  __Unwind_Resume();
  puVar7 = (uint *)*plVar4;
  plVar5 = plVar4 + 1;
  FUN_0034be6c(plVar5,plVar4[5],plVar4[6]);
  *puVar7 = *puVar7 | 8;
  puVar7[0x69] = (uint)plVar5;
  return plVar5;
}



/* Entry: 0034bdf8; end: 0034be33;  */

void FUN_0034bdf8(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  
  puVar2 = (uint *)*param_1;
  puVar1 = param_1 + 1;
  FUN_0034be6c(puVar1,param_1[5],param_1[6]);
  *puVar2 = *puVar2 | 8;
  puVar2[0x69] = (uint)puVar1;
  return;
}



/* Entry: 0034be34; end: 0034be6b;  */

uint * FUN_0034be34(uint *param_1,uint **param_2,uint *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  uint *unaff_x19;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char acStack_251 [521];
  uint *apuStack_48 [4];
  long lStack_28;
  
  if ((param_2 == (uint **)((long)&MACH_HEADER.cputype + 3)) &&
     (*param_1 == 0x6863733a && *(int *)((long)param_1 + 3) == 0x656d6568)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c020(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x10;
    puVar7[0x68] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)param_1 == 0x2d746e65746e6f63 && param_1[2] == 0x65707974)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c160(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x20;
    puVar7[0x67] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.magic + 2)) && ((short)*param_1 == 0x6574)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c29c(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x40;
    *(char *)(puVar7 + 0x66) = (char)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)param_1 == 0x636e652d63707267 && *(long *)((long)param_1 + 5) == 0x676e69646f636e65))
  {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c404(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x80;
    puVar7[0x65] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.reserved + 2)) &&
     (((*(long *)param_1 == 0x746e692d63707267 && *(long *)(param_1 + 2) == 0x6e652d6c616e7265) &&
      *(long *)(param_1 + 4) == 0x722d676e69646f63) &&
      *(long *)((long)param_1 + 0x16) == 0x747365757165722d)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c404(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x100;
    puVar7[100] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.sizeofcmds) &&
     ((*(long *)param_1 == 0x6363612d63707267 && *(long *)(param_1 + 2) == 0x6f636e652d747065) &&
      param_1[4] == 0x676e6964)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c5d0(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x200;
    *(char *)(puVar7 + 99) = (char)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)param_1 == 0x6174732d63707267 && *(long *)((long)param_1 + 3) == 0x7375746174732d63))
  {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c724(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x400;
    puVar7[0x62] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)param_1 == 0x6d69742d63707267 && param_1[2] == 0x74756f65)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c900(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x800;
    *(uint **)(puVar7 + 0x60) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.flags + 2)) &&
     (((*(long *)param_1 == 0x6572702d63707267 && *(long *)(param_1 + 2) == 0x70722d73756f6976) &&
      *(long *)(param_1 + 4) == 0x706d657474612d63) && (short)param_1[6] == 0x7374)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034be6c(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x1000;
    puVar7[0x5e] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.sizeofcmds + 2)) &&
     ((*(long *)param_1 == 0x7465722d63707267 && *(long *)(param_1 + 2) == 0x62687375702d7972) &&
      *(long *)((long)param_1 + 0xe) == 0x736d2d6b63616268)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034cacc(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x2000;
    *(uint **)(puVar7 + 0x5c) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 2)) &&
     (*(long *)param_1 == 0x6567612d72657375 && (short)param_1[2] == 0x746e)) {
    unaff_x29 = &stack0xfffffffffffffff0;
    lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930(apuStack_48,puVar7,*(undefined8 *)puVar4);
    param_2 = apuStack_48;
    FUN_0034cc88(uVar8);
    unaff_x19 = apuStack_48[0];
    if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_48[0]) {
      do {
        lVar5 = *(long *)apuStack_48[0];
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(apuStack_48[0],0x10);
        if (bVar3) {
          *(long *)apuStack_48[0] = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(apuStack_48[0] + 2))();
        unaff_x19 = apuStack_48[0];
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418(apuStack_48);
    }
    unaff_x30 = FUN_0034cc48;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)(acStack_251 + 0x201);
  }
  if ((param_2 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)param_1 == 0x73656d2d63707267 && param_1[2] == 0x65676173)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034ce60(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034ce38;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)&MACH_HEADER.cputype) && (*param_1 == 0x74736f68)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d078(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d010;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.flags + 1)) &&
     (((*(long *)param_1 == 0x746e696f70646e65 && *(long *)(param_1 + 2) == 0x656d2d64616f6c2d) &&
      *(long *)(param_1 + 4) == 0x69622d7363697274) && (char)param_1[6] == 'n')) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d284(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d228;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.sizeofcmds + 1)) &&
     ((*(long *)param_1 == 0x7265732d63707267 && *(long *)(param_1 + 2) == 0x746174732d726576) &&
      *(long *)((long)param_1 + 0xd) == 0x6e69622d73746174)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d478(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d430;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 2)) &&
     (*(long *)param_1 == 0x6172742d63707267 && *(long *)((long)param_1 + 6) == 0x6e69622d65636172))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d66c(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d624;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)param_1 == 0x6761742d63707267 && *(long *)((long)param_1 + 5) == 0x6e69622d73676174))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d874(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d818;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.ncmds + 3)) &&
     ((*(long *)param_1 == 0x635f626c63707267 && *(long *)(param_1 + 2) == 0x74735f746e65696c) &&
      *(long *)((long)param_1 + 0xb) == 0x73746174735f746e)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034d9e0(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x200000;
    *(uint **)(puVar7 + 0x22) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)param_1 == 0x2d74736f632d626c && *(long *)((long)param_1 + 3) == 0x6e69622d74736f63))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    FUN_0034daf8((undefined1 *)((long)register0x00000008 + -0x40),param_3 + 2,
                 *(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    uVar1 = *puVar7;
    puVar4 = puVar7 + 0x18;
    *puVar7 = uVar1 | 0x400000;
    if ((uVar1 >> 0x16 & 1) == 0) {
      puVar7[0x20] = 0;
      puVar7[0x21] = 0;
      puVar7[0x1a] = 0;
      puVar7[0x1b] = 0;
      puVar4[0] = 0;
      puVar4[1] = 0;
      puVar7[0x1e] = 0;
      puVar7[0x1f] = 0;
      puVar7[0x1c] = 0;
      puVar7[0x1d] = 0;
    }
    FUN_0034dbcc(puVar4,(undefined1 *)((long)register0x00000008 + -0x40));
    if (*(char *)((long)register0x00000008 + -0x21) < '\0') {
      puVar4 = *(uint **)((long)register0x00000008 + -0x38);
      __ZdlPv(puVar4);
    }
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.cpusubtype) && (*(long *)param_1 == 0x6e656b6f742d626c)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    param_2 = *(uint ***)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),param_3 + 2,
                 *(undefined8 *)(param_3 + 10));
    param_1 = (uint *)((long)register0x00000008 + -0x48);
    FUN_0034de58(uVar8);
    puVar4 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
      do {
        lVar5 = *(long *)puVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar3) {
          *(long *)puVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(puVar4 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return puVar4;
    }
    ___stack_chk_fail();
    if ((int)param_1 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    puVar7 = puVar4;
    __Unwind_Resume();
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x68) = puVar4;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_0034de58;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x60);
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar1 = *puVar7;
    unaff_x19 = puVar7 + 0x10;
    *puVar7 = uVar1 | 0x800000;
    if ((uVar1 >> 0x17 & 1) == 0) {
      lVar10 = *(long *)(param_1 + 2);
      lVar9 = *(long *)param_1;
      lVar6 = *(long *)(param_1 + 6);
      lVar5 = *(long *)(param_1 + 4);
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      *(long *)(puVar7 + 0x12) = lVar10;
      *(long *)unaff_x19 = lVar9;
      *(long *)(puVar7 + 0x16) = lVar6;
      *(long *)(puVar7 + 0x14) = lVar5;
      param_3 = puVar7;
    }
    else {
      lVar5 = *(long *)param_1;
      lVar6 = *(long *)(param_1 + 6);
      *(long *)((long)register0x00000008 + -0xd0) = lVar6;
      lVar10 = *(long *)(param_1 + 4);
      lVar9 = *(long *)(param_1 + 2);
      *(long *)((long)register0x00000008 + -0xd8) = lVar10;
      *(long *)((long)register0x00000008 + -0xe0) = lVar9;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_3 = *(uint **)(puVar7 + 0x10);
      uVar8 = *(undefined8 *)(puVar7 + 0x16);
      uVar12 = *(undefined8 *)(puVar7 + 0x14);
      uVar11 = *(undefined8 *)(puVar7 + 0x12);
      *(long *)(puVar7 + 0x10) = lVar5;
      *(long *)(puVar7 + 0x14) = lVar10;
      *(long *)(puVar7 + 0x12) = lVar9;
      *(long *)(puVar7 + 0x16) = lVar6;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar12;
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar11;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar8;
      if ((uint *)((long)&MACH_HEADER.magic + 1) < param_3) {
        do {
          lVar5 = *(long *)param_3;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_3,0x10);
          if (bVar3) {
            *(long *)param_3 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 + -1 == 0) {
          (**(code **)(param_3 + 2))();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x78)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_1 == 0) {
      __Unwind_Resume();
    }
    unaff_x30 = FUN_0034df40;
    func_0x0040cf10();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xe0);
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  lVar5 = *(long *)param_3;
  uVar8 = *(undefined8 *)(param_3 + 2);
  uVar12 = *(undefined8 *)(param_3 + 8);
  uVar11 = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)((long)register0x00000008 + -0x50) = uVar8;
  *(undefined8 *)((long)register0x00000008 + -0x38) = uVar12;
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar11;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  FUN_003fe220(lVar5 + 0x1f0);
  puVar4 = *(uint **)((long)register0x00000008 + -0x50);
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
    do {
      lVar5 = *(long *)puVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar3) {
        *(long *)puVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(puVar4 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)param_1 != 0) {
    func_0x0040cf10(puVar4);
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x50));
  }
  __Unwind_Resume(puVar4);
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x58) = FUN_0034e004;
  *(uint **)((long)register0x00000008 + -0x70) = param_1;
  *(uint ***)((long)register0x00000008 + -0x68) = param_2;
  FUN_0034e02c();
  return puVar4;
}



/* Entry: 0034be6c; end: 0034bf23;  */

undefined1 * FUN_0034be6c(undefined8 *param_1,undefined8 param_2,code *param_3)

{
  char cVar1;
  bool bVar2;
  long **pplVar3;
  long *plVar4;
  ulong uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long lVar8;
  uint uStack_84;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  pplVar3 = &plStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_0034bf24(&plStack_50);
  plVar4 = plStack_50;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_50) {
    do {
      lVar8 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return (undefined1 *)pplVar3;
  }
  ___stack_chk_fail();
  if ((int)param_2 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_50);
  }
  __Unwind_Resume();
  if (*plVar4 == 0) {
    uVar5 = (long)plVar4 + 9;
    uVar7 = (ulong)*(byte *)(plVar4 + 1);
  }
  else {
    uVar7 = plVar4[1];
    uVar5 = plVar4[2];
  }
  func_0x00575a04(uVar5,uVar7,&uStack_84,10);
  if ((uVar5 & 1) == 0) {
    (*param_3)(param_2,"not an integer",0xe,plVar4);
    puVar6 = (undefined1 *)0x0;
  }
  else {
    puVar6 = (undefined1 *)(ulong)uStack_84;
  }
  return puVar6;
}



/* Entry: 0034bf24; end: 0034bfa3;  */

undefined4 FUN_0034bf24(long *param_1,undefined8 param_2,code *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 uStack_34;
  
  if (*param_1 == 0) {
    uVar1 = (long)param_1 + 9;
    uVar2 = (ulong)*(byte *)(param_1 + 1);
  }
  else {
    uVar2 = param_1[1];
    uVar1 = param_1[2];
  }
  func_0x00575a04(uVar1,uVar2,&uStack_34,10);
  if ((uVar1 & 1) == 0) {
    (*param_3)(param_2,"not an integer",0xe,param_1);
    uStack_34 = 0;
  }
  return uStack_34;
}



/* Entry: 0034bfa4; end: 0034bfdf;  */

void FUN_0034bfa4(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  
  puVar2 = (uint *)*param_1;
  puVar1 = param_1 + 1;
  FUN_0034c020(puVar1,param_1[5],param_1[6]);
  *puVar2 = *puVar2 | 0x10;
  puVar2[0x68] = (uint)puVar1;
  return;
}



/* Entry: 0034bfe0; end: 0034c01f;  */

uint * FUN_0034bfe0(uint *param_1,uint **param_2,uint *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  uint *unaff_x19;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char acStack_251 [521];
  uint *apuStack_48 [4];
  long lStack_28;
  
  if ((param_2 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)param_1 == 0x2d746e65746e6f63 && param_1[2] == 0x65707974)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c160(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x20;
    puVar7[0x67] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.magic + 2)) && ((short)*param_1 == 0x6574)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c29c(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x40;
    *(char *)(puVar7 + 0x66) = (char)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)param_1 == 0x636e652d63707267 && *(long *)((long)param_1 + 5) == 0x676e69646f636e65))
  {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c404(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x80;
    puVar7[0x65] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.reserved + 2)) &&
     (((*(long *)param_1 == 0x746e692d63707267 && *(long *)(param_1 + 2) == 0x6e652d6c616e7265) &&
      *(long *)(param_1 + 4) == 0x722d676e69646f63) &&
      *(long *)((long)param_1 + 0x16) == 0x747365757165722d)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c404(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x100;
    puVar7[100] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.sizeofcmds) &&
     ((*(long *)param_1 == 0x6363612d63707267 && *(long *)(param_1 + 2) == 0x6f636e652d747065) &&
      param_1[4] == 0x676e6964)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c5d0(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x200;
    *(char *)(puVar7 + 99) = (char)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)param_1 == 0x6174732d63707267 && *(long *)((long)param_1 + 3) == 0x7375746174732d63))
  {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c724(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x400;
    puVar7[0x62] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)param_1 == 0x6d69742d63707267 && param_1[2] == 0x74756f65)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c900(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x800;
    *(uint **)(puVar7 + 0x60) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.flags + 2)) &&
     (((*(long *)param_1 == 0x6572702d63707267 && *(long *)(param_1 + 2) == 0x70722d73756f6976) &&
      *(long *)(param_1 + 4) == 0x706d657474612d63) && (short)param_1[6] == 0x7374)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034be6c(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x1000;
    puVar7[0x5e] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.sizeofcmds + 2)) &&
     ((*(long *)param_1 == 0x7465722d63707267 && *(long *)(param_1 + 2) == 0x62687375702d7972) &&
      *(long *)((long)param_1 + 0xe) == 0x736d2d6b63616268)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034cacc(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x2000;
    *(uint **)(puVar7 + 0x5c) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 2)) &&
     (*(long *)param_1 == 0x6567612d72657375 && (short)param_1[2] == 0x746e)) {
    unaff_x29 = &stack0xfffffffffffffff0;
    lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930(apuStack_48,puVar7,*(undefined8 *)puVar4);
    param_2 = apuStack_48;
    FUN_0034cc88(uVar8);
    unaff_x19 = apuStack_48[0];
    if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_48[0]) {
      do {
        lVar5 = *(long *)apuStack_48[0];
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(apuStack_48[0],0x10);
        if (bVar3) {
          *(long *)apuStack_48[0] = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(apuStack_48[0] + 2))();
        unaff_x19 = apuStack_48[0];
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418(apuStack_48);
    }
    unaff_x30 = FUN_0034cc48;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)(acStack_251 + 0x201);
  }
  if ((param_2 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)param_1 == 0x73656d2d63707267 && param_1[2] == 0x65676173)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034ce60(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034ce38;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)&MACH_HEADER.cputype) && (*param_1 == 0x74736f68)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d078(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d010;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.flags + 1)) &&
     (((*(long *)param_1 == 0x746e696f70646e65 && *(long *)(param_1 + 2) == 0x656d2d64616f6c2d) &&
      *(long *)(param_1 + 4) == 0x69622d7363697274) && (char)param_1[6] == 'n')) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d284(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d228;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.sizeofcmds + 1)) &&
     ((*(long *)param_1 == 0x7265732d63707267 && *(long *)(param_1 + 2) == 0x746174732d726576) &&
      *(long *)((long)param_1 + 0xd) == 0x6e69622d73746174)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d478(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d430;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 2)) &&
     (*(long *)param_1 == 0x6172742d63707267 && *(long *)((long)param_1 + 6) == 0x6e69622d65636172))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d66c(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d624;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)param_1 == 0x6761742d63707267 && *(long *)((long)param_1 + 5) == 0x6e69622d73676174))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d874(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d818;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.ncmds + 3)) &&
     ((*(long *)param_1 == 0x635f626c63707267 && *(long *)(param_1 + 2) == 0x74735f746e65696c) &&
      *(long *)((long)param_1 + 0xb) == 0x73746174735f746e)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034d9e0(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x200000;
    *(uint **)(puVar7 + 0x22) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)param_1 == 0x2d74736f632d626c && *(long *)((long)param_1 + 3) == 0x6e69622d74736f63))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    FUN_0034daf8((undefined1 *)((long)register0x00000008 + -0x40),param_3 + 2,
                 *(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    uVar1 = *puVar7;
    puVar4 = puVar7 + 0x18;
    *puVar7 = uVar1 | 0x400000;
    if ((uVar1 >> 0x16 & 1) == 0) {
      puVar7[0x20] = 0;
      puVar7[0x21] = 0;
      puVar7[0x1a] = 0;
      puVar7[0x1b] = 0;
      puVar4[0] = 0;
      puVar4[1] = 0;
      puVar7[0x1e] = 0;
      puVar7[0x1f] = 0;
      puVar7[0x1c] = 0;
      puVar7[0x1d] = 0;
    }
    FUN_0034dbcc(puVar4,(undefined1 *)((long)register0x00000008 + -0x40));
    if (*(char *)((long)register0x00000008 + -0x21) < '\0') {
      puVar4 = *(uint **)((long)register0x00000008 + -0x38);
      __ZdlPv(puVar4);
    }
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.cpusubtype) && (*(long *)param_1 == 0x6e656b6f742d626c)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    param_2 = *(uint ***)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),param_3 + 2,
                 *(undefined8 *)(param_3 + 10));
    param_1 = (uint *)((long)register0x00000008 + -0x48);
    FUN_0034de58(uVar8);
    puVar4 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
      do {
        lVar5 = *(long *)puVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar3) {
          *(long *)puVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(puVar4 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return puVar4;
    }
    ___stack_chk_fail();
    if ((int)param_1 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    puVar7 = puVar4;
    __Unwind_Resume();
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x68) = puVar4;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_0034de58;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x60);
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar1 = *puVar7;
    unaff_x19 = puVar7 + 0x10;
    *puVar7 = uVar1 | 0x800000;
    if ((uVar1 >> 0x17 & 1) == 0) {
      lVar10 = *(long *)(param_1 + 2);
      lVar9 = *(long *)param_1;
      lVar6 = *(long *)(param_1 + 6);
      lVar5 = *(long *)(param_1 + 4);
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      *(long *)(puVar7 + 0x12) = lVar10;
      *(long *)unaff_x19 = lVar9;
      *(long *)(puVar7 + 0x16) = lVar6;
      *(long *)(puVar7 + 0x14) = lVar5;
      param_3 = puVar7;
    }
    else {
      lVar5 = *(long *)param_1;
      lVar6 = *(long *)(param_1 + 6);
      *(long *)((long)register0x00000008 + -0xd0) = lVar6;
      lVar10 = *(long *)(param_1 + 4);
      lVar9 = *(long *)(param_1 + 2);
      *(long *)((long)register0x00000008 + -0xd8) = lVar10;
      *(long *)((long)register0x00000008 + -0xe0) = lVar9;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_3 = *(uint **)(puVar7 + 0x10);
      uVar8 = *(undefined8 *)(puVar7 + 0x16);
      uVar12 = *(undefined8 *)(puVar7 + 0x14);
      uVar11 = *(undefined8 *)(puVar7 + 0x12);
      *(long *)(puVar7 + 0x10) = lVar5;
      *(long *)(puVar7 + 0x14) = lVar10;
      *(long *)(puVar7 + 0x12) = lVar9;
      *(long *)(puVar7 + 0x16) = lVar6;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar12;
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar11;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar8;
      if ((uint *)((long)&MACH_HEADER.magic + 1) < param_3) {
        do {
          lVar5 = *(long *)param_3;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_3,0x10);
          if (bVar3) {
            *(long *)param_3 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 + -1 == 0) {
          (**(code **)(param_3 + 2))();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x78)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_1 == 0) {
      __Unwind_Resume();
    }
    unaff_x30 = FUN_0034df40;
    func_0x0040cf10();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xe0);
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  lVar5 = *(long *)param_3;
  uVar8 = *(undefined8 *)(param_3 + 2);
  uVar12 = *(undefined8 *)(param_3 + 8);
  uVar11 = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)((long)register0x00000008 + -0x50) = uVar8;
  *(undefined8 *)((long)register0x00000008 + -0x38) = uVar12;
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar11;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  FUN_003fe220(lVar5 + 0x1f0);
  puVar4 = *(uint **)((long)register0x00000008 + -0x50);
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
    do {
      lVar5 = *(long *)puVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar3) {
        *(long *)puVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(puVar4 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)param_1 != 0) {
    func_0x0040cf10(puVar4);
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x50));
  }
  __Unwind_Resume(puVar4);
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x58) = FUN_0034e004;
  *(uint **)((long)register0x00000008 + -0x70) = param_1;
  *(uint ***)((long)register0x00000008 + -0x68) = param_2;
  FUN_0034e02c();
  return puVar4;
}



/* Entry: 0034c020; end: 0034c0ff;  */

long * FUN_0034c020(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  long *plStack_50;
  ulong uStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  plStack_40 = (long *)param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar6 = uStack_48 & 0xff;
  plVar3 = (long *)((ulong)&plStack_50 | 9);
  if (plStack_50 != (long *)0x0) {
    uVar6 = uStack_48;
    plVar3 = plStack_40;
  }
  FUN_003feac4(plVar3,uVar6,param_2,param_3);
  iVar5 = (int)uVar6;
  plVar4 = plStack_50;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_50) {
    do {
      lVar7 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_28) {
    ___stack_chk_fail();
    if (iVar5 != 0) {
      func_0x0040cf10();
      FUN_0034b418(&plStack_50);
    }
    __Unwind_Resume();
    puVar8 = (uint *)*plVar4;
    plVar3 = plVar4 + 1;
    FUN_0034c160(plVar3,plVar4[5],plVar4[6]);
    *puVar8 = *puVar8 | 0x20;
    puVar8[0x67] = (uint)plVar3;
    return plVar3;
  }
  return plVar3;
}



/* Entry: 0034c100; end: 0034c13b;  */

void FUN_0034c100(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  
  puVar2 = (uint *)*param_1;
  puVar1 = param_1 + 1;
  FUN_0034c160(puVar1,param_1[5],param_1[6]);
  *puVar2 = *puVar2 | 0x20;
  puVar2[0x67] = (uint)puVar1;
  return;
}



/* Entry: 0034c13c; end: 0034c15f;  */

uint * FUN_0034c13c(uint *param_1,uint **param_2,uint *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  uint *unaff_x19;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char acStack_251 [521];
  uint *apuStack_48 [4];
  long lStack_28;
  
  if ((param_2 == (uint **)((long)&MACH_HEADER.magic + 2)) && ((short)*param_1 == 0x6574)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c29c(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x40;
    *(char *)(puVar7 + 0x66) = (char)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)param_1 == 0x636e652d63707267 && *(long *)((long)param_1 + 5) == 0x676e69646f636e65))
  {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c404(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x80;
    puVar7[0x65] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.reserved + 2)) &&
     (((*(long *)param_1 == 0x746e692d63707267 && *(long *)(param_1 + 2) == 0x6e652d6c616e7265) &&
      *(long *)(param_1 + 4) == 0x722d676e69646f63) &&
      *(long *)((long)param_1 + 0x16) == 0x747365757165722d)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c404(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x100;
    puVar7[100] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.sizeofcmds) &&
     ((*(long *)param_1 == 0x6363612d63707267 && *(long *)(param_1 + 2) == 0x6f636e652d747065) &&
      param_1[4] == 0x676e6964)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c5d0(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x200;
    *(char *)(puVar7 + 99) = (char)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)param_1 == 0x6174732d63707267 && *(long *)((long)param_1 + 3) == 0x7375746174732d63))
  {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c724(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x400;
    puVar7[0x62] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)param_1 == 0x6d69742d63707267 && param_1[2] == 0x74756f65)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c900(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x800;
    *(uint **)(puVar7 + 0x60) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.flags + 2)) &&
     (((*(long *)param_1 == 0x6572702d63707267 && *(long *)(param_1 + 2) == 0x70722d73756f6976) &&
      *(long *)(param_1 + 4) == 0x706d657474612d63) && (short)param_1[6] == 0x7374)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034be6c(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x1000;
    puVar7[0x5e] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.sizeofcmds + 2)) &&
     ((*(long *)param_1 == 0x7465722d63707267 && *(long *)(param_1 + 2) == 0x62687375702d7972) &&
      *(long *)((long)param_1 + 0xe) == 0x736d2d6b63616268)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034cacc(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x2000;
    *(uint **)(puVar7 + 0x5c) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 2)) &&
     (*(long *)param_1 == 0x6567612d72657375 && (short)param_1[2] == 0x746e)) {
    unaff_x29 = &stack0xfffffffffffffff0;
    lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930(apuStack_48,puVar7,*(undefined8 *)puVar4);
    param_2 = apuStack_48;
    FUN_0034cc88(uVar8);
    unaff_x19 = apuStack_48[0];
    if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_48[0]) {
      do {
        lVar5 = *(long *)apuStack_48[0];
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(apuStack_48[0],0x10);
        if (bVar3) {
          *(long *)apuStack_48[0] = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(apuStack_48[0] + 2))();
        unaff_x19 = apuStack_48[0];
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418(apuStack_48);
    }
    unaff_x30 = FUN_0034cc48;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)(acStack_251 + 0x201);
  }
  if ((param_2 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)param_1 == 0x73656d2d63707267 && param_1[2] == 0x65676173)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034ce60(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034ce38;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)&MACH_HEADER.cputype) && (*param_1 == 0x74736f68)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d078(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d010;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.flags + 1)) &&
     (((*(long *)param_1 == 0x746e696f70646e65 && *(long *)(param_1 + 2) == 0x656d2d64616f6c2d) &&
      *(long *)(param_1 + 4) == 0x69622d7363697274) && (char)param_1[6] == 'n')) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d284(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d228;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.sizeofcmds + 1)) &&
     ((*(long *)param_1 == 0x7265732d63707267 && *(long *)(param_1 + 2) == 0x746174732d726576) &&
      *(long *)((long)param_1 + 0xd) == 0x6e69622d73746174)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d478(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d430;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 2)) &&
     (*(long *)param_1 == 0x6172742d63707267 && *(long *)((long)param_1 + 6) == 0x6e69622d65636172))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d66c(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d624;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)param_1 == 0x6761742d63707267 && *(long *)((long)param_1 + 5) == 0x6e69622d73676174))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d874(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d818;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.ncmds + 3)) &&
     ((*(long *)param_1 == 0x635f626c63707267 && *(long *)(param_1 + 2) == 0x74735f746e65696c) &&
      *(long *)((long)param_1 + 0xb) == 0x73746174735f746e)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034d9e0(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x200000;
    *(uint **)(puVar7 + 0x22) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)param_1 == 0x2d74736f632d626c && *(long *)((long)param_1 + 3) == 0x6e69622d74736f63))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    FUN_0034daf8((undefined1 *)((long)register0x00000008 + -0x40),param_3 + 2,
                 *(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    uVar1 = *puVar7;
    puVar4 = puVar7 + 0x18;
    *puVar7 = uVar1 | 0x400000;
    if ((uVar1 >> 0x16 & 1) == 0) {
      puVar7[0x20] = 0;
      puVar7[0x21] = 0;
      puVar7[0x1a] = 0;
      puVar7[0x1b] = 0;
      puVar4[0] = 0;
      puVar4[1] = 0;
      puVar7[0x1e] = 0;
      puVar7[0x1f] = 0;
      puVar7[0x1c] = 0;
      puVar7[0x1d] = 0;
    }
    FUN_0034dbcc(puVar4,(undefined1 *)((long)register0x00000008 + -0x40));
    if (*(char *)((long)register0x00000008 + -0x21) < '\0') {
      puVar4 = *(uint **)((long)register0x00000008 + -0x38);
      __ZdlPv(puVar4);
    }
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.cpusubtype) && (*(long *)param_1 == 0x6e656b6f742d626c)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    param_2 = *(uint ***)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),param_3 + 2,
                 *(undefined8 *)(param_3 + 10));
    param_1 = (uint *)((long)register0x00000008 + -0x48);
    FUN_0034de58(uVar8);
    puVar4 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
      do {
        lVar5 = *(long *)puVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar3) {
          *(long *)puVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(puVar4 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return puVar4;
    }
    ___stack_chk_fail();
    if ((int)param_1 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    puVar7 = puVar4;
    __Unwind_Resume();
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x68) = puVar4;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_0034de58;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x60);
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar1 = *puVar7;
    unaff_x19 = puVar7 + 0x10;
    *puVar7 = uVar1 | 0x800000;
    if ((uVar1 >> 0x17 & 1) == 0) {
      lVar10 = *(long *)(param_1 + 2);
      lVar9 = *(long *)param_1;
      lVar6 = *(long *)(param_1 + 6);
      lVar5 = *(long *)(param_1 + 4);
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      *(long *)(puVar7 + 0x12) = lVar10;
      *(long *)unaff_x19 = lVar9;
      *(long *)(puVar7 + 0x16) = lVar6;
      *(long *)(puVar7 + 0x14) = lVar5;
      param_3 = puVar7;
    }
    else {
      lVar5 = *(long *)param_1;
      lVar6 = *(long *)(param_1 + 6);
      *(long *)((long)register0x00000008 + -0xd0) = lVar6;
      lVar10 = *(long *)(param_1 + 4);
      lVar9 = *(long *)(param_1 + 2);
      *(long *)((long)register0x00000008 + -0xd8) = lVar10;
      *(long *)((long)register0x00000008 + -0xe0) = lVar9;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_3 = *(uint **)(puVar7 + 0x10);
      uVar8 = *(undefined8 *)(puVar7 + 0x16);
      uVar12 = *(undefined8 *)(puVar7 + 0x14);
      uVar11 = *(undefined8 *)(puVar7 + 0x12);
      *(long *)(puVar7 + 0x10) = lVar5;
      *(long *)(puVar7 + 0x14) = lVar10;
      *(long *)(puVar7 + 0x12) = lVar9;
      *(long *)(puVar7 + 0x16) = lVar6;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar12;
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar11;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar8;
      if ((uint *)((long)&MACH_HEADER.magic + 1) < param_3) {
        do {
          lVar5 = *(long *)param_3;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_3,0x10);
          if (bVar3) {
            *(long *)param_3 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 + -1 == 0) {
          (**(code **)(param_3 + 2))();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x78)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_1 == 0) {
      __Unwind_Resume();
    }
    unaff_x30 = FUN_0034df40;
    func_0x0040cf10();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xe0);
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  lVar5 = *(long *)param_3;
  uVar8 = *(undefined8 *)(param_3 + 2);
  uVar12 = *(undefined8 *)(param_3 + 8);
  uVar11 = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)((long)register0x00000008 + -0x50) = uVar8;
  *(undefined8 *)((long)register0x00000008 + -0x38) = uVar12;
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar11;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  FUN_003fe220(lVar5 + 0x1f0);
  puVar4 = *(uint **)((long)register0x00000008 + -0x50);
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
    do {
      lVar5 = *(long *)puVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar3) {
        *(long *)puVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(puVar4 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)param_1 != 0) {
    func_0x0040cf10(puVar4);
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x50));
  }
  __Unwind_Resume(puVar4);
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x58) = FUN_0034e004;
  *(uint **)((long)register0x00000008 + -0x70) = param_1;
  *(uint ***)((long)register0x00000008 + -0x68) = param_2;
  FUN_0034e02c();
  return puVar4;
}



/* Entry: 0034c160; end: 0034c217;  */

long * FUN_0034c160(undefined8 *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  long **pplVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  uint *puVar7;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  pplVar3 = &plStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_003fe72c(&plStack_50);
  plVar4 = plStack_50;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_50) {
    do {
      lVar6 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return (long *)pplVar3;
  }
  ___stack_chk_fail();
  if (param_2 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_50);
  }
  __Unwind_Resume();
  puVar7 = (uint *)*plVar4;
  plVar5 = plVar4 + 1;
  FUN_0034c29c(plVar5,plVar4[5],plVar4[6]);
  *puVar7 = *puVar7 | 0x40;
  *(char *)(puVar7 + 0x66) = (char)plVar5;
  return plVar5;
}



/* Entry: 0034c218; end: 0034c253;  */

void FUN_0034c218(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  
  puVar2 = (uint *)*param_1;
  puVar1 = param_1 + 1;
  FUN_0034c29c(puVar1,param_1[5],param_1[6]);
  *puVar2 = *puVar2 | 0x40;
  *(char *)(puVar2 + 0x66) = (char)puVar1;
  return;
}



/* Entry: 0034c254; end: 0034c29b;  */

uint * FUN_0034c254(uint *param_1,uint **param_2,uint *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  uint *unaff_x19;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char acStack_251 [521];
  uint *apuStack_48 [4];
  long lStack_28;
  
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)param_1 == 0x636e652d63707267 && *(long *)((long)param_1 + 5) == 0x676e69646f636e65))
  {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c404(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x80;
    puVar7[0x65] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.reserved + 2)) &&
     (((*(long *)param_1 == 0x746e692d63707267 && *(long *)(param_1 + 2) == 0x6e652d6c616e7265) &&
      *(long *)(param_1 + 4) == 0x722d676e69646f63) &&
      *(long *)((long)param_1 + 0x16) == 0x747365757165722d)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c404(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x100;
    puVar7[100] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.sizeofcmds) &&
     ((*(long *)param_1 == 0x6363612d63707267 && *(long *)(param_1 + 2) == 0x6f636e652d747065) &&
      param_1[4] == 0x676e6964)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c5d0(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x200;
    *(char *)(puVar7 + 99) = (char)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)param_1 == 0x6174732d63707267 && *(long *)((long)param_1 + 3) == 0x7375746174732d63))
  {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c724(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x400;
    puVar7[0x62] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)param_1 == 0x6d69742d63707267 && param_1[2] == 0x74756f65)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c900(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x800;
    *(uint **)(puVar7 + 0x60) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.flags + 2)) &&
     (((*(long *)param_1 == 0x6572702d63707267 && *(long *)(param_1 + 2) == 0x70722d73756f6976) &&
      *(long *)(param_1 + 4) == 0x706d657474612d63) && (short)param_1[6] == 0x7374)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034be6c(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x1000;
    puVar7[0x5e] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.sizeofcmds + 2)) &&
     ((*(long *)param_1 == 0x7465722d63707267 && *(long *)(param_1 + 2) == 0x62687375702d7972) &&
      *(long *)((long)param_1 + 0xe) == 0x736d2d6b63616268)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034cacc(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x2000;
    *(uint **)(puVar7 + 0x5c) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 2)) &&
     (*(long *)param_1 == 0x6567612d72657375 && (short)param_1[2] == 0x746e)) {
    unaff_x29 = &stack0xfffffffffffffff0;
    lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930(apuStack_48,puVar7,*(undefined8 *)puVar4);
    param_2 = apuStack_48;
    FUN_0034cc88(uVar8);
    unaff_x19 = apuStack_48[0];
    if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_48[0]) {
      do {
        lVar5 = *(long *)apuStack_48[0];
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(apuStack_48[0],0x10);
        if (bVar3) {
          *(long *)apuStack_48[0] = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(apuStack_48[0] + 2))();
        unaff_x19 = apuStack_48[0];
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418(apuStack_48);
    }
    unaff_x30 = FUN_0034cc48;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)(acStack_251 + 0x201);
  }
  if ((param_2 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)param_1 == 0x73656d2d63707267 && param_1[2] == 0x65676173)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034ce60(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034ce38;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)&MACH_HEADER.cputype) && (*param_1 == 0x74736f68)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d078(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d010;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.flags + 1)) &&
     (((*(long *)param_1 == 0x746e696f70646e65 && *(long *)(param_1 + 2) == 0x656d2d64616f6c2d) &&
      *(long *)(param_1 + 4) == 0x69622d7363697274) && (char)param_1[6] == 'n')) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d284(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d228;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.sizeofcmds + 1)) &&
     ((*(long *)param_1 == 0x7265732d63707267 && *(long *)(param_1 + 2) == 0x746174732d726576) &&
      *(long *)((long)param_1 + 0xd) == 0x6e69622d73746174)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d478(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d430;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 2)) &&
     (*(long *)param_1 == 0x6172742d63707267 && *(long *)((long)param_1 + 6) == 0x6e69622d65636172))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d66c(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d624;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)param_1 == 0x6761742d63707267 && *(long *)((long)param_1 + 5) == 0x6e69622d73676174))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d874(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d818;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.ncmds + 3)) &&
     ((*(long *)param_1 == 0x635f626c63707267 && *(long *)(param_1 + 2) == 0x74735f746e65696c) &&
      *(long *)((long)param_1 + 0xb) == 0x73746174735f746e)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034d9e0(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x200000;
    *(uint **)(puVar7 + 0x22) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)param_1 == 0x2d74736f632d626c && *(long *)((long)param_1 + 3) == 0x6e69622d74736f63))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    FUN_0034daf8((undefined1 *)((long)register0x00000008 + -0x40),param_3 + 2,
                 *(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    uVar1 = *puVar7;
    puVar4 = puVar7 + 0x18;
    *puVar7 = uVar1 | 0x400000;
    if ((uVar1 >> 0x16 & 1) == 0) {
      puVar7[0x20] = 0;
      puVar7[0x21] = 0;
      puVar7[0x1a] = 0;
      puVar7[0x1b] = 0;
      puVar4[0] = 0;
      puVar4[1] = 0;
      puVar7[0x1e] = 0;
      puVar7[0x1f] = 0;
      puVar7[0x1c] = 0;
      puVar7[0x1d] = 0;
    }
    FUN_0034dbcc(puVar4,(undefined1 *)((long)register0x00000008 + -0x40));
    if (*(char *)((long)register0x00000008 + -0x21) < '\0') {
      puVar4 = *(uint **)((long)register0x00000008 + -0x38);
      __ZdlPv(puVar4);
    }
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.cpusubtype) && (*(long *)param_1 == 0x6e656b6f742d626c)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    param_2 = *(uint ***)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),param_3 + 2,
                 *(undefined8 *)(param_3 + 10));
    param_1 = (uint *)((long)register0x00000008 + -0x48);
    FUN_0034de58(uVar8);
    puVar4 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
      do {
        lVar5 = *(long *)puVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar3) {
          *(long *)puVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(puVar4 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return puVar4;
    }
    ___stack_chk_fail();
    if ((int)param_1 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    puVar7 = puVar4;
    __Unwind_Resume();
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x68) = puVar4;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_0034de58;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x60);
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar1 = *puVar7;
    unaff_x19 = puVar7 + 0x10;
    *puVar7 = uVar1 | 0x800000;
    if ((uVar1 >> 0x17 & 1) == 0) {
      lVar10 = *(long *)(param_1 + 2);
      lVar9 = *(long *)param_1;
      lVar6 = *(long *)(param_1 + 6);
      lVar5 = *(long *)(param_1 + 4);
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      *(long *)(puVar7 + 0x12) = lVar10;
      *(long *)unaff_x19 = lVar9;
      *(long *)(puVar7 + 0x16) = lVar6;
      *(long *)(puVar7 + 0x14) = lVar5;
      param_3 = puVar7;
    }
    else {
      lVar5 = *(long *)param_1;
      lVar6 = *(long *)(param_1 + 6);
      *(long *)((long)register0x00000008 + -0xd0) = lVar6;
      lVar10 = *(long *)(param_1 + 4);
      lVar9 = *(long *)(param_1 + 2);
      *(long *)((long)register0x00000008 + -0xd8) = lVar10;
      *(long *)((long)register0x00000008 + -0xe0) = lVar9;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_3 = *(uint **)(puVar7 + 0x10);
      uVar8 = *(undefined8 *)(puVar7 + 0x16);
      uVar12 = *(undefined8 *)(puVar7 + 0x14);
      uVar11 = *(undefined8 *)(puVar7 + 0x12);
      *(long *)(puVar7 + 0x10) = lVar5;
      *(long *)(puVar7 + 0x14) = lVar10;
      *(long *)(puVar7 + 0x12) = lVar9;
      *(long *)(puVar7 + 0x16) = lVar6;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar12;
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar11;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar8;
      if ((uint *)((long)&MACH_HEADER.magic + 1) < param_3) {
        do {
          lVar5 = *(long *)param_3;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_3,0x10);
          if (bVar3) {
            *(long *)param_3 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 + -1 == 0) {
          (**(code **)(param_3 + 2))();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x78)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_1 == 0) {
      __Unwind_Resume();
    }
    unaff_x30 = FUN_0034df40;
    func_0x0040cf10();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xe0);
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  lVar5 = *(long *)param_3;
  uVar8 = *(undefined8 *)(param_3 + 2);
  uVar12 = *(undefined8 *)(param_3 + 8);
  uVar11 = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)((long)register0x00000008 + -0x50) = uVar8;
  *(undefined8 *)((long)register0x00000008 + -0x38) = uVar12;
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar11;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  FUN_003fe220(lVar5 + 0x1f0);
  puVar4 = *(uint **)((long)register0x00000008 + -0x50);
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
    do {
      lVar5 = *(long *)puVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar3) {
        *(long *)puVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(puVar4 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)param_1 != 0) {
    func_0x0040cf10(puVar4);
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x50));
  }
  __Unwind_Resume(puVar4);
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x58) = FUN_0034e004;
  *(uint **)((long)register0x00000008 + -0x70) = param_1;
  *(uint ***)((long)register0x00000008 + -0x68) = param_2;
  FUN_0034e02c();
  return puVar4;
}



/* Entry: 0034c29c; end: 0034c353;  */

long * FUN_0034c29c(undefined8 *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  long **pplVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  uint *puVar7;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  pplVar3 = &plStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_003fea28(&plStack_50);
  plVar4 = plStack_50;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_50) {
    do {
      lVar6 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return (long *)pplVar3;
  }
  ___stack_chk_fail();
  if (param_2 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_50);
  }
  __Unwind_Resume();
  puVar7 = (uint *)*plVar4;
  plVar5 = plVar4 + 1;
  FUN_0034c404(plVar5,plVar4[5],plVar4[6]);
  *puVar7 = *puVar7 | 0x80;
  puVar7[0x65] = (uint)plVar5;
  return plVar5;
}



/* Entry: 0034c354; end: 0034c38f;  */

void FUN_0034c354(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  
  puVar2 = (uint *)*param_1;
  puVar1 = param_1 + 1;
  FUN_0034c404(puVar1,param_1[5],param_1[6]);
  *puVar2 = *puVar2 | 0x80;
  puVar2[0x65] = (uint)puVar1;
  return;
}



/* Entry: 0034c390; end: 0034c403;  */

uint * FUN_0034c390(uint *param_1,uint **param_2,uint *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  uint *unaff_x19;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char acStack_251 [521];
  uint *apuStack_48 [4];
  long lStack_28;
  
  if ((param_2 == (uint **)((long)&MACH_HEADER.reserved + 2)) &&
     (((*(long *)param_1 == 0x746e692d63707267 && *(long *)(param_1 + 2) == 0x6e652d6c616e7265) &&
      *(long *)(param_1 + 4) == 0x722d676e69646f63) &&
      *(long *)((long)param_1 + 0x16) == 0x747365757165722d)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c404(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x100;
    puVar7[100] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.sizeofcmds) &&
     ((*(long *)param_1 == 0x6363612d63707267 && *(long *)(param_1 + 2) == 0x6f636e652d747065) &&
      param_1[4] == 0x676e6964)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c5d0(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x200;
    *(char *)(puVar7 + 99) = (char)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)param_1 == 0x6174732d63707267 && *(long *)((long)param_1 + 3) == 0x7375746174732d63))
  {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c724(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x400;
    puVar7[0x62] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)param_1 == 0x6d69742d63707267 && param_1[2] == 0x74756f65)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c900(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x800;
    *(uint **)(puVar7 + 0x60) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.flags + 2)) &&
     (((*(long *)param_1 == 0x6572702d63707267 && *(long *)(param_1 + 2) == 0x70722d73756f6976) &&
      *(long *)(param_1 + 4) == 0x706d657474612d63) && (short)param_1[6] == 0x7374)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034be6c(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x1000;
    puVar7[0x5e] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.sizeofcmds + 2)) &&
     ((*(long *)param_1 == 0x7465722d63707267 && *(long *)(param_1 + 2) == 0x62687375702d7972) &&
      *(long *)((long)param_1 + 0xe) == 0x736d2d6b63616268)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034cacc(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x2000;
    *(uint **)(puVar7 + 0x5c) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 2)) &&
     (*(long *)param_1 == 0x6567612d72657375 && (short)param_1[2] == 0x746e)) {
    unaff_x29 = &stack0xfffffffffffffff0;
    lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930(apuStack_48,puVar7,*(undefined8 *)puVar4);
    param_2 = apuStack_48;
    FUN_0034cc88(uVar8);
    unaff_x19 = apuStack_48[0];
    if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_48[0]) {
      do {
        lVar5 = *(long *)apuStack_48[0];
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(apuStack_48[0],0x10);
        if (bVar3) {
          *(long *)apuStack_48[0] = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(apuStack_48[0] + 2))();
        unaff_x19 = apuStack_48[0];
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418(apuStack_48);
    }
    unaff_x30 = FUN_0034cc48;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)(acStack_251 + 0x201);
  }
  if ((param_2 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)param_1 == 0x73656d2d63707267 && param_1[2] == 0x65676173)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034ce60(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034ce38;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)&MACH_HEADER.cputype) && (*param_1 == 0x74736f68)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d078(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d010;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.flags + 1)) &&
     (((*(long *)param_1 == 0x746e696f70646e65 && *(long *)(param_1 + 2) == 0x656d2d64616f6c2d) &&
      *(long *)(param_1 + 4) == 0x69622d7363697274) && (char)param_1[6] == 'n')) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d284(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d228;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.sizeofcmds + 1)) &&
     ((*(long *)param_1 == 0x7265732d63707267 && *(long *)(param_1 + 2) == 0x746174732d726576) &&
      *(long *)((long)param_1 + 0xd) == 0x6e69622d73746174)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d478(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d430;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 2)) &&
     (*(long *)param_1 == 0x6172742d63707267 && *(long *)((long)param_1 + 6) == 0x6e69622d65636172))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d66c(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d624;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)param_1 == 0x6761742d63707267 && *(long *)((long)param_1 + 5) == 0x6e69622d73676174))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d874(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d818;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.ncmds + 3)) &&
     ((*(long *)param_1 == 0x635f626c63707267 && *(long *)(param_1 + 2) == 0x74735f746e65696c) &&
      *(long *)((long)param_1 + 0xb) == 0x73746174735f746e)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034d9e0(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x200000;
    *(uint **)(puVar7 + 0x22) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)param_1 == 0x2d74736f632d626c && *(long *)((long)param_1 + 3) == 0x6e69622d74736f63))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    FUN_0034daf8((undefined1 *)((long)register0x00000008 + -0x40),param_3 + 2,
                 *(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    uVar1 = *puVar7;
    puVar4 = puVar7 + 0x18;
    *puVar7 = uVar1 | 0x400000;
    if ((uVar1 >> 0x16 & 1) == 0) {
      puVar7[0x20] = 0;
      puVar7[0x21] = 0;
      puVar7[0x1a] = 0;
      puVar7[0x1b] = 0;
      puVar4[0] = 0;
      puVar4[1] = 0;
      puVar7[0x1e] = 0;
      puVar7[0x1f] = 0;
      puVar7[0x1c] = 0;
      puVar7[0x1d] = 0;
    }
    FUN_0034dbcc(puVar4,(undefined1 *)((long)register0x00000008 + -0x40));
    if (*(char *)((long)register0x00000008 + -0x21) < '\0') {
      puVar4 = *(uint **)((long)register0x00000008 + -0x38);
      __ZdlPv(puVar4);
    }
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.cpusubtype) && (*(long *)param_1 == 0x6e656b6f742d626c)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    param_2 = *(uint ***)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),param_3 + 2,
                 *(undefined8 *)(param_3 + 10));
    param_1 = (uint *)((long)register0x00000008 + -0x48);
    FUN_0034de58(uVar8);
    puVar4 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
      do {
        lVar5 = *(long *)puVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar3) {
          *(long *)puVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(puVar4 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return puVar4;
    }
    ___stack_chk_fail();
    if ((int)param_1 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    puVar7 = puVar4;
    __Unwind_Resume();
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x68) = puVar4;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_0034de58;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x60);
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar1 = *puVar7;
    unaff_x19 = puVar7 + 0x10;
    *puVar7 = uVar1 | 0x800000;
    if ((uVar1 >> 0x17 & 1) == 0) {
      lVar10 = *(long *)(param_1 + 2);
      lVar9 = *(long *)param_1;
      lVar6 = *(long *)(param_1 + 6);
      lVar5 = *(long *)(param_1 + 4);
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      *(long *)(puVar7 + 0x12) = lVar10;
      *(long *)unaff_x19 = lVar9;
      *(long *)(puVar7 + 0x16) = lVar6;
      *(long *)(puVar7 + 0x14) = lVar5;
      param_3 = puVar7;
    }
    else {
      lVar5 = *(long *)param_1;
      lVar6 = *(long *)(param_1 + 6);
      *(long *)((long)register0x00000008 + -0xd0) = lVar6;
      lVar10 = *(long *)(param_1 + 4);
      lVar9 = *(long *)(param_1 + 2);
      *(long *)((long)register0x00000008 + -0xd8) = lVar10;
      *(long *)((long)register0x00000008 + -0xe0) = lVar9;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_3 = *(uint **)(puVar7 + 0x10);
      uVar8 = *(undefined8 *)(puVar7 + 0x16);
      uVar12 = *(undefined8 *)(puVar7 + 0x14);
      uVar11 = *(undefined8 *)(puVar7 + 0x12);
      *(long *)(puVar7 + 0x10) = lVar5;
      *(long *)(puVar7 + 0x14) = lVar10;
      *(long *)(puVar7 + 0x12) = lVar9;
      *(long *)(puVar7 + 0x16) = lVar6;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar12;
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar11;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar8;
      if ((uint *)((long)&MACH_HEADER.magic + 1) < param_3) {
        do {
          lVar5 = *(long *)param_3;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_3,0x10);
          if (bVar3) {
            *(long *)param_3 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 + -1 == 0) {
          (**(code **)(param_3 + 2))();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x78)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_1 == 0) {
      __Unwind_Resume();
    }
    unaff_x30 = FUN_0034df40;
    func_0x0040cf10();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xe0);
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  lVar5 = *(long *)param_3;
  uVar8 = *(undefined8 *)(param_3 + 2);
  uVar12 = *(undefined8 *)(param_3 + 8);
  uVar11 = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)((long)register0x00000008 + -0x50) = uVar8;
  *(undefined8 *)((long)register0x00000008 + -0x38) = uVar12;
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar11;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  FUN_003fe220(lVar5 + 0x1f0);
  puVar4 = *(uint **)((long)register0x00000008 + -0x50);
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
    do {
      lVar5 = *(long *)puVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar3) {
        *(long *)puVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(puVar4 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)param_1 != 0) {
    func_0x0040cf10(puVar4);
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x50));
  }
  __Unwind_Resume(puVar4);
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x58) = FUN_0034e004;
  *(uint **)((long)register0x00000008 + -0x70) = param_1;
  *(uint ***)((long)register0x00000008 + -0x68) = param_2;
  FUN_0034e02c();
  return puVar4;
}



/* Entry: 0034c404; end: 0034c4bb;  */

long * FUN_0034c404(undefined8 *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  long **pplVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  uint *puVar7;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  pplVar3 = &plStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_003fed98(&plStack_50);
  plVar4 = plStack_50;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_50) {
    do {
      lVar6 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return (long *)pplVar3;
  }
  ___stack_chk_fail();
  if (param_2 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_50);
  }
  __Unwind_Resume();
  puVar7 = (uint *)*plVar4;
  plVar5 = plVar4 + 1;
  FUN_0034c404(plVar5,plVar4[5],plVar4[6]);
  *puVar7 = *puVar7 | 0x100;
  puVar7[100] = (uint)plVar5;
  return plVar5;
}



/* Entry: 0034c4bc; end: 0034c4f7;  */

void FUN_0034c4bc(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  
  puVar2 = (uint *)*param_1;
  puVar1 = param_1 + 1;
  FUN_0034c404(puVar1,param_1[5],param_1[6]);
  *puVar2 = *puVar2 | 0x100;
  puVar2[100] = (uint)puVar1;
  return;
}



/* Entry: 0034c4f8; end: 0034c54b;  */

uint * FUN_0034c4f8(uint *param_1,uint **param_2,uint *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  uint *unaff_x19;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char acStack_251 [521];
  uint *apuStack_48 [4];
  long lStack_28;
  
  if ((param_2 == (uint **)&MACH_HEADER.sizeofcmds) &&
     ((*(long *)param_1 == 0x6363612d63707267 && *(long *)(param_1 + 2) == 0x6f636e652d747065) &&
      param_1[4] == 0x676e6964)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c5d0(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x200;
    *(char *)(puVar7 + 99) = (char)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)param_1 == 0x6174732d63707267 && *(long *)((long)param_1 + 3) == 0x7375746174732d63))
  {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c724(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x400;
    puVar7[0x62] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)param_1 == 0x6d69742d63707267 && param_1[2] == 0x74756f65)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c900(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x800;
    *(uint **)(puVar7 + 0x60) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.flags + 2)) &&
     (((*(long *)param_1 == 0x6572702d63707267 && *(long *)(param_1 + 2) == 0x70722d73756f6976) &&
      *(long *)(param_1 + 4) == 0x706d657474612d63) && (short)param_1[6] == 0x7374)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034be6c(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x1000;
    puVar7[0x5e] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.sizeofcmds + 2)) &&
     ((*(long *)param_1 == 0x7465722d63707267 && *(long *)(param_1 + 2) == 0x62687375702d7972) &&
      *(long *)((long)param_1 + 0xe) == 0x736d2d6b63616268)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034cacc(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x2000;
    *(uint **)(puVar7 + 0x5c) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 2)) &&
     (*(long *)param_1 == 0x6567612d72657375 && (short)param_1[2] == 0x746e)) {
    unaff_x29 = &stack0xfffffffffffffff0;
    lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930(apuStack_48,puVar7,*(undefined8 *)puVar4);
    param_2 = apuStack_48;
    FUN_0034cc88(uVar8);
    unaff_x19 = apuStack_48[0];
    if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_48[0]) {
      do {
        lVar5 = *(long *)apuStack_48[0];
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(apuStack_48[0],0x10);
        if (bVar3) {
          *(long *)apuStack_48[0] = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(apuStack_48[0] + 2))();
        unaff_x19 = apuStack_48[0];
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418(apuStack_48);
    }
    unaff_x30 = FUN_0034cc48;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)(acStack_251 + 0x201);
  }
  if ((param_2 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)param_1 == 0x73656d2d63707267 && param_1[2] == 0x65676173)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034ce60(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034ce38;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)&MACH_HEADER.cputype) && (*param_1 == 0x74736f68)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d078(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d010;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.flags + 1)) &&
     (((*(long *)param_1 == 0x746e696f70646e65 && *(long *)(param_1 + 2) == 0x656d2d64616f6c2d) &&
      *(long *)(param_1 + 4) == 0x69622d7363697274) && (char)param_1[6] == 'n')) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d284(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d228;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.sizeofcmds + 1)) &&
     ((*(long *)param_1 == 0x7265732d63707267 && *(long *)(param_1 + 2) == 0x746174732d726576) &&
      *(long *)((long)param_1 + 0xd) == 0x6e69622d73746174)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d478(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d430;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 2)) &&
     (*(long *)param_1 == 0x6172742d63707267 && *(long *)((long)param_1 + 6) == 0x6e69622d65636172))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d66c(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d624;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)param_1 == 0x6761742d63707267 && *(long *)((long)param_1 + 5) == 0x6e69622d73676174))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d874(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d818;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.ncmds + 3)) &&
     ((*(long *)param_1 == 0x635f626c63707267 && *(long *)(param_1 + 2) == 0x74735f746e65696c) &&
      *(long *)((long)param_1 + 0xb) == 0x73746174735f746e)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034d9e0(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x200000;
    *(uint **)(puVar7 + 0x22) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)param_1 == 0x2d74736f632d626c && *(long *)((long)param_1 + 3) == 0x6e69622d74736f63))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    FUN_0034daf8((undefined1 *)((long)register0x00000008 + -0x40),param_3 + 2,
                 *(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    uVar1 = *puVar7;
    puVar4 = puVar7 + 0x18;
    *puVar7 = uVar1 | 0x400000;
    if ((uVar1 >> 0x16 & 1) == 0) {
      puVar7[0x20] = 0;
      puVar7[0x21] = 0;
      puVar7[0x1a] = 0;
      puVar7[0x1b] = 0;
      puVar4[0] = 0;
      puVar4[1] = 0;
      puVar7[0x1e] = 0;
      puVar7[0x1f] = 0;
      puVar7[0x1c] = 0;
      puVar7[0x1d] = 0;
    }
    FUN_0034dbcc(puVar4,(undefined1 *)((long)register0x00000008 + -0x40));
    if (*(char *)((long)register0x00000008 + -0x21) < '\0') {
      puVar4 = *(uint **)((long)register0x00000008 + -0x38);
      __ZdlPv(puVar4);
    }
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.cpusubtype) && (*(long *)param_1 == 0x6e656b6f742d626c)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    param_2 = *(uint ***)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),param_3 + 2,
                 *(undefined8 *)(param_3 + 10));
    param_1 = (uint *)((long)register0x00000008 + -0x48);
    FUN_0034de58(uVar8);
    puVar4 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
      do {
        lVar5 = *(long *)puVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar3) {
          *(long *)puVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(puVar4 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return puVar4;
    }
    ___stack_chk_fail();
    if ((int)param_1 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    puVar7 = puVar4;
    __Unwind_Resume();
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x68) = puVar4;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_0034de58;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x60);
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar1 = *puVar7;
    unaff_x19 = puVar7 + 0x10;
    *puVar7 = uVar1 | 0x800000;
    if ((uVar1 >> 0x17 & 1) == 0) {
      lVar10 = *(long *)(param_1 + 2);
      lVar9 = *(long *)param_1;
      lVar6 = *(long *)(param_1 + 6);
      lVar5 = *(long *)(param_1 + 4);
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      *(long *)(puVar7 + 0x12) = lVar10;
      *(long *)unaff_x19 = lVar9;
      *(long *)(puVar7 + 0x16) = lVar6;
      *(long *)(puVar7 + 0x14) = lVar5;
      param_3 = puVar7;
    }
    else {
      lVar5 = *(long *)param_1;
      lVar6 = *(long *)(param_1 + 6);
      *(long *)((long)register0x00000008 + -0xd0) = lVar6;
      lVar10 = *(long *)(param_1 + 4);
      lVar9 = *(long *)(param_1 + 2);
      *(long *)((long)register0x00000008 + -0xd8) = lVar10;
      *(long *)((long)register0x00000008 + -0xe0) = lVar9;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_3 = *(uint **)(puVar7 + 0x10);
      uVar8 = *(undefined8 *)(puVar7 + 0x16);
      uVar12 = *(undefined8 *)(puVar7 + 0x14);
      uVar11 = *(undefined8 *)(puVar7 + 0x12);
      *(long *)(puVar7 + 0x10) = lVar5;
      *(long *)(puVar7 + 0x14) = lVar10;
      *(long *)(puVar7 + 0x12) = lVar9;
      *(long *)(puVar7 + 0x16) = lVar6;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar12;
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar11;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar8;
      if ((uint *)((long)&MACH_HEADER.magic + 1) < param_3) {
        do {
          lVar5 = *(long *)param_3;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_3,0x10);
          if (bVar3) {
            *(long *)param_3 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 + -1 == 0) {
          (**(code **)(param_3 + 2))();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x78)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_1 == 0) {
      __Unwind_Resume();
    }
    unaff_x30 = FUN_0034df40;
    func_0x0040cf10();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xe0);
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  lVar5 = *(long *)param_3;
  uVar8 = *(undefined8 *)(param_3 + 2);
  uVar12 = *(undefined8 *)(param_3 + 8);
  uVar11 = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)((long)register0x00000008 + -0x50) = uVar8;
  *(undefined8 *)((long)register0x00000008 + -0x38) = uVar12;
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar11;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  FUN_003fe220(lVar5 + 0x1f0);
  puVar4 = *(uint **)((long)register0x00000008 + -0x50);
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
    do {
      lVar5 = *(long *)puVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar3) {
        *(long *)puVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(puVar4 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)param_1 != 0) {
    func_0x0040cf10(puVar4);
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x50));
  }
  __Unwind_Resume(puVar4);
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x58) = FUN_0034e004;
  *(uint **)((long)register0x00000008 + -0x70) = param_1;
  *(uint ***)((long)register0x00000008 + -0x68) = param_2;
  FUN_0034e02c();
  return puVar4;
}



/* Entry: 0034c54c; end: 0034c587;  */

void FUN_0034c54c(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  
  puVar2 = (uint *)*param_1;
  puVar1 = param_1 + 1;
  FUN_0034c5d0(puVar1,param_1[5],param_1[6]);
  *puVar2 = *puVar2 | 0x200;
  *(char *)(puVar2 + 99) = (char)puVar1;
  return;
}



/* Entry: 0034c588; end: 0034c5cf;  */

uint * FUN_0034c588(uint *param_1,uint **param_2,uint *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  uint *unaff_x19;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char acStack_251 [521];
  uint *apuStack_48 [4];
  long lStack_28;
  
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)param_1 == 0x6174732d63707267 && *(long *)((long)param_1 + 3) == 0x7375746174732d63))
  {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c724(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x400;
    puVar7[0x62] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)param_1 == 0x6d69742d63707267 && param_1[2] == 0x74756f65)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c900(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x800;
    *(uint **)(puVar7 + 0x60) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.flags + 2)) &&
     (((*(long *)param_1 == 0x6572702d63707267 && *(long *)(param_1 + 2) == 0x70722d73756f6976) &&
      *(long *)(param_1 + 4) == 0x706d657474612d63) && (short)param_1[6] == 0x7374)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034be6c(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x1000;
    puVar7[0x5e] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.sizeofcmds + 2)) &&
     ((*(long *)param_1 == 0x7465722d63707267 && *(long *)(param_1 + 2) == 0x62687375702d7972) &&
      *(long *)((long)param_1 + 0xe) == 0x736d2d6b63616268)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034cacc(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x2000;
    *(uint **)(puVar7 + 0x5c) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 2)) &&
     (*(long *)param_1 == 0x6567612d72657375 && (short)param_1[2] == 0x746e)) {
    unaff_x29 = &stack0xfffffffffffffff0;
    lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930(apuStack_48,puVar7,*(undefined8 *)puVar4);
    param_2 = apuStack_48;
    FUN_0034cc88(uVar8);
    unaff_x19 = apuStack_48[0];
    if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_48[0]) {
      do {
        lVar5 = *(long *)apuStack_48[0];
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(apuStack_48[0],0x10);
        if (bVar3) {
          *(long *)apuStack_48[0] = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(apuStack_48[0] + 2))();
        unaff_x19 = apuStack_48[0];
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418(apuStack_48);
    }
    unaff_x30 = FUN_0034cc48;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)(acStack_251 + 0x201);
  }
  if ((param_2 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)param_1 == 0x73656d2d63707267 && param_1[2] == 0x65676173)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034ce60(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034ce38;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)&MACH_HEADER.cputype) && (*param_1 == 0x74736f68)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d078(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d010;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.flags + 1)) &&
     (((*(long *)param_1 == 0x746e696f70646e65 && *(long *)(param_1 + 2) == 0x656d2d64616f6c2d) &&
      *(long *)(param_1 + 4) == 0x69622d7363697274) && (char)param_1[6] == 'n')) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d284(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d228;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.sizeofcmds + 1)) &&
     ((*(long *)param_1 == 0x7265732d63707267 && *(long *)(param_1 + 2) == 0x746174732d726576) &&
      *(long *)((long)param_1 + 0xd) == 0x6e69622d73746174)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d478(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d430;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 2)) &&
     (*(long *)param_1 == 0x6172742d63707267 && *(long *)((long)param_1 + 6) == 0x6e69622d65636172))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d66c(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d624;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)param_1 == 0x6761742d63707267 && *(long *)((long)param_1 + 5) == 0x6e69622d73676174))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d874(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d818;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.ncmds + 3)) &&
     ((*(long *)param_1 == 0x635f626c63707267 && *(long *)(param_1 + 2) == 0x74735f746e65696c) &&
      *(long *)((long)param_1 + 0xb) == 0x73746174735f746e)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034d9e0(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x200000;
    *(uint **)(puVar7 + 0x22) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)param_1 == 0x2d74736f632d626c && *(long *)((long)param_1 + 3) == 0x6e69622d74736f63))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    FUN_0034daf8((undefined1 *)((long)register0x00000008 + -0x40),param_3 + 2,
                 *(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    uVar1 = *puVar7;
    puVar4 = puVar7 + 0x18;
    *puVar7 = uVar1 | 0x400000;
    if ((uVar1 >> 0x16 & 1) == 0) {
      puVar7[0x20] = 0;
      puVar7[0x21] = 0;
      puVar7[0x1a] = 0;
      puVar7[0x1b] = 0;
      puVar4[0] = 0;
      puVar4[1] = 0;
      puVar7[0x1e] = 0;
      puVar7[0x1f] = 0;
      puVar7[0x1c] = 0;
      puVar7[0x1d] = 0;
    }
    FUN_0034dbcc(puVar4,(undefined1 *)((long)register0x00000008 + -0x40));
    if (*(char *)((long)register0x00000008 + -0x21) < '\0') {
      puVar4 = *(uint **)((long)register0x00000008 + -0x38);
      __ZdlPv(puVar4);
    }
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.cpusubtype) && (*(long *)param_1 == 0x6e656b6f742d626c)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    param_2 = *(uint ***)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),param_3 + 2,
                 *(undefined8 *)(param_3 + 10));
    param_1 = (uint *)((long)register0x00000008 + -0x48);
    FUN_0034de58(uVar8);
    puVar4 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
      do {
        lVar5 = *(long *)puVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar3) {
          *(long *)puVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(puVar4 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return puVar4;
    }
    ___stack_chk_fail();
    if ((int)param_1 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    puVar7 = puVar4;
    __Unwind_Resume();
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x68) = puVar4;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_0034de58;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x60);
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar1 = *puVar7;
    unaff_x19 = puVar7 + 0x10;
    *puVar7 = uVar1 | 0x800000;
    if ((uVar1 >> 0x17 & 1) == 0) {
      lVar10 = *(long *)(param_1 + 2);
      lVar9 = *(long *)param_1;
      lVar6 = *(long *)(param_1 + 6);
      lVar5 = *(long *)(param_1 + 4);
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      *(long *)(puVar7 + 0x12) = lVar10;
      *(long *)unaff_x19 = lVar9;
      *(long *)(puVar7 + 0x16) = lVar6;
      *(long *)(puVar7 + 0x14) = lVar5;
      param_3 = puVar7;
    }
    else {
      lVar5 = *(long *)param_1;
      lVar6 = *(long *)(param_1 + 6);
      *(long *)((long)register0x00000008 + -0xd0) = lVar6;
      lVar10 = *(long *)(param_1 + 4);
      lVar9 = *(long *)(param_1 + 2);
      *(long *)((long)register0x00000008 + -0xd8) = lVar10;
      *(long *)((long)register0x00000008 + -0xe0) = lVar9;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_3 = *(uint **)(puVar7 + 0x10);
      uVar8 = *(undefined8 *)(puVar7 + 0x16);
      uVar12 = *(undefined8 *)(puVar7 + 0x14);
      uVar11 = *(undefined8 *)(puVar7 + 0x12);
      *(long *)(puVar7 + 0x10) = lVar5;
      *(long *)(puVar7 + 0x14) = lVar10;
      *(long *)(puVar7 + 0x12) = lVar9;
      *(long *)(puVar7 + 0x16) = lVar6;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar12;
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar11;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar8;
      if ((uint *)((long)&MACH_HEADER.magic + 1) < param_3) {
        do {
          lVar5 = *(long *)param_3;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_3,0x10);
          if (bVar3) {
            *(long *)param_3 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 + -1 == 0) {
          (**(code **)(param_3 + 2))();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x78)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_1 == 0) {
      __Unwind_Resume();
    }
    unaff_x30 = FUN_0034df40;
    func_0x0040cf10();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xe0);
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  lVar5 = *(long *)param_3;
  uVar8 = *(undefined8 *)(param_3 + 2);
  uVar12 = *(undefined8 *)(param_3 + 8);
  uVar11 = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)((long)register0x00000008 + -0x50) = uVar8;
  *(undefined8 *)((long)register0x00000008 + -0x38) = uVar12;
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar11;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  FUN_003fe220(lVar5 + 0x1f0);
  puVar4 = *(uint **)((long)register0x00000008 + -0x50);
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
    do {
      lVar5 = *(long *)puVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar3) {
        *(long *)puVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(puVar4 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)param_1 != 0) {
    func_0x0040cf10(puVar4);
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x50));
  }
  __Unwind_Resume(puVar4);
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x58) = FUN_0034e004;
  *(uint **)((long)register0x00000008 + -0x70) = param_1;
  *(uint ***)((long)register0x00000008 + -0x68) = param_2;
  FUN_0034e02c();
  return puVar4;
}



/* Entry: 0034c5d0; end: 0034c6a7;  */

long * FUN_0034c5d0(undefined8 *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  uint *puVar8;
  long *plStack_50;
  ulong uStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  plStack_40 = (long *)param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar1 = uStack_48 & 0xff;
  plVar4 = (long *)((ulong)&plStack_50 | 9);
  if (plStack_50 != (long *)0x0) {
    uVar1 = uStack_48;
    plVar4 = plStack_40;
  }
  iVar6 = (int)uVar1;
  FUN_003b0984(plVar4);
  plVar5 = plStack_50;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_50) {
    do {
      lVar7 = *plStack_50;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar3) {
        *plStack_50 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_28) {
    ___stack_chk_fail();
    if (iVar6 != 0) {
      func_0x0040cf10();
      FUN_0034b418(&plStack_50);
    }
    __Unwind_Resume();
    puVar8 = (uint *)*plVar5;
    plVar4 = plVar5 + 1;
    FUN_0034c724(plVar4,plVar5[5],plVar5[6]);
    *puVar8 = *puVar8 | 0x400;
    puVar8[0x62] = (uint)plVar4;
    return plVar4;
  }
  return plVar4;
}



/* Entry: 0034c6a8; end: 0034c6e3;  */

void FUN_0034c6a8(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  
  puVar2 = (uint *)*param_1;
  puVar1 = param_1 + 1;
  FUN_0034c724(puVar1,param_1[5],param_1[6]);
  *puVar2 = *puVar2 | 0x400;
  puVar2[0x62] = (uint)puVar1;
  return;
}



/* Entry: 0034c6e4; end: 0034c723;  */

uint * FUN_0034c6e4(uint *param_1,uint **param_2,uint *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  uint *unaff_x19;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char acStack_251 [521];
  uint *apuStack_48 [4];
  long lStack_28;
  
  if ((param_2 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)param_1 == 0x6d69742d63707267 && param_1[2] == 0x74756f65)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034c900(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x800;
    *(uint **)(puVar7 + 0x60) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.flags + 2)) &&
     (((*(long *)param_1 == 0x6572702d63707267 && *(long *)(param_1 + 2) == 0x70722d73756f6976) &&
      *(long *)(param_1 + 4) == 0x706d657474612d63) && (short)param_1[6] == 0x7374)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034be6c(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x1000;
    puVar7[0x5e] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.sizeofcmds + 2)) &&
     ((*(long *)param_1 == 0x7465722d63707267 && *(long *)(param_1 + 2) == 0x62687375702d7972) &&
      *(long *)((long)param_1 + 0xe) == 0x736d2d6b63616268)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034cacc(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x2000;
    *(uint **)(puVar7 + 0x5c) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 2)) &&
     (*(long *)param_1 == 0x6567612d72657375 && (short)param_1[2] == 0x746e)) {
    unaff_x29 = &stack0xfffffffffffffff0;
    lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930(apuStack_48,puVar7,*(undefined8 *)puVar4);
    param_2 = apuStack_48;
    FUN_0034cc88(uVar8);
    unaff_x19 = apuStack_48[0];
    if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_48[0]) {
      do {
        lVar5 = *(long *)apuStack_48[0];
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(apuStack_48[0],0x10);
        if (bVar3) {
          *(long *)apuStack_48[0] = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(apuStack_48[0] + 2))();
        unaff_x19 = apuStack_48[0];
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418(apuStack_48);
    }
    unaff_x30 = FUN_0034cc48;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)(acStack_251 + 0x201);
  }
  if ((param_2 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)param_1 == 0x73656d2d63707267 && param_1[2] == 0x65676173)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034ce60(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034ce38;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)&MACH_HEADER.cputype) && (*param_1 == 0x74736f68)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d078(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d010;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.flags + 1)) &&
     (((*(long *)param_1 == 0x746e696f70646e65 && *(long *)(param_1 + 2) == 0x656d2d64616f6c2d) &&
      *(long *)(param_1 + 4) == 0x69622d7363697274) && (char)param_1[6] == 'n')) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d284(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d228;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.sizeofcmds + 1)) &&
     ((*(long *)param_1 == 0x7265732d63707267 && *(long *)(param_1 + 2) == 0x746174732d726576) &&
      *(long *)((long)param_1 + 0xd) == 0x6e69622d73746174)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d478(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d430;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 2)) &&
     (*(long *)param_1 == 0x6172742d63707267 && *(long *)((long)param_1 + 6) == 0x6e69622d65636172))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d66c(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d624;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)param_1 == 0x6761742d63707267 && *(long *)((long)param_1 + 5) == 0x6e69622d73676174))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d874(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d818;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.ncmds + 3)) &&
     ((*(long *)param_1 == 0x635f626c63707267 && *(long *)(param_1 + 2) == 0x74735f746e65696c) &&
      *(long *)((long)param_1 + 0xb) == 0x73746174735f746e)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034d9e0(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x200000;
    *(uint **)(puVar7 + 0x22) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)param_1 == 0x2d74736f632d626c && *(long *)((long)param_1 + 3) == 0x6e69622d74736f63))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    FUN_0034daf8((undefined1 *)((long)register0x00000008 + -0x40),param_3 + 2,
                 *(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    uVar1 = *puVar7;
    puVar4 = puVar7 + 0x18;
    *puVar7 = uVar1 | 0x400000;
    if ((uVar1 >> 0x16 & 1) == 0) {
      puVar7[0x20] = 0;
      puVar7[0x21] = 0;
      puVar7[0x1a] = 0;
      puVar7[0x1b] = 0;
      puVar4[0] = 0;
      puVar4[1] = 0;
      puVar7[0x1e] = 0;
      puVar7[0x1f] = 0;
      puVar7[0x1c] = 0;
      puVar7[0x1d] = 0;
    }
    FUN_0034dbcc(puVar4,(undefined1 *)((long)register0x00000008 + -0x40));
    if (*(char *)((long)register0x00000008 + -0x21) < '\0') {
      puVar4 = *(uint **)((long)register0x00000008 + -0x38);
      __ZdlPv(puVar4);
    }
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.cpusubtype) && (*(long *)param_1 == 0x6e656b6f742d626c)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    param_2 = *(uint ***)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),param_3 + 2,
                 *(undefined8 *)(param_3 + 10));
    param_1 = (uint *)((long)register0x00000008 + -0x48);
    FUN_0034de58(uVar8);
    puVar4 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
      do {
        lVar5 = *(long *)puVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar3) {
          *(long *)puVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(puVar4 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return puVar4;
    }
    ___stack_chk_fail();
    if ((int)param_1 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    puVar7 = puVar4;
    __Unwind_Resume();
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x68) = puVar4;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_0034de58;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x60);
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar1 = *puVar7;
    unaff_x19 = puVar7 + 0x10;
    *puVar7 = uVar1 | 0x800000;
    if ((uVar1 >> 0x17 & 1) == 0) {
      lVar10 = *(long *)(param_1 + 2);
      lVar9 = *(long *)param_1;
      lVar6 = *(long *)(param_1 + 6);
      lVar5 = *(long *)(param_1 + 4);
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      *(long *)(puVar7 + 0x12) = lVar10;
      *(long *)unaff_x19 = lVar9;
      *(long *)(puVar7 + 0x16) = lVar6;
      *(long *)(puVar7 + 0x14) = lVar5;
      param_3 = puVar7;
    }
    else {
      lVar5 = *(long *)param_1;
      lVar6 = *(long *)(param_1 + 6);
      *(long *)((long)register0x00000008 + -0xd0) = lVar6;
      lVar10 = *(long *)(param_1 + 4);
      lVar9 = *(long *)(param_1 + 2);
      *(long *)((long)register0x00000008 + -0xd8) = lVar10;
      *(long *)((long)register0x00000008 + -0xe0) = lVar9;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_3 = *(uint **)(puVar7 + 0x10);
      uVar8 = *(undefined8 *)(puVar7 + 0x16);
      uVar12 = *(undefined8 *)(puVar7 + 0x14);
      uVar11 = *(undefined8 *)(puVar7 + 0x12);
      *(long *)(puVar7 + 0x10) = lVar5;
      *(long *)(puVar7 + 0x14) = lVar10;
      *(long *)(puVar7 + 0x12) = lVar9;
      *(long *)(puVar7 + 0x16) = lVar6;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar12;
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar11;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar8;
      if ((uint *)((long)&MACH_HEADER.magic + 1) < param_3) {
        do {
          lVar5 = *(long *)param_3;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_3,0x10);
          if (bVar3) {
            *(long *)param_3 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 + -1 == 0) {
          (**(code **)(param_3 + 2))();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x78)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_1 == 0) {
      __Unwind_Resume();
    }
    unaff_x30 = FUN_0034df40;
    func_0x0040cf10();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xe0);
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  lVar5 = *(long *)param_3;
  uVar8 = *(undefined8 *)(param_3 + 2);
  uVar12 = *(undefined8 *)(param_3 + 8);
  uVar11 = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)((long)register0x00000008 + -0x50) = uVar8;
  *(undefined8 *)((long)register0x00000008 + -0x38) = uVar12;
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar11;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  FUN_003fe220(lVar5 + 0x1f0);
  puVar4 = *(uint **)((long)register0x00000008 + -0x50);
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
    do {
      lVar5 = *(long *)puVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar3) {
        *(long *)puVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(puVar4 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)param_1 != 0) {
    func_0x0040cf10(puVar4);
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x50));
  }
  __Unwind_Resume(puVar4);
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x58) = FUN_0034e004;
  *(uint **)((long)register0x00000008 + -0x70) = param_1;
  *(uint ***)((long)register0x00000008 + -0x68) = param_2;
  FUN_0034e02c();
  return puVar4;
}



/* Entry: 0034c724; end: 0034c7db;  */

undefined1 * FUN_0034c724(undefined8 *param_1,undefined8 param_2,code *param_3)

{
  char cVar1;
  bool bVar2;
  long **pplVar3;
  long *plVar4;
  ulong uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long lVar8;
  uint uStack_84;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  pplVar3 = &plStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_0034c7dc(&plStack_50);
  plVar4 = plStack_50;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_50) {
    do {
      lVar8 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return (undefined1 *)pplVar3;
  }
  ___stack_chk_fail();
  if ((int)param_2 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_50);
  }
  __Unwind_Resume();
  if (*plVar4 == 0) {
    uVar5 = (long)plVar4 + 9;
    uVar7 = (ulong)*(byte *)(plVar4 + 1);
  }
  else {
    uVar7 = plVar4[1];
    uVar5 = plVar4[2];
  }
  FUN_00575540(uVar5,uVar7,&uStack_84,10);
  if ((uVar5 & 1) == 0) {
    (*param_3)(param_2,"not an integer",0xe,plVar4);
    puVar6 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
  }
  else {
    puVar6 = (undefined1 *)(ulong)uStack_84;
  }
  return puVar6;
}



/* Entry: 0034c7dc; end: 0034c85b;  */

undefined4 FUN_0034c7dc(long *param_1,undefined8 param_2,code *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 uStack_34;
  
  if (*param_1 == 0) {
    uVar1 = (long)param_1 + 9;
    uVar2 = (ulong)*(byte *)(param_1 + 1);
  }
  else {
    uVar2 = param_1[1];
    uVar1 = param_1[2];
  }
  FUN_00575540(uVar1,uVar2,&uStack_34,10);
  if ((uVar1 & 1) == 0) {
    (*param_3)(param_2,"not an integer",0xe,param_1);
    uStack_34 = 2;
  }
  return uStack_34;
}



/* Entry: 0034c85c; end: 0034c897;  */

void FUN_0034c85c(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  
  puVar2 = (uint *)*param_1;
  puVar1 = param_1 + 1;
  FUN_0034c900(puVar1,param_1[5],param_1[6]);
  *puVar2 = *puVar2 | 0x800;
  *(undefined8 **)(puVar2 + 0x60) = puVar1;
  return;
}



/* Entry: 0034c898; end: 0034c8ff;  */

uint * FUN_0034c898(uint *param_1,uint **param_2,uint *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  uint *unaff_x19;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char acStack_251 [521];
  uint *apuStack_48 [4];
  long lStack_28;
  
  if ((param_2 == (uint **)((long)&MACH_HEADER.flags + 2)) &&
     (((*(long *)param_1 == 0x6572702d63707267 && *(long *)(param_1 + 2) == 0x70722d73756f6976) &&
      *(long *)(param_1 + 4) == 0x706d657474612d63) && (short)param_1[6] == 0x7374)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034be6c(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x1000;
    puVar7[0x5e] = (uint)puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.sizeofcmds + 2)) &&
     ((*(long *)param_1 == 0x7465722d63707267 && *(long *)(param_1 + 2) == 0x62687375702d7972) &&
      *(long *)((long)param_1 + 0xe) == 0x736d2d6b63616268)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034cacc(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x2000;
    *(uint **)(puVar7 + 0x5c) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 2)) &&
     (*(long *)param_1 == 0x6567612d72657375 && (short)param_1[2] == 0x746e)) {
    unaff_x29 = &stack0xfffffffffffffff0;
    lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930(apuStack_48,puVar7,*(undefined8 *)puVar4);
    param_2 = apuStack_48;
    FUN_0034cc88(uVar8);
    unaff_x19 = apuStack_48[0];
    if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_48[0]) {
      do {
        lVar5 = *(long *)apuStack_48[0];
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(apuStack_48[0],0x10);
        if (bVar3) {
          *(long *)apuStack_48[0] = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(apuStack_48[0] + 2))();
        unaff_x19 = apuStack_48[0];
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418(apuStack_48);
    }
    unaff_x30 = FUN_0034cc48;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)(acStack_251 + 0x201);
  }
  if ((param_2 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)param_1 == 0x73656d2d63707267 && param_1[2] == 0x65676173)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034ce60(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034ce38;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)&MACH_HEADER.cputype) && (*param_1 == 0x74736f68)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d078(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d010;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.flags + 1)) &&
     (((*(long *)param_1 == 0x746e696f70646e65 && *(long *)(param_1 + 2) == 0x656d2d64616f6c2d) &&
      *(long *)(param_1 + 4) == 0x69622d7363697274) && (char)param_1[6] == 'n')) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d284(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d228;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.sizeofcmds + 1)) &&
     ((*(long *)param_1 == 0x7265732d63707267 && *(long *)(param_1 + 2) == 0x746174732d726576) &&
      *(long *)((long)param_1 + 0xd) == 0x6e69622d73746174)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d478(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d430;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 2)) &&
     (*(long *)param_1 == 0x6172742d63707267 && *(long *)((long)param_1 + 6) == 0x6e69622d65636172))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d66c(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d624;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)param_1 == 0x6761742d63707267 && *(long *)((long)param_1 + 5) == 0x6e69622d73676174))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d874(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d818;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.ncmds + 3)) &&
     ((*(long *)param_1 == 0x635f626c63707267 && *(long *)(param_1 + 2) == 0x74735f746e65696c) &&
      *(long *)((long)param_1 + 0xb) == 0x73746174735f746e)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034d9e0(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x200000;
    *(uint **)(puVar7 + 0x22) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)param_1 == 0x2d74736f632d626c && *(long *)((long)param_1 + 3) == 0x6e69622d74736f63))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    FUN_0034daf8((undefined1 *)((long)register0x00000008 + -0x40),param_3 + 2,
                 *(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    uVar1 = *puVar7;
    puVar4 = puVar7 + 0x18;
    *puVar7 = uVar1 | 0x400000;
    if ((uVar1 >> 0x16 & 1) == 0) {
      puVar7[0x20] = 0;
      puVar7[0x21] = 0;
      puVar7[0x1a] = 0;
      puVar7[0x1b] = 0;
      puVar4[0] = 0;
      puVar4[1] = 0;
      puVar7[0x1e] = 0;
      puVar7[0x1f] = 0;
      puVar7[0x1c] = 0;
      puVar7[0x1d] = 0;
    }
    FUN_0034dbcc(puVar4,(undefined1 *)((long)register0x00000008 + -0x40));
    if (*(char *)((long)register0x00000008 + -0x21) < '\0') {
      puVar4 = *(uint **)((long)register0x00000008 + -0x38);
      __ZdlPv(puVar4);
    }
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.cpusubtype) && (*(long *)param_1 == 0x6e656b6f742d626c)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    param_2 = *(uint ***)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),param_3 + 2,
                 *(undefined8 *)(param_3 + 10));
    param_1 = (uint *)((long)register0x00000008 + -0x48);
    FUN_0034de58(uVar8);
    puVar4 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
      do {
        lVar5 = *(long *)puVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar3) {
          *(long *)puVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(puVar4 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return puVar4;
    }
    ___stack_chk_fail();
    if ((int)param_1 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    puVar7 = puVar4;
    __Unwind_Resume();
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x68) = puVar4;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_0034de58;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x60);
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar1 = *puVar7;
    unaff_x19 = puVar7 + 0x10;
    *puVar7 = uVar1 | 0x800000;
    if ((uVar1 >> 0x17 & 1) == 0) {
      lVar10 = *(long *)(param_1 + 2);
      lVar9 = *(long *)param_1;
      lVar6 = *(long *)(param_1 + 6);
      lVar5 = *(long *)(param_1 + 4);
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      *(long *)(puVar7 + 0x12) = lVar10;
      *(long *)unaff_x19 = lVar9;
      *(long *)(puVar7 + 0x16) = lVar6;
      *(long *)(puVar7 + 0x14) = lVar5;
      param_3 = puVar7;
    }
    else {
      lVar5 = *(long *)param_1;
      lVar6 = *(long *)(param_1 + 6);
      *(long *)((long)register0x00000008 + -0xd0) = lVar6;
      lVar10 = *(long *)(param_1 + 4);
      lVar9 = *(long *)(param_1 + 2);
      *(long *)((long)register0x00000008 + -0xd8) = lVar10;
      *(long *)((long)register0x00000008 + -0xe0) = lVar9;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_3 = *(uint **)(puVar7 + 0x10);
      uVar8 = *(undefined8 *)(puVar7 + 0x16);
      uVar12 = *(undefined8 *)(puVar7 + 0x14);
      uVar11 = *(undefined8 *)(puVar7 + 0x12);
      *(long *)(puVar7 + 0x10) = lVar5;
      *(long *)(puVar7 + 0x14) = lVar10;
      *(long *)(puVar7 + 0x12) = lVar9;
      *(long *)(puVar7 + 0x16) = lVar6;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar12;
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar11;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar8;
      if ((uint *)((long)&MACH_HEADER.magic + 1) < param_3) {
        do {
          lVar5 = *(long *)param_3;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_3,0x10);
          if (bVar3) {
            *(long *)param_3 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 + -1 == 0) {
          (**(code **)(param_3 + 2))();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x78)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_1 == 0) {
      __Unwind_Resume();
    }
    unaff_x30 = FUN_0034df40;
    func_0x0040cf10();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xe0);
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  lVar5 = *(long *)param_3;
  uVar8 = *(undefined8 *)(param_3 + 2);
  uVar12 = *(undefined8 *)(param_3 + 8);
  uVar11 = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)((long)register0x00000008 + -0x50) = uVar8;
  *(undefined8 *)((long)register0x00000008 + -0x38) = uVar12;
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar11;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  FUN_003fe220(lVar5 + 0x1f0);
  puVar4 = *(uint **)((long)register0x00000008 + -0x50);
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
    do {
      lVar5 = *(long *)puVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar3) {
        *(long *)puVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(puVar4 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)param_1 != 0) {
    func_0x0040cf10(puVar4);
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x50));
  }
  __Unwind_Resume(puVar4);
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x58) = FUN_0034e004;
  *(uint **)((long)register0x00000008 + -0x70) = param_1;
  *(uint ***)((long)register0x00000008 + -0x68) = param_2;
  FUN_0034e02c();
  return puVar4;
}



/* Entry: 0034c900; end: 0034c9bb;  */

long * FUN_0034c900(undefined8 *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  long **pplVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  uint *puVar7;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  pplVar3 = &plStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_003fe8a8(&plStack_50);
  FUN_003fe8fc();
  plVar4 = plStack_50;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_50) {
    do {
      lVar6 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return (long *)pplVar3;
  }
  ___stack_chk_fail();
  if (param_2 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_50);
  }
  __Unwind_Resume();
  puVar7 = (uint *)*plVar4;
  plVar5 = plVar4 + 1;
  FUN_0034be6c(plVar5,plVar4[5],plVar4[6]);
  *puVar7 = *puVar7 | 0x1000;
  puVar7[0x5e] = (uint)plVar5;
  return plVar5;
}



/* Entry: 0034c9bc; end: 0034c9f7;  */

void FUN_0034c9bc(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  
  puVar2 = (uint *)*param_1;
  puVar1 = param_1 + 1;
  FUN_0034be6c(puVar1,param_1[5],param_1[6]);
  *puVar2 = *puVar2 | 0x1000;
  puVar2[0x5e] = (uint)puVar1;
  return;
}



/* Entry: 0034c9f8; end: 0034ca53;  */

uint * FUN_0034c9f8(uint *param_1,uint **param_2,uint *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  uint *unaff_x19;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char acStack_251 [521];
  uint *apuStack_48 [4];
  long lStack_28;
  
  if ((param_2 == (uint **)((long)&MACH_HEADER.sizeofcmds + 2)) &&
     ((*(long *)param_1 == 0x7465722d63707267 && *(long *)(param_1 + 2) == 0x62687375702d7972) &&
      *(long *)((long)param_1 + 0xe) == 0x736d2d6b63616268)) {
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034cacc(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x2000;
    *(uint **)(puVar7 + 0x5c) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 2)) &&
     (*(long *)param_1 == 0x6567612d72657375 && (short)param_1[2] == 0x746e)) {
    unaff_x29 = &stack0xfffffffffffffff0;
    lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930(apuStack_48,puVar7,*(undefined8 *)puVar4);
    param_2 = apuStack_48;
    FUN_0034cc88(uVar8);
    unaff_x19 = apuStack_48[0];
    if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_48[0]) {
      do {
        lVar5 = *(long *)apuStack_48[0];
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(apuStack_48[0],0x10);
        if (bVar3) {
          *(long *)apuStack_48[0] = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(apuStack_48[0] + 2))();
        unaff_x19 = apuStack_48[0];
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418(apuStack_48);
    }
    unaff_x30 = FUN_0034cc48;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)(acStack_251 + 0x201);
  }
  if ((param_2 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)param_1 == 0x73656d2d63707267 && param_1[2] == 0x65676173)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034ce60(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034ce38;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)&MACH_HEADER.cputype) && (*param_1 == 0x74736f68)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d078(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d010;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.flags + 1)) &&
     (((*(long *)param_1 == 0x746e696f70646e65 && *(long *)(param_1 + 2) == 0x656d2d64616f6c2d) &&
      *(long *)(param_1 + 4) == 0x69622d7363697274) && (char)param_1[6] == 'n')) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d284(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d228;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.sizeofcmds + 1)) &&
     ((*(long *)param_1 == 0x7265732d63707267 && *(long *)(param_1 + 2) == 0x746174732d726576) &&
      *(long *)((long)param_1 + 0xd) == 0x6e69622d73746174)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d478(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d430;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 2)) &&
     (*(long *)param_1 == 0x6172742d63707267 && *(long *)((long)param_1 + 6) == 0x6e69622d65636172))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d66c(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d624;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)param_1 == 0x6761742d63707267 && *(long *)((long)param_1 + 5) == 0x6e69622d73676174))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d874(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d818;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.ncmds + 3)) &&
     ((*(long *)param_1 == 0x635f626c63707267 && *(long *)(param_1 + 2) == 0x74735f746e65696c) &&
      *(long *)((long)param_1 + 0xb) == 0x73746174735f746e)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034d9e0(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x200000;
    *(uint **)(puVar7 + 0x22) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)param_1 == 0x2d74736f632d626c && *(long *)((long)param_1 + 3) == 0x6e69622d74736f63))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    FUN_0034daf8((undefined1 *)((long)register0x00000008 + -0x40),param_3 + 2,
                 *(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    uVar1 = *puVar7;
    puVar4 = puVar7 + 0x18;
    *puVar7 = uVar1 | 0x400000;
    if ((uVar1 >> 0x16 & 1) == 0) {
      puVar7[0x20] = 0;
      puVar7[0x21] = 0;
      puVar7[0x1a] = 0;
      puVar7[0x1b] = 0;
      puVar4[0] = 0;
      puVar4[1] = 0;
      puVar7[0x1e] = 0;
      puVar7[0x1f] = 0;
      puVar7[0x1c] = 0;
      puVar7[0x1d] = 0;
    }
    FUN_0034dbcc(puVar4,(undefined1 *)((long)register0x00000008 + -0x40));
    if (*(char *)((long)register0x00000008 + -0x21) < '\0') {
      puVar4 = *(uint **)((long)register0x00000008 + -0x38);
      __ZdlPv(puVar4);
    }
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.cpusubtype) && (*(long *)param_1 == 0x6e656b6f742d626c)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    param_2 = *(uint ***)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),param_3 + 2,
                 *(undefined8 *)(param_3 + 10));
    param_1 = (uint *)((long)register0x00000008 + -0x48);
    FUN_0034de58(uVar8);
    puVar4 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
      do {
        lVar5 = *(long *)puVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar3) {
          *(long *)puVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(puVar4 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return puVar4;
    }
    ___stack_chk_fail();
    if ((int)param_1 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    puVar7 = puVar4;
    __Unwind_Resume();
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x68) = puVar4;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_0034de58;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x60);
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar1 = *puVar7;
    unaff_x19 = puVar7 + 0x10;
    *puVar7 = uVar1 | 0x800000;
    if ((uVar1 >> 0x17 & 1) == 0) {
      lVar10 = *(long *)(param_1 + 2);
      lVar9 = *(long *)param_1;
      lVar6 = *(long *)(param_1 + 6);
      lVar5 = *(long *)(param_1 + 4);
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      *(long *)(puVar7 + 0x12) = lVar10;
      *(long *)unaff_x19 = lVar9;
      *(long *)(puVar7 + 0x16) = lVar6;
      *(long *)(puVar7 + 0x14) = lVar5;
      param_3 = puVar7;
    }
    else {
      lVar5 = *(long *)param_1;
      lVar6 = *(long *)(param_1 + 6);
      *(long *)((long)register0x00000008 + -0xd0) = lVar6;
      lVar10 = *(long *)(param_1 + 4);
      lVar9 = *(long *)(param_1 + 2);
      *(long *)((long)register0x00000008 + -0xd8) = lVar10;
      *(long *)((long)register0x00000008 + -0xe0) = lVar9;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_3 = *(uint **)(puVar7 + 0x10);
      uVar8 = *(undefined8 *)(puVar7 + 0x16);
      uVar12 = *(undefined8 *)(puVar7 + 0x14);
      uVar11 = *(undefined8 *)(puVar7 + 0x12);
      *(long *)(puVar7 + 0x10) = lVar5;
      *(long *)(puVar7 + 0x14) = lVar10;
      *(long *)(puVar7 + 0x12) = lVar9;
      *(long *)(puVar7 + 0x16) = lVar6;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar12;
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar11;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar8;
      if ((uint *)((long)&MACH_HEADER.magic + 1) < param_3) {
        do {
          lVar5 = *(long *)param_3;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_3,0x10);
          if (bVar3) {
            *(long *)param_3 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 + -1 == 0) {
          (**(code **)(param_3 + 2))();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x78)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_1 == 0) {
      __Unwind_Resume();
    }
    unaff_x30 = FUN_0034df40;
    func_0x0040cf10();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xe0);
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  lVar5 = *(long *)param_3;
  uVar8 = *(undefined8 *)(param_3 + 2);
  uVar12 = *(undefined8 *)(param_3 + 8);
  uVar11 = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)((long)register0x00000008 + -0x50) = uVar8;
  *(undefined8 *)((long)register0x00000008 + -0x38) = uVar12;
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar11;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  FUN_003fe220(lVar5 + 0x1f0);
  puVar4 = *(uint **)((long)register0x00000008 + -0x50);
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
    do {
      lVar5 = *(long *)puVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar3) {
        *(long *)puVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(puVar4 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)param_1 != 0) {
    func_0x0040cf10(puVar4);
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x50));
  }
  __Unwind_Resume(puVar4);
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x58) = FUN_0034e004;
  *(uint **)((long)register0x00000008 + -0x70) = param_1;
  *(uint ***)((long)register0x00000008 + -0x68) = param_2;
  FUN_0034e02c();
  return puVar4;
}



/* Entry: 0034ca54; end: 0034ca8f;  */

void FUN_0034ca54(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  
  puVar2 = (uint *)*param_1;
  puVar1 = param_1 + 1;
  FUN_0034cacc(puVar1,param_1[5],param_1[6]);
  *puVar2 = *puVar2 | 0x2000;
  *(undefined8 **)(puVar2 + 0x5c) = puVar1;
  return;
}



/* Entry: 0034ca90; end: 0034cacb;  */

uint * FUN_0034ca90(uint *param_1,uint **param_2,uint *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  uint *unaff_x19;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char acStack_251 [521];
  uint *apuStack_48 [4];
  long lStack_28;
  
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 2)) &&
     (*(long *)param_1 == 0x6567612d72657375 && (short)param_1[2] == 0x746e)) {
    unaff_x29 = &stack0xfffffffffffffff0;
    lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930(apuStack_48,puVar7,*(undefined8 *)puVar4);
    param_2 = apuStack_48;
    FUN_0034cc88(uVar8);
    unaff_x19 = apuStack_48[0];
    if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_48[0]) {
      do {
        lVar5 = *(long *)apuStack_48[0];
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(apuStack_48[0],0x10);
        if (bVar3) {
          *(long *)apuStack_48[0] = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(apuStack_48[0] + 2))();
        unaff_x19 = apuStack_48[0];
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418(apuStack_48);
    }
    unaff_x30 = FUN_0034cc48;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)(acStack_251 + 0x201);
  }
  if ((param_2 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)param_1 == 0x73656d2d63707267 && param_1[2] == 0x65676173)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034ce60(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034ce38;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)&MACH_HEADER.cputype) && (*param_1 == 0x74736f68)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d078(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d010;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.flags + 1)) &&
     (((*(long *)param_1 == 0x746e696f70646e65 && *(long *)(param_1 + 2) == 0x656d2d64616f6c2d) &&
      *(long *)(param_1 + 4) == 0x69622d7363697274) && (char)param_1[6] == 'n')) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d284(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d228;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.sizeofcmds + 1)) &&
     ((*(long *)param_1 == 0x7265732d63707267 && *(long *)(param_1 + 2) == 0x746174732d726576) &&
      *(long *)((long)param_1 + 0xd) == 0x6e69622d73746174)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d478(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d430;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 2)) &&
     (*(long *)param_1 == 0x6172742d63707267 && *(long *)((long)param_1 + 6) == 0x6e69622d65636172))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d66c(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d624;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)param_1 == 0x6761742d63707267 && *(long *)((long)param_1 + 5) == 0x6e69622d73676174))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d874(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d818;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.ncmds + 3)) &&
     ((*(long *)param_1 == 0x635f626c63707267 && *(long *)(param_1 + 2) == 0x74735f746e65696c) &&
      *(long *)((long)param_1 + 0xb) == 0x73746174735f746e)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034d9e0(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x200000;
    *(uint **)(puVar7 + 0x22) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)param_1 == 0x2d74736f632d626c && *(long *)((long)param_1 + 3) == 0x6e69622d74736f63))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    FUN_0034daf8((undefined1 *)((long)register0x00000008 + -0x40),param_3 + 2,
                 *(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    uVar1 = *puVar7;
    puVar4 = puVar7 + 0x18;
    *puVar7 = uVar1 | 0x400000;
    if ((uVar1 >> 0x16 & 1) == 0) {
      puVar7[0x20] = 0;
      puVar7[0x21] = 0;
      puVar7[0x1a] = 0;
      puVar7[0x1b] = 0;
      puVar4[0] = 0;
      puVar4[1] = 0;
      puVar7[0x1e] = 0;
      puVar7[0x1f] = 0;
      puVar7[0x1c] = 0;
      puVar7[0x1d] = 0;
    }
    FUN_0034dbcc(puVar4,(undefined1 *)((long)register0x00000008 + -0x40));
    if (*(char *)((long)register0x00000008 + -0x21) < '\0') {
      puVar4 = *(uint **)((long)register0x00000008 + -0x38);
      __ZdlPv(puVar4);
    }
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.cpusubtype) && (*(long *)param_1 == 0x6e656b6f742d626c)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    param_2 = *(uint ***)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),param_3 + 2,
                 *(undefined8 *)(param_3 + 10));
    param_1 = (uint *)((long)register0x00000008 + -0x48);
    FUN_0034de58(uVar8);
    puVar4 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
      do {
        lVar5 = *(long *)puVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar3) {
          *(long *)puVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(puVar4 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return puVar4;
    }
    ___stack_chk_fail();
    if ((int)param_1 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    puVar7 = puVar4;
    __Unwind_Resume();
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x68) = puVar4;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_0034de58;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x60);
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar1 = *puVar7;
    unaff_x19 = puVar7 + 0x10;
    *puVar7 = uVar1 | 0x800000;
    if ((uVar1 >> 0x17 & 1) == 0) {
      lVar10 = *(long *)(param_1 + 2);
      lVar9 = *(long *)param_1;
      lVar6 = *(long *)(param_1 + 6);
      lVar5 = *(long *)(param_1 + 4);
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      *(long *)(puVar7 + 0x12) = lVar10;
      *(long *)unaff_x19 = lVar9;
      *(long *)(puVar7 + 0x16) = lVar6;
      *(long *)(puVar7 + 0x14) = lVar5;
      param_3 = puVar7;
    }
    else {
      lVar5 = *(long *)param_1;
      lVar6 = *(long *)(param_1 + 6);
      *(long *)((long)register0x00000008 + -0xd0) = lVar6;
      lVar10 = *(long *)(param_1 + 4);
      lVar9 = *(long *)(param_1 + 2);
      *(long *)((long)register0x00000008 + -0xd8) = lVar10;
      *(long *)((long)register0x00000008 + -0xe0) = lVar9;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_3 = *(uint **)(puVar7 + 0x10);
      uVar8 = *(undefined8 *)(puVar7 + 0x16);
      uVar12 = *(undefined8 *)(puVar7 + 0x14);
      uVar11 = *(undefined8 *)(puVar7 + 0x12);
      *(long *)(puVar7 + 0x10) = lVar5;
      *(long *)(puVar7 + 0x14) = lVar10;
      *(long *)(puVar7 + 0x12) = lVar9;
      *(long *)(puVar7 + 0x16) = lVar6;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar12;
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar11;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar8;
      if ((uint *)((long)&MACH_HEADER.magic + 1) < param_3) {
        do {
          lVar5 = *(long *)param_3;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_3,0x10);
          if (bVar3) {
            *(long *)param_3 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 + -1 == 0) {
          (**(code **)(param_3 + 2))();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x78)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_1 == 0) {
      __Unwind_Resume();
    }
    unaff_x30 = FUN_0034df40;
    func_0x0040cf10();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xe0);
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  lVar5 = *(long *)param_3;
  uVar8 = *(undefined8 *)(param_3 + 2);
  uVar12 = *(undefined8 *)(param_3 + 8);
  uVar11 = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)((long)register0x00000008 + -0x50) = uVar8;
  *(undefined8 *)((long)register0x00000008 + -0x38) = uVar12;
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar11;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  FUN_003fe220(lVar5 + 0x1f0);
  puVar4 = *(uint **)((long)register0x00000008 + -0x50);
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
    do {
      lVar5 = *(long *)puVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar3) {
        *(long *)puVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(puVar4 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)param_1 != 0) {
    func_0x0040cf10(puVar4);
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x50));
  }
  __Unwind_Resume(puVar4);
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x58) = FUN_0034e004;
  *(uint **)((long)register0x00000008 + -0x70) = param_1;
  *(uint ***)((long)register0x00000008 + -0x68) = param_2;
  FUN_0034e02c();
  return puVar4;
}



/* Entry: 0034cacc; end: 0034cb83;  */

uint * FUN_0034cacc(undefined8 *param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  long **pplVar5;
  long *plVar6;
  uint *puVar7;
  uint *puVar8;
  uint **ppuVar9;
  long lVar10;
  long lVar11;
  uint *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  undefined8 unaff_x20;
  undefined8 *****pppppuVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  char acStack_2a1 [441];
  uint *apuStack_e8 [4];
  long lStack_c8;
  undefined8 ****ppppuStack_b0;
  code *pcStack_a8;
  undefined1 auStack_a0 [8];
  uint *apuStack_98 [4];
  long lStack_78;
  undefined8 ***pppuStack_60;
  code *pcStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  pplVar5 = &plStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  func_0x003fee04(&plStack_50);
  plVar6 = plStack_50;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_50) {
    do {
      lVar10 = *plStack_50;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar3) {
        *plStack_50 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return (uint *)pplVar5;
  }
  ___stack_chk_fail();
  if (param_2 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_50);
  }
  __Unwind_Resume();
  pcStack_58 = FUN_0034cb84;
  pppppuVar15 = (undefined8 *****)&pppuStack_60;
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar10 = *plVar6;
  puVar8 = (uint *)plVar6[6];
  pppuStack_60 = (undefined8 ***)&stack0xfffffffffffffff0;
  FUN_0034b930(apuStack_98,plVar6 + 1,plVar6[5]);
  ppuVar9 = apuStack_98;
  FUN_0034cc88(lVar10);
  puVar13 = apuStack_98[0];
  if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_98[0]) {
    do {
      lVar10 = *(long *)apuStack_98[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_98[0],0x10);
      if (bVar3) {
        *(long *)apuStack_98[0] = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(apuStack_98[0] + 2))();
      puVar13 = apuStack_98[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
    return puVar13;
  }
  ___stack_chk_fail();
  if ((int)ppuVar9 != 0) {
    func_0x0040cf10();
    FUN_0034b418(apuStack_98);
  }
  pcVar16 = FUN_0034cc48;
  puVar12 = puVar13;
  __Unwind_Resume();
  pcVar4 = auStack_a0;
  if ((ppuVar9 == (uint **)&MACH_HEADER.filetype) &&
     (pcVar4 = auStack_a0, *(long *)puVar12 == 0x73656d2d63707267 && puVar12[2] == 0x65676173)) {
    pcStack_a8 = FUN_0034cc48;
    lStack_c8 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar14 = *(undefined8 *)puVar8;
    puVar12 = puVar8 + 2;
    puVar13 = puVar8 + 10;
    puVar8 = *(uint **)(puVar8 + 0xc);
    ppppuStack_b0 = pppppuVar15;
    FUN_0034b930(apuStack_e8,puVar12,*(undefined8 *)puVar13);
    ppuVar9 = apuStack_e8;
    FUN_0034ce60(uVar14);
    puVar13 = apuStack_e8[0];
    if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_e8[0]) {
      do {
        lVar10 = *(long *)apuStack_e8[0];
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(apuStack_e8[0],0x10);
        if (bVar3) {
          *(long *)apuStack_e8[0] = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(apuStack_e8[0] + 2))();
        puVar13 = apuStack_e8[0];
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_c8) {
      return puVar13;
    }
    ___stack_chk_fail();
    if ((int)ppuVar9 != 0) {
      func_0x0040cf10();
      FUN_0034b418(apuStack_e8);
    }
    pcVar16 = FUN_0034ce38;
    puVar12 = puVar13;
    __Unwind_Resume();
    pcVar4 = acStack_2a1 + 0x1b1;
    pppppuVar15 = &ppppuStack_b0;
  }
  if ((ppuVar9 == (uint **)&MACH_HEADER.cputype) && (*puVar12 == 0x74736f68)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar13;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    pppppuVar15 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar14 = *(undefined8 *)puVar8;
    puVar12 = puVar8 + 2;
    puVar13 = puVar8 + 10;
    puVar8 = *(uint **)(puVar8 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar12,*(undefined8 *)puVar13);
    ppuVar9 = (uint **)(pcVar4 + -0x48);
    FUN_0034d078(uVar14);
    puVar13 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar13) {
      do {
        lVar10 = *(long *)puVar13;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar3) {
          *(long *)puVar13 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(puVar13 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar13;
    }
    ___stack_chk_fail();
    if ((int)ppuVar9 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar16 = FUN_0034d010;
    puVar12 = puVar13;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar9 == (uint **)((long)&MACH_HEADER.flags + 1)) &&
     (((*(long *)puVar12 == 0x746e696f70646e65 && *(long *)(puVar12 + 2) == 0x656d2d64616f6c2d) &&
      *(long *)(puVar12 + 4) == 0x69622d7363697274) && (char)puVar12[6] == 'n')) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar13;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    pppppuVar15 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar14 = *(undefined8 *)puVar8;
    puVar12 = puVar8 + 2;
    puVar13 = puVar8 + 10;
    puVar8 = *(uint **)(puVar8 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar12,*(undefined8 *)puVar13);
    ppuVar9 = (uint **)(pcVar4 + -0x48);
    FUN_0034d284(uVar14);
    puVar13 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar13) {
      do {
        lVar10 = *(long *)puVar13;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar3) {
          *(long *)puVar13 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(puVar13 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar13;
    }
    ___stack_chk_fail();
    if ((int)ppuVar9 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar16 = FUN_0034d228;
    puVar12 = puVar13;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar9 == (uint **)((long)&MACH_HEADER.sizeofcmds + 1)) &&
     ((*(long *)puVar12 == 0x7265732d63707267 && *(long *)(puVar12 + 2) == 0x746174732d726576) &&
      *(long *)((long)puVar12 + 0xd) == 0x6e69622d73746174)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar13;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    pppppuVar15 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar14 = *(undefined8 *)puVar8;
    puVar12 = puVar8 + 2;
    puVar13 = puVar8 + 10;
    puVar8 = *(uint **)(puVar8 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar12,*(undefined8 *)puVar13);
    ppuVar9 = (uint **)(pcVar4 + -0x48);
    FUN_0034d478(uVar14);
    puVar13 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar13) {
      do {
        lVar10 = *(long *)puVar13;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar3) {
          *(long *)puVar13 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(puVar13 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar13;
    }
    ___stack_chk_fail();
    if ((int)ppuVar9 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar16 = FUN_0034d430;
    puVar12 = puVar13;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar9 == (uint **)((long)&MACH_HEADER.filetype + 2)) &&
     (*(long *)puVar12 == 0x6172742d63707267 && *(long *)((long)puVar12 + 6) == 0x6e69622d65636172))
  {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar13;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    pppppuVar15 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar14 = *(undefined8 *)puVar8;
    puVar12 = puVar8 + 2;
    puVar13 = puVar8 + 10;
    puVar8 = *(uint **)(puVar8 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar12,*(undefined8 *)puVar13);
    ppuVar9 = (uint **)(pcVar4 + -0x48);
    FUN_0034d66c(uVar14);
    puVar13 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar13) {
      do {
        lVar10 = *(long *)puVar13;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar3) {
          *(long *)puVar13 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(puVar13 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar13;
    }
    ___stack_chk_fail();
    if ((int)ppuVar9 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar16 = FUN_0034d624;
    puVar12 = puVar13;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar9 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)puVar12 == 0x6761742d63707267 && *(long *)((long)puVar12 + 5) == 0x6e69622d73676174))
  {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar13;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    pppppuVar15 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar14 = *(undefined8 *)puVar8;
    puVar12 = puVar8 + 2;
    puVar13 = puVar8 + 10;
    puVar8 = *(uint **)(puVar8 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar12,*(undefined8 *)puVar13);
    ppuVar9 = (uint **)(pcVar4 + -0x48);
    FUN_0034d874(uVar14);
    puVar13 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar13) {
      do {
        lVar10 = *(long *)puVar13;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar3) {
          *(long *)puVar13 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(puVar13 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar13;
    }
    ___stack_chk_fail();
    if ((int)ppuVar9 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar16 = FUN_0034d818;
    puVar12 = puVar13;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar9 == (uint **)((long)&MACH_HEADER.ncmds + 3)) &&
     ((*(long *)puVar12 == 0x635f626c63707267 && *(long *)(puVar12 + 2) == 0x74735f746e65696c) &&
      *(long *)((long)puVar12 + 0xb) == 0x73746174735f746e)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar13;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    puVar12 = *(uint **)puVar8;
    puVar13 = puVar8 + 2;
    FUN_0034d9e0(puVar13,*(undefined8 *)(puVar8 + 10),*(undefined8 *)(puVar8 + 0xc));
    *puVar12 = *puVar12 | 0x200000;
    *(uint **)(puVar12 + 0x22) = puVar13;
    return puVar13;
  }
  if ((ppuVar9 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)puVar12 == 0x2d74736f632d626c && *(long *)((long)puVar12 + 3) == 0x6e69622d74736f63))
  {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar13;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    puVar13 = *(uint **)puVar8;
    FUN_0034daf8(pcVar4 + -0x40,puVar8 + 2,*(undefined8 *)(puVar8 + 10),
                 *(undefined8 *)(puVar8 + 0xc));
    uVar1 = *puVar13;
    puVar8 = puVar13 + 0x18;
    *puVar13 = uVar1 | 0x400000;
    if ((uVar1 >> 0x16 & 1) == 0) {
      puVar13[0x20] = 0;
      puVar13[0x21] = 0;
      puVar13[0x1a] = 0;
      puVar13[0x1b] = 0;
      puVar8[0] = 0;
      puVar8[1] = 0;
      puVar13[0x1e] = 0;
      puVar13[0x1f] = 0;
      puVar13[0x1c] = 0;
      puVar13[0x1d] = 0;
    }
    FUN_0034dbcc(puVar8,pcVar4 + -0x40);
    if (pcVar4[-0x21] < '\0') {
      puVar8 = *(uint **)(pcVar4 + -0x38);
      __ZdlPv(puVar8);
    }
    return puVar8;
  }
  if ((ppuVar9 == (uint **)&MACH_HEADER.cpusubtype) && (*(long *)puVar12 == 0x6e656b6f742d626c)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar13;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar14 = *(undefined8 *)puVar8;
    ppuVar9 = *(uint ***)(puVar8 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar8 + 2,*(undefined8 *)(puVar8 + 10));
    puVar12 = (uint *)(pcVar4 + -0x48);
    FUN_0034de58(uVar14);
    puVar8 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar8) {
      do {
        lVar10 = *(long *)puVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar8,0x10);
        if (bVar3) {
          *(long *)puVar8 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(puVar8 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar8;
    }
    ___stack_chk_fail();
    if ((int)puVar12 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    puVar7 = puVar8;
    __Unwind_Resume();
    *(undefined8 *)(pcVar4 + -0x70) = unaff_x20;
    *(uint **)(pcVar4 + -0x68) = puVar8;
    *(char **)(pcVar4 + -0x60) = pcVar4 + -0x10;
    *(code **)(pcVar4 + -0x58) = FUN_0034de58;
    pppppuVar15 = (undefined8 *****)(pcVar4 + -0x60);
    *(undefined8 *)(pcVar4 + -0x78) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar1 = *puVar7;
    puVar13 = puVar7 + 0x10;
    *puVar7 = uVar1 | 0x800000;
    if ((uVar1 >> 0x17 & 1) == 0) {
      lVar18 = *(long *)(puVar12 + 2);
      lVar17 = *(long *)puVar12;
      lVar11 = *(long *)(puVar12 + 6);
      lVar10 = *(long *)(puVar12 + 4);
      puVar12[2] = 0;
      puVar12[3] = 0;
      puVar12[0] = 0;
      puVar12[1] = 0;
      puVar12[6] = 0;
      puVar12[7] = 0;
      puVar12[4] = 0;
      puVar12[5] = 0;
      *(long *)(puVar7 + 0x12) = lVar18;
      *(long *)puVar13 = lVar17;
      *(long *)(puVar7 + 0x16) = lVar11;
      *(long *)(puVar7 + 0x14) = lVar10;
      puVar8 = puVar7;
    }
    else {
      lVar10 = *(long *)puVar12;
      lVar11 = *(long *)(puVar12 + 6);
      *(long *)(pcVar4 + -0xd0) = lVar11;
      lVar18 = *(long *)(puVar12 + 4);
      lVar17 = *(long *)(puVar12 + 2);
      *(long *)(pcVar4 + -0xd8) = lVar18;
      *(long *)(pcVar4 + -0xe0) = lVar17;
      puVar12[2] = 0;
      puVar12[3] = 0;
      puVar12[0] = 0;
      puVar12[1] = 0;
      puVar12[6] = 0;
      puVar12[7] = 0;
      puVar12[4] = 0;
      puVar12[5] = 0;
      puVar8 = *(uint **)(puVar7 + 0x10);
      uVar14 = *(undefined8 *)(puVar7 + 0x16);
      uVar20 = *(undefined8 *)(puVar7 + 0x14);
      uVar19 = *(undefined8 *)(puVar7 + 0x12);
      *(long *)(puVar7 + 0x10) = lVar10;
      *(long *)(puVar7 + 0x14) = lVar18;
      *(long *)(puVar7 + 0x12) = lVar17;
      *(long *)(puVar7 + 0x16) = lVar11;
      *(undefined8 *)(pcVar4 + -0xd8) = uVar20;
      *(undefined8 *)(pcVar4 + -0xe0) = uVar19;
      *(undefined8 *)(pcVar4 + -0xd0) = uVar14;
      if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar8) {
        do {
          lVar10 = *(long *)puVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar8,0x10);
          if (bVar3) {
            *(long *)puVar8 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(puVar8 + 2))();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x78)) {
      return puVar13;
    }
    ___stack_chk_fail();
    if ((int)puVar12 == 0) {
      __Unwind_Resume();
    }
    pcVar16 = FUN_0034df40;
    func_0x0040cf10();
    pcVar4 = pcVar4 + -0xe0;
  }
  *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
  *(uint **)(pcVar4 + -0x18) = puVar13;
  *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
  *(code **)(pcVar4 + -8) = pcVar16;
  *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  lVar10 = *(long *)puVar8;
  uVar14 = *(undefined8 *)(puVar8 + 2);
  uVar20 = *(undefined8 *)(puVar8 + 8);
  uVar19 = *(undefined8 *)(puVar8 + 6);
  *(undefined8 *)(pcVar4 + -0x48) = *(undefined8 *)(puVar8 + 4);
  *(undefined8 *)(pcVar4 + -0x50) = uVar14;
  *(undefined8 *)(pcVar4 + -0x38) = uVar20;
  *(undefined8 *)(pcVar4 + -0x40) = uVar19;
  puVar8[4] = 0;
  puVar8[5] = 0;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[8] = 0;
  puVar8[9] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  FUN_003fe220(lVar10 + 0x1f0);
  puVar8 = *(uint **)(pcVar4 + -0x50);
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar8) {
    do {
      lVar10 = *(long *)puVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar8,0x10);
      if (bVar3) {
        *(long *)puVar8 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(puVar8 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
    return puVar8;
  }
  ___stack_chk_fail();
  if ((int)puVar12 != 0) {
    func_0x0040cf10(puVar8);
    FUN_0034b418(pcVar4 + -0x50);
  }
  __Unwind_Resume(puVar8);
  *(char **)(pcVar4 + -0x60) = pcVar4 + -0x10;
  *(code **)(pcVar4 + -0x58) = FUN_0034e004;
  *(uint **)(pcVar4 + -0x70) = puVar12;
  *(uint ***)(pcVar4 + -0x68) = ppuVar9;
  FUN_0034e02c();
  return puVar8;
}



/* Entry: 0034cb84; end: 0034cc47;  */

uint * FUN_0034cb84(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  uint *puVar5;
  uint *puVar6;
  uint **ppuVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  uint *puVar11;
  uint *puVar12;
  undefined8 unaff_x20;
  undefined8 *****pppppuVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  char acStack_251 [441];
  uint *apuStack_98 [4];
  long lStack_78;
  undefined8 ****ppppuStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [8];
  uint *apuStack_48 [4];
  long lStack_28;
  
  pppppuVar13 = (undefined8 *****)&stack0xfffffffffffffff0;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar10 = *param_1;
  puVar6 = (uint *)param_1[6];
  FUN_0034b930(apuStack_48,param_1 + 1,param_1[5]);
  ppuVar7 = apuStack_48;
  FUN_0034cc88(uVar10);
  puVar12 = apuStack_48[0];
  if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_48[0]) {
    do {
      lVar8 = *(long *)apuStack_48[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_48[0],0x10);
      if (bVar3) {
        *(long *)apuStack_48[0] = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(apuStack_48[0] + 2))();
      puVar12 = apuStack_48[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return puVar12;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    func_0x0040cf10();
    FUN_0034b418(apuStack_48);
  }
  pcVar14 = FUN_0034cc48;
  puVar11 = puVar12;
  __Unwind_Resume();
  pcVar4 = auStack_50;
  if ((ppuVar7 == (uint **)&MACH_HEADER.filetype) &&
     (pcVar4 = auStack_50, *(long *)puVar11 == 0x73656d2d63707267 && puVar11[2] == 0x65676173)) {
    pcStack_58 = FUN_0034cc48;
    lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar10 = *(undefined8 *)puVar6;
    puVar11 = puVar6 + 2;
    puVar12 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    ppppuStack_60 = pppppuVar13;
    FUN_0034b930(apuStack_98,puVar11,*(undefined8 *)puVar12);
    ppuVar7 = apuStack_98;
    FUN_0034ce60(uVar10);
    puVar12 = apuStack_98[0];
    if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_98[0]) {
      do {
        lVar8 = *(long *)apuStack_98[0];
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(apuStack_98[0],0x10);
        if (bVar3) {
          *(long *)apuStack_98[0] = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(apuStack_98[0] + 2))();
        puVar12 = apuStack_98[0];
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
      return puVar12;
    }
    ___stack_chk_fail();
    if ((int)ppuVar7 != 0) {
      func_0x0040cf10();
      FUN_0034b418(apuStack_98);
    }
    pcVar14 = FUN_0034ce38;
    puVar11 = puVar12;
    __Unwind_Resume();
    pcVar4 = acStack_251 + 0x1b1;
    pppppuVar13 = &ppppuStack_60;
  }
  if ((ppuVar7 == (uint **)&MACH_HEADER.cputype) && (*puVar11 == 0x74736f68)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    pppppuVar13 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar10 = *(undefined8 *)puVar6;
    puVar11 = puVar6 + 2;
    puVar12 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar11,*(undefined8 *)puVar12);
    ppuVar7 = (uint **)(pcVar4 + -0x48);
    FUN_0034d078(uVar10);
    puVar12 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar12) {
      do {
        lVar8 = *(long *)puVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar12,0x10);
        if (bVar3) {
          *(long *)puVar12 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar12 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar12;
    }
    ___stack_chk_fail();
    if ((int)ppuVar7 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar14 = FUN_0034d010;
    puVar11 = puVar12;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.flags + 1)) &&
     (((*(long *)puVar11 == 0x746e696f70646e65 && *(long *)(puVar11 + 2) == 0x656d2d64616f6c2d) &&
      *(long *)(puVar11 + 4) == 0x69622d7363697274) && (char)puVar11[6] == 'n')) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    pppppuVar13 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar10 = *(undefined8 *)puVar6;
    puVar11 = puVar6 + 2;
    puVar12 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar11,*(undefined8 *)puVar12);
    ppuVar7 = (uint **)(pcVar4 + -0x48);
    FUN_0034d284(uVar10);
    puVar12 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar12) {
      do {
        lVar8 = *(long *)puVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar12,0x10);
        if (bVar3) {
          *(long *)puVar12 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar12 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar12;
    }
    ___stack_chk_fail();
    if ((int)ppuVar7 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar14 = FUN_0034d228;
    puVar11 = puVar12;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.sizeofcmds + 1)) &&
     ((*(long *)puVar11 == 0x7265732d63707267 && *(long *)(puVar11 + 2) == 0x746174732d726576) &&
      *(long *)((long)puVar11 + 0xd) == 0x6e69622d73746174)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    pppppuVar13 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar10 = *(undefined8 *)puVar6;
    puVar11 = puVar6 + 2;
    puVar12 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar11,*(undefined8 *)puVar12);
    ppuVar7 = (uint **)(pcVar4 + -0x48);
    FUN_0034d478(uVar10);
    puVar12 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar12) {
      do {
        lVar8 = *(long *)puVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar12,0x10);
        if (bVar3) {
          *(long *)puVar12 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar12 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar12;
    }
    ___stack_chk_fail();
    if ((int)ppuVar7 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar14 = FUN_0034d430;
    puVar11 = puVar12;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.filetype + 2)) &&
     (*(long *)puVar11 == 0x6172742d63707267 && *(long *)((long)puVar11 + 6) == 0x6e69622d65636172))
  {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    pppppuVar13 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar10 = *(undefined8 *)puVar6;
    puVar11 = puVar6 + 2;
    puVar12 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar11,*(undefined8 *)puVar12);
    ppuVar7 = (uint **)(pcVar4 + -0x48);
    FUN_0034d66c(uVar10);
    puVar12 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar12) {
      do {
        lVar8 = *(long *)puVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar12,0x10);
        if (bVar3) {
          *(long *)puVar12 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar12 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar12;
    }
    ___stack_chk_fail();
    if ((int)ppuVar7 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar14 = FUN_0034d624;
    puVar11 = puVar12;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)puVar11 == 0x6761742d63707267 && *(long *)((long)puVar11 + 5) == 0x6e69622d73676174))
  {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    pppppuVar13 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar10 = *(undefined8 *)puVar6;
    puVar11 = puVar6 + 2;
    puVar12 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar11,*(undefined8 *)puVar12);
    ppuVar7 = (uint **)(pcVar4 + -0x48);
    FUN_0034d874(uVar10);
    puVar12 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar12) {
      do {
        lVar8 = *(long *)puVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar12,0x10);
        if (bVar3) {
          *(long *)puVar12 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar12 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar12;
    }
    ___stack_chk_fail();
    if ((int)ppuVar7 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar14 = FUN_0034d818;
    puVar11 = puVar12;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.ncmds + 3)) &&
     ((*(long *)puVar11 == 0x635f626c63707267 && *(long *)(puVar11 + 2) == 0x74735f746e65696c) &&
      *(long *)((long)puVar11 + 0xb) == 0x73746174735f746e)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    puVar11 = *(uint **)puVar6;
    puVar12 = puVar6 + 2;
    FUN_0034d9e0(puVar12,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar11 = *puVar11 | 0x200000;
    *(uint **)(puVar11 + 0x22) = puVar12;
    return puVar12;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)puVar11 == 0x2d74736f632d626c && *(long *)((long)puVar11 + 3) == 0x6e69622d74736f63))
  {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    puVar12 = *(uint **)puVar6;
    FUN_0034daf8(pcVar4 + -0x40,puVar6 + 2,*(undefined8 *)(puVar6 + 10),
                 *(undefined8 *)(puVar6 + 0xc));
    uVar1 = *puVar12;
    puVar6 = puVar12 + 0x18;
    *puVar12 = uVar1 | 0x400000;
    if ((uVar1 >> 0x16 & 1) == 0) {
      puVar12[0x20] = 0;
      puVar12[0x21] = 0;
      puVar12[0x1a] = 0;
      puVar12[0x1b] = 0;
      puVar6[0] = 0;
      puVar6[1] = 0;
      puVar12[0x1e] = 0;
      puVar12[0x1f] = 0;
      puVar12[0x1c] = 0;
      puVar12[0x1d] = 0;
    }
    FUN_0034dbcc(puVar6,pcVar4 + -0x40);
    if (pcVar4[-0x21] < '\0') {
      puVar6 = *(uint **)(pcVar4 + -0x38);
      __ZdlPv(puVar6);
    }
    return puVar6;
  }
  if ((ppuVar7 == (uint **)&MACH_HEADER.cpusubtype) && (*(long *)puVar11 == 0x6e656b6f742d626c)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar10 = *(undefined8 *)puVar6;
    ppuVar7 = *(uint ***)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar6 + 2,*(undefined8 *)(puVar6 + 10));
    puVar11 = (uint *)(pcVar4 + -0x48);
    FUN_0034de58(uVar10);
    puVar6 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar6) {
      do {
        lVar8 = *(long *)puVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
        if (bVar3) {
          *(long *)puVar6 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar6 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar6;
    }
    ___stack_chk_fail();
    if ((int)puVar11 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    puVar5 = puVar6;
    __Unwind_Resume();
    *(undefined8 *)(pcVar4 + -0x70) = unaff_x20;
    *(uint **)(pcVar4 + -0x68) = puVar6;
    *(char **)(pcVar4 + -0x60) = pcVar4 + -0x10;
    *(code **)(pcVar4 + -0x58) = FUN_0034de58;
    pppppuVar13 = (undefined8 *****)(pcVar4 + -0x60);
    *(undefined8 *)(pcVar4 + -0x78) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar1 = *puVar5;
    puVar12 = puVar5 + 0x10;
    *puVar5 = uVar1 | 0x800000;
    if ((uVar1 >> 0x17 & 1) == 0) {
      lVar16 = *(long *)(puVar11 + 2);
      lVar15 = *(long *)puVar11;
      lVar9 = *(long *)(puVar11 + 6);
      lVar8 = *(long *)(puVar11 + 4);
      puVar11[2] = 0;
      puVar11[3] = 0;
      puVar11[0] = 0;
      puVar11[1] = 0;
      puVar11[6] = 0;
      puVar11[7] = 0;
      puVar11[4] = 0;
      puVar11[5] = 0;
      *(long *)(puVar5 + 0x12) = lVar16;
      *(long *)puVar12 = lVar15;
      *(long *)(puVar5 + 0x16) = lVar9;
      *(long *)(puVar5 + 0x14) = lVar8;
      puVar6 = puVar5;
    }
    else {
      lVar8 = *(long *)puVar11;
      lVar9 = *(long *)(puVar11 + 6);
      *(long *)(pcVar4 + -0xd0) = lVar9;
      lVar16 = *(long *)(puVar11 + 4);
      lVar15 = *(long *)(puVar11 + 2);
      *(long *)(pcVar4 + -0xd8) = lVar16;
      *(long *)(pcVar4 + -0xe0) = lVar15;
      puVar11[2] = 0;
      puVar11[3] = 0;
      puVar11[0] = 0;
      puVar11[1] = 0;
      puVar11[6] = 0;
      puVar11[7] = 0;
      puVar11[4] = 0;
      puVar11[5] = 0;
      puVar6 = *(uint **)(puVar5 + 0x10);
      uVar10 = *(undefined8 *)(puVar5 + 0x16);
      uVar18 = *(undefined8 *)(puVar5 + 0x14);
      uVar17 = *(undefined8 *)(puVar5 + 0x12);
      *(long *)(puVar5 + 0x10) = lVar8;
      *(long *)(puVar5 + 0x14) = lVar16;
      *(long *)(puVar5 + 0x12) = lVar15;
      *(long *)(puVar5 + 0x16) = lVar9;
      *(undefined8 *)(pcVar4 + -0xd8) = uVar18;
      *(undefined8 *)(pcVar4 + -0xe0) = uVar17;
      *(undefined8 *)(pcVar4 + -0xd0) = uVar10;
      if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar6) {
        do {
          lVar8 = *(long *)puVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
          if (bVar3) {
            *(long *)puVar6 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 + -1 == 0) {
          (**(code **)(puVar6 + 2))();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x78)) {
      return puVar12;
    }
    ___stack_chk_fail();
    if ((int)puVar11 == 0) {
      __Unwind_Resume();
    }
    pcVar14 = FUN_0034df40;
    func_0x0040cf10();
    pcVar4 = pcVar4 + -0xe0;
  }
  *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
  *(uint **)(pcVar4 + -0x18) = puVar12;
  *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
  *(code **)(pcVar4 + -8) = pcVar14;
  *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  lVar8 = *(long *)puVar6;
  uVar10 = *(undefined8 *)(puVar6 + 2);
  uVar18 = *(undefined8 *)(puVar6 + 8);
  uVar17 = *(undefined8 *)(puVar6 + 6);
  *(undefined8 *)(pcVar4 + -0x48) = *(undefined8 *)(puVar6 + 4);
  *(undefined8 *)(pcVar4 + -0x50) = uVar10;
  *(undefined8 *)(pcVar4 + -0x38) = uVar18;
  *(undefined8 *)(pcVar4 + -0x40) = uVar17;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  FUN_003fe220(lVar8 + 0x1f0);
  puVar6 = *(uint **)(pcVar4 + -0x50);
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar6) {
    do {
      lVar8 = *(long *)puVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar3) {
        *(long *)puVar6 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(puVar6 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
    return puVar6;
  }
  ___stack_chk_fail();
  if ((int)puVar11 != 0) {
    func_0x0040cf10(puVar6);
    FUN_0034b418(pcVar4 + -0x50);
  }
  __Unwind_Resume(puVar6);
  *(char **)(pcVar4 + -0x60) = pcVar4 + -0x10;
  *(code **)(pcVar4 + -0x58) = FUN_0034e004;
  *(uint **)(pcVar4 + -0x70) = puVar11;
  *(uint ***)(pcVar4 + -0x68) = ppuVar7;
  FUN_0034e02c();
  return puVar6;
}



/* Entry: 0034cc48; end: 0034cc87;  */

uint * FUN_0034cc48(uint *param_1,uint **param_2,uint *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  uint *unaff_x19;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char acStack_201 [441];
  uint *apuStack_48 [4];
  long lStack_28;
  
  if ((param_2 == (uint **)&MACH_HEADER.filetype) &&
     (*(long *)param_1 == 0x73656d2d63707267 && param_1[2] == 0x65676173)) {
    unaff_x29 = &stack0xfffffffffffffff0;
    lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930(apuStack_48,puVar7,*(undefined8 *)puVar4);
    param_2 = apuStack_48;
    FUN_0034ce60(uVar8);
    unaff_x19 = apuStack_48[0];
    if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_48[0]) {
      do {
        lVar5 = *(long *)apuStack_48[0];
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(apuStack_48[0],0x10);
        if (bVar3) {
          *(long *)apuStack_48[0] = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(apuStack_48[0] + 2))();
        unaff_x19 = apuStack_48[0];
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418(apuStack_48);
    }
    unaff_x30 = FUN_0034ce38;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)(acStack_201 + 0x1b1);
  }
  if ((param_2 == (uint **)&MACH_HEADER.cputype) && (*param_1 == 0x74736f68)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d078(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d010;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.flags + 1)) &&
     (((*(long *)param_1 == 0x746e696f70646e65 && *(long *)(param_1 + 2) == 0x656d2d64616f6c2d) &&
      *(long *)(param_1 + 4) == 0x69622d7363697274) && (char)param_1[6] == 'n')) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d284(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d228;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.sizeofcmds + 1)) &&
     ((*(long *)param_1 == 0x7265732d63707267 && *(long *)(param_1 + 2) == 0x746174732d726576) &&
      *(long *)((long)param_1 + 0xd) == 0x6e69622d73746174)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d478(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d430;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 2)) &&
     (*(long *)param_1 == 0x6172742d63707267 && *(long *)((long)param_1 + 6) == 0x6e69622d65636172))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d66c(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d624;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)param_1 == 0x6761742d63707267 && *(long *)((long)param_1 + 5) == 0x6e69622d73676174))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d874(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d818;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.ncmds + 3)) &&
     ((*(long *)param_1 == 0x635f626c63707267 && *(long *)(param_1 + 2) == 0x74735f746e65696c) &&
      *(long *)((long)param_1 + 0xb) == 0x73746174735f746e)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034d9e0(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x200000;
    *(uint **)(puVar7 + 0x22) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)param_1 == 0x2d74736f632d626c && *(long *)((long)param_1 + 3) == 0x6e69622d74736f63))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    FUN_0034daf8((undefined1 *)((long)register0x00000008 + -0x40),param_3 + 2,
                 *(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    uVar1 = *puVar7;
    puVar4 = puVar7 + 0x18;
    *puVar7 = uVar1 | 0x400000;
    if ((uVar1 >> 0x16 & 1) == 0) {
      puVar7[0x20] = 0;
      puVar7[0x21] = 0;
      puVar7[0x1a] = 0;
      puVar7[0x1b] = 0;
      puVar4[0] = 0;
      puVar4[1] = 0;
      puVar7[0x1e] = 0;
      puVar7[0x1f] = 0;
      puVar7[0x1c] = 0;
      puVar7[0x1d] = 0;
    }
    FUN_0034dbcc(puVar4,(undefined1 *)((long)register0x00000008 + -0x40));
    if (*(char *)((long)register0x00000008 + -0x21) < '\0') {
      puVar4 = *(uint **)((long)register0x00000008 + -0x38);
      __ZdlPv(puVar4);
    }
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.cpusubtype) && (*(long *)param_1 == 0x6e656b6f742d626c)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    param_2 = *(uint ***)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),param_3 + 2,
                 *(undefined8 *)(param_3 + 10));
    param_1 = (uint *)((long)register0x00000008 + -0x48);
    FUN_0034de58(uVar8);
    puVar4 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
      do {
        lVar5 = *(long *)puVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar3) {
          *(long *)puVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(puVar4 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return puVar4;
    }
    ___stack_chk_fail();
    if ((int)param_1 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    puVar7 = puVar4;
    __Unwind_Resume();
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x68) = puVar4;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_0034de58;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x60);
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar1 = *puVar7;
    unaff_x19 = puVar7 + 0x10;
    *puVar7 = uVar1 | 0x800000;
    if ((uVar1 >> 0x17 & 1) == 0) {
      lVar10 = *(long *)(param_1 + 2);
      lVar9 = *(long *)param_1;
      lVar6 = *(long *)(param_1 + 6);
      lVar5 = *(long *)(param_1 + 4);
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      *(long *)(puVar7 + 0x12) = lVar10;
      *(long *)unaff_x19 = lVar9;
      *(long *)(puVar7 + 0x16) = lVar6;
      *(long *)(puVar7 + 0x14) = lVar5;
      param_3 = puVar7;
    }
    else {
      lVar5 = *(long *)param_1;
      lVar6 = *(long *)(param_1 + 6);
      *(long *)((long)register0x00000008 + -0xd0) = lVar6;
      lVar10 = *(long *)(param_1 + 4);
      lVar9 = *(long *)(param_1 + 2);
      *(long *)((long)register0x00000008 + -0xd8) = lVar10;
      *(long *)((long)register0x00000008 + -0xe0) = lVar9;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_3 = *(uint **)(puVar7 + 0x10);
      uVar8 = *(undefined8 *)(puVar7 + 0x16);
      uVar12 = *(undefined8 *)(puVar7 + 0x14);
      uVar11 = *(undefined8 *)(puVar7 + 0x12);
      *(long *)(puVar7 + 0x10) = lVar5;
      *(long *)(puVar7 + 0x14) = lVar10;
      *(long *)(puVar7 + 0x12) = lVar9;
      *(long *)(puVar7 + 0x16) = lVar6;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar12;
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar11;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar8;
      if ((uint *)((long)&MACH_HEADER.magic + 1) < param_3) {
        do {
          lVar5 = *(long *)param_3;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_3,0x10);
          if (bVar3) {
            *(long *)param_3 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 + -1 == 0) {
          (**(code **)(param_3 + 2))();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x78)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_1 == 0) {
      __Unwind_Resume();
    }
    unaff_x30 = FUN_0034df40;
    func_0x0040cf10();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xe0);
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  lVar5 = *(long *)param_3;
  uVar8 = *(undefined8 *)(param_3 + 2);
  uVar12 = *(undefined8 *)(param_3 + 8);
  uVar11 = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)((long)register0x00000008 + -0x50) = uVar8;
  *(undefined8 *)((long)register0x00000008 + -0x38) = uVar12;
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar11;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  FUN_003fe220(lVar5 + 0x1f0);
  puVar4 = *(uint **)((long)register0x00000008 + -0x50);
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
    do {
      lVar5 = *(long *)puVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar3) {
        *(long *)puVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(puVar4 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)param_1 != 0) {
    func_0x0040cf10(puVar4);
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x50));
  }
  __Unwind_Resume(puVar4);
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x58) = FUN_0034e004;
  *(uint **)((long)register0x00000008 + -0x70) = param_1;
  *(uint ***)((long)register0x00000008 + -0x68) = param_2;
  FUN_0034e02c();
  return puVar4;
}



/* Entry: 0034cc88; end: 0034cd73;  */

uint * FUN_0034cc88(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  uint **ppuVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  uint *puVar14;
  undefined8 unaff_x20;
  undefined8 *****pppppuVar15;
  code *pcVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  char acStack_291 [361];
  uint *apuStack_128 [4];
  long lStack_108;
  undefined8 ****ppppuStack_f0;
  code *pcStack_e8;
  undefined1 auStack_e0 [8];
  uint *apuStack_d8 [4];
  long lStack_b8;
  undefined8 ***pppuStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = *param_1;
  *param_1 = uVar1 | 0x4000;
  if ((uVar1 >> 0xe & 1) == 0) {
    uVar19 = param_2[1];
    uVar17 = *param_2;
    uVar11 = param_2[3];
    uVar13 = param_2[2];
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    *(undefined8 *)(param_1 + 0x56) = uVar19;
    *(undefined8 *)(param_1 + 0x54) = uVar17;
    *(undefined8 *)(param_1 + 0x5a) = uVar11;
    *(undefined8 *)(param_1 + 0x58) = uVar13;
    puVar7 = param_1;
  }
  else {
    uVar13 = *param_2;
    uVar11 = param_2[3];
    uVar19 = param_2[2];
    uVar17 = param_2[1];
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    puVar7 = *(uint **)(param_1 + 0x54);
    uStack_80 = *(undefined8 *)(param_1 + 0x5a);
    uStack_88 = *(undefined8 *)(param_1 + 0x58);
    uStack_90 = *(undefined8 *)(param_1 + 0x56);
    *(undefined8 *)(param_1 + 0x54) = uVar13;
    *(undefined8 *)(param_1 + 0x58) = uVar19;
    *(undefined8 *)(param_1 + 0x56) = uVar17;
    *(undefined8 *)(param_1 + 0x5a) = uVar11;
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar7) {
      do {
        lVar10 = *(long *)puVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar3) {
          *(long *)puVar7 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(puVar7 + 2))();
      }
    }
  }
  iVar8 = (int)param_2;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return param_1 + 0x54;
  }
  ___stack_chk_fail();
  if (iVar8 == 0) {
    __Unwind_Resume();
  }
  func_0x0040cf10();
  pcStack_98 = FUN_0034cd74;
  pppppuVar15 = (undefined8 *****)&pppuStack_a0;
  lStack_b8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar13 = *(undefined8 *)puVar7;
  puVar6 = *(uint **)(puVar7 + 0xc);
  pppuStack_a0 = (undefined8 ***)&stack0xfffffffffffffff0;
  FUN_0034b930(apuStack_d8,puVar7 + 2,*(undefined8 *)(puVar7 + 10));
  ppuVar9 = apuStack_d8;
  FUN_0034ce60(uVar13);
  puVar7 = apuStack_d8[0];
  if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_d8[0]) {
    do {
      lVar10 = *(long *)apuStack_d8[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_d8[0],0x10);
      if (bVar3) {
        *(long *)apuStack_d8[0] = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(apuStack_d8[0] + 2))();
      puVar7 = apuStack_d8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_b8) {
    return puVar7;
  }
  ___stack_chk_fail();
  if ((int)ppuVar9 != 0) {
    func_0x0040cf10();
    FUN_0034b418(apuStack_d8);
  }
  pcVar16 = FUN_0034ce38;
  puVar14 = puVar7;
  __Unwind_Resume();
  pcVar4 = auStack_e0;
  if ((ppuVar9 == (uint **)&MACH_HEADER.cputype) && (pcVar4 = auStack_e0, *puVar14 == 0x74736f68)) {
    pcStack_e8 = FUN_0034ce38;
    lStack_108 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar13 = *(undefined8 *)puVar6;
    puVar14 = puVar6 + 2;
    puVar7 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    ppppuStack_f0 = pppppuVar15;
    FUN_0034b930(apuStack_128,puVar14,*(undefined8 *)puVar7);
    ppuVar9 = apuStack_128;
    FUN_0034d078(uVar13);
    puVar7 = apuStack_128[0];
    if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_128[0]) {
      do {
        lVar10 = *(long *)apuStack_128[0];
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(apuStack_128[0],0x10);
        if (bVar3) {
          *(long *)apuStack_128[0] = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(apuStack_128[0] + 2))();
        puVar7 = apuStack_128[0];
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_108) {
      return puVar7;
    }
    ___stack_chk_fail();
    if ((int)ppuVar9 != 0) {
      func_0x0040cf10();
      FUN_0034b418(apuStack_128);
    }
    pcVar16 = FUN_0034d010;
    puVar14 = puVar7;
    __Unwind_Resume();
    pcVar4 = acStack_291 + 0x161;
    pppppuVar15 = &ppppuStack_f0;
  }
  if ((ppuVar9 == (uint **)((long)&MACH_HEADER.flags + 1)) &&
     (((*(long *)puVar14 == 0x746e696f70646e65 && *(long *)(puVar14 + 2) == 0x656d2d64616f6c2d) &&
      *(long *)(puVar14 + 4) == 0x69622d7363697274) && (char)puVar14[6] == 'n')) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar7;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    pppppuVar15 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar13 = *(undefined8 *)puVar6;
    puVar14 = puVar6 + 2;
    puVar7 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar14,*(undefined8 *)puVar7);
    ppuVar9 = (uint **)(pcVar4 + -0x48);
    FUN_0034d284(uVar13);
    puVar7 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar7) {
      do {
        lVar10 = *(long *)puVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar3) {
          *(long *)puVar7 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(puVar7 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar7;
    }
    ___stack_chk_fail();
    if ((int)ppuVar9 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar16 = FUN_0034d228;
    puVar14 = puVar7;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar9 == (uint **)((long)&MACH_HEADER.sizeofcmds + 1)) &&
     ((*(long *)puVar14 == 0x7265732d63707267 && *(long *)(puVar14 + 2) == 0x746174732d726576) &&
      *(long *)((long)puVar14 + 0xd) == 0x6e69622d73746174)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar7;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    pppppuVar15 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar13 = *(undefined8 *)puVar6;
    puVar14 = puVar6 + 2;
    puVar7 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar14,*(undefined8 *)puVar7);
    ppuVar9 = (uint **)(pcVar4 + -0x48);
    FUN_0034d478(uVar13);
    puVar7 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar7) {
      do {
        lVar10 = *(long *)puVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar3) {
          *(long *)puVar7 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(puVar7 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar7;
    }
    ___stack_chk_fail();
    if ((int)ppuVar9 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar16 = FUN_0034d430;
    puVar14 = puVar7;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar9 == (uint **)((long)&MACH_HEADER.filetype + 2)) &&
     (*(long *)puVar14 == 0x6172742d63707267 && *(long *)((long)puVar14 + 6) == 0x6e69622d65636172))
  {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar7;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    pppppuVar15 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar13 = *(undefined8 *)puVar6;
    puVar14 = puVar6 + 2;
    puVar7 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar14,*(undefined8 *)puVar7);
    ppuVar9 = (uint **)(pcVar4 + -0x48);
    FUN_0034d66c(uVar13);
    puVar7 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar7) {
      do {
        lVar10 = *(long *)puVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar3) {
          *(long *)puVar7 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(puVar7 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar7;
    }
    ___stack_chk_fail();
    if ((int)ppuVar9 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar16 = FUN_0034d624;
    puVar14 = puVar7;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar9 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)puVar14 == 0x6761742d63707267 && *(long *)((long)puVar14 + 5) == 0x6e69622d73676174))
  {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar7;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    pppppuVar15 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar13 = *(undefined8 *)puVar6;
    puVar14 = puVar6 + 2;
    puVar7 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar14,*(undefined8 *)puVar7);
    ppuVar9 = (uint **)(pcVar4 + -0x48);
    FUN_0034d874(uVar13);
    puVar7 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar7) {
      do {
        lVar10 = *(long *)puVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar3) {
          *(long *)puVar7 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(puVar7 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar7;
    }
    ___stack_chk_fail();
    if ((int)ppuVar9 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar16 = FUN_0034d818;
    puVar14 = puVar7;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar9 == (uint **)((long)&MACH_HEADER.ncmds + 3)) &&
     ((*(long *)puVar14 == 0x635f626c63707267 && *(long *)(puVar14 + 2) == 0x74735f746e65696c) &&
      *(long *)((long)puVar14 + 0xb) == 0x73746174735f746e)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar7;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    puVar14 = *(uint **)puVar6;
    puVar7 = puVar6 + 2;
    FUN_0034d9e0(puVar7,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar14 = *puVar14 | 0x200000;
    *(uint **)(puVar14 + 0x22) = puVar7;
    return puVar7;
  }
  if ((ppuVar9 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)puVar14 == 0x2d74736f632d626c && *(long *)((long)puVar14 + 3) == 0x6e69622d74736f63))
  {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar7;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    puVar14 = *(uint **)puVar6;
    FUN_0034daf8(pcVar4 + -0x40,puVar6 + 2,*(undefined8 *)(puVar6 + 10),
                 *(undefined8 *)(puVar6 + 0xc));
    uVar1 = *puVar14;
    puVar7 = puVar14 + 0x18;
    *puVar14 = uVar1 | 0x400000;
    if ((uVar1 >> 0x16 & 1) == 0) {
      puVar14[0x20] = 0;
      puVar14[0x21] = 0;
      puVar14[0x1a] = 0;
      puVar14[0x1b] = 0;
      puVar7[0] = 0;
      puVar7[1] = 0;
      puVar14[0x1e] = 0;
      puVar14[0x1f] = 0;
      puVar14[0x1c] = 0;
      puVar14[0x1d] = 0;
    }
    FUN_0034dbcc(puVar7,pcVar4 + -0x40);
    if (pcVar4[-0x21] < '\0') {
      puVar7 = *(uint **)(pcVar4 + -0x38);
      __ZdlPv(puVar7);
    }
    return puVar7;
  }
  if ((ppuVar9 == (uint **)&MACH_HEADER.cpusubtype) && (*(long *)puVar14 == 0x6e656b6f742d626c)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar7;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar13 = *(undefined8 *)puVar6;
    ppuVar9 = *(uint ***)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar6 + 2,*(undefined8 *)(puVar6 + 10));
    puVar14 = (uint *)(pcVar4 + -0x48);
    FUN_0034de58(uVar13);
    puVar7 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar7) {
      do {
        lVar10 = *(long *)puVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar3) {
          *(long *)puVar7 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(puVar7 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar7;
    }
    ___stack_chk_fail();
    if ((int)puVar14 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    puVar5 = puVar7;
    __Unwind_Resume();
    *(undefined8 *)(pcVar4 + -0x70) = unaff_x20;
    *(uint **)(pcVar4 + -0x68) = puVar7;
    *(char **)(pcVar4 + -0x60) = pcVar4 + -0x10;
    *(code **)(pcVar4 + -0x58) = FUN_0034de58;
    pppppuVar15 = (undefined8 *****)(pcVar4 + -0x60);
    *(undefined8 *)(pcVar4 + -0x78) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar1 = *puVar5;
    puVar7 = puVar5 + 0x10;
    *puVar5 = uVar1 | 0x800000;
    if ((uVar1 >> 0x17 & 1) == 0) {
      lVar20 = *(long *)(puVar14 + 2);
      lVar18 = *(long *)puVar14;
      lVar12 = *(long *)(puVar14 + 6);
      lVar10 = *(long *)(puVar14 + 4);
      puVar14[2] = 0;
      puVar14[3] = 0;
      puVar14[0] = 0;
      puVar14[1] = 0;
      puVar14[6] = 0;
      puVar14[7] = 0;
      puVar14[4] = 0;
      puVar14[5] = 0;
      *(long *)(puVar5 + 0x12) = lVar20;
      *(long *)puVar7 = lVar18;
      *(long *)(puVar5 + 0x16) = lVar12;
      *(long *)(puVar5 + 0x14) = lVar10;
      puVar6 = puVar5;
    }
    else {
      lVar10 = *(long *)puVar14;
      lVar12 = *(long *)(puVar14 + 6);
      *(long *)(pcVar4 + -0xd0) = lVar12;
      lVar20 = *(long *)(puVar14 + 4);
      lVar18 = *(long *)(puVar14 + 2);
      *(long *)(pcVar4 + -0xd8) = lVar20;
      *(long *)(pcVar4 + -0xe0) = lVar18;
      puVar14[2] = 0;
      puVar14[3] = 0;
      puVar14[0] = 0;
      puVar14[1] = 0;
      puVar14[6] = 0;
      puVar14[7] = 0;
      puVar14[4] = 0;
      puVar14[5] = 0;
      puVar6 = *(uint **)(puVar5 + 0x10);
      uVar13 = *(undefined8 *)(puVar5 + 0x16);
      uVar17 = *(undefined8 *)(puVar5 + 0x14);
      uVar11 = *(undefined8 *)(puVar5 + 0x12);
      *(long *)(puVar5 + 0x10) = lVar10;
      *(long *)(puVar5 + 0x14) = lVar20;
      *(long *)(puVar5 + 0x12) = lVar18;
      *(long *)(puVar5 + 0x16) = lVar12;
      *(undefined8 *)(pcVar4 + -0xd8) = uVar17;
      *(undefined8 *)(pcVar4 + -0xe0) = uVar11;
      *(undefined8 *)(pcVar4 + -0xd0) = uVar13;
      if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar6) {
        do {
          lVar10 = *(long *)puVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
          if (bVar3) {
            *(long *)puVar6 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(puVar6 + 2))();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x78)) {
      return puVar7;
    }
    ___stack_chk_fail();
    if ((int)puVar14 == 0) {
      __Unwind_Resume();
    }
    pcVar16 = FUN_0034df40;
    func_0x0040cf10();
    pcVar4 = pcVar4 + -0xe0;
  }
  *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
  *(uint **)(pcVar4 + -0x18) = puVar7;
  *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
  *(code **)(pcVar4 + -8) = pcVar16;
  *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  lVar10 = *(long *)puVar6;
  uVar13 = *(undefined8 *)(puVar6 + 2);
  uVar17 = *(undefined8 *)(puVar6 + 8);
  uVar11 = *(undefined8 *)(puVar6 + 6);
  *(undefined8 *)(pcVar4 + -0x48) = *(undefined8 *)(puVar6 + 4);
  *(undefined8 *)(pcVar4 + -0x50) = uVar13;
  *(undefined8 *)(pcVar4 + -0x38) = uVar17;
  *(undefined8 *)(pcVar4 + -0x40) = uVar11;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  FUN_003fe220(lVar10 + 0x1f0);
  puVar7 = *(uint **)(pcVar4 + -0x50);
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar7) {
    do {
      lVar10 = *(long *)puVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
      if (bVar3) {
        *(long *)puVar7 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(puVar7 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
    return puVar7;
  }
  ___stack_chk_fail();
  if ((int)puVar14 != 0) {
    func_0x0040cf10(puVar7);
    FUN_0034b418(pcVar4 + -0x50);
  }
  __Unwind_Resume(puVar7);
  *(char **)(pcVar4 + -0x60) = pcVar4 + -0x10;
  *(code **)(pcVar4 + -0x58) = FUN_0034e004;
  *(uint **)(pcVar4 + -0x70) = puVar14;
  *(uint ***)(pcVar4 + -0x68) = ppuVar9;
  FUN_0034e02c();
  return puVar7;
}



/* Entry: 0034cd74; end: 0034ce37;  */

uint * FUN_0034cd74(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  uint *puVar5;
  uint *puVar6;
  uint **ppuVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  uint *puVar11;
  uint *puVar12;
  undefined8 unaff_x20;
  undefined8 *****pppppuVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  char acStack_201 [361];
  uint *apuStack_98 [4];
  long lStack_78;
  undefined8 ****ppppuStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [8];
  uint *apuStack_48 [4];
  long lStack_28;
  
  pppppuVar13 = (undefined8 *****)&stack0xfffffffffffffff0;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar10 = *param_1;
  puVar6 = (uint *)param_1[6];
  FUN_0034b930(apuStack_48,param_1 + 1,param_1[5]);
  ppuVar7 = apuStack_48;
  FUN_0034ce60(uVar10);
  puVar12 = apuStack_48[0];
  if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_48[0]) {
    do {
      lVar8 = *(long *)apuStack_48[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_48[0],0x10);
      if (bVar3) {
        *(long *)apuStack_48[0] = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(apuStack_48[0] + 2))();
      puVar12 = apuStack_48[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return puVar12;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    func_0x0040cf10();
    FUN_0034b418(apuStack_48);
  }
  pcVar14 = FUN_0034ce38;
  puVar11 = puVar12;
  __Unwind_Resume();
  pcVar4 = auStack_50;
  if ((ppuVar7 == (uint **)&MACH_HEADER.cputype) && (pcVar4 = auStack_50, *puVar11 == 0x74736f68)) {
    pcStack_58 = FUN_0034ce38;
    lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar10 = *(undefined8 *)puVar6;
    puVar11 = puVar6 + 2;
    puVar12 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    ppppuStack_60 = pppppuVar13;
    FUN_0034b930(apuStack_98,puVar11,*(undefined8 *)puVar12);
    ppuVar7 = apuStack_98;
    FUN_0034d078(uVar10);
    puVar12 = apuStack_98[0];
    if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_98[0]) {
      do {
        lVar8 = *(long *)apuStack_98[0];
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(apuStack_98[0],0x10);
        if (bVar3) {
          *(long *)apuStack_98[0] = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(apuStack_98[0] + 2))();
        puVar12 = apuStack_98[0];
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
      return puVar12;
    }
    ___stack_chk_fail();
    if ((int)ppuVar7 != 0) {
      func_0x0040cf10();
      FUN_0034b418(apuStack_98);
    }
    pcVar14 = FUN_0034d010;
    puVar11 = puVar12;
    __Unwind_Resume();
    pcVar4 = acStack_201 + 0x161;
    pppppuVar13 = &ppppuStack_60;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.flags + 1)) &&
     (((*(long *)puVar11 == 0x746e696f70646e65 && *(long *)(puVar11 + 2) == 0x656d2d64616f6c2d) &&
      *(long *)(puVar11 + 4) == 0x69622d7363697274) && (char)puVar11[6] == 'n')) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    pppppuVar13 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar10 = *(undefined8 *)puVar6;
    puVar11 = puVar6 + 2;
    puVar12 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar11,*(undefined8 *)puVar12);
    ppuVar7 = (uint **)(pcVar4 + -0x48);
    FUN_0034d284(uVar10);
    puVar12 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar12) {
      do {
        lVar8 = *(long *)puVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar12,0x10);
        if (bVar3) {
          *(long *)puVar12 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar12 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar12;
    }
    ___stack_chk_fail();
    if ((int)ppuVar7 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar14 = FUN_0034d228;
    puVar11 = puVar12;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.sizeofcmds + 1)) &&
     ((*(long *)puVar11 == 0x7265732d63707267 && *(long *)(puVar11 + 2) == 0x746174732d726576) &&
      *(long *)((long)puVar11 + 0xd) == 0x6e69622d73746174)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    pppppuVar13 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar10 = *(undefined8 *)puVar6;
    puVar11 = puVar6 + 2;
    puVar12 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar11,*(undefined8 *)puVar12);
    ppuVar7 = (uint **)(pcVar4 + -0x48);
    FUN_0034d478(uVar10);
    puVar12 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar12) {
      do {
        lVar8 = *(long *)puVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar12,0x10);
        if (bVar3) {
          *(long *)puVar12 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar12 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar12;
    }
    ___stack_chk_fail();
    if ((int)ppuVar7 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar14 = FUN_0034d430;
    puVar11 = puVar12;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.filetype + 2)) &&
     (*(long *)puVar11 == 0x6172742d63707267 && *(long *)((long)puVar11 + 6) == 0x6e69622d65636172))
  {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    pppppuVar13 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar10 = *(undefined8 *)puVar6;
    puVar11 = puVar6 + 2;
    puVar12 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar11,*(undefined8 *)puVar12);
    ppuVar7 = (uint **)(pcVar4 + -0x48);
    FUN_0034d66c(uVar10);
    puVar12 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar12) {
      do {
        lVar8 = *(long *)puVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar12,0x10);
        if (bVar3) {
          *(long *)puVar12 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar12 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar12;
    }
    ___stack_chk_fail();
    if ((int)ppuVar7 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar14 = FUN_0034d624;
    puVar11 = puVar12;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)puVar11 == 0x6761742d63707267 && *(long *)((long)puVar11 + 5) == 0x6e69622d73676174))
  {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    pppppuVar13 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar10 = *(undefined8 *)puVar6;
    puVar11 = puVar6 + 2;
    puVar12 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar11,*(undefined8 *)puVar12);
    ppuVar7 = (uint **)(pcVar4 + -0x48);
    FUN_0034d874(uVar10);
    puVar12 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar12) {
      do {
        lVar8 = *(long *)puVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar12,0x10);
        if (bVar3) {
          *(long *)puVar12 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar12 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar12;
    }
    ___stack_chk_fail();
    if ((int)ppuVar7 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar14 = FUN_0034d818;
    puVar11 = puVar12;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.ncmds + 3)) &&
     ((*(long *)puVar11 == 0x635f626c63707267 && *(long *)(puVar11 + 2) == 0x74735f746e65696c) &&
      *(long *)((long)puVar11 + 0xb) == 0x73746174735f746e)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    puVar11 = *(uint **)puVar6;
    puVar12 = puVar6 + 2;
    FUN_0034d9e0(puVar12,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar11 = *puVar11 | 0x200000;
    *(uint **)(puVar11 + 0x22) = puVar12;
    return puVar12;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)puVar11 == 0x2d74736f632d626c && *(long *)((long)puVar11 + 3) == 0x6e69622d74736f63))
  {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    puVar12 = *(uint **)puVar6;
    FUN_0034daf8(pcVar4 + -0x40,puVar6 + 2,*(undefined8 *)(puVar6 + 10),
                 *(undefined8 *)(puVar6 + 0xc));
    uVar1 = *puVar12;
    puVar6 = puVar12 + 0x18;
    *puVar12 = uVar1 | 0x400000;
    if ((uVar1 >> 0x16 & 1) == 0) {
      puVar12[0x20] = 0;
      puVar12[0x21] = 0;
      puVar12[0x1a] = 0;
      puVar12[0x1b] = 0;
      puVar6[0] = 0;
      puVar6[1] = 0;
      puVar12[0x1e] = 0;
      puVar12[0x1f] = 0;
      puVar12[0x1c] = 0;
      puVar12[0x1d] = 0;
    }
    FUN_0034dbcc(puVar6,pcVar4 + -0x40);
    if (pcVar4[-0x21] < '\0') {
      puVar6 = *(uint **)(pcVar4 + -0x38);
      __ZdlPv(puVar6);
    }
    return puVar6;
  }
  if ((ppuVar7 == (uint **)&MACH_HEADER.cpusubtype) && (*(long *)puVar11 == 0x6e656b6f742d626c)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar10 = *(undefined8 *)puVar6;
    ppuVar7 = *(uint ***)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar6 + 2,*(undefined8 *)(puVar6 + 10));
    puVar11 = (uint *)(pcVar4 + -0x48);
    FUN_0034de58(uVar10);
    puVar6 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar6) {
      do {
        lVar8 = *(long *)puVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
        if (bVar3) {
          *(long *)puVar6 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar6 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar6;
    }
    ___stack_chk_fail();
    if ((int)puVar11 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    puVar5 = puVar6;
    __Unwind_Resume();
    *(undefined8 *)(pcVar4 + -0x70) = unaff_x20;
    *(uint **)(pcVar4 + -0x68) = puVar6;
    *(char **)(pcVar4 + -0x60) = pcVar4 + -0x10;
    *(code **)(pcVar4 + -0x58) = FUN_0034de58;
    pppppuVar13 = (undefined8 *****)(pcVar4 + -0x60);
    *(undefined8 *)(pcVar4 + -0x78) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar1 = *puVar5;
    puVar12 = puVar5 + 0x10;
    *puVar5 = uVar1 | 0x800000;
    if ((uVar1 >> 0x17 & 1) == 0) {
      lVar16 = *(long *)(puVar11 + 2);
      lVar15 = *(long *)puVar11;
      lVar9 = *(long *)(puVar11 + 6);
      lVar8 = *(long *)(puVar11 + 4);
      puVar11[2] = 0;
      puVar11[3] = 0;
      puVar11[0] = 0;
      puVar11[1] = 0;
      puVar11[6] = 0;
      puVar11[7] = 0;
      puVar11[4] = 0;
      puVar11[5] = 0;
      *(long *)(puVar5 + 0x12) = lVar16;
      *(long *)puVar12 = lVar15;
      *(long *)(puVar5 + 0x16) = lVar9;
      *(long *)(puVar5 + 0x14) = lVar8;
      puVar6 = puVar5;
    }
    else {
      lVar8 = *(long *)puVar11;
      lVar9 = *(long *)(puVar11 + 6);
      *(long *)(pcVar4 + -0xd0) = lVar9;
      lVar16 = *(long *)(puVar11 + 4);
      lVar15 = *(long *)(puVar11 + 2);
      *(long *)(pcVar4 + -0xd8) = lVar16;
      *(long *)(pcVar4 + -0xe0) = lVar15;
      puVar11[2] = 0;
      puVar11[3] = 0;
      puVar11[0] = 0;
      puVar11[1] = 0;
      puVar11[6] = 0;
      puVar11[7] = 0;
      puVar11[4] = 0;
      puVar11[5] = 0;
      puVar6 = *(uint **)(puVar5 + 0x10);
      uVar10 = *(undefined8 *)(puVar5 + 0x16);
      uVar18 = *(undefined8 *)(puVar5 + 0x14);
      uVar17 = *(undefined8 *)(puVar5 + 0x12);
      *(long *)(puVar5 + 0x10) = lVar8;
      *(long *)(puVar5 + 0x14) = lVar16;
      *(long *)(puVar5 + 0x12) = lVar15;
      *(long *)(puVar5 + 0x16) = lVar9;
      *(undefined8 *)(pcVar4 + -0xd8) = uVar18;
      *(undefined8 *)(pcVar4 + -0xe0) = uVar17;
      *(undefined8 *)(pcVar4 + -0xd0) = uVar10;
      if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar6) {
        do {
          lVar8 = *(long *)puVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
          if (bVar3) {
            *(long *)puVar6 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 + -1 == 0) {
          (**(code **)(puVar6 + 2))();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x78)) {
      return puVar12;
    }
    ___stack_chk_fail();
    if ((int)puVar11 == 0) {
      __Unwind_Resume();
    }
    pcVar14 = FUN_0034df40;
    func_0x0040cf10();
    pcVar4 = pcVar4 + -0xe0;
  }
  *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
  *(uint **)(pcVar4 + -0x18) = puVar12;
  *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
  *(code **)(pcVar4 + -8) = pcVar14;
  *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  lVar8 = *(long *)puVar6;
  uVar10 = *(undefined8 *)(puVar6 + 2);
  uVar18 = *(undefined8 *)(puVar6 + 8);
  uVar17 = *(undefined8 *)(puVar6 + 6);
  *(undefined8 *)(pcVar4 + -0x48) = *(undefined8 *)(puVar6 + 4);
  *(undefined8 *)(pcVar4 + -0x50) = uVar10;
  *(undefined8 *)(pcVar4 + -0x38) = uVar18;
  *(undefined8 *)(pcVar4 + -0x40) = uVar17;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  FUN_003fe220(lVar8 + 0x1f0);
  puVar6 = *(uint **)(pcVar4 + -0x50);
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar6) {
    do {
      lVar8 = *(long *)puVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar3) {
        *(long *)puVar6 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(puVar6 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
    return puVar6;
  }
  ___stack_chk_fail();
  if ((int)puVar11 != 0) {
    func_0x0040cf10(puVar6);
    FUN_0034b418(pcVar4 + -0x50);
  }
  __Unwind_Resume(puVar6);
  *(char **)(pcVar4 + -0x60) = pcVar4 + -0x10;
  *(code **)(pcVar4 + -0x58) = FUN_0034e004;
  *(uint **)(pcVar4 + -0x70) = puVar11;
  *(uint ***)(pcVar4 + -0x68) = ppuVar7;
  FUN_0034e02c();
  return puVar6;
}



/* Entry: 0034ce38; end: 0034ce5f;  */

uint * FUN_0034ce38(uint *param_1,uint **param_2,uint *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  uint *unaff_x19;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char acStack_1b1 [361];
  uint *apuStack_48 [4];
  long lStack_28;
  
  if ((param_2 == (uint **)&MACH_HEADER.cputype) && (*param_1 == 0x74736f68)) {
    unaff_x29 = &stack0xfffffffffffffff0;
    lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930(apuStack_48,puVar7,*(undefined8 *)puVar4);
    param_2 = apuStack_48;
    FUN_0034d078(uVar8);
    unaff_x19 = apuStack_48[0];
    if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_48[0]) {
      do {
        lVar5 = *(long *)apuStack_48[0];
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(apuStack_48[0],0x10);
        if (bVar3) {
          *(long *)apuStack_48[0] = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(apuStack_48[0] + 2))();
        unaff_x19 = apuStack_48[0];
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418(apuStack_48);
    }
    unaff_x30 = FUN_0034d010;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)(acStack_1b1 + 0x161);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.flags + 1)) &&
     (((*(long *)param_1 == 0x746e696f70646e65 && *(long *)(param_1 + 2) == 0x656d2d64616f6c2d) &&
      *(long *)(param_1 + 4) == 0x69622d7363697274) && (char)param_1[6] == 'n')) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d284(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d228;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.sizeofcmds + 1)) &&
     ((*(long *)param_1 == 0x7265732d63707267 && *(long *)(param_1 + 2) == 0x746174732d726576) &&
      *(long *)((long)param_1 + 0xd) == 0x6e69622d73746174)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d478(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d430;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 2)) &&
     (*(long *)param_1 == 0x6172742d63707267 && *(long *)((long)param_1 + 6) == 0x6e69622d65636172))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d66c(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d624;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)param_1 == 0x6761742d63707267 && *(long *)((long)param_1 + 5) == 0x6e69622d73676174))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d874(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d818;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.ncmds + 3)) &&
     ((*(long *)param_1 == 0x635f626c63707267 && *(long *)(param_1 + 2) == 0x74735f746e65696c) &&
      *(long *)((long)param_1 + 0xb) == 0x73746174735f746e)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034d9e0(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x200000;
    *(uint **)(puVar7 + 0x22) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)param_1 == 0x2d74736f632d626c && *(long *)((long)param_1 + 3) == 0x6e69622d74736f63))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    FUN_0034daf8((undefined1 *)((long)register0x00000008 + -0x40),param_3 + 2,
                 *(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    uVar1 = *puVar7;
    puVar4 = puVar7 + 0x18;
    *puVar7 = uVar1 | 0x400000;
    if ((uVar1 >> 0x16 & 1) == 0) {
      puVar7[0x20] = 0;
      puVar7[0x21] = 0;
      puVar7[0x1a] = 0;
      puVar7[0x1b] = 0;
      puVar4[0] = 0;
      puVar4[1] = 0;
      puVar7[0x1e] = 0;
      puVar7[0x1f] = 0;
      puVar7[0x1c] = 0;
      puVar7[0x1d] = 0;
    }
    FUN_0034dbcc(puVar4,(undefined1 *)((long)register0x00000008 + -0x40));
    if (*(char *)((long)register0x00000008 + -0x21) < '\0') {
      puVar4 = *(uint **)((long)register0x00000008 + -0x38);
      __ZdlPv(puVar4);
    }
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.cpusubtype) && (*(long *)param_1 == 0x6e656b6f742d626c)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    param_2 = *(uint ***)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),param_3 + 2,
                 *(undefined8 *)(param_3 + 10));
    param_1 = (uint *)((long)register0x00000008 + -0x48);
    FUN_0034de58(uVar8);
    puVar4 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
      do {
        lVar5 = *(long *)puVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar3) {
          *(long *)puVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(puVar4 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return puVar4;
    }
    ___stack_chk_fail();
    if ((int)param_1 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    puVar7 = puVar4;
    __Unwind_Resume();
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x68) = puVar4;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_0034de58;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x60);
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar1 = *puVar7;
    unaff_x19 = puVar7 + 0x10;
    *puVar7 = uVar1 | 0x800000;
    if ((uVar1 >> 0x17 & 1) == 0) {
      lVar10 = *(long *)(param_1 + 2);
      lVar9 = *(long *)param_1;
      lVar6 = *(long *)(param_1 + 6);
      lVar5 = *(long *)(param_1 + 4);
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      *(long *)(puVar7 + 0x12) = lVar10;
      *(long *)unaff_x19 = lVar9;
      *(long *)(puVar7 + 0x16) = lVar6;
      *(long *)(puVar7 + 0x14) = lVar5;
      param_3 = puVar7;
    }
    else {
      lVar5 = *(long *)param_1;
      lVar6 = *(long *)(param_1 + 6);
      *(long *)((long)register0x00000008 + -0xd0) = lVar6;
      lVar10 = *(long *)(param_1 + 4);
      lVar9 = *(long *)(param_1 + 2);
      *(long *)((long)register0x00000008 + -0xd8) = lVar10;
      *(long *)((long)register0x00000008 + -0xe0) = lVar9;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_3 = *(uint **)(puVar7 + 0x10);
      uVar8 = *(undefined8 *)(puVar7 + 0x16);
      uVar12 = *(undefined8 *)(puVar7 + 0x14);
      uVar11 = *(undefined8 *)(puVar7 + 0x12);
      *(long *)(puVar7 + 0x10) = lVar5;
      *(long *)(puVar7 + 0x14) = lVar10;
      *(long *)(puVar7 + 0x12) = lVar9;
      *(long *)(puVar7 + 0x16) = lVar6;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar12;
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar11;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar8;
      if ((uint *)((long)&MACH_HEADER.magic + 1) < param_3) {
        do {
          lVar5 = *(long *)param_3;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_3,0x10);
          if (bVar3) {
            *(long *)param_3 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 + -1 == 0) {
          (**(code **)(param_3 + 2))();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x78)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_1 == 0) {
      __Unwind_Resume();
    }
    unaff_x30 = FUN_0034df40;
    func_0x0040cf10();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xe0);
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  lVar5 = *(long *)param_3;
  uVar8 = *(undefined8 *)(param_3 + 2);
  uVar12 = *(undefined8 *)(param_3 + 8);
  uVar11 = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)((long)register0x00000008 + -0x50) = uVar8;
  *(undefined8 *)((long)register0x00000008 + -0x38) = uVar12;
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar11;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  FUN_003fe220(lVar5 + 0x1f0);
  puVar4 = *(uint **)((long)register0x00000008 + -0x50);
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
    do {
      lVar5 = *(long *)puVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar3) {
        *(long *)puVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(puVar4 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)param_1 != 0) {
    func_0x0040cf10(puVar4);
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x50));
  }
  __Unwind_Resume(puVar4);
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x58) = FUN_0034e004;
  *(uint **)((long)register0x00000008 + -0x70) = param_1;
  *(uint ***)((long)register0x00000008 + -0x68) = param_2;
  FUN_0034e02c();
  return puVar4;
}



/* Entry: 0034ce60; end: 0034cf4b;  */

uint * FUN_0034ce60(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  uint **ppuVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  uint *puVar14;
  undefined8 unaff_x20;
  undefined8 *****pppppuVar15;
  code *pcVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  char acStack_241 [281];
  uint *apuStack_128 [4];
  long lStack_108;
  undefined8 ****ppppuStack_f0;
  code *pcStack_e8;
  undefined1 auStack_e0 [8];
  uint *apuStack_d8 [4];
  long lStack_b8;
  undefined8 ***pppuStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = *param_1;
  *param_1 = uVar1 | 0x8000;
  if ((uVar1 >> 0xf & 1) == 0) {
    uVar19 = param_2[1];
    uVar17 = *param_2;
    uVar11 = param_2[3];
    uVar13 = param_2[2];
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    *(undefined8 *)(param_1 + 0x4e) = uVar19;
    *(undefined8 *)(param_1 + 0x4c) = uVar17;
    *(undefined8 *)(param_1 + 0x52) = uVar11;
    *(undefined8 *)(param_1 + 0x50) = uVar13;
    puVar7 = param_1;
  }
  else {
    uVar13 = *param_2;
    uVar11 = param_2[3];
    uVar19 = param_2[2];
    uVar17 = param_2[1];
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    puVar7 = *(uint **)(param_1 + 0x4c);
    uStack_80 = *(undefined8 *)(param_1 + 0x52);
    uStack_88 = *(undefined8 *)(param_1 + 0x50);
    uStack_90 = *(undefined8 *)(param_1 + 0x4e);
    *(undefined8 *)(param_1 + 0x4c) = uVar13;
    *(undefined8 *)(param_1 + 0x50) = uVar19;
    *(undefined8 *)(param_1 + 0x4e) = uVar17;
    *(undefined8 *)(param_1 + 0x52) = uVar11;
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar7) {
      do {
        lVar10 = *(long *)puVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar3) {
          *(long *)puVar7 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(puVar7 + 2))();
      }
    }
  }
  iVar8 = (int)param_2;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return param_1 + 0x4c;
  }
  ___stack_chk_fail();
  if (iVar8 == 0) {
    __Unwind_Resume();
  }
  func_0x0040cf10();
  pcStack_98 = FUN_0034cf4c;
  pppppuVar15 = (undefined8 *****)&pppuStack_a0;
  lStack_b8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar13 = *(undefined8 *)puVar7;
  puVar6 = *(uint **)(puVar7 + 0xc);
  pppuStack_a0 = (undefined8 ***)&stack0xfffffffffffffff0;
  FUN_0034b930(apuStack_d8,puVar7 + 2,*(undefined8 *)(puVar7 + 10));
  ppuVar9 = apuStack_d8;
  FUN_0034d078(uVar13);
  puVar7 = apuStack_d8[0];
  if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_d8[0]) {
    do {
      lVar10 = *(long *)apuStack_d8[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_d8[0],0x10);
      if (bVar3) {
        *(long *)apuStack_d8[0] = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(apuStack_d8[0] + 2))();
      puVar7 = apuStack_d8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_b8) {
    return puVar7;
  }
  ___stack_chk_fail();
  if ((int)ppuVar9 != 0) {
    func_0x0040cf10();
    FUN_0034b418(apuStack_d8);
  }
  pcVar16 = FUN_0034d010;
  puVar14 = puVar7;
  __Unwind_Resume();
  pcVar4 = auStack_e0;
  if ((ppuVar9 == (uint **)((long)&MACH_HEADER.flags + 1)) &&
     (pcVar4 = auStack_e0,
     ((*(long *)puVar14 == 0x746e696f70646e65 && *(long *)(puVar14 + 2) == 0x656d2d64616f6c2d) &&
     *(long *)(puVar14 + 4) == 0x69622d7363697274) && (char)puVar14[6] == 'n')) {
    pcStack_e8 = FUN_0034d010;
    lStack_108 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar13 = *(undefined8 *)puVar6;
    puVar14 = puVar6 + 2;
    puVar7 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    ppppuStack_f0 = pppppuVar15;
    FUN_0034b930(apuStack_128,puVar14,*(undefined8 *)puVar7);
    ppuVar9 = apuStack_128;
    FUN_0034d284(uVar13);
    puVar7 = apuStack_128[0];
    if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_128[0]) {
      do {
        lVar10 = *(long *)apuStack_128[0];
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(apuStack_128[0],0x10);
        if (bVar3) {
          *(long *)apuStack_128[0] = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(apuStack_128[0] + 2))();
        puVar7 = apuStack_128[0];
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_108) {
      return puVar7;
    }
    ___stack_chk_fail();
    if ((int)ppuVar9 != 0) {
      func_0x0040cf10();
      FUN_0034b418(apuStack_128);
    }
    pcVar16 = FUN_0034d228;
    puVar14 = puVar7;
    __Unwind_Resume();
    pcVar4 = acStack_241 + 0x111;
    pppppuVar15 = &ppppuStack_f0;
  }
  if ((ppuVar9 == (uint **)((long)&MACH_HEADER.sizeofcmds + 1)) &&
     ((*(long *)puVar14 == 0x7265732d63707267 && *(long *)(puVar14 + 2) == 0x746174732d726576) &&
      *(long *)((long)puVar14 + 0xd) == 0x6e69622d73746174)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar7;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    pppppuVar15 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar13 = *(undefined8 *)puVar6;
    puVar14 = puVar6 + 2;
    puVar7 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar14,*(undefined8 *)puVar7);
    ppuVar9 = (uint **)(pcVar4 + -0x48);
    FUN_0034d478(uVar13);
    puVar7 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar7) {
      do {
        lVar10 = *(long *)puVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar3) {
          *(long *)puVar7 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(puVar7 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar7;
    }
    ___stack_chk_fail();
    if ((int)ppuVar9 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar16 = FUN_0034d430;
    puVar14 = puVar7;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar9 == (uint **)((long)&MACH_HEADER.filetype + 2)) &&
     (*(long *)puVar14 == 0x6172742d63707267 && *(long *)((long)puVar14 + 6) == 0x6e69622d65636172))
  {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar7;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    pppppuVar15 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar13 = *(undefined8 *)puVar6;
    puVar14 = puVar6 + 2;
    puVar7 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar14,*(undefined8 *)puVar7);
    ppuVar9 = (uint **)(pcVar4 + -0x48);
    FUN_0034d66c(uVar13);
    puVar7 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar7) {
      do {
        lVar10 = *(long *)puVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar3) {
          *(long *)puVar7 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(puVar7 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar7;
    }
    ___stack_chk_fail();
    if ((int)ppuVar9 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar16 = FUN_0034d624;
    puVar14 = puVar7;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar9 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)puVar14 == 0x6761742d63707267 && *(long *)((long)puVar14 + 5) == 0x6e69622d73676174))
  {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar7;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    pppppuVar15 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar13 = *(undefined8 *)puVar6;
    puVar14 = puVar6 + 2;
    puVar7 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar14,*(undefined8 *)puVar7);
    ppuVar9 = (uint **)(pcVar4 + -0x48);
    FUN_0034d874(uVar13);
    puVar7 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar7) {
      do {
        lVar10 = *(long *)puVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar3) {
          *(long *)puVar7 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(puVar7 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar7;
    }
    ___stack_chk_fail();
    if ((int)ppuVar9 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar16 = FUN_0034d818;
    puVar14 = puVar7;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar9 == (uint **)((long)&MACH_HEADER.ncmds + 3)) &&
     ((*(long *)puVar14 == 0x635f626c63707267 && *(long *)(puVar14 + 2) == 0x74735f746e65696c) &&
      *(long *)((long)puVar14 + 0xb) == 0x73746174735f746e)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar7;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    puVar14 = *(uint **)puVar6;
    puVar7 = puVar6 + 2;
    FUN_0034d9e0(puVar7,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar14 = *puVar14 | 0x200000;
    *(uint **)(puVar14 + 0x22) = puVar7;
    return puVar7;
  }
  if ((ppuVar9 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)puVar14 == 0x2d74736f632d626c && *(long *)((long)puVar14 + 3) == 0x6e69622d74736f63))
  {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar7;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    puVar14 = *(uint **)puVar6;
    FUN_0034daf8(pcVar4 + -0x40,puVar6 + 2,*(undefined8 *)(puVar6 + 10),
                 *(undefined8 *)(puVar6 + 0xc));
    uVar1 = *puVar14;
    puVar7 = puVar14 + 0x18;
    *puVar14 = uVar1 | 0x400000;
    if ((uVar1 >> 0x16 & 1) == 0) {
      puVar14[0x20] = 0;
      puVar14[0x21] = 0;
      puVar14[0x1a] = 0;
      puVar14[0x1b] = 0;
      puVar7[0] = 0;
      puVar7[1] = 0;
      puVar14[0x1e] = 0;
      puVar14[0x1f] = 0;
      puVar14[0x1c] = 0;
      puVar14[0x1d] = 0;
    }
    FUN_0034dbcc(puVar7,pcVar4 + -0x40);
    if (pcVar4[-0x21] < '\0') {
      puVar7 = *(uint **)(pcVar4 + -0x38);
      __ZdlPv(puVar7);
    }
    return puVar7;
  }
  if ((ppuVar9 == (uint **)&MACH_HEADER.cpusubtype) && (*(long *)puVar14 == 0x6e656b6f742d626c)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar7;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar13 = *(undefined8 *)puVar6;
    ppuVar9 = *(uint ***)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar6 + 2,*(undefined8 *)(puVar6 + 10));
    puVar14 = (uint *)(pcVar4 + -0x48);
    FUN_0034de58(uVar13);
    puVar7 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar7) {
      do {
        lVar10 = *(long *)puVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar3) {
          *(long *)puVar7 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(puVar7 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar7;
    }
    ___stack_chk_fail();
    if ((int)puVar14 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    puVar5 = puVar7;
    __Unwind_Resume();
    *(undefined8 *)(pcVar4 + -0x70) = unaff_x20;
    *(uint **)(pcVar4 + -0x68) = puVar7;
    *(char **)(pcVar4 + -0x60) = pcVar4 + -0x10;
    *(code **)(pcVar4 + -0x58) = FUN_0034de58;
    pppppuVar15 = (undefined8 *****)(pcVar4 + -0x60);
    *(undefined8 *)(pcVar4 + -0x78) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar1 = *puVar5;
    puVar7 = puVar5 + 0x10;
    *puVar5 = uVar1 | 0x800000;
    if ((uVar1 >> 0x17 & 1) == 0) {
      lVar20 = *(long *)(puVar14 + 2);
      lVar18 = *(long *)puVar14;
      lVar12 = *(long *)(puVar14 + 6);
      lVar10 = *(long *)(puVar14 + 4);
      puVar14[2] = 0;
      puVar14[3] = 0;
      puVar14[0] = 0;
      puVar14[1] = 0;
      puVar14[6] = 0;
      puVar14[7] = 0;
      puVar14[4] = 0;
      puVar14[5] = 0;
      *(long *)(puVar5 + 0x12) = lVar20;
      *(long *)puVar7 = lVar18;
      *(long *)(puVar5 + 0x16) = lVar12;
      *(long *)(puVar5 + 0x14) = lVar10;
      puVar6 = puVar5;
    }
    else {
      lVar10 = *(long *)puVar14;
      lVar12 = *(long *)(puVar14 + 6);
      *(long *)(pcVar4 + -0xd0) = lVar12;
      lVar20 = *(long *)(puVar14 + 4);
      lVar18 = *(long *)(puVar14 + 2);
      *(long *)(pcVar4 + -0xd8) = lVar20;
      *(long *)(pcVar4 + -0xe0) = lVar18;
      puVar14[2] = 0;
      puVar14[3] = 0;
      puVar14[0] = 0;
      puVar14[1] = 0;
      puVar14[6] = 0;
      puVar14[7] = 0;
      puVar14[4] = 0;
      puVar14[5] = 0;
      puVar6 = *(uint **)(puVar5 + 0x10);
      uVar13 = *(undefined8 *)(puVar5 + 0x16);
      uVar17 = *(undefined8 *)(puVar5 + 0x14);
      uVar11 = *(undefined8 *)(puVar5 + 0x12);
      *(long *)(puVar5 + 0x10) = lVar10;
      *(long *)(puVar5 + 0x14) = lVar20;
      *(long *)(puVar5 + 0x12) = lVar18;
      *(long *)(puVar5 + 0x16) = lVar12;
      *(undefined8 *)(pcVar4 + -0xd8) = uVar17;
      *(undefined8 *)(pcVar4 + -0xe0) = uVar11;
      *(undefined8 *)(pcVar4 + -0xd0) = uVar13;
      if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar6) {
        do {
          lVar10 = *(long *)puVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
          if (bVar3) {
            *(long *)puVar6 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(puVar6 + 2))();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x78)) {
      return puVar7;
    }
    ___stack_chk_fail();
    if ((int)puVar14 == 0) {
      __Unwind_Resume();
    }
    pcVar16 = FUN_0034df40;
    func_0x0040cf10();
    pcVar4 = pcVar4 + -0xe0;
  }
  *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
  *(uint **)(pcVar4 + -0x18) = puVar7;
  *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
  *(code **)(pcVar4 + -8) = pcVar16;
  *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  lVar10 = *(long *)puVar6;
  uVar13 = *(undefined8 *)(puVar6 + 2);
  uVar17 = *(undefined8 *)(puVar6 + 8);
  uVar11 = *(undefined8 *)(puVar6 + 6);
  *(undefined8 *)(pcVar4 + -0x48) = *(undefined8 *)(puVar6 + 4);
  *(undefined8 *)(pcVar4 + -0x50) = uVar13;
  *(undefined8 *)(pcVar4 + -0x38) = uVar17;
  *(undefined8 *)(pcVar4 + -0x40) = uVar11;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  FUN_003fe220(lVar10 + 0x1f0);
  puVar7 = *(uint **)(pcVar4 + -0x50);
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar7) {
    do {
      lVar10 = *(long *)puVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
      if (bVar3) {
        *(long *)puVar7 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(puVar7 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
    return puVar7;
  }
  ___stack_chk_fail();
  if ((int)puVar14 != 0) {
    func_0x0040cf10(puVar7);
    FUN_0034b418(pcVar4 + -0x50);
  }
  __Unwind_Resume(puVar7);
  *(char **)(pcVar4 + -0x60) = pcVar4 + -0x10;
  *(code **)(pcVar4 + -0x58) = FUN_0034e004;
  *(uint **)(pcVar4 + -0x70) = puVar14;
  *(uint ***)(pcVar4 + -0x68) = ppuVar9;
  FUN_0034e02c();
  return puVar7;
}



/* Entry: 0034cf4c; end: 0034d00f;  */

uint * FUN_0034cf4c(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  uint *puVar5;
  uint *puVar6;
  uint **ppuVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  uint *puVar11;
  uint *puVar12;
  undefined8 unaff_x20;
  undefined8 *****pppppuVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  char acStack_1b1 [281];
  uint *apuStack_98 [4];
  long lStack_78;
  undefined8 ****ppppuStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [8];
  uint *apuStack_48 [4];
  long lStack_28;
  
  pppppuVar13 = (undefined8 *****)&stack0xfffffffffffffff0;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar10 = *param_1;
  puVar6 = (uint *)param_1[6];
  FUN_0034b930(apuStack_48,param_1 + 1,param_1[5]);
  ppuVar7 = apuStack_48;
  FUN_0034d078(uVar10);
  puVar12 = apuStack_48[0];
  if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_48[0]) {
    do {
      lVar8 = *(long *)apuStack_48[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_48[0],0x10);
      if (bVar3) {
        *(long *)apuStack_48[0] = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(apuStack_48[0] + 2))();
      puVar12 = apuStack_48[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return puVar12;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    func_0x0040cf10();
    FUN_0034b418(apuStack_48);
  }
  pcVar14 = FUN_0034d010;
  puVar11 = puVar12;
  __Unwind_Resume();
  pcVar4 = auStack_50;
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.flags + 1)) &&
     (pcVar4 = auStack_50,
     ((*(long *)puVar11 == 0x746e696f70646e65 && *(long *)(puVar11 + 2) == 0x656d2d64616f6c2d) &&
     *(long *)(puVar11 + 4) == 0x69622d7363697274) && (char)puVar11[6] == 'n')) {
    pcStack_58 = FUN_0034d010;
    lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar10 = *(undefined8 *)puVar6;
    puVar11 = puVar6 + 2;
    puVar12 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    ppppuStack_60 = pppppuVar13;
    FUN_0034b930(apuStack_98,puVar11,*(undefined8 *)puVar12);
    ppuVar7 = apuStack_98;
    FUN_0034d284(uVar10);
    puVar12 = apuStack_98[0];
    if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_98[0]) {
      do {
        lVar8 = *(long *)apuStack_98[0];
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(apuStack_98[0],0x10);
        if (bVar3) {
          *(long *)apuStack_98[0] = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(apuStack_98[0] + 2))();
        puVar12 = apuStack_98[0];
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
      return puVar12;
    }
    ___stack_chk_fail();
    if ((int)ppuVar7 != 0) {
      func_0x0040cf10();
      FUN_0034b418(apuStack_98);
    }
    pcVar14 = FUN_0034d228;
    puVar11 = puVar12;
    __Unwind_Resume();
    pcVar4 = acStack_1b1 + 0x111;
    pppppuVar13 = &ppppuStack_60;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.sizeofcmds + 1)) &&
     ((*(long *)puVar11 == 0x7265732d63707267 && *(long *)(puVar11 + 2) == 0x746174732d726576) &&
      *(long *)((long)puVar11 + 0xd) == 0x6e69622d73746174)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    pppppuVar13 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar10 = *(undefined8 *)puVar6;
    puVar11 = puVar6 + 2;
    puVar12 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar11,*(undefined8 *)puVar12);
    ppuVar7 = (uint **)(pcVar4 + -0x48);
    FUN_0034d478(uVar10);
    puVar12 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar12) {
      do {
        lVar8 = *(long *)puVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar12,0x10);
        if (bVar3) {
          *(long *)puVar12 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar12 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar12;
    }
    ___stack_chk_fail();
    if ((int)ppuVar7 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar14 = FUN_0034d430;
    puVar11 = puVar12;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.filetype + 2)) &&
     (*(long *)puVar11 == 0x6172742d63707267 && *(long *)((long)puVar11 + 6) == 0x6e69622d65636172))
  {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    pppppuVar13 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar10 = *(undefined8 *)puVar6;
    puVar11 = puVar6 + 2;
    puVar12 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar11,*(undefined8 *)puVar12);
    ppuVar7 = (uint **)(pcVar4 + -0x48);
    FUN_0034d66c(uVar10);
    puVar12 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar12) {
      do {
        lVar8 = *(long *)puVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar12,0x10);
        if (bVar3) {
          *(long *)puVar12 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar12 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar12;
    }
    ___stack_chk_fail();
    if ((int)ppuVar7 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar14 = FUN_0034d624;
    puVar11 = puVar12;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)puVar11 == 0x6761742d63707267 && *(long *)((long)puVar11 + 5) == 0x6e69622d73676174))
  {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    pppppuVar13 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar10 = *(undefined8 *)puVar6;
    puVar11 = puVar6 + 2;
    puVar12 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar11,*(undefined8 *)puVar12);
    ppuVar7 = (uint **)(pcVar4 + -0x48);
    FUN_0034d874(uVar10);
    puVar12 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar12) {
      do {
        lVar8 = *(long *)puVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar12,0x10);
        if (bVar3) {
          *(long *)puVar12 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar12 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar12;
    }
    ___stack_chk_fail();
    if ((int)ppuVar7 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar14 = FUN_0034d818;
    puVar11 = puVar12;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.ncmds + 3)) &&
     ((*(long *)puVar11 == 0x635f626c63707267 && *(long *)(puVar11 + 2) == 0x74735f746e65696c) &&
      *(long *)((long)puVar11 + 0xb) == 0x73746174735f746e)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    puVar11 = *(uint **)puVar6;
    puVar12 = puVar6 + 2;
    FUN_0034d9e0(puVar12,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar11 = *puVar11 | 0x200000;
    *(uint **)(puVar11 + 0x22) = puVar12;
    return puVar12;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)puVar11 == 0x2d74736f632d626c && *(long *)((long)puVar11 + 3) == 0x6e69622d74736f63))
  {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    puVar12 = *(uint **)puVar6;
    FUN_0034daf8(pcVar4 + -0x40,puVar6 + 2,*(undefined8 *)(puVar6 + 10),
                 *(undefined8 *)(puVar6 + 0xc));
    uVar1 = *puVar12;
    puVar6 = puVar12 + 0x18;
    *puVar12 = uVar1 | 0x400000;
    if ((uVar1 >> 0x16 & 1) == 0) {
      puVar12[0x20] = 0;
      puVar12[0x21] = 0;
      puVar12[0x1a] = 0;
      puVar12[0x1b] = 0;
      puVar6[0] = 0;
      puVar6[1] = 0;
      puVar12[0x1e] = 0;
      puVar12[0x1f] = 0;
      puVar12[0x1c] = 0;
      puVar12[0x1d] = 0;
    }
    FUN_0034dbcc(puVar6,pcVar4 + -0x40);
    if (pcVar4[-0x21] < '\0') {
      puVar6 = *(uint **)(pcVar4 + -0x38);
      __ZdlPv(puVar6);
    }
    return puVar6;
  }
  if ((ppuVar7 == (uint **)&MACH_HEADER.cpusubtype) && (*(long *)puVar11 == 0x6e656b6f742d626c)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar10 = *(undefined8 *)puVar6;
    ppuVar7 = *(uint ***)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar6 + 2,*(undefined8 *)(puVar6 + 10));
    puVar11 = (uint *)(pcVar4 + -0x48);
    FUN_0034de58(uVar10);
    puVar6 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar6) {
      do {
        lVar8 = *(long *)puVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
        if (bVar3) {
          *(long *)puVar6 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar6 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar6;
    }
    ___stack_chk_fail();
    if ((int)puVar11 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    puVar5 = puVar6;
    __Unwind_Resume();
    *(undefined8 *)(pcVar4 + -0x70) = unaff_x20;
    *(uint **)(pcVar4 + -0x68) = puVar6;
    *(char **)(pcVar4 + -0x60) = pcVar4 + -0x10;
    *(code **)(pcVar4 + -0x58) = FUN_0034de58;
    pppppuVar13 = (undefined8 *****)(pcVar4 + -0x60);
    *(undefined8 *)(pcVar4 + -0x78) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar1 = *puVar5;
    puVar12 = puVar5 + 0x10;
    *puVar5 = uVar1 | 0x800000;
    if ((uVar1 >> 0x17 & 1) == 0) {
      lVar16 = *(long *)(puVar11 + 2);
      lVar15 = *(long *)puVar11;
      lVar9 = *(long *)(puVar11 + 6);
      lVar8 = *(long *)(puVar11 + 4);
      puVar11[2] = 0;
      puVar11[3] = 0;
      puVar11[0] = 0;
      puVar11[1] = 0;
      puVar11[6] = 0;
      puVar11[7] = 0;
      puVar11[4] = 0;
      puVar11[5] = 0;
      *(long *)(puVar5 + 0x12) = lVar16;
      *(long *)puVar12 = lVar15;
      *(long *)(puVar5 + 0x16) = lVar9;
      *(long *)(puVar5 + 0x14) = lVar8;
      puVar6 = puVar5;
    }
    else {
      lVar8 = *(long *)puVar11;
      lVar9 = *(long *)(puVar11 + 6);
      *(long *)(pcVar4 + -0xd0) = lVar9;
      lVar16 = *(long *)(puVar11 + 4);
      lVar15 = *(long *)(puVar11 + 2);
      *(long *)(pcVar4 + -0xd8) = lVar16;
      *(long *)(pcVar4 + -0xe0) = lVar15;
      puVar11[2] = 0;
      puVar11[3] = 0;
      puVar11[0] = 0;
      puVar11[1] = 0;
      puVar11[6] = 0;
      puVar11[7] = 0;
      puVar11[4] = 0;
      puVar11[5] = 0;
      puVar6 = *(uint **)(puVar5 + 0x10);
      uVar10 = *(undefined8 *)(puVar5 + 0x16);
      uVar18 = *(undefined8 *)(puVar5 + 0x14);
      uVar17 = *(undefined8 *)(puVar5 + 0x12);
      *(long *)(puVar5 + 0x10) = lVar8;
      *(long *)(puVar5 + 0x14) = lVar16;
      *(long *)(puVar5 + 0x12) = lVar15;
      *(long *)(puVar5 + 0x16) = lVar9;
      *(undefined8 *)(pcVar4 + -0xd8) = uVar18;
      *(undefined8 *)(pcVar4 + -0xe0) = uVar17;
      *(undefined8 *)(pcVar4 + -0xd0) = uVar10;
      if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar6) {
        do {
          lVar8 = *(long *)puVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
          if (bVar3) {
            *(long *)puVar6 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 + -1 == 0) {
          (**(code **)(puVar6 + 2))();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x78)) {
      return puVar12;
    }
    ___stack_chk_fail();
    if ((int)puVar11 == 0) {
      __Unwind_Resume();
    }
    pcVar14 = FUN_0034df40;
    func_0x0040cf10();
    pcVar4 = pcVar4 + -0xe0;
  }
  *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
  *(uint **)(pcVar4 + -0x18) = puVar12;
  *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
  *(code **)(pcVar4 + -8) = pcVar14;
  *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  lVar8 = *(long *)puVar6;
  uVar10 = *(undefined8 *)(puVar6 + 2);
  uVar18 = *(undefined8 *)(puVar6 + 8);
  uVar17 = *(undefined8 *)(puVar6 + 6);
  *(undefined8 *)(pcVar4 + -0x48) = *(undefined8 *)(puVar6 + 4);
  *(undefined8 *)(pcVar4 + -0x50) = uVar10;
  *(undefined8 *)(pcVar4 + -0x38) = uVar18;
  *(undefined8 *)(pcVar4 + -0x40) = uVar17;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  FUN_003fe220(lVar8 + 0x1f0);
  puVar6 = *(uint **)(pcVar4 + -0x50);
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar6) {
    do {
      lVar8 = *(long *)puVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar3) {
        *(long *)puVar6 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(puVar6 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
    return puVar6;
  }
  ___stack_chk_fail();
  if ((int)puVar11 != 0) {
    func_0x0040cf10(puVar6);
    FUN_0034b418(pcVar4 + -0x50);
  }
  __Unwind_Resume(puVar6);
  *(char **)(pcVar4 + -0x60) = pcVar4 + -0x10;
  *(code **)(pcVar4 + -0x58) = FUN_0034e004;
  *(uint **)(pcVar4 + -0x70) = puVar11;
  *(uint ***)(pcVar4 + -0x68) = ppuVar7;
  FUN_0034e02c();
  return puVar6;
}



/* Entry: 0034d010; end: 0034d077;  */

uint * FUN_0034d010(uint *param_1,uint **param_2,uint *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  uint *unaff_x19;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char acStack_161 [281];
  uint *apuStack_48 [4];
  long lStack_28;
  
  if ((param_2 == (uint **)((long)&MACH_HEADER.flags + 1)) &&
     (((*(long *)param_1 == 0x746e696f70646e65 && *(long *)(param_1 + 2) == 0x656d2d64616f6c2d) &&
      *(long *)(param_1 + 4) == 0x69622d7363697274) && (char)param_1[6] == 'n')) {
    unaff_x29 = &stack0xfffffffffffffff0;
    lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930(apuStack_48,puVar7,*(undefined8 *)puVar4);
    param_2 = apuStack_48;
    FUN_0034d284(uVar8);
    unaff_x19 = apuStack_48[0];
    if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_48[0]) {
      do {
        lVar5 = *(long *)apuStack_48[0];
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(apuStack_48[0],0x10);
        if (bVar3) {
          *(long *)apuStack_48[0] = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(apuStack_48[0] + 2))();
        unaff_x19 = apuStack_48[0];
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418(apuStack_48);
    }
    unaff_x30 = FUN_0034d228;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)(acStack_161 + 0x111);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.sizeofcmds + 1)) &&
     ((*(long *)param_1 == 0x7265732d63707267 && *(long *)(param_1 + 2) == 0x746174732d726576) &&
      *(long *)((long)param_1 + 0xd) == 0x6e69622d73746174)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d478(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d430;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 2)) &&
     (*(long *)param_1 == 0x6172742d63707267 && *(long *)((long)param_1 + 6) == 0x6e69622d65636172))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d66c(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d624;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)param_1 == 0x6761742d63707267 && *(long *)((long)param_1 + 5) == 0x6e69622d73676174))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d874(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d818;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.ncmds + 3)) &&
     ((*(long *)param_1 == 0x635f626c63707267 && *(long *)(param_1 + 2) == 0x74735f746e65696c) &&
      *(long *)((long)param_1 + 0xb) == 0x73746174735f746e)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034d9e0(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x200000;
    *(uint **)(puVar7 + 0x22) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)param_1 == 0x2d74736f632d626c && *(long *)((long)param_1 + 3) == 0x6e69622d74736f63))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    FUN_0034daf8((undefined1 *)((long)register0x00000008 + -0x40),param_3 + 2,
                 *(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    uVar1 = *puVar7;
    puVar4 = puVar7 + 0x18;
    *puVar7 = uVar1 | 0x400000;
    if ((uVar1 >> 0x16 & 1) == 0) {
      puVar7[0x20] = 0;
      puVar7[0x21] = 0;
      puVar7[0x1a] = 0;
      puVar7[0x1b] = 0;
      puVar4[0] = 0;
      puVar4[1] = 0;
      puVar7[0x1e] = 0;
      puVar7[0x1f] = 0;
      puVar7[0x1c] = 0;
      puVar7[0x1d] = 0;
    }
    FUN_0034dbcc(puVar4,(undefined1 *)((long)register0x00000008 + -0x40));
    if (*(char *)((long)register0x00000008 + -0x21) < '\0') {
      puVar4 = *(uint **)((long)register0x00000008 + -0x38);
      __ZdlPv(puVar4);
    }
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.cpusubtype) && (*(long *)param_1 == 0x6e656b6f742d626c)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    param_2 = *(uint ***)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),param_3 + 2,
                 *(undefined8 *)(param_3 + 10));
    param_1 = (uint *)((long)register0x00000008 + -0x48);
    FUN_0034de58(uVar8);
    puVar4 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
      do {
        lVar5 = *(long *)puVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar3) {
          *(long *)puVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(puVar4 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return puVar4;
    }
    ___stack_chk_fail();
    if ((int)param_1 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    puVar7 = puVar4;
    __Unwind_Resume();
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x68) = puVar4;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_0034de58;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x60);
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar1 = *puVar7;
    unaff_x19 = puVar7 + 0x10;
    *puVar7 = uVar1 | 0x800000;
    if ((uVar1 >> 0x17 & 1) == 0) {
      lVar10 = *(long *)(param_1 + 2);
      lVar9 = *(long *)param_1;
      lVar6 = *(long *)(param_1 + 6);
      lVar5 = *(long *)(param_1 + 4);
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      *(long *)(puVar7 + 0x12) = lVar10;
      *(long *)unaff_x19 = lVar9;
      *(long *)(puVar7 + 0x16) = lVar6;
      *(long *)(puVar7 + 0x14) = lVar5;
      param_3 = puVar7;
    }
    else {
      lVar5 = *(long *)param_1;
      lVar6 = *(long *)(param_1 + 6);
      *(long *)((long)register0x00000008 + -0xd0) = lVar6;
      lVar10 = *(long *)(param_1 + 4);
      lVar9 = *(long *)(param_1 + 2);
      *(long *)((long)register0x00000008 + -0xd8) = lVar10;
      *(long *)((long)register0x00000008 + -0xe0) = lVar9;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_3 = *(uint **)(puVar7 + 0x10);
      uVar8 = *(undefined8 *)(puVar7 + 0x16);
      uVar12 = *(undefined8 *)(puVar7 + 0x14);
      uVar11 = *(undefined8 *)(puVar7 + 0x12);
      *(long *)(puVar7 + 0x10) = lVar5;
      *(long *)(puVar7 + 0x14) = lVar10;
      *(long *)(puVar7 + 0x12) = lVar9;
      *(long *)(puVar7 + 0x16) = lVar6;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar12;
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar11;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar8;
      if ((uint *)((long)&MACH_HEADER.magic + 1) < param_3) {
        do {
          lVar5 = *(long *)param_3;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_3,0x10);
          if (bVar3) {
            *(long *)param_3 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 + -1 == 0) {
          (**(code **)(param_3 + 2))();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x78)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_1 == 0) {
      __Unwind_Resume();
    }
    unaff_x30 = FUN_0034df40;
    func_0x0040cf10();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xe0);
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  lVar5 = *(long *)param_3;
  uVar8 = *(undefined8 *)(param_3 + 2);
  uVar12 = *(undefined8 *)(param_3 + 8);
  uVar11 = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)((long)register0x00000008 + -0x50) = uVar8;
  *(undefined8 *)((long)register0x00000008 + -0x38) = uVar12;
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar11;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  FUN_003fe220(lVar5 + 0x1f0);
  puVar4 = *(uint **)((long)register0x00000008 + -0x50);
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
    do {
      lVar5 = *(long *)puVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar3) {
        *(long *)puVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(puVar4 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)param_1 != 0) {
    func_0x0040cf10(puVar4);
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x50));
  }
  __Unwind_Resume(puVar4);
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x58) = FUN_0034e004;
  *(uint **)((long)register0x00000008 + -0x70) = param_1;
  *(uint ***)((long)register0x00000008 + -0x68) = param_2;
  FUN_0034e02c();
  return puVar4;
}



/* Entry: 0034d078; end: 0034d163;  */

uint * FUN_0034d078(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  uint **ppuVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  uint *puVar14;
  undefined8 unaff_x20;
  undefined8 *****pppppuVar15;
  code *pcVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  char acStack_1f1 [201];
  uint *apuStack_128 [4];
  long lStack_108;
  undefined8 ****ppppuStack_f0;
  code *pcStack_e8;
  undefined1 auStack_e0 [8];
  uint *apuStack_d8 [4];
  long lStack_b8;
  undefined8 ***pppuStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = *param_1;
  *param_1 = uVar1 | 0x10000;
  if ((uVar1 >> 0x10 & 1) == 0) {
    uVar19 = param_2[1];
    uVar17 = *param_2;
    uVar11 = param_2[3];
    uVar13 = param_2[2];
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    *(undefined8 *)(param_1 + 0x46) = uVar19;
    *(undefined8 *)(param_1 + 0x44) = uVar17;
    *(undefined8 *)(param_1 + 0x4a) = uVar11;
    *(undefined8 *)(param_1 + 0x48) = uVar13;
    puVar7 = param_1;
  }
  else {
    uVar13 = *param_2;
    uVar11 = param_2[3];
    uVar19 = param_2[2];
    uVar17 = param_2[1];
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    puVar7 = *(uint **)(param_1 + 0x44);
    uStack_80 = *(undefined8 *)(param_1 + 0x4a);
    uStack_88 = *(undefined8 *)(param_1 + 0x48);
    uStack_90 = *(undefined8 *)(param_1 + 0x46);
    *(undefined8 *)(param_1 + 0x44) = uVar13;
    *(undefined8 *)(param_1 + 0x48) = uVar19;
    *(undefined8 *)(param_1 + 0x46) = uVar17;
    *(undefined8 *)(param_1 + 0x4a) = uVar11;
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar7) {
      do {
        lVar10 = *(long *)puVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar3) {
          *(long *)puVar7 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(puVar7 + 2))();
      }
    }
  }
  iVar8 = (int)param_2;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return param_1 + 0x44;
  }
  ___stack_chk_fail();
  if (iVar8 == 0) {
    __Unwind_Resume();
  }
  func_0x0040cf10();
  pcStack_98 = FUN_0034d164;
  pppppuVar15 = (undefined8 *****)&pppuStack_a0;
  lStack_b8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar13 = *(undefined8 *)puVar7;
  puVar6 = *(uint **)(puVar7 + 0xc);
  pppuStack_a0 = (undefined8 ***)&stack0xfffffffffffffff0;
  FUN_0034b930(apuStack_d8,puVar7 + 2,*(undefined8 *)(puVar7 + 10));
  ppuVar9 = apuStack_d8;
  FUN_0034d284(uVar13);
  puVar7 = apuStack_d8[0];
  if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_d8[0]) {
    do {
      lVar10 = *(long *)apuStack_d8[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_d8[0],0x10);
      if (bVar3) {
        *(long *)apuStack_d8[0] = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(apuStack_d8[0] + 2))();
      puVar7 = apuStack_d8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_b8) {
    ___stack_chk_fail();
    if ((int)ppuVar9 != 0) {
      func_0x0040cf10();
      FUN_0034b418(apuStack_d8);
    }
    pcVar16 = FUN_0034d228;
    puVar14 = puVar7;
    __Unwind_Resume();
    pcVar4 = auStack_e0;
    if ((ppuVar9 == (uint **)((long)&MACH_HEADER.sizeofcmds + 1)) &&
       (pcVar4 = auStack_e0,
       (*(long *)puVar14 == 0x7265732d63707267 && *(long *)(puVar14 + 2) == 0x746174732d726576) &&
       *(long *)((long)puVar14 + 0xd) == 0x6e69622d73746174)) {
      pcStack_e8 = FUN_0034d228;
      lStack_108 = *(long *)PTR____stack_chk_guard_00999f88;
      uVar13 = *(undefined8 *)puVar6;
      puVar14 = puVar6 + 2;
      puVar7 = puVar6 + 10;
      puVar6 = *(uint **)(puVar6 + 0xc);
      ppppuStack_f0 = pppppuVar15;
      FUN_0034b930(apuStack_128,puVar14,*(undefined8 *)puVar7);
      ppuVar9 = apuStack_128;
      FUN_0034d478(uVar13);
      puVar7 = apuStack_128[0];
      if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_128[0]) {
        do {
          lVar10 = *(long *)apuStack_128[0];
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(apuStack_128[0],0x10);
          if (bVar3) {
            *(long *)apuStack_128[0] = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(apuStack_128[0] + 2))();
          puVar7 = apuStack_128[0];
        }
      }
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_108) {
        return puVar7;
      }
      ___stack_chk_fail();
      if ((int)ppuVar9 != 0) {
        func_0x0040cf10();
        FUN_0034b418(apuStack_128);
      }
      pcVar16 = FUN_0034d430;
      puVar14 = puVar7;
      __Unwind_Resume();
      pcVar4 = acStack_1f1 + 0xc1;
      pppppuVar15 = &ppppuStack_f0;
    }
    if ((ppuVar9 == (uint **)((long)&MACH_HEADER.filetype + 2)) &&
       (*(long *)puVar14 == 0x6172742d63707267 && *(long *)((long)puVar14 + 6) == 0x6e69622d65636172
       )) {
      *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
      *(uint **)(pcVar4 + -0x18) = puVar7;
      *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
      *(code **)(pcVar4 + -8) = pcVar16;
      pppppuVar15 = (undefined8 *****)(pcVar4 + -0x10);
      *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
      uVar13 = *(undefined8 *)puVar6;
      puVar14 = puVar6 + 2;
      puVar7 = puVar6 + 10;
      puVar6 = *(uint **)(puVar6 + 0xc);
      FUN_0034b930(pcVar4 + -0x48,puVar14,*(undefined8 *)puVar7);
      ppuVar9 = (uint **)(pcVar4 + -0x48);
      FUN_0034d66c(uVar13);
      puVar7 = *(uint **)(pcVar4 + -0x48);
      if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar7) {
        do {
          lVar10 = *(long *)puVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
          if (bVar3) {
            *(long *)puVar7 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(puVar7 + 2))();
        }
      }
      if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
        return puVar7;
      }
      ___stack_chk_fail();
      if ((int)ppuVar9 != 0) {
        func_0x0040cf10();
        FUN_0034b418(pcVar4 + -0x48);
      }
      pcVar16 = FUN_0034d624;
      puVar14 = puVar7;
      __Unwind_Resume();
      pcVar4 = pcVar4 + -0x50;
    }
    if ((ppuVar9 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
       (*(long *)puVar14 == 0x6761742d63707267 && *(long *)((long)puVar14 + 5) == 0x6e69622d73676174
       )) {
      *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
      *(uint **)(pcVar4 + -0x18) = puVar7;
      *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
      *(code **)(pcVar4 + -8) = pcVar16;
      pppppuVar15 = (undefined8 *****)(pcVar4 + -0x10);
      *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
      uVar13 = *(undefined8 *)puVar6;
      puVar14 = puVar6 + 2;
      puVar7 = puVar6 + 10;
      puVar6 = *(uint **)(puVar6 + 0xc);
      FUN_0034b930(pcVar4 + -0x48,puVar14,*(undefined8 *)puVar7);
      ppuVar9 = (uint **)(pcVar4 + -0x48);
      FUN_0034d874(uVar13);
      puVar7 = *(uint **)(pcVar4 + -0x48);
      if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar7) {
        do {
          lVar10 = *(long *)puVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
          if (bVar3) {
            *(long *)puVar7 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(puVar7 + 2))();
        }
      }
      if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
        return puVar7;
      }
      ___stack_chk_fail();
      if ((int)ppuVar9 != 0) {
        func_0x0040cf10();
        FUN_0034b418(pcVar4 + -0x48);
      }
      pcVar16 = FUN_0034d818;
      puVar14 = puVar7;
      __Unwind_Resume();
      pcVar4 = pcVar4 + -0x50;
    }
    if ((ppuVar9 == (uint **)((long)&MACH_HEADER.ncmds + 3)) &&
       ((*(long *)puVar14 == 0x635f626c63707267 && *(long *)(puVar14 + 2) == 0x74735f746e65696c) &&
        *(long *)((long)puVar14 + 0xb) == 0x73746174735f746e)) {
      *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
      *(uint **)(pcVar4 + -0x18) = puVar7;
      *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
      *(code **)(pcVar4 + -8) = pcVar16;
      puVar14 = *(uint **)puVar6;
      puVar7 = puVar6 + 2;
      FUN_0034d9e0(puVar7,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
      *puVar14 = *puVar14 | 0x200000;
      *(uint **)(puVar14 + 0x22) = puVar7;
      return puVar7;
    }
    if ((ppuVar9 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
       (*(long *)puVar14 == 0x2d74736f632d626c && *(long *)((long)puVar14 + 3) == 0x6e69622d74736f63
       )) {
      *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
      *(uint **)(pcVar4 + -0x18) = puVar7;
      *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
      *(code **)(pcVar4 + -8) = pcVar16;
      puVar14 = *(uint **)puVar6;
      FUN_0034daf8(pcVar4 + -0x40,puVar6 + 2,*(undefined8 *)(puVar6 + 10),
                   *(undefined8 *)(puVar6 + 0xc));
      uVar1 = *puVar14;
      puVar7 = puVar14 + 0x18;
      *puVar14 = uVar1 | 0x400000;
      if ((uVar1 >> 0x16 & 1) == 0) {
        puVar14[0x20] = 0;
        puVar14[0x21] = 0;
        puVar14[0x1a] = 0;
        puVar14[0x1b] = 0;
        puVar7[0] = 0;
        puVar7[1] = 0;
        puVar14[0x1e] = 0;
        puVar14[0x1f] = 0;
        puVar14[0x1c] = 0;
        puVar14[0x1d] = 0;
      }
      FUN_0034dbcc(puVar7,pcVar4 + -0x40);
      if (pcVar4[-0x21] < '\0') {
        puVar7 = *(uint **)(pcVar4 + -0x38);
        __ZdlPv(puVar7);
      }
      return puVar7;
    }
    if ((ppuVar9 == (uint **)&MACH_HEADER.cpusubtype) && (*(long *)puVar14 == 0x6e656b6f742d626c)) {
      *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
      *(uint **)(pcVar4 + -0x18) = puVar7;
      *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
      *(code **)(pcVar4 + -8) = pcVar16;
      *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
      uVar13 = *(undefined8 *)puVar6;
      ppuVar9 = *(uint ***)(puVar6 + 0xc);
      FUN_0034b930(pcVar4 + -0x48,puVar6 + 2,*(undefined8 *)(puVar6 + 10));
      puVar14 = (uint *)(pcVar4 + -0x48);
      FUN_0034de58(uVar13);
      puVar7 = *(uint **)(pcVar4 + -0x48);
      if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar7) {
        do {
          lVar10 = *(long *)puVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
          if (bVar3) {
            *(long *)puVar7 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(puVar7 + 2))();
        }
      }
      if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
        return puVar7;
      }
      ___stack_chk_fail();
      if ((int)puVar14 != 0) {
        func_0x0040cf10();
        FUN_0034b418(pcVar4 + -0x48);
      }
      puVar5 = puVar7;
      __Unwind_Resume();
      *(undefined8 *)(pcVar4 + -0x70) = unaff_x20;
      *(uint **)(pcVar4 + -0x68) = puVar7;
      *(char **)(pcVar4 + -0x60) = pcVar4 + -0x10;
      *(code **)(pcVar4 + -0x58) = FUN_0034de58;
      pppppuVar15 = (undefined8 *****)(pcVar4 + -0x60);
      *(undefined8 *)(pcVar4 + -0x78) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
      uVar1 = *puVar5;
      puVar7 = puVar5 + 0x10;
      *puVar5 = uVar1 | 0x800000;
      if ((uVar1 >> 0x17 & 1) == 0) {
        lVar20 = *(long *)(puVar14 + 2);
        lVar18 = *(long *)puVar14;
        lVar12 = *(long *)(puVar14 + 6);
        lVar10 = *(long *)(puVar14 + 4);
        puVar14[2] = 0;
        puVar14[3] = 0;
        puVar14[0] = 0;
        puVar14[1] = 0;
        puVar14[6] = 0;
        puVar14[7] = 0;
        puVar14[4] = 0;
        puVar14[5] = 0;
        *(long *)(puVar5 + 0x12) = lVar20;
        *(long *)puVar7 = lVar18;
        *(long *)(puVar5 + 0x16) = lVar12;
        *(long *)(puVar5 + 0x14) = lVar10;
        puVar6 = puVar5;
      }
      else {
        lVar10 = *(long *)puVar14;
        lVar12 = *(long *)(puVar14 + 6);
        *(long *)(pcVar4 + -0xd0) = lVar12;
        lVar20 = *(long *)(puVar14 + 4);
        lVar18 = *(long *)(puVar14 + 2);
        *(long *)(pcVar4 + -0xd8) = lVar20;
        *(long *)(pcVar4 + -0xe0) = lVar18;
        puVar14[2] = 0;
        puVar14[3] = 0;
        puVar14[0] = 0;
        puVar14[1] = 0;
        puVar14[6] = 0;
        puVar14[7] = 0;
        puVar14[4] = 0;
        puVar14[5] = 0;
        puVar6 = *(uint **)(puVar5 + 0x10);
        uVar13 = *(undefined8 *)(puVar5 + 0x16);
        uVar17 = *(undefined8 *)(puVar5 + 0x14);
        uVar11 = *(undefined8 *)(puVar5 + 0x12);
        *(long *)(puVar5 + 0x10) = lVar10;
        *(long *)(puVar5 + 0x14) = lVar20;
        *(long *)(puVar5 + 0x12) = lVar18;
        *(long *)(puVar5 + 0x16) = lVar12;
        *(undefined8 *)(pcVar4 + -0xd8) = uVar17;
        *(undefined8 *)(pcVar4 + -0xe0) = uVar11;
        *(undefined8 *)(pcVar4 + -0xd0) = uVar13;
        if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar6) {
          do {
            lVar10 = *(long *)puVar6;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
            if (bVar3) {
              *(long *)puVar6 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar10 + -1 == 0) {
            (**(code **)(puVar6 + 2))();
          }
        }
      }
      if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x78)) {
        return puVar7;
      }
      ___stack_chk_fail();
      if ((int)puVar14 == 0) {
        __Unwind_Resume();
      }
      pcVar16 = FUN_0034df40;
      func_0x0040cf10();
      pcVar4 = pcVar4 + -0xe0;
    }
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar7;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    lVar10 = *(long *)puVar6;
    uVar13 = *(undefined8 *)(puVar6 + 2);
    uVar17 = *(undefined8 *)(puVar6 + 8);
    uVar11 = *(undefined8 *)(puVar6 + 6);
    *(undefined8 *)(pcVar4 + -0x48) = *(undefined8 *)(puVar6 + 4);
    *(undefined8 *)(pcVar4 + -0x50) = uVar13;
    *(undefined8 *)(pcVar4 + -0x38) = uVar17;
    *(undefined8 *)(pcVar4 + -0x40) = uVar11;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    FUN_003fe220(lVar10 + 0x1f0);
    puVar7 = *(uint **)(pcVar4 + -0x50);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar7) {
      do {
        lVar10 = *(long *)puVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar3) {
          *(long *)puVar7 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(puVar7 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar7;
    }
    ___stack_chk_fail();
    if ((int)puVar14 != 0) {
      func_0x0040cf10(puVar7);
      FUN_0034b418(pcVar4 + -0x50);
    }
    __Unwind_Resume(puVar7);
    *(char **)(pcVar4 + -0x60) = pcVar4 + -0x10;
    *(code **)(pcVar4 + -0x58) = FUN_0034e004;
    *(uint **)(pcVar4 + -0x70) = puVar14;
    *(uint ***)(pcVar4 + -0x68) = ppuVar9;
    FUN_0034e02c();
    return puVar7;
  }
  return puVar7;
}



/* Entry: 0034d164; end: 0034d227;  */

uint * FUN_0034d164(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  uint *puVar5;
  uint *puVar6;
  uint **ppuVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  uint *puVar11;
  uint *puVar12;
  undefined8 unaff_x20;
  undefined8 *****pppppuVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  char acStack_161 [201];
  uint *apuStack_98 [4];
  long lStack_78;
  undefined8 ****ppppuStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [8];
  uint *apuStack_48 [4];
  long lStack_28;
  
  pppppuVar13 = (undefined8 *****)&stack0xfffffffffffffff0;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar10 = *param_1;
  puVar6 = (uint *)param_1[6];
  FUN_0034b930(apuStack_48,param_1 + 1,param_1[5]);
  ppuVar7 = apuStack_48;
  FUN_0034d284(uVar10);
  puVar12 = apuStack_48[0];
  if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_48[0]) {
    do {
      lVar8 = *(long *)apuStack_48[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_48[0],0x10);
      if (bVar3) {
        *(long *)apuStack_48[0] = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(apuStack_48[0] + 2))();
      puVar12 = apuStack_48[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return puVar12;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    func_0x0040cf10();
    FUN_0034b418(apuStack_48);
  }
  pcVar14 = FUN_0034d228;
  puVar11 = puVar12;
  __Unwind_Resume();
  pcVar4 = auStack_50;
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.sizeofcmds + 1)) &&
     (pcVar4 = auStack_50,
     (*(long *)puVar11 == 0x7265732d63707267 && *(long *)(puVar11 + 2) == 0x746174732d726576) &&
     *(long *)((long)puVar11 + 0xd) == 0x6e69622d73746174)) {
    pcStack_58 = FUN_0034d228;
    lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar10 = *(undefined8 *)puVar6;
    puVar11 = puVar6 + 2;
    puVar12 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    ppppuStack_60 = pppppuVar13;
    FUN_0034b930(apuStack_98,puVar11,*(undefined8 *)puVar12);
    ppuVar7 = apuStack_98;
    FUN_0034d478(uVar10);
    puVar12 = apuStack_98[0];
    if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_98[0]) {
      do {
        lVar8 = *(long *)apuStack_98[0];
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(apuStack_98[0],0x10);
        if (bVar3) {
          *(long *)apuStack_98[0] = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(apuStack_98[0] + 2))();
        puVar12 = apuStack_98[0];
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
      return puVar12;
    }
    ___stack_chk_fail();
    if ((int)ppuVar7 != 0) {
      func_0x0040cf10();
      FUN_0034b418(apuStack_98);
    }
    pcVar14 = FUN_0034d430;
    puVar11 = puVar12;
    __Unwind_Resume();
    pcVar4 = acStack_161 + 0xc1;
    pppppuVar13 = &ppppuStack_60;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.filetype + 2)) &&
     (*(long *)puVar11 == 0x6172742d63707267 && *(long *)((long)puVar11 + 6) == 0x6e69622d65636172))
  {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    pppppuVar13 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar10 = *(undefined8 *)puVar6;
    puVar11 = puVar6 + 2;
    puVar12 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar11,*(undefined8 *)puVar12);
    ppuVar7 = (uint **)(pcVar4 + -0x48);
    FUN_0034d66c(uVar10);
    puVar12 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar12) {
      do {
        lVar8 = *(long *)puVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar12,0x10);
        if (bVar3) {
          *(long *)puVar12 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar12 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar12;
    }
    ___stack_chk_fail();
    if ((int)ppuVar7 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar14 = FUN_0034d624;
    puVar11 = puVar12;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)puVar11 == 0x6761742d63707267 && *(long *)((long)puVar11 + 5) == 0x6e69622d73676174))
  {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    pppppuVar13 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar10 = *(undefined8 *)puVar6;
    puVar11 = puVar6 + 2;
    puVar12 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar11,*(undefined8 *)puVar12);
    ppuVar7 = (uint **)(pcVar4 + -0x48);
    FUN_0034d874(uVar10);
    puVar12 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar12) {
      do {
        lVar8 = *(long *)puVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar12,0x10);
        if (bVar3) {
          *(long *)puVar12 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar12 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar12;
    }
    ___stack_chk_fail();
    if ((int)ppuVar7 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar14 = FUN_0034d818;
    puVar11 = puVar12;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.ncmds + 3)) &&
     ((*(long *)puVar11 == 0x635f626c63707267 && *(long *)(puVar11 + 2) == 0x74735f746e65696c) &&
      *(long *)((long)puVar11 + 0xb) == 0x73746174735f746e)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    puVar11 = *(uint **)puVar6;
    puVar12 = puVar6 + 2;
    FUN_0034d9e0(puVar12,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar11 = *puVar11 | 0x200000;
    *(uint **)(puVar11 + 0x22) = puVar12;
    return puVar12;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)puVar11 == 0x2d74736f632d626c && *(long *)((long)puVar11 + 3) == 0x6e69622d74736f63))
  {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    puVar12 = *(uint **)puVar6;
    FUN_0034daf8(pcVar4 + -0x40,puVar6 + 2,*(undefined8 *)(puVar6 + 10),
                 *(undefined8 *)(puVar6 + 0xc));
    uVar1 = *puVar12;
    puVar6 = puVar12 + 0x18;
    *puVar12 = uVar1 | 0x400000;
    if ((uVar1 >> 0x16 & 1) == 0) {
      puVar12[0x20] = 0;
      puVar12[0x21] = 0;
      puVar12[0x1a] = 0;
      puVar12[0x1b] = 0;
      puVar6[0] = 0;
      puVar6[1] = 0;
      puVar12[0x1e] = 0;
      puVar12[0x1f] = 0;
      puVar12[0x1c] = 0;
      puVar12[0x1d] = 0;
    }
    FUN_0034dbcc(puVar6,pcVar4 + -0x40);
    if (pcVar4[-0x21] < '\0') {
      puVar6 = *(uint **)(pcVar4 + -0x38);
      __ZdlPv(puVar6);
    }
    return puVar6;
  }
  if ((ppuVar7 == (uint **)&MACH_HEADER.cpusubtype) && (*(long *)puVar11 == 0x6e656b6f742d626c)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar10 = *(undefined8 *)puVar6;
    ppuVar7 = *(uint ***)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar6 + 2,*(undefined8 *)(puVar6 + 10));
    puVar11 = (uint *)(pcVar4 + -0x48);
    FUN_0034de58(uVar10);
    puVar6 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar6) {
      do {
        lVar8 = *(long *)puVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
        if (bVar3) {
          *(long *)puVar6 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar6 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar6;
    }
    ___stack_chk_fail();
    if ((int)puVar11 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    puVar5 = puVar6;
    __Unwind_Resume();
    *(undefined8 *)(pcVar4 + -0x70) = unaff_x20;
    *(uint **)(pcVar4 + -0x68) = puVar6;
    *(char **)(pcVar4 + -0x60) = pcVar4 + -0x10;
    *(code **)(pcVar4 + -0x58) = FUN_0034de58;
    pppppuVar13 = (undefined8 *****)(pcVar4 + -0x60);
    *(undefined8 *)(pcVar4 + -0x78) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar1 = *puVar5;
    puVar12 = puVar5 + 0x10;
    *puVar5 = uVar1 | 0x800000;
    if ((uVar1 >> 0x17 & 1) == 0) {
      lVar16 = *(long *)(puVar11 + 2);
      lVar15 = *(long *)puVar11;
      lVar9 = *(long *)(puVar11 + 6);
      lVar8 = *(long *)(puVar11 + 4);
      puVar11[2] = 0;
      puVar11[3] = 0;
      puVar11[0] = 0;
      puVar11[1] = 0;
      puVar11[6] = 0;
      puVar11[7] = 0;
      puVar11[4] = 0;
      puVar11[5] = 0;
      *(long *)(puVar5 + 0x12) = lVar16;
      *(long *)puVar12 = lVar15;
      *(long *)(puVar5 + 0x16) = lVar9;
      *(long *)(puVar5 + 0x14) = lVar8;
      puVar6 = puVar5;
    }
    else {
      lVar8 = *(long *)puVar11;
      lVar9 = *(long *)(puVar11 + 6);
      *(long *)(pcVar4 + -0xd0) = lVar9;
      lVar16 = *(long *)(puVar11 + 4);
      lVar15 = *(long *)(puVar11 + 2);
      *(long *)(pcVar4 + -0xd8) = lVar16;
      *(long *)(pcVar4 + -0xe0) = lVar15;
      puVar11[2] = 0;
      puVar11[3] = 0;
      puVar11[0] = 0;
      puVar11[1] = 0;
      puVar11[6] = 0;
      puVar11[7] = 0;
      puVar11[4] = 0;
      puVar11[5] = 0;
      puVar6 = *(uint **)(puVar5 + 0x10);
      uVar10 = *(undefined8 *)(puVar5 + 0x16);
      uVar18 = *(undefined8 *)(puVar5 + 0x14);
      uVar17 = *(undefined8 *)(puVar5 + 0x12);
      *(long *)(puVar5 + 0x10) = lVar8;
      *(long *)(puVar5 + 0x14) = lVar16;
      *(long *)(puVar5 + 0x12) = lVar15;
      *(long *)(puVar5 + 0x16) = lVar9;
      *(undefined8 *)(pcVar4 + -0xd8) = uVar18;
      *(undefined8 *)(pcVar4 + -0xe0) = uVar17;
      *(undefined8 *)(pcVar4 + -0xd0) = uVar10;
      if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar6) {
        do {
          lVar8 = *(long *)puVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
          if (bVar3) {
            *(long *)puVar6 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 + -1 == 0) {
          (**(code **)(puVar6 + 2))();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x78)) {
      return puVar12;
    }
    ___stack_chk_fail();
    if ((int)puVar11 == 0) {
      __Unwind_Resume();
    }
    pcVar14 = FUN_0034df40;
    func_0x0040cf10();
    pcVar4 = pcVar4 + -0xe0;
  }
  *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
  *(uint **)(pcVar4 + -0x18) = puVar12;
  *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
  *(code **)(pcVar4 + -8) = pcVar14;
  *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  lVar8 = *(long *)puVar6;
  uVar10 = *(undefined8 *)(puVar6 + 2);
  uVar18 = *(undefined8 *)(puVar6 + 8);
  uVar17 = *(undefined8 *)(puVar6 + 6);
  *(undefined8 *)(pcVar4 + -0x48) = *(undefined8 *)(puVar6 + 4);
  *(undefined8 *)(pcVar4 + -0x50) = uVar10;
  *(undefined8 *)(pcVar4 + -0x38) = uVar18;
  *(undefined8 *)(pcVar4 + -0x40) = uVar17;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  FUN_003fe220(lVar8 + 0x1f0);
  puVar6 = *(uint **)(pcVar4 + -0x50);
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar6) {
    do {
      lVar8 = *(long *)puVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar3) {
        *(long *)puVar6 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(puVar6 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
    return puVar6;
  }
  ___stack_chk_fail();
  if ((int)puVar11 != 0) {
    func_0x0040cf10(puVar6);
    FUN_0034b418(pcVar4 + -0x50);
  }
  __Unwind_Resume(puVar6);
  *(char **)(pcVar4 + -0x60) = pcVar4 + -0x10;
  *(code **)(pcVar4 + -0x58) = FUN_0034e004;
  *(uint **)(pcVar4 + -0x70) = puVar11;
  *(uint ***)(pcVar4 + -0x68) = ppuVar7;
  FUN_0034e02c();
  return puVar6;
}



/* Entry: 0034d228; end: 0034d283;  */

uint * FUN_0034d228(uint *param_1,uint **param_2,uint *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  uint *unaff_x19;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char acStack_111 [201];
  uint *apuStack_48 [4];
  long lStack_28;
  
  if ((param_2 == (uint **)((long)&MACH_HEADER.sizeofcmds + 1)) &&
     ((*(long *)param_1 == 0x7265732d63707267 && *(long *)(param_1 + 2) == 0x746174732d726576) &&
      *(long *)((long)param_1 + 0xd) == 0x6e69622d73746174)) {
    unaff_x29 = &stack0xfffffffffffffff0;
    lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930(apuStack_48,puVar7,*(undefined8 *)puVar4);
    param_2 = apuStack_48;
    FUN_0034d478(uVar8);
    unaff_x19 = apuStack_48[0];
    if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_48[0]) {
      do {
        lVar5 = *(long *)apuStack_48[0];
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(apuStack_48[0],0x10);
        if (bVar3) {
          *(long *)apuStack_48[0] = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(apuStack_48[0] + 2))();
        unaff_x19 = apuStack_48[0];
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418(apuStack_48);
    }
    unaff_x30 = FUN_0034d430;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)(acStack_111 + 0xc1);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 2)) &&
     (*(long *)param_1 == 0x6172742d63707267 && *(long *)((long)param_1 + 6) == 0x6e69622d65636172))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d66c(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d624;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)param_1 == 0x6761742d63707267 && *(long *)((long)param_1 + 5) == 0x6e69622d73676174))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d874(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d818;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.ncmds + 3)) &&
     ((*(long *)param_1 == 0x635f626c63707267 && *(long *)(param_1 + 2) == 0x74735f746e65696c) &&
      *(long *)((long)param_1 + 0xb) == 0x73746174735f746e)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034d9e0(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x200000;
    *(uint **)(puVar7 + 0x22) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)param_1 == 0x2d74736f632d626c && *(long *)((long)param_1 + 3) == 0x6e69622d74736f63))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    FUN_0034daf8((undefined1 *)((long)register0x00000008 + -0x40),param_3 + 2,
                 *(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    uVar1 = *puVar7;
    puVar4 = puVar7 + 0x18;
    *puVar7 = uVar1 | 0x400000;
    if ((uVar1 >> 0x16 & 1) == 0) {
      puVar7[0x20] = 0;
      puVar7[0x21] = 0;
      puVar7[0x1a] = 0;
      puVar7[0x1b] = 0;
      puVar4[0] = 0;
      puVar4[1] = 0;
      puVar7[0x1e] = 0;
      puVar7[0x1f] = 0;
      puVar7[0x1c] = 0;
      puVar7[0x1d] = 0;
    }
    FUN_0034dbcc(puVar4,(undefined1 *)((long)register0x00000008 + -0x40));
    if (*(char *)((long)register0x00000008 + -0x21) < '\0') {
      puVar4 = *(uint **)((long)register0x00000008 + -0x38);
      __ZdlPv(puVar4);
    }
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.cpusubtype) && (*(long *)param_1 == 0x6e656b6f742d626c)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    param_2 = *(uint ***)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),param_3 + 2,
                 *(undefined8 *)(param_3 + 10));
    param_1 = (uint *)((long)register0x00000008 + -0x48);
    FUN_0034de58(uVar8);
    puVar4 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
      do {
        lVar5 = *(long *)puVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar3) {
          *(long *)puVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(puVar4 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return puVar4;
    }
    ___stack_chk_fail();
    if ((int)param_1 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    puVar7 = puVar4;
    __Unwind_Resume();
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x68) = puVar4;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_0034de58;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x60);
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar1 = *puVar7;
    unaff_x19 = puVar7 + 0x10;
    *puVar7 = uVar1 | 0x800000;
    if ((uVar1 >> 0x17 & 1) == 0) {
      lVar10 = *(long *)(param_1 + 2);
      lVar9 = *(long *)param_1;
      lVar6 = *(long *)(param_1 + 6);
      lVar5 = *(long *)(param_1 + 4);
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      *(long *)(puVar7 + 0x12) = lVar10;
      *(long *)unaff_x19 = lVar9;
      *(long *)(puVar7 + 0x16) = lVar6;
      *(long *)(puVar7 + 0x14) = lVar5;
      param_3 = puVar7;
    }
    else {
      lVar5 = *(long *)param_1;
      lVar6 = *(long *)(param_1 + 6);
      *(long *)((long)register0x00000008 + -0xd0) = lVar6;
      lVar10 = *(long *)(param_1 + 4);
      lVar9 = *(long *)(param_1 + 2);
      *(long *)((long)register0x00000008 + -0xd8) = lVar10;
      *(long *)((long)register0x00000008 + -0xe0) = lVar9;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_3 = *(uint **)(puVar7 + 0x10);
      uVar8 = *(undefined8 *)(puVar7 + 0x16);
      uVar12 = *(undefined8 *)(puVar7 + 0x14);
      uVar11 = *(undefined8 *)(puVar7 + 0x12);
      *(long *)(puVar7 + 0x10) = lVar5;
      *(long *)(puVar7 + 0x14) = lVar10;
      *(long *)(puVar7 + 0x12) = lVar9;
      *(long *)(puVar7 + 0x16) = lVar6;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar12;
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar11;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar8;
      if ((uint *)((long)&MACH_HEADER.magic + 1) < param_3) {
        do {
          lVar5 = *(long *)param_3;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_3,0x10);
          if (bVar3) {
            *(long *)param_3 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 + -1 == 0) {
          (**(code **)(param_3 + 2))();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x78)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_1 == 0) {
      __Unwind_Resume();
    }
    unaff_x30 = FUN_0034df40;
    func_0x0040cf10();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xe0);
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  lVar5 = *(long *)param_3;
  uVar8 = *(undefined8 *)(param_3 + 2);
  uVar12 = *(undefined8 *)(param_3 + 8);
  uVar11 = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)((long)register0x00000008 + -0x50) = uVar8;
  *(undefined8 *)((long)register0x00000008 + -0x38) = uVar12;
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar11;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  FUN_003fe220(lVar5 + 0x1f0);
  puVar4 = *(uint **)((long)register0x00000008 + -0x50);
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
    do {
      lVar5 = *(long *)puVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar3) {
        *(long *)puVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(puVar4 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)param_1 != 0) {
    func_0x0040cf10(puVar4);
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x50));
  }
  __Unwind_Resume(puVar4);
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x58) = FUN_0034e004;
  *(uint **)((long)register0x00000008 + -0x70) = param_1;
  *(uint ***)((long)register0x00000008 + -0x68) = param_2;
  FUN_0034e02c();
  return puVar4;
}



/* Entry: 0034d284; end: 0034d36b;  */

uint * FUN_0034d284(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  uint **ppuVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  uint *puVar14;
  undefined8 unaff_x20;
  undefined8 *****pppppuVar15;
  code *pcVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  char acStack_1a1 [121];
  uint *apuStack_128 [4];
  long lStack_108;
  undefined8 ****ppppuStack_f0;
  code *pcStack_e8;
  undefined1 auStack_e0 [8];
  uint *apuStack_d8 [4];
  long lStack_b8;
  undefined8 ***pppuStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = *param_1;
  *param_1 = uVar1 | 0x20000;
  if ((uVar1 >> 0x11 & 1) == 0) {
    uVar19 = param_2[1];
    uVar17 = *param_2;
    uVar11 = param_2[3];
    uVar13 = param_2[2];
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    *(undefined8 *)(param_1 + 0x3e) = uVar19;
    *(undefined8 *)(param_1 + 0x3c) = uVar17;
    *(undefined8 *)(param_1 + 0x42) = uVar11;
    *(undefined8 *)(param_1 + 0x40) = uVar13;
    puVar7 = param_1;
  }
  else {
    uVar13 = *param_2;
    uVar11 = param_2[3];
    uVar19 = param_2[2];
    uVar17 = param_2[1];
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    puVar7 = *(uint **)(param_1 + 0x3c);
    uStack_80 = *(undefined8 *)(param_1 + 0x42);
    uStack_88 = *(undefined8 *)(param_1 + 0x40);
    uStack_90 = *(undefined8 *)(param_1 + 0x3e);
    *(undefined8 *)(param_1 + 0x3c) = uVar13;
    *(undefined8 *)(param_1 + 0x40) = uVar19;
    *(undefined8 *)(param_1 + 0x3e) = uVar17;
    *(undefined8 *)(param_1 + 0x42) = uVar11;
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar7) {
      do {
        lVar10 = *(long *)puVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar3) {
          *(long *)puVar7 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(puVar7 + 2))();
      }
    }
  }
  iVar8 = (int)param_2;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return param_1 + 0x3c;
  }
  ___stack_chk_fail();
  if (iVar8 == 0) {
    __Unwind_Resume();
  }
  func_0x0040cf10();
  pcStack_98 = FUN_0034d36c;
  pppppuVar15 = (undefined8 *****)&pppuStack_a0;
  lStack_b8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar13 = *(undefined8 *)puVar7;
  puVar6 = *(uint **)(puVar7 + 0xc);
  pppuStack_a0 = (undefined8 ***)&stack0xfffffffffffffff0;
  FUN_0034b930(apuStack_d8,puVar7 + 2,*(undefined8 *)(puVar7 + 10));
  ppuVar9 = apuStack_d8;
  FUN_0034d478(uVar13);
  puVar7 = apuStack_d8[0];
  if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_d8[0]) {
    do {
      lVar10 = *(long *)apuStack_d8[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_d8[0],0x10);
      if (bVar3) {
        *(long *)apuStack_d8[0] = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(apuStack_d8[0] + 2))();
      puVar7 = apuStack_d8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_b8) {
    return puVar7;
  }
  ___stack_chk_fail();
  if ((int)ppuVar9 != 0) {
    func_0x0040cf10();
    FUN_0034b418(apuStack_d8);
  }
  pcVar16 = FUN_0034d430;
  puVar14 = puVar7;
  __Unwind_Resume();
  pcVar4 = auStack_e0;
  if ((ppuVar9 == (uint **)((long)&MACH_HEADER.filetype + 2)) &&
     (pcVar4 = auStack_e0,
     *(long *)puVar14 == 0x6172742d63707267 && *(long *)((long)puVar14 + 6) == 0x6e69622d65636172))
  {
    pcStack_e8 = FUN_0034d430;
    lStack_108 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar13 = *(undefined8 *)puVar6;
    puVar14 = puVar6 + 2;
    puVar7 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    ppppuStack_f0 = pppppuVar15;
    FUN_0034b930(apuStack_128,puVar14,*(undefined8 *)puVar7);
    ppuVar9 = apuStack_128;
    FUN_0034d66c(uVar13);
    puVar7 = apuStack_128[0];
    if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_128[0]) {
      do {
        lVar10 = *(long *)apuStack_128[0];
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(apuStack_128[0],0x10);
        if (bVar3) {
          *(long *)apuStack_128[0] = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(apuStack_128[0] + 2))();
        puVar7 = apuStack_128[0];
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_108) {
      return puVar7;
    }
    ___stack_chk_fail();
    if ((int)ppuVar9 != 0) {
      func_0x0040cf10();
      FUN_0034b418(apuStack_128);
    }
    pcVar16 = FUN_0034d624;
    puVar14 = puVar7;
    __Unwind_Resume();
    pcVar4 = acStack_1a1 + 0x71;
    pppppuVar15 = &ppppuStack_f0;
  }
  if ((ppuVar9 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)puVar14 == 0x6761742d63707267 && *(long *)((long)puVar14 + 5) == 0x6e69622d73676174))
  {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar7;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    pppppuVar15 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar13 = *(undefined8 *)puVar6;
    puVar14 = puVar6 + 2;
    puVar7 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar14,*(undefined8 *)puVar7);
    ppuVar9 = (uint **)(pcVar4 + -0x48);
    FUN_0034d874(uVar13);
    puVar7 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar7) {
      do {
        lVar10 = *(long *)puVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar3) {
          *(long *)puVar7 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(puVar7 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar7;
    }
    ___stack_chk_fail();
    if ((int)ppuVar9 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar16 = FUN_0034d818;
    puVar14 = puVar7;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar9 == (uint **)((long)&MACH_HEADER.ncmds + 3)) &&
     ((*(long *)puVar14 == 0x635f626c63707267 && *(long *)(puVar14 + 2) == 0x74735f746e65696c) &&
      *(long *)((long)puVar14 + 0xb) == 0x73746174735f746e)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar7;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    puVar14 = *(uint **)puVar6;
    puVar7 = puVar6 + 2;
    FUN_0034d9e0(puVar7,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar14 = *puVar14 | 0x200000;
    *(uint **)(puVar14 + 0x22) = puVar7;
    return puVar7;
  }
  if ((ppuVar9 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)puVar14 == 0x2d74736f632d626c && *(long *)((long)puVar14 + 3) == 0x6e69622d74736f63))
  {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar7;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    puVar14 = *(uint **)puVar6;
    FUN_0034daf8(pcVar4 + -0x40,puVar6 + 2,*(undefined8 *)(puVar6 + 10),
                 *(undefined8 *)(puVar6 + 0xc));
    uVar1 = *puVar14;
    puVar7 = puVar14 + 0x18;
    *puVar14 = uVar1 | 0x400000;
    if ((uVar1 >> 0x16 & 1) == 0) {
      puVar14[0x20] = 0;
      puVar14[0x21] = 0;
      puVar14[0x1a] = 0;
      puVar14[0x1b] = 0;
      puVar7[0] = 0;
      puVar7[1] = 0;
      puVar14[0x1e] = 0;
      puVar14[0x1f] = 0;
      puVar14[0x1c] = 0;
      puVar14[0x1d] = 0;
    }
    FUN_0034dbcc(puVar7,pcVar4 + -0x40);
    if (pcVar4[-0x21] < '\0') {
      puVar7 = *(uint **)(pcVar4 + -0x38);
      __ZdlPv(puVar7);
    }
    return puVar7;
  }
  if ((ppuVar9 == (uint **)&MACH_HEADER.cpusubtype) && (*(long *)puVar14 == 0x6e656b6f742d626c)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar7;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar13 = *(undefined8 *)puVar6;
    ppuVar9 = *(uint ***)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar6 + 2,*(undefined8 *)(puVar6 + 10));
    puVar14 = (uint *)(pcVar4 + -0x48);
    FUN_0034de58(uVar13);
    puVar7 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar7) {
      do {
        lVar10 = *(long *)puVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar3) {
          *(long *)puVar7 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(puVar7 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar7;
    }
    ___stack_chk_fail();
    if ((int)puVar14 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    puVar5 = puVar7;
    __Unwind_Resume();
    *(undefined8 *)(pcVar4 + -0x70) = unaff_x20;
    *(uint **)(pcVar4 + -0x68) = puVar7;
    *(char **)(pcVar4 + -0x60) = pcVar4 + -0x10;
    *(code **)(pcVar4 + -0x58) = FUN_0034de58;
    pppppuVar15 = (undefined8 *****)(pcVar4 + -0x60);
    *(undefined8 *)(pcVar4 + -0x78) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar1 = *puVar5;
    puVar7 = puVar5 + 0x10;
    *puVar5 = uVar1 | 0x800000;
    if ((uVar1 >> 0x17 & 1) == 0) {
      lVar20 = *(long *)(puVar14 + 2);
      lVar18 = *(long *)puVar14;
      lVar12 = *(long *)(puVar14 + 6);
      lVar10 = *(long *)(puVar14 + 4);
      puVar14[2] = 0;
      puVar14[3] = 0;
      puVar14[0] = 0;
      puVar14[1] = 0;
      puVar14[6] = 0;
      puVar14[7] = 0;
      puVar14[4] = 0;
      puVar14[5] = 0;
      *(long *)(puVar5 + 0x12) = lVar20;
      *(long *)puVar7 = lVar18;
      *(long *)(puVar5 + 0x16) = lVar12;
      *(long *)(puVar5 + 0x14) = lVar10;
      puVar6 = puVar5;
    }
    else {
      lVar10 = *(long *)puVar14;
      lVar12 = *(long *)(puVar14 + 6);
      *(long *)(pcVar4 + -0xd0) = lVar12;
      lVar20 = *(long *)(puVar14 + 4);
      lVar18 = *(long *)(puVar14 + 2);
      *(long *)(pcVar4 + -0xd8) = lVar20;
      *(long *)(pcVar4 + -0xe0) = lVar18;
      puVar14[2] = 0;
      puVar14[3] = 0;
      puVar14[0] = 0;
      puVar14[1] = 0;
      puVar14[6] = 0;
      puVar14[7] = 0;
      puVar14[4] = 0;
      puVar14[5] = 0;
      puVar6 = *(uint **)(puVar5 + 0x10);
      uVar13 = *(undefined8 *)(puVar5 + 0x16);
      uVar17 = *(undefined8 *)(puVar5 + 0x14);
      uVar11 = *(undefined8 *)(puVar5 + 0x12);
      *(long *)(puVar5 + 0x10) = lVar10;
      *(long *)(puVar5 + 0x14) = lVar20;
      *(long *)(puVar5 + 0x12) = lVar18;
      *(long *)(puVar5 + 0x16) = lVar12;
      *(undefined8 *)(pcVar4 + -0xd8) = uVar17;
      *(undefined8 *)(pcVar4 + -0xe0) = uVar11;
      *(undefined8 *)(pcVar4 + -0xd0) = uVar13;
      if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar6) {
        do {
          lVar10 = *(long *)puVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
          if (bVar3) {
            *(long *)puVar6 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(puVar6 + 2))();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x78)) {
      return puVar7;
    }
    ___stack_chk_fail();
    if ((int)puVar14 == 0) {
      __Unwind_Resume();
    }
    pcVar16 = FUN_0034df40;
    func_0x0040cf10();
    pcVar4 = pcVar4 + -0xe0;
  }
  *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
  *(uint **)(pcVar4 + -0x18) = puVar7;
  *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
  *(code **)(pcVar4 + -8) = pcVar16;
  *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  lVar10 = *(long *)puVar6;
  uVar13 = *(undefined8 *)(puVar6 + 2);
  uVar17 = *(undefined8 *)(puVar6 + 8);
  uVar11 = *(undefined8 *)(puVar6 + 6);
  *(undefined8 *)(pcVar4 + -0x48) = *(undefined8 *)(puVar6 + 4);
  *(undefined8 *)(pcVar4 + -0x50) = uVar13;
  *(undefined8 *)(pcVar4 + -0x38) = uVar17;
  *(undefined8 *)(pcVar4 + -0x40) = uVar11;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  FUN_003fe220(lVar10 + 0x1f0);
  puVar7 = *(uint **)(pcVar4 + -0x50);
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar7) {
    do {
      lVar10 = *(long *)puVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
      if (bVar3) {
        *(long *)puVar7 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(puVar7 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
    return puVar7;
  }
  ___stack_chk_fail();
  if ((int)puVar14 != 0) {
    func_0x0040cf10(puVar7);
    FUN_0034b418(pcVar4 + -0x50);
  }
  __Unwind_Resume(puVar7);
  *(char **)(pcVar4 + -0x60) = pcVar4 + -0x10;
  *(code **)(pcVar4 + -0x58) = FUN_0034e004;
  *(uint **)(pcVar4 + -0x70) = puVar14;
  *(uint ***)(pcVar4 + -0x68) = ppuVar9;
  FUN_0034e02c();
  return puVar7;
}



/* Entry: 0034d36c; end: 0034d42f;  */

uint * FUN_0034d36c(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  uint *puVar5;
  uint *puVar6;
  uint **ppuVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  uint *puVar11;
  uint *puVar12;
  undefined8 unaff_x20;
  undefined8 *****pppppuVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  char acStack_111 [121];
  uint *apuStack_98 [4];
  long lStack_78;
  undefined8 ****ppppuStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [8];
  uint *apuStack_48 [4];
  long lStack_28;
  
  pppppuVar13 = (undefined8 *****)&stack0xfffffffffffffff0;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar10 = *param_1;
  puVar6 = (uint *)param_1[6];
  FUN_0034b930(apuStack_48,param_1 + 1,param_1[5]);
  ppuVar7 = apuStack_48;
  FUN_0034d478(uVar10);
  puVar12 = apuStack_48[0];
  if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_48[0]) {
    do {
      lVar8 = *(long *)apuStack_48[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_48[0],0x10);
      if (bVar3) {
        *(long *)apuStack_48[0] = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(apuStack_48[0] + 2))();
      puVar12 = apuStack_48[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return puVar12;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    func_0x0040cf10();
    FUN_0034b418(apuStack_48);
  }
  pcVar14 = FUN_0034d430;
  puVar11 = puVar12;
  __Unwind_Resume();
  pcVar4 = auStack_50;
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.filetype + 2)) &&
     (pcVar4 = auStack_50,
     *(long *)puVar11 == 0x6172742d63707267 && *(long *)((long)puVar11 + 6) == 0x6e69622d65636172))
  {
    pcStack_58 = FUN_0034d430;
    lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar10 = *(undefined8 *)puVar6;
    puVar11 = puVar6 + 2;
    puVar12 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    ppppuStack_60 = pppppuVar13;
    FUN_0034b930(apuStack_98,puVar11,*(undefined8 *)puVar12);
    ppuVar7 = apuStack_98;
    FUN_0034d66c(uVar10);
    puVar12 = apuStack_98[0];
    if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_98[0]) {
      do {
        lVar8 = *(long *)apuStack_98[0];
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(apuStack_98[0],0x10);
        if (bVar3) {
          *(long *)apuStack_98[0] = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(apuStack_98[0] + 2))();
        puVar12 = apuStack_98[0];
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
      return puVar12;
    }
    ___stack_chk_fail();
    if ((int)ppuVar7 != 0) {
      func_0x0040cf10();
      FUN_0034b418(apuStack_98);
    }
    pcVar14 = FUN_0034d624;
    puVar11 = puVar12;
    __Unwind_Resume();
    pcVar4 = acStack_111 + 0x71;
    pppppuVar13 = &ppppuStack_60;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)puVar11 == 0x6761742d63707267 && *(long *)((long)puVar11 + 5) == 0x6e69622d73676174))
  {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    pppppuVar13 = (undefined8 *****)(pcVar4 + -0x10);
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar10 = *(undefined8 *)puVar6;
    puVar11 = puVar6 + 2;
    puVar12 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar11,*(undefined8 *)puVar12);
    ppuVar7 = (uint **)(pcVar4 + -0x48);
    FUN_0034d874(uVar10);
    puVar12 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar12) {
      do {
        lVar8 = *(long *)puVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar12,0x10);
        if (bVar3) {
          *(long *)puVar12 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar12 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar12;
    }
    ___stack_chk_fail();
    if ((int)ppuVar7 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    pcVar14 = FUN_0034d818;
    puVar11 = puVar12;
    __Unwind_Resume();
    pcVar4 = pcVar4 + -0x50;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.ncmds + 3)) &&
     ((*(long *)puVar11 == 0x635f626c63707267 && *(long *)(puVar11 + 2) == 0x74735f746e65696c) &&
      *(long *)((long)puVar11 + 0xb) == 0x73746174735f746e)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    puVar11 = *(uint **)puVar6;
    puVar12 = puVar6 + 2;
    FUN_0034d9e0(puVar12,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar11 = *puVar11 | 0x200000;
    *(uint **)(puVar11 + 0x22) = puVar12;
    return puVar12;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)puVar11 == 0x2d74736f632d626c && *(long *)((long)puVar11 + 3) == 0x6e69622d74736f63))
  {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    puVar12 = *(uint **)puVar6;
    FUN_0034daf8(pcVar4 + -0x40,puVar6 + 2,*(undefined8 *)(puVar6 + 10),
                 *(undefined8 *)(puVar6 + 0xc));
    uVar1 = *puVar12;
    puVar6 = puVar12 + 0x18;
    *puVar12 = uVar1 | 0x400000;
    if ((uVar1 >> 0x16 & 1) == 0) {
      puVar12[0x20] = 0;
      puVar12[0x21] = 0;
      puVar12[0x1a] = 0;
      puVar12[0x1b] = 0;
      puVar6[0] = 0;
      puVar6[1] = 0;
      puVar12[0x1e] = 0;
      puVar12[0x1f] = 0;
      puVar12[0x1c] = 0;
      puVar12[0x1d] = 0;
    }
    FUN_0034dbcc(puVar6,pcVar4 + -0x40);
    if (pcVar4[-0x21] < '\0') {
      puVar6 = *(uint **)(pcVar4 + -0x38);
      __ZdlPv(puVar6);
    }
    return puVar6;
  }
  if ((ppuVar7 == (uint **)&MACH_HEADER.cpusubtype) && (*(long *)puVar11 == 0x6e656b6f742d626c)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar10 = *(undefined8 *)puVar6;
    ppuVar7 = *(uint ***)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar6 + 2,*(undefined8 *)(puVar6 + 10));
    puVar11 = (uint *)(pcVar4 + -0x48);
    FUN_0034de58(uVar10);
    puVar6 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar6) {
      do {
        lVar8 = *(long *)puVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
        if (bVar3) {
          *(long *)puVar6 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar6 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar6;
    }
    ___stack_chk_fail();
    if ((int)puVar11 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    puVar5 = puVar6;
    __Unwind_Resume();
    *(undefined8 *)(pcVar4 + -0x70) = unaff_x20;
    *(uint **)(pcVar4 + -0x68) = puVar6;
    *(char **)(pcVar4 + -0x60) = pcVar4 + -0x10;
    *(code **)(pcVar4 + -0x58) = FUN_0034de58;
    pppppuVar13 = (undefined8 *****)(pcVar4 + -0x60);
    *(undefined8 *)(pcVar4 + -0x78) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar1 = *puVar5;
    puVar12 = puVar5 + 0x10;
    *puVar5 = uVar1 | 0x800000;
    if ((uVar1 >> 0x17 & 1) == 0) {
      lVar16 = *(long *)(puVar11 + 2);
      lVar15 = *(long *)puVar11;
      lVar9 = *(long *)(puVar11 + 6);
      lVar8 = *(long *)(puVar11 + 4);
      puVar11[2] = 0;
      puVar11[3] = 0;
      puVar11[0] = 0;
      puVar11[1] = 0;
      puVar11[6] = 0;
      puVar11[7] = 0;
      puVar11[4] = 0;
      puVar11[5] = 0;
      *(long *)(puVar5 + 0x12) = lVar16;
      *(long *)puVar12 = lVar15;
      *(long *)(puVar5 + 0x16) = lVar9;
      *(long *)(puVar5 + 0x14) = lVar8;
      puVar6 = puVar5;
    }
    else {
      lVar8 = *(long *)puVar11;
      lVar9 = *(long *)(puVar11 + 6);
      *(long *)(pcVar4 + -0xd0) = lVar9;
      lVar16 = *(long *)(puVar11 + 4);
      lVar15 = *(long *)(puVar11 + 2);
      *(long *)(pcVar4 + -0xd8) = lVar16;
      *(long *)(pcVar4 + -0xe0) = lVar15;
      puVar11[2] = 0;
      puVar11[3] = 0;
      puVar11[0] = 0;
      puVar11[1] = 0;
      puVar11[6] = 0;
      puVar11[7] = 0;
      puVar11[4] = 0;
      puVar11[5] = 0;
      puVar6 = *(uint **)(puVar5 + 0x10);
      uVar10 = *(undefined8 *)(puVar5 + 0x16);
      uVar18 = *(undefined8 *)(puVar5 + 0x14);
      uVar17 = *(undefined8 *)(puVar5 + 0x12);
      *(long *)(puVar5 + 0x10) = lVar8;
      *(long *)(puVar5 + 0x14) = lVar16;
      *(long *)(puVar5 + 0x12) = lVar15;
      *(long *)(puVar5 + 0x16) = lVar9;
      *(undefined8 *)(pcVar4 + -0xd8) = uVar18;
      *(undefined8 *)(pcVar4 + -0xe0) = uVar17;
      *(undefined8 *)(pcVar4 + -0xd0) = uVar10;
      if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar6) {
        do {
          lVar8 = *(long *)puVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
          if (bVar3) {
            *(long *)puVar6 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 + -1 == 0) {
          (**(code **)(puVar6 + 2))();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x78)) {
      return puVar12;
    }
    ___stack_chk_fail();
    if ((int)puVar11 == 0) {
      __Unwind_Resume();
    }
    pcVar14 = FUN_0034df40;
    func_0x0040cf10();
    pcVar4 = pcVar4 + -0xe0;
  }
  *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
  *(uint **)(pcVar4 + -0x18) = puVar12;
  *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
  *(code **)(pcVar4 + -8) = pcVar14;
  *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  lVar8 = *(long *)puVar6;
  uVar10 = *(undefined8 *)(puVar6 + 2);
  uVar18 = *(undefined8 *)(puVar6 + 8);
  uVar17 = *(undefined8 *)(puVar6 + 6);
  *(undefined8 *)(pcVar4 + -0x48) = *(undefined8 *)(puVar6 + 4);
  *(undefined8 *)(pcVar4 + -0x50) = uVar10;
  *(undefined8 *)(pcVar4 + -0x38) = uVar18;
  *(undefined8 *)(pcVar4 + -0x40) = uVar17;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  FUN_003fe220(lVar8 + 0x1f0);
  puVar6 = *(uint **)(pcVar4 + -0x50);
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar6) {
    do {
      lVar8 = *(long *)puVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar3) {
        *(long *)puVar6 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(puVar6 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
    return puVar6;
  }
  ___stack_chk_fail();
  if ((int)puVar11 != 0) {
    func_0x0040cf10(puVar6);
    FUN_0034b418(pcVar4 + -0x50);
  }
  __Unwind_Resume(puVar6);
  *(char **)(pcVar4 + -0x60) = pcVar4 + -0x10;
  *(code **)(pcVar4 + -0x58) = FUN_0034e004;
  *(uint **)(pcVar4 + -0x70) = puVar11;
  *(uint ***)(pcVar4 + -0x68) = ppuVar7;
  FUN_0034e02c();
  return puVar6;
}



/* Entry: 0034d430; end: 0034d477;  */

uint * FUN_0034d430(uint *param_1,uint **param_2,uint *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  uint *unaff_x19;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char acStack_c1 [121];
  uint *apuStack_48 [4];
  long lStack_28;
  
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 2)) &&
     (*(long *)param_1 == 0x6172742d63707267 && *(long *)((long)param_1 + 6) == 0x6e69622d65636172))
  {
    unaff_x29 = &stack0xfffffffffffffff0;
    lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930(apuStack_48,puVar7,*(undefined8 *)puVar4);
    param_2 = apuStack_48;
    FUN_0034d66c(uVar8);
    unaff_x19 = apuStack_48[0];
    if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_48[0]) {
      do {
        lVar5 = *(long *)apuStack_48[0];
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(apuStack_48[0],0x10);
        if (bVar3) {
          *(long *)apuStack_48[0] = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(apuStack_48[0] + 2))();
        unaff_x19 = apuStack_48[0];
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418(apuStack_48);
    }
    unaff_x30 = FUN_0034d624;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)(acStack_c1 + 0x71);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)param_1 == 0x6761742d63707267 && *(long *)((long)param_1 + 5) == 0x6e69622d73676174))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),puVar7,*(undefined8 *)puVar4);
    param_2 = (uint **)((long)register0x00000008 + -0x48);
    FUN_0034d874(uVar8);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < unaff_x19) {
      do {
        lVar5 = *(long *)unaff_x19;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
        if (bVar3) {
          *(long *)unaff_x19 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(unaff_x19 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    unaff_x30 = FUN_0034d818;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.ncmds + 3)) &&
     ((*(long *)param_1 == 0x635f626c63707267 && *(long *)(param_1 + 2) == 0x74735f746e65696c) &&
      *(long *)((long)param_1 + 0xb) == 0x73746174735f746e)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034d9e0(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x200000;
    *(uint **)(puVar7 + 0x22) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)param_1 == 0x2d74736f632d626c && *(long *)((long)param_1 + 3) == 0x6e69622d74736f63))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    FUN_0034daf8((undefined1 *)((long)register0x00000008 + -0x40),param_3 + 2,
                 *(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    uVar1 = *puVar7;
    puVar4 = puVar7 + 0x18;
    *puVar7 = uVar1 | 0x400000;
    if ((uVar1 >> 0x16 & 1) == 0) {
      puVar7[0x20] = 0;
      puVar7[0x21] = 0;
      puVar7[0x1a] = 0;
      puVar7[0x1b] = 0;
      puVar4[0] = 0;
      puVar4[1] = 0;
      puVar7[0x1e] = 0;
      puVar7[0x1f] = 0;
      puVar7[0x1c] = 0;
      puVar7[0x1d] = 0;
    }
    FUN_0034dbcc(puVar4,(undefined1 *)((long)register0x00000008 + -0x40));
    if (*(char *)((long)register0x00000008 + -0x21) < '\0') {
      puVar4 = *(uint **)((long)register0x00000008 + -0x38);
      __ZdlPv(puVar4);
    }
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.cpusubtype) && (*(long *)param_1 == 0x6e656b6f742d626c)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    param_2 = *(uint ***)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),param_3 + 2,
                 *(undefined8 *)(param_3 + 10));
    param_1 = (uint *)((long)register0x00000008 + -0x48);
    FUN_0034de58(uVar8);
    puVar4 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
      do {
        lVar5 = *(long *)puVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar3) {
          *(long *)puVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(puVar4 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return puVar4;
    }
    ___stack_chk_fail();
    if ((int)param_1 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    puVar7 = puVar4;
    __Unwind_Resume();
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x68) = puVar4;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_0034de58;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x60);
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar1 = *puVar7;
    unaff_x19 = puVar7 + 0x10;
    *puVar7 = uVar1 | 0x800000;
    if ((uVar1 >> 0x17 & 1) == 0) {
      lVar10 = *(long *)(param_1 + 2);
      lVar9 = *(long *)param_1;
      lVar6 = *(long *)(param_1 + 6);
      lVar5 = *(long *)(param_1 + 4);
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      *(long *)(puVar7 + 0x12) = lVar10;
      *(long *)unaff_x19 = lVar9;
      *(long *)(puVar7 + 0x16) = lVar6;
      *(long *)(puVar7 + 0x14) = lVar5;
      param_3 = puVar7;
    }
    else {
      lVar5 = *(long *)param_1;
      lVar6 = *(long *)(param_1 + 6);
      *(long *)((long)register0x00000008 + -0xd0) = lVar6;
      lVar10 = *(long *)(param_1 + 4);
      lVar9 = *(long *)(param_1 + 2);
      *(long *)((long)register0x00000008 + -0xd8) = lVar10;
      *(long *)((long)register0x00000008 + -0xe0) = lVar9;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_3 = *(uint **)(puVar7 + 0x10);
      uVar8 = *(undefined8 *)(puVar7 + 0x16);
      uVar12 = *(undefined8 *)(puVar7 + 0x14);
      uVar11 = *(undefined8 *)(puVar7 + 0x12);
      *(long *)(puVar7 + 0x10) = lVar5;
      *(long *)(puVar7 + 0x14) = lVar10;
      *(long *)(puVar7 + 0x12) = lVar9;
      *(long *)(puVar7 + 0x16) = lVar6;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar12;
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar11;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar8;
      if ((uint *)((long)&MACH_HEADER.magic + 1) < param_3) {
        do {
          lVar5 = *(long *)param_3;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_3,0x10);
          if (bVar3) {
            *(long *)param_3 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 + -1 == 0) {
          (**(code **)(param_3 + 2))();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x78)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_1 == 0) {
      __Unwind_Resume();
    }
    unaff_x30 = FUN_0034df40;
    func_0x0040cf10();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xe0);
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  lVar5 = *(long *)param_3;
  uVar8 = *(undefined8 *)(param_3 + 2);
  uVar12 = *(undefined8 *)(param_3 + 8);
  uVar11 = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)((long)register0x00000008 + -0x50) = uVar8;
  *(undefined8 *)((long)register0x00000008 + -0x38) = uVar12;
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar11;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  FUN_003fe220(lVar5 + 0x1f0);
  puVar4 = *(uint **)((long)register0x00000008 + -0x50);
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
    do {
      lVar5 = *(long *)puVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar3) {
        *(long *)puVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(puVar4 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)param_1 != 0) {
    func_0x0040cf10(puVar4);
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x50));
  }
  __Unwind_Resume(puVar4);
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x58) = FUN_0034e004;
  *(uint **)((long)register0x00000008 + -0x70) = param_1;
  *(uint ***)((long)register0x00000008 + -0x68) = param_2;
  FUN_0034e02c();
  return puVar4;
}



/* Entry: 0034d478; end: 0034d55f;  */

uint * FUN_0034d478(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  uint **ppuVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  uint *puVar14;
  undefined8 unaff_x20;
  undefined8 *****pppppuVar15;
  code *pcVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  char acStack_151 [41];
  uint *apuStack_128 [4];
  long lStack_108;
  undefined8 ****ppppuStack_f0;
  code *pcStack_e8;
  undefined1 auStack_e0 [8];
  uint *apuStack_d8 [4];
  long lStack_b8;
  undefined8 ***pppuStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = *param_1;
  *param_1 = uVar1 | 0x40000;
  if ((uVar1 >> 0x12 & 1) == 0) {
    uVar19 = param_2[1];
    uVar17 = *param_2;
    uVar11 = param_2[3];
    uVar13 = param_2[2];
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    *(undefined8 *)(param_1 + 0x36) = uVar19;
    *(undefined8 *)(param_1 + 0x34) = uVar17;
    *(undefined8 *)(param_1 + 0x3a) = uVar11;
    *(undefined8 *)(param_1 + 0x38) = uVar13;
    puVar7 = param_1;
  }
  else {
    uVar13 = *param_2;
    uVar11 = param_2[3];
    uVar19 = param_2[2];
    uVar17 = param_2[1];
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    puVar7 = *(uint **)(param_1 + 0x34);
    uStack_80 = *(undefined8 *)(param_1 + 0x3a);
    uStack_88 = *(undefined8 *)(param_1 + 0x38);
    uStack_90 = *(undefined8 *)(param_1 + 0x36);
    *(undefined8 *)(param_1 + 0x34) = uVar13;
    *(undefined8 *)(param_1 + 0x38) = uVar19;
    *(undefined8 *)(param_1 + 0x36) = uVar17;
    *(undefined8 *)(param_1 + 0x3a) = uVar11;
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar7) {
      do {
        lVar10 = *(long *)puVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar3) {
          *(long *)puVar7 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(puVar7 + 2))();
      }
    }
  }
  iVar8 = (int)param_2;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return param_1 + 0x34;
  }
  ___stack_chk_fail();
  if (iVar8 == 0) {
    __Unwind_Resume();
  }
  func_0x0040cf10();
  pcStack_98 = FUN_0034d560;
  pppppuVar15 = (undefined8 *****)&pppuStack_a0;
  lStack_b8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar13 = *(undefined8 *)puVar7;
  puVar6 = *(uint **)(puVar7 + 0xc);
  pppuStack_a0 = (undefined8 ***)&stack0xfffffffffffffff0;
  FUN_0034b930(apuStack_d8,puVar7 + 2,*(undefined8 *)(puVar7 + 10));
  ppuVar9 = apuStack_d8;
  FUN_0034d66c(uVar13);
  puVar7 = apuStack_d8[0];
  if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_d8[0]) {
    do {
      lVar10 = *(long *)apuStack_d8[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_d8[0],0x10);
      if (bVar3) {
        *(long *)apuStack_d8[0] = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(apuStack_d8[0] + 2))();
      puVar7 = apuStack_d8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_b8) {
    return puVar7;
  }
  ___stack_chk_fail();
  if ((int)ppuVar9 != 0) {
    func_0x0040cf10();
    FUN_0034b418(apuStack_d8);
  }
  pcVar16 = FUN_0034d624;
  puVar14 = puVar7;
  __Unwind_Resume();
  pcVar4 = auStack_e0;
  if ((ppuVar9 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (pcVar4 = auStack_e0,
     *(long *)puVar14 == 0x6761742d63707267 && *(long *)((long)puVar14 + 5) == 0x6e69622d73676174))
  {
    pcStack_e8 = FUN_0034d624;
    lStack_108 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar13 = *(undefined8 *)puVar6;
    puVar14 = puVar6 + 2;
    puVar7 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    ppppuStack_f0 = pppppuVar15;
    FUN_0034b930(apuStack_128,puVar14,*(undefined8 *)puVar7);
    ppuVar9 = apuStack_128;
    FUN_0034d874(uVar13);
    puVar7 = apuStack_128[0];
    if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_128[0]) {
      do {
        lVar10 = *(long *)apuStack_128[0];
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(apuStack_128[0],0x10);
        if (bVar3) {
          *(long *)apuStack_128[0] = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(apuStack_128[0] + 2))();
        puVar7 = apuStack_128[0];
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_108) {
      return puVar7;
    }
    ___stack_chk_fail();
    if ((int)ppuVar9 != 0) {
      func_0x0040cf10();
      FUN_0034b418(apuStack_128);
    }
    pcVar16 = FUN_0034d818;
    puVar14 = puVar7;
    __Unwind_Resume();
    pcVar4 = acStack_151 + 0x21;
    pppppuVar15 = &ppppuStack_f0;
  }
  if ((ppuVar9 == (uint **)((long)&MACH_HEADER.ncmds + 3)) &&
     ((*(long *)puVar14 == 0x635f626c63707267 && *(long *)(puVar14 + 2) == 0x74735f746e65696c) &&
      *(long *)((long)puVar14 + 0xb) == 0x73746174735f746e)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar7;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    puVar14 = *(uint **)puVar6;
    puVar7 = puVar6 + 2;
    FUN_0034d9e0(puVar7,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar14 = *puVar14 | 0x200000;
    *(uint **)(puVar14 + 0x22) = puVar7;
    return puVar7;
  }
  if ((ppuVar9 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)puVar14 == 0x2d74736f632d626c && *(long *)((long)puVar14 + 3) == 0x6e69622d74736f63))
  {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar7;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    puVar14 = *(uint **)puVar6;
    FUN_0034daf8(pcVar4 + -0x40,puVar6 + 2,*(undefined8 *)(puVar6 + 10),
                 *(undefined8 *)(puVar6 + 0xc));
    uVar1 = *puVar14;
    puVar7 = puVar14 + 0x18;
    *puVar14 = uVar1 | 0x400000;
    if ((uVar1 >> 0x16 & 1) == 0) {
      puVar14[0x20] = 0;
      puVar14[0x21] = 0;
      puVar14[0x1a] = 0;
      puVar14[0x1b] = 0;
      puVar7[0] = 0;
      puVar7[1] = 0;
      puVar14[0x1e] = 0;
      puVar14[0x1f] = 0;
      puVar14[0x1c] = 0;
      puVar14[0x1d] = 0;
    }
    FUN_0034dbcc(puVar7,pcVar4 + -0x40);
    if (pcVar4[-0x21] < '\0') {
      puVar7 = *(uint **)(pcVar4 + -0x38);
      __ZdlPv(puVar7);
    }
    return puVar7;
  }
  if ((ppuVar9 == (uint **)&MACH_HEADER.cpusubtype) && (*(long *)puVar14 == 0x6e656b6f742d626c)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar7;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
    *(code **)(pcVar4 + -8) = pcVar16;
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar13 = *(undefined8 *)puVar6;
    ppuVar9 = *(uint ***)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar6 + 2,*(undefined8 *)(puVar6 + 10));
    puVar14 = (uint *)(pcVar4 + -0x48);
    FUN_0034de58(uVar13);
    puVar7 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar7) {
      do {
        lVar10 = *(long *)puVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar3) {
          *(long *)puVar7 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(puVar7 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar7;
    }
    ___stack_chk_fail();
    if ((int)puVar14 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    puVar5 = puVar7;
    __Unwind_Resume();
    *(undefined8 *)(pcVar4 + -0x70) = unaff_x20;
    *(uint **)(pcVar4 + -0x68) = puVar7;
    *(char **)(pcVar4 + -0x60) = pcVar4 + -0x10;
    *(code **)(pcVar4 + -0x58) = FUN_0034de58;
    pppppuVar15 = (undefined8 *****)(pcVar4 + -0x60);
    *(undefined8 *)(pcVar4 + -0x78) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar1 = *puVar5;
    puVar7 = puVar5 + 0x10;
    *puVar5 = uVar1 | 0x800000;
    if ((uVar1 >> 0x17 & 1) == 0) {
      lVar20 = *(long *)(puVar14 + 2);
      lVar18 = *(long *)puVar14;
      lVar12 = *(long *)(puVar14 + 6);
      lVar10 = *(long *)(puVar14 + 4);
      puVar14[2] = 0;
      puVar14[3] = 0;
      puVar14[0] = 0;
      puVar14[1] = 0;
      puVar14[6] = 0;
      puVar14[7] = 0;
      puVar14[4] = 0;
      puVar14[5] = 0;
      *(long *)(puVar5 + 0x12) = lVar20;
      *(long *)puVar7 = lVar18;
      *(long *)(puVar5 + 0x16) = lVar12;
      *(long *)(puVar5 + 0x14) = lVar10;
      puVar6 = puVar5;
    }
    else {
      lVar10 = *(long *)puVar14;
      lVar12 = *(long *)(puVar14 + 6);
      *(long *)(pcVar4 + -0xd0) = lVar12;
      lVar20 = *(long *)(puVar14 + 4);
      lVar18 = *(long *)(puVar14 + 2);
      *(long *)(pcVar4 + -0xd8) = lVar20;
      *(long *)(pcVar4 + -0xe0) = lVar18;
      puVar14[2] = 0;
      puVar14[3] = 0;
      puVar14[0] = 0;
      puVar14[1] = 0;
      puVar14[6] = 0;
      puVar14[7] = 0;
      puVar14[4] = 0;
      puVar14[5] = 0;
      puVar6 = *(uint **)(puVar5 + 0x10);
      uVar13 = *(undefined8 *)(puVar5 + 0x16);
      uVar17 = *(undefined8 *)(puVar5 + 0x14);
      uVar11 = *(undefined8 *)(puVar5 + 0x12);
      *(long *)(puVar5 + 0x10) = lVar10;
      *(long *)(puVar5 + 0x14) = lVar20;
      *(long *)(puVar5 + 0x12) = lVar18;
      *(long *)(puVar5 + 0x16) = lVar12;
      *(undefined8 *)(pcVar4 + -0xd8) = uVar17;
      *(undefined8 *)(pcVar4 + -0xe0) = uVar11;
      *(undefined8 *)(pcVar4 + -0xd0) = uVar13;
      if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar6) {
        do {
          lVar10 = *(long *)puVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
          if (bVar3) {
            *(long *)puVar6 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(puVar6 + 2))();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x78)) {
      return puVar7;
    }
    ___stack_chk_fail();
    if ((int)puVar14 == 0) {
      __Unwind_Resume();
    }
    pcVar16 = FUN_0034df40;
    func_0x0040cf10();
    pcVar4 = pcVar4 + -0xe0;
  }
  *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
  *(uint **)(pcVar4 + -0x18) = puVar7;
  *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar15;
  *(code **)(pcVar4 + -8) = pcVar16;
  *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  lVar10 = *(long *)puVar6;
  uVar13 = *(undefined8 *)(puVar6 + 2);
  uVar17 = *(undefined8 *)(puVar6 + 8);
  uVar11 = *(undefined8 *)(puVar6 + 6);
  *(undefined8 *)(pcVar4 + -0x48) = *(undefined8 *)(puVar6 + 4);
  *(undefined8 *)(pcVar4 + -0x50) = uVar13;
  *(undefined8 *)(pcVar4 + -0x38) = uVar17;
  *(undefined8 *)(pcVar4 + -0x40) = uVar11;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  FUN_003fe220(lVar10 + 0x1f0);
  puVar7 = *(uint **)(pcVar4 + -0x50);
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar7) {
    do {
      lVar10 = *(long *)puVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
      if (bVar3) {
        *(long *)puVar7 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(puVar7 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
    return puVar7;
  }
  ___stack_chk_fail();
  if ((int)puVar14 != 0) {
    func_0x0040cf10(puVar7);
    FUN_0034b418(pcVar4 + -0x50);
  }
  __Unwind_Resume(puVar7);
  *(char **)(pcVar4 + -0x60) = pcVar4 + -0x10;
  *(code **)(pcVar4 + -0x58) = FUN_0034e004;
  *(uint **)(pcVar4 + -0x70) = puVar14;
  *(uint ***)(pcVar4 + -0x68) = ppuVar9;
  FUN_0034e02c();
  return puVar7;
}



/* Entry: 0034d560; end: 0034d623;  */

uint * FUN_0034d560(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  uint *puVar5;
  uint *puVar6;
  uint **ppuVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  uint *puVar11;
  uint *puVar12;
  undefined8 unaff_x20;
  undefined8 *****pppppuVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  char acStack_c1 [41];
  uint *apuStack_98 [4];
  long lStack_78;
  undefined8 ****ppppuStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [8];
  uint *apuStack_48 [4];
  long lStack_28;
  
  pppppuVar13 = (undefined8 *****)&stack0xfffffffffffffff0;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar10 = *param_1;
  puVar6 = (uint *)param_1[6];
  FUN_0034b930(apuStack_48,param_1 + 1,param_1[5]);
  ppuVar7 = apuStack_48;
  FUN_0034d66c(uVar10);
  puVar12 = apuStack_48[0];
  if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_48[0]) {
    do {
      lVar8 = *(long *)apuStack_48[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_48[0],0x10);
      if (bVar3) {
        *(long *)apuStack_48[0] = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(apuStack_48[0] + 2))();
      puVar12 = apuStack_48[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return puVar12;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    func_0x0040cf10();
    FUN_0034b418(apuStack_48);
  }
  pcVar14 = FUN_0034d624;
  puVar11 = puVar12;
  __Unwind_Resume();
  pcVar4 = auStack_50;
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (pcVar4 = auStack_50,
     *(long *)puVar11 == 0x6761742d63707267 && *(long *)((long)puVar11 + 5) == 0x6e69622d73676174))
  {
    pcStack_58 = FUN_0034d624;
    lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar10 = *(undefined8 *)puVar6;
    puVar11 = puVar6 + 2;
    puVar12 = puVar6 + 10;
    puVar6 = *(uint **)(puVar6 + 0xc);
    ppppuStack_60 = pppppuVar13;
    FUN_0034b930(apuStack_98,puVar11,*(undefined8 *)puVar12);
    ppuVar7 = apuStack_98;
    FUN_0034d874(uVar10);
    puVar12 = apuStack_98[0];
    if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_98[0]) {
      do {
        lVar8 = *(long *)apuStack_98[0];
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(apuStack_98[0],0x10);
        if (bVar3) {
          *(long *)apuStack_98[0] = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(apuStack_98[0] + 2))();
        puVar12 = apuStack_98[0];
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
      return puVar12;
    }
    ___stack_chk_fail();
    if ((int)ppuVar7 != 0) {
      func_0x0040cf10();
      FUN_0034b418(apuStack_98);
    }
    pcVar14 = FUN_0034d818;
    puVar11 = puVar12;
    __Unwind_Resume();
    pcVar4 = acStack_c1 + 0x21;
    pppppuVar13 = &ppppuStack_60;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.ncmds + 3)) &&
     ((*(long *)puVar11 == 0x635f626c63707267 && *(long *)(puVar11 + 2) == 0x74735f746e65696c) &&
      *(long *)((long)puVar11 + 0xb) == 0x73746174735f746e)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    puVar11 = *(uint **)puVar6;
    puVar12 = puVar6 + 2;
    FUN_0034d9e0(puVar12,*(undefined8 *)(puVar6 + 10),*(undefined8 *)(puVar6 + 0xc));
    *puVar11 = *puVar11 | 0x200000;
    *(uint **)(puVar11 + 0x22) = puVar12;
    return puVar12;
  }
  if ((ppuVar7 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)puVar11 == 0x2d74736f632d626c && *(long *)((long)puVar11 + 3) == 0x6e69622d74736f63))
  {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    puVar12 = *(uint **)puVar6;
    FUN_0034daf8(pcVar4 + -0x40,puVar6 + 2,*(undefined8 *)(puVar6 + 10),
                 *(undefined8 *)(puVar6 + 0xc));
    uVar1 = *puVar12;
    puVar6 = puVar12 + 0x18;
    *puVar12 = uVar1 | 0x400000;
    if ((uVar1 >> 0x16 & 1) == 0) {
      puVar12[0x20] = 0;
      puVar12[0x21] = 0;
      puVar12[0x1a] = 0;
      puVar12[0x1b] = 0;
      puVar6[0] = 0;
      puVar6[1] = 0;
      puVar12[0x1e] = 0;
      puVar12[0x1f] = 0;
      puVar12[0x1c] = 0;
      puVar12[0x1d] = 0;
    }
    FUN_0034dbcc(puVar6,pcVar4 + -0x40);
    if (pcVar4[-0x21] < '\0') {
      puVar6 = *(uint **)(pcVar4 + -0x38);
      __ZdlPv(puVar6);
    }
    return puVar6;
  }
  if ((ppuVar7 == (uint **)&MACH_HEADER.cpusubtype) && (*(long *)puVar11 == 0x6e656b6f742d626c)) {
    *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
    *(uint **)(pcVar4 + -0x18) = puVar12;
    *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar14;
    *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar10 = *(undefined8 *)puVar6;
    ppuVar7 = *(uint ***)(puVar6 + 0xc);
    FUN_0034b930(pcVar4 + -0x48,puVar6 + 2,*(undefined8 *)(puVar6 + 10));
    puVar11 = (uint *)(pcVar4 + -0x48);
    FUN_0034de58(uVar10);
    puVar6 = *(uint **)(pcVar4 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar6) {
      do {
        lVar8 = *(long *)puVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
        if (bVar3) {
          *(long *)puVar6 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(puVar6 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
      return puVar6;
    }
    ___stack_chk_fail();
    if ((int)puVar11 != 0) {
      func_0x0040cf10();
      FUN_0034b418(pcVar4 + -0x48);
    }
    puVar5 = puVar6;
    __Unwind_Resume();
    *(undefined8 *)(pcVar4 + -0x70) = unaff_x20;
    *(uint **)(pcVar4 + -0x68) = puVar6;
    *(char **)(pcVar4 + -0x60) = pcVar4 + -0x10;
    *(code **)(pcVar4 + -0x58) = FUN_0034de58;
    pppppuVar13 = (undefined8 *****)(pcVar4 + -0x60);
    *(undefined8 *)(pcVar4 + -0x78) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar1 = *puVar5;
    puVar12 = puVar5 + 0x10;
    *puVar5 = uVar1 | 0x800000;
    if ((uVar1 >> 0x17 & 1) == 0) {
      lVar16 = *(long *)(puVar11 + 2);
      lVar15 = *(long *)puVar11;
      lVar9 = *(long *)(puVar11 + 6);
      lVar8 = *(long *)(puVar11 + 4);
      puVar11[2] = 0;
      puVar11[3] = 0;
      puVar11[0] = 0;
      puVar11[1] = 0;
      puVar11[6] = 0;
      puVar11[7] = 0;
      puVar11[4] = 0;
      puVar11[5] = 0;
      *(long *)(puVar5 + 0x12) = lVar16;
      *(long *)puVar12 = lVar15;
      *(long *)(puVar5 + 0x16) = lVar9;
      *(long *)(puVar5 + 0x14) = lVar8;
      puVar6 = puVar5;
    }
    else {
      lVar8 = *(long *)puVar11;
      lVar9 = *(long *)(puVar11 + 6);
      *(long *)(pcVar4 + -0xd0) = lVar9;
      lVar16 = *(long *)(puVar11 + 4);
      lVar15 = *(long *)(puVar11 + 2);
      *(long *)(pcVar4 + -0xd8) = lVar16;
      *(long *)(pcVar4 + -0xe0) = lVar15;
      puVar11[2] = 0;
      puVar11[3] = 0;
      puVar11[0] = 0;
      puVar11[1] = 0;
      puVar11[6] = 0;
      puVar11[7] = 0;
      puVar11[4] = 0;
      puVar11[5] = 0;
      puVar6 = *(uint **)(puVar5 + 0x10);
      uVar10 = *(undefined8 *)(puVar5 + 0x16);
      uVar18 = *(undefined8 *)(puVar5 + 0x14);
      uVar17 = *(undefined8 *)(puVar5 + 0x12);
      *(long *)(puVar5 + 0x10) = lVar8;
      *(long *)(puVar5 + 0x14) = lVar16;
      *(long *)(puVar5 + 0x12) = lVar15;
      *(long *)(puVar5 + 0x16) = lVar9;
      *(undefined8 *)(pcVar4 + -0xd8) = uVar18;
      *(undefined8 *)(pcVar4 + -0xe0) = uVar17;
      *(undefined8 *)(pcVar4 + -0xd0) = uVar10;
      if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar6) {
        do {
          lVar8 = *(long *)puVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
          if (bVar3) {
            *(long *)puVar6 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 + -1 == 0) {
          (**(code **)(puVar6 + 2))();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x78)) {
      return puVar12;
    }
    ___stack_chk_fail();
    if ((int)puVar11 == 0) {
      __Unwind_Resume();
    }
    pcVar14 = FUN_0034df40;
    func_0x0040cf10();
    pcVar4 = pcVar4 + -0xe0;
  }
  *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
  *(uint **)(pcVar4 + -0x18) = puVar12;
  *(undefined8 ******)(pcVar4 + -0x10) = pppppuVar13;
  *(code **)(pcVar4 + -8) = pcVar14;
  *(undefined8 *)(pcVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  lVar8 = *(long *)puVar6;
  uVar10 = *(undefined8 *)(puVar6 + 2);
  uVar18 = *(undefined8 *)(puVar6 + 8);
  uVar17 = *(undefined8 *)(puVar6 + 6);
  *(undefined8 *)(pcVar4 + -0x48) = *(undefined8 *)(puVar6 + 4);
  *(undefined8 *)(pcVar4 + -0x50) = uVar10;
  *(undefined8 *)(pcVar4 + -0x38) = uVar18;
  *(undefined8 *)(pcVar4 + -0x40) = uVar17;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  FUN_003fe220(lVar8 + 0x1f0);
  puVar6 = *(uint **)(pcVar4 + -0x50);
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar6) {
    do {
      lVar8 = *(long *)puVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar3) {
        *(long *)puVar6 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(puVar6 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(pcVar4 + -0x28)) {
    return puVar6;
  }
  ___stack_chk_fail();
  if ((int)puVar11 != 0) {
    func_0x0040cf10(puVar6);
    FUN_0034b418(pcVar4 + -0x50);
  }
  __Unwind_Resume(puVar6);
  *(char **)(pcVar4 + -0x60) = pcVar4 + -0x10;
  *(code **)(pcVar4 + -0x58) = FUN_0034e004;
  *(uint **)(pcVar4 + -0x70) = puVar11;
  *(uint ***)(pcVar4 + -0x68) = ppuVar7;
  FUN_0034e02c();
  return puVar6;
}



/* Entry: 0034d624; end: 0034d66b;  */

uint * FUN_0034d624(uint *param_1,uint **param_2,uint *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  uint *unaff_x19;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char acStack_71 [41];
  uint *apuStack_48 [4];
  long lStack_28;
  
  if ((param_2 == (uint **)((long)&MACH_HEADER.filetype + 1)) &&
     (*(long *)param_1 == 0x6761742d63707267 && *(long *)((long)param_1 + 5) == 0x6e69622d73676174))
  {
    unaff_x29 = &stack0xfffffffffffffff0;
    lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    puVar7 = param_3 + 2;
    puVar4 = param_3 + 10;
    param_3 = *(uint **)(param_3 + 0xc);
    FUN_0034b930(apuStack_48,puVar7,*(undefined8 *)puVar4);
    param_2 = apuStack_48;
    FUN_0034d874(uVar8);
    unaff_x19 = apuStack_48[0];
    if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_48[0]) {
      do {
        lVar5 = *(long *)apuStack_48[0];
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(apuStack_48[0],0x10);
        if (bVar3) {
          *(long *)apuStack_48[0] = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(apuStack_48[0] + 2))();
        unaff_x19 = apuStack_48[0];
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x0040cf10();
      FUN_0034b418(apuStack_48);
    }
    unaff_x30 = FUN_0034d818;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)(acStack_71 + 0x21);
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.ncmds + 3)) &&
     ((*(long *)param_1 == 0x635f626c63707267 && *(long *)(param_1 + 2) == 0x74735f746e65696c) &&
      *(long *)((long)param_1 + 0xb) == 0x73746174735f746e)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034d9e0(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar7 = *puVar7 | 0x200000;
    *(uint **)(puVar7 + 0x22) = puVar4;
    return puVar4;
  }
  if ((param_2 == (uint **)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*(long *)param_1 == 0x2d74736f632d626c && *(long *)((long)param_1 + 3) == 0x6e69622d74736f63))
  {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = *(uint **)param_3;
    FUN_0034daf8((undefined1 *)((long)register0x00000008 + -0x40),param_3 + 2,
                 *(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    uVar1 = *puVar7;
    puVar4 = puVar7 + 0x18;
    *puVar7 = uVar1 | 0x400000;
    if ((uVar1 >> 0x16 & 1) == 0) {
      puVar7[0x20] = 0;
      puVar7[0x21] = 0;
      puVar7[0x1a] = 0;
      puVar7[0x1b] = 0;
      puVar4[0] = 0;
      puVar4[1] = 0;
      puVar7[0x1e] = 0;
      puVar7[0x1f] = 0;
      puVar7[0x1c] = 0;
      puVar7[0x1d] = 0;
    }
    FUN_0034dbcc(puVar4,(undefined1 *)((long)register0x00000008 + -0x40));
    if (*(char *)((long)register0x00000008 + -0x21) < '\0') {
      puVar4 = *(uint **)((long)register0x00000008 + -0x38);
      __ZdlPv(puVar4);
    }
    return puVar4;
  }
  if ((param_2 == (uint **)&MACH_HEADER.cpusubtype) && (*(long *)param_1 == 0x6e656b6f742d626c)) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    param_2 = *(uint ***)(param_3 + 0xc);
    FUN_0034b930((undefined1 *)((long)register0x00000008 + -0x48),param_3 + 2,
                 *(undefined8 *)(param_3 + 10));
    param_1 = (uint *)((long)register0x00000008 + -0x48);
    FUN_0034de58(uVar8);
    puVar4 = *(uint **)((long)register0x00000008 + -0x48);
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
      do {
        lVar5 = *(long *)puVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar3) {
          *(long *)puVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(puVar4 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return puVar4;
    }
    ___stack_chk_fail();
    if ((int)param_1 != 0) {
      func_0x0040cf10();
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    }
    puVar7 = puVar4;
    __Unwind_Resume();
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x68) = puVar4;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_0034de58;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x60);
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar1 = *puVar7;
    unaff_x19 = puVar7 + 0x10;
    *puVar7 = uVar1 | 0x800000;
    if ((uVar1 >> 0x17 & 1) == 0) {
      lVar10 = *(long *)(param_1 + 2);
      lVar9 = *(long *)param_1;
      lVar6 = *(long *)(param_1 + 6);
      lVar5 = *(long *)(param_1 + 4);
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      *(long *)(puVar7 + 0x12) = lVar10;
      *(long *)unaff_x19 = lVar9;
      *(long *)(puVar7 + 0x16) = lVar6;
      *(long *)(puVar7 + 0x14) = lVar5;
      param_3 = puVar7;
    }
    else {
      lVar5 = *(long *)param_1;
      lVar6 = *(long *)(param_1 + 6);
      *(long *)((long)register0x00000008 + -0xd0) = lVar6;
      lVar10 = *(long *)(param_1 + 4);
      lVar9 = *(long *)(param_1 + 2);
      *(long *)((long)register0x00000008 + -0xd8) = lVar10;
      *(long *)((long)register0x00000008 + -0xe0) = lVar9;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_3 = *(uint **)(puVar7 + 0x10);
      uVar8 = *(undefined8 *)(puVar7 + 0x16);
      uVar12 = *(undefined8 *)(puVar7 + 0x14);
      uVar11 = *(undefined8 *)(puVar7 + 0x12);
      *(long *)(puVar7 + 0x10) = lVar5;
      *(long *)(puVar7 + 0x14) = lVar10;
      *(long *)(puVar7 + 0x12) = lVar9;
      *(long *)(puVar7 + 0x16) = lVar6;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar12;
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar11;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar8;
      if ((uint *)((long)&MACH_HEADER.magic + 1) < param_3) {
        do {
          lVar5 = *(long *)param_3;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_3,0x10);
          if (bVar3) {
            *(long *)param_3 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 + -1 == 0) {
          (**(code **)(param_3 + 2))();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x78)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_1 == 0) {
      __Unwind_Resume();
    }
    unaff_x30 = FUN_0034df40;
    func_0x0040cf10();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xe0);
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  lVar5 = *(long *)param_3;
  uVar8 = *(undefined8 *)(param_3 + 2);
  uVar12 = *(undefined8 *)(param_3 + 8);
  uVar11 = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)((long)register0x00000008 + -0x50) = uVar8;
  *(undefined8 *)((long)register0x00000008 + -0x38) = uVar12;
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar11;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  FUN_003fe220(lVar5 + 0x1f0);
  puVar4 = *(uint **)((long)register0x00000008 + -0x50);
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
    do {
      lVar5 = *(long *)puVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar3) {
        *(long *)puVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(puVar4 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)param_1 != 0) {
    func_0x0040cf10(puVar4);
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x50));
  }
  __Unwind_Resume(puVar4);
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x58) = FUN_0034e004;
  *(uint **)((long)register0x00000008 + -0x70) = param_1;
  *(uint ***)((long)register0x00000008 + -0x68) = param_2;
  FUN_0034e02c();
  return puVar4;
}



/* Entry: 0034d66c; end: 0034d753;  */

uint ***** FUN_0034d66c(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  uint *****pppppuVar5;
  uint *****pppppuVar6;
  uint *****pppppuVar7;
  uint *****pppppuVar8;
  uint *****pppppuVar9;
  int iVar10;
  long lVar11;
  uint ****ppppuVar12;
  uint ****ppppuVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 unaff_x20;
  undefined8 *****pppppuVar16;
  code *pcVar17;
  undefined8 uVar18;
  uint ****ppppuVar19;
  undefined8 uVar20;
  uint ****ppppuVar21;
  uint ****ppppuVar22;
  uint ***pppuStack_1c0;
  uint ***pppuStack_1b8;
  uint ***pppuStack_1b0;
  long lStack_158;
  undefined8 ****ppppuStack_140;
  code *pcStack_138;
  uint ****ppppuStack_128;
  undefined1 auStack_120 [8];
  uint ****ppppuStack_118;
  undefined8 uStack_108;
  undefined8 ****ppppuStack_f0;
  code *pcStack_e8;
  undefined1 auStack_e0 [8];
  uint ****appppuStack_d8 [4];
  long lStack_b8;
  undefined8 ***pppuStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = *param_1;
  *param_1 = uVar1 | 0x80000;
  if ((uVar1 >> 0x13 & 1) == 0) {
    uVar18 = param_2[1];
    ppppuVar12 = (uint ****)*param_2;
    uVar14 = param_2[3];
    uVar15 = param_2[2];
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    *(undefined8 *)(param_1 + 0x2e) = uVar18;
    *(uint *****)(param_1 + 0x2c) = ppppuVar12;
    *(undefined8 *)(param_1 + 0x32) = uVar14;
    *(undefined8 *)(param_1 + 0x30) = uVar15;
    puVar4 = param_1;
  }
  else {
    uVar15 = *param_2;
    uVar14 = param_2[3];
    uVar20 = param_2[2];
    uVar18 = param_2[1];
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    puVar4 = *(uint **)(param_1 + 0x2c);
    uStack_80 = *(undefined8 *)(param_1 + 0x32);
    uStack_88 = *(undefined8 *)(param_1 + 0x30);
    uStack_90 = *(undefined8 *)(param_1 + 0x2e);
    *(undefined8 *)(param_1 + 0x2c) = uVar15;
    *(undefined8 *)(param_1 + 0x30) = uVar20;
    *(undefined8 *)(param_1 + 0x2e) = uVar18;
    *(undefined8 *)(param_1 + 0x32) = uVar14;
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
      do {
        lVar11 = *(long *)puVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar3) {
          *(long *)puVar4 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(puVar4 + 2))();
      }
    }
  }
  iVar10 = (int)param_2;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return (uint *****)(param_1 + 0x2c);
  }
  ___stack_chk_fail();
  if (iVar10 == 0) {
    __Unwind_Resume();
  }
  func_0x0040cf10();
  pcStack_98 = FUN_0034d754;
  pppppuVar16 = (undefined8 *****)&pppuStack_a0;
  lStack_b8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar15 = *(undefined8 *)puVar4;
  pppppuVar9 = *(uint ******)(puVar4 + 0xc);
  pppuStack_a0 = (undefined8 ***)&stack0xfffffffffffffff0;
  FUN_0034b930(appppuStack_d8,puVar4 + 2,*(undefined8 *)(puVar4 + 10));
  pppppuVar7 = appppuStack_d8;
  FUN_0034d874(uVar15);
  pppppuVar5 = (uint *****)appppuStack_d8[0];
  if ((uint *****)((long)&MACH_HEADER.magic + 1) < appppuStack_d8[0]) {
    do {
      ppppuVar12 = (uint ****)*appppuStack_d8[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(appppuStack_d8[0],0x10);
      if (bVar3) {
        *appppuStack_d8[0] = (uint ***)((long)ppppuVar12 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uint ****)((long)ppppuVar12 + -1) == (uint ****)0x0) {
      (*(code *)appppuStack_d8[0][1])();
      pppppuVar5 = (uint *****)appppuStack_d8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_b8) {
    return pppppuVar5;
  }
  ___stack_chk_fail();
  if ((int)pppppuVar7 != 0) {
    func_0x0040cf10();
    FUN_0034b418(appppuStack_d8);
  }
  pcVar17 = FUN_0034d818;
  pppppuVar6 = pppppuVar5;
  __Unwind_Resume();
  if ((pppppuVar7 == (uint *****)((long)&MACH_HEADER.ncmds + 3)) &&
     ((*pppppuVar6 == (uint ****)0x635f626c63707267 &&
      pppppuVar6[1] == (uint ****)0x74735f746e65696c) &&
      *(long *)((long)pppppuVar6 + 0xb) == 0x73746174735f746e)) {
    pcStack_e8 = FUN_0034d818;
    ppppuVar12 = *pppppuVar9;
    pppppuVar7 = pppppuVar9 + 1;
    ppppuStack_f0 = pppppuVar16;
    FUN_0034d9e0(pppppuVar7,pppppuVar9[5],pppppuVar9[6]);
    *(uint *)ppppuVar12 = *(uint *)ppppuVar12 | 0x200000;
    ppppuVar12[0x11] = (uint ***)pppppuVar7;
    return pppppuVar7;
  }
  if ((pppppuVar7 == (uint *****)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*pppppuVar6 == (uint ****)0x2d74736f632d626c &&
      *(long *)((long)pppppuVar6 + 3) == 0x6e69622d74736f63)) {
    pcStack_e8 = FUN_0034d818;
    ppppuVar12 = *pppppuVar9;
    ppppuStack_f0 = pppppuVar16;
    FUN_0034daf8(auStack_120,pppppuVar9 + 1,pppppuVar9[5],pppppuVar9[6]);
    uVar1 = *(uint *)ppppuVar12;
    pppppuVar7 = (uint *****)(ppppuVar12 + 0xc);
    *(uint *)ppppuVar12 = uVar1 | 0x400000;
    if ((uVar1 >> 0x16 & 1) == 0) {
      ppppuVar12[0x10] = (uint ***)0x0;
      ppppuVar12[0xd] = (uint ***)0x0;
      *pppppuVar7 = (uint ****)0x0;
      ppppuVar12[0xf] = (uint ***)0x0;
      ppppuVar12[0xe] = (uint ***)0x0;
    }
    FUN_0034dbcc(pppppuVar7,auStack_120);
    if (uStack_108._7_1_ < '\0') {
      __ZdlPv(ppppuStack_118);
      pppppuVar7 = (uint *****)ppppuStack_118;
    }
    return pppppuVar7;
  }
  ppppuVar12 = (uint ****)auStack_e0;
  if ((pppppuVar7 == (uint *****)&MACH_HEADER.cpusubtype) &&
     (ppppuVar12 = (uint ****)auStack_e0, *pppppuVar6 == (uint ****)0x6e656b6f742d626c)) {
    pcStack_e8 = FUN_0034d818;
    uStack_108 = *(long *)PTR____stack_chk_guard_00999f88;
    ppppuVar12 = *pppppuVar9;
    pppppuVar7 = (uint *****)pppppuVar9[6];
    ppppuStack_f0 = pppppuVar16;
    FUN_0034b930(&ppppuStack_128,pppppuVar9 + 1,pppppuVar9[5]);
    pppppuVar6 = &ppppuStack_128;
    FUN_0034de58(ppppuVar12);
    pppppuVar8 = (uint *****)ppppuStack_128;
    if ((uint *****)((long)&MACH_HEADER.magic + 1) < ppppuStack_128) {
      do {
        ppppuVar12 = (uint ****)*ppppuStack_128;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppuStack_128,0x10);
        if (bVar3) {
          *ppppuStack_128 = (uint ***)((long)ppppuVar12 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uint ****)((long)ppppuVar12 + -1) == (uint ****)0x0) {
        (*(code *)ppppuStack_128[1])();
        pppppuVar8 = (uint *****)ppppuStack_128;
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == uStack_108) {
      return pppppuVar8;
    }
    ___stack_chk_fail();
    if ((int)pppppuVar6 != 0) {
      func_0x0040cf10();
      FUN_0034b418(&ppppuStack_128);
    }
    __Unwind_Resume();
    ppppuStack_140 = &ppppuStack_f0;
    pcStack_138 = FUN_0034de58;
    pppppuVar16 = &ppppuStack_140;
    lStack_158 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar1 = *(uint *)pppppuVar8;
    pppppuVar5 = pppppuVar8 + 8;
    *(uint *)pppppuVar8 = uVar1 | 0x800000;
    if ((uVar1 >> 0x17 & 1) == 0) {
      ppppuVar21 = pppppuVar6[1];
      ppppuVar19 = *pppppuVar6;
      ppppuVar13 = pppppuVar6[3];
      ppppuVar12 = pppppuVar6[2];
      pppppuVar6[1] = (uint ****)0x0;
      *pppppuVar6 = (uint ****)0x0;
      pppppuVar6[3] = (uint ****)0x0;
      pppppuVar6[2] = (uint ****)0x0;
      pppppuVar8[9] = ppppuVar21;
      *pppppuVar5 = ppppuVar19;
      pppppuVar8[0xb] = ppppuVar13;
      pppppuVar8[10] = ppppuVar12;
      pppppuVar9 = pppppuVar8;
    }
    else {
      ppppuVar12 = *pppppuVar6;
      ppppuVar13 = pppppuVar6[3];
      pppuStack_1b0 = (uint ***)ppppuVar13;
      ppppuVar21 = pppppuVar6[2];
      ppppuVar19 = pppppuVar6[1];
      pppppuVar6[1] = (uint ****)0x0;
      *pppppuVar6 = (uint ****)0x0;
      pppppuVar6[3] = (uint ****)0x0;
      pppppuVar6[2] = (uint ****)0x0;
      pppppuVar9 = (uint *****)pppppuVar8[8];
      pppuStack_1b0 = (uint ***)pppppuVar8[0xb];
      pppuStack_1b8 = (uint ***)pppppuVar8[10];
      pppuStack_1c0 = (uint ***)pppppuVar8[9];
      pppppuVar8[8] = ppppuVar12;
      pppppuVar8[10] = ppppuVar21;
      pppppuVar8[9] = ppppuVar19;
      pppppuVar8[0xb] = ppppuVar13;
      if ((uint *****)((long)&MACH_HEADER.magic + 1) < pppppuVar9) {
        do {
          ppppuVar12 = *pppppuVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppppuVar9,0x10);
          if (bVar3) {
            *pppppuVar9 = (uint ****)((long)ppppuVar12 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uint ****)((long)ppppuVar12 + -1) == (uint ****)0x0) {
          (*(code *)pppppuVar9[1])();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_158) {
      return pppppuVar5;
    }
    ___stack_chk_fail();
    if ((int)pppppuVar6 == 0) {
      __Unwind_Resume();
    }
    pcVar17 = FUN_0034df40;
    func_0x0040cf10();
    ppppuVar12 = &pppuStack_1c0;
  }
  *(undefined8 *)((long)ppppuVar12 + -0x20) = unaff_x20;
  *(uint ******)((long)ppppuVar12 + -0x18) = pppppuVar5;
  *(undefined8 ******)((long)ppppuVar12 + -0x10) = pppppuVar16;
  *(code **)((long)ppppuVar12 + -8) = pcVar17;
  *(undefined8 *)((long)ppppuVar12 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  ppppuVar13 = *pppppuVar9;
  ppppuVar19 = pppppuVar9[1];
  ppppuVar22 = pppppuVar9[4];
  ppppuVar21 = pppppuVar9[3];
  *(uint *****)((long)ppppuVar12 + -0x48) = pppppuVar9[2];
  *(uint *****)((long)ppppuVar12 + -0x50) = ppppuVar19;
  *(uint *****)((long)ppppuVar12 + -0x38) = ppppuVar22;
  *(uint *****)((long)ppppuVar12 + -0x40) = ppppuVar21;
  pppppuVar9[2] = (uint ****)0x0;
  pppppuVar9[1] = (uint ****)0x0;
  pppppuVar9[4] = (uint ****)0x0;
  pppppuVar9[3] = (uint ****)0x0;
  FUN_003fe220(ppppuVar13 + 0x3e);
  pppppuVar9 = *(uint ******)((long)ppppuVar12 + -0x50);
  if ((uint *****)((long)&MACH_HEADER.magic + 1) < pppppuVar9) {
    do {
      ppppuVar13 = *pppppuVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppppuVar9,0x10);
      if (bVar3) {
        *pppppuVar9 = (uint ****)((long)ppppuVar13 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uint ****)((long)ppppuVar13 + -1) == (uint ****)0x0) {
      (*(code *)pppppuVar9[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)ppppuVar12 + -0x28)) {
    return pppppuVar9;
  }
  ___stack_chk_fail();
  if ((int)pppppuVar6 != 0) {
    func_0x0040cf10(pppppuVar9);
    FUN_0034b418((undefined1 *)((long)ppppuVar12 + -0x50));
  }
  __Unwind_Resume(pppppuVar9);
  *(undefined1 **)((long)ppppuVar12 + -0x60) = (undefined1 *)((long)ppppuVar12 + -0x10);
  *(code **)((long)ppppuVar12 + -0x58) = FUN_0034e004;
  *(uint ******)((long)ppppuVar12 + -0x70) = pppppuVar6;
  *(uint ******)((long)ppppuVar12 + -0x68) = pppppuVar7;
  FUN_0034e02c();
  return pppppuVar9;
}



/* Entry: 0034d754; end: 0034d817;  */

uint ***** FUN_0034d754(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *****pppppuVar4;
  uint *****pppppuVar5;
  uint *****pppppuVar6;
  uint *****pppppuVar7;
  uint *****pppppuVar8;
  uint ****ppppuVar9;
  uint ****ppppuVar10;
  undefined8 uVar11;
  undefined8 unaff_x20;
  undefined8 *****pppppuVar12;
  code *pcVar13;
  uint ****ppppuVar14;
  uint ****ppppuVar15;
  uint ****ppppuVar16;
  uint ***pppuStack_130;
  uint ***pppuStack_128;
  uint ***pppuStack_120;
  long lStack_c8;
  undefined8 ****ppppuStack_b0;
  code *pcStack_a8;
  uint ****ppppuStack_98;
  undefined1 auStack_90 [8];
  uint ****ppppuStack_88;
  undefined8 uStack_78;
  undefined8 ****ppppuStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [8];
  uint ****appppuStack_48 [4];
  long lStack_28;
  
  pppppuVar12 = (undefined8 *****)&stack0xfffffffffffffff0;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar11 = *param_1;
  pppppuVar8 = (uint *****)param_1[6];
  FUN_0034b930(appppuStack_48,param_1 + 1,param_1[5]);
  pppppuVar6 = appppuStack_48;
  FUN_0034d874(uVar11);
  pppppuVar4 = (uint *****)appppuStack_48[0];
  if ((uint *****)((long)&MACH_HEADER.magic + 1) < appppuStack_48[0]) {
    do {
      ppppuVar9 = (uint ****)*appppuStack_48[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(appppuStack_48[0],0x10);
      if (bVar3) {
        *appppuStack_48[0] = (uint ***)((long)ppppuVar9 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uint ****)((long)ppppuVar9 + -1) == (uint ****)0x0) {
      (*(code *)appppuStack_48[0][1])();
      pppppuVar4 = (uint *****)appppuStack_48[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return pppppuVar4;
  }
  ___stack_chk_fail();
  if ((int)pppppuVar6 != 0) {
    func_0x0040cf10();
    FUN_0034b418(appppuStack_48);
  }
  pcVar13 = FUN_0034d818;
  pppppuVar5 = pppppuVar4;
  __Unwind_Resume();
  if ((pppppuVar6 == (uint *****)((long)&MACH_HEADER.ncmds + 3)) &&
     ((*pppppuVar5 == (uint ****)0x635f626c63707267 &&
      pppppuVar5[1] == (uint ****)0x74735f746e65696c) &&
      *(long *)((long)pppppuVar5 + 0xb) == 0x73746174735f746e)) {
    pcStack_58 = FUN_0034d818;
    ppppuVar9 = *pppppuVar8;
    pppppuVar6 = pppppuVar8 + 1;
    ppppuStack_60 = pppppuVar12;
    FUN_0034d9e0(pppppuVar6,pppppuVar8[5],pppppuVar8[6]);
    *(uint *)ppppuVar9 = *(uint *)ppppuVar9 | 0x200000;
    ppppuVar9[0x11] = (uint ***)pppppuVar6;
    return pppppuVar6;
  }
  if ((pppppuVar6 == (uint *****)((long)&MACH_HEADER.cpusubtype + 3)) &&
     (*pppppuVar5 == (uint ****)0x2d74736f632d626c &&
      *(long *)((long)pppppuVar5 + 3) == 0x6e69622d74736f63)) {
    pcStack_58 = FUN_0034d818;
    ppppuVar9 = *pppppuVar8;
    ppppuStack_60 = pppppuVar12;
    FUN_0034daf8(auStack_90,pppppuVar8 + 1,pppppuVar8[5],pppppuVar8[6]);
    uVar1 = *(uint *)ppppuVar9;
    pppppuVar6 = (uint *****)(ppppuVar9 + 0xc);
    *(uint *)ppppuVar9 = uVar1 | 0x400000;
    if ((uVar1 >> 0x16 & 1) == 0) {
      ppppuVar9[0x10] = (uint ***)0x0;
      ppppuVar9[0xd] = (uint ***)0x0;
      *pppppuVar6 = (uint ****)0x0;
      ppppuVar9[0xf] = (uint ***)0x0;
      ppppuVar9[0xe] = (uint ***)0x0;
    }
    FUN_0034dbcc(pppppuVar6,auStack_90);
    if (uStack_78._7_1_ < '\0') {
      __ZdlPv(ppppuStack_88);
      pppppuVar6 = (uint *****)ppppuStack_88;
    }
    return pppppuVar6;
  }
  ppppuVar9 = (uint ****)auStack_50;
  if ((pppppuVar6 == (uint *****)&MACH_HEADER.cpusubtype) &&
     (ppppuVar9 = (uint ****)auStack_50, *pppppuVar5 == (uint ****)0x6e656b6f742d626c)) {
    pcStack_58 = FUN_0034d818;
    uStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
    ppppuVar9 = *pppppuVar8;
    pppppuVar6 = (uint *****)pppppuVar8[6];
    ppppuStack_60 = pppppuVar12;
    FUN_0034b930(&ppppuStack_98,pppppuVar8 + 1,pppppuVar8[5]);
    pppppuVar5 = &ppppuStack_98;
    FUN_0034de58(ppppuVar9);
    pppppuVar7 = (uint *****)ppppuStack_98;
    if ((uint *****)((long)&MACH_HEADER.magic + 1) < ppppuStack_98) {
      do {
        ppppuVar9 = (uint ****)*ppppuStack_98;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppuStack_98,0x10);
        if (bVar3) {
          *ppppuStack_98 = (uint ***)((long)ppppuVar9 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uint ****)((long)ppppuVar9 + -1) == (uint ****)0x0) {
        (*(code *)ppppuStack_98[1])();
        pppppuVar7 = (uint *****)ppppuStack_98;
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == uStack_78) {
      return pppppuVar7;
    }
    ___stack_chk_fail();
    if ((int)pppppuVar5 != 0) {
      func_0x0040cf10();
      FUN_0034b418(&ppppuStack_98);
    }
    __Unwind_Resume();
    ppppuStack_b0 = &ppppuStack_60;
    pcStack_a8 = FUN_0034de58;
    pppppuVar12 = &ppppuStack_b0;
    lStack_c8 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar1 = *(uint *)pppppuVar7;
    pppppuVar4 = pppppuVar7 + 8;
    *(uint *)pppppuVar7 = uVar1 | 0x800000;
    if ((uVar1 >> 0x17 & 1) == 0) {
      ppppuVar15 = pppppuVar5[1];
      ppppuVar14 = *pppppuVar5;
      ppppuVar10 = pppppuVar5[3];
      ppppuVar9 = pppppuVar5[2];
      pppppuVar5[1] = (uint ****)0x0;
      *pppppuVar5 = (uint ****)0x0;
      pppppuVar5[3] = (uint ****)0x0;
      pppppuVar5[2] = (uint ****)0x0;
      pppppuVar7[9] = ppppuVar15;
      *pppppuVar4 = ppppuVar14;
      pppppuVar7[0xb] = ppppuVar10;
      pppppuVar7[10] = ppppuVar9;
      pppppuVar8 = pppppuVar7;
    }
    else {
      ppppuVar9 = *pppppuVar5;
      ppppuVar10 = pppppuVar5[3];
      pppuStack_120 = (uint ***)ppppuVar10;
      ppppuVar15 = pppppuVar5[2];
      ppppuVar14 = pppppuVar5[1];
      pppppuVar5[1] = (uint ****)0x0;
      *pppppuVar5 = (uint ****)0x0;
      pppppuVar5[3] = (uint ****)0x0;
      pppppuVar5[2] = (uint ****)0x0;
      pppppuVar8 = (uint *****)pppppuVar7[8];
      pppuStack_120 = (uint ***)pppppuVar7[0xb];
      pppuStack_128 = (uint ***)pppppuVar7[10];
      pppuStack_130 = (uint ***)pppppuVar7[9];
      pppppuVar7[8] = ppppuVar9;
      pppppuVar7[10] = ppppuVar15;
      pppppuVar7[9] = ppppuVar14;
      pppppuVar7[0xb] = ppppuVar10;
      if ((uint *****)((long)&MACH_HEADER.magic + 1) < pppppuVar8) {
        do {
          ppppuVar9 = *pppppuVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppppuVar8,0x10);
          if (bVar3) {
            *pppppuVar8 = (uint ****)((long)ppppuVar9 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uint ****)((long)ppppuVar9 + -1) == (uint ****)0x0) {
          (*(code *)pppppuVar8[1])();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_c8) {
      return pppppuVar4;
    }
    ___stack_chk_fail();
    if ((int)pppppuVar5 == 0) {
      __Unwind_Resume();
    }
    pcVar13 = FUN_0034df40;
    func_0x0040cf10();
    ppppuVar9 = &pppuStack_130;
  }
  *(undefined8 *)((long)ppppuVar9 + -0x20) = unaff_x20;
  *(uint ******)((long)ppppuVar9 + -0x18) = pppppuVar4;
  *(undefined8 ******)((long)ppppuVar9 + -0x10) = pppppuVar12;
  *(code **)((long)ppppuVar9 + -8) = pcVar13;
  *(undefined8 *)((long)ppppuVar9 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  ppppuVar10 = *pppppuVar8;
  ppppuVar14 = pppppuVar8[1];
  ppppuVar16 = pppppuVar8[4];
  ppppuVar15 = pppppuVar8[3];
  *(uint *****)((long)ppppuVar9 + -0x48) = pppppuVar8[2];
  *(uint *****)((long)ppppuVar9 + -0x50) = ppppuVar14;
  *(uint *****)((long)ppppuVar9 + -0x38) = ppppuVar16;
  *(uint *****)((long)ppppuVar9 + -0x40) = ppppuVar15;
  pppppuVar8[2] = (uint ****)0x0;
  pppppuVar8[1] = (uint ****)0x0;
  pppppuVar8[4] = (uint ****)0x0;
  pppppuVar8[3] = (uint ****)0x0;
  FUN_003fe220(ppppuVar10 + 0x3e);
  pppppuVar8 = *(uint ******)((long)ppppuVar9 + -0x50);
  if ((uint *****)((long)&MACH_HEADER.magic + 1) < pppppuVar8) {
    do {
      ppppuVar10 = *pppppuVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppppuVar8,0x10);
      if (bVar3) {
        *pppppuVar8 = (uint ****)((long)ppppuVar10 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uint ****)((long)ppppuVar10 + -1) == (uint ****)0x0) {
      (*(code *)pppppuVar8[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)ppppuVar9 + -0x28)) {
    return pppppuVar8;
  }
  ___stack_chk_fail();
  if ((int)pppppuVar5 != 0) {
    func_0x0040cf10(pppppuVar8);
    FUN_0034b418((undefined1 *)((long)ppppuVar9 + -0x50));
  }
  __Unwind_Resume(pppppuVar8);
  *(undefined1 **)((long)ppppuVar9 + -0x60) = (undefined1 *)((long)ppppuVar9 + -0x10);
  *(code **)((long)ppppuVar9 + -0x58) = FUN_0034e004;
  *(uint ******)((long)ppppuVar9 + -0x70) = pppppuVar5;
  *(uint ******)((long)ppppuVar9 + -0x68) = pppppuVar6;
  FUN_0034e02c();
  return pppppuVar8;
}



/* Entry: 0034d818; end: 0034d873;  */

uint * FUN_0034d818(uint **param_1,long param_2,uint *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  long lVar5;
  uint *puVar6;
  uint *puVar7;
  uint *unaff_x19;
  undefined8 uVar8;
  undefined8 unaff_x20;
  undefined1 **unaff_x29;
  code *unaff_x30;
  uint *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  uint *puStack_d0;
  long lStack_78;
  undefined1 *puStack_60;
  code *pcStack_58;
  uint *puStack_48;
  undefined1 auStack_40 [8];
  uint *puStack_38;
  undefined8 uStack_28;
  
  if ((param_2 == 0x13) &&
     ((*param_1 == (uint *)0x635f626c63707267 && param_1[1] == (uint *)0x74735f746e65696c) &&
      *(long *)((long)param_1 + 0xb) == 0x73746174735f746e)) {
    puVar6 = *(uint **)param_3;
    puVar4 = param_3 + 2;
    FUN_0034d9e0(puVar4,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    *puVar6 = *puVar6 | 0x200000;
    *(uint **)(puVar6 + 0x22) = puVar4;
    return puVar4;
  }
  if ((param_2 == 0xb) &&
     (*param_1 == (uint *)0x2d74736f632d626c && *(long *)((long)param_1 + 3) == 0x6e69622d74736f63))
  {
    puVar6 = *(uint **)param_3;
    FUN_0034daf8(auStack_40,param_3 + 2,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc)
                );
    uVar1 = *puVar6;
    puVar4 = puVar6 + 0x18;
    *puVar6 = uVar1 | 0x400000;
    if ((uVar1 >> 0x16 & 1) == 0) {
      puVar6[0x20] = 0;
      puVar6[0x21] = 0;
      puVar6[0x1a] = 0;
      puVar6[0x1b] = 0;
      puVar4[0] = 0;
      puVar4[1] = 0;
      puVar6[0x1e] = 0;
      puVar6[0x1f] = 0;
      puVar6[0x1c] = 0;
      puVar6[0x1d] = 0;
    }
    FUN_0034dbcc(puVar4,auStack_40);
    if (uStack_28._7_1_ < '\0') {
      __ZdlPv(puStack_38);
      puVar4 = puStack_38;
    }
    return puVar4;
  }
  if ((param_2 == 8) && (*param_1 == (uint *)0x6e656b6f742d626c)) {
    uStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    param_2 = *(long *)(param_3 + 0xc);
    FUN_0034b930(&puStack_48,param_3 + 2,*(undefined8 *)(param_3 + 10));
    param_1 = &puStack_48;
    FUN_0034de58(uVar8);
    puVar4 = puStack_48;
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puStack_48) {
      do {
        lVar5 = *(long *)puStack_48;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puStack_48,0x10);
        if (bVar3) {
          *(long *)puStack_48 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(puStack_48 + 2))();
        puVar4 = puStack_48;
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == uStack_28) {
      return puVar4;
    }
    ___stack_chk_fail();
    if ((int)param_1 != 0) {
      func_0x0040cf10();
      FUN_0034b418(&puStack_48);
    }
    __Unwind_Resume();
    puStack_60 = &stack0xfffffffffffffff0;
    pcStack_58 = FUN_0034de58;
    unaff_x29 = &puStack_60;
    lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar1 = *puVar4;
    unaff_x19 = puVar4 + 0x10;
    *puVar4 = uVar1 | 0x800000;
    if ((uVar1 >> 0x17 & 1) == 0) {
      puVar10 = param_1[1];
      puVar9 = *param_1;
      puVar7 = param_1[3];
      puVar6 = param_1[2];
      param_1[1] = (uint *)0x0;
      *param_1 = (uint *)0x0;
      param_1[3] = (uint *)0x0;
      param_1[2] = (uint *)0x0;
      *(uint **)(puVar4 + 0x12) = puVar10;
      *(uint **)unaff_x19 = puVar9;
      *(uint **)(puVar4 + 0x16) = puVar7;
      *(uint **)(puVar4 + 0x14) = puVar6;
      param_3 = puVar4;
    }
    else {
      puVar6 = *param_1;
      puVar7 = param_1[3];
      puStack_d0 = puVar7;
      puVar10 = param_1[2];
      puVar9 = param_1[1];
      param_1[1] = (uint *)0x0;
      *param_1 = (uint *)0x0;
      param_1[3] = (uint *)0x0;
      param_1[2] = (uint *)0x0;
      param_3 = *(uint **)(puVar4 + 0x10);
      puStack_d0 = *(uint **)(puVar4 + 0x16);
      uStack_d8 = *(undefined8 *)(puVar4 + 0x14);
      uStack_e0 = *(undefined8 *)(puVar4 + 0x12);
      *(uint **)(puVar4 + 0x10) = puVar6;
      *(uint **)(puVar4 + 0x14) = puVar10;
      *(uint **)(puVar4 + 0x12) = puVar9;
      *(uint **)(puVar4 + 0x16) = puVar7;
      if ((uint *)((long)&MACH_HEADER.magic + 1) < param_3) {
        do {
          lVar5 = *(long *)param_3;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_3,0x10);
          if (bVar3) {
            *(long *)param_3 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 + -1 == 0) {
          (**(code **)(param_3 + 2))();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_1 == 0) {
      __Unwind_Resume();
    }
    unaff_x30 = FUN_0034df40;
    func_0x0040cf10();
    register0x00000008 = (BADSPACEBASE *)&uStack_e0;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  lVar5 = *(long *)param_3;
  uVar8 = *(undefined8 *)(param_3 + 2);
  uVar12 = *(undefined8 *)(param_3 + 8);
  uVar11 = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)((long)register0x00000008 + -0x50) = uVar8;
  *(undefined8 *)((long)register0x00000008 + -0x38) = uVar12;
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar11;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  FUN_003fe220(lVar5 + 0x1f0);
  puVar4 = *(uint **)((long)register0x00000008 + -0x50);
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
    do {
      lVar5 = *(long *)puVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar3) {
        *(long *)puVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(puVar4 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)param_1 != 0) {
    func_0x0040cf10(puVar4);
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x50));
  }
  __Unwind_Resume(puVar4);
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x58) = FUN_0034e004;
  *(uint ***)((long)register0x00000008 + -0x70) = param_1;
  *(long *)((long)register0x00000008 + -0x68) = param_2;
  FUN_0034e02c();
  return puVar4;
}



/* Entry: 0034d874; end: 0034d95b;  */

uint * FUN_0034d874(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = *param_1;
  *param_1 = uVar1 | 0x100000;
  if ((uVar1 >> 0x14 & 1) == 0) {
    uVar13 = param_2[1];
    uVar12 = *param_2;
    uVar10 = param_2[3];
    uVar9 = param_2[2];
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    *(undefined8 *)(param_1 + 0x26) = uVar13;
    *(undefined8 *)(param_1 + 0x24) = uVar12;
    *(undefined8 *)(param_1 + 0x2a) = uVar10;
    *(undefined8 *)(param_1 + 0x28) = uVar9;
    puVar4 = param_1;
  }
  else {
    uVar9 = *param_2;
    uVar10 = param_2[3];
    uVar13 = param_2[2];
    uVar12 = param_2[1];
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    puVar4 = *(uint **)(param_1 + 0x24);
    *(undefined8 *)(param_1 + 0x24) = uVar9;
    *(undefined8 *)(param_1 + 0x28) = uVar13;
    *(undefined8 *)(param_1 + 0x26) = uVar12;
    *(undefined8 *)(param_1 + 0x2a) = uVar10;
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
      do {
        lVar7 = *(long *)puVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar3) {
          *(long *)puVar4 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(puVar4 + 2))();
      }
    }
  }
  iVar6 = (int)param_2;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar8) {
    return param_1 + 0x24;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x0040cf10();
  puVar11 = *(uint **)puVar4;
  puVar5 = puVar4 + 2;
  FUN_0034d9e0(puVar5,*(undefined8 *)(puVar4 + 10),*(undefined8 *)(puVar4 + 0xc));
  *puVar11 = *puVar11 | 0x200000;
  *(uint **)(puVar11 + 0x22) = puVar5;
  return puVar5;
}



/* Entry: 0034d95c; end: 0034d997;  */

void FUN_0034d95c(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  
  puVar2 = (uint *)*param_1;
  puVar1 = param_1 + 1;
  FUN_0034d9e0(puVar1,param_1[5],param_1[6]);
  *puVar2 = *puVar2 | 0x200000;
  *(undefined8 **)(puVar2 + 0x22) = puVar1;
  return;
}



/* Entry: 0034d998; end: 0034d9df;  */

uint * FUN_0034d998(uint **param_1,long param_2,uint *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  long lVar5;
  uint *puVar6;
  uint *puVar7;
  uint *unaff_x19;
  undefined8 uVar8;
  undefined8 unaff_x20;
  undefined1 **unaff_x29;
  code *unaff_x30;
  uint *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  uint *puStack_d0;
  long lStack_78;
  undefined1 *puStack_60;
  code *pcStack_58;
  uint *puStack_48;
  undefined1 auStack_40 [8];
  uint *puStack_38;
  undefined8 uStack_28;
  
  if ((param_2 == 0xb) &&
     (*param_1 == (uint *)0x2d74736f632d626c && *(long *)((long)param_1 + 3) == 0x6e69622d74736f63))
  {
    puVar6 = *(uint **)param_3;
    FUN_0034daf8(auStack_40,param_3 + 2,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc)
                );
    uVar1 = *puVar6;
    puVar4 = puVar6 + 0x18;
    *puVar6 = uVar1 | 0x400000;
    if ((uVar1 >> 0x16 & 1) == 0) {
      puVar6[0x20] = 0;
      puVar6[0x21] = 0;
      puVar6[0x1a] = 0;
      puVar6[0x1b] = 0;
      puVar4[0] = 0;
      puVar4[1] = 0;
      puVar6[0x1e] = 0;
      puVar6[0x1f] = 0;
      puVar6[0x1c] = 0;
      puVar6[0x1d] = 0;
    }
    FUN_0034dbcc(puVar4,auStack_40);
    if (uStack_28._7_1_ < '\0') {
      __ZdlPv(puStack_38);
      puVar4 = puStack_38;
    }
    return puVar4;
  }
  if ((param_2 == 8) && (*param_1 == (uint *)0x6e656b6f742d626c)) {
    uStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    param_2 = *(long *)(param_3 + 0xc);
    FUN_0034b930(&puStack_48,param_3 + 2,*(undefined8 *)(param_3 + 10));
    param_1 = &puStack_48;
    FUN_0034de58(uVar8);
    puVar4 = puStack_48;
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puStack_48) {
      do {
        lVar5 = *(long *)puStack_48;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puStack_48,0x10);
        if (bVar3) {
          *(long *)puStack_48 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(puStack_48 + 2))();
        puVar4 = puStack_48;
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == uStack_28) {
      return puVar4;
    }
    ___stack_chk_fail();
    if ((int)param_1 != 0) {
      func_0x0040cf10();
      FUN_0034b418(&puStack_48);
    }
    __Unwind_Resume();
    puStack_60 = &stack0xfffffffffffffff0;
    pcStack_58 = FUN_0034de58;
    unaff_x29 = &puStack_60;
    lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar1 = *puVar4;
    unaff_x19 = puVar4 + 0x10;
    *puVar4 = uVar1 | 0x800000;
    if ((uVar1 >> 0x17 & 1) == 0) {
      puVar10 = param_1[1];
      puVar9 = *param_1;
      puVar7 = param_1[3];
      puVar6 = param_1[2];
      param_1[1] = (uint *)0x0;
      *param_1 = (uint *)0x0;
      param_1[3] = (uint *)0x0;
      param_1[2] = (uint *)0x0;
      *(uint **)(puVar4 + 0x12) = puVar10;
      *(uint **)unaff_x19 = puVar9;
      *(uint **)(puVar4 + 0x16) = puVar7;
      *(uint **)(puVar4 + 0x14) = puVar6;
      param_3 = puVar4;
    }
    else {
      puVar6 = *param_1;
      puVar7 = param_1[3];
      puStack_d0 = puVar7;
      puVar10 = param_1[2];
      puVar9 = param_1[1];
      param_1[1] = (uint *)0x0;
      *param_1 = (uint *)0x0;
      param_1[3] = (uint *)0x0;
      param_1[2] = (uint *)0x0;
      param_3 = *(uint **)(puVar4 + 0x10);
      puStack_d0 = *(uint **)(puVar4 + 0x16);
      uStack_d8 = *(undefined8 *)(puVar4 + 0x14);
      uStack_e0 = *(undefined8 *)(puVar4 + 0x12);
      *(uint **)(puVar4 + 0x10) = puVar6;
      *(uint **)(puVar4 + 0x14) = puVar10;
      *(uint **)(puVar4 + 0x12) = puVar9;
      *(uint **)(puVar4 + 0x16) = puVar7;
      if ((uint *)((long)&MACH_HEADER.magic + 1) < param_3) {
        do {
          lVar5 = *(long *)param_3;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_3,0x10);
          if (bVar3) {
            *(long *)param_3 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 + -1 == 0) {
          (**(code **)(param_3 + 2))();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_1 == 0) {
      __Unwind_Resume();
    }
    unaff_x30 = FUN_0034df40;
    func_0x0040cf10();
    register0x00000008 = (BADSPACEBASE *)&uStack_e0;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  lVar5 = *(long *)param_3;
  uVar8 = *(undefined8 *)(param_3 + 2);
  uVar12 = *(undefined8 *)(param_3 + 8);
  uVar11 = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)((long)register0x00000008 + -0x50) = uVar8;
  *(undefined8 *)((long)register0x00000008 + -0x38) = uVar12;
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar11;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  FUN_003fe220(lVar5 + 0x1f0);
  puVar4 = *(uint **)((long)register0x00000008 + -0x50);
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
    do {
      lVar5 = *(long *)puVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar3) {
        *(long *)puVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(puVar4 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)param_1 != 0) {
    func_0x0040cf10(puVar4);
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x50));
  }
  __Unwind_Resume(puVar4);
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x58) = FUN_0034e004;
  *(uint ***)((long)register0x00000008 + -0x70) = param_1;
  *(long *)((long)register0x00000008 + -0x68) = param_2;
  FUN_0034e02c();
  return puVar4;
}



/* Entry: 0034d9e0; end: 0034da2b;  */

undefined8 FUN_0034d9e0(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar3) {
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
      (*(code *)plVar3[1])();
    }
  }
  return 0;
}



/* Entry: 0034da2c; end: 0034dab7;  */

void FUN_0034da2c(undefined8 *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  char cStack_21;
  
  puVar2 = (uint *)*param_1;
  FUN_0034daf8(auStack_40,param_1 + 1,param_1[5],param_1[6]);
  uVar1 = *puVar2;
  puVar3 = puVar2 + 0x18;
  *puVar2 = uVar1 | 0x400000;
  if ((uVar1 >> 0x16 & 1) == 0) {
    puVar2[0x20] = 0;
    puVar2[0x21] = 0;
    puVar2[0x1a] = 0;
    puVar2[0x1b] = 0;
    puVar3[0] = 0;
    puVar3[1] = 0;
    puVar2[0x1e] = 0;
    puVar2[0x1f] = 0;
    puVar2[0x1c] = 0;
    puVar2[0x1d] = 0;
  }
  FUN_0034dbcc(puVar3,auStack_40);
  if (cStack_21 < '\0') {
    __ZdlPv(uStack_38);
  }
  return;
}



/* Entry: 0034dab8; end: 0034daf7;  */

uint * FUN_0034dab8(uint **param_1,long param_2,uint *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  long lVar5;
  uint *puVar6;
  uint *puVar7;
  uint *unaff_x19;
  undefined8 uVar8;
  undefined8 unaff_x20;
  undefined1 **unaff_x29;
  code *unaff_x30;
  uint *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  uint *puStack_d0;
  long lStack_78;
  undefined1 *puStack_60;
  code *pcStack_58;
  uint *apuStack_48 [4];
  long lStack_28;
  
  if ((param_2 == 8) && (*param_1 == (uint *)0x6e656b6f742d626c)) {
    lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar8 = *(undefined8 *)param_3;
    param_2 = *(long *)(param_3 + 0xc);
    FUN_0034b930(apuStack_48,param_3 + 2,*(undefined8 *)(param_3 + 10));
    param_1 = apuStack_48;
    FUN_0034de58(uVar8);
    puVar4 = apuStack_48[0];
    if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_48[0]) {
      do {
        lVar5 = *(long *)apuStack_48[0];
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(apuStack_48[0],0x10);
        if (bVar3) {
          *(long *)apuStack_48[0] = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(apuStack_48[0] + 2))();
        puVar4 = apuStack_48[0];
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
      return puVar4;
    }
    ___stack_chk_fail();
    if ((int)param_1 != 0) {
      func_0x0040cf10();
      FUN_0034b418(apuStack_48);
    }
    __Unwind_Resume();
    puStack_60 = &stack0xfffffffffffffff0;
    pcStack_58 = FUN_0034de58;
    unaff_x29 = &puStack_60;
    lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar1 = *puVar4;
    unaff_x19 = puVar4 + 0x10;
    *puVar4 = uVar1 | 0x800000;
    if ((uVar1 >> 0x17 & 1) == 0) {
      puVar10 = param_1[1];
      puVar9 = *param_1;
      puVar7 = param_1[3];
      puVar6 = param_1[2];
      param_1[1] = (uint *)0x0;
      *param_1 = (uint *)0x0;
      param_1[3] = (uint *)0x0;
      param_1[2] = (uint *)0x0;
      *(uint **)(puVar4 + 0x12) = puVar10;
      *(uint **)unaff_x19 = puVar9;
      *(uint **)(puVar4 + 0x16) = puVar7;
      *(uint **)(puVar4 + 0x14) = puVar6;
      param_3 = puVar4;
    }
    else {
      puVar6 = *param_1;
      puVar7 = param_1[3];
      puStack_d0 = puVar7;
      puVar10 = param_1[2];
      puVar9 = param_1[1];
      param_1[1] = (uint *)0x0;
      *param_1 = (uint *)0x0;
      param_1[3] = (uint *)0x0;
      param_1[2] = (uint *)0x0;
      param_3 = *(uint **)(puVar4 + 0x10);
      puStack_d0 = *(uint **)(puVar4 + 0x16);
      uStack_d8 = *(undefined8 *)(puVar4 + 0x14);
      uStack_e0 = *(undefined8 *)(puVar4 + 0x12);
      *(uint **)(puVar4 + 0x10) = puVar6;
      *(uint **)(puVar4 + 0x14) = puVar10;
      *(uint **)(puVar4 + 0x12) = puVar9;
      *(uint **)(puVar4 + 0x16) = puVar7;
      if ((uint *)((long)&MACH_HEADER.magic + 1) < param_3) {
        do {
          lVar5 = *(long *)param_3;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_3,0x10);
          if (bVar3) {
            *(long *)param_3 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 + -1 == 0) {
          (**(code **)(param_3 + 2))();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    if ((int)param_1 == 0) {
      __Unwind_Resume();
    }
    unaff_x30 = FUN_0034df40;
    func_0x0040cf10();
    register0x00000008 = (BADSPACEBASE *)&uStack_e0;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  lVar5 = *(long *)param_3;
  uVar8 = *(undefined8 *)(param_3 + 2);
  uVar12 = *(undefined8 *)(param_3 + 8);
  uVar11 = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)((long)register0x00000008 + -0x50) = uVar8;
  *(undefined8 *)((long)register0x00000008 + -0x38) = uVar12;
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar11;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  FUN_003fe220(lVar5 + 0x1f0);
  puVar4 = *(uint **)((long)register0x00000008 + -0x50);
  if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar4) {
    do {
      lVar5 = *(long *)puVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar3) {
        *(long *)puVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(puVar4 + 2))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != *(long *)((long)register0x00000008 + -0x28)) {
    ___stack_chk_fail();
    if ((int)param_1 != 0) {
      func_0x0040cf10(puVar4);
      FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x50));
    }
    __Unwind_Resume(puVar4);
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_0034e004;
    *(uint ***)((long)register0x00000008 + -0x70) = param_1;
    *(long *)((long)register0x00000008 + -0x68) = param_2;
    FUN_0034e02c();
    return puVar4;
  }
  return puVar4;
}



/* Entry: 0034daf8; end: 0034dbcb;  */

ulong * FUN_0034daf8(undefined8 *param_1,undefined8 *param_2,ulong *param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  undefined1 **ppuVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_48 = param_2[1];
  puStack_50 = (ulong *)*param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  FUN_003ff024(&uStack_70,&puStack_50);
  *param_1 = uStack_70;
  param_1[2] = uStack_60;
  param_1[1] = uStack_68;
  param_1[3] = uStack_58;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  puVar4 = puStack_50;
  if ((ulong *)((long)&MACH_HEADER.magic + 1) < puStack_50) {
    do {
      uVar6 = *puStack_50;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puStack_50,0x10);
      if (bVar3) {
        *puStack_50 = uVar6 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar6 - 1 == 0) {
      (*(code *)puStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  if ((int)param_3 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&puStack_50);
  }
  __Unwind_Resume();
  puVar7 = puVar4 + 1;
  if ((*puVar4 & 1) == 0) {
    uVar6 = 1;
  }
  else {
    puVar7 = (ulong *)puVar4[1];
    uVar6 = puVar4[2];
  }
  uVar9 = *puVar4 >> 1;
  if (uVar9 != uVar6) {
    puVar7 = puVar7 + uVar9 * 4;
    *puVar7 = *param_3;
    uVar9 = param_3[2];
    uVar6 = param_3[1];
    puVar7[3] = param_3[3];
    puVar7[2] = uVar9;
    puVar7[1] = uVar6;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[1] = 0;
    *puVar4 = *puVar4 + 2;
    return puVar7;
  }
  ppuVar5 = &puStack_c0;
  puVar7 = puVar4 + 1;
  uVar6 = *puVar4;
  if ((uVar6 & 1) == 0) {
    uVar9 = 2;
  }
  else {
    puVar7 = (ulong *)puVar4[1];
    uVar9 = puVar4[2] << 1;
  }
  puStack_c0 = (undefined1 *)0x0;
  uStack_b8 = 0;
  FUN_0034dd60();
  uVar11 = uVar6 >> 1;
  puVar1 = (ulong *)((long)ppuVar5 + uVar11 * 0x20);
  puStack_c0 = (undefined1 *)ppuVar5;
  uStack_b8 = uVar9;
  *puVar1 = *param_3;
  uVar12 = param_3[2];
  uVar9 = param_3[1];
  puVar1[3] = param_3[3];
  puVar1[2] = uVar12;
  puVar1[1] = uVar9;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[1] = 0;
  if (1 < uVar6) {
    puVar8 = (ulong *)((long)ppuVar5 + 8);
    uVar6 = uVar11;
    puVar10 = puVar7;
    do {
      puVar8[-1] = *puVar10;
      uVar12 = puVar10[2];
      uVar9 = puVar10[1];
      puVar8[2] = puVar10[3];
      puVar8[1] = uVar12;
      *puVar8 = uVar9;
      puVar10[2] = 0;
      puVar10[3] = 0;
      puVar10[1] = 0;
      puVar10 = puVar10 + 4;
      uVar6 = uVar6 - 1;
      puVar8 = puVar8 + 4;
    } while (uVar6 != 0);
    puVar7 = puVar7 + uVar11 * 4 + -3;
    do {
      if (*(char *)((long)puVar7 + 0x17) < '\0') {
        __ZdlPv(*puVar7);
      }
      puVar7 = puVar7 + -4;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  uVar6 = *puVar4;
  if ((uVar6 & 1) != 0) {
    __ZdlPv(puVar4[1]);
    uVar6 = *puVar4;
  }
  puVar4[1] = (ulong)puStack_c0;
  puVar4[2] = uStack_b8;
  *puVar4 = (uVar6 | 1) + 2;
  return puVar1;
}



/* Entry: 0034dbcc; end: 0034dc2b;  */

ulong * FUN_0034dbcc(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  undefined1 **ppuVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *puStack_50;
  ulong uStack_48;
  
  puVar3 = param_1 + 1;
  if ((*param_1 & 1) == 0) {
    uVar6 = 1;
  }
  else {
    puVar3 = (ulong *)param_1[1];
    uVar6 = param_1[2];
  }
  uVar5 = *param_1 >> 1;
  if (uVar5 != uVar6) {
    puVar3 = puVar3 + uVar5 * 4;
    *puVar3 = *param_2;
    uVar5 = param_2[2];
    uVar6 = param_2[1];
    puVar3[3] = param_2[3];
    puVar3[2] = uVar5;
    puVar3[1] = uVar6;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[1] = 0;
    *param_1 = *param_1 + 2;
    return puVar3;
  }
  ppuVar2 = &puStack_50;
  puVar3 = param_1 + 1;
  uVar6 = *param_1;
  if ((uVar6 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    puVar3 = (ulong *)param_1[1];
    uVar5 = param_1[2] << 1;
  }
  puStack_50 = (undefined1 *)0x0;
  uStack_48 = 0;
  FUN_0034dd60();
  uVar8 = uVar6 >> 1;
  puVar1 = (ulong *)((long)ppuVar2 + uVar8 * 0x20);
  puStack_50 = (undefined1 *)ppuVar2;
  uStack_48 = uVar5;
  *puVar1 = *param_2;
  uVar9 = param_2[2];
  uVar5 = param_2[1];
  puVar1[3] = param_2[3];
  puVar1[2] = uVar9;
  puVar1[1] = uVar5;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[1] = 0;
  if (1 < uVar6) {
    puVar4 = (ulong *)((long)ppuVar2 + 8);
    uVar6 = uVar8;
    puVar7 = puVar3;
    do {
      puVar4[-1] = *puVar7;
      uVar9 = puVar7[2];
      uVar5 = puVar7[1];
      puVar4[2] = puVar7[3];
      puVar4[1] = uVar9;
      *puVar4 = uVar5;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar7[1] = 0;
      puVar7 = puVar7 + 4;
      uVar6 = uVar6 - 1;
      puVar4 = puVar4 + 4;
    } while (uVar6 != 0);
    puVar3 = puVar3 + uVar8 * 4 + -3;
    do {
      if (*(char *)((long)puVar3 + 0x17) < '\0') {
        __ZdlPv(*puVar3);
      }
      puVar3 = puVar3 + -4;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar6 = *param_1;
  if ((uVar6 & 1) != 0) {
    __ZdlPv(param_1[1]);
    uVar6 = *param_1;
  }
  param_1[1] = (ulong)puStack_50;
  param_1[2] = uStack_48;
  *param_1 = (uVar6 | 1) + 2;
  return puVar1;
}



/* Entry: 0034dc2c; end: 0034dd5f;  */

undefined8 * FUN_0034dc2c(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 **ppuVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined1 *puStack_50;
  ulong uStack_48;
  
  ppuVar2 = &puStack_50;
  puVar6 = param_1 + 1;
  uVar8 = *param_1;
  if ((uVar8 & 1) == 0) {
    uVar3 = 2;
  }
  else {
    puVar6 = (ulong *)param_1[1];
    uVar3 = param_1[2] << 1;
  }
  puStack_50 = (undefined1 *)0x0;
  uStack_48 = 0;
  FUN_0034dd60();
  uVar7 = uVar8 >> 1;
  puVar1 = (undefined8 *)((long)ppuVar2 + uVar7 * 0x20);
  puStack_50 = (undefined1 *)ppuVar2;
  uStack_48 = uVar3;
  *puVar1 = *param_2;
  uVar10 = param_2[2];
  uVar9 = param_2[1];
  puVar1[3] = param_2[3];
  puVar1[2] = uVar10;
  puVar1[1] = uVar9;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[1] = 0;
  if (1 < uVar8) {
    puVar4 = (ulong *)((long)ppuVar2 + 8);
    uVar8 = uVar7;
    puVar5 = puVar6;
    do {
      puVar4[-1] = *puVar5;
      uVar11 = puVar5[2];
      uVar3 = puVar5[1];
      puVar4[2] = puVar5[3];
      puVar4[1] = uVar11;
      *puVar4 = uVar3;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[1] = 0;
      puVar5 = puVar5 + 4;
      uVar8 = uVar8 - 1;
      puVar4 = puVar4 + 4;
    } while (uVar8 != 0);
    puVar6 = puVar6 + uVar7 * 4 + -3;
    do {
      if (*(char *)((long)puVar6 + 0x17) < '\0') {
        __ZdlPv(*puVar6);
      }
      puVar6 = puVar6 + -4;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar8 = *param_1;
  if ((uVar8 & 1) != 0) {
    __ZdlPv(param_1[1]);
    uVar8 = *param_1;
  }
  param_1[1] = (ulong)puStack_50;
  param_1[2] = uStack_48;
  *param_1 = (uVar8 | 1) + 2;
  return puVar1;
}



/* Entry: 0034dd60; end: 0034dd93;  */

undefined1  [16] FUN_0034dd60(undefined8 *param_1,ulong param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  uint *puVar5;
  uint *puVar6;
  long *plVar7;
  uint **ppuVar8;
  uint ***pppuVar9;
  undefined8 uVar10;
  uint *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint *puVar14;
  uint *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  uint **ppuStack_170;
  undefined8 uStack_168;
  undefined8 **ppuStack_160;
  code *pcStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_128;
  undefined8 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_98;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  uint *apuStack_68 [4];
  long lStack_48;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  if (param_2 >> 0x3b == 0) {
    lVar4 = param_2 << 5;
    __Znwm(lVar4);
    auVar16._8_8_ = param_2;
    auVar16._0_8_ = lVar4;
    return auVar16;
  }
  FUN_00349558();
  pcStack_28 = FUN_0034dd94;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar13 = *param_1;
  uVar10 = param_1[6];
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_0034b930(apuStack_68,param_1 + 1,param_1[5]);
  ppuVar8 = apuStack_68;
  FUN_0034de58(uVar13);
  puVar5 = apuStack_68[0];
  if ((uint *)((long)&MACH_HEADER.magic + 1) < apuStack_68[0]) {
    do {
      lVar4 = *(long *)apuStack_68[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(apuStack_68[0],0x10);
      if (bVar3) {
        *(long *)apuStack_68[0] = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      (**(code **)(apuStack_68[0] + 2))();
      puVar5 = apuStack_68[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    auVar17._8_8_ = ppuVar8;
    auVar17._0_8_ = puVar5;
    return auVar17;
  }
  ___stack_chk_fail();
  if ((int)ppuVar8 != 0) {
    func_0x0040cf10();
    FUN_0034b418(apuStack_68);
  }
  __Unwind_Resume();
  pcStack_78 = FUN_0034de58;
  lStack_98 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = *puVar5;
  *puVar5 = uVar1 | 0x800000;
  ppuStack_80 = &puStack_30;
  if ((uVar1 >> 0x17 & 1) == 0) {
    puVar14 = ppuVar8[1];
    puVar12 = *ppuVar8;
    puVar11 = ppuVar8[3];
    puVar6 = ppuVar8[2];
    ppuVar8[1] = (uint *)0x0;
    *ppuVar8 = (uint *)0x0;
    ppuVar8[3] = (uint *)0x0;
    ppuVar8[2] = (uint *)0x0;
    *(uint **)(puVar5 + 0x12) = puVar14;
    *(uint **)(puVar5 + 0x10) = puVar12;
    *(uint **)(puVar5 + 0x16) = puVar11;
    *(uint **)(puVar5 + 0x14) = puVar6;
    puVar6 = puVar5;
  }
  else {
    puVar11 = *ppuVar8;
    puVar12 = ppuVar8[3];
    puVar15 = ppuVar8[2];
    puVar14 = ppuVar8[1];
    ppuVar8[1] = (uint *)0x0;
    *ppuVar8 = (uint *)0x0;
    ppuVar8[3] = (uint *)0x0;
    ppuVar8[2] = (uint *)0x0;
    puVar6 = *(uint **)(puVar5 + 0x10);
    uStack_f0 = *(undefined8 *)(puVar5 + 0x16);
    uStack_f8 = *(undefined8 *)(puVar5 + 0x14);
    uStack_100 = *(undefined8 *)(puVar5 + 0x12);
    *(uint **)(puVar5 + 0x10) = puVar11;
    *(uint **)(puVar5 + 0x14) = puVar15;
    *(uint **)(puVar5 + 0x12) = puVar14;
    *(uint **)(puVar5 + 0x16) = puVar12;
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puVar6) {
      do {
        lVar4 = *(long *)puVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
        if (bVar3) {
          *(long *)puVar6 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 + -1 == 0) {
        (**(code **)(puVar6 + 2))();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_98) {
    auVar18._8_8_ = ppuVar8;
    auVar18._0_8_ = puVar5 + 0x10;
    return auVar18;
  }
  ___stack_chk_fail();
  if ((int)ppuVar8 == 0) {
    __Unwind_Resume();
  }
  func_0x0040cf10();
  pcStack_108 = FUN_0034df40;
  lStack_128 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_148 = *(undefined8 *)(puVar6 + 4);
  plStack_150 = *(long **)(puVar6 + 2);
  uStack_138 = *(undefined8 *)(puVar6 + 8);
  uStack_140 = *(undefined8 *)(puVar6 + 6);
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  ppuStack_110 = &ppuStack_80;
  FUN_003fe220(*(long *)puVar6 + 0x1f0);
  plVar7 = plStack_150;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_150) {
    do {
      lVar4 = *plStack_150;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_150,0x10);
      if (bVar3) {
        *plStack_150 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      (*(code *)plStack_150[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_128) {
    auVar19._8_8_ = ppuVar8;
    auVar19._0_8_ = plVar7;
    return auVar19;
  }
  ___stack_chk_fail();
  if ((int)ppuVar8 != 0) {
    func_0x0040cf10(plVar7);
    FUN_0034b418(&plStack_150);
  }
  __Unwind_Resume(plVar7);
  pppuVar9 = &ppuStack_170;
  pcStack_158 = FUN_0034e004;
  ppuStack_170 = ppuVar8;
  uStack_168 = uVar10;
  ppuStack_160 = &ppuStack_110;
  FUN_0034e02c();
  auVar20._8_8_ = pppuVar9;
  auVar20._0_8_ = plVar7;
  return auVar20;
}


