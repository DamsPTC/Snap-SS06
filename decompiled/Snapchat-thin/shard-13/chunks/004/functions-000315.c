/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a677930; end: 10a67793f;  */

void FUN_10a677930(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a677938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a677940; end: 10a677997;  */

long FUN_10a677940(long param_1)

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



/* Entry: 10a677998; end: 10a677a5b;  */

void FUN_10a677998(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = (undefined8 *)0x60;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = &PTR_DAT_110c03eb0;
  *puVar1 = &PTR_FUN_110c070d0;
  *(undefined1 *)(puVar1 + 4) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[5] = &PTR_DAT_110c03f08;
  *(undefined1 *)(puVar1 + 8) = 0;
  uStack_38 = 0x3f80000000000000;
  uStack_40 = 0;
  func_0x00010a68264c(puVar1 + 9,&uStack_40);
  *(undefined4 *)(puVar1 + 0xb) = 0x3e800000;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a677a5c; end: 10a677a6b;  */

void FUN_10a677a5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c070d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a677a6c; end: 10a677a8b;  */

void FUN_10a677a6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c070d0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a677a8c; end: 10a677a9b;  */

void FUN_10a677a8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a677a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a677a9c; end: 10a677af3;  */

long FUN_10a677a9c(long param_1)

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



/* Entry: 10a677af4; end: 10a677c07;  */

void FUN_10a677af4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = (undefined8 *)0x70;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = &PTR_DAT_110c03f60;
  *puVar1 = &PTR_FUN_110c07120;
  *(undefined1 *)(puVar1 + 4) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[5] = &PTR_DAT_110c03fb8;
  *(undefined1 *)(puVar1 + 8) = 0;
  uStack_38 = 0x3f80000000000000;
  uStack_40 = 0;
  func_0x00010a68264c(puVar1 + 9,&uStack_40);
  puVar2 = (undefined8 *)0x50;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110bcfba8;
  puVar2[4] = 0;
  puVar2[5] = 0;
  *(undefined1 *)(puVar2 + 7) = 0;
  puVar2[3] = &PTR_FUN_110c6a8d8;
  puVar2[6] = &PTR_FUN_110c6a940;
  *(undefined8 *)((long)puVar2 + 0x44) = 0;
  *(undefined8 *)((long)puVar2 + 0x3c) = 0;
  puVar1[0xb] = puVar2 + 3;
  puVar1[0xc] = puVar2;
  *(undefined4 *)(puVar1 + 0xd) = 0;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a677c08; end: 10a677c17;  */

void FUN_10a677c08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c07120;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a677c18; end: 10a677c37;  */

void FUN_10a677c18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c07120;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a677c38; end: 10a677c47;  */

void FUN_10a677c38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a677c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a677c48; end: 10a677cb3;  */

long FUN_10a677c48(long param_1)

{
  code *pcVar1;
  long lStack_30;
  undefined1 *puStack_28;
  
  puStack_28 = (undefined1 *)&lStack_30;
  lStack_30 = param_1;
  if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110c07160)[*(uint *)(param_1 + 0x10)])(&puStack_28,param_1);
    FUN_10a1f57fc(param_1);
    return param_1;
  }
  FUN_10a0d459c();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a677cb0);
  (*pcVar1)();
}



/* Entry: 10a677cb4; end: 10a677d6b;  */

void FUN_10a677cb4(void)

{
  return;
}



/* Entry: 10a677d6c; end: 10a677dd3;  */

long * FUN_10a677d6c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (((*param_1 != 0) && (param_1[1] != 0)) && (0 < *(long *)(param_1[1] + 8))) {
    lVar4 = -0x6d0;
    if (cRam00000001137eb710 == '\0') {
      lVar4 = -0xffff;
    }
    func_0x00010a1bde90(*param_1 + 0x170,(long)param_1 + lVar4 + 0xb8);
  }
  plVar5 = (long *)param_1[1];
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



/* Entry: 10a677dd4; end: 10a677e3b;  */

long * FUN_10a677dd4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (((*param_1 != 0) && (param_1[1] != 0)) && (0 < *(long *)(param_1[1] + 8))) {
    lVar4 = -0x7a0;
    if (cRam00000001137eb714 == '\0') {
      lVar4 = -0xffff;
    }
    func_0x00010a1bde90(*param_1 + 0x90,(long)param_1 + lVar4 + 0xb8);
  }
  plVar5 = (long *)param_1[1];
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



/* Entry: 10a677e3c; end: 10a677e4b;  */

void FUN_10a677e3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c07190;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a677e4c; end: 10a677e6b;  */

void FUN_10a677e4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c07190;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a677e6c; end: 10a677e7f;  */

void FUN_10a677e6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a677e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a677e80; end: 10a677e93;  */

void FUN_10a677e80(void)

