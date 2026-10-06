/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bcc56a8; end: 10bcc56e3;  */

void FUN_10bcc56a8(long param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00010bcc58f8();
  *(undefined4 *)(param_1 + 0x140) = param_2;
  *(undefined4 *)(param_1 + 0x144) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(param_1 + 0xa0);
  return;
}



/* Entry: 10bcc56e4; end: 10bcc57bf;  */

ulong FUN_10bcc56e4(long param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined1 in_ZR;
  long *plVar3;
  undefined8 extraout_x8;
  ulong uVar4;
  long alStack_280 [2];
  undefined1 auStack_270 [16];
  int aiStack_260 [138];
  undefined8 uStack_38;
  
  plVar3 = alStack_280;
  func_0x000107c3a410();
  uStack_38 = extraout_x8;
  func_0x00010bcc58f8();
  if (*(char *)(param_1 + 0x187) < '\0') {
    if (*(long *)(param_1 + 0x178) == 0) goto LAB_10bcc5774;
  }
  else if (*(char *)(param_1 + 0x187) == '\0') {
LAB_10bcc5774:
    uVar4 = 1;
    goto LAB_10bcc5778;
  }
  param_1 = param_1 + 0x170;
  func_0x000107c2802c(alStack_280,param_1,0x10);
  param_2 = (int)param_1;
  iVar2 = *(int *)((long)aiStack_260 + *(long *)(alStack_280[0] + -0x18));
  in_ZR = iVar2 == 0;
  uVar4 = (ulong)(byte)in_ZR;
  if (iVar2 == 0) {
    param_2 = 0xf82f694;
    func_0x00010549023c(auStack_270);
    func_0x00010533a9e0(alStack_280);
  }
  func_0x000107c28030(alStack_280);
LAB_10bcc5778:
  func_0x000107c3a3e4();
  func_0x000107c3a3e8(uStack_38);
  if ((bool)in_ZR) {
    return uVar4;
  }
  ___stack_chk_fail();
  func_0x000107c28030();
  func_0x000107c3a3e4();
  func_0x00010bcc5900();
  pcVar1 = FUN_10bcc57ec;
  uVar4 = *(ulong *)((long)plVar3 + 0x188);
  if (param_2 == 0) {
    pcVar1 = (code *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbfd94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sqlite3_update_hook_11034d0b8)(uVar4,pcVar1,plVar3);
  return uVar4;
}



/* Entry: 10bcc57c0; end: 10bcc57db;  */

void FUN_10bcc57c0(long param_1,int param_2)

{
  code *pcVar1;
  
  pcVar1 = FUN_10bcc57ec;
  if (param_2 == 0) {
    pcVar1 = (code *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbfd94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sqlite3_update_hook_11034d0b8)(*(undefined8 *)(param_1 + 0x188),pcVar1,param_1);
  return;
}



/* Entry: 10bcc57dc; end: 10bcc57eb;  */

void FUN_10bcc57dc(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [24];
  
  func_0x000105277f8c(param_2);
  func_0x000107c3a3f8();
  FUN_10bcc7fec(param_2,auStack_48);
  func_0x000107c3a3d8();
  return;
}



/* Entry: 10bcc57ec; end: 10bcc5833;  */

void FUN_10bcc57ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c3a3f8(param_1,param_4);
  FUN_10bcc7fec(param_1,auStack_38);
  func_0x000107c3a3d8();
  return;
}



/* Entry: 10bcc5834; end: 10bcc584b;  */

void FUN_10bcc5834(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_110d99970;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  return;
}



/* Entry: 10bcc584c; end: 10bcc58ab;  */

undefined8 FUN_10bcc584c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  undefined1 *puVar1;
  undefined1 auStack_38 [24];
  
  if ((int)param_1 == 1) {
    func_0x000107c3a3f8(param_1,*param_2);
    puVar1 = auStack_38;
    func_0x000107c27cf4(puVar1,"ok");
    func_0x000107c3a3d8();
    if ((int)puVar1 != 0) {
      **(undefined1 **)(param_4 + 0x10) = 1;
    }
  }
  return 0;
}



/* Entry: 10bcc58ac; end: 10bcc5957;  */

void FUN_10bcc58ac(void)

{
  return;
}



/* Entry: 10bcc5958; end: 10bcc59cb;  */

void FUN_10bcc5958(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  long unaff_x19;
  long *plVar3;
  
  func_0x00010bcc64e0();
  plVar1 = *(long **)(unaff_x19 + 0x10);
  for (plVar3 = *(long **)(unaff_x19 + 8); plVar3 != plVar1; plVar3 = plVar3 + 2) {
    plVar2 = (long *)*plVar3;
    if (plVar2 != (long *)*param_3) {
      (**(code **)(*plVar2 + 0x10))(plVar2,param_2,param_4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x20);
  return;
}



/* Entry: 10bcc59cc; end: 10bcc5aff;  */

void FUN_10bcc59cc(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x19;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  
  func_0x00010bcc64e0();
  uVar4 = *param_2;
  lVar5 = param_2[1];
  puVar15 = *(undefined8 **)(unaff_x19 + 0x10);
  if (puVar15 < *(undefined8 **)(unaff_x19 + 0x18)) {
    *puVar15 = uVar4;
    puVar15[1] = lVar5;
    if (lVar5 != 0) {
      plVar1 = (long *)(lVar5 + 8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = *plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    puVar15 = puVar15 + 2;
LAB_10bcc5ac4:
    *(undefined8 **)(unaff_x19 + 0x10) = puVar15;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x20);
    return;
  }
  lVar12 = *(long *)(unaff_x19 + 8);
  lVar13 = (long)puVar15 - lVar12;
  lVar14 = lVar13 >> 4;
  uVar2 = lVar14 + 1;
  if (uVar2 >> 0x3c == 0) {
    uVar10 = (long)*(undefined8 **)(unaff_x19 + 0x18) - lVar12;
    uVar11 = (long)uVar10 >> 3;
    if (uVar11 <= uVar2) {
      uVar11 = uVar2;
    }
    if (0x7fffffffffffffef < uVar10) {
      uVar11 = 0xfffffffffffffff;
    }
    if (uVar11 >> 0x3c == 0) {
      lVar9 = uVar11 << 4;
      __Znwm();
      puVar3 = (undefined8 *)(lVar9 + lVar13);
      *puVar3 = uVar4;
      puVar3[1] = lVar5;
      if (lVar5 != 0) {
        plVar1 = (long *)(lVar5 + 8);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = *plVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        lVar12 = *(long *)(unaff_x19 + 8);
        lVar13 = *(long *)(unaff_x19 + 0x10) - lVar12;
        lVar14 = lVar13 >> 4;
      }
      puVar15 = puVar3 + 2;
      _memcpy(puVar3 + lVar14 * -2,lVar12,lVar13);
      *(undefined8 **)(unaff_x19 + 8) = puVar3 + lVar14 * -2;
      *(undefined8 **)(unaff_x19 + 0x10) = puVar15;
      *(ulong *)(unaff_x19 + 0x18) = lVar9 + uVar11 * 0x10;
      if (lVar12 != 0) {
        __ZdlPv(lVar12);
      }
      goto LAB_10bcc5ac4;
    }
    func_0x000104bd35f4();
  }
  else {
    func_0x00010bcc5ec0();
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10bcc5af4);
  (*pcVar8)();
}



/* Entry: 10bcc5b00; end: 10bcc5bab;  */

/* WARNING: Removing unreachable block (ram,0x00010bcc5ba0) */

void FUN_10bcc5b00(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long unaff_x19;
  long *plVar3;
  
  func_0x00010bcc64e0();
  plVar2 = *(long **)(unaff_x19 + 8);
  plVar1 = *(long **)(unaff_x19 + 0x10);
  FUN_10bcc5bac(plVar2,plVar1,*param_2);
  plVar3 = plVar2;
  if (plVar1 == plVar2) {
LAB_10bcc5b94:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x20);
    return;
  }
  do {
    do {
      plVar3 = plVar3 + 2;
      if (plVar3 == plVar1) {
        if (plVar2 != *(long **)(unaff_x19 + 0x10)) {
          func_0x00010bcc5ed4((long *)(unaff_x19 + 8),plVar2);
        }
        goto LAB_10bcc5b94;
      }
    } while (*plVar3 == *param_2);
    func_0x00010bcc5f0c(plVar2,plVar3);
    plVar2 = plVar2 + 2;
  } while( true );
}



/* Entry: 10bcc5bac; end: 10bcc5bd3;  */

long * FUN_10bcc5bac(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  
  for (; (plVar1 = param_2, param_1 != param_2 && (plVar1 = param_1, *param_1 != param_3));
      param_1 = param_1 + 2) {
  }
  return plVar1;
}



/* Entry: 10bcc5bd4; end: 10bcc5c73;  */

undefined8 *
FUN_10bcc5bd4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0x32aaaba7;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  *param_1 = &PTR_DAT_110d99a68;
  param_1[1] = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 0xc);
  FUN_10bcc5f48(param_1 + 0xf,param_3);
  uVar2 = param_4[1];
  uVar1 = *param_4;
  uVar4 = param_4[3];
  uVar3 = param_4[2];
  param_1[0x1a] = param_4[4];
  param_1[0x17] = uVar2;
  param_1[0x16] = uVar1;
  param_1[0x19] = uVar4;
  param_1[0x18] = uVar3;
  *(undefined1 *)((long)param_1 + 0xc6) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  return param_1;
}



