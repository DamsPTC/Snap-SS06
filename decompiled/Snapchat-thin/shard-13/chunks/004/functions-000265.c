/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a522b58; end: 10a522cd7;  */

/* WARNING: Removing unreachable block (ram,0x00010a522c4c) */
/* WARNING: Removing unreachable block (ram,0x00010a522c50) */
/* WARNING: Removing unreachable block (ram,0x00010a522c58) */
/* WARNING: Removing unreachable block (ram,0x00010a522c60) */
/* WARNING: Removing unreachable block (ram,0x00010a522c6c) */
/* WARNING: Removing unreachable block (ram,0x00010a522c74) */
/* WARNING: Removing unreachable block (ram,0x00010a522c7c) */
/* WARNING: Removing unreachable block (ram,0x00010a522c80) */

void FUN_10a522b58(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puStack_48;
  
  lVar8 = *(long *)(param_2 + 0x70);
  uVar7 = *(undefined8 *)(lVar8 + 0x20);
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
  puStack_48 = puVar5;
  if ((*(byte *)(param_2 + 0x1a8) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a522ca8);
    (*pcVar4)();
  }
  FUN_10aad00c8(param_2 + 0x180,param_2,lVar8 + 0x10,uVar7);
  plVar1 = puVar5 + 2;
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
        FUN_109d1b4dc(puVar6);
        goto LAB_10a522c2c;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar8 >> 1 & 1) != 0) {
LAB_10a522c2c:
      *param_1 = puVar5;
      func_0x0001092b4274(&puStack_48,puVar5);
      return;
    }
  } while( true );
}



/* Entry: 10a522cd8; end: 10a522d2b;  */

void FUN_10a522cd8(long param_1,undefined8 *param_2)

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
  *param_2 = &PTR_FUN_110bed918;
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



/* Entry: 10a522d2c; end: 10a522daf;  */

void FUN_10a522d2c(undefined8 *param_1,long param_2,long param_3,int param_4)

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



/* Entry: 10a522db0; end: 10a522e27;  */

void FUN_10a522db0(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_FUN_110bed918;
  param_1[1] = &UNK_110bed8e8;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



/* Entry: 10a522e28; end: 10a522ea7;  */

long * FUN_10a522e28(long *param_1)

{
  long lVar1;
  
  func_0x00010a522e60(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a522ea8; end: 10a522eab;  */

void FUN_10a522ea8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a522eac; end: 10a522edf;  */

void FUN_10a522eac(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a522ee0; end: 10a522f17;  */

undefined8 FUN_10a522ee0(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bed9c8);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a522f18; end: 10a522f1b;  */

void FUN_10a522f18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a522f1c; end: 10a522fd3;  */

undefined8 * FUN_10a522f1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bed9e8;
  (**(code **)param_1[0x12])();
  (**(code **)param_1[10])();
  FUN_10a235538(param_1 + 6);
  FUN_10a26cc38(param_1 + 3);
  return param_1;
}



/* Entry: 10a522fd4; end: 10a52339b;  */

/* WARNING: Removing unreachable block (ram,0x00010a5232d0) */
/* WARNING: Removing unreachable block (ram,0x00010a5232d4) */
/* WARNING: Removing unreachable block (ram,0x00010a5232dc) */
/* WARNING: Removing unreachable block (ram,0x00010a5232e4) */
/* WARNING: Removing unreachable block (ram,0x00010a5232e8) */

void FUN_10a522fd4(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 in_x7;
  long lVar8;
  long lVar9;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar7 = (undefined8 *)0x248;
  __Znwm();
  lVar9 = param_3;
  if (*(long *)(param_2 + 8) != 0) {
    lVar9 = *(long *)(param_2 + 8);
  }
  plStack_a8 = *(long **)(param_2 + 0x20);
  uStack_b0 = *(undefined8 *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x20) + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  *puVar7 = &PTR_FUN_110beda28;
  func_0x0001098bae4c(puVar7,&UNK_10e4c1da4,0x1e,param_3,lVar9,puVar7 + 0x19,puVar7 + 0x3f,in_x7,0,0
                      ,&uStack_b0);
  plVar1 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar2 = plStack_a8 + 1;
    do {
      lVar9 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  *puVar7 = &PTR_FUN_110beda28;
  *(undefined1 *)(puVar7 + 0x1a) = 0;
  puVar7[0x1c] = 0;
  puVar7[0x1b] = 0;
  puVar7[0x1e] = 0;
  puVar7[0x1d] = 0;
  puVar7[0x20] = 0;
  puVar7[0x1f] = 0;
  puVar7[0x19] = &PTR_FUN_110beb730;
  puVar7[0x21] = 0;
  puVar7[0x23] = 0;
  puVar7[0x22] = 0;
  puVar7[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar7 + 0x27) = 0x40000000;
  puVar7[0x24] = &PTR_FUN_110beda98;
  puVar7[0x25] = &UNK_110beda68;
  puVar7[0x28] = 0;
  puVar7[0x29] = 0;
  puVar7[0x2c] = 0x4000000040000000;
  *(undefined4 *)(puVar7 + 0x2d) = 0x40000000;
  puVar7[0x2a] = &PTR_FUN_110beda98;
  puVar7[0x2b] = &UNK_110beda68;
  *(undefined1 *)(puVar7 + 0x3e) = 0;
  puVar7[0x2e] = 0;
  puVar7[0x2f] = 0;
  *(undefined1 *)(puVar7 + 0x30) = 0;
  lVar9 = puVar7[0xc];
  if (lVar9 == 0) {
    bVar6 = false;
    lVar8 = param_2 + 0x28;
  }
  else {
    bVar6 = lVar9 != puVar7[0xb];
    lVar8 = 0;
    if (!bVar6) {
      lVar8 = param_2 + 0x28;
    }
  }
  *(undefined2 *)(puVar7 + 0x40) = 0;
  puVar7[0x43] = 0x10a523c8c;
  puVar7[0x44] = &UNK_110beb848;
  puVar7[0x48] = 0;
  puVar7[0x47] = 0;
  puVar7[0x46] = 0;
  puVar7[0x45] = 0;
  puVar7[0x3f] = &PTR_DAT_110bedad8;
  if ((!bVar6) && (*(char *)(*(long *)(lVar8 + 0x28) + 8) == '\x01')) {
    puVar7[0x48] = lVar8 + 0x20;
  }
  if ((lVar9 == 0) || (lVar9 == puVar7[0xb])) {
    lVar9 = *(long *)(param_2 + 0x28);
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    plVar1 = *(long **)(param_2 + 0x38);
    if (plVar1 != (long *)0x0) {
      plVar2 = plVar1 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = *plVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    uVar4 = *(undefined1 *)(lVar9 + 0x488);
    uStack_88 = CONCAT26(uStack_88._6_2_,0x100000000);
    uStack_78 = 1;
    uStack_70 = 0xffffffffffffffff;
    uStack_68 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
    plStack_80 = (long *)0x3200000002;
    uStack_88 = CONCAT44(uStack_88._4_4_,0x1010100);
    uStack_98 = uVar3;
    plStack_90 = plVar1;
    FUN_10a4cb950(puVar7 + 0x30,&uStack_88);
    if (lStack_58 < 0) {
      __ZdlPv(uStack_68);
    }
    puVar7[0x3c] = param_3;
    *(undefined1 *)(puVar7 + 0x3d) = uVar4;
    *(undefined4 *)((long)puVar7 + 0x1ec) = 0x7fffffff;
    uStack_98 = 0;
    plStack_90 = (long *)0x0;
    uStack_88 = uVar3;
    plStack_80 = plVar1;
    func_0x00010a4cc6f8(puVar7 + 0x37,&uStack_88);
    plVar1 = plStack_80;
    if (plStack_80 != (long *)0x0) {
      plVar2 = plStack_80 + 1;
      do {
        lVar9 = *plVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = lVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_80 + 0x10))(plStack_80);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    plVar1 = plStack_90;
    if (plStack_90 != (long *)0x0) {
      plVar2 = plStack_90 + 1;
      do {
        lVar9 = *plVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = lVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_90 + 0x10))(plStack_90);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    *(undefined1 *)(puVar7 + 0x3e) = 1;
  }
  *param_1 = puVar7;
  return;
}



/* Entry: 10a52339c; end: 10a52347f;  */

undefined8 * FUN_10a52339c(undefined8 *param_1)

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
  
  *param_1 = &PTR_FUN_110beda28;
  if (*(char *)(param_1 + 0x3e) == '\x01') {
    FUN_10a4cbbb0(param_1 + 0x30);
  }
  FUN_10a232e34(param_1 + 0x2e);
  FUN_10a232e34(param_1 + 0x28);
  param_1[0x19] = &PTR_FUN_110beb730;
  func_0x00010a5138fc(param_1 + 0x21);
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



/* Entry: 10a523480; end: 10a523497;  */

void FUN_10a523480(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x1f0) == '\x01') {
    plVar1 = (long *)(param_1 + 0x180);
    lVar2 = *plVar1;
    lVar3 = *(long *)(lVar2 + 0x118);
    while (lVar3 != 0) {
      FUN_10a4cc55c(plVar1,*(long *)(lVar2 + 0x110) + 0x10);
      lVar2 = *plVar1;
      lVar3 = *(long *)(lVar2 + 0x118);
    }
    return;
  }
  return;
}



/* Entry: 10a523498; end: 10a5235fb;  */

uint FUN_10a523498(long param_1)

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
  lVar7 = 0x18;
  __Znwm();
  lVar10 = *(long *)(param_1 + 0x108);
  lVar3 = *(long *)(param_1 + 0x110);
  FUN_10a22d2fc();
  while (lVar10 = lVar10 + 0x18, lVar10 != lVar3) {
    FUN_10a4cab14(lVar7);
  }
  plVar8 = (long *)0x20;
  lStack_50 = lVar7;
  __Znwm();
  *plVar8 = (long)&PTR_FUN_110bedb08;
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
    FUN_10a513b08(uVar9,**(undefined8 **)(lVar2 + 0x20),(*(undefined8 **)(lVar2 + 0x20))[2]);
    uVar6 = (uint)uVar9 ^ 1;
  }
  return uVar6;
}



/* Entry: 10a5235fc; end: 10a523b57;  */

/* WARNING: Removing unreachable block (ram,0x00010a5239f8) */
/* WARNING: Removing unreachable block (ram,0x00010a5239fc) */
/* WARNING: Removing unreachable block (ram,0x00010a523a04) */
/* WARNING: Removing unreachable block (ram,0x00010a523a0c) */
/* WARNING: Removing unreachable block (ram,0x00010a523a18) */
/* WARNING: Removing unreachable block (ram,0x00010a523a20) */
/* WARNING: Removing unreachable block (ram,0x00010a523a28) */
/* WARNING: Removing unreachable block (ram,0x00010a523a2c) */

void FUN_10a5235fc(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  ulong uVar13;
  undefined4 uVar14;
  long lVar15;
  undefined8 *puStack_1b8;
  long lStack_1b0;
  long *plStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined1 uStack_170;
  undefined4 uStack_16c;
  undefined1 uStack_168;
  undefined1 uStack_15c;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_130;
  long *plStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  code *pcStack_f0;
  undefined **ppuStack_e8;
  long lStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = *(long *)(param_2 + 0x70);
  uVar13 = *(ulong *)(lVar15 + 0x20);
  puVar6 = (undefined8 *)0xa0;
  __Znwm();
  puVar11 = puVar6 + 3;
  *(undefined2 *)puVar11 = 4;
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
  puVar6[0x11] = puVar11;
  puVar6[0x12] = 0;
  *puVar6 = &PTR_DAT_110ae91c0;
  *(undefined2 *)(puVar6 + 0x13) = 0;
  puStack_1b8 = puVar6;
  if ((*(byte *)(param_2 + 0x1f0) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a523a74);
    (*pcVar4)();
  }
  uStack_b0 = (code *)CONCAT44(7,*(undefined4 *)(param_2 + 0x1ec));
  uVar12 = 0x21c;
  if (iRam00000001132ffd98 != 1) {
    uVar12 = 0x2d0;
  }
  uVar5 = 0x168;
  if (iRam00000001132ffd98 != 0) {
    uVar5 = uVar12;
  }
  uStack_a8 = (undefined **)CONCAT44(uStack_a8._4_4_,uVar5);
  uStack_a0 = CONCAT35(uStack_a0._5_3_,1);
  uVar8 = (ulong)plStack_98 >> 0x28;
  uVar3 = (uint)plStack_98;
  plStack_98._0_5_ = (uint5)(uVar3 & 0xffffff00);
  plStack_98 = (long *)CONCAT35((int3)uVar8,(uint5)plStack_98);
  plVar7 = &lStack_158;
  lStack_158 = param_2;
  func_0x0001098ac018(plVar7,&UNK_10e4a7ac1,0x23,&uStack_b0,0,1);
  uVar8 = uVar13;
  FUN_10a4caa9c();
  if ((int)uVar8 < 2) {
    uVar14 = 0x40000000;
    uVar5 = 0x40000000;
    uVar12 = 0x40000000;
    if ((int)uVar8 != 1) goto LAB_10a5237b0;
  }
  else {
    uStack_170 = 0;
    lStack_188 = 0;
    uStack_180 = 0;
    lStack_190 = 0;
    uStack_178 = 0;
    uStack_16c = 0x1000000;
    uStack_168 = 0;
    uStack_15c = 0;
    plVar9 = &lStack_158;
    func_0x0001098ac018(plVar9,&UNK_10e4c90da,0x22,&lStack_190,0,1);
    uVar12 = (int)plVar9;
    if (lStack_190 != 0) {
      lStack_188 = lStack_190;
      __ZdlPv();
    }
  }
  uVar14 = uVar12;
  uStack_b0 = (code *)((ulong)uStack_b0 & 0xffffffffffffff00);
  plVar9 = &lStack_158;
  func_0x0001098ac018(plVar9,&UNK_10e4c8f08,0x24,&uStack_b0,0,1);
  uVar5 = SUB84(plVar9,0);
LAB_10a5237b0:
  if (uVar8 >> 0x20 == 0) {
    uVar12 = 0x40000000;
  }
  else {
    uStack_b0 = (code *)0x4014000000000000;
    uStack_a8 = (undefined **)0x3e8;
    uStack_a0 = CONCAT71(uStack_a0._1_7_,3);
    plVar9 = &lStack_158;
    func_0x0001098ac018(plVar9,&UNK_10e4c8f2d,0x26,&uStack_b0,0,1);
    uVar12 = SUB84(plVar9,0);
  }
  lStack_1b0 = param_2 + 0x180;
  FUN_10a22d2fc(&plStack_1a8,uVar13);
  lStack_150 = 0;
  lStack_148 = 0;
  uStack_140 = 0;
  uStack_b0 = (code *)CONCAT44((int)plVar7,0x20000000);
  uStack_a8 = (undefined **)CONCAT44(uVar14,uVar5);
  uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar12);
  FUN_10a26ebc0(&lStack_150,0,&uStack_b0,(long)&uStack_a0 + 4,5);
  plStack_128 = &lStack_120;
  lStack_130 = lStack_1b0;
  lStack_120 = lStack_1a0;
  lStack_118 = lStack_198;
  if (lStack_198 == 0) {
    plVar7 = &lStack_d0;
  }
  else {
    *(long **)(lStack_1a0 + 0x10) = plStack_128;
    *(long **)(lStack_1a0 + 0x10) = &lStack_d0;
    lStack_120 = 0;
    lStack_118 = 0;
    plVar7 = plStack_1a8;
    plStack_1a8 = &lStack_1a0;
  }
  ppuStack_e8 = &PTR_FUN_110be89b0;
  pcStack_f0 = FUN_10a4efa38;
  lStack_d0 = lStack_1a0;
  lStack_c8 = lStack_198;
  lStack_e0 = lStack_1b0;
  uStack_b0 = FUN_10a4efa38;
  uStack_a8 = &PTR_FUN_110be89b0;
  uStack_a0 = lStack_1b0;
  plStack_98 = &lStack_90;
  lStack_90 = lStack_1a0;
  lStack_88 = lStack_198;
  plStack_d8 = plVar7;
  if (lStack_198 != 0) {
    *(long **)(lStack_1a0 + 0x10) = plStack_98;
    lStack_d0 = 0;
    lStack_c8 = 0;
    plStack_d8 = &lStack_d0;
    plStack_98 = plVar7;
  }
  lStack_108 = lStack_148;
  lStack_110 = lStack_150;
  uStack_100 = uStack_140;
  lStack_148 = 0;
  uStack_140 = 0;
  lStack_150 = 0;
  param_2 = param_2 + 0x18;
  lStack_1a0 = lStack_120;
  lStack_198 = lStack_118;
  func_0x0001098aeecc(param_2,&uStack_b0,&UNK_110be8990,&lStack_110);
  if (lStack_110 != 0) {
    lStack_108 = lStack_110;
    __ZdlPv();
  }
  (*(code *)*uStack_a8)(&uStack_a8);
  (*(code *)*ppuStack_e8)(&ppuStack_e8);
  func_0x00010a22dfb0(&plStack_128,lStack_120);
  if (lStack_150 != 0) {
    lStack_148 = lStack_150;
    __ZdlPv();
  }
  plVar7 = puVar6 + 2;
  *(int *)(lVar15 + 0x10) = (int)param_2;
  func_0x00010a22dfb0(&plStack_1a8,lStack_1a0);
  do {
    lVar15 = *plVar7;
    if (lVar15 == 0) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = 2;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        FUN_109d1b4dc(puVar11);
        goto LAB_10a5239d8;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar15 >> 1 & 1) != 0) {
LAB_10a5239d8:
      while( true ) {
        *param_1 = puVar6;
        puVar11 = puVar6;
        func_0x0001092b4274(&puStack_1b8);
        uVar10 = 0;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) break;
        ___stack_chk_fail();
        if ((int)puVar11 == 0) {
          do {
            __Unwind_Resume(uVar10);
            func_0x000104bd46a0();
          } while ((int)puVar11 == 0);
        }
        else if (lStack_190 != 0) {
          lStack_188 = lStack_190;
          __ZdlPv();
        }
        ___cxa_begin_catch(uVar10);
        __ZSt17current_exceptionv(&pcStack_f0);
        func_0x000109d1b350(puVar6,&pcStack_f0);
        __ZNSt13exception_ptrD1Ev(&pcStack_f0);
        ___cxa_end_catch();
      }
      return;
    }
  } while( true );
}



