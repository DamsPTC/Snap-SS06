/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a51550c; end: 10a515607;  */

undefined8 ** FUN_10a51550c(undefined8 **param_1,undefined8 *param_2,long *param_3)

{
  undefined8 **ppuVar1;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = *param_2;
  (**(code **)(param_2[1] + 0x10))(apuStack_70);
  lStack_88 = param_3[1];
  lStack_90 = *param_3;
  lStack_80 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  func_0x0001098aeecc(param_1,&uStack_78,&UNK_110bef3a0,&lStack_90);
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  ppuVar1 = apuStack_70;
  (*(code *)*apuStack_70[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  (*(code *)*apuStack_70[0])(apuStack_70);
  __Unwind_Resume();
  *ppuVar1 = (undefined8 *)0x0;
  return ppuVar1;
}



/* Entry: 10a515608; end: 10a515617;  */

void FUN_10a515608(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10a515618; end: 10a515687;  */

void FUN_10a515618(long param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
                  long param_5)

{
  code *pcVar1;
  long *plVar2;
  long lStack_40;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  lStack_40 = param_1;
  uStack_38 = param_2;
  if (param_5 != 0) {
    plVar2 = &lStack_30;
    lStack_30 = param_1;
    uStack_28 = param_2;
    func_0x0001098b9090(plVar2,*param_4);
    if (*plVar2 != 0) {
      func_0x00010a291414(&lStack_40,param_3);
      lStack_30 = 0;
      func_0x00010a2914e4();
      func_0x00010a2914e4(&lStack_30,0);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a515688);
  (*pcVar1)();
}



/* Entry: 10a515688; end: 10a5156a3;  */

void FUN_10a515688(void)

{
  return;
}



/* Entry: 10a5156a4; end: 10a51574b;  */

undefined8 * FUN_10a5156a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bebc38;
  (**(code **)param_1[0xf])();
  (**(code **)param_1[7])();
  FUN_10a26cc38(param_1 + 3);
  return param_1;
}



/* Entry: 10a51574c; end: 10a51598b;  */

/* WARNING: Removing unreachable block (ram,0x00010a515920) */
/* WARNING: Removing unreachable block (ram,0x00010a515924) */
/* WARNING: Removing unreachable block (ram,0x00010a51592c) */
/* WARNING: Removing unreachable block (ram,0x00010a515934) */
/* WARNING: Removing unreachable block (ram,0x00010a515938) */

void FUN_10a51574c(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 in_x7;
  long lVar6;
  long lVar7;
  undefined8 uStack_50;
  long *plStack_48;
  
  puVar5 = (undefined8 *)0x1d8;
  __Znwm();
  lVar7 = param_3;
  if (*(long *)(param_2 + 8) != 0) {
    lVar7 = *(long *)(param_2 + 8);
  }
  plStack_48 = *(long **)(param_2 + 0x20);
  uStack_50 = *(undefined8 *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x20) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *puVar5 = &PTR_FUN_110bebc78;
  func_0x0001098bae4c(puVar5,&UNK_10e4beb5d,0x3b,param_3,lVar7,puVar5 + 0x19,puVar5 + 0x31,in_x7,0,0
                      ,&uStack_50);
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
  puVar5[0x1c] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x20] = 0;
  puVar5[0x1f] = 0;
  *puVar5 = &PTR_FUN_110bebc78;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  puVar5[0x19] = &PTR_FUN_110bebcc8;
  puVar5[0x21] = 0;
  puVar5[0x23] = 0;
  puVar5[0x22] = 0;
  puVar5[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x27) = 0x40000000;
  puVar5[0x24] = &PTR_DAT_110bebd80;
  puVar5[0x25] = &UNK_110bebd50;
  puVar5[0x28] = 0;
  puVar5[0x29] = 0;
  puVar5[0x2c] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x2d) = 0x40000000;
  puVar5[0x2a] = &PTR_DAT_110bebd80;
  puVar5[0x2b] = &UNK_110bebd50;
  puVar5[0x2e] = 0;
  puVar5[0x2f] = 0;
  *(undefined2 *)(puVar5 + 0x30) = 0;
  lVar7 = puVar5[0xc];
  if (lVar7 == 0) {
    bVar4 = false;
    lVar6 = param_2 + 0x28;
  }
  else {
    bVar4 = lVar7 != puVar5[0xb];
    lVar6 = 0;
    if (!bVar4) {
      lVar6 = param_2 + 0x28;
    }
  }
  *(undefined2 *)(puVar5 + 0x32) = 0;
  puVar5[0x35] = 0x10a516700;
  puVar5[0x36] = &UNK_110bba3c8;
  puVar5[0x37] = 0;
  puVar5[0x38] = 0;
  puVar5[0x39] = 0;
  puVar5[0x3a] = 0;
  puVar5[0x31] = &PTR_FUN_110bebdc0;
  if ((!bVar4) && (*(char *)(*(long *)(lVar6 + 0x10) + 8) == '\x01')) {
    puVar5[0x3a] = lVar6 + 8;
  }
  if ((lVar7 == 0) || (lVar7 == puVar5[0xb])) {
    *(undefined1 *)((long)puVar5 + 0x181) = 1;
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 10a51598c; end: 10a515a47;  */

undefined8 * FUN_10a51598c(undefined8 *param_1)

{
  ulong *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  ulong uVar7;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bebc78;
  FUN_10a232e34(param_1 + 0x2e);
  FUN_10a232e34(param_1 + 0x28);
  param_1[0x19] = &PTR_FUN_110bebcc8;
  func_0x00010a516484(param_1 + 0x21);
  func_0x0001098bba44(param_1 + 0x19);
  *param_1 = &PTR_DAT_110b17ab0;
  if ((*(char *)(param_1 + 0x18) == '\x01') && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
    lVar6 = param_1[0xb];
    lVar2 = *(long *)(lVar6 + 0x148);
    if (-1 < *(char *)(lVar6 + 0x15f)) {
      lVar2 = lVar6 + 0x148;
    }
    func_0x00010ae06f08(1,4,&UNK_10f585d39,&UNK_10f585e3d,0x15,&UNK_10f585e89,in_x6,in_x7,
                        &UNK_10f585f66,lVar2,param_1[1]);
  }
  func_0x0001098ae07c(param_1 + 0x16);
  plVar5 = (long *)param_1[0x12];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 0x200000000;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (uVar7 >> 0x21 == 1) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  *param_1 = &PTR_DAT_110b17b10;
  plVar5 = (long *)param_1[10];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  puStack_28 = param_1 + 3;
  func_0x0001098ad298(&puStack_28);
  return param_1;
}



/* Entry: 10a515a48; end: 10a515a4b;  */

void FUN_10a515a48(void)

{
  return;
}



/* Entry: 10a515a4c; end: 10a515bf3;  */

uint FUN_10a515a4c(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puStack_68;
  long *plStack_60;
  
  lVar13 = *(long *)(param_1 + 0x70);
  lVar2 = param_1 + 0x150;
  if (lVar13 != param_1 + 0x120) {
    lVar2 = param_1 + 0x120;
  }
  *(long *)(param_1 + 0x78) = lVar2;
  func_0x00010a286b48(lVar2 + 0x20);
  puVar8 = (undefined8 *)0x18;
  __Znwm();
  lVar12 = *(long *)(param_1 + 0x108);
  lVar3 = *(long *)(param_1 + 0x110);
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  FUN_10a22fc9c();
  if (lVar3 - lVar12 != 0x18) {
    lVar4 = lVar12 + 0x18;
    do {
      lVar11 = lVar4;
      lVar4 = *(long *)(lVar12 + 0x20);
      for (lVar12 = *(long *)(lVar12 + 0x18); lVar12 != lVar4; lVar12 = lVar12 + 0x58) {
        FUN_10aacfc74(puVar8,lVar12);
      }
      lVar4 = lVar11 + 0x18;
      lVar12 = lVar11;
    } while (lVar4 != lVar3);
  }
  plVar9 = (long *)0x20;
  puStack_68 = puVar8;
  __Znwm();
  *plVar9 = (long)&PTR_FUN_110bebdf0;
  plVar9[1] = 0;
  plVar9[2] = 0;
  plVar9[3] = (long)puVar8;
  plStack_60 = plVar9;
  FUN_10a286fec(lVar2 + 0x20,&puStack_68);
  plVar9 = plStack_60;
  if (plStack_60 != (long *)0x0) {
    plVar1 = plStack_60 + 1;
    do {
      lVar12 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  if (lVar13 == 0) {
    uVar7 = 1;
  }
  else {
    uVar10 = *(undefined8 *)(lVar13 + 0x20);
    func_0x00010aacfb0c(uVar10,*(undefined8 *)(lVar2 + 0x20));
    uVar7 = (uint)uVar10 ^ 1;
  }
  return uVar7;
}



/* Entry: 10a515bf4; end: 10a515e4f;  */

/* WARNING: Removing unreachable block (ram,0x00010a515d5c) */
/* WARNING: Removing unreachable block (ram,0x00010a515d60) */
/* WARNING: Removing unreachable block (ram,0x00010a515d68) */
/* WARNING: Removing unreachable block (ram,0x00010a515d70) */
/* WARNING: Removing unreachable block (ram,0x00010a515d7c) */
/* WARNING: Removing unreachable block (ram,0x00010a515d84) */
/* WARNING: Removing unreachable block (ram,0x00010a515d8c) */
/* WARNING: Removing unreachable block (ram,0x00010a515d90) */

void FUN_10a515bf4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *extraout_x8;
  long lVar9;
  long lVar10;
  undefined8 *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_8c;
  code *pcStack_88;
  undefined **appuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *(long *)(param_2 + 0x70);
  puVar6 = (undefined8 *)0xa0;
  __Znwm();
  puVar8 = puVar6 + 3;
  *(undefined2 *)puVar8 = 4;
  puVar6[2] = 0;
  puVar6[1] = 0x200000006;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xb] = 0;
  puVar6[10] = 0;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  puVar6[0xf] = 0;
  puVar6[0xe] = 0;
  puVar6[0x10] = 0;
  puVar6[0x11] = puVar8;
  puVar6[0x12] = 0;
  *puVar6 = &PTR_DAT_110ae91c0;
  *(undefined2 *)(puVar6 + 0x13) = 0;
  puStack_b0 = puVar6;
  if ((*(byte *)(param_2 + 0x181) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a515dd0);
    (*pcVar5)();
  }
  lStack_a8 = 0;
  lStack_a0 = 0;
  uStack_98 = 0;
  uStack_8c = 0x20000000;
  FUN_10a26ebc0(&lStack_a8,0,&uStack_8c,&pcStack_88,1);
  pcStack_88 = FUN_10a5167b4;
  appuStack_80[0] = &PTR_FUN_110bebe40;
  param_2 = param_2 + 0x18;
  FUN_10a51550c(param_2,&pcStack_88,&lStack_a8);
  (*(code *)*appuStack_80[0])(appuStack_80);
  if (lStack_a8 != 0) {
    lStack_a0 = lStack_a8;
    __ZdlPv();
  }
  plVar1 = puVar6 + 2;
  *(int *)(lVar9 + 0x10) = (int)param_2;
  do {
    lVar9 = *plVar1;
    if (lVar9 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(puVar8);
        goto LAB_10a515d3c;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar9 >> 1 & 1) != 0) {
LAB_10a515d3c:
      while( true ) {
        *param_1 = puVar6;
        puVar8 = puVar6;
        func_0x0001092b4274(&puStack_b0);
        lVar9 = 0;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
          return;
        }
        ___stack_chk_fail();
        if ((int)puVar8 == 0) break;
        (*(code *)*appuStack_80[0])(appuStack_80);
        if (lStack_a8 != 0) {
          lStack_a0 = lStack_a8;
          __ZdlPv();
        }
        ___cxa_begin_catch(lVar9);
        __ZSt17current_exceptionv(&pcStack_88);
        func_0x000109d1b350(puVar6,&pcStack_88);
        __ZNSt13exception_ptrD1Ev(&pcStack_88);
        ___cxa_end_catch();
      }
      __Unwind_Resume(lVar9);
      func_0x000104bd46a0();
      puVar6 = (undefined8 *)0x20;
      __Znwm();
      puVar6[1] = 0;
      *puVar6 = &PTR_FUN_110bebd08;
      puVar6[2] = 0;
      puVar6[3] = 0;
      lVar10 = *(long *)(lVar9 + 0x40);
      lVar9 = *(long *)(lVar9 + 0x48);
      lVar4 = lVar9 - lVar10;
      if (lVar4 != 0) {
        puVar7 = (undefined8 *)((lVar4 >> 3) * -0x5555555555555555);
        if ((undefined8 *)0xaaaaaaaaaaaaaaa < puVar7) {
          FUN_10a5163cc();
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a515f64);
          (*pcVar5)();
        }
        FUN_10a5163e0();
        puVar6[1] = puVar7;
        puVar6[2] = puVar7;
        puVar6[3] = puVar7 + (long)puVar8 * 3;
        do {
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[2] = 0;
          lVar10 = lVar10 + 0x18;
          FUN_10a22fc9c();
          puVar7 = puVar7 + 3;
        } while (lVar10 != lVar9);
        puVar6[2] = puVar7;
      }
      *extraout_x8 = puVar6;
      return;
    }
  } while( true );
}



