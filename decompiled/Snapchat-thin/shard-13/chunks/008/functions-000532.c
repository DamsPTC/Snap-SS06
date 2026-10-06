/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ad1f544; end: 10ad1f673;  */

undefined8 * FUN_10ad1f544(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_31;
  
  *param_1 = &PTR_FUN_110c6e8b0;
  plVar6 = param_1 + 1;
  *plVar6 = 0;
  param_1[2] = 0;
  puVar4 = (undefined8 *)0xe0;
  __Znwm();
  *puVar4 = &PTR_FUN_110c6e930;
  puVar4[1] = 0;
  puVar4[3] = 0xac440000ac44;
  puVar4[2] = 0;
  *(undefined1 *)(puVar4 + 0x17) = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  *(undefined1 *)(puVar4 + 7) = 0;
  *(undefined2 *)(puVar4 + 0x1b) = 0;
  puVar4[0x19] = 0;
  puVar4[0x1a] = 0;
  puVar4[0x18] = 0;
  param_1[1] = puVar4 + 3;
  param_1[2] = puVar4;
  *(char *)((long)puVar4 + 0xd9) = (char)param_2;
  FUN_10ad1f474(&uStack_50,&uStack_31);
  lVar5 = *plVar6;
  plVar7 = *(long **)(lVar5 + 0x18);
  *(undefined8 *)(lVar5 + 0x18) = uStack_48;
  *(undefined8 *)(lVar5 + 0x10) = uStack_50;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  (**(code **)(**(long **)(*plVar6 + 0x10) + 0x40))(*(long **)(*plVar6 + 0x10),0xac44);
  (**(code **)(**(long **)(*plVar6 + 0x10) + 0x50))(*(long **)(*plVar6 + 0x10),param_2);
  return param_1;
}



/* Entry: 10ad1f674; end: 10ad1f6af;  */

void FUN_10ad1f674(long param_1)

{
  (**(code **)(**(long **)(*(long *)(param_1 + 8) + 0x10) + 0x10))();
  *(undefined1 *)(*(long *)(param_1 + 8) + 0xc0) = 1;
  return;
}



/* Entry: 10ad1f6b0; end: 10ad1f7d3;  */

void FUN_10ad1f6b0(long param_1,undefined4 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  long *plVar7;
  undefined4 *puVar8;
  long lVar9;
  ulong uVar10;
  long unaff_x19;
  long unaff_x20;
  uint *puVar11;
  undefined1 auStack_58 [16];
  undefined4 *puStack_48;
  long *plStack_40;
  ulong uStack_38;
  
  lVar9 = *(long *)(param_1 + 8);
  *(undefined4 *)(lVar9 + 4) = param_2;
  if (*(char *)(lVar9 + 0xc1) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010ad1f6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(lVar9 + 0x10) + 0x40))();
    return;
  }
  if (*(char *)(lVar9 + 0xc0) == '\x01') {
    plVar7 = *(long **)(lVar9 + 0x10);
    (**(code **)(*plVar7 + 0x38))();
    puVar11 = *(uint **)(param_1 + 8);
    *puVar11 = (uint)plVar7;
    if (puVar11[1] != (uint)plVar7) {
      if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
        plStack_40 = plVar7;
        uStack_38 = (ulong)puVar11[1];
        func_0x00010ae06f08(1,8,&UNK_10f6a54f1,&UNK_10f6a553d,0x38,&UNK_10f6a557b);
        puVar11 = *(uint **)(param_1 + 8);
      }
      func_0x00010ad14ef4(puVar11 + 8);
      FUN_10ad127dc(puVar11 + 8,*puVar11,puVar11[1],1);
      *(undefined1 *)(puVar11 + 0x28) = 1;
      lVar9 = *(long *)(param_1 + 8);
      if ((*(byte *)(lVar9 + 0xa0) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad1f7d4);
        (*pcVar4)();
      }
      uVar2 = 0;
      if ((long)*(int *)(lVar9 + 0x94) != 0) {
        uVar2 = (ulong)((long)*(int *)(lVar9 + 0x90) << 0xe) / (ulong)(long)*(int *)(lVar9 + 0x94);
      }
      uVar2 = uVar2 + (long)*(int *)(lVar9 + 0x90);
      lVar1 = *(long *)(lVar9 + 0xa8);
      uVar10 = *(long *)(lVar9 + 0xb0) - lVar1 >> 2;
      uVar5 = uVar10 <= uVar2;
      uVar6 = uVar2 == uVar10;
      if ((bool)uVar5 && !(bool)uVar6) {
        func_0x00010742b258((long *)(lVar9 + 0xa8),uVar2 - uVar10);
        func_0x00010742bae4();
        if ((bool)uVar5 && !(bool)uVar6) {
          func_0x00010742be60();
          func_0x0001073b5434();
          func_0x00010742b52c();
          func_0x0001073b531c(auStack_58);
          puVar3 = puStack_48;
          for (lVar9 = unaff_x20 << 2; lVar9 != 0; lVar9 = lVar9 + -4) {
            *puVar3 = 0;
            puVar3 = puVar3 + 1;
          }
          puStack_48 = puStack_48 + unaff_x20;
          func_0x00010742bb50();
          func_0x0001073b52fc();
          func_0x0001073b5364(auStack_58);
          return;
        }
        puVar8 = *(undefined4 **)(unaff_x19 + 8);
        puVar3 = puVar8;
        for (lVar9 = unaff_x20 << 2; lVar9 != 0; lVar9 = lVar9 + -4) {
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
        }
        *(undefined4 **)(unaff_x19 + 8) = puVar8 + unaff_x20;
        return;
      }
      if (uVar2 < uVar10) {
        *(ulong *)(lVar9 + 0xb0) = lVar1 + uVar2 * 4;
      }
      return;
    }
  }
  return;
}



/* Entry: 10ad1f7d4; end: 10ad1f7fb;  */

undefined8 FUN_10ad1f7d4(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (undefined4)param_1;
  if (*(char *)(*(long *)(param_2 + 8) + 0xc0) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010ad1f7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(*(long *)(param_2 + 8) + 0x10) + 0x18))();
    return CONCAT44(uVar2,uVar1);
  }
  return 0;
}



/* Entry: 10ad1f7fc; end: 10ad1f953;  */

long * FUN_10ad1f7fc(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  piVar8 = *(int **)(param_1 + 8);
  if ((char)piVar8[0x30] == '\x01') {
    if (*(char *)((long)piVar8 + 0xc1) == '\x01') {
      plVar6 = *(long **)(piVar8 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010ad1f860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x20))(plVar6,param_2,param_3);
      return plVar6;
    }
    iVar2 = *piVar8;
    iVar3 = piVar8[1];
    plVar6 = *(long **)(piVar8 + 4);
    (**(code **)(*plVar6 + 0x20))(plVar6,param_2,param_3);
    if ((iVar3 != iVar2) && (plVar6 != (long *)0x0)) {
      lVar7 = *(long *)(param_1 + 8);
      if ((*(byte *)(lVar7 + 0xa0) & 1) == 0) {
LAB_10ad1f950:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10ad1f954);
        (*pcVar5)();
      }
      uVar4 = 0;
      if ((long)*(int *)(lVar7 + 0x94) != 0) {
        uVar4 = (ulong)((long)param_3 * (long)*(int *)(lVar7 + 0x90)) /
                (ulong)(long)*(int *)(lVar7 + 0x94);
      }
      if ((ulong)(*(long *)(lVar7 + 0xb0) - *(long *)(lVar7 + 0xa8) >> 2) <
          uVar4 + (long)*(int *)(lVar7 + 0x90)) {
        func_0x00010742a308();
        lVar7 = *(long *)(param_1 + 8);
        if ((*(byte *)(lVar7 + 0xa0) & 1) == 0) goto LAB_10ad1f950;
      }
      plVar6 = (long *)(lVar7 + 0x20);
      lStack_60 = *(long *)(lVar7 + 0xa8);
      lStack_68 = *(long *)(lVar7 + 0xb0) - lStack_60 >> 2;
      uStack_58 = 1;
      uStack_70 = 1;
      plStack_50 = param_3;
      uStack_48 = param_2;
      (**(code **)(lVar7 + 0x50))(plVar6,&uStack_58,&uStack_70);
      plVar1 = plVar6;
      if (param_3 <= plVar6) {
        plVar1 = param_3;
      }
      _memcpy(param_2,*(undefined8 *)(*(long *)(param_1 + 8) + 0xa8),(long)plVar1 << 2);
    }
  }
  else {
    plVar6 = (long *)0x0;
  }
  return plVar6;
}



/* Entry: 10ad1f954; end: 10ad1f9e7;  */

void FUN_10ad1f954(long param_1)

{
  if (*(char *)(*(long *)(param_1 + 8) + 0xc0) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010ad1f970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(*(long *)(param_1 + 8) + 0x10) + 0x28))();
    return;
  }
  return;
}



/* Entry: 10ad1f9e8; end: 10ad1fa47;  */

undefined8 * FUN_10ad1f9e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6e8b0;
  FUN_10ad1fa4c(param_1 + 1);
  return param_1;
}



/* Entry: 10ad1fa48; end: 10ad1fa4b;  */

void FUN_10ad1fa48(void)

{
  return;
}



/* Entry: 10ad1fa4c; end: 10ad1faa3;  */

long FUN_10ad1fa4c(long param_1)

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



/* Entry: 10ad1faa4; end: 10ad1fab3;  */

void FUN_10ad1faa4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6e930;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ad1fab4; end: 10ad1fad3;  */

void FUN_10ad1fab4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6e930;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad1fad4; end: 10ad1fb47;  */

void FUN_10ad1fad4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0xc0) != 0) {
    *(long *)(param_1 + 200) = *(long *)(param_1 + 0xc0);
    __ZdlPv();
  }
  FUN_10ac471b8(param_1 + 0x38);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 10ad1fb48; end: 10ad1fb4b;  */

void FUN_10ad1fb48(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad1fb4c; end: 10ad1fbab;  */

void FUN_10ad1fb4c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x90);
  if (*(long *)(param_1 + 8) == 0) {
    if (lVar1 == 0) {
      return;
    }
  }
  else {
    _ExtAudioFileDispose();
    if (lVar1 == 0) goto LAB_10ad1fb80;
  }
  _AudioFileClose(lVar1);
LAB_10ad1fb80:
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (*(char *)(param_1 + 200) == '\x01') {
    FUN_10a0f1ea0(param_1 + 0x98);
    *(undefined1 *)(param_1 + 200) = 0;
  }
  return;
}



/* Entry: 10ad1fbac; end: 10ad1fcb3;  */

undefined8
FUN_10ad1fbac(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if ((*(byte *)(param_1 + 200) & 1) != 0) {
    (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x98) + 0x28))();
    plVar2 = (long *)**(undefined8 **)(param_1 + 0x98);
    (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
    if ((int)plVar2 == 0) {
      if ((*(byte *)(param_1 + 200) & 1) == 0) goto LAB_10ad1fcb0;
      plVar2 = (long *)**(undefined8 **)(param_1 + 0x98);
      (**(code **)(*plVar2 + 0x20))(plVar2,param_4,1,param_3);
      if (param_5 == (undefined4 *)0x0) {
        return 0;
      }
      uVar4 = SUB84(plVar2,0);
      uVar3 = 0;
    }
    else {
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f6a55a4,&UNK_10f6a55f7,0x40,&UNK_10f6a566d,param_7,param_8,
                            plVar2);
      }
      uVar3 = 0xffffffd8;
      if (param_5 == (undefined4 *)0x0) {
        return 0xffffffd8;
      }
      uVar4 = 0;
    }
    *param_5 = uVar4;
    return uVar3;
  }
LAB_10ad1fcb0:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad1fcb4);
  (*pcVar1)();
}



/* Entry: 10ad1fcb4; end: 10ad1fcd3;  */

void FUN_10ad1fcb4(long param_1)

{
  code *pcVar1;
  
  if ((*(byte *)(param_1 + 200) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010ad1fccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x98) + 0x18))();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad1fcd4);
  (*pcVar1)();
}



/* Entry: 10ad1fcd4; end: 10ad1fdef;  */

undefined8 * FUN_10ad1fcd4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plStack_30;
  long *plStack_28;
  
  *param_1 = &PTR_DAT_110c6e990;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar4 = (long *)0xf0;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110c6ea10;
  plVar4[0x12] = 0;
  plVar4[0x11] = 0;
  plVar4[0x10] = 0;
  plVar4[0xf] = 0;
  plVar4[0xe] = 0;
  plVar4[0xd] = 0;
  plVar4[0xc] = 0;
  plVar4[0xb] = 0;
  plVar4[10] = 0;
  plVar4[9] = 0;
  plVar4[8] = 0;
  plVar4[7] = 0;
  plVar4[6] = 0;
  plVar4[5] = 0;
  plVar4[0x14] = 0;
  plVar4[0x13] = 0;
  plVar4[0x16] = 0;
  plVar4[0x15] = 0;
  plVar4[0x18] = 0;
  plVar4[0x17] = 0;
  plVar4[0x1a] = 0;
  plVar4[0x19] = 0;
  plVar4[0x1c] = 0;
  plVar4[0x1b] = 0;
  plVar4[0x1d] = 0;
  plStack_30 = plVar4 + 3;
  plVar4[4] = 0;
  *plStack_30 = 0;
  *(undefined4 *)((long)plVar4 + 0x1c) = 1;
  plVar4[0xf] = 0;
  plVar4[0xe] = 0;
  plVar4[0x11] = 0;
  plVar4[0x10] = 0;
  plVar4[0xb] = 0;
  plVar4[10] = 0;
  plVar4[0xd] = 0;
  plVar4[0xc] = 0;
  plVar4[7] = 0;
  plVar4[6] = 0;
  plVar4[9] = 0;
  plVar4[8] = 0;
  plVar4[5] = 0;
  plVar4[4] = 0;
  *(undefined4 *)(plVar4 + 0x12) = 0;
  plVar4[0x13] = 0;
  plVar4[0x14] = 0;
  *(undefined1 *)(plVar4 + 0x16) = 0;
  plVar4[0x15] = 0;
  plStack_28 = plVar4;
  FUN_10ad1fdf0(param_1 + 1,&plStack_30);
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
  return param_1;
}



/* Entry: 10ad1fdf0; end: 10ad1feb3;  */

undefined8 * FUN_10ad1fdf0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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



/* Entry: 10ad1feb4; end: 10ad202b3;  */

/* WARNING: Removing unreachable block (ram,0x00010ad200f0) */

void FUN_10ad1feb4(long param_1,undefined8 *param_2)