/* Entry: 10bcc5c74; end: 10bcc5caf;  */

undefined8 * FUN_10bcc5c74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d99ab8;
  __ZNSt3__15mutexD1Ev(param_1 + 4);
  func_0x00010bcc623c(param_1 + 1);
  return param_1;
}



/* Entry: 10bcc5cb0; end: 10bcc5dd7;  */

void FUN_10bcc5cb0(undefined4 *param_1,long param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_1f0 [424];
  undefined8 uStack_48;
  
  puVar6 = auStack_1f0;
  puVar4 = auStack_1f0;
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined1 *)(param_2 + 0x20);
  puVar5 = param_3;
  __ZNSt3__15mutex4lockEv(puVar3);
  if ((int)param_3 == 0) {
    uVar1 = *(char *)(param_2 + 0xd8) == '\x01';
    if ((bool)uVar1) {
      func_0x00010bcc6510();
      goto LAB_10bcc5d5c;
    }
  }
  else {
    FUN_10bcc5450(param_2 + 0x60);
    *(undefined1 *)(param_2 + 0xd8) = 0;
  }
  func_0x000107c31344(auStack_1f0,param_2 + 0x60,param_2 + 0xb0,0);
  iVar2 = (int)param_2 + 0x78;
  func_0x000107c313e8();
  uVar1 = iVar2 == -1;
  if ((bool)uVar1) {
    *param_1 = 1;
    *(undefined1 *)(param_1 + 6) = 0;
    puVar5 = puVar6;
  }
  else {
    *(undefined1 *)(param_2 + 0xd8) = 1;
    func_0x00010bcc6510();
    puVar5 = puVar6;
  }
  FUN_10bcc55d8(auStack_1f0);
  puVar3 = puVar4;
