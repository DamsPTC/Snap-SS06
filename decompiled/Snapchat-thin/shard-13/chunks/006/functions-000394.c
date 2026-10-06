/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a8d4588; end: 10a8d45f7;  */

ulong FUN_10a8d4588(byte *param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)*param_1 + 0x9e3779b9;
  uVar1 = (ulong)*(uint *)(param_1 + 4) + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1;
  uVar1 = (ulong)*(uint *)(param_1 + 8) + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1;
  uVar1 = (ulong)*(uint *)(param_1 + 0xc) + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1;
  uVar1 = (ulong)*(uint *)(param_1 + 0x10) + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1;
  return ((ulong)param_1[0x14] | uVar1 << 6) + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1;
}



/* Entry: 10a8d45f8; end: 10a8d463f;  */

void FUN_10a8d45f8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10a09d364(lVar1 + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a8d4640; end: 10a8d464f;  */

void FUN_10a8d4640(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2acc0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a8d4650; end: 10a8d466f;  */

void FUN_10a8d4650(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2acc0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8d4670; end: 10a8d467f;  */

void FUN_10a8d4670(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a8d4678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a8d4680; end: 10a8d49b3;  */

undefined8 * FUN_10a8d4680(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10a8d49b4; end: 10a8d4a4b;  */

void FUN_10a8d49b4(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  FUN_10a8b5fac(*(undefined8 *)param_1[0x62]);
  lVar4 = param_1[1];
  plVar1 = (long *)*(long *)(lVar4 + 0x58);
  uVar3 = *(ulong *)(lVar4 + 0x60);
  if (-1 < (char)*(byte *)(lVar4 + 0x6f)) {
    plVar1 = (long *)(lVar4 + 0x58);
    uVar3 = (ulong)*(byte *)(lVar4 + 0x6f);
  }
  func_0x000107c2c4d8(*(long *)param_1[0x62] + 0x18,plVar1,uVar3);
  lVar4 = *(long *)(*param_1 + 0x8d8);
  if (lVar4 != 0) {
    puVar2 = (undefined8 *)(*(undefined8 **)param_1[0x62])[1];
    for (puVar5 = (undefined8 *)**(undefined8 **)param_1[0x62]; puVar5 != puVar2;
        puVar5 = puVar5 + 1) {
      (**(code **)(*(long *)*puVar5 + 0x28))((long *)*puVar5,lVar4);
    }
  }
  return;
}



/* Entry: 10a8d4a4c; end: 10a8d4b8f;  */

void FUN_10a8d4a4c(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plStack_90;
  long *plStack_88;
  long *plStack_78;
  long *plStack_70;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  long lStack_48;
  
  puVar1 = (undefined8 *)(param_1 + 0x40);
  func_0x00010a8d4e78(*puVar1);
  puVar3 = (undefined8 *)(param_1 + 0x38);
  *puVar3 = puVar1;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *puVar1 = 0;
  puVar4 = (undefined8 *)(param_1 + 0x58);
  func_0x00010a8d4ef4(*puVar4);
  puVar1 = (undefined8 *)(param_1 + 0x50);
  *puVar1 = puVar4;
  *puVar4 = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  FUN_10a8d51b0(&plStack_78,*(undefined8 *)(*(long *)(param_1 + 8) + 0x138),
                *(undefined8 *)(*(long *)(param_1 + 8) + 0x140));
  for (plVar2 = plStack_78; plVar2 != plStack_70; plVar2 = plVar2 + 2) {
    plStack_90 = (long *)(*plVar2 + 0x30);
    puVar4 = puVar3;
    FUN_10a8d58e4(puVar3,plStack_90,&plStack_90);
    FUN_10a8d4680(puVar4 + 7,*plVar2,plVar2[1]);
  }
  FUN_10a8d54fc(&plStack_90,*(undefined8 *)(*(long *)(param_1 + 8) + 0x150),
                *(undefined8 *)(*(long *)(param_1 + 8) + 0x158),auStack_60);
  for (plVar2 = plStack_90; plVar2 != plStack_88; plVar2 = plVar2 + 2) {
    lStack_48 = *plVar2 + 0x30;
    puVar3 = puVar1;
    FUN_10a8d5afc(puVar1,lStack_48,&lStack_48);
    func_0x00010a8d46f4(puVar3 + 7,*plVar2,plVar2[1]);
  }
  func_0x00010a8d439c(&plStack_90);
  func_0x00010a8d5abc(uStack_58);
  func_0x00010a8d42ac(&plStack_78);
  return;
}



/* Entry: 10a8d4b90; end: 10a8d4c7f;  */

undefined * FUN_10a8d4b90(long param_1)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar7 = *(long *)(param_1 + 8);
  if (lVar7 == 0) {
    FUN_10a00946c(&UNK_10f6811b8);
  }
  else if ((*(byte *)(lVar7 + 0x1b1) & 1) != 0) {
    *(undefined1 *)(param_1 + 0x308) = 1;
    plVar4 = (long *)(ulong)*(uint *)(param_1 + 0x2ec);
    if (((*(uint *)(param_1 + 0x2ec) & 0xfffffffb) == 0) && (*(char *)(lVar7 + 0x1b0) == '\x01')) {
      uStack_50 = 1;
      puVar6 = (undefined *)(param_1 + 0x1f8);
      FUN_10a8d5cfc(puVar6,&uStack_50,&uStack_4c,1);
    }
    else {
      FUN_10a8c09d8();
      lVar7 = *(long *)(param_1 + 8);
      uVar1 = *(undefined1 *)(lVar7 + 0x1b0);
      plVar5 = plVar4;
      FUN_10a8d5cd4();
      FUN_109d20f54(&uStack_50,plVar4,uVar1,lVar7 + 0x108,param_1 + 0x148,
                    *(undefined1 *)(*plVar5 + 8));
      puVar6 = *(undefined **)(param_1 + 0x1f8);
      if (puVar6 != (undefined *)0x0) {
        *(undefined **)(param_1 + 0x200) = puVar6;
        __ZdlPv();
      }
      *(undefined8 *)(param_1 + 0x200) = uStack_48;
      *(ulong *)(param_1 + 0x1f8) = CONCAT44(uStack_4c,uStack_50);
      *(undefined8 *)(param_1 + 0x208) = uStack_40;
    }
    return puVar6;
  }
  puVar6 = &UNK_10f6811f1;
  FUN_10a00946c();
  plVar4 = *(long **)(puVar6 + 8);
  if (plVar4 != (long *)0x0) {
    plVar5 = plVar4 + 1;
    do {
      lVar7 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return puVar6;
}



/* Entry: 10a8d4c80; end: 10a8d4de3;  */

long FUN_10a8d4c80(long param_1)

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



/* Entry: 10a8d4de4; end: 10a8d4df3;  */

void FUN_10a8d4de4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2ad30;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a8d4df4; end: 10a8d4e13;  */

void FUN_10a8d4df4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2ad30;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8d4e14; end: 10a8d4e1f;  */

long * FUN_10a8d4e14(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 0x18);
  func_0x00010937a020(plVar1,*(undefined8 *)(param_1 + 0x28));
  lVar2 = *plVar1;
  *plVar1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 10a8d4e20; end: 10a8d4f6f;  */

long FUN_10a8d4e20(long param_1)

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



/* Entry: 10a8d4f70; end: 10a8d50d7;  */

void FUN_10a8d4f70(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110c2ad80;
  puVar3 = (undefined8 *)0x48;
  __Znwm();
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  FUN_10a3ca004();
  ppuVar4 = &PTR___tlv_bootstrap_11340de28;
  (*(code *)PTR___tlv_bootstrap_11340de28)();
  puStack_48 = (undefined8 *)&UNK_10f63b699;
  uStack_40 = 0x28;
  if (*ppuVar4 != (undefined *)0x0) {
    plVar6 = *(long **)(*ppuVar4 + 0x10);
    if (plVar6 != (long *)0x0) {
      puVar5 = (undefined8 *)0x20;
      __Znwm();
      lStack_38 = -0x7fffffffffffffe0;
      uStack_40 = 0x18;
      puVar5[2] = 0x746e657645736e65;
      puVar5[1] = 0x4c4c4d686365545f;
      *puVar5 = 0x45524f43534e454c;
      *(undefined1 *)(puVar5 + 3) = 0;
      puStack_48 = puVar5;
      (**(code **)(*plVar6 + 0x50))(plVar6,&puStack_48,0);
      if (lStack_38 < 0) {
        __ZdlPv(puStack_48);
      }
    }
    *(char *)(puVar3 + 8) = (char)plVar6;
    puVar2[3] = puVar3;
    *param_1 = puVar2 + 3;
    param_1[1] = puVar2;
    return;
  }
  FUN_10a0edfc4(&puStack_48);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a8d5080);
  (*pcVar1)();
}



/* Entry: 10a8d50d8; end: 10a8d50e7;  */

void FUN_10a8d50d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2ad80;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a8d50e8; end: 10a8d5107;  */

void FUN_10a8d50e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2ad80;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8d5108; end: 10a8d5153;  */

void FUN_10a8d5108(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x2f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x18));
    }
    FUN_10a8dcf20(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a8d5154; end: 10a8d5157;  */

void FUN_10a8d5154(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8d5158; end: 10a8d51af;  */

long FUN_10a8d5158(long param_1)

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



/* Entry: 10a8d51b0; end: 10a8d54fb;  */

void FUN_10a8d51b0(undefined8 *param_1,long *param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lStack_88;
  long *plStack_80;
  undefined8 *puStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  plVar8 = param_1 + 3;
  *plVar8 = (long)(param_1 + 4);
  param_1[5] = 0;
  for (; param_2 != param_3; param_2 = param_2 + 2) {
    lVar9 = *param_2;
    FUN_10a6d1844(&lStack_88,&puStack_78);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (lStack_88 + 0x30,lVar9 + 0x30);
    uVar3 = *(undefined8 *)(lVar9 + 0x48);
    *(undefined8 *)(lStack_88 + 0x50) = *(undefined8 *)(lVar9 + 0x50);
    *(undefined8 *)(lStack_88 + 0x48) = uVar3;
    lVar10 = *(long *)(lVar9 + 0x58);
    if (lVar10 != 0) {
      uVar3 = 0xf8;
      __Znwm(0xf8);
      FUN_10a8cd1bc();
      FUN_10a6d62f8(&puStack_78,uVar3);
      uVar3 = *(undefined8 *)(lVar10 + 0x5e);
      uVar11 = *(undefined8 *)(lVar10 + 0x50);
      puStack_78[0xb] = *(undefined8 *)(lVar10 + 0x58);
      puStack_78[10] = uVar11;
      *(undefined8 *)((long)puStack_78 + 0x5e) = uVar3;
      FUN_10a6d6294(lStack_88 + 0x58,&puStack_78);
      plVar6 = plStack_70;
      if (plStack_70 != (long *)0x0) {
        plVar7 = plStack_70 + 1;
        do {
          lVar10 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar10 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_70 + 0x10))(plStack_70);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
    }
    lVar10 = *(long *)(lVar9 + 0x118);
    if (lVar10 != 0) {
      puVar4 = (undefined8 *)0x70;
      __Znwm();
      puVar4[0xb] = 0;
      puVar4[10] = 0;
      puVar4[0xd] = 0;
      puVar4[0xc] = 0;
      puVar4[7] = 0;
      puVar4[6] = 0;
      puVar4[9] = 0;
      puVar4[8] = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
      puVar4[5] = 0;
      puVar4[4] = 0;
      puVar4[1] = 0;
      *puVar4 = 0;
      puVar5 = puVar4;
      FUN_10a8dc978();
      plVar6 = (long *)0x20;
      puStack_78 = puVar5;
      __Znwm();
      *plVar6 = (long)&PTR_FUN_110c2bcc0;
      plVar6[1] = 0;
      plVar6[2] = 0;
      plVar6[3] = (long)puVar4;
      plStack_70 = plVar6;
      FUN_10a8ed430(&puStack_78,puVar4 + 5,puVar4);
      uVar11 = *(undefined8 *)(lVar10 + 0x58);
      uVar3 = *(undefined8 *)(lVar10 + 0x50);
      uVar12 = *(undefined8 *)(lVar10 + 0x5c);
      *(undefined8 *)((long)puVar4 + 100) = *(undefined8 *)(lVar10 + 100);
      *(undefined8 *)((long)puVar4 + 0x5c) = uVar12;
      puVar4[0xb] = uVar11;
      puVar4[10] = uVar3;
      FUN_10a8c5e04(lStack_88 + 0x118,&puStack_78);
      plVar6 = plStack_70;
      if (plStack_70 != (long *)0x0) {
        plVar7 = plStack_70 + 1;
        do {
          lVar10 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar10 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_70 + 0x10))(plStack_70);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
    }
    *(undefined1 *)(lStack_88 + 0x128) = *(undefined1 *)(lVar9 + 0x128);
    func_0x00010a8c5f40(lStack_88,lVar9 + 0x108);
    lVar9 = lStack_88;
    puStack_78 = *(undefined8 **)(*param_2 + 0x58);
    plVar6 = *(long **)(*param_2 + 0x60);
    if (plVar6 != (long *)0x0) {
      plVar7 = plVar6 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = *plVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plStack_70 = plVar6;
    if (puStack_78 != (undefined8 *)0x0) {
      uVar3 = puStack_78[8];
      uVar11 = puStack_78[9];
      plVar7 = plVar8;
      FUN_10a8d5818(plVar8,&uStack_68,uVar3,uVar11);
      lVar10 = *plVar7;
      if (lVar10 == 0) {
        lVar10 = 0x40;
        __Znwm();
        *(undefined8 *)(lVar10 + 0x20) = uVar3;
        *(undefined8 *)(lVar10 + 0x28) = uVar11;
        *(undefined8 *)(lVar10 + 0x30) = 0;
        *(undefined8 *)(lVar10 + 0x38) = 0;
        FUN_10a8d5890(plVar8,uStack_68,plVar7,lVar10);
      }
      func_0x00010a6c8b40(lVar10 + 0x30,lVar9 + 0x58);
    }
    if (plVar6 != (long *)0x0) {
      plVar7 = plVar6 + 1;
      do {
        lVar9 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = lVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    FUN_10a8b9a24(param_1,&lStack_88);
    plVar6 = plStack_80;
    if (plStack_80 != (long *)0x0) {
      plVar7 = plStack_80 + 1;
      do {
        lVar9 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = lVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_80 + 0x10))(plStack_80);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  return;
}



/* Entry: 10a8d54fc; end: 10a8d5817;  */

void FUN_10a8d54fc(undefined8 *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long ****pppplVar2;
  ulong uVar3;
  long ***ppplVar4;
  char cVar5;
  bool bVar6;
  long ***ppplVar7;
  long lVar8;
  long lVar9;
  long ****pppplVar10;
  long ****pppplVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long **pplVar16;
  undefined8 uVar17;
  long ***ppplStack_90;
  long ***ppplStack_88;
  long lStack_80;
  long lStack_78;
  long *plStack_70;
  long ***ppplStack_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != param_3) {
    do {
      lVar13 = *param_2;
      ppplStack_88 = (long ***)0x0;
      lStack_80 = 0;
      ppplStack_90 = (long ***)&ppplStack_88;
      plVar14 = (long *)*param_4;
      while (plVar14 != param_4 + 1) {
        ppplVar7 = (long ***)plVar14[4];
        pppplVar10 = &ppplStack_88;
        if ((long ****)ppplStack_90 == &ppplStack_88) {
LAB_10a8d55f0:
          if ((long ****)ppplStack_88 == (long ****)0x0) {
            ppplStack_68 = (long ***)&ppplStack_88;
            pppplVar10 = &ppplStack_88;
          }
          else {
            ppplStack_68 = (long ***)pppplVar10;
            pppplVar10 = pppplVar10 + 1;
          }
        }
        else {
          pppplVar11 = &ppplStack_88;
          pppplVar2 = (long ****)ppplStack_88;
          if ((long ****)ppplStack_88 == (long ****)0x0) {
            do {
              pppplVar10 = (long ****)pppplVar11[2];
              bVar6 = (long ****)*pppplVar10 == pppplVar11;
              pppplVar11 = pppplVar10;
            } while (bVar6);
          }
          else {
            do {
              pppplVar10 = pppplVar2;
              pppplVar2 = (long ****)pppplVar10[1];
            } while ((long ****)pppplVar10[1] != (long ****)0x0);
          }
          bVar6 = (long)pppplVar10[4] < (long)ppplVar7;
          if (pppplVar10[4] == ppplVar7) {
            bVar6 = pppplVar10[5] != (long ***)plVar14[5] && (long)pppplVar10[5] < plVar14[5];
          }
          if (bVar6) goto LAB_10a8d55f0;
          pppplVar10 = &ppplStack_90;
          FUN_10a8d5818(pppplVar10,&ppplStack_68);
        }
        if (*pppplVar10 == (long ***)0x0) {
          ppplVar7 = (long ***)0x40;
          __Znwm();
          pplVar16 = (long **)plVar14[4];
          ppplVar7[5] = (long **)plVar14[5];
          ppplVar7[4] = pplVar16;
          lVar8 = plVar14[7];
          pplVar16 = (long **)plVar14[6];
          ppplVar7[7] = (long **)plVar14[7];
          ppplVar7[6] = pplVar16;
          if (lVar8 != 0) {
            plVar1 = (long *)(lVar8 + 8);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = *plVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          *ppplVar7 = (long **)0x0;
          ppplVar7[1] = (long **)0x0;
          ppplVar7[2] = (long **)ppplStack_68;
          *pppplVar10 = ppplVar7;
          if ((long ****)*ppplStack_90 != (long ****)0x0) {
            ppplStack_90 = (long ***)*ppplStack_90;
            ppplVar7 = *pppplVar10;
          }
          func_0x000107c2b058(ppplStack_88,ppplVar7);
          lStack_80 = lStack_80 + 1;
        }
        plVar1 = (long *)plVar14[1];
        plVar15 = plVar14;
        if ((long *)plVar14[1] == (long *)0x0) {
          do {
            plVar14 = (long *)plVar15[2];
            bVar6 = (long *)*plVar14 != plVar15;
            plVar15 = plVar14;
          } while (bVar6);
        }
        else {
          do {
            plVar14 = plVar1;
            plVar1 = (long *)*plVar14;
          } while ((long *)*plVar14 != (long *)0x0);
        }
      }
      func_0x00010a8e503c(&lStack_78);
      lVar8 = lStack_78;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (lStack_78 + 0x30,lVar13 + 0x30);
      uVar17 = *(undefined8 *)(lVar13 + 0x48);
      *(undefined8 *)(lVar8 + 0x50) = *(undefined8 *)(lVar13 + 0x50);
      *(undefined8 *)(lVar8 + 0x48) = uVar17;
      *(undefined4 *)(lVar8 + 0x14c) = *(undefined4 *)(lVar13 + 0x14c);
      lVar9 = *(long *)(lVar13 + 0x58);
      if ((lVar9 != 0) && ((long ****)ppplStack_88 != (long ****)0x0)) {
        ppplVar7 = *(long ****)(lVar9 + 0x40);
        ppplVar4 = *(long ****)(lVar9 + 0x48);
        pppplVar10 = &ppplStack_88;
        pppplVar11 = (long ****)ppplStack_88;
        do {
          uVar12 = 0xff;
          if ((long)ppplVar7 <= (long)pppplVar11[4]) {
            uVar12 = 0;
          }
          if (pppplVar11[4] == ppplVar7) {
            uVar3 = 0xff;
            if ((long)ppplVar4 <= (long)pppplVar11[5]) {
              uVar3 = 0;
            }
            uVar12 = 0;
            if (pppplVar11[5] != ppplVar4) {
              uVar12 = uVar3;
            }
          }
          pppplVar2 = pppplVar11;
          if ((uVar12 & 0x80) != 0) {
            pppplVar2 = pppplVar10;
          }
          pppplVar11 = *(long *****)((long)pppplVar11 + ((uVar12 & 0x80) >> 4));
          pppplVar10 = pppplVar2;
        } while (pppplVar11 != (long ****)0x0);
        if (&ppplStack_88 != pppplVar2) {
          bVar6 = (long)ppplVar7 < (long)pppplVar2[4];
          if (ppplVar7 == pppplVar2[4]) {
            bVar6 = ppplVar4 != pppplVar2[5] && (long)ppplVar4 < (long)pppplVar2[5];
          }
          if (!bVar6) {
            func_0x00010a6c8b40(lVar8 + 0x58,pppplVar2 + 6);
          }
        }
      }
      *(undefined4 *)(lVar8 + 0x148) = *(undefined4 *)(lVar13 + 0x148);
      FUN_10a8c2944(param_1,&lStack_78);
      plVar14 = plStack_70;
      if (plStack_70 != (long *)0x0) {
        plVar1 = plStack_70 + 1;
        do {
          lVar13 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar13 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_70 + 0x10))(plStack_70);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
        }
      }
      func_0x00010a8d5abc(ppplStack_88);
      param_2 = param_2 + 2;
    } while (param_2 != param_3);
  }
  return;
}



/* Entry: 10a8d5818; end: 10a8d588f;  */

long * FUN_10a8d5818(long param_1,undefined8 *param_2,long param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  plVar1 = (long *)(param_1 + 8);
  plVar3 = (long *)*plVar1;
  plVar2 = plVar1;
joined_r0x00010a8d581c:
  if (plVar3 != (long *)0x0) {
    do {
      plVar2 = plVar3;
      lVar4 = plVar2[4];
      if (param_3 == lVar4) {
        lVar4 = plVar2[5];
        if (lVar4 <= param_4) goto code_r0x00010a8d5840;
      }
      else if (lVar4 <= param_3) {
        if (lVar4 < param_3) goto LAB_10a8d5874;
        break;
      }
      plVar1 = plVar2;
      plVar3 = (long *)*plVar2;
      if ((long *)*plVar2 == (long *)0x0) break;
    } while( true );
  }
  goto LAB_10a8d5888;
code_r0x00010a8d5840:
  if (lVar4 == param_4 || param_4 <= lVar4) {
LAB_10a8d5888:
    *param_2 = plVar2;
    return plVar1;
  }
LAB_10a8d5874:
  plVar1 = plVar2 + 1;
  plVar3 = (long *)*plVar1;
  goto joined_r0x00010a8d581c;
}



/* Entry: 10a8d5890; end: 10a8d58e3;  */

void FUN_10a8d5890(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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



/* Entry: 10a8d58e4; end: 10a8d599b;  */

long FUN_10a8d58e4(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_38;
  
  plVar1 = param_1;
  FUN_10a8d599c(param_1,&uStack_38,param_2);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    param_3 = (undefined8 *)*param_3;
    lVar2 = 0x48;
    __Znwm();
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      func_0x000107c3192c(lVar2 + 0x20,*param_3,param_3[1]);
    }
    else {
      uVar4 = param_3[1];
      uVar3 = *param_3;
      *(undefined8 *)(lVar2 + 0x30) = param_3[2];
      *(undefined8 *)(lVar2 + 0x28) = uVar4;
      *(undefined8 *)(lVar2 + 0x20) = uVar3;
    }
    *(undefined8 *)(lVar2 + 0x38) = 0;
    *(undefined8 *)(lVar2 + 0x40) = 0;
    FUN_10a8d5a20(param_1,uStack_38,plVar1,lVar2);
  }
  return lVar2;
}



/* Entry: 10a8d599c; end: 10a8d5a1f;  */

long * FUN_10a8d599c(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar2 = (long *)*plVar3;
  plVar4 = plVar3;
  while (plVar2 != (long *)0x0) {
    while (plVar4 = plVar2, uVar1 = param_3, FUN_10a003e3c(param_3,plVar4 + 4),
          ((uint)uVar1 >> 7 & 1) != 0) {
      plVar2 = (long *)*plVar4;
      plVar3 = plVar4;
      if ((long *)*plVar4 == (long *)0x0) goto LAB_10a8d5a08;
    }
    plVar2 = plVar4 + 4;
    FUN_10a003e3c(plVar2,param_3);
    if (((uint)plVar2 >> 7 & 1) == 0) break;
    plVar3 = plVar4 + 1;
    plVar2 = (long *)*plVar3;
  }
LAB_10a8d5a08:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 10a8d5a20; end: 10a8d5afb;  */

void FUN_10a8d5a20(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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



/* Entry: 10a8d5afc; end: 10a8d5bb3;  */

long FUN_10a8d5afc(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_38;
  
  plVar1 = param_1;
  FUN_10a8d5bb4(param_1,&uStack_38,param_2);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    param_3 = (undefined8 *)*param_3;
    lVar2 = 0x48;
    __Znwm();
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      func_0x000107c3192c(lVar2 + 0x20,*param_3,param_3[1]);
    }
    else {
      uVar4 = param_3[1];
      uVar3 = *param_3;
      *(undefined8 *)(lVar2 + 0x30) = param_3[2];
      *(undefined8 *)(lVar2 + 0x28) = uVar4;
      *(undefined8 *)(lVar2 + 0x20) = uVar3;
    }
    *(undefined8 *)(lVar2 + 0x38) = 0;
    *(undefined8 *)(lVar2 + 0x40) = 0;
    FUN_10a8d5c38(param_1,uStack_38,plVar1,lVar2);
  }
  return lVar2;
}



/* Entry: 10a8d5bb4; end: 10a8d5c37;  */

long * FUN_10a8d5bb4(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar2 = (long *)*plVar3;
  plVar4 = plVar3;
  while (plVar2 != (long *)0x0) {
    while (plVar4 = plVar2, uVar1 = param_3, FUN_10a003e3c(param_3,plVar4 + 4),
          ((uint)uVar1 >> 7 & 1) != 0) {
      plVar2 = (long *)*plVar4;
      plVar3 = plVar4;
      if ((long *)*plVar4 == (long *)0x0) goto LAB_10a8d5c20;
    }
    plVar2 = plVar4 + 4;
    FUN_10a003e3c(plVar2,param_3);
    if (((uint)plVar2 >> 7 & 1) == 0) break;
    plVar3 = plVar4 + 1;
    plVar2 = (long *)*plVar3;
  }
LAB_10a8d5c20:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 10a8d5c38; end: 10a8d5cd3;  */

void FUN_10a8d5c38(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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



/* Entry: 10a8d5cd4; end: 10a8d5cfb;  */

void FUN_10a8d5cd4(long *param_1,undefined4 *param_2,undefined4 *param_3,ulong param_4)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  FUN_10a0f367c();
  if (*param_1 == 0) {
    puVar2 = (undefined8 *)&UNK_10f681232;
    FUN_10a00946c();
    uVar3 = puVar2[2];
    puVar7 = (undefined4 *)*puVar2;
    if ((ulong)((long)(uVar3 - (long)puVar7) >> 2) < param_4) {
      if (puVar7 != (undefined4 *)0x0) {
        puVar2[1] = puVar7;
        __ZdlPv(puVar7);
        uVar3 = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
      }
      uVar6 = (long)uVar3 >> 1;
      if (uVar6 < 2) {
        uVar6 = 1;
      }
      if (0x7ffffffffffffffb < uVar3) {
        uVar6 = 0x3fffffffffffffff;
      }
      FUN_10a8d5e1c(puVar2,uVar6);
      puVar4 = (undefined4 *)puVar2[1];
      for (; param_2 != param_3; param_2 = param_2 + 1) {
        *puVar4 = *param_2;
        puVar4 = puVar4 + 1;
      }
    }
    else {
      puVar5 = (undefined4 *)puVar2[1];
      if ((ulong)((long)puVar5 - (long)puVar7 >> 2) < param_4) {
        puVar8 = (undefined4 *)((long)param_2 + ((long)puVar5 - (long)puVar7));
        puVar4 = puVar5;
        if (puVar5 != puVar7) {
          _memmove(puVar7,param_2);
          puVar5 = (undefined4 *)puVar2[1];
          puVar4 = puVar5;
        }
        for (; puVar8 != param_3; puVar8 = puVar8 + 1) {
          *puVar5 = *puVar8;
          puVar5 = puVar5 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      else {
        lVar1 = (long)param_3 - (long)param_2;
        if (lVar1 != 0) {
          _memmove(puVar7,param_2,lVar1);
        }
        puVar4 = (undefined4 *)((long)puVar7 + lVar1);
      }
    }
    puVar2[1] = puVar4;
    return;
  }
  return;
}



/* Entry: 10a8d5cfc; end: 10a8d5e1b;  */

void FUN_10a8d5cfc(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  uVar2 = param_1[2];
  puVar6 = (undefined4 *)*param_1;
  if ((ulong)((long)(uVar2 - (long)puVar6) >> 2) < param_4) {
    if (puVar6 != (undefined4 *)0x0) {
      param_1[1] = puVar6;
      __ZdlPv(puVar6);
      uVar2 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    uVar5 = (long)uVar2 >> 1;
    if (uVar5 < 2) {
      uVar5 = 1;
    }
    if (0x7ffffffffffffffb < uVar2) {
      uVar5 = 0x3fffffffffffffff;
    }
    FUN_10a8d5e1c(param_1,uVar5);
    puVar3 = (undefined4 *)param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar3 = *param_2;
      puVar3 = puVar3 + 1;
    }
  }
  else {
    puVar4 = (undefined4 *)param_1[1];
    if ((ulong)((long)puVar4 - (long)puVar6 >> 2) < param_4) {
      puVar7 = (undefined4 *)((long)param_2 + ((long)puVar4 - (long)puVar6));
      puVar3 = puVar4;
      if (puVar4 != puVar6) {
        _memmove(puVar6,param_2);
        puVar4 = (undefined4 *)param_1[1];
        puVar3 = puVar4;
      }
      for (; puVar7 != param_3; puVar7 = puVar7 + 1) {
        *puVar4 = *puVar7;
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    else {
      lVar1 = (long)param_3 - (long)param_2;
      if (lVar1 != 0) {
        _memmove(puVar6,param_2,lVar1);
      }
      puVar3 = (undefined4 *)((long)puVar6 + lVar1);
    }
  }
  param_1[1] = puVar3;
  return;
}



/* Entry: 10a8d5e1c; end: 10a8d5e53;  */

undefined1  [16] FUN_10a8d5e1c(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  if ((ulong)param_2 >> 0x3e == 0) {
    plVar1 = param_1;
    FUN_10a8d5e68();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)plVar1 + (long)param_2 * 4;
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = plVar1;
    return auVar9;
  }
  FUN_10a8d5e54();
  puVar2 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)param_2 >> 0x3e == 0) {
    lVar3 = (long)param_2 << 2;
    __Znwm(lVar3);
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = lVar3;
    return auVar10;
  }
  func_0x000109ffded8();
  puVar6 = (undefined8 *)(puVar2 + 8);
  puVar8 = (undefined8 *)*puVar6;
  puVar5 = param_2;
  puVar7 = puVar6;
  if (puVar8 != (undefined8 *)0x0) {
    do {
      puVar4 = puVar8 + 4;
      puVar5 = param_2;
      FUN_10a003e3c(puVar4,param_2);
      if (-1 < (char)puVar4) {
        puVar7 = puVar8;
      }
      puVar8 = *(undefined8 **)((long)puVar8 + ((ulong)puVar4 >> 4 & 8));
    } while (puVar8 != (undefined8 *)0x0);
    if (puVar7 != puVar6) {
      puVar5 = puVar7 + 4;
      FUN_10a003e3c(param_2,puVar5);
      if (((uint)param_2 >> 7 & 1) == 0) goto LAB_10a8d5f04;
    }
  }
  puVar7 = puVar6;
LAB_10a8d5f04:
  auVar11._8_8_ = puVar5;
  auVar11._0_8_ = puVar7;
  return auVar11;
}



/* Entry: 10a8d5e54; end: 10a8d5e67;  */

undefined1  [16] FUN_10a8d5e54(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)param_2 >> 0x3e == 0) {
    lVar2 = (long)param_2 << 2;
    __Znwm(lVar2);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar2;
    return auVar8;
  }
  func_0x000109ffded8();
  puVar5 = (undefined8 *)(puVar1 + 8);
  puVar7 = (undefined8 *)*puVar5;
  puVar4 = param_2;
  puVar6 = puVar5;
  if (puVar7 != (undefined8 *)0x0) {
    do {
      puVar3 = puVar7 + 4;
      puVar4 = param_2;
      FUN_10a003e3c(puVar3,param_2);
      if (-1 < (char)puVar3) {
        puVar6 = puVar7;
      }
      puVar7 = *(undefined8 **)((long)puVar7 + ((ulong)puVar3 >> 4 & 8));
    } while (puVar7 != (undefined8 *)0x0);
    if (puVar6 != puVar5) {
      puVar4 = puVar6 + 4;
      FUN_10a003e3c(param_2,puVar4);
      if (((uint)param_2 >> 7 & 1) == 0) goto LAB_10a8d5f04;
    }
  }
  puVar6 = puVar5;
LAB_10a8d5f04:
  auVar9._8_8_ = puVar4;
  auVar9._0_8_ = puVar6;
  return auVar9;
}



/* Entry: 10a8d5e68; end: 10a8d5e9b;  */

undefined1  [16] FUN_10a8d5e68(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if ((ulong)param_2 >> 0x3e == 0) {
    lVar1 = (long)param_2 << 2;
    __Znwm(lVar1);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = lVar1;
    return auVar7;
  }
  func_0x000109ffded8();
  plVar4 = (long *)(param_1 + 8);
  plVar6 = (long *)*plVar4;
  plVar3 = param_2;
  plVar5 = plVar4;
  if (plVar6 != (long *)0x0) {
    do {
      plVar2 = plVar6 + 4;
      plVar3 = param_2;
      FUN_10a003e3c(plVar2,param_2);
      if (-1 < (char)plVar2) {
        plVar5 = plVar6;
      }
      plVar6 = *(long **)((long)plVar6 + ((ulong)plVar2 >> 4 & 8));
    } while (plVar6 != (long *)0x0);
    if (plVar5 != plVar4) {
      plVar3 = plVar5 + 4;
      FUN_10a003e3c(param_2,plVar3);
      if (((uint)param_2 >> 7 & 1) == 0) goto LAB_10a8d5f04;
    }
  }
  plVar5 = plVar4;
LAB_10a8d5f04:
  auVar8._8_8_ = plVar3;
  auVar8._0_8_ = plVar5;
  return auVar8;
}



/* Entry: 10a8d5e9c; end: 10a8d5f93;  */

long * FUN_10a8d5e9c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar2;
  plVar3 = plVar2;
  if (plVar4 != (long *)0x0) {
    do {
      plVar1 = plVar4 + 4;
      FUN_10a003e3c(plVar1,param_2);
      if (-1 < (char)plVar1) {
        plVar3 = plVar4;
      }
      plVar4 = *(long **)((long)plVar4 + ((ulong)plVar1 >> 4 & 8));
    } while (plVar4 != (long *)0x0);
    if ((plVar3 != plVar2) && (FUN_10a003e3c(param_2,plVar3 + 4), ((uint)param_2 >> 7 & 1) == 0)) {
      return plVar3;
    }
  }
  return plVar2;
}



/* Entry: 10a8d5f94; end: 10a8d6847;  */

/* WARNING: Removing unreachable block (ram,0x00010a8d64a0) */
/* WARNING: Removing unreachable block (ram,0x00010a8d61a0) */
/* WARNING: Removing unreachable block (ram,0x00010a8d63dc) */
/* WARNING: Removing unreachable block (ram,0x00010a8d61e0) */

void FUN_10a8d5f94(long param_1,long param_2,long **param_3)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined ***pppuVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong *unaff_x25;
  ulong *puVar12;
  code *pcStack_138;
  ulong *puStack_130;
  undefined **ppuStack_128;
  long *plStack_110;
  long *plStack_108;
  long lStack_100;
  ulong *puStack_f8;
  undefined8 uStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  code *pcStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_e0 = *(undefined8 *)(param_1 + 0x310);
  lStack_d8 = *(long *)(param_1 + 0x318);
  if (lStack_d8 == 0) {
    lStack_98 = 0;
    lStack_d8 = 0;
    uStack_a0 = uStack_e0;
  }
  else {
    plVar10 = (long *)(lStack_d8 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uStack_a0 = *(undefined8 *)(param_1 + 0x310);
    lStack_98 = *(long *)(param_1 + 0x318);
    if (lStack_98 != 0) {
      plVar10 = (long *)(lStack_98 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  ppuStack_e8 = &PTR_FUN_110c2adc0;
  uStack_f0 = 0x10a8d6b84;
  pcStack_b0 = FUN_10a8d6be8;
  ppuStack_a8 = &PTR_FUN_110c2add8;
  if ((int)param_2 == 0) {
    *(undefined4 *)(param_1 + 0x140) = 1;
    *(undefined1 *)(param_1 + 0x2b8) = 0;
    param_3 = &plStack_108;
    FUN_109d23568(&plStack_108);
    func_0x0001092b4524(param_1 + 0x2b0,&plStack_108);
    FUN_109d22f8c(&pcStack_138,**(undefined8 **)(param_1 + 0x108),*(undefined8 *)(param_1 + 0x288),
                  &uStack_f0);
    FUN_109d23ecc(lStack_100,&pcStack_138);
    func_0x000109379fe8(&pcStack_138);
    goto LAB_10a8d6250;
  }
  if (*(long *)(param_1 + 0x2b0) != 0) goto LAB_10a8d6700;
  if ((*(char *)(param_1 + 0x2c8) == '\x01') &&
     (((uint)*(undefined8 *)(*(long *)(param_1 + 0x2c0) + 0x10) >> 1 & 1) != 0)) goto LAB_10a8d6700;
  *(undefined4 *)(param_1 + 0x140) = 1;
  param_2 = param_1 + 0x288;
  FUN_109d230bc(&plStack_110,**(undefined8 **)(param_1 + 0x108),param_2,&uStack_f0);
  plVar10 = plStack_110;
  if (*(char *)(param_1 + 0x2c8) == '\x01') {
    plVar5 = (long *)0x130;
    __Znwm();
    *(undefined2 *)(plVar5 + 3) = 4;
    plVar5[2] = 0;
    plVar5[1] = 0x200000006;
    plVar5[5] = 0;
    plVar5[4] = 0;
    plVar5[7] = 0;
    plVar5[6] = 0;
    plVar5[9] = 0;
    plVar5[8] = 0;
    plVar5[0xb] = 0;
    plVar5[10] = 0;
    plVar5[0xd] = 0;
    plVar5[0xc] = 0;
    plVar5[0xf] = 0;
    plVar5[0xe] = 0;
    plVar5[0x10] = 0;
    plVar5[0x11] = (long)(plVar5 + 3);
    plVar5[0x12] = 0;
    *(undefined1 *)(plVar5 + 0x13) = 0;
    *(undefined1 *)(plVar5 + 0x18) = 0;
    *plVar5 = (long)&PTR_FUN_110c2ae00;
    puVar12 = (ulong *)(plVar5 + 0x19);
    *puVar12 = (ulong)plStack_110;
    lVar7 = *(long *)(param_1 + 0x2c0);
    plVar5[0x1a] = lVar7;
    plVar10 = (long *)(lVar7 + 8);
    plStack_110 = (long *)0x0;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5[0x1d] = 0;
    plVar5[0x1e] = 0x32aaaba7;
    plVar5[0x25] = 0;
    plVar5[0x20] = 0;
    plVar5[0x1f] = 0;
    plVar5[0x22] = 0;
    plVar5[0x21] = 0;
    plVar5[0x24] = 0;
    plVar5[0x23] = 0;
    lStack_100 = 0;
    plVar5[0x1b] = (long)plVar5;
    plVar5[0x1c] = 0;
    plStack_108 = plVar5;
    puStack_f8 = puVar12;
    if (((uint)*(undefined8 *)(plVar5[0x1a] + 0x10) >> 1 & 1) == 0) {
      __ZNSt3__15mutex4lockEv(plVar5 + 0x1e);
      uVar9 = *puVar12;
      plVar10 = (long *)(uVar9 + 0x10);
      do {
        lVar7 = *plVar10;
        if (lVar7 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            uVar11 = uVar9 + 0x18;
            pcStack_138 = FUN_10a8d6c4c;
            ppuStack_128 = &PTR_PTR_1132fed68;
            puStack_130 = puVar12;
            func_0x000109d1b588(uVar11,&pcStack_138);
            *(undefined8 *)(uVar9 + 0x10) = 0;
            puStack_f8[3] = uVar11;
            lVar7 = plVar5[0x1a];
            plVar10 = (long *)(lVar7 + 0x10);
            goto LAB_10a8d63c8;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar7 >> 1 & 1) == 0);
      puStack_f8[3] = 0;
      lVar7 = plVar5[0x1b];
      plVar10 = (long *)(lVar7 + 0x10);
      do {
        lVar8 = *plVar10;
        if (lVar8 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = 2;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            func_0x000109d1b4dc(lVar7 + 0x18);
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar8 >> 1 & 1) == 0);
      plVar10 = (long *)plVar5[0x1a];
      plVar5[0x1a] = 0;
      if (plVar10 != (long *)0x0) {
        puVar1 = (ulong *)(plVar10 + 1);
        do {
          uVar9 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar9 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          do {
            uVar9 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar9 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar10 + 8))(plVar10);
          }
        }
      }
      lVar7 = plVar5[0x1b];
      plVar5[0x1b] = 0;
      if (lVar7 != 0) {
        func_0x0001092b4274(plVar5 + 0x1b);
      }
      plVar10 = (long *)*puVar12;
      *puVar12 = 0;
LAB_10a8d6604:
      __ZNSt3__15mutex6unlockEv(plVar5 + 0x1e);
      unaff_x25 = puVar12;
    }
    else {
      lVar7 = plVar5[0x1b];
      plVar10 = plVar5;
      FUN_109d1857c();
      func_0x000109d1b350(lVar7,plVar10);
      plVar10 = (long *)*puVar12;
      *puVar12 = 0;
      if (plVar10 != (long *)0x0) {
        puVar12 = (ulong *)(plVar10 + 1);
        do {
          uVar9 = *puVar12;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar12,0x10);
          if (bVar4) {
            *puVar12 = uVar9 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar12;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar12,0x10);
            if (bVar4) {
              *puVar12 = uVar9 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar10 + 8))();
          }
        }
      }
      plVar10 = (long *)plVar5[0x1a];
      plVar5[0x1a] = 0;
      if (plVar10 != (long *)0x0) {
        unaff_x25 = (ulong *)(plVar10 + 1);
        do {
          uVar9 = *unaff_x25;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(unaff_x25,0x10);
          if (bVar4) {
            *unaff_x25 = uVar9 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          do {
            uVar9 = *unaff_x25;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(unaff_x25,0x10);
            if (bVar4) {
              *unaff_x25 = uVar9 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar10 + 8))(plVar10);
          }
        }
      }
      lVar7 = plVar5[0x1b];
      plVar5[0x1b] = 0;
      if (lVar7 != 0) {
        func_0x0001092b4274(plVar5 + 0x1b);
      }
      plVar10 = plStack_108;
      plStack_108 = (long *)0x0;
    }
    param_2 = lStack_100;
    if (lStack_100 != 0) {
      func_0x0001092b4274(&lStack_100);
    }
    if (plStack_108 != (long *)0x0) {
      puVar12 = (ulong *)(plStack_108 + 1);
      do {
        uVar9 = *puVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar12,0x10);
        if (bVar4) {
          *puVar12 = uVar9 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar12;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar12,0x10);
          if (bVar4) {
            *puVar12 = uVar9 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plStack_108 + 8))();
        }
      }
    }
  }
  else {
    plStack_110 = (long *)0x0;
  }
  plVar5 = *(long **)(param_1 + 0x2b0);
  if (plVar5 != (long *)0x0) {
    puVar12 = (ulong *)(plVar5 + 1);
    do {
      uVar9 = *puVar12;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar12,0x10);
      if (bVar4) {
        *puVar12 = uVar9 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar9 & 0x1fffffffc) == 4) {
      do {
        uVar9 = *puVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar12,0x10);
        if (bVar4) {
          *puVar12 = uVar9 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar9 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  *(long **)(param_1 + 0x2b0) = plVar10;
  *(char *)(param_1 + 0x2b8) = (char)param_3;
  if (plStack_110 == (long *)0x0) goto LAB_10a8d6700;
  puVar12 = (ulong *)(plStack_110 + 1);
  do {
    uVar9 = *puVar12;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar12,0x10);
    if (bVar4) {
      *puVar12 = uVar9 - 4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((uVar9 & 0x1fffffffc) != 4) goto LAB_10a8d6700;
  do {
    uVar9 = *puVar12 - 1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar12,0x10);
    if (bVar4) {
      *puVar12 = uVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
    plVar10 = plStack_110;
  } while (cVar3 != '\0');
  do {
    if (uVar9 == 0) {
      (**(code **)(*plVar10 + 8))();
    }
LAB_10a8d6700:
    do {
      do {
        (*(code *)*ppuStack_a8)(&ppuStack_a8);
        pppuVar6 = &ppuStack_e8;
        (*(code *)*ppuStack_e8)(&ppuStack_e8);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
          return;
        }
        ___stack_chk_fail();
        __ZNSt3__15mutex6unlockEv(unaff_x25 + 5);
        FUN_10a8d6e38(&plStack_108);
        if (plStack_110 != (long *)0x0) {
          puVar12 = (ulong *)(plStack_110 + 1);
          do {
            uVar9 = *puVar12;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar12,0x10);
            if (bVar4) {
              *puVar12 = uVar9 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar9 & 0x1fffffffc) == 4) {
            do {
              uVar9 = *puVar12;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar12,0x10);
              if (bVar4) {
                *puVar12 = uVar9 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar9 - 1 == 0) {
              (**(code **)(*plStack_110 + 8))();
            }
          }
        }
        (*(code *)*ppuStack_a8)(&ppuStack_a8);
        (*(code *)*ppuStack_e8)(&ppuStack_e8);
        do {
          __Unwind_Resume(pppuVar6);
        } while ((int)param_2 == 0);
        ___cxa_begin_catch(pppuVar6);
        __ZSt17current_exceptionv(&pcStack_138);
        func_0x000109d1b350(lStack_100,&pcStack_138);
        __ZNSt13exception_ptrD1Ev(&pcStack_138);
        ___cxa_end_catch();
LAB_10a8d6250:
        param_2 = lStack_100;
        if (lStack_100 != 0) {
          func_0x0001092b4274(param_3 + 1);
        }
      } while (plStack_108 == (long *)0x0);
      puVar12 = (ulong *)(plStack_108 + 1);
      do {
        uVar9 = *puVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar12,0x10);
        if (bVar4) {
          *puVar12 = uVar9 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    } while ((uVar9 & 0x1fffffffc) != 4);
    do {
      uVar9 = *puVar12 - 1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar12,0x10);
      if (bVar4) {
        *puVar12 = uVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
      plVar10 = plStack_108;
    } while (cVar3 != '\0');
  } while( true );
LAB_10a8d63c8:
  do {
    lVar8 = *plVar10;
    if (lVar8 == 0) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        uVar9 = lVar7 + 0x18;
        pcStack_138 = FUN_10a8d6d58;
        ppuStack_128 = &PTR_PTR_1132fed68;
        puStack_130 = puVar12;
        func_0x000109d1b588(uVar9,&pcStack_138);
        *(undefined8 *)(lVar7 + 0x10) = 0;
        puStack_f8[4] = uVar9;
        plVar10 = plStack_108;
        goto LAB_10a8d6600;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  } while (((uint)lVar8 >> 1 & 1) == 0);
  puStack_f8[4] = 0;
  lVar7 = plVar5[0x1b];
  FUN_109d1857c();
  func_0x000109d1b350(lVar7,uVar11);
  plVar10 = (long *)plVar5[0x1a];
  plVar5[0x1a] = 0;
  if (plVar10 != (long *)0x0) {
    puVar1 = (ulong *)(plVar10 + 1);
    do {
      uVar9 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar9 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar9 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      do {
        uVar9 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar9 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar9 - 1 == 0) {
        (**(code **)(*plVar10 + 8))(plVar10);
      }
    }
  }
  uVar11 = *puVar12;
  plVar2 = (long *)(uVar11 + 0x10);
  uVar9 = puStack_f8[3];
  while (lVar7 = *plVar2, lVar7 != 0) {
    ClearExclusiveLocal();
LAB_10a8d64b4:
    plVar10 = plStack_108;
    if (((uint)lVar7 >> 1 & 1) != 0) goto LAB_10a8d6600;
  }
  cVar3 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar4) {
    *plVar2 = 1;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 != '\0') goto LAB_10a8d64b4;
  pcStack_138 = FUN_10a8d6c4c;
  ppuStack_128 = &PTR_PTR_1132fed68;
  puStack_130 = puVar12;
  FUN_109d1b624(uVar11 + 0x18,&pcStack_138,uVar9);
  *(undefined8 *)(uVar11 + 0x10) = 0;
  puStack_f8[3] = 0;
  plVar10 = (long *)*puVar12;
  *puVar12 = 0;
  if (plVar10 != (long *)0x0) {
    puVar1 = (ulong *)(plVar10 + 1);
    do {
      uVar9 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar9 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar9 & 0x1fffffffc) == 4) {
      do {
        uVar9 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar9 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar9 - 1 == 0) {
        (**(code **)(*plVar10 + 8))();
      }
    }
  }
  lVar7 = plVar5[0x1b];
  plVar5[0x1b] = 0;
  plVar10 = plStack_108;
  if (lVar7 != 0) {
    func_0x0001092b4274(plVar5 + 0x1b);
    plVar10 = plStack_108;
  }
LAB_10a8d6600:
  plStack_108 = (long *)0x0;
  goto LAB_10a8d6604;
}