/* Entry: 10a515e50; end: 10a515f93;  */

void FUN_10a515e50(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  puVar4 = (undefined8 *)0x20;
  __Znwm();
  puVar4[1] = 0;
  *puVar4 = &PTR_FUN_110bebd08;
  puVar4[2] = 0;
  puVar4[3] = 0;
  lVar6 = *(long *)(param_2 + 0x40);
  lVar1 = *(long *)(param_2 + 0x48);
  lVar2 = lVar1 - lVar6;
  if (lVar2 != 0) {
    puVar5 = (undefined8 *)((lVar2 >> 3) * -0x5555555555555555);
    if ((undefined8 *)0xaaaaaaaaaaaaaaa < puVar5) {
      FUN_10a5163cc();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a515f64);
      (*pcVar3)();
    }
    FUN_10a5163e0();
    puVar4[1] = puVar5;
    puVar4[2] = puVar5;
    puVar4[3] = puVar5 + param_3 * 3;
    do {
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      lVar6 = lVar6 + 0x18;
      FUN_10a22fc9c();
      puVar5 = puVar5 + 3;
    } while (lVar6 != lVar1);
    puVar4[2] = puVar5;
  }
  *param_1 = puVar4;
  return;
}



/* Entry: 10a515f94; end: 10a516107;  */

void FUN_10a515f94(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lStack_88;
  undefined8 *puStack_48;
  
  uVar5 = (undefined4)((ulong)param_2 >> 0x20);
  iVar4 = (int)param_2;
  puVar12 = *(undefined8 **)(param_1 + 0x48);
  if (puVar12 < *(undefined8 **)(param_1 + 0x50)) {
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[2] = 0;
    uVar14 = *param_2;
    puVar12[1] = param_2[1];
    *puVar12 = uVar14;
    puVar12[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    puVar12 = puVar12 + 3;
LAB_10a5160e8:
    *(undefined8 **)(param_1 + 0x48) = puVar12;
    return;
  }
  lVar13 = (long)puVar12 - *(long *)(param_1 + 0x40);
  uVar6 = (lVar13 >> 3) * -0x5555555555555555 + 1;
  if (uVar6 < 0xaaaaaaaaaaaaaab) {
    lVar9 = (long)*(undefined8 **)(param_1 + 0x50) - *(long *)(param_1 + 0x40) >> 3;
    uVar10 = lVar9 * 0x5555555555555556;
    if (uVar10 < uVar6 || uVar10 - uVar6 == 0) {
      uVar10 = uVar6;
    }
    if (0x555555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar10 = 0xaaaaaaaaaaaaaaa;
    }
    FUN_10a5163e0();
    puVar1 = (undefined8 *)(uVar10 + lVar13);
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    uVar14 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar14;
    puVar1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    puVar12 = puVar1 + 3;
    puVar11 = *(undefined8 **)(param_1 + 0x40);
    puVar2 = *(undefined8 **)(param_1 + 0x48);
    puVar1 = (undefined8 *)((long)puVar1 + ((long)puVar11 - (long)puVar2));
    puVar7 = puVar1;
    puVar8 = puVar11;
    if ((long)puVar11 - (long)puVar2 != 0) {
      do {
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        uVar14 = *puVar8;
        puVar7[1] = puVar8[1];
        *puVar7 = uVar14;
        puVar7[2] = puVar8[2];
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        puVar8 = puVar8 + 3;
        puVar7 = puVar7 + 3;
      } while (puVar8 != puVar2);
      do {
        puStack_48 = puVar11;
        FUN_10a22ff44(&puStack_48);
        puVar11 = puVar11 + 3;
      } while (puVar11 != puVar2);
      puVar11 = *(undefined8 **)(param_1 + 0x40);
    }
    *(undefined8 **)(param_1 + 0x40) = puVar1;
    *(undefined8 **)(param_1 + 0x48) = puVar12;
    *(ulong *)(param_1 + 0x50) = uVar10 + CONCAT44(uVar5,iVar4) * 0x18;
    if (puVar11 != (undefined8 *)0x0) {
      __ZdlPv(puVar11);
    }
    goto LAB_10a5160e8;
  }
  FUN_10a5163cc();
  uVar10 = (ulong)iVar4;
  lVar13 = *(long *)(param_1 + 0x40);
  lVar9 = *(long *)(param_1 + 0x48);
  uVar6 = (lVar9 - lVar13 >> 3) * -0x5555555555555555;
  if (uVar10 + 1 != uVar6) {
    if ((lVar13 == lVar9) || (uVar6 < uVar10 || uVar6 - uVar10 == 0)) goto LAB_10a5161d0;
    puVar12 = (undefined8 *)(lVar13 + (long)iVar4 * 0x18);
    FUN_10a23141c(puVar12);
    uVar14 = *(undefined8 *)(lVar9 + -0x18);
    puVar12[1] = *(undefined8 *)(lVar9 + -0x10);
    *puVar12 = uVar14;
    puVar12[2] = *(undefined8 *)(lVar9 + -8);
    *(undefined8 *)(lVar9 + -0x18) = 0;
    *(undefined8 *)(lVar9 + -0x10) = 0;
    *(undefined8 *)(lVar9 + -8) = 0;
    lVar13 = *(long *)(param_1 + 0x40);
    lVar9 = *(long *)(param_1 + 0x48);
    uVar6 = (lVar9 - lVar13 >> 3) * -0x5555555555555555;
    if (uVar6 < uVar10 || uVar6 - uVar10 == 0) goto LAB_10a5161d0;
  }
  if (lVar13 != lVar9) {
    lStack_88 = lVar9 + -0x18;
    FUN_10a22ff44(&lStack_88);
    *(long *)(param_1 + 0x48) = lVar9 + -0x18;
    return;
  }
LAB_10a5161d0:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a5161d4);
  (*pcVar3)();
}



/* Entry: 10a516108; end: 10a5161d3;  */

void FUN_10a516108(long param_1,int param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lStack_38;
  
  uVar6 = (ulong)param_2;
  lVar2 = *(long *)(param_1 + 0x40);
  lVar5 = *(long *)(param_1 + 0x48);
  uVar3 = (lVar5 - lVar2 >> 3) * -0x5555555555555555;
  if (uVar6 + 1 != uVar3) {
    if ((lVar2 == lVar5) || (uVar3 < uVar6 || uVar3 - uVar6 == 0)) goto LAB_10a5161d0;
    puVar4 = (undefined8 *)(lVar2 + (long)param_2 * 0x18);
    FUN_10a23141c(puVar4);
    uVar7 = *(undefined8 *)(lVar5 + -0x18);
    puVar4[1] = *(undefined8 *)(lVar5 + -0x10);
    *puVar4 = uVar7;
    puVar4[2] = *(undefined8 *)(lVar5 + -8);
    *(undefined8 *)(lVar5 + -0x18) = 0;
    *(undefined8 *)(lVar5 + -0x10) = 0;
    *(undefined8 *)(lVar5 + -8) = 0;
    lVar2 = *(long *)(param_1 + 0x40);
    lVar5 = *(long *)(param_1 + 0x48);
    uVar3 = (lVar5 - lVar2 >> 3) * -0x5555555555555555;
    if (uVar3 < uVar6 || uVar3 - uVar6 == 0) goto LAB_10a5161d0;
  }
  if (lVar2 != lVar5) {
    lStack_38 = lVar5 + -0x18;
    FUN_10a22ff44(&lStack_38);
    *(long *)(param_1 + 0x48) = lVar5 + -0x18;
    return;
  }
LAB_10a5161d0:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5161d4);
  (*pcVar1)();
}



/* Entry: 10a5161d4; end: 10a516233;  */

undefined8 * FUN_10a5161d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bebd08;
  func_0x00010a516484(param_1 + 1);
  return param_1;
}



/* Entry: 10a516234; end: 10a5163cb;  */

undefined1  [16] FUN_10a516234(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  code **ppcVar5;
  ulong uVar6;
  undefined *unaff_x21;
  long lVar7;
  long unaff_x22;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  long lStack_118;
  long lStack_110;
  undefined *puStack_108;
  code **ppcStack_100;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  code **ppcStack_e0;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  long lStack_b0;
  long lStack_a8;
  code *pcStack_98;
  undefined **appuStack_90 [7];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a26d314(&lStack_b0,
                (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * -0x5555555555555555);
  lVar4 = lStack_a8 - lStack_b0;
  if (lVar4 != 0) {
    unaff_x22 = 0;
    uVar8 = 0;
    unaff_x21 = &UNK_10e4bea76;
    do {
      uVar6 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * -0x5555555555555555;
      if (uVar6 < uVar8 || uVar6 - uVar8 == 0) {
LAB_10a516388:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a51638c);
        (*pcVar1)();
      }
      plVar2 = param_2;
      func_0x0001098ac018(param_2,&UNK_10e4bea76,0x26,*(long *)(param_1 + 8) + unaff_x22,2,1);
      if ((ulong)(lStack_a8 - lStack_b0 >> 2) <= uVar8) goto LAB_10a516388;
      *(int *)(lStack_b0 + uVar8 * 4) = (int)plVar2;
      uVar8 = uVar8 + 1;
      unaff_x22 = unaff_x22 + 0x18;
    } while (lVar4 >> 2 != uVar8);
  }
  pcStack_98 = FUN_10a5164ec;
  appuStack_90[0] = &PTR_DAT_110bebd38;
  ppcVar5 = &pcStack_98;
  func_0x0001098bb6d0(*param_2 + 0x18,ppcVar5,&lStack_b0);
  (*(code *)*appuStack_90[0])(appuStack_90);
  lVar4 = lStack_b0;
  if (lStack_b0 != 0) {
    lStack_a8 = lStack_b0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    auVar9._8_8_ = ppcVar5;
    auVar9._0_8_ = lVar4;
    return auVar9;
  }
  ___stack_chk_fail();
  (*(code *)*appuStack_90[0])(appuStack_90);
  if (lStack_b0 != 0) {
    lStack_a8 = lStack_b0;
    __ZdlPv();
  }
  __Unwind_Resume(lVar4);
  pcStack_b8 = FUN_10a5163cc;
  puVar3 = &DAT_10f62a4d8;
  puStack_c0 = &stack0xfffffffffffffff0;
  FUN_109ffde64();
  pcStack_c8 = FUN_10a5163e0;
  ppuStack_f0 = &puStack_d0;
  ppcStack_e0 = &pcStack_98;
  if (puVar3 < (undefined *)0xaaaaaaaaaaaaaab) {
    lVar4 = (long)puVar3 * 0x18;
    puStack_d0 = (undefined1 *)&puStack_c0;
    __Znwm(lVar4);
    auVar10._8_8_ = puVar3;
    auVar10._0_8_ = lVar4;
    return auVar10;
  }
  puStack_d0 = (undefined1 *)&puStack_c0;
  func_0x000109ffded8();
  pcStack_e8 = FUN_10a516424;
  if ((puVar3[0x18] & 1) == 0) {
    lVar4 = **(long **)(puVar3 + 8);
    lVar7 = **(long **)(puVar3 + 0x10);
    lStack_110 = unaff_x22;
    puStack_108 = unaff_x21;
    ppcStack_100 = &pcStack_98;
    while (lVar7 != lVar4) {
      lVar7 = lVar7 + -0x18;
      lStack_118 = lVar7;
      FUN_10a22ff44(&lStack_118);
    }
  }
  auVar11._8_8_ = ppcVar5;
  auVar11._0_8_ = puVar3;
  return auVar11;
}



/* Entry: 10a5163cc; end: 10a5163df;  */