LAB_10bcc5d5c:
  while( true ) {
    func_0x00010bcc64fc();
    func_0x00010bcc653c(uStack_48);
    if ((bool)uVar1) break;
    ___stack_chk_fail();
    puVar4 = puVar5;
    puVar6 = puVar5;
    while (puVar5 = puVar4, uVar1 = (int)puVar6 == 1, !(bool)uVar1) {
      func_0x00010bcc64fc();
      __Unwind_Resume(puVar3);
      puVar4 = puVar5;
      FUN_10bcc55d8(auStack_1f0);
      puVar6 = puVar5;
    }
    ___cxa_begin_catch();
    *param_1 = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 10bcc5dd8; end: 10bcc5deb;  */

void FUN_10bcc5dd8(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            (param_1,param_2 + 0x60);
  return;
}



/* Entry: 10bcc5dec; end: 10bcc5e77;  */

void FUN_10bcc5dec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  FUN_10bcc5e78(&uStack_30,param_2,param_3);
  lStack_38 = lStack_28;
  uStack_40 = uStack_30;
  if (lStack_28 != 0) {
    plVar1 = (long *)(lStack_28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10bcc65c4(param_1,&uStack_40);
  func_0x000105276418(&uStack_40);
  FUN_10bcc64b0(&uStack_30);
  return;
}



/* Entry: 10bcc5e78; end: 10bcc5e9f;  */

void FUN_10bcc5e78(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_10bcc62c4(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 10bcc5ea0; end: 10bcc5eab;  */

void FUN_10bcc5ea0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bcc5ea4);
  (*pcVar1)();
}



/* Entry: 10bcc5eac; end: 10bcc5ed3;  */

void FUN_10bcc5eac(void)

{
  FUN_10bcc6284();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcc5ed4; end: 10bcc5f47;  */

void FUN_10bcc5ed4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x10;
    func_0x00010b5ef3cc();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10bcc5f48; end: 10bcc5f8f;  */

undefined4 * FUN_10bcc5f48(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  func_0x000107c3a42c();
  FUN_10bcc5f90(param_1 + 8,param_2 + 8);
  return param_1;
}



/* Entry: 10bcc5f90; end: 10bcc5fd7;  */

undefined8 * FUN_10bcc5f90(undefined8 *param_1,undefined8 *param_2)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  FUN_10bcc5fd8(param_1,*param_2,param_2 + 1);
  return param_1;
}



/* Entry: 10bcc5fd8; end: 10bcc6023;  */

void FUN_10bcc5fd8(long param_1,long param_2,long param_3)

{
  while (param_2 != param_3) {
    FUN_10bcc6024(param_1,param_1 + 8,param_2 + 0x20);
    func_0x000107c27be0();
  }
  return;
}



/* Entry: 10bcc6024; end: 10bcc60a3;  */

long FUN_10bcc6024(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long alStack_38 [3];
  
  FUN_10bcc60a4(alStack_38,param_1,param_3);
  uVar2 = param_1;
  FUN_10bcc60fc(param_1,param_2,&uStack_40,alStack_38[0] + 0x20);
  func_0x000107c31370(param_1,uStack_40,uVar2,alStack_38[0]);
  lVar1 = alStack_38[0];
  alStack_38[0] = 0;
  func_0x000107c3137c(alStack_38);
  return lVar1;
}



/* Entry: 10bcc60a4; end: 10bcc60fb;  */

void FUN_10bcc60a4(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x80;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2 + 8;
  param_1[2] = 0;
  FUN_10bcc61d0(lVar1 + 0x20,param_3);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10bcc60fc; end: 10bcc61cf;  */

long * FUN_10bcc60fc(long *param_1,long *param_2,long *param_3,int *param_4)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = param_1 + 1;
  if ((param_2 == plVar2) || (*param_4 <= (int)param_2[4])) {
    plVar2 = param_2;
    if ((param_2 != (long *)*param_1) && (func_0x000107c27bdc(), *param_4 < (int)plVar2[4])) {
      param_1 = param_1 + 1;
      plVar2 = param_1;
      if ((long *)*param_1 != (long *)0x0) {
        plVar1 = (long *)*param_1;
        do {
          while (param_1 = plVar1, (int)param_1[4] <= *param_4) {
            plVar1 = (long *)param_1[1];
            if ((long *)param_1[1] == (long *)0x0) {
              plVar2 = param_1 + 1;
              goto code_r0x00010054b0e4;
            }
          }
          plVar2 = param_1;
          plVar1 = (long *)*param_1;
        } while ((long *)*param_1 != (long *)0x0);
      }
code_r0x00010054b0e4:
      *param_3 = (long)param_1;
      return plVar2;
    }
    if (*param_2 == 0) {
      *param_3 = (long)param_2;
    }
    else {
      *param_3 = (long)plVar2;
      param_2 = plVar2 + 1;
    }
  }
  else {
    while (plVar1 = (long *)*plVar2, param_2 = plVar2, (long *)*plVar2 != (long *)0x0) {
      while (plVar2 = plVar1, (int)plVar2[4] < *param_4) {
        plVar1 = (long *)plVar2[1];
        if ((long *)plVar2[1] == (long *)0x0) {
          param_2 = plVar2 + 1;
          goto LAB_10bcc6160;
        }
      }
    }
LAB_10bcc6160:
    *param_3 = (long)plVar2;
  }
  return param_2;
}



/* Entry: 10bcc61d0; end: 10bcc6267;  */

undefined4 * FUN_10bcc61d0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  func_0x000107c31374(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 10bcc6268; end: 10bcc6283;  */

void FUN_10bcc6268(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 10bcc6284; end: 10bcc62c3;  */

undefined8 * FUN_10bcc6284(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99a68;
  func_0x000107c27e64(param_1 + 0xf);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xc);
  *param_1 = &PTR_FUN_110d99ab8;
  __ZNSt3__15mutexD1Ev(param_1 + 4);
  func_0x00010bcc623c(param_1 + 1);
  return param_1;
}



/* Entry: 10bcc62c4; end: 10bcc6363;  */

undefined1 * FUN_10bcc62c4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [16];
  long lStack_40;
  undefined8 uStack_38;
  
  puVar2 = auStack_50;
  puVar3 = auStack_50;
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10bcc6364(auStack_50,1);
  FUN_10bcc63bc(lStack_40,param_3,param_4);
  lVar1 = lStack_40;
  lStack_40 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x00010bcc64a0();
  func_0x00010bcc653c(uStack_38);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010bcc64a0();
  func_0x00010bcc6534();
  *(undefined8 *)(puVar3 + 8) = param_3;
  puVar2 = puVar3;
  FUN_10bcc638c();
  *(undefined1 **)(puVar3 + 0x10) = puVar2;
  return puVar3;
}



/* Entry: 10bcc6364; end: 10bcc638b;  */

long FUN_10bcc6364(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10bcc638c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10bcc638c; end: 10bcc63bb;  */

undefined8 * FUN_10bcc638c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x108421084210843) {
    puVar1 = (undefined8 *)(param_2 * 0xf8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d99a00;
  param_1[1] = 0;
  FUN_10bcc6428(param_1 + 3);
  return param_1;
}



/* Entry: 10bcc63bc; end: 10bcc63ff;  */

undefined8 * FUN_10bcc63bc(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d99a00;
  param_1[1] = 0;
  FUN_10bcc6428(param_1 + 3);
  return param_1;
}



/* Entry: 10bcc6400; end: 10bcc6403;  */

void FUN_10bcc6400(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d99a00;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10bcc6404; end: 10bcc6417;  */

void FUN_10bcc6404(void)

{
  FUN_10bcc648c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcc6418; end: 10bcc6427;  */

void FUN_10bcc6418(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bcc6420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10bcc6428; end: 10bcc648b;  */

void FUN_10bcc6428(void)

{
  FUN_10bcc5bd4();
  return;
}



/* Entry: 10bcc648c; end: 10bcc64af;  */

void FUN_10bcc648c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d99a00;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10bcc64b0; end: 10bcc64d7;  */

long FUN_10bcc64b0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10bcc64d8; end: 10bcc654f;  */

void FUN_10bcc64d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10bcc6550; end: 10bcc65c3;  */

void FUN_10bcc6550(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  
  func_0x00010bcc6e74();
  func_0x000107c3a434();
  lVar4 = unaff_x19 + 0x40;
  FUN_10bcc6740(lVar4,param_1);
  if (lVar4 == 0) {
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
  }
  else {
    lVar5 = *(long *)(lVar4 + 0x30);
    uVar6 = *(undefined8 *)(lVar4 + 0x28);
    unaff_x20[1] = *(undefined8 *)(lVar4 + 0x30);
    *unaff_x20 = uVar6;
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
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 10bcc65c4; end: 10bcc66d3;  */

void FUN_10bcc65c4(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  long *plStack_40;
  undefined8 uStack_38;
  
  plVar2 = param_1;
  func_0x000107c31388();
  func_0x000107c3a434();
  func_0x00010bcc6e68();
  if (*plVar2 != 0) {
    uVar3 = 0x58;
    ___cxa_allocate_exception(0x58);
    func_0x000107c27e5c();
    plStack_40 = param_1;
    uStack_38 = param_2;
    func_0x000107c2793c(&UNK_10f82f6f8);
    func_0x000107c3173c(&ppuStack_58);
    if (-1 < (char)bStack_41) {
      uStack_50 = (ulong)bStack_41;
      ppuStack_58 = &ppuStack_58;
    }
    FUN_10bcc6e7c(uVar3,1,ppuStack_58,uStack_50,0);
    ___cxa_throw(uVar3,&PTR_DAT_110d99b20,&DAT_1055b0158);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10bcc669c);
    (*pcVar1)();
  }
  func_0x00010bcc6e68();
  func_0x00010b5eea8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 10bcc66d4; end: 10bcc6707;  */

long FUN_10bcc66d4(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_10bcc6a84(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x28;
}



/* Entry: 10bcc6708; end: 10bcc673f;  */

void FUN_10bcc6708(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x000107c31388();
  func_0x000107c3a434();
  FUN_10bcc6cb0(unaff_x19 + 0x40,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 10bcc6740; end: 10bcc6813;  */

long FUN_10bcc6740(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x000107c278c4();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar4 != plVar2) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x000107c278d0(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 10bcc6814; end: 10bcc69bb;  */

void FUN_10bcc6814(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar3 = param_1;
  plVar5 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar7 = (long *)param_1[1];
  if (plVar7 > param_2 || param_2 == plVar7) {
    if (plVar7 <= param_2) {
      return;
    }
    plVar3 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar7 < (long *)0x3) || (((ulong)plVar7 & (long)plVar7 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar3) {
      plVar3 = (long *)(1L << (-LZCOUNT((long)plVar3 - 1) & 0x3fU));
    }
    if (param_2 <= plVar3) {
      param_2 = plVar3;
    }
    if (plVar7 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      FUN_10bcc69bc(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm(lVar2);
    FUN_10bcc69bc(param_1,lVar2);
    param_1[1] = (long)param_2;
    lVar2 = *param_1;
    for (plVar3 = (long *)0x0; param_2 != plVar3; plVar3 = (long *)((long)plVar3 + 1)) {
      *(undefined8 *)(lVar2 + (long)plVar3 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      plVar5 = (long *)plVar3[1];
      uVar4 = (long)param_2 - 1;
      uVar1 = 0;
      if (param_2 != (long *)0x0) {
        uVar1 = (ulong)plVar5 / (ulong)param_2;
      }
      plVar7 = plVar5;
      if (param_2 <= plVar5) {
        plVar7 = (long *)((long)plVar5 - uVar1 * (long)param_2);
      }
      if (((ulong)param_2 & uVar4) == 0) {
        plVar7 = (long *)((ulong)plVar5 & uVar4);
      }
      *(long **)(lVar2 + (long)plVar7 * 8) = param_1 + 2;
      while (plVar5 = plVar3, plVar3 = (long *)*plVar5, plVar3 != (long *)0x0) {
        plVar6 = (long *)plVar3[1];
        if (((ulong)param_2 & uVar4) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar4);
        }
        else if (param_2 <= plVar6) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)param_2;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
        }
        if (plVar6 != plVar7) {
          if (*(long *)(lVar2 + (long)plVar6 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar6 * 8) = plVar5;
            plVar7 = plVar6;
          }
          else {
            *plVar5 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar2 + (long)plVar6 * 8);
            **(long **)(lVar2 + (long)plVar6 * 8) = (long)plVar3;
            plVar3 = plVar5;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar2 = *plVar3;
  *plVar3 = (long)plVar5;
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10bcc69bc; end: 10bcc69d3;  */

void FUN_10bcc69bc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10bcc69d4; end: 10bcc69fb;  */

undefined8 FUN_10bcc69d4(undefined8 param_1)

{
  FUN_10bcc69fc(param_1,0);
  return param_1;
}



/* Entry: 10bcc69fc; end: 10bcc6a13;  */

void FUN_10bcc69fc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x00010bcc6a5c(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10bcc6a14; end: 10bcc6a83;  */

void FUN_10bcc6a14(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x00010bcc6a5c(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10bcc6a84; end: 10bcc6caf;  */

undefined1  [16]
FUN_10bcc6a84(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *unaff_x25;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  plVar5 = param_1 + 3;
  func_0x000107c278c4();
  plVar7 = (long *)param_1[1];
  if (plVar7 != (long *)0x0) {
    uVar8 = (long)plVar7 - 1;
    if (((ulong)plVar7 & uVar8) == 0) {
      unaff_x25 = (long *)(uVar8 & (ulong)plVar5);
    }
    else {
      unaff_x25 = plVar5;
      if (plVar7 <= plVar5) {
        uVar1 = 0;
        if (plVar7 != (long *)0x0) {
          uVar1 = (ulong)plVar5 / (ulong)plVar7;
        }
        unaff_x25 = (long *)((long)plVar5 - uVar1 * (long)plVar7);
      }
    }
    plVar6 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_10bcc6b48;
          plVar3 = (long *)plVar6[1];
          if (plVar3 != plVar5) break;
          plVar3 = plVar6 + 2;
          func_0x000107c278d0(plVar3,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar2 = 0;
            goto LAB_10bcc6c7c;
          }
        }
        if (((ulong)plVar7 & uVar8) == 0) {
          plVar3 = (long *)((ulong)plVar3 & uVar8);
        }
        else if (plVar7 <= plVar3) {
          uVar1 = 0;
          if (plVar7 != (long *)0x0) {
            uVar1 = (ulong)plVar3 / (ulong)plVar7;
          }
          plVar3 = (long *)((long)plVar3 - uVar1 * (long)plVar7);
        }
      } while (plVar3 == unaff_x25);
    }
  }
LAB_10bcc6b48:
  uVar2 = *param_4;
  plVar3 = param_1 + 2;
  plVar6 = (long *)0x38;
  __Znwm();
  *plVar6 = 0;
  plVar6[1] = (long)plVar5;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar6 + 2,uVar2);
  plVar6[5] = 0;
  plVar6[6] = 0;
  if ((plVar7 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar7 < (float)(param_1[3] + 1))
     ) {
    func_0x00010bcc6e50((long)plVar7 << 1);
    FUN_10bcc6814(param_1);
    plVar7 = (long *)param_1[1];
    if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar7 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x25 = plVar5;
      if (plVar7 <= plVar5) {
        uVar8 = 0;
        if (plVar7 != (long *)0x0) {
          uVar8 = (ulong)plVar5 / (ulong)plVar7;
        }
        unaff_x25 = (long *)((long)plVar5 - uVar8 * (long)plVar7);
      }
    }
  }
  lVar4 = *param_1;
  plVar5 = *(long **)(lVar4 + (long)unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    *plVar6 = *plVar3;
    *plVar3 = (long)plVar6;
    *(long **)(lVar4 + (long)unaff_x25 * 8) = plVar3;
    if (*plVar6 != 0) {
      plVar5 = *(long **)(*plVar6 + 8);
      if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
        plVar5 = (long *)((ulong)plVar5 & (long)plVar7 - 1U);
      }
      else if (plVar7 <= plVar5) {
        uVar8 = 0;
        if (plVar7 != (long *)0x0) {
          uVar8 = (ulong)plVar5 / (ulong)plVar7;
        }
        plVar5 = (long *)((long)plVar5 - uVar8 * (long)plVar7);
      }
      *(long **)(lVar4 + (long)plVar5 * 8) = plVar6;
    }
  }
  else {
    *plVar6 = *plVar5;
    *plVar5 = (long)plVar6;
  }
  param_1[3] = param_1[3] + 1;
  func_0x00010bcc6e40();
  uVar2 = 1;
LAB_10bcc6c7c:
  auVar9._8_8_ = uVar2;
  auVar9._0_8_ = plVar6;
  return auVar9;
}



/* Entry: 10bcc6cb0; end: 10bcc6d17;  */

void FUN_10bcc6cb0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10bcc6740();
  if (lVar1 != 0) {
    func_0x00010bcc6ce4(param_1,lVar1);
  }
  return;
}



/* Entry: 10bcc6d18; end: 10bcc6e7b;  */

void FUN_10bcc6d18(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10bcc6dcc;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10bcc6dcc;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_10bcc6dcc:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10bcc6e7c; end: 10bcc734f;  */

ulong FUN_10bcc6e7c(undefined8 *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                   ulong param_5)

{
  uint uVar1;
  undefined1 uVar2;
  ulong uVar3;
  char *pcVar4;
  undefined8 ****ppppuVar5;
  long *plVar6;
  undefined *puVar7;
  undefined ***pppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  char *pcVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 extraout_x8;
  ulong unaff_x19;
  int iVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  byte *pbVar17;
  undefined *puVar18;
  undefined *puStack_328;
  undefined8 ****ppppuStack_320;
  char *pcStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  char *pcStack_300;
  undefined8 uStack_2f8;
  ulong uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  code *pcStack_2d0;
  undefined **ppuStack_2c8;
  undefined ***pppuStack_2c0;
  undefined8 **appuStack_2a0 [3];
  undefined **ppuStack_288;
  undefined1 *puStack_280;
  undefined8 uStack_278;
  ulong uStack_270;
  undefined1 auStack_268 [504];
  undefined8 uStack_70;
  
  uVar3 = param_2;
  uVar13 = param_5;
  func_0x000107c3a464();
  *param_1 = &PTR_DAT_110d99b08;
  *(int *)(param_1 + 1) = (int)uVar3;
  puVar16 = param_1 + 2;
  param_1[3] = 0;
  *puVar16 = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  uStack_70 = extraout_x8;
  if (uVar13 == 0) {
    *(undefined1 *)(unaff_x19 + 0x48) = 0;
    *(undefined1 *)(unaff_x19 + 0x40) = 0;
    *(undefined1 *)(unaff_x19 + 0x44) = 0;
    *(undefined1 *)(unaff_x19 + 0x50) = 0;
  }
  else {
    iVar14 = 5;
    if (*(int *)(param_5 + 0x14c) != 0) {
      iVar14 = *(int *)(param_5 + 0x14c);
    }
    *(undefined1 *)(unaff_x19 + 0x48) = 0;
    *(undefined1 *)(unaff_x19 + 0x44) = 1;
    *(int *)(unaff_x19 + 0x40) = iVar14;
    pbVar17 = (byte *)(unaff_x19 + 0x50);
    *pbVar17 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&ppuStack_288,param_5 + 0xf8);
    func_0x000107c27b9c(unaff_x19 + 0x28,&ppuStack_288);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_288);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&ppppuStack_320,param_5 + 0xe0);
    if (-1 < uStack_310._7_1_) {
      ppppuStack_320 = &ppppuStack_320;
    }
    _statvfs(ppppuStack_320,&ppuStack_288);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppuStack_320);
    if ((int)ppppuStack_320 == 0) {
      if ((*pbVar17 & 1) == 0) {
        *pbVar17 = 1;
      }
      *(ulong *)(unaff_x19 + 0x48) = (long)puStack_280 * (uStack_270 & 0xffffffff);
    }
  }
  plVar6 = (long *)(unaff_x19 + 0x48);
  puStack_280 = auStack_268;
  ppuStack_288 = &PTR_DAT_11099bc38;
  uStack_270 = 500;
  uStack_278 = 0;
  if (param_5 == 0) {
    pcVar11 = "unknown";
    func_0x000107c278b8(appuStack_2a0);
  }
  else {
    pcVar11 = (char *)(param_5 + 0xf8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(appuStack_2a0);
  }
  uVar3 = param_2;
  _sqlite3_errstr();
  if (param_5 == 0) {
    pcVar4 = "N/A";
  }
  else {
    pcVar4 = *(char **)(param_5 + 0x188);
    _sqlite3_errmsg();
  }
  uVar1 = *(uint *)(unaff_x19 + 8);
  ppppuVar5 = (undefined8 ****)appuStack_2a0;
  func_0x000107c27e5c();
  uStack_308 = 0;
  uStack_2f8 = 0;
  uStack_2e8 = 0;
  ppppuStack_320 = ppppuVar5;
  pcStack_318 = pcVar11;
  uStack_310 = uVar3;
  pcStack_300 = pcVar4;
  uStack_2f0 = (ulong)uVar1;
  uStack_2e0 = param_3;
  uStack_2d8 = param_4;
  func_0x000107c2793c(&UNK_10f82f726);
  func_0x00010bcc76f0();
  func_0x00010bcc770c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(appuStack_2a0);
  uVar2 = *(char *)(unaff_x19 + 0x50) == '\x01';
  if ((bool)uVar2) {
    func_0x000107c283f8();
    ppppuStack_320 = (undefined8 ****)*plVar6;
    pcStack_318 = (char *)0x0;
    func_0x000107c2793c(&UNK_10f82f77d);
    func_0x00010bcc76f0();
    func_0x00010bcc770c();
  }
  if (param_5 != 0) {
    iVar14 = (int)param_2;
    uVar2 = iVar14 == 0x13 || iVar14 == 0xb;
    if (iVar14 == 0x13 || iVar14 == 0xb) {
      ppppuStack_320 = (undefined8 ****)0x0;
      pcStack_318 = (char *)0x0;
      func_0x000107c2793c(&UNK_10f82f78e);
      func_0x00010bcc7714();
      func_0x00010bcc76d4();
      pcStack_2d0 = FUN_10bcc753c;
      ppuStack_2c8 = &PTR_FUN_110d99b50;
      pppuStack_2c0 = &ppuStack_288;
      func_0x000107c31358(param_5,&UNK_10f82f7a0,0x16,0,&pcStack_2d0);
      func_0x00010bcc773c();
      uVar2 = 0;
      if ((iVar14 == 0xb) && (uVar2 = *(char *)(param_5 + 0x16e) == '\x01', (bool)uVar2)) {
        ppppuStack_320 = (undefined8 ****)0x0;
        pcStack_318 = (char *)0x0;
        func_0x000107c2793c(&UNK_10f82f7b7);
        func_0x00010bcc7714();
        func_0x00010bcc76d4();
        FUN_10bcc56e4();
        if ((param_5 & 1) == 0) {
          ppppuStack_320 = (undefined8 ****)0x0;
          pcStack_318 = (char *)0x0;
          func_0x000107c2793c(&UNK_10f82f7d4);
          func_0x00010bcc7714();
          func_0x00010bcc76d4();
        }
        else {
          ppppuStack_320 = (undefined8 ****)0x0;
          pcStack_318 = (char *)0x0;
          func_0x000107c2793c(&UNK_10f82f7fb);
          func_0x00010bcc7714();
          func_0x00010bcc76d4();
        }
      }
    }
  }
  func_0x000107c31394();
  func_0x000107c3a45c();
  if (lRam00000001137fe108 == 0) {
    ppppuStack_320 = (undefined8 ****)0x0;
    pcStack_318 = (char *)0x0;
    func_0x000107c2793c(&UNK_10f82f848);
    func_0x00010bcc7714();
    func_0x00010bcc76d4();
LAB_10bcc71d8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm
              (&ppppuStack_320,puStack_280,uStack_278);
    func_0x000107c27b9c(puVar16,&ppppuStack_320);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppuStack_320);
    func_0x000107c3a444();
    pppuVar8 = &ppuStack_288;
    func_0x000107c283e8();
    func_0x000107c3a448(uStack_70);
    if (!(bool)uVar2) {
      ___stack_chk_fail();
      func_0x00010bcc773c();
      func_0x000107c283e8(&ppuStack_288);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(unaff_x19 + 0x28);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar16);
      __ZNSt9exceptionD2Ev();
      __Unwind_Resume();
      return (ulong)*(byte *)(pppuVar8 + 1);
    }
    return unaff_x19;
  }
  ppppuStack_320 = (undefined8 ****)0x0;
  pcStack_318 = (char *)0x0;
  puVar7 = &UNK_10f82f819;
  func_0x000107c2793c();
  func_0x00010bcc7714();
  func_0x00010bcc76d4();
  plVar6 = (long *)(lRam00000001137fe0e8 + (uRam00000001137fe100 / 0x66) * 8);
  if (lRam00000001137fe0f0 == lRam00000001137fe0e8) {
    puVar15 = (undefined *)0x0;
  }
  else {
    puVar15 = (undefined *)(*plVar6 + (uRam00000001137fe100 % 0x66) * 0x28);
  }
  func_0x000107c31398();
  do {
    puVar18 = puVar15 + -0xff0;
    do {
      uVar2 = 1;
      if (puVar15 == puVar7) goto LAB_10bcc71d8;
      puVar9 = puVar15;
      __ZNSt3__16chrono12system_clock9to_time_tERKNS0_10time_pointIS1_NS0_8durationIxNS_5ratioILl1ELl1000000EEEEEEE
                ();
      ppuVar10 = &puStack_328;
      puStack_328 = puVar9;
      _localtime(ppuVar10);
      uVar12 = 0x14;
      _strftime(appuStack_2a0,0x14,&UNK_10f82f826,ppuVar10);
      pcVar11 = puVar15 + 0x10;
      uVar1 = *(uint *)(puVar15 + 8);
      func_0x000107c27e5c();
      pcStack_318 = (char *)0x0;
      uStack_308 = 0;
      ppppuStack_320 = (undefined8 ****)appuStack_2a0;
      uStack_310 = (ulong)uVar1;
      pcStack_300 = pcVar11;
      uStack_2f8 = uVar12;
      func_0x000107c2793c(&UNK_10f82f838);
      func_0x00010bcc76f0();
      func_0x00010bcc770c();
      puVar18 = puVar18 + 0x28;
      puVar15 = puVar15 + 0x28;
    } while ((undefined *)*plVar6 != puVar18);
    plVar6 = plVar6 + 1;
    puVar15 = (undefined *)*plVar6;
  } while( true );
}



/* Entry: 10bcc7350; end: 10bcc7373;  */

undefined1 FUN_10bcc7350(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10bcc7374; end: 10bcc7443;  */

void FUN_10bcc7374(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  if (param_1 != (long *)0x0) {
    plVar2 = param_1;
    func_0x000107c313b8();
    lVar1 = param_1[0x13];
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&ppuStack_58,param_1 + 0x1f);
    if (-1 < (char)bStack_41) {
      uStack_50 = (ulong)bStack_41;
      ppuStack_58 = &ppuStack_58;
    }
    (**(code **)(*plVar2 + 0x48))
              (plVar2,(int)lVar1,ppuStack_58,uStack_50,*(undefined1 *)(param_2 + 8));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_58);
    func_0x00010bcc5688();
    if ((*(byte *)(param_1[1] + 8) & 1) == 0) goto LAB_10bcc7410;
  }
  func_0x000107c3a440();
  param_1 = (long *)0x113847128;
LAB_10bcc7410:
  (*(code *)*param_1)(param_2);
  return;
}



/* Entry: 10bcc7444; end: 10bcc7513;  */

void FUN_10bcc7444(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [8];
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uVar1 = param_3[1];
  puVar3 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar3 = param_3;
  }
  FUN_10bcc6e7c(auStack_78,param_2,puVar3,uVar1,param_1);
  if ((int)param_2 != 0xd) {
    FUN_10bcc7374(param_1,auStack_78);
  }
  puVar3 = (undefined8 *)0x58;
  ___cxa_allocate_exception();
  *puVar3 = &PTR_DAT_110d99b08;
  *(undefined4 *)(puVar3 + 1) = uStack_70;
  puVar3[3] = uStack_60;
  puVar3[2] = uStack_68;
  puVar3[4] = uStack_58;
  uStack_68 = 0;
  uStack_60 = 0;
  puVar3[6] = uStack_48;
  puVar3[5] = uStack_50;
  puVar3[7] = uStack_40;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  *(undefined1 *)(puVar3 + 10) = uStack_28;
  puVar3[9] = uStack_30;
  puVar3[8] = uStack_38;
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10bcc7504);
  (*pcVar2)();
}



/* Entry: 10bcc7514; end: 10bcc7527;  */

void FUN_10bcc7514(void)

{
  func_0x00010563ac40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcc7528; end: 10bcc753b;  */

void FUN_10bcc7528(void)

{
  return;
}



/* Entry: 10bcc753c; end: 10bcc7593;  */

undefined8 FUN_10bcc753c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_4 + 0x10);
  uStack_30 = *param_2;
  uStack_28 = 0;
  func_0x000107c2793c(&UNK_10f82f85d);
  func_0x00010bcc7714();
  func_0x00010bcc770c(uVar1,param_3,param_4,0xc,&uStack_30);
  return 0;
}



/* Entry: 10bcc7594; end: 10bcc75ab;  */

void FUN_10bcc7594(void)

{
  return;
}



/* Entry: 10bcc75ac; end: 10bcc76ab;  */

void FUN_10bcc75ac(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  
  if (puRam00000001137fe0f0 == puRam00000001137fe0f8) {
    if (puRam00000001137fe0e8 < puRam00000001137fe0e0 ||
        (long)puRam00000001137fe0e8 - (long)puRam00000001137fe0e0 == 0) {
      puVar6 = (undefined8 *)((long)puRam00000001137fe0f0 - (long)puRam00000001137fe0e0 >> 2);
      if ((long)puRam00000001137fe0f0 - (long)puRam00000001137fe0e0 == 0) {
        puVar6 = (undefined8 *)0x1;
      }
      uStack_50 = 0x1137fe0f8;
      puVar4 = puVar6;
      puVar5 = puRam00000001137fe0e8;
      func_0x000107c313b0();
      puStack_68 = puVar4 + ((ulong)puVar6 >> 2);
      puStack_58 = puVar4 + (long)puVar5;
      puStack_70 = puVar4;
      puStack_60 = puStack_68;
      FUN_10bcc76ac(&puStack_70,puRam00000001137fe0e8,puRam00000001137fe0f0);
      puVar3 = puRam00000001137fe0f8;
      puVar5 = puRam00000001137fe0f0;
      puVar4 = puRam00000001137fe0e8;
      puVar6 = puRam00000001137fe0e0;
      puRam00000001137fe0e8 = puStack_68;
      puRam00000001137fe0e0 = puStack_70;
      puRam00000001137fe0f8 = puStack_58;
      puRam00000001137fe0f0 = puStack_60;
      puStack_68 = puVar4;
      puStack_70 = puVar6;
      puStack_58 = puVar3;
      puStack_60 = puVar5;
      func_0x000107c313b4(&puStack_70);
    }
    else {
      lVar1 = (((long)puRam00000001137fe0e8 - (long)puRam00000001137fe0e0 >> 3) + 1) / -2;
      puVar6 = puRam00000001137fe0e8 + lVar1;
      lVar2 = (long)puRam00000001137fe0f0 - (long)puRam00000001137fe0e8;
      if (lVar2 != 0) {
        _memmove(puVar6,puRam00000001137fe0e8,lVar2);
      }
      puRam00000001137fe0f0 = (undefined8 *)((long)puVar6 + lVar2);
      puRam00000001137fe0e8 = puRam00000001137fe0e8 + lVar1;
    }
  }
  *puRam00000001137fe0f0 = param_1;
  puRam00000001137fe0f0 = puRam00000001137fe0f0 + 1;
  return;
}



/* Entry: 10bcc76ac; end: 10bcc779f;  */

void FUN_10bcc76ac(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 - (long)param_2;
  lVar1 = (long)*(undefined8 **)(param_1 + 0x10) + param_3;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (; param_3 != 0; param_3 = param_3 + -8) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10bcc77a0; end: 10bcc7813;  */

void FUN_10bcc77a0(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  code *extraout_x8;
  
  if (*(long **)(param_1 + 8) != (long *)0x0) {
    func_0x00010bcc794c(*(undefined8 *)(**(long **)(param_1 + 8) + 0x28));
    (*extraout_x8)();
  }
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(param_1 + 0x10) + 0x28);
    func_0x00010bcc794c();
                    /* WARNING: Could not recover jumptable at 0x00010bcc7808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 10bcc7814; end: 10bcc7837;  */

void FUN_10bcc7814(undefined8 param_1)

{
  func_0x000107c3a470();
  func_0x000107c3a474(param_1,0x38);
  return;
}



/* Entry: 10bcc7838; end: 10bcc78c7;  */

void FUN_10bcc7838(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  code *extraout_x8;
  
  if (*(long **)(param_1 + 8) != (long *)0x0) {
    FUN_10bcc7930(*(undefined8 *)(**(long **)(param_1 + 8) + 0x40));
    (*extraout_x8)();
  }
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(param_1 + 0x10) + 0x40);
    FUN_10bcc7930();
                    /* WARNING: Could not recover jumptable at 0x00010bcc78ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 10bcc78c8; end: 10bcc792f;  */

void FUN_10bcc78c8(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  code *extraout_x8;
  long unaff_x23;
  
  func_0x000107c3a478();
  if (param_1 != (long *)0x0) {
    func_0x000107c3a468(*(undefined8 *)(*param_1 + 0x48));
    (*extraout_x8)();
  }
  if (*(long **)(unaff_x23 + 0x10) != (long *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(unaff_x23 + 0x10) + 0x48);
    func_0x000107c3a468();
                    /* WARNING: Could not recover jumptable at 0x00010bcc7924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 10bcc7930; end: 10bcc7963;  */

void FUN_10bcc7930(void)

{
  return;
}



/* Entry: 10bcc7964; end: 10bcc7993;  */

void FUN_10bcc7964(long *param_1)

{
  if ((param_1[1] != 0) && (*param_1 != 0)) {
    FUN_10bcc7994();
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}



/* Entry: 10bcc7994; end: 10bcc7c13;  */

/* WARNING: Removing unreachable block (ram,0x00010bcc7be8) */

void FUN_10bcc7994(long *param_1,long param_2)

{
  long *plVar1;
  long **pplVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long lStack_50;
  
  pplVar2 = &plStack_80;
  plStack_80 = (long *)0x0;
  plStack_78 = (long *)0x0;
  lStack_70 = 0;
  __ZNSt3__15mutex4lockEv(param_1 + 0xb);
  plVar1 = plStack_78;
  plVar7 = (long *)param_1[6];
  plVar8 = plVar7;
  for (plVar3 = (long *)param_1[5]; plVar10 = plVar8, plVar3 != plVar8; plVar3 = plVar3 + 2) {
    plVar4 = (long *)*plVar3;
    if (*plVar4 == param_2) {
      do {
        plVar9 = plVar8;
        plVar8 = plVar9 + -2;
        plVar10 = plVar3;
        if (plVar8 == plVar3) goto LAB_10bcc7a24;
      } while (*(long *)*plVar8 == param_2);
      lVar5 = plVar3[1];
      lVar6 = plVar9[-1];
      *plVar3 = *plVar8;
      plVar3[1] = lVar6;
      *plVar8 = (long)plVar4;
      plVar9[-1] = lVar5;
    }
  }
LAB_10bcc7a24:
  lVar5 = (long)plVar7 - (long)plVar10;
  lVar6 = lVar5 >> 4;
  if (0 < lVar6) {
    if (lStack_70 - (long)plStack_78 < lVar5) {
      FUN_10bcc81e8(&plStack_80,lVar6 + ((long)plStack_78 - (long)plStack_80 >> 4));
      FUN_10bcc82b4(&plStack_68,pplVar2,-(long)plStack_80 >> 4,&lStack_70);
      lVar6 = (long)plStack_58 + lVar5;
      plVar3 = plVar10;
      for (; lVar5 != 0; lVar5 = lVar5 + -0x10) {
        lVar11 = *plVar3;
        plStack_58[1] = plVar3[1];
        *plStack_58 = lVar11;
        *plVar3 = 0;
        plVar3[1] = 0;
        plVar3 = plVar3 + 2;
        plStack_58 = plStack_58 + 2;
      }
      plStack_58 = (long *)lVar6;
      _memcpy(lVar6,0,plStack_78);
      plStack_58 = (long *)((long)plStack_58 + (long)plStack_78);
      plStack_78 = (long *)0x0;
      plVar3 = (long *)((long)plStack_60 + (long)plStack_80);
      _memcpy(plVar3,plStack_80,-(long)plStack_80);
      lVar5 = lStack_70;
      lStack_70 = lStack_50;
      plStack_78 = plStack_58;
      plStack_58 = plStack_80;
      lStack_50 = lVar5;
      plStack_68 = plStack_80;
      plStack_60 = plStack_80;
      plStack_80 = plVar3;
      FUN_10bcc833c(&plStack_68);
    }
    else {
      lVar11 = (long)plStack_78 >> 4;
      if (lVar11 < lVar6) {
        plVar3 = (long *)((long)plStack_78 + (long)plVar10);
        for (; plVar3 != plVar7; plVar3 = plVar3 + 2) {
          lVar6 = *plVar3;
          plStack_78[1] = plVar3[1];
          *plStack_78 = lVar6;
          *plVar3 = 0;
          plVar3[1] = 0;
          plStack_78 = plStack_78 + 2;
        }
        lVar6 = lVar11;
        if (lVar11 < 1) goto LAB_10bcc7b50;
      }
      func_0x00010bcc83a8(&plStack_80,0,plVar1,lVar5);
      FUN_10bcc844c(plVar10,lVar6,0);
    }
  }
LAB_10bcc7b50:
  if (plVar10 == (long *)param_1[6]) {
    plVar3 = (long *)param_1[5];
  }
  else {
    FUN_10bcc80d0(param_1 + 5,plVar10);
    plVar3 = (long *)param_1[5];
    plVar10 = (long *)param_1[6];
  }
  if (plVar3 == plVar10) {
    (**(code **)(*param_1 + 0x10))(param_1,0);
  }
  func_0x00010bcc8840();
  plVar3 = plStack_78;
  for (plVar7 = plStack_80; plVar7 != plVar3; plVar7 = plVar7 + 2) {
    lVar5 = *plVar7;
    __ZNSt3__15mutex4lockEv(lVar5 + 0x58);
    *(undefined8 *)*plVar7 = 0;
    __ZNSt3__15mutex6unlockEv(lVar5 + 0x58);
  }
  func_0x00010bcc8060(&plStack_80);
  return;
}



/* Entry: 10bcc7c14; end: 10bcc7c5f;  */

undefined8 * FUN_10bcc7c14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d99bf0;
  __ZNSt3__15mutexD1Ev(param_1 + 0xb);
  func_0x000107c278a8(param_1 + 8);
  func_0x00010bcc8060(param_1 + 5);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 1);
  return param_1;
}



/* Entry: 10bcc7c60; end: 10bcc7c63;  */

undefined8 * FUN_10bcc7c60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d99bf0;
  __ZNSt3__15mutexD1Ev(param_1 + 0xb);
  func_0x000107c278a8(param_1 + 8);
  func_0x00010bcc8060(param_1 + 5);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 1);
  return param_1;
}



/* Entry: 10bcc7c64; end: 10bcc7c77;  */

void FUN_10bcc7c64(void)

{
  FUN_10bcc7c14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcc7c78; end: 10bcc7d13;  */

void FUN_10bcc7c78(long *param_1,long param_2,undefined8 *param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code **ppcVar3;
  long extraout_x8;
  long *extraout_x8_00;
  undefined8 extraout_x9;
  long extraout_x9_00;
  undefined8 *puVar4;
  long *plVar5;
  long *aplStack_e0 [2];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_28;
  
  puVar2 = &uStack_70;
  func_0x00010bcc8848();
  uStack_68 = param_3[1];
  uStack_70 = *param_3;
  uStack_60 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  pcStack_58 = FUN_10bcc8490;
  ppuStack_50 = &PTR_DAT_110d99c30;
  ppcVar3 = &pcStack_58;
  uStack_48 = param_5;
  uStack_28 = extraout_x9;
  FUN_10bcc7d14();
  func_0x00010bcc8880(ppuStack_50);
  func_0x000107c3a48c();
  func_0x00010bcc8848(uStack_28);
  if (extraout_x9_00 == extraout_x8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bcc888c(&pcStack_58);
  func_0x000107c3a48c();
  func_0x00010bcc8870();
  uStack_d0 = param_6;
  uStack_c8 = param_7;
  __ZNSt3__15mutex4lockEv(param_1 + 0xb);
  puVar1 = (undefined8 *)param_1[5];
  puVar4 = puVar1;
  do {
    if (puVar4 == (undefined8 *)param_1[6]) {
      if (puVar1 == (undefined8 *)param_1[6]) {
        (**(code **)(*param_1 + 0x10))(param_1,1);
      }
      FUN_10bcc7e44(aplStack_e0);
      *aplStack_e0[0] = param_2;
      func_0x000107c2797c(aplStack_e0[0] + 1,puVar2);
      *(undefined4 *)(aplStack_e0[0] + 4) = param_4;
      FUN_10bcc7e64(aplStack_e0[0] + 5,ppcVar3);
      func_0x0001082afa98(aplStack_e0[0] + 0x13,&uStack_d0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (aplStack_e0[0] + 0x16,param_1 + 1);
      *(int *)(aplStack_e0[0] + 0x19) = (int)param_1[4];
      func_0x00010bcc8108(param_1 + 5,aplStack_e0);
      *extraout_x8_00 = param_2;
      extraout_x8_00[1] = (long)param_1;
      func_0x00010bcc8878();
      goto LAB_10bcc7e08;
    }
    plVar5 = (long *)*puVar4;
    puVar4 = puVar4 + 2;
  } while (*plVar5 != param_2);
  *extraout_x8_00 = 0;
  extraout_x8_00[1] = 0;
LAB_10bcc7e08:
  func_0x00010bcc8840();
  return;
}



/* Entry: 10bcc7d14; end: 10bcc7e43;  */

void FUN_10bcc7d14(long *param_1,long *param_2,long param_3,undefined8 param_4,undefined4 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *aplStack_70 [2];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_60 = param_7;
  uStack_58 = param_8;
  __ZNSt3__15mutex4lockEv(param_2 + 0xb);
  puVar1 = (undefined8 *)param_2[5];
  puVar2 = puVar1;
  do {
    if (puVar2 == (undefined8 *)param_2[6]) {
      if (puVar1 == (undefined8 *)param_2[6]) {
        (**(code **)(*param_2 + 0x10))(param_2,1);
      }
      FUN_10bcc7e44(aplStack_70);
      *aplStack_70[0] = param_3;
      func_0x000107c2797c(aplStack_70[0] + 1,param_4);
      *(undefined4 *)(aplStack_70[0] + 4) = param_5;
      FUN_10bcc7e64(aplStack_70[0] + 5,param_6);
      func_0x0001082afa98(aplStack_70[0] + 0x13,&uStack_60);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (aplStack_70[0] + 0x16,param_2 + 1);
      *(int *)(aplStack_70[0] + 0x19) = (int)param_2[4];
      func_0x00010bcc8108(param_2 + 5,aplStack_70);
      *param_1 = param_3;
      param_1[1] = (long)param_2;
      func_0x00010bcc8878();
      goto LAB_10bcc7e08;
    }
    plVar3 = (long *)*puVar2;
    puVar2 = puVar2 + 2;
  } while (*plVar3 != param_3);
  *param_1 = 0;
  param_1[1] = 0;
LAB_10bcc7e08:
  func_0x00010bcc8840();
  return;
}



/* Entry: 10bcc7e44; end: 10bcc7e63;  */

void FUN_10bcc7e44(void)

{
  undefined1 uStack_11;
  
  FUN_10bcc8664(&uStack_11);
  return;
}



/* Entry: 10bcc7e64; end: 10bcc7e8b;  */

undefined8 * FUN_10bcc7e64(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x000107c2816c(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 10bcc7e8c; end: 10bcc7f6f;  */

void FUN_10bcc7e8c(long *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  lVar4 = (long)*(char *)((long)param_1 + 0xaf);
  if (lVar4 < 0) {
    lVar4 = param_1[0x14];
  }
  if (lVar4 != 0) {
    plVar3 = param_1;
    func_0x000107c313b8();
    lVar1 = param_1[0x19];
    lVar4 = (long)*(char *)((long)param_1 + 199);
    if (lVar4 < 0) {
      plVar5 = (long *)param_1[0x16];
      lVar4 = param_1[0x17];
    }
    else {
      plVar5 = param_1 + 0x16;
    }
    lVar6 = (long)*(char *)((long)param_1 + 0xaf);
    if (lVar6 < 0) {
      plVar7 = (long *)param_1[0x13];
      lVar6 = param_1[0x14];
    }
    else {
      plVar7 = param_1 + 0x13;
    }
    plVar2 = plVar3;
    func_0x000107c316ec();
    (**(code **)(*plVar3 + 0x40))
              (plVar3,(int)lVar1,plVar5,lVar4,plVar7,lVar6,(long)plVar2 - param_3);
  }
  __ZNSt3__15mutex4lockEv(param_1 + 0xb);
  plVar3 = (long *)*param_1;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x10))(plVar3,*param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0xb);
  return;
}



/* Entry: 10bcc7f70; end: 10bcc7feb;  */

void FUN_10bcc7f70(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c3a480();
  func_0x000107c2795c(auStack_48,param_2);
  func_0x000107c313c8();
  func_0x000107c278a8(auStack_48);
  func_0x00010bcc8840();
  return;
}



/* Entry: 10bcc7fec; end: 10bcc801f;  */

void FUN_10bcc7fec(undefined8 param_1,undefined8 param_2)

{
  long unaff_x19;
  
  func_0x000107c3a480();
  func_0x000107c281e8(unaff_x19 + 0x40,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x58);
  return;
}



/* Entry: 10bcc8020; end: 10bcc80c7;  */

void FUN_10bcc8020(void)

{
  long lVar1;
  long unaff_x19;
  long lVar2;
  
  func_0x000107c3a480();
  do {
    lVar1 = *(long *)(unaff_x19 + 0x48);
    if (*(long *)(unaff_x19 + 0x40) == lVar1) break;
    lVar2 = (long)*(char *)(lVar1 + -1);
    if (lVar2 < 0) {
      lVar2 = *(long *)(lVar1 + -0x10);
    }
    func_0x000107c30408(unaff_x19 + 0x40);
  } while (lVar2 != 0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x58);
  return;
}



/* Entry: 10bcc80c8; end: 10bcc80cf;  */

void FUN_10bcc80c8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x10;
    func_0x00010b5ef374();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 10bcc80d0; end: 10bcc814f;  */

void FUN_10bcc80d0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x10;
    func_0x00010b5ef374();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10bcc8150; end: 10bcc81e7;  */

long FUN_10bcc8150(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  plVar1 = param_1;
  FUN_10bcc81e8(param_1,(param_1[1] - *param_1 >> 4) + 1);
  FUN_10bcc82b4(auStack_48,plVar1,param_1[1] - *param_1 >> 4,param_1 + 2);
  uVar3 = *param_2;
  puStack_38[1] = param_2[1];
  *puStack_38 = uVar3;
  *param_2 = 0;
  param_2[1] = 0;
  puStack_38 = puStack_38 + 2;
  FUN_10bcc8228(param_1,auStack_48);
  lVar2 = param_1[1];
  FUN_10bcc833c(auStack_48);
  return lVar2;
}



/* Entry: 10bcc81e8; end: 10bcc8227;  */

undefined8 * FUN_10bcc81e8(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    puVar2 = (undefined8 *)(param_1[2] - *param_1 >> 3);
    if (puVar2 <= param_2) {
      puVar2 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      puVar2 = (undefined8 *)0xfffffffffffffff;
    }
    return puVar2;
  }
  FUN_10bcc82a0();
  puVar3 = (undefined8 *)(param_2[1] - (param_1[1] - *param_1));
  puVar2 = puVar3;
  _memcpy(puVar3);
  param_2[1] = puVar3;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return puVar2;
}



/* Entry: 10bcc8228; end: 10bcc829f;  */

void FUN_10bcc8228(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] - (param_1[1] - *param_1);
  _memcpy(lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10bcc82a0; end: 10bcc82b3;  */

long * FUN_10bcc82a0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)&UNK_10f82f863;
  func_0x000104bd47e8();
  plVar2[3] = 0;
  plVar2[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010bcc82fc();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *plVar2 = param_4;
  plVar2[1] = lVar1;
  plVar2[2] = lVar1;
  plVar2[3] = param_4 + param_2 * 0x10;
  return plVar2;
}



/* Entry: 10bcc82b4; end: 10bcc831f;  */

long * FUN_10bcc82b4(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010bcc82fc();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 10bcc8320; end: 10bcc833b;  */

long * FUN_10bcc8320(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_2 << 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_10bcc8368();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10bcc833c; end: 10bcc8367;  */

long * FUN_10bcc833c(long *param_1)

{
  FUN_10bcc8368();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10bcc8368; end: 10bcc836f;  */

void FUN_10bcc8368(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
    func_0x00010b5ef374();
  }
  return;
}



/* Entry: 10bcc8370; end: 10bcc844b;  */

void FUN_10bcc8370(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
    func_0x00010b5ef374();
  }
  return;
}



/* Entry: 10bcc844c; end: 10bcc848f;  */

void FUN_10bcc844c(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_1 + param_2 * 0x10;
  for (; param_1 != lVar1; param_1 = param_1 + 0x10) {
    func_0x00010bcc8414(param_3,param_1);
    param_3 = param_3 + 0x10;
  }
  return;
}



/* Entry: 10bcc8490; end: 10bcc85a7;  */

undefined8 * FUN_10bcc8490(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *extraout_x8;
  long extraout_x8_00;
  long lVar7;
  undefined8 extraout_x9;
  long extraout_x9_00;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_28;
  
  puVar5 = &uStack_b0;
  puVar6 = &uStack_b0;
  func_0x00010bcc8848(param_1);
  plVar4 = *(long **)(param_4 + 0x10);
  uStack_b0 = *extraout_x8;
  lStack_a8 = extraout_x8[1];
  if (lStack_a8 != 0) {
    plVar1 = (long *)(lStack_a8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_a0 = *param_2;
  lStack_98 = param_2[1];
  if (lStack_98 != 0) {
    plVar1 = (long *)(lStack_98 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  pcStack_88 = FUN_10bcc85d0;
  ppuStack_80 = &PTR_DAT_110d99c18;
  if (lStack_a8 != 0) {
    plVar1 = (long *)(lStack_a8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (lStack_98 != 0) {
    plVar1 = (long *)(lStack_98 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_90 = param_3;
  uStack_78 = uStack_b0;
  lStack_70 = lStack_a8;
  uStack_68 = uStack_a0;
  lStack_60 = lStack_98;
  uStack_58 = param_3;
  uStack_28 = extraout_x9;
  (**(code **)(*plVar4 + 0x10))(plVar4,&pcStack_88);
  func_0x00010bcc8880(ppuStack_80);
  FUN_10bcc85a8();
  func_0x00010bcc8848(uStack_28);
  if (extraout_x9_00 == extraout_x8_00) {
    return puVar5;
  }
  ___stack_chk_fail();
  func_0x00010bcc888c(&pcStack_88);
  FUN_10bcc85a8();
  func_0x00010bcc8870();
  func_0x000107c30774((undefined1 *)((long)puVar6 + 0x10));
  plVar4 = *(long **)((long)puVar6 + 8);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return (undefined8 *)(undefined1 *)puVar6;
}



/* Entry: 10bcc85a8; end: 10bcc85cf;  */

long FUN_10bcc85a8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x000107c30774(param_1 + 0x10);
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



/* Entry: 10bcc85d0; end: 10bcc8663;  */

void FUN_10bcc85d0(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  
  plVar6 = *(long **)(param_1 + 0x10);
  lVar4 = *(long *)(param_1 + 0x30);
  lVar5 = (long)*(char *)((long)plVar6 + 0xaf);
  if (lVar5 < 0) {
    lVar5 = plVar6[0x14];
  }
  if (lVar5 != 0) {
    plVar3 = plVar6;
    func_0x000107c313b8();
    lVar1 = plVar6[0x19];
    lVar5 = (long)*(char *)((long)plVar6 + 199);
    if (lVar5 < 0) {
      plVar7 = (long *)plVar6[0x16];
      lVar5 = plVar6[0x17];
    }
    else {
      plVar7 = plVar6 + 0x16;
    }
    lVar8 = (long)*(char *)((long)plVar6 + 0xaf);
    if (lVar8 < 0) {
      plVar9 = (long *)plVar6[0x13];
      lVar8 = plVar6[0x14];
    }
    else {
      plVar9 = plVar6 + 0x13;
    }
    plVar2 = plVar3;
    func_0x000107c316ec();
    (**(code **)(*plVar3 + 0x40))(plVar3,(int)lVar1,plVar7,lVar5,plVar9,lVar8,(long)plVar2 - lVar4);
  }
  __ZNSt3__15mutex4lockEv(plVar6 + 0xb);
  plVar3 = (long *)*plVar6;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x10))(plVar3,*(undefined8 *)(param_1 + 0x20),lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(plVar6 + 0xb);
  return;
}



/* Entry: 10bcc8664; end: 10bcc871f;  */

undefined1 * FUN_10bcc8664(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  long extraout_x9_00;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  puVar3 = auStack_40;
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10bcc8720(auStack_40,1);
  puVar1 = puStack_30;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_110d99c58;
  uVar5 = 0xd0;
  _bzero(puStack_30 + 3);
  func_0x00010bcc88b0();
  puVar2 = puStack_30;
  puVar1[8] = extraout_x9;
  puVar1[9] = extraout_x8;
  puVar1[0xe] = 0x32aaaba7;
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  puVar1[0x12] = 0;
  puVar1[0x11] = 0;
  puVar1[0x14] = 0;
  puVar1[0x13] = 0;
  puVar1[0x16] = 0;
  puVar1[0x15] = 0;
  puVar1[0x18] = 0;
  puVar1[0x17] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1b] = 0;
  puStack_30 = (undefined8 *)0x0;
  *param_1 = (long)(puVar2 + 3);
  param_1[1] = (long)puVar2;
  func_0x00010bcc87fc();
  func_0x00010bcc8848(uStack_28);
  if (extraout_x9_00 == extraout_x8_00) {
    return puVar3;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar3 + 8) = uVar5;
  puVar4 = puVar3;
  FUN_10bcc8748();
  *(undefined1 **)(puVar3 + 0x10) = puVar4;
  return puVar3;
}



/* Entry: 10bcc8720; end: 10bcc8747;  */

long FUN_10bcc8720(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10bcc8748();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10bcc8748; end: 10bcc8777;  */

void FUN_10bcc8748(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x11a7b9611a7b962) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xe8);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110d99c58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}