/* Entry: 10a8d6848; end: 10a8d6903;  */

undefined ** FUN_10a8d6848(undefined **param_1)

{
  long lVar1;
  undefined4 uVar2;
  char cVar3;
  undefined2 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  code *pcVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined1 uVar17;
  long lVar18;
  long *plVar19;
  undefined *puVar20;
  undefined8 uStack_58;
  
  puVar20 = PTR___tlv_bootstrap_11340d750;
  ppuVar12 = &PTR___tlv_bootstrap_11340d750;
  ppuVar10 = ppuVar12;
  (*(code *)PTR___tlv_bootstrap_11340d750)();
  ppuVar11 = &PTR___tlv_bootstrap_11340d738;
  if (((ulong)*ppuVar10 & 1) == 0) {
    ppuVar10 = ppuVar11;
    (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
    __tlv_atexit(0x10a132a8c,ppuVar10,0x100000000);
    (*(code *)puVar20)();
    *(undefined1 *)ppuVar12 = 1;
  }
  (*(code *)PTR___tlv_bootstrap_11340d738)();
  puVar15 = (undefined8 *)ppuVar11[2];
  if (puVar15 == (undefined8 *)0x0) {
    *(char *)param_1 = '\0';
    param_1[2] = (undefined *)0x0;
    *(char *)(param_1 + 3) = '\0';
    return ppuVar11;
  }
  cVar3 = *(char *)(puVar15[1] + 0x17);
  *(char *)param_1 = cVar3;
  ((char *)((long)param_1 + 2))[0] = '\a';
  ((char *)((long)param_1 + 2))[1] = '\0';
  ppuVar12 = &PTR___tlv_bootstrap_11340dd08;
  (*(code *)PTR___tlv_bootstrap_11340dd08)();
  iVar16 = *(int *)ppuVar12;
  if (*(int *)ppuVar12 == 0) {
    uStack_58 = 0;
    _pthread_threadid_np(0,&uStack_58);
    *(int *)ppuVar12 = (int)uStack_58;
    iVar16 = (int)uStack_58;
  }
  *(int *)((long)param_1 + 4) = iVar16;
  param_1[2] = (undefined *)0x0;
  *(char *)(param_1 + 3) = '\0';
  if ((cVar3 != '\0') && (puVar15 != (undefined8 *)0x0)) {
    lVar18 = puVar15[1];
    bVar8 = *(byte *)(lVar18 + 0x42) | *(byte *)(lVar18 + 0x43);
    if (((bVar8 & 1) != 0) || (*(char *)(lVar18 + 0x40) == '\x01')) {
      uVar7 = cntfrq_el0;
      InstructionSynchronizationBarrier();
      puVar20 = (undefined *)cntvct_el0;
      if (uVar7 != 1000000000) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = (ulong)puVar20 / uVar7;
        }
        uVar6 = 0;
        if (uVar7 != 0) {
          uVar6 = (((long)puVar20 - uVar5 * uVar7) * 1000000000) / uVar7;
        }
        puVar20 = (undefined *)(uVar6 + uVar5 * 1000000000);
      }
      param_1[1] = puVar20;
      lVar18 = lRam00000001137ebdf0;
      if ((bVar8 & 1) != 0) {
        uVar2 = *(undefined4 *)((long)param_1 + 4);
        uVar4 = *(undefined2 *)((long)param_1 + 2);
        puVar13 = puVar15;
        FUN_10a1333cc();
        if (puVar13 != (undefined8 *)0x0) {
          uVar17 = 3;
          if (lRam00000001137ebdf0 != lVar18) {
            uVar17 = 5;
          }
          lVar1 = 0;
          if (lRam00000001137ebdf0 != lVar18) {
            lVar1 = lVar18;
          }
          *puVar13 = &UNK_10f68127c;
          puVar13[1] = lVar1;
          puVar13[2] = puVar20;
          *(undefined4 *)(puVar13 + 3) = uVar2;
          *(undefined2 *)((long)puVar13 + 0x1c) = uVar4;
          *(undefined1 *)((long)puVar13 + 0x1e) = uVar17;
          if ((*(byte *)(puVar15 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x10a8d6aa4);
            (*pcVar9)();
          }
          puVar15[0x18] = puVar15[0x18] + 1;
        }
      }
    }
    if (*(char *)(puVar15[1] + 0x41) == '\x01') {
      plVar19 = (long *)puVar15[0xb];
      if (plVar19 != (long *)0x0) {
        plVar14 = plVar19;
        (**(code **)(*plVar19 + 0x10))(plVar19,&UNK_10f68127c);
        param_1[2] = (undefined *)plVar14;
      }
      *(bool *)(param_1 + 3) = plVar19 != (long *)0x0;
    }
  }
  return param_1;
}



/* Entry: 10a8d6904; end: 10a8d6aa3;  */

undefined1 * FUN_10a8d6904(undefined1 *param_1,int param_2,undefined8 *param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  code *pcVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  long *plVar11;
  int iVar12;
  undefined1 uVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 uStack_58;
  
  *param_1 = (char)param_2;
  *(undefined2 *)(param_1 + 2) = 7;
  ppuVar9 = &PTR___tlv_bootstrap_11340dd08;
  (*(code *)PTR___tlv_bootstrap_11340dd08)();
  iVar12 = *(int *)ppuVar9;
  if (*(int *)ppuVar9 == 0) {
    uStack_58 = 0;
    _pthread_threadid_np(0,&uStack_58);
    *(int *)ppuVar9 = (int)uStack_58;
    iVar12 = (int)uStack_58;
  }
  *(int *)(param_1 + 4) = iVar12;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x18] = 0;
  if ((param_2 != 0) && (param_3 != (undefined8 *)0x0)) {
    lVar14 = param_3[1];
    bVar7 = *(byte *)(lVar14 + 0x42) | *(byte *)(lVar14 + 0x43);
    if (((bVar7 & 1) != 0) || (*(char *)(lVar14 + 0x40) == '\x01')) {
      uVar6 = cntfrq_el0;
      InstructionSynchronizationBarrier();
      uVar16 = cntvct_el0;
      if (uVar6 != 1000000000) {
        uVar4 = 0;
        if (uVar6 != 0) {
          uVar4 = uVar16 / uVar6;
        }
        uVar5 = 0;
        if (uVar6 != 0) {
          uVar5 = ((uVar16 - uVar4 * uVar6) * 1000000000) / uVar6;
        }
        uVar16 = uVar5 + uVar4 * 1000000000;
      }
      *(ulong *)(param_1 + 8) = uVar16;
      lVar14 = lRam00000001137ebdf0;
      if ((bVar7 & 1) != 0) {
        uVar2 = *(undefined4 *)(param_1 + 4);
        uVar3 = *(undefined2 *)(param_1 + 2);
        puVar10 = param_3;
        FUN_10a1333cc();
        if (puVar10 != (undefined8 *)0x0) {
          uVar13 = 3;
          if (lRam00000001137ebdf0 != lVar14) {
            uVar13 = 5;
          }
          lVar1 = 0;
          if (lRam00000001137ebdf0 != lVar14) {
            lVar1 = lVar14;
          }
          *puVar10 = &UNK_10f68127c;
          puVar10[1] = lVar1;
          puVar10[2] = uVar16;
          *(undefined4 *)(puVar10 + 3) = uVar2;
          *(undefined2 *)((long)puVar10 + 0x1c) = uVar3;
          *(undefined1 *)((long)puVar10 + 0x1e) = uVar13;
          if ((*(byte *)(param_3 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10a8d6aa4);
            (*pcVar8)();
          }
          param_3[0x18] = param_3[0x18] + 1;
        }
      }
    }
    if (*(char *)(param_3[1] + 0x41) == '\x01') {
      plVar15 = (long *)param_3[0xb];
      if (plVar15 != (long *)0x0) {
        plVar11 = plVar15;
        (**(code **)(*plVar15 + 0x10))(plVar15,&UNK_10f68127c);
        *(long **)(param_1 + 0x10) = plVar11;
      }
      param_1[0x18] = plVar15 != (long *)0x0;
    }
  }
  return param_1;
}



/* Entry: 10a8d6aa4; end: 10a8d6bc3;  */

long * FUN_10a8d6aa4(long *param_1,long *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
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
  *param_1 = *param_2;
  *param_2 = 0;
  return param_1;
}



/* Entry: 10a8d6bc4; end: 10a8d6be7;  */

long FUN_10a8d6bc4(long param_1)

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



/* Entry: 10a8d6be8; end: 10a8d6c27;  */

void FUN_10a8d6be8(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)((undefined8 *)**(undefined8 **)(param_1 + 0x10))[1];
  for (puVar2 = *(undefined8 **)**(undefined8 **)(param_1 + 0x10); puVar2 != puVar1;
      puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x20))();
  }
  return;
}



/* Entry: 10a8d6c28; end: 10a8d6c4b;  */

long FUN_10a8d6c28(long param_1)

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



/* Entry: 10a8d6c4c; end: 10a8d6d57;  */

void FUN_10a8d6c4c(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  code *pcStack_48;
  long *plStack_40;
  undefined **ppuStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 5);
  pcStack_48 = FUN_10a8d6d58;
  ppuStack_38 = &PTR_PTR_1132fed68;
  plStack_40 = param_1;
  func_0x0001092ba560(param_1 + 1,param_1 + 4,&pcStack_48);
  lVar6 = param_1[2];
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    func_0x00010a8d7168(&pcStack_48,param_1);
    FUN_109d23ecc(lVar6,&pcStack_48);
    func_0x000109379fe8(&pcStack_48);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&pcStack_48,*param_1 + 0x90);
    func_0x000109d1b350(lVar6,&pcStack_48);
    __ZNSt13exception_ptrD1Ev(&pcStack_48);
    plVar4 = (long *)*param_1;
    *param_1 = 0;
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
  func_0x00010a8d70f8(param_1,param_1 + 3);
  return;
}



/* Entry: 10a8d6d58; end: 10a8d6e37;  */

void FUN_10a8d6d58(long param_1)

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
  pcStack_48 = FUN_10a8d6c4c;
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
  FUN_10a8d70f8(param_1,param_1 + 0x20);
  return;
}



/* Entry: 10a8d6e38; end: 10a8d6eab;  */

long * FUN_10a8d6e38(long *param_1)

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



/* Entry: 10a8d6eac; end: 10a8d70f7;  */