undefined1  [16] FUN_10a5163cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lStack_68;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (puVar1 < (undefined *)0xaaaaaaaaaaaaaab) {
    lVar2 = (long)puVar1 * 0x18;
    __Znwm(lVar2);
    auVar4._8_8_ = puVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  if ((puVar1[0x18] & 1) == 0) {
    lVar2 = **(long **)(puVar1 + 8);
    lVar3 = **(long **)(puVar1 + 0x10);
    while (lVar3 != lVar2) {
      lVar3 = lVar3 + -0x18;
      lStack_68 = lVar3;
      FUN_10a22ff44(&lStack_68);
    }
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = puVar1;
  return auVar5;
}



/* Entry: 10a5163e0; end: 10a516423;  */

undefined1  [16] FUN_10a5163e0(ulong param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lStack_58;
  
  if (param_1 < 0xaaaaaaaaaaaaaab) {
    lVar1 = param_1 * 0x18;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar1 = **(long **)(param_1 + 8);
    lVar2 = **(long **)(param_1 + 0x10);
    while (lVar2 != lVar1) {
      lVar2 = lVar2 + -0x18;
      lStack_58 = lVar2;
      FUN_10a22ff44(&lStack_58);
    }
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10a516424; end: 10a5164eb;  */

long FUN_10a516424(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar1 = **(long **)(param_1 + 8);
    lVar2 = **(long **)(param_1 + 0x10);
    while (lVar2 != lVar1) {
      lVar2 = lVar2 + -0x18;
      lStack_38 = lVar2;
      FUN_10a22ff44(&lStack_38);
    }
  }
  return param_1;
}



/* Entry: 10a5164ec; end: 10a516557;  */

void FUN_10a5164ec(void)

{
  return;
}



/* Entry: 10a516558; end: 10a5165db;  */

void FUN_10a516558(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uStack_34;
  
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  FUN_10a516610(uVar2,*(undefined8 *)(param_2 + 0x20));
  if ((int)uVar2 == 0) {
    uStack_34 = 0x40000000;
  }
  else {
    lVar1 = 0x10;
    if (param_4 != 0) {
      lVar1 = 0x18;
    }
    uStack_34 = *(undefined4 *)(param_2 + lVar1);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_10a26d5a0(param_1,&uStack_34,&stack0xffffffffffffffd0,1);
  return;
}



/* Entry: 10a5165dc; end: 10a51660f;  */

void FUN_10a5165dc(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_DAT_110bebd80;
  param_1[1] = &UNK_110bebd50;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



/* Entry: 10a516610; end: 10a5166d7;  */

undefined1 * FUN_10a516610(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  
  puVar2 = &uStack_50;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10a22fc9c(&uStack_50,*param_2,param_2[1],(param_2[1] - *param_2 >> 3) * 0x2e8ba2e8ba2e8ba3);
  lVar1 = param_1[1];
  for (lVar3 = *param_1; lVar3 != lVar1; lVar3 = lVar3 + 0x58) {
    FUN_10aacfc74(&uStack_50,lVar3);
  }
  func_0x00010aacfb0c(&uStack_50,param_2);
  puStack_38 = (undefined1 *)&uStack_50;
  FUN_10a22ff44(&puStack_38);
  return (undefined1 *)puVar2;
}



/* Entry: 10a5166d8; end: 10a51671b;  */

void FUN_10a5166d8(long param_1,undefined8 param_2,long param_3)

{
  if (*(undefined8 **)(param_1 + 0x48) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a5166f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(param_1 + 0x48))
              (param_2,*(undefined4 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x20));
    return;
  }
  return;
}



/* Entry: 10a51671c; end: 10a516757;  */

void FUN_10a51671c(long param_1)

{
  long lStack_28;
  
  if (param_1 != 0) {
    lStack_28 = param_1;
    FUN_10a22ff44(&lStack_28);
    __ZdlPv(param_1);
  }
  return;
}



/* Entry: 10a516758; end: 10a51675b;  */

void FUN_10a516758(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a51675c; end: 10a51676f;  */

void FUN_10a51675c(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a516770; end: 10a516777;  */

void FUN_10a516770(long param_1)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    lStack_28 = lVar1;
    FUN_10a22ff44(&lStack_28);
    __ZdlPv(lVar1);
  }
  return;
}



/* Entry: 10a516778; end: 10a5167af;  */

undefined8 FUN_10a516778(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bebe30);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a5167b0; end: 10a5167b3;  */

void FUN_10a5167b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a5167b4; end: 10a516823;  */

void FUN_10a5167b4(long param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
                  long param_5)

{
  code *pcVar1;
  long *plVar2;
  long lStack_40;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  lStack_40 = param_1;
  uStack_38 = param_2;
  if (param_5 != 0) {
    plVar2 = &lStack_30;
    lStack_30 = param_1;
    uStack_28 = param_2;
    func_0x0001098b9090(plVar2,*param_4);
    if (*plVar2 != 0) {
      func_0x00010a291414(&lStack_40,param_3);
      lStack_30 = 0;
      func_0x00010a2914e4();
      func_0x00010a2914e4(&lStack_30,0);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a516824);
  (*pcVar1)();
}



/* Entry: 10a516824; end: 10a51683f;  */

void FUN_10a516824(void)

{
  return;
}



/* Entry: 10a516840; end: 10a5168e7;  */

undefined8 * FUN_10a516840(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bebe68;
  (**(code **)param_1[0xf])();
  (**(code **)param_1[7])();
  FUN_10a26cc38(param_1 + 3);
  return param_1;
}



/* Entry: 10a5168e8; end: 10a516b27;  */

/* WARNING: Removing unreachable block (ram,0x00010a516abc) */
/* WARNING: Removing unreachable block (ram,0x00010a516ac0) */
/* WARNING: Removing unreachable block (ram,0x00010a516ac8) */
/* WARNING: Removing unreachable block (ram,0x00010a516ad0) */
/* WARNING: Removing unreachable block (ram,0x00010a516ad4) */

void FUN_10a5168e8(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 in_x7;
  long lVar6;
  long lVar7;
  undefined8 uStack_50;
  long *plStack_48;
  
  puVar5 = (undefined8 *)0x1b8;
  __Znwm();
  lVar7 = param_3;
  if (*(long *)(param_2 + 8) != 0) {
    lVar7 = *(long *)(param_2 + 8);
  }
  plStack_48 = *(long **)(param_2 + 0x20);
  uStack_50 = *(undefined8 *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x20) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *puVar5 = &PTR_DAT_110bebea8;
  func_0x0001098bae4c(puVar5,&UNK_10e4bef83,0x3b,param_3,lVar7,puVar5 + 0x19,puVar5 + 0x2d,in_x7,0,0
                      ,&uStack_50);
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
  puVar5[0x1c] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x20] = 0;
  puVar5[0x1f] = 0;
  *puVar5 = &PTR_DAT_110bebea8;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  puVar5[0x19] = &PTR_FUN_110bebef8;
  puVar5[0x21] = 0;
  puVar5[0x23] = 0;
  puVar5[0x22] = 0;
  puVar5[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x27) = 0x40000000;
  puVar5[0x24] = &PTR_DAT_110bebfb0;
  puVar5[0x25] = &UNK_110bebf80;
  *(undefined2 *)((long)puVar5 + 0x13c) = 0;
  puVar5[0x2a] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x2b) = 0x40000000;
  puVar5[0x28] = &PTR_DAT_110bebfb0;
  puVar5[0x29] = &UNK_110bebf80;
  *(undefined2 *)((long)puVar5 + 0x15c) = 0;
  *(undefined2 *)(puVar5 + 0x2c) = 0;
  lVar7 = puVar5[0xc];
  if (lVar7 == 0) {
    bVar4 = false;
    lVar6 = param_2 + 0x28;
  }
  else {
    bVar4 = lVar7 != puVar5[0xb];
    lVar6 = 0;
    if (!bVar4) {
      lVar6 = param_2 + 0x28;
    }
  }
  *(undefined2 *)(puVar5 + 0x2e) = 0;
  puVar5[0x31] = FUN_10a517388;
  puVar5[0x32] = &UNK_110bec010;
  puVar5[0x33] = 0;
  puVar5[0x34] = 0;
  puVar5[0x35] = 0;
  puVar5[0x36] = 0;
  puVar5[0x2d] = &PTR_FUN_110bebff0;
  if ((!bVar4) && (*(char *)(*(long *)(lVar6 + 0x10) + 8) == '\x01')) {
    puVar5[0x36] = lVar6 + 8;
  }
  if ((lVar7 == 0) || (lVar7 == puVar5[0xb])) {
    *(undefined1 *)((long)puVar5 + 0x161) = 1;
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 10a516b28; end: 10a516c0f;  */

undefined8 * FUN_10a516b28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bebef8;
  if (param_1[8] != 0) {
    param_1[9] = param_1[8];
    __ZdlPv();
  }
  *param_1 = &PTR____cxa_pure_virtual_110b17e28;
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  if (param_1[2] != 0) {
    param_1[3] = param_1[2];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a516c10; end: 10a516c4f;  */

void FUN_10a516c10(void)

{
  return;
}



/* Entry: 10a516c50; end: 10a516eb3;  */

/* WARNING: Removing unreachable block (ram,0x00010a516dc0) */
/* WARNING: Removing unreachable block (ram,0x00010a516dc4) */
/* WARNING: Removing unreachable block (ram,0x00010a516dcc) */
/* WARNING: Removing unreachable block (ram,0x00010a516dd4) */
/* WARNING: Removing unreachable block (ram,0x00010a516de0) */
/* WARNING: Removing unreachable block (ram,0x00010a516de8) */
/* WARNING: Removing unreachable block (ram,0x00010a516df0) */
/* WARNING: Removing unreachable block (ram,0x00010a516df4) */

void FUN_10a516c50(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *extraout_x8;
  long lVar9;
  undefined8 *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_8c;
  code *pcStack_88;
  undefined **appuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *(long *)(param_2 + 0x70);
  if ((*(byte *)(lVar9 + 0x1d) & 1) != 0) {
    puVar5 = (undefined8 *)0xa0;
    __Znwm();
    puVar8 = puVar5 + 3;
    *(undefined2 *)puVar8 = 4;
    puVar5[2] = 0;
    puVar5[1] = 0x200000006;
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[7] = 0;
    puVar5[6] = 0;
    puVar5[9] = 0;
    puVar5[8] = 0;
    puVar5[0xb] = 0;
    puVar5[10] = 0;
    puVar5[0xd] = 0;
    puVar5[0xc] = 0;
    puVar5[0xf] = 0;
    puVar5[0xe] = 0;
    puVar5[0x10] = 0;
    puVar5[0x11] = puVar8;
    puVar5[0x12] = 0;
    *puVar5 = &PTR_DAT_110ae91c0;
    *(undefined2 *)(puVar5 + 0x13) = 0;
    puStack_b0 = puVar5;
    if ((*(byte *)(param_2 + 0x161) & 1) != 0) {
      lStack_a8 = 0;
      lStack_a0 = 0;
      uStack_98 = 0;
      uStack_8c = 0x20000000;
      FUN_10a26ebc0(&lStack_a8,0,&uStack_8c,&pcStack_88,1);
      pcStack_88 = FUN_10a517598;
      appuStack_80[0] = &PTR_FUN_110bec048;
      param_2 = param_2 + 0x18;
      FUN_10a517480(param_2,&pcStack_88,&lStack_a8);
      (*(code *)*appuStack_80[0])(appuStack_80);
      if (lStack_a8 != 0) {
        lStack_a0 = lStack_a8;
        __ZdlPv();
      }
      plVar1 = puVar5 + 2;
      *(int *)(lVar9 + 0x10) = (int)param_2;
      do {
        lVar9 = *plVar1;
        if (lVar9 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = 2;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            FUN_109d1b4dc(puVar8);
            goto LAB_10a516da0;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        if (((uint)lVar9 >> 1 & 1) != 0) {
LAB_10a516da0:
          while( true ) {
            *param_1 = puVar5;
            puVar8 = puVar5;
            func_0x0001092b4274(&puStack_b0);
            iVar7 = (int)puVar8;
            lVar9 = 0;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
              return;
            }
            ___stack_chk_fail();
            if (iVar7 == 0) break;
            (*(code *)*appuStack_80[0])(appuStack_80);
            if (lStack_a8 != 0) {
              lStack_a0 = lStack_a8;
              __ZdlPv();
            }
            ___cxa_begin_catch(lVar9);
            __ZSt17current_exceptionv(&pcStack_88);
            func_0x000109d1b350(puVar5,&pcStack_88);
            __ZNSt13exception_ptrD1Ev(&pcStack_88);
            ___cxa_end_catch();
          }
          __Unwind_Resume(lVar9);
          func_0x000104bd46a0();
          puVar5 = (undefined8 *)0x20;
          __Znwm();
          puVar5[1] = 0;
          *puVar5 = &PTR_FUN_110bebf38;
          puVar5[2] = 0;
          puVar5[3] = 0;
          lVar9 = *(long *)(lVar9 + 0x48) - *(long *)(lVar9 + 0x40);
          if (lVar9 != 0) {
            if (lVar9 < 0) {
              FUN_10a51724c();
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10a516f48);
              (*pcVar4)();
            }
            lVar6 = lVar9;
            __Znwm();
            puVar5[1] = lVar6;
            puVar5[3] = lVar6 + lVar9;
            _memcpy();
            puVar5[2] = lVar6 + lVar9;
          }
          *extraout_x8 = puVar5;
          return;
        }
      } while( true );
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a516e34);
  (*pcVar4)();
}



/* Entry: 10a516eb4; end: 10a516f6b;  */

void FUN_10a516eb4(undefined8 *param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_110bebf38;
  puVar3[2] = 0;
  puVar3[3] = 0;
  lVar1 = *(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40);
  if (lVar1 != 0) {
    if (lVar1 < 0) {
      FUN_10a51724c();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a516f48);
      (*pcVar2)();
    }
    lVar4 = lVar1;
    __Znwm();
    puVar3[1] = lVar4;
    puVar3[3] = lVar4 + lVar1;
    _memcpy();
    puVar3[2] = lVar4 + lVar1;
  }
  *param_1 = puVar3;
  return;
}



/* Entry: 10a516f6c; end: 10a51702b;  */

void FUN_10a516f6c(long param_1,int param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 0x48);
  if (uVar7 < *(ulong *)(param_1 + 0x50)) {
    lVar6 = uVar7 + 1;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x40);
    lVar5 = uVar7 - lVar4;
    uVar7 = lVar5 + 1;
    if ((long)uVar7 < 0) {
      FUN_10a51724c();
      lVar4 = *(long *)(param_1 + 0x40);
      lVar5 = *(long *)(param_1 + 0x48);
      if ((((long)param_2 + 1U == lVar5 - lVar4) ||
          ((lVar4 != lVar5 && ((ulong)(long)param_2 < (ulong)(lVar5 - lVar4))))) && (lVar4 != lVar5)
         ) {
        *(long *)(param_1 + 0x48) = lVar5 + -1;
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a51706c);
      (*pcVar1)();
    }
    uVar2 = *(ulong *)(param_1 + 0x50) - lVar4;
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar7 || uVar3 - uVar7 == 0) {
      uVar3 = uVar7;
    }
    if (0x3ffffffffffffffe < uVar2) {
      uVar3 = 0x7fffffffffffffff;
    }
    if (uVar3 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar3;
      __Znwm();
    }
    lVar6 = uVar7 + lVar5 + 1;
    _memcpy(uVar7,lVar4,lVar5);
    *(ulong *)(param_1 + 0x40) = uVar7;
    *(long *)(param_1 + 0x48) = lVar6;
    *(ulong *)(param_1 + 0x50) = uVar7 + uVar3;
    if (lVar4 != 0) {
      __ZdlPv(lVar4);
    }
  }
  *(long *)(param_1 + 0x48) = lVar6;
  return;
}



/* Entry: 10a51702c; end: 10a51706b;  */

void FUN_10a51702c(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  lVar1 = *(long *)(param_1 + 0x40);
  lVar2 = *(long *)(param_1 + 0x48);
  if ((((long)param_2 + 1U == lVar2 - lVar1) ||
      ((lVar1 != lVar2 && ((ulong)(long)param_2 < (ulong)(lVar2 - lVar1))))) && (lVar1 != lVar2)) {
    *(long *)(param_1 + 0x48) = lVar2 + -1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a51706c);
  (*pcVar3)();
}



/* Entry: 10a51706c; end: 10a5170e3;  */

undefined8 * FUN_10a51706c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bebf38;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a5170e4; end: 10a51724b;  */

void FUN_10a5170e4(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lStack_a0;
  long lStack_98;
  code *pcStack_88;
  undefined **appuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a26d314(&lStack_a0,*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8));
  lVar3 = lStack_98 - lStack_a0;
  if (lVar3 != 0) {
    uVar4 = 0;
    do {
      if ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) <= uVar4) {
LAB_10a517208:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a51720c);
        (*pcVar1)();
      }
      plVar2 = param_2;
      func_0x0001098ac018(param_2,&UNK_10e4beea5,0x26,*(long *)(param_1 + 8) + uVar4,2,1);
      if ((ulong)(lStack_98 - lStack_a0 >> 2) <= uVar4) goto LAB_10a517208;
      *(int *)(lStack_a0 + uVar4 * 4) = (int)plVar2;
      uVar4 = uVar4 + 1;
    } while (lVar3 >> 2 != uVar4);
  }
  pcStack_88 = FUN_10a517260;
  appuStack_80[0] = &PTR_DAT_110bebf68;
  func_0x0001098bb6d0(*param_2 + 0x18,&pcStack_88,&lStack_a0);
  (*(code *)*appuStack_80[0])(appuStack_80);
  lVar3 = lStack_a0;
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*appuStack_80[0])(appuStack_80);
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  __Unwind_Resume(lVar3);
  FUN_109ffde64(&DAT_10f62a4d8);
  return;
}