{
  FUN_10a677eb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a677e94; end: 10a677e9f;  */

void FUN_10a677e94(void)

{
  return;
}



/* Entry: 10a677ea0; end: 10a677eb7;  */

void FUN_10a677ea0(long param_1)

{
  FUN_10a677eb8(param_1 + -0x90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a677eb8; end: 10a6780b7;  */

void FUN_10a677eb8(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_DAT_110c071e0;
  param_1[0x12] = &PTR_DAT_110c07210;
  if (param_1[0xd6] != 0) {
    param_1[0xd7] = param_1[0xd6];
    __ZdlPv();
  }
  puStack_28 = param_1 + 0xd3;
  FUN_10a1cd268(&puStack_28);
  if (*(char *)((long)param_1 + 0x697) < '\0') {
    __ZdlPv(param_1[0xd0]);
  }
  if (param_1[0xcc] != 0) {
    param_1[0xcd] = param_1[0xcc];
    __ZdlPv();
  }
  if (param_1[0xc6] != 0) {
    param_1[199] = param_1[0xc6];
    __ZdlPv();
  }
  if (param_1[0xc3] != 0) {
    param_1[0xc4] = param_1[0xc3];
    __ZdlPv();
  }
  func_0x00010a045fb4(param_1 + 0xc0);
  if (*(char *)((long)param_1 + 0x5f7) < '\0') {
    __ZdlPv(param_1[0xbc]);
  }
  func_0x00010a1f4b9c(param_1 + 0xba);
  func_0x00010a1f4b9c(param_1 + 0xb8);
  func_0x00010a1f4af8(param_1 + 0x92);
  if (((param_1[0x90] != 0) && (param_1[0x91] != 0)) && (0 < *(long *)(param_1[0x91] + 8))) {
    lVar1 = -0x480;
    if (cRam00000001137eb720 == '\0') {
      lVar1 = -0xffff;
    }
    func_0x00010a1be248(param_1[0x90] + 0x1b0,(long)(param_1 + 0x90) + lVar1);
  }
  func_0x00010a05248c(param_1 + 0x90);
  if (((param_1[0x8e] != 0) && (param_1[0x8f] != 0)) && (0 < *(long *)(param_1[0x8f] + 8))) {
    lVar1 = -0x470;
    if (cRam00000001137eb71e == '\0') {
      lVar1 = -0xffff;
    }
    func_0x00010a1be248(param_1[0x8e] + 0x1b0,(long)(param_1 + 0x8e) + lVar1);
  }
  func_0x00010a05248c(param_1 + 0x8e);
  func_0x00010a1943a0(param_1 + 0x89);
  FUN_10a0cfe2c(param_1 + 0x87);
  lVar1 = param_1[0x86];
  param_1[0x86] = 0;
  if (lVar1 != 0) {
    func_0x00010a20e1b8(param_1 + 0x86);
  }
  param_1[0x7f] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x80);
  param_1[0x66] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x67);
  param_1[0x52] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x53);
  if (*(char *)((long)param_1 + 0x1c7) < '\0') {
    __ZdlPv(param_1[0x36]);
  }
  if (*(char *)((long)param_1 + 0x177) < '\0') {
    __ZdlPv(param_1[0x2c]);
  }
  if (param_1[0x2a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110c07290;
  param_1[0x12] = &PTR_DAT_110c072c0;
  FUN_10a1c0a9c(param_1);
  return;
}



/* Entry: 10a6780b8; end: 10a678317;  */

void FUN_10a6780b8(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ushort uVar4;
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
  
  uVar3 = 0;
  lVar1 = -0x438;
  if (cRam00000001137eb718 == '\0') {
    lVar1 = -0xffff;
  }
  lVar1 = param_1 + lVar1;
  if ((*(ushort *)(lVar1 + 0xe9) >> 8 & 1) == 0) {
    if ((((*(long *)(lVar1 + 0xc0) != 0) || ((*(ushort *)(lVar1 + 0xe9) >> 9 & 1) != 0)) ||
        (*(long *)(lVar1 + 0xe0) != 0)) || ((*(ushort *)(lVar1 + 0x30) >> 8 & 1) == 0)) {
LAB_10a67812c:
      func_0x00010a1bd170();
      if ((uVar3 & 1) != 0) {
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
      ppuStack_48 = &PTR_DAT_110c06b58;
      FUN_10a0dad0c((ulong)&uStack_a0 | 8,&ppuStack_48);
      lVar1 = -0x438;
      if (cRam00000001137eb718 == '\0') {
        lVar1 = -0xffff;
      }
      iVar2 = (int)param_1 + (int)lVar1;
      (**(code **)(*(long *)(param_1 + lVar1) + 0x18))();
      lVar1 = -0x438;
      if (cRam00000001137eb718 == '\0') {
        lVar1 = -0xffff;
      }
      uVar3 = param_1 + lVar1;
      uVar4 = *(ushort *)(uVar3 + 0x30);
      if (iVar2 == 0) {
        if ((uVar4 >> 8 & 1) == 0) {
          FUN_10a1bfe94(uVar3,&uStack_a0);
          if ((uVar3 & 1) == 0) {
            lVar1 = -0x438;
            if (cRam00000001137eb718 == '\0') {
              lVar1 = -0xffff;
            }
            uVar3 = param_1 + lVar1;
            (**(code **)(*(long *)(param_1 + lVar1) + 0x10))(uVar3,&uStack_a0);
          }
        }
        else {
          FUN_10a1bd5e0();
          if (uVar3 != 0) {
            FUN_10a1bd7d8();
          }
        }
      }
      else {
        if ((uVar4 >> 7 & 1) == 0) {
          *(undefined8 *)(uVar3 + 0x40) = uStack_a0;
          *(ushort *)(uVar3 + 0x30) = uVar4 | 0x80;
        }
        uVar3 = uVar3 + 0x40;
        FUN_10a1bd398(uVar3,&uStack_a0);
      }
      uVar4 = 0x438;
      if (cRam00000001137eb718 == '\0') {
        uVar4 = 0xffff;
      }
      lVar1 = 0x438;
      if (cRam00000001137eb718 == '\0') {
        lVar1 = 0xffff;
      }
      if ((*(ushort *)((param_1 - lVar1) + 0xe9) >> 8 & 1) != 0) {
        FUN_10a1bd5e0();
        uVar4 = 0x438;
        if (cRam00000001137eb718 == '\0') {
          uVar4 = 0xffff;
        }
        if (uVar3 != 0) {
          FUN_10a1bd648();
          uVar4 = 0x438;
          if (cRam00000001137eb718 == '\0') {
            uVar4 = 0xffff;
          }
        }
      }
      FUN_10a1c054c((param_1 - (ulong)uVar4) + 0x90,&uStack_a0);
      return;
    }
    *(long *)(lVar1 + 0xa0) = *(long *)(lVar1 + 0xa0) + 1;
  }
  else if ((*(ushort *)(lVar1 + 0x30) >> 8 & 1) == 0) goto LAB_10a67812c;
  ppuVar6 = *(undefined ***)(lVar1 + 0xf0);
  ppuVar5 = *(undefined ***)(lVar1 + 0x38);
  if ((ppuVar6 != &PTR_DAT_110c06b58 || ppuVar5 != &PTR_DAT_110c06b58) &&
     (FUN_10a1bd5e0(), param_1 != 0)) {
    if (ppuVar6 != &PTR_DAT_110c06b58) {
      FUN_10a1bd648(param_1,lVar1 + 0x90,&PTR_DAT_110c06b58);
      *(undefined ***)(lVar1 + 0xf0) = &PTR_DAT_110c06b58;
    }
    if (ppuVar5 != &PTR_DAT_110c06b58) {
      FUN_10a1bd7d8(param_1,lVar1,&PTR_DAT_110c06b58);
      *(undefined ***)(lVar1 + 0x38) = &PTR_DAT_110c06b58;
    }
  }
  return;
}



/* Entry: 10a678318; end: 10a67837f;  */

void FUN_10a678318(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = 0x120;
  __Znwm();
  FUN_10a678380();
  *param_1 = lVar5 + 0x18;
  param_1[1] = lVar5;
  if (((long *)(lVar5 + 0x58) != (long *)0x0) &&
     ((lVar4 = *(long *)(lVar5 + 0x60), lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar6 = (long *)param_1[1];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar6 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = *(long *)(lVar5 + 0x60);
    }
    *(long *)(lVar5 + 0x58) = lVar5 + 0x18;
    *(long **)(lVar5 + 0x60) = plVar6;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
  }
  return;
}



/* Entry: 10a678380; end: 10a6783d3;  */

undefined8 * FUN_10a678380(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110bab2f0;
  FUN_10ac6ea60(param_1 + 3,0,1,param_3);
  return param_1;
}



/* Entry: 10a6783d4; end: 10a678633;  */

void FUN_10a6783d4(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ushort uVar4;
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
  
  uVar3 = 0;
  lVar1 = -0x448;
  if (cRam00000001137eb71a == '\0') {
    lVar1 = -0xffff;
  }
  lVar1 = param_1 + lVar1;
  if ((*(ushort *)(lVar1 + 0xe9) >> 8 & 1) == 0) {
    if ((((*(long *)(lVar1 + 0xc0) != 0) || ((*(ushort *)(lVar1 + 0xe9) >> 9 & 1) != 0)) ||
        (*(long *)(lVar1 + 0xe0) != 0)) || ((*(ushort *)(lVar1 + 0x30) >> 8 & 1) == 0)) {
LAB_10a678448:
      func_0x00010a1bd170();
      if ((uVar3 & 1) != 0) {
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
      ppuStack_48 = &PTR_DAT_110c06b70;
      FUN_10a0dad0c((ulong)&uStack_a0 | 8,&ppuStack_48);
      lVar1 = -0x448;
      if (cRam00000001137eb71a == '\0') {
        lVar1 = -0xffff;
      }
      iVar2 = (int)param_1 + (int)lVar1;
      (**(code **)(*(long *)(param_1 + lVar1) + 0x18))();
      lVar1 = -0x448;
      if (cRam00000001137eb71a == '\0') {
        lVar1 = -0xffff;
      }
      uVar3 = param_1 + lVar1;
      uVar4 = *(ushort *)(uVar3 + 0x30);
      if (iVar2 == 0) {
        if ((uVar4 >> 8 & 1) == 0) {
          FUN_10a1bfe94(uVar3,&uStack_a0);
          if ((uVar3 & 1) == 0) {
            lVar1 = -0x448;
            if (cRam00000001137eb71a == '\0') {
              lVar1 = -0xffff;
            }
            uVar3 = param_1 + lVar1;
            (**(code **)(*(long *)(param_1 + lVar1) + 0x10))(uVar3,&uStack_a0);
          }
        }
        else {
          FUN_10a1bd5e0();
          if (uVar3 != 0) {
            FUN_10a1bd7d8();
          }
        }
      }
      else {
        if ((uVar4 >> 7 & 1) == 0) {
          *(undefined8 *)(uVar3 + 0x40) = uStack_a0;
          *(ushort *)(uVar3 + 0x30) = uVar4 | 0x80;
        }
        uVar3 = uVar3 + 0x40;
        FUN_10a1bd398(uVar3,&uStack_a0);
      }
      uVar4 = 0x448;
      if (cRam00000001137eb71a == '\0') {
        uVar4 = 0xffff;
      }
      lVar1 = 0x448;
      if (cRam00000001137eb71a == '\0') {
        lVar1 = 0xffff;
      }
      if ((*(ushort *)((param_1 - lVar1) + 0xe9) >> 8 & 1) != 0) {
        FUN_10a1bd5e0();
        uVar4 = 0x448;
        if (cRam00000001137eb71a == '\0') {
          uVar4 = 0xffff;
        }
        if (uVar3 != 0) {
          FUN_10a1bd648();
          uVar4 = 0x448;
          if (cRam00000001137eb71a == '\0') {
            uVar4 = 0xffff;
          }
        }
      }
      FUN_10a1c054c((param_1 - (ulong)uVar4) + 0x90,&uStack_a0);
      return;
    }
    *(long *)(lVar1 + 0xa0) = *(long *)(lVar1 + 0xa0) + 1;
  }
  else if ((*(ushort *)(lVar1 + 0x30) >> 8 & 1) == 0) goto LAB_10a678448;
  ppuVar6 = *(undefined ***)(lVar1 + 0xf0);
  ppuVar5 = *(undefined ***)(lVar1 + 0x38);
  if ((ppuVar6 != &PTR_DAT_110c06b70 || ppuVar5 != &PTR_DAT_110c06b70) &&
     (FUN_10a1bd5e0(), param_1 != 0)) {
    if (ppuVar6 != &PTR_DAT_110c06b70) {
      FUN_10a1bd648(param_1,lVar1 + 0x90,&PTR_DAT_110c06b70);
      *(undefined ***)(lVar1 + 0xf0) = &PTR_DAT_110c06b70;
    }
    if (ppuVar5 != &PTR_DAT_110c06b70) {
      FUN_10a1bd7d8(param_1,lVar1,&PTR_DAT_110c06b70);
      *(undefined ***)(lVar1 + 0x38) = &PTR_DAT_110c06b70;
    }
  }
  return;
}



/* Entry: 10a678634; end: 10a6786c3;  */

void FUN_10a678634(long *param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  puVar6 = (undefined8 *)0x300;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110baa060;
  puVar2 = puVar6 + 3;
  FUN_10a330b88(puVar2,0,param_2,param_3 & 1);
  *param_1 = (long)puVar2;
  param_1[1] = (long)puVar6;
  if ((puVar6 + 9 != (long *)0x0) &&
     ((lVar5 = puVar6[10], lVar5 == 0 || (*(long *)(lVar5 + 8) == -1)))) {
    plVar7 = (long *)param_1[1];
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar5 = puVar6[10];
    }
    puVar6[9] = puVar2;
    puVar6[10] = plVar7;
    if (lVar5 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
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



/* Entry: 10a6786c4; end: 10a6786e3;  */

void FUN_10a6786c4(void)

{
  return;
}



/* Entry: 10a6786e4; end: 10a678707;  */

void FUN_10a6786e4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110c07310;
  return;
}



/* Entry: 10a678708; end: 10a67871f;  */

void FUN_10a678708(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110c07310;
  return;
}



/* Entry: 10a678720; end: 10a678743;  */

uint FUN_10a678720(undefined8 param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x90))(param_2);
  return (uint)param_2 >> 5 & 1;
}



/* Entry: 10a678744; end: 10a67877f;  */

long FUN_10a678744(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c07380);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a678780; end: 10a67882b;  */

undefined ** FUN_10a678780(void)

{
  return &PTR_DAT_110c07380;
}



/* Entry: 10a67882c; end: 10a6788cf;  */

long FUN_10a67882c(float param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  float fVar5;
  
  plVar4 = *(long **)(param_2 + 0x10);
  lVar2 = *plVar4;
  if ((*(byte *)(lVar2 + 0x1d4) & 1) != 0) {
    fVar5 = (float)NEON_ucvtf(*(undefined4 *)(lVar2 + 0x1d0));
    uVar3 = (uint)(param_1 * fVar5);
    if (uVar3 == 0) {
      lVar2 = 0;
    }
    else if ((*(float *)plVar4[1] <= 0.0) || (*(float *)plVar4[1] * (float)uVar3 <= 400.0)) {
      FUN_10a657e9c(plVar4[3],plVar4[4],lVar2,(ulong)uVar3 | 0x100000000,plVar4[5],plVar4[6],1);
      lVar2 = plVar4[4] + 0x490;
    }
    else {
      lVar2 = 0;
      *(undefined1 *)plVar4[2] = 1;
    }
    return lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a6788d0);
  (*pcVar1)();
}



/* Entry: 10a6788d0; end: 10a6788f7;  */

void FUN_10a6788d0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a6788f8; end: 10a678947;  */

void FUN_10a6788f8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar2 = *(undefined8 **)(param_2 + 8);
  *param_1 = &PTR_FUN_110c073d8;
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  uVar6 = puVar2[3];
  uVar5 = puVar2[2];
  uVar4 = puVar2[5];
  uVar3 = puVar2[4];
  uVar8 = puVar2[1];
  uVar7 = *puVar2;
  puVar1[6] = puVar2[6];
  puVar1[3] = uVar6;
  puVar1[2] = uVar5;
  puVar1[5] = uVar4;
  puVar1[4] = uVar3;
  puVar1[1] = uVar8;
  *puVar1 = uVar7;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a678948; end: 10a67894f;  */

void FUN_10a678948(void)

{
  return;
}



/* Entry: 10a678950; end: 10a678997;  */

void FUN_10a678950(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  *puVar1 = &PTR_FUN_110c07408;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



/* Entry: 10a678998; end: 10a6789c7;  */

void FUN_10a678998(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_2 = &PTR_FUN_110c07408;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  param_2[4] = uVar4;
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10a6789c8; end: 10a678da7;  */

/* WARNING: Removing unreachable block (ram,0x00010a678c84) */

void FUN_10a6789c8(undefined8 param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 ***pppuVar5;
  undefined2 uVar6;
  char cVar7;
  bool bVar8;
  code *pcVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  int iVar14;
  long *plStack_220;
  long *plStack_218;
  long *plStack_e8;
  long *plStack_d8;
  undefined8 **ppuStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  long *plStack_b0;
  undefined8 *puStack_a8;
  long lStack_98;
  long lStack_90;
  long lStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_61;
  
  lVar11 = *(long *)(param_2 + 8);
  uStack_78 = *(ulong *)(lVar11 + 0x28);
  lStack_80 = *(long *)(lVar11 + 0x20);
  uStack_70 = *(undefined8 *)(lVar11 + 0x30);
  FUN_10a1c0bf8(&lStack_98,&UNK_10f66b6a5,3,0);
  plStack_220 = (long *)CONCAT44(plStack_220._4_4_,0x3f800000);
  FUN_10a14e0c0(&plStack_b0,(lStack_90 - lStack_98 >> 4) * -0x5555555555555555,&plStack_220);
  iVar14 = *(int *)(param_3 + 6);
  lVar11 = *(long *)(param_2 + 8);
  if (iVar14 == 0) {
    piVar2 = (int *)(lVar11 + 0x1d0);
    if (*(char *)(lVar11 + 0x1d4) == '\0') {
      piVar2 = (int *)&UNK_10e4d0890;
    }
    iVar14 = *piVar2;
  }
  puVar3 = param_3;
  if (*(char *)((long)param_3 + 4) == '\0') {
    puVar3 = (undefined8 *)(lVar11 + 0x48);
  }
  uVar12 = *puVar3;
  puVar3 = param_3 + 1;
  if (*(char *)((long)param_3 + 9) == '\0') {
    puVar3 = (undefined8 *)(lVar11 + 0x50);
  }
  uVar6 = *(undefined2 *)puVar3;
  puVar3 = param_3 + 2;
  if (*(char *)(param_3 + 5) == '\0') {
    puVar3 = (undefined8 *)(lVar11 + 0x58);
  }
  if (*(char *)((long)puVar3 + 0x17) < '\0') {
    func_0x000107c3192c(&ppuStack_d0,*puVar3,puVar3[1]);
  }
  else {
    uStack_c8 = puVar3[1];
    ppuStack_d0 = (undefined8 **)*puVar3;
    uStack_c0 = puVar3[2];
  }
  plVar13 = param_3 + 7;
  if (*plVar13 == 0) {
LAB_10a678c14:
    pppuVar5 = (undefined8 ***)ppuStack_d0;
    if (-1 < (long)uStack_c0) {
      pppuVar5 = &ppuStack_d0;
    }
    uVar4 = uStack_c8;
    if (-1 < (long)uStack_c0) {
      uVar4 = uStack_c0 >> 0x38;
    }
    FUN_10a9e5bac(&plStack_220,*(undefined8 *)(**(long **)(param_2 + 0x10) + 0x18),&lStack_98,
                  &plStack_b0,&lStack_80,uVar12,uVar6,pppuVar5,uVar4,iVar14,1,
                  *(undefined8 *)(param_2 + 0x18),**(undefined1 **)(param_2 + 0x20));
    if (plStack_b0 != (long *)0x0) {
      puStack_a8 = plStack_b0;
      __ZdlPv();
    }
    plStack_b0 = &lStack_98;
    FUN_10a1cd268(&plStack_b0);
    func_0x00010a20b480(param_1,&plStack_220);
    if (plStack_d8 != (long *)0x0) {
      plVar13 = plStack_d8 + 1;
      do {
        lVar11 = *plVar13;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar8) {
          *plVar13 = lVar11 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d8);
      }
    }
    if (plStack_e8 != (long *)0x0) {
      plVar13 = plStack_e8 + 1;
      do {
        lVar11 = *plVar13;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar8) {
          *plVar13 = lVar11 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e8);
      }
    }
    FUN_10a1f4af8(&plStack_220);
    return;
  }
  plVar10 = (long *)0x40;
  __Znwm();
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&PTR_FUN_110bad840;
  plVar10[6] = 0;
  plVar10[5] = 0;
  plStack_220 = plVar10 + 3;
  plVar10[4] = 0;
  *plStack_220 = 0;
  *(undefined4 *)(plVar10 + 7) = 0x3f800000;
  plStack_218 = plVar10;
  if (lStack_90 != lStack_98) {
    func_0x00010a208730(lStack_98 + 0x20,&plStack_220);
    plVar10 = plStack_218;
    if (plStack_218 != (long *)0x0) {
      plVar1 = plStack_218 + 1;
      do {
        lVar11 = *plVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar11 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_218 + 0x10))(plStack_218);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    if (lStack_90 != lStack_98) {
      lVar11 = *(long *)(lStack_98 + 0x20);
      plStack_220 = (long *)(*plVar13 + 8);
      FUN_10a1d3b48(lVar11,plStack_220,&UNK_10dd5b8f9,&plStack_220,&uStack_61);
      FUN_10a1c2cac(lVar11 + 0x18,plVar13);
      if (lStack_90 != lStack_98) {
        uVar4 = uStack_c8;
        pppuVar5 = (undefined8 ***)ppuStack_d0;
        if (-1 < (long)uStack_c0) {
          uVar4 = uStack_c0 >> 0x38;
          pppuVar5 = &ppuStack_d0;
        }
        FUN_10a9e8848(&plStack_220,lStack_98,*(long *)(param_2 + 8) + 0x20,uVar12,uVar6,pppuVar5,
                      uVar4);
        if (plStack_220 == plStack_218) {
          if (plStack_220 == (long *)0x0) goto LAB_10a678c14;
        }
        else {
          lStack_80 = *plStack_220;
          uStack_78 = uStack_78 & 0xffffffff00000000;
          uStack_70 = 0;
        }
        plStack_218 = plStack_220;
        __ZdlPv();
        goto LAB_10a678c14;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10a678d54);
  (*pcVar9)();
}



/* Entry: 10a678da8; end: 10a678de3;  */

long FUN_10a678da8(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c07478);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a678de4; end: 10a678def;  */

undefined ** FUN_10a678de4(void)

{
  return &PTR_DAT_110c07478;
}



/* Entry: 10a678df0; end: 10a67904f;  */

void FUN_10a678df0(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ushort uVar4;
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
  
  uVar3 = 0;
  lVar1 = -0x430;
  if (cRam00000001137eb716 == '\0') {
    lVar1 = -0xffff;
  }
  lVar1 = param_1 + lVar1;
  if ((*(ushort *)(lVar1 + 0xe9) >> 8 & 1) == 0) {
    if ((((*(long *)(lVar1 + 0xc0) != 0) || ((*(ushort *)(lVar1 + 0xe9) >> 9 & 1) != 0)) ||
        (*(long *)(lVar1 + 0xe0) != 0)) || ((*(ushort *)(lVar1 + 0x30) >> 8 & 1) == 0)) {
LAB_10a678e64:
      func_0x00010a1bd170();
      if ((uVar3 & 1) != 0) {
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
      ppuStack_48 = &PTR_DAT_110c06b88;
      FUN_10a0dad0c((ulong)&uStack_a0 | 8,&ppuStack_48);
      lVar1 = -0x430;
      if (cRam00000001137eb716 == '\0') {
        lVar1 = -0xffff;
      }
      iVar2 = (int)param_1 + (int)lVar1;
      (**(code **)(*(long *)(param_1 + lVar1) + 0x18))();
      lVar1 = -0x430;
      if (cRam00000001137eb716 == '\0') {
        lVar1 = -0xffff;
      }
      uVar3 = param_1 + lVar1;
      uVar4 = *(ushort *)(uVar3 + 0x30);
      if (iVar2 == 0) {
        if ((uVar4 >> 8 & 1) == 0) {
          FUN_10a1bfe94(uVar3,&uStack_a0);
          if ((uVar3 & 1) == 0) {
            lVar1 = -0x430;
            if (cRam00000001137eb716 == '\0') {
              lVar1 = -0xffff;
            }
            uVar3 = param_1 + lVar1;
            (**(code **)(*(long *)(param_1 + lVar1) + 0x10))(uVar3,&uStack_a0);
          }
        }
        else {
          FUN_10a1bd5e0();
          if (uVar3 != 0) {
            FUN_10a1bd7d8();
          }
        }
      }
      else {
        if ((uVar4 >> 7 & 1) == 0) {
          *(undefined8 *)(uVar3 + 0x40) = uStack_a0;
          *(ushort *)(uVar3 + 0x30) = uVar4 | 0x80;
        }
        uVar3 = uVar3 + 0x40;
        FUN_10a1bd398(uVar3,&uStack_a0);
      }
      uVar4 = 0x430;
      if (cRam00000001137eb716 == '\0') {
        uVar4 = 0xffff;
      }
      lVar1 = 0x430;
      if (cRam00000001137eb716 == '\0') {
        lVar1 = 0xffff;
      }
      if ((*(ushort *)((param_1 - lVar1) + 0xe9) >> 8 & 1) != 0) {
        FUN_10a1bd5e0();
        uVar4 = 0x430;
        if (cRam00000001137eb716 == '\0') {
          uVar4 = 0xffff;
        }
        if (uVar3 != 0) {
          FUN_10a1bd648();
          uVar4 = 0x430;
          if (cRam00000001137eb716 == '\0') {
            uVar4 = 0xffff;
          }
        }
      }
      FUN_10a1c054c((param_1 - (ulong)uVar4) + 0x90,&uStack_a0);
      return;
    }
    *(long *)(lVar1 + 0xa0) = *(long *)(lVar1 + 0xa0) + 1;
  }
  else if ((*(ushort *)(lVar1 + 0x30) >> 8 & 1) == 0) goto LAB_10a678e64;
  ppuVar6 = *(undefined ***)(lVar1 + 0xf0);
  ppuVar5 = *(undefined ***)(lVar1 + 0x38);
  if ((ppuVar6 != &PTR_DAT_110c06b88 || ppuVar5 != &PTR_DAT_110c06b88) &&
     (FUN_10a1bd5e0(), param_1 != 0)) {
    if (ppuVar6 != &PTR_DAT_110c06b88) {
      FUN_10a1bd648(param_1,lVar1 + 0x90,&PTR_DAT_110c06b88);
      *(undefined ***)(lVar1 + 0xf0) = &PTR_DAT_110c06b88;
    }
    if (ppuVar5 != &PTR_DAT_110c06b88) {
      FUN_10a1bd7d8(param_1,lVar1,&PTR_DAT_110c06b88);
      *(undefined ***)(lVar1 + 0x38) = &PTR_DAT_110c06b88;
    }
  }
  return;
}



/* Entry: 10a679050; end: 10a6791a3;  */

void FUN_10a679050(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  
  lVar8 = *param_1;
  if ((undefined8 *)(param_1[2] - lVar8 >> 4) < param_2) {
    if ((ulong)param_2 >> 0x3c != 0) {
      FUN_10a66d9b4();
      puVar6 = (undefined8 *)param_1[1];
      if (puVar6 < (undefined8 *)param_1[2]) {
        uVar14 = *param_2;
        puVar6[1] = param_2[1];
        *puVar6 = uVar14;
        puVar6 = puVar6 + 2;
      }
      else {
        lVar8 = (long)puVar6 - *param_1;
        uVar1 = (lVar8 >> 4) + 1;
        if (uVar1 >> 0x3c != 0) {
          FUN_10a66d9b4();
          plVar12 = (long *)param_1[1];
          *param_1 = 0;
          param_1[1] = 0;
          if (plVar12 != (long *)0x0) {
            plVar2 = plVar12 + 1;
            do {
              lVar8 = *plVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *plVar2 = lVar8 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar8 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar12);
              return;
            }
          }
          return;
        }
        uVar9 = param_1[2] - *param_1;
        uVar11 = (long)uVar9 >> 3;
        if (uVar11 <= uVar1) {
          uVar11 = uVar1;
        }
        if (0x7fffffffffffffef < uVar9) {
          uVar11 = 0xfffffffffffffff;
        }
        puVar7 = param_2;
        FUN_10a66d9c8();
        puVar3 = (undefined8 *)(uVar11 + lVar8);
        uVar14 = *param_2;
        puVar3[1] = param_2[1];
        *puVar3 = uVar14;
        puVar6 = puVar3 + 2;
        lVar10 = (long)puVar3 - (param_1[1] - *param_1);
        _memcpy(lVar10);
        lVar8 = *param_1;
        *param_1 = lVar10;
        param_1[1] = (long)puVar6;
        param_1[2] = uVar11 + (long)puVar7 * 0x10;
        if (lVar8 != 0) {
          __ZdlPv();
        }
      }
      param_1[1] = (long)puVar6;
      return;
    }
    lVar10 = param_1[1];
    puVar6 = param_2;
    FUN_10a66d9c8();
    lVar8 = (long)param_2 + (lVar10 - lVar8);
    lVar13 = lVar8 - (param_1[1] - *param_1);
    _memcpy(lVar13);
    lVar10 = *param_1;
    *param_1 = lVar13;
    param_1[1] = lVar8;
    param_1[2] = (long)(param_2 + (long)puVar6 * 2);
    if (lVar10 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 10a6791a4; end: 10a6791ff;  */

void FUN_10a6791a4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
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



/* Entry: 10a679200; end: 10a679237;  */

void FUN_10a679200(long param_1)

{
  ushort uVar1;
  long lVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    uVar1 = *(ushort *)(lVar2 + 0x209);
    if ((uVar1 & 0x7f) != 0) {
      *(ushort *)(lVar2 + 0x209) = uVar1 & 0xff00 | uVar1 - 1 & 0x7f;
      uStack_28 = 0;
      uStack_30 = 0;
      uStack_18 = 0;
      uStack_20 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      *(undefined8 *)(lVar2 + 0x218) = 0;
      FUN_10a1cc408(lVar2 + 0x220,(ulong)&uStack_60 | 8);
    }
    return;
  }
  return;
}



/* Entry: 10a679238; end: 10a6794ef;  */

long * FUN_10a679238(long *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ushort uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
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
    lVar5 = -0x630;
    if (cRam00000001137eb722 == '\0') {
      lVar5 = -0xffff;
    }
    lVar5 = *param_1 + lVar5;
    if ((((*(ushort *)(lVar5 + 0xe9) >> 8 & 1) == 0) &&
        (((*(long *)(lVar5 + 0xc0) != 0 || ((*(ushort *)(lVar5 + 0xe9) >> 9 & 1) != 0)) ||
         (*(long *)(lVar5 + 0xe0) != 0)))) || ((*(ushort *)(lVar5 + 0x30) >> 8 & 1) == 0)) {
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
        ppuStack_48 = &PTR_DAT_110c03528;
        FUN_10a0dad0c((ulong)&uStack_a0 | 8,&ppuStack_48);
        lVar5 = -0x630;
        if (cRam00000001137eb722 == '\0') {
          lVar5 = -0xffff;
        }
        iVar2 = (int)*param_1 + (int)lVar5;
        (**(code **)(*(long *)(*param_1 + lVar5) + 0x18))();
        lVar5 = -0x630;
        if (cRam00000001137eb722 == '\0') {
          lVar5 = -0xffff;
        }
        uVar3 = *param_1 + lVar5;
        uVar6 = *(ushort *)(uVar3 + 0x30);
        if (iVar2 == 0) {
          if ((uVar6 >> 8 & 1) == 0) {
            FUN_10a1bfe94(uVar3,&uStack_a0);
            if ((uVar3 & 1) == 0) {
              lVar5 = -0x630;
              if (cRam00000001137eb722 == '\0') {
                lVar5 = -0xffff;
              }
              uVar3 = *param_1 + lVar5;
              (**(code **)(*(long *)(*param_1 + lVar5) + 0x10))(uVar3,&uStack_a0);
            }
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
            *(undefined8 *)(uVar3 + 0x40) = uStack_a0;
            *(ushort *)(uVar3 + 0x30) = uVar6 | 0x80;
          }
          uVar3 = uVar3 + 0x40;
          FUN_10a1bd398(uVar3,&uStack_a0);
        }
        lVar5 = *param_1;
        uVar6 = 0x630;
        if (cRam00000001137eb722 == '\0') {
          uVar6 = 0xffff;
        }
        lVar1 = 0x630;
        if (cRam00000001137eb722 == '\0') {
          lVar1 = 0xffff;
        }
        if ((*(ushort *)((lVar5 - lVar1) + 0xe9) >> 8 & 1) != 0) {
          FUN_10a1bd5e0();
          lVar5 = *param_1;
          uVar6 = 0x630;
          if (cRam00000001137eb722 == '\0') {
            uVar6 = 0xffff;
          }
          if (uVar3 != 0) {
            FUN_10a1bd648();
            lVar5 = *param_1;
            uVar6 = 0x630;
            if (cRam00000001137eb722 == '\0') {
              uVar6 = 0xffff;
            }
          }
        }
        FUN_10a1c054c((lVar5 - (ulong)uVar6) + 0x90,&uStack_a0);
      }
    }
    else {
      *(undefined1 *)(param_1 + 1) = 1;
      if ((*(ushort *)(lVar5 + 0xe9) >> 8 & 1) == 0) {
        *(long *)(lVar5 + 0xa0) = *(long *)(lVar5 + 0xa0) + 1;
      }
      ppuVar7 = *(undefined ***)(lVar5 + 0xf0);
      ppuVar8 = *(undefined ***)(lVar5 + 0x38);
      if ((ppuVar7 != &PTR_DAT_110c03528 || ppuVar8 != &PTR_DAT_110c03528) &&
         (plVar4 = param_1, FUN_10a1bd5e0(), plVar4 != (long *)0x0)) {
        if (ppuVar7 != &PTR_DAT_110c03528) {
          FUN_10a1bd648(plVar4,lVar5 + 0x90,&PTR_DAT_110c03528);
          *(undefined ***)(lVar5 + 0xf0) = &PTR_DAT_110c03528;
        }
        if (ppuVar8 != &PTR_DAT_110c03528) {
          FUN_10a1bd7d8(plVar4,lVar5,&PTR_DAT_110c03528);
          *(undefined ***)(lVar5 + 0x38) = &PTR_DAT_110c03528;
        }
      }
    }
  }
  return param_1;
}



/* Entry: 10a6794f0; end: 10a67957f;  */

long * FUN_10a6794f0(long *param_1)

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



/* Entry: 10a679580; end: 10a6796d3;  */

long * FUN_10a679580(long *param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  
  lVar6 = *param_1;
  if ((undefined8 *)(param_1[2] - lVar6 >> 4) < param_2) {
    if ((ulong)param_2 >> 0x3c != 0) {
      FUN_10a191ca4();
      puVar12 = (undefined8 *)param_1[1];
      if (puVar12 < (undefined8 *)param_1[2]) {
        uVar13 = *param_2;
        puVar12[1] = param_2[1];
        *puVar12 = uVar13;
        puVar12 = puVar12 + 2;
        plVar4 = param_1;
      }
      else {
        lVar6 = (long)puVar12 - *param_1;
        uVar11 = (lVar6 >> 4) + 1;
        if (uVar11 >> 0x3c != 0) {
          FUN_10a191ca4();
          param_1 = param_1 + 1;
          plVar9 = (long *)*param_1;
          plVar5 = param_1;
          plVar4 = param_1;
          if (plVar9 != (long *)0x0) {
            do {
              uVar11 = 0xff;
              if (param_2 <= (undefined8 *)plVar9[4]) {
                uVar11 = 0;
              }
              if ((undefined8 *)plVar9[4] == param_2) {
                uVar10 = 0xff;
                if (param_3 <= (ulong)plVar9[5]) {
                  uVar10 = 0;
                }
                uVar11 = 0;
                if (plVar9[5] != param_3) {
                  uVar11 = uVar10;
                }
              }
              plVar2 = plVar9;
              if ((uVar11 & 0x80) != 0) {
                plVar2 = plVar4;
              }
              plVar9 = *(long **)((long)plVar9 + ((uVar11 & 0x80) >> 4));
              plVar4 = plVar2;
            } while (plVar9 != (long *)0x0);
            if (param_1 != plVar2) {
              bVar3 = param_2 < (undefined8 *)plVar2[4];
              if (param_2 == (undefined8 *)plVar2[4]) {
                bVar3 = param_3 != plVar2[5] && param_3 < (ulong)plVar2[5];
              }
              plVar5 = plVar2;
              if (bVar3) {
                plVar5 = param_1;
              }
            }
          }
          return plVar5;
        }
        uVar7 = param_1[2] - *param_1;
        uVar10 = (long)uVar7 >> 3;
        if (uVar10 <= uVar11) {
          uVar10 = uVar11;
        }
        if (0x7fffffffffffffef < uVar7) {
          uVar10 = 0xfffffffffffffff;
        }
        plVar5 = param_1;
        FUN_10a191cb8();
        puVar1 = (undefined8 *)((long)plVar5 + lVar6);
        uVar13 = *param_2;
        puVar1[1] = param_2[1];
        *puVar1 = uVar13;
        puVar12 = puVar1 + 2;
        lVar6 = (long)puVar1 - (param_1[1] - *param_1);
        _memcpy(lVar6);
        plVar4 = (long *)*param_1;
        *param_1 = lVar6;
        param_1[1] = (long)puVar12;
        param_1[2] = (long)(plVar5 + uVar10 * 2);
        if (plVar4 != (long *)0x0) {
          __ZdlPv();
        }
      }
      param_1[1] = (long)puVar12;
      return plVar4;
    }
    lVar8 = param_1[1];
    plVar5 = param_1;
    FUN_10a191cb8();
    lVar6 = (long)plVar5 + (lVar8 - lVar6);
    lVar8 = lVar6 - (param_1[1] - *param_1);
    _memcpy(lVar8);
    plVar4 = (long *)*param_1;
    *param_1 = lVar8;
    param_1[1] = lVar6;
    param_1[2] = (long)(plVar5 + (long)param_2 * 2);
    param_1 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return plVar4;
    }
  }
  return param_1;
}



/* Entry: 10a6796d4; end: 10a679753;  */

long * FUN_10a6796d4(long param_1,ulong param_2,ulong param_3)

{
  long *plVar1;
  ulong uVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  
  plVar4 = (long *)(param_1 + 8);
  plVar7 = (long *)*plVar4;
  plVar5 = plVar4;
  plVar6 = plVar4;
  if (plVar7 != (long *)0x0) {
    do {
      uVar8 = 0xff;
      if (param_2 <= (ulong)plVar7[4]) {
        uVar8 = 0;
      }
      if (plVar7[4] == param_2) {
        uVar2 = 0xff;
        if (param_3 <= (ulong)plVar7[5]) {
          uVar2 = 0;
        }
        uVar8 = 0;
        if (plVar7[5] != param_3) {
          uVar8 = uVar2;
        }
      }
      plVar1 = plVar7;
      if ((uVar8 & 0x80) != 0) {
        plVar1 = plVar6;
      }
      plVar7 = *(long **)((long)plVar7 + ((uVar8 & 0x80) >> 4));
      plVar6 = plVar1;
    } while (plVar7 != (long *)0x0);
    if (plVar4 != plVar1) {
      bVar3 = param_2 < (ulong)plVar1[4];
      if (param_2 == plVar1[4]) {
        bVar3 = param_3 != plVar1[5] && param_3 < (ulong)plVar1[5];
      }
      plVar5 = plVar1;
      if (bVar3) {
        plVar5 = plVar4;
      }
    }
  }
  return plVar5;
}



/* Entry: 10a679754; end: 10a67984f;  */

long * FUN_10a679754(long *param_1,ulong param_2,ulong param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  plVar1 = param_1 + 1;
  plVar2 = (long *)*plVar1;
joined_r0x00010a679778:
  plVar4 = plVar1;
  if (plVar2 == (long *)0x0) {
LAB_10a6797e4:
    plVar2 = (long *)0x40;
    __Znwm();
    lVar5 = *param_4;
    plVar2[5] = param_4[1];
    plVar2[4] = lVar5;
    plVar2[6] = 0;
    plVar2[7] = 0;
    *plVar2 = 0;
    plVar2[1] = 0;
    plVar2[2] = (long)plVar1;
    *plVar4 = (long)plVar2;
    plVar1 = plVar2;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      plVar1 = (long *)*plVar4;
    }
    func_0x000107c2b058(param_1[1],plVar1);
    param_1[2] = param_1[2] + 1;
    return plVar2;
  }
  do {
    plVar1 = plVar2;
    uVar3 = plVar1[4];
    if (param_2 == uVar3) {
      uVar3 = plVar1[5];
      if (param_3 < uVar3) break;
      if (uVar3 == param_3 || param_3 <= uVar3) {
        return plVar1;
      }
    }
    else {
      if (param_2 < uVar3) break;
      if (param_2 <= uVar3) {
        return plVar1;
      }
    }
    plVar2 = (long *)plVar1[1];
    if ((long *)plVar1[1] == (long *)0x0) {
      plVar4 = plVar1 + 1;
      goto LAB_10a6797e4;
    }
  } while( true );
  plVar2 = (long *)*plVar1;
  goto joined_r0x00010a679778;
}



/* Entry: 10a679850; end: 10a679887;  */

void FUN_10a679850(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_10a679850(*param_1);
    FUN_10a679850(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a679888; end: 10a6798b7;  */

undefined1  [16]
FUN_10a679888(undefined8 param_1,long param_2,long param_3,long param_4,uint param_5)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long *aplStack_48 [3];
  
  if (((int)param_1 != 1) && (((int)param_1 != 0 || (param_4 = param_3, (param_5 & 1) != 0)))) {
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = param_1;
    return auVar6;
  }
  plVar3 = (long *)(param_2 + 8);
  plVar4 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar3 = plVar1, (ulong)plVar3[7] <= *(ulong *)(param_4 + 0x18)) {
        if (*(ulong *)(param_4 + 0x18) <= (ulong)plVar3[7]) {
          uVar2 = 0;
          goto LAB_10a047930;
        }
        plVar1 = (long *)plVar3[1];
        if ((long *)plVar3[1] == (long *)0x0) {
          plVar4 = plVar3 + 1;
          goto LAB_10a0478fc;
        }
      }
      plVar1 = (long *)*plVar3;
      plVar4 = plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
LAB_10a0478fc:
  FUN_10a047948(aplStack_48,param_2,param_4);
  FUN_10a0479ec(param_2,plVar3,plVar4,aplStack_48[0]);
  uVar2 = 1;
  plVar3 = aplStack_48[0];
LAB_10a047930:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = plVar3;
  return auVar5;
}



/* Entry: 10a6798b8; end: 10a679973;  */

void FUN_10a6798b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  uint *puVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  undefined4 uStack_3c;
  
  puVar1 = (uint *)&uStack_70;
  if (*(char *)(param_1 + 0x10) == '\x01') {
    uStack_60 = uStack_60 & 0xffffff00;
    uStack_54 = 1;
    uStack_50 = 1;
    uStack_5c = 1;
    uStack_58 = 1;
    uStack_44 = 0;
    uStack_4c = 0;
    uStack_3c = 0x3e80000;
    FUN_10a3368d0(param_2,param_4,param_1 + 0x40,&uStack_60,0xd);
    if ((param_6 & 1) != 0) {
      return;
    }
    uStack_68 = *(undefined8 *)(param_1 + 0x2c);
    uStack_70 = *(undefined8 *)(param_1 + 0x24);
  }
  else {
    if (*(char *)(param_1 + 0x10) != '\0') {
      return;
    }
    if ((param_6 & 1) != 0) {
      return;
    }
    uStack_58 = (undefined4)*(undefined8 *)(param_1 + 0x1c);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x1c) >> 0x20);
    uStack_60 = (uint)*(undefined8 *)(param_1 + 0x14);
    uStack_5c = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x14) >> 0x20);
    puVar1 = &uStack_60;
    param_5 = param_3;
  }
  FUN_10a0d9a1c(param_2,param_5,puVar1);
  return;
}