undefined8 * FUN_10a8d6eac(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_110c2ae00;
  __ZNSt3__15mutexD1Ev(param_1 + 0x1e);
  if (param_1[0x1b] != 0) {
    func_0x0001092b4274();
  }
  plVar5 = (long *)param_1[0x1a];
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
  plVar5 = (long *)param_1[0x19];
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
  *param_1 = &PTR_DAT_110b3f740;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000109379fe8(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a8d70f8; end: 10a8d7213;  */

void FUN_10a8d70f8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lStack_28;
  
  *param_2 = 0;
  if ((*(long *)(param_1 + 0x18) == 0) && (*(long *)(param_1 + 0x20) == 0)) {
    lVar1 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    __ZNSt3__15mutex6unlockEv(param_1 + 0x28);
    lStack_28 = 0;
    if (lVar1 != 0) {
      func_0x0001092b4274(&lStack_28,lVar1);
      if (lStack_28 != 0) {
        func_0x0001092b4274(&lStack_28);
      }
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x28);
  return;
}



/* Entry: 10a8d7214; end: 10a8d7413;  */

char * FUN_10a8d7214(char *param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long *plVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined1 uVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  
  puVar7 = PTR___tlv_bootstrap_11340d750;
  if (*param_1 == '\x01') {
    ppuVar12 = &PTR___tlv_bootstrap_11340d750;
    ppuVar9 = ppuVar12;
    (*(code *)PTR___tlv_bootstrap_11340d750)();
    ppuVar10 = &PTR___tlv_bootstrap_11340d738;
    if (((ulong)*ppuVar9 & 1) == 0) {
      ppuVar9 = ppuVar10;
      (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
      __tlv_atexit(0x10a132a8c,ppuVar9,0x100000000);
      (*(code *)puVar7)();
      *(undefined1 *)ppuVar12 = 1;
    }
    (*(code *)PTR___tlv_bootstrap_11340d738)();
    plVar15 = (long *)ppuVar10[2];
    if (plVar15 != (long *)0x0) {
      lVar13 = plVar15[1];
      bVar6 = *(byte *)(lVar13 + 0x42) | *(byte *)(lVar13 + 0x43);
      if ((((bVar6 & 1) != 0) || ((*(byte *)(lVar13 + 0x3f) & 1) != 0)) ||
         (*(char *)(lVar13 + 0x40) == '\x01')) {
        uVar17 = cntfrq_el0;
        InstructionSynchronizationBarrier();
        uVar16 = cntvct_el0;
        if (uVar17 != 1000000000) {
          uVar4 = 0;
          if (uVar17 != 0) {
            uVar4 = uVar16 / uVar17;
          }
          uVar5 = 0;
          if (uVar17 != 0) {
            uVar5 = ((uVar16 - uVar4 * uVar17) * 1000000000) / uVar17;
          }
          uVar16 = uVar5 + uVar4 * 1000000000;
        }
        if (*(char *)(plVar15[1] + 0x40) == '\x01') {
          uVar17 = *(ulong *)(param_1 + 8);
          if (uVar17 <= uVar16) {
            lVar13 = *plVar15;
            __ZNSt3__15mutex4lockEv(lVar13 + 0x980);
            FUN_10a15387c((double)(uVar16 - uVar17),lVar13,lVar13 + 0x980,uVar17,uVar16);
            __ZNSt3__15mutex6unlockEv(lVar13 + 0x980);
          }
        }
        lVar13 = lRam00000001137ebdf0;
        if ((bVar6 & 1) != 0) {
          uVar2 = *(undefined4 *)(param_1 + 4);
          uVar3 = *(undefined2 *)(param_1 + 2);
          plVar11 = plVar15;
          FUN_10a1333cc();
          if (plVar11 != (long *)0x0) {
            uVar14 = 6;
            if (lRam00000001137ebdf0 != lVar13) {
              uVar14 = 8;
            }
            lVar1 = 0;
            if (lRam00000001137ebdf0 != lVar13) {
              lVar1 = lVar13;
            }
            *plVar11 = (long)&UNK_10f68127c;
            plVar11[1] = lVar1;
            plVar11[2] = uVar16;
            *(undefined4 *)(plVar11 + 3) = uVar2;
            *(undefined2 *)((long)plVar11 + 0x1c) = uVar3;
            *(undefined1 *)((long)plVar11 + 0x1e) = uVar14;
            if ((*(byte *)(plVar15 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10a8d740c);
              (*pcVar8)();
            }
            plVar15[0x18] = plVar15[0x18] + 1;
          }
        }
      }
      if (((*(char *)(plVar15[1] + 0x41) == '\x01') && (param_1[0x18] == '\x01')) &&
         (plVar15 = (long *)plVar15[0xb], plVar15 != (long *)0x0)) {
        (**(code **)(*plVar15 + 0x18))(plVar15,*(undefined8 *)(param_1 + 0x10));
      }
    }
  }
  return param_1;
}



/* Entry: 10a8d7414; end: 10a8d82c3;  */

void FUN_10a8d7414(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined1 uVar6;
  ulong *puVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  undefined1 *puVar14;
  undefined4 *puVar15;
  int iVar16;
  ulong uVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  int iVar23;
  ulong uVar24;
  undefined8 *puVar25;
  ulong uVar26;
  int *piVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  ulong uVar30;
  ulong uVar31;
  long *plVar32;
  uint *puVar33;
  ulong uVar34;
  long *plVar35;
  ulong uVar36;
  undefined **ppuStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long *plStack_228;
  long alStack_220 [2];
  undefined1 uStack_210;
  undefined7 uStack_20f;
  int *piStack_208;
  byte bStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  undefined1 *puStack_1d0;
  long *plStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  ulong uStack_1b0;
  ulong *puStack_1a8;
  ulong auStack_1a0 [2];
  undefined8 uStack_190;
  undefined8 uStack_188;
  long *plStack_180;
  long *plStack_178;
  undefined1 *puStack_170;
  long *plStack_168;
  undefined8 uStack_160;
  long lStack_158;
  ulong uStack_150;
  ulong *puStack_148;
  ulong auStack_140 [2];
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  undefined4 *puStack_120;
  ulong auStack_118 [2];
  long *plStack_108;
  undefined4 uStack_f4;
  uint auStack_f0 [4];
  undefined8 uStack_e0;
  ulong uStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined1 *puStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  ulong *puStack_98;
  ulong uStack_90;
  ulong uStack_88;
  
  uStack_238 = 0;
  uStack_230 = (long *)0x0;
  ppuStack_240 = &PTR_DAT_1108a5c28;
  plStack_228 = (long *)((long)&MACH_HEADER.magic + 1);
  bStack_1f8 = 0;
  alStack_220[0] = 0;
  alStack_220[1] = 0;
  uStack_210 = 0;
  plVar35 = *(long **)(param_1 + 0x50);
  plVar1 = (long *)(param_1 + 0x58);
  if (plVar35 != plVar1) {
    do {
      uStack_e0 = (undefined *)(plVar35[7] + 0x30);
      lVar20 = param_1 + 0x118;
      func_0x00010937a098(lVar20,uStack_e0,&UNK_10dd5b8f9,&uStack_e0,&uStack_190);
      uStack_190 = (undefined *)CONCAT44(*(undefined4 *)(plVar35[7] + 0x70),1);
      FUN_109d0e828(&uStack_e0,lVar20 + 0x28,&uStack_190,0);
      uStack_230 = plStack_d0;
      uStack_238 = uStack_d8;
      plStack_228 = plStack_c8;
      FUN_10a8d8414(alStack_220,&puStack_c0);
      func_0x00010a8d8490(&uStack_210,&uStack_b0);
      func_0x000105675c90(&uStack_e0);
      if (alStack_220[0] != 0) {
        lVar20 = plVar35[7];
        if ((((int)uStack_238 == *(int *)(lVar20 + 0x48)) &&
            (uStack_238._4_4_ == *(int *)(lVar20 + 0x4c))) &&
           ((int)uStack_230 == *(int *)(lVar20 + 0x50))) {
          uStack_e0 = &UNK_10f6814b7;
          uStack_d8 = 0x43;
          if (uStack_230._4_4_ == *(int *)(lVar20 + 0x54)) goto LAB_10a8d7568;
        }
        uStack_d8 = 0x43;
        uStack_e0 = &UNK_10f6814b7;
        FUN_10a0edfc4();
        goto LAB_10a8d81f8;
      }
      lVar20 = plVar35[7];
LAB_10a8d7568:
      if ((bStack_1f8 & 1) == 0) {
        iVar23 = (int)uStack_230 * uStack_230._4_4_ * uStack_238._4_4_ * (int)uStack_238;
      }
      else {
        iVar23 = 1;
        for (piVar27 = (int *)CONCAT71(uStack_20f,uStack_210); piVar27 != piStack_208;
            piVar27 = piVar27 + 1) {
          iVar23 = *piVar27 * iVar23;
        }
      }
      if (0xe < (uint)plStack_228) {
        func_0x00010952d0c4(&UNK_10dfd21d7,&UNK_10f57311a,&UNK_10f573129);
        goto LAB_10a8d81f8;
      }
      if (alStack_220[0] == 0) {
        uVar24 = (ulong)(uint)(*(int *)(lVar20 + 0x50) * *(int *)(lVar20 + 0x54) *
                               *(int *)(lVar20 + 0x4c) * *(int *)(lVar20 + 0x48));
LAB_10a8d75f8:
        _bzero(*(undefined8 *)(lVar20 + 0x88),uVar24 << 2);
      }
      else {
        uVar10 = *(int *)(lVar20 + 0x50) * *(int *)(lVar20 + 0x54) * *(int *)(lVar20 + 0x4c) *
                 *(int *)(lVar20 + 0x48);
        uVar24 = (ulong)uVar10;
        if ((uint)(*(int *)(&UNK_10e4e33c0 + ((ulong)plStack_228 & 0xffffffff) * 4) * iVar23) >> 2 <
            uVar10) goto LAB_10a8d75f8;
        _memcpy(*(undefined8 *)(lVar20 + 0x88),alStack_220[0],uVar24 << 2);
      }
      plVar32 = (long *)plVar35[1];
      plVar12 = plVar35;
      if ((long *)plVar35[1] == (long *)0x0) {
        do {
          plVar35 = (long *)plVar12[2];
          bVar9 = (long *)*plVar35 != plVar12;
          plVar12 = plVar35;
        } while (bVar9);
      }
      else {
        do {
          plVar35 = plVar32;
          plVar32 = (long *)*plVar35;
        } while ((long *)*plVar35 != (long *)0x0);
      }
    } while (plVar35 != plVar1);
    plVar35 = *(long **)(param_1 + 0x50);
  }
  if (plVar35 != plVar1) {
    puVar28 = (undefined8 *)((ulong)&uStack_190 | 4);
    uVar31 = (ulong)&uStack_190 | 8;
    puVar25 = (undefined8 *)((ulong)&uStack_1f0 | 4);
    uVar26 = (ulong)&uStack_1f0 | 8;
    puVar29 = (undefined8 *)((ulong)&uStack_e0 | 4);
    uVar24 = (ulong)&uStack_e0 | 8;
    do {
      lVar20 = plVar35[7];
      plVar32 = *(long **)(lVar20 + 0x128);
      if (plVar32 != (long *)0x0) {
        if (((*(long *)(lVar20 + 0x138) == 0) ||
            (lVar11 = *(long *)(*(long *)(lVar20 + 0x138) + 0x268), lVar11 == 0)) ||
           (___dynamic_cast(lVar11,&PTR_DAT_110bb3788,&PTR_DAT_110bb2d18,0), lVar11 == 0)) {
          FUN_10a00946c(&UNK_10f680774);
          goto LAB_10a8d81f8;
        }
        (**(code **)(*plVar32 + 0x28))();
        uVar10 = (uint)plVar32;
        if (uVar10 < 2) {
          uVar10 = 1;
        }
        plVar32 = *(long **)(lVar20 + 0x128);
        (**(code **)(*plVar32 + 0x30))();
        plVar12 = *(long **)(lVar20 + 0x128);
        (**(code **)(*plVar12 + 0xb8))();
        uStack_128 = (uint)plVar32;
        if (uStack_128 < 2) {
          uStack_128 = 1;
        }
        uStack_124 = 1;
        lVar21 = plVar12[8];
        uStack_190 = (undefined *)CONCAT44(uStack_190._4_4_,0x42ff0000);
        puVar28[1] = 0;
        *puVar28 = 0;
        puVar28[3] = 0;
        puVar28[2] = 0;
        puVar28[5] = 0;
        puVar28[4] = 0;
        *(undefined8 *)((long)puVar28 + 0x34) = 0;
        *(undefined8 *)((long)puVar28 + 0x2c) = 0;
        auStack_140[0] = 0;
        auStack_140[1] = 0;
        uStack_1f0 = (undefined *)CONCAT44(uStack_1f0._4_4_,0x42ff0000);
        puVar25[1] = 0;
        *puVar25 = 0;
        puVar25[3] = 0;
        puVar25[2] = 0;
        puVar25[5] = 0;
        puVar25[4] = 0;
        *(undefined8 *)((long)puVar25 + 0x34) = 0;
        *(undefined8 *)((long)puVar25 + 0x2c) = 0;
        auStack_1a0[0] = 0;
        auStack_1a0[1] = 0;
        plVar32 = *(long **)(lVar20 + 0x128);
        uStack_1b0 = uVar26;
        puStack_1a8 = auStack_1a0;
        uStack_150 = uVar31;
        puStack_148 = auStack_140;
        uStack_12c = uVar10;
        (**(code **)(*plVar32 + 0x80))(plVar32,&uStack_12c,(int)lVar21);
        uVar13 = (ulong)uStack_12c;
        FUN_109fc8e58(uVar13,uStack_128,(int)lVar21);
        puVar33 = (uint *)(lVar20 + 0x78);
        iVar23 = (*puVar33 >> 3 & 0x1ff) + 1;
        if (iVar23 == *(int *)(lVar20 + 0x14c)) {
          func_0x00010936ff7c(&uStack_e0,*(undefined4 *)(lVar20 + 0x80),*(int *)(lVar20 + 0x84),
                              iVar23 * 8 + -8,plVar32,(long)(*(int *)(lVar20 + 0x84) * iVar23));
          if (lStack_158 != 0) {
            piVar27 = (int *)(lStack_158 + 0x14);
            do {
              iVar23 = *piVar27;
              cVar5 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar27,0x10);
              if (bVar9) {
                *piVar27 = iVar23 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar23 + -1 == 0) {
              func_0x000109a848d4(&uStack_190);
            }
          }
          if (0 < uStack_190._4_4_) {
            lVar21 = 0;
            do {
              *(undefined4 *)(uStack_150 + lVar21 * 4) = 0;
              lVar21 = lVar21 + 1;
            } while (lVar21 < uStack_190._4_4_);
          }
          uStack_188 = uStack_d8;
          uStack_190 = uStack_e0;
          plStack_178 = plStack_c8;
          plStack_180 = plStack_d0;
          plStack_168 = plStack_b8;
          puStack_170 = puStack_c0;
          lStack_158 = lStack_a8;
          uStack_160 = uStack_b0;
          uVar13 = uStack_150;
          puVar7 = puStack_148;
          if ((puStack_148 != auStack_140) &&
             (uVar13 = uVar31, puVar7 = auStack_140, puStack_148 != (ulong *)0x0)) {
            _free(puStack_148[-1]);
          }
          puStack_148 = puVar7;
          uStack_150 = uVar13;
          if (uStack_e0._4_4_ < 3) {
            *puStack_148 = *puStack_98;
            puStack_148[1] = puStack_98[1];
            uStack_e0 = (undefined *)CONCAT44(uStack_e0._4_4_,0x42ff0000);
            puVar29[1] = 0;
            *puVar29 = 0;
            puVar29[3] = 0;
            puVar29[2] = 0;
            puVar29[5] = 0;
            puVar29[4] = 0;
            *(undefined8 *)((long)puVar29 + 0x34) = 0;
            *(undefined8 *)((long)puVar29 + 0x2c) = 0;
            if (puStack_98 != &uStack_90) {
              _free(puStack_98[-1]);
            }
          }
          else {
            uStack_150 = uStack_a0;
            puStack_148 = puStack_98;
          }
          FUN_10a8c9554(puVar33,&uStack_190);
        }
        else {
          uVar34 = (ulong)uStack_124;
          lVar21 = *(long *)(lVar20 + 0xf8);
          iVar16 = *(int *)(lVar20 + 0x80);
          iVar18 = *(int *)(lVar20 + 0x84);
          uVar30 = (ulong)(iVar16 * iVar23 * iVar18);
          uVar22 = *(long *)(lVar20 + 0x100) - lVar21;
          if (uVar30 < uVar22 || uVar30 - uVar22 == 0) {
            if (uVar30 < uVar22) {
              *(ulong *)(lVar20 + 0x100) = lVar21 + uVar30;
            }
          }
          else {
            func_0x000107c27d58((long *)(lVar20 + 0xf8),uVar30 - uVar22);
            iVar16 = *(int *)(lVar20 + 0x80);
            iVar18 = *(int *)(lVar20 + 0x84);
            lVar21 = *(long *)(lVar20 + 0xf8);
            iVar23 = (*(uint *)(lVar20 + 0x78) >> 3 & 0x1ff) + 1;
          }
          func_0x00010936ff7c(&uStack_e0,iVar16,iVar18,iVar23 * 8 + -8,lVar21,
                              (long)(iVar18 * iVar23));
          if (lStack_158 != 0) {
            piVar27 = (int *)(lStack_158 + 0x14);
            do {
              iVar23 = *piVar27;
              cVar5 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar27,0x10);
              if (bVar9) {
                *piVar27 = iVar23 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar23 + -1 == 0) {
              func_0x000109a848d4(&uStack_190);
            }
          }
          if (0 < uStack_190._4_4_) {
            lVar21 = 0;
            do {
              *(undefined4 *)(uStack_150 + lVar21 * 4) = 0;
              lVar21 = lVar21 + 1;
            } while (lVar21 < uStack_190._4_4_);
          }
          uStack_188 = uStack_d8;
          uStack_190 = uStack_e0;
          plStack_178 = plStack_c8;
          plStack_180 = plStack_d0;
          plStack_168 = plStack_b8;
          puStack_170 = puStack_c0;
          lStack_158 = lStack_a8;
          uStack_160 = uStack_b0;
          uVar22 = uStack_150;
          puVar7 = puStack_148;
          if ((puStack_148 != auStack_140) &&
             (uVar22 = uVar31, puVar7 = auStack_140, puStack_148 != (ulong *)0x0)) {
            _free(puStack_148[-1]);
          }
          puStack_148 = puVar7;
          uStack_150 = uVar22;
          if (uStack_e0._4_4_ < 3) {
            *puStack_148 = *puStack_98;
            puStack_148[1] = puStack_98[1];
            uStack_e0 = (undefined *)CONCAT44(uStack_e0._4_4_,0x42ff0000);
            puVar29[1] = 0;
            *puVar29 = 0;
            puVar29[3] = 0;
            puVar29[2] = 0;
            puVar29[5] = 0;
            puVar29[4] = 0;
            *(undefined8 *)((long)puVar29 + 0x34) = 0;
            *(undefined8 *)((long)puVar29 + 0x2c) = 0;
            if (puStack_98 != &uStack_90) {
              _free(puStack_98[-1]);
            }
          }
          else {
            uStack_150 = uStack_a0;
            puStack_148 = puStack_98;
          }
          FUN_10a8c9554(puVar33,&uStack_190);
          uVar10 = *puVar33;
          uVar22 = -(ulong)(uStack_188._4_4_ >> 0x1f) & 0xfffffffc00000000 |
                   (ulong)uStack_188._4_4_ << 2;
          uStack_e0 = &UNK_10f681902;
          uStack_d8 = 0x1c;
          if (uVar13 * uVar34 < uVar22 * (long)(int)uStack_188) {
            FUN_10a0edfc4(&uStack_e0);
LAB_10a8d81f8:
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10a8d81fc);
            (*pcVar8)();
          }
          uStack_e0 = (undefined *)0x242ff0018;
          lVar21 = (long)(int)uStack_188._4_4_;
          uStack_d8 = uStack_188;
          plStack_d0 = plVar32;
          plStack_c8 = plVar32;
          plStack_b8 = (long *)0x0;
          puStack_c0 = (undefined1 *)0x0;
          lStack_a8 = 0;
          uStack_b0 = 0;
          uStack_a0 = uVar24;
          puStack_98 = &uStack_90;
          uStack_90 = 0;
          uStack_88 = 0;
          if ((plVar32 == (long *)0x0) && ((long)(int)uStack_188 * (long)(int)uStack_188._4_4_ != 0)
             ) {
            puVar15 = (undefined4 *)0x24;
            func_0x000107c2ae8c();
            *puVar15 = 1;
            puStack_120 = puVar15 + 1;
            auStack_118[0] = 0x1c;
            *(undefined1 *)(puVar15 + 8) = 0;
            *(undefined8 *)(puVar15 + 3) = 0x207c7c2030203d3d;
            *(undefined8 *)(puVar15 + 1) = 0x2029286c61746f74;
            *(undefined8 *)(puVar15 + 6) = 0x4c4c554e203d2120;
            *(undefined8 *)(puVar15 + 4) = 0x61746164207c7c20;
            func_0x000109ac3188(0xffffff29,&puStack_120,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
            goto LAB_10a8d81f8;
          }
          uVar13 = lVar21 << 2;
          if ((int)uStack_188 != 1) {
            uVar13 = uVar22;
          }
          uStack_90 = 0;
          if (uStack_188._4_4_ != 0) {
            uStack_90 = uVar13;
          }
          uVar3 = 0x42ff4018;
          if (uVar13 != lVar21 * 4 && uStack_188._4_4_ != 0) {
            uVar3 = 0x42ff0018;
          }
          uStack_e0 = (undefined *)CONCAT44(2,uVar3);
          uStack_88 = 4;
          plStack_b8 = (long *)((long)plVar32 + uStack_90 * (long)(int)uStack_188);
          puStack_c0 = (undefined1 *)((long)plStack_b8 + (lVar21 * 4 - uStack_90));
          if (lStack_1b8 != 0) {
            piVar27 = (int *)(lStack_1b8 + 0x14);
            do {
              iVar23 = *piVar27;
              cVar5 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar27,0x10);
              if (bVar9) {
                *piVar27 = iVar23 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar23 + -1 == 0) {
              func_0x000109a848d4(&uStack_1f0);
            }
          }
          if (0 < uStack_1f0._4_4_) {
            lVar21 = 0;
            do {
              *(undefined4 *)(uStack_1b0 + lVar21 * 4) = 0;
              lVar21 = lVar21 + 1;
            } while (lVar21 < uStack_1f0._4_4_);
          }
          uStack_1e8 = uStack_d8;
          uStack_1f0 = uStack_e0;
          plStack_1d8 = plStack_c8;
          plStack_1e0 = plStack_d0;
          plStack_1c8 = plStack_b8;
          puStack_1d0 = puStack_c0;
          lStack_1b8 = lStack_a8;
          uStack_1c0 = uStack_b0;
          iVar23 = uStack_e0._4_4_;
          if (puStack_1a8 != auStack_1a0) {
            if (puStack_1a8 != (ulong *)0x0) {
              _free(puStack_1a8[-1]);
              iVar23 = uStack_e0._4_4_;
            }
            puStack_1a8 = auStack_1a0;
            uStack_1b0 = uVar26;
          }
          if (iVar23 < 3) {
            *puStack_1a8 = *puStack_98;
            puStack_1a8[1] = puStack_98[1];
            uStack_e0 = (undefined *)CONCAT44(uStack_e0._4_4_,0x42ff0000);
            puVar29[1] = 0;
            *puVar29 = 0;
            puVar29[3] = 0;
            puVar29[2] = 0;
            puVar29[5] = 0;
            puVar29[4] = 0;
            *(undefined8 *)((long)puVar29 + 0x34) = 0;
            *(undefined8 *)((long)puVar29 + 0x2c) = 0;
            if (puStack_98 != &uStack_90) {
              _free(puStack_98[-1]);
            }
          }
          else {
            uStack_1b0 = uStack_a0;
            puStack_1a8 = puStack_98;
          }
          uVar10 = uVar10 >> 3 & 0x1ff;
          uVar13 = *puStack_1a8;
          iVar23 = (int)uStack_188;
          uVar22 = (long)uStack_188 >> 0x20;
          if (uVar10 == 0) {
            plStack_c8 = plStack_1e0;
            auStack_118[1] = *puStack_148;
            puStack_120 = (undefined4 *)(long)iVar23;
            plStack_108 = plStack_180;
            auStack_118[0] = uVar22;
            uStack_e0 = (undefined *)(long)(int)uStack_1e8;
            uStack_d8 = (long)uStack_1e8 >> 0x20;
            plStack_d0 = (long *)uVar13;
            FUN_10a19d1cc(&uStack_e0,&puStack_120);
          }
          else if (uVar10 == 1) {
            uVar30 = *puStack_148;
            auStack_f0[2] = 2;
            auStack_f0[3] = 2;
            auStack_f0[0] = 0;
            auStack_f0[1] = 1;
            uStack_f4 = 0xff000000;
            if ((uStack_188 & 0xffffffff) != 0) {
              lVar21 = 0;
              uVar34 = uVar22 & 0xfffffffffffffff0;
              do {
                if (uVar34 != 0) {
                  uVar17 = 0;
                  do {
                    lVar19 = 0;
                    puVar14 = (undefined1 *)((long)plStack_180 + uVar17 * 2 + lVar21 * uVar30);
                    auStack_118[0] =
                         CONCAT17(puVar14[0x1e],
                                  CONCAT16(puVar14[0x1c],
                                           CONCAT15(puVar14[0x1a],
                                                    CONCAT14(puVar14[0x18],
                                                             CONCAT13(puVar14[0x16],
                                                                      CONCAT12(puVar14[0x14],
                                                                               CONCAT11(puVar14[0x12
                                                  ],puVar14[0x10])))))));
                    puStack_120 = (undefined4 *)
                                  CONCAT17(puVar14[0xe],
                                           CONCAT16(puVar14[0xc],
                                                    CONCAT15(puVar14[10],
                                                             CONCAT14(puVar14[8],
                                                                      CONCAT13(puVar14[6],
                                                                               CONCAT12(puVar14[4],
                                                                                        CONCAT11(
                                                  puVar14[2],*puVar14)))))));
                    plStack_108 = (long *)CONCAT17(puVar14[0x1f],
                                                   CONCAT16(puVar14[0x1d],
                                                            CONCAT15((char)*(dword *)(puVar14 + 0x1b
                                                                                     ),
                                                                     CONCAT14(puVar14[0x19],
                                                                              CONCAT13((char)*(dword
                                                                                               *)(
                                                  puVar14 + 0x17),
                                                  CONCAT12(puVar14[0x15],
                                                           CONCAT11((char)*(dword *)(puVar14 + 0x13)
                                                                    ,puVar14[0x11])))))));
                    auStack_118[1] =
                         CONCAT17((char)*(dword *)(puVar14 + 0xf),
                                  CONCAT16(puVar14[0xd],
                                           CONCAT15((char)*(dword *)(puVar14 + 0xb),
                                                    CONCAT14(puVar14[9],
                                                             CONCAT13((char)*(dword *)(puVar14 + 7),
                                                                      CONCAT12(puVar14[5],
                                                                               CONCAT11((char)*(
                                                  dword *)(puVar14 + 3),puVar14[1])))))));
                    do {
                      uVar10 = auStack_f0[lVar19];
                      if (uVar10 == 2) {
                        uVar6 = *(undefined1 *)((long)&uStack_f4 + lVar19);
                        puVar15 = (undefined4 *)
                                  CONCAT17(uVar6,CONCAT16(uVar6,CONCAT15(uVar6,CONCAT14(uVar6,
                                                  CONCAT13(uVar6,CONCAT12(uVar6,CONCAT11(uVar6,uVar6
                                                                                        )))))));
                        uVar36 = CONCAT17(uVar6,CONCAT16(uVar6,CONCAT15(uVar6,CONCAT14(uVar6,
                                                  CONCAT13(uVar6,CONCAT12(uVar6,CONCAT11(uVar6,uVar6
                                                                                        )))))));
                      }
                      else {
                        uVar36 = auStack_118[(long)(int)uVar10 * 2];
                        puVar15 = (&puStack_120)[(long)(int)uVar10 * 2];
                      }
                      (&uStack_d8)[lVar19 * 2] = uVar36;
                      (&uStack_e0)[lVar19 * 2] = puVar15;
                      lVar19 = lVar19 + 1;
                    } while (lVar19 != 4);
                    puVar14 = (undefined1 *)((long)plStack_1e0 + uVar17 * 4 + lVar21 * uVar13);
                    *puVar14 = (char)uStack_e0;
                    puVar14[1] = (char)plStack_d0;
                    puVar14[2] = (char)puStack_c0;
                    puVar14[3] = (char)uStack_b0;
                    puVar14[4] = (char)((ulong)uStack_e0 >> 8);
                    puVar14[5] = (char)((ulong)plStack_d0 >> 8);
                    puVar14[6] = (char)((ulong)puStack_c0 >> 8);
                    puVar14[7] = (char)((ulong)uStack_b0 >> 8);
                    puVar14[8] = (char)((ulong)uStack_e0 >> 0x10);
                    puVar14[9] = (char)((ulong)plStack_d0 >> 0x10);
                    puVar14[10] = (char)((ulong)puStack_c0 >> 0x10);
                    puVar14[0xb] = (char)((ulong)uStack_b0 >> 0x10);
                    puVar14[0xc] = (char)((ulong)uStack_e0 >> 0x18);
                    puVar14[0xd] = (char)((ulong)plStack_d0 >> 0x18);
                    puVar14[0xe] = (char)((ulong)puStack_c0 >> 0x18);
                    puVar14[0xf] = (char)((ulong)uStack_b0 >> 0x18);
                    puVar14[0x10] = (char)((ulong)uStack_e0 >> 0x20);
                    puVar14[0x11] = (char)((ulong)plStack_d0 >> 0x20);
                    puVar14[0x12] = (char)((ulong)puStack_c0 >> 0x20);
                    puVar14[0x13] = (char)((ulong)uStack_b0 >> 0x20);
                    puVar14[0x14] = (char)((ulong)uStack_e0 >> 0x28);
                    puVar14[0x15] = (char)((ulong)plStack_d0 >> 0x28);
                    puVar14[0x16] = (char)((ulong)puStack_c0 >> 0x28);
                    puVar14[0x17] = (char)((ulong)uStack_b0 >> 0x28);
                    puVar14[0x18] = (char)((ulong)uStack_e0 >> 0x30);
                    puVar14[0x19] = (char)((ulong)plStack_d0 >> 0x30);
                    puVar14[0x1a] = (char)((ulong)puStack_c0 >> 0x30);
                    puVar14[0x1b] = (char)((ulong)uStack_b0 >> 0x30);
                    puVar14[0x1c] = (char)((ulong)uStack_e0 >> 0x38);
                    puVar14[0x1d] = (char)((ulong)plStack_d0 >> 0x38);
                    puVar14[0x1e] = (char)((ulong)puStack_c0 >> 0x38);
                    puVar14[0x1f] = (char)((ulong)uStack_b0 >> 0x38);
                    puVar14[0x20] = (char)uStack_d8;
                    puVar14[0x21] = (char)plStack_c8;
                    puVar14[0x22] = (char)plStack_b8;
                    puVar14[0x23] = (char)lStack_a8;
                    puVar14[0x24] = (char)(uStack_d8 >> 8);
                    puVar14[0x25] = (char)((ulong)plStack_c8 >> 8);
                    puVar14[0x26] = (char)((ulong)plStack_b8 >> 8);
                    puVar14[0x27] = (char)((ulong)lStack_a8 >> 8);
                    puVar14[0x28] = (char)(uStack_d8 >> 0x10);
                    puVar14[0x29] = (char)((ulong)plStack_c8 >> 0x10);
                    puVar14[0x2a] = (char)((ulong)plStack_b8 >> 0x10);
                    puVar14[0x2b] = (char)((ulong)lStack_a8 >> 0x10);
                    puVar14[0x2c] = (char)(uStack_d8 >> 0x18);
                    puVar14[0x2d] = (char)((ulong)plStack_c8 >> 0x18);
                    puVar14[0x2e] = (char)((ulong)plStack_b8 >> 0x18);
                    puVar14[0x2f] = (char)((ulong)lStack_a8 >> 0x18);
                    puVar14[0x30] = (char)(uStack_d8 >> 0x20);
                    puVar14[0x31] = (char)((ulong)plStack_c8 >> 0x20);
                    puVar14[0x32] = (char)((ulong)plStack_b8 >> 0x20);
                    puVar14[0x33] = (char)((ulong)lStack_a8 >> 0x20);
                    puVar14[0x34] = (char)(uStack_d8 >> 0x28);
                    puVar14[0x35] = (char)((ulong)plStack_c8 >> 0x28);
                    puVar14[0x36] = (char)((ulong)plStack_b8 >> 0x28);
                    puVar14[0x37] = (char)((ulong)lStack_a8 >> 0x28);
                    puVar14[0x38] = (char)(uStack_d8 >> 0x30);
                    puVar14[0x39] = (char)((ulong)plStack_c8 >> 0x30);
                    puVar14[0x3a] = (char)((ulong)plStack_b8 >> 0x30);
                    puVar14[0x3b] = (char)((ulong)lStack_a8 >> 0x30);
                    puVar14[0x3c] = (char)(uStack_d8 >> 0x38);
                    puVar14[0x3d] = (char)((ulong)plStack_c8 >> 0x38);
                    puVar14[0x3e] = (char)((ulong)plStack_b8 >> 0x38);
                    puVar14[0x3f] = (char)((ulong)lStack_a8 >> 0x38);
                    uVar17 = uVar17 + 0x10;
                  } while (uVar17 < uVar34);
                }
                if ((uVar22 & 0xf) != 0) {
                  uVar17 = 0;
                  puVar14 = (undefined1 *)((long)plStack_1e0 + uVar34 * 4 + lVar21 * uVar13);
                  do {
                    lVar19 = 0;
                    do {
                      puVar2 = (undefined1 *)((long)&uStack_f4 + lVar19);
                      if (auStack_f0[lVar19] != 2) {
                        puVar2 = (undefined1 *)
                                 ((long)plStack_180 +
                                 (ulong)auStack_f0[lVar19] + (uVar17 + uVar34) * 2 + lVar21 * uVar30
                                 );
                      }
                      puVar14[lVar19] = *puVar2;
                      lVar19 = lVar19 + 1;
                    } while (lVar19 != 4);
                    puVar14 = puVar14 + 4;
                    uVar17 = uVar17 + 1;
                  } while (uVar17 != (uVar22 & 0xf));
                }
                lVar21 = lVar21 + 1;
              } while (lVar21 != iVar23);
            }
          }
          else if (uVar10 == 2) {
            plStack_c8 = plStack_1e0;
            auStack_118[1] = *puStack_148;
            puStack_120 = (undefined4 *)(long)iVar23;
            plStack_108 = plStack_180;
            auStack_118[0] = uVar22;
            uStack_e0 = (undefined *)(long)(int)uStack_1e8;
            uStack_d8 = (long)uStack_1e8 >> 0x20;
            plStack_d0 = (long *)uVar13;
            FUN_10a19d170(&uStack_e0,&puStack_120);
          }
          uStack_d8 = uStack_188;
          uStack_e0 = uStack_190;
          plStack_c8 = plStack_178;
          plStack_d0 = plStack_180;
          plStack_b8 = plStack_168;
          puStack_c0 = puStack_170;
          lStack_a8 = lStack_158;
          uStack_b0 = uStack_160;
          uStack_90 = 0;
          uStack_88 = 0;
          if (uStack_190._4_4_ < 3) {
            uStack_90 = *puStack_148;
            uStack_88 = puStack_148[1];
            uStack_a0 = uVar24;
            puStack_98 = &uStack_90;
          }
          else {
            uStack_a0 = uStack_150;
            puStack_98 = puStack_148;
            uStack_150 = uVar31;
            puStack_148 = auStack_140;
          }
          uStack_188 = uStack_1e8;
          uStack_190 = uStack_1f0;
          plStack_178 = plStack_1d8;
          plStack_180 = plStack_1e0;
          plStack_168 = plStack_1c8;
          puStack_170 = puStack_1d0;
          lStack_158 = lStack_1b8;
          uStack_160 = uStack_1c0;
          if (puStack_148 != auStack_140) {
            _free(puStack_148[-1]);
            uStack_150 = uVar31;
            puStack_148 = auStack_140;
          }
          if (uStack_1f0._4_4_ < 3) {
            *puStack_148 = *puStack_1a8;
            puStack_148[1] = puStack_1a8[1];
          }
          else {
            uStack_150 = uStack_1b0;
            puStack_148 = puStack_1a8;
            uStack_1b0 = uVar26;
            puStack_1a8 = auStack_1a0;
          }
          uStack_1e8 = uStack_d8;
          uStack_1f0 = uStack_e0;
          plStack_1d8 = plStack_c8;
          plStack_1e0 = plStack_d0;
          plStack_1c8 = plStack_b8;
          puStack_1d0 = puStack_c0;
          lStack_1b8 = lStack_a8;
          uStack_1c0 = uStack_b0;
          if (puStack_1a8 != auStack_1a0) {
            _free(puStack_1a8[-1]);
            uStack_1b0 = uVar26;
            puStack_1a8 = auStack_1a0;
          }
          if (uStack_e0._4_4_ < 3) {
            *puStack_1a8 = *puStack_98;
            puStack_1a8[1] = puStack_98[1];
            uStack_e0 = (undefined *)CONCAT44(uStack_e0._4_4_,0x42ff0000);
            puVar29[1] = 0;
            *puVar29 = 0;
            puVar29[3] = 0;
            puVar29[2] = 0;
            puVar29[5] = 0;
            puVar29[4] = 0;
            *(undefined8 *)((long)puVar29 + 0x34) = 0;
            *(undefined8 *)((long)puVar29 + 0x2c) = 0;
            if (puStack_98 != &uStack_90) {
              _free(puStack_98[-1]);
            }
          }
          else {
            uStack_1b0 = uStack_a0;
            puStack_1a8 = puStack_98;
          }
        }
        (**(code **)(**(long **)(lVar20 + 0x128) + 0x88))();
        if (lStack_1b8 != 0) {
          piVar27 = (int *)(lStack_1b8 + 0x14);
          do {
            iVar23 = *piVar27;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar27,0x10);
            if (bVar9) {
              *piVar27 = iVar23 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar23 + -1 == 0) {
            func_0x000109a848d4(&uStack_1f0);
          }
        }
        lStack_1b8 = 0;
        plStack_1d8 = (long *)0x0;
        plStack_1e0 = (long *)0x0;
        plStack_1c8 = (long *)0x0;
        puStack_1d0 = (undefined1 *)0x0;
        if (0 < uStack_1f0._4_4_) {
          lVar21 = 0;
          do {
            *(undefined4 *)(uStack_1b0 + lVar21 * 4) = 0;
            lVar21 = lVar21 + 1;
          } while (lVar21 < uStack_1f0._4_4_);
        }
        if (puStack_1a8 != auStack_1a0 && puStack_1a8 != (ulong *)0x0) {
          _free(puStack_1a8[-1]);
        }
        if (lStack_158 != 0) {
          piVar27 = (int *)(lStack_158 + 0x14);
          do {
            iVar23 = *piVar27;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar27,0x10);
            if (bVar9) {
              *piVar27 = iVar23 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar23 + -1 == 0) {
            func_0x000109a848d4(&uStack_190);
          }
        }
        lStack_158 = 0;
        plStack_178 = (long *)0x0;
        plStack_180 = (long *)0x0;
        plStack_168 = (long *)0x0;
        puStack_170 = (undefined1 *)0x0;
        if (0 < uStack_190._4_4_) {
          lVar21 = 0;
          do {
            *(undefined4 *)(uStack_150 + lVar21 * 4) = 0;
            lVar21 = lVar21 + 1;
          } while (lVar21 < uStack_190._4_4_);
        }
        if (puStack_148 != auStack_140 && puStack_148 != (ulong *)0x0) {
          _free(puStack_148[-1]);
        }
        uStack_e0 = (undefined *)0x0;
        uStack_d8 = uStack_d8 & 0xffffffff00000000;
        (**(code **)(**(long **)(lVar20 + 0x128) + 0x90))(*(long **)(lVar20 + 0x128),0,&uStack_e0);
        lVar21 = *(long *)(lVar20 + 0x58);
        if (lVar21 != 0) {
          uVar3 = *(undefined4 *)(lVar20 + 0x48);
          uVar4 = *(undefined4 *)(lVar20 + 0x4c);
          plVar32 = *(long **)(*(long *)(lVar20 + 0x138) + 0x268);
          if (plVar32 == (long *)0x0) {
            plVar12 = (long *)0x0;
            plVar32 = (long *)0x4;
          }
          else {
            (**(code **)(*plVar32 + 0xe0))();
            plVar12 = *(long **)(*(long *)(lVar20 + 0x138) + 0x268);
            if (plVar12 == (long *)0x0) {
              plVar12 = (long *)0x0;
            }
            else {
              (**(code **)(*plVar12 + 0xe8))();
            }
          }
          FUN_10a8c96bc(lVar11,uVar3,uVar4,plVar32,plVar12,lVar21);
        }
      }
      plVar32 = (long *)plVar35[1];
      plVar12 = plVar35;
      if ((long *)plVar35[1] == (long *)0x0) {
        do {
          plVar35 = (long *)plVar12[2];
          bVar9 = (long *)*plVar35 != plVar12;
          plVar12 = plVar35;
        } while (bVar9);
      }
      else {
        do {
          plVar35 = plVar32;
          plVar32 = (long *)*plVar35;
        } while ((long *)*plVar35 != (long *)0x0);
      }
    } while (plVar35 != plVar1);
  }
  puVar28 = (undefined8 *)((undefined8 *)**(undefined8 **)(param_1 + 0x310))[1];
  for (puVar25 = *(undefined8 **)**(undefined8 **)(param_1 + 0x310); puVar25 != puVar28;
      puVar25 = puVar25 + 1) {
    (**(code **)(*(long *)*puVar25 + 8))((long *)*puVar25,param_1 + 0x118);
  }
  puVar25 = *(undefined8 **)(param_1 + 0x78);
  if (puVar25 != (undefined8 *)0x0) {
    if (*(char *)(puVar25 + 8) == '\x01') {
      (*(code *)*puVar25)();
    }
    else if (*(char *)(puVar25 + 8) == '\x02') {
      FUN_10a05e614();
    }
  }
  func_0x000105675c90(&ppuStack_240);
  return;
}



/* Entry: 10a8d82c4; end: 10a8d830b;  */

void FUN_10a8d82c4(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  long *plVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  FUN_10a8d6aa4(param_1 + 0x2b0,&uStack_28);
  func_0x00010a8d6b1c(&uStack_28);
  *(undefined4 *)(param_1 + 0x140) = 2;
  lVar2 = param_1;
  uVar3 = param_2;
  FUN_10a8d830c();
  pcStack_38 = FUN_10a8d830c;
  lStack_50 = param_1;
  uStack_48 = param_2;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
    plVar4 = (long *)(lVar2 + 0x2d0);
    if (*(char *)(lVar2 + 0x2e7) < '\0') {
      plVar4 = (long *)*plVar4;
    }
    func_0x00010ae06f08(1,2,&UNK_10f6812de,&UNK_10f68140d,0x2b6,&UNK_10f681479,in_x6,in_x7,uVar3,
                        plVar4);
  }
  func_0x000107c2b054(auStack_70,uVar3);
  uStack_58 = 1;
  if (*(char *)(lVar2 + 0x2e7) < '\0') {
    func_0x000107c3192c(&uStack_90,*(undefined8 *)(lVar2 + 0x2d0),*(undefined8 *)(lVar2 + 0x2d8));
  }
  else {
    uStack_88 = *(undefined8 *)(lVar2 + 0x2d8);
    uStack_90 = *(undefined8 *)(lVar2 + 0x2d0);
    uStack_80 = *(undefined8 *)(lVar2 + 0x2e0);
  }
  uStack_78 = 1;
  FUN_10a234a0c(auStack_70,&uStack_90);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a8d83c8);
  (*pcVar1)();
}



/* Entry: 10a8d830c; end: 10a8d8413;  */

void FUN_10a8d830c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  long *plVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined1 auStack_40 [24];
  undefined1 uStack_28;
  
  if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
    plVar2 = (long *)(param_1 + 0x2d0);
    if (*(char *)(param_1 + 0x2e7) < '\0') {
      plVar2 = (long *)*plVar2;
    }
    func_0x00010ae06f08(1,2,&UNK_10f6812de,&UNK_10f68140d,0x2b6,&UNK_10f681479,in_x6,in_x7,param_2,
                        plVar2);
  }
  func_0x000107c2b054(auStack_40,param_2);
  uStack_28 = 1;
  if (*(char *)(param_1 + 0x2e7) < '\0') {
    func_0x000107c3192c(&uStack_60,*(undefined8 *)(param_1 + 0x2d0),*(undefined8 *)(param_1 + 0x2d8)
                       );
  }
  else {
    uStack_58 = *(undefined8 *)(param_1 + 0x2d8);
    uStack_60 = *(undefined8 *)(param_1 + 0x2d0);
    uStack_50 = *(undefined8 *)(param_1 + 0x2e0);
  }
  uStack_48 = 1;
  FUN_10a234a0c(auStack_40,&uStack_60);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a8d83c8);
  (*pcVar1)();
}