/* Entry: 10a51724c; end: 10a51725f;  */

void FUN_10a51724c(void)

{
  FUN_109ffde64(&DAT_10f62a4d8);
  return;
}



/* Entry: 10a517260; end: 10a5172af;  */

void FUN_10a517260(void)

{
  return;
}



/* Entry: 10a5172b0; end: 10a517313;  */

void FUN_10a5172b0(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 uStack_14;
  
  if (((*(byte *)(param_3 + 0x1d) & 1) != 0) && ((*(byte *)(param_2 + 0x1d) & 1) != 0)) {
    lVar1 = 0x10;
    if (param_4 != 0) {
      lVar1 = 0x18;
    }
    uStack_14 = *(undefined4 *)(param_2 + lVar1);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    FUN_10a26d5a0(param_1,&uStack_14,&stack0xfffffffffffffff0,1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a517314);
  (*pcVar2)();
}



/* Entry: 10a517314; end: 10a517343;  */

void FUN_10a517314(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_DAT_110bebfb0;
  param_1[1] = &UNK_110bebf80;
  *(undefined2 *)((long)param_1 + 0x1c) = 0;
  return;
}



/* Entry: 10a517344; end: 10a517387;  */

void FUN_10a517344(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined1 uStack_11;
  
  if ((*(byte *)(param_3 + 0x1d) & 1) != 0) {
    if (*(undefined8 **)(param_1 + 0x48) != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)(param_1 + 0x48))
                (param_2,*(undefined4 *)(param_3 + 0x10),&uStack_11);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a517388);
  (*pcVar1)();
}



/* Entry: 10a517388; end: 10a5173a3;  */

void FUN_10a517388(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = FUN_10a5173a4;
  param_1[1] = &PTR_FUN_110bec030;
  param_1[2] = param_2;
  return;
}



/* Entry: 10a5173a4; end: 10a51745b;  */