/* Entry: 10a679974; end: 10a679b1f;  */

long * FUN_10a679974(long *param_1)

{
  long lVar1;
  ushort uVar2;
  ulong uVar3;
  long *plVar4;
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
  undefined **ppuStack_38;
  
  uVar3 = 0;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    lVar1 = -0x688;
    if (cRam00000001137eb712 == '\0') {
      lVar1 = -0xffff;
    }
    lVar1 = *param_1 + lVar1;
    if ((*(ushort *)(lVar1 + 0xe8) >> 8 & 1) == 0) {
      func_0x00010a1bd170();
      if ((uVar3 & 1) == 0) {
        *(undefined1 *)(param_1 + 1) = 1;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_48 = 0;
        uStack_50 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        ppuStack_38 = &PTR_DAT_110c07698;
        uVar3 = (ulong)&uStack_90 | 8;
        FUN_10a0dad0c(uVar3,&ppuStack_38);
        lVar1 = -0x688;
        if (cRam00000001137eb712 == '\0') {
          lVar1 = -0xffff;
        }
        lVar1 = *param_1 + lVar1;
        uVar2 = *(ushort *)(lVar1 + 0xe8);
        if ((uVar2 & 0x7f) == 0) {
          if ((uVar2 >> 8 & 1) == 0) {
            uVar3 = lVar1 + 0xb8;
            FUN_10a1bfe94(uVar3,&uStack_90);
            if ((uVar3 & 1) == 0) {
              lVar1 = -0x688;
              if (cRam00000001137eb712 == '\0') {
                lVar1 = -0xffff;
              }
              FUN_10a650b2c(*param_1 + lVar1,&uStack_90);
            }
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
            *(undefined8 *)(lVar1 + 0xf8) = uStack_90;
            *(ushort *)(lVar1 + 0xe8) = uVar2 | 0x80;
          }
          FUN_10a1bd398(lVar1 + 0xf8,&uStack_90);
        }
      }
    }
    else {
      *(undefined1 *)(param_1 + 1) = 1;
      if ((*(undefined ***)(lVar1 + 0xf0) != &PTR_DAT_110c07698) &&
         (plVar4 = param_1, FUN_10a1bd5e0(), plVar4 != (long *)0x0)) {
        FUN_10a1bd7d8();
        *(undefined ***)(lVar1 + 0xf0) = &PTR_DAT_110c07698;
      }
    }
  }
  return param_1;
}