/* Entry: 10a8d8414; end: 10a8d852b;  */

undefined8 * FUN_10a8d8414(undefined8 *param_1,undefined8 *param_2)

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
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
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



/* Entry: 10a8d852c; end: 10a8d8a77;  */

void FUN_10a8d852c(long param_1)

{
  undefined8 *puVar1;
  char cVar2;
  long *plVar3;
  code *pcVar4;
  bool bVar5;
  long **pplVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long **pplVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined1 *puStack_60;
  undefined1 uStack_58;
  
  pplVar11 = &plStack_90;
  pplVar6 = &plStack_90;
  FUN_10a8c1ba8(&plStack_90,*(undefined8 *)(param_1 + 8));
  if ((plStack_90 == (long *)0x0) ||
     (plVar14 = plStack_90, ___dynamic_cast(plStack_90,&PTR_DAT_110b3e5a8,&PTR_DAT_110b3e688,0),
     plVar14 == (long *)0x0)) {
    pplVar11 = &plStack_78;
  }
  else {
    plStack_70 = plStack_88;
    plStack_78 = plVar14;
  }
  *pplVar11 = (long *)0x0;
  pplVar11[1] = (long *)0x0;
  plVar14 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar16 = plStack_88 + 1;
    do {
      lVar12 = *plVar16;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
    }
  }
  if (plStack_78 == (long *)0x0) {
    FUN_10a00946c(&UNK_10f681593);
  }
  else {
    (**(code **)(*plStack_78 + 0x20))();
    plStack_90 = (long *)0x0;
    plStack_88 = (long *)0x0;
    plStack_80 = (long *)0x0;
    lVar12 = *plStack_78;
    lVar8 = plStack_78[1];
    uStack_58 = 0;
    lVar17 = lVar8 - lVar12;
    puStack_60 = (undefined1 *)&plStack_90;
    if (lVar17 != 0) {
      uVar10 = (lVar17 >> 3) * 0x2e8ba2e8ba2e8ba3;
      if (0x2e8ba2e8ba2e8ba < uVar10) {
        puStack_60 = (undefined1 *)&plStack_90;
        FUN_10a8da1c8();
        goto LAB_10a8d8a3c;
      }
      puStack_60 = (undefined1 *)&plStack_90;
      FUN_10a8da1dc();
      lVar17 = 0;
      plStack_80 = (long *)(pplVar6 + uVar10 * 0xb);
      plStack_90 = (long *)pplVar6;
      plStack_88 = (long *)pplVar6;
      do {
        puVar7 = (undefined8 *)(lVar12 + lVar17);
        puVar1 = (undefined8 *)((long)pplVar6 + lVar17);
        if (*(char *)((long)puVar7 + 0x17) < '\0') {
          func_0x000107c3192c(puVar1,*puVar7,puVar7[1]);
        }
        else {
          uVar19 = puVar7[1];
          uVar18 = *puVar7;
          puVar1[2] = puVar7[2];
          puVar1[1] = uVar19;
          *puVar1 = uVar18;
        }
        lVar9 = lVar12 + lVar17;
        uVar19 = *(undefined8 *)(lVar9 + 0x20);
        uVar18 = *(undefined8 *)(lVar9 + 0x18);
        uVar20 = *(undefined8 *)(lVar9 + 0x21);
        *(undefined8 *)((long)pplVar6 + lVar17 + 0x29) = *(undefined8 *)(lVar9 + 0x29);
        *(undefined8 *)((long)pplVar6 + lVar17 + 0x21) = uVar20;
        *(undefined8 *)((long)pplVar6 + lVar17 + 0x20) = uVar19;
        *(undefined8 *)((long)pplVar6 + lVar17 + 0x18) = uVar18;
        puVar7 = (undefined8 *)((long)pplVar6 + lVar17 + 0x38);
        *(undefined1 *)puVar7 = 0;
        *(undefined1 *)((long)pplVar6 + lVar17 + 0x50) = 0;
        if (*(char *)(lVar9 + 0x50) == '\x01') {
          *puVar7 = 0;
          *(undefined8 *)((long)pplVar6 + lVar17 + 0x40) = 0;
          *(undefined8 *)((long)pplVar6 + lVar17 + 0x48) = 0;
          FUN_10a0e9a40();
          *(undefined1 *)((long)pplVar6 + lVar17 + 0x50) = 1;
        }
        lVar17 = lVar17 + 0x58;
      } while (lVar12 + lVar17 != lVar8);
      plStack_88 = (long *)((long)pplVar6 + lVar17);
    }
    if (((long)plStack_88 - (long)plStack_90 >> 3) * 0x2e8ba2e8ba2e8ba3 - *(long *)(param_1 + 0x48)
        == 0) {
      plVar16 = (long *)(param_1 + 0x50);
      plVar14 = (long *)*plVar16;
      while (plVar14 != (long *)(param_1 + 0x58)) {
        lVar12 = plVar14[7];
        if ((((*(int *)(lVar12 + 0x48) == 0) && (*(int *)(lVar12 + 0x4c) == 0)) &&
            (*(int *)(lVar12 + 0x54) == 0)) && (*(int *)(lVar12 + 0x50) == 0)) {
          bVar5 = true;
          goto LAB_10a8d877c;
        }
        plVar15 = plVar14;
        plVar3 = (long *)plVar14[1];
        if ((long *)plVar14[1] == (long *)0x0) {
          do {
            plVar14 = (long *)plVar15[2];
            bVar5 = (long *)*plVar14 != plVar15;
            plVar15 = plVar14;
          } while (bVar5);
        }
        else {
          do {
            plVar14 = plVar3;
            plVar3 = (long *)*plVar14;
          } while ((long *)*plVar14 != (long *)0x0);
        }
      }
      bVar5 = false;
LAB_10a8d877c:
      if (plStack_88 != plStack_90) {
        lVar12 = 0;
        uVar10 = 0;
        do {
          lVar8 = param_1 + 0x38;
          FUN_10a8da224(lVar8,(long)plStack_90 + lVar12);
          if (param_1 + 0x40 == lVar8) {
            FUN_10a00946c(&UNK_10f6815f0);
            goto LAB_10a8d8a3c;
          }
          uVar13 = ((long)plStack_88 - (long)plStack_90 >> 3) * 0x2e8ba2e8ba2e8ba3;
          if (bVar5) {
LAB_10a8d8810:
            bVar5 = true;
          }
          else {
            if (uVar13 < uVar10 || uVar13 - uVar10 == 0) goto LAB_10a8d8a3c;
            lVar17 = *(long *)(lVar8 + 0x38);
            if (((*(int *)((long)plStack_90 + lVar12 + 0x18) != *(int *)(lVar17 + 0x48)) ||
                (*(int *)((long)plStack_90 + lVar12 + 0x1c) != *(int *)(lVar17 + 0x4c))) ||
               (*(int *)((long)plStack_90 + lVar12 + 0x20) != *(int *)(lVar17 + 0x50)))
            goto LAB_10a8d8810;
            bVar5 = *(int *)((long)plStack_90 + lVar12 + 0x24) != *(int *)(lVar17 + 0x54);
          }
          if (uVar13 < uVar10 || uVar13 - uVar10 == 0) goto LAB_10a8d8a3c;
          uVar18 = *(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x48);
          *(undefined8 *)((long)plStack_90 + lVar12 + 0x20) =
               *(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x50);
          *(undefined8 *)((long)plStack_90 + lVar12 + 0x18) = uVar18;
          uVar10 = uVar10 + 1;
          lVar12 = lVar12 + 0x58;
        } while (uVar10 < (ulong)(((long)plStack_88 - (long)plStack_90 >> 3) * 0x2e8ba2e8ba2e8ba3));
      }
      if (bVar5) {
        lVar17 = 0x80;
        __Znwm();
        FUN_109cfb5d8();
        FUN_109cfcd3c(lVar17,&plStack_90);
        lVar8 = *(long *)(lVar17 + 0x30);
        for (lVar12 = *(long *)(lVar17 + 0x28); lVar12 != lVar8; lVar12 = lVar12 + 0x68) {
          plVar14 = plVar16;
          FUN_10a8d5bb4(plVar16,&puStack_60,lVar12);
          if (*plVar14 == 0) {
            FUN_109ffdddc("map::at:  key not found");
            goto LAB_10a8d8a3c;
          }
          plVar14 = *(long **)(*plVar14 + 0x38);
          lVar9 = lVar12;
          FUN_109cd30bc(lVar12);
          (**(code **)(*plVar14 + 0x38))(plVar14,lVar9);
        }
        FUN_109cfba64(lVar17);
        __ZdlPv();
      }
      *(undefined1 *)(param_1 + 800) = 1;
      puStack_60 = (undefined1 *)&plStack_90;
      FUN_10a04b2ac(&puStack_60);
      plVar14 = plStack_70;
      if (plStack_70 != (long *)0x0) {
        plVar16 = plStack_70 + 1;
        do {
          lVar12 = *plVar16;
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar5) {
            *plVar16 = lVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_70 + 0x10))(plStack_70);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
        }
      }
      return;
    }
    FUN_10a00946c(&UNK_10f6815cf);
  }
LAB_10a8d8a3c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a8d8a40);
  (*pcVar4)();
}



/* Entry: 10a8d8a78; end: 10a8d920f;  */