void FUN_10a5173a4(long param_1,long *param_2,undefined4 param_3,undefined4 *param_4,long param_5,
                  long param_6)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lStack_50;
  long *plStack_48;
  
  plVar3 = &lStack_50;
  if (param_5 != 0) {
    lStack_50 = param_1;
    plStack_48 = param_2;
    func_0x0001098af634(&lStack_50,*param_4);
    if ((char)plVar3[3] != '\x01') {
      return;
    }
    FUN_10a26d738(param_2,param_3);
    puVar1 = (undefined8 *)0x1137eb210;
    if (*param_2 != -1) {
      puVar1 = (undefined8 *)(param_1 + *param_2);
    }
    if ((*(byte *)(plVar3 + 3) & 1) != 0) {
      if (*(ulong *)(param_6 + 0x10) < (ulong)(plVar3[1] - *plVar3 >> 3)) {
        puVar4 = *(undefined8 **)(*plVar3 + *(ulong *)(param_6 + 0x10) * 8);
        uVar5 = 0;
        if (puVar4 != (undefined8 *)0x0) {
          uVar5 = *puVar4;
        }
        *puVar1 = uVar5;
        return;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a51745c);
  (*pcVar2)();
}



/* Entry: 10a51745c; end: 10a51747f;  */

void FUN_10a51745c(void)

{
  return;
}



/* Entry: 10a517480; end: 10a51757b;  */

undefined8 ** FUN_10a517480(undefined8 **param_1,undefined8 *param_2,long *param_3)

{
  undefined8 **ppuVar1;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = *param_2;
  (**(code **)(param_2[1] + 0x10))(apuStack_70);
  lStack_88 = param_3[1];
  lStack_90 = *param_3;
  lStack_80 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  func_0x0001098aeecc(param_1,&uStack_78,&UNK_110bef3e0,&lStack_90);
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  ppuVar1 = apuStack_70;
  (*(code *)*apuStack_70[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  (*(code *)*apuStack_70[0])(apuStack_70);
  __Unwind_Resume();
  *ppuVar1 = (undefined8 *)0x0;
  return ppuVar1;
}



/* Entry: 10a51757c; end: 10a517597;  */

void FUN_10a51757c(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10a517598; end: 10a5176a7;  */

void FUN_10a517598(long param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
                  long param_5)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lStack_40;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  plVar3 = &lStack_40;
  lStack_40 = param_1;
  uStack_38 = param_2;
  if (param_5 != 0) {
    plVar2 = &lStack_30;
    lStack_30 = param_1;
    uStack_28 = param_2;
    func_0x0001098b9090(plVar2,*param_4);
    if (*plVar2 != 0) {
      func_0x00010a517600(&lStack_40,param_3);
      lVar4 = *plVar3;
      *plVar3 = 0;
      if (lVar4 != 0) {
        func_0x00010a502448();
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a517600);
  (*pcVar1)();
}



/* Entry: 10a5176a8; end: 10a5176c3;  */

void FUN_10a5176a8(void)

{
  return;
}



/* Entry: 10a5176c4; end: 10a51776b;  */

undefined8 * FUN_10a5176c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bec070;
  (**(code **)param_1[0xf])();
  (**(code **)param_1[7])();
  FUN_10a26cc38(param_1 + 3);
  return param_1;
}



/* Entry: 10a51776c; end: 10a5179ab;  */

/* WARNING: Removing unreachable block (ram,0x00010a517940) */
/* WARNING: Removing unreachable block (ram,0x00010a517944) */
/* WARNING: Removing unreachable block (ram,0x00010a51794c) */
/* WARNING: Removing unreachable block (ram,0x00010a517954) */
/* WARNING: Removing unreachable block (ram,0x00010a517958) */

void FUN_10a51776c(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 in_x7;
  long lVar6;
  long lVar7;
  undefined8 uStack_50;
  long *plStack_48;
  
  puVar5 = (undefined8 *)0x1d8;
  __Znwm();
  lVar7 = param_3;
  if (*(long *)(param_2 + 8) != 0) {
    lVar7 = *(long *)(param_2 + 8);
  }
  plStack_48 = *(long **)(param_2 + 0x20);
  uStack_50 = *(undefined8 *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x20) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *puVar5 = &PTR_FUN_110bec0b0;
  func_0x0001098bae4c(puVar5,&UNK_10e4bf26e,0x3a,param_3,lVar7,puVar5 + 0x19,puVar5 + 0x31,in_x7,0,0
                      ,&uStack_50);
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
  puVar5[0x1c] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x20] = 0;
  puVar5[0x1f] = 0;
  *puVar5 = &PTR_FUN_110bec0b0;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  puVar5[0x19] = &PTR_FUN_110bec100;
  puVar5[0x21] = 0;
  puVar5[0x23] = 0;
  puVar5[0x22] = 0;
  puVar5[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x27) = 0x40000000;
  puVar5[0x24] = &PTR_DAT_110bec1b8;
  puVar5[0x25] = &UNK_110bec188;
  puVar5[0x28] = 0;
  puVar5[0x29] = 0;
  puVar5[0x2c] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x2d) = 0x40000000;
  puVar5[0x2a] = &PTR_DAT_110bec1b8;
  puVar5[0x2b] = &UNK_110bec188;
  puVar5[0x2e] = 0;
  puVar5[0x2f] = 0;
  *(undefined2 *)(puVar5 + 0x30) = 0;
  lVar7 = puVar5[0xc];
  if (lVar7 == 0) {
    bVar4 = false;
    lVar6 = param_2 + 0x28;
  }
  else {
    bVar4 = lVar7 != puVar5[0xb];
    lVar6 = 0;
    if (!bVar4) {
      lVar6 = param_2 + 0x28;
    }
  }
  *(undefined2 *)(puVar5 + 0x32) = 0;
  puVar5[0x35] = 0x10a518808;
  puVar5[0x36] = &UNK_110bec218;
  puVar5[0x37] = 0;
  puVar5[0x38] = 0;
  puVar5[0x39] = 0;
  puVar5[0x3a] = 0;
  puVar5[0x31] = &PTR_FUN_110bec1f8;
  if ((!bVar4) && (*(char *)(*(long *)(lVar6 + 0x10) + 8) == '\x01')) {
    puVar5[0x3a] = lVar6 + 8;
  }
  if ((lVar7 == 0) || (lVar7 == puVar5[0xb])) {
    *(undefined1 *)((long)puVar5 + 0x181) = 1;
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 10a5179ac; end: 10a517a67;  */

undefined8 * FUN_10a5179ac(undefined8 *param_1)

{
  ulong *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  ulong uVar7;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bec0b0;
  FUN_10a232e34(param_1 + 0x2e);
  FUN_10a232e34(param_1 + 0x28);
  param_1[0x19] = &PTR_FUN_110bec100;
  func_0x00010a5183e8(param_1 + 0x21);
  func_0x0001098bba44(param_1 + 0x19);
  *param_1 = &PTR_DAT_110b17ab0;
  if ((*(char *)(param_1 + 0x18) == '\x01') && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
    lVar6 = param_1[0xb];
    lVar2 = *(long *)(lVar6 + 0x148);
    if (-1 < *(char *)(lVar6 + 0x15f)) {
      lVar2 = lVar6 + 0x148;
    }
    func_0x00010ae06f08(1,4,&UNK_10f585d39,&UNK_10f585e3d,0x15,&UNK_10f585e89,in_x6,in_x7,
                        &UNK_10f585f66,lVar2,param_1[1]);
  }
  func_0x0001098ae07c(param_1 + 0x16);
  plVar5 = (long *)param_1[0x12];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 0x200000000;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (uVar7 >> 0x21 == 1) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  *param_1 = &PTR_DAT_110b17b10;
  plVar5 = (long *)param_1[10];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  puStack_28 = param_1 + 3;
  func_0x0001098ad298(&puStack_28);
  return param_1;
}



/* Entry: 10a517a68; end: 10a517a6b;  */

void FUN_10a517a68(void)

{
  return;
}



/* Entry: 10a517a6c; end: 10a517bc7;  */

uint FUN_10a517a6c(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lStack_50;
  long *plStack_48;
  
  lVar11 = *(long *)(param_1 + 0x70);
  lVar2 = param_1 + 0x150;
  if (lVar11 != param_1 + 0x120) {
    lVar2 = param_1 + 0x120;
  }
  *(long *)(param_1 + 0x78) = lVar2;
  func_0x00010a286b48(lVar2 + 0x20);
  lVar7 = 0x28;
  __Znwm();
  lVar10 = *(long *)(param_1 + 0x108);
  lVar3 = *(long *)(param_1 + 0x110);
  FUN_10a22bd48();
  while (lVar10 = lVar10 + 0x28, lVar10 != lVar3) {
    FUN_10aad332c(lVar7);
  }
  plVar8 = (long *)0x20;
  lStack_50 = lVar7;
  __Znwm();
  *plVar8 = (long)&PTR_DAT_110bec260;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar8[3] = lVar7;
  plStack_48 = plVar8;
  FUN_10a286fec(lVar2 + 0x20,&lStack_50);
  plVar8 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar10 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  if (lVar11 == 0) {
    uVar6 = 1;
  }
  else {
    uVar9 = *(undefined8 *)(lVar11 + 0x20);
    FUN_10a5185d4(uVar9,*(undefined8 *)(lVar2 + 0x20));
    uVar6 = (uint)uVar9 ^ 1;
  }
  return uVar6;
}



/* Entry: 10a517bc8; end: 10a517e8f;  */

/* WARNING: Removing unreachable block (ram,0x00010a517d78) */
/* WARNING: Removing unreachable block (ram,0x00010a517d7c) */
/* WARNING: Removing unreachable block (ram,0x00010a517d84) */
/* WARNING: Removing unreachable block (ram,0x00010a517d8c) */
/* WARNING: Removing unreachable block (ram,0x00010a517d98) */
/* WARNING: Removing unreachable block (ram,0x00010a517da0) */
/* WARNING: Removing unreachable block (ram,0x00010a517da8) */
/* WARNING: Removing unreachable block (ram,0x00010a517dac) */

void FUN_10a517bc8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *extraout_x8;
  long lVar9;
  long lVar10;
  undefined8 *puStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined **appuStack_d0 [7];
  undefined8 uStack_98;
  undefined **appuStack_90 [7];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *(long *)(param_2 + 0x70);
  puVar6 = (undefined8 *)0xa0;
  __Znwm();
  puVar8 = puVar6 + 3;
  *(undefined2 *)puVar8 = 4;
  puVar6[2] = 0;
  puVar6[1] = 0x200000006;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xb] = 0;
  puVar6[10] = 0;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  puVar6[0xf] = 0;
  puVar6[0xe] = 0;
  puVar6[0x10] = 0;
  puVar6[0x11] = puVar8;
  puVar6[0x12] = 0;
  *puVar6 = &PTR_DAT_110ae91c0;
  *(undefined2 *)(puVar6 + 0x13) = 0;
  puStack_118 = puVar6;
  if ((*(byte *)(param_2 + 0x181) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a517df0);
    (*pcVar5)();
  }
  lStack_110 = 0;
  lStack_108 = 0;
  uStack_100 = 0;
  uStack_98 = (code *)CONCAT44(uStack_98._4_4_,0x20000000);
  FUN_10a26ebc0(&lStack_110,0,&uStack_98,(long)&uStack_98 + 4,1);
  pcStack_d8 = FUN_10a518984;
  appuStack_d0[0] = &PTR_FUN_110bec2b0;
  uStack_98 = FUN_10a518984;
  appuStack_90[0] = &PTR_FUN_110bec2b0;
  lStack_e8 = lStack_108;
  lStack_f0 = lStack_110;
  uStack_e0 = uStack_100;
  lStack_110 = 0;
  lStack_108 = 0;
  uStack_100 = 0;
  param_2 = param_2 + 0x18;
  func_0x0001098aeecc(param_2,&uStack_98,&UNK_110bef3c0,&lStack_f0);
  if (lStack_f0 != 0) {
    lStack_e8 = lStack_f0;
    __ZdlPv();
  }
  (*(code *)*appuStack_90[0])(appuStack_90);
  (*(code *)*appuStack_d0[0])(appuStack_d0);
  if (lStack_110 != 0) {
    lStack_108 = lStack_110;
    __ZdlPv();
  }
  plVar1 = puVar6 + 2;
  *(int *)(lVar9 + 0x10) = (int)param_2;
  do {
    lVar9 = *plVar1;
    if (lVar9 == 0) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = 2;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        FUN_109d1b4dc(puVar8);
        goto LAB_10a517d58;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar9 >> 1 & 1) != 0) {
LAB_10a517d58:
      while( true ) {
        *param_1 = puVar6;
        puVar8 = puVar6;
        func_0x0001092b4274(&puStack_118);
        lVar9 = 0;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
          return;
        }
        ___stack_chk_fail();
        if ((int)puVar8 == 0) break;
        if (lStack_f0 != 0) {
          lStack_e8 = lStack_f0;
          __ZdlPv();
        }
        (*(code *)*appuStack_90[0])(appuStack_90);
        (*(code *)*appuStack_d0[0])(appuStack_d0);
        if (lStack_110 != 0) {
          lStack_108 = lStack_110;
          __ZdlPv();
        }
        ___cxa_begin_catch(lVar9);
        __ZSt17current_exceptionv(&pcStack_d8);
        func_0x000109d1b350(puVar6,&pcStack_d8);
        __ZNSt13exception_ptrD1Ev(&pcStack_d8);
        ___cxa_end_catch();
      }
      __Unwind_Resume(lVar9);
      func_0x000104bd46a0();
      puVar6 = (undefined8 *)0x20;
      __Znwm();
      puVar6[1] = 0;
      *puVar6 = &PTR_DAT_110bec140;
      puVar6[2] = 0;
      puVar6[3] = 0;
      lVar2 = *(long *)(lVar9 + 0x40);
      lVar9 = *(long *)(lVar9 + 0x48);
      lVar10 = lVar9 - lVar2;
      if (lVar10 != 0) {
        uVar7 = (lVar10 >> 3) * -0x3333333333333333;
        if (0x666666666666666 < uVar7) {
          FUN_10a518390();
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a517f6c);
          (*pcVar5)();
        }
        FUN_10a5183a4();
        lVar10 = 0;
        puVar6[1] = uVar7;
        puVar6[2] = uVar7;
        puVar6[3] = uVar7 + (long)puVar8 * 0x28;
        do {
          FUN_10a22bd48(uVar7 + lVar10,lVar2 + lVar10);
          lVar10 = lVar10 + 0x28;
        } while (lVar2 + lVar10 != lVar9);
        puVar6[2] = uVar7 + lVar10;
      }
      *extraout_x8 = puVar6;
      return;
    }
  } while( true );
}



/* Entry: 10a517e90; end: 10a517faf;  */

void FUN_10a517e90(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  
  puVar4 = (undefined8 *)0x20;
  __Znwm();
  puVar4[1] = 0;
  *puVar4 = &PTR_DAT_110bec140;
  puVar4[2] = 0;
  puVar4[3] = 0;
  lVar1 = *(long *)(param_2 + 0x40);
  lVar2 = *(long *)(param_2 + 0x48);
  lVar6 = lVar2 - lVar1;
  if (lVar6 != 0) {
    uVar5 = (lVar6 >> 3) * -0x3333333333333333;
    if (0x666666666666666 < uVar5) {
      FUN_10a518390();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a517f6c);
      (*pcVar3)();
    }
    FUN_10a5183a4();
    lVar6 = 0;
    puVar4[1] = uVar5;
    puVar4[2] = uVar5;
    puVar4[3] = uVar5 + param_3 * 0x28;
    do {
      FUN_10a22bd48(uVar5 + lVar6,lVar1 + lVar6);
      lVar6 = lVar6 + 0x28;
    } while (lVar1 + lVar6 != lVar2);
    puVar4[2] = uVar5 + lVar6;
  }
  *param_1 = puVar4;
  return;
}



/* Entry: 10a517fb0; end: 10a5180fb;  */

void FUN_10a517fb0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar4 = *(ulong *)(param_1 + 0x48);
  if (uVar4 < *(ulong *)(param_1 + 0x50)) {
    FUN_10a23080c(uVar4,param_2);
    lVar10 = uVar4 + 0x28;
LAB_10a5180dc:
    *(long *)(param_1 + 0x48) = lVar10;
    return;
  }
  lVar10 = uVar4 - *(long *)(param_1 + 0x40);
  uVar7 = (lVar10 >> 3) * -0x3333333333333333 + 1;
  if (uVar7 < 0x666666666666667) {
    lVar6 = (long)(*(ulong *)(param_1 + 0x50) - *(long *)(param_1 + 0x40)) >> 3;
    uVar4 = lVar6 * -0x6666666666666666;
    if (uVar4 < uVar7 || uVar4 - uVar7 == 0) {
      uVar4 = uVar7;
    }
    if (0x333333333333332 < (ulong)(lVar6 * -0x3333333333333333)) {
      uVar4 = 0x666666666666666;
    }
    if (uVar4 == 0) {
      uVar4 = 0;
      lVar6 = 0;
    }
    else {
      lVar6 = param_2;
      FUN_10a5183a4();
    }
    lVar10 = uVar4 + lVar10;
    FUN_10a23080c(lVar10,param_2);
    lVar9 = *(long *)(param_1 + 0x40);
    lVar2 = *(long *)(param_1 + 0x48);
    lVar1 = lVar10 + (lVar9 - lVar2);
    lVar5 = lVar1;
    lVar11 = lVar9;
    if (lVar2 != lVar9) {
      do {
        FUN_10a23080c(lVar5,lVar11);
        lVar11 = lVar11 + 0x28;
        lVar5 = lVar5 + 0x28;
      } while (lVar11 != lVar2);
      do {
        func_0x00010a22c9fc(lVar9);
        lVar9 = lVar9 + 0x28;
      } while (lVar9 != lVar2);
      lVar9 = *(long *)(param_1 + 0x40);
    }
    lVar10 = lVar10 + 0x28;
    *(long *)(param_1 + 0x40) = lVar1;
    *(long *)(param_1 + 0x48) = lVar10;
    *(ulong *)(param_1 + 0x50) = uVar4 + lVar6 * 0x28;
    if (lVar9 != 0) {
      __ZdlPv(lVar9);
    }
    goto LAB_10a5180dc;
  }
  FUN_10a518390();
  uVar8 = (ulong)(int)param_2;
  lVar10 = *(long *)(uVar4 + 0x40);
  lVar6 = *(long *)(uVar4 + 0x48);
  uVar7 = (lVar6 - lVar10 >> 3) * -0x3333333333333333;
  if (uVar8 + 1 != uVar7) {
    if ((lVar10 == lVar6) || (uVar7 < uVar8 || uVar7 - uVar8 == 0)) goto LAB_10a518194;
    FUN_10a230718(lVar10 + (long)(int)param_2 * 0x28,lVar6 + -0x28);
    lVar10 = *(long *)(uVar4 + 0x40);
    lVar6 = *(long *)(uVar4 + 0x48);
    uVar7 = (lVar6 - lVar10 >> 3) * -0x3333333333333333;
    if (uVar7 < uVar8 || uVar7 - uVar8 == 0) goto LAB_10a518194;
  }
  if (lVar10 != lVar6) {
    lVar6 = lVar6 + -0x28;
    func_0x00010a22c9fc();
    *(long *)(uVar4 + 0x48) = lVar6;
    return;
  }