/* Entry: 10a679b20; end: 10a679c13;  */

void FUN_10a679b20(long *param_1,undefined4 *param_2)

{
  long *plVar1;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x200))(param_1,&PTR_DAT_110c03578);
  if (((int)plVar1 != 0) &&
     (plVar1 = param_1, (**(code **)(*param_1 + 0x200))(param_1,&PTR_DAT_110c03578),
     (int)plVar1 != 0)) {
    *param_2 = 0;
    *(undefined1 *)(param_2 + 1) = 1;
    (**(code **)(*param_1 + 0x30))(param_1,&PTR_DAT_110c03578);
    *param_2 = (int)param_1;
  }
  return;
}



/* Entry: 10a679c14; end: 10a679d03;  */

void FUN_10a679c14(undefined8 *param_1,long param_2)

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
  FUN_10a679d90(auStack_30,&uStack_40,lVar5,lVar6);
  FUN_10a679d04(lVar7,auStack_30);
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



/* Entry: 10a679d04; end: 10a679d8f;  */

void FUN_10a679d04(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a679d90; end: 10a679e67;  */

void FUN_10a679d90(long *param_1,long *param_2,undefined *param_3,long param_4)

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
    ___dynamic_cast(lVar5,&PTR_DAT_110bf32c0,&PTR_DAT_110c02120,0);
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
    FUN_10a2ef2d4(param_1);
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      puVar2 = &UNK_10f66a659;
      if (param_4 != 0) {
        puVar2 = param_3;
      }
      func_0x00010ae06f08(1,2,&UNK_10f634897,&UNK_10f66b805,0x34,&UNK_10f63498b,in_x6,in_x7,param_4,
                          puVar2);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a679e68; end: 10a679eb7;  */

void FUN_10a679e68(long param_1)

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



/* Entry: 10a679eb8; end: 10a679ecf;  */

void FUN_10a679eb8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a679ed0; end: 10a679f53;  */

void FUN_10a679ed0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_30;
  long lStack_28;
  
  lVar4 = *(long *)(param_2 + 0x10);
  lStack_28 = param_1[1];
  uStack_30 = *param_1;
  if (param_1[1] != 0) {
    plVar1 = (long *)(param_1[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a9dc454(lVar4 + 0x4f0,&uStack_30);
  if (lStack_28 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a679f54; end: 10a679f6f;  */

void FUN_10a679f54(void)

{
  return;
}



/* Entry: 10a679f70; end: 10a67a08f;  */

void FUN_10a679f70(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lStack_30;
  long *plStack_28;
  
  lVar5 = *param_1;
  plVar7 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  if ((lVar5 == 0) || (___dynamic_cast(lVar5,&PTR_DAT_110bf32c0,&PTR_DAT_110c4dad8,0), lVar5 == 0))
  {
    lStack_30 = 0;
    plStack_28 = (long *)0x0;
  }
  else {
    lStack_30 = lVar5;
    plStack_28 = plVar7;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
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
  FUN_10a65d4f0(uVar6,&lStack_30);
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
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar7);
      return;
    }
  }
  return;
}



/* Entry: 10a67a090; end: 10a67a0af;  */

void FUN_10a67a090(void)

{
  return;
}



/* Entry: 10a67a0b0; end: 10a67a0c3;  */

void FUN_10a67a0b0(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a67a0c4; end: 10a67a0df;  */

void FUN_10a67a0c4(long param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10a67a0e0; end: 10a67a11b;  */

long FUN_10a67a0e0(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba2110);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a67a11c; end: 10a67a11f;  */

void FUN_10a67a11c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a67a120; end: 10a67a177;  */

long FUN_10a67a120(long param_1)

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



/* Entry: 10a67a178; end: 10a67a1c3;  */

void FUN_10a67a178(long param_1)

{
  long lVar1;
  ushort uVar2;
  undefined1 **ppuVar3;
  ulong uVar4;
  undefined1 **ppuVar5;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_88;
  long lStack_50;
  undefined1 *puStack_48;
  long lStack_20;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)&lStack_20;
  lStack_20 = param_1;
  if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
    (*(code *)(&PTR_DAT_110c07750)[*(uint *)(param_1 + 0x10)])(&puStack_18,param_1);
    return;
  }
  FUN_10a0d459c();
  ppuVar3 = &puStack_48;
  func_0x00010a1bd170();
  if (((ulong)ppuVar3 & 1) == 0) {
    lStack_50 = param_1;
    if (*(uint *)(param_1 + 0x10) == 0xffffffff) {
      FUN_10a0d459c();
      uVar4 = 0;
      lVar1 = -0x688;
      if (cRam00000001137eb712 == '\0') {
        lVar1 = -0xffff;
      }
      if ((*(ushort *)((long)ppuVar3 + lVar1 + 0xe8) >> 8 & 1) == 0) {
        func_0x00010a1bd170();
        if ((uVar4 & 1) == 0) {
          uStack_a8 = 0;
          uStack_b0 = 0;
          uStack_98 = 0;
          uStack_a0 = 0;
          uStack_c8 = 0;
          uStack_d0 = 0;
          uStack_b8 = 0;
          uStack_c0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          ppuStack_88 = &PTR_DAT_110c07698;
          uVar4 = (ulong)&uStack_e0 | 8;
          FUN_10a0dad0c(uVar4,&ppuStack_88);
          lVar1 = -0x688;
          if (cRam00000001137eb712 == '\0') {
            lVar1 = -0xffff;
          }
          uVar2 = *(ushort *)((long)ppuVar3 + lVar1 + 0xe8);
          if ((uVar2 & 0x7f) == 0) {
            if ((uVar2 >> 8 & 1) == 0) {
              uVar4 = (long)ppuVar3 + lVar1 + 0xb8;
              FUN_10a1bfe94(uVar4,&uStack_e0);
              if ((uVar4 & 1) == 0) {
                lVar1 = -0x688;
                if (cRam00000001137eb712 == '\0') {
                  lVar1 = -0xffff;
                }
                FUN_10a650b2c((long)ppuVar3 + lVar1,&uStack_e0);
              }
            }
            else {
              FUN_10a1bd5e0();
              if (uVar4 != 0) {
                FUN_10a1bd7d8();
              }
            }
          }
          else {
            if ((uVar2 >> 7 & 1) == 0) {
              *(undefined8 *)((long)ppuVar3 + lVar1 + 0xf8) = uStack_e0;
              *(ushort *)((long)ppuVar3 + lVar1 + 0xe8) = uVar2 | 0x80;
            }
            FUN_10a1bd398((long)ppuVar3 + lVar1 + 0xf8,&uStack_e0);
          }
        }
      }
      else if ((*(undefined ***)((long)ppuVar3 + lVar1 + 0xf0) != &PTR_DAT_110c07698) &&
              (ppuVar5 = ppuVar3, FUN_10a1bd5e0(), ppuVar5 != (undefined1 **)0x0)) {
        FUN_10a1bd7d8();
        *(undefined ***)((long)ppuVar3 + lVar1 + 0xf0) = &PTR_DAT_110c07698;
      }
      return;
    }
    puStack_48 = (undefined1 *)&lStack_50;
    (*(code *)(&PTR_FUN_110c07790)[*(uint *)(param_1 + 0x10)])(&puStack_48,param_1);
  }
  return;
}



/* Entry: 10a67a1c4; end: 10a67a227;  */

void FUN_10a67a1c4(long param_1)

{
  long lVar1;
  ushort uVar2;
  undefined1 **ppuVar3;
  ulong uVar4;
  undefined1 **ppuVar5;
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
  long lStack_30;
  undefined1 *puStack_28;
  
  ppuVar3 = &puStack_28;
  func_0x00010a1bd170();
  if (((ulong)ppuVar3 & 1) == 0) {
    lStack_30 = param_1;
    if (*(uint *)(param_1 + 0x10) == 0xffffffff) {
      FUN_10a0d459c();
      uVar4 = 0;
      lVar1 = -0x688;
      if (cRam00000001137eb712 == '\0') {
        lVar1 = -0xffff;
      }
      if ((*(ushort *)((long)ppuVar3 + lVar1 + 0xe8) >> 8 & 1) == 0) {
        func_0x00010a1bd170();
        if ((uVar4 & 1) == 0) {
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
          ppuStack_68 = &PTR_DAT_110c07698;
          uVar4 = (ulong)&uStack_c0 | 8;
          FUN_10a0dad0c(uVar4,&ppuStack_68);
          lVar1 = -0x688;
          if (cRam00000001137eb712 == '\0') {
            lVar1 = -0xffff;
          }
          uVar2 = *(ushort *)((long)ppuVar3 + lVar1 + 0xe8);
          if ((uVar2 & 0x7f) == 0) {
            if ((uVar2 >> 8 & 1) == 0) {
              uVar4 = (long)ppuVar3 + lVar1 + 0xb8;
              FUN_10a1bfe94(uVar4,&uStack_c0);
              if ((uVar4 & 1) == 0) {
                lVar1 = -0x688;
                if (cRam00000001137eb712 == '\0') {
                  lVar1 = -0xffff;
                }
                FUN_10a650b2c((long)ppuVar3 + lVar1,&uStack_c0);
              }
            }
            else {
              FUN_10a1bd5e0();
              if (uVar4 != 0) {
                FUN_10a1bd7d8();
              }
            }
          }
          else {
            if ((uVar2 >> 7 & 1) == 0) {
              *(undefined8 *)((long)ppuVar3 + lVar1 + 0xf8) = uStack_c0;
              *(ushort *)((long)ppuVar3 + lVar1 + 0xe8) = uVar2 | 0x80;
            }
            FUN_10a1bd398((long)ppuVar3 + lVar1 + 0xf8,&uStack_c0);
          }
        }
      }
      else if ((*(undefined ***)((long)ppuVar3 + lVar1 + 0xf0) != &PTR_DAT_110c07698) &&
              (ppuVar5 = ppuVar3, FUN_10a1bd5e0(), ppuVar5 != (undefined1 **)0x0)) {
        FUN_10a1bd7d8();
        *(undefined ***)((long)ppuVar3 + lVar1 + 0xf0) = &PTR_DAT_110c07698;
      }
      return;
    }
    puStack_28 = (undefined1 *)&lStack_30;
    (*(code *)(&PTR_FUN_110c07790)[*(uint *)(param_1 + 0x10)])(&puStack_28,param_1);
  }
  return;
}



/* Entry: 10a67a228; end: 10a67a38f;  */

void FUN_10a67a228(long param_1)

{
  long lVar1;
  ushort uVar2;
  ulong uVar3;
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
  undefined **ppuStack_38;
  
  uVar3 = 0;
  lVar1 = -0x688;
  if (cRam00000001137eb712 == '\0') {
    lVar1 = -0xffff;
  }
  lVar1 = param_1 + lVar1;
  if ((*(ushort *)(lVar1 + 0xe8) >> 8 & 1) == 0) {
    func_0x00010a1bd170();
    if ((uVar3 & 1) == 0) {
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      ppuStack_38 = &PTR_DAT_110c07698;
      uVar3 = (ulong)&uStack_90 | 8;
      FUN_10a0dad0c(uVar3,&ppuStack_38);
      lVar1 = -0x688;
      if (cRam00000001137eb712 == '\0') {
        lVar1 = -0xffff;
      }
      lVar1 = param_1 + lVar1;
      uVar2 = *(ushort *)(lVar1 + 0xe8);
      if ((uVar2 & 0x7f) == 0) {
        if ((uVar2 >> 8 & 1) == 0) {
          uVar3 = lVar1 + 0xb8;
          FUN_10a1bfe94(uVar3,&uStack_90);
          if ((uVar3 & 1) == 0) {
            lVar1 = -0x688;
            if (cRam00000001137eb712 == '\0') {
              lVar1 = -0xffff;
            }
            FUN_10a650b2c(param_1 + lVar1,&uStack_90);
          }
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
          *(undefined8 *)(lVar1 + 0xf8) = uStack_90;
          *(ushort *)(lVar1 + 0xe8) = uVar2 | 0x80;
        }
        FUN_10a1bd398(lVar1 + 0xf8,&uStack_90);
      }
    }
  }
  else if ((*(undefined ***)(lVar1 + 0xf0) != &PTR_DAT_110c07698) && (FUN_10a1bd5e0(), param_1 != 0)
          ) {
    FUN_10a1bd7d8();
    *(undefined ***)(lVar1 + 0xf0) = &PTR_DAT_110c07698;
  }
  return;
}



/* Entry: 10a67a390; end: 10a67a463;  */

undefined8 FUN_10a67a390(void)

{
  return 1;
}



/* Entry: 10a67a464; end: 10a67a4bf;  */

void FUN_10a67a464(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_21;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if (*(int *)(param_1 + 0x10) != -1 || uVar1 != 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
        (*(code *)(&PTR_FUN_110bb2070)[*(uint *)(param_1 + 0x10)])(&uStack_21,param_1,param_2);
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      return;
    }
    (*(code *)(&PTR_FUN_110c07770)[uVar1])(&stack0xffffffffffffffe8);
  }
  return;
}



/* Entry: 10a67a4c0; end: 10a67a6eb;  */

void FUN_10a67a4c0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    FUN_10a1f57fc(lVar1);
    *(undefined4 *)(lVar1 + 0x10) = 0;
  }
  return;
}