/* WARNING: Removing unreachable block (ram,0x00010a8d9ad8) */
/* WARNING: Removing unreachable block (ram,0x00010a8d95c8) */
/* WARNING: Removing unreachable block (ram,0x00010a8d9b18) */
/* WARNING: Removing unreachable block (ram,0x00010a8d9d0c) */
/* WARNING: Removing unreachable block (ram,0x00010a8d9dd0) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_10a8d8a78(undefined ********param_1,undefined ********param_2)

{
  long *plVar1;
  undefined ******ppppppuVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  undefined7 uVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  bool bVar13;
  undefined ********ppppppppuVar14;
  undefined ********ppppppppuVar15;
  ulong uVar16;
  undefined ********ppppppppuVar17;
  undefined *puVar18;
  undefined8 *puVar19;
  undefined ******ppppppuVar20;
  undefined *****pppppuVar21;
  undefined ******ppppppuVar22;
  undefined *******pppppppuVar23;
  undefined *******pppppppuVar24;
  long lVar25;
  undefined8 *puVar26;
  undefined ********unaff_x20;
  undefined *******pppppppuVar27;
  undefined8 *puVar28;
  code **unaff_x21;
  undefined8 *puVar29;
  undefined8 unaff_x23;
  undefined *******pppppppuVar30;
  undefined *******pppppppuVar31;
  undefined ********ppppppppuVar32;
  uint uVar33;
  undefined ********ppppppppuVar34;
  undefined ********ppppppppuVar35;
  undefined ********ppppppppuVar36;
  undefined *******unaff_x27;
  undefined ********unaff_x28;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined ********ppppppppuStack_368;
  undefined1 auStack_360 [8];
  undefined ******ppppppuStack_358;
  undefined *******pppppppuStack_350;
  undefined ********ppppppppuStack_348;
  undefined ********ppppppppuStack_340;
  undefined8 uStack_330;
  undefined7 uStack_328;
  undefined1 uStack_321;
  undefined8 uStack_320;
  undefined *******pppppppuStack_318;
  undefined ******ppppppuStack_310;
  undefined ******ppppppuStack_308;
  undefined8 uStack_300;
  char cStack_2e9;
  undefined ******ppppppuStack_2e0;
  undefined ******ppppppuStack_2d8;
  undefined1 uStack_2d0;
  undefined2 uStack_2cf;
  undefined *******pppppppuStack_2c8;
  undefined8 *apuStack_2c0 [7];
  code *pcStack_288;
  undefined8 *apuStack_280 [7];
  undefined *******pppppppuStack_248;
  undefined *******pppppppuStack_240;
  undefined *******pppppppuStack_238;
  undefined *******pppppppuStack_230;
  undefined *******pppppppuStack_228;
  undefined *******pppppppuStack_220;
  code *pcStack_1f8;
  undefined *******pppppppuStack_1f0;
  undefined *******pppppppuStack_1e8;
  undefined *******pppppppuStack_1e0;
  undefined *******pppppppuStack_1b8;
  undefined *******pppppppuStack_1b0;
  long lStack_1a8;
  undefined ********ppppppppuStack_190;
  undefined *******pppppppuStack_188;
  undefined ********ppppppppuStack_180;
  undefined ********ppppppppuStack_178;
  undefined ********ppppppppuStack_170;
  undefined8 uStack_168;
  undefined ********ppppppppuStack_160;
  code **ppcStack_158;
  undefined ********ppppppppuStack_150;
  undefined ********ppppppppuStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_e0;
  long *plStack_d8;
  undefined *******pppppppuStack_d0;
  undefined ********ppppppppuStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b1;
  code *pcStack_b0;
  undefined **ppuStack_a8;
  undefined ******ppppppuStack_a0;
  undefined ******ppppppuStack_98;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppppuVar36 = (undefined ********)param_1[7];
  ppppppppuVar15 = param_1 + 8;
  ppppppppuVar17 = param_1;
  if (ppppppppuVar36 != ppppppppuVar15) {
    unaff_x21 = &pcStack_b0;
    unaff_x23 = 1;
    do {
      pppppppuVar27 = ppppppppuVar36[7];
      unaff_x27 = *param_1;
      FUN_10a8c89d8(pppppppuVar27);
      FUN_10a8b7bb0(pppppppuVar27);
      ppppppuVar20 = unaff_x27[0x10e];
      pppppppuStack_d0 = (undefined *******)pppppppuVar27[0x1d];
      ppppppppuStack_c8 = (undefined ********)pppppppuVar27[0x1e];
      pppppuVar21 = (undefined *****)*pppppppuStack_d0;
      iVar4 = *(int *)(pppppppuVar27 + 10);
      iVar6 = *(int *)((long)pppppppuVar27 + 0x54);
      iVar5 = *(int *)(pppppppuVar27 + 9);
      iVar7 = *(int *)((long)pppppppuVar27 + 0x4c);
      if (ppppppppuStack_c8 != (undefined ********)0x0) {
        ppppppppuVar17 = ppppppppuStack_c8 + 1;
        do {
          cVar8 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(ppppppppuVar17,0x10);
          if (bVar13) {
            *ppppppppuVar17 = (undefined *******)((long)*ppppppppuVar17 + 1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      FUN_10a8c8cec(&uStack_130,ppppppuVar20,pppppuVar21,iVar4 * iVar6 * iVar7 * iVar5,
                    &pppppppuStack_d0);
      func_0x00010a36f2e0(pppppppuVar27 + 0x1b,&uStack_130);
      plVar3 = (long *)CONCAT44(uStack_124,uStack_128);
      if (plVar3 != (long *)0x0) {
        plVar1 = plVar3 + 1;
        do {
          lVar25 = *plVar1;
          cVar8 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar13) {
            *plVar1 = lVar25 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar25 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
        }
      }
      unaff_x20 = ppppppppuStack_c8;
      if (ppppppppuStack_c8 != (undefined ********)0x0) {
        ppppppppuVar17 = ppppppppuStack_c8 + 1;
        do {
          pppppppuVar27 = *ppppppppuVar17;
          cVar8 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(ppppppppuVar17,0x10);
          if (bVar13) {
            *ppppppppuVar17 = (undefined *******)((long)pppppppuVar27 + -1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (pppppppuVar27 == (undefined *******)0x0) {
          (*(code *)(*ppppppppuStack_c8)[2])(ppppppppuStack_c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x20);
        }
      }
      pppppppuVar27 = ppppppppuVar36[7];
      ppppppppuStack_c8 = (undefined ********)pppppppuVar27[10];
      pppppppuStack_d0 = (undefined *******)pppppppuVar27[9];
      uStack_c0 = (undefined *******)CONCAT44(*(undefined4 *)(pppppppuVar27 + 0xe),1);
      ppppppuStack_a0 = pppppppuVar27[0x1d];
      ppppppuStack_98 = pppppppuVar27[0x1e];
      pppppuVar21 = *ppppppuStack_a0;
      if (ppppppuStack_98 != (undefined ******)0x0) {
        ppppppuVar20 = ppppppuStack_98 + 1;
        do {
          cVar8 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(ppppppuVar20,0x10);
          if (bVar13) {
            *ppppppuVar20 = (undefined *****)((long)*ppppppuVar20 + 1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      pcStack_b0 = FUN_10a8da2f8;
      ppuStack_a8 = &PTR_DAT_110c2ae70;
      uStack_e0 = 0;
      plStack_d8 = (long *)0x0;
      FUN_109d0eaa4(&uStack_130,&pppppppuStack_d0,&uStack_c0,pppppuVar21,&pcStack_b0);
      (*(code *)*ppuStack_a8)(&ppuStack_a8);
      param_2 = (undefined ********)(ppppppppuVar36[7] + 6);
      func_0x00010955c3e0(param_1[0x51],param_2,ppppppppuVar36[7] + 6,&uStack_130);
      ppppppppuVar17 = (undefined ********)&uStack_130;
      func_0x000105675c90();
      ppppppppuVar32 = (undefined ********)ppppppppuVar36[1];
      ppppppppuVar34 = ppppppppuVar36;
      if ((undefined ********)ppppppppuVar36[1] == (undefined ********)0x0) {
        do {
          ppppppppuVar36 = (undefined ********)ppppppppuVar34[2];
          bVar13 = (undefined ********)*ppppppppuVar36 != ppppppppuVar34;
          ppppppppuVar34 = ppppppppuVar36;
        } while (bVar13);
      }
      else {
        do {
          ppppppppuVar36 = ppppppppuVar32;
          ppppppppuVar32 = (undefined ********)*ppppppppuVar36;
        } while ((undefined ********)*ppppppppuVar36 != (undefined ********)0x0);
      }
    } while (ppppppppuVar36 != ppppppppuVar15);
  }
  ppppppppuVar34 = (undefined ********)param_1[10];
  ppppppppuVar32 = param_1 + 0xb;
  if (ppppppppuVar34 != ppppppppuVar32) {
    unaff_x23 = 1;
    do {
      ppppppppuVar36 = (undefined ********)ppppppppuVar34[7];
      pppppppuVar27 = *param_1;
      uStack_c0 = pppppppuVar27;
      FUN_10a8c89d8(ppppppppuVar36);
      ppppppuVar20 = pppppppuVar27[0x10e];
      pppppppuStack_d0 = ppppppppuVar36[0x1d];
      ppppppppuStack_c8 = (undefined ********)ppppppppuVar36[0x1e];
      ppppppuVar22 = *pppppppuStack_d0;
      iVar4 = *(int *)(ppppppppuVar36 + 10);
      iVar6 = *(int *)((long)ppppppppuVar36 + 0x54);
      iVar5 = *(int *)(ppppppppuVar36 + 9);
      iVar7 = *(int *)((long)ppppppppuVar36 + 0x4c);
      if (ppppppppuStack_c8 != (undefined ********)0x0) {
        ppppppppuVar17 = ppppppppuStack_c8 + 1;
        do {
          cVar8 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(ppppppppuVar17,0x10);
          if (bVar13) {
            *ppppppppuVar17 = (undefined *******)((long)*ppppppppuVar17 + 1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      FUN_10a8c8cec(&uStack_130,ppppppuVar20,ppppppuVar22,iVar4 * iVar6 * iVar7 * iVar5,
                    &pppppppuStack_d0);
      ppppppppuVar17 = ppppppppuVar36 + 0x1b;
      param_2 = (undefined ********)&uStack_130;
      func_0x00010a36f2e0();
      ppppppppuVar14 = (undefined ********)CONCAT44(uStack_124,uStack_128);
      if (ppppppppuVar14 != (undefined ********)0x0) {
        ppppppppuVar35 = ppppppppuVar14 + 1;
        do {
          pppppppuVar27 = *ppppppppuVar35;
          cVar8 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(ppppppppuVar35,0x10);
          if (bVar13) {
            *ppppppppuVar35 = (undefined *******)((long)pppppppuVar27 + -1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (pppppppuVar27 == (undefined *******)0x0) {
          (*(code *)(*ppppppppuVar14)[2])(ppppppppuVar14);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppppppppuVar17 = ppppppppuVar14;
        }
      }
      unaff_x20 = ppppppppuStack_c8;
      if (ppppppppuStack_c8 != (undefined ********)0x0) {
        ppppppppuVar14 = ppppppppuStack_c8 + 1;
        do {
          pppppppuVar27 = *ppppppppuVar14;
          cVar8 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(ppppppppuVar14,0x10);
          if (bVar13) {
            *ppppppppuVar14 = (undefined *******)((long)pppppppuVar27 + -1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (pppppppuVar27 == (undefined *******)0x0) {
          (*(code *)(*ppppppppuStack_c8)[2])(ppppppppuStack_c8);
          ppppppppuVar17 = unaff_x20;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
      if (*(int *)(ppppppppuVar36 + 0x29) == 1) {
        pppppppuVar27 = uStack_c0;
        FUN_10a2421c8();
        uVar33 = *(int *)((long)ppppppppuVar36 + 0x14c) - 1;
        if (3 < uVar33) {
          FUN_10a00946c(&UNK_10f681962);
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x10a8d9194);
          (*pcVar12)();
        }
        ppppppuVar20 = pppppppuVar27[0x45];
        uStack_120 = *(undefined4 *)(&UNK_10e4e1100 + (ulong)uVar33 * 4);
        uStack_130._0_4_ = 0;
        uStack_130._4_4_ = SUB84(ppppppppuVar36[9],0);
        uStack_128 = (undefined4)((ulong)ppppppppuVar36[9] >> 0x20);
        uStack_124 = 1;
        uStack_11c = 0;
        uStack_118 = 0;
        uStack_114 = 1;
        uStack_100 = 0;
        uStack_110 = 0;
        uStack_108 = 0;
        (*(code *)(*ppppppuVar20)[4])(ppppppuVar20,&uStack_130);
        FUN_10a0a25e4(&uStack_e0,ppppppuVar20);
        FUN_10a00e5c4(ppppppppuVar36 + 0x25,&uStack_e0);
        plVar3 = plStack_d8;
        if (plStack_d8 != (long *)0x0) {
          plVar1 = plStack_d8 + 1;
          do {
            lVar25 = *plVar1;
            cVar8 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar13) {
              *plVar1 = lVar25 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (lVar25 == 0) {
            (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
          }
        }
        uStack_130._0_4_ = 0;
        uStack_130._4_4_ = 0;
        uStack_128 = 0;
        uStack_124 = 0;
        pppppppuVar27 = ppppppppuVar36[0x27];
        if (pppppppuVar27 == (undefined *******)0x0) {
LAB_10a8d8ec8:
          FUN_10a1328e8(&uStack_e0,&uStack_b1,&uStack_c0,ppppppppuVar36 + 0x25);
          plVar1 = plStack_d8;
          uVar11 = uStack_e0;
          uStack_e0 = 0;
          plStack_d8 = (long *)0x0;
          plVar3 = (long *)CONCAT44(uStack_124,uStack_128);
          uStack_128 = SUB84(plVar1,0);
          uStack_124 = (undefined4)((ulong)plVar1 >> 0x20);
          uStack_130._0_4_ = (undefined4)uVar11;
          uStack_130._4_4_ = (undefined4)((ulong)uVar11 >> 0x20);
          if (plVar3 != (long *)0x0) {
            plVar1 = plVar3 + 1;
            do {
              lVar25 = *plVar1;
              cVar8 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar13) {
                *plVar1 = lVar25 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (lVar25 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
            }
          }
          plVar3 = plStack_d8;
          if (plStack_d8 != (long *)0x0) {
            plVar1 = plStack_d8 + 1;
            do {
              lVar25 = *plVar1;
              cVar8 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar13) {
                *plVar1 = lVar25 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (lVar25 == 0) {
              (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
            }
          }
          pppppppuVar27 = ppppppppuVar36[0x27];
          if (pppppppuVar27 == (undefined *******)0x0) {
            FUN_10a1cb720(&uStack_e0,uStack_c0,&uStack_130);
            func_0x00010a04a704(ppppppppuVar36 + 0x27,&uStack_e0);
            plVar3 = plStack_d8;
            if (plStack_d8 != (long *)0x0) {
              plVar1 = plStack_d8 + 1;
              do {
                lVar25 = *plVar1;
                cVar8 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar13) {
                  *plVar1 = lVar25 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (lVar25 == 0) {
                (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
              }
            }
          }
          else {
            plStack_d8 = (long *)CONCAT44(uStack_124,uStack_128);
            uStack_e0 = CONCAT44(uStack_130._4_4_,(undefined4)uStack_130);
            if (CONCAT44(uStack_124,uStack_128) != 0) {
              plVar3 = (long *)(CONCAT44(uStack_124,uStack_128) + 8);
              do {
                cVar8 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar13) {
                  *plVar3 = *plVar3 + 1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
            }
            FUN_10ab6b76c(pppppppuVar27,&uStack_e0);
            plVar3 = plStack_d8;
            if (plStack_d8 != (long *)0x0) {
              plVar1 = plStack_d8 + 1;
              do {
                lVar25 = *plVar1;
                cVar8 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar13) {
                  *plVar1 = lVar25 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (lVar25 == 0) {
                (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
              }
            }
            if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
              func_0x00010ae06f08(1,2,&UNK_10f6807b9,&UNK_10f6807fd,0x20a,&UNK_10f68084c);
            }
          }
        }
        else {
          ppppppuVar20 = pppppppuVar27[0x4d];
          if (((ppppppuVar20 == (undefined ******)0x0) ||
              (___dynamic_cast(ppppppuVar20,&PTR_DAT_110bb3788,&PTR_DAT_110bb2d18,0),
              ppppppuVar20 == (undefined ******)0x0)) ||
             (ppppppuVar22 = pppppppuVar27[0x4e], ppppppuVar22 == (undefined ******)0x0)) {
            uStack_130._0_4_ = SUB84(ppppppuVar20,0);
            uStack_130._4_4_ = (undefined4)((ulong)ppppppuVar20 >> 0x20);
            uStack_128 = 0;
            uStack_124 = 0;
joined_r0x00010a8d8eac:
            if (ppppppuVar20 == (undefined ******)0x0) goto LAB_10a8d8ec8;
          }
          else {
            ppppppuVar2 = ppppppuVar22 + 1;
            do {
              cVar8 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(ppppppuVar2,0x10);
              if (bVar13) {
                *ppppppuVar2 = (undefined *****)((long)*ppppppuVar2 + 1);
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            plVar3 = (long *)CONCAT44(uStack_124,uStack_128);
            uStack_130._0_4_ = SUB84(ppppppuVar20,0);
            uStack_130._4_4_ = (undefined4)((ulong)ppppppuVar20 >> 0x20);
            uStack_128 = SUB84(ppppppuVar22,0);
            uStack_124 = (undefined4)((ulong)ppppppuVar22 >> 0x20);
            if (plVar3 != (long *)0x0) {
              plVar1 = plVar3 + 1;
              do {
                lVar25 = *plVar1;
                cVar8 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar13) {
                  *plVar1 = lVar25 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (lVar25 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
              }
              ppppppuVar20 = (undefined ******)CONCAT44(uStack_130._4_4_,(undefined4)uStack_130);
              goto joined_r0x00010a8d8eac;
            }
          }
          FUN_10a1db4cc();
          if ((ppppppppuVar36[0x27] == (undefined *******)0x0) ||
             (CONCAT44(uStack_130._4_4_,(undefined4)uStack_130) == 0)) goto LAB_10a8d8ec8;
        }
        ppppppppuVar17 = (undefined ********)CONCAT44(uStack_130._4_4_,(undefined4)uStack_130);
        param_2 = (undefined ********)&UNK_10e482b00;
        (*(code *)(*ppppppppuVar17)[0x13])();
        unaff_x27 = ppppppppuVar36[0xb];
        if (unaff_x27 != (undefined *******)0x0) {
          unaff_x28 = (undefined ********)CONCAT44(uStack_130._4_4_,(undefined4)uStack_130);
          param_2 = (undefined ********)(ulong)*(uint *)(ppppppppuVar36 + 9);
          unaff_x21 = (code **)(ulong)*(uint *)((long)ppppppppuVar36 + 0x4c);
          ppppppppuVar15 = (undefined ********)ppppppppuVar36[0x27][0x4d];
          if (ppppppppuVar15 == (undefined ********)0x0) {
            ppppppuVar20 = (undefined ******)0x0;
            ppppppppuVar15 = (undefined ********)0x4;
          }
          else {
            (*(code *)(*ppppppppuVar15)[0x1c])();
            ppppppuVar20 = ppppppppuVar36[0x27][0x4d];
            if (ppppppuVar20 == (undefined ******)0x0) {
              ppppppuVar20 = (undefined ******)0x0;
            }
            else {
              (*(code *)(*ppppppuVar20)[0x1d])();
            }
          }
          ppppppppuVar17 = unaff_x28;
          FUN_10a8c96bc(unaff_x28,param_2,unaff_x21,ppppppppuVar15,ppppppuVar20,unaff_x27);
        }
        unaff_x20 = (undefined ********)CONCAT44(uStack_124,uStack_128);
        if (unaff_x20 != (undefined ********)0x0) {
          ppppppppuVar14 = unaff_x20 + 1;
          do {
            pppppppuVar27 = *ppppppppuVar14;
            cVar8 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(ppppppppuVar14,0x10);
            if (bVar13) {
              *ppppppppuVar14 = (undefined *******)((long)pppppppuVar27 + -1);
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (pppppppuVar27 == (undefined *******)0x0) {
            (*(code *)(*unaff_x20)[2])(unaff_x20);
            ppppppppuVar17 = unaff_x20;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
      }
      ppppppppuVar14 = (undefined ********)ppppppppuVar34[1];
      ppppppppuVar35 = ppppppppuVar34;
      if ((undefined ********)ppppppppuVar34[1] == (undefined ********)0x0) {
        do {
          ppppppppuVar34 = (undefined ********)ppppppppuVar35[2];
          bVar13 = (undefined ********)*ppppppppuVar34 != ppppppppuVar35;
          ppppppppuVar35 = ppppppppuVar34;
        } while (bVar13);
      }
      else {
        do {
          ppppppppuVar34 = ppppppppuVar14;
          ppppppppuVar14 = (undefined ********)*ppppppppuVar34;
        } while ((undefined ********)*ppppppppuVar34 != (undefined ********)0x0);
      }
    } while (ppppppppuVar34 != ppppppppuVar32);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    auVar37._8_8_ = param_2;
    auVar37._0_8_ = ppppppppuVar17;
    return auVar37;
  }
  ___stack_chk_fail();
  func_0x00010a061678(&uStack_130);
  ppppppppuVar14 = ppppppppuVar17;
  __Unwind_Resume();
  ppppppppuStack_190 = unaff_x28;
  pppppppuStack_188 = unaff_x27;
  ppppppppuStack_180 = ppppppppuVar36;
  ppppppppuStack_178 = ppppppppuVar34;
  ppppppppuStack_170 = ppppppppuVar32;
  uStack_168 = unaff_x23;
  ppppppppuStack_160 = ppppppppuVar15;
  ppcStack_158 = unaff_x21;
  ppppppppuStack_150 = unaff_x20;
  ppppppppuStack_148 = ppppppppuVar17;
  puStack_140 = &stack0xfffffffffffffff0;
  pcStack_138 = FUN_10a8d9210;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppppuVar17 = ppppppppuVar14;
  ppppppppuVar15 = param_2;
  if (((ulong)ppppppppuVar14[0x61] & 1) == 0) {
    FUN_10a8d4b90();
  }
  if (ppppppppuVar14[1] == (undefined *******)0x0) {
    ppppppppuVar17 = (undefined ********)&UNK_10f681700;
    FUN_10a00946c();
  }
  else {
    func_0x00010ad031c0();
    ppppppppuVar15 = (undefined ********)*ppppppppuVar17;
    if (-1 < *(char *)((long)ppppppppuVar17 + 0x17)) {
      ppppppppuVar15 = ppppppppuVar17;
    }
    func_0x000107c2b054(&uStack_330,ppppppppuVar15);
    if (*(char *)((long)ppppppppuVar14 + 0x247) < '\0') {
      __ZdlPv(ppppppppuVar14[0x46]);
    }
    ppppppppuVar14[0x47] = (undefined *******)CONCAT17(uStack_321,uStack_328);
    ppppppppuVar14[0x46] = (undefined *******)CONCAT17(uStack_330._7_1_,(undefined7)uStack_330);
    ppppppppuVar14[0x48] = (undefined *******)uStack_320;
    *(undefined1 *)(ppppppppuVar14 + 0x49) = *(undefined1 *)(ppppppppuVar14 + 0x5e);
    pppppppuVar27 = ppppppppuVar14[0x3f];
    pppppppuVar24 = ppppppppuVar14[0x40];
    uVar16 = (ulong)*(uint *)((long)ppppppppuVar14 + 0x2ec);
    FUN_10a8c09d8(uVar16);
    FUN_109d20fac(pppppppuVar27,(long)pppppppuVar24 - (long)pppppppuVar27 >> 2,uVar16,
                  ppppppppuVar14[1] + 0x21,ppppppppuVar14 + 0x42,ppppppppuVar14 + 0x29);
    ppppppppuVar17 = ppppppppuVar14 + 0x5f;
    if (ppppppppuVar14[0x5f] == (undefined *******)0x0) {
      FUN_10a8da3cc(&uStack_330,ppppppppuVar14);
      FUN_10a8da5c8(&pppppppuStack_238,&uStack_330,ppppppppuVar14[1] + 0x2d,ppppppppuVar14 + 0x3f,
                    ppppppppuVar14 + 0x42);
      FUN_10a8da564(ppppppppuVar17,&pppppppuStack_238);
      pppppppuVar27 = pppppppuStack_230;
      if (pppppppuStack_230 != (undefined *******)0x0) {
        pppppppuVar24 = pppppppuStack_230 + 1;
        do {
          ppppppuVar20 = *pppppppuVar24;
          cVar8 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar24,0x10);
          if (bVar13) {
            *pppppppuVar24 = (undefined ******)((long)ppppppuVar20 + -1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (ppppppuVar20 == (undefined ******)0x0) {
          (*(code *)(*pppppppuStack_230)[2])(pppppppuStack_230);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar27);
        }
      }
      if (cStack_2e9 < '\0') {
        __ZdlPv(uStack_300);
      }
      pppppppuStack_350 = (undefined *******)&pppppppuStack_318;
      FUN_10a04b2ac(&pppppppuStack_350);
      ppppppppuVar17 = &pppppppuStack_350;
      pppppppuStack_350 = (undefined *******)&uStack_330;
      FUN_10a04b2ac();
LAB_10a8d9494:
      pppppppuVar27 = ppppppppuVar14[0x62];
      ppppppuVar20 = (*ppppppppuVar14)[0x11b];
      if ((ppppppuVar20 != (undefined ******)0x0) &&
         (ppppppuVar22 = *pppppppuVar27, ((ulong)ppppppuVar22[8] & 1) != 0)) {
        __ZNSt3__16chrono12steady_clock3nowEv();
        pppppppuStack_350 = (undefined *******)((ulong)pppppppuStack_350 & 0xffffffffffffff00);
        ppppppppuStack_348 = (undefined ********)0x0;
        pppppppuVar27 = (undefined *******)&pppppppuStack_350;
        func_0x00010945a80c(pppppppuVar27,"ml_build_request");
        ppppppuStack_358 = (undefined ******)0x0;
        auStack_360[0] = 3;
        ppppppuVar22 = ppppppuVar22 + 3;
        func_0x00010938229c();
        pppppppuVar24 = pppppppuVar27;
        ppppppuStack_358 = ppppppuVar22;
        func_0x00010945a80c(pppppppuVar27,&DAT_10f56f6ff);
        auStack_360[0] = *(undefined1 *)pppppppuVar24;
        *(undefined1 *)pppppppuVar24 = 3;
        ppppppuVar22 = pppppppuVar24[1];
        pppppppuVar24[1] = ppppppuStack_358;
        ppppppuStack_358 = ppppppuVar22;
        func_0x000109380ffc(&ppppppuStack_358);
        ppppppppuStack_368 = ppppppppuVar17;
        func_0x00010945a80c(pppppppuVar27,"start");
        *(undefined1 *)pppppppuVar27 = 5;
        pppppppuVar24 = (undefined *******)pppppppuVar27[1];
        pppppppuVar27[1] = (undefined ******)ppppppppuStack_368;
        ppppppppuStack_368 = (undefined ********)pppppppuVar24;
        func_0x000109380ffc(&ppppppppuStack_368);
        uStack_320 = (undefined **)CONCAT17(0xf,(undefined7)uStack_320);
        uStack_330._0_7_ = 0x4c4c4d68636554;
        uStack_330._7_1_ = 0x65;
        uStack_328 = 0x746e657645736e;
        uStack_321 = 0;
        FUN_10a0c32e4(&pppppppuStack_238,&pppppppuStack_350,0xffffffff,0x20,0,0);
        FUN_10a76bdb0(ppppppuVar20,&uStack_330,&pppppppuStack_238);
        if ((long)uStack_320 < 0) {
          __ZdlPv(CONCAT17(uStack_330._7_1_,(undefined7)uStack_330));
        }
        ppppppppuVar17 = (undefined ********)&ppppppppuStack_348;
        func_0x000109380ffc(ppppppppuVar17,(ulong)pppppppuStack_350 & 0xff);
        pppppppuVar27 = ppppppppuVar14[0x62];
      }
      pppppppuStack_220 = ppppppppuVar14[99];
      if (pppppppuStack_220 == (undefined *******)0x0) {
        pppppppuStack_1e0 = (undefined *******)0x0;
        pppppppuStack_238 = (undefined *******)0x10a8da720;
        pppppppuStack_230 = (undefined *******)&PTR_FUN_110c2ae90;
        pppppppuStack_228 = pppppppuVar27;
        pppppppuStack_220 = (undefined *******)0x0;
        pppppppuStack_1e8 = pppppppuVar27;
      }
      else {
        pppppppuVar24 = pppppppuStack_220 + 1;
        do {
          cVar8 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar24,0x10);
          if (bVar13) {
            *pppppppuVar24 = (undefined ******)((long)*pppppppuVar24 + 1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        pppppppuStack_1e8 = ppppppppuVar14[0x62];
        pppppppuStack_1e0 = ppppppppuVar14[99];
        pppppppuStack_238 = (undefined *******)0x10a8da720;
        pppppppuStack_230 = (undefined *******)&PTR_FUN_110c2ae90;
        pppppppuStack_228 = pppppppuVar27;
        if (pppppppuStack_1e0 != (undefined *******)0x0) {
          pppppppuVar24 = pppppppuStack_1e0 + 1;
          do {
            cVar8 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar24,0x10);
            if (bVar13) {
              *pppppppuVar24 = (undefined ******)((long)*pppppppuVar24 + 1);
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
        }
      }
      pppppppuStack_230 = (undefined *******)&PTR_FUN_110c2ae90;
      pppppppuStack_238 = (undefined *******)0x10a8da720;
      unaff_x20 = &pppppppuStack_230;
      pcStack_1f8 = FUN_10a8da778;
      pppppppuStack_1f0 = (undefined *******)&PTR_FUN_110c2aea8;
      pppppppuStack_1b8 = ppppppppuVar14[0x65];
      pppppppuStack_1b0 = ppppppppuVar14[0x66];
      if (pppppppuStack_1b0 != (undefined *******)0x0) {
        pppppppuVar24 = pppppppuStack_1b0 + 1;
        do {
          cVar8 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar24,0x10);
          if (bVar13) {
            *pppppppuVar24 = (undefined ******)((long)*pppppppuVar24 + 1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      ppppppppuVar32 = &pppppppuStack_238;
      pppppppuStack_228 = pppppppuVar27;
      FUN_10a8bb1fc();
      pppppppuVar27 = *ppppppppuVar17 + 0x11b;
      FUN_10a08fec0();
      pppppppuVar24 = *ppppppppuVar14;
      if ((((ulong)*pppppppuVar27 & 1) == 0) || (*(int *)(pppppppuVar24[0x20] + 0x55) == 8)) {
        pppppuVar21 = pppppppuVar24[0x117][4];
        if (pppppuVar21 == (undefined *****)0x0) {
LAB_10a8d96fc:
          if (1 < *(int *)(pppppppuVar24[0x20] + 0x55) - 7U) goto LAB_10a8d971c;
          FUN_10a8d40c0();
          if (((ulong)pppppuVar21 & 1) == 0) {
            pppppppuVar24 = *ppppppppuVar14;
            goto LAB_10a8d971c;
          }
          uVar33 = 0;
        }
        else {
          FUN_10a8b7988(pppppuVar21,&UNK_10f680bf1,0x1e);
          pppppppuVar24 = *ppppppppuVar14;
          if (((ulong)*pppppuVar21 & 1) == 0) goto LAB_10a8d96fc;
LAB_10a8d971c:
          uVar33 = (uint)(*(int *)(pppppppuVar24[0x20] + 0x55) != 8);
        }
        uVar33 = (uint)param_2 & uVar33;
      }
      else {
        uVar33 = 1;
      }
      *(undefined4 *)(ppppppppuVar14 + 0x28) = 0;
      pppppppuVar27 = ppppppppuVar14[0x60];
      uStack_330._0_7_ = SUB87(ppppppppuVar14[0x5f],0);
      uStack_330._7_1_ = (undefined1)((ulong)ppppppppuVar14[0x5f] >> 0x38);
      uStack_328 = SUB87(pppppppuVar27,0);
      uStack_321 = (undefined1)((ulong)pppppppuVar27 >> 0x38);
      if (pppppppuVar27 != (undefined *******)0x0) {
        pppppppuVar27 = pppppppuVar27 + 1;
        do {
          cVar8 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar27,0x10);
          if (bVar13) {
            *pppppppuVar27 = (undefined ******)((long)*pppppppuVar27 + 1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      pppppppuVar27 = ppppppppuVar14[1];
      FUN_10a8c1848();
      uStack_320 = (undefined **)0x10a8da7d0;
      pppppppuStack_318 = (undefined *******)&PTR_DAT_110c2bdf0;
      ppppppuStack_308 = pppppppuVar27[1];
      ppppppuStack_310 = *pppppppuVar27;
      if (pppppppuVar27[1] != (undefined ******)0x0) {
        ppppppuVar20 = pppppppuVar27[1] + 1;
        do {
          cVar8 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(ppppppuVar20,0x10);
          if (bVar13) {
            *ppppppuVar20 = (undefined *****)((long)*ppppppuVar20 + 1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      FUN_10a8d5cd4();
      ppppppuStack_2d8 = pppppppuVar27[1];
      ppppppuStack_2e0 = *pppppppuVar27;
      if (pppppppuVar27[1] != (undefined ******)0x0) {
        ppppppuVar20 = pppppppuVar27[1] + 1;
        do {
          cVar8 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(ppppppuVar20,0x10);
          if (bVar13) {
            *ppppppuVar20 = (undefined *****)((long)*ppppppuVar20 + 1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      uStack_2d0 = (undefined1)uVar33;
      uStack_2cf = 1;
      pppppppuStack_2c8 = pppppppuStack_238;
      ppppppppuVar36 = (undefined ********)&uStack_330;
      (*(code *)pppppppuStack_230[2])(apuStack_2c0,unaff_x20);
      pcStack_288 = pcStack_1f8;
      ppppppppuVar15 = &pppppppuStack_1f0;
      (*(code *)pppppppuStack_1f0[2])(apuStack_280);
      pppppppuStack_240 = pppppppuStack_1b0;
      pppppppuStack_248 = pppppppuStack_1b8;
      pppppppuStack_1b8 = (undefined *******)0x0;
      pppppppuStack_1b0 = (undefined *******)0x0;
      FUN_109d23f70(&pppppppuStack_350,&uStack_330);
      ppppppppuVar17 = ppppppppuVar14 + 0x53;
      if (ppppppppuVar17 != &pppppppuStack_350) {
        if (*ppppppppuVar17 != (undefined *******)0x0) {
          pppppppuVar27 = *ppppppppuVar17 + 3;
          do {
            cVar8 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar27,0x10);
            if (bVar13) {
              *(int *)pppppppuVar27 = *(int *)pppppppuVar27 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          func_0x00010a8d4cd8(ppppppppuVar17);
        }
        ppppppppuVar34 = ppppppppuStack_348;
        pppppppuVar27 = pppppppuStack_350;
        pppppppuStack_350 = (undefined *******)0x0;
        ppppppppuStack_348 = (undefined ********)0x0;
        pppppppuVar24 = ppppppppuVar14[0x54];
        ppppppppuVar14[0x54] = (undefined *******)ppppppppuVar34;
        *ppppppppuVar17 = pppppppuVar27;
        if (pppppppuVar24 != (undefined *******)0x0) {
          pppppppuVar27 = pppppppuVar24 + 1;
          do {
            ppppppuVar20 = *pppppppuVar27;
            cVar8 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar27,0x10);
            if (bVar13) {
              *pppppppuVar27 = (undefined ******)((long)ppppppuVar20 + -1);
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (ppppppuVar20 == (undefined ******)0x0) {
            (*(code *)(*pppppppuVar24)[2])(pppppppuVar24);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar24);
          }
        }
      }
      ppppppppuVar34 = ppppppppuStack_348;
      if (pppppppuStack_350 != (undefined *******)0x0) {
        pppppppuVar27 = pppppppuStack_350 + 3;
        do {
          cVar8 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar27,0x10);
          if (bVar13) {
            *(int *)pppppppuVar27 = *(int *)pppppppuVar27 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      if (ppppppppuStack_348 != (undefined ********)0x0) {
        ppppppppuVar35 = ppppppppuStack_348 + 1;
        do {
          pppppppuVar27 = *ppppppppuVar35;
          cVar8 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(ppppppppuVar35,0x10);
          if (bVar13) {
            *ppppppppuVar35 = (undefined *******)((long)pppppppuVar27 + -1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (pppppppuVar27 == (undefined *******)0x0) {
          (*(code *)(*ppppppppuStack_348)[2])(ppppppppuStack_348);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppppuVar34);
        }
      }
      pppppppuVar27 = pppppppuStack_240;
      if (pppppppuStack_240 != (undefined *******)0x0) {
        pppppppuVar24 = pppppppuStack_240 + 1;
        do {
          ppppppuVar20 = *pppppppuVar24;
          cVar8 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar24,0x10);
          if (bVar13) {
            *pppppppuVar24 = (undefined ******)((long)ppppppuVar20 + -1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (ppppppuVar20 == (undefined ******)0x0) {
          (*(code *)(*pppppppuStack_240)[2])(pppppppuStack_240);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar27);
        }
      }
      (*(code *)*apuStack_280[0])(apuStack_280);
      (*(code *)*apuStack_2c0[0])(apuStack_2c0);
      ppppppuVar20 = ppppppuStack_2d8;
      if (ppppppuStack_2d8 != (undefined ******)0x0) {
        ppppppuVar22 = ppppppuStack_2d8 + 1;
        do {
          pppppuVar21 = *ppppppuVar22;
          cVar8 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(ppppppuVar22,0x10);
          if (bVar13) {
            *ppppppuVar22 = (undefined *****)((long)pppppuVar21 + -1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (pppppuVar21 == (undefined *****)0x0) {
          (*(code *)(*ppppppuStack_2d8)[2])(ppppppuStack_2d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar20);
        }
      }
      (*(code *)*pppppppuStack_318)(&pppppppuStack_318);
      plVar3 = (long *)CONCAT17(uStack_321,uStack_328);
      if (plVar3 != (long *)0x0) {
        plVar1 = plVar3 + 1;
        do {
          lVar25 = *plVar1;
          cVar8 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar13) {
            *plVar1 = lVar25 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar25 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
        }
      }
      if (((*(char *)(ppppppppuVar14 + 0x59) == '\x01') &&
          (*ppppppppuVar17 != (undefined *******)0x0)) &&
         (pppppppuVar27 = (undefined *******)(*ppppppppuVar17)[2],
         pppppppuVar27 != (undefined *******)0x0)) {
        pppppppuVar24 = pppppppuVar27 + 1;
        do {
          cVar8 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar24,0x10);
          if (bVar13) {
            *pppppppuVar24 = (undefined ******)((long)*pppppppuVar24 + 4);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        pppppppuVar24 = (undefined *******)0x118;
        __Znwm();
        pppppppuVar24[2] = (undefined ******)0x0;
        pppppppuVar24[1] = (undefined ******)0x200000006;
        *(undefined2 *)(pppppppuVar24 + 3) = 4;
        pppppppuVar24[5] = (undefined ******)0x0;
        pppppppuVar24[4] = (undefined ******)0x0;
        pppppppuVar24[7] = (undefined ******)0x0;
        pppppppuVar24[6] = (undefined ******)0x0;
        pppppppuVar24[9] = (undefined ******)0x0;
        pppppppuVar24[8] = (undefined ******)0x0;
        pppppppuVar24[0xb] = (undefined ******)0x0;
        pppppppuVar24[10] = (undefined ******)0x0;
        pppppppuVar24[0xd] = (undefined ******)0x0;
        pppppppuVar24[0xc] = (undefined ******)0x0;
        pppppppuVar24[0xf] = (undefined ******)0x0;
        pppppppuVar24[0xe] = (undefined ******)0x0;
        pppppppuVar24[0x10] = (undefined ******)0x0;
        pppppppuVar24[0x11] = (undefined ******)(pppppppuVar24 + 3);
        pppppppuVar24[0x12] = (undefined ******)0x0;
        *(undefined1 *)(pppppppuVar24 + 0x13) = 0;
        *(undefined1 *)(pppppppuVar24 + 0x15) = 0;
        *pppppppuVar24 = (undefined ******)&PTR_FUN_110c2aed0;
        ppppppppuVar15 = (undefined ********)(pppppppuVar24 + 0x16);
        *ppppppppuVar15 = pppppppuVar27;
        pppppppuVar27 = ppppppppuVar14[0x58] + 1;
        pppppppuVar24[0x17] = (undefined ******)ppppppppuVar14[0x58];
        do {
          cVar8 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar27,0x10);
          if (bVar13) {
            *pppppppuVar27 = (undefined ******)((long)*pppppppuVar27 + 4);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        pppppppuVar24[0x1a] = (undefined ******)0x0;
        pppppppuVar24[0x1b] = (undefined ******)0x32aaaba7;
        pppppppuVar24[0x1d] = (undefined ******)0x0;
        pppppppuVar24[0x1c] = (undefined ******)0x0;
        pppppppuVar24[0x1f] = (undefined ******)0x0;
        pppppppuVar24[0x1e] = (undefined ******)0x0;
        pppppppuVar24[0x21] = (undefined ******)0x0;
        pppppppuVar24[0x20] = (undefined ******)0x0;
        pppppppuVar24[0x22] = (undefined ******)0x0;
        ppppppppuStack_348 = (undefined ********)0x0;
        pppppppuVar24[0x18] = (undefined ******)pppppppuVar24;
        pppppppuVar24[0x19] = (undefined ******)0x0;
        pppppppuStack_350 = pppppppuVar24;
        ppppppppuStack_340 = ppppppppuVar15;
        if (((uint)pppppppuVar24[0x17][2] >> 1 & 1) == 0) {
          __ZNSt3__15mutex4lockEv(pppppppuVar24 + 0x1b);
          pppppppuVar30 = *ppppppppuVar15;
          pppppppuVar27 = pppppppuVar30 + 2;
          do {
            ppppppuVar20 = *pppppppuVar27;
            if (ppppppuVar20 == (undefined ******)0x0) {
              cVar8 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar27,0x10);
              if (bVar13) {
                *pppppppuVar27 = (undefined ******)0x1;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 == '\0') {
                pppppppuVar27 = pppppppuVar30 + 3;
                uStack_330._0_7_ = 0x10a8da86c;
                uStack_330._7_1_ = 0;
                uStack_328 = SUB87(ppppppppuVar15,0);
                uVar9 = uStack_328;
                uStack_321 = (undefined1)((ulong)ppppppppuVar15 >> 0x38);
                uVar10 = uStack_321;
                uStack_320 = &PTR_PTR_1132fed68;
                func_0x000109d1b588(pppppppuVar27,&uStack_330);
                pppppppuVar30[2] = (undefined ******)0x0;
                ppppppppuStack_340[3] = pppppppuVar27;
                ppppppuVar22 = pppppppuVar24[0x17];
                ppppppuVar20 = ppppppuVar22 + 2;
                goto LAB_10a8d9cf8;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)ppppppuVar20 >> 1 & 1) == 0);
          ppppppppuStack_340[3] = (undefined *******)0x0;
          ppppppuVar22 = pppppppuVar24[0x18];
          ppppppuVar20 = ppppppuVar22 + 2;
          do {
            pppppuVar21 = *ppppppuVar20;
            if (pppppuVar21 == (undefined *****)0x0) {
              cVar8 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(ppppppuVar20,0x10);
              if (bVar13) {
                *ppppppuVar20 = (undefined *****)0x2;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 == '\0') {
                func_0x000109d1b4dc(ppppppuVar22 + 3);
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)pppppuVar21 >> 1 & 1) == 0);
          ppppppuVar20 = pppppppuVar24[0x17];
          pppppppuVar24[0x17] = (undefined ******)0x0;
          if (ppppppuVar20 != (undefined ******)0x0) {
            ppppppuVar22 = ppppppuVar20 + 1;
            do {
              pppppuVar21 = *ppppppuVar22;
              cVar8 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(ppppppuVar22,0x10);
              if (bVar13) {
                *ppppppuVar22 = (undefined *****)((long)pppppuVar21 + -4);
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (((ulong)pppppuVar21 & 0x1fffffffc) == 4) {
              (*(code *)(*ppppppuVar20)[2])(ppppppuVar20);
              do {
                pppppuVar21 = *ppppppuVar22;
                cVar8 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(ppppppuVar22,0x10);
                if (bVar13) {
                  *ppppppuVar22 = (undefined *****)((long)pppppuVar21 + -1);
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if ((undefined *****)((long)pppppuVar21 + -1) == (undefined *****)0x0) {
                (*(code *)(*ppppppuVar20)[1])(ppppppuVar20);
              }
            }
          }
          ppppppuVar20 = pppppppuVar24[0x18];
          pppppppuVar24[0x18] = (undefined ******)0x0;
          if (ppppppuVar20 != (undefined ******)0x0) {
            func_0x0001092b4274(pppppppuVar24 + 0x18);
          }
          pppppppuVar27 = *ppppppppuVar15;
          *ppppppppuVar15 = (undefined *******)0x0;
LAB_10a8d9f3c:
          __ZNSt3__15mutex6unlockEv(pppppppuVar24 + 0x1b);
          ppppppppuVar36 = ppppppppuVar15;
        }
        else {
          ppppppuVar20 = pppppppuVar24[0x18];
          pppppppuVar27 = pppppppuVar24;
          FUN_109d1857c();
          func_0x000109d1b350(ppppppuVar20,pppppppuVar27);
          pppppppuVar27 = *ppppppppuVar15;
          *ppppppppuVar15 = (undefined *******)0x0;
          if (pppppppuVar27 != (undefined *******)0x0) {
            pppppppuVar30 = pppppppuVar27 + 1;
            do {
              ppppppuVar20 = *pppppppuVar30;
              cVar8 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar30,0x10);
              if (bVar13) {
                *pppppppuVar30 = (undefined ******)((long)ppppppuVar20 + -4);
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (((ulong)ppppppuVar20 & 0x1fffffffc) == 4) {
              do {
                ppppppuVar20 = *pppppppuVar30;
                cVar8 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar30,0x10);
                if (bVar13) {
                  *pppppppuVar30 = (undefined ******)((long)ppppppuVar20 + -1);
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if ((undefined ******)((long)ppppppuVar20 + -1) == (undefined ******)0x0) {
                (*(code *)(*pppppppuVar27)[1])();
              }
            }
          }
          ppppppuVar20 = pppppppuVar24[0x17];
          pppppppuVar24[0x17] = (undefined ******)0x0;
          if (ppppppuVar20 != (undefined ******)0x0) {
            ppppppppuVar36 = (undefined ********)(ppppppuVar20 + 1);
            do {
              pppppppuVar27 = *ppppppppuVar36;
              cVar8 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(ppppppppuVar36,0x10);
              if (bVar13) {
                *ppppppppuVar36 = (undefined *******)((long)pppppppuVar27 + -4);
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (((ulong)pppppppuVar27 & 0x1fffffffc) == 4) {
              (*(code *)(*ppppppuVar20)[2])(ppppppuVar20);
              do {
                pppppppuVar27 = *ppppppppuVar36;
                cVar8 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(ppppppppuVar36,0x10);
                if (bVar13) {
                  *ppppppppuVar36 = (undefined *******)((long)pppppppuVar27 + -1);
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if ((undefined *******)((long)pppppppuVar27 + -1) == (undefined *******)0x0) {
                (*(code *)(*ppppppuVar20)[1])(ppppppuVar20);
              }
            }
          }
          ppppppuVar20 = pppppppuVar24[0x18];
          pppppppuVar24[0x18] = (undefined ******)0x0;
          if (ppppppuVar20 != (undefined ******)0x0) {
            func_0x0001092b4274(pppppppuVar24 + 0x18);
          }
          pppppppuVar27 = pppppppuStack_350;
          pppppppuStack_350 = (undefined *******)0x0;
        }
        ppppppppuVar15 = ppppppppuStack_348;
        if (ppppppppuStack_348 != (undefined ********)0x0) {
          func_0x0001092b4274(&ppppppppuStack_348);
        }
        if (pppppppuStack_350 != (undefined *******)0x0) {
          pppppppuVar24 = pppppppuStack_350 + 1;
          do {
            ppppppuVar20 = *pppppppuVar24;
            cVar8 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar24,0x10);
            if (bVar13) {
              *pppppppuVar24 = (undefined ******)((long)ppppppuVar20 + -4);
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (((ulong)ppppppuVar20 & 0x1fffffffc) == 4) {
            do {
              ppppppuVar20 = *pppppppuVar24;
              cVar8 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar24,0x10);
              if (bVar13) {
                *pppppppuVar24 = (undefined ******)((long)ppppppuVar20 + -1);
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if ((undefined ******)((long)ppppppuVar20 + -1) == (undefined ******)0x0) {
              (*(code *)(*pppppppuStack_350)[1])();
            }
          }
        }
        pppppppuVar24 = ppppppppuVar14[0x55];
        if (pppppppuVar24 != (undefined *******)0x0) {
          pppppppuVar30 = pppppppuVar24 + 1;
          do {
            ppppppuVar20 = *pppppppuVar30;
            cVar8 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar30,0x10);
            if (bVar13) {
              *pppppppuVar30 = (undefined ******)((long)ppppppuVar20 + -4);
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (((ulong)ppppppuVar20 & 0x1fffffffc) == 4) {
            do {
              ppppppuVar20 = *pppppppuVar30;
              cVar8 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar30,0x10);
              if (bVar13) {
                *pppppppuVar30 = (undefined ******)((long)ppppppuVar20 + -1);
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if ((undefined ******)((long)ppppppuVar20 + -1) == (undefined ******)0x0) {
              (*(code *)(*pppppppuVar24)[1])();
            }
          }
        }
        ppppppppuVar14[0x55] = pppppppuVar27;
      }
      else {
        pppppppuVar27 = ppppppppuVar14[0x55];
        if (pppppppuVar27 != (undefined *******)0x0) {
          pppppppuVar24 = pppppppuVar27 + 1;
          do {
            ppppppuVar20 = *pppppppuVar24;
            cVar8 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar24,0x10);
            if (bVar13) {
              *pppppppuVar24 = (undefined ******)((long)ppppppuVar20 + -4);
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (((ulong)ppppppuVar20 & 0x1fffffffc) == 4) {
            do {
              ppppppuVar20 = *pppppppuVar24;
              cVar8 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar24,0x10);
              if (bVar13) {
                *pppppppuVar24 = (undefined ******)((long)ppppppuVar20 + -1);
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if ((undefined ******)((long)ppppppuVar20 + -1) == (undefined ******)0x0) {
              (*(code *)(*pppppppuVar27)[1])();
            }
          }
        }
        ppppppppuVar14[0x55] = (undefined *******)0x0;
      }
      if (((uVar33 == 0) && (*ppppppppuVar17 != (undefined *******)0x0)) &&
         ((*ppppppppuVar17)[2] != (undefined ******)0x0)) {
        ppppppppuVar15 = (undefined ********)&UNK_10f68165b;
        FUN_10a8da354(ppppppppuVar14);
        FUN_10a8c7000(ppppppppuVar14);
      }
      pppppppuVar27 = pppppppuStack_1b0;
      if (pppppppuStack_1b0 != (undefined *******)0x0) {
        plVar3 = (long *)(pppppppuStack_1b0 + 1);
        do {
          lVar25 = *plVar3;
          cVar8 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar13) {
            *plVar3 = lVar25 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar25 == 0) {
          (**(code **)((long)*pppppppuStack_1b0 + 0x10))(pppppppuStack_1b0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar27);
        }
      }
      (*(code *)*pppppppuStack_1f0)(&pppppppuStack_1f0);
      ppppppppuVar17 = unaff_x20;
      (*(code *)*pppppppuStack_230)();
    }
    else {
      FUN_10a8da3cc(&uStack_330,ppppppppuVar14);
      FUN_10a8da5c8(&pppppppuStack_350,&uStack_330,ppppppppuVar14[1] + 0x2d,ppppppppuVar14 + 0x3f,
                    ppppppppuVar14 + 0x42);
      if (cStack_2e9 < '\0') {
        __ZdlPv(uStack_300);
      }
      pppppppuStack_238 = (undefined *******)&pppppppuStack_318;
      FUN_10a04b2ac(&pppppppuStack_238);
      pppppppuStack_238 = (undefined *******)&uStack_330;
      FUN_10a04b2ac(&pppppppuStack_238);
      pppppppuVar27 = *ppppppppuVar17;
      uStack_320 = (undefined **)(pppppppuVar27 + 0xc);
      pppppppuStack_318 = pppppppuVar27 + 0xf;
      uStack_330._0_7_ = SUB87(pppppppuVar27,0);
      uStack_330._7_1_ = (undefined1)((ulong)pppppppuVar27 >> 0x38);
      uStack_328 = SUB87(pppppppuVar27 + 9,0);
      uStack_321 = (undefined1)((ulong)(pppppppuVar27 + 9) >> 0x38);
      pppppppuStack_230 = pppppppuStack_350 + 9;
      pppppppuStack_228 = pppppppuStack_350 + 0xc;
      pppppppuStack_220 = pppppppuStack_350 + 0xf;
      pppppppuStack_238 = pppppppuStack_350;
      ppppppppuVar34 = (undefined ********)auStack_360;
      ppppppppuVar15 = (undefined ********)&uStack_330;
      FUN_109d2d6b8(ppppppppuVar34,ppppppppuVar15,&pppppppuStack_238);
      if (((ulong)ppppppppuVar34 & 1) == 0) {
        func_0x00010a8d4768(ppppppppuVar14);
        ppppppppuVar15 = &pppppppuStack_350;
        FUN_10a8da564();
      }
      else {
        ppppppppuVar17 = ppppppppuVar34;
        if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
          ppppppppuVar17 = (undefined ********)0x1;
          ppppppppuVar15 = (undefined ********)0x2;
          func_0x00010ae06f08(1,2,&UNK_10f6812de,&UNK_10f68166d,0xb9,&UNK_10f6816c0);
        }
      }
      unaff_x20 = ppppppppuStack_348;
      if (ppppppppuStack_348 != (undefined ********)0x0) {
        ppppppppuVar35 = ppppppppuStack_348 + 1;
        do {
          pppppppuVar27 = *ppppppppuVar35;
          cVar8 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(ppppppppuVar35,0x10);
          if (bVar13) {
            *ppppppppuVar35 = (undefined *******)((long)pppppppuVar27 + -1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (pppppppuVar27 == (undefined *******)0x0) {
          (*(code *)(*ppppppppuStack_348)[2])(ppppppppuStack_348);
          ppppppppuVar17 = unaff_x20;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
      if (((ulong)ppppppppuVar34 & 1) == 0) goto LAB_10a8d9494;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
      auVar38._8_8_ = ppppppppuVar15;
      auVar38._0_8_ = ppppppppuVar17;
      return auVar38;
    }
  }
  ___stack_chk_fail();
  __ZNSt3__15mutex6unlockEv(ppppppppuVar36 + 5);
  FUN_10a8daae8(&pppppppuStack_350);
  FUN_10a8d4068(ppppppppuVar32 + 0x10);
  (*(code *)*pppppppuStack_1f0)(ppppppppuVar32 + 9);
  (*(code *)*pppppppuStack_230)(unaff_x20);
  __Unwind_Resume(ppppppppuVar17);
  puVar18 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (ppppppppuVar15 < (undefined ********)0x2e8ba2e8ba2e8bb) {
    lVar25 = (long)ppppppppuVar15 * 0x58;
    __Znwm(lVar25);
    auVar39._8_8_ = ppppppppuVar15;
    auVar39._0_8_ = lVar25;
    return auVar39;
  }
  func_0x000109ffded8();
  puVar26 = (undefined8 *)(puVar18 + 8);
  puVar29 = (undefined8 *)*puVar26;
  ppppppppuVar17 = ppppppppuVar15;
  puVar28 = puVar26;
  if (puVar29 != (undefined8 *)0x0) {
    do {
      puVar19 = puVar29 + 4;
      ppppppppuVar17 = ppppppppuVar15;
      FUN_10a003e3c(puVar19,ppppppppuVar15);
      if (-1 < (char)puVar19) {
        puVar28 = puVar29;
      }
      puVar29 = *(undefined8 **)((long)puVar29 + ((ulong)puVar19 >> 4 & 8));
    } while (puVar29 != (undefined8 *)0x0);
    if (puVar28 != puVar26) {
      ppppppppuVar17 = (undefined ********)(puVar28 + 4);
      FUN_10a003e3c(ppppppppuVar15,ppppppppuVar17);
      if (((uint)ppppppppuVar15 >> 7 & 1) == 0) goto LAB_10a8da28c;
    }
  }
  puVar28 = puVar26;
LAB_10a8da28c:
  auVar40._8_8_ = ppppppppuVar17;
  auVar40._0_8_ = puVar28;
  return auVar40;
LAB_10a8d9cf8:
  do {
    pppppuVar21 = *ppppppuVar20;
    if (pppppuVar21 == (undefined *****)0x0) {
      cVar8 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(ppppppuVar20,0x10);
      if (bVar13) {
        *ppppppuVar20 = (undefined *****)0x1;
        cVar8 = ExclusiveMonitorsStatus();
      }
      if (cVar8 == '\0') {
        pppppppuVar27 = (undefined *******)(ppppppuVar22 + 3);
        uStack_330._0_7_ = 0x10a8daa08;
        uStack_330._7_1_ = 0;
        uStack_320 = &PTR_PTR_1132fed68;
        uStack_328 = uVar9;
        uStack_321 = uVar10;
        func_0x000109d1b588(pppppppuVar27,&uStack_330);
        ppppppuVar22[2] = (undefined *****)0x0;
        ppppppppuStack_340[4] = pppppppuVar27;
        pppppppuVar27 = pppppppuStack_350;
        goto LAB_10a8d9f38;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  } while (((uint)pppppuVar21 >> 1 & 1) == 0);
  ppppppppuStack_340[4] = (undefined *******)0x0;
  ppppppuVar20 = pppppppuVar24[0x18];
  FUN_109d1857c();
  func_0x000109d1b350(ppppppuVar20,pppppppuVar27);
  ppppppuVar20 = pppppppuVar24[0x17];
  pppppppuVar24[0x17] = (undefined ******)0x0;
  if (ppppppuVar20 != (undefined ******)0x0) {
    ppppppuVar22 = ppppppuVar20 + 1;
    do {
      pppppuVar21 = *ppppppuVar22;
      cVar8 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(ppppppuVar22,0x10);
      if (bVar13) {
        *ppppppuVar22 = (undefined *****)((long)pppppuVar21 + -4);
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (((ulong)pppppuVar21 & 0x1fffffffc) == 4) {
      (*(code *)(*ppppppuVar20)[2])(ppppppuVar20);
      do {
        pppppuVar21 = *ppppppuVar22;
        cVar8 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(ppppppuVar22,0x10);
        if (bVar13) {
          *ppppppuVar22 = (undefined *****)((long)pppppuVar21 + -1);
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if ((undefined *****)((long)pppppuVar21 + -1) == (undefined *****)0x0) {
        (*(code *)(*ppppppuVar20)[1])(ppppppuVar20);
      }
    }
  }
  pppppppuVar31 = *ppppppppuVar15;
  pppppppuVar30 = pppppppuVar31 + 2;
  pppppppuVar23 = ppppppppuStack_340[3];
  while (ppppppuVar20 = *pppppppuVar30, ppppppuVar20 != (undefined ******)0x0) {
    ClearExclusiveLocal();
LAB_10a8d9de4:
    pppppppuVar27 = pppppppuStack_350;
    if (((uint)ppppppuVar20 >> 1 & 1) != 0) goto LAB_10a8d9f38;
  }
  cVar8 = '\x01';
  bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar30,0x10);
  if (bVar13) {
    *pppppppuVar30 = (undefined ******)0x1;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 != '\0') goto LAB_10a8d9de4;
  uStack_330._0_7_ = 0x10a8da86c;
  uStack_330._7_1_ = 0;
  uStack_320 = &PTR_PTR_1132fed68;
  uStack_328 = uVar9;
  uStack_321 = uVar10;
  FUN_109d1b624(pppppppuVar31 + 3,&uStack_330,pppppppuVar23);
  pppppppuVar31[2] = (undefined ******)0x0;
  ppppppppuStack_340[3] = (undefined *******)0x0;
  pppppppuVar27 = *ppppppppuVar15;
  *ppppppppuVar15 = (undefined *******)0x0;
  if (pppppppuVar27 != (undefined *******)0x0) {
    pppppppuVar30 = pppppppuVar27 + 1;
    do {
      ppppppuVar20 = *pppppppuVar30;
      cVar8 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar30,0x10);
      if (bVar13) {
        *pppppppuVar30 = (undefined ******)((long)ppppppuVar20 + -4);
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (((ulong)ppppppuVar20 & 0x1fffffffc) == 4) {
      do {
        ppppppuVar20 = *pppppppuVar30;
        cVar8 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar30,0x10);
        if (bVar13) {
          *pppppppuVar30 = (undefined ******)((long)ppppppuVar20 + -1);
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if ((undefined ******)((long)ppppppuVar20 + -1) == (undefined ******)0x0) {
        (*(code *)(*pppppppuVar27)[1])();
      }
    }
  }
  ppppppuVar20 = pppppppuVar24[0x18];
  pppppppuVar24[0x18] = (undefined ******)0x0;
  pppppppuVar27 = pppppppuStack_350;
  if (ppppppuVar20 != (undefined ******)0x0) {
    func_0x0001092b4274(pppppppuVar24 + 0x18);
    pppppppuVar27 = pppppppuStack_350;
  }
LAB_10a8d9f38:
  pppppppuStack_350 = (undefined *******)0x0;
  goto LAB_10a8d9f3c;
}



/* Entry: 10a8d9210; end: 10a8da1c7;  */