/* Entry: 10a523b58; end: 10a523bab;  */

void FUN_10a523b58(long param_1,undefined8 *param_2)

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
  *param_2 = &PTR_FUN_110beda98;
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



/* Entry: 10a523bac; end: 10a523c2f;  */

void FUN_10a523bac(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uStack_34;
  
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  FUN_10a513a90(uVar2,*(undefined8 *)(param_2 + 0x20));
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



/* Entry: 10a523c30; end: 10a523ca7;  */

void FUN_10a523c30(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_FUN_110beda98;
  param_1[1] = &UNK_110beda68;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



/* Entry: 10a523ca8; end: 10a523cd7;  */

void FUN_10a523ca8(long param_1)

{
  if (param_1 != 0) {
    func_0x00010a22dfb0(param_1,*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a523cd8; end: 10a523cdb;  */

void FUN_10a523cd8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a523cdc; end: 10a523cef;  */

void FUN_10a523cdc(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a523cf0; end: 10a523cf7;  */

void FUN_10a523cf0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    func_0x00010a22dfb0(lVar1,*(undefined8 *)(lVar1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a523cf8; end: 10a523d2f;  */

undefined8 FUN_10a523cf8(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bedb48);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a523d30; end: 10a523d5b;  */

void FUN_10a523d30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a523d5c; end: 10a523e03;  */

undefined8 * FUN_10a523d5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bedb80;
  (**(code **)param_1[0xf])();
  (**(code **)param_1[7])();
  FUN_10a26cc38(param_1 + 3);
  return param_1;
}



/* Entry: 10a523e04; end: 10a52409f;  */

/* WARNING: Removing unreachable block (ram,0x00010a524000) */
/* WARNING: Removing unreachable block (ram,0x00010a524004) */
/* WARNING: Removing unreachable block (ram,0x00010a52400c) */
/* WARNING: Removing unreachable block (ram,0x00010a524014) */
/* WARNING: Removing unreachable block (ram,0x00010a524018) */

void FUN_10a523e04(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 in_x7;
  long lVar6;
  long lVar7;
  undefined8 uStack_60;
  long *plStack_58;
  
  puVar5 = (undefined8 *)0x2f0;
  __Znwm();
  lVar7 = param_3;
  if (*(long *)(param_2 + 8) != 0) {
    lVar7 = *(long *)(param_2 + 8);
  }
  plStack_58 = *(long **)(param_2 + 0x20);
  uStack_60 = *(undefined8 *)(param_2 + 0x18);
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
  *puVar5 = &PTR_DAT_110bba7a0;
  func_0x0001098bae4c(puVar5,&UNK_10e4a7341,0x23,param_3,lVar7,puVar5 + 0x19,puVar5 + 0x54,in_x7,0,0
                      ,&uStack_60);
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
  *puVar5 = &PTR_DAT_110bba7a0;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  puVar5[0x1c] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x20] = 0;
  puVar5[0x1f] = 0;
  puVar5[0x19] = &PTR_FUN_110bb9f18;
  puVar5[0x21] = 0;
  puVar5[0x23] = 0;
  puVar5[0x22] = 0;
  puVar5[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x27) = 0x40000000;
  puVar5[0x24] = &PTR_FUN_110bba810;
  puVar5[0x25] = &UNK_110bba7e0;
  puVar5[0x28] = 0;
  puVar5[0x29] = 0;
  puVar5[0x2c] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x2d) = 0x40000000;
  puVar5[0x2a] = &PTR_FUN_110bba810;
  puVar5[0x2b] = &UNK_110bba7e0;
  *(undefined1 *)(puVar5 + 0x53) = 0;
  puVar5[0x2e] = 0;
  puVar5[0x2f] = 0;
  *(undefined1 *)(puVar5 + 0x30) = 0;
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
  *(undefined2 *)(puVar5 + 0x55) = 0;
  puVar5[0x58] = 0x10a28c0ec;
  puVar5[0x59] = &UNK_110bb9fa0;
  puVar5[0x5b] = 0;
  puVar5[0x5a] = 0;
  puVar5[0x5d] = 0;
  puVar5[0x5c] = 0;
  puVar5[0x54] = &PTR_FUN_110bba850;
  if ((!bVar4) && (*(char *)(*(long *)(lVar6 + 0x10) + 8) == '\x01')) {
    puVar5[0x5d] = lVar6 + 8;
  }
  if ((lVar7 == 0) || (lVar7 == puVar5[0xb])) {
    FUN_10a28c208(puVar5 + 0x30);
    FUN_10a28c534(puVar5 + 0x30,param_3);
    *(undefined1 *)(puVar5 + 0x53) = 1;
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 10a5240a0; end: 10a524147;  */

undefined8 * FUN_10a5240a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bedbc0;
  (**(code **)param_1[0xf])();
  (**(code **)param_1[7])();
  FUN_10a26cc38(param_1 + 3);
  return param_1;
}



/* Entry: 10a524148; end: 10a52449b;  */

/* WARNING: Possible PIC construction at 0x00010a524470: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a524474) */
/* WARNING: Removing unreachable block (ram,0x00010a524484) */

long * FUN_10a524148(undefined8 *param_1,long param_2,long param_3)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  undefined1 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = (long *)0x2f0;
  __Znwm();
  lVar9 = param_3;
  if (*(long *)(param_2 + 8) != 0) {
    lVar9 = *(long *)(param_2 + 8);
  }
  plStack_b8 = *(long **)(param_2 + 0x20);
  uStack_c0 = *(undefined8 *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar6 = (long *)(*(long *)(param_2 + 0x20) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar11 = plVar5 + 0x19;
  *plVar5 = (long)&PTR_FUN_110bedc00;
  uStack_d0 = 0;
  plStack_c8 = (long *)0x0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  puStack_e0 = &uStack_c0;
  plVar6 = plVar5;
  func_0x0001098bae4c(plVar5,&UNK_10e4c214f,0x2b,param_3,lVar9,plVar11,plVar5 + 0x54);
  plVar7 = plStack_b8;
  if (plStack_b8 != (long *)0x0) {
    plVar2 = plStack_b8 + 1;
    do {
      lVar9 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar6 = plVar7;
    }
  }
  *plVar5 = (long)&PTR_FUN_110bedc00;
  *(undefined1 *)(plVar5 + 0x1a) = 0;
  plVar5[0x1c] = 0;
  plVar5[0x1b] = 0;
  plVar5[0x1e] = 0;
  plVar5[0x1d] = 0;
  plVar5[0x20] = 0;
  plVar5[0x1f] = 0;
  plVar5[0x19] = (long)&PTR_FUN_110be9d58;
  plVar5[0x21] = 0;
  plVar5[0x23] = 0;
  plVar5[0x22] = 0;
  plVar5[0x26] = 0x4000000040000000;
  *(undefined4 *)(plVar5 + 0x27) = 0x40000000;
  plVar5[0x24] = (long)&PTR_FUN_110bedc70;
  plVar5[0x25] = (long)&UNK_110bedc40;
  plVar5[0x28] = 0;
  plVar5[0x29] = 0;
  plVar5[0x2c] = 0x4000000040000000;
  *(undefined4 *)(plVar5 + 0x2d) = 0x40000000;
  plVar5[0x2a] = (long)&PTR_FUN_110bedc70;
  plVar5[0x2b] = (long)&UNK_110bedc40;
  *(undefined1 *)(plVar5 + 0x53) = 0;
  plVar5[0x2e] = 0;
  plVar5[0x2f] = 0;
  *(undefined1 *)(plVar5 + 0x30) = 0;
  lVar9 = plVar5[0xc];
  if (lVar9 == 0) {
    bVar4 = false;
    lVar8 = param_2 + 0x28;
  }
  else {
    bVar4 = lVar9 != plVar5[0xb];
    lVar8 = 0;
    if (!bVar4) {
      lVar8 = param_2 + 0x28;
    }
  }
  *(undefined2 *)(plVar5 + 0x55) = 0;
  plVar5[0x58] = 0x10a524b7c;
  plVar5[0x59] = (long)&UNK_110bb9fa0;
  plVar5[0x5b] = 0;
  plVar5[0x5a] = 0;
  plVar5[0x5d] = 0;
  plVar5[0x5c] = 0;
  plVar5[0x54] = (long)&PTR_DAT_110bedcb0;
  if ((!bVar4) && (*(char *)(*(long *)(lVar8 + 0x10) + 8) == '\x01')) {
    plVar5[0x5d] = lVar8 + 8;
  }
  if ((lVar9 == 0) || (lVar9 == plVar5[0xb])) {
    uStack_b0 = 0;
    plStack_a8 = (long *)0x0;
    FUN_109d1a80c();
    lStack_a0 = *plVar6;
    puStack_98 = &UNK_1053a6a3c;
    ppuStack_90 = &PTR_DAT_110ae9180;
    FUN_10a28c634(plVar5 + 0x30,&uStack_b0,&lStack_a0);
    plVar6 = &lStack_a0;
    func_0x0001092ba41c();
    plVar11 = plStack_a8;
    if (plStack_a8 != (long *)0x0) {
      plVar7 = plStack_a8 + 1;
      do {
        lVar9 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        plVar6 = plVar11;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    plVar5[0x4e] = 0;
    plVar5[0x4d] = 0;
    plVar5[0x50] = 0;
    plVar5[0x4f] = 0;
    *(undefined4 *)(plVar5 + 0x51) = 0x3f800000;
    plVar5[0x52] = param_3;
    *(undefined1 *)(plVar5 + 0x53) = 1;
  }
  plVar7 = plStack_c8;
  *param_1 = plVar5;
  if (plStack_c8 != (long *)0x0) {
    plVar5 = plStack_c8 + 1;
    do {
      lVar9 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      plVar6 = plVar7;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return plVar6;
  }
  ___stack_chk_fail();
  func_0x00010a28c31c(&uStack_b0);
  FUN_10a524b98(plVar7 + 0x30);
  FUN_10a232e34(plVar7 + 0x2e);
  FUN_10a232e34(plVar7 + 0x28);
  plVar7[0x19] = (long)&PTR_FUN_110be9d58;
  FUN_10a4fe398(plVar7 + 0x21);
  func_0x0001098bba44(plVar11);
  plStack_108 = plVar7;
  uStack_f8 = 0x10a524474;
  *plVar7 = (long)&PTR_DAT_110b17ab0;
  plStack_110 = plVar6;
  puStack_100 = &stack0xfffffffffffffff0;
  if (((char)plVar7[0x18] == '\x01') && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
    func_0x00010ae06f08(1,4,&UNK_10f585d39,&UNK_10f585e3d,0x15,&UNK_10f585e89);
  }
  func_0x0001098ae07c(plVar7 + 0x16);
  plVar5 = (long *)plVar7[0x12];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar10 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar10 - 0x200000000;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (uVar10 >> 0x21 == 1) {
      do {
        uVar10 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar10 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar10 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  *plVar7 = (long)&PTR_DAT_110b17b10;
  plVar5 = (long *)plVar7[10];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar10 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar10 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar10 & 0x1fffffffc) == 4) {
      do {
        uVar10 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar10 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar10 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if (plVar7[6] != 0) {
    plVar7[7] = plVar7[6];
    __ZdlPv();
  }
  plStack_118 = plVar7 + 3;
  func_0x0001098ad298(&plStack_118);
  return plVar7;
}



/* Entry: 10a52449c; end: 10a52459f;  */

undefined8 * FUN_10a52449c(undefined8 *param_1)

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
  
  *param_1 = &PTR_FUN_110bedc00;
  FUN_10a524b98(param_1 + 0x30);
  FUN_10a232e34(param_1 + 0x2e);
  FUN_10a232e34(param_1 + 0x28);
  param_1[0x19] = &PTR_FUN_110be9d58;
  FUN_10a4fe398(param_1 + 0x21);
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



/* Entry: 10a5245a0; end: 10a524727;  */

uint FUN_10a5245a0(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 *puStack_50;
  long *plStack_48;
  
  lVar10 = *(long *)(param_1 + 0x70);
  lVar2 = param_1 + 0x150;
  if (lVar10 != param_1 + 0x120) {
    lVar2 = param_1 + 0x120;
  }
  *(long *)(param_1 + 0x78) = lVar2;
  func_0x00010a286b48(lVar2 + 0x20);
  puVar7 = (undefined8 *)0x38;
  __Znwm();
  lVar9 = *(long *)(param_1 + 0x108);
  lVar3 = *(long *)(param_1 + 0x110);
  *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(lVar9 + 8);
  *puVar7 = &PTR_FUN_110bef348;
  FUN_10a22ec14(puVar7 + 2,lVar9 + 0x10);
  while (lVar9 + 0x38 != lVar3) {
    FUN_10a4d87e4(puVar7,*(undefined8 *)(lVar9 + 0x58));
    lVar9 = lVar9 + 0x38;
  }
  plVar8 = (long *)0x20;
  puStack_50 = puVar7;
  __Znwm();
  *plVar8 = (long)&PTR_FUN_110bedce0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar8[3] = (long)puVar7;
  plStack_48 = plVar8;
  FUN_10a286fec(lVar2 + 0x20,&puStack_50);
  plVar8 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar9 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  if (lVar10 == 0) {
    uVar6 = 1;
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x20) + 0x10;
    FUN_10a28beec(lVar10,*(long *)(lVar2 + 0x20) + 0x10);
    uVar6 = (uint)lVar10 ^ 1;
  }
  return uVar6;
}



/* Entry: 10a524728; end: 10a524a47;  */

/* WARNING: Removing unreachable block (ram,0x00010a524914) */
/* WARNING: Removing unreachable block (ram,0x00010a524958) */
/* WARNING: Removing unreachable block (ram,0x00010a52495c) */
/* WARNING: Removing unreachable block (ram,0x00010a524964) */
/* WARNING: Removing unreachable block (ram,0x00010a52496c) */
/* WARNING: Removing unreachable block (ram,0x00010a524978) */
/* WARNING: Removing unreachable block (ram,0x00010a524980) */
/* WARNING: Removing unreachable block (ram,0x00010a524988) */
/* WARNING: Removing unreachable block (ram,0x00010a52498c) */

void FUN_10a524728(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 *puVar10;
  long *plVar11;
  undefined4 uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long *plStack_98;
  uint5 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long alStack_70 [2];
  
  lVar13 = *(long *)(param_2 + 0x70);
  lVar14 = *(long *)(lVar13 + 0x20);
  puVar7 = (undefined8 *)0xa0;
  __Znwm();
  puVar10 = puVar7 + 3;
  *(undefined2 *)puVar10 = 4;
  puVar7[2] = 0;
  puVar7[1] = 0x200000006;
  puVar7[5] = 0;
  puVar7[4] = 0;
  puVar7[7] = 0;
  puVar7[6] = 0;
  puVar7[9] = 0;
  puVar7[8] = 0;
  puVar7[0xb] = 0;
  puVar7[10] = 0;
  puVar7[0xd] = 0;
  puVar7[0xc] = 0;
  puVar7[0xf] = 0;
  puVar7[0xe] = 0;
  puVar7[0x10] = 0;
  puVar7[0x11] = puVar10;
  puVar7[0x12] = 0;
  *puVar7 = &PTR_DAT_110ae91c0;
  *(undefined2 *)(puVar7 + 0x13) = 0;
  puStack_e8 = puVar7;
  if ((*(byte *)(param_2 + 0x298) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a5249bc);
    (*pcVar6)();
  }
  uStack_78 = 0;
  lStack_88 = 0;
  lStack_80 = 0;
  plVar11 = *(long **)(lVar14 + 0x20);
  alStack_70[0] = param_2;
  if (plVar11 != (long *)0x0) {
    do {
      uVar12 = 7;
      if (*(char *)((long)plVar11 + 0x79) == '\0') {
        uVar12 = 1;
      }
      uStack_a8 = CONCAT44(uVar12,0x7fffffff);
      lStack_a0 = CONCAT44(lStack_a0._4_4_,0x168);
      plStack_98 = (long *)CONCAT35((int3)((ulong)plStack_98 >> 0x28),0x100000000);
      uVar4 = (ulong)_uStack_90 >> 0x28;
      uVar3 = (uint)_uStack_90;
      uStack_90 = (uint5)(uVar3 & 0xffffff00);
      _uStack_90 = CONCAT35((int3)uVar4,uStack_90);
      plVar8 = alStack_70;
      func_0x0001098ac018(plVar8,&UNK_10e4a7ac1,0x23,&uStack_a8,0,1,in_x6,in_x7,lVar14);
      plStack_98 = plVar11 + 2;
      lVar9 = param_2;
      uStack_a8 = param_2 + 0x180;
      lStack_a0 = param_2 + 0x290;
      FUN_10a4d43bc(param_2,&uStack_a8,(ulong)plVar8 & 0xffffffff);
      FUN_10a4d454c(&lStack_88,lVar9);
      plVar11 = (long *)*plVar11;
    } while (plVar11 != (long *)0x0);
  }
  lVar5 = lStack_80;
  lVar9 = lStack_88;
  lStack_c0 = 0;
  lStack_b8 = 0;
  uStack_b0 = 0;
  FUN_10a4f1b80(&lStack_c0,lStack_88,lStack_80,lStack_80 - lStack_88 >> 2);
  uStack_a8 = lVar14 + 0x10;
  _uStack_90 = uStack_78;
  lStack_80 = 0;
  uStack_78 = 0;
  lStack_88 = 0;
  uStack_d8 = lStack_b8;
  lStack_e0 = lStack_c0;
  uStack_d0 = uStack_b0;
  lStack_c0 = 0;
  lStack_b8 = 0;
  uStack_b0 = 0;
  lStack_a0 = lVar9;
  plStack_98 = (long *)lVar5;
  FUN_10a4d4620(param_2,&uStack_a8,&lStack_e0);
  *(int *)(lVar13 + 0x10) = (int)param_2;
  if (lStack_e0 != 0) {
    __ZdlPv();
  }
  if (lStack_a0 != 0) {
    __ZdlPv();
  }
  if (lStack_c0 != 0) {
    lStack_b8 = lStack_c0;
    __ZdlPv();
  }
  plVar11 = puVar7 + 2;
  do {
    lVar13 = *plVar11;
    if (lVar13 == 0) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = 2;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        FUN_109d1b4dc(puVar10);
        goto LAB_10a524938;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar13 >> 1 & 1) != 0) {
LAB_10a524938:
      *param_1 = puVar7;
      func_0x0001092b4274(&puStack_e8,puVar7);
      return;
    }
  } while( true );
}



/* Entry: 10a524a48; end: 10a524a9b;  */

void FUN_10a524a48(long param_1,undefined8 *param_2)

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
  *param_2 = &PTR_FUN_110bedc70;
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



/* Entry: 10a524a9c; end: 10a524b1f;  */

void FUN_10a524a9c(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uStack_34;
  
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  FUN_10a4fe428(uVar2,*(undefined8 *)(param_2 + 0x20));
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



/* Entry: 10a524b20; end: 10a524b97;  */

void FUN_10a524b20(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_FUN_110bedc70;
  param_1[1] = &UNK_110bedc40;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



/* Entry: 10a524b98; end: 10a524bf3;  */

long FUN_10a524b98(long param_1)

{
  if (*(char *)(param_1 + 0x118) == '\x01') {
    func_0x00010a28c264(param_1 + 0xe8);
    func_0x0001092ba41c(param_1 + 0xa0);
    func_0x00010a28c31c(param_1 + 0x90);
    __ZNSt3__15mutexD1Ev(param_1 + 0x50);
    func_0x00010a28c374(param_1 + 0x28);
    func_0x00010a28c474(param_1);
  }
  return param_1;
}



/* Entry: 10a524bf4; end: 10a524bf7;  */

void FUN_10a524bf4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a524bf8; end: 10a524c0b;  */

void FUN_10a524bf8(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a524c0c; end: 10a524c87;  */

void FUN_10a524c0c(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_110bef348;
    func_0x00010a22fc28(puVar1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 10a524c88; end: 10a524c8b;  */

void FUN_10a524c88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a524c8c; end: 10a524d33;  */

undefined8 * FUN_10a524c8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bedd40;
  (**(code **)param_1[0x10])();
  (**(code **)param_1[8])();
  FUN_10a26cc38(param_1 + 3);
  return param_1;
}



/* Entry: 10a524d34; end: 10a524fff;  */

/* WARNING: Removing unreachable block (ram,0x00010a524f94) */
/* WARNING: Removing unreachable block (ram,0x00010a524f98) */
/* WARNING: Removing unreachable block (ram,0x00010a524fa0) */
/* WARNING: Removing unreachable block (ram,0x00010a524fa8) */
/* WARNING: Removing unreachable block (ram,0x00010a524fac) */

void FUN_10a524d34(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 in_x7;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_50;
  long *plStack_48;
  
  puVar5 = (undefined8 *)0x288;
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
  *puVar5 = &PTR_FUN_110bba8e0;
  func_0x0001098bae4c(puVar5,&UNK_10e4a7556,0x28,param_3,lVar7,puVar5 + 0x19,puVar5 + 0x47,in_x7,0,0
                      ,&uStack_50);
  plVar8 = plStack_48;
  plVar1 = (long *)(param_2 + 0x28);
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  *puVar5 = &PTR_FUN_110bba8e0;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  puVar5[0x1c] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x20] = 0;
  puVar5[0x1f] = 0;
  puVar5[0x19] = &PTR_FUN_110bba410;
  puVar5[0x21] = 0;
  puVar5[0x23] = 0;
  puVar5[0x22] = 0;
  puVar5[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x27) = 0x40000000;
  puVar5[0x24] = &PTR_FUN_110bba950;
  puVar5[0x25] = &UNK_110bba920;
  puVar5[0x28] = 0;
  puVar5[0x29] = 0;
  puVar5[0x2c] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x2d) = 0x40000000;
  puVar5[0x2a] = &PTR_FUN_110bba950;
  puVar5[0x2b] = &UNK_110bba920;
  *(undefined1 *)(puVar5 + 0x46) = 0;
  puVar5[0x2e] = 0;
  puVar5[0x2f] = 0;
  *(undefined1 *)(puVar5 + 0x30) = 0;
  lVar7 = puVar5[0xc];
  if (lVar7 == 0) {
    bVar4 = false;
    plVar8 = plVar1;
  }
  else {
    bVar4 = lVar7 != puVar5[0xb];
    plVar8 = (long *)0x0;
    if (!bVar4) {
      plVar8 = plVar1;
    }
  }
  *(undefined2 *)(puVar5 + 0x48) = 0;
  puVar5[0x4b] = 0x10a28f680;
  puVar5[0x4c] = &UNK_110bba498;
  puVar5[0x50] = 0;
  puVar5[0x4f] = 0;
  puVar5[0x4e] = 0;
  puVar5[0x4d] = 0;
  puVar5[0x47] = &PTR_DAT_110bba990;
  if ((!bVar4) && (*(char *)(plVar8[3] + 8) == '\x01')) {
    puVar5[0x50] = plVar8 + 2;
  }
  if ((lVar7 == 0) || (lVar7 == puVar5[0xb])) {
    FUN_10a28f79c(puVar5 + 0x30);
    lVar7 = *plVar1;
    puVar5[0x30] = param_3;
    uVar10 = *(undefined8 *)(lVar7 + 0x440);
    uVar9 = *(undefined8 *)(lVar7 + 0x438);
    uVar12 = *(undefined8 *)(lVar7 + 0x450);
    uVar11 = *(undefined8 *)(lVar7 + 0x448);
    uVar14 = *(undefined8 *)(lVar7 + 0x460);
    uVar13 = *(undefined8 *)(lVar7 + 0x458);
    uVar15 = *(undefined8 *)(lVar7 + 0x464);
    *(undefined8 *)((long)puVar5 + 0x1ec) = *(undefined8 *)(lVar7 + 0x46c);
    *(undefined8 *)((long)puVar5 + 0x1e4) = uVar15;
    puVar5[0x3a] = uVar12;
    puVar5[0x39] = uVar11;
    puVar5[0x3c] = uVar14;
    puVar5[0x3b] = uVar13;
    uVar14 = *(undefined8 *)(lVar7 + 0x420);
    uVar13 = *(undefined8 *)(lVar7 + 0x418);
    uVar12 = *(undefined8 *)(lVar7 + 0x430);
    uVar11 = *(undefined8 *)(lVar7 + 0x428);
    uVar15 = *(undefined8 *)(lVar7 + 0x408);
    puVar5[0x32] = *(undefined8 *)(lVar7 + 0x410);
    puVar5[0x31] = uVar15;
    puVar5[0x34] = uVar14;
    puVar5[0x33] = uVar13;
    puVar5[0x36] = uVar12;
    puVar5[0x35] = uVar11;
    puVar5[0x38] = uVar10;
    puVar5[0x37] = uVar9;
    lVar6 = *(long *)(lVar7 + 0x480);
    puVar5[0x3f] = *(undefined8 *)(lVar7 + 0x478);
    puVar5[0x40] = lVar6;
    if (lVar6 != 0) {
      plVar1 = (long *)(lVar6 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puVar5[0x45] = 0;
    puVar5[0x42] = 0;
    puVar5[0x41] = 0;
    puVar5[0x44] = 0;
    puVar5[0x43] = 0;
    *(undefined4 *)(puVar5 + 0x45) = 0x3f800000;
    *(undefined1 *)(puVar5 + 0x46) = 1;
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 10a525000; end: 10a5250a7;  */

undefined8 * FUN_10a525000(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bedd80;
  (**(code **)param_1[0x10])();
  (**(code **)param_1[8])();
  FUN_10a26cc38(param_1 + 3);
  return param_1;
}



/* Entry: 10a5250a8; end: 10a52530b;  */

/* WARNING: Removing unreachable block (ram,0x00010a5252a0) */
/* WARNING: Removing unreachable block (ram,0x00010a5252a4) */
/* WARNING: Removing unreachable block (ram,0x00010a5252ac) */
/* WARNING: Removing unreachable block (ram,0x00010a5252b4) */
/* WARNING: Removing unreachable block (ram,0x00010a5252b8) */

void FUN_10a5250a8(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 in_x7;
  long lVar7;
  long *plVar8;
  undefined8 uStack_50;
  long *plStack_48;
  
  puVar6 = (undefined8 *)0x1e8;
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
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *puVar6 = &PTR_FUN_110beddc0;
  func_0x0001098bae4c(puVar6,&UNK_10e4c2548,0x22,param_3,lVar7,puVar6 + 0x19,puVar6 + 0x33,in_x7,0,0
                      ,&uStack_50);
  plVar8 = plStack_48;
  plVar1 = (long *)(param_2 + 0x28);
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
    do {
      lVar7 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  puVar6[0x1c] = 0;
  puVar6[0x1b] = 0;
  puVar6[0x1e] = 0;
  puVar6[0x1d] = 0;
  puVar6[0x20] = 0;
  puVar6[0x1f] = 0;
  *puVar6 = &PTR_FUN_110beddc0;
  *(undefined1 *)(puVar6 + 0x1a) = 0;
  puVar6[0x19] = &PTR_FUN_110bec500;
  puVar6[0x21] = 0;
  puVar6[0x23] = 0;
  puVar6[0x22] = 0;
  puVar6[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar6 + 0x27) = 0x40000000;
  puVar6[0x24] = &PTR_FUN_110bede30;
  puVar6[0x25] = &UNK_110bede00;
  *(undefined1 *)((long)puVar6 + 0x13c) = 0;
  *(undefined1 *)((long)puVar6 + 0x144) = 0;
  puVar6[0x2b] = 0x4000000040000000;
  *(undefined4 *)(puVar6 + 0x2c) = 0x40000000;
  puVar6[0x29] = &PTR_FUN_110bede30;
  puVar6[0x2a] = &UNK_110bede00;
  *(undefined1 *)((long)puVar6 + 0x164) = 0;
  *(undefined1 *)((long)puVar6 + 0x16c) = 0;
  *(undefined1 *)(puVar6 + 0x2e) = 0;
  *(undefined1 *)(puVar6 + 0x32) = 0;
  lVar7 = puVar6[0xc];
  if (lVar7 == 0) {
    bVar5 = false;
    plVar8 = plVar1;
  }
  else {
    bVar5 = lVar7 != puVar6[0xb];
    plVar8 = (long *)0x0;
    if (!bVar5) {
      plVar8 = plVar1;
    }
  }
  *(undefined2 *)(puVar6 + 0x34) = 0;
  puVar6[0x37] = 0x10a525984;
  puVar6[0x38] = &UNK_110bec618;
  puVar6[0x39] = 0;
  puVar6[0x3a] = 0;
  puVar6[0x3b] = 0;
  puVar6[0x3c] = 0;
  puVar6[0x33] = &PTR_DAT_110bede70;
  if ((!bVar5) && (*(char *)(plVar8[3] + 8) == '\x01')) {
    puVar6[0x3c] = plVar8 + 2;
  }
  if ((lVar7 == 0) || (lVar7 == puVar6[0xb])) {
    uVar3 = *(undefined1 *)(*plVar1 + 0x488);
    puVar6[0x2e] = 0;
    puVar6[0x2f] = 0;
    puVar6[0x30] = param_3;
    *(undefined1 *)(puVar6 + 0x31) = uVar3;
    *(undefined1 *)(puVar6 + 0x32) = 1;
  }
  *param_1 = puVar6;
  return;
}



/* Entry: 10a52530c; end: 10a5253df;  */

undefined8 * FUN_10a52530c(undefined8 *param_1)

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
  
  *param_1 = &PTR_FUN_110beddc0;
  if (*(char *)(param_1 + 0x32) == '\x01') {
    FUN_10a509c6c(param_1 + 0x2e);
  }
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



/* Entry: 10a5253e0; end: 10a5254df;  */

void FUN_10a5253e0(void)

{
  return;
}



/* Entry: 10a5254e0; end: 10a52582f;  */

void FUN_10a5254e0(undefined8 *param_1,long param_2)

{
  undefined **ppuVar1;
  ulong *puVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined **ppuVar6;
  code *pcVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auStack_e0 [8];
  long *plStack_d8;
  undefined8 *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined1 uStack_90;
  undefined1 uStack_8c;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = *(long *)(param_2 + 0x70);
  if ((*(byte *)(lVar15 + 0x24) & 1) != 0) {
    puVar8 = (undefined8 *)0xa0;
    __Znwm();
    puVar11 = puVar8 + 3;
    *(undefined2 *)puVar11 = 4;
    puVar8[2] = 0;
    puVar8[1] = 0x200000006;
    puVar8[5] = 0;
    puVar8[4] = 0;
    puVar8[7] = 0;
    puVar8[6] = 0;
    puVar8[9] = 0;
    puVar8[8] = 0;
    puVar8[0xb] = 0;
    puVar8[10] = 0;
    puVar8[0xd] = 0;
    puVar8[0xc] = 0;
    puVar8[0xf] = 0;
    puVar8[0xe] = 0;
    puVar8[0x10] = 0;
    puVar8[0x11] = puVar11;
    puVar8[0x12] = 0;
    *puVar8 = &PTR_DAT_110ae91c0;
    *(undefined2 *)(puVar8 + 0x13) = 0;
    plStack_d8 = puVar8;
    puStack_d0 = puVar8;
    if ((*(byte *)(param_2 + 400) & 1) != 0) {
      uStack_a8 = (code *)0x27fffffff;
      uVar12 = 0x21c;
      if (iRam00000001132ffd98 != 1) {
        uVar12 = 0x2d0;
      }
      uVar3 = 0x168;
      if (iRam00000001132ffd98 != 0) {
        uVar3 = uVar12;
      }
      ppuStack_a0 = (undefined **)CONCAT44(ppuStack_a0._4_4_,uVar3);
      lStack_98 = CONCAT35(lStack_98._5_3_,1);
      uStack_90 = 0;
      uStack_8c = 0;
      plVar9 = &lStack_c8;
      lStack_c8 = param_2;
      func_0x0001098ac018(plVar9,&UNK_10e4a7ac1,0x23,&uStack_a8,0,1);
      FUN_10a52b630(&uStack_a8,*(undefined8 *)(lVar15 + 0x1c),*(undefined1 *)(param_2 + 0x188));
      FUN_10a4e7820(param_2 + 0x170,&uStack_a8);
      ppuVar6 = ppuStack_a0;
      if (ppuStack_a0 != (undefined **)0x0) {
        ppuVar1 = ppuStack_a0 + 1;
        do {
          puVar13 = *ppuVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar5) {
            *ppuVar1 = puVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (puVar13 == (undefined *)0x0) {
          (**(code **)(*ppuStack_a0 + 0x10))(ppuStack_a0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
        }
      }
      lStack_c0 = 0;
      lStack_b8 = 0;
      uStack_b0 = 0;
      uStack_a8 = (code *)CONCAT44((int)plVar9,0x20000000);
      FUN_10a26ebc0(&lStack_c0,0,&uStack_a8,&ppuStack_a0,2);
      uStack_a8 = FUN_10a4f8e40;
      ppuStack_a0 = &PTR_FUN_110be9490;
      lVar10 = param_2 + 0x18;
      lStack_98 = param_2 + 0x170;
      FUN_10a4f8d24(lVar10,&uStack_a8,&lStack_c0);
      (*(code *)*ppuStack_a0)(&ppuStack_a0);
      if (lStack_c0 != 0) {
        lStack_b8 = lStack_c0;
        __ZdlPv();
      }
      plVar9 = puVar8 + 2;
      *(int *)(lVar15 + 0x10) = (int)lVar10;
      do {
        lVar15 = *plVar9;
        if (lVar15 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            FUN_109d1b4dc(puVar11);
            goto LAB_10a525708;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        if (((uint)lVar15 >> 1 & 1) != 0) {
LAB_10a525708:
          while( true ) {
            *param_1 = puVar8;
            plStack_d8 = (long *)0x0;
            puVar11 = puVar8;
            func_0x0001092b4274(&puStack_d0);
            plVar9 = plStack_d8;
            if (plStack_d8 != (long *)0x0) {
              puVar2 = (ulong *)(plStack_d8 + 1);
              do {
                uVar14 = *puVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar5) {
                  *puVar2 = uVar14 - 4;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if ((uVar14 & 0x1fffffffc) == 4) {
                do {
                  uVar14 = *puVar2;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                  if (bVar5) {
                    *puVar2 = uVar14 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (uVar14 - 1 == 0) {
                  (**(code **)(*plStack_d8 + 8))();
                }
              }
            }
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) break;
            ___stack_chk_fail();
            if ((int)puVar11 == 0) {
              do {
                __Unwind_Resume(plVar9);
                func_0x000104bd46a0();
              } while ((int)puVar11 == 0);
            }
            else {
              (*(code *)*ppuStack_a0)(&ppuStack_a0);
              if (lStack_c0 != 0) {
                lStack_b8 = lStack_c0;
                __ZdlPv();
              }
            }
            ___cxa_begin_catch(plVar9);
            __ZSt17current_exceptionv(auStack_e0);
            func_0x000109d1b350(puVar8,auStack_e0);
            __ZNSt13exception_ptrD1Ev(auStack_e0);
            ___cxa_end_catch();
          }
          return;
        }
      } while( true );
    }
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a5257a4);
  (*pcVar7)();
}



/* Entry: 10a525830; end: 10a52586f;  */

void FUN_10a525830(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR____cxa_pure_virtual_110b17f40;
  param_2[1] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x18);
  param_2[2] = uVar1;
  *param_2 = &PTR_FUN_110bede30;
  uVar1 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined4 *)((long)param_2 + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined8 *)((long)param_2 + 0x1c) = uVar1;
  return;
}



/* Entry: 10a525870; end: 10a52591f;  */

void FUN_10a525870(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  float fVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uStack_14;
  
  if (((*(byte *)(param_3 + 0x24) & 1) == 0) || ((*(byte *)(param_2 + 0x24) & 1) == 0)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a525920);
    (*pcVar4)();
  }
  uVar6 = *(ulong *)(param_3 + 0x1c);
  uVar5 = *(ulong *)(param_2 + 0x1c);
  uVar2 = uVar6 >> 0x20;
  if ((uVar6 >> 0x20 & 1) == 0) {
    uVar2 = uVar5 >> 0x20;
  }
  if (((uVar5 & uVar2 << 0x20) >> 0x20 & 1) == 0) {
    if (((uVar2 << 0x20 ^ uVar5) >> 0x20 & 1) != 0) goto LAB_10a5258dc;
  }
  else {
    fVar1 = (float)uVar6;
    if ((uVar6 & 0x100000000) == 0) {
      fVar1 = (float)uVar5;
    }
    if (fVar1 != (float)uVar5) {
LAB_10a5258dc:
      uStack_14 = 0x40000000;
      goto LAB_10a5258e0;
    }
  }
  lVar3 = 0x10;
  if (param_4 != 0) {
    lVar3 = 0x18;
  }
  uStack_14 = *(undefined4 *)(param_2 + lVar3);
LAB_10a5258e0:
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_10a26d5a0(param_1,&uStack_14,&stack0xfffffffffffffff0,1);
  return;
}



/* Entry: 10a525920; end: 10a52599f;  */

void FUN_10a525920(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_FUN_110bede30;
  param_1[1] = &UNK_110bede00;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  return;
}



/* Entry: 10a5259a0; end: 10a525a47;  */

undefined8 * FUN_10a5259a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bedea0;
  (**(code **)param_1[0x10])();
  (**(code **)param_1[8])();
  FUN_10a26cc38(param_1 + 3);
  return param_1;
}



/* Entry: 10a525a48; end: 10a525c9b;  */

/* WARNING: Removing unreachable block (ram,0x00010a525c30) */
/* WARNING: Removing unreachable block (ram,0x00010a525c34) */
/* WARNING: Removing unreachable block (ram,0x00010a525c3c) */
/* WARNING: Removing unreachable block (ram,0x00010a525c44) */
/* WARNING: Removing unreachable block (ram,0x00010a525c48) */

void FUN_10a525a48(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 in_x7;
  long lVar6;
  long *plVar7;
  undefined8 uStack_50;
  long *plStack_48;
  
  puVar5 = (undefined8 *)0x1c0;
  __Znwm();
  lVar6 = param_3;
  if (*(long *)(param_2 + 8) != 0) {
    lVar6 = *(long *)(param_2 + 8);
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
  *puVar5 = &PTR_FUN_110bedee0;
  func_0x0001098bae4c(puVar5,&UNK_10e4c2729,0x1f,param_3,lVar6,puVar5 + 0x19,puVar5 + 0x2e,in_x7,0,0
                      ,&uStack_50);
  plVar7 = plStack_48;
  plVar1 = (long *)(param_2 + 0x28);
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  puVar5[0x1c] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x20] = 0;
  puVar5[0x1f] = 0;
  *puVar5 = &PTR_FUN_110bedee0;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  puVar5[0x19] = &PTR_FUN_110bedf30;
  puVar5[0x21] = 0;
  puVar5[0x23] = 0;
  puVar5[0x22] = 0;
  puVar5[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x27) = 0x40000000;
  puVar5[0x24] = &PTR_DAT_110bedfe8;
  puVar5[0x25] = &UNK_110bedfb8;
  *(undefined2 *)((long)puVar5 + 0x13c) = 0;
  puVar5[0x2a] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x2b) = 0x40000000;
  puVar5[0x28] = &PTR_DAT_110bedfe8;
  puVar5[0x29] = &UNK_110bedfb8;
  *(undefined2 *)((long)puVar5 + 0x15c) = 0;
  *(undefined1 *)(puVar5 + 0x2c) = 0;
  *(undefined1 *)(puVar5 + 0x2d) = 0;
  lVar6 = puVar5[0xc];
  if (lVar6 == 0) {
    bVar4 = false;
    plVar7 = plVar1;
  }
  else {
    bVar4 = lVar6 != puVar5[0xb];
    plVar7 = (long *)0x0;
    if (!bVar4) {
      plVar7 = plVar1;
    }
  }
  *(undefined2 *)(puVar5 + 0x2f) = 0;
  puVar5[0x32] = FUN_10a5264dc;
  puVar5[0x33] = &UNK_110bee048;
  puVar5[0x34] = 0;
  puVar5[0x35] = 0;
  puVar5[0x36] = 0;
  puVar5[0x37] = 0;
  puVar5[0x2e] = &PTR_FUN_110bee028;
  if ((!bVar4) && (*(char *)(plVar7[3] + 8) == '\x01')) {
    puVar5[0x37] = plVar7 + 2;
  }
  if ((lVar6 == 0) || (lVar6 == puVar5[0xb])) {
    puVar5[0x2c] = *plVar1 + 0x3f8;
    *(undefined1 *)(puVar5 + 0x2d) = 1;
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 10a525c9c; end: 10a525d47;  */

undefined8 * FUN_10a525c9c(undefined8 *param_1)

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
  
  *param_1 = &PTR_FUN_110bedee0;
  param_1[0x19] = &PTR_FUN_110bedf30;
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



/* Entry: 10a525d48; end: 10a525d87;  */

void FUN_10a525d48(void)

{
  return;
}



/* Entry: 10a525d88; end: 10a526007;  */

/* WARNING: Removing unreachable block (ram,0x00010a525f08) */
/* WARNING: Removing unreachable block (ram,0x00010a525f0c) */
/* WARNING: Removing unreachable block (ram,0x00010a525f14) */
/* WARNING: Removing unreachable block (ram,0x00010a525f1c) */
/* WARNING: Removing unreachable block (ram,0x00010a525f28) */
/* WARNING: Removing unreachable block (ram,0x00010a525f30) */
/* WARNING: Removing unreachable block (ram,0x00010a525f38) */
/* WARNING: Removing unreachable block (ram,0x00010a525f3c) */

void FUN_10a525d88(undefined8 *param_1,long param_2)

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
  undefined8 *puStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  long lStack_d8;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
    puStack_108 = puVar5;
    if ((*(byte *)(param_2 + 0x168) & 1) != 0) {
      pcStack_e8 = FUN_10a5265e0;
      ppuStack_e0 = &PTR_FUN_110bee0a0;
      lStack_d8 = param_2 + 0x160;
      pcStack_a8 = FUN_10a5265e0;
      ppuStack_a0 = &PTR_FUN_110bee0a0;
      lStack_f8 = 0;
      uStack_f0 = 0;
      lStack_100 = 0;
      param_2 = param_2 + 0x18;
      lStack_98 = lStack_d8;
      func_0x0001098aeecc(param_2,&pcStack_a8,&UNK_110bee080,&lStack_100);
      if (lStack_100 != 0) {
        lStack_f8 = lStack_100;
        __ZdlPv();
      }
      plVar1 = puVar5 + 2;
      (*(code *)*ppuStack_a0)(&ppuStack_a0);
      (*(code *)*ppuStack_e0)(&ppuStack_e0);
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
            goto LAB_10a525ee8;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        if (((uint)lVar9 >> 1 & 1) != 0) {
LAB_10a525ee8:
          while( true ) {
            *param_1 = puVar5;
            puVar8 = puVar5;
            func_0x0001092b4274(&puStack_108);
            iVar7 = (int)puVar8;
            lVar9 = 0;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
              return;
            }
            ___stack_chk_fail();
            if (iVar7 == 0) break;
            if (lStack_100 != 0) {
              lStack_f8 = lStack_100;
              __ZdlPv();
            }
            (*(code *)*ppuStack_a0)(&ppuStack_a0);
            (*(code *)*ppuStack_e0)(&ppuStack_e0);
            ___cxa_begin_catch(lVar9);
            __ZSt17current_exceptionv(&pcStack_e8);
            func_0x000109d1b350(puVar5,&pcStack_e8);
            __ZNSt13exception_ptrD1Ev(&pcStack_e8);
            ___cxa_end_catch();
          }
          __Unwind_Resume(lVar9);
          func_0x000104bd46a0();
          puVar5 = (undefined8 *)0x20;
          __Znwm();
          puVar5[1] = 0;
          *puVar5 = &PTR_FUN_110bedf70;
          puVar5[2] = 0;
          puVar5[3] = 0;
          lVar9 = *(long *)(lVar9 + 0x48) - *(long *)(lVar9 + 0x40);
          if (lVar9 != 0) {
            if (lVar9 < 0) {
              FUN_10a5263a0();
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10a52609c);
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
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a525f84);
  (*pcVar4)();
}



/* Entry: 10a526008; end: 10a5260bf;  */

void FUN_10a526008(undefined8 *param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_110bedf70;
  puVar3[2] = 0;
  puVar3[3] = 0;
  lVar1 = *(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40);
  if (lVar1 != 0) {
    if (lVar1 < 0) {
      FUN_10a5263a0();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a52609c);
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



/* Entry: 10a5260c0; end: 10a52617f;  */

void FUN_10a5260c0(long param_1,int param_2)

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
      FUN_10a5263a0();
      lVar4 = *(long *)(param_1 + 0x40);
      lVar5 = *(long *)(param_1 + 0x48);
      if ((((long)param_2 + 1U == lVar5 - lVar4) ||
          ((lVar4 != lVar5 && ((ulong)(long)param_2 < (ulong)(lVar5 - lVar4))))) && (lVar4 != lVar5)
         ) {
        *(long *)(param_1 + 0x48) = lVar5 + -1;
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5261c0);
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



/* Entry: 10a526180; end: 10a5261bf;  */

void FUN_10a526180(long param_1,int param_2)

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
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a5261c0);
  (*pcVar3)();
}



/* Entry: 10a5261c0; end: 10a526237;  */

undefined8 * FUN_10a5261c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bedf70;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a526238; end: 10a52639f;  */

void FUN_10a526238(long param_1,long *param_2)

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
LAB_10a52635c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a526360);
        (*pcVar1)();
      }
      plVar2 = param_2;
      func_0x0001098ac018(param_2,&UNK_10e4c8e74,0x1f,*(long *)(param_1 + 8) + uVar4,2,1);
      if ((ulong)(lStack_98 - lStack_a0 >> 2) <= uVar4) goto LAB_10a52635c;
      *(int *)(lStack_a0 + uVar4 * 4) = (int)plVar2;
      uVar4 = uVar4 + 1;
    } while (lVar3 >> 2 != uVar4);
  }
  pcStack_88 = FUN_10a5263b4;
  appuStack_80[0] = &PTR_DAT_110bedfa0;
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



/* Entry: 10a5263a0; end: 10a5263b3;  */

void FUN_10a5263a0(void)

{
  FUN_109ffde64(&DAT_10f62a4d8);
  return;
}



/* Entry: 10a5263b4; end: 10a526403;  */

void FUN_10a5263b4(void)

{
  return;
}



/* Entry: 10a526404; end: 10a526467;  */

void FUN_10a526404(undefined8 *param_1,long param_2,long param_3,int param_4)

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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a526468);
  (*pcVar2)();
}



/* Entry: 10a526468; end: 10a526497;  */

void FUN_10a526468(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_DAT_110bedfe8;
  param_1[1] = &UNK_110bedfb8;
  *(undefined2 *)((long)param_1 + 0x1c) = 0;
  return;
}



/* Entry: 10a526498; end: 10a5264db;  */

void FUN_10a526498(long param_1,undefined8 param_2,long param_3)

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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5264dc);
  (*pcVar1)();
}



/* Entry: 10a5264dc; end: 10a5264f7;  */

void FUN_10a5264dc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = FUN_10a5264f8;
  param_1[1] = &PTR_FUN_110bee068;
  param_1[2] = param_2;
  return;
}



/* Entry: 10a5264f8; end: 10a5265af;  */

void FUN_10a5264f8(long param_1,long *param_2,undefined4 param_3,undefined4 *param_4,long param_5,
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
    puVar1 = (undefined8 *)0x1137eb248;
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a5265b0);
  (*pcVar2)();
}



/* Entry: 10a5265b0; end: 10a5265df;  */

void FUN_10a5265b0(void)

{
  return;
}



/* Entry: 10a5265e0; end: 10a52672b;  */

void FUN_10a5265e0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  uStack_40 = param_1;
  uStack_38 = param_2;
  func_0x00010a526684(&uStack_40,param_3);
  puVar5 = (undefined8 *)**(long **)(param_6 + 0x10);
  plStack_28 = (long *)puVar5[1];
  uStack_30 = *puVar5;
  if (puVar5[1] != 0) {
    plVar1 = (long *)(puVar5[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  func_0x00010a099dfc();
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a52672c; end: 10a526747;  */

void FUN_10a52672c(void)

{
  return;
}



/* Entry: 10a526748; end: 10a5267a7;  */

void FUN_10a526748(long param_1)

{
  FUN_10a509d1c(param_1 + 0x498);
  func_0x00010a042d30(param_1 + 0x478);
  func_0x00010a09db0c(param_1 + 0x3f8);
  func_0x000109d18f34(param_1 + 0x328);
  FUN_109d201a8(param_1 + 0x90);
  func_0x00010a06e274(param_1 + 0x80);
  func_0x0001098b9fe8(param_1 + 0x20);
  func_0x00010a509cc4(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a5267a8; end: 10a5267cb;  */

void FUN_10a5267a8(long param_1)

{
  param_1 = param_1 + 0x90;
  FUN_109d202f4();
  if (param_1 == 0) {
    _sched_yield();
  }
  return;
}



/* Entry: 10a5267cc; end: 10a5267d3;  */

void FUN_10a5267cc(void)

{
  return;
}



/* Entry: 10a5267d4; end: 10a52690f;  */

void FUN_10a5267d4(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_c0;
  undefined8 *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = (code *)CONCAT71(uStack_78._1_7_,*(undefined1 *)(param_1 + 0x10));
  lVar8 = 1;
  plVar2 = param_2;
  func_0x0001098ac018(param_2,&UNK_10e4c8f08,0x24,&uStack_78,0);
  lVar9 = *param_2;
  lStack_90 = 0;
  lStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = (code *)CONCAT44(uStack_78._4_4_,(int)plVar2);
  puVar6 = (undefined4 *)((long)&uStack_78 + 4);
  lVar7 = 1;
  FUN_10a26ebc0(&lStack_90,0,&uStack_78);
  uStack_68 = *(undefined8 *)(param_1 + 8);
  uStack_78 = FUN_10a526910;
  ppuStack_70 = &PTR_FUN_110bee0f8;
  puVar5 = &uStack_78;
  func_0x0001098bb6d0(lVar9 + 0x18,puVar5,&lStack_90);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  lVar3 = lStack_90;
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  lVar4 = lVar3;
  __Unwind_Resume();
  if (lVar7 != 0) {
    plVar2 = &lStack_c0;
    pcStack_98 = FUN_10a526910;
    lStack_c0 = lVar4;
    puStack_b8 = puVar5;
    lStack_b0 = lVar9;
    lStack_a8 = lVar3;
    puStack_a0 = &stack0xfffffffffffffff0;
    FUN_10a4efbc8(&lStack_c0,*puVar6);
    *(long **)(*(long *)(lVar8 + 0x10) + 0x80) = plVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a526958);
  (*pcVar1)();
}



/* Entry: 10a526910; end: 10a526957;  */

void FUN_10a526910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  long param_5,long param_6)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_5 != 0) {
    puVar2 = &uStack_30;
    uStack_30 = param_1;
    uStack_28 = param_2;
    FUN_10a4efbc8(&uStack_30,*param_4);
    *(undefined8 **)(*(long *)(param_6 + 0x10) + 0x80) = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a526958);
  (*pcVar1)();
}



/* Entry: 10a526958; end: 10a526973;  */

void FUN_10a526958(void)

{
  return;
}



/* Entry: 10a526974; end: 10a5269d3;  */

void FUN_10a526974(int *param_1,long param_2)

{
  int iStack_24;
  
  if (*param_1 != 0) {
    iStack_24 = *param_1;
    func_0x0001098b0050(param_2 + 0x18,&iStack_24);
    *param_1 = 0;
  }
  if ((char)param_1[0x10] == '\x01') {
    if (*(long *)(param_1 + 2) != 0) {
      *(long *)(param_1 + 4) = *(long *)(param_1 + 2);
      __ZdlPv();
    }
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}



/* Entry: 10a5269d4; end: 10a526aa3;  */

void FUN_10a5269d4(undefined8 *param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined5 uStack_50;
  undefined3 uStack_4b;
  undefined5 uStack_48;
  undefined8 uStack_43;
  
  if ((*(byte *)(param_2 + 0x40) & 1) != 0) {
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    FUN_10a051a50(&uStack_70,*(long *)(param_2 + 8),*(long *)(param_2 + 0x10),
                  (*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8) >> 2) * -0x5555555555555555);
    uStack_58 = *(undefined8 *)(param_2 + 0x20);
    uStack_50 = (undefined5)*(undefined8 *)(param_2 + 0x28);
    uStack_43 = *(undefined8 *)(param_2 + 0x35);
    uStack_4b = (undefined3)*(undefined8 *)(param_2 + 0x2d);
    uStack_48 = (undefined5)((ulong)*(undefined8 *)(param_2 + 0x2d) >> 0x18);
    puVar2 = (undefined8 *)0x48;
    __Znwm();
    *puVar2 = &PTR_FUN_110bee120;
    puVar2[1] = param_3;
    puVar2[3] = uStack_68;
    puVar2[2] = uStack_70;
    puVar2[4] = uStack_60;
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    puVar2[6] = *(undefined8 *)(param_2 + 0x28);
    puVar2[5] = uVar3;
    uVar3 = *(undefined8 *)(param_2 + 0x2d);
    *(undefined8 *)((long)puVar2 + 0x3d) = *(undefined8 *)(param_2 + 0x35);
    *(undefined8 *)((long)puVar2 + 0x35) = uVar3;
    *param_1 = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a526a88);
  (*pcVar1)();
}



/* Entry: 10a526aa4; end: 10a526b1b;  */

undefined8 * FUN_10a526aa4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bee120;
  if (param_1[2] != 0) {
    param_1[3] = param_1[2];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a526b1c; end: 10a526c93;  */

void FUN_10a526b1c(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined5 uStack_b0;
  undefined3 uStack_ab;
  undefined5 uStack_a8;
  undefined8 uStack_a3;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_c8 = *(long *)(param_1 + 0x18);
  lStack_d0 = *(long *)(param_1 + 0x10);
  uStack_c0 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  uStack_b8 = *(undefined8 *)(param_1 + 0x28);
  uStack_b0 = (undefined5)*(undefined8 *)(param_1 + 0x30);
  uStack_a3 = *(undefined8 *)(param_1 + 0x3d);
  uStack_ab = (undefined3)*(undefined8 *)(param_1 + 0x35);
  uStack_a8 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x35) >> 0x18);
  lVar7 = 1;
  plVar2 = param_2;
  func_0x0001098ac018(param_2,&UNK_10e4c90da,0x22,&lStack_d0,0);
  lVar8 = *param_2;
  lStack_90 = 0;
  lStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = (code *)CONCAT44(uStack_78._4_4_,(int)plVar2);
  puVar5 = (undefined4 *)((long)&uStack_78 + 4);
  lVar6 = 1;
  FUN_10a26ebc0(&lStack_90,0,&uStack_78);
  uStack_68 = *(undefined8 *)(param_1 + 8);
  uStack_78 = FUN_10a526c94;
  ppuStack_70 = &PTR_FUN_110bee150;
  puVar4 = &uStack_78;
  func_0x0001098bb6d0(lVar8 + 0x18,puVar4,&lStack_90);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  lVar8 = lStack_d0;
  if (lStack_d0 != 0) {
    lStack_c8 = lStack_d0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  if (lStack_d0 != 0) {
    lStack_c8 = lStack_d0;
    __ZdlPv();
  }
  lVar3 = lVar8;
  __Unwind_Resume();
  if (lVar6 != 0) {
    plVar2 = &lStack_100;
    pcStack_d8 = FUN_10a526c94;
    lStack_100 = lVar3;
    puStack_f8 = puVar4;
    puStack_f0 = &uStack_78;
    lStack_e8 = lVar8;
    puStack_e0 = &stack0xfffffffffffffff0;
    func_0x00010a4efc70(&lStack_100,*puVar5);
    *(long **)(*(long *)(lVar7 + 0x10) + 0x88) = plVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a526cdc);
  (*pcVar1)();
}



/* Entry: 10a526c94; end: 10a526cdb;  */

void FUN_10a526c94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  long param_5,long param_6)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_5 != 0) {
    puVar2 = &uStack_30;
    uStack_30 = param_1;
    uStack_28 = param_2;
    func_0x00010a4efc70(&uStack_30,*param_4);
    *(undefined8 **)(*(long *)(param_6 + 0x10) + 0x88) = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a526cdc);
  (*pcVar1)();
}



/* Entry: 10a526cdc; end: 10a526cf7;  */

void FUN_10a526cdc(void)

{
  return;
}



/* Entry: 10a526cf8; end: 10a526d4f;  */

void FUN_10a526cf8(int *param_1,long param_2)

{
  int iStack_24;
  
  if (*param_1 != 0) {
    iStack_24 = *param_1;
    func_0x0001098b0050(param_2 + 0x18,&iStack_24);
    *param_1 = 0;
  }
  if ((char)param_1[0xc] == '\x01') {
    func_0x00010a22c9fc(param_1 + 2);
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  return;
}



/* Entry: 10a526d50; end: 10a526dd7;  */

void FUN_10a526d50(undefined8 *param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  
  if ((*(byte *)(param_2 + 0x30) & 1) != 0) {
    FUN_10a22bd48(auStack_58,param_2 + 8);
    puVar2 = (undefined8 *)0x38;
    __Znwm();
    *puVar2 = &PTR_FUN_110bee178;
    puVar2[1] = param_3;
    FUN_10a23080c(puVar2 + 2,auStack_58);
    *param_1 = puVar2;
    func_0x00010a22c9fc(auStack_58);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a526dc4);
  (*pcVar1)();
}



/* Entry: 10a526dd8; end: 10a527207;  */

long * FUN_10a526dd8(long *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  uint uVar19;
  long *plVar20;
  byte bVar21;
  
  plVar7 = param_2 + 2;
  plVar12 = param_1;
  FUN_10aad09b8();
  param_2[1] = (long)plVar12;
  plVar17 = (long *)param_1[1];
  plVar5 = plVar12;
  if ((plVar17 == (long *)0x0) ||
     (*(float *)(param_1 + 4) * (float)plVar17 < (float)(param_1[3] + 1))) {
    uVar18 = 1;
    if ((long *)0x2 < plVar17) {
      uVar18 = (ulong)(((ulong)plVar17 & (long)plVar17 - 1U) != 0);
    }
    plVar6 = (long *)(uVar18 | (long)plVar17 << 1);
    plVar9 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (plVar6 <= plVar9) {
      plVar6 = plVar9;
    }
    if ((long)plVar6 - 1U == 0) {
      plVar6 = (long *)0x2;
    }
    else if (((ulong)plVar6 & (long)plVar6 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
      plVar17 = (long *)param_1[1];
      plVar5 = plVar6;
    }
    if (plVar17 < plVar6) {
LAB_10a526e94:
      if ((ulong)plVar6 >> 0x3d != 0) {
        func_0x000109ffded8();
        plVar12 = (long *)plVar5[1];
        if ((plVar12 != (long *)0x0) &&
           ((float)(plVar5[3] + 1) <= *(float *)(plVar5 + 4) * (float)plVar12)) goto LAB_10a527410;
        uVar18 = 1;
        if ((long *)0x2 < plVar12) {
          uVar18 = (ulong)(((ulong)plVar12 & (long)plVar12 - 1U) != 0);
        }
        plVar17 = (long *)(uVar18 | (long)plVar12 << 1);
        plVar6 = (long *)(long)((float)(plVar5[3] + 1) / *(float *)(plVar5 + 4));
        if (plVar17 <= plVar6) {
          plVar17 = plVar6;
        }
        plVar6 = plVar5;
        plVar9 = plVar7;
        plVar20 = param_3;
        if ((long)plVar17 - 1U == 0) {
          plVar17 = (long *)0x2;
        }
        else if (((ulong)plVar17 & (long)plVar17 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
          plVar12 = (long *)plVar5[1];
          plVar6 = plVar17;
        }
        if (plVar12 > plVar17 || plVar17 == plVar12) {
          if (plVar12 <= plVar17) goto LAB_10a527410;
          plVar6 = (long *)(long)((float)(ulong)plVar5[3] / *(float *)(plVar5 + 4));
          if ((plVar12 < (long *)0x3) || (((ulong)plVar12 & (long)plVar12 - 1U) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if ((long *)0x1 < plVar6) {
            plVar6 = (long *)(1L << (-LZCOUNT((long)plVar6 + -1) & 0x3fU));
          }
          if (plVar17 <= plVar6) {
            plVar17 = plVar6;
          }
          if (plVar12 <= plVar17) {
            plVar12 = (long *)plVar5[1];
            goto LAB_10a527410;
          }
          if (plVar17 == (long *)0x0) {
            lVar4 = *plVar5;
            *plVar5 = 0;
            if (lVar4 != 0) {
              __ZdlPv();
            }
            plVar5[1] = 0;
            plVar12 = (long *)0x0;
            goto LAB_10a527410;
          }
        }
        if ((ulong)plVar17 >> 0x3d == 0) {
          lVar4 = (long)plVar17 << 3;
          __Znwm();
          lVar11 = *plVar5;
          *plVar5 = lVar4;
          if (lVar11 != 0) {
            __ZdlPv();
          }
          plVar12 = (long *)0x0;
          plVar5[1] = (long)plVar17;
          do {
            *(undefined8 *)(*plVar5 + (long)plVar12 * 8) = 0;
            plVar12 = (long *)((long)plVar12 + 1);
          } while (plVar17 != plVar12);
          plVar6 = (long *)plVar5[2];
          plVar12 = plVar17;
          if (plVar6 != (long *)0x0) {
            plVar9 = (long *)plVar6[1];
            uVar18 = (long)plVar17 - 1;
            if (((ulong)plVar17 & uVar18) == 0) {
              plVar9 = (long *)((ulong)plVar9 & uVar18);
            }
            else if (plVar17 <= plVar9) {
              uVar10 = 0;
              if (plVar17 != (long *)0x0) {
                uVar10 = (ulong)plVar9 / (ulong)plVar17;
              }
              plVar9 = (long *)((long)plVar9 - uVar10 * (long)plVar17);
            }
            *(long **)(*plVar5 + (long)plVar9 * 8) = plVar5 + 2;
            while (plVar20 = plVar6, plVar6 = (long *)*plVar20, plVar6 != (long *)0x0) {
              plVar15 = (long *)plVar6[1];
              if (((ulong)plVar17 & uVar18) == 0) {
                plVar15 = (long *)((ulong)plVar15 & uVar18);
              }
              else if (plVar17 <= plVar15) {
                uVar10 = 0;
                if (plVar17 != (long *)0x0) {
                  uVar10 = (ulong)plVar15 / (ulong)plVar17;
                }
                plVar15 = (long *)((long)plVar15 - uVar10 * (long)plVar17);
              }
              if (plVar15 != plVar9) {
                lVar4 = *plVar5;
                plVar8 = plVar6;
                if (*(long *)(lVar4 + (long)plVar15 * 8) == 0) {
                  *(long **)(lVar4 + (long)plVar15 * 8) = plVar20;
                  plVar9 = plVar15;
                }
                else {
                  do {
                    plVar16 = plVar8;
                    plVar8 = (long *)*plVar16;
                    if (plVar8 == (long *)0x0) break;
                  } while (*(int *)(plVar6 + 2) == *(int *)(plVar8 + 2));
                  *plVar20 = (long)plVar8;
                  *plVar16 = **(long **)(lVar4 + (long)plVar15 * 8);
                  **(long **)(lVar4 + (long)plVar15 * 8) = (long)plVar6;
                  plVar6 = plVar20;
                }
              }
            }
          }
LAB_10a527410:
          uVar18 = (long)plVar12 - 1;
          if (((ulong)plVar12 & uVar18) == 0) {
            plVar17 = (long *)(uVar18 & (ulong)plVar7);
          }
          else {
            plVar17 = plVar7;
            if (plVar12 <= plVar7) {
              uVar10 = 0;
              if (plVar12 != (long *)0x0) {
                uVar10 = (ulong)plVar7 / (ulong)plVar12;
              }
              plVar17 = (long *)((long)plVar7 - uVar10 * (long)plVar12);
            }
          }
          plVar5 = *(long **)(*plVar5 + (long)plVar17 * 8);
          if (plVar5 == (long *)0x0) {
            plVar6 = (long *)0x0;
          }
          else {
            bVar1 = false;
            bVar21 = 0;
            do {
              plVar6 = plVar5;
              plVar5 = (long *)*plVar6;
              if (plVar5 == (long *)0x0) {
                return plVar6;
              }
              plVar9 = (long *)plVar5[1];
              if (((ulong)plVar12 & uVar18) == 0) {
                plVar20 = (long *)((ulong)plVar9 & uVar18);
              }
              else {
                plVar20 = plVar9;
                if (plVar12 <= plVar9) {
                  uVar10 = 0;
                  if (plVar12 != (long *)0x0) {
                    uVar10 = (ulong)plVar9 / (ulong)plVar12;
                  }
                  plVar20 = (long *)((long)plVar9 - uVar10 * (long)plVar12);
                }
              }
              if (plVar20 != plVar17) {
                return plVar6;
              }
              if (plVar9 == plVar7) {
                bVar2 = *(int *)(plVar5 + 2) == (int)*param_3;
              }
              else {
                bVar2 = false;
              }
              bVar3 = bVar2 != bVar1;
              bVar2 = (bool)(bVar21 & bVar3);
              bVar1 = (bool)(bVar1 | bVar3);
              bVar21 = bVar21 | bVar3;
            } while (!bVar2);
          }
          return plVar6;
        }
        func_0x000109ffded8();
        uVar18 = plVar6[1];
        uVar10 = plVar9[1];
        uVar13 = uVar18 - 1;
        if ((uVar18 & uVar13) == 0) {
          uVar10 = uVar13 & uVar10;
          if (plVar20 != (long *)0x0) goto LAB_10a527544;
LAB_10a527580:
          plVar7 = plVar6 + 2;
          *plVar9 = *plVar7;
          *plVar7 = (long)plVar9;
          *(long **)(*plVar6 + uVar10 * 8) = plVar7;
          if (*plVar9 == 0) goto LAB_10a5275dc;
          uVar14 = *(ulong *)(*plVar9 + 8);
          if ((uVar18 & uVar13) == 0) {
            uVar14 = uVar14 & uVar13;
          }
          else if (uVar18 <= uVar14) {
            uVar10 = 0;
            if (uVar18 != 0) {
              uVar10 = uVar14 / uVar18;
            }
            uVar14 = uVar14 - uVar10 * uVar18;
          }
        }
        else {
          if (uVar18 <= uVar10) {
            uVar14 = 0;
            if (uVar18 != 0) {
              uVar14 = uVar10 / uVar18;
            }
            uVar10 = uVar10 - uVar14 * uVar18;
          }
          if (plVar20 == (long *)0x0) goto LAB_10a527580;
LAB_10a527544:
          *plVar9 = *plVar20;
          *plVar20 = (long)plVar9;
          if (*plVar9 == 0) goto LAB_10a5275dc;
          uVar14 = *(ulong *)(*plVar9 + 8);
          if ((uVar18 & uVar13) == 0) {
            uVar14 = uVar14 & uVar13;
          }
          else if (uVar18 <= uVar14) {
            uVar13 = 0;
            if (uVar18 != 0) {
              uVar13 = uVar14 / uVar18;
            }
            uVar14 = uVar14 - uVar13 * uVar18;
          }
          if (uVar14 == uVar10) goto LAB_10a5275dc;
        }
        *(long **)(*plVar6 + uVar14 * 8) = plVar9;
LAB_10a5275dc:
        plVar6[3] = plVar6[3] + 1;
        return plVar6;
      }
      lVar4 = (long)plVar6 << 3;
      __Znwm();
      plVar5 = (long *)*param_1;
      *param_1 = lVar4;
      if (plVar5 != (long *)0x0) {
        __ZdlPv();
      }
      plVar7 = (long *)0x0;
      param_1[1] = (long)plVar6;
      do {
        *(undefined8 *)(*param_1 + (long)plVar7 * 8) = 0;
        plVar7 = (long *)((long)plVar7 + 1);
      } while (plVar6 != plVar7);
      plVar7 = (long *)param_1[2];
      if (plVar7 != (long *)0x0) {
        plVar17 = (long *)plVar7[1];
        uVar18 = (long)plVar6 - 1;
        if (((ulong)plVar6 & uVar18) == 0) {
          plVar17 = (long *)((ulong)plVar17 & uVar18);
        }
        else if (plVar6 <= plVar17) {
          uVar10 = 0;
          if (plVar6 != (long *)0x0) {
            uVar10 = (ulong)plVar17 / (ulong)plVar6;
          }
          plVar17 = (long *)((long)plVar17 - uVar10 * (long)plVar6);
        }
        *(long **)(*param_1 + (long)plVar17 * 8) = param_1 + 2;
        while (plVar9 = plVar7, plVar7 = (long *)*plVar9, plVar7 != (long *)0x0) {
          plVar20 = (long *)plVar7[1];
          if (((ulong)plVar6 & uVar18) == 0) {
            plVar20 = (long *)((ulong)plVar20 & uVar18);
          }
          else if (plVar6 <= plVar20) {
            uVar10 = 0;
            if (plVar6 != (long *)0x0) {
              uVar10 = (ulong)plVar20 / (ulong)plVar6;
            }
            plVar20 = (long *)((long)plVar20 - uVar10 * (long)plVar6);
          }
          if (plVar20 != plVar17) {
            lVar4 = *param_1;
            if (*(long *)(lVar4 + (long)plVar20 * 8) == 0) {
              *(long **)(lVar4 + (long)plVar20 * 8) = plVar9;
              plVar17 = plVar20;
            }
            else {
              lVar11 = *plVar7;
              plVar15 = plVar7;
              if (lVar11 == 0) {
                plVar8 = (long *)0x0;
              }
              else {
                do {
                  plVar5 = plVar7 + 2;
                  FUN_10a22c6f0(plVar5,lVar11 + 0x10);
                  plVar8 = (long *)*plVar15;
                  if ((int)plVar5 == 0) goto LAB_10a526ff4;
                  lVar11 = *plVar8;
                  plVar15 = plVar8;
                } while (lVar11 != 0);
                plVar8 = (long *)0x0;
LAB_10a526ff4:
                lVar4 = *param_1;
              }
              *plVar9 = (long)plVar8;
              *plVar15 = **(long **)(lVar4 + (long)plVar20 * 8);
              **(undefined8 **)(lVar4 + (long)plVar20 * 8) = plVar7;
              plVar7 = plVar9;
            }
          }
        }
      }
    }
    else if (plVar6 < plVar17) {
      plVar5 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((plVar17 < (long *)0x3) || (((ulong)plVar17 & (long)plVar17 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar5) {
        plVar5 = (long *)(1L << (-LZCOUNT((long)plVar5 + -1) & 0x3fU));
      }
      if (plVar6 <= plVar5) {
        plVar6 = plVar5;
      }
      if (plVar6 < plVar17) {
        if (plVar6 != (long *)0x0) goto LAB_10a526e94;
        plVar5 = (long *)*param_1;
        *param_1 = 0;
        if (plVar5 != (long *)0x0) {
          __ZdlPv();
        }
        param_1[1] = 0;
      }
    }
    plVar17 = (long *)param_1[1];
  }
  bVar21 = POPCOUNT((char)plVar17) + POPCOUNT((char)((ulong)plVar17 >> 8)) +
           POPCOUNT((char)((ulong)plVar17 >> 0x10)) + POPCOUNT((char)((ulong)plVar17 >> 0x18)) +
           POPCOUNT((char)((ulong)plVar17 >> 0x20)) + POPCOUNT((char)((ulong)plVar17 >> 0x28)) +
           POPCOUNT((char)((ulong)plVar17 >> 0x30)) + POPCOUNT((char)((ulong)plVar17 >> 0x38));
  uVar18 = (long)plVar17 - 1;
  if (((ulong)plVar17 & uVar18) == 0) {
    plVar7 = (long *)(uVar18 & (ulong)plVar12);
  }
  else {
    plVar7 = plVar12;
    if (plVar17 <= plVar12) {
      uVar10 = 0;
      if (plVar17 != (long *)0x0) {
        uVar10 = (ulong)plVar12 / (ulong)plVar17;
      }
      plVar7 = (long *)((long)plVar12 - uVar10 * (long)plVar17);
    }
  }
  plVar6 = *(long **)(*param_1 + (long)plVar7 * 8);
  if ((plVar6 != (long *)0x0) && (lVar4 = *plVar6, lVar4 != 0)) {
    uVar19 = 0;
    bVar21 = 0;
    do {
      plVar9 = *(long **)(lVar4 + 8);
      if (((ulong)plVar17 & uVar18) == 0) {
        plVar20 = (long *)((ulong)plVar9 & uVar18);
      }
      else {
        plVar20 = plVar9;
        if (plVar17 <= plVar9) {
          uVar10 = 0;
          if (plVar17 != (long *)0x0) {
            uVar10 = (ulong)plVar9 / (ulong)plVar17;
          }
          plVar20 = (long *)((long)plVar9 - uVar10 * (long)plVar17);
        }
      }
      if (plVar20 != plVar7) break;
      if (plVar9 == plVar12) {
        plVar5 = (long *)(lVar4 + 0x10);
        FUN_10a22c6f0(plVar5,param_2 + 2);
      }
      else {
        plVar5 = (long *)0x0;
      }
      bVar1 = (uint)plVar5 != uVar19;
      if ((bool)(bVar21 & bVar1)) break;
      uVar19 = uVar19 | bVar1;
      bVar21 = bVar21 | bVar1;
      plVar6 = (long *)*plVar6;
      lVar4 = *plVar6;
    } while (lVar4 != 0);
    plVar17 = (long *)param_1[1];
    bVar21 = POPCOUNT((char)plVar17) + POPCOUNT((char)((ulong)plVar17 >> 8)) +
             POPCOUNT((char)((ulong)plVar17 >> 0x10)) + POPCOUNT((char)((ulong)plVar17 >> 0x18)) +
             POPCOUNT((char)((ulong)plVar17 >> 0x20)) + POPCOUNT((char)((ulong)plVar17 >> 0x28)) +
             POPCOUNT((char)((ulong)plVar17 >> 0x30)) + POPCOUNT((char)((ulong)plVar17 >> 0x38));
  }
  plVar7 = (long *)param_2[1];
  if (bVar21 < 2) {
    plVar7 = (long *)((long)plVar17 - 1U & (ulong)plVar7);
  }
  else if (plVar17 <= plVar7) {
    uVar18 = 0;
    if (plVar17 != (long *)0x0) {
      uVar18 = (ulong)plVar7 / (ulong)plVar17;
    }
    plVar7 = (long *)((long)plVar7 - uVar18 * (long)plVar17);
  }
  if (plVar6 == (long *)0x0) {
    plVar12 = param_1 + 2;
    *param_2 = *plVar12;
    *plVar12 = (long)param_2;
    *(long **)(*param_1 + (long)plVar7 * 8) = plVar12;
    if (*param_2 == 0) goto LAB_10a5271dc;
    plVar12 = *(long **)(*param_2 + 8);
    if (bVar21 < 2) {
      plVar12 = (long *)((ulong)plVar12 & (long)plVar17 - 1U);
    }
    else if (plVar17 <= plVar12) {
      uVar18 = 0;
      if (plVar17 != (long *)0x0) {
        uVar18 = (ulong)plVar12 / (ulong)plVar17;
      }
      plVar12 = (long *)((long)plVar12 - uVar18 * (long)plVar17);
    }
  }
  else {
    *param_2 = *plVar6;
    *plVar6 = (long)param_2;
    if (*param_2 == 0) goto LAB_10a5271dc;
    plVar12 = *(long **)(*param_2 + 8);
    if (bVar21 < 2) {
      plVar12 = (long *)((ulong)plVar12 & (long)plVar17 - 1U);
    }
    else if (plVar17 <= plVar12) {
      uVar18 = 0;
      if (plVar17 != (long *)0x0) {
        uVar18 = (ulong)plVar12 / (ulong)plVar17;
      }
      plVar12 = (long *)((long)plVar12 - uVar18 * (long)plVar17);
    }
    if (plVar12 == plVar7) goto LAB_10a5271dc;
  }
  *(long **)(*param_1 + (long)plVar12 * 8) = param_2;
LAB_10a5271dc:
  param_1[3] = param_1[3] + 1;
  return plVar5;
}



/* Entry: 10a527208; end: 10a52751b;  */

long * FUN_10a527208(long *param_1,long *param_2,long *param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  bool bVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  
  plVar18 = (long *)param_1[1];
  if ((plVar18 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar18)) goto LAB_10a527410;
  uVar8 = 1;
  if ((long *)0x2 < plVar18) {
    uVar8 = (ulong)(((ulong)plVar18 & (long)plVar18 - 1U) != 0);
  }
  plVar6 = (long *)(uVar8 | (long)plVar18 << 1);
  plVar7 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar6 <= plVar7) {
    plVar6 = plVar7;
  }
  plVar7 = param_1;
  plVar10 = param_2;
  plVar15 = param_3;
  if ((long)plVar6 - 1U == 0) {
    plVar6 = (long *)0x2;
  }
  else if (((ulong)plVar6 & (long)plVar6 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar18 = (long *)param_1[1];
    plVar7 = plVar6;
  }
  if (plVar18 > plVar6 || plVar6 == plVar18) {
    if (plVar18 <= plVar6) goto LAB_10a527410;
    plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar18 < (long *)0x3) || (((ulong)plVar18 & (long)plVar18 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar7) {
      plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 + -1) & 0x3fU));
    }
    if (plVar6 <= plVar7) {
      plVar6 = plVar7;
    }
    if (plVar18 <= plVar6) {
      plVar18 = (long *)param_1[1];
      goto LAB_10a527410;
    }
    if (plVar6 == (long *)0x0) {
      lVar4 = *param_1;
      *param_1 = 0;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      plVar18 = (long *)0x0;
      goto LAB_10a527410;
    }
  }
  if ((ulong)plVar6 >> 0x3d == 0) {
    lVar4 = (long)plVar6 << 3;
    __Znwm();
    lVar5 = *param_1;
    *param_1 = lVar4;
    if (lVar5 != 0) {
      __ZdlPv();
    }
    plVar18 = (long *)0x0;
    param_1[1] = (long)plVar6;
    do {
      *(undefined8 *)(*param_1 + (long)plVar18 * 8) = 0;
      plVar18 = (long *)((long)plVar18 + 1);
    } while (plVar6 != plVar18);
    plVar7 = (long *)param_1[2];
    plVar18 = plVar6;
    if (plVar7 != (long *)0x0) {
      plVar10 = (long *)plVar7[1];
      uVar8 = (long)plVar6 - 1;
      if (((ulong)plVar6 & uVar8) == 0) {
        plVar10 = (long *)((ulong)plVar10 & uVar8);
      }
      else if (plVar6 <= plVar10) {
        uVar9 = 0;
        if (plVar6 != (long *)0x0) {
          uVar9 = (ulong)plVar10 / (ulong)plVar6;
        }
        plVar10 = (long *)((long)plVar10 - uVar9 * (long)plVar6);
      }
      *(long **)(*param_1 + (long)plVar10 * 8) = param_1 + 2;
      while (plVar15 = plVar7, plVar7 = (long *)*plVar15, plVar7 != (long *)0x0) {
        plVar14 = (long *)plVar7[1];
        if (((ulong)plVar6 & uVar8) == 0) {
          plVar14 = (long *)((ulong)plVar14 & uVar8);
        }
        else if (plVar6 <= plVar14) {
          uVar9 = 0;
          if (plVar6 != (long *)0x0) {
            uVar9 = (ulong)plVar14 / (ulong)plVar6;
          }
          plVar14 = (long *)((long)plVar14 - uVar9 * (long)plVar6);
        }
        if (plVar14 != plVar10) {
          lVar4 = *param_1;
          plVar17 = plVar7;
          if (*(long *)(lVar4 + (long)plVar14 * 8) == 0) {
            *(long **)(lVar4 + (long)plVar14 * 8) = plVar15;
            plVar10 = plVar14;
          }
          else {
            do {
              plVar16 = plVar17;
              plVar17 = (long *)*plVar16;
              if (plVar17 == (long *)0x0) break;
            } while (*(int *)(plVar7 + 2) == *(int *)(plVar17 + 2));
            *plVar15 = (long)plVar17;
            *plVar16 = **(long **)(lVar4 + (long)plVar14 * 8);
            **(long **)(lVar4 + (long)plVar14 * 8) = (long)plVar7;
            plVar7 = plVar15;
          }
        }
      }
    }
LAB_10a527410:
    uVar8 = (long)plVar18 - 1;
    if (((ulong)plVar18 & uVar8) == 0) {
      plVar6 = (long *)(uVar8 & (ulong)param_2);
    }
    else {
      plVar6 = param_2;
      if (plVar18 <= param_2) {
        uVar9 = 0;
        if (plVar18 != (long *)0x0) {
          uVar9 = (ulong)param_2 / (ulong)plVar18;
        }
        plVar6 = (long *)((long)param_2 - uVar9 * (long)plVar18);
      }
    }
    plVar7 = *(long **)(*param_1 + (long)plVar6 * 8);
    if (plVar7 == (long *)0x0) {
      plVar10 = (long *)0x0;
    }
    else {
      bVar12 = false;
      bVar1 = 0;
      do {
        plVar10 = plVar7;
        plVar7 = (long *)*plVar10;
        if (plVar7 == (long *)0x0) {
          return plVar10;
        }
        plVar15 = (long *)plVar7[1];
        if (((ulong)plVar18 & uVar8) == 0) {
          plVar14 = (long *)((ulong)plVar15 & uVar8);
        }
        else {
          plVar14 = plVar15;
          if (plVar18 <= plVar15) {
            uVar9 = 0;
            if (plVar18 != (long *)0x0) {
              uVar9 = (ulong)plVar15 / (ulong)plVar18;
            }
            plVar14 = (long *)((long)plVar15 - uVar9 * (long)plVar18);
          }
        }
        if (plVar14 != plVar6) {
          return plVar10;
        }
        if (plVar15 == param_2) {
          bVar2 = *(int *)(plVar7 + 2) == (int)*param_3;
        }
        else {
          bVar2 = false;
        }
        bVar3 = bVar2 != bVar12;
        bVar2 = (bool)(bVar1 & bVar3);
        bVar12 = (bool)(bVar12 | bVar3);
        bVar1 = bVar1 | bVar3;
      } while (!bVar2);
    }
    return plVar10;
  }
  func_0x000109ffded8();
  uVar8 = plVar7[1];
  uVar9 = plVar10[1];
  uVar11 = uVar8 - 1;
  if ((uVar8 & uVar11) == 0) {
    uVar9 = uVar11 & uVar9;
    if (plVar15 != (long *)0x0) goto LAB_10a527544;
LAB_10a527580:
    plVar18 = plVar7 + 2;
    *plVar10 = *plVar18;
    *plVar18 = (long)plVar10;
    *(long **)(*plVar7 + uVar9 * 8) = plVar18;
    if (*plVar10 == 0) goto LAB_10a5275dc;
    uVar13 = *(ulong *)(*plVar10 + 8);
    if ((uVar8 & uVar11) == 0) {
      uVar13 = uVar13 & uVar11;
    }
    else if (uVar8 <= uVar13) {
      uVar9 = 0;
      if (uVar8 != 0) {
        uVar9 = uVar13 / uVar8;
      }
      uVar13 = uVar13 - uVar9 * uVar8;
    }
  }
  else {
    if (uVar8 <= uVar9) {
      uVar13 = 0;
      if (uVar8 != 0) {
        uVar13 = uVar9 / uVar8;
      }
      uVar9 = uVar9 - uVar13 * uVar8;
    }
    if (plVar15 == (long *)0x0) goto LAB_10a527580;
LAB_10a527544:
    *plVar10 = *plVar15;
    *plVar15 = (long)plVar10;
    if (*plVar10 == 0) goto LAB_10a5275dc;
    uVar13 = *(ulong *)(*plVar10 + 8);
    if ((uVar8 & uVar11) == 0) {
      uVar13 = uVar13 & uVar11;
    }
    else if (uVar8 <= uVar13) {
      uVar11 = 0;
      if (uVar8 != 0) {
        uVar11 = uVar13 / uVar8;
      }
      uVar13 = uVar13 - uVar11 * uVar8;
    }
    if (uVar13 == uVar9) goto LAB_10a5275dc;
  }
  *(long **)(*plVar7 + uVar13 * 8) = plVar10;
LAB_10a5275dc:
  plVar7[3] = plVar7[3] + 1;
  return plVar7;
}



/* Entry: 10a52751c; end: 10a5275eb;  */

void FUN_10a52751c(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  
  uVar1 = param_1[1];
  uVar2 = param_2[1];
  uVar3 = uVar1 - 1;
  if ((uVar1 & uVar3) == 0) {
    uVar2 = uVar3 & uVar2;
    if (param_3 != (long *)0x0) goto LAB_10a527544;
LAB_10a527580:
    plVar5 = param_1 + 2;
    *param_2 = *plVar5;
    *plVar5 = (long)param_2;
    *(long **)(*param_1 + uVar2 * 8) = plVar5;
    if (*param_2 == 0) goto LAB_10a5275dc;
    uVar4 = *(ulong *)(*param_2 + 8);
    if ((uVar1 & uVar3) == 0) {
      uVar4 = uVar4 & uVar3;
    }
    else if (uVar1 <= uVar4) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar4 / uVar1;
      }
      uVar4 = uVar4 - uVar2 * uVar1;
    }
  }
  else {
    if (uVar1 <= uVar2) {
      uVar4 = 0;
      if (uVar1 != 0) {
        uVar4 = uVar2 / uVar1;
      }
      uVar2 = uVar2 - uVar4 * uVar1;
    }
    if (param_3 == (long *)0x0) goto LAB_10a527580;
LAB_10a527544:
    *param_2 = *param_3;
    *param_3 = (long)param_2;
    if (*param_2 == 0) goto LAB_10a5275dc;
    uVar4 = *(ulong *)(*param_2 + 8);
    if ((uVar1 & uVar3) == 0) {
      uVar4 = uVar4 & uVar3;
    }
    else if (uVar1 <= uVar4) {
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = uVar4 / uVar1;
      }
      uVar4 = uVar4 - uVar3 * uVar1;
    }
    if (uVar4 == uVar2) goto LAB_10a5275dc;
  }
  *(long **)(*param_1 + uVar4 * 8) = param_2;
LAB_10a5275dc:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10a5275ec; end: 10a52764b;  */

undefined8 * FUN_10a5275ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bee178;
  func_0x00010a22c9fc(param_1 + 2);
  return param_1;
}



/* Entry: 10a52764c; end: 10a527797;  */

void FUN_10a52764c(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 **ppuVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined1 auStack_b8 [40];
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a23080c(auStack_b8,param_1 + 0x10);
  lVar9 = 1;
  plVar2 = param_2;
  func_0x0001098ac018(param_2,&UNK_10e4bf192,0x25,auStack_b8,0);
  lVar10 = *param_2;
  lStack_90 = 0;
  lStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = (code *)CONCAT44(uStack_78._4_4_,(int)plVar2);
  puVar7 = (undefined4 *)((long)&uStack_78 + 4);
  lVar8 = 1;
  FUN_10a26ebc0(&lStack_90,0,&uStack_78);
  uStack_68 = *(undefined8 *)(param_1 + 8);
  uStack_78 = FUN_10a527798;
  ppuStack_70 = &PTR_FUN_110bee1a8;
  puVar6 = &uStack_78;
  func_0x0001098bb6d0(lVar10 + 0x18,puVar6,&lStack_90);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  puVar3 = auStack_b8;
  func_0x00010a22c9fc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  func_0x00010a22c9fc(auStack_b8);
  puVar4 = puVar3;
  __Unwind_Resume();
  if (lVar8 != 0) {
    ppuVar5 = &puStack_f0;
    pcStack_c8 = FUN_10a527798;
    puStack_f0 = puVar4;
    puStack_e8 = puVar6;
    puStack_e0 = &uStack_78;
    puStack_d8 = puVar3;
    puStack_d0 = &stack0xfffffffffffffff0;
    func_0x00010a5189e4(&puStack_f0,*puVar7);
    *(undefined1 ***)(*(long *)(lVar9 + 0x10) + 0x40) = ppuVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5277e0);
  (*pcVar1)();
}



/* Entry: 10a527798; end: 10a5277df;  */

void FUN_10a527798(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  long param_5,long param_6)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_5 != 0) {
    puVar2 = &uStack_30;
    uStack_30 = param_1;
    uStack_28 = param_2;
    func_0x00010a5189e4(&uStack_30,*param_4);
    *(undefined8 **)(*(long *)(param_6 + 0x10) + 0x40) = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5277e0);
  (*pcVar1)();
}



/* Entry: 10a5277e0; end: 10a527803;  */

void FUN_10a5277e0(void)

{
  return;
}



/* Entry: 10a527804; end: 10a527937;  */

void FUN_10a527804(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_c0;
  undefined8 *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = 1;
  plVar2 = param_2;
  func_0x0001098ac018(param_2,&UNK_10e4beea5,0x26,&uStack_78,0);
  lVar9 = *param_2;
  lStack_90 = 0;
  lStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = (code *)CONCAT44(uStack_78._4_4_,(int)plVar2);
  puVar6 = (undefined4 *)((long)&uStack_78 + 4);
  lVar7 = 1;
  FUN_10a26ebc0(&lStack_90,0,&uStack_78);
  uStack_68 = *(undefined8 *)(param_1 + 8);
  uStack_78 = FUN_10a527938;
  ppuStack_70 = &PTR_FUN_110bee200;
  puVar5 = &uStack_78;
  func_0x0001098bb6d0(lVar9 + 0x18,puVar5,&lStack_90);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  lVar3 = lStack_90;
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  lVar4 = lVar3;
  __Unwind_Resume();
  if (lVar7 != 0) {
    plVar2 = &lStack_c0;
    pcStack_98 = FUN_10a527938;
    lStack_c0 = lVar4;
    puStack_b8 = puVar5;
    lStack_b0 = lVar9;
    lStack_a8 = lVar3;
    puStack_a0 = &stack0xfffffffffffffff0;
    func_0x00010a517600(&lStack_c0,*puVar6);
    *(long **)(*(long *)(lVar8 + 0x10) + 0x38) = plVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a527980);
  (*pcVar1)();
}



/* Entry: 10a527938; end: 10a52797f;  */

void FUN_10a527938(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  long param_5,long param_6)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_5 != 0) {
    puVar2 = &uStack_30;
    uStack_30 = param_1;
    uStack_28 = param_2;
    func_0x00010a517600(&uStack_30,*param_4);
    *(undefined8 **)(*(long *)(param_6 + 0x10) + 0x38) = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a527980);
  (*pcVar1)();
}



/* Entry: 10a527980; end: 10a52799b;  */

void FUN_10a527980(void)

{
  return;
}



/* Entry: 10a52799c; end: 10a527adf;  */

void FUN_10a52799c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_100;
  undefined7 uStack_f8;
  undefined1 uStack_f1;
  undefined7 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  byte bStack_d0;
  undefined1 auStack_c8 [96];
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  
  if ((*(byte *)(param_2 + 0xc0) & 1) != 0) {
    uStack_100 = *(undefined8 *)(param_2 + 8);
    uStack_f8 = (undefined7)*(undefined8 *)(param_2 + 0x10);
    uStack_f1 = (undefined1)*(undefined8 *)(param_2 + 0x17);
    uStack_f0 = (undefined7)((ulong)*(undefined8 *)(param_2 + 0x17) >> 8);
    FUN_10a22cb80(&lStack_e8,param_2 + 0x20);
    FUN_10a22cd3c(auStack_c8,param_2 + 0x40);
    uStack_68 = *(undefined1 *)(param_2 + 0xa0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    FUN_10a22ce94(&uStack_60,*(long *)(param_2 + 0xa8),*(long *)(param_2 + 0xb0),
                  (*(long *)(param_2 + 0xb0) - *(long *)(param_2 + 0xa8) >> 3) * 0x2e8ba2e8ba2e8ba3)
    ;
    puVar2 = (undefined8 *)0xc8;
    __Znwm();
    *puVar2 = &PTR_FUN_110bee228;
    puVar2[1] = param_3;
    FUN_10a290c0c(puVar2 + 2,&uStack_100);
    *param_1 = puVar2;
    puStack_48 = &uStack_60;
    FUN_10a22d224(&puStack_48);
    FUN_10a22ce48(auStack_c8);
    if (((bStack_d0 & 1) != 0) && (lStack_e8 != 0)) {
      lStack_e0 = lStack_e8;
      __ZdlPv();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a527a9c);
  (*pcVar1)();
}



/* Entry: 10a527ae0; end: 10a527ae3;  */

undefined8 * FUN_10a527ae0(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bee228;
  puStack_28 = param_1 + 0x16;
  FUN_10a22d224(&puStack_28);
  FUN_10a22ce48(param_1 + 9);
  if ((*(char *)(param_1 + 8) == '\x01') && (param_1[5] != 0)) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a527ae4; end: 10a527af7;  */

void FUN_10a527ae4(void)

{
  FUN_10a527cdc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a527af8; end: 10a527cdb;  */

undefined8 * FUN_10a527af8(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined7 uStack_158;
  undefined1 uStack_151;
  undefined7 uStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  byte bStack_130;
  undefined8 auStack_128 [12];
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_160 = *(undefined8 *)(param_1 + 0x10);
  uStack_158 = (undefined7)*(undefined8 *)(param_1 + 0x18);
  uStack_151 = (undefined1)*(undefined8 *)(param_1 + 0x1f);
  uStack_150 = (undefined7)((ulong)*(undefined8 *)(param_1 + 0x1f) >> 8);
  puStack_148 = (undefined8 *)((ulong)puStack_148 & 0xffffffffffffff00);
  bStack_130 = *(char *)(param_1 + 0x40) == '\x01';
  if ((bool)bStack_130) {
    puStack_140 = *(undefined8 **)(param_1 + 0x30);
    puStack_148 = *(undefined8 **)(param_1 + 0x28);
    uStack_138 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  FUN_10a230c9c(auStack_128,param_1 + 0x48);
  uStack_c8 = *(undefined1 *)(param_1 + 0xa8);
  uStack_b8 = *(undefined8 *)(param_1 + 0xb8);
  uStack_c0 = *(undefined8 *)(param_1 + 0xb0);
  uStack_b0 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  plVar1 = param_2;
  func_0x0001098ac018(param_2,&UNK_10e4a7b05,0x24,&uStack_160,0,1);
  lVar4 = *param_2;
  lStack_a0 = 0;
  lStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = (undefined8 *)CONCAT44(uStack_88._4_4_,(int)plVar1);
  FUN_10a26ebc0(&lStack_a0,0,&uStack_88,(long)&uStack_88 + 4,1);
  uStack_78 = *(undefined8 *)(param_1 + 8);
  uStack_88 = (undefined8 *)0x10a527d44;
  ppuStack_80 = &PTR_FUN_110bee258;
  func_0x0001098bb6d0(lVar4 + 0x18,&uStack_88,&lStack_a0);
  (*(code *)*ppuStack_80)(&ppuStack_80);
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  uStack_88 = &uStack_c0;
  FUN_10a22d224(&uStack_88);
  puVar2 = auStack_128;
  FUN_10a22ce48();
  if (((bStack_130 & 1) != 0) && (puVar2 = puStack_148, puStack_148 != (undefined8 *)0x0)) {
    puStack_140 = puStack_148;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar2;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_80)(&ppuStack_80);
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  FUN_10a26dcbc(&uStack_160);
  puVar3 = puVar2;
  __Unwind_Resume();
  pcStack_168 = FUN_10a527cdc;
  *puVar3 = &PTR_FUN_110bee228;
  puStack_188 = puVar3 + 0x16;
  puStack_180 = &uStack_88;
  puStack_178 = puVar2;
  puStack_170 = &stack0xfffffffffffffff0;
  FUN_10a22d224(&puStack_188);
  FUN_10a22ce48(puVar3 + 9);
  if ((*(char *)(puVar3 + 8) == '\x01') && (puVar3[5] != 0)) {
    puVar3[6] = puVar3[5];
    __ZdlPv();
  }
  return puVar3;
}



/* Entry: 10a527cdc; end: 10a527d8b;  */

undefined8 * FUN_10a527cdc(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bee228;
  puStack_28 = param_1 + 0x16;
  FUN_10a22d224(&puStack_28);
  FUN_10a22ce48(param_1 + 9);
  if ((*(char *)(param_1 + 8) == '\x01') && (param_1[5] != 0)) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a527d8c; end: 10a527da7;  */

void FUN_10a527d8c(void)

{
  return;
}



/* Entry: 10a527da8; end: 10a527e6b;  */

void FUN_10a527da8(undefined8 *param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  
  if ((*(byte *)(param_2 + 0x20) & 1) != 0) {
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    FUN_10a22fc9c(&uStack_50,*(long *)(param_2 + 8),*(long *)(param_2 + 0x10),
                  (*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8) >> 3) * 0x2e8ba2e8ba2e8ba3);
    puVar2 = (undefined8 *)0x28;
    __Znwm();
    *puVar2 = &PTR_FUN_110bee280;
    puVar2[1] = param_3;
    puVar2[3] = uStack_48;
    puVar2[2] = uStack_50;
    puVar2[4] = uStack_40;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    *param_1 = puVar2;
    puStack_38 = (undefined1 *)&uStack_50;
    FUN_10a22ff44(&puStack_38);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a527e54);
  (*pcVar1)();
}