/* Entry: 10a67a6ec; end: 10a67a76b;  */

void FUN_10a67a6ec(void)

{
  return;
}



/* Entry: 10a67a76c; end: 10a67a91f;  */

void FUN_10a67a76c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined8 in_stack_ffffffffffffffa8;
  undefined8 *in_stack_ffffffffffffffb0;
  
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
  FUN_10a67a920(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a6652cc(&plStack_70,plVar4);
  plVar4 = plStack_68;
  lVar9 = (long)plStack_68 - (long)plStack_70 >> 4;
  (**(code **)(*param_2 + 600))(&stack0xffffffffffffffa8,param_2,lVar9);
  if (plVar4 != plStack_70) {
    lVar11 = 0;
    plVar4 = plStack_70;
    do {
      FUN_10a612468(&stack0xffffffffffffffa8,param_2,plVar4);
      (**(code **)(*param_2 + 0x290))
                (param_2,&stack0xffffffffffffffb8,lVar11,&stack0xffffffffffffffa8);
      if ((3 < (int)in_stack_ffffffffffffffa8) && (in_stack_ffffffffffffffb0 != (undefined8 *)0x0))
      {
        (**(code **)*in_stack_ffffffffffffffb0)();
      }
      lVar11 = lVar11 + 1;
      plVar4 = plVar4 + 2;
    } while (lVar9 != lVar11);
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = in_stack_ffffffffffffffa8;
  FUN_10a66dd30(&plStack_70);
  plVar4 = plVar3 + 0x4b;
  lVar9 = plVar3[0x59];
  uVar5 = lVar9 - 1;
  plVar3[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar4[lVar9 + 2];
    if (plVar3[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar5) {
      return;
    }
  }
  lVar9 = *plVar4;
  lVar11 = plVar3[0x4c];
  lVar7 = lVar11 - lVar9;
  uVar12 = lVar7 >> 4;
  if (uVar12 < uVar5) {
    uVar13 = uVar5 - uVar12;
    plVar10 = (long *)plVar3[0x4d];
    if ((ulong)((long)plVar10 - lVar11 >> 4) < uVar13) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = (long)plVar10 - lVar9 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)((long)plVar10 - lVar9)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar6 >> 0x3c == 0) {
          lVar2 = uVar6 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar7;
          _bzero(lVar11,uVar13 * 0x10);
          lVar8 = lVar11 + uVar12 * -0x10;
          _memcpy(lVar8,lVar9,lVar7);
          *plVar4 = lVar8;
          plVar3[0x4c] = lVar11 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar6 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          plStack_70 = plVar10;
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
    _bzero(lVar11,uVar13 * 0x10);
    plVar3[0x4c] = lVar11 + uVar13 * 0x10;
  }
  else if (uVar5 < uVar12) {
    lVar9 = lVar9 + uVar5 * 0x10;
    while (lVar11 != lVar9) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar3[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar5;
  return;
}



/* Entry: 10a67a920; end: 10a67a987;  */

void FUN_10a67a920(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  long in_stack_ffffffffffffff80;
  long in_stack_ffffffffffffff88;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar3);
    param_2 = ppuVar3;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar4 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = plVar4;
  FUN_10a67a920(plVar4,param_2);
  FUN_10a052e3c(param_4);
  FUN_10a6651c8(&stack0xffffffffffffff80,plVar6);
  func_0x00010989a420(extraout_x8,plVar4,in_stack_ffffffffffffff80,
                      (in_stack_ffffffffffffff88 - in_stack_ffffffffffffff80 >> 3) *
                      -0x5555555555555555);
  FUN_10a0426d8(&stack0xffffffffffffff98);
  plVar4 = plVar5 + 0x4b;
  lVar7 = plVar5[0x59];
  uVar8 = lVar7 - 1;
  plVar5[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar4[lVar7 + 2];
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  lVar7 = *plVar4;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_88 = plVar4;
        if (uVar9 >> 0x3c == 0) {
          lVar2 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar2 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar4 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar2 + uVar9 * 0x10;
          lStack_a8 = lVar7;
          lStack_a0 = lVar7;
          lStack_98 = lVar7;
          lStack_90 = lVar13;
          func_0x00010988c1b8(&lStack_a8);
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
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar8;
  return;
}



/* Entry: 10a67a988; end: 10a67aa8f;  */

void FUN_10a67a988(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  long in_stack_ffffffffffffffa0;
  long in_stack_ffffffffffffffa8;
  
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
  FUN_10a67a920(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a6651c8(&stack0xffffffffffffffa0,plVar4);
  func_0x00010989a420(param_1,param_2,in_stack_ffffffffffffffa0,
                      (in_stack_ffffffffffffffa8 - in_stack_ffffffffffffffa0 >> 3) *
                      -0x5555555555555555);
  FUN_10a0426d8(&stack0xffffffffffffffb8);
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



/* Entry: 10a67aa90; end: 10a67b043;  */

void FUN_10a67aa90(undefined8 param_1,long *param_2,undefined8 param_3,uint *param_4,ulong param_5)

{
  uint *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  code *pcVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong *puVar17;
  long *plVar18;
  float *pfVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long *plVar28;
  long *plVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float unaff_s8;
  float fVar33;
  uint auStack_1c0 [2];
  undefined8 *puStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  undefined1 auStack_1a0 [271];
  undefined1 uStack_91;
  
  plVar13 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar13[0x59] < 8) {
    plVar13[plVar13[0x59] + 0x4e] = plVar13[0x5a];
    plVar13[0x59] = plVar13[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar13 + 0x4b);
  }
  plVar14 = param_2;
  FUN_10a67a920(param_2,param_3);
  FUN_10a671c38(param_5);
  auStack_1c0[0] = 0;
  puVar1 = auStack_1c0;
  if (param_5 != 0) {
    puVar1 = param_4;
  }
  uVar6 = *puVar1;
  if (uVar6 < 2) {
    plVar29 = (long *)0x0;
  }
  else {
    plVar29 = param_2;
    func_0x00010a13627c();
  }
  puVar1 = auStack_1c0;
  if (1 < param_5) {
    puVar1 = param_4 + 4;
  }
  uVar7 = *puVar1;
  if (uVar7 < 2) {
    plVar28 = (long *)0x0;
  }
  else {
    plVar28 = param_2;
    func_0x00010a13627c();
  }
  if ((char)plVar14[0xbf] == '\x01') {
    FUN_10a00946c(&UNK_10f66addd);
    goto LAB_10a67aff0;
  }
  if (*(char *)((long)plVar14 + 0x5b7) < '\0') {
    if (plVar14[0xb5] == 0) goto LAB_10a67ae14;
LAB_10a67ab90:
    FUN_10a665148(plVar14);
    lVar21 = *(long *)(plVar14[199] + 0x388);
    if (lVar21 == 0) {
LAB_10a67ae00:
      plVar14 = (long *)0x50;
      __Znwm();
      goto LAB_10a67ae1c;
    }
    lVar27 = *(long *)(lVar21 + 0x18);
    lVar25 = *(long *)(lVar21 + 0x20);
    if (lVar27 == lVar25) goto LAB_10a67ae00;
    if (uVar6 < 2) {
      plVar29 = (long *)0x0;
    }
    if ((1 < uVar7) && (plVar28 <= plVar29)) {
LAB_10a67afa8:
      FUN_109febc44(&plStack_1b0);
      FUN_10a002568(auStack_1a0,&UNK_10f66ae17,0x1d);
      FUN_10a05168c(&uStack_91,auStack_1a0);
LAB_10a67aff0:
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10a67aff4);
      (*pcVar11)();
    }
    puVar3 = *(ulong **)(lVar21 + 0x58);
    puVar4 = *(ulong **)(lVar21 + 0x60);
    if (puVar3 == puVar4) goto LAB_10a67aff0;
    if ((long *)puVar4[-6] < plVar29) goto LAB_10a67afa8;
    uVar22 = 0;
    bVar10 = false;
    if (uVar7 < 2) {
      plVar28 = (long *)0xffffffffffffffff;
    }
    uVar24 = (long)puVar4 - (long)puVar3 >> 6;
    fVar32 = 0.0;
    uVar23 = 0xffffffffffffffff;
    lVar12 = lVar27;
    do {
      if (*(char *)(lVar12 + 0x38) == '\x01') {
        if (plVar29 <= *(long **)(lVar12 + 0x30) && *(long **)(lVar12 + 0x30) < plVar28) {
          uVar15 = *(ulong *)(lVar12 + 0x40);
          goto LAB_10a67ac24;
        }
      }
      else {
        uVar15 = *(ulong *)(lVar12 + 0x40);
        if (uVar15 < uVar24) {
          iVar8 = *(int *)((long)plVar14 + 0x60c);
          if (iVar8 == 5) {
            plVar18 = (long *)puVar3[uVar15 * 8 + 1];
            if ((plVar18 > plVar29 && plVar18 <= plVar28) &&
                (plVar18 <= plVar29 || plVar28 != plVar18)) {
LAB_10a67ac24:
              fVar30 = *(float *)(lVar12 + 0x10) + *(float *)(lVar12 + 0x20);
              fVar31 = *(float *)(lVar12 + 0x18) - *(float *)(lVar12 + 0x20);
              fVar33 = fVar30;
              if (fVar32 <= fVar30) {
                fVar33 = fVar32;
              }
              fVar32 = fVar31;
              if (fVar31 <= unaff_s8) {
                fVar32 = unaff_s8;
              }
              unaff_s8 = fVar32;
              fVar32 = fVar33;
              if (!bVar10) {
                unaff_s8 = fVar31;
                fVar32 = fVar30;
              }
              if (uVar15 <= uVar23) {
                uVar23 = uVar15;
              }
              if (uVar22 <= uVar15) {
                uVar22 = uVar15;
              }
              bVar10 = true;
            }
          }
          else {
            plVar18 = (long *)(puVar3[uVar15 * 8 + 2] - (long)(int)puVar3[uVar15 * 8 + 7]);
            if (((iVar8 == 4 && plVar18 <= plVar28) && (iVar8 != 4 || plVar28 != plVar18)) &&
                plVar29 < plVar18) goto LAB_10a67ac24;
          }
        }
      }
      lVar12 = lVar12 + 0x70;
    } while (lVar12 != lVar25);
    uVar15 = (lVar25 - lVar27 >> 4) * 0x6db6db6db6db6db7;
    puVar17 = puVar3;
    do {
      while ((puVar16 = puVar17 + 8, *(char *)((long)puVar17 + 0x3d) == '\x01' &&
             ((long *)((long)puVar17[2] - (long)(int)puVar17[7]) < plVar28 &&
              plVar29 < (long *)puVar17[2]))) {
        uVar20 = puVar17[3];
        uVar5 = puVar17[4];
        if (*(char *)((long)puVar17 + 0x3e) == '\x01') {
          fVar33 = *(float *)(lVar21 + 0x38);
          lVar25 = uVar5 - uVar20;
          if (uVar20 <= uVar5 && lVar25 != 0) {
            uVar2 = 0;
            if (uVar20 <= uVar15) {
              uVar2 = uVar15 - uVar20;
            }
            if (uVar2 <= uVar5 + ~uVar20) goto LAB_10a67aff0;
            pfVar19 = (float *)(lVar27 + 0x20 + uVar20 * 0x70);
            fVar30 = fVar33;
            do {
              fVar33 = pfVar19[-4] + *pfVar19;
              if (fVar30 <= pfVar19[-4] + *pfVar19) {
                fVar33 = fVar30;
              }
              lVar25 = lVar25 + -1;
              pfVar19 = pfVar19 + 0x1c;
              fVar30 = fVar33;
            } while (lVar25 != 0);
          }
        }
        else {
          fVar33 = *(float *)(lVar21 + 0x30);
          lVar25 = uVar5 - uVar20;
          if (uVar20 <= uVar5 && lVar25 != 0) {
            uVar2 = 0;
            if (uVar20 <= uVar15) {
              uVar2 = uVar15 - uVar20;
            }
            if (uVar2 <= uVar5 + ~uVar20) goto LAB_10a67aff0;
            pfVar19 = (float *)(lVar27 + 0x20 + uVar20 * 0x70);
            fVar30 = fVar33;
            do {
              fVar33 = pfVar19[-2] - *pfVar19;
              if (pfVar19[-2] - *pfVar19 <= fVar30) {
                fVar33 = fVar30;
              }
              lVar25 = lVar25 + -1;
              pfVar19 = pfVar19 + 0x1c;
              fVar30 = fVar33;
            } while (lVar25 != 0);
          }
        }
        uVar20 = *puVar17;
        fVar30 = fVar33;
        if (fVar32 <= fVar33) {
          fVar30 = fVar32;
        }
        fVar32 = fVar33;
        if (fVar33 <= unaff_s8) {
          fVar32 = unaff_s8;
        }
        unaff_s8 = fVar32;
        fVar32 = fVar30;
        if (!bVar10) {
          unaff_s8 = fVar33;
          fVar32 = fVar33;
        }
        if (uVar20 <= uVar23) {
          uVar23 = uVar20;
        }
        if (uVar22 <= uVar20) {
          uVar22 = uVar20;
        }
        bVar10 = true;
        puVar17 = puVar16;
        if (puVar16 == puVar4) goto LAB_10a67ae5c;
      }
      puVar17 = puVar16;
    } while (puVar16 != puVar4);
    if (bVar10) {
LAB_10a67ae5c:
      if ((uVar24 <= uVar23) || (uVar24 <= uVar22)) goto LAB_10a67aff0;
      fVar30 = *(float *)((long)puVar3 + uVar23 * 0x40 + 0x34);
      fVar33 = *(float *)((long)puVar3 + uVar22 * 0x40 + 0x34) - *(float *)(puVar3 + uVar22 * 8 + 6)
      ;
    }
    else {
      fVar33 = 0.0;
      fVar32 = 0.0;
      unaff_s8 = 0.0;
      fVar30 = 0.0;
      if (uVar23 != 0xffffffffffffffff) {
        plStack_1b0 = (long *)&UNK_10f66ae35;
        plStack_1a8 = (long *)0x41;
        FUN_10a0edfc4(&plStack_1b0);
        goto LAB_10a67aff0;
      }
    }
    fVar31 = *(float *)(plVar14[199] + 0x3c8);
    plVar14 = (long *)0x50;
    __Znwm();
    plVar14[1] = 0;
    plVar14[2] = 0;
    *plVar14 = (long)&PTR_FUN_110bcfba8;
    plStack_1b0 = plVar14 + 3;
    *plStack_1b0 = (long)&PTR_FUN_110c6a8d8;
    plVar14[4] = 0;
    plVar14[5] = 0;
    *(undefined1 *)(plVar14 + 7) = 0;
    plVar14[6] = (long)&PTR_FUN_110c6a940;
    *(float *)((long)plVar14 + 0x3c) = fVar32 / fVar31;
    *(float *)(plVar14 + 8) = fVar33 / fVar31;
    *(float *)((long)plVar14 + 0x44) = unaff_s8 / fVar31;
    *(float *)(plVar14 + 9) = fVar30 / fVar31;
  }
  else {
    if (*(char *)((long)plVar14 + 0x5b7) != '\0') goto LAB_10a67ab90;
LAB_10a67ae14:
    plVar14 = (long *)0x50;
    __Znwm();
LAB_10a67ae1c:
    plVar14[1] = 0;
    plVar14[2] = 0;
    *plVar14 = (long)&PTR_FUN_110bcfba8;
    plStack_1b0 = plVar14 + 3;
    *plStack_1b0 = (long)&PTR_FUN_110c6a8d8;
    plVar14[4] = 0;
    plVar14[5] = 0;
    *(undefined1 *)(plVar14 + 7) = 0;
    plVar14[6] = (long)&PTR_FUN_110c6a940;
    *(undefined8 *)((long)plVar14 + 0x44) = 0;
    *(undefined8 *)((long)plVar14 + 0x3c) = 0;
  }
  plStack_1a8 = plVar14;
  if ((3 < (int)auStack_1c0[0]) && (puStack_1b8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_1b8)();
  }
  func_0x00010a20fa88(param_1,param_2,&plStack_1b0);
  plVar14 = plStack_1a8;
  if (plStack_1a8 != (long *)0x0) {
    plVar29 = plStack_1a8 + 1;
    do {
      lVar21 = *plVar29;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar10) {
        *plVar29 = lVar21 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar21 == 0) {
      (**(code **)(*plStack_1a8 + 0x10))(plStack_1a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
    }
  }
  plVar14 = plVar13 + 0x4b;
  lVar21 = plVar13[0x59];
  uVar22 = lVar21 - 1;
  plVar13[0x59] = uVar22;
  if (uVar22 < 8) {
    uVar22 = plVar14[lVar21 + 2];
    if (plVar13[0x5a] == uVar22) {
      return;
    }
  }
  else {
    uVar22 = *(ulong *)(plVar13[0x57] + -8);
    plVar13[0x57] = plVar13[0x57] + -8;
    if (plVar13[0x5a] == uVar22) {
      return;
    }
  }
  lVar21 = *plVar14;
  lVar27 = plVar13[0x4c];
  lVar25 = lVar27 - lVar21;
  uVar23 = lVar25 >> 4;
  if (uVar23 < uVar22) {
    uVar24 = uVar22 - uVar23;
    if ((ulong)(plVar13[0x4d] - lVar27 >> 4) < uVar24) {
      if (uVar22 >> 0x3c == 0) {
        uVar20 = plVar13[0x4d] - lVar21;
        uVar15 = (long)uVar20 >> 3;
        if (uVar15 <= uVar22) {
          uVar15 = uVar22;
        }
        if (0x7fffffffffffffef < uVar20) {
          uVar15 = 0xfffffffffffffff;
        }
        if (uVar15 >> 0x3c == 0) {
          lVar12 = uVar15 << 4;
          __Znwm();
          lVar27 = lVar12 + lVar25;
          _bzero(lVar27,uVar24 * 0x10);
          lVar26 = lVar27 + uVar23 * -0x10;
          _memcpy(lVar26,lVar21,lVar25);
          *plVar14 = lVar26;
          plVar13[0x4c] = lVar27 + uVar24 * 0x10;
          plVar13[0x4d] = lVar12 + uVar15 * 0x10;
          func_0x00010988c1b8(&stack0xffffffffffffff78);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar11)();
    }
    _bzero(lVar27,uVar24 * 0x10);
    plVar13[0x4c] = lVar27 + uVar24 * 0x10;
  }
  else if (uVar22 < uVar23) {
    lVar21 = lVar21 + uVar22 * 0x10;
    while (lVar27 != lVar21) {
      lVar27 = lVar27 + -0x10;
      func_0x00010988c204(lVar27);
    }
    plVar13[0x4c] = lVar21;
  }
code_r0x00010988c138:
  plVar13[0x5a] = uVar22;
  return;
}



/* Entry: 10a67b044; end: 10a67b87f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a67b044(undefined8 param_1,long *param_2,undefined8 param_3,uint *param_4,ulong param_5)

{
  long ******pppppplVar1;
  undefined8 *puVar2;
  uint *puVar3;
  long *plVar4;
  ulong *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char cVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 *puVar12;
  long *******ppppppplVar13;
  code *pcVar14;
  bool bVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  float *pfVar20;
  long ******pppppplVar21;
  long *******ppppppplVar22;
  long *****ppppplVar23;
  ulong uVar24;
  long *******ppppppplVar25;
  ulong *puVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  long *plVar31;
  undefined8 uVar32;
  long *plVar33;
  ulong uVar34;
  long lVar35;
  ulong uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  long lStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  uint auStack_1f0 [2];
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  long *******ppppppplStack_1c8;
  long ******pppppplStack_1c0;
  undefined8 auStack_1b8 [33];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  plVar17 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar17[0x59] < 8) {
    plVar17[plVar17[0x59] + 0x4e] = plVar17[0x5a];
    plVar17[0x59] = plVar17[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar17 + 0x4b);
  }
  plVar19 = param_2;
  FUN_10a67a920(param_2,param_3);
  FUN_10a671c38(param_5);
  auStack_1f0[0] = 0;
  puVar3 = auStack_1f0;
  if (param_5 != 0) {
    puVar3 = param_4;
  }
  uVar6 = *puVar3;
  if (uVar6 < 2) {
    plVar31 = (long *)0x0;
  }
  else {
    plVar31 = param_2;
    func_0x00010a13627c();
  }
  puVar3 = auStack_1f0;
  if (1 < param_5) {
    puVar3 = param_4 + 4;
  }
  uVar7 = *puVar3;
  if (uVar7 < 2) {
    plVar33 = (long *)0x0;
  }
  else {
    plVar33 = param_2;
    func_0x00010a13627c();
  }
  if ((char)plVar19[0xbf] == '\x01') {
    FUN_10a00946c(&UNK_10f66ae77);
    goto LAB_10a67b7a8;
  }
  if (*(char *)((long)plVar19 + 0x5b7) < '\0') {
    if (plVar19[0xb5] == 0) goto LAB_10a67b6e4;
LAB_10a67b144:
    FUN_10a665148(plVar19);
    lVar35 = *(long *)(plVar19[199] + 0x388);
    if (lVar35 != 0) {
      puVar5 = *(ulong **)(lVar35 + 0x58);
      puVar26 = *(ulong **)(lVar35 + 0x60);
      if (puVar5 != puVar26) {
        if (uVar6 < 2) {
          plVar31 = (long *)0x0;
        }
        plVar4 = plVar31;
        if (plVar33 <= plVar31) {
          plVar4 = plVar33;
        }
        if (uVar7 < 2) {
          plVar4 = plVar31;
        }
        if ((long *)puVar26[-6] < plVar4) {
          FUN_109febc44(&ppppppplStack_1c8);
          FUN_10a002568(auStack_1b8,&UNK_10f66aeb4,0x1a);
          FUN_10a05168c(&puStack_1e0,auStack_1b8);
LAB_10a67b7a8:
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x10a67b7ac);
          (*pcVar14)();
        }
        if (plVar31 <= plVar33) {
          plVar31 = plVar33;
        }
        if (uVar7 < 2) {
          plVar31 = (long *)0xffffffffffffffff;
        }
        iVar8 = *(int *)((long)plVar19 + 0x60c);
        fVar37 = *(float *)(plVar19[199] + 0x3c8);
        cVar9 = *(char *)((long)plVar19 + 0x309);
        pppppplStack_1c0 = (long ******)0x0;
        auStack_1b8[0] = 0;
        lVar30 = *(long *)(lVar35 + 0x18);
        lVar27 = *(long *)(lVar35 + 0x20);
        ppppppplStack_1c8 = &pppppplStack_1c0;
        if (lVar30 != lVar27) {
          do {
            if (*(char *)(lVar30 + 0x38) == '\x01') {
              if (plVar4 <= *(long **)(lVar30 + 0x30) && *(long **)(lVar30 + 0x30) < plVar31) {
                uVar28 = *(ulong *)(lVar30 + 0x40);
LAB_10a67b248:
                fVar43 = *(float *)(lVar30 + 0x14);
                fVar41 = *(float *)(lVar30 + 0x10) - *(float *)(lVar30 + 0x68);
                fVar38 = *(float *)(lVar30 + 0x1c);
                fVar39 = fVar41 + *(float *)(lVar30 + 100);
                uVar32 = *(undefined8 *)(lVar30 + 0x48);
                ppppppplVar22 = (long *******)&ppppppplStack_1c8;
                uStack_b0 = uVar28;
                uStack_a8 = uVar32;
                FUN_10a6796d4(ppppppplVar22,uVar28,uVar32);
                if (&pppppplStack_1c0 == ppppppplVar22) {
                  ppppppplVar22 = (long *******)&ppppppplStack_1c8;
                  FUN_10a679754(ppppppplVar22,uVar28,uVar32,&uStack_b0);
                  *(float *)(ppppppplVar22 + 6) = fVar41;
                  *(float *)((long)ppppppplVar22 + 0x34) = fVar43;
                  *(float *)(ppppppplVar22 + 7) = fVar39;
                  *(float *)((long)ppppppplVar22 + 0x3c) = fVar38;
                }
                else {
                  auVar40 = *(undefined1 (*) [16])(ppppppplVar22 + 6);
                  auVar10._4_4_ = fVar43;
                  auVar10._0_4_ = fVar41;
                  auVar10._8_4_ = fVar39;
                  auVar10._12_4_ = fVar38;
                  auVar11._4_4_ = -(uint)(fVar43 < auVar40._4_4_);
                  auVar11._0_4_ = -(uint)(fVar41 < auVar40._0_4_);
                  auVar11._8_4_ = -(uint)(auVar40._8_4_ < fVar39);
                  auVar11._12_4_ = -(uint)(auVar40._12_4_ < fVar38);
                  auVar40 = auVar40 ^ (auVar40 ^ auVar10) & auVar11;
                  ppppppplVar22[7] = auVar40._8_8_;
                  ppppppplVar22[6] = auVar40._0_8_;
                }
              }
            }
            else {
              uVar28 = *(ulong *)(lVar30 + 0x40);
              if ((uVar28 < (ulong)(*(long *)(lVar35 + 0x60) - *(long *)(lVar35 + 0x58) >> 6)) &&
                 (((lVar16 = *(long *)(lVar35 + 0x58) + uVar28 * 0x40, iVar8 == 5 &&
                   (plVar4 < *(long **)(lVar16 + 8) && *(long **)(lVar16 + 8) < plVar31)) ||
                  ((iVar8 == 4 &&
                   (plVar19 = (long *)(*(long *)(lVar16 + 0x10) - (long)*(int *)(lVar16 + 0x38)),
                   plVar19 < plVar31 && plVar4 < plVar19)))))) goto LAB_10a67b248;
            }
            lVar30 = lVar30 + 0x70;
          } while (lVar30 != lVar27);
          puVar5 = *(ulong **)(lVar35 + 0x58);
          puVar26 = *(ulong **)(lVar35 + 0x60);
        }
        for (; puVar5 != puVar26; puVar5 = puVar5 + 8) {
          if (((*(char *)((long)puVar5 + 0x3d) == '\x01') &&
              (plVar4 < (long *)puVar5[2] &&
               (long *)((long)puVar5[2] - (long)(int)puVar5[7]) < plVar31)) &&
             ((*(byte *)((long)puVar5 + 0x3f) & 1) == 0)) {
            uVar28 = puVar5[3];
            uVar34 = puVar5[4];
            lVar30 = uVar34 - uVar28;
            if (uVar34 < uVar28 || lVar30 == 0) {
              fVar38 = *(float *)(lVar35 + 0x30);
              for (pfVar20 = *(float **)(lVar35 + 0x40); pfVar20 != *(float **)(lVar35 + 0x48);
                  pfVar20 = pfVar20 + 6) {
                if ((*(char *)(pfVar20 + 4) == '\x01') && (*(ulong *)(pfVar20 + 2) == puVar5[1])) {
                  fVar38 = *pfVar20;
                  break;
                }
              }
              fVar41 = *(float *)((long)puVar5 + 0x34);
              fVar44 = fVar41 - *(float *)(puVar5 + 6);
              fVar42 = *(float *)(puVar5 + 6) * 0.25;
              fVar39 = fVar38;
              fVar43 = fVar38 + fVar42;
              if (cVar9 == '\x02') {
                fVar39 = fVar38 - fVar42;
                fVar43 = fVar38;
              }
              fVar45 = fVar38 - fVar42 * 0.5;
              fVar38 = fVar38 + fVar42 * 0.5;
              if (cVar9 != '\x01') {
                fVar45 = fVar39;
                fVar38 = fVar43;
              }
            }
            else {
              lVar27 = *(long *)(lVar35 + 0x18);
              uVar24 = (*(long *)(lVar35 + 0x20) - lVar27 >> 4) * 0x6db6db6db6db6db7;
              uVar36 = 0;
              if (uVar28 <= uVar24) {
                uVar36 = uVar24 - uVar28;
              }
              if (*(char *)((long)puVar5 + 0x3e) == '\x01') {
                if (uVar36 <= uVar34 + ~uVar28) goto LAB_10a67b7a8;
                pfVar20 = (float *)(lVar27 + uVar28 * 0x70 + 0x68);
                fVar38 = *(float *)(lVar35 + 0x38);
                do {
                  fVar39 = pfVar20[-0x16] - *pfVar20;
                  if (fVar38 <= pfVar20[-0x16] - *pfVar20) {
                    fVar39 = fVar38;
                  }
                  lVar30 = lVar30 + -1;
                  pfVar20 = pfVar20 + 0x1c;
                  fVar38 = fVar39;
                } while (lVar30 != 0);
              }
              else {
                if (uVar36 <= uVar34 + ~uVar28) goto LAB_10a67b7a8;
                pfVar20 = (float *)(lVar27 + uVar28 * 0x70 + 0x68);
                fVar38 = *(float *)(lVar35 + 0x30);
                do {
                  fVar39 = (pfVar20[-0x16] - *pfVar20) + pfVar20[-1];
                  if (fVar39 <= fVar38) {
                    fVar39 = fVar38;
                  }
                  pfVar20 = pfVar20 + 0x1c;
                  lVar30 = lVar30 + -1;
                  fVar38 = fVar39;
                } while (lVar30 != 0);
              }
              fVar43 = *(float *)(puVar5 + 6);
              fVar41 = *(float *)((long)puVar5 + 0x34);
              fVar44 = fVar41 - fVar43;
              fVar38 = -(fVar43 * 0.25);
              if (*(char *)((long)puVar5 + 0x3e) == '\0') {
                fVar38 = fVar43 * 0.25;
              }
              fVar38 = fVar39 + fVar38;
              fVar45 = fVar38;
              if (fVar39 <= fVar38) {
                fVar45 = fVar39;
              }
              if (fVar38 <= fVar39) {
                fVar38 = fVar39;
              }
            }
            uVar28 = *puVar5;
            uStack_a8 = 0xffffffffffffffff;
            ppppppplVar22 = (long *******)&ppppppplStack_1c8;
            uStack_b0 = uVar28;
            FUN_10a6796d4(ppppppplVar22,uVar28,0xffffffffffffffff);
            if (&pppppplStack_1c0 == ppppppplVar22) {
              ppppppplVar22 = (long *******)&ppppppplStack_1c8;
              FUN_10a679754(ppppppplVar22,uVar28,0xffffffffffffffff,&uStack_b0);
              *(float *)(ppppppplVar22 + 6) = fVar45;
              *(float *)((long)ppppppplVar22 + 0x34) = fVar44;
              *(float *)(ppppppplVar22 + 7) = fVar38;
              *(float *)((long)ppppppplVar22 + 0x3c) = fVar41;
            }
            else {
              if (*(float *)(ppppppplVar22 + 6) <= fVar45) {
                fVar45 = *(float *)(ppppppplVar22 + 6);
              }
              if (*(float *)((long)ppppppplVar22 + 0x34) <= fVar44) {
                fVar44 = *(float *)((long)ppppppplVar22 + 0x34);
              }
              if (fVar38 <= *(float *)(ppppppplVar22 + 7)) {
                fVar38 = *(float *)(ppppppplVar22 + 7);
              }
              *(float *)(ppppppplVar22 + 6) = fVar45;
              *(float *)((long)ppppppplVar22 + 0x34) = fVar44;
              if (fVar41 <= *(float *)((long)ppppppplVar22 + 0x3c)) {
                fVar41 = *(float *)((long)ppppppplVar22 + 0x3c);
              }
              *(float *)(ppppppplVar22 + 7) = fVar38;
              *(float *)((long)ppppppplVar22 + 0x3c) = fVar41;
            }
          }
        }
        puStack_1e0 = (undefined8 *)0x0;
        puStack_1d8 = (undefined8 *)0x0;
        uStack_1d0 = 0;
        FUN_10a679580(&puStack_1e0,auStack_1b8[0]);
        ppppppplVar22 = ppppppplStack_1c8;
        while (ppppppplVar22 != &pppppplStack_1c0) {
          pppppplVar21 = ppppppplVar22[4];
          if ((long ******)(*(long *)(lVar35 + 0x60) - *(long *)(lVar35 + 0x58) >> 6) <=
              pppppplVar21) goto LAB_10a67b7a8;
          fVar38 = *(float *)(*(long *)(lVar35 + 0x58) + (long)pppppplVar21 * 0x40 + 0x34);
          *(float *)((long)ppppppplVar22 + 0x3c) = fVar38;
          if ((long ******)(*(long *)(lVar35 + 0x60) - *(long *)(lVar35 + 0x58) >> 6) <=
              pppppplVar21) goto LAB_10a67b7a8;
          lVar30 = *(long *)(lVar35 + 0x58) + (long)pppppplVar21 * 0x40;
          fVar39 = *(float *)(lVar30 + 0x34) - *(float *)(lVar30 + 0x30);
          *(float *)((long)ppppppplVar22 + 0x34) = fVar39;
          uStack_a8 = CONCAT44(fVar38 / fVar37,*(float *)(ppppppplVar22 + 7) / fVar37);
          uStack_b0 = CONCAT44(fVar39 / fVar37,*(float *)(ppppppplVar22 + 6) / fVar37);
          func_0x00010a67960c(&puStack_1e0,&uStack_b0);
          ppppppplVar13 = (long *******)ppppppplVar22[1];
          ppppppplVar25 = ppppppplVar22;
          if ((long *******)ppppppplVar22[1] == (long *******)0x0) {
            do {
              ppppppplVar22 = (long *******)ppppppplVar25[2];
              bVar15 = (long *******)*ppppppplVar22 != ppppppplVar25;
              ppppppplVar25 = ppppppplVar22;
            } while (bVar15);
          }
          else {
            do {
              ppppppplVar22 = ppppppplVar13;
              ppppppplVar13 = (long *******)*ppppppplVar22;
            } while ((long *******)*ppppppplVar22 != (long *******)0x0);
          }
        }
        FUN_10a679850(pppppplStack_1c0);
        lStack_200 = 0;
        uStack_1f8 = 0;
        lStack_208 = 0;
        FUN_10a65b090(&lStack_208,(long)puStack_1d8 - (long)puStack_1e0 >> 4);
        puVar12 = puStack_1d8;
        for (puVar2 = puStack_1e0; puVar2 != puVar12; puVar2 = puVar2 + 2) {
          pppppplVar21 = (long ******)0x50;
          __Znwm();
          pppppplVar21[1] = (long *****)0x0;
          pppppplVar21[2] = (long *****)0x0;
          *pppppplVar21 = (long *****)&PTR_FUN_110bcfba8;
          pppppplVar21[4] = (long *****)0x0;
          pppppplVar21[5] = (long *****)0x0;
          *(undefined1 *)(pppppplVar21 + 7) = 0;
          ppppppplStack_1c8 = (long *******)(pppppplVar21 + 3);
          *ppppppplStack_1c8 = (long ******)&PTR_FUN_110c6a8d8;
          pppppplVar21[6] = (long *****)&PTR_FUN_110c6a940;
          *(undefined8 *)((long)pppppplVar21 + 0x3c) = *puVar2;
          *(undefined8 *)((long)pppppplVar21 + 0x44) = puVar2[1];
          pppppplStack_1c0 = pppppplVar21;
          func_0x00010a65b12c(&lStack_208,&ppppppplStack_1c8);
          pppppplVar21 = pppppplStack_1c0;
          if (pppppplStack_1c0 != (long ******)0x0) {
            pppppplVar1 = pppppplStack_1c0 + 1;
            do {
              ppppplVar23 = *pppppplVar1;
              cVar9 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(pppppplVar1,0x10);
              if (bVar15) {
                *pppppplVar1 = (long *****)((long)ppppplVar23 + -1);
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (ppppplVar23 == (long *****)0x0) {
              (*(code *)(*pppppplStack_1c0)[2])(pppppplStack_1c0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar21);
            }
          }
        }
        if (puStack_1e0 != (undefined8 *)0x0) {
          puStack_1d8 = puStack_1e0;
          __ZdlPv(puStack_1e0);
        }
        goto LAB_10a67b6ec;
      }
    }
    lStack_208 = 0;
    lStack_200 = 0;
    uStack_1f8 = 0;
  }
  else {
    if (*(char *)((long)plVar19 + 0x5b7) != '\0') goto LAB_10a67b144;
LAB_10a67b6e4:
    lStack_208 = 0;
    lStack_200 = 0;
    uStack_1f8 = 0;
  }
LAB_10a67b6ec:
  if ((3 < (int)auStack_1f0[0]) && (puStack_1e8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_1e8)();
  }
  FUN_10a67249c(param_1,param_2,lStack_208,lStack_200 - lStack_208 >> 4);
  func_0x00010a66d8c4(&lStack_208);
  plVar19 = plVar17 + 0x4b;
  lVar35 = plVar17[0x59];
  uVar28 = lVar35 - 1;
  plVar17[0x59] = uVar28;
  if (uVar28 < 8) {
    uVar28 = plVar19[lVar35 + 2];
    if (plVar17[0x5a] == uVar28) {
      return;
    }
  }
  else {
    uVar28 = *(ulong *)(plVar17[0x57] + -8);
    plVar17[0x57] = plVar17[0x57] + -8;
    if (plVar17[0x5a] == uVar28) {
      return;
    }
  }
  lVar35 = *plVar19;
  lVar30 = plVar17[0x4c];
  lVar27 = lVar30 - lVar35;
  uVar34 = lVar27 >> 4;
  if (uVar34 < uVar28) {
    uVar36 = uVar28 - uVar34;
    if ((ulong)(plVar17[0x4d] - lVar30 >> 4) < uVar36) {
      if (uVar28 >> 0x3c == 0) {
        uVar18 = plVar17[0x4d] - lVar35;
        uVar24 = (long)uVar18 >> 3;
        if (uVar24 <= uVar28) {
          uVar24 = uVar28;
        }
        if (0x7fffffffffffffef < uVar18) {
          uVar24 = 0xfffffffffffffff;
        }
        if (uVar24 >> 0x3c == 0) {
          lVar16 = uVar24 << 4;
          __Znwm();
          lVar30 = lVar16 + lVar27;
          _bzero(lVar30,uVar36 * 0x10);
          lVar29 = lVar30 + uVar34 * -0x10;
          _memcpy(lVar29,lVar35,lVar27);
          *plVar19 = lVar29;
          plVar17[0x4c] = lVar30 + uVar36 * 0x10;
          plVar17[0x4d] = lVar16 + uVar24 * 0x10;
          func_0x00010988c1b8(&stack0xffffffffffffff78);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar14)();
    }
    _bzero(lVar30,uVar36 * 0x10);
    plVar17[0x4c] = lVar30 + uVar36 * 0x10;
  }
  else if (uVar28 < uVar34) {
    lVar35 = lVar35 + uVar28 * 0x10;
    while (lVar30 != lVar35) {
      lVar30 = lVar30 + -0x10;
      func_0x00010988c204(lVar30);
    }
    plVar17[0x4c] = lVar35;
  }
code_r0x00010988c138:
  plVar17[0x5a] = uVar28;
  return;
}



/* Entry: 10a67b880; end: 10a67b977;  */

void FUN_10a67b880(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  long in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb0;
  
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
  FUN_10a67a920(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a665270(&stack0xffffffffffffffa8,plVar4);
  FUN_10a6726a8(param_1,param_2,in_stack_ffffffffffffffa8,
                in_stack_ffffffffffffffb0 - in_stack_ffffffffffffffa8 >> 4);
  if (in_stack_ffffffffffffffa8 != 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
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



/* Entry: 10a67b978; end: 10a67baa3;  */

void FUN_10a67b978(undefined4 *param_1,float param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_3;
  (**(code **)(*param_3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a67a920(param_3,param_4);
  FUN_10a052e3c(param_6);
  if ((char)param_3[0xbf] == '\x01') {
    FUN_10a00946c(&UNK_10f66af0d);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a67ba90);
    (*pcVar2)();
  }
  lVar6 = (long)*(char *)((long)param_3 + 0x5b7);
  if (lVar6 < 0) {
    lVar6 = param_3[0xb5];
  }
  fVar14 = 1.0;
  if (lVar6 != 0) {
    FUN_10a665148(param_3);
    fVar14 = 1.0;
    if (*(long *)(param_3[199] + 0x388) != 0) {
      fVar14 = *(float *)(*(long *)(param_3[199] + 0x388) + 0x10);
    }
  }
  FUN_10a65f27c(param_3);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(fVar14 * (param_2 / 43.885715) * 1.2);
  plVar1 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar5 = lVar6 - 1;
  plVar4[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar6 + 2];
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar6;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar5) {
    uVar13 = uVar5 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar5 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar6 >> 3;
        if (uVar7 <= uVar5) {
          uVar7 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar6)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar6,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
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
  else if (uVar5 < uVar12) {
    lVar6 = lVar6 + uVar5 * 0x10;
    while (lVar10 != lVar6) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar5;
  return;
}



/* Entry: 10a67baa4; end: 10a67bb53;  */

void FUN_10a67baa4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a67bc0c(param_1,param_2,FUN_10a664f20,0,param_3,param_5);
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



/* Entry: 10a67bb54; end: 10a67bc0b;  */

void FUN_10a67bb54(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a67bd54(param_1,param_2,FUN_10a664f70,0,param_3,param_4,param_5);
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



/* Entry: 10a67bc0c; end: 10a67bceb;  */

void FUN_10a67bc0c(undefined4 *param_1,long *param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined1 **ppuVar1;
  long *plVar2;
  undefined1 *puStack_60;
  ulong uStack_58;
  byte bStack_49;
  undefined8 uStack_48;
  
  plVar2 = param_2;
  FUN_10a67bcec(param_2,param_5);
  FUN_10a052e3c(param_6);
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*(long *)((long)plVar2 + ((long)param_4 >> 1)) +
                        ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(&puStack_60);
  ppuVar1 = (undefined1 **)puStack_60;
  if (-1 < (char)bStack_49) {
    uStack_58 = (ulong)bStack_49;
    ppuVar1 = &puStack_60;
  }
  (**(code **)(*param_2 + 0x128))(&uStack_48,param_2,ppuVar1,uStack_58);
  *param_1 = 6;
  *(undefined8 *)(param_1 + 2) = uStack_48;
  if ((char)bStack_49 < '\0') {
    __ZdlPv(puStack_60);
  }
  return;
}



/* Entry: 10a67bcec; end: 10a67bd53;  */

void FUN_10a67bcec(undefined **param_1,undefined **param_2,undefined **param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  ppuVar2 = param_1;
  func_0x000109898688();
  if (ppuVar2 != (undefined **)0x0) {
    FUN_10a052c2c();
    param_2 = ppuVar2;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110c06258;
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar3 = (undefined4 *)&UNK_10f68f52e;
  func_0x00010988bd28();
  ppuVar2 = param_2;
  FUN_10a67a920(param_2,param_5);
  FUN_10a06cd04(param_7);
  func_0x000109898570(&uStack_a8,param_2,param_6);
  plVar1 = (long *)((long)ppuVar2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(undefined ***)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  uStack_88 = uStack_a0;
  uStack_90 = uStack_a8;
  lStack_80 = lStack_98;
  uStack_a0 = 0;
  lStack_98 = 0;
  uStack_a8 = 0;
  (*(code *)param_3)(plVar1,&uStack_90);
  if (lStack_80 < 0) {
    __ZdlPv(uStack_90);
  }
  if (lStack_98 < 0) {
    __ZdlPv(uStack_a8);
  }
  *puVar3 = 0;
  return;
}



/* Entry: 10a67bd54; end: 10a67be4b;  */

void FUN_10a67bd54(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  lVar2 = param_2;
  FUN_10a67a920(param_2,param_5);
  FUN_10a06cd04(param_7);
  func_0x000109898570(&uStack_88,param_2,param_6);
  plVar1 = (long *)(lVar2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  uStack_68 = uStack_80;
  uStack_70 = uStack_88;
  lStack_60 = lStack_78;
  uStack_80 = 0;
  lStack_78 = 0;
  uStack_88 = 0;
  (*param_3)(plVar1,&uStack_70);
  if (lStack_60 < 0) {
    __ZdlPv(uStack_70);
  }
  if (lStack_78 < 0) {
    __ZdlPv(uStack_88);
  }
  *param_1 = 0;
  return;
}



/* Entry: 10a67be4c; end: 10a67bf2f;  */

void FUN_10a67be4c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a67bcec(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a1f6274(&stack0xffffffffffffffa8,plVar4 + 0xb7);
  FUN_10a210610(param_1,param_2,&stack0xffffffffffffffa8);
  FUN_10a1f57fc(&stack0xffffffffffffffa8);
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



/* Entry: 10a67bf30; end: 10a67c067;  */

void FUN_10a67bf30(undefined4 *param_1,long *param_2,undefined8 param_3,uint *param_4,
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
  ulong uStack_78;
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
  FUN_10a67a920(param_2,param_3);
  FUN_10a210794(param_5);
  if (*param_4 < 2) {
    uStack_78 = uStack_78 & 0xffffffff00000000;
  }
  else {
    FUN_10a2107b8(&lStack_88,param_2,param_4);
  }
  FUN_10a1f5b9c(&lStack_70,&lStack_88);
  FUN_10a1f5b9c(&stack0xffffffffffffffa8,&lStack_70);
  FUN_10a666844(plVar4 + 0xb7,&stack0xffffffffffffffa8);
  FUN_10a1f57fc(&stack0xffffffffffffffa8);
  FUN_10a1f57fc(&lStack_70);
  FUN_10a1f57fc(&lStack_88);
  *param_1 = 0;
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
          uStack_78 = lVar5;
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



/* Entry: 10a67c068; end: 10a67c197;  */

void FUN_10a67c068(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar8 = param_2;
  FUN_10a67bcec(param_2,param_3);
  FUN_10a052e3c(param_5);
  if ((int)plVar8[0xb9] == 1) {
    plVar8 = (long *)plVar8[0xb8];
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
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
  else {
    plVar8 = (long *)0x0;
  }
  FUN_10a204898(param_1,param_2,&stack0xffffffffffffffb0);
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = plVar6 + 0x4b;
  lVar10 = plVar6[0x59];
  uVar7 = lVar10 - 1;
  plVar6[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar8[lVar10 + 2];
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
  lVar10 = *plVar8;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar10;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar7) {
    uVar16 = uVar7 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar7 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar10 >> 3;
        if (uVar9 <= uVar7) {
          uVar9 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar10)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar8;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar8 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar5 + uVar9 * 0x10;
          lStack_88 = lVar10;
          lStack_80 = lVar10;
          lStack_78 = lVar10;
          lStack_70 = lVar14;
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
    _bzero(lVar13,uVar16 * 0x10);
    plVar6[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar7 < uVar15) {
    lVar10 = lVar10 + uVar7 * 0x10;
    while (lVar13 != lVar10) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar7;
  return;
}



/* Entry: 10a67c198; end: 10a67c2ff;  */

/* WARNING: Removing unreachable block (ram,0x00010a67c278) */
/* WARNING: Removing unreachable block (ram,0x00010a67c27c) */
/* WARNING: Removing unreachable block (ram,0x00010a67c284) */
/* WARNING: Removing unreachable block (ram,0x00010a67c28c) */
/* WARNING: Removing unreachable block (ram,0x00010a67c290) */

void FUN_10a67c198(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
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
  long *in_stack_ffffffffffffffa8;
  
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
  FUN_10a67a920(param_2,param_3);
  FUN_10a20491c(param_5);
  FUN_10a204940(&stack0xffffffffffffffa0,param_2,param_4);
  FUN_10a6668e0(plVar6,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffa8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffa8 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
    }
  }
  *param_1 = 0;
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a67c300; end: 10a67c3c7;  */

void FUN_10a67c300(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
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
  FUN_10a67bcec(param_2,param_3);
  FUN_10a052e3c(param_5);
  if (((ulong)param_2[0xba] >> 0x20 & 1) == 0) {
    uVar5 = 1;
  }
  else {
    *(double *)(param_1 + 2) = (double)(int)param_2[0xba];
    uVar5 = 3;
  }
  *param_1 = uVar5;
  plVar1 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
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
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a67c3c8; end: 10a67c503;  */

/* WARNING: Removing unreachable block (ram,0x00010a67c488) */
/* WARNING: Removing unreachable block (ram,0x00010a67c490) */

void FUN_10a67c3c8(undefined4 *param_1,long *param_2,undefined8 param_3,uint *param_4,long param_5)

{
  uint *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
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
  plVar5 = param_2;
  FUN_10a67a920(param_2,param_3);
  FUN_10a1d5b5c(param_5);
  puVar1 = (uint *)&stack0xffffffffffffffb0;
  if (param_5 != 0) {
    puVar1 = param_4;
  }
  if (*puVar1 < 2) {
    *(undefined1 *)((long)plVar5 + 0x5d4) = 0;
    *(undefined4 *)(plVar5 + 0xba) = 0;
  }
  else {
    func_0x000109898518();
    *(int *)(plVar5 + 0xba) = (int)param_2;
    *(undefined1 *)((long)plVar5 + 0x5d4) = 1;
  }
  *param_1 = 0;
  plVar5 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar5[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar5;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar5;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar5 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
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
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a67c504; end: 10a67c5c7;  */

void FUN_10a67c504(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
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
  FUN_10a67bcec(param_2,param_3);
  FUN_10a052e3c(param_5);
  if ((*(ushort *)(param_2 + 0xbb) >> 8 & 1) == 0) {
    uVar5 = 1;
  }
  else {
    *(char *)(param_1 + 2) = (char)*(ushort *)(param_2 + 0xbb);
    uVar5 = 2;
  }
  *param_1 = uVar5;
  plVar1 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
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
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a67c5c8; end: 10a67c6fb;  */

/* WARNING: Removing unreachable block (ram,0x00010a67c680) */
/* WARNING: Removing unreachable block (ram,0x00010a67c688) */

void FUN_10a67c5c8(undefined4 *param_1,long *param_2,undefined8 param_3,uint *param_4,long param_5)

{
  uint *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
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
  plVar5 = param_2;
  FUN_10a67a920(param_2,param_3);
  FUN_10a67379c(param_5);
  puVar1 = (uint *)&stack0xffffffffffffffb0;
  if (param_5 != 0) {
    puVar1 = param_4;
  }
  if (*puVar1 < 2) {
    *(undefined2 *)(plVar5 + 0xbb) = 0;
  }
  else {
    func_0x00010989847c();
    *(ushort *)(plVar5 + 0xbb) = (ushort)param_2 | 0x100;
  }
  *param_1 = 0;
  plVar5 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar5[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar5;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar5;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar5 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
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
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a67c6fc; end: 10a67c7ab;  */

void FUN_10a67c6fc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a67bc0c(param_1,param_2,FUN_10a65e5d8,0,param_3,param_5);
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



/* Entry: 10a67c7ac; end: 10a67c863;  */

void FUN_10a67c7ac(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a67bd54(param_1,param_2,FUN_10a65e608,0,param_3,param_4,param_5);
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



/* Entry: 10a67c864; end: 10a67c91b;  */

void FUN_10a67c864(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a67bcec(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[0xbf];
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)lVar5;
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