/* WARNING: Removing unreachable block (ram,0x00010a8d9ad8) */
/* WARNING: Removing unreachable block (ram,0x00010a8d95c8) */
/* WARNING: Removing unreachable block (ram,0x00010a8d9b18) */
/* WARNING: Removing unreachable block (ram,0x00010a8d9d0c) */
/* WARNING: Removing unreachable block (ram,0x00010a8d9dd0) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_10a8d9210(long *param_1,undefined ********param_2)

{
  undefined ********ppppppppuVar1;
  ulong *puVar2;
  long *plVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  undefined7 uVar7;
  undefined1 uVar8;
  ulong uVar9;
  undefined ********ppppppppuVar10;
  undefined ********ppppppppuVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined ********ppppppppuVar16;
  undefined *******pppppppuVar17;
  undefined *******pppppppuVar18;
  undefined *****pppppuVar19;
  undefined8 *puVar20;
  undefined ********unaff_x20;
  long lVar21;
  long *plVar22;
  undefined *******pppppppuVar23;
  undefined8 *puVar24;
  undefined ******ppppppuVar25;
  undefined ******ppppppuVar26;
  undefined *******unaff_x24;
  uint uVar27;
  undefined ******ppppppuVar28;
  undefined *******unaff_x26;
  undefined *******pppppppuVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined ********ppppppppuStack_238;
  undefined1 auStack_230 [8];
  undefined ******ppppppuStack_228;
  undefined *******pppppppuStack_220;
  undefined ********ppppppppuStack_218;
  undefined *******pppppppuStack_210;
  undefined8 uStack_200;
  undefined7 uStack_1f8;
  undefined1 uStack_1f1;
  undefined8 uStack_1f0;
  undefined *******pppppppuStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  char cStack_1b9;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  undefined1 uStack_1a0;
  undefined2 uStack_19f;
  undefined *******pppppppuStack_198;
  undefined8 *apuStack_190 [7];
  code *pcStack_158;
  undefined8 *apuStack_150 [7];
  long lStack_118;
  long *plStack_110;
  undefined *******pppppppuStack_108;
  undefined *******pppppppuStack_100;
  undefined *******pppppppuStack_f8;
  undefined *******pppppppuStack_f0;
  code *pcStack_c8;
  undefined *******pppppppuStack_c0;
  undefined *******pppppppuStack_b8;
  long lStack_b0;
  long lStack_88;
  long *plStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar22 = param_1;
  ppppppppuVar16 = param_2;
  if ((*(byte *)(param_1 + 0x61) & 1) == 0) {
    FUN_10a8d4b90();
  }
  if (param_1[1] == 0) {
    ppppppppuVar11 = (undefined ********)&UNK_10f681700;
    FUN_10a00946c();
  }
  else {
    func_0x00010ad031c0();
    plVar3 = (long *)*plVar22;
    if (-1 < *(char *)((long)plVar22 + 0x17)) {
      plVar3 = plVar22;
    }
    func_0x000107c2b054(&uStack_200,plVar3);
    if (*(char *)((long)param_1 + 0x247) < '\0') {
      __ZdlPv(param_1[0x46]);
    }
    param_1[0x47] = CONCAT17(uStack_1f1,uStack_1f8);
    param_1[0x46] = CONCAT17(uStack_200._7_1_,(undefined7)uStack_200);
    param_1[0x48] = (long)uStack_1f0;
    *(char *)(param_1 + 0x49) = (char)param_1[0x5e];
    lVar21 = param_1[0x3f];
    lVar4 = param_1[0x40];
    uVar9 = (ulong)*(uint *)((long)param_1 + 0x2ec);
    FUN_10a8c09d8(uVar9);
    FUN_109d20fac(lVar21,lVar4 - lVar21 >> 2,uVar9,param_1[1] + 0x108,param_1 + 0x42,param_1 + 0x29)
    ;
    ppppppppuVar11 = (undefined ********)(param_1 + 0x5f);
    if (param_1[0x5f] == 0) {
      FUN_10a8da3cc(&uStack_200,param_1);
      FUN_10a8da5c8(&pppppppuStack_108,&uStack_200,param_1[1] + 0x168,param_1 + 0x3f,param_1 + 0x42)
      ;
      FUN_10a8da564(ppppppppuVar11,&pppppppuStack_108);
      pppppppuVar17 = pppppppuStack_100;
      if (pppppppuStack_100 != (undefined *******)0x0) {
        pppppppuVar18 = pppppppuStack_100 + 1;
        do {
          ppppppuVar28 = *pppppppuVar18;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppppppuVar18,0x10);
          if (bVar6) {
            *pppppppuVar18 = (undefined ******)((long)ppppppuVar28 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (ppppppuVar28 == (undefined ******)0x0) {
          (*(code *)(*pppppppuStack_100)[2])(pppppppuStack_100);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar17);
        }
      }
      if (cStack_1b9 < '\0') {
        __ZdlPv(uStack_1d0);
      }
      pppppppuStack_220 = (undefined *******)&pppppppuStack_1e8;
      FUN_10a04b2ac(&pppppppuStack_220);
      ppppppppuVar11 = &pppppppuStack_220;
      pppppppuStack_220 = (undefined *******)&uStack_200;
      FUN_10a04b2ac();
LAB_10a8d9494:
      pppppppuVar17 = (undefined *******)param_1[0x62];
      lVar21 = *(long *)(*param_1 + 0x8d8);
      if ((lVar21 != 0) && (ppppppuVar28 = *pppppppuVar17, ((ulong)ppppppuVar28[8] & 1) != 0)) {
        __ZNSt3__16chrono12steady_clock3nowEv();
        pppppppuStack_220 = (undefined *******)((ulong)pppppppuStack_220 & 0xffffffffffffff00);
        ppppppppuStack_218 = (undefined ********)0x0;
        pppppppuVar17 = (undefined *******)&pppppppuStack_220;
        func_0x00010945a80c(pppppppuVar17,"ml_build_request");
        ppppppuStack_228 = (undefined ******)0x0;
        auStack_230[0] = 3;
        ppppppuVar28 = ppppppuVar28 + 3;
        func_0x00010938229c();
        pppppppuVar18 = pppppppuVar17;
        ppppppuStack_228 = ppppppuVar28;
        func_0x00010945a80c(pppppppuVar17,&DAT_10f56f6ff);
        auStack_230[0] = *(undefined1 *)pppppppuVar18;
        *(undefined1 *)pppppppuVar18 = 3;
        ppppppuVar28 = pppppppuVar18[1];
        pppppppuVar18[1] = ppppppuStack_228;
        ppppppuStack_228 = ppppppuVar28;
        func_0x000109380ffc(&ppppppuStack_228);
        ppppppppuStack_238 = ppppppppuVar11;
        func_0x00010945a80c(pppppppuVar17,"start");
        *(undefined1 *)pppppppuVar17 = 5;
        pppppppuVar18 = (undefined *******)pppppppuVar17[1];
        pppppppuVar17[1] = (undefined ******)ppppppppuStack_238;
        ppppppppuStack_238 = (undefined ********)pppppppuVar18;
        func_0x000109380ffc(&ppppppppuStack_238);
        uStack_1f0 = (undefined **)CONCAT17(0xf,(undefined7)uStack_1f0);
        uStack_200._0_7_ = 0x4c4c4d68636554;
        uStack_200._7_1_ = 0x65;
        uStack_1f8 = 0x746e657645736e;
        uStack_1f1 = 0;
        FUN_10a0c32e4(&pppppppuStack_108,&pppppppuStack_220,0xffffffff,0x20,0,0);
        FUN_10a76bdb0(lVar21,&uStack_200,&pppppppuStack_108);
        if ((long)uStack_1f0 < 0) {
          __ZdlPv(CONCAT17(uStack_200._7_1_,(undefined7)uStack_200));
        }
        ppppppppuVar11 = (undefined ********)&ppppppppuStack_218;
        func_0x000109380ffc(ppppppppuVar11,(ulong)pppppppuStack_220 & 0xff);
        pppppppuVar17 = (undefined *******)param_1[0x62];
      }
      pppppppuStack_f0 = (undefined *******)param_1[99];
      if (pppppppuStack_f0 == (undefined *******)0x0) {
        lStack_b0 = 0;
        pppppppuStack_f0 = (undefined *******)0x0;
        pppppppuStack_b8 = pppppppuVar17;
      }
      else {
        pppppppuVar18 = pppppppuStack_f0 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppppppuVar18,0x10);
          if (bVar6) {
            *pppppppuVar18 = (undefined ******)((long)*pppppppuVar18 + 1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        pppppppuStack_b8 = (undefined *******)param_1[0x62];
        lStack_b0 = param_1[99];
        if (lStack_b0 != 0) {
          plVar22 = (long *)(lStack_b0 + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar6) {
              *plVar22 = *plVar22 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
      }
      pppppppuStack_100 = (undefined *******)&PTR_FUN_110c2ae90;
      pppppppuStack_108 = (undefined *******)0x10a8da720;
      unaff_x20 = &pppppppuStack_100;
      pcStack_c8 = FUN_10a8da778;
      pppppppuStack_c0 = (undefined *******)&PTR_FUN_110c2aea8;
      lStack_88 = param_1[0x65];
      plStack_80 = (long *)param_1[0x66];
      if (plStack_80 != (long *)0x0) {
        plVar22 = plStack_80 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar6) {
            *plVar22 = *plVar22 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      unaff_x24 = (undefined *******)&pppppppuStack_108;
      pppppppuStack_f8 = pppppppuVar17;
      FUN_10a8bb1fc();
      pppppppuVar17 = *ppppppppuVar11 + 0x11b;
      FUN_10a08fec0();
      lVar21 = *param_1;
      if ((((ulong)*pppppppuVar17 & 1) == 0) || (*(int *)(*(long *)(lVar21 + 0x100) + 0x2a8) == 8))
      {
        pbVar12 = *(byte **)(*(long *)(lVar21 + 0x8b8) + 0x20);
        if (pbVar12 == (byte *)0x0) {
LAB_10a8d96fc:
          if (1 < *(int *)(*(long *)(lVar21 + 0x100) + 0x2a8) - 7U) goto LAB_10a8d971c;
          FUN_10a8d40c0();
          if (((ulong)pbVar12 & 1) == 0) {
            lVar21 = *param_1;
            goto LAB_10a8d971c;
          }
          uVar27 = 0;
        }
        else {
          FUN_10a8b7988(pbVar12,&UNK_10f680bf1,0x1e);
          lVar21 = *param_1;
          if ((*pbVar12 & 1) == 0) goto LAB_10a8d96fc;
LAB_10a8d971c:
          uVar27 = (uint)(*(int *)(*(long *)(lVar21 + 0x100) + 0x2a8) != 8);
        }
        uVar27 = (uint)param_2 & uVar27;
      }
      else {
        uVar27 = 1;
      }
      *(undefined4 *)(param_1 + 0x28) = 0;
      lVar21 = param_1[0x60];
      uStack_200._0_7_ = (undefined7)param_1[0x5f];
      uStack_200._7_1_ = (undefined1)((ulong)param_1[0x5f] >> 0x38);
      uStack_1f8 = (undefined7)lVar21;
      uStack_1f1 = (undefined1)((ulong)lVar21 >> 0x38);
      if (lVar21 != 0) {
        plVar22 = (long *)(lVar21 + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar6) {
            *plVar22 = *plVar22 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      puVar13 = (undefined8 *)param_1[1];
      FUN_10a8c1848();
      uStack_1f0 = (undefined **)0x10a8da7d0;
      pppppppuStack_1e8 = (undefined *******)&PTR_DAT_110c2bdf0;
      uStack_1d8 = puVar13[1];
      uStack_1e0 = *puVar13;
      if (puVar13[1] != 0) {
        plVar22 = (long *)(puVar13[1] + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar6) {
            *plVar22 = *plVar22 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      FUN_10a8d5cd4();
      plStack_1a8 = (long *)puVar13[1];
      uStack_1b0 = *puVar13;
      if (puVar13[1] != 0) {
        plVar22 = (long *)(puVar13[1] + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar6) {
            *plVar22 = *plVar22 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      uStack_1a0 = (undefined1)uVar27;
      uStack_19f = 1;
      pppppppuStack_198 = pppppppuStack_108;
      unaff_x26 = (undefined *******)&uStack_200;
      (*(code *)pppppppuStack_100[2])(apuStack_190,unaff_x20);
      pcStack_158 = pcStack_c8;
      ppppppppuVar16 = &pppppppuStack_c0;
      (*(code *)pppppppuStack_c0[2])(apuStack_150);
      plStack_110 = plStack_80;
      lStack_118 = lStack_88;
      lStack_88 = 0;
      plStack_80 = (long *)0x0;
      FUN_109d23f70(&pppppppuStack_220,&uStack_200);
      pppppppuVar17 = (undefined *******)(param_1 + 0x53);
      if ((undefined ********)pppppppuVar17 != &pppppppuStack_220) {
        if (*pppppppuVar17 != (undefined ******)0x0) {
          ppppppuVar28 = *pppppppuVar17 + 3;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar28,0x10);
            if (bVar6) {
              *(int *)ppppppuVar28 = *(int *)ppppppuVar28 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          func_0x00010a8d4cd8(pppppppuVar17);
        }
        ppppppppuVar11 = ppppppppuStack_218;
        pppppppuVar18 = pppppppuStack_220;
        pppppppuStack_220 = (undefined *******)0x0;
        ppppppppuStack_218 = (undefined ********)0x0;
        plVar22 = (long *)param_1[0x54];
        param_1[0x54] = (long)ppppppppuVar11;
        *pppppppuVar17 = (undefined ******)pppppppuVar18;
        if (plVar22 != (long *)0x0) {
          plVar3 = plVar22 + 1;
          do {
            lVar21 = *plVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar6) {
              *plVar3 = lVar21 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar21 == 0) {
            (**(code **)(*plVar22 + 0x10))(plVar22);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
          }
        }
      }
      ppppppppuVar11 = ppppppppuStack_218;
      if (pppppppuStack_220 != (undefined *******)0x0) {
        pppppppuVar18 = pppppppuStack_220 + 3;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppppppuVar18,0x10);
          if (bVar6) {
            *(int *)pppppppuVar18 = *(int *)pppppppuVar18 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if (ppppppppuStack_218 != (undefined ********)0x0) {
        ppppppppuVar10 = ppppppppuStack_218 + 1;
        do {
          pppppppuVar18 = *ppppppppuVar10;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar10,0x10);
          if (bVar6) {
            *ppppppppuVar10 = (undefined *******)((long)pppppppuVar18 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (pppppppuVar18 == (undefined *******)0x0) {
          (*(code *)(*ppppppppuStack_218)[2])(ppppppppuStack_218);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppppuVar11);
        }
      }
      plVar22 = plStack_110;
      if (plStack_110 != (long *)0x0) {
        plVar3 = plStack_110 + 1;
        do {
          lVar21 = *plVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *plVar3 = lVar21 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar21 == 0) {
          (**(code **)(*plStack_110 + 0x10))(plStack_110);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
        }
      }
      (*(code *)*apuStack_150[0])(apuStack_150);
      (*(code *)*apuStack_190[0])(apuStack_190);
      plVar22 = plStack_1a8;
      if (plStack_1a8 != (long *)0x0) {
        plVar3 = plStack_1a8 + 1;
        do {
          lVar21 = *plVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *plVar3 = lVar21 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar21 == 0) {
          (**(code **)(*plStack_1a8 + 0x10))(plStack_1a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
        }
      }
      (*(code *)*pppppppuStack_1e8)(&pppppppuStack_1e8);
      plVar22 = (long *)CONCAT17(uStack_1f1,uStack_1f8);
      if (plVar22 != (long *)0x0) {
        plVar3 = plVar22 + 1;
        do {
          lVar21 = *plVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *plVar3 = lVar21 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar21 == 0) {
          (**(code **)(*plVar22 + 0x10))(plVar22);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
        }
      }
      if ((((char)param_1[0x59] == '\x01') && (*pppppppuVar17 != (undefined ******)0x0)) &&
         (ppppppuVar28 = (undefined ******)(*pppppppuVar17)[2],
         ppppppuVar28 != (undefined ******)0x0)) {
        ppppppuVar25 = ppppppuVar28 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar25,0x10);
          if (bVar6) {
            *ppppppuVar25 = (undefined *****)((long)*ppppppuVar25 + 4);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        pppppppuVar18 = (undefined *******)0x118;
        __Znwm();
        pppppppuVar18[2] = (undefined ******)0x0;
        pppppppuVar18[1] = (undefined ******)0x200000006;
        *(undefined2 *)(pppppppuVar18 + 3) = 4;
        pppppppuVar18[5] = (undefined ******)0x0;
        pppppppuVar18[4] = (undefined ******)0x0;
        pppppppuVar18[7] = (undefined ******)0x0;
        pppppppuVar18[6] = (undefined ******)0x0;
        pppppppuVar18[9] = (undefined ******)0x0;
        pppppppuVar18[8] = (undefined ******)0x0;
        pppppppuVar18[0xb] = (undefined ******)0x0;
        pppppppuVar18[10] = (undefined ******)0x0;
        pppppppuVar18[0xd] = (undefined ******)0x0;
        pppppppuVar18[0xc] = (undefined ******)0x0;
        pppppppuVar18[0xf] = (undefined ******)0x0;
        pppppppuVar18[0xe] = (undefined ******)0x0;
        pppppppuVar18[0x10] = (undefined ******)0x0;
        pppppppuVar18[0x11] = (undefined ******)(pppppppuVar18 + 3);
        pppppppuVar18[0x12] = (undefined ******)0x0;
        *(undefined1 *)(pppppppuVar18 + 0x13) = 0;
        *(undefined1 *)(pppppppuVar18 + 0x15) = 0;
        *pppppppuVar18 = (undefined ******)&PTR_FUN_110c2aed0;
        pppppppuVar29 = pppppppuVar18 + 0x16;
        *pppppppuVar29 = ppppppuVar28;
        ppppppuVar28 = (undefined ******)param_1[0x58] + 1;
        pppppppuVar18[0x17] = (undefined ******)param_1[0x58];
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar28,0x10);
          if (bVar6) {
            *ppppppuVar28 = (undefined *****)((long)*ppppppuVar28 + 4);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        pppppppuVar18[0x1a] = (undefined ******)0x0;
        pppppppuVar18[0x1b] = (undefined ******)0x32aaaba7;
        pppppppuVar18[0x1d] = (undefined ******)0x0;
        pppppppuVar18[0x1c] = (undefined ******)0x0;
        pppppppuVar18[0x1f] = (undefined ******)0x0;
        pppppppuVar18[0x1e] = (undefined ******)0x0;
        pppppppuVar18[0x21] = (undefined ******)0x0;
        pppppppuVar18[0x20] = (undefined ******)0x0;
        pppppppuVar18[0x22] = (undefined ******)0x0;
        ppppppppuStack_218 = (undefined ********)0x0;
        pppppppuVar18[0x18] = (undefined ******)pppppppuVar18;
        pppppppuVar18[0x19] = (undefined ******)0x0;
        pppppppuStack_220 = pppppppuVar18;
        pppppppuStack_210 = pppppppuVar29;
        if (((uint)pppppppuVar18[0x17][2] >> 1 & 1) == 0) {
          __ZNSt3__15mutex4lockEv(pppppppuVar18 + 0x1b);
          ppppppuVar25 = *pppppppuVar29;
          ppppppuVar28 = ppppppuVar25 + 2;
          do {
            pppppuVar19 = *ppppppuVar28;
            if (pppppuVar19 == (undefined *****)0x0) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar28,0x10);
              if (bVar6) {
                *ppppppuVar28 = (undefined *****)0x1;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') {
                ppppppuVar28 = ppppppuVar25 + 3;
                uStack_200._0_7_ = 0x10a8da86c;
                uStack_200._7_1_ = 0;
                uStack_1f8 = SUB87(pppppppuVar29,0);
                uVar7 = uStack_1f8;
                uStack_1f1 = (undefined1)((ulong)pppppppuVar29 >> 0x38);
                uVar8 = uStack_1f1;
                uStack_1f0 = &PTR_PTR_1132fed68;
                func_0x000109d1b588(ppppppuVar28,&uStack_200);
                ppppppuVar25[2] = (undefined *****)0x0;
                pppppppuStack_210[3] = ppppppuVar28;
                ppppppuVar26 = pppppppuVar18[0x17];
                ppppppuVar25 = ppppppuVar26 + 2;
                goto LAB_10a8d9cf8;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)pppppuVar19 >> 1 & 1) == 0);
          pppppppuStack_210[3] = (undefined ******)0x0;
          ppppppuVar25 = pppppppuVar18[0x18];
          ppppppuVar28 = ppppppuVar25 + 2;
          do {
            pppppuVar19 = *ppppppuVar28;
            if (pppppuVar19 == (undefined *****)0x0) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar28,0x10);
              if (bVar6) {
                *ppppppuVar28 = (undefined *****)0x2;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') {
                func_0x000109d1b4dc(ppppppuVar25 + 3);
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)pppppuVar19 >> 1 & 1) == 0);
          ppppppuVar28 = pppppppuVar18[0x17];
          pppppppuVar18[0x17] = (undefined ******)0x0;
          if (ppppppuVar28 != (undefined ******)0x0) {
            ppppppuVar25 = ppppppuVar28 + 1;
            do {
              pppppuVar19 = *ppppppuVar25;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar25,0x10);
              if (bVar6) {
                *ppppppuVar25 = (undefined *****)((long)pppppuVar19 + -4);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (((ulong)pppppuVar19 & 0x1fffffffc) == 4) {
              (*(code *)(*ppppppuVar28)[2])(ppppppuVar28);
              do {
                pppppuVar19 = *ppppppuVar25;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar25,0x10);
                if (bVar6) {
                  *ppppppuVar25 = (undefined *****)((long)pppppuVar19 + -1);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if ((undefined *****)((long)pppppuVar19 + -1) == (undefined *****)0x0) {
                (*(code *)(*ppppppuVar28)[1])(ppppppuVar28);
              }
            }
          }
          ppppppuVar28 = pppppppuVar18[0x18];
          pppppppuVar18[0x18] = (undefined ******)0x0;
          if (ppppppuVar28 != (undefined ******)0x0) {
            func_0x0001092b4274(pppppppuVar18 + 0x18);
          }
          pppppppuVar23 = (undefined *******)*pppppppuVar29;
          *pppppppuVar29 = (undefined ******)0x0;
LAB_10a8d9f3c:
          __ZNSt3__15mutex6unlockEv(pppppppuVar18 + 0x1b);
          unaff_x26 = pppppppuVar29;
        }
        else {
          ppppppuVar28 = pppppppuVar18[0x18];
          pppppppuVar23 = pppppppuVar18;
          FUN_109d1857c();
          func_0x000109d1b350(ppppppuVar28,pppppppuVar23);
          ppppppuVar28 = *pppppppuVar29;
          *pppppppuVar29 = (undefined ******)0x0;
          if (ppppppuVar28 != (undefined ******)0x0) {
            ppppppuVar25 = ppppppuVar28 + 1;
            do {
              pppppuVar19 = *ppppppuVar25;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar25,0x10);
              if (bVar6) {
                *ppppppuVar25 = (undefined *****)((long)pppppuVar19 + -4);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (((ulong)pppppuVar19 & 0x1fffffffc) == 4) {
              do {
                pppppuVar19 = *ppppppuVar25;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar25,0x10);
                if (bVar6) {
                  *ppppppuVar25 = (undefined *****)((long)pppppuVar19 + -1);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if ((undefined *****)((long)pppppuVar19 + -1) == (undefined *****)0x0) {
                (*(code *)(*ppppppuVar28)[1])();
              }
            }
          }
          ppppppuVar28 = pppppppuVar18[0x17];
          pppppppuVar18[0x17] = (undefined ******)0x0;
          if (ppppppuVar28 != (undefined ******)0x0) {
            unaff_x26 = (undefined *******)(ppppppuVar28 + 1);
            do {
              ppppppuVar25 = *unaff_x26;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(unaff_x26,0x10);
              if (bVar6) {
                *unaff_x26 = (undefined ******)((long)ppppppuVar25 + -4);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (((ulong)ppppppuVar25 & 0x1fffffffc) == 4) {
              (*(code *)(*ppppppuVar28)[2])(ppppppuVar28);
              do {
                ppppppuVar25 = *unaff_x26;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(unaff_x26,0x10);
                if (bVar6) {
                  *unaff_x26 = (undefined ******)((long)ppppppuVar25 + -1);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if ((undefined ******)((long)ppppppuVar25 + -1) == (undefined ******)0x0) {
                (*(code *)(*ppppppuVar28)[1])(ppppppuVar28);
              }
            }
          }
          ppppppuVar28 = pppppppuVar18[0x18];
          pppppppuVar18[0x18] = (undefined ******)0x0;
          if (ppppppuVar28 != (undefined ******)0x0) {
            func_0x0001092b4274(pppppppuVar18 + 0x18);
          }
          pppppppuVar23 = pppppppuStack_220;
          pppppppuStack_220 = (undefined *******)0x0;
        }
        ppppppppuVar16 = ppppppppuStack_218;
        if (ppppppppuStack_218 != (undefined ********)0x0) {
          func_0x0001092b4274(&ppppppppuStack_218);
        }
        if (pppppppuStack_220 != (undefined *******)0x0) {
          pppppppuVar18 = pppppppuStack_220 + 1;
          do {
            ppppppuVar28 = *pppppppuVar18;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppppppuVar18,0x10);
            if (bVar6) {
              *pppppppuVar18 = (undefined ******)((long)ppppppuVar28 + -4);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (((ulong)ppppppuVar28 & 0x1fffffffc) == 4) {
            do {
              ppppppuVar28 = *pppppppuVar18;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(pppppppuVar18,0x10);
              if (bVar6) {
                *pppppppuVar18 = (undefined ******)((long)ppppppuVar28 + -1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if ((undefined ******)((long)ppppppuVar28 + -1) == (undefined ******)0x0) {
              (*(code *)(*pppppppuStack_220)[1])();
            }
          }
        }
        plVar22 = (long *)param_1[0x55];
        if (plVar22 != (long *)0x0) {
          puVar2 = (ulong *)(plVar22 + 1);
          do {
            uVar9 = *puVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = uVar9 - 4;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((uVar9 & 0x1fffffffc) == 4) {
            do {
              uVar9 = *puVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar6) {
                *puVar2 = uVar9 - 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (uVar9 - 1 == 0) {
              (**(code **)(*plVar22 + 8))();
            }
          }
        }
        param_1[0x55] = (long)pppppppuVar23;
      }
      else {
        plVar22 = (long *)param_1[0x55];
        if (plVar22 != (long *)0x0) {
          puVar2 = (ulong *)(plVar22 + 1);
          do {
            uVar9 = *puVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = uVar9 - 4;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((uVar9 & 0x1fffffffc) == 4) {
            do {
              uVar9 = *puVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar6) {
                *puVar2 = uVar9 - 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (uVar9 - 1 == 0) {
              (**(code **)(*plVar22 + 8))();
            }
          }
        }
        param_1[0x55] = 0;
      }
      if (((uVar27 == 0) && (*pppppppuVar17 != (undefined ******)0x0)) &&
         ((*pppppppuVar17)[2] != (undefined *****)0x0)) {
        ppppppppuVar16 = (undefined ********)&UNK_10f68165b;
        FUN_10a8da354(param_1);
        FUN_10a8c7000(param_1);
      }
      plVar22 = plStack_80;
      if (plStack_80 != (long *)0x0) {
        plVar3 = plStack_80 + 1;
        do {
          lVar21 = *plVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *plVar3 = lVar21 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar21 == 0) {
          (**(code **)(*plStack_80 + 0x10))(plStack_80);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
        }
      }
      (*(code *)*pppppppuStack_c0)(&pppppppuStack_c0);
      ppppppppuVar11 = unaff_x20;
      (*(code *)*pppppppuStack_100)();
    }
    else {
      FUN_10a8da3cc(&uStack_200,param_1);
      FUN_10a8da5c8(&pppppppuStack_220,&uStack_200,param_1[1] + 0x168,param_1 + 0x3f,param_1 + 0x42)
      ;
      if (cStack_1b9 < '\0') {
        __ZdlPv(uStack_1d0);
      }
      pppppppuStack_108 = (undefined *******)&pppppppuStack_1e8;
      FUN_10a04b2ac(&pppppppuStack_108);
      pppppppuStack_108 = (undefined *******)&uStack_200;
      FUN_10a04b2ac(&pppppppuStack_108);
      pppppppuVar17 = *ppppppppuVar11;
      uStack_1f0 = (undefined **)(pppppppuVar17 + 0xc);
      pppppppuStack_1e8 = pppppppuVar17 + 0xf;
      uStack_200._0_7_ = SUB87(pppppppuVar17,0);
      uStack_200._7_1_ = (undefined1)((ulong)pppppppuVar17 >> 0x38);
      uStack_1f8 = SUB87(pppppppuVar17 + 9,0);
      uStack_1f1 = (undefined1)((ulong)(pppppppuVar17 + 9) >> 0x38);
      pppppppuStack_100 = pppppppuStack_220 + 9;
      pppppppuStack_f8 = pppppppuStack_220 + 0xc;
      pppppppuStack_f0 = pppppppuStack_220 + 0xf;
      pppppppuStack_108 = pppppppuStack_220;
      ppppppppuVar10 = (undefined ********)auStack_230;
      ppppppppuVar16 = (undefined ********)&uStack_200;
      FUN_109d2d6b8(ppppppppuVar10,ppppppppuVar16,&pppppppuStack_108);
      if (((ulong)ppppppppuVar10 & 1) == 0) {
        func_0x00010a8d4768(param_1);
        ppppppppuVar16 = &pppppppuStack_220;
        FUN_10a8da564();
      }
      else {
        ppppppppuVar11 = ppppppppuVar10;
        if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
          ppppppppuVar11 = (undefined ********)0x1;
          ppppppppuVar16 = (undefined ********)0x2;
          func_0x00010ae06f08(1,2,&UNK_10f6812de,&UNK_10f68166d,0xb9,&UNK_10f6816c0);
        }
      }
      unaff_x20 = ppppppppuStack_218;
      if (ppppppppuStack_218 != (undefined ********)0x0) {
        ppppppppuVar1 = ppppppppuStack_218 + 1;
        do {
          pppppppuVar17 = *ppppppppuVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppppppppuVar1,0x10);
          if (bVar6) {
            *ppppppppuVar1 = (undefined *******)((long)pppppppuVar17 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (pppppppuVar17 == (undefined *******)0x0) {
          (*(code *)(*ppppppppuStack_218)[2])(ppppppppuStack_218);
          ppppppppuVar11 = unaff_x20;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
      if (((ulong)ppppppppuVar10 & 1) == 0) goto LAB_10a8d9494;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      auVar30._8_8_ = ppppppppuVar16;
      auVar30._0_8_ = ppppppppuVar11;
      return auVar30;
    }
  }
  ___stack_chk_fail();
  __ZNSt3__15mutex6unlockEv(unaff_x26 + 5);
  FUN_10a8daae8(&pppppppuStack_220);
  FUN_10a8d4068(unaff_x24 + 0x10);
  (*(code *)*pppppppuStack_c0)(unaff_x24 + 9);
  (*(code *)*pppppppuStack_100)(unaff_x20);
  __Unwind_Resume(ppppppppuVar11);
  puVar14 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (ppppppppuVar16 < (undefined ********)0x2e8ba2e8ba2e8bb) {
    lVar21 = (long)ppppppppuVar16 * 0x58;
    __Znwm(lVar21);
    auVar31._8_8_ = ppppppppuVar16;
    auVar31._0_8_ = lVar21;
    return auVar31;
  }
  func_0x000109ffded8();
  puVar20 = (undefined8 *)(puVar14 + 8);
  puVar24 = (undefined8 *)*puVar20;
  ppppppppuVar11 = ppppppppuVar16;
  puVar13 = puVar20;
  if (puVar24 != (undefined8 *)0x0) {
    do {
      puVar15 = puVar24 + 4;
      ppppppppuVar11 = ppppppppuVar16;
      FUN_10a003e3c(puVar15,ppppppppuVar16);
      if (-1 < (char)puVar15) {
        puVar13 = puVar24;
      }
      puVar24 = *(undefined8 **)((long)puVar24 + ((ulong)puVar15 >> 4 & 8));
    } while (puVar24 != (undefined8 *)0x0);
    if (puVar13 != puVar20) {
      ppppppppuVar11 = (undefined ********)(puVar13 + 4);
      FUN_10a003e3c(ppppppppuVar16,ppppppppuVar11);
      if (((uint)ppppppppuVar16 >> 7 & 1) == 0) goto LAB_10a8da28c;
    }
  }
  puVar13 = puVar20;
LAB_10a8da28c:
  auVar32._8_8_ = ppppppppuVar11;
  auVar32._0_8_ = puVar13;
  return auVar32;
LAB_10a8d9cf8:
  do {
    pppppuVar19 = *ppppppuVar25;
    if (pppppuVar19 == (undefined *****)0x0) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar25,0x10);
      if (bVar6) {
        *ppppppuVar25 = (undefined *****)0x1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
        ppppppuVar28 = ppppppuVar26 + 3;
        uStack_200._0_7_ = 0x10a8daa08;
        uStack_200._7_1_ = 0;
        uStack_1f0 = &PTR_PTR_1132fed68;
        uStack_1f8 = uVar7;
        uStack_1f1 = uVar8;
        func_0x000109d1b588(ppppppuVar28,&uStack_200);
        ppppppuVar26[2] = (undefined *****)0x0;
        pppppppuStack_210[4] = ppppppuVar28;
        pppppppuVar23 = pppppppuStack_220;
        goto LAB_10a8d9f38;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  } while (((uint)pppppuVar19 >> 1 & 1) == 0);
  pppppppuStack_210[4] = (undefined ******)0x0;
  ppppppuVar25 = pppppppuVar18[0x18];
  FUN_109d1857c();
  func_0x000109d1b350(ppppppuVar25,ppppppuVar28);
  ppppppuVar28 = pppppppuVar18[0x17];
  pppppppuVar18[0x17] = (undefined ******)0x0;
  if (ppppppuVar28 != (undefined ******)0x0) {
    ppppppuVar25 = ppppppuVar28 + 1;
    do {
      pppppuVar19 = *ppppppuVar25;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar25,0x10);
      if (bVar6) {
        *ppppppuVar25 = (undefined *****)((long)pppppuVar19 + -4);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (((ulong)pppppuVar19 & 0x1fffffffc) == 4) {
      (*(code *)(*ppppppuVar28)[2])(ppppppuVar28);
      do {
        pppppuVar19 = *ppppppuVar25;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar25,0x10);
        if (bVar6) {
          *ppppppuVar25 = (undefined *****)((long)pppppuVar19 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((undefined *****)((long)pppppuVar19 + -1) == (undefined *****)0x0) {
        (*(code *)(*ppppppuVar28)[1])(ppppppuVar28);
      }
    }
  }
  ppppppuVar26 = *pppppppuVar29;
  ppppppuVar28 = ppppppuVar26 + 2;
  ppppppuVar25 = pppppppuStack_210[3];
  while (pppppuVar19 = *ppppppuVar28, pppppuVar19 != (undefined *****)0x0) {
    ClearExclusiveLocal();
LAB_10a8d9de4:
    pppppppuVar23 = pppppppuStack_220;
    if (((uint)pppppuVar19 >> 1 & 1) != 0) goto LAB_10a8d9f38;
  }
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar28,0x10);
  if (bVar6) {
    *ppppppuVar28 = (undefined *****)0x1;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 != '\0') goto LAB_10a8d9de4;
  uStack_200._0_7_ = 0x10a8da86c;
  uStack_200._7_1_ = 0;
  uStack_1f0 = &PTR_PTR_1132fed68;
  uStack_1f8 = uVar7;
  uStack_1f1 = uVar8;
  FUN_109d1b624(ppppppuVar26 + 3,&uStack_200,ppppppuVar25);
  ppppppuVar26[2] = (undefined *****)0x0;
  pppppppuStack_210[3] = (undefined ******)0x0;
  ppppppuVar28 = *pppppppuVar29;
  *pppppppuVar29 = (undefined ******)0x0;
  if (ppppppuVar28 != (undefined ******)0x0) {
    ppppppuVar25 = ppppppuVar28 + 1;
    do {
      pppppuVar19 = *ppppppuVar25;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar25,0x10);
      if (bVar6) {
        *ppppppuVar25 = (undefined *****)((long)pppppuVar19 + -4);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (((ulong)pppppuVar19 & 0x1fffffffc) == 4) {
      do {
        pppppuVar19 = *ppppppuVar25;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar25,0x10);
        if (bVar6) {
          *ppppppuVar25 = (undefined *****)((long)pppppuVar19 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((undefined *****)((long)pppppuVar19 + -1) == (undefined *****)0x0) {
        (*(code *)(*ppppppuVar28)[1])();
      }
    }
  }
  ppppppuVar28 = pppppppuVar18[0x18];
  pppppppuVar18[0x18] = (undefined ******)0x0;
  pppppppuVar23 = pppppppuStack_220;
  if (ppppppuVar28 != (undefined ******)0x0) {
    func_0x0001092b4274(pppppppuVar18 + 0x18);
    pppppppuVar23 = pppppppuStack_220;
  }
LAB_10a8d9f38:
  pppppppuStack_220 = (undefined *******)0x0;
  goto LAB_10a8d9f3c;
}



/* Entry: 10a8da1c8; end: 10a8da1db;  */