{
  uint uVar1;
  uint3 *puVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  uint *puVar10;
  undefined4 uVar11;
  uint uVar12;
  ulong uVar13;
  uint3 *puVar14;
  uint3 *puVar15;
  uint3 auStack_98 [2];
  long lStack_90;
  byte bStack_81;
  char cStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined4 auStack_48 [6];
  
  FUN_10ad1fb4c(*(undefined8 *)(param_1 + 8));
  uVar13 = param_2[1];
  puVar5 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar13 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar5 = param_2;
  }
  func_0x00010a1512bc(puVar5,uVar13);
  if ((int)puVar5 == 0) {
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
    _CFURLCreateWithFileSystemPath(uVar7,puVar6,0,0);
    uVar9 = uVar7;
    _ExtAudioFileOpenURL();
    if ((int)uVar9 != 0) {
      FUN_10a00946c(&UNK_10f63b8ac);
      goto LAB_10ad20244;
    }
    _CFRelease(uVar7);
    _objc_release(puVar6);
LAB_10ad200f8:
    auStack_98[0]._0_4_ = 0x28;
    uVar9 = *(undefined8 *)(*(long *)(param_1 + 8) + 8);
    _ExtAudioFileGetProperty(uVar9,0x66666d74,auStack_98,*(long *)(param_1 + 8) + 0x48);
    if ((int)uVar9 == 0) {
      auStack_48[0] = 8;
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 8) + 8);
      _ExtAudioFileGetProperty(uVar9,0x2366726d,auStack_48,*(long *)(param_1 + 8) + 0x70);
      if ((int)uVar9 == 0) {
        puVar10 = *(uint **)(param_1 + 8);
        if ((char)puVar10[0x34] == '\x01') {
          uVar12 = *puVar10;
        }
        else {
          uVar12 = (uint)*(double *)(puVar10 + 0x12);
          *puVar10 = uVar12;
        }
        *(double *)(puVar10 + 8) = (double)uVar12;
        puVar10[0x10] = 0x20;
        puVar10[0xc] = 4;
        puVar10[0xd] = 1;
        puVar10[10] = 0x6c70636d;
        puVar10[0xb] = 9;
        puVar10[0xe] = 4;
        puVar10[0xf] = 1;
        uVar9 = *(undefined8 *)(puVar10 + 2);
        _ExtAudioFileSetProperty(uVar9,0x63666d74,0x28);
        if ((int)uVar9 == 0) {
          if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
            func_0x00010ae06f08(1,8,&UNK_10f6a55a4,&UNK_10f6a569d,0xa7,&UNK_10f6a56e8);
          }
          return;
        }
      }
    }
    FUN_10a00946c(&UNK_10f63b8ac);
  }
  else {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_60,*param_2,param_2[1]);
    }
    else {
      uStack_58 = param_2[1];
      uStack_60 = *param_2;
      lStack_50 = param_2[2];
    }
    FUN_10ad03508(auStack_48,&uStack_60);
    if (lStack_50 < 0) {
      __ZdlPv(uStack_60);
    }
    FUN_10a0f1b8c(auStack_98,auStack_48,0);
    FUN_10a26ad00(*(long *)(param_1 + 8) + 0x98,auStack_98);
    if (cStack_68 == '\x01') {
      FUN_10a0f1ea0(auStack_98);
    }
    if ((*(byte *)(*(long *)(param_1 + 8) + 200) & 1) == 0) {
      FUN_10a10a2f4(&UNK_10f6a568e,param_2);
      goto LAB_10ad20244;
    }
    FUN_10a0f2388(auStack_98,param_2);
    uVar13 = (ulong)bStack_81;
    puVar14 = (uint3 *)CONCAT44((undefined4)auStack_98[1],(undefined4)auStack_98[0]);
    puVar2 = (uint3 *)((long)CONCAT44((undefined4)auStack_98[1],(undefined4)auStack_98[0]) +
                      lStack_90);
    if (-1 < (char)bStack_81) {
      puVar14 = auStack_98;
      puVar2 = (uint3 *)((long)auStack_98 + uVar13);
    }
    if (puVar14 != puVar2) {
      do {
        uVar4 = (undefined1)*puVar14;
        ___tolower();
        puVar15 = (uint3 *)((long)puVar14 + 1);
        *(undefined1 *)puVar14 = uVar4;
        puVar14 = puVar15;
      } while (puVar15 != puVar2);
      uVar13 = (ulong)bStack_81;
    }
    uVar11 = 0x4d504733;
    if ((uint)uVar13 >> 7 == 0) {
      if ((uint)uVar13 == 3) {
        puVar14 = auStack_98;
LAB_10ad20064:
        uVar12 = *puVar14 & 0xff00ff;
        uVar1 = uVar12 >> 8 | ((*puVar14 & 0xff00ff00) >> 8 | uVar12 << 8) << 0x10;
        uVar12 = (uint)(0x77617600 < uVar1);
        if (uVar1 < 0x77617600) {
          uVar12 = 0xffffffff;
        }
        uVar11 = 0x57415645;
        if (uVar12 != 0) {
          uVar11 = 0x4d504733;
        }
      }
    }
    else if (lStack_90 == 3) {
      puVar14 = (uint3 *)CONCAT44((undefined4)auStack_98[1],(undefined4)auStack_98[0]);
      goto LAB_10ad20064;
    }
    lVar8 = *(long *)(param_1 + 8);
    _AudioFileOpenWithCallbacks(lVar8,FUN_10ad1fbac,0,FUN_10ad1fcb4,0,uVar11,lVar8 + 0x90);
    if ((int)lVar8 == 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x90);
      _ExtAudioFileWrapAudioFileID(uVar9,0,*(long *)(param_1 + 8) + 8);
      if ((int)uVar9 == 0) {
        if ((char)bStack_81 < '\0') {
          __ZdlPv(CONCAT44((undefined4)auStack_98[1],(undefined4)auStack_98[0]));
        }
        goto LAB_10ad200f8;
      }
    }
  }
  FUN_10a00946c(&UNK_10f63b8ac);
LAB_10ad20244:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10ad20248);
  (*pcVar3)();
}



/* Entry: 10ad202b4; end: 10ad202cf;  */

float FUN_10ad202b4(long param_1)

{
  return (float)((double)*(long *)(*(long *)(param_1 + 8) + 0x70) /
                *(double *)(*(long *)(param_1 + 8) + 0x48));
}



/* Entry: 10ad202d0; end: 10ad203af;  */

uint FUN_10ad202d0(long param_1,long param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uStack_38;
  int iStack_34;
  
  lVar2 = *(long *)(param_1 + 8);
  *(undefined4 *)(lVar2 + 0x78) = 1;
  *(undefined4 *)(lVar2 + 0x80) = 1;
  *(uint *)(lVar2 + 0x84) = param_3 << 2;
  lVar3 = 0xdeadbeef;
  if (param_3 != 0) {
    lVar3 = param_2;
  }
  *(long *)(lVar2 + 0x88) = lVar3;
  uStack_38 = param_3;
  _ExtAudioFileRead(*(undefined8 *)(lVar2 + 8),&uStack_38);
  if (uStack_38 < param_3) {
    lVar3 = *(long *)(param_1 + 8);
    iVar1 = *(int *)(lVar3 + 4);
    if (iVar1 + -1 == 0 || iVar1 < 1) {
      if (iVar1 != -1) {
        return uStack_38;
      }
    }
    else {
      *(int *)(lVar3 + 4) = iVar1 + -1;
    }
    _ExtAudioFileSeek(*(undefined8 *)(lVar3 + 8),0);
    iStack_34 = param_3 - uStack_38;
    lVar3 = *(long *)(param_1 + 8);
    *(ulong *)(lVar3 + 0x88) = param_2 + (ulong)uStack_38 * 4;
    *(int *)(lVar3 + 0x84) = iStack_34 * 4;
    _ExtAudioFileRead(*(undefined8 *)(lVar3 + 8),&iStack_34,lVar3 + 0x78);
    uStack_38 = uStack_38 + iStack_34;
  }
  return uStack_38;
}



/* Entry: 10ad203b0; end: 10ad2040f;  */

void FUN_10ad203b0(float param_1,long *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_1;
  (**(code **)(*param_2 + 0x18))();
  if (param_1 <= fVar1) {
    fVar1 = param_1;
  }
  fVar2 = 0.0;
  if (0.0 <= param_1) {
    fVar2 = fVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbbff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__ExtAudioFileSeek_11034afd8)
            (*(undefined8 *)(param_2[1] + 8),(long)(*(double *)(param_2[1] + 0x48) * (double)fVar2))
  ;
  return;
}



/* Entry: 10ad20410; end: 10ad2045f;  */

float FUN_10ad20410(long param_1)

{
  long lStack_28;
  
  lStack_28 = 0;
  _ExtAudioFileTell(*(undefined8 *)(*(long *)(param_1 + 8) + 8),&lStack_28);
  return (float)((double)lStack_28 / *(double *)(*(long *)(param_1 + 8) + 0x48));
}



/* Entry: 10ad20460; end: 10ad204bb;  */

void FUN_10ad20460(long param_1,undefined4 param_2)

{
  *(undefined4 *)(*(long *)(param_1 + 8) + 4) = param_2;
  return;
}



/* Entry: 10ad204bc; end: 10ad20513;  */

long FUN_10ad204bc(long param_1)

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



/* Entry: 10ad20514; end: 10ad20523;  */