LAB_10a518194:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a518198);
  (*pcVar3)();
}



/* Entry: 10a5180fc; end: 10a5181f7;  */

void FUN_10a5180fc(long param_1,int param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = (ulong)param_2;
  lVar3 = *(long *)(param_1 + 0x40);
  lVar2 = *(long *)(param_1 + 0x48);
  uVar4 = (lVar2 - lVar3 >> 3) * -0x3333333333333333;
  if (uVar5 + 1 != uVar4) {
    if ((lVar3 == lVar2) || (uVar4 < uVar5 || uVar4 - uVar5 == 0)) goto LAB_10a518194;
    FUN_10a230718(lVar3 + (long)param_2 * 0x28,lVar2 + -0x28);
    lVar3 = *(long *)(param_1 + 0x40);
    lVar2 = *(long *)(param_1 + 0x48);
    uVar4 = (lVar2 - lVar3 >> 3) * -0x3333333333333333;
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) goto LAB_10a518194;
  }
  if (lVar3 != lVar2) {
    lVar2 = lVar2 + -0x28;
    func_0x00010a22c9fc();
    *(long *)(param_1 + 0x48) = lVar2;
    return;
  }
LAB_10a518194:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a518198);
  (*pcVar1)();
}



/* Entry: 10a5181f8; end: 10a51838f;  */

void FUN_10a5181f8(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lStack_b0;
  long lStack_a8;
  code *pcStack_98;
  undefined **appuStack_90 [7];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a26d314(&lStack_b0,
                (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * -0x3333333333333333);
  lVar5 = lStack_a8 - lStack_b0;
  if (lVar5 != 0) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      uVar4 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * -0x3333333333333333;
      if (uVar4 < uVar7 || uVar4 - uVar7 == 0) {
LAB_10a51834c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a518350);
        (*pcVar1)();
      }
      plVar2 = param_2;
      func_0x0001098ac018(param_2,&UNK_10e4bf192,0x25,*(long *)(param_1 + 8) + lVar6,2,1);
      if ((ulong)(lStack_a8 - lStack_b0 >> 2) <= uVar7) goto LAB_10a51834c;
      *(int *)(lStack_b0 + uVar7 * 4) = (int)plVar2;
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x28;
    } while (lVar5 >> 2 != uVar7);
  }
  pcStack_98 = FUN_10a518444;
  appuStack_90[0] = &PTR_DAT_110bec170;
  func_0x0001098bb6d0(*param_2 + 0x18,&pcStack_98,&lStack_b0);
  (*(code *)*appuStack_90[0])(appuStack_90);
  lVar5 = lStack_b0;
  if (lStack_b0 != 0) {
    lStack_a8 = lStack_b0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*appuStack_90[0])(appuStack_90);
  if (lStack_b0 != 0) {
    lStack_a8 = lStack_b0;
    __ZdlPv();
  }
  __Unwind_Resume(lVar5);
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (plVar2 < (long *)0x666666666666667) {
    __Znwm((long)plVar2 * 0x28);
    return;
  }
  func_0x000109ffded8();
  lVar5 = *plVar2;
  if (lVar5 != 0) {
    lVar3 = plVar2[1];
    lVar6 = lVar5;
    if (lVar3 != lVar5) {
      do {
        lVar3 = lVar3 + -0x28;
        func_0x00010a22c9fc();
      } while (lVar3 != lVar5);
      lVar6 = *plVar2;
    }
    plVar2[1] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar6);
    return;
  }
  return;
}



/* Entry: 10a518390; end: 10a5183a3;  */

void FUN_10a518390(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (plVar1 < (long *)0x666666666666667) {
    __Znwm((long)plVar1 * 0x28);
    return;
  }
  func_0x000109ffded8();
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    lVar2 = plVar1[1];
    lVar3 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x28;
        func_0x00010a22c9fc();
      } while (lVar2 != lVar4);
      lVar3 = *plVar1;
    }
    plVar1[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 10a5183a4; end: 10a518443;  */

void FUN_10a5183a4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 < (long *)0x666666666666667) {
    __Znwm((long)param_1 * 0x28);
    return;
  }
  func_0x000109ffded8();
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x28;
        func_0x00010a22c9fc();
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



/* Entry: 10a518444; end: 10a5184af;  */

void FUN_10a518444(void)

{
  return;
}



/* Entry: 10a5184b0; end: 10a518533;  */

void FUN_10a5184b0(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uStack_34;
  
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  FUN_10a518568(uVar2,*(undefined8 *)(param_2 + 0x20));
  if ((int)uVar2 == 0) {
    uStack_34 = 0x40000000;
  }
  else {
    lVar1 = 0x10;
    if (param_4 != 0) {
      lVar1 = 0x18;
    }
    uStack_34 = *(undefined4 *)(param_2 + lVar1);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_10a26d5a0(param_1,&uStack_34,&stack0xffffffffffffffd0,1);
  return;
}



/* Entry: 10a518534; end: 10a518567;  */

void FUN_10a518534(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_DAT_110bec1b8;
  param_1[1] = &UNK_110bec188;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



/* Entry: 10a518568; end: 10a5185d3;  */

undefined1 * FUN_10a518568(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [40];
  
  FUN_10a22bd48(auStack_48);
  FUN_10aad332c(auStack_48,param_1);
  puVar1 = auStack_48;
  FUN_10a5185d4(puVar1,param_2);
  func_0x00010a22c9fc(auStack_48);
  return puVar1;
}



/* Entry: 10a5185d4; end: 10a518707;  */

undefined8 FUN_10a5185d4(long param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  
  if (*(long *)(param_1 + 0x18) != param_2[3]) {
    return 0;
  }
  plVar9 = *(long **)(param_1 + 0x10);
joined_r0x00010a5185f8:
  if (plVar9 == (long *)0x0) {
    return 1;
  }
  uVar3 = param_2[1];
  if (uVar3 == 0) {
    return 0;
  }
  uVar4 = (ulong)*(int *)(plVar9 + 2);
  uVar5 = uVar3 - 1;
  if ((uVar3 & uVar5) == 0) {
    uVar6 = uVar5 & uVar4;
  }
  else {
    uVar6 = uVar4;
    if (uVar3 <= uVar4) {
      uVar6 = 0;
      if (uVar3 != 0) {
        uVar6 = uVar4 / uVar3;
      }
      uVar6 = uVar4 - uVar6 * uVar3;
    }
  }
  plVar7 = *(long **)(*param_2 + uVar6 * 8);
  if (plVar7 == (long *)0x0) {
    return 0;
  }
  plVar7 = (long *)*plVar7;
  if (plVar7 == (long *)0x0) {
    return 0;
  }
  do {
    uVar8 = plVar7[1];
    if (uVar8 == uVar4) {
      if ((int)plVar7[2] == *(int *)(plVar9 + 2)) break;
    }
    else {
      if ((uVar3 & uVar5) == 0) {
        uVar8 = uVar8 & uVar5;
      }
      else if (uVar3 <= uVar8) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar8 / uVar3;
        }
        uVar8 = uVar8 - uVar1 * uVar3;
      }
      if (uVar8 != uVar6) {
        return 0;
      }
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      return 0;
    }
  } while( true );
  if (plVar9[6] != plVar7[6]) {
    return 0;
  }
  plVar10 = plVar9 + 5;
  while (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0) {
    plVar2 = plVar7 + 3;
    FUN_10a518708(plVar2,plVar10 + 2);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    uVar3 = (ulong)(plVar10 + 2);
    FUN_10a22c6f0(uVar3,plVar2 + 2);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
  }
  plVar9 = (long *)*plVar9;
  goto joined_r0x00010a5185f8;
}



/* Entry: 10a518708; end: 10a5187df;  */