undefined1  [16] FUN_10a8da1c8(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 < (undefined8 *)0x2e8ba2e8ba2e8bb) {
    lVar2 = (long)param_2 * 0x58;
    __Znwm(lVar2);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar2;
    return auVar8;
  }
  func_0x000109ffded8();
  puVar5 = (undefined8 *)(puVar1 + 8);
  puVar7 = (undefined8 *)*puVar5;
  puVar4 = param_2;
  puVar6 = puVar5;
  if (puVar7 != (undefined8 *)0x0) {
    do {
      puVar3 = puVar7 + 4;
      puVar4 = param_2;
      FUN_10a003e3c(puVar3,param_2);
      if (-1 < (char)puVar3) {
        puVar6 = puVar7;
      }
      puVar7 = *(undefined8 **)((long)puVar7 + ((ulong)puVar3 >> 4 & 8));
    } while (puVar7 != (undefined8 *)0x0);
    if (puVar6 != puVar5) {
      puVar4 = puVar6 + 4;
      FUN_10a003e3c(param_2,puVar4);
      if (((uint)param_2 >> 7 & 1) == 0) goto LAB_10a8da28c;
    }
  }
  puVar6 = puVar5;
LAB_10a8da28c:
  auVar9._8_8_ = puVar4;
  auVar9._0_8_ = puVar6;
  return auVar9;
}



/* Entry: 10a8da1dc; end: 10a8da223;  */

undefined1  [16] FUN_10a8da1dc(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (param_2 < (long *)0x2e8ba2e8ba2e8bb) {
    lVar1 = (long)param_2 * 0x58;
    __Znwm(lVar1);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = lVar1;
    return auVar7;
  }
  func_0x000109ffded8();
  plVar4 = (long *)(param_1 + 8);
  plVar6 = (long *)*plVar4;
  plVar3 = param_2;
  plVar5 = plVar4;
  if (plVar6 != (long *)0x0) {
    do {
      plVar2 = plVar6 + 4;
      plVar3 = param_2;
      FUN_10a003e3c(plVar2,param_2);
      if (-1 < (char)plVar2) {
        plVar5 = plVar6;
      }
      plVar6 = *(long **)((long)plVar6 + ((ulong)plVar2 >> 4 & 8));
    } while (plVar6 != (long *)0x0);
    if (plVar5 != plVar4) {
      plVar3 = plVar5 + 4;
      FUN_10a003e3c(param_2,plVar3);
      if (((uint)param_2 >> 7 & 1) == 0) goto LAB_10a8da28c;
    }
  }
  plVar5 = plVar4;
LAB_10a8da28c:
  auVar8._8_8_ = plVar3;
  auVar8._0_8_ = plVar5;
  return auVar8;
}



/* Entry: 10a8da224; end: 10a8da29f;  */

long * FUN_10a8da224(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar2;
  plVar3 = plVar2;
  if (plVar4 != (long *)0x0) {
    do {
      plVar1 = plVar4 + 4;
      FUN_10a003e3c(plVar1,param_2);
      if (-1 < (char)plVar1) {
        plVar3 = plVar4;
      }
      plVar4 = *(long **)((long)plVar4 + ((ulong)plVar1 >> 4 & 8));
    } while (plVar4 != (long *)0x0);
    if ((plVar3 != plVar2) && (FUN_10a003e3c(param_2,plVar3 + 4), ((uint)param_2 >> 7 & 1) == 0)) {
      return plVar3;
    }
  }
  return plVar2;
}



/* Entry: 10a8da2a0; end: 10a8da2f7;  */

long FUN_10a8da2a0(long param_1)

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



/* Entry: 10a8da2f8; end: 10a8da353;  */

void FUN_10a8da2f8(void)

{
  return;
}



/* Entry: 10a8da354; end: 10a8da3cb;  */