void FUN_10ad20514(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6ea10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ad20524; end: 10ad20543;  */

void FUN_10ad20524(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6ea10;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad20544; end: 10ad20583;  */

long FUN_10ad20544(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10ad1fb4c(param_1 + 0x18);
  if (*(char *)(param_1 + 0xe0) == '\x01') {
    FUN_10a0f1ea0(param_1 + 0xb0);
  }
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



/* Entry: 10ad20584; end: 10ad20587;  */

void FUN_10ad20584(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad20588; end: 10ad2105b;  */

undefined8 * FUN_10ad20588(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long *plStack_320;
  long lStack_318;
  undefined8 uStack_310;
  undefined8 *puStack_308;
  undefined8 uStack_300;
  undefined *puStack_2f8;
  undefined **ppuStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined *puStack_2b0;
  undefined **ppuStack_2a8;
  code *pcStack_270;
  undefined **appuStack_268 [7];
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined **appuStack_220 [7];
  long lStack_1e8;
  code *pcStack_1e0;
  long alStack_1d8 [7];
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined **appuStack_190 [7];
  long *plStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined **appuStack_138 [7];
  code *pcStack_100;
  undefined8 *puStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined **appuStack_b0 [7];
  long *plStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_110c6ea60;
  param_1[1] = &PTR_DAT_110c6eb08;
  param_1[9] = 0;
  param_1[10] = 0;
  puVar8 = param_1;
  FUN_109d1a80c();
  uStack_2b8 = *puVar8;
  uStack_2c0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2e8 = 0;
  puStack_2f8 = &UNK_1053a6a3c;
  ppuStack_2f0 = &PTR_DAT_110ae9180;
  pcStack_270 = FUN_10ad22f8c;
  appuStack_268[0] = &PTR_DAT_110c6ecc8;
  puStack_228 = &UNK_1053a6a3c;
  appuStack_220[0] = &PTR_DAT_110ae9180;
  puStack_2b0 = &UNK_1053a6a3c;
  ppuStack_2a8 = &PTR_DAT_110ae9180;
  lVar6 = 0x8230;
  uStack_230 = uStack_2b8;
  __Znwm();
  pcStack_100 = (code *)*param_2;
  plVar7 = (long *)param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  if (plVar7 != (long *)0x0) {
    plVar15 = plVar7 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *plVar15 = *plVar15 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puStack_f8 = (undefined8 *)&UNK_109896774;
  ppuStack_f0 = &PTR_DAT_110b17068;
  uStack_e8 = pcStack_100;
  plStack_e0 = plVar7;
  func_0x000109d18d1c(lVar6,&UNK_10f6a5a6c,0x18,&pcStack_100);
  func_0x0001092ba41c(&pcStack_100);
  *(undefined4 *)(lVar6 + 0xb8) = 0;
  *(undefined8 *)(lVar6 + 200) = 0;
  *(undefined8 *)(lVar6 + 0xc0) = 0;
  *(undefined8 *)(lVar6 + 0xd8) = 0;
  *(undefined8 *)(lVar6 + 0xd0) = 0;
  *(undefined8 *)(lVar6 + 0xe8) = 0;
  *(undefined8 *)(lVar6 + 0xe0) = 0;
  *(undefined8 *)(lVar6 + 0xf8) = 0;
  *(undefined8 *)(lVar6 + 0xf0) = 0;
  *(undefined8 *)(lVar6 + 0x108) = 0;
  *(undefined8 *)(lVar6 + 0x100) = 0;
  *(undefined8 *)(lVar6 + 0x118) = 0;
  *(undefined8 *)(lVar6 + 0x110) = 0;
  *(undefined8 *)(lVar6 + 0x128) = 0;
  *(undefined8 *)(lVar6 + 0x120) = 0;
  *(undefined4 *)(lVar6 + 0x130) = 2;
  *(undefined4 *)(lVar6 + 0x138) = 0;
  *(undefined8 *)(lVar6 + 0x148) = 0;
  *(undefined8 *)(lVar6 + 0x140) = 0;
  *(undefined8 *)(lVar6 + 0x158) = 0;
  *(undefined8 *)(lVar6 + 0x150) = 0;
  *(undefined8 *)(lVar6 + 0x160) = 0;
  *(undefined8 *)(lVar6 + 0x168) = 0xac44;
  *(undefined8 *)(lVar6 + 0x170) = 0;
  *(undefined **)(lVar6 + 0x178) = &UNK_1053a6a3c;
  *(undefined ***)(lVar6 + 0x180) = &PTR_DAT_110950c70;
  *(undefined8 *)(lVar6 + 0x1b8) = 0;
  *(undefined1 *)(lVar6 + 0x1c0) = 0;
  *(undefined1 *)(lVar6 + 0x1f0) = 0;
  _bzero(lVar6 + 0x1f8,0x8000);
  *(undefined4 *)(lVar6 + 0x81f8) = 0x3f800000;
  *(undefined8 *)(lVar6 + 0x81fc) = 0;
  *(undefined8 *)(lVar6 + 0x820c) = 0;
  *(undefined8 *)(lVar6 + 0x8204) = 0;
  *(undefined4 *)(lVar6 + 0x8214) = 0;
  *(undefined4 *)(lVar6 + 0x8218) = 0x3f800000;
  *(undefined8 *)(lVar6 + 0x8224) = 0;
  *(undefined8 *)(lVar6 + 0x821c) = 0;
  if (plVar7 != (long *)0x0) {
    plVar15 = plVar7 + 1;
    do {
      lVar11 = *plVar15;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *plVar15 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  pcStack_100 = pcStack_270;
  (*(code *)appuStack_268[0][2])(&puStack_f8,appuStack_268);
  uStack_c0 = uStack_230;
  puStack_b8 = puStack_228;
  appuStack_b0[0] = &PTR_DAT_110ae9180;
  (*(code *)appuStack_220[0][2])(appuStack_b0,appuStack_220);
  puStack_228 = &UNK_1053a6a3c;
  (*(code *)*appuStack_220[0])(appuStack_220);
  appuStack_220[0] = &PTR_DAT_110ae9180;
  plStack_78 = (long *)0x0;
  plVar7 = (long *)0xb0;
  __Znwm();
  uVar12 = uStack_c0;
  plVar7[2] = 0;
  plVar7[1] = 0x200000006;
  *(undefined2 *)(plVar7 + 3) = 4;
  plVar7[5] = 0;
  plVar7[4] = 0;
  plVar7[7] = 0;
  plVar7[6] = 0;
  plVar7[9] = 0;
  plVar7[8] = 0;
  plVar7[0xb] = 0;
  plVar7[10] = 0;
  plVar7[0xd] = 0;
  plVar7[0xc] = 0;
  plVar7[0xf] = 0;
  plVar7[0xe] = 0;
  plVar7[0x10] = 0;
  plVar7[0x11] = (long)(plVar7 + 3);
  plVar7[0x12] = 0;
  *plVar7 = (long)&PTR_DAT_110c6eca0;
  *(undefined1 *)(plVar7 + 0x13) = 0;
  *(undefined1 *)(plVar7 + 0x15) = 0;
  plStack_320 = (long *)0x0;
  lStack_318 = 0;
  uStack_148 = uStack_c0;
  puStack_140 = puStack_b8;
  appuStack_138[0] = &PTR_DAT_110ae9180;
  plStack_150 = plVar7;
  plStack_78 = plVar7;
  (*(code *)appuStack_b0[0][2])(appuStack_138,appuStack_b0);
  puStack_b8 = &UNK_1053a6a3c;
  (*(code *)*appuStack_b0[0])(appuStack_b0);
  appuStack_b0[0] = &PTR_DAT_110ae9180;
  puVar8 = (undefined8 *)0xb8;
  __Znwm();
  *puVar8 = FUN_10ad23f10;
  puVar8[1] = FUN_10ad241b4;
  func_0x0001092ba17c(puVar8 + 2);
  plVar7 = plStack_150;
  plVar15 = (long *)puVar8[7];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plStack_150 = (long *)0x0;
  puVar8[10] = uStack_148;
  puVar8[9] = plVar7;
  puVar8[0xc] = &PTR_DAT_110ae9180;
  puVar8[0xb] = puStack_140;
  (*(code *)appuStack_138[0][2])(puVar8 + 0xc,appuStack_138);
  puStack_140 = &UNK_1053a6a3c;
  (*(code *)*appuStack_138[0])(appuStack_138);
  appuStack_138[0] = &PTR_DAT_110ae9180;
  puVar8[0x13] = uVar12;
  *(undefined1 *)(puVar8 + 0x14) = 0;
  *(undefined1 *)(puVar8 + 0x16) = 0;
  puVar9 = puVar8 + 0x13;
  func_0x0001092ba064(puVar9,puVar8);
  if (((ulong)puVar9 & 1) == 0) {
    FUN_10ad22a4c(puVar8 + 0x15,puVar8 + 9);
    puVar8[0x13] = puVar8[0x15];
    plVar7 = (long *)(puVar8[0x15] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(puVar8[0x13] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar8 + 0x16) = 1;
      lVar11 = puVar8[0x13];
      plVar7 = (long *)(lVar11 + 0x10);
      uVar12 = puVar8[3];
      do {
        lVar14 = *plVar7;
        if (lVar14 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            uStack_310 = 0;
            puStack_308 = puVar8;
            uStack_300 = uVar12;
            func_0x000109d1b588(lVar11 + 0x18,&uStack_310);
            *(undefined8 *)(lVar11 + 0x10) = 0;
            goto joined_r0x00010ad20ae8;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar14 >> 1 & 1) == 0);
    }
    plVar7 = (long *)puVar8[0x13];
    if (((uint)*(undefined8 *)(puVar8[0x13] + 0x10) >> 5 & 1) != 0) goto LAB_10ad20e54;
    if (plVar7 != (long *)0x0) {
      puVar2 = (ulong *)(plVar7 + 1);
      do {
        uVar13 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar13 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar13 & 0x1fffffffc) == 4) {
        do {
          uVar13 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar13 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar13 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    plVar7 = (long *)puVar8[0x15];
    if (plVar7 != (long *)0x0) {
      puVar2 = (ulong *)(plVar7 + 1);
      do {
        uVar13 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar13 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar13 & 0x1fffffffc) == 4) {
        do {
          uVar13 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar13 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar13 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    func_0x0001092ba100(puVar8 + 2);
    func_0x0001092ba41c(puVar8 + 10);
    plVar7 = (long *)puVar8[9];
    if (plVar7 != (long *)0x0) {
      puVar2 = (ulong *)(plVar7 + 1);
      do {
        uVar13 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar13 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar13 & 0x1fffffffc) == 4) {
        do {
          uVar13 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar13 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar13 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    func_0x000109d1a1d0(puVar8 + 2);
    __ZdlPv(puVar8);
  }
joined_r0x00010ad20ae8:
  if (plVar15 != (long *)0x0) {
    puVar2 = (ulong *)(plVar15 + 1);
    do {
      uVar13 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar13 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar13 & 0x1fffffffc) == 4) {
      do {
        uVar13 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar13 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar13 - 1 == 0) {
        (**(code **)(*plVar15 + 8))(plVar15);
      }
    }
  }
  func_0x0001092ba41c((ulong)&plStack_150 | 8);
  if (plStack_150 != (long *)0x0) {
    puVar2 = (ulong *)(plStack_150 + 1);
    do {
      uVar13 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar13 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar13 & 0x1fffffffc) == 4) {
      do {
        uVar13 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar13 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar13 - 1 == 0) {
        (**(code **)(*plStack_150 + 8))();
      }
    }
  }
  if (lStack_318 != 0) {
    func_0x0001092b4274((ulong)&plStack_320 | 8);
  }
  if (plStack_320 != (long *)0x0) {
    puVar2 = (ulong *)(plStack_320 + 1);
    do {
      uVar13 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar13 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar13 & 0x1fffffffc) == 4) {
      do {
        uVar13 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar13 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar13 - 1 == 0) {
        (**(code **)(*plStack_320 + 8))();
      }
    }
  }
  pcStack_1e0 = pcStack_100;
  lStack_1e8 = lVar6;
  (*(code *)puStack_f8[2])(alStack_1d8,&puStack_f8);
  uStack_1a0 = uStack_c0;
  puStack_198 = puStack_b8;
  appuStack_190[0] = &PTR_DAT_110ae9180;
  (*(code *)appuStack_b0[0][2])(appuStack_190,appuStack_b0);
  puStack_b8 = &UNK_1053a6a3c;
  (*(code *)*appuStack_b0[0])(appuStack_b0);
  plStack_158 = plStack_78;
  appuStack_b0[0] = &PTR_DAT_110ae9180;
  plStack_78 = (long *)0x0;
  func_0x0001092ba41c(&uStack_c0);
  (*(code *)*puStack_f8)(&puStack_f8);
  lVar6 = lStack_1e8;
  if (lStack_1e8 == 0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    puVar8 = (undefined8 *)0xb0;
    __Znwm();
    pcStack_100 = pcStack_1e0;
    (**(code **)(alStack_1d8[0] + 0x10))(&puStack_f8,alStack_1d8);
    uStack_c0 = uStack_1a0;
    puStack_b8 = puStack_198;
    appuStack_b0[0] = &PTR_DAT_110ae9180;
    (*(code *)appuStack_190[0][2])(appuStack_b0,appuStack_190);
    puStack_198 = &UNK_1053a6a3c;
    (*(code *)*appuStack_190[0])(appuStack_190);
    plStack_78 = plStack_158;
    appuStack_190[0] = &PTR_DAT_110ae9180;
    plStack_158 = (long *)0x0;
    *puVar8 = &PTR_FUN_110c6ecf0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = lVar6;
    puVar8[4] = pcStack_100;
    (*(code *)puStack_f8[2])(puVar8 + 5,&puStack_f8);
    puVar8[0xe] = &PTR_DAT_110ae9180;
    puVar8[0xc] = uStack_c0;
    puVar8[0xd] = puStack_b8;
    (*(code *)appuStack_b0[0][2])(puVar8 + 0xe,appuStack_b0);
    puStack_b8 = &UNK_1053a6a3c;
    (*(code *)*appuStack_b0[0])(appuStack_b0);
    puVar8[0x15] = plStack_78;
    appuStack_b0[0] = &PTR_DAT_110ae9180;
    plStack_78 = (long *)0x0;
    func_0x0001092ba41c(&uStack_c0);
    (*(code *)*puStack_f8)(&puStack_f8);
  }
  lStack_1e8 = 0;
  plVar7 = (long *)param_1[10];
  param_1[9] = lVar6;
  param_1[10] = puVar8;
  if (plVar7 != (long *)0x0) {
    plVar15 = plVar7 + 1;
    do {
      lVar6 = *plVar15;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *plVar15 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  FUN_10ad22fa4(&lStack_1e8);
  func_0x0001092ba41c(&uStack_230);
  (*(code *)*appuStack_268[0])(appuStack_268);
  func_0x0001092ba41c(&uStack_2b8);
  (*(code *)*ppuStack_2f0)(&ppuStack_2f0);
  lVar6 = param_1[9];
  *(undefined4 *)(lVar6 + 0xb8) = 0xac44;
  *(undefined8 *)(lVar6 + 0xd8) = 0x40e5888000000000;
  *(undefined4 *)(lVar6 + 0xf8) = 0x10;
  *(undefined8 *)(lVar6 + 0xe8) = 0x100000002;
  *(undefined8 *)(lVar6 + 0xe0) = 0xc6c70636d;
  *(undefined8 *)(lVar6 + 0xf0) = 0x100000002;
  plVar7 = (long *)0x0;
  _dispatch_queue_attr_make_with_qos_class(0,0x21,0);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = &UNK_10f6a5705;
  _dispatch_queue_create(&UNK_10f6a5705,plVar7);
  uVar12 = *(undefined8 *)(param_1[9] + 0x170);
  *(undefined **)(param_1[9] + 0x170) = puVar10;
  _objc_release(uVar12);
  _objc_release(plVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
LAB_10ad20e54:
  func_0x0001092af97c(plVar7 + 0x12);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10ad20fcc);
  (*pcVar5)();
}



/* Entry: 10ad2105c; end: 10ad21513;  */

/* WARNING: Removing unreachable block (ram,0x00010ad212e8) */

void FUN_10ad2105c(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  uint uVar1;
  uint3 *puVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  uint uVar10;
  ulong uVar11;
  uint3 *puVar12;
  uint3 *puVar13;
  long lVar14;
  uint3 auStack_a8 [2];
  long lStack_a0;
  byte bStack_91;
  char cStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined4 auStack_58 [6];
  
  FUN_10ad21514(param_2[9]);
  lVar14 = param_2[9];
  *(undefined8 *)(lVar14 + 0x178) = *param_5;
  (*(code *)**(undefined8 **)(lVar14 + 0x180))(lVar14 + 0x180);
  (**(code **)(param_5[1] + 0x10))(lVar14 + 0x180,param_5 + 1);
  uVar11 = param_3[1];
  puVar5 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar11 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar5 = param_3;
  }
  func_0x00010a1512bc(puVar5,uVar11);
  if ((int)puVar5 == 0) {
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
    _CFURLCreateWithFileSystemPath(uVar7,puVar6,0,0);
    uVar8 = uVar7;
    _ExtAudioFileOpenURL();
    if ((int)uVar8 != 0) {
      FUN_10a00946c(&UNK_10f63b8ac);
      goto LAB_10ad214a4;
    }
    _CFRelease(uVar7);
    _objc_release(puVar6);
LAB_10ad212f0:
    auStack_a8[0]._0_4_ = 0x28;
    uVar8 = *(undefined8 *)(param_2[9] + 0xc0);
    _ExtAudioFileGetProperty(uVar8,0x66666d74,auStack_a8,param_2[9] + 0x100);
    if ((int)uVar8 == 0) {
      auStack_58[0] = 8;
      uVar8 = *(undefined8 *)(param_2[9] + 0xc0);
      _ExtAudioFileGetProperty(uVar8,0x2366726d,auStack_58,param_2[9] + 0x128);
      if ((int)uVar8 == 0) {
        lVar14 = param_2[9];
        uVar10 = *(uint *)(lVar14 + 0x11c);
        if (1 < uVar10) {
          uVar8 = NEON_ucvtf((ulong)*(uint *)(lVar14 + 0xb8));
          *(undefined8 *)(lVar14 + 0xd8) = uVar8;
          *(undefined8 *)(lVar14 + 0xe0) = 0xc6c70636d;
          *(uint *)(lVar14 + 0xf4) = uVar10;
          *(undefined4 *)(lVar14 + 0xf8) = 0x10;
          *(uint *)(lVar14 + 0xe8) = uVar10 << 1;
          *(undefined4 *)(lVar14 + 0xec) = 1;
          *(uint *)(lVar14 + 0xf0) = uVar10 << 1;
        }
        *(float *)(lVar14 + 0x8218) = 1.0 / (float)uVar10;
        _memset_pattern16(lVar14 + 0x81f8,&UNK_10dfc9020,0x20);
        if (uVar10 != 0) {
          uVar11 = 0;
          do {
            (**(code **)(*param_2 + 0x68))
                      (*(undefined4 *)(lVar14 + uVar11 * 4 + 0x81f8),param_2,uVar11);
            uVar11 = uVar11 + 1;
            lVar14 = param_2[9];
          } while (uVar11 < *(uint *)(lVar14 + 0x11c));
        }
        uVar8 = *(undefined8 *)(lVar14 + 0xc0);
        _ExtAudioFileSetProperty(uVar8,0x63666d74,0x28,lVar14 + 0xd8);
        if ((int)uVar8 == 0) {
          if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
            func_0x00010ae06f08(1,8,&UNK_10f6a571c,&UNK_10f6a576d,0x94,&UNK_10f6a5801);
          }
          FUN_109d1b124(param_1);
          return;
        }
      }
    }
    FUN_10a00946c(&UNK_10f63b8ac);
  }
  else {
    FUN_10a34bb2c(param_2[9] + 200,param_4);
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_70,*param_3,param_3[1]);
    }
    else {
      uStack_68 = param_3[1];
      uStack_70 = *param_3;
      lStack_60 = param_3[2];
    }
    FUN_10ad03508(auStack_58,&uStack_70);
    if (lStack_60 < 0) {
      __ZdlPv(uStack_70);
    }
    FUN_10a0f1b8c(auStack_a8,auStack_58,0);
    FUN_10a26ad00(param_2[9] + 0x1c0,auStack_a8);
    if (cStack_78 == '\x01') {
      FUN_10a0f1ea0(auStack_a8);
    }
    if ((*(byte *)(param_2[9] + 0x1f0) & 1) == 0) {
      FUN_10a10a2f4(&UNK_10f6a568e,param_3);
      goto LAB_10ad214a4;
    }
    FUN_10a0f2388(auStack_a8,param_3);
    uVar11 = (ulong)bStack_91;
    puVar12 = (uint3 *)CONCAT44((undefined4)auStack_a8[1],(undefined4)auStack_a8[0]);
    puVar2 = (uint3 *)((long)CONCAT44((undefined4)auStack_a8[1],(undefined4)auStack_a8[0]) +
                      lStack_a0);
    if (-1 < (char)bStack_91) {
      puVar12 = auStack_a8;
      puVar2 = (uint3 *)((long)auStack_a8 + uVar11);
    }
    if (puVar12 != puVar2) {
      do {
        uVar4 = (undefined1)*puVar12;
        ___tolower();
        puVar13 = (uint3 *)((long)puVar12 + 1);
        *(undefined1 *)puVar12 = uVar4;
        puVar12 = puVar13;
      } while (puVar13 != puVar2);
      uVar11 = (ulong)bStack_91;
    }
    uVar9 = 0x4d504733;
    if ((uint)uVar11 >> 7 == 0) {
      if ((uint)uVar11 == 3) {
        puVar12 = auStack_a8;
LAB_10ad2125c:
        uVar10 = *puVar12 & 0xff00ff;
        uVar1 = uVar10 >> 8 | ((*puVar12 & 0xff00ff00) >> 8 | uVar10 << 8) << 0x10;
        uVar10 = (uint)(0x77617600 < uVar1);
        if (uVar1 < 0x77617600) {
          uVar10 = 0xffffffff;
        }
        uVar9 = 0x57415645;
        if (uVar10 != 0) {
          uVar9 = 0x4d504733;
        }
      }
    }
    else if (lStack_a0 == 3) {
      puVar12 = (uint3 *)CONCAT44((undefined4)auStack_a8[1],(undefined4)auStack_a8[0]);
      goto LAB_10ad2125c;
    }
    lVar14 = param_2[9];
    _AudioFileOpenWithCallbacks(lVar14,FUN_10ad2162c,0,FUN_10ad21734,0,uVar9,lVar14 + 0x1b8);
    if ((int)lVar14 == 0) {
      uVar8 = *(undefined8 *)(param_2[9] + 0x1b8);
      _ExtAudioFileWrapAudioFileID(uVar8,0,param_2[9] + 0xc0);
      if ((int)uVar8 == 0) {
        if ((char)bStack_91 < '\0') {
          __ZdlPv(CONCAT44((undefined4)auStack_a8[1],(undefined4)auStack_a8[0]));
        }
        goto LAB_10ad212f0;
      }
    }
  }
  FUN_10a00946c(&UNK_10f63b8ac);
LAB_10ad214a4:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10ad214a8);
  (*pcVar3)();
}



/* Entry: 10ad21514; end: 10ad2162b;  */

void FUN_10ad21514(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  char *pcStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  lStack_70 = *(long *)(param_1 + 0xc0);
  lStack_68 = *(long *)(param_1 + 0x1b8);
  if (lStack_70 != 0 || lStack_68 != 0) {
    puStack_78 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x4012000000;
    uStack_48 = 0x10ad21754;
    uStack_40 = 0x10ad21764;
    pcStack_38 = "";
    plStack_28 = *(long **)(param_1 + 0xd0);
    uStack_30 = *(undefined8 *)(param_1 + 200);
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_10ad2176c;
    puStack_80 = &UNK_110c6eb20;
    puStack_58 = puStack_78;
    func_0x000107c27d8c(*(undefined8 *)(param_1 + 0x170),&puStack_98);
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    if (*(char *)(param_1 + 0x1f0) == '\x01') {
      FUN_10a0f1ea0(param_1 + 0x1c0);
      *(undefined1 *)(param_1 + 0x1f0) = 0;
    }
    __Block_object_dispose(&uStack_60,8);
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
  }
  return;
}



/* Entry: 10ad2162c; end: 10ad21733;  */

undefined8
FUN_10ad2162c(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if ((*(byte *)(param_1 + 0x1f0) & 1) != 0) {
    (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x1c0) + 0x28))();
    plVar2 = (long *)**(undefined8 **)(param_1 + 0x1c0);
    (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
    if ((int)plVar2 == 0) {
      if ((*(byte *)(param_1 + 0x1f0) & 1) == 0) goto LAB_10ad21730;
      plVar2 = (long *)**(undefined8 **)(param_1 + 0x1c0);
      (**(code **)(*plVar2 + 0x20))(plVar2,param_4,1,param_3);
      if (param_5 == (undefined4 *)0x0) {
        return 0;
      }
      uVar4 = SUB84(plVar2,0);
      uVar3 = 0;
    }
    else {
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f6a571c,&UNK_10f6a581b,0xb3,&UNK_10f6a566d,param_7,param_8,
                            plVar2);
      }
      uVar3 = 0xffffffd8;
      if (param_5 == (undefined4 *)0x0) {
        return 0xffffffd8;
      }
      uVar4 = 0;
    }
    *param_5 = uVar4;
    return uVar3;
  }
LAB_10ad21730:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad21734);
  (*pcVar1)();
}



/* Entry: 10ad21734; end: 10ad2176b;  */

void FUN_10ad21734(long param_1)

{
  code *pcVar1;
  
  if ((*(byte *)(param_1 + 0x1f0) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010ad2174c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x1c0) + 0x18))();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad21754);
  (*pcVar1)();
}



/* Entry: 10ad2176c; end: 10ad21803;  */

void FUN_10ad2176c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    _ExtAudioFileDispose();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    _AudioFileClose();
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  plVar5 = *(long **)(lVar4 + 0x38);
  *(undefined8 *)(lVar4 + 0x30) = 0;
  *(undefined8 *)(lVar4 + 0x38) = 0;
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
  return;
}