long FUN_10a518708(long *param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar1 = param_1;
  FUN_10aad09b8();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar1);
    }
    else {
      plVar7 = plVar1;
      if (plVar5 <= plVar1) {
        uVar2 = 0;
        if (plVar5 != (long *)0x0) {
          uVar2 = (ulong)plVar1 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar1 - uVar2 * (long)plVar5);
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
        if (plVar1 == plVar4) {
          uVar2 = (ulong)(plVar3 + 2);
          FUN_10a22c6f0(uVar2,param_2);
          if ((uVar2 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar2 = 0;
            if (plVar5 != (long *)0x0) {
              uVar2 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar2 * (long)plVar5);
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



/* Entry: 10a5187e0; end: 10a518823;  */

void FUN_10a5187e0(long param_1,undefined8 param_2,long param_3)

{
  if (*(undefined8 **)(param_1 + 0x48) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a518800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(param_1 + 0x48))
              (param_2,*(undefined4 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x20));
    return;
  }
  return;
}



/* Entry: 10a518824; end: 10a5188db;  */

void FUN_10a518824(long param_1,long *param_2,undefined4 param_3,undefined4 *param_4,long param_5,
                  long param_6)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lStack_50;
  long *plStack_48;
  
  plVar3 = &lStack_50;
  if (param_5 != 0) {
    lStack_50 = param_1;
    plStack_48 = param_2;
    func_0x0001098af634(&lStack_50,*param_4);
    if ((char)plVar3[3] != '\x01') {
      return;
    }
    FUN_10a26d738(param_2,param_3);
    puVar1 = (undefined8 *)0x1137eb218;
    if (*param_2 != -1) {
      puVar1 = (undefined8 *)(param_1 + *param_2);
    }
    if ((*(byte *)(plVar3 + 3) & 1) != 0) {
      if (*(ulong *)(param_6 + 0x10) < (ulong)(plVar3[1] - *plVar3 >> 3)) {
        puVar4 = *(undefined8 **)(*plVar3 + *(ulong *)(param_6 + 0x10) * 8);
        uVar5 = 0;
        if (puVar4 != (undefined8 *)0x0) {
          uVar5 = *puVar4;
        }
        *puVar1 = uVar5;
        return;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a5188dc);
  (*pcVar2)();
}



/* Entry: 10a5188dc; end: 10a518903;  */

void FUN_10a5188dc(void)

{
  return;
}



/* Entry: 10a518904; end: 10a518937;  */

void FUN_10a518904(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a518938; end: 10a51896f;  */

undefined8 FUN_10a518938(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bec2a0);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a518970; end: 10a518983;  */

void FUN_10a518970(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a518984; end: 10a518a8b;  */

void FUN_10a518984(long param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
                  long param_5)

{
  code *pcVar1;
  long *plVar2;
  long lStack_40;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  lStack_40 = param_1;
  uStack_38 = param_2;
  if (param_5 != 0) {
    plVar2 = &lStack_30;
    lStack_30 = param_1;
    uStack_28 = param_2;
    func_0x0001098b9090(plVar2,*param_4);
    if (*plVar2 != 0) {
      func_0x00010a5189e4(&lStack_40,param_3);
      FUN_10a236e48();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5189e4);
  (*pcVar1)();
}



/* Entry: 10a518a8c; end: 10a518aa7;  */

void FUN_10a518a8c(void)

{
  return;
}



/* Entry: 10a518aa8; end: 10a518b4f;  */

undefined8 * FUN_10a518aa8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bec2d8;
  (**(code **)param_1[0xf])();
  (**(code **)param_1[7])();
  FUN_10a26cc38(param_1 + 3);
  return param_1;
}



/* Entry: 10a518b50; end: 10a518d8f;  */

/* WARNING: Removing unreachable block (ram,0x00010a518d24) */
/* WARNING: Removing unreachable block (ram,0x00010a518d28) */
/* WARNING: Removing unreachable block (ram,0x00010a518d30) */
/* WARNING: Removing unreachable block (ram,0x00010a518d38) */
/* WARNING: Removing unreachable block (ram,0x00010a518d3c) */

void FUN_10a518b50(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 in_x7;
  long lVar6;
  long lVar7;
  undefined8 uStack_50;
  long *plStack_48;
  
  puVar5 = (undefined8 *)0x1d8;
  __Znwm();
  lVar7 = param_3;
  if (*(long *)(param_2 + 8) != 0) {
    lVar7 = *(long *)(param_2 + 8);
  }
  plStack_48 = *(long **)(param_2 + 0x20);
  uStack_50 = *(undefined8 *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x20) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *puVar5 = &PTR_FUN_110bec318;
  func_0x0001098bae4c(puVar5,&UNK_10e4bf675,0x41,param_3,lVar7,puVar5 + 0x19,puVar5 + 0x31,in_x7,0,0
                      ,&uStack_50);
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
  puVar5[0x1c] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x20] = 0;
  puVar5[0x1f] = 0;
  *puVar5 = &PTR_FUN_110bec318;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  puVar5[0x19] = &PTR_FUN_110bba410;
  puVar5[0x21] = 0;
  puVar5[0x23] = 0;
  puVar5[0x22] = 0;
  puVar5[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x27) = 0x40000000;
  puVar5[0x24] = &PTR_FUN_110bec388;
  puVar5[0x25] = &UNK_110bec358;
  puVar5[0x28] = 0;
  puVar5[0x29] = 0;
  puVar5[0x2c] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x2d) = 0x40000000;
  puVar5[0x2a] = &PTR_FUN_110bec388;
  puVar5[0x2b] = &UNK_110bec358;
  puVar5[0x2e] = 0;
  puVar5[0x2f] = 0;
  *(undefined2 *)(puVar5 + 0x30) = 0;
  lVar7 = puVar5[0xc];
  if (lVar7 == 0) {
    bVar4 = false;
    lVar6 = param_2 + 0x28;
  }
  else {
    bVar4 = lVar7 != puVar5[0xb];
    lVar6 = 0;
    if (!bVar4) {
      lVar6 = param_2 + 0x28;
    }
  }
  *(undefined2 *)(puVar5 + 0x32) = 0;
  puVar5[0x35] = 0x10a5193fc;
  puVar5[0x36] = &UNK_110bba498;
  puVar5[0x37] = 0;
  puVar5[0x38] = 0;
  puVar5[0x39] = 0;
  puVar5[0x3a] = 0;
  puVar5[0x31] = &PTR_DAT_110bec3c8;
  if ((!bVar4) && (*(char *)(*(long *)(lVar6 + 0x10) + 8) == '\x01')) {
    puVar5[0x3a] = lVar6 + 8;
  }
  if ((lVar7 == 0) || (lVar7 == puVar5[0xb])) {
    *(undefined1 *)((long)puVar5 + 0x181) = 1;
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 10a518d90; end: 10a518e73;  */

void FUN_10a518d90(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bec318;
  FUN_10a232e34(param_1 + 0x2e);
  FUN_10a232e34(param_1 + 0x28);
  param_1[0x19] = &PTR_FUN_110bba410;
  puStack_28 = param_1 + 0x21;
  FUN_10a28ebe8(&puStack_28);
  func_0x0001098bba44(param_1 + 0x19);
  func_0x0001098ac370(param_1);
  return;
}



/* Entry: 10a518e74; end: 10a518e77;  */

void FUN_10a518e74(void)

{
  return;
}



/* Entry: 10a518e78; end: 10a518fff;  */

uint FUN_10a518e78(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lStack_50;
  long *plStack_48;
  
  lVar10 = *(long *)(param_1 + 0x70);
  lVar9 = param_1 + 0x150;
  if (lVar10 != param_1 + 0x120) {
    lVar9 = param_1 + 0x120;
  }
  *(long *)(param_1 + 0x78) = lVar9;
  func_0x00010a286b48(lVar9 + 0x20);
  lVar6 = 0x28;
  __Znwm();
  lVar8 = *(long *)(param_1 + 0x108);
  lVar2 = *(long *)(param_1 + 0x110);
  FUN_10a22dff8();
  while (lVar8 = lVar8 + 0x28, lVar8 != lVar2) {
    func_0x00010a4dca74(lVar6);
  }
  plVar7 = (long *)0x20;
  lStack_50 = lVar6;
  __Znwm();
  *plVar7 = (long)&PTR_DAT_110bec3f8;
  plVar7[1] = 0;
  plVar7[2] = 0;
  plVar7[3] = lVar6;
  plStack_48 = plVar7;
  FUN_10a286fec(lVar9 + 0x20,&lStack_50);
  plVar7 = plStack_48;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (lVar10 == 0) {
    uVar5 = 1;
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x20);
    lVar9 = *(long *)(*(long *)(lVar9 + 0x20) + 0x18);
    if (*(long *)(lVar10 + 0x18) == 0 || lVar9 == 0) {
      uVar5 = (uint)((*(long *)(lVar10 + 0x18) == 0) != (lVar9 == 0));
    }
    else {
      FUN_10a28f080();
      uVar5 = (uint)lVar10 ^ 1;
    }
  }
  return uVar5;
}



/* Entry: 10a519000; end: 10a5192c7;  */

/* WARNING: Removing unreachable block (ram,0x00010a5191b0) */
/* WARNING: Removing unreachable block (ram,0x00010a5191b4) */
/* WARNING: Removing unreachable block (ram,0x00010a5191bc) */
/* WARNING: Removing unreachable block (ram,0x00010a5191c4) */
/* WARNING: Removing unreachable block (ram,0x00010a5191d0) */
/* WARNING: Removing unreachable block (ram,0x00010a5191d8) */
/* WARNING: Removing unreachable block (ram,0x00010a5191e0) */
/* WARNING: Removing unreachable block (ram,0x00010a5191e4) */

void FUN_10a519000(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined **appuStack_d0 [7];
  undefined8 uStack_98;
  undefined **appuStack_90 [7];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *(long *)(param_2 + 0x70);
  puVar5 = (undefined8 *)0xa0;
  __Znwm();
  puVar6 = puVar5 + 3;
  *(undefined2 *)puVar6 = 4;
  puVar5[2] = 0;
  puVar5[1] = 0x200000006;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[9] = 0;
  puVar5[8] = 0;
  puVar5[0xb] = 0;
  puVar5[10] = 0;
  puVar5[0xd] = 0;
  puVar5[0xc] = 0;
  puVar5[0xf] = 0;
  puVar5[0xe] = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = puVar6;
  puVar5[0x12] = 0;
  *puVar5 = &PTR_DAT_110ae91c0;
  *(undefined2 *)(puVar5 + 0x13) = 0;
  puStack_118 = puVar5;
  if ((*(byte *)(param_2 + 0x181) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a519228);
    (*pcVar4)();
  }
  lStack_110 = 0;
  lStack_108 = 0;
  uStack_100 = 0;
  uStack_98 = (code *)CONCAT44(uStack_98._4_4_,0x20000000);
  FUN_10a26ebc0(&lStack_110,0,&uStack_98,(long)&uStack_98 + 4,1);
  pcStack_d8 = FUN_10a51948c;
  appuStack_d0[0] = &PTR_FUN_110bec448;
  uStack_98 = FUN_10a51948c;
  appuStack_90[0] = &PTR_FUN_110bec448;
  lStack_e8 = lStack_108;
  lStack_f0 = lStack_110;
  uStack_e0 = uStack_100;
  lStack_110 = 0;
  lStack_108 = 0;
  uStack_100 = 0;
  param_2 = param_2 + 0x18;
  func_0x0001098aeecc(param_2,&uStack_98,&UNK_110be9198,&lStack_f0);
  if (lStack_f0 != 0) {
    lStack_e8 = lStack_f0;
    __ZdlPv();
  }
  (*(code *)*appuStack_90[0])(appuStack_90);
  (*(code *)*appuStack_d0[0])(appuStack_d0);
  if (lStack_110 != 0) {
    lStack_108 = lStack_110;
    __ZdlPv();
  }
  plVar1 = puVar5 + 2;
  *(int *)(lVar9 + 0x10) = (int)param_2;
  do {
    lVar9 = *plVar1;
    if (lVar9 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(puVar6);
        goto LAB_10a519190;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar9 >> 1 & 1) != 0) {
LAB_10a519190:
      while( true ) {
        *param_1 = puVar5;
        puVar6 = puVar5;
        func_0x0001092b4274(&puStack_118);
        lVar9 = 0;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
          return;
        }
        ___stack_chk_fail();
        if ((int)puVar6 == 0) break;
        if (lStack_f0 != 0) {
          lStack_e8 = lStack_f0;
          __ZdlPv();
        }
        (*(code *)*appuStack_90[0])(appuStack_90);
        (*(code *)*appuStack_d0[0])(appuStack_d0);
        if (lStack_110 != 0) {
          lStack_108 = lStack_110;
          __ZdlPv();
        }
        ___cxa_begin_catch(lVar9);
        __ZSt17current_exceptionv(&pcStack_d8);
        func_0x000109d1b350(puVar5,&pcStack_d8);
        __ZNSt13exception_ptrD1Ev(&pcStack_d8);
        ___cxa_end_catch();
      }
      __Unwind_Resume(lVar9);
      func_0x000104bd46a0();
      uVar7 = *(undefined8 *)(lVar9 + 8);
      *puVar6 = &PTR____cxa_pure_virtual_110b17f40;
      puVar6[1] = uVar7;
      uVar7 = *(undefined8 *)(lVar9 + 0x10);
      *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(lVar9 + 0x18);
      puVar6[2] = uVar7;
      *puVar6 = &PTR_FUN_110bec388;
      lVar8 = *(long *)(lVar9 + 0x28);
      uVar7 = *(undefined8 *)(lVar9 + 0x20);
      puVar6[5] = *(undefined8 *)(lVar9 + 0x28);
      puVar6[4] = uVar7;
      if (lVar8 != 0) {
        plVar1 = (long *)(lVar8 + 8);
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
  } while( true );
}



/* Entry: 10a5192c8; end: 10a51931b;  */

void FUN_10a5192c8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR____cxa_pure_virtual_110b17f40;
  param_2[1] = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x18);
  param_2[2] = uVar4;
  *param_2 = &PTR_FUN_110bec388;
  lVar5 = *(long *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  param_2[4] = uVar4;
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
  return;
}



/* Entry: 10a51931c; end: 10a51939f;  */

void FUN_10a51931c(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uStack_34;
  
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  FUN_10a28efe4(uVar2,*(undefined8 *)(param_2 + 0x20));
  if ((int)uVar2 == 0) {
    uStack_34 = 0x40000000;
  }
  else {
    lVar1 = 0x10;
    if (param_4 != 0) {
      lVar1 = 0x18;
    }
    uStack_34 = *(undefined4 *)(param_2 + lVar1);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_10a26d5a0(param_1,&uStack_34,&stack0xffffffffffffffd0,1);
  return;
}



/* Entry: 10a5193a0; end: 10a51941b;  */

void FUN_10a5193a0(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_FUN_110bec388;
  param_1[1] = &UNK_110bec358;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



/* Entry: 10a51941c; end: 10a51944f;  */

void FUN_10a51941c(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a519450; end: 10a519487;  */

undefined8 FUN_10a519450(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bec438);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a519488; end: 10a51948b;  */

void FUN_10a519488(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a51948c; end: 10a5194fb;  */

void FUN_10a51948c(long param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
                  long param_5)

{
  code *pcVar1;
  long *plVar2;
  long lStack_40;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  lStack_40 = param_1;
  uStack_38 = param_2;
  if (param_5 != 0) {
    plVar2 = &lStack_30;
    lStack_30 = param_1;
    uStack_28 = param_2;
    func_0x0001098b9090(plVar2,*param_4);
    if (*plVar2 != 0) {
      func_0x00010a2935a4(&lStack_40,param_3);
      lStack_30 = 0;
      func_0x00010a293674();
      func_0x00010a293674(&lStack_30,0);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5194fc);
  (*pcVar1)();
}



/* Entry: 10a5194fc; end: 10a519517;  */

void FUN_10a5194fc(void)

{
  return;
}



/* Entry: 10a519518; end: 10a5195bf;  */

undefined8 * FUN_10a519518(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bec470;
  (**(code **)param_1[0xf])();
  (**(code **)param_1[7])();
  FUN_10a26cc38(param_1 + 3);
  return param_1;
}



/* Entry: 10a5195c0; end: 10a519807;  */

/* WARNING: Removing unreachable block (ram,0x00010a51979c) */
/* WARNING: Removing unreachable block (ram,0x00010a5197a0) */
/* WARNING: Removing unreachable block (ram,0x00010a5197a8) */
/* WARNING: Removing unreachable block (ram,0x00010a5197b0) */
/* WARNING: Removing unreachable block (ram,0x00010a5197b4) */

void FUN_10a5195c0(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 in_x7;
  long lVar6;
  long lVar7;
  undefined8 uStack_50;
  long *plStack_48;
  
  puVar5 = (undefined8 *)0x1c8;
  __Znwm();
  lVar7 = param_3;
  if (*(long *)(param_2 + 8) != 0) {
    lVar7 = *(long *)(param_2 + 8);
  }
  plStack_48 = *(long **)(param_2 + 0x20);
  uStack_50 = *(undefined8 *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x20) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *puVar5 = &PTR_FUN_110bec4b0;
  func_0x0001098bae4c(puVar5,&UNK_10e4bfa22,0x37,param_3,lVar7,puVar5 + 0x19,puVar5 + 0x2f,in_x7,0,0
                      ,&uStack_50);
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
  puVar5[0x1c] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x20] = 0;
  puVar5[0x1f] = 0;
  *puVar5 = &PTR_FUN_110bec4b0;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  puVar5[0x19] = &PTR_FUN_110bec500;
  puVar5[0x21] = 0;
  puVar5[0x23] = 0;
  puVar5[0x22] = 0;
  puVar5[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x27) = 0x40000000;
  puVar5[0x24] = &PTR_DAT_110bec5b8;
  puVar5[0x25] = &UNK_110bec588;
  *(undefined1 *)((long)puVar5 + 0x13c) = 0;
  *(undefined1 *)((long)puVar5 + 0x144) = 0;
  puVar5[0x2b] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x2c) = 0x40000000;
  puVar5[0x29] = &PTR_DAT_110bec5b8;
  puVar5[0x2a] = &UNK_110bec588;
  *(undefined1 *)((long)puVar5 + 0x164) = 0;
  *(undefined1 *)((long)puVar5 + 0x16c) = 0;
  *(undefined2 *)(puVar5 + 0x2e) = 0;
  lVar7 = puVar5[0xc];
  if (lVar7 == 0) {
    bVar4 = false;
    lVar6 = param_2 + 0x28;
  }
  else {
    bVar4 = lVar7 != puVar5[0xb];
    lVar6 = 0;
    if (!bVar4) {
      lVar6 = param_2 + 0x28;
    }
  }
  *(undefined2 *)(puVar5 + 0x30) = 0;
  puVar5[0x33] = 0x10a51a198;
  puVar5[0x34] = &UNK_110bec618;
  puVar5[0x35] = 0;
  puVar5[0x36] = 0;
  puVar5[0x37] = 0;
  puVar5[0x38] = 0;
  puVar5[0x2f] = &PTR_DAT_110bec5f8;
  if ((!bVar4) && (*(char *)(*(long *)(lVar6 + 0x10) + 8) == '\x01')) {
    puVar5[0x38] = lVar6 + 8;
  }
  if ((lVar7 == 0) || (lVar7 == puVar5[0xb])) {
    *(undefined1 *)((long)puVar5 + 0x171) = 1;
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 10a519808; end: 10a5198b3;  */

undefined8 * FUN_10a519808(undefined8 *param_1)

{
  ulong *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  ulong uVar7;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bec4b0;
  param_1[0x19] = &PTR_FUN_110bec500;
  if (param_1[0x21] != 0) {
    param_1[0x22] = param_1[0x21];
    __ZdlPv();
  }
  func_0x0001098bba44(param_1 + 0x19);
  *param_1 = &PTR_DAT_110b17ab0;
  if ((*(char *)(param_1 + 0x18) == '\x01') && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
    lVar6 = param_1[0xb];
    lVar2 = *(long *)(lVar6 + 0x148);
    if (-1 < *(char *)(lVar6 + 0x15f)) {
      lVar2 = lVar6 + 0x148;
    }
    func_0x00010ae06f08(1,4,&UNK_10f585d39,&UNK_10f585e3d,0x15,&UNK_10f585e89,in_x6,in_x7,
                        &UNK_10f585f66,lVar2,param_1[1]);
  }
  func_0x0001098ae07c(param_1 + 0x16);
  plVar5 = (long *)param_1[0x12];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 0x200000000;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (uVar7 >> 0x21 == 1) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  *param_1 = &PTR_DAT_110b17b10;
  plVar5 = (long *)param_1[10];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  puStack_28 = param_1 + 3;
  func_0x0001098ad298(&puStack_28);
  return param_1;
}



/* Entry: 10a5198b4; end: 10a5199b3;  */

void FUN_10a5198b4(void)

{
  return;
}



/* Entry: 10a5199b4; end: 10a519c17;  */

/* WARNING: Removing unreachable block (ram,0x00010a519b24) */
/* WARNING: Removing unreachable block (ram,0x00010a519b28) */
/* WARNING: Removing unreachable block (ram,0x00010a519b30) */
/* WARNING: Removing unreachable block (ram,0x00010a519b38) */
/* WARNING: Removing unreachable block (ram,0x00010a519b44) */
/* WARNING: Removing unreachable block (ram,0x00010a519b4c) */
/* WARNING: Removing unreachable block (ram,0x00010a519b54) */
/* WARNING: Removing unreachable block (ram,0x00010a519b58) */

void FUN_10a5199b4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *extraout_x8;
  long lVar8;
  undefined8 *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_8c;
  code *pcStack_88;
  undefined **appuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)(param_2 + 0x70);
  if ((*(byte *)(lVar8 + 0x24) & 1) != 0) {
    puVar5 = (undefined8 *)0xa0;
    __Znwm();
    puVar7 = puVar5 + 3;
    *(undefined2 *)puVar7 = 4;
    puVar5[2] = 0;
    puVar5[1] = 0x200000006;
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[7] = 0;
    puVar5[6] = 0;
    puVar5[9] = 0;
    puVar5[8] = 0;
    puVar5[0xb] = 0;
    puVar5[10] = 0;
    puVar5[0xd] = 0;
    puVar5[0xc] = 0;
    puVar5[0xf] = 0;
    puVar5[0xe] = 0;
    puVar5[0x10] = 0;
    puVar5[0x11] = puVar7;
    puVar5[0x12] = 0;
    *puVar5 = &PTR_DAT_110ae91c0;
    *(undefined2 *)(puVar5 + 0x13) = 0;
    puStack_b0 = puVar5;
    if ((*(byte *)(param_2 + 0x171) & 1) != 0) {
      lStack_a8 = 0;
      lStack_a0 = 0;
      uStack_98 = 0;
      uStack_8c = 0x20000000;
      FUN_10a26ebc0(&lStack_a8,0,&uStack_8c,&pcStack_88,1);
      pcStack_88 = FUN_10a51a290;
      appuStack_80[0] = &PTR_FUN_110bec650;
      param_2 = param_2 + 0x18;
      FUN_10a4f8d24(param_2,&pcStack_88,&lStack_a8);
      (*(code *)*appuStack_80[0])(appuStack_80);
      if (lStack_a8 != 0) {
        lStack_a0 = lStack_a8;
        __ZdlPv();
      }
      plVar1 = puVar5 + 2;
      *(int *)(lVar8 + 0x10) = (int)param_2;
      do {
        lVar8 = *plVar1;
        if (lVar8 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = 2;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            FUN_109d1b4dc(puVar7);
            goto LAB_10a519b04;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        if (((uint)lVar8 >> 1 & 1) != 0) {
LAB_10a519b04:
          while( true ) {
            *param_1 = puVar5;
            puVar7 = puVar5;
            func_0x0001092b4274(&puStack_b0);
            lVar8 = 0;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
              return;
            }
            ___stack_chk_fail();
            if ((int)puVar7 == 0) break;
            (*(code *)*appuStack_80[0])(appuStack_80);
            if (lStack_a8 != 0) {
              lStack_a0 = lStack_a8;
              __ZdlPv();
            }
            ___cxa_begin_catch(lVar8);
            __ZSt17current_exceptionv(&pcStack_88);
            func_0x000109d1b350(puVar5,&pcStack_88);
            __ZNSt13exception_ptrD1Ev(&pcStack_88);
            ___cxa_end_catch();
          }
          __Unwind_Resume(lVar8);
          func_0x000104bd46a0();
          puVar5 = (undefined8 *)0x20;
          __Znwm();
          puVar5[1] = 0;
          *puVar5 = &PTR_FUN_110bec540;
          puVar5[2] = 0;
          puVar5[3] = 0;
          lVar8 = *(long *)(lVar8 + 0x48) - *(long *)(lVar8 + 0x40);
          if (lVar8 != 0) {
            uVar6 = lVar8 >> 3;
            if (uVar6 >> 0x3d != 0) {
              FUN_10a519fe4();
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10a519cb8);
              (*pcVar4)();
            }
            FUN_10a519ff8();
            puVar5[1] = uVar6;
            puVar5[3] = uVar6 + (long)puVar7 * 8;
            _memmove();
            puVar5[2] = uVar6 + lVar8;
          }
          *extraout_x8 = puVar5;
          return;
        }
      } while( true );
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a519b98);
  (*pcVar4)();
}



/* Entry: 10a519c18; end: 10a519cdb;  */

void FUN_10a519c18(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_110bec540;
  puVar3[2] = 0;
  puVar3[3] = 0;
  lVar1 = *(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40);
  if (lVar1 != 0) {
    uVar4 = lVar1 >> 3;
    if (uVar4 >> 0x3d != 0) {
      FUN_10a519fe4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a519cb8);
      (*pcVar2)();
    }
    FUN_10a519ff8();
    puVar3[1] = uVar4;
    puVar3[3] = uVar4 + param_3 * 8;
    _memmove();
    puVar3[2] = uVar4 + lVar1;
  }
  *param_1 = puVar3;
  return;
}



/* Entry: 10a519cdc; end: 10a519d9b;  */

void FUN_10a519cdc(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
  puVar2 = *(undefined8 **)(param_1 + 0x48);
  if (puVar2 < *(undefined8 **)(param_1 + 0x50)) {
    puVar9 = puVar2 + 1;
    *puVar2 = *param_2;
LAB_10a519d84:
    *(undefined8 **)(param_1 + 0x48) = puVar9;
    return;
  }
  lVar8 = (long)puVar2 - *(long *)(param_1 + 0x40);
  uVar1 = (lVar8 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar5 = (long)*(undefined8 **)(param_1 + 0x50) - *(long *)(param_1 + 0x40);
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    puVar4 = param_2;
    FUN_10a519ff8();
    puVar2 = (undefined8 *)(uVar6 + lVar8);
    puVar9 = puVar2 + 1;
    *puVar2 = *param_2;
    lVar7 = (long)puVar2 - (*(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x40));
    _memcpy(lVar7);
    lVar8 = *(long *)(param_1 + 0x40);
    *(long *)(param_1 + 0x40) = lVar7;
    *(undefined8 **)(param_1 + 0x48) = puVar9;
    *(ulong *)(param_1 + 0x50) = uVar6 + (long)puVar4 * 8;
    if (lVar8 != 0) {
      __ZdlPv();
    }
    goto LAB_10a519d84;
  }
  FUN_10a519fe4();
  uVar6 = (ulong)(int)param_2;
  lVar8 = *(long *)(param_1 + 0x40);
  lVar7 = *(long *)(param_1 + 0x48);
  uVar1 = lVar7 - lVar8 >> 3;
  if (uVar6 + 1 != uVar1) {
    if ((lVar8 == lVar7) || (uVar1 <= uVar6)) goto LAB_10a519df4;
    *(undefined8 *)(lVar8 + uVar6 * 8) = *(undefined8 *)(lVar7 + -8);
    lVar8 = *(long *)(param_1 + 0x40);
    lVar7 = *(long *)(param_1 + 0x48);
    if ((ulong)(lVar7 - lVar8 >> 3) <= uVar6) goto LAB_10a519df4;
  }
  if (lVar8 != lVar7) {
    *(long *)(param_1 + 0x48) = lVar7 + -8;
    return;
  }
LAB_10a519df4:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a519df8);
  (*pcVar3)();
}