void FUN_10a8da354(undefined8 *param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long unaff_x19;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uStack_28;
  
  if (param_1[0x55] == 0) {
    if (param_1[0x53] != 0) {
      plVar7 = (long *)(param_1[0x53] + 0x10);
      if (((uint)*(undefined8 *)(*plVar7 + 0x10) >> 1 & 1) == 0) {
        _semaphore_create(*(undefined4 *)PTR__mach_task_self__11034c5c8,(long)&uStack_28 + 4,0,0);
        FUN_109d1af88(*plVar7 + 0x10,FUN_109d1a2cc,(long)&uStack_28 + 4);
        do {
          iVar3 = (int)((ulong)uStack_28 >> 0x20);
          _semaphore_wait();
        } while (iVar3 == 0xe);
        FUN_109d1b6f4((long)&uStack_28 + 4);
      }
      return;
    }
  }
  else {
    FUN_109d1a244(param_1 + 0x55);
    unaff_x19 = param_2;
    if (param_1[0x53] != 0) {
      if (((uint)*(undefined8 *)(*(long *)(param_1[0x53] + 0x10) + 0x10) >> 1 & 1) != 0) {
        return;
      }
      goto LAB_10a8da3c0;
    }
  }
  func_0x000105688514(&UNK_10f681734);
LAB_10a8da3c0:
  FUN_10a8d830c();
  uStack_28 = FUN_10a8da3cc;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  func_0x000109378e2c();
  func_0x000109378e2c(param_1 + 3,*(undefined8 *)(unaff_x19 + 0x60));
  plVar7 = *(long **)(unaff_x19 + 0x38);
  if (plVar7 != (long *)(unaff_x19 + 0x40)) {
    puVar5 = (undefined8 *)param_1[1];
    do {
      lVar4 = plVar7[7];
      if (puVar5 < (undefined8 *)param_1[2]) {
        FUN_10a8da650(puVar5,lVar4 + 0x30,lVar4 + 0x48);
        puVar5 = puVar5 + 0xb;
      }
      else {
        puVar5 = param_1;
        func_0x0001094c81b8(param_1,lVar4 + 0x30,lVar4 + 0x48);
      }
      param_1[1] = puVar5;
      plVar1 = (long *)plVar7[1];
      plVar6 = plVar7;
      if ((long *)plVar7[1] == (long *)0x0) {
        do {
          plVar7 = (long *)plVar6[2];
          bVar2 = (long *)*plVar7 != plVar6;
          plVar6 = plVar7;
        } while (bVar2);
      }
      else {
        do {
          plVar7 = plVar1;
          plVar1 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
    } while (plVar7 != (long *)(unaff_x19 + 0x40));
  }
  plVar7 = *(long **)(unaff_x19 + 0x50);
  if (plVar7 != (long *)(unaff_x19 + 0x58)) {
    puVar5 = (undefined8 *)param_1[4];
    do {
      if (puVar5 < (undefined8 *)param_1[5]) {
        func_0x00010a8da6bc(puVar5,plVar7[7] + 0x30);
        puVar5 = puVar5 + 0xb;
      }
      else {
        puVar5 = param_1 + 3;
        func_0x000109378fd0(puVar5,plVar7[7] + 0x30);
      }
      param_1[4] = puVar5;
      plVar1 = (long *)plVar7[1];
      plVar6 = plVar7;
      if ((long *)plVar7[1] == (long *)0x0) {
        do {
          plVar7 = (long *)plVar6[2];
          bVar2 = (long *)*plVar7 != plVar6;
          plVar6 = plVar7;
        } while (bVar2);
      }
      else {
        do {
          plVar7 = plVar1;
          plVar1 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
    } while (plVar7 != (long *)(unaff_x19 + 0x58));
  }
  return;
}



/* Entry: 10a8da3cc; end: 10a8da563;  */

void FUN_10a8da3cc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  func_0x000109378e2c(param_1,*(undefined8 *)(param_2 + 0x48));
  func_0x000109378e2c(param_1 + 3,*(undefined8 *)(param_2 + 0x60));
  plVar6 = *(long **)(param_2 + 0x38);
  if (plVar6 != (long *)(param_2 + 0x40)) {
    puVar4 = (undefined8 *)param_1[1];
    do {
      lVar3 = plVar6[7];
      if (puVar4 < (undefined8 *)param_1[2]) {
        FUN_10a8da650(puVar4,lVar3 + 0x30,lVar3 + 0x48);
        puVar4 = puVar4 + 0xb;
      }
      else {
        puVar4 = param_1;
        func_0x0001094c81b8(param_1,lVar3 + 0x30,lVar3 + 0x48);
      }
      param_1[1] = puVar4;
      plVar1 = (long *)plVar6[1];
      plVar5 = plVar6;
      if ((long *)plVar6[1] == (long *)0x0) {
        do {
          plVar6 = (long *)plVar5[2];
          bVar2 = (long *)*plVar6 != plVar5;
          plVar5 = plVar6;
        } while (bVar2);
      }
      else {
        do {
          plVar6 = plVar1;
          plVar1 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
    } while (plVar6 != (long *)(param_2 + 0x40));
  }
  plVar6 = *(long **)(param_2 + 0x50);
  if (plVar6 != (long *)(param_2 + 0x58)) {
    puVar4 = (undefined8 *)param_1[4];
    do {
      if (puVar4 < (undefined8 *)param_1[5]) {
        func_0x00010a8da6bc(puVar4,plVar6[7] + 0x30);
        puVar4 = puVar4 + 0xb;
      }
      else {
        puVar4 = param_1 + 3;
        func_0x000109378fd0(puVar4,plVar6[7] + 0x30);
      }
      param_1[4] = puVar4;
      plVar1 = (long *)plVar6[1];
      plVar5 = plVar6;
      if ((long *)plVar6[1] == (long *)0x0) {
        do {
          plVar6 = (long *)plVar5[2];
          bVar2 = (long *)*plVar6 != plVar5;
          plVar5 = plVar6;
        } while (bVar2);
      }
      else {
        do {
          plVar6 = plVar1;
          plVar1 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
    } while (plVar6 != (long *)(param_2 + 0x58));
  }
  return;
}



/* Entry: 10a8da564; end: 10a8da5c7;  */

undefined8 * FUN_10a8da564(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a8da5c8; end: 10a8da64f;  */

void FUN_10a8da5c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x110;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_FUN_110b3f9c8;
  FUN_109d2bac0(puVar2,param_2,param_3,param_4,param_5);
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a8da650; end: 10a8da753;  */

undefined8 * FUN_10a8da650(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
  uVar1 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar1;
  *(undefined4 *)(param_1 + 5) = 1;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  return param_1;
}



/* Entry: 10a8da754; end: 10a8da777;  */

long FUN_10a8da754(long param_1)

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



/* Entry: 10a8da778; end: 10a8da7ab;  */

void FUN_10a8da778(long param_1)

{
  long lVar1;
  
  lVar1 = **(long **)(param_1 + 0x10);
  if (*(char *)(lVar1 + 0x40) == '\x01') {
    __ZNSt3__16chrono12steady_clock3nowEv();
    *(long *)(lVar1 + 0x38) = param_1;
  }
  return;
}



/* Entry: 10a8da7ac; end: 10a8da813;  */

long FUN_10a8da7ac(long param_1)

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



/* Entry: 10a8da814; end: 10a8da86b;  */

long FUN_10a8da814(long param_1)

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



/* Entry: 10a8da86c; end: 10a8daa07;  */

void FUN_10a8da86c(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  code *pcStack_48;
  long *plStack_40;
  undefined **ppuStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 5);
  pcStack_48 = FUN_10a8daa08;
  ppuStack_38 = &PTR_PTR_1132fed68;
  plStack_40 = param_1;
  func_0x0001092ba560(param_1 + 1,param_1 + 4,&pcStack_48);
  lVar8 = param_1[2];
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    func_0x0001092af8bc(param_1);
    lVar9 = *param_1;
    if ((*(byte *)(lVar9 + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a8daa04);
      (*pcVar4)();
    }
    plVar5 = (long *)(lVar8 + 0x10);
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
          if (*(char *)(lVar8 + 0xa8) == '\x01') {
            FUN_10a8d4c80(lVar8 + 0x98);
            *(undefined1 *)(lVar8 + 0xa8) = 0;
          }
          lVar7 = *(long *)(lVar9 + 0xa0);
          uVar10 = *(undefined8 *)(lVar9 + 0x98);
          *(undefined8 *)(lVar8 + 0xa0) = *(undefined8 *)(lVar9 + 0xa0);
          *(undefined8 *)(lVar8 + 0x98) = uVar10;
          if (lVar7 != 0) {
            plVar5 = (long *)(lVar7 + 8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar3) {
                *plVar5 = *plVar5 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          *(undefined1 *)(lVar8 + 0xa8) = 1;
          *(undefined8 *)(lVar8 + 0x10) = 2;
          FUN_109d1b4dc(lVar8 + 0x18);
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar7 >> 1 & 1) == 0);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&pcStack_48,*param_1 + 0x90);
    func_0x000109d1b350(lVar8,&pcStack_48);
    __ZNSt13exception_ptrD1Ev(&pcStack_48);
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
  FUN_10a8dada8(param_1,param_1 + 3);
  return;
}



/* Entry: 10a8daa08; end: 10a8daae7;  */

void FUN_10a8daa08(long param_1)

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
  pcStack_48 = FUN_10a8da86c;
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
  FUN_10a8dada8(param_1,param_1 + 0x20);
  return;
}



/* Entry: 10a8daae8; end: 10a8dab5b;  */

long * FUN_10a8daae8(long *param_1)

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



/* Entry: 10a8dab5c; end: 10a8dada7;  */

undefined8 * FUN_10a8dab5c(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_110c2aed0;
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
  *param_1 = &PTR_DAT_110b3f818;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    FUN_10a8d4c80(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a8dada8; end: 10a8dae17;  */

void FUN_10a8dada8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lStack_28;
  
  *param_2 = 0;
  if ((*(long *)(param_1 + 0x18) == 0) && (*(long *)(param_1 + 0x20) == 0)) {
    lVar1 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    __ZNSt3__15mutex6unlockEv(param_1 + 0x28);
    lStack_28 = 0;
    if (lVar1 != 0) {
      func_0x0001092b4274(&lStack_28,lVar1);
      if (lStack_28 != 0) {
        func_0x0001092b4274(&lStack_28);
      }
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x28);
  return;
}



/* Entry: 10a8dae18; end: 10a8daf9f;  */

void FUN_10a8dae18(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  *(undefined4 *)(param_1 + 0x140) = 4;
  if (*(char *)(*(long *)(param_1 + 0x90) + 8) != '\x01') {
    return;
  }
  uStack_38 = 0;
  uStack_30 = 0;
  lStack_28 = 0;
  lVar5 = *(long *)(param_1 + 0x298);
  if (lVar5 == 0) {
    func_0x000105688514(&UNK_10f681734);
  }
  else {
    func_0x0001092af8bc(lVar5 + 0x10);
    if ((*(byte *)(*(long *)(lVar5 + 0x10) + 0xa8) & 1) != 0) {
      plVar6 = *(long **)(*(long *)(lVar5 + 0x10) + 0xa0);
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
      (**(code **)(param_1 + 0x88))(&uStack_38,param_1 + 0x88);
      if (-1 < lStack_28) {
        return;
      }
      __ZdlPv(uStack_38);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a8daef4);
  (*pcVar4)();
}



/* Entry: 10a8dafa0; end: 10a8db76b;  */

long * FUN_10a8dafa0(long *param_1,ulong param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  undefined4 uVar13;
  long *unaff_x20;
  long *plVar14;
  long *plVar15;
  long unaff_x24;
  long lVar16;
  uint *puVar17;
  long lVar18;
  undefined **unaff_x28;
  byte *pbVar19;
  undefined4 uStack_154;
  byte *pbStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  uint *puStack_128;
  long lStack_120;
  byte *pbStack_118;
  long *plStack_110;
  undefined8 auStack_108 [2];
  char cStack_f1;
  undefined1 uStack_f0;
  ulong uStack_e8;
  undefined1 uStack_e0;
  long *plStack_d8;
  undefined1 uStack_d0;
  ulong uStack_c8;
  undefined7 uStack_c0;
  undefined1 uStack_b9;
  undefined7 uStack_b8;
  undefined1 uStack_b1;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  long *plStack_a0;
  long *plStack_98;
  ulong *puStack_90;
  code *pcStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  if (param_1[0x53] == 0) {
    FUN_10a00946c(&UNK_10f681748);
LAB_10a8db670:
    FUN_10a00946c(&UNK_10f681764);
  }
  else {
    lVar10 = *(long *)(param_1[0x53] + 0x10);
    if (lVar10 == 0) goto LAB_10a8db670;
    if (((uint)*(undefined8 *)(lVar10 + 0x10) >> 1 & 1) != 0) {
      unaff_x20 = param_1 + 0x53;
      lVar10 = *unaff_x20;
      if (lVar10 != 0) {
        func_0x0001092af8bc(lVar10 + 0x10);
        lVar10 = *(long *)(lVar10 + 0x10);
        if ((*(byte *)(lVar10 + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a8db664);
          (*pcVar4)();
        }
        lVar16 = *(long *)(lVar10 + 0xa0);
        lVar18 = *(long *)(lVar10 + 0x98);
        if (*(long *)(lVar10 + 0xa0) != 0) {
          plVar14 = (long *)(*(long *)(lVar10 + 0xa0) + 8);
          do {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar5) {
              *plVar14 = *plVar14 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        plVar14 = (long *)param_1[0x22];
        param_1[0x22] = lVar16;
        param_1[0x21] = lVar18;
        if (plVar14 != (long *)0x0) {
          plVar11 = plVar14 + 1;
          do {
            lVar10 = *plVar11;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar5) {
              *plVar11 = lVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
          }
        }
        if (*unaff_x20 != 0) {
          piVar1 = (int *)(*unaff_x20 + 0x18);
          do {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          func_0x00010a8d4cd8(unaff_x20);
        }
        plVar14 = (long *)param_1[0x55];
        if (plVar14 != (long *)0x0) {
          puVar8 = (ulong *)(plVar14 + 1);
          do {
            uVar12 = *puVar8;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar8,0x10);
            if (bVar5) {
              *puVar8 = uVar12 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar12 & 0x1fffffffc) == 4) {
            do {
              uVar12 = *puVar8;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar8,0x10);
              if (bVar5) {
                *puVar8 = uVar12 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar12 - 1 == 0) {
              (**(code **)(*plVar14 + 8))();
            }
          }
        }
        param_1[0x55] = 0;
        plVar11 = (long *)param_1[0x62];
        uVar13 = 0;
        if ((long *)param_1[0x21] != (long *)0x0) {
          lVar10 = *(long *)(*(long *)param_1[0x21] + 0x88);
          uVar13 = 0;
          if (lVar10 != 0) {
            uVar13 = *(undefined4 *)(lVar10 + 0x120);
          }
        }
        lVar10 = *(long *)(*param_1 + 0x8d8);
        puStack_128 = (uint *)param_1[0x3f];
        lStack_120 = param_1[0x40] - (long)puStack_128 >> 2;
        pbVar19 = (byte *)param_1[0x65];
        plVar15 = (long *)param_1[0x66];
        if (plVar15 == (long *)0x0) {
          lVar18 = *plVar11;
        }
        else {
          plVar2 = plVar15 + 1;
          do {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *plVar2 = *plVar2 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          lVar18 = *plVar11;
          do {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *plVar2 = *plVar2 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        uStack_130 = CONCAT44(uStack_154,uVar13);
        pbStack_140 = pbVar19;
        plStack_138 = plVar15;
        pbStack_118 = pbVar19;
        plStack_110 = plVar15;
        if ((lVar10 != 0) && ((*(byte *)(lVar18 + 0x40) & 1) != 0)) {
          __ZNSt3__16chrono12steady_clock3nowEv();
          uStack_78 = uStack_78 & 0xffffffffffffff00;
          uStack_70 = 0;
          puVar7 = &uStack_78;
          func_0x00010945a80c(puVar7,&UNK_10f680b9a);
          uStack_80 = 0;
          pcStack_88._0_1_ = 3;
          uVar12 = lVar18 + 0x18;
          func_0x00010938229c();
          puVar8 = puVar7;
          uStack_80 = uVar12;
          func_0x00010945a80c(puVar7,&DAT_10f56f6ff);
          uVar12 = *puVar8;
          *(undefined1 *)puVar8 = pcStack_88._0_1_;
          pcStack_88 = (code *)CONCAT71(pcStack_88._1_7_,(char)uVar12);
          uVar12 = puVar8[1];
          puVar8[1] = uStack_80;
          uStack_80 = uVar12;
          func_0x000109380ffc(&uStack_80);
          uVar12 = uStack_130 & 0xffffffff;
          FUN_10a8d3fa0();
          puStack_90 = (ulong *)0x0;
          plStack_98._0_1_ = 3;
          puVar9 = (ulong *)0x18;
          __Znwm();
          *puVar9 = uVar12 & 0xff;
          *(undefined1 *)((long)puVar9 + 0x17) = 1;
          puVar8 = puVar7;
          puStack_90 = puVar9;
          func_0x00010945a80c(puVar7,&UNK_10f680ba8);
          uVar12 = *puVar8;
          *(undefined1 *)puVar8 = plStack_98._0_1_;
          plStack_98 = (long *)CONCAT71(plStack_98._1_7_,(char)uVar12);
          puVar9 = (ulong *)puVar8[1];
          puVar8[1] = (ulong)puStack_90;
          puStack_90 = puVar9;
          func_0x000109380ffc(&puStack_90);
          lVar16 = lStack_120;
          puVar17 = puStack_128;
          uStack_b8 = 0;
          uStack_b1 = 0;
          uStack_b0 = (undefined8 *)0x0;
          uStack_c0 = 0;
          uStack_b9 = 0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
                    (&uStack_c0,lStack_120);
          if (lVar16 != 0) {
            lVar16 = lVar16 << 2;
            do {
              uVar12 = (ulong)*puVar17;
              FUN_10a8d3fa0(uVar12);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                        (&uStack_c0,uVar12);
              lVar16 = lVar16 + -4;
              puVar17 = puVar17 + 1;
            } while (lVar16 != 0);
          }
          plStack_a0 = (long *)0x0;
          uStack_a8 = 3;
          plVar11 = (long *)0x18;
          __Znwm();
          plVar11[1] = CONCAT17(uStack_b1,uStack_b8);
          *plVar11 = CONCAT17(uStack_b9,uStack_c0);
          plVar11[2] = (long)uStack_b0;
          uStack_b8 = 0;
          uStack_b1 = 0;
          uStack_b0 = (undefined8 *)0x0;
          uStack_c0 = 0;
          uStack_b9 = 0;
          puVar8 = puVar7;
          plStack_a0 = plVar11;
          func_0x00010945a80c(puVar7,&UNK_10f680bab);
          uVar12 = *puVar8;
          *(undefined1 *)puVar8 = uStack_a8;
          plVar11 = (long *)puVar8[1];
          uStack_a8 = (char)uVar12;
          puVar8[1] = (ulong)plStack_a0;
          plStack_a0 = plVar11;
          func_0x000109380ffc(&plStack_a0);
          if ((long)uStack_b0 < 0) {
            __ZdlPv(CONCAT17(uStack_b9,uStack_c0));
          }
          if (pbVar19 != (byte *)0x0) {
            uStack_c8 = (ulong)*pbVar19;
            uStack_d0 = 4;
            puVar8 = puVar7;
            func_0x00010945a80c(puVar7,&UNK_10f680baf);
            uStack_d0 = (undefined1)*puVar8;
            *(undefined1 *)puVar8 = 4;
            uVar12 = puVar8[1];
            puVar8[1] = uStack_c8;
            uStack_c8 = uVar12;
            func_0x000109380ffc(&uStack_c8);
          }
          uStack_e0 = 5;
          puVar8 = puVar7;
          plStack_d8 = plVar14;
          func_0x00010945a80c(puVar7,"end");
          uStack_e0 = (undefined1)*puVar8;
          *(undefined1 *)puVar8 = 5;
          plVar14 = (long *)puVar8[1];
          puVar8[1] = (ulong)plStack_d8;
          plStack_d8 = plVar14;
          func_0x000109380ffc(&plStack_d8);
          lVar18 = *(long *)(lVar18 + 0x38) - *(long *)(lVar18 + 0x30);
          if (lVar18 != 0) {
            uStack_e8 = lVar18 / 1000000;
            uStack_f0 = 5;
            func_0x00010945a80c(puVar7,&UNK_10f67fbad);
            uStack_f0 = (undefined1)*puVar7;
            *(undefined1 *)puVar7 = 5;
            uVar12 = puVar7[1];
            puVar7[1] = uStack_e8;
            uStack_e8 = uVar12;
            func_0x000109380ffc(&uStack_e8);
          }
          uStack_b0 = (undefined8 *)CONCAT17(0xf,(undefined7)uStack_b0);
          uStack_c0 = 0x4c4c4d68636554;
          uStack_b9 = 0x65;
          uStack_b8 = 0x746e657645736e;
          uStack_b1 = 0;
          FUN_10a0c32e4(auStack_108,&uStack_78,0xffffffff,0x20,0,0);
          FUN_10a76bdb0(lVar10,&uStack_c0,auStack_108);
          if (cStack_f1 < '\0') {
            __ZdlPv(auStack_108[0]);
          }
          if ((long)uStack_b0 < 0) {
            __ZdlPv(CONCAT17(uStack_b9,uStack_c0));
          }
          param_2 = uStack_78 & 0xff;
          func_0x000109380ffc(&uStack_70);
        }
        if (plVar15 != (long *)0x0) {
          plVar14 = plVar15 + 1;
          do {
            lVar10 = *plVar14;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar5) {
              *plVar14 = lVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
          }
          do {
            lVar10 = *plVar14;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar5) {
              *plVar14 = lVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
          }
        }
        *(undefined4 *)(param_1 + 0x28) = 2;
        iVar6 = (int)*(undefined8 *)param_1[0x21] + 0x10;
        FUN_109cdb51c();
        plVar14 = (long *)param_1[7];
        while (plVar14 != param_1 + 8) {
          lVar10 = plVar14[7];
          *(uint *)(lVar10 + 0x68) = (uint)(iVar6 != 0);
          *(undefined1 *)(lVar10 + 0x6c) = 1;
          plVar11 = plVar14;
          plVar15 = (long *)plVar14[1];
          if ((long *)plVar14[1] == (long *)0x0) {
            do {
              plVar14 = (long *)plVar11[2];
              bVar5 = (long *)*plVar14 != plVar11;
              plVar11 = plVar14;
            } while (bVar5);
          }
          else {
            do {
              plVar14 = plVar15;
              plVar15 = (long *)*plVar14;
            } while ((long *)*plVar14 != (long *)0x0);
          }
        }
        plVar14 = (long *)param_1[10];
        while (plVar14 != param_1 + 0xb) {
          lVar10 = plVar14[7];
          *(uint *)(lVar10 + 0x68) = (uint)(iVar6 != 0);
          *(undefined1 *)(lVar10 + 0x6c) = 1;
          plVar11 = plVar14;
          plVar15 = (long *)plVar14[1];
          if ((long *)plVar14[1] == (long *)0x0) {
            do {
              plVar14 = (long *)plVar11[2];
              bVar5 = (long *)*plVar14 != plVar11;
              plVar11 = plVar14;
            } while (bVar5);
          }
          else {
            do {
              plVar14 = plVar15;
              plVar15 = (long *)*plVar14;
            } while ((long *)*plVar14 != (long *)0x0);
          }
        }
        plVar14 = (long *)param_1[0xd];
        if (plVar14 != (long *)0x0) {
          if ((char)plVar14[8] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a8db65c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)*plVar14)();
            return plVar14;
          }
          if ((char)plVar14[8] == '\x02') {
            lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
            plVar11 = plVar14;
            FUN_10a688b40();
            if (plVar11 == (long *)0x0) {
              plVar15 = (long *)0x0;
              if (param_2 != 0) {
                if (plVar14[1] != 0) {
                  plVar14 = (long *)(plVar14[1] + 8);
                  do {
                    cVar3 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                    if (bVar5) {
                      *plVar14 = *plVar14 + 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                }
                lStack_68 = 0x10a05e8a0;
                unaff_x28 = &PTR_DAT_110b9fa70;
                plVar11 = &lStack_68;
                uStack_78 = 0;
                uStack_70 = 0;
                FUN_10a4634ec(param_2,&lStack_68);
                plVar15 = (long *)&stack0xffffffffffffffa0;
                (*(code *)(undefined *)0x10a05e8a8)();
              }
            }
            else {
              *plVar11 = CONCAT44((int)((ulong)*plVar11 >> 0x20) + 1,(int)*plVar11 + 1);
              plVar15 = (long *)*plVar14;
              FUN_10a05e740();
              iVar6 = *(int *)((long)plVar11 + 4) + -1;
              *(int *)((long)plVar11 + 4) = iVar6;
              if (iVar6 == 0) {
                *(undefined4 *)plVar11 = 0;
              }
            }
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
              ___stack_chk_fail();
              (*(code *)*unaff_x28)(plVar11 + 1);
              func_0x00010a004dac(&uStack_78);
              plVar14 = plVar15;
              __Unwind_Resume();
              pcStack_88 = FUN_10a05e740;
              plStack_a0 = plVar15;
              plStack_98 = plVar11;
              puStack_90 = (ulong *)&stack0xfffffffffffffff0;
              func_0x000109884c0c(&uStack_b0,plVar14 + 1,*plVar14);
              func_0x000109884820(&uStack_a8,&uStack_b0,*plVar14);
              if (uStack_b0 != (undefined8 *)0x0) {
                (**(code **)*uStack_b0)();
              }
              (**(code **)(*(long *)*plVar14 + 0x30))(&uStack_b0);
              FUN_10a05e824(*plVar14,&uStack_b0,&uStack_a8);
              if (uStack_b0 != (undefined8 *)0x0) {
                (**(code **)*uStack_b0)();
              }
              plVar14 = (long *)CONCAT71(uStack_a7,uStack_a8);
              if (plVar14 != (long *)0x0) {
                (**(code **)*plVar14)();
              }
              return plVar14;
            }
            return plVar15;
          }
        }
        return plVar14;
      }
      goto LAB_10a8db688;
    }
  }
  FUN_10a00946c(&UNK_10f681783);
LAB_10a8db688:
  plVar14 = (long *)&UNK_10f681734;
  func_0x000105688514();
  func_0x000109380ffc(unaff_x24 + 8,5);
  func_0x000109380ffc(&uStack_70,uStack_78 & 0xff);
  FUN_10a8d4068(unaff_x20);
  FUN_10a8d4068(&pbStack_140);
  __Unwind_Resume();
  lVar10 = *plVar14;
  if (((*(char *)(lVar10 + 0x2f0) == '\x01') && (*(long **)(lVar10 + 0x108) != (long *)0x0)) &&
     (plVar11 = *(long **)(**(long **)(lVar10 + 0x108) + 0x88), plVar11 != (long *)0x0)) {
    (**(code **)(*plVar11 + 0x48))(plVar11,0);
  }
  plVar11 = *(long **)(lVar10 + 0x2b0);
  if (plVar11 != (long *)0x0) {
    puVar8 = (ulong *)(plVar11 + 1);
    do {
      uVar12 = *puVar8;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar8,0x10);
      if (bVar5) {
        *puVar8 = uVar12 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar12 & 0x1fffffffc) == 4) {
      do {
        uVar12 = *puVar8;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar8,0x10);
        if (bVar5) {
          *puVar8 = uVar12 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar12 - 1 == 0) {
        (**(code **)(*plVar11 + 8))();
      }
    }
  }
  *(undefined8 *)(lVar10 + 0x2b0) = 0;
  FUN_10a2d8800(lVar10 + 0x78,plVar14[1]);
  return plVar14;
}



/* Entry: 10a8db76c; end: 10a8db817;  */

long * FUN_10a8db76c(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = *param_1;
  if (((*(char *)(lVar6 + 0x2f0) == '\x01') && (*(long **)(lVar6 + 0x108) != (long *)0x0)) &&
     (plVar4 = *(long **)(**(long **)(lVar6 + 0x108) + 0x88), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x48))(plVar4,0);
  }
  plVar4 = *(long **)(lVar6 + 0x2b0);
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
  *(undefined8 *)(lVar6 + 0x2b0) = 0;
  FUN_10a2d8800(lVar6 + 0x78,param_1[1]);
  return param_1;
}



/* Entry: 10a8db818; end: 10a8db8db;  */

undefined8 FUN_10a8db818(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 0x10) != (long)param_3 - (long)param_2 >> 4) {
    return 0;
  }
  if (param_2 != param_3) {
    do {
      lVar1 = param_1;
      FUN_10a8da224(param_1,*param_2 + 0x30);
      if (param_1 + 8 == lVar1) {
        return 0;
      }
      lVar1 = *(long *)(lVar1 + 0x38);
      plVar3 = param_2 + 2;
      lVar2 = *param_2;
      if (*(int *)(lVar1 + 0x48) != *(int *)(lVar2 + 0x48)) {
        return 0;
      }
      if (*(int *)(lVar1 + 0x4c) != *(int *)(lVar2 + 0x4c)) {
        return 0;
      }
      if (*(int *)(lVar1 + 0x50) != *(int *)(lVar2 + 0x50)) {
        return 0;
      }
      if (*(int *)(lVar1 + 0x54) != *(int *)(lVar2 + 0x54)) {
        return 0;
      }
      param_2 = plVar3;
    } while (plVar3 != param_3);
  }
  return 1;
}



/* Entry: 10a8db8dc; end: 10a8db9db;  */

undefined8 FUN_10a8db8dc(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  if (*(long *)(param_1 + 0x10) != (long)param_3 - (long)param_2 >> 4) {
    return 0;
  }
  if (param_2 != param_3) {
    plVar1 = (long *)(param_1 + 8);
    do {
      plVar6 = (long *)*plVar1;
      if (plVar6 == (long *)0x0) {
        return 0;
      }
      lVar5 = *param_2;
      plVar4 = plVar1;
      do {
        plVar2 = plVar6 + 4;
        FUN_10a003e3c(plVar2,lVar5 + 0x30);
        if (-1 < (char)plVar2) {
          plVar4 = plVar6;
        }
        plVar6 = *(long **)((long)plVar6 + ((ulong)plVar2 >> 4 & 8));
      } while (plVar6 != (long *)0x0);
      if (plVar4 == plVar1) {
        return 0;
      }
      lVar5 = lVar5 + 0x30;
      FUN_10a003e3c(lVar5,plVar4 + 4);
      if (((uint)lVar5 >> 7 & 1) != 0) {
        return 0;
      }
      lVar5 = plVar4[7];
      plVar6 = param_2 + 2;
      lVar3 = *param_2;
      if (*(int *)(lVar5 + 0x48) != *(int *)(lVar3 + 0x48)) {
        return 0;
      }
      if (*(int *)(lVar5 + 0x4c) != *(int *)(lVar3 + 0x4c)) {
        return 0;
      }
      if (*(int *)(lVar5 + 0x50) != *(int *)(lVar3 + 0x50)) {
        return 0;
      }
      if (*(int *)(lVar5 + 0x54) != *(int *)(lVar3 + 0x54)) {
        return 0;
      }
      param_2 = plVar6;
    } while (plVar6 != param_3);
  }
  return 1;
}



/* Entry: 10a8db9dc; end: 10a8dbbb3;  */

/* WARNING: Removing unreachable block (ram,0x00010a8dbb0c) */
/* WARNING: Removing unreachable block (ram,0x00010a8dbb10) */
/* WARNING: Removing unreachable block (ram,0x00010a8dbb18) */
/* WARNING: Removing unreachable block (ram,0x00010a8dbb20) */
/* WARNING: Removing unreachable block (ram,0x00010a8dbb24) */

void FUN_10a8db9dc(long *param_1,long param_2)

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
    ___dynamic_cast(lVar7,&PTR_DAT_110bf32c0,&PTR_DAT_110c2ca08,0);
    if (lVar7 == 0) {
      if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
        puVar3 = (undefined8 *)&UNK_10f67fb58;
        if (lVar10 != 0) {
          puVar3 = puVar4;
        }
        func_0x00010ae06f08(1,2,&UNK_10f634897,&UNK_10f6817c6,0x34,&UNK_10f63498b,in_x6,in_x7,lVar10
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



/* Entry: 10a8dbbb4; end: 10a8dbc03;  */

void FUN_10a8dbbb4(long param_1)

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



/* Entry: 10a8dbc04; end: 10a8dbc1b;  */

void FUN_10a8dbc04(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a8dbc1c; end: 10a8dbd93;  */

void FUN_10a8dbc1c(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  
  lVar6 = *param_1;
  plVar1 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  lVar7 = *(long *)(param_2 + 0x10);
  if (lVar6 != 0) {
    for (plVar8 = *(long **)(lVar6 + 0xe0); plVar8 != (long *)0x0; plVar8 = (long *)plVar8[0x13]) {
      plVar4 = plVar8;
      (**(code **)(*plVar8 + 0x80))();
      if ((int)plVar4 != 2) goto LAB_10a8dbcd0;
    }
    if (*(char *)(lVar6 + 0x1b1) == '\x01') {
      FUN_10a8e03ac(auStack_48,lVar7 + 0x38);
      puVar5 = auStack_48;
      FUN_10a8db818(puVar5,*(undefined8 *)(lVar6 + 0x138),*(undefined8 *)(lVar6 + 0x140));
      if ((int)puVar5 == 0) {
        func_0x00010a8d4e78(uStack_40);
      }
      else {
        FUN_10a8e0560(auStack_60,lVar7 + 0x50);
        puVar5 = auStack_60;
        FUN_10a8db8dc(puVar5,*(undefined8 *)(lVar6 + 0x150),*(undefined8 *)(lVar6 + 0x158));
        func_0x00010a8d4ef4(uStack_58);
        func_0x00010a8d4e78(uStack_40);
        if (((ulong)puVar5 & 1) != 0) goto LAB_10a8dbcd8;
      }
    }
LAB_10a8dbcd0:
    *(undefined1 *)(lVar7 + 0x309) = 1;
  }
LAB_10a8dbcd8:
  plVar8 = (long *)(lVar7 + 8);
  if (*plVar8 != lVar6) {
    func_0x00010a8d4878(plVar8,lVar6,plVar1);
    if ((*plVar8 != 0) && (*(char *)(*plVar8 + 0x1b1) == '\x01')) {
      FUN_10a8d49b4(lVar7);
      FUN_10a8d4b90(lVar7);
    }
    *(undefined4 *)(lVar7 + 0x140) = 3;
  }
  if (plVar1 != (long *)0x0) {
    plVar8 = plVar1 + 1;
    do {
      lVar6 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a8dbd94; end: 10a8dbdaf;  */

void FUN_10a8dbd94(void)

{
  return;
}



/* Entry: 10a8dbdb0; end: 10a8dbe77;  */

undefined8 * FUN_10a8dbdb0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a8dbe78; end: 10a8dc803;  */

long * FUN_10a8dbe78(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  bool bVar9;
  long lVar10;
  long *plVar11;
  undefined8 uStack_118;
  long *plStack_110;
  undefined2 uStack_108;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  long lStack_f8;
  undefined7 uStack_f0;
  char cStack_e9;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  long lStack_e0;
  undefined7 uStack_d8;
  char cStack_d1;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  long lStack_c8;
  undefined7 uStack_c0;
  char cStack_b9;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  long lStack_b0;
  undefined7 uStack_a8;
  char cStack_a1;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  long lStack_98;
  undefined7 uStack_90;
  char cStack_89;
  undefined4 uStack_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  long lStack_78;
  undefined7 uStack_70;
  undefined1 uStack_69;
  long *plVar8;
  
  *param_1 = param_2;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = (long)(param_1 + 8);
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[10] = (long)(param_1 + 0xb);
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = (long)&UNK_10897d5f0;
  param_1[0x12] = (long)&PTR_DAT_110ae9180;
  param_1[0x19] = (long)&UNK_10897d5f0;
  param_1[0x1a] = (long)&PTR_DAT_110ae9180;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x28) = 3;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined4 *)((long)param_1 + 0x14b) = 0;
  *(undefined4 *)((long)param_1 + 0x14f) = 0x10001;
  *(undefined4 *)((long)param_1 + 0x153) = 0x1010101;
  *(undefined2 *)((long)param_1 + 0x157) = 0;
  *(undefined1 *)((long)param_1 + 0x159) = 0;
  func_0x000107c2b054(param_1 + 0x2c,&UNK_10f67fb58);
  plVar11 = param_1 + 0x2f;
  func_0x000107c2b054(plVar11,&UNK_10f67fb58);
  func_0x000107c2b054(param_1 + 0x32,&DAT_10f5aca3f);
  plVar1 = param_1 + 0x35;
  func_0x000107c2b054(plVar1,"Default");
  func_0x000107c2b054(param_1 + 0x38,"default");
  *(undefined4 *)(param_1 + 0x3b) = 0xffffffff;
  func_0x000107c2b054(param_1 + 0x3c,"default");
  uStack_118 = (long *)CONCAT44(uStack_118._4_4_,1);
  param_1[0x41] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  FUN_10a8dc804(param_1 + 0x3f,&uStack_118,(long)&uStack_118 + 4,1);
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0x3f800000;
  *(undefined2 *)((long)param_1 + 0x22c) = 0;
  *(undefined1 *)((long)param_1 + 0x22e) = 0;
  param_1[0x46] = 0;
  *(undefined2 *)(param_1 + 0x49) = 0x200;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  *(undefined1 *)((long)param_1 + 0x24e) = 0;
  *(undefined4 *)((long)param_1 + 0x24a) = 0;
  *(undefined2 *)(param_1 + 0x4a) = 1;
  *(undefined4 *)((long)param_1 + 0x254) = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0x10000;
  *(undefined2 *)((long)param_1 + 0x25c) = 0x100;
  *(undefined1 *)((long)param_1 + 0x25e) = 1;
  *(undefined4 *)(param_1 + 0x4c) = 0x1000000;
  *(undefined2 *)((long)param_1 + 0x264) = 1;
  *(undefined4 *)(param_1 + 0x4d) = 0x100;
  param_1[0x4e] = 100000;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  *(undefined4 *)((long)param_1 + 0x27c) = 1;
  *(undefined1 *)(param_1 + 0x50) = 0;
  plVar6 = param_1 + 0x51;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x59) = 0;
  plVar8 = param_1 + 0x5a;
  *(undefined1 *)(param_1 + 0x57) = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  param_1[0x52] = 0;
  *plVar6 = 0;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  *(undefined1 *)(param_1 + 0x5d) = 0;
  *(undefined4 *)((long)param_1 + 0x2ec) = 3;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  *(undefined2 *)(param_1 + 0x61) = 0;
  *(undefined1 *)(param_1 + 100) = 1;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  FUN_10a8d4f70(&uStack_118);
  func_0x00010a8d4950(param_1 + 0x62,&uStack_118);
  if (plStack_110 != (long *)0x0) {
    plVar5 = plStack_110 + 1;
    do {
      lVar10 = *plVar5;
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar9) {
        *plVar5 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_110 + 0x10))(plStack_110);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_110);
    }
  }
  FUN_10a8d5cfc(param_1 + 0x3f,0,0,0);
  plVar5 = (long *)0xe8;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110c114e0;
  plVar5[0x1c] = 0;
  plVar5[0x1b] = 0;
  plVar5[6] = 0;
  plVar5[5] = 0;
  plVar5[8] = 0;
  plVar5[7] = 0;
  plVar5[10] = 0;
  plVar5[9] = 0;
  plVar5[0xc] = 0;
  plVar5[0xb] = 0;
  plVar5[0xe] = 0;
  plVar5[0xd] = 0;
  plVar5[0x10] = 0;
  plVar5[0xf] = 0;
  plVar5[0x12] = 0;
  plVar5[0x11] = 0;
  plVar5[0x14] = 0;
  plVar5[0x13] = 0;
  plVar5[0x16] = 0;
  plVar5[0x15] = 0;
  plVar5[0x18] = 0;
  plVar5[0x17] = 0;
  plVar5[0x1a] = 0;
  plVar5[0x19] = 0;
  uStack_118 = plVar5 + 3;
  plVar5[4] = 0;
  *uStack_118 = 0;
  *(undefined4 *)(plVar5 + 0x1b) = 0x3f800000;
  plStack_110 = plVar5;
  FUN_10a8dbdb0(param_1 + 3,&uStack_118);
  plVar5 = plStack_110;
  if (plStack_110 != (long *)0x0) {
    plVar2 = plStack_110 + 1;
    do {
      lVar10 = *plVar2;
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar9) {
        *plVar2 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_110 + 0x10))(plStack_110);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = (long *)0x30;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_DAT_110c2afe8;
  plVar5[4] = 0;
  plVar5[5] = 0;
  uStack_118 = plVar5 + 3;
  *uStack_118 = 0;
  plStack_110 = plVar5;
  func_0x00010a8dbe14(param_1 + 5,&uStack_118);
  plVar5 = plStack_110;
  if (plStack_110 != (long *)0x0) {
    plVar2 = plStack_110 + 1;
    do {
      lVar10 = *plVar2;
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar9) {
        *plVar2 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_110 + 0x10))(plStack_110);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = (long *)0x40;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110c2ad30;
  plVar5[6] = 0;
  plVar5[5] = 0;
  uStack_118 = plVar5 + 3;
  plVar5[4] = 0;
  *uStack_118 = 0;
  *(undefined4 *)(plVar5 + 7) = 0x3f800000;
  plStack_110 = plVar5;
  func_0x00010a8d48ec(plVar6,&uStack_118);
  plVar5 = plStack_110;
  if (plStack_110 != (long *)0x0) {
    plVar2 = plStack_110 + 1;
    do {
      lVar10 = *plVar2;
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar9) {
        *plVar2 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_110 + 0x10))(plStack_110);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar6 = plVar5;
    }
  }
  if ((*(byte *)(*(long *)(param_2 + 0xa20) + 0x1c) >> 3 & 1) == 0) {
    bVar9 = 0x92 < *(int *)(*(long *)(param_2 + 0xa20) + 0x18);
  }
  else {
    bVar9 = true;
  }
  *(bool *)(param_1 + 0x5d) = bVar9;
  FUN_10a8d5cd4();
  (**(code **)(*(long *)*plVar6 + 0x10))(&uStack_118);
  param_1[0x2a] = (long)plStack_110;
  param_1[0x29] = (long)uStack_118;
  *(undefined2 *)(param_1 + 0x2b) = uStack_108;
  if (*(char *)((long)param_1 + 0x177) < '\0') {
    __ZdlPv(param_1[0x2c]);
  }
  param_1[0x2d] = lStack_f8;
  param_1[0x2c] = CONCAT71(uStack_ff,uStack_100);
  param_1[0x2e] = CONCAT17(cStack_e9,uStack_f0);
  cStack_e9 = '\0';
  uStack_100 = 0;
  if (*(char *)((long)param_1 + 399) < '\0') {
    __ZdlPv(*plVar11);
  }
  param_1[0x30] = lStack_e0;
  *plVar11 = CONCAT71(uStack_e7,uStack_e8);
  param_1[0x31] = CONCAT17(cStack_d1,uStack_d8);
  cStack_d1 = '\0';
  uStack_e8 = 0;
  if (*(char *)((long)param_1 + 0x1a7) < '\0') {
    __ZdlPv(param_1[0x32]);
  }
  param_1[0x33] = lStack_c8;
  param_1[0x32] = CONCAT71(uStack_cf,uStack_d0);
  param_1[0x34] = CONCAT17(cStack_b9,uStack_c0);
  cStack_b9 = '\0';
  uStack_d0 = 0;
  if (*(char *)((long)param_1 + 0x1bf) < '\0') {
    __ZdlPv(*plVar1);
  }
  param_1[0x36] = lStack_b0;
  *plVar1 = CONCAT71(uStack_b7,uStack_b8);
  param_1[0x37] = CONCAT17(cStack_a1,uStack_a8);
  cStack_a1 = '\0';
  uStack_b8 = 0;
  if (*(char *)((long)param_1 + 0x1d7) < '\0') {
    __ZdlPv(param_1[0x38]);
  }
  param_1[0x39] = lStack_98;
  param_1[0x38] = CONCAT71(uStack_9f,uStack_a0);
  param_1[0x3a] = CONCAT17(cStack_89,uStack_90);
  cStack_89 = '\0';
  uStack_a0 = 0;
  *(undefined4 *)(param_1 + 0x3b) = uStack_88;
  if (*(char *)((long)param_1 + 0x1f7) < '\0') {
    __ZdlPv(param_1[0x3c]);
    param_1[0x3d] = lStack_78;
    param_1[0x3c] = CONCAT71(uStack_7f,uStack_80);
    param_1[0x3e] = CONCAT17(uStack_69,uStack_70);
    uStack_69 = 0;
    uStack_80 = 0;
    if (cStack_89 < '\0') {
      __ZdlPv(CONCAT71(uStack_9f,uStack_a0));
    }
  }
  else {
    param_1[0x3d] = lStack_78;
    param_1[0x3c] = CONCAT71(uStack_7f,uStack_80);
    param_1[0x3e] = CONCAT17(uStack_69,uStack_70);
    uStack_69 = 0;
    uStack_80 = 0;
  }
  if (cStack_a1 < '\0') {
    __ZdlPv(CONCAT71(uStack_b7,uStack_b8));
  }
  if (cStack_b9 < '\0') {
    __ZdlPv(CONCAT71(uStack_cf,uStack_d0));
  }
  if (cStack_d1 < '\0') {
    __ZdlPv(CONCAT71(uStack_e7,uStack_e8));
  }
  if (cStack_e9 < '\0') {
    __ZdlPv(CONCAT71(uStack_ff,uStack_100));
  }
  *(char *)(param_1 + 0x5e) = (char)param_1[0x29];
  puVar7 = (undefined8 *)0x20;
  __Znwm();
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_110c2af98;
  *(undefined1 *)(puVar7 + 3) = 0;
  param_1[0x65] = (long)(puVar7 + 3);
  plVar11 = (long *)param_1[0x66];
  param_1[0x66] = (long)puVar7;
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 1;
    do {
      lVar10 = *plVar1;
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (plVar8,*(long *)(param_2 + 0x100) + 0x208);
  iVar4 = (int)plVar8;
  FUN_10ad055a0();
  if (iVar4 != 0) {
    if ((char)param_1[0x59] == '\x01') {
      FUN_109d19404(param_1 + 0x58,*(long *)(param_2 + 0x100) + 0x1a8);
    }
    else {
      lVar10 = *(long *)(*(long *)(param_2 + 0x100) + 0x1a8);
      param_1[0x58] = lVar10;
      if (lVar10 != 0) {
        plVar11 = (long *)(lVar10 + 8);
        do {
          cVar3 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar9) {
            *plVar11 = *plVar11 + 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *(undefined1 *)(param_1 + 0x59) = 1;
    }
  }
  return param_1;
}



/* Entry: 10a8dc804; end: 10a8dc873;  */

void FUN_10a8dc804(long param_1,undefined4 *param_2,undefined4 *param_3,long param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    FUN_10a8d5e1c(param_1,param_4);
    puVar1 = *(undefined4 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined4 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 10a8dc874; end: 10a8dc883;  */

void FUN_10a8dc874(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2af98;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a8dc884; end: 10a8dc8a3;  */

void FUN_10a8dc884(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2af98;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8dc8a4; end: 10a8dc8bb;  */

void FUN_10a8dc8a4(void)

{
  return;
}



/* Entry: 10a8dc8bc; end: 10a8dc8db;  */

void FUN_10a8dc8bc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c2afe8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8dc8dc; end: 10a8dc8f7;  */

void FUN_10a8dc8dc(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a8dc8f8; end: 10a8dc94f;  */

long FUN_10a8dc8f8(long param_1)

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



/* Entry: 10a8dc950; end: 10a8dc977;  */

void FUN_10a8dc950(void)

{
  return;
}



/* Entry: 10a8dc978; end: 10a8dce47;  */

undefined8 * FUN_10a8dc978(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_DAT_110bf2dc0;
  param_1[2] = &PTR_DAT_110bf2e30;
  param_1[7] = &PTR_DAT_110bf2e88;
  puVar1 = param_1;
  func_0x00010a0fda30();
  param_1[8] = puVar1;
  param_1[9] = param_2;
  param_1[2] = &PTR_FUN_110c2c6f0;
  *param_1 = &PTR_DAT_110c2c680;
  param_1[7] = &PTR_FUN_110c2c748;
  param_1[0xb] = 0x3f80000000000000;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x100;
  *(undefined2 *)((long)param_1 + 100) = 0x100;
  *(undefined4 *)(param_1 + 0xd) = 0;
  return param_1;
}



/* Entry: 10a8dce48; end: 10a8dce57;  */

void FUN_10a8dce48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2b250;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a8dce58; end: 10a8dce77;  */

void FUN_10a8dce58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2b250;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8dce78; end: 10a8dce97;  */

void FUN_10a8dce78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a8dce80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 10a8dce98; end: 10a8dceb7;  */

void FUN_10a8dce98(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c2b2a0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