/* Entry: 10ad21804; end: 10ad21a0b;  */

void FUN_10ad21804(long param_1,undefined4 param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  undefined4 uStack_48;
  undefined1 uStack_44;
  
  piVar1 = (int *)(*(long *)(param_1 + 0x48) + 0x130);
  if (*piVar1 == 1) {
    bVar9 = true;
  }
  else {
    bVar9 = *piVar1 == 2;
  }
  piVar1 = (int *)(*(long *)(param_1 + 0x48) + 0x130);
  do {
    iVar4 = *piVar1;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar8) {
      *piVar1 = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  lVar6 = *(long *)(param_1 + 0x40);
  if (lVar6 != 0) {
    plVar2 = (long *)(lVar6 + 0x10);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *plVar2 = *plVar2 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  lVar11 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x170);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc6000000;
  pcStack_78 = FUN_10ad21a0c;
  puStack_70 = &UNK_110c6eb50;
  if (lVar6 != 0) {
    plVar2 = (long *)(lVar6 + 0x10);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *plVar2 = *plVar2 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  lStack_68 = param_1;
  uStack_60 = uVar5;
  lStack_58 = lVar6;
  lStack_50 = lVar11;
  uStack_48 = param_2;
  uStack_44 = bVar9;
  func_0x000107c27d8c(uVar10,&puStack_88);
  if (iVar4 == 2) {
    if (lVar6 != 0) {
      plVar2 = (long *)(lVar6 + 0x10);
      do {
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar9) {
          *plVar2 = *plVar2 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    uVar10 = *(undefined8 *)(param_1 + 0x48);
    plVar2 = *(long **)(param_1 + 0x50);
    if (plVar2 == (long *)0x0) {
      FUN_10ad21af4(uVar5,lVar6,uVar10,0);
    }
    else {
      plVar3 = plVar2 + 1;
      do {
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar9) {
          *plVar3 = *plVar3 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      FUN_10ad21af4(uVar5,lVar6,uVar10,plVar2);
      do {
        lVar11 = *plVar3;
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar9) {
          *plVar3 = lVar11 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    if (lVar6 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv(lVar6);
    }
  }
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    func_0x00010ae06f08(1,8,&UNK_10f6a571c,&UNK_10f6a5892,0xe0,&UNK_10f6a58ce);
  }
  if (lStack_58 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (lVar6 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar6);
  }
  return;
}



/* Entry: 10ad21a0c; end: 10ad21abb;  */

void FUN_10ad21a0c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  plVar4 = *(long **)(param_1 + 0x30);
  if (plVar4 != (long *)0x0) {
    lVar6 = *(long *)(param_1 + 0x20);
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      lVar5 = *(long *)(param_1 + 0x28);
      if (lVar5 != 0) {
        if ((*(byte *)(param_1 + 0x44) & 1) == 0) {
          lVar5 = *(long *)(lVar5 + 0x48);
        }
        else {
          lVar5 = *(long *)(lVar5 + 0x48);
          *(undefined8 *)(lVar5 + 0x150) = *(undefined8 *)(param_1 + 0x38);
          *(undefined8 *)(lVar5 + 0x158) = 0;
          *(undefined4 *)(lVar5 + 0x168) = *(undefined4 *)(*(long *)(lVar6 + 0x48) + 0xb8);
        }
        *(undefined4 *)(lVar5 + 0x16c) = *(undefined4 *)(param_1 + 0x40);
      }
      plVar1 = plVar4 + 1;
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
        return;
      }
    }
  }
  return;
}



/* Entry: 10ad21abc; end: 10ad21af3;  */

void FUN_10ad21abc(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_2 + 0x30);
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar5;
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
  return;
}



/* Entry: 10ad21af4; end: 10ad21c57;  */

void FUN_10ad21af4(long param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  
  __ZNSt3__16chrono12steady_clock3nowEv();
  uVar5 = (ulong)*(uint *)(param_3 + 0x168);
  uVar2 = 0;
  if (uVar5 != 0) {
    uVar2 = (long)((*(long *)(param_3 + 0x158) -
                   (((param_1 - *(long *)(param_3 + 0x150)) / 1000000 + 0x46) * uVar5) / 1000) *
                  1000) / (long)uVar5;
  }
  if (param_4 != 0) {
    plVar1 = (long *)(param_4 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  _dispatch_time(0,((uVar2 & ((long)uVar2 >> 0x3f ^ 0xffffffffffffffffU)) * 1000000000) / 1000);
  if (param_2 != 0) {
    plVar1 = (long *)(param_2 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (param_4 != 0) {
    plVar1 = (long *)(param_4 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  func_0x000107c27d84();
  if (param_4 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_2 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_4 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(param_4);
  }
  return;
}



/* Entry: 10ad21c58; end: 10ad2224f;  */

void FUN_10ad21c58(long param_1)

{
  int *piVar1;
  short *psVar2;
  long *plVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  short *psVar13;
  short sVar14;
  int iVar15;
  short *psVar16;
  short *psVar17;
  ulong uVar18;
  uint uVar19;
  long *plVar20;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  undefined8 *puStack_80;
  long *plStack_78;
  long lStack_70;
  code *pcStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  if (*(long *)(*(long *)(param_1 + 0x28) + 8) == -1) {
    return;
  }
  puStack_80 = (undefined8 *)0x0;
  plStack_78 = (long *)0x0;
  plVar8 = *(long **)(param_1 + 0x38);
  if (((plVar8 != (long *)0x0) &&
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_78 = plVar8, plVar8 != (long *)0x0)) &&
     (puVar10 = *(undefined8 **)(param_1 + 0x30), puStack_80 = puVar10, puVar10 != (undefined8 *)0x0
     )) {
    piVar1 = (int *)(puVar10 + 0x26);
    do {
      if (*piVar1 != 1) {
        ClearExclusiveLocal();
        lVar12 = 0x1000;
        __Znam();
        plVar8 = (long *)0x20;
        lStack_90 = lVar12;
        __Znwm();
        *plVar8 = (long)&PTR_FUN_110c6ed50;
        plVar8[1] = 0;
        plVar8[2] = 0;
        plVar8[3] = lVar12;
        plStack_88 = plVar8;
        _bzero(lVar12,0x1000);
        *(undefined4 *)(puVar10 + 0x27) = 1;
        *(int *)(puVar10 + 0x28) = *(int *)((long)puVar10 + 0xf4);
        uStack_b0._0_4_ = 0x400;
        psVar2 = (short *)(puVar10 + 0x3f);
        puVar10[0x29] = psVar2;
        *(int *)((long)puVar10 + 0x144) = *(int *)((long)puVar10 + 0xf4) << 0xb;
        _ExtAudioFileRead(puVar10[0x18],&uStack_b0,puVar10 + 0x27);
        iVar15 = (int)uStack_b0;
        puVar10[0x29] = psVar2 + (uint)(*(int *)((long)puVar10 + 0xf4) * (int)uStack_b0);
        *(int *)((long)puVar10 + 0x144) =
             (0x800 - (int)uStack_b0) * *(int *)((long)puVar10 + 0xf4) * 2;
        uStack_b0._0_4_ = 0x800 - (int)uStack_b0;
        _ExtAudioFileRead(puVar10[0x18],&uStack_b0,puVar10 + 0x27);
        uVar19 = (int)uStack_b0 + iVar15;
        if (0x7ff < uVar19) goto LAB_10ad21ef0;
        iVar15 = *(int *)((long)puVar10 + 0x16c);
        if ((iVar15 + -1 == 0 || iVar15 < 1) && (iVar15 != -1)) {
          if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
            func_0x00010ae06f08(1,8,&UNK_10f6a571c,&UNK_10f6a59f3,0x1b0,&UNK_10f6a5a53);
          }
          piVar1 = (int *)(puVar10 + 0x26);
          goto LAB_10ad21e04;
        }
        if (iVar15 != -1) {
          *(int *)((long)puVar10 + 0x16c) = iVar15 + -1;
        }
        _ExtAudioFileSeek(puVar10[0x18],0);
        if (uVar19 < 0x400) {
          uStack_b0._0_4_ = 0x400 - (int)uStack_b0;
          puVar10[0x29] = psVar2 + *(int *)((long)puVar10 + 0xf4) * uVar19;
          *(int *)((long)puVar10 + 0x144) = (int)uStack_b0 * *(int *)((long)puVar10 + 0xf4) * 2;
          _ExtAudioFileRead(puVar10[0x18],&uStack_b0,puVar10 + 0x27);
          uVar19 = (int)uStack_b0 + uVar19;
        }
        uStack_b0._0_4_ = 0x800 - uVar19;
        puVar10[0x29] = psVar2 + *(int *)((long)puVar10 + 0xf4) * uVar19;
        *(int *)((long)puVar10 + 0x144) = (int)uStack_b0 * *(int *)((long)puVar10 + 0xf4) * 2;
        _ExtAudioFileRead(puVar10[0x18],&uStack_b0,puVar10 + 0x27);
        if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
          func_0x00010ae06f08(1,8,&UNK_10f6a571c,&UNK_10f6a59f3,0x1ae,&UNK_10f6a5a39);
        }
        goto LAB_10ad21ef0;
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = 2;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (*(char *)(puVar10[0x30] + 8) == '\x01') {
      (*(code *)puVar10[0x2f])(puVar10 + 0x2f);
    }
  }
  goto LAB_10ad22174;
  while( true ) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') break;
LAB_10ad21e04:
    if (*piVar1 != 0) {
      ClearExclusiveLocal();
      break;
    }
  }
LAB_10ad21ef0:
  lVar11 = lStack_90;
  lVar12 = 0;
  uVar19 = *(uint *)((long)puVar10 + 0xf4);
  psVar13 = psVar2;
  do {
    iVar15 = 0;
    sVar14 = 0;
    psVar16 = psVar13;
    psVar17 = (short *)((long)puVar10 + 0x821c);
    uVar18 = (ulong)uVar19;
    if (uVar19 != 0) {
      do {
        iVar15 = iVar15 + ((uint)((int)*psVar17 * (int)*psVar16) >> 0xf);
        sVar14 = (short)iVar15;
        uVar18 = uVar18 - 1;
        psVar16 = psVar16 + 1;
        psVar17 = psVar17 + 1;
      } while (uVar18 != 0);
    }
    psVar2[lVar12] = sVar14;
    lVar12 = lVar12 + 1;
    psVar13 = psVar13 + uVar19;
  } while (lVar12 != 0x800);
  _memcpy(lStack_90,psVar2,0x1000);
  plVar8 = plStack_88;
  puVar10[0x2b] = puVar10[0x2b] + 0x800;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  lVar12 = *(long *)(param_1 + 0x28);
  if (lVar12 != 0) {
    plVar20 = (long *)(lVar12 + 0x10);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar6) {
        *plVar20 = *plVar20 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lStack_a0 = lVar11;
  plStack_98 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar20 = plStack_88 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar6) {
        *plVar20 = *plVar20 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar20 = (long *)puVar10[2];
  uStack_b0 = uVar4;
  lStack_a8 = lVar12;
  puStack_58 = puVar10;
  if (plVar20 == (long *)0x0) {
    puVar9 = (undefined8 *)0x30;
    __Znwm();
    *puVar9 = uVar4;
    puVar9[1] = lVar12;
    if (lVar12 != 0) {
      plVar20 = (long *)(lVar12 + 0x10);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar6) {
          *plVar20 = *plVar20 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    puVar9[2] = lVar11;
    puVar9[3] = plVar8;
    puVar9[5] = 0x10ad23504;
    pcStack_68 = FUN_10ad23368;
    puStack_60 = puVar9;
    (**(code **)*puVar10)(puVar10,&pcStack_68);
  }
  else {
    lStack_70 = 0;
    (**(code **)(*plVar20 + 0x28))(plVar20,0,&lStack_70);
    if (lStack_70 != 0) {
      func_0x0001092af97c(&lStack_70);
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10ad221f4);
      (*pcVar7)();
    }
    puVar9 = (undefined8 *)0x38;
    __Znwm();
    *puVar9 = uVar4;
    puVar9[1] = lVar12;
    if (lVar12 != 0) {
      plVar3 = (long *)(lVar12 + 0x10);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *plVar3 = *plVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    puVar9[2] = lVar11;
    puVar9[3] = plVar8;
    lStack_a0 = 0;
    plStack_98 = (long *)0x0;
    puVar9[5] = FUN_10ad234c8;
    puVar9[6] = plVar20;
    pcStack_68 = (code *)0x10ad23338;
    puStack_60 = puVar9;
    (**(code **)*puVar10)(puVar10,&pcStack_68);
    __ZNSt13exception_ptrD1Ev(&lStack_70);
  }
  lStack_70 = 0;
  __ZNSt13exception_ptrD1Ev(&lStack_70);
  if (lVar12 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar12);
  }
  plVar8 = plStack_78;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  lVar12 = *(long *)(param_1 + 0x28);
  if (lVar12 != 0) {
    plVar20 = (long *)(lVar12 + 0x10);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar6) {
        *plVar20 = *plVar20 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (plStack_78 == (long *)0x0) {
    FUN_10ad21af4(uVar4,lVar12,puStack_80,0);
  }
  else {
    plVar20 = plStack_78 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar6) {
        *plVar20 = *plVar20 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    FUN_10ad21af4(uVar4,lVar12,puStack_80,plStack_78);
    do {
      lVar11 = *plVar20;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar6) {
        *plVar20 = lVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  if (lVar12 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar12);
  }
  plVar8 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar20 = plStack_88 + 1;
    do {
      lVar12 = *plVar20;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar6) {
        *plVar20 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
LAB_10ad22174:
  plVar8 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar20 = plStack_78 + 1;
    do {
      lVar12 = *plVar20;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar6) {
        *plVar20 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  return;
}



/* Entry: 10ad22250; end: 10ad22283;  */

long FUN_10ad22250(long param_1)

{
  func_0x00010ad14da8(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10ad22284; end: 10ad222cf;  */

void FUN_10ad22284(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_2 + 0x28);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar5;
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
  lVar4 = *(long *)(param_2 + 0x38);
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar5;
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
  return;
}



/* Entry: 10ad222d0; end: 10ad2243f;  */

void FUN_10ad222d0(long param_1)

{
  if (*(long *)(param_1 + 0x38) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10ad22440; end: 10ad2249f;  */

void FUN_10ad22440(long param_1)

{
  undefined8 uVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _ExtAudioFileSeek(uVar1,0);
  if (((int)uVar1 != 0) && ((bRam000000011330a9e8 & 1) != 0)) {
    func_0x00010ae06f08(0,1,&UNK_10f6a571c,&UNK_10f6a5984,300,&UNK_10f6a566d,in_x6,in_x7,uVar1);
  }
  return;
}



/* Entry: 10ad224a0; end: 10ad22507;  */

void FUN_10ad224a0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ad224b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,*(undefined4 *)(param_1[9] + 0x16c));
  return;
}



/* Entry: 10ad22508; end: 10ad225af;  */

void FUN_10ad22508(float param_1,long *param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(param_2[9] + 0xc0);
  fVar2 = param_1;
  (**(code **)(*param_2 + 0x70))();
  if (param_1 <= fVar2) {
    fVar2 = param_1;
  }
  fVar3 = 0.0;
  if (0.0 <= param_1) {
    fVar3 = fVar2;
  }
  lStack_38 = (long)(*(double *)(param_2[9] + 0x100) * (double)fVar3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc0000000;
  pcStack_50 = FUN_10ad225b0;
  puStack_48 = &UNK_11096b7c8;
  uStack_40 = uVar1;
  func_0x000107c27d8c(*(undefined8 *)(param_2[9] + 0x170),&puStack_60);
  return;
}



/* Entry: 10ad225b0; end: 10ad225bb;  */

void FUN_10ad225b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbbff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__ExtAudioFileSeek_11034afd8)
            (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10ad225bc; end: 10ad2260b;  */

float FUN_10ad225bc(long param_1)

{
  long lStack_28;
  
  lStack_28 = 0;
  _ExtAudioFileTell(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0xc0),&lStack_28);
  return (float)((double)lStack_28 / *(double *)(*(long *)(param_1 + 0x48) + 0x100));
}



/* Entry: 10ad2260c; end: 10ad2264f;  */

float FUN_10ad2260c(long param_1)

{
  return (float)((double)*(long *)(*(long *)(param_1 + 0x48) + 0x128) /
                *(double *)(*(long *)(param_1 + 0x48) + 0x100));
}



/* Entry: 10ad22650; end: 10ad226db;  */

undefined8 * FUN_10ad22650(float param_1,undefined8 *param_2,uint param_3)

{
  undefined **ppuVar1;
  long lVar2;
  float fVar3;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  ppuVar1 = &puStack_20;
  puStack_20 = &UNK_10f6a59ca;
  uStack_18 = 0x28;
  if (param_3 < 8) {
    lVar2 = param_2[9];
    if (param_3 <= *(uint *)(lVar2 + 0xf4)) {
      fVar3 = (float)NEON_fminnm(param_1 * *(float *)(lVar2 + 0x8218),0x3f800000);
      if (fVar3 <= -1.0) {
        fVar3 = -1.0;
      }
      *(float *)(lVar2 + (ulong)param_3 * 4 + 0x81f8) = fVar3;
      *(short *)(lVar2 + (ulong)param_3 * 2 + 0x821c) = (short)(int)(fVar3 * 32767.0);
    }
    return param_2;
  }
  FUN_10a0edfc4();
  *ppuVar1 = (undefined *)&PTR_FUN_110c6ea60;
  ppuVar1[1] = (undefined *)&PTR_DAT_110c6eb08;
  func_0x00010ad227c0(ppuVar1 + 9);
  if (ppuVar1[8] != (undefined *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  ppuVar1[1] = (undefined *)&PTR_DAT_110c6ec78;
  func_0x00010ad22724(ppuVar1 + 2);
  return ppuVar1;
}



/* Entry: 10ad226dc; end: 10ad226df;  */

undefined8 * FUN_10ad226dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6ea60;
  param_1[1] = &PTR_DAT_110c6eb08;
  func_0x00010ad227c0(param_1 + 9);
  if (param_1[8] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[1] = &PTR_DAT_110c6ec78;
  func_0x00010ad22724(param_1 + 2);
  return param_1;
}



/* Entry: 10ad226e0; end: 10ad226f3;  */

void FUN_10ad226e0(void)

{
  func_0x00010ad2276c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad226f4; end: 10ad2270b;  */

undefined8 FUN_10ad226f4(void)

{
  return 1;
}



/* Entry: 10ad2270c; end: 10ad22723;  */

void FUN_10ad2270c(long param_1)

{
  func_0x00010ad2276c(param_1 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad22724; end: 10ad22817;  */

long * FUN_10ad22724(long *param_1)

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



/* Entry: 10ad22818; end: 10ad22833;  */

void FUN_10ad22818(long param_1)

{
  if (param_1 != 0) {
    func_0x00010ad217ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10ad22834; end: 10ad22a4b;  */

long * FUN_10ad22834(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  func_0x0001092ba41c(param_1 + 1);
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



/* Entry: 10ad22a4c; end: 10ad22f8b;  */

void FUN_10ad22a4c(long *param_1,long *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar5 = (undefined8 *)0x80;
  __Znwm();
  *puVar5 = FUN_10ad23974;
  puVar5[1] = FUN_10ad23dcc;
  puVar5[0xd] = param_2;
  func_0x0001092ba17c(puVar5 + 2);
  lVar7 = puVar5[7];
  if (lVar7 != 0) {
    plVar6 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar7;
  lVar7 = *param_2;
  puVar5[0xb] = lVar7;
  plVar6 = (long *)(lVar7 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((uint)*(undefined8 *)(puVar5[0xb] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0xf) = 0;
    lVar7 = puVar5[0xb];
    plVar6 = (long *)(lVar7 + 0x10);
    uStack_38 = puVar5[3];
    do {
      lVar10 = *plVar6;
      if (lVar10 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') goto LAB_10ad22df4;
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar10 >> 1 & 1) == 0);
  }
  plVar6 = (long *)puVar5[0xb];
  if (((uint)*(undefined8 *)(puVar5[0xb] + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar6 + 0x12);
    goto LAB_10ad22e30;
  }
  if ((*(byte *)(plVar6 + 0x15) & 1) == 0) goto LAB_10ad22e30;
  puVar5[9] = plVar6[0x13];
  lVar7 = plVar6[0x14];
  puVar5[10] = lVar7;
  if (lVar7 == 0) {
LAB_10ad22b6c:
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar9 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar9 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar9 & 0x1fffffffc) == 4) {
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar9 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  else {
    plVar6 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar6 = (long *)puVar5[0xb];
    if (plVar6 != (long *)0x0) goto LAB_10ad22b6c;
  }
  plVar8 = (long *)puVar5[0xd];
  plVar6 = (long *)*plVar8;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar9 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar9 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar9 & 0x1fffffffc) == 4) {
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar9 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    plVar8 = (long *)puVar5[0xd];
  }
  *plVar8 = 0;
  lVar7 = puVar5[10];
  puVar5[0xe] = puVar5[9];
  puVar5[10] = 0;
  puVar5[0xb] = lVar7;
  puVar5[0xc] = lVar7;
  plVar6 = (long *)(lVar7 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((uint)*(undefined8 *)(puVar5[0xc] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0xf) = 1;
    lVar7 = puVar5[0xc];
    plVar6 = (long *)(lVar7 + 0x10);
    uStack_38 = puVar5[3];
    do {
      lVar10 = *plVar6;
      if (lVar10 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
LAB_10ad22df4:
          uStack_48 = 0;
          puStack_40 = puVar5;
          func_0x000109d1b588(lVar7 + 0x18,&uStack_48);
          *(undefined8 *)(lVar7 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar10 >> 1 & 1) == 0);
  }
  plVar6 = (long *)puVar5[0xc];
  if (((uint)*(undefined8 *)(puVar5[0xc] + 0x10) >> 5 & 1) == 0) {
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    plVar6 = (long *)puVar5[0xb];
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    puVar5[0xb] = 0;
    if (puVar5[0xe] != 0) {
      func_0x00010ad217ac();
      __ZdlPv();
    }
    func_0x0001092ba100(puVar5 + 2);
    plVar6 = (long *)puVar5[0xb];
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    plVar6 = (long *)puVar5[10];
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    func_0x000109d1a1d0(puVar5 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar5);
    return;
  }
  func_0x0001092af97c(plVar6 + 0x12);
LAB_10ad22e30:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad22e34);
  (*pcVar4)();
}



/* Entry: 10ad22f8c; end: 10ad22fa3;  */

void FUN_10ad22f8c(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  *(undefined1 *)(param_2 + 0x30) = 1;
  lVar4 = *(long *)(param_2 + 0x40);
  plVar1 = (long *)(lVar4 + 0x10);
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
        FUN_109d1b4dc(lVar4 + 0x18);
        goto LAB_109d191f0;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar5 >> 1 & 1) != 0) {
LAB_109d191f0:
      lVar4 = *(long *)(param_2 + 0x48);
      *param_1 = lVar4;
      if (lVar4 != 0) {
        plVar1 = (long *)(lVar4 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
  } while( true );
}



/* Entry: 10ad22fa4; end: 10ad23003;  */

long * FUN_10ad22fa4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_10ad23004(param_1 + 1);
  }
  if (param_1[0x12] != 0) {
    func_0x0001092b4274();
  }
  func_0x0001092ba41c(param_1 + 9);
  (**(code **)param_1[2])();
  return param_1;
}



/* Entry: 10ad23004; end: 10ad231ab;  */

void FUN_10ad23004(undefined8 *param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plStack_40;
  long lStack_38;
  
  (*(code *)*param_1)(&plStack_40,param_2,param_1);
  plVar7 = plStack_40;
  lVar8 = param_1[0x11];
  plStack_40 = (long *)0x0;
  param_1[0x11] = 0;
  plVar4 = (long *)(lVar8 + 0x10);
  do {
    lVar6 = *plVar4;
    lStack_38 = lVar8;
    if (lVar6 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 != '\0') goto LAB_10ad23074;
      if ((*(char *)(lVar8 + 0xa8) == '\x01') &&
         (plVar4 = *(long **)(lVar8 + 0xa0), plVar4 != (long *)0x0)) {
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
      *(undefined8 *)(lVar8 + 0x98) = param_2;
      *(long **)(lVar8 + 0xa0) = plVar7;
      *(undefined1 *)(lVar8 + 0xa8) = 1;
      *(undefined8 *)(lVar8 + 0x10) = 2;
      FUN_109d1b4dc(lVar8 + 0x18);
      plVar7 = (long *)0x0;
      goto LAB_10ad230fc;
    }
    ClearExclusiveLocal();
LAB_10ad23074:
  } while (((uint)lVar6 >> 1 & 1) == 0);
  if (lVar8 != 0) {
LAB_10ad230fc:
    func_0x0001092b4274(&lStack_38,lVar8);
  }
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
  if (plStack_40 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_40 + 1);
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
        (**(code **)(*plStack_40 + 8))();
      }
    }
  }
  return;
}



/* Entry: 10ad231ac; end: 10ad2324f;  */

void FUN_10ad231ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6ecf0;
  if (param_1[0x15] != 0) {
    func_0x0001092b4274();
  }
  func_0x0001092ba41c(param_1 + 0xc);
  (**(code **)param_1[5])();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 10ad23250; end: 10ad2329f;  */

void FUN_10ad23250(long param_1)

{
  FUN_10ad23004(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0xa8) != 0) {
    func_0x0001092b4274();
  }
  func_0x0001092ba41c(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010ad23298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x28))((undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10ad232a0; end: 10ad232db;  */

long FUN_10ad232a0(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c6ed30);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10ad232dc; end: 10ad232df;  */

void FUN_10ad232dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad232e0; end: 10ad23367;  */

long FUN_10ad232e0(long param_1)

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



/* Entry: 10ad23368; end: 10ad234c7;  */

void FUN_10ad23368(long *param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  lStack_40 = 0;
  plStack_38 = (long *)0x0;
  plVar5 = (long *)param_1[1];
  if ((((plVar5 != (long *)0x0) &&
       (__ZNSt3__119__shared_weak_count4lockEv(), plStack_38 = plVar5, plVar5 != (long *)0x0)) &&
      (lStack_40 = *param_1, lStack_40 != 0)) &&
     ((piVar1 = (int *)(*(long *)(lStack_40 + 0x48) + 0x130), *piVar1 != 1 && (*piVar1 != 2)))) {
    for (plVar5 = *(long **)(lStack_40 + 0x20); plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      plVar6 = (long *)plVar5[2];
      plStack_48 = (long *)param_1[3];
      lStack_50 = param_1[2];
      if (param_1[3] != 0) {
        plVar2 = (long *)(param_1[3] + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = *plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      (**(code **)(*plVar6 + 0x20))(plVar6,&lStack_50);
      plVar6 = plStack_48;
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
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
    }
  }
  plVar5 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar6 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  (*(code *)param_1[5])(param_1);
  return;
}



/* Entry: 10ad234c8; end: 10ad2353f;  */

void FUN_10ad234c8(long param_1)

{
  if (param_1 != 0) {
    func_0x00010ad14da8(param_1 + 0x10);
    if (*(long *)(param_1 + 8) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10ad23540; end: 10ad2390f;  */

void FUN_10ad23540(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_x24;
  
  uVar5 = (uint)((ulong)param_2 >> 0x20);
  uVar8 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ (ulong)uVar5) * -0x622015f714c7d297;
  uVar8 = ((ulong)uVar5 ^ uVar8 >> 0x2f ^ uVar8) * -0x622015f714c7d297;
  uVar15 = (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
  uVar8 = param_1[1];
  if (uVar8 != 0) {
    uVar6 = uVar8 - 1;
    if ((uVar8 & uVar6) == 0) {
      unaff_x24 = uVar6 & uVar15;
    }
    else {
      unaff_x24 = uVar15;
      if (uVar8 <= uVar15) {
        uVar11 = 0;
        if (uVar8 != 0) {
          uVar11 = uVar15 / uVar8;
        }
        unaff_x24 = uVar15 - uVar11 * uVar8;
      }
    }
    plVar9 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar9 != (long *)0x0) {
      do {
        while( true ) {
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto LAB_10ad23620;
          uVar11 = plVar9[1];
          if (uVar11 != uVar15) break;
          if (plVar9[2] == param_2) {
            return;
          }
        }
        if ((uVar8 & uVar6) == 0) {
          uVar11 = uVar11 & uVar6;
        }
        else if (uVar8 <= uVar11) {
          uVar7 = 0;
          if (uVar8 != 0) {
            uVar7 = uVar11 / uVar8;
          }
          uVar11 = uVar11 - uVar7 * uVar8;
        }
      } while (uVar11 == unaff_x24);
    }
  }
LAB_10ad23620:
  plVar9 = (long *)0x18;
  __Znwm();
  *plVar9 = 0;
  plVar9[1] = uVar15;
  plVar9[2] = param_3;
  if ((uVar8 == 0) || (*(float *)(param_1 + 4) * (float)uVar8 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar8) {
      uVar6 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar6 = uVar6 | uVar8 << 1;
    uVar11 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar11) {
      uVar6 = uVar11;
    }
    if (uVar6 - 1 == 0) {
      uVar6 = 2;
    }
    else if ((uVar6 & uVar6 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar8 = param_1[1];
    }
    if (uVar8 < uVar6) {
LAB_10ad236b8:
      if (uVar6 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10ad238fc);
        (*pcVar2)();
      }
      lVar3 = uVar6 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar8 = 0;
      param_1[1] = uVar6;
      do {
        *(undefined8 *)(*param_1 + uVar8 * 8) = 0;
        uVar8 = uVar8 + 1;
      } while (uVar6 != uVar8);
      plVar10 = (long *)param_1[2];
      uVar8 = uVar6;
      if (plVar10 != (long *)0x0) {
        uVar11 = plVar10[1];
        uVar7 = uVar6 - 1;
        if ((uVar6 & uVar7) == 0) {
          uVar11 = uVar11 & uVar7;
        }
        else if (uVar6 <= uVar11) {
          uVar14 = 0;
          if (uVar6 != 0) {
            uVar14 = uVar11 / uVar6;
          }
          uVar11 = uVar11 - uVar14 * uVar6;
        }
        *(long **)(*param_1 + uVar11 * 8) = param_1 + 2;
        plVar12 = (long *)*plVar10;
        while (plVar12 != (long *)0x0) {
          uVar14 = plVar12[1];
          if ((uVar6 & uVar7) == 0) {
            uVar14 = uVar14 & uVar7;
          }
          else if (uVar6 <= uVar14) {
            uVar1 = 0;
            if (uVar6 != 0) {
              uVar1 = uVar14 / uVar6;
            }
            uVar14 = uVar14 - uVar1 * uVar6;
          }
          plVar13 = plVar12;
          if (uVar14 != uVar11) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + uVar14 * 8) == 0) {
              *(long **)(lVar3 + uVar14 * 8) = plVar10;
              uVar11 = uVar14;
            }
            else {
              *plVar10 = *plVar12;
              *plVar12 = **(undefined8 **)(lVar3 + uVar14 * 8);
              **(long **)(lVar3 + uVar14 * 8) = (long)plVar12;
              plVar13 = plVar10;
            }
          }
          plVar10 = plVar13;
          plVar12 = (long *)*plVar13;
        }
      }
    }
    else if (uVar6 < uVar8) {
      uVar11 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar8 < 3) || ((uVar8 & uVar8 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar11) {
        uVar11 = 1L << (-LZCOUNT(uVar11 - 1) & 0x3fU);
      }
      if (uVar6 <= uVar11) {
        uVar6 = uVar11;
      }
      if (uVar6 < uVar8) {
        if (uVar6 != 0) goto LAB_10ad236b8;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar8 = 0;
      }
      else {
        uVar8 = param_1[1];
      }
    }
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x24 = uVar8 - 1 & uVar15;
    }
    else {
      unaff_x24 = uVar15;
      if (uVar8 <= uVar15) {
        uVar6 = 0;
        if (uVar8 != 0) {
          uVar6 = uVar15 / uVar8;
        }
        unaff_x24 = uVar15 - uVar6 * uVar8;
      }
    }
  }
  lVar3 = *param_1;
  plVar10 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = param_1 + 2;
    *plVar9 = *plVar10;
    *plVar10 = (long)plVar9;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar10;
    if (*plVar9 == 0) goto LAB_10ad23898;
    uVar15 = *(ulong *)(*plVar9 + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar15 = uVar15 & uVar8 - 1;
    }
    else if (uVar8 <= uVar15) {
      uVar6 = 0;
      if (uVar8 != 0) {
        uVar6 = uVar15 / uVar8;
      }
      uVar15 = uVar15 - uVar6 * uVar8;
    }
    plVar10 = (long *)(*param_1 + uVar15 * 8);
  }
  else {
    *plVar9 = *plVar10;
  }
  *plVar10 = (long)plVar9;
LAB_10ad23898:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10ad23910; end: 10ad23913;  */

void FUN_10ad23910(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ad23914; end: 10ad23927;  */

void FUN_10ad23914(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad23928; end: 10ad23937;  */

void FUN_10ad23928(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 10ad23938; end: 10ad2396f;  */

undefined8 FUN_10ad23938(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c6ed90);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10ad23970; end: 10ad23973;  */

void FUN_10ad23970(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad23974; end: 10ad23dcb;  */

void FUN_10ad23974(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
    plVar5 = *(long **)(param_1 + 0x58);
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(plVar5 + 0x12);
      goto LAB_10ad23c8c;
    }
    if ((*(byte *)(plVar5 + 0x15) & 1) == 0) goto LAB_10ad23c8c;
    *(long *)(param_1 + 0x48) = plVar5[0x13];
    lVar6 = plVar5[0x14];
    *(long *)(param_1 + 0x50) = lVar6;
    if (lVar6 == 0) {
LAB_10ad239dc:
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
    else {
      plVar5 = (long *)(lVar6 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar5 = *(long **)(param_1 + 0x58);
      if (plVar5 != (long *)0x0) goto LAB_10ad239dc;
    }
    plVar7 = *(long **)(param_1 + 0x68);
    plVar5 = (long *)*plVar7;
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
      plVar7 = *(long **)(param_1 + 0x68);
    }
    *plVar7 = 0;
    lVar6 = *(long *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(long *)(param_1 + 0x58) = lVar6;
    *(long *)(param_1 + 0x60) = lVar6;
    plVar5 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x78) = 1;
      lVar6 = *(long *)(param_1 + 0x60);
      plVar5 = (long *)(lVar6 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
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
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar6 + 0x18,&uStack_38);
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
  plVar5 = *(long **)(param_1 + 0x60);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10) >> 5 & 1) == 0) {
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
    plVar5 = *(long **)(param_1 + 0x58);
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
    *(undefined8 *)(param_1 + 0x58) = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      func_0x00010ad217ac();
      __ZdlPv();
    }
    func_0x0001092ba100(param_1 + 0x10);
    plVar5 = *(long **)(param_1 + 0x58);
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
    plVar5 = *(long **)(param_1 + 0x50);
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
    func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  func_0x0001092af97c(plVar5 + 0x12);
LAB_10ad23c8c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad23c90);
  (*pcVar4)();
}



/* Entry: 10ad23dcc; end: 10ad23f0f;  */

void FUN_10ad23dcc(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
    plVar4 = *(long **)(param_1 + 0x58);
    if (plVar4 == (long *)0x0) goto LAB_10ad23ef8;
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
    if ((uVar5 & 0x1fffffffc) != 4) goto LAB_10ad23ef8;
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
    if (plVar4 == (long *)0x0) goto LAB_10ad23ef8;
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
    if ((uVar5 & 0x1fffffffc) != 4) goto LAB_10ad23ef8;
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
    (**(code **)(*plVar4 + 8))();
  }
LAB_10ad23ef8:
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10ad23f10; end: 10ad241b3;  */

void FUN_10ad23f10(long param_1)

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
  
  if ((*(byte *)(param_1 + 0xb0) & 1) == 0) {
    FUN_10ad22a4c(param_1 + 0xa8,param_1 + 0x48);
    *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0xa8);
    plVar5 = (long *)(*(long *)(param_1 + 0xa8) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x98) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xb0) = 1;
      lVar8 = *(long *)(param_1 + 0x98);
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
  plVar5 = *(long **)(param_1 + 0x98);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x98) + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar5 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad240f0);
    (*pcVar4)();
  }
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
  plVar5 = *(long **)(param_1 + 0xa8);
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
  func_0x0001092ba100(param_1 + 0x10);
  func_0x0001092ba41c(param_1 + 0x50);
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
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10ad241b4; end: 10ad242c7;  */

void FUN_10ad241b4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    plVar4 = *(long **)(param_1 + 0x98);
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
    plVar4 = *(long **)(param_1 + 0xa8);
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
  func_0x0001092ba41c(param_1 + 0x50);
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
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10ad242c8; end: 10ad24f63;  */

long * FUN_10ad242c8(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  undefined1 auVar16 [16];
  long *plStack_330;
  long lStack_328;
  undefined8 uStack_320;
  undefined8 *puStack_318;
  undefined8 uStack_310;
  undefined *puStack_308;
  undefined **ppuStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  undefined *puStack_2c0;
  undefined **ppuStack_2b8;
  code *pcStack_280;
  undefined **appuStack_278 [7];
  long lStack_240;
  undefined *puStack_238;
  undefined **appuStack_230 [7];
  long lStack_1f8;
  code *pcStack_1f0;
  long alStack_1e8 [7];
  long lStack_1b0;
  undefined *puStack_1a8;
  undefined **appuStack_1a0 [7];
  long *plStack_168;
  long *plStack_160;
  long lStack_158;
  undefined *puStack_150;
  undefined **appuStack_148 [7];
  code *pcStack_110;
  undefined8 *puStack_108;
  undefined **ppuStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_d0;
  undefined *puStack_c8;
  undefined **appuStack_c0 [7];
  long *plStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)&PTR_DAT_110c6edb0;
  param_1[1] = (long)&PTR_FUN_110c6ee90;
  plVar13 = param_1 + 4;
  *plVar13 = 0;
  param_1[5] = 0;
  plVar7 = param_1;
  FUN_109d1a80c();
  lStack_2c8 = *plVar7;
  uStack_2d0 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2f8 = 0;
  puStack_308 = &UNK_1053a6a3c;
  ppuStack_300 = &PTR_DAT_110ae9180;
  pcStack_280 = FUN_10ad26320;
  appuStack_278[0] = &PTR_FUN_110c6ef78;
  puStack_238 = &UNK_1053a6a3c;
  appuStack_230[0] = &PTR_DAT_110ae9180;
  puStack_2c0 = &UNK_1053a6a3c;
  ppuStack_2b8 = &PTR_DAT_110ae9180;
  pcVar5 = (code *)*param_2;
  lVar15 = param_2[1];
  lVar6 = 0xda98;
  lStack_240 = lStack_2c8;
  __Znwm();
  if (lVar15 != 0) {
    plVar7 = (long *)(lVar15 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *(undefined8 *)(lVar6 + 0x3d) = 0;
  *(undefined8 *)(lVar6 + 0x35) = 0;
  *(undefined8 *)(lVar6 + 0x30) = 0;
  *(undefined8 *)(lVar6 + 0x28) = 0;
  *(undefined8 *)(lVar6 + 0x20) = 0;
  *(undefined8 *)(lVar6 + 0x18) = 0;
  *(undefined8 *)(lVar6 + 0x48) = 0x32aaaba7;
  *(undefined8 *)(lVar6 + 0x58) = 0;
  *(undefined8 *)(lVar6 + 0x50) = 0;
  *(undefined8 *)(lVar6 + 0x68) = 0;
  *(undefined8 *)(lVar6 + 0x60) = 0;
  *(undefined8 *)(lVar6 + 0x78) = 0;
  *(undefined8 *)(lVar6 + 0x70) = 0;
  *(undefined8 *)(lVar6 + 0x80) = 0;
  *(undefined8 *)(lVar6 + 0x88) = 0x32aaaba7;
  _bzero(lVar6 + 0x90,0xd8d0);
  *(undefined8 *)(lVar6 + 0xe4) = 0x447a00003f800000;
  *(undefined8 *)(lVar6 + 0xdc) = 0x3f8000003f800000;
  *(undefined4 *)(lVar6 + 0xec) = 0x3a83126f;
  auVar16 = NEON_fmov(0x3f800000,4);
  *(long *)(lVar6 + 0x104) = auVar16._8_8_;
  *(long *)(lVar6 + 0xfc) = auVar16._0_8_;
  *(undefined4 *)(lVar6 + 0x110) = 0x3f800000;
  FUN_10ad1e67c(lVar6 + 0x118);
  *(undefined8 *)(lVar6 + 0x4264) = 0;
  *(undefined8 *)(lVar6 + 0x424c) = 0;
  *(undefined8 *)(lVar6 + 0x4244) = 0;
  *(undefined8 *)(lVar6 + 0x425c) = 0;
  *(undefined8 *)(lVar6 + 0x4254) = 0;
  *(undefined8 *)(lVar6 + 0x422c) = 0;
  *(undefined8 *)(lVar6 + 0x4224) = 0;
  *(undefined8 *)(lVar6 + 0x423c) = 0;
  *(undefined8 *)(lVar6 + 0x4234) = 0;
  *(undefined8 *)(lVar6 + 0x420c) = 0;
  *(undefined8 *)(lVar6 + 0x4204) = 0;
  *(undefined8 *)(lVar6 + 0x421c) = 0;
  *(undefined8 *)(lVar6 + 0x4214) = 0;
  *(undefined8 *)(lVar6 + 0x41ec) = 0;
  *(undefined8 *)(lVar6 + 0x41e4) = 0;
  *(undefined8 *)(lVar6 + 0x41fc) = 0;
  *(undefined8 *)(lVar6 + 0x41f4) = 0;
  *(undefined8 *)(lVar6 + 0x41cc) = 0;
  *(undefined8 *)(lVar6 + 0x41c4) = 0;
  *(undefined8 *)(lVar6 + 0x41dc) = 0;
  *(undefined8 *)(lVar6 + 0x41d4) = 0;
  *(undefined8 *)(lVar6 + 0x41ac) = 0;
  *(undefined8 *)(lVar6 + 0x41a4) = 0;
  *(undefined8 *)(lVar6 + 0x41bc) = 0;
  *(undefined8 *)(lVar6 + 0x41b4) = 0;
  *(undefined8 *)(lVar6 + 0x418c) = 0;
  *(undefined8 *)(lVar6 + 0x4184) = 0;
  *(undefined8 *)(lVar6 + 0x419c) = 0;
  *(undefined8 *)(lVar6 + 0x4194) = 0;
  *(undefined8 *)(lVar6 + 0x416c) = 0;
  *(undefined8 *)(lVar6 + 0x4164) = 0;
  *(undefined8 *)(lVar6 + 0x417c) = 0;
  *(undefined8 *)(lVar6 + 0x4174) = 0;
  *(undefined4 *)(lVar6 + 0x427c) = 0x3f800000;
  _bzero(lVar6 + 0x4280,0x21c);
  *(undefined8 *)(lVar6 + 0x4530) = 0;
  *(undefined8 *)(lVar6 + 0x4528) = 0;
  *(undefined8 *)(lVar6 + 0x4520) = 0;
  *(undefined8 *)(lVar6 + 0x4518) = 0;
  *(undefined8 *)(lVar6 + 0x4510) = 0;
  *(undefined8 *)(lVar6 + 0x4508) = 0;
  *(undefined8 *)(lVar6 + 0x4500) = 0;
  *(undefined8 *)(lVar6 + 0x44f8) = 0;
  *(undefined8 *)(lVar6 + 0x44f0) = 0;
  *(undefined8 *)(lVar6 + 0x44e8) = 0;
  *(undefined8 *)(lVar6 + 0x44e0) = 0;
  *(undefined8 *)(lVar6 + 0x44d8) = 0;
  *(undefined8 *)(lVar6 + 0x44d0) = 0;
  *(undefined8 *)(lVar6 + 0x44c8) = 0;
  *(undefined8 *)(lVar6 + 0x44c0) = 0;
  *(undefined8 *)(lVar6 + 0x44b8) = 0;
  *(undefined8 *)(lVar6 + 0x44b0) = 0;
  *(undefined8 *)(lVar6 + 0x44a8) = 0;
  *(undefined8 *)(lVar6 + 0x44a0) = 0;
  *(undefined4 *)(lVar6 + 0x4544) = 0xac44;
  *(undefined8 *)(lVar6 + 0x4548) = 0x3dc1e2fa45827800;
  *(undefined4 *)(lVar6 + 0x4550) = 0x3fc90fdb;
  *(undefined8 *)(lVar6 + 0x4274) = 0x3fc90fdb3dc1e2fa;
  *(undefined8 *)(lVar6 + 0x426c) = 0x3fc90fdb3dc1e2fa;
  *(undefined4 *)(lVar6 + 0x4538) = 0xac44;
  *(undefined4 *)(lVar6 + 0x449c) = 0xac44;
  *(undefined8 *)(lVar6 + 0x455c) = 0;
  *(undefined8 *)(lVar6 + 0x4554) = 0;
  *(undefined8 *)(lVar6 + 0x456c) = 0;
  *(undefined8 *)(lVar6 + 0x4564) = 0;
  *(undefined8 *)(lVar6 + 0x457c) = 0;
  *(undefined8 *)(lVar6 + 0x4574) = 0;
  *(undefined8 *)(lVar6 + 0x458c) = 0;
  *(undefined8 *)(lVar6 + 0x4584) = 0;
  *(undefined8 *)(lVar6 + 0x459c) = 0;
  *(undefined8 *)(lVar6 + 0x4594) = 0;
  *(undefined8 *)(lVar6 + 0x45ac) = 0;
  *(undefined8 *)(lVar6 + 0x45a4) = 0;
  *(undefined8 *)(lVar6 + 0x45bc) = 0;
  *(undefined8 *)(lVar6 + 0x45b4) = 0;
  *(undefined8 *)(lVar6 + 0x45cc) = 0;
  *(undefined8 *)(lVar6 + 0x45c4) = 0;
  *(undefined8 *)(lVar6 + 0x45dc) = 0;
  *(undefined8 *)(lVar6 + 0x45d4) = 0;
  *(undefined8 *)(lVar6 + 0x45ec) = 0;
  *(undefined8 *)(lVar6 + 0x45e4) = 0;
  *(undefined8 *)(lVar6 + 0x45fc) = 0;
  *(undefined8 *)(lVar6 + 0x45f4) = 0;
  *(undefined8 *)(lVar6 + 0x460c) = 0;
  *(undefined8 *)(lVar6 + 0x4604) = 0;
  *(undefined8 *)(lVar6 + 0x461c) = 0;
  *(undefined8 *)(lVar6 + 0x4614) = 0;
  *(undefined8 *)(lVar6 + 0x462c) = 0;
  *(undefined8 *)(lVar6 + 0x4624) = 0;
  *(undefined8 *)(lVar6 + 0x463c) = 0;
  *(undefined8 *)(lVar6 + 0x4634) = 0;
  *(undefined8 *)(lVar6 + 0x464c) = 0;
  *(undefined8 *)(lVar6 + 0x4644) = 0;
  *(undefined8 *)(lVar6 + 0x4654) = 0;
  *(undefined4 *)(lVar6 + 0x466c) = 0x3f800000;
  _bzero(lVar6 + 0x4670,0x21c);
  *(undefined8 *)(lVar6 + 0x4920) = 0;
  *(undefined8 *)(lVar6 + 0x4918) = 0;
  *(undefined8 *)(lVar6 + 0x4910) = 0;
  *(undefined8 *)(lVar6 + 0x4908) = 0;
  *(undefined8 *)(lVar6 + 0x4900) = 0;
  *(undefined8 *)(lVar6 + 0x48f8) = 0;
  *(undefined8 *)(lVar6 + 0x48f0) = 0;
  *(undefined8 *)(lVar6 + 0x48e8) = 0;
  *(undefined8 *)(lVar6 + 0x48e0) = 0;
  *(undefined8 *)(lVar6 + 0x48d8) = 0;
  *(undefined8 *)(lVar6 + 0x48d0) = 0;
  *(undefined8 *)(lVar6 + 0x48c8) = 0;
  *(undefined8 *)(lVar6 + 0x48c0) = 0;
  *(undefined8 *)(lVar6 + 0x48b8) = 0;
  *(undefined8 *)(lVar6 + 0x48b0) = 0;
  *(undefined8 *)(lVar6 + 0x48a8) = 0;
  *(undefined8 *)(lVar6 + 0x48a0) = 0;
  *(undefined8 *)(lVar6 + 0x4898) = 0;
  *(undefined8 *)(lVar6 + 0x4890) = 0;
  *(undefined4 *)(lVar6 + 0x4934) = 0xac44;
  *(undefined8 *)(lVar6 + 0x4938) = 0x3dc1e2fa45827800;
  *(undefined4 *)(lVar6 + 0x4940) = 0x3fc90fdb;
  *(undefined8 *)(lVar6 + 0x4664) = 0x3fc90fdb3dc1e2fa;
  *(undefined8 *)(lVar6 + 0x465c) = 0x3fc90fdb3dc1e2fa;
  *(undefined4 *)(lVar6 + 0x4928) = 0xac44;
  *(undefined4 *)(lVar6 + 0x488c) = 0xac44;
  _bzero(lVar6 + 0x4944,0x1008);
  *(undefined8 *)(lVar6 + 0x594c) = 0x3ef942033f273030;
  *(undefined4 *)(lVar6 + 0x5954) = 0x3e319fa1;
  *(undefined4 *)(lVar6 + 0x5958) = 0;
  *(undefined4 *)(lVar6 + 0x595b) = 0;
  _bzero(lVar6 + 0x5960,0x8040);
  *(code **)(lVar6 + 0xd960) = FUN_10ad25bc8;
  *(undefined ***)(lVar6 + 0xd968) = &PTR_DAT_110950c70;
  *(undefined2 *)(lVar6 + 0xd9a0) = 0;
  *(undefined8 *)(lVar6 + 0xd9a8) = 1;
  *(undefined8 *)(lVar6 + 0xd9b0) = 0;
  *(undefined4 *)(lVar6 + 0xd9b8) = 0x3f800000;
  *(undefined2 *)(lVar6 + 0xd9bc) = 0;
  *(undefined8 *)(lVar6 + 0xd9c8) = 0;
  *(undefined8 *)(lVar6 + 0xd9d0) = 0;
  *(undefined8 *)(lVar6 + 0xd9c0) = 0;
  puStack_108 = (undefined8 *)&UNK_109896774;
  ppuStack_100 = &PTR_DAT_110b17068;
  pcStack_110 = pcVar5;
  uStack_f8 = pcVar5;
  lStack_f0 = lVar15;
  func_0x000109d18d1c(lVar6 + 0xd9d8,&UNK_10f6a5c0f,0x17,&pcStack_110);
  func_0x0001092ba41c(&pcStack_110);
  *(undefined4 *)(lVar6 + 0xda90) = 0;
  *(undefined1 *)(lVar6 + 0xda94) = 0;
  pcStack_110 = pcStack_280;
  (*(code *)appuStack_278[0][2])(&puStack_108,appuStack_278);
  lStack_d0 = lStack_240;
  puStack_c8 = puStack_238;
  appuStack_c0[0] = &PTR_DAT_110ae9180;
  (*(code *)appuStack_230[0][2])(appuStack_c0,appuStack_230);
  puStack_238 = &UNK_1053a6a3c;
  (*(code *)*appuStack_230[0])(appuStack_230);
  appuStack_230[0] = &PTR_DAT_110ae9180;
  plStack_88 = (long *)0x0;
  plVar7 = (long *)0xb0;
  __Znwm();
  lVar15 = lStack_d0;
  plVar7[2] = 0;
  plVar7[1] = 0x200000006;
  *(undefined2 *)(plVar7 + 3) = 4;
  plVar7[5] = 0;
  plVar7[4] = 0;
  plVar7[7] = 0;
  plVar7[6] = 0;
  plVar7[9] = 0;
  plVar7[8] = 0;
  plVar7[0xb] = 0;
  plVar7[10] = 0;
  plVar7[0xd] = 0;
  plVar7[0xc] = 0;
  plVar7[0xf] = 0;
  plVar7[0xe] = 0;
  plVar7[0x10] = 0;
  plVar7[0x11] = (long)(plVar7 + 3);
  plVar7[0x12] = 0;
  *plVar7 = (long)&PTR_DAT_110c6ef50;
  *(undefined1 *)(plVar7 + 0x13) = 0;
  *(undefined1 *)(plVar7 + 0x15) = 0;
  plStack_330 = (long *)0x0;
  lStack_328 = 0;
  lStack_158 = lStack_d0;
  appuStack_148[0] = &PTR_DAT_110ae9180;
  puStack_150 = puStack_c8;
  plStack_160 = plVar7;
  plStack_88 = plVar7;
  (*(code *)appuStack_c0[0][2])(appuStack_148,appuStack_c0);
  puStack_c8 = &UNK_1053a6a3c;
  (*(code *)*appuStack_c0[0])(appuStack_c0);
  appuStack_c0[0] = &PTR_DAT_110ae9180;
  puVar8 = (undefined8 *)0xb8;
  __Znwm();
  *puVar8 = FUN_10ad26ccc;
  puVar8[1] = FUN_10ad26f70;
  func_0x0001092ba17c(puVar8 + 2);
  plVar7 = plStack_160;
  plVar14 = (long *)puVar8[7];
  if (plVar14 != (long *)0x0) {
    plVar1 = plVar14 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plStack_160 = (long *)0x0;
  puVar8[10] = lStack_158;
  puVar8[9] = plVar7;
  puVar8[0xc] = &PTR_DAT_110ae9180;
  puVar8[0xb] = puStack_150;
  (*(code *)appuStack_148[0][2])(puVar8 + 0xc,appuStack_148);
  puStack_150 = &UNK_1053a6a3c;
  (*(code *)*appuStack_148[0])(appuStack_148);
  appuStack_148[0] = &PTR_DAT_110ae9180;
  puVar8[0x13] = lVar15;
  *(undefined1 *)(puVar8 + 0x14) = 0;
  *(undefined1 *)(puVar8 + 0x16) = 0;
  puVar9 = puVar8 + 0x13;
  func_0x0001092ba064(puVar9,puVar8);
  if (((ulong)puVar9 & 1) == 0) {
    FUN_10ad25df0(puVar8 + 0x15,puVar8 + 9);
    puVar8[0x13] = puVar8[0x15];
    plVar7 = (long *)(puVar8[0x15] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(puVar8[0x13] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar8 + 0x16) = 1;
      lVar15 = puVar8[0x13];
      plVar7 = (long *)(lVar15 + 0x10);
      uVar10 = puVar8[3];
      do {
        lVar12 = *plVar7;
        if (lVar12 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            uStack_320 = 0;
            puStack_318 = puVar8;
            uStack_310 = uVar10;
            func_0x000109d1b588(lVar15 + 0x18,&uStack_320);
            *(undefined8 *)(lVar15 + 0x10) = 0;
            goto joined_r0x00010ad24998;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar12 >> 1 & 1) == 0);
    }
    plVar7 = (long *)puVar8[0x13];
    if (((uint)*(undefined8 *)(puVar8[0x13] + 0x10) >> 5 & 1) == 0) {
      if (plVar7 != (long *)0x0) {
        puVar2 = (ulong *)(plVar7 + 1);
        do {
          uVar11 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar11 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar11 & 0x1fffffffc) == 4) {
          do {
            uVar11 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar11 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar11 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      plVar7 = (long *)puVar8[0x15];
      if (plVar7 != (long *)0x0) {
        puVar2 = (ulong *)(plVar7 + 1);
        do {
          uVar11 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar11 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar11 & 0x1fffffffc) == 4) {
          do {
            uVar11 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar11 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar11 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      func_0x0001092ba100(puVar8 + 2);
      func_0x0001092ba41c(puVar8 + 10);
      plVar7 = (long *)puVar8[9];
      if (plVar7 != (long *)0x0) {
        puVar2 = (ulong *)(plVar7 + 1);
        do {
          uVar11 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar11 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar11 & 0x1fffffffc) == 4) {
          do {
            uVar11 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar11 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar11 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      func_0x000109d1a1d0(puVar8 + 2);
      __ZdlPv(puVar8);
      goto joined_r0x00010ad24998;
    }
  }
  else {
joined_r0x00010ad24998:
    if (plVar14 != (long *)0x0) {
      puVar2 = (ulong *)(plVar14 + 1);
      do {
        uVar11 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar11 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar11 & 0x1fffffffc) == 4) {
        do {
          uVar11 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar11 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar11 - 1 == 0) {
          (**(code **)(*plVar14 + 8))(plVar14);
        }
      }
    }
    func_0x0001092ba41c((ulong)&plStack_160 | 8);
    if (plStack_160 != (long *)0x0) {
      puVar2 = (ulong *)(plStack_160 + 1);
      do {
        uVar11 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar11 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar11 & 0x1fffffffc) == 4) {
        do {
          uVar11 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar11 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar11 - 1 == 0) {
          (**(code **)(*plStack_160 + 8))();
        }
      }
    }
    if (lStack_328 != 0) {
      func_0x0001092b4274((ulong)&plStack_330 | 8);
    }
    if (plStack_330 != (long *)0x0) {
      puVar2 = (ulong *)(plStack_330 + 1);
      do {
        uVar11 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar11 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar11 & 0x1fffffffc) == 4) {
        do {
          uVar11 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar11 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar11 - 1 == 0) {
          (**(code **)(*plStack_330 + 8))();
        }
      }
    }
    pcStack_1f0 = pcStack_110;
    lStack_1f8 = lVar6;
    (*(code *)puStack_108[2])(alStack_1e8,&puStack_108);
    lStack_1b0 = lStack_d0;
    puStack_1a8 = puStack_c8;
    appuStack_1a0[0] = &PTR_DAT_110ae9180;
    (*(code *)appuStack_c0[0][2])(appuStack_1a0,appuStack_c0);
    puStack_c8 = &UNK_1053a6a3c;
    (*(code *)*appuStack_c0[0])(appuStack_c0);
    plStack_168 = plStack_88;
    appuStack_c0[0] = &PTR_DAT_110ae9180;
    plStack_88 = (long *)0x0;
    func_0x0001092ba41c(&lStack_d0);
    (*(code *)*puStack_108)(&puStack_108);
    lVar15 = lStack_1f8;
    if (lStack_1f8 == 0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      puVar8 = (undefined8 *)0xb0;
      __Znwm();
      pcStack_110 = pcStack_1f0;
      (**(code **)(alStack_1e8[0] + 0x10))(&puStack_108,alStack_1e8);
      lStack_d0 = lStack_1b0;
      puStack_c8 = puStack_1a8;
      appuStack_c0[0] = &PTR_DAT_110ae9180;
      (*(code *)appuStack_1a0[0][2])(appuStack_c0,appuStack_1a0);
      puStack_1a8 = &UNK_1053a6a3c;
      (*(code *)*appuStack_1a0[0])(appuStack_1a0);
      plStack_88 = plStack_168;
      appuStack_1a0[0] = &PTR_DAT_110ae9180;
      plStack_168 = (long *)0x0;
      *puVar8 = &PTR_FUN_110c6efa0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = lVar15;
      puVar8[4] = pcStack_110;
      (*(code *)puStack_108[2])(puVar8 + 5,&puStack_108);
      puVar8[0xe] = &PTR_DAT_110ae9180;
      puVar8[0xc] = lStack_d0;
      puVar8[0xd] = puStack_c8;
      (*(code *)appuStack_c0[0][2])(puVar8 + 0xe,appuStack_c0);
      puStack_c8 = &UNK_1053a6a3c;
      (*(code *)*appuStack_c0[0])(appuStack_c0);
      puVar8[0x15] = plStack_88;
      appuStack_c0[0] = &PTR_DAT_110ae9180;
      plStack_88 = (long *)0x0;
      func_0x0001092ba41c(&lStack_d0);
      (*(code *)*puStack_108)(&puStack_108);
    }
    lStack_1f8 = 0;
    plVar7 = (long *)param_1[5];
    param_1[4] = lVar15;
    param_1[5] = (long)puVar8;
    if (plVar7 != (long *)0x0) {
      plVar14 = plVar7 + 1;
      do {
        lVar15 = *plVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *plVar14 = lVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    FUN_10ad263a0(&lStack_1f8);
    func_0x0001092ba41c(&lStack_240);
    (*(code *)*appuStack_278[0])(appuStack_278);
    func_0x0001092ba41c(&lStack_2c8);
    (*(code *)*ppuStack_300)(&ppuStack_300);
    lVar15 = param_1[4];
    *(undefined8 *)(lVar15 + 0x18) = 0x40e5888000000000;
    *(undefined4 *)(lVar15 + 0x38) = 0x10;
    *(undefined8 *)(lVar15 + 0x28) = 0x100000004;
    *(undefined8 *)(lVar15 + 0x20) = 0xc6c70636d;
    *(undefined8 *)(lVar15 + 0x30) = 0x200000004;
    (**(code **)(*param_1 + 0x10))(param_1,1);
    lVar6 = *plVar13;
    *(undefined4 *)(lVar6 + 0x40) = 0x2000;
    lVar15 = lVar6 + 0x18;
    _AudioQueueNewOutput(lVar15,FUN_10ad24f64,(undefined4 *)(lVar6 + 0x40),0,0,0,lVar6 + 0xd9b0);
    if ((int)lVar15 != 0) {
      FUN_10a00946c(&UNK_10f63b8ac);
      goto LAB_10ad24edc;
    }
    lVar15 = 0;
    do {
      lVar6 = *plVar13;
      plVar7 = *(long **)(lVar6 + 0xd9b0);
      _AudioQueueAllocateBuffer(plVar7,*(undefined4 *)(lVar6 + 0x40),lVar6 + lVar15);
      if ((int)plVar7 != 0) {
        FUN_10a00946c(&UNK_10f6a5a85);
        goto LAB_10ad24edc;
      }
      lVar15 = lVar15 + 8;
    } while (lVar15 != 0x18);
    *(undefined1 *)(param_1[4] + 0xda94) = 1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
      return param_1;
    }
    ___stack_chk_fail();
  }
  func_0x0001092af97c(plVar7 + 0x12);
LAB_10ad24edc:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10ad24ee0);
  (*pcVar5)();
}



/* Entry: 10ad24f64; end: 10ad251bf;  */

void FUN_10ad24f64(uint *param_1,undefined8 param_2,uint *param_3)

{
  undefined2 uVar1;
  uint uVar2;
  bool bVar3;
  long *plVar4;
  undefined2 *puVar5;
  ulong uVar6;
  undefined2 *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  if ((param_1[1] & 1) == 0) {
    param_3[4] = *param_1;
    plVar4 = *(long **)(param_1 + 0x22);
    if (((2 < (ulong)((plVar4[1] - *plVar4) + plVar4[1] * plVar4[9]) >> 0xb) &&
        (*(char *)((long)param_1 + 0xd961) == '\x01')) &&
       (*(undefined1 *)((long)param_1 + 0xd961) = 0, (bRam000000011330a9e8 >> 3 & 1) != 0)) {
      func_0x00010ae06f08(1,8,&UNK_10f6a5ab2,&UNK_10f6a5b6b,0x139,&UNK_10f6a5be0);
    }
    if ((*(byte *)((long)param_1 + 0xd961) & 1) == 0) {
      __ZNSt3__15mutex4lockEv(param_1 + 0x12);
      uVar8 = *(ulong *)(param_1 + 0x22);
      FUN_10ad38edc(uVar8,*(undefined8 *)(param_3 + 2),*param_3 >> 2);
      __ZNSt3__15mutex6unlockEv(param_1 + 0x12);
    }
    else {
      uVar8 = 0;
    }
    if ((char)param_1[0x3658] == '\x01') {
      uVar9 = (ulong)(*param_3 >> 2);
      if (uVar8 <= uVar9 && uVar9 - uVar8 != 0) {
        _bzero(*(long *)(param_3 + 2) + uVar8 * 2,(uVar9 - uVar8) * 2);
        if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
          func_0x00010ae06f08(1,8,&UNK_10f6a5ab2,&UNK_10f6a5b6b,0x14b,&UNK_10f6a5bf9);
        }
        *(undefined1 *)((long)param_1 + 0xd961) = 1;
        uVar8 = uVar9;
      }
    }
    if (*(char *)(*(long *)(param_1 + 0x364a) + 8) == '\x01') {
      (**(code **)(param_1 + 0x3648))
                (*(undefined8 *)(param_3 + 2),uVar8,*(undefined8 *)(param_1 + 0x365a),
                 param_1 + 0x3648);
      bVar3 = *(long *)(param_1 + 0x365a) == 1;
    }
    else if (*(long *)(param_1 + 0x365a) == 1) {
      if ((int)uVar8 < 1) {
        bVar3 = true;
      }
      else {
        uVar6 = uVar8 & 0x7fffffff;
        uVar9 = uVar6 + 1;
        puVar7 = (undefined2 *)(*(long *)(param_3 + 2) + uVar6 * 2);
        bVar3 = true;
        puVar5 = (undefined2 *)(*(long *)(param_3 + 2) + uVar6 * 4 + -2);
        do {
          puVar7 = puVar7 + -1;
          uVar1 = *puVar7;
          puVar5[-1] = uVar1;
          *puVar5 = uVar1;
          uVar9 = uVar9 - 1;
          puVar5 = puVar5 + -2;
        } while (1 < uVar9);
      }
    }
    else {
      bVar3 = false;
    }
    uVar2 = ((int)uVar8 << bVar3) << 1;
    if (uVar2 < 2) {
      uVar2 = 1;
    }
    param_3[4] = uVar2;
    __ZNSt3__15mutex4lockEv(param_1 + 2);
    if ((param_1[1] & 1) == 0) {
      _AudioQueueEnqueueBuffer(param_2,param_3,0,0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 2);
    return;
  }
  return;
}



/* Entry: 10ad251c0; end: 10ad2527f;  */

void FUN_10ad251c0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  __ZNSt3__15mutex4lockEv(lVar1 + 0x48);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x44) = 1;
  __ZNSt3__15mutex6unlockEv(lVar1 + 0x48);
  _AudioQueueStop(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd9b0),1);
  lVar1 = *(long *)(param_1 + 0x20);
  __ZNSt3__15mutex4lockEv(lVar1 + 0x88);
  FUN_10ad39030(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd9c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar1 + 0x88);
  return;
}



/* Entry: 10ad25280; end: 10ad252eb;  */

void FUN_10ad25280(long param_1,undefined8 param_2)

{
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  __ZNSt3__15mutex4lockEv(lVar3 + 0x88);
  func_0x00010ad38e44(*(long *)(*(long *)(param_1 + 0x20) + 0xd9c8) + 0x20,param_2);
  __ZNSt3__15mutex6unlockEv(lVar3 + 0x88);
  lVar3 = *(long *)(param_1 + 0x20);
  uVar1 = *(ulong *)(lVar3 + 0xd9c0);
  while ((uVar1 < 3 &&
         (plVar2 = *(long **)(lVar3 + 0xd9c8), (plVar2[1] - *plVar2) + plVar2[9] * plVar2[1] != 0)))
  {
    FUN_10ad24f64(lVar3 + 0x40,*(undefined8 *)(lVar3 + 0xd9b0),*(undefined8 *)(lVar3 + uVar1 * 8));
    if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
      func_0x00010ae06f08(1,8,&UNK_10f6a5ab2,&UNK_10f6a5b02,0x8d,&UNK_10f6a5b46,in_x6,in_x7,
                          *(undefined8 *)(lVar3 + 0xd9c0));
    }
    uVar1 = *(long *)(lVar3 + 0xd9c0) + 1;
    *(ulong *)(lVar3 + 0xd9c0) = uVar1;
  }
  return;
}



/* Entry: 10ad252ec; end: 10ad253b7;  */

void FUN_10ad252ec(long param_1)

{
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar1;
  long *plVar2;
  
  uVar1 = *(ulong *)(param_1 + 0xd9c0);
  while ((uVar1 < 3 &&
         (plVar2 = *(long **)(param_1 + 0xd9c8), (plVar2[1] - *plVar2) + plVar2[9] * plVar2[1] != 0)
         )) {
    FUN_10ad24f64(param_1 + 0x40,*(undefined8 *)(param_1 + 0xd9b0),
                  *(undefined8 *)(param_1 + uVar1 * 8));
    if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
      func_0x00010ae06f08(1,8,&UNK_10f6a5ab2,&UNK_10f6a5b02,0x8d,&UNK_10f6a5b46,in_x6,in_x7,
                          *(undefined8 *)(param_1 + 0xd9c0));
    }
    uVar1 = *(long *)(param_1 + 0xd9c0) + 1;
    *(ulong *)(param_1 + 0xd9c0) = uVar1;
  }
  return;
}



/* Entry: 10ad253b8; end: 10ad253db;  */

int FUN_10ad253b8(long param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(long *)(param_1 + 0x20) + 0xd9c8);
  return (piVar1[2] - *piVar1) + piVar1[2] * piVar1[0x12];
}



/* Entry: 10ad253dc; end: 10ad254ab;  */

void FUN_10ad253dc(undefined *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    puVar1 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    lVar4 = *(long *)(puVar1 + 0x20);
    if (6 < *(byte *)(lVar4 + 0xda94) ||
        (1 << (ulong)(*(byte *)(lVar4 + 0xda94) & 0x1f) & 0x62U) == 0) {
      return;
    }
    *(undefined1 *)(lVar4 + 0xda94) = 2;
    *(undefined8 *)(lVar4 + 0xd9c0) = 0;
    *(undefined1 *)(lVar4 + 0x44) = 0;
    lVar4 = *(long *)(puVar1 + 0x20);
    if (*(char *)(lVar4 + 0xd9bc) != '\x01') break;
    uVar2 = *(undefined8 *)(lVar4 + 0xd9b0);
    _AudioQueueSetParameter(0,uVar2,1);
    if ((int)uVar2 == 0) {
      lVar4 = *(long *)(puVar1 + 0x20);
      break;
    }
    puVar3 = &UNK_10f63b8ac;
    unaff_x30 = FUN_10ad254ac;
    FUN_10a00946c();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
    param_1 = puVar3 + -8;
    unaff_x19 = puVar1;
  }
  if ((*(byte *)(lVar4 + 0xd9bd) & 1) != 0) {
    return;
  }
  if ((*(byte *)(lVar4 + 0xda90) & 1) == 0) {
    FUN_10ad252ec();
  }
  else {
    FUN_10ad39030(*(undefined8 *)(lVar4 + 0xd9c8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb9f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__AudioQueueStart_11034af50)(*(undefined8 *)(*(long *)(puVar1 + 0x20) + 0xd9b0),0);
  return;
}



/* Entry: 10ad254ac; end: 10ad254b3;  */

void FUN_10ad254ac(undefined *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    puVar2 = param_1 + -8;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    lVar3 = *(long *)(param_1 + 0x18);
    if (6 < *(byte *)(lVar3 + 0xda94) ||
        (1 << (ulong)(*(byte *)(lVar3 + 0xda94) & 0x1f) & 0x62U) == 0) {
      return;
    }
    *(undefined1 *)(lVar3 + 0xda94) = 2;
    *(undefined8 *)(lVar3 + 0xd9c0) = 0;
    *(undefined1 *)(lVar3 + 0x44) = 0;
    lVar3 = *(long *)(param_1 + 0x18);
    if (*(char *)(lVar3 + 0xd9bc) != '\x01') break;
    uVar1 = *(undefined8 *)(lVar3 + 0xd9b0);
    _AudioQueueSetParameter(0,uVar1,1);
    if ((int)uVar1 == 0) {
      lVar3 = *(long *)(param_1 + 0x18);
      break;
    }
    param_1 = &UNK_10f63b8ac;
    unaff_x30 = FUN_10ad254ac;
    FUN_10a00946c();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
    unaff_x19 = puVar2;
  }
  if ((*(byte *)(lVar3 + 0xd9bd) & 1) != 0) {
    return;
  }
  if ((*(byte *)(lVar3 + 0xda90) & 1) == 0) {
    FUN_10ad252ec();
  }
  else {
    FUN_10ad39030(*(undefined8 *)(lVar3 + 0xd9c8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb9f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__AudioQueueStart_11034af50)(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xd9b0),0);
  return;
}



/* Entry: 10ad254b4; end: 10ad25567;  */

void FUN_10ad254b4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(byte *)(lVar1 + 0xda94) < 7 && (1 << (ulong)(*(byte *)(lVar1 + 0xda94) & 0x1f) & 0x5cU) != 0
     ) {
    *(undefined1 *)(lVar1 + 0xda94) = 5;
    __ZNSt3__15mutex4lockEv(lVar1 + 0x48);
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x44) = 1;
    __ZNSt3__15mutex6unlockEv(lVar1 + 0x48);
    _AudioQueueStop(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd9b0),1);
    lVar1 = *(long *)(param_1 + 0x20);
    __ZNSt3__15mutex4lockEv(lVar1 + 0x88);
    FUN_10ad39030(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd9c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar1 + 0x88);
    return;
  }
  return;
}



/* Entry: 10ad25568; end: 10ad255f7;  */

void FUN_10ad25568(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (*(byte *)(lVar1 + 0xda94) < 7 && (1 << (ulong)(*(byte *)(lVar1 + 0xda94) & 0x1f) & 0x5cU) != 0
     ) {
    *(undefined1 *)(lVar1 + 0xda94) = 5;
    __ZNSt3__15mutex4lockEv(lVar1 + 0x48);
    *(undefined1 *)(*(long *)(param_1 + 0x18) + 0x44) = 1;
    __ZNSt3__15mutex6unlockEv(lVar1 + 0x48);
    _AudioQueueStop(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xd9b0),1);
    lVar1 = *(long *)(param_1 + 0x18);
    __ZNSt3__15mutex4lockEv(lVar1 + 0x88);
    FUN_10ad39030(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xd9c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar1 + 0x88);
    return;
  }
  return;
}



/* Entry: 10ad255f8; end: 10ad2567f;  */

void FUN_10ad255f8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if ((*(char *)(lVar1 + 0xda94) == '\x06' || *(char *)(lVar1 + 0xda94) == '\x03') &&
     (*(undefined1 *)(lVar1 + 0xda94) = 4, (*(byte *)(lVar1 + 0xd9bd) & 1) == 0)) {
    if (*(char *)(lVar1 + 0xd9bc) == '\x01') {
      _AudioQueueSetParameter(0,*(undefined8 *)(lVar1 + 0xd9b0),1);
      lVar1 = *(long *)(param_1 + 0x20);
    }
    *(undefined1 *)(lVar1 + 0x44) = 0;
    FUN_10ad252ec(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdb9f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__AudioQueueStart_11034af50)(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd9b0),0)
    ;
    return;
  }
  return;
}



/* Entry: 10ad25680; end: 10ad257fb;  */

void FUN_10ad25680(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if ((*(char *)(lVar1 + 0xda94) == '\x06' || *(char *)(lVar1 + 0xda94) == '\x03') &&
     (*(undefined1 *)(lVar1 + 0xda94) = 4, (*(byte *)(lVar1 + 0xd9bd) & 1) == 0)) {
    if (*(char *)(lVar1 + 0xd9bc) == '\x01') {
      _AudioQueueSetParameter(0,*(undefined8 *)(lVar1 + 0xd9b0),1);
      lVar1 = *(long *)(param_1 + 0x18);
    }
    *(undefined1 *)(lVar1 + 0x44) = 0;
    FUN_10ad252ec(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdb9f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__AudioQueueStart_11034af50)(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xd9b0),0)
    ;
    return;
  }
  return;
}



/* Entry: 10ad257fc; end: 10ad25917;  */

void FUN_10ad257fc(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar5 = *(long *)(param_1 + 0x20);
  *(long *)(lVar5 + 0xd9a8) = param_2;
  puVar4 = (undefined8 *)0x68;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110c6f000;
  puVar4[4] = param_2 << 0xb;
  puVar4[6] = 0;
  puVar4[5] = 0;
  puVar4[8] = 0;
  puVar4[7] = 0;
  puVar4[10] = 0;
  puVar4[9] = 0;
  puVar4[0xc] = 0;
  puVar4[0xb] = 0;
  plVar6 = *(long **)(lVar5 + 0xd9d0);
  *(undefined8 **)(lVar5 + 0xd9d0) = puVar4;
  puVar4[3] = param_2 << 0xb;
  *(undefined8 **)(lVar5 + 0xd9c8) = puVar4 + 3;
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
  lVar5 = *(long *)(param_1 + 0x20);
  uVar8 = *(undefined8 *)(lVar5 + 0xd9d0);
  uVar7 = *(undefined8 *)(lVar5 + 0xd9c8);
  if (*(long *)(lVar5 + 0xd9d0) != 0) {
    plVar6 = (long *)(*(long *)(lVar5 + 0xd9d0) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar6 = *(long **)(lVar5 + 0xd0);
  *(undefined8 *)(lVar5 + 0xd0) = uVar8;
  *(undefined8 *)(lVar5 + 200) = uVar7;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
      return;
    }
  }
  return;
}



/* Entry: 10ad25918; end: 10ad2592b;  */

long FUN_10ad25918(long param_1)

{
  return *(long *)(param_1 + 0x20) + 0xd9d8;
}



/* Entry: 10ad2592c; end: 10ad2593f;  */

void FUN_10ad2592c(void)

{
  FUN_10ad25a6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad25940; end: 10ad25957;  */

void FUN_10ad25940(void)

{
  return;
}



/* Entry: 10ad25958; end: 10ad25a4b;  */

void FUN_10ad25958(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 *apuStack_48 [2];
  undefined1 uStack_31;
  
  puVar3 = (undefined8 *)0xa0;
  __Znwm();
  plVar5 = puVar3 + 1;
  puVar3[2] = 0;
  *plVar5 = 0x200000006;
  *(undefined2 *)(puVar3 + 3) = 4;
  uVar6 = 0;
  uVar7 = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[9] = 0;
  puVar3[8] = 0;
  puVar3[0xb] = 0;
  puVar3[10] = 0;
  puVar3[0xd] = 0;
  puVar3[0xc] = 0;
  puVar3[0xf] = 0;
  puVar3[0xe] = 0;
  puVar3[0x10] = 0;
  puVar3[0x11] = puVar3 + 3;
  puVar3[0x12] = 0;
  *puVar3 = &PTR_DAT_110c171d8;
  *(undefined2 *)(puVar3 + 0x13) = 0;
  ppuVar4 = &PTR___tlv_bootstrap_11340dd98;
  (*(code *)PTR___tlv_bootstrap_11340dd98)();
  uStack_58 = 0;
  uStack_78 = uVar6;
  uStack_70 = uVar7;
  uStack_68 = uVar6;
  uStack_60 = uVar7;
  FUN_109d18960(&uStack_78,*ppuVar4,0);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + 4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  *param_1 = puVar3;
  uStack_31 = 1;
  puStack_50 = puVar3;
  apuStack_48[0] = puVar3;
  func_0x00010a9ffd6c(puVar3,&uStack_31);
  puVar3 = apuStack_48[0];
  apuStack_48[0] = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    func_0x0001092b4274(apuStack_48);
  }
  func_0x000109d1a1d0(&uStack_78);
  return;
}



/* Entry: 10ad25a4c; end: 10ad25a53;  */

undefined8 * FUN_10ad25a4c(undefined8 *param_1)

{
  param_1[-1] = &PTR_DAT_110c6edb0;
  *param_1 = &PTR_FUN_110c6ee90;
  func_0x00010ad25b04(param_1 + 3);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1 + -1;
}



/* Entry: 10ad25a54; end: 10ad25a6b;  */

void FUN_10ad25a54(long param_1)

{
  FUN_10ad25a6c(param_1 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad25a6c; end: 10ad25bc7;  */

undefined8 * FUN_10ad25a6c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c6edb0;
  param_1[1] = &PTR_FUN_110c6ee90;
  func_0x00010ad25b04(param_1 + 4);
  if (param_1[3] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10ad25bc8; end: 10ad25bd7;  */

long * FUN_10ad25bc8(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *in_x3;
  ulong uVar5;
  
  func_0x000105277f8c();
  func_0x0001092ba41c(in_x3 + 1);
  plVar4 = (long *)*in_x3;
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
  return in_x3;
}



/* Entry: 10ad25bd8; end: 10ad25def;  */

long * FUN_10ad25bd8(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  func_0x0001092ba41c(param_1 + 1);
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


