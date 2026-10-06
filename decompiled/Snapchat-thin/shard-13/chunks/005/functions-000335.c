/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a6ee7a8; end: 10a6ee84b;  */

void FUN_10a6ee7a8(void)

{
  FUN_10a6ee60c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6ee84c; end: 10a6ee87b;  */

void FUN_10a6ee84c(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a6ee60c((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a6ee87c; end: 10a6ee987;  */

void FUN_10a6ee87c(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
                  long *param_5)

{
  undefined **ppuVar1;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010a3c7a18();
  (**(code **)(*param_5 + 0xe8))(param_5,&PTR_DAT_110c12470);
  *(undefined4 *)(param_4 + 0x278) = param_1;
  *(undefined4 *)(param_4 + 0x27c) = param_2;
  *(undefined4 *)(param_4 + 0x280) = param_3;
  uStack_78 = 0x10a71e8ac;
  ppuStack_70 = &PTR_DAT_110c14258;
  lStack_68 = param_4;
  FUN_10a03ce64(param_5,&PTR_DAT_110c12490,&uStack_78,0);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  ppuVar1 = &PTR_DAT_110c124b0;
  (**(code **)(*param_5 + 0x38))(param_5,&PTR_DAT_110c124b0,1);
  *(int *)(param_4 + 0x298) = (int)param_5;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x00010a3c7928();
  (**(code **)(*ppuVar1 + 0x80))(ppuVar1,&PTR_DAT_110c12470,param_5 + 0x4f);
  FUN_10a6e4398(ppuVar1,&PTR_DAT_110c12490,param_5 + 0x51,&UNK_10f6345f0,0x13);
                    /* WARNING: Could not recover jumptable at 0x00010a6ee9fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*ppuVar1 + 0x40))(ppuVar1,&PTR_DAT_110c124b0,(int)param_5[0x53]);
  return;
}



/* Entry: 10a6ee988; end: 10a6ee9ff;  */

void FUN_10a6ee988(long param_1,long *param_2)

{
  FUN_10a3c7928();
  (**(code **)(*param_2 + 0x80))(param_2,&PTR_DAT_110c12470,param_1 + 0x278);
  FUN_10a6e4398(param_2,&PTR_DAT_110c12490,param_1 + 0x288,&UNK_10f6345f0,0x13);
                    /* WARNING: Could not recover jumptable at 0x00010a6ee9fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c124b0,*(undefined4 *)(param_1 + 0x298));
  return;
}



/* Entry: 10a6eea00; end: 10a6eec87;  */

void FUN_10a6eea00(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lStack_50;
  long *plStack_48;
  
  if (param_4 == 0) {
    lVar10 = param_2;
    uVar9 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_48 = *(long **)(param_2 + 0x48);
    lStack_50 = *(long *)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&lStack_50);
    puVar4 = (undefined8 *)((ulong)&lStack_50 | 8);
    plVar8 = &lStack_50;
    if (param_4 != 0) {
      puVar4 = (undefined8 *)(param_4 + 0x28);
      plVar8 = (long *)(param_4 + 0x20);
    }
    uVar9 = *puVar4;
    lVar10 = *plVar8;
  }
  lVar11 = *(long *)(param_2 + 0x170);
  FUN_10a3dd220(lVar11);
  FUN_10a574ca8(lVar11,lVar10,uVar9);
  plVar8 = (long *)0x28;
  __Znwm();
  plVar12 = plVar8 + 1;
  *plVar12 = 0;
  *plVar8 = (long)&PTR_DAT_110c14280;
  plVar8[2] = 0;
  plVar8[3] = lVar11;
  plVar8[4] = (long)FUN_10a3df8cc;
  if (lVar11 != 0) {
    if (*(long *)(lVar11 + 0x30) == 0) {
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar7) {
          *plVar12 = *plVar12 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plVar1 = plVar8 + 2;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = *plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      *(long *)(lVar11 + 0x28) = lVar11;
      *(long **)(lVar11 + 0x30) = plVar8;
    }
    else {
      if (*(long *)(*(long *)(lVar11 + 0x30) + 8) != -1) goto LAB_10a6eeb64;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar7) {
          *plVar12 = *plVar12 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plVar1 = plVar8 + 2;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = *plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      *(long *)(lVar11 + 0x28) = lVar11;
      *(long **)(lVar11 + 0x30) = plVar8;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar10 = *plVar12;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar7) {
        *plVar12 = lVar10 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
LAB_10a6eeb64:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar11 + 0x150,param_2 + 0x150);
  uVar2 = (*(ushort *)(param_2 + 0x180) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(lVar11 + 0x180) & 0xfffc;
  *(ushort *)(lVar11 + 0x180) = uVar3 | *(ushort *)(lVar11 + 0x180) & 1 | uVar2;
  *(ushort *)(lVar11 + 0x180) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x180) & 1;
  if (plVar8 != (long *)0x0) {
    plVar12 = plVar8 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar7) {
        *plVar12 = *plVar12 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  lStack_50 = lVar11;
  plStack_48 = plVar8;
  FUN_10a3c7ce8(param_3,&lStack_50);
  plVar12 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar10 = *plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar10 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  uVar5 = *(undefined4 *)(param_2 + 0x280);
  *(undefined8 *)(lVar11 + 0x278) = *(undefined8 *)(param_2 + 0x278);
  *(undefined4 *)(lVar11 + 0x280) = uVar5;
  FUN_10a6e467c(lVar11 + 0x288,param_2 + 0x288);
  *(undefined4 *)(lVar11 + 0x298) = *(undefined4 *)(param_2 + 0x298);
  *param_1 = lVar11;
  param_1[1] = (long)plVar8;
  return;
}



/* Entry: 10a6eec88; end: 10a6eecc3;  */

long FUN_10a6eec88(long param_1)

{
  if (*(char *)(param_1 + 0x2f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x18));
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a6eecc4; end: 10a6eef73;  */

void FUN_10a6eecc4(long param_1,long *param_2)

{
  long *plVar1;
  ulong *puVar2;
  undefined8 ******ppppppuVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar8;
  ulong uVar9;
  undefined8 *****pppppuStack_48;
  long *plStack_40;
  char cStack_31;
  
  pppppuStack_48 = (undefined8 ******)0x0;
  plStack_40 = (long *)0x0;
  func_0x00010a23175c(param_1 + 0x378,&pppppuStack_48);
  plVar7 = plStack_40;
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
    do {
      lVar8 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (*(char *)(param_1 + 0x330) == '\x01') {
    *(undefined1 *)(param_1 + 0x330) = 0;
  }
  if (*(char *)(param_1 + 0x2d0) == '\x01') {
    *(undefined1 *)(param_1 + 0x2d0) = 0;
  }
  if (*(char *)(param_1 + 0x2b0) == '\x01') {
    plVar7 = *(long **)(param_1 + 0x2a8);
    if (plVar7 != (long *)0x0) {
      puVar2 = (ulong *)(plVar7 + 1);
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
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    *(undefined1 *)(param_1 + 0x2b0) = 0;
  }
  *(undefined1 *)(param_1 + 0x2e2) = 0;
  *(undefined1 *)(param_1 + 0x2ec) = 0;
  *(undefined4 *)(param_1 + 0x2dc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3d4) = 0;
  if (*(char *)(param_1 + 0x3a8) == '\x01') {
    func_0x00010a711e00(param_1 + 0x398);
    *(undefined1 *)(param_1 + 0x3a8) = 0;
  }
  if (*(char *)(param_1 + 0x3c8) == '\x01') {
    if (*(char *)(param_1 + 0x3c7) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x3b0));
    }
    *(undefined1 *)(param_1 + 0x3c8) = 0;
  }
  *(undefined1 *)(param_1 + 0x3d0) = 0;
  if (*param_2 == 0) {
    pppppuStack_48 = (undefined8 *****)0x0;
    plStack_40 = (long *)0x0;
    FUN_10a6eef74(param_1 + 0x288,&pppppuStack_48);
    if (plStack_40 == (long *)0x0) {
      return;
    }
    plVar7 = plStack_40 + 1;
    do {
      lVar8 = *plVar7;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar6) {
        *plVar7 = lVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  else {
    bVar4 = *(byte *)(*param_2 + 0xe0);
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      FUN_10a6e9574(&pppppuStack_48,bVar4);
      ppppppuVar3 = (undefined8 ******)pppppuStack_48;
      if (-1 < cStack_31) {
        ppppppuVar3 = &pppppuStack_48;
      }
      plVar7 = (long *)(*param_2 + 0xe8);
      if (*(char *)(*param_2 + 0xff) < '\0') {
        plVar7 = (long *)*plVar7;
      }
      func_0x00010ae06f08(1,4,&UNK_10f66f567,&UNK_10f66f5af,0x9b,&UNK_10f66f617,in_x6,in_x7,
                          ppppppuVar3,plVar7);
      if (cStack_31 < '\0') {
        __ZdlPv(pppppuStack_48);
      }
    }
    if (bVar4 < 10 && (1 << (ulong)(bVar4 & 0x1f) & 0x3daU) != 0) {
      FUN_10a6e467c(param_1 + 0x288,param_2);
      return;
    }
    func_0x00010ae06f08(1,0x14,&UNK_10f66de00,&UNK_10f66de00,0xffffffff,&UNK_10f66f652);
    pppppuStack_48 = (undefined8 *****)0x0;
    plStack_40 = (long *)0x0;
    FUN_10a6eef74(param_1 + 0x288,&pppppuStack_48);
    if (plStack_40 == (long *)0x0) {
      return;
    }
    plVar7 = plStack_40 + 1;
    do {
      lVar8 = *plVar7;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar6) {
        *plVar7 = lVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar7 = plStack_40;
  if (lVar8 == 0) {
    (**(code **)(*plStack_40 + 0x10))(plStack_40);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
  }
  return;
}



/* Entry: 10a6eef74; end: 10a6eefd7;  */

undefined8 * FUN_10a6eef74(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a6eefd8; end: 10a6ef0a3;  */

undefined4 FUN_10a6eefd8(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plStack_30;
  long *plStack_28;
  
  if (*(char *)(param_1 + 0x3a8) == '\x01') {
    plStack_30 = *(long **)(param_1 + 0x398);
    plStack_28 = *(long **)(param_1 + 0x3a0);
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
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
  else {
    FUN_10a6f08ac(&plStack_30,param_1);
  }
  if (plStack_30 != (long *)0x0) {
    (**(code **)(*plStack_30 + 0x10))();
  }
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
  return *(undefined4 *)(param_1 + 0x2dc);
}



/* Entry: 10a6ef0a4; end: 10a6ef15f;  */

void FUN_10a6ef0a4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a6ef160();
  cVar2 = *(char *)(param_1 + 0x330);
  if (*(char *)(param_1 + 0x2e1) != cVar2) {
    *(char *)(param_1 + 0x2e1) = cVar2;
    if (cVar2 == '\0') {
      plVar5 = *(long **)(param_1 + 0x250);
    }
    else {
      plVar5 = *(long **)(param_1 + 0x240);
    }
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a07e58c();
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
  }
  return;
}



/* Entry: 10a6ef160; end: 10a6ef70b;  */

/* WARNING: Removing unreachable block (ram,0x00010a6ef288) */

ulong FUN_10a6ef160(ulong param_1,long *param_2,undefined8 param_3,float *param_4)

{
  long *plVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  int iVar10;
  long *extraout_x8;
  long lVar11;
  float *pfVar12;
  long lVar13;
  float fVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uStack_210;
  long lStack_208;
  float fStack_200;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  long lStack_1d8;
  code *pcStack_1d0;
  float fStack_1c8;
  float fStack_1c4;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *apuStack_1a8 [3];
  undefined8 uStack_190;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  long lStack_178;
  code *pcStack_170;
  float fStack_168;
  float fStack_164;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long *plStack_148;
  undefined1 auStack_128 [64];
  undefined1 auStack_e8 [64];
  byte bStack_a8;
  long lStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = param_2;
  if (param_2[0x51] == 0) goto LAB_10a6ef390;
  if ((char)param_2[0x75] == '\x01') {
    lStack_150 = param_2[0x73];
    plStack_148 = (long *)param_2[0x74];
    uStack_210 = param_1;
    if (plStack_148 == (long *)0x0) {
      if (lStack_150 != 0) goto LAB_10a6ef388;
    }
    else {
      plVar9 = plStack_148 + 1;
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *plVar9 = *plVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar6 = lStack_150 == 0;
      plVar8 = param_2;
LAB_10a6ef1ec:
      plVar9 = plStack_148;
      plVar1 = plStack_148 + 1;
      do {
        lVar11 = *plVar1;
        cVar4 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar11 != 0) goto LAB_10a6ef204;
      (**(code **)(*plStack_148 + 0x10))(plStack_148);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      if (!bVar6) goto LAB_10a6ef388;
    }
LAB_10a6ef208:
    lVar11 = param_2[0x51];
    cVar4 = *(char *)(lVar11 + 0xe0);
    if (cVar4 == '\x01') {
      lVar11 = *(long *)(param_2[0x2e] + 0x960);
      plVar9 = *(long **)(lVar11 + 0x240);
      if ((plVar9 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar9 != (long *)0x0)) {
        lVar11 = *(long *)(lVar11 + 0x238);
        plVar8 = plVar9 + 1;
        do {
          lVar13 = *plVar8;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar6) {
            *plVar8 = lVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        if (lVar11 != 0) {
          *(undefined4 *)(param_2 + 0x5e) = 0x3f800000;
          uStack_210 = 0;
          *(undefined8 *)((long)param_2 + 0x2fc) = 0;
          *(undefined8 *)((long)param_2 + 0x2f4) = 0;
          *(undefined4 *)((long)param_2 + 0x304) = 0x3f800000;
          param_2[0x62] = 0;
          param_2[0x61] = 0;
          *(undefined4 *)(param_2 + 99) = 0x3f800000;
          *(undefined8 *)((long)param_2 + 0x324) = 0;
          *(undefined8 *)((long)param_2 + 0x31c) = 0;
          *(undefined4 *)((long)param_2 + 0x32c) = 0x3f800000;
          if ((*(byte *)(param_2 + 0x66) & 1) != 0) goto LAB_10a6ef670;
          goto LAB_10a6ef668;
        }
      }
      if ((*(byte *)(param_2 + 0x66) & 1) == 0) {
        param_1 = uStack_210;
        if (*(char *)((long)param_2 + 0x2e2) == '\x01') {
          plVar9 = (long *)param_2[0x71];
          FUN_10a6ea044(plVar9,param_2[0x51] + 0xe8);
          param_1 = uStack_210;
          if ((char)param_2[0x66] == '\x01') goto LAB_10a6ef670;
        }
LAB_10a6ef390:
        uStack_210 = param_1;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
          return param_1;
        }
        goto LAB_10a6ef6b0;
      }
    }
    else {
      if (cVar4 == '\x04') {
        lVar13 = *(long *)(param_2[0x2e] + 0x960);
        if (*(char *)(lVar11 + 0xff) < '\0') {
          func_0x000107c3192c(&fStack_1f0,*(undefined8 *)(lVar11 + 0xe8),
                              *(undefined8 *)(lVar11 + 0xf0));
        }
        else {
          fStack_1e8 = (float)*(undefined8 *)(lVar11 + 0xf0);
          fStack_1e4 = (float)((ulong)*(undefined8 *)(lVar11 + 0xf0) >> 0x20);
          fStack_1f0 = (float)*(undefined8 *)(lVar11 + 0xe8);
          fStack_1ec = (float)((ulong)*(undefined8 *)(lVar11 + 0xe8) >> 0x20);
          fStack_1e0 = (float)*(undefined8 *)(lVar11 + 0xf8);
          fStack_1dc = (float)((ulong)*(undefined8 *)(lVar11 + 0xf8) >> 0x20);
        }
        uStack_190 = &fStack_1f0;
        apuStack_1a8[0] = &UNK_10dd62ad6;
        param_4 = (float *)&UNK_10dd5b8f9;
        lVar13 = lVar13 + 0x210;
        FUN_10a71c8d8(lVar13,&fStack_1f0,&UNK_10dd5b8f9,&uStack_190,apuStack_1a8);
        FUN_10a702f70(&lStack_150,lVar13 + 0x28);
        if ((int)fStack_1dc < 0) {
          __ZdlPv(CONCAT44(fStack_1ec,fStack_1f0));
        }
        if (bStack_a8 == 1) {
          func_0x000109519fd0(&uStack_190,auStack_128,auStack_e8);
          uStack_58 = CONCAT44(fStack_180,fStack_184);
          uStack_60 = CONCAT44(fStack_188,uStack_190._4_4_);
          pcStack_78 = pcStack_170;
          lStack_80 = lStack_178;
          fVar14 = *(float *)(param_2 + 0x4f);
          fVar16 = *(float *)((long)param_2 + 0x27c);
          fVar17 = *(float *)(param_2 + 0x50);
          uStack_210 = CONCAT44(fStack_164,fStack_168);
          lStack_208 = CONCAT44(uStack_190._4_4_ * fVar14 + fStack_17c * fVar16 +
                                (float)((ulong)pcStack_170 >> 0x20) * fVar17 +
                                (float)((ulong)uStack_160 >> 0x20),
                                (float)uStack_190 * fVar14 + fStack_180 * fVar16 +
                                SUB84(pcStack_170,0) * fVar17 + (float)uStack_160);
          lVar11 = CONCAT44(fStack_184 * fVar14 + (float)((ulong)lStack_178 >> 0x20) * fVar16 +
                            fStack_164 * fVar17 + (float)((ulong)uStack_158 >> 0x20),
                            fStack_188 * fVar14 + (float)lStack_178 * fVar16 + fStack_168 * fVar17 +
                            (float)uStack_158);
          fStack_200 = (float)uStack_190;
        }
        else {
          uStack_60 = 0;
          uStack_58 = 0;
          lStack_80 = 0;
          pcStack_78 = (code *)0x0;
          lVar11 = 0x3f80000000000000;
          fStack_17c = 1.0;
          fStack_200 = 1.0;
          lStack_208 = 0;
          uStack_210 = 0x3f800000;
        }
        func_0x00010a703078(&lStack_150);
        bVar2 = *(byte *)(param_2 + 0x66);
        *(float *)(param_2 + 0x5e) = fStack_200;
        *(undefined8 *)((long)param_2 + 0x2fc) = uStack_58;
        *(undefined8 *)((long)param_2 + 0x2f4) = uStack_60;
        *(float *)((long)param_2 + 0x304) = fStack_17c;
        lVar13 = lStack_80;
        pcVar5 = pcStack_78;
      }
      else {
        param_1 = uStack_210;
        if (cVar4 != '\x03') goto LAB_10a6ef390;
        lVar11 = *(long *)(param_2[0x2e] + 0x960);
        func_0x000107c2b054(&uStack_60,&UNK_10f66f68d);
        fStack_1f0 = 1.3199081e-30;
        fStack_1ec = 1.4013e-45;
        param_4 = (float *)&UNK_10dd5b8f9;
        lVar11 = lVar11 + 0x210;
        uStack_190 = (float *)&uStack_60;
        FUN_10a71c8d8(lVar11,&uStack_60,&UNK_10dd5b8f9,&uStack_190,&fStack_1f0);
        FUN_10a702f70(&lStack_150,lVar11 + 0x28);
        if (bStack_a8 == 1) {
          FUN_10a82be98(&lStack_80,&lStack_150);
          FUN_10a82be98(apuStack_1a8,param_2[0x51] + 0xe8);
          FUN_10a817f0c(&uStack_190,apuStack_1a8,&lStack_80);
          if ((bStack_a8 & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10a6ef6b0);
            (*pcVar5)();
          }
          func_0x000109519fd0(&fStack_1f0,auStack_128,&uStack_190);
          uStack_88 = CONCAT44(fStack_1e0,fStack_1e4);
          uStack_90 = CONCAT44(fStack_1e8,fStack_1ec);
          pcStack_98 = pcStack_1d0;
          lStack_a0 = lStack_1d8;
          fVar14 = *(float *)(param_2 + 0x4f);
          fVar16 = *(float *)((long)param_2 + 0x27c);
          fVar17 = *(float *)(param_2 + 0x50);
          fStack_200 = fStack_1f0;
          uStack_210 = CONCAT44(fStack_1c4,fStack_1c8);
          lStack_208 = CONCAT44(fStack_1ec * fVar14 + fStack_1dc * fVar16 +
                                (float)((ulong)pcStack_1d0 >> 0x20) * fVar17 +
                                (float)((ulong)uStack_1c0 >> 0x20),
                                fStack_1f0 * fVar14 + fStack_1e0 * fVar16 +
                                SUB84(pcStack_1d0,0) * fVar17 + (float)uStack_1c0);
          lVar11 = CONCAT44(fStack_1e4 * fVar14 + (float)((ulong)lStack_1d8 >> 0x20) * fVar16 +
                            fStack_1c4 * fVar17 + (float)((ulong)uStack_1b8 >> 0x20),
                            fStack_1e8 * fVar14 + (float)lStack_1d8 * fVar16 + fStack_1c8 * fVar17 +
                            (float)uStack_1b8);
          fVar14 = fStack_1dc;
        }
        else {
          uStack_90 = 0;
          uStack_88 = 0;
          lStack_a0 = 0;
          pcStack_98 = (code *)0x0;
          lVar11 = 0x3f80000000000000;
          fVar14 = 1.0;
          fStack_200 = 1.0;
          lStack_208 = 0;
          uStack_210 = 0x3f800000;
        }
        func_0x00010a703078(&lStack_150);
        bVar2 = *(byte *)(param_2 + 0x66);
        *(float *)(param_2 + 0x5e) = fStack_200;
        *(undefined8 *)((long)param_2 + 0x2fc) = uStack_88;
        *(undefined8 *)((long)param_2 + 0x2f4) = uStack_90;
        *(float *)((long)param_2 + 0x304) = fVar14;
        lVar13 = lStack_a0;
        pcVar5 = pcStack_98;
      }
      param_2[0x62] = (long)pcVar5;
      param_2[0x61] = lVar13;
      param_2[100] = lStack_208;
      param_2[99] = uStack_210;
      param_2[0x65] = lVar11;
      if ((bVar2 & 1) == 0) {
LAB_10a6ef668:
        *(undefined1 *)(param_2 + 0x66) = 1;
      }
    }
  }
  else {
    plVar8 = &lStack_150;
    FUN_10a6f08ac(plVar8,param_2);
    bVar6 = lStack_150 == 0;
    uStack_210 = param_1;
    if (plStack_148 != (long *)0x0) goto LAB_10a6ef1ec;
LAB_10a6ef204:
    plVar9 = plVar8;
    if (bVar6) goto LAB_10a6ef208;
LAB_10a6ef388:
    param_1 = uStack_210;
    if ((*(byte *)(param_2 + 0x66) & 1) == 0) goto LAB_10a6ef390;
  }
LAB_10a6ef670:
  plVar9 = *(long **)(param_2[0x2d] + 0x140);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    if ((((((*(byte *)((long)plVar9 + 0x29) >> 1 & 1) != 0) &&
          (*(float *)((long)plVar9 + 100) == *(float *)(param_2 + 0x5e))) &&
         (*(float *)(plVar9 + 0xd) == *(float *)((long)param_2 + 0x2f4))) &&
        (((*(float *)((long)plVar9 + 0x6c) == *(float *)(param_2 + 0x5f) &&
          (*(float *)(plVar9 + 0xe) == *(float *)((long)param_2 + 0x2fc))) &&
         ((*(float *)((long)plVar9 + 0x74) == *(float *)(param_2 + 0x60) &&
          ((*(float *)(plVar9 + 0xf) == *(float *)((long)param_2 + 0x304) &&
           (*(float *)((long)plVar9 + 0x7c) == *(float *)(param_2 + 0x61))))))))) &&
       ((*(float *)(plVar9 + 0x10) == *(float *)((long)param_2 + 0x30c) &&
        (((((*(float *)((long)plVar9 + 0x84) == *(float *)(param_2 + 0x62) &&
            (*(float *)(plVar9 + 0x11) == *(float *)((long)param_2 + 0x314))) &&
           (*(float *)((long)plVar9 + 0x8c) == *(float *)(param_2 + 99))) &&
          ((*(float *)(plVar9 + 0x12) == *(float *)((long)param_2 + 0x31c) &&
           (*(float *)((long)plVar9 + 0x94) == *(float *)(param_2 + 100))))) &&
         ((*(float *)(plVar9 + 0x13) == *(float *)((long)param_2 + 0x324) &&
          ((*(float *)((long)plVar9 + 0x9c) == *(float *)(param_2 + 0x65) &&
           (*(float *)(plVar9 + 0x14) == *(float *)((long)param_2 + 0x32c))))))))))) {
      return (ulong)(uint)*(float *)(plVar9 + 0x14);
    }
    lVar11 = param_2[0x5f];
    uVar15 = param_2[0x5e];
    lVar7 = param_2[0x61];
    lVar13 = param_2[0x60];
    lVar19 = param_2[99];
    lVar18 = param_2[0x62];
    lVar20 = param_2[100];
    *(long *)((long)plVar9 + 0x9c) = param_2[0x65];
    *(long *)((long)plVar9 + 0x94) = lVar20;
    *(long *)((long)plVar9 + 0x8c) = lVar19;
    *(long *)((long)plVar9 + 0x84) = lVar18;
    *(long *)((long)plVar9 + 0x7c) = lVar7;
    *(long *)((long)plVar9 + 0x74) = lVar13;
    *(long *)((long)plVar9 + 0x6c) = lVar11;
    *(ulong *)((long)plVar9 + 100) = uVar15;
    *(byte *)((long)plVar9 + 0x29) = *(byte *)((long)plVar9 + 0x29) | 2;
    *(byte *)((long)plVar9 + 0x2a) = *(byte *)((long)plVar9 + 0x2a) | 0x7f;
    lVar11 = plVar9[6];
    if (lVar11 != 0) {
      for (lVar13 = *(long *)(lVar11 + 0x198); lVar13 != lVar11 + 400;
          lVar13 = *(long *)(lVar13 + 8)) {
        lVar7 = *(long *)(*(long *)(lVar13 + 0x10) + 0x140);
        bVar2 = *(byte *)(lVar7 + 0x2a);
        if (((bVar2 ^ 0xff) & 0x7c) != 0) {
          *(byte *)(lVar7 + 0x2a) = bVar2 | 0x7c;
          FUN_10a3e8248();
        }
      }
    }
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pfVar12 = (float *)plVar9[7];
    (**(code **)(*(long *)pfVar12 + 0x20))(pfVar12);
    pcStack_78 = FUN_10a4030bc;
    ppuStack_70 = &PTR_DAT_110bd2fb8;
    iVar10 = (int)&pcStack_78;
    plStack_68 = plVar9;
    (**(code **)(*(long *)plVar9[7] + 0x40))();
    (*(code *)*ppuStack_70)(&ppuStack_70);
    (**(code **)(*(long *)pfVar12 + 0x28))();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
      ___stack_chk_fail();
      if (iVar10 == 0) {
        __Unwind_Resume(pfVar12);
      }
      func_0x000104bd46a0();
      if ((((!NAN(*pfVar12)) && (!NAN(pfVar12[1]))) && (ABS(pfVar12[1]) != INFINITY)) &&
         (((ABS(*pfVar12) != INFINITY && (!NAN(pfVar12[2]))) && (ABS(pfVar12[2]) != INFINITY)))) {
        param_4 = pfVar12;
      }
      return (ulong)(uint)*param_4;
    }
    return uVar15;
  }
LAB_10a6ef6b0:
  ___stack_chk_fail();
  func_0x00010a703078(&lStack_150);
  __Unwind_Resume();
  lVar11 = plVar9[0x48];
  *extraout_x8 = plVar9[0x47];
  extraout_x8[1] = lVar11;
  if (lVar11 != 0) {
    plVar9 = (long *)(lVar11 + 8);
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = *plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  return uStack_210;
}



/* Entry: 10a6ef70c; end: 10a6ef763;  */

void FUN_10a6ef70c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 0x240);
  *param_1 = *(undefined8 *)(param_2 + 0x238);
  param_1[1] = lVar4;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
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



/* Entry: 10a6ef764; end: 10a6ef7b7;  */

void FUN_10a6ef764(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10a6ef160();
  __ZNSt3__16chrono12steady_clock3nowEv();
  *(long *)(param_1 + 0x2a0) = lVar1;
  return;
}



/* Entry: 10a6ef7b8; end: 10a6ef807;  */

void FUN_10a6ef7b8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 0x230);
  *param_1 = *(undefined8 *)(param_2 + 0x228);
  param_1[1] = lVar4;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
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



/* Entry: 10a6ef808; end: 10a6ef883;  */

void FUN_10a6ef808(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_1 + 0x170);
  plVar1 = (long *)(param_1 + 0x1f0 + *(long *)(*(long *)(param_1 + 0x1f0) + -0x18));
  if ((*(byte *)(plVar1 + 3) & 1) == 0) {
    *(undefined1 *)(plVar1 + 3) = 1;
    plVar1[2] = lVar5;
    if (lVar5 != 0) {
      plVar1[1] = *(long *)(*(long *)(lVar5 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar1 + 0x18))();
  }
  lVar4 = *(long *)(param_1 + 0x208);
  if (*(long *)(lVar4 + 0x20) == 0) {
    *(long *)(lVar4 + 0x30) = lVar5;
    lVar6 = *(long *)(lVar4 + 0x18);
    if (*(long *)(lVar4 + 0x18) != 0) {
      plVar1 = (long *)(*(long *)(lVar4 + 0x18) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a3cf744(lVar5,&stack0xffffffffffffffd0,&PTR_DAT_110b99f08,param_1 + 0x1f0);
    if (lVar6 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if ((int)lVar5 != 0) {
      *(int *)(lVar4 + 0x38) = (int)lVar5;
      *(undefined1 *)(lVar4 + 0x3c) = 1;
    }
  }
  else if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    FUN_10ae06f30(1,8,&UNK_10f665c8c,&UNK_10f665cc3,0x71,&UNK_10f665d1c,&stack0x00000000);
    return;
  }
  return;
}



/* Entry: 10a6ef884; end: 10a6ef88b;  */

void FUN_10a6ef884(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x208);
  if (*(char *)((long)plVar3 + 0x3c) == '\x01') {
    FUN_10a3cf620(plVar3[6],(int)plVar3[7],plVar3);
    *(undefined4 *)(plVar3 + 7) = 0;
  }
  else {
    if (*(char *)((long)plVar3 + 0x3c) != '\x02') {
      return;
    }
    lVar1 = *plVar3;
    plVar2 = (long *)plVar3[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
  }
  *(undefined1 *)((long)plVar3 + 0x3c) = 0;
  return;
}



/* Entry: 10a6ef88c; end: 10a6ef8fb;  */

void FUN_10a6ef88c(long param_1)

{
  if (*(char *)(param_1 + 0x3a8) == '\x01') {
    func_0x00010a711e00(param_1 + 0x398);
    *(undefined1 *)(param_1 + 0x3a8) = 0;
  }
  return;
}



/* Entry: 10a6ef8fc; end: 10a6efaab;  */

void FUN_10a6ef8fc(long param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lStack_78;
  long *plStack_70;
  undefined1 uStack_68;
  undefined1 uStack_58;
  undefined7 uStack_57;
  char cStack_41;
  char cStack_40;
  long **pplStack_38;
  
  if (*(long *)(param_1 + 0x288) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x3a8) == '\x01') {
    lStack_78 = *(long *)(param_1 + 0x398);
    plStack_70 = *(long **)(param_1 + 0x3a0);
    if (plStack_70 == (long *)0x0) {
      if (lStack_78 != 0) {
        return;
      }
      goto LAB_10a6ef9bc;
    }
    plVar5 = plStack_70 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = *plVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar4 = lStack_78 == 0;
LAB_10a6ef978:
    plVar1 = plStack_70;
    plVar5 = plStack_70 + 1;
    do {
      lVar6 = *plVar5;
      cVar3 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  else {
    FUN_10a6f08ac(&lStack_78,param_1);
    bVar4 = lStack_78 == 0;
    if (plStack_70 != (long *)0x0) goto LAB_10a6ef978;
  }
  if (!bVar4) {
    return;
  }
LAB_10a6ef9bc:
  lVar6 = *(long *)(*(long *)(param_1 + 0x170) + 0x960);
  plVar5 = *(long **)(lVar6 + 0x240);
  if ((plVar5 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 != (long *)0x0))
  {
    lVar6 = *(long *)(lVar6 + 0x238);
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
    if (lVar6 != 0) {
      return;
    }
  }
  lStack_78 = 0;
  plStack_70 = (long *)0x0;
  uStack_68 = 1;
  FUN_10a0378a8(param_2 + 0x278,&lStack_78);
  lStack_78 = CONCAT71(lStack_78._1_7_,1);
  FUN_10acf2c5c(&plStack_70,*(long *)(param_1 + 0x288) + 0xe8,param_1 + 0x378);
  uStack_58 = 0;
  cStack_40 = '\0';
  FUN_10a6efaac(param_2 + 0x410,&lStack_78);
  if ((cStack_40 == '\x01') && (cStack_41 < '\0')) {
    __ZdlPv(CONCAT71(uStack_57,uStack_58));
  }
  pplStack_38 = &plStack_70;
  FUN_10a2303d4(&pplStack_38);
  return;
}



/* Entry: 10a6efaac; end: 10a6efba7;  */

void FUN_10a6efaac(byte *param_1,byte *param_2)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_49 [8];
  char cStack_41;
  char in_stack_ffffffffffffffc0;
  
  if ((param_1[0x40] & 1) != 0) {
    if (param_2[0x38] == 1) {
      func_0x00010a1cca60(param_1 + 0x20,param_2 + 0x20);
    }
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    FUN_10acf2b78(&uStack_80,
                  (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * 0x6db6db6db6db6db7 +
                  (*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8) >> 3) * 0x6db6db6db6db6db7);
    FUN_10acf9174(&puStack_68,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                  *(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),&uStack_80,auStack_49
                 );
    FUN_10a2319d4(param_1 + 8);
    *(undefined8 *)(param_1 + 0x10) = uStack_78;
    *(undefined8 *)(param_1 + 8) = uStack_80;
    *(undefined8 *)(param_1 + 0x18) = uStack_70;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    *param_1 = *param_1 | *param_2;
    puStack_68 = (undefined1 *)&uStack_80;
    FUN_10a2303d4(&puStack_68);
    return;
  }
  uStack_78 = CONCAT71(uStack_78._1_7_,*param_2);
  puStack_68 = (undefined1 *)0x0;
  uStack_60 = 0;
  uStack_70 = 0;
  FUN_10a2300f4(&uStack_70,*(long *)(param_2 + 8),*(long *)(param_2 + 0x10),
                (*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8) >> 3) * 0x6db6db6db6db6db7);
  FUN_10a1ccb30(&uStack_58,param_2 + 0x20);
  FUN_10a71f0d0(param_1,&uStack_78);
  if ((in_stack_ffffffffffffffc0 == '\x01') && (cStack_41 < '\0')) {
    __ZdlPv(uStack_58);
  }
  FUN_10a2303d4(&stack0xffffffffffffffc8);
  return;
}



/* Entry: 10a6efba8; end: 10a6efbaf;  */

void FUN_10a6efba8(long param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lStack_78;
  long *plStack_70;
  undefined1 uStack_68;
  undefined1 uStack_58;
  undefined7 uStack_57;
  char cStack_41;
  char cStack_40;
  long **pplStack_38;
  
  if (*(long *)(param_1 + 0x98) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x1b8) == '\x01') {
    lStack_78 = *(long *)(param_1 + 0x1a8);
    plStack_70 = *(long **)(param_1 + 0x1b0);
    if (plStack_70 == (long *)0x0) {
      if (lStack_78 != 0) {
        return;
      }
      goto LAB_10a6ef9bc;
    }
    plVar5 = plStack_70 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = *plVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar4 = lStack_78 == 0;
LAB_10a6ef978:
    plVar1 = plStack_70;
    plVar5 = plStack_70 + 1;
    do {
      lVar6 = *plVar5;
      cVar3 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  else {
    FUN_10a6f08ac(&lStack_78,param_1 + -0x1f0);
    bVar4 = lStack_78 == 0;
    if (plStack_70 != (long *)0x0) goto LAB_10a6ef978;
  }
  if (!bVar4) {
    return;
  }
LAB_10a6ef9bc:
  lVar6 = *(long *)(*(long *)(param_1 + -0x80) + 0x960);
  plVar5 = *(long **)(lVar6 + 0x240);
  if ((plVar5 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 != (long *)0x0))
  {
    lVar6 = *(long *)(lVar6 + 0x238);
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
    if (lVar6 != 0) {
      return;
    }
  }
  lStack_78 = 0;
  plStack_70 = (long *)0x0;
  uStack_68 = 1;
  FUN_10a0378a8(param_2 + 0x278,&lStack_78);
  lStack_78 = CONCAT71(lStack_78._1_7_,1);
  FUN_10acf2c5c(&plStack_70,*(long *)(param_1 + 0x98) + 0xe8,param_1 + 0x188);
  uStack_58 = 0;
  cStack_40 = '\0';
  FUN_10a6efaac(param_2 + 0x410,&lStack_78);
  if ((cStack_40 == '\x01') && (cStack_41 < '\0')) {
    __ZdlPv(CONCAT71(uStack_57,uStack_58));
  }
  pplStack_38 = &plStack_70;
  FUN_10a2303d4(&pplStack_38);
  return;
}



/* Entry: 10a6efbb0; end: 10a6f0853;  */

void FUN_10a6efbb0(long param_1,long param_2)

{
  undefined **ppuVar1;
  long *plVar2;
  ulong *puVar3;
  undefined4 *puVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  code *pcVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar13;
  long lVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  long lVar19;
  double dVar20;
  double dVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 uStack_170;
  undefined7 uStack_16f;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  undefined1 uStack_148;
  undefined6 uStack_147;
  char cStack_141;
  undefined1 uStack_140;
  undefined8 uStack_13f;
  undefined4 uStack_137;
  undefined2 uStack_133;
  undefined1 uStack_131;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  int iStack_11c;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined4 uStack_ec;
  char cStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  char cStack_c8;
  undefined4 uStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x288) == 0) {
LAB_10a6f0058:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    if (*(char *)(param_1 + 0x3a8) != '\x01') {
      FUN_10a6f08ac(&ppuStack_b8,param_1);
      ppuVar17 = ppuStack_b8;
      if (ppuStack_b8 != (undefined **)0x0) goto LAB_10a6efc40;
LAB_10a6efea8:
      ppuVar18 = ppuStack_b0;
      if (ppuStack_b0 != (undefined **)0x0) {
        ppuVar1 = ppuStack_b0 + 1;
        do {
          puVar15 = *ppuVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar6) {
            *ppuVar1 = puVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar15 == (undefined *)0x0) {
          (**(code **)(*ppuStack_b0 + 0x10))(ppuStack_b0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
        }
      }
      if (((ppuVar17 == (undefined **)0x0) &&
          (plVar12 = (long *)(param_1 + 0x288), *(char *)(*plVar12 + 0xe0) == '\x01')) &&
         (*(long *)(param_2 + 0x90) != 0)) {
        lVar19 = *(long *)(*(long *)(param_1 + 0x170) + 0x960);
        ppuVar17 = *(undefined ***)(lVar19 + 0x240);
        if ((ppuVar17 != (undefined **)0x0) &&
           (__ZNSt3__119__shared_weak_count4lockEv(), ppuVar17 != (undefined **)0x0)) {
          lVar19 = *(long *)(lVar19 + 0x238);
          ppuVar18 = ppuVar17 + 1;
          do {
            puVar15 = *ppuVar18;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
            if (bVar6) {
              *ppuVar18 = puVar15 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (puVar15 == (undefined *)0x0) {
            (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          if (lVar19 != 0) goto LAB_10a6f0058;
        }
        lVar19 = *(long *)(param_2 + 0x90);
        if (((*(long *)(lVar19 + 8) == *(long *)(lVar19 + 0x10)) ||
            ((*(byte *)(*(long *)(lVar19 + 8) + 0x58) & 1) == 0)) &&
           ((*(byte *)(param_1 + 0x2ec) & 1) == 0)) {
          *(undefined1 *)(param_1 + 0x2ec) = 1;
          FUN_10a6e46f8(&uStack_130,*(undefined8 *)(*(long *)(param_1 + 0x170) + 0x960),1);
          FUN_10a6e47d0(param_1 + 0x388,&uStack_130);
          plVar10 = (long *)CONCAT44(uStack_124,uStack_128);
          if (plVar10 != (long *)0x0) {
            plVar2 = plVar10 + 1;
            do {
              lVar19 = *plVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar6) {
                *plVar2 = lVar19 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar19 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
            }
          }
          plVar10 = *(long **)(*(long *)(param_1 + 0x170) + 0x960);
          FUN_10a6eb764(plVar10,plVar12);
          (**(code **)(*plVar10 + 0x18))(&uStack_130);
          if (*(char *)(param_1 + 0x2b0) == '\x01') {
            plVar10 = *(long **)(param_1 + 0x2a8);
            if (plVar10 != (long *)0x0) {
              puVar3 = (ulong *)(plVar10 + 1);
              do {
                uVar16 = *puVar3;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                if (bVar6) {
                  *puVar3 = uVar16 - 4;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if ((uVar16 & 0x1fffffffc) == 4) {
                do {
                  uVar16 = *puVar3;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                  if (bVar6) {
                    *puVar3 = uVar16 - 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (uVar16 - 1 == 0) {
                  (**(code **)(*plVar10 + 8))();
                }
              }
            }
            *(ulong *)(param_1 + 0x2a8) = CONCAT44(uStack_12c,uStack_130);
          }
          else {
            *(ulong *)(param_1 + 0x2a8) = CONCAT44(uStack_12c,uStack_130);
            *(undefined1 *)(param_1 + 0x2b0) = 1;
          }
          FUN_10a03d13c(&uStack_130,param_1);
          uVar8 = uStack_128;
          uVar7 = uStack_130;
          uVar13 = CONCAT44(uStack_12c,uStack_130);
          ppuVar18 = (undefined **)CONCAT44(uStack_124,uStack_128);
          uStack_130 = 0;
          uStack_12c = 0;
          uStack_128 = 0;
          uStack_124 = 0;
          if (ppuVar18 != (undefined **)0x0) {
            ppuVar17 = ppuVar18 + 2;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
              if (bVar6) {
                *ppuVar17 = *ppuVar17 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            ppuVar17 = ppuVar18 + 1;
            do {
              puVar15 = *ppuVar17;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
              if (bVar6) {
                *ppuVar17 = puVar15 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (puVar15 == (undefined *)0x0) {
              (**(code **)(*ppuVar18 + 0x10))(ppuVar18);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
            }
          }
          plVar10 = (long *)CONCAT44(uStack_124,uStack_128);
          if (plVar10 != (long *)0x0) {
            plVar2 = plVar10 + 1;
            do {
              lVar19 = *plVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar6) {
                *plVar2 = lVar19 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar19 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
            }
          }
          uStack_170 = (undefined1)param_1;
          uStack_16f = (undefined7)((ulong)param_1 >> 8);
          uStack_168 = (undefined1)uVar7;
          uStack_167 = (undefined7)((ulong)uVar13 >> 8);
          uStack_160 = (undefined1)uVar8;
          uStack_15f = (undefined7)((ulong)ppuVar18 >> 8);
          if (ppuVar18 != (undefined **)0x0) {
            ppuVar17 = ppuVar18 + 2;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
              if (bVar6) {
                *ppuVar17 = *ppuVar17 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          lVar19 = *plVar12;
          if (*(char *)(lVar19 + 0xff) < '\0') {
            func_0x000107c3192c(&uStack_158,*(undefined8 *)(lVar19 + 0xe8),
                                *(undefined8 *)(lVar19 + 0xf0));
          }
          else {
            uStack_150 = (undefined1)*(undefined8 *)(lVar19 + 0xf0);
            uStack_14f = (undefined7)((ulong)*(undefined8 *)(lVar19 + 0xf0) >> 8);
            uStack_158 = (undefined1)*(undefined8 *)(lVar19 + 0xe8);
            uStack_157 = (undefined7)((ulong)*(undefined8 *)(lVar19 + 0xe8) >> 8);
            uVar13 = *(undefined8 *)(lVar19 + 0xf8);
            uStack_148 = (undefined1)uVar13;
            uStack_147 = (undefined6)((ulong)uVar13 >> 8);
            cStack_141 = (char)((ulong)uVar13 >> 0x38);
          }
          if (ppuVar18 != (undefined **)0x0) {
            ppuVar17 = ppuVar18 + 2;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
              if (bVar6) {
                *ppuVar17 = *ppuVar17 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x170) + 0x960);
          uStack_130 = 0xa71e9a4;
          uStack_12c = 1;
          uStack_128 = 0x10c142c0;
          uStack_124 = 1;
          uStack_118 = CONCAT71(uStack_167,uStack_168);
          uStack_120 = (undefined4)CONCAT71(uStack_16f,uStack_170);
          iStack_11c = (int)((uint7)uStack_16f >> 0x18);
          lStack_110 = CONCAT71(uStack_15f,uStack_160);
          if (lStack_110 != 0) {
            plVar10 = (long *)(lStack_110 + 0x10);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar6) {
                *plVar10 = *plVar10 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          if (cStack_141 < '\0') {
            func_0x000107c3192c(&uStack_108,CONCAT71(uStack_157,uStack_158),
                                CONCAT71(uStack_14f,uStack_150));
          }
          else {
            uStack_100 = CONCAT71(uStack_14f,uStack_150);
            uStack_108 = CONCAT71(uStack_157,uStack_158);
            uStack_f8 = CONCAT17(cStack_141,CONCAT61(uStack_147,uStack_148));
          }
          ppuStack_b8 = (undefined **)FUN_10a71edb0;
          ppuStack_b0 = &PTR_FUN_110c142e0;
          if (ppuVar18 != (undefined **)0x0) {
            ppuVar17 = ppuVar18 + 2;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
              if (bVar6) {
                *ppuVar17 = *ppuVar17 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          lStack_a8 = param_1;
          FUN_10a6ec4d8(uVar13,plVar12,&uStack_130,&ppuStack_b8);
          (*(code *)*ppuStack_b0)(&ppuStack_b0);
          (**(code **)CONCAT44(uStack_124,uStack_128))(&uStack_128);
          if (ppuVar18 != (undefined **)0x0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
          }
          if (cStack_141 < '\0') {
            __ZdlPv(CONCAT71(uStack_157,uStack_158));
          }
          ppuVar17 = (undefined **)CONCAT71(uStack_15f,uStack_160);
          if (ppuVar17 != (undefined **)0x0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          if (ppuVar18 != (undefined **)0x0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppuVar17 = ppuVar18;
          }
          lVar19 = *(long *)(param_2 + 0x90);
        }
        if (((*(char *)(param_1 + 0x2b0) == '\x01') &&
            (ppuVar18 = (undefined **)(param_1 + 0x2a8),
            ((uint)*(undefined8 *)(*ppuVar18 + 0x10) >> 1 & 1) != 0)) &&
           ((*(byte *)(param_1 + 0x2d0) & 1) == 0)) {
          if (((uint)*(undefined8 *)(*ppuVar18 + 0x10) >> 5 & 1) == 0) {
            ppuVar17 = ppuVar18;
            func_0x0001092af8bc();
            puVar15 = *ppuVar18;
            if ((puVar15[0xb8] & 1) == 0) goto LAB_10a6f0728;
            if (puVar15[0xb0] == '\x01') {
              uVar13 = *(undefined8 *)(puVar15 + 0xa8);
              uVar23 = *(undefined8 *)(puVar15 + 0x98);
              *(undefined8 *)(param_1 + 0x2c0) = *(undefined8 *)(puVar15 + 0xa0);
              *(undefined8 *)(param_1 + 0x2b8) = uVar23;
              *(undefined8 *)(param_1 + 0x2c8) = uVar13;
              if ((*(byte *)(param_1 + 0x2d0) & 1) == 0) {
                *(undefined1 *)(param_1 + 0x2d0) = 1;
              }
              *(undefined1 *)(param_1 + 0x2d8) = 1;
            }
            else {
              *(undefined1 *)(param_1 + 0x2d8) = 0;
            }
          }
          else {
            if (*(char *)(param_1 + 0x2b0) == '\x01') {
              plVar12 = (long *)*ppuVar18;
              if (plVar12 != (long *)0x0) {
                puVar3 = (ulong *)(plVar12 + 1);
                do {
                  uVar16 = *puVar3;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                  if (bVar6) {
                    *puVar3 = uVar16 - 4;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if ((uVar16 & 0x1fffffffc) == 4) {
                  do {
                    uVar16 = *puVar3;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                    if (bVar6) {
                      *puVar3 = uVar16 - 1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (uVar16 - 1 == 0) {
                    (**(code **)(*plVar12 + 8))();
                  }
                }
              }
              *(undefined1 *)(param_1 + 0x2b0) = 0;
            }
            if (*(char *)(param_1 + 0x2e8) == '\x01') {
              *(undefined1 *)(param_1 + 0x2e8) = 0;
            }
            if ((bRam000000011330a9e8 & 1) != 0) {
              __ZNSt13exception_ptrC1ERKS_(&ppuStack_b8,*ppuVar18 + 0x90);
              func_0x0001098bc760(&uStack_130);
              puVar4 = (undefined4 *)CONCAT44(uStack_12c,uStack_130);
              if (-1 < iStack_11c) {
                puVar4 = &uStack_130;
              }
              func_0x00010ae06f08(0,1,&UNK_10f66f567,&UNK_10f66f6a0,0x16b,&UNK_10f66f6e9,in_x6,in_x7
                                  ,puVar4);
              if (iStack_11c < 0) {
                __ZdlPv(CONCAT44(uStack_12c,uStack_130));
              }
              __ZNSt13exception_ptrD1Ev(&ppuStack_b8);
            }
            lVar11 = *(long *)(param_1 + 0x228);
            plVar12 = *(long **)(param_1 + 0x230);
            uStack_130 = (undefined4)lVar11;
            uStack_12c = (undefined4)((ulong)lVar11 >> 0x20);
            uStack_128 = SUB84(plVar12,0);
            uStack_124 = (undefined4)((ulong)plVar12 >> 0x20);
            if (plVar12 != (long *)0x0) {
              plVar10 = plVar12 + 1;
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                if (bVar6) {
                  *plVar10 = *plVar10 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            if (lVar11 != 0) {
              FUN_10a07e58c();
            }
            if (plVar12 != (long *)0x0) {
              plVar10 = plVar12 + 1;
              do {
                lVar11 = *plVar10;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                if (bVar6) {
                  *plVar10 = lVar11 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar11 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
              }
            }
            ppuVar17 = *(undefined ***)(param_1 + 0x268);
            ppuVar18 = *(undefined ***)(param_1 + 0x270);
            if (ppuVar18 != (undefined **)0x0) {
              ppuVar1 = ppuVar18 + 1;
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
                if (bVar6) {
                  *ppuVar1 = *ppuVar1 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            ppuStack_b8 = ppuVar17;
            ppuStack_b0 = ppuVar18;
            if (ppuVar17 != (undefined **)0x0) {
              FUN_10a07e58c();
            }
            if (ppuVar18 != (undefined **)0x0) {
              ppuVar1 = ppuVar18 + 1;
              do {
                puVar15 = *ppuVar1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
                if (bVar6) {
                  *ppuVar1 = puVar15 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (puVar15 == (undefined *)0x0) {
                (**(code **)(*ppuVar18 + 0x10))(ppuVar18);
                __ZNSt3__119__shared_weak_count14__release_weakEv();
                ppuVar17 = ppuVar18;
              }
            }
          }
        }
        if ((*(long *)(param_2 + 0xe8) != 0) &&
           (__ZNSt3__16chrono12steady_clock3nowEv(),
           1999999999 < (long)ppuVar17 - *(long *)(param_1 + 0x2a0))) {
          dVar21 = (*(double **)(param_2 + 0xe8))[1];
          dVar20 = **(double **)(param_2 + 0xe8);
          uStack_128 = SUB84(dVar21,0);
          uStack_124 = (undefined4)((ulong)dVar21 >> 0x20);
          uStack_130 = SUB84(dVar20,0);
          uStack_12c = (undefined4)((ulong)dVar20 >> 0x20);
          if ((*(char *)(param_1 + 0x2d8) == '\x01') && (*(char *)(param_1 + 0x2d0) == '\x01')) {
            func_0x000109472d58(param_1 + 0x2e0,param_1 + 0x2b8,&uStack_130);
            *(int *)(param_1 + 0x2dc) = (int)dVar20;
          }
        }
        lVar11 = *(long *)(param_1 + 0x388);
        if (((lVar11 != 0) &&
            (FUN_10a6e35fc(lVar11,lVar19 + 0x20,*(undefined1 *)(param_1 + 0x2e1),
                           *(undefined1 *)(param_1 + 0x2d8),*(undefined1 *)(lVar19 + 0x58)),
            *(long *)(param_2 + 0xe8) != 0)) &&
           ((__ZNSt3__16chrono12steady_clock3nowEv(),
            1999999999 < lVar11 - *(long *)(param_1 + 0x2a0) &&
            ((*(char *)(param_1 + 0x2d8) == '\x01' && (*(char *)(param_1 + 0x2d0) == '\x01')))))) {
          uVar13 = *(undefined8 *)(param_1 + 0x388);
          __ZNSt3__16chrono12steady_clock3nowEv();
          lVar14 = *(long *)(param_1 + 0x2a0);
          uVar23 = *(undefined8 *)(*(long *)(param_2 + 0xe8) + 0x18);
          FUN_10a6e9648(uVar23,uVar13);
          if (1999999999 < lVar11 - lVar14) {
            FUN_10a6e9968(uVar23,uVar13);
          }
          if ((*(byte *)(param_1 + 0x2d0) & 1) == 0) goto LAB_10a6f0728;
          if ((double)*(int *)(param_1 + 0x2dc) <= *(double *)(param_1 + 0x2c8)) {
            FUN_10a6e9e98(*(undefined8 *)(param_1 + 0x388));
          }
          else {
            FUN_10a6e9d6c();
          }
        }
        if ((*(long *)(lVar19 + 8) != *(long *)(lVar19 + 0x10)) &&
           ((*(byte *)(*(long *)(lVar19 + 8) + 0x58) & 1) != 0)) {
          lVar11 = *(long *)(param_2 + 0xd0);
          if (lVar11 == 0) {
            uStack_124 = 0;
            uStack_120 = 0;
            uStack_12c = 0;
            uStack_128 = 0;
            uStack_130 = 0x3f800000;
            iStack_11c = 0x3f800000;
            uStack_118 = 0;
            lStack_110 = 0;
            uStack_108 = 0x3f800000;
            uStack_100 = 0;
            fVar22 = 0.0;
            uStack_f8 = 0x3f80000000000000;
          }
          else {
            uStack_118 = *(undefined8 *)(lVar11 + 0x20);
            uStack_108 = *(undefined8 *)(lVar11 + 0x30);
            lStack_110 = *(long *)(lVar11 + 0x28);
            uStack_f8 = *(undefined8 *)(lVar11 + 0x40);
            uStack_128 = (undefined4)*(undefined8 *)(lVar11 + 0x10);
            uStack_124 = (undefined4)((ulong)*(undefined8 *)(lVar11 + 0x10) >> 0x20);
            uStack_130 = (undefined4)*(undefined8 *)(lVar11 + 8);
            uStack_12c = (undefined4)((ulong)*(undefined8 *)(lVar11 + 8) >> 0x20);
            uStack_120 = (undefined4)*(undefined8 *)(lVar11 + 0x18);
            iStack_11c = (int)((ulong)*(undefined8 *)(lVar11 + 0x18) >> 0x20);
            uStack_100 = CONCAT44((float)((ulong)*(undefined8 *)(lVar11 + 0x38) >> 0x20) * 100.0,
                                  (float)*(undefined8 *)(lVar11 + 0x38) * 100.0);
            fVar22 = (float)uStack_f8 * 100.0;
          }
          uStack_f8 = CONCAT44(uStack_f8._4_4_,fVar22);
          func_0x0001094f5708(&ppuStack_b8,&uStack_130);
          lVar11 = *(long *)(lVar19 + 8);
          if ((lVar11 == *(long *)(lVar19 + 0x10)) || ((*(byte *)(lVar11 + 0x58) & 1) == 0))
          goto LAB_10a6f0728;
          uStack_170 = *(undefined1 *)(lVar11 + 0x18);
          uVar13 = *(undefined8 *)(lVar11 + 0x41);
          uStack_147 = (undefined6)uVar13;
          cStack_141 = (char)((ulong)uVar13 >> 0x30);
          uStack_140 = (undefined1)((ulong)uVar13 >> 0x38);
          uStack_14f = (undefined7)*(undefined8 *)(lVar11 + 0x39);
          uStack_148 = (undefined1)((ulong)*(undefined8 *)(lVar11 + 0x39) >> 0x38);
          uStack_13f = *(undefined8 *)(lVar11 + 0x49);
          uStack_137 = *(undefined4 *)(lVar11 + 0x51);
          uStack_133 = *(undefined2 *)(lVar11 + 0x55);
          uStack_131 = *(undefined1 *)(lVar11 + 0x57);
          uStack_157 = (undefined7)*(undefined8 *)(lVar11 + 0x31);
          uStack_150 = (undefined1)((ulong)*(undefined8 *)(lVar11 + 0x31) >> 0x38);
          uStack_15f = (undefined7)*(undefined8 *)(lVar11 + 0x29);
          uStack_158 = (undefined1)((ulong)*(undefined8 *)(lVar11 + 0x29) >> 0x38);
          uStack_167 = (undefined7)*(undefined8 *)(lVar11 + 0x21);
          uStack_160 = (undefined1)((ulong)*(undefined8 *)(lVar11 + 0x21) >> 0x38);
          uStack_16f = (undefined7)*(undefined8 *)(lVar11 + 0x19);
          uStack_168 = (undefined1)((ulong)*(undefined8 *)(lVar11 + 0x19) >> 0x38);
          func_0x000109519fd0(&uStack_1b0,&ppuStack_b8,&uStack_170);
          *(undefined8 *)(param_1 + 0x2f8) = uStack_1a8;
          *(undefined8 *)(param_1 + 0x2f0) = uStack_1b0;
          *(undefined8 *)(param_1 + 0x308) = uStack_198;
          *(undefined8 *)(param_1 + 0x300) = uStack_1a0;
          *(undefined8 *)(param_1 + 0x318) = uStack_188;
          *(undefined8 *)(param_1 + 0x310) = uStack_190;
          *(undefined8 *)(param_1 + 0x328) = uStack_178;
          *(undefined8 *)(param_1 + 800) = uStack_180;
          if ((*(byte *)(param_1 + 0x330) & 1) == 0) {
            *(undefined1 *)(param_1 + 0x330) = 1;
          }
        }
      }
      goto LAB_10a6f0058;
    }
    ppuVar17 = *(undefined ***)(param_1 + 0x398);
    ppuStack_b0 = *(undefined ***)(param_1 + 0x3a0);
    if (ppuStack_b0 != (undefined **)0x0) {
      ppuVar18 = ppuStack_b0 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar6) {
          *ppuVar18 = *ppuVar18 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    ppuStack_b8 = ppuVar17;
    if (ppuVar17 == (undefined **)0x0) goto LAB_10a6efea8;
LAB_10a6efc40:
    ppuVar17 = ppuStack_b8;
    (**(code **)(*ppuStack_b8 + 0x18))(&uStack_130,ppuStack_b8);
    *(undefined8 *)(param_1 + 0x318) = uStack_108;
    *(long *)(param_1 + 0x310) = lStack_110;
    *(undefined8 *)(param_1 + 0x328) = uStack_f8;
    *(undefined8 *)(param_1 + 800) = uStack_100;
    *(undefined1 *)(param_1 + 0x330) = uStack_f0;
    *(ulong *)(param_1 + 0x2f8) = CONCAT44(uStack_124,uStack_128);
    *(ulong *)(param_1 + 0x2f0) = CONCAT44(uStack_12c,uStack_130);
    *(undefined8 *)(param_1 + 0x308) = uStack_118;
    *(ulong *)(param_1 + 0x300) = CONCAT44(iStack_11c,uStack_120);
    *(undefined4 *)(param_1 + 0x2dc) = uStack_ec;
    *(undefined4 *)(param_1 + 0x3d4) = uStack_c0;
    if ((cStack_c8 != '\x01') || ((*(byte *)(param_1 + 0x3c8) & 1) != 0)) {
LAB_10a6efdb0:
      if ((cStack_e8 == '\x01') && ((*(byte *)(param_1 + 0x3d0) & 1) == 0)) {
        *(undefined1 *)(param_1 + 0x3d0) = 1;
        lVar19 = *(long *)(param_1 + 600);
        plVar12 = *(long **)(param_1 + 0x260);
        if (plVar12 != (long *)0x0) {
          plVar10 = plVar12 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar6) {
              *plVar10 = *plVar10 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        if (lVar19 != 0) {
          FUN_10a07e58c();
        }
        if (plVar12 != (long *)0x0) {
          plVar10 = plVar12 + 1;
          do {
            lVar19 = *plVar10;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar6) {
              *plVar10 = lVar19 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar19 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
          }
        }
        lVar19 = *(long *)(param_1 + 0x218);
        plVar12 = *(long **)(param_1 + 0x220);
        if (plVar12 != (long *)0x0) {
          plVar10 = plVar12 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar6) {
              *plVar10 = *plVar10 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        if (lVar19 != 0) {
          FUN_10a07e58c();
        }
        if (plVar12 != (long *)0x0) {
          plVar10 = plVar12 + 1;
          do {
            lVar19 = *plVar10;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar6) {
              *plVar10 = lVar19 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar19 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
          }
        }
      }
      if ((cStack_c8 == '\x01') && (cStack_c9 < '\0')) {
        __ZdlPv(auStack_e0[0]);
      }
      goto LAB_10a6efea8;
    }
    plVar12 = (long *)(param_1 + 0x3b0);
    func_0x00010a1cca60(plVar12,auStack_e0);
    if ((bRam000000011330a9e8 & 1) == 0) {
LAB_10a6efcf0:
      lVar19 = *(long *)(param_1 + 0x228);
      plVar12 = *(long **)(param_1 + 0x230);
      if (plVar12 != (long *)0x0) {
        plVar10 = plVar12 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *plVar10 = *plVar10 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if (lVar19 != 0) {
        FUN_10a07e58c();
      }
      if (plVar12 != (long *)0x0) {
        plVar10 = plVar12 + 1;
        do {
          lVar19 = *plVar10;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *plVar10 = lVar19 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      lVar19 = *(long *)(param_1 + 0x268);
      plVar12 = *(long **)(param_1 + 0x270);
      if (plVar12 != (long *)0x0) {
        plVar10 = plVar12 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *plVar10 = *plVar10 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if (lVar19 != 0) {
        FUN_10a07e58c();
      }
      if (plVar12 != (long *)0x0) {
        plVar10 = plVar12 + 1;
        do {
          lVar19 = *plVar10;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *plVar10 = lVar19 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      goto LAB_10a6efdb0;
    }
    if ((*(byte *)(param_1 + 0x3c8) & 1) != 0) {
      if (*(char *)(param_1 + 0x3c7) < '\0') {
        plVar12 = (long *)*plVar12;
      }
      func_0x00010ae06f08(0,1,&UNK_10f66f567,&UNK_10f66f6fb,0x1cd,&UNK_10f66f763,in_x6,in_x7,plVar12
                         );
      goto LAB_10a6efcf0;
    }
  }
  FUN_10a04f808();
LAB_10a6f0728:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10a6f072c);
  (*pcVar9)();
}



/* Entry: 10a6f0854; end: 10a6f08ab;  */

void FUN_10a6f0854(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 0x260);
  *param_1 = *(undefined8 *)(param_2 + 600);
  param_1[1] = lVar4;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
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



/* Entry: 10a6f08ac; end: 10a6f0977;  */

/* WARNING: Removing unreachable block (ram,0x00010a6f0938) */
/* WARNING: Removing unreachable block (ram,0x00010a6f093c) */
/* WARNING: Removing unreachable block (ram,0x00010a6f0944) */
/* WARNING: Removing unreachable block (ram,0x00010a6f094c) */
/* WARNING: Removing unreachable block (ram,0x00010a6f0950) */

void FUN_10a6f08ac(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_30;
  long lStack_28;
  
  if (*(long *)(param_2 + 0x288) == 0) {
    uStack_30 = 0;
    lStack_28 = 0;
  }
  else {
    FUN_10a6dfd14(&uStack_30,*(undefined8 *)(*(long *)(param_2 + 0x170) + 0x960),param_2 + 0x288);
  }
  if (*(char *)(param_2 + 0x3a8) == '\x01') {
    func_0x00010a711e00(param_2 + 0x398);
  }
  *(undefined8 *)(param_2 + 0x398) = uStack_30;
  *(long *)(param_2 + 0x3a0) = lStack_28;
  *(undefined1 *)(param_2 + 0x3a8) = 1;
  *param_1 = uStack_30;
  param_1[1] = lStack_28;
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
  return;
}



/* Entry: 10a6f0978; end: 10a6f0a6b;  */

undefined1  [16] FUN_10a6f0978(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 6;
  auVar1._0_8_ = &UNK_10f671303;
  return auVar1;
}



/* Entry: 10a6f0a6c; end: 10a6f0b67;  */

void FUN_10a6f0a6c(undefined8 param_1)

{
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puStack_a8 = (undefined *)0x0;
  uStack_a0 = 0xffffffff00000001;
  uStack_98 = CONCAT44(uStack_98._4_4_,0xffffffff);
  puStack_90 = &UNK_10f66de00;
  puStack_80 = (undefined *)0x0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = CONCAT44(uStack_68._4_4_,0xffffffff);
  FUN_10a6f0b68(param_1,&puStack_a8);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f66e51f;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f66de00;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xac;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a71f244();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f66f512;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f66de00;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xac;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a71f41c(param_1,&puStack_a8);
  FUN_10a71f56c(param_1);
  return;
}



/* Entry: 10a6f0b68; end: 10a6f0c3f;  */

/* WARNING: Removing unreachable block (ram,0x00010a6f0c00) */

undefined1  [16] FUN_10a6f0b68(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f671303,6);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a71f148(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a6f0c40; end: 10a6f136b;  */

undefined **** FUN_10a6f0c40(undefined ****param_1)

{
  undefined ****ppppuVar1;
  long *plVar2;
  undefined8 ****ppppuVar3;
  undefined8 **ppuVar4;
  undefined1 uVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  code *pcVar12;
  int iVar13;
  undefined8 ***pppuVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 ****ppppuVar18;
  undefined8 ***pppuVar19;
  undefined8 *extraout_x8;
  long *plVar20;
  ulong uVar21;
  long lVar22;
  undefined ***pppuVar23;
  undefined ***pppuVar24;
  undefined ****ppppuVar25;
  undefined ****ppppuVar26;
  ulong uVar27;
  ulong uVar28;
  undefined **ppuVar29;
  undefined **ppuVar30;
  undefined **ppuVar31;
  undefined ***pppuStack_268;
  undefined ***pppuStack_260;
  undefined8 uStack_258;
  undefined ***pppuStack_250;
  undefined7 uStack_248;
  undefined4 uStack_241;
  uint uStack_23d;
  undefined1 uStack_239;
  undefined ***pppuStack_230;
  undefined **ppuStack_228;
  undefined8 uStack_220;
  undefined ***pppuStack_210;
  undefined ***pppuStack_208;
  undefined8 uStack_200;
  undefined ***pppuStack_1f8;
  undefined ***pppuStack_1f0;
  undefined ***pppuStack_1e8;
  undefined ***pppuStack_1e0;
  code *pcStack_168;
  undefined **ppuStack_160;
  code *pcStack_158;
  long lStack_128;
  undefined **ppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined ***pppuStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 ***apppuStack_d8 [2];
  char cStack_c1;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 ***pppuStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000109887da8(apppuStack_d8,&UNK_10f6345f0,0x13);
  ppppuVar18 = (undefined8 ****)apppuStack_d8[0];
  if (-1 < cStack_c1) {
    ppppuVar18 = apppuStack_d8;
  }
  param_1[0x36] = (undefined ***)&PTR_DAT_110c14c08;
  ppppuVar3 = (undefined8 ****)&UNK_10f66de00;
  if (ppppuVar18 != (undefined8 ****)0x0) {
    ppppuVar3 = ppppuVar18;
  }
  func_0x000107c2c4dc(param_1 + 0x37,ppppuVar3);
  pppuStack_a8 = (undefined8 ***)0x0;
  pcStack_a0 = (code *)0x0;
  uStack_e8 = 0xffffffffffffffff;
  uStack_f0 = 0x100000064;
  uStack_90 = (undefined **)0xffffffffffffffff;
  uStack_98 = (undefined **)0x100000064;
  puStack_80 = (undefined *)0x0;
  puStack_88 = (undefined *)0x0;
  puStack_70 = (undefined *)0x0;
  puStack_78 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0xffffffff;
  puStack_58 = (undefined *)0x0;
  puStack_50 = (undefined *)0x0;
  pppuStack_b0 = ppppuVar18;
  func_0x00010a052690(param_1 + 0x2d,&pppuStack_b0);
  ppppuVar25 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)ppppuVar25 & 1) == 0) {
    ppuStack_c0 = &PTR_DAT_110c14c08;
    uStack_b8 = 0;
    pppuStack_b0 = (undefined8 ***)&PTR_DAT_110c42c58;
    pppuStack_a8 = (undefined8 ***)0x0;
    pcStack_a0 = (code *)CONCAT71(pcStack_a0._1_7_,1);
    func_0x0001098949cc(param_1,ppppuVar18,&ppuStack_c0,&pppuStack_b0);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(apppuStack_d8[0]);
  }
  ppppuVar25 = param_1;
  FUN_10a0051e8(param_1,100,0x100,0xffffffff,0xffffffff,4);
  if (((ulong)ppppuVar25 & 1) == 0) {
    if (((ulong)param_1[0xf] & 1) == 0) goto LAB_10a6f1340;
    FUN_10a054dac(param_1,&UNK_10f66f799,FUN_10a71f628,1,param_1[8]);
  }
  ppppuVar25 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)ppppuVar25 & 1) == 0) {
    if (((ulong)param_1[0xf] & 1) == 0) goto LAB_10a6f1340;
    FUN_10a054dac(param_1,&UNK_10f66f7a6,FUN_10a71f7b4,4,param_1[8]);
  }
  ppppuVar25 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)ppppuVar25 & 1) == 0) {
    if (((ulong)param_1[0xf] & 1) == 0) goto LAB_10a6f1340;
    FUN_10a054dac(param_1,&UNK_10f66f7b3,FUN_10a71f8fc,1,param_1[8]);
  }
  ppppuVar25 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)ppppuVar25 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f66f7be,FUN_10a71fa5c,FUN_10a71fb18);
  }
  ppppuVar25 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)ppppuVar25 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f66de2d,FUN_10a71fbfc,FUN_10a71fcdc);
  }
  param_1[0x36] = (undefined ***)PTR___ZTIDn_1103469e8;
  pppuVar24 = param_1[0x2e];
  if (param_1[0x2d] == pppuVar24) {
LAB_10a6f1340:
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x10a6f1344);
    (*pcVar12)();
  }
  pppuStack_a8 = (undefined8 ***)pppuVar24[-0xc];
  pppuStack_b0 = (undefined8 ***)pppuVar24[-0xd];
  puStack_88 = (undefined *)pppuVar24[-8];
  ppuVar29 = pppuVar24[-9];
  ppuVar30 = pppuVar24[-10];
  pcStack_a0 = (code *)pppuVar24[-0xb];
  puStack_78 = (undefined *)pppuVar24[-6];
  puStack_80 = (undefined *)pppuVar24[-7];
  puStack_70 = (undefined *)pppuVar24[-5];
  puStack_50 = (undefined *)pppuVar24[-1];
  puStack_58 = (undefined *)pppuVar24[-2];
  ppuVar31 = pppuVar24[-3];
  uStack_68 = SUB84(pppuVar24[-4],0);
  uStack_64 = (undefined4)((ulong)pppuVar24[-4] >> 0x20);
  uStack_60 = SUB84(ppuVar31,0);
  uStack_5c = (undefined4)((ulong)ppuVar31 >> 0x20);
  param_1[0x2e] = pppuVar24 + -0xd;
  uStack_98._4_4_ = (undefined4)((ulong)ppuVar30 >> 0x20);
  uVar10 = uStack_98._4_4_;
  uStack_90._4_4_ = (undefined4)((ulong)ppuVar29 >> 0x20);
  uVar11 = uStack_90._4_4_;
  ppppuVar25 = param_1;
  uStack_98 = ppuVar30;
  uStack_90 = ppuVar29;
  FUN_10a0051e8(param_1,(ulong)ppuVar30 & 0xffffffff,uVar10,(ulong)ppuVar31 & 0xffffffff,
                (ulong)ppuVar29 & 0xffffffff,uVar11);
  if (((ulong)ppppuVar25 & 1) == 0) {
    func_0x000109894f40(param_1,0);
    FUN_10a054234(param_1,&pppuStack_b0,param_1 + 0x37,&UNK_10f6345f0,0x13);
    FUN_10a05431c(param_1);
  }
  pppuStack_a8 = (undefined8 ***)0x0;
  pcStack_a0 = (code *)0x0;
  pppuStack_b0 = (undefined8 ***)&UNK_10f65504c;
  uStack_90 = (undefined **)uStack_e8;
  uStack_98 = (undefined **)uStack_f0;
  puStack_88 = &UNK_10f66de00;
  puStack_80 = (undefined *)0x0;
  puStack_70 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_64 = 0;
  puStack_78 = &UNK_10f66de00;
  uStack_60 = 0xffffffff;
  puStack_58 = (undefined *)0x0;
  puStack_50 = (undefined *)0x0;
  func_0x00010a004eb4(param_1,&pppuStack_b0);
  apppuStack_d8[0] = (undefined8 ***)&UNK_10f66f7da;
  pppuStack_a8 = apppuStack_d8;
  pppuStack_b0 = (undefined8 ***)&UNK_10f66f7cb;
  pcStack_a0 = (code *)0x1;
  uStack_90 = (undefined **)0x4ffffffff;
  uStack_98 = (undefined **)0x10000000064;
  puStack_88 = &UNK_10f66de00;
  puStack_78 = (undefined *)0x0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_64 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0xffffffff;
  puStack_58 = (undefined *)0x0;
  puStack_50 = (undefined *)0x0;
  FUN_10a6f136c(param_1,&pppuStack_b0,FUN_10a6f143c);
  ppppuVar25 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)ppppuVar25 & 1) == 0) {
    pppuStack_b0 = (undefined8 ***)FUN_10a71ff3c;
    pppuStack_a8 = (undefined8 ***)&PTR_FUN_110c143b8;
    pcStack_a0 = FUN_10a6f1af8;
    if (param_1[2] == param_1[3]) goto LAB_10a6f1340;
    FUN_10a0544d8(param_1,&UNK_10f66f7e5,&pppuStack_b0,2,param_1[3] + -1);
    (*(code *)*pppuStack_a8)(&pppuStack_a8);
  }
  ppppuVar25 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)ppppuVar25 & 1) == 0) {
    pppuStack_b0 = (undefined8 ***)FUN_10a72013c;
    pppuStack_a8 = (undefined8 ***)&PTR_FUN_110c143d0;
    pcStack_a0 = FUN_10a6f1cd8;
    if (param_1[2] == param_1[3]) goto LAB_10a6f1340;
    FUN_10a0544d8(param_1,&UNK_10f66f7fc,&pppuStack_b0,3,param_1[3] + -1);
    (*(code *)*pppuStack_a8)(&pppuStack_a8);
  }
  apppuStack_d8[0] = (undefined8 ***)&DAT_10f66f80f;
  pppuStack_a8 = apppuStack_d8;
  pppuStack_b0 = (undefined8 ***)&UNK_10f66f806;
  pcStack_a0 = (code *)0x1;
  uStack_90 = (undefined **)uStack_e8;
  uStack_98 = (undefined **)uStack_f0;
  puStack_88 = &UNK_10f66de00;
  puStack_80 = (undefined *)0x0;
  puStack_70 = (undefined *)0x0;
  puStack_78 = (undefined *)0x0;
  uStack_68 = 0xbf;
  uStack_64 = 0;
  uStack_60 = 0xffffffff;
  puStack_58 = (undefined *)0x0;
  puStack_50 = (undefined *)0x0;
  FUN_10a6f136c(param_1,&pppuStack_b0,FUN_10a6f1fec);
  uStack_90 = (undefined **)uStack_e8;
  uStack_98 = (undefined **)uStack_f0;
  pppuStack_a8 = (undefined8 ***)0x0;
  pcStack_a0 = (code *)0x0;
  pppuStack_b0 = (undefined8 ***)&UNK_10f66f817;
  puStack_88 = &UNK_10f66de00;
  puStack_80 = (undefined *)0x0;
  puStack_70 = (undefined *)0x0;
  puStack_78 = (undefined *)0x0;
  uStack_68 = 0xe5;
  uStack_64 = 0;
  uStack_60 = 0xffffffff;
  puStack_58 = (undefined *)0x0;
  puStack_50 = (undefined *)0x0;
  FUN_10a6f22e4(param_1,&pppuStack_b0,FUN_10a6e07a0);
  pppuStack_a8 = (undefined8 ***)0x0;
  pcStack_a0 = (code *)0x0;
  pppuStack_b0 = (undefined8 ***)&UNK_10f66f823;
  uStack_e8 = 0xffffffffffffffff;
  uStack_f0 = 0x100000019;
  uStack_90 = (undefined **)0xffffffffffffffff;
  uStack_98 = (undefined **)0x100000019;
  puStack_88 = &UNK_10f66de00;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  puStack_78 = (undefined *)0x0;
  uStack_64 = 0x124;
  uStack_60 = 0xffffffff;
  puStack_58 = (undefined *)0x0;
  puStack_50 = (undefined *)0x0;
  FUN_10a6f22e4(param_1,&pppuStack_b0,FUN_10a6ebb74);
  pppuStack_a8 = (undefined8 ***)0x0;
  pcStack_a0 = (code *)0x0;
  pppuStack_b0 = (undefined8 ***)&UNK_10f66f830;
  uStack_90 = (undefined **)uStack_e8;
  uStack_98 = (undefined **)uStack_f0;
  puStack_88 = &UNK_10f66de00;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  puStack_78 = (undefined *)0x0;
  uStack_64 = 0x148;
  uStack_60 = 0xffffffff;
  puStack_58 = (undefined *)0x0;
  puStack_50 = (undefined *)0x0;
  FUN_10a6f22e4(param_1,&pppuStack_b0,0x10a6ebb84);
  pppuStack_a8 = (undefined8 ***)0x0;
  pcStack_a0 = (code *)0x0;
  pppuStack_b0 = (undefined8 ***)&UNK_10f66f83f;
  uStack_90 = (undefined **)uStack_e8;
  uStack_98 = (undefined **)uStack_f0;
  puStack_88 = &UNK_10f66de00;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  puStack_78 = (undefined *)0x0;
  uStack_64 = 0x148;
  uStack_60 = 0xffffffff;
  puStack_58 = (undefined *)0x0;
  puStack_50 = (undefined *)0x0;
  FUN_10a6f22e4(param_1,&pppuStack_b0,FUN_10a6ebb94);
  pppuStack_a8 = (undefined8 ***)0x0;
  pcStack_a0 = (code *)0x0;
  pppuStack_b0 = (undefined8 ***)&UNK_10f66f84b;
  uStack_90 = (undefined **)uStack_e8;
  uStack_98 = (undefined **)uStack_f0;
  puStack_88 = &UNK_10f66de00;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  puStack_78 = (undefined *)0x0;
  uStack_64 = 0x148;
  uStack_60 = 0xffffffff;
  puStack_58 = (undefined *)0x0;
  puStack_50 = (undefined *)0x0;
  FUN_10a6f22e4(param_1,&pppuStack_b0,0x10a6ebbc4);
  pppuStack_a8 = (undefined8 ***)0x0;
  pcStack_a0 = (code *)0x0;
  pppuStack_b0 = (undefined8 ***)&UNK_10f66f857;
  uStack_90 = (undefined **)uStack_e8;
  uStack_98 = (undefined **)uStack_f0;
  puStack_88 = &UNK_10f66de00;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  puStack_78 = (undefined *)0x0;
  uStack_64 = 0x148;
  uStack_60 = 0xffffffff;
  puStack_58 = (undefined *)0x0;
  puStack_50 = (undefined *)0x0;
  pcVar12 = FUN_10a6f23b4;
  ppppuVar18 = &pppuStack_b0;
  FUN_10a6f22e4(param_1);
  func_0x00010a004064();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  if (cStack_c1 < '\0') {
    __ZdlPv(apppuStack_d8[0]);
  }
  ppppuVar26 = param_1;
  __Unwind_Resume();
  ppuStack_120 = &PTR_DAT_110c14c08;
  puStack_118 = &UNK_10f66de00;
  uStack_110 = 0xffffffff;
  pcStack_f8 = FUN_10a6f136c;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar19 = (undefined8 ***)(ulong)*(uint *)(ppppuVar18 + 3);
  ppppuVar25 = ppppuVar26;
  pppuStack_108 = (undefined ***)param_1;
  puStack_100 = &stack0xfffffffffffffff0;
  FUN_10a0051e8();
  if (((ulong)ppppuVar25 & 1) == 0) {
    pppuVar19 = *ppppuVar18;
    pcStack_168 = FUN_10a71fdd8;
    ppuStack_160 = &PTR_FUN_110c143a0;
    pcStack_158 = pcVar12;
    if (ppppuVar26[2] == ppppuVar26[3]) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10a6f1438);
      (*pcVar12)();
    }
    FUN_10a0544d8(ppppuVar26,pppuVar19,&pcStack_168,1,ppppuVar26[3] + -1);
    ppppuVar25 = (undefined ****)&ppuStack_160;
    (*(code *)*ppuStack_160)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return ppppuVar26;
  }
  ___stack_chk_fail();
  if ((bRam00000001137eb908 & 1) == 0) {
    iVar13 = 0x137eb908;
    ___cxa_guard_acquire();
    if (iVar13 != 0) {
      FUN_10a6f2a60();
      ___cxa_atexit(FUN_10a6f2f38,0x1137eb910,0x100000000);
      ___cxa_guard_release(0x1137eb908);
    }
  }
  pppuVar14 = pppuVar19;
  __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcm(pppuVar19,0x3a,0);
  if (pppuVar14 != (undefined8 ***)0xffffffffffffffff) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
              (&pppuStack_210,pppuVar19,0,pppuVar14,&pppuStack_230);
    uVar15 = 0x1137eb910;
    func_0x000107c2b05c(0x1137eb910,&pppuStack_210);
    uVar9 = uRam00000001137eb918;
    if (uRam00000001137eb918 != 0) {
      uVar27 = uRam00000001137eb918 - 1;
      if ((uRam00000001137eb918 & uVar27) == 0) {
        uVar28 = uVar27 & uVar15;
      }
      else {
        uVar28 = uVar15;
        if (uRam00000001137eb918 <= uVar15) {
          uVar28 = 0;
          if (uRam00000001137eb918 != 0) {
            uVar28 = uVar15 / uRam00000001137eb918;
          }
          uVar28 = uVar15 - uVar28 * uRam00000001137eb918;
        }
      }
      plVar20 = *(long **)(lRam00000001137eb910 + uVar28 * 8);
      if (plVar20 != (long *)0x0) {
        for (plVar20 = (long *)*plVar20; plVar20 != (long *)0x0; plVar20 = (long *)*plVar20) {
          uVar21 = plVar20[1];
          if (uVar15 == uVar21) {
            uVar21 = 0x1137eb910;
            func_0x000107c2b068(0x1137eb910,plVar20 + 2,&pppuStack_210);
            if ((uVar21 & 1) != 0) {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                        (&pppuStack_230,pppuVar19,(long)pppuVar14 + 1,0xffffffffffffffff,
                         &pppuStack_250);
              pppuVar24 = (undefined ***)ppuStack_228;
              if (-1 < (long)uStack_220) {
                pppuVar24 = (undefined ***)((ulong)uStack_220 >> 0x38);
              }
              if (pppuVar24 != (undefined ***)0x0) {
                if (ppppuVar25 == (undefined ****)0x0) {
                  uVar5 = *(undefined1 *)(plVar20 + 5);
                  puVar17 = (undefined8 *)0x118;
                  __Znwm();
                  puVar17[1] = 0;
                  puVar17[2] = 0;
                  *puVar17 = &PTR_FUN_110c14bc8;
                  pppuVar24 = (undefined ***)(puVar17 + 3);
                  FUN_10a6f27ec(pppuVar24,0,uVar5,&pppuStack_230);
                  uStack_248 = SUB87(puVar17,0);
                  uStack_241._0_1_ = (undefined1)((ulong)puVar17 >> 0x38);
                  pppuStack_250 = pppuVar24;
                  FUN_10a6ff650(&pppuStack_250,puVar17 + 8,pppuVar24);
                  ppppuVar25 = &pppuStack_250;
                  FUN_10a6ff4ac(extraout_x8,ppppuVar25);
                  ppppuVar26 = (undefined ****)CONCAT17((undefined1)uStack_241,uStack_248);
                  if (ppppuVar26 == (undefined ****)0x0) goto LAB_10a6f18b0;
                  ppppuVar1 = ppppuVar26 + 1;
                  do {
                    pppuVar24 = *ppppuVar1;
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
                    if (bVar7) {
                      *ppppuVar1 = (undefined ***)((long)pppuVar24 + -1);
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                }
                else {
                  ppppuVar26 = (undefined ****)ppppuVar25[0x10b];
                  ppppuVar25 = (undefined ****)ppppuVar25[0x10c];
                  if (ppppuVar25 != (undefined ****)0x0) {
                    ppppuVar1 = ppppuVar25 + 1;
                    do {
                      cVar6 = '\x01';
                      bVar7 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
                      if (bVar7) {
                        *ppppuVar1 = (undefined ***)((long)*ppppuVar1 + 1);
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                  }
                  uVar16 = 0x100;
                  pppuStack_1f8 = (undefined ***)ppppuVar26;
                  pppuStack_1f0 = (undefined ***)ppppuVar25;
                  __Znwm(0x100);
                  FUN_10a6f27ec();
                  pppuStack_1e8 = (undefined ***)ppppuVar26;
                  pppuStack_1e0 = (undefined ***)ppppuVar25;
                  if (ppppuVar25 != (undefined ****)0x0) {
                    ppppuVar1 = ppppuVar25 + 1;
                    do {
                      cVar6 = '\x01';
                      bVar7 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
                      if (bVar7) {
                        *ppppuVar1 = (undefined ***)((long)*ppppuVar1 + 1);
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                    ppppuVar1 = ppppuVar25 + 2;
                    do {
                      cVar6 = '\x01';
                      bVar7 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
                      if (bVar7) {
                        *ppppuVar1 = (undefined ***)((long)*ppppuVar1 + 1);
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                    do {
                      cVar6 = '\x01';
                      bVar7 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
                      if (bVar7) {
                        *ppppuVar1 = (undefined ***)((long)*ppppuVar1 + 1);
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar25);
                  }
                  pppuStack_268 = (undefined ***)ppppuVar26;
                  pppuStack_260 = (undefined ***)ppppuVar25;
                  FUN_10a720450(&pppuStack_250,uVar16,&pppuStack_268);
                  FUN_10a6ff4ac(extraout_x8,&pppuStack_250);
                  plVar20 = (long *)CONCAT17((undefined1)uStack_241,uStack_248);
                  if (plVar20 != (long *)0x0) {
                    plVar2 = plVar20 + 1;
                    do {
                      lVar22 = *plVar2;
                      cVar6 = '\x01';
                      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                      if (bVar7) {
                        *plVar2 = lVar22 + -1;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                    if (lVar22 == 0) {
                      (**(code **)(*plVar20 + 0x10))(plVar20);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
                    }
                  }
                  if ((undefined ****)pppuStack_260 != (undefined ****)0x0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  pppuVar24 = pppuStack_1e0;
                  if ((undefined ****)pppuStack_1e0 != (undefined ****)0x0) {
                    ppppuVar25 = (undefined ****)(pppuStack_1e0 + 1);
                    do {
                      pppuVar23 = *ppppuVar25;
                      cVar6 = '\x01';
                      bVar7 = (bool)ExclusiveMonitorPass(ppppuVar25,0x10);
                      if (bVar7) {
                        *ppppuVar25 = (undefined ***)((long)pppuVar23 + -1);
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                    if (pppuVar23 == (undefined ***)0x0) {
                      (*(code *)(*pppuStack_1e0)[2])(pppuStack_1e0);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar24);
                    }
                  }
                  ppppuVar25 = (undefined ****)pppuStack_1f8;
                  if (((undefined ****)pppuStack_1f8 != (undefined ****)0x0) &&
                     (pppuVar24 = (undefined ***)*extraout_x8, pppuVar24 != (undefined ***)0x0)) {
                    lVar22 = extraout_x8[1];
                    uStack_248 = (undefined7)lVar22;
                    uStack_241._0_1_ = (undefined1)((ulong)lVar22 >> 0x38);
                    if (lVar22 != 0) {
                      plVar20 = (long *)(lVar22 + 8);
                      do {
                        cVar6 = '\x01';
                        bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                        if (bVar7) {
                          *plVar20 = *plVar20 + 1;
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                    }
                    pppuStack_250 = pppuVar24;
                    FUN_10aa88c30(pppuStack_1f8,&pppuStack_250);
                    ppppuVar26 = (undefined ****)CONCAT17((undefined1)uStack_241,uStack_248);
                    if (ppppuVar26 != (undefined ****)0x0) {
                      ppppuVar1 = ppppuVar26 + 1;
                      do {
                        pppuVar24 = *ppppuVar1;
                        cVar6 = '\x01';
                        bVar7 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
                        if (bVar7) {
                          *ppppuVar1 = (undefined ***)((long)pppuVar24 + -1);
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                      if (pppuVar24 == (undefined ***)0x0) {
                        (*(code *)(*ppppuVar26)[2])(ppppuVar26);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar26);
                        ppppuVar25 = ppppuVar26;
                      }
                    }
                  }
                  if ((undefined ****)pppuStack_1f0 == (undefined ****)0x0) goto LAB_10a6f18b0;
                  ppppuVar1 = (undefined ****)(pppuStack_1f0 + 1);
                  do {
                    pppuVar24 = *ppppuVar1;
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
                    if (bVar7) {
                      *ppppuVar1 = (undefined ***)((long)pppuVar24 + -1);
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                    ppppuVar26 = (undefined ****)pppuStack_1f0;
                  } while (cVar6 != '\0');
                }
                if (pppuVar24 == (undefined ***)0x0) {
                  (*(code *)(*ppppuVar26)[2])(ppppuVar26);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar26);
                  ppppuVar25 = ppppuVar26;
                }
LAB_10a6f18b0:
                if (uStack_220._7_1_ < '\0') {
                  __ZdlPv(pppuStack_230);
                  ppppuVar25 = (undefined ****)pppuStack_230;
                }
                if (uStack_200._7_1_ < '\0') {
                  __ZdlPv(pppuStack_210);
                  ppppuVar25 = (undefined ****)pppuStack_210;
                }
                return ppppuVar25;
              }
              ppppuVar25 = (undefined ****)0x28;
              __Znwm();
              uStack_258 = 0x8000000000000028;
              pppuStack_260 = (undefined ***)0x25;
              ppppuVar25[1] = (undefined ***)0x206d6f726620676e;
              *ppppuVar25 = (undefined ***)0x697373696d204449;
              ppppuVar25[3] = (undefined ***)0x7461636f4c206465;
              ppppuVar25[2] = (undefined ***)0x7a696c6169726573;
              *(undefined8 *)((long)ppppuVar25 + 0x1d) = 0x203a6e6f69746163;
              *(undefined1 *)((long)ppppuVar25 + 0x25) = 0;
              ppuVar4 = pppuVar19[1];
              pppuVar14 = (undefined8 ***)*pppuVar19;
              if (-1 < (char)*(byte *)((long)pppuVar19 + 0x17)) {
                ppuVar4 = (undefined8 **)(ulong)*(byte *)((long)pppuVar19 + 0x17);
                pppuVar14 = pppuVar19;
              }
              ppppuVar26 = &pppuStack_268;
              pppuStack_268 = (undefined ***)ppppuVar25;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (ppppuVar26,pppuVar14,ppuVar4);
              pppuStack_250 = *ppppuVar26;
              pppuVar24 = ppppuVar26[2];
              uStack_241._1_3_ = SUB83(pppuVar24,0);
              uStack_23d = (uint)((ulong)pppuVar24 >> 0x18);
              uStack_239 = (undefined1)((ulong)pppuVar24 >> 0x38);
              uStack_248 = SUB87(ppppuVar26[1],0);
              uStack_241._0_1_ = (undefined1)((ulong)ppppuVar26[1] >> 0x38);
              ppppuVar26[1] = (undefined ***)0x0;
              ppppuVar26[2] = (undefined ***)0x0;
              *ppppuVar26 = (undefined ***)0x0;
              FUN_10a0029c0(&pppuStack_250);
              goto LAB_10a6f19a0;
            }
          }
          else {
            if ((uVar9 & uVar27) == 0) {
              uVar21 = uVar21 & uVar27;
            }
            else if (uVar9 <= uVar21) {
              uVar8 = 0;
              if (uVar9 != 0) {
                uVar8 = uVar21 / uVar9;
              }
              uVar21 = uVar21 - uVar8 * uVar9;
            }
            if (uVar21 != uVar28) break;
          }
        }
      }
    }
    if ((long)uStack_200 < 0) {
      __ZdlPv(pppuStack_210);
    }
  }
  uStack_239 = 0x13;
  uStack_248 = 0x6f697461636f6c;
  uStack_241 = 0x2064496e;
  pppuStack_250 = (undefined ***)0x2064696c61766e49;
  uStack_23d = uStack_23d & 0xffffff00;
  ppuVar4 = pppuVar19[1];
  pppuVar14 = (undefined8 ***)*pppuVar19;
  if (-1 < (char)*(byte *)((long)pppuVar19 + 0x17)) {
    ppuVar4 = (undefined8 **)(ulong)*(byte *)((long)pppuVar19 + 0x17);
    pppuVar14 = pppuVar19;
  }
  ppppuVar25 = &pppuStack_250;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppuVar25,pppuVar14,ppuVar4);
  ppuStack_228 = (undefined **)ppppuVar25[1];
  pppuStack_230 = *ppppuVar25;
  uStack_220 = ppppuVar25[2];
  ppppuVar25[1] = (undefined ***)0x0;
  ppppuVar25[2] = (undefined ***)0x0;
  *ppppuVar25 = (undefined ***)0x0;
  puVar17 = (undefined8 *)0x40;
  __Znwm();
  puVar17[1] = 0x796c707075732065;
  *puVar17 = 0x7361656c70202d20;
  puVar17[3] = 0x79622064656e7275;
  puVar17[2] = 0x74657220656e6f20;
  puVar17[5] = 0x3a3a74657373416e;
  puVar17[4] = 0x6f697461636f4c20;
  *(undefined8 *)((long)puVar17 + 0x35) = 0x2e64657a696c6169;
  *(undefined8 *)((long)puVar17 + 0x2d) = 0x7265536f743a3a74;
  *(undefined1 *)((long)puVar17 + 0x3d) = 0;
  ppppuVar25 = &pppuStack_230;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppuVar25,puVar17,0x3d);
  pppuStack_208 = ppppuVar25[1];
  pppuStack_210 = *ppppuVar25;
  uStack_200 = ppppuVar25[2];
  ppppuVar25[1] = (undefined ***)0x0;
  ppppuVar25[2] = (undefined ***)0x0;
  *ppppuVar25 = (undefined ***)0x0;
  FUN_10a0029c0(&pppuStack_210);
LAB_10a6f19a0:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x10a6f19a4);
  (*pcVar12)();
}



/* Entry: 10a6f136c; end: 10a6f143b;  */

undefined **** FUN_10a6f136c(undefined ****param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined ****ppppuVar1;
  long *plVar2;
  ulong uVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  code *pcVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *extraout_x8;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  undefined ***pppuVar17;
  undefined ***pppuVar18;
  undefined ****ppppuVar19;
  undefined ****ppppuVar20;
  ulong uVar21;
  ulong uVar22;
  undefined ***pppuStack_178;
  undefined ***pppuStack_170;
  undefined8 uStack_168;
  undefined ***pppuStack_160;
  undefined7 uStack_158;
  undefined4 uStack_151;
  uint uStack_14d;
  undefined1 uStack_149;
  undefined ***pppuStack_140;
  undefined **ppuStack_138;
  undefined8 uStack_130;
  undefined ***pppuStack_120;
  undefined ***pppuStack_118;
  undefined8 uStack_110;
  undefined ***pppuStack_108;
  undefined ***pppuStack_100;
  undefined ***pppuStack_f8;
  undefined ***pppuStack_f0;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = (undefined8 *)(ulong)*(uint *)(param_2 + 3);
  ppppuVar19 = param_1;
  FUN_10a0051e8(param_1,puVar13,*(undefined4 *)((long)param_2 + 0x1c),*(undefined4 *)(param_2 + 10),
                *(undefined4 *)(param_2 + 4),*(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)ppppuVar19 & 1) == 0) {
    puVar13 = (undefined8 *)*param_2;
    pcStack_78 = FUN_10a71fdd8;
    ppuStack_70 = &PTR_FUN_110c143a0;
    uStack_68 = param_3;
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10a6f1438);
      (*pcVar8)();
    }
    FUN_10a0544d8(param_1,puVar13,&pcStack_78,1,param_1[3] + -1);
    ppppuVar19 = (undefined ****)&ppuStack_70;
    (*(code *)*ppuStack_70)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  if ((bRam00000001137eb908 & 1) == 0) {
    iVar9 = 0x137eb908;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      FUN_10a6f2a60();
      ___cxa_atexit(FUN_10a6f2f38,0x1137eb910,0x100000000);
      ___cxa_guard_release(0x1137eb908);
    }
  }
  puVar10 = puVar13;
  __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcm(puVar13,0x3a,0);
  if (puVar10 != (undefined8 *)0xffffffffffffffff) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
              (&pppuStack_120,puVar13,0,puVar10,&pppuStack_140);
    uVar11 = 0x1137eb910;
    func_0x000107c2b05c(0x1137eb910,&pppuStack_120);
    uVar3 = uRam00000001137eb918;
    if (uRam00000001137eb918 != 0) {
      uVar21 = uRam00000001137eb918 - 1;
      if ((uRam00000001137eb918 & uVar21) == 0) {
        uVar22 = uVar21 & uVar11;
      }
      else {
        uVar22 = uVar11;
        if (uRam00000001137eb918 <= uVar11) {
          uVar22 = 0;
          if (uRam00000001137eb918 != 0) {
            uVar22 = uVar11 / uRam00000001137eb918;
          }
          uVar22 = uVar11 - uVar22 * uRam00000001137eb918;
        }
      }
      plVar14 = *(long **)(lRam00000001137eb910 + uVar22 * 8);
      if (plVar14 != (long *)0x0) {
        for (plVar14 = (long *)*plVar14; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
          uVar15 = plVar14[1];
          if (uVar11 == uVar15) {
            uVar15 = 0x1137eb910;
            func_0x000107c2b068(0x1137eb910,plVar14 + 2,&pppuStack_120);
            if ((uVar15 & 1) != 0) {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                        (&pppuStack_140,puVar13,(long)puVar10 + 1,0xffffffffffffffff,&pppuStack_160)
              ;
              pppuVar18 = (undefined ***)ppuStack_138;
              if (-1 < (long)uStack_130) {
                pppuVar18 = (undefined ***)((ulong)uStack_130 >> 0x38);
              }
              if (pppuVar18 != (undefined ***)0x0) {
                if (ppppuVar19 == (undefined ****)0x0) {
                  uVar4 = *(undefined1 *)(plVar14 + 5);
                  puVar13 = (undefined8 *)0x118;
                  __Znwm();
                  puVar13[1] = 0;
                  puVar13[2] = 0;
                  *puVar13 = &PTR_FUN_110c14bc8;
                  pppuVar18 = (undefined ***)(puVar13 + 3);
                  FUN_10a6f27ec(pppuVar18,0,uVar4,&pppuStack_140);
                  uStack_158 = SUB87(puVar13,0);
                  uStack_151._0_1_ = (undefined1)((ulong)puVar13 >> 0x38);
                  pppuStack_160 = pppuVar18;
                  FUN_10a6ff650(&pppuStack_160,puVar13 + 8,pppuVar18);
                  ppppuVar19 = &pppuStack_160;
                  FUN_10a6ff4ac(extraout_x8,ppppuVar19);
                  ppppuVar20 = (undefined ****)CONCAT17((undefined1)uStack_151,uStack_158);
                  if (ppppuVar20 == (undefined ****)0x0) goto LAB_10a6f18b0;
                  ppppuVar1 = ppppuVar20 + 1;
                  do {
                    pppuVar18 = *ppppuVar1;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
                    if (bVar6) {
                      *ppppuVar1 = (undefined ***)((long)pppuVar18 + -1);
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                }
                else {
                  ppppuVar20 = (undefined ****)ppppuVar19[0x10b];
                  ppppuVar19 = (undefined ****)ppppuVar19[0x10c];
                  if (ppppuVar19 != (undefined ****)0x0) {
                    ppppuVar1 = ppppuVar19 + 1;
                    do {
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
                      if (bVar6) {
                        *ppppuVar1 = (undefined ***)((long)*ppppuVar1 + 1);
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                  }
                  uVar12 = 0x100;
                  pppuStack_108 = (undefined ***)ppppuVar20;
                  pppuStack_100 = (undefined ***)ppppuVar19;
                  __Znwm(0x100);
                  FUN_10a6f27ec();
                  pppuStack_f8 = (undefined ***)ppppuVar20;
                  pppuStack_f0 = (undefined ***)ppppuVar19;
                  if (ppppuVar19 != (undefined ****)0x0) {
                    ppppuVar1 = ppppuVar19 + 1;
                    do {
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
                      if (bVar6) {
                        *ppppuVar1 = (undefined ***)((long)*ppppuVar1 + 1);
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    ppppuVar1 = ppppuVar19 + 2;
                    do {
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
                      if (bVar6) {
                        *ppppuVar1 = (undefined ***)((long)*ppppuVar1 + 1);
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    do {
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
                      if (bVar6) {
                        *ppppuVar1 = (undefined ***)((long)*ppppuVar1 + 1);
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar19);
                  }
                  pppuStack_178 = (undefined ***)ppppuVar20;
                  pppuStack_170 = (undefined ***)ppppuVar19;
                  FUN_10a720450(&pppuStack_160,uVar12,&pppuStack_178);
                  FUN_10a6ff4ac(extraout_x8,&pppuStack_160);
                  plVar14 = (long *)CONCAT17((undefined1)uStack_151,uStack_158);
                  if (plVar14 != (long *)0x0) {
                    plVar2 = plVar14 + 1;
                    do {
                      lVar16 = *plVar2;
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                      if (bVar6) {
                        *plVar2 = lVar16 + -1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (lVar16 == 0) {
                      (**(code **)(*plVar14 + 0x10))(plVar14);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
                    }
                  }
                  if ((undefined ****)pppuStack_170 != (undefined ****)0x0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  pppuVar18 = pppuStack_f0;
                  if ((undefined ****)pppuStack_f0 != (undefined ****)0x0) {
                    ppppuVar19 = (undefined ****)(pppuStack_f0 + 1);
                    do {
                      pppuVar17 = *ppppuVar19;
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(ppppuVar19,0x10);
                      if (bVar6) {
                        *ppppuVar19 = (undefined ***)((long)pppuVar17 + -1);
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (pppuVar17 == (undefined ***)0x0) {
                      (*(code *)(*pppuStack_f0)[2])(pppuStack_f0);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar18);
                    }
                  }
                  ppppuVar19 = (undefined ****)pppuStack_108;
                  if (((undefined ****)pppuStack_108 != (undefined ****)0x0) &&
                     (pppuVar18 = (undefined ***)*extraout_x8, pppuVar18 != (undefined ***)0x0)) {
                    lVar16 = extraout_x8[1];
                    uStack_158 = (undefined7)lVar16;
                    uStack_151._0_1_ = (undefined1)((ulong)lVar16 >> 0x38);
                    if (lVar16 != 0) {
                      plVar14 = (long *)(lVar16 + 8);
                      do {
                        cVar5 = '\x01';
                        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                        if (bVar6) {
                          *plVar14 = *plVar14 + 1;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                    }
                    pppuStack_160 = pppuVar18;
                    FUN_10aa88c30(pppuStack_108,&pppuStack_160);
                    ppppuVar20 = (undefined ****)CONCAT17((undefined1)uStack_151,uStack_158);
                    if (ppppuVar20 != (undefined ****)0x0) {
                      ppppuVar1 = ppppuVar20 + 1;
                      do {
                        pppuVar18 = *ppppuVar1;
                        cVar5 = '\x01';
                        bVar6 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
                        if (bVar6) {
                          *ppppuVar1 = (undefined ***)((long)pppuVar18 + -1);
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                      if (pppuVar18 == (undefined ***)0x0) {
                        (*(code *)(*ppppuVar20)[2])(ppppuVar20);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar20);
                        ppppuVar19 = ppppuVar20;
                      }
                    }
                  }
                  if ((undefined ****)pppuStack_100 == (undefined ****)0x0) goto LAB_10a6f18b0;
                  ppppuVar1 = (undefined ****)(pppuStack_100 + 1);
                  do {
                    pppuVar18 = *ppppuVar1;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
                    if (bVar6) {
                      *ppppuVar1 = (undefined ***)((long)pppuVar18 + -1);
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                    ppppuVar20 = (undefined ****)pppuStack_100;
                  } while (cVar5 != '\0');
                }
                if (pppuVar18 == (undefined ***)0x0) {
                  (*(code *)(*ppppuVar20)[2])(ppppuVar20);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar20);
                  ppppuVar19 = ppppuVar20;
                }
LAB_10a6f18b0:
                if (uStack_130._7_1_ < '\0') {
                  __ZdlPv(pppuStack_140);
                  ppppuVar19 = (undefined ****)pppuStack_140;
                }
                if (uStack_110._7_1_ < '\0') {
                  __ZdlPv(pppuStack_120);
                  ppppuVar19 = (undefined ****)pppuStack_120;
                }
                return ppppuVar19;
              }
              ppppuVar19 = (undefined ****)0x28;
              __Znwm();
              uStack_168 = 0x8000000000000028;
              pppuStack_170 = (undefined ***)0x25;
              ppppuVar19[1] = (undefined ***)0x206d6f726620676e;
              *ppppuVar19 = (undefined ***)0x697373696d204449;
              ppppuVar19[3] = (undefined ***)0x7461636f4c206465;
              ppppuVar19[2] = (undefined ***)0x7a696c6169726573;
              *(undefined8 *)((long)ppppuVar19 + 0x1d) = 0x203a6e6f69746163;
              *(undefined1 *)((long)ppppuVar19 + 0x25) = 0;
              uVar3 = puVar13[1];
              puVar10 = (undefined8 *)*puVar13;
              if (-1 < (char)*(byte *)((long)puVar13 + 0x17)) {
                uVar3 = (ulong)*(byte *)((long)puVar13 + 0x17);
                puVar10 = puVar13;
              }
              ppppuVar20 = &pppuStack_178;
              pppuStack_178 = (undefined ***)ppppuVar19;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (ppppuVar20,puVar10,uVar3);
              pppuStack_160 = *ppppuVar20;
              pppuVar18 = ppppuVar20[2];
              uStack_151._1_3_ = SUB83(pppuVar18,0);
              uStack_14d = (uint)((ulong)pppuVar18 >> 0x18);
              uStack_149 = (undefined1)((ulong)pppuVar18 >> 0x38);
              uStack_158 = SUB87(ppppuVar20[1],0);
              uStack_151._0_1_ = (undefined1)((ulong)ppppuVar20[1] >> 0x38);
              ppppuVar20[1] = (undefined ***)0x0;
              ppppuVar20[2] = (undefined ***)0x0;
              *ppppuVar20 = (undefined ***)0x0;
              FUN_10a0029c0(&pppuStack_160);
              goto LAB_10a6f19a0;
            }
          }
          else {
            if ((uVar3 & uVar21) == 0) {
              uVar15 = uVar15 & uVar21;
            }
            else if (uVar3 <= uVar15) {
              uVar7 = 0;
              if (uVar3 != 0) {
                uVar7 = uVar15 / uVar3;
              }
              uVar15 = uVar15 - uVar7 * uVar3;
            }
            if (uVar15 != uVar22) break;
          }
        }
      }
    }
    if ((long)uStack_110 < 0) {
      __ZdlPv(pppuStack_120);
    }
  }
  uStack_149 = 0x13;
  uStack_158 = 0x6f697461636f6c;
  uStack_151 = 0x2064496e;
  pppuStack_160 = (undefined ***)0x2064696c61766e49;
  uStack_14d = uStack_14d & 0xffffff00;
  uVar3 = puVar13[1];
  puVar10 = (undefined8 *)*puVar13;
  if (-1 < (char)*(byte *)((long)puVar13 + 0x17)) {
    uVar3 = (ulong)*(byte *)((long)puVar13 + 0x17);
    puVar10 = puVar13;
  }
  ppppuVar19 = &pppuStack_160;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppuVar19,puVar10,uVar3);
  ppuStack_138 = (undefined **)ppppuVar19[1];
  pppuStack_140 = *ppppuVar19;
  uStack_130 = ppppuVar19[2];
  ppppuVar19[1] = (undefined ***)0x0;
  ppppuVar19[2] = (undefined ***)0x0;
  *ppppuVar19 = (undefined ***)0x0;
  puVar13 = (undefined8 *)0x40;
  __Znwm();
  puVar13[1] = 0x796c707075732065;
  *puVar13 = 0x7361656c70202d20;
  puVar13[3] = 0x79622064656e7275;
  puVar13[2] = 0x74657220656e6f20;
  puVar13[5] = 0x3a3a74657373416e;
  puVar13[4] = 0x6f697461636f4c20;
  *(undefined8 *)((long)puVar13 + 0x35) = 0x2e64657a696c6169;
  *(undefined8 *)((long)puVar13 + 0x2d) = 0x7265536f743a3a74;
  *(undefined1 *)((long)puVar13 + 0x3d) = 0;
  ppppuVar19 = &pppuStack_140;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppuVar19,puVar13,0x3d);
  pppuStack_118 = ppppuVar19[1];
  pppuStack_120 = *ppppuVar19;
  uStack_110 = ppppuVar19[2];
  ppppuVar19[1] = (undefined ***)0x0;
  ppppuVar19[2] = (undefined ***)0x0;
  *ppppuVar19 = (undefined ***)0x0;
  FUN_10a0029c0(&pppuStack_120);
LAB_10a6f19a0:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a6f19a4);
  (*pcVar8)();
}



/* Entry: 10a6f143c; end: 10a6f1af7;  */

void FUN_10a6f143c(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  code *pcVar7;
  int iVar8;
  ulong uVar9;
  undefined8 **ppuVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined7 uStack_d8;
  undefined4 uStack_d1;
  uint uStack_cd;
  undefined1 uStack_c9;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  long *plStack_80;
  undefined8 *puStack_78;
  long *plStack_70;
  
  if ((bRam00000001137eb908 & 1) == 0) {
    iVar8 = 0x137eb908;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      FUN_10a6f2a60();
      ___cxa_atexit(FUN_10a6f2f38,0x1137eb910,0x100000000);
      ___cxa_guard_release(0x1137eb908);
    }
  }
  puVar16 = param_3;
  __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcm(param_3,0x3a,0);
  if (puVar16 != (undefined8 *)0xffffffffffffffff) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
              (&uStack_a0,param_3,0,puVar16,&puStack_c0);
    uVar9 = 0x1137eb910;
    func_0x000107c2b05c(0x1137eb910,&uStack_a0);
    uVar2 = uRam00000001137eb918;
    if (uRam00000001137eb918 != 0) {
      uVar17 = uRam00000001137eb918 - 1;
      if ((uRam00000001137eb918 & uVar17) == 0) {
        uVar18 = uVar17 & uVar9;
      }
      else {
        uVar18 = uVar9;
        if (uRam00000001137eb918 <= uVar9) {
          uVar18 = 0;
          if (uRam00000001137eb918 != 0) {
            uVar18 = uVar9 / uRam00000001137eb918;
          }
          uVar18 = uVar9 - uVar18 * uRam00000001137eb918;
        }
      }
      plVar13 = *(long **)(lRam00000001137eb910 + uVar18 * 8);
      if (plVar13 != (long *)0x0) {
        for (plVar13 = (long *)*plVar13; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
          uVar14 = plVar13[1];
          if (uVar9 == uVar14) {
            uVar14 = 0x1137eb910;
            func_0x000107c2b068(0x1137eb910,plVar13 + 2,&uStack_a0);
            if ((uVar14 & 1) != 0) {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                        (&puStack_c0,param_3,(long)puVar16 + 1,0xffffffffffffffff,&puStack_e0);
              puVar16 = puStack_b8;
              if (-1 < (long)uStack_b0) {
                puVar16 = (undefined8 *)((ulong)uStack_b0 >> 0x38);
              }
              if (puVar16 != (undefined8 *)0x0) {
                if (param_2 == 0) {
                  uVar3 = *(undefined1 *)(plVar13 + 5);
                  puVar12 = (undefined8 *)0x118;
                  __Znwm();
                  puVar12[1] = 0;
                  puVar12[2] = 0;
                  *puVar12 = &PTR_FUN_110c14bc8;
                  puVar16 = puVar12 + 3;
                  FUN_10a6f27ec(puVar16,0,uVar3,&puStack_c0);
                  uStack_d8 = SUB87(puVar12,0);
                  uStack_d1._0_1_ = (undefined1)((ulong)puVar12 >> 0x38);
                  puStack_e0 = puVar16;
                  FUN_10a6ff650(&puStack_e0,puVar12 + 8,puVar16);
                  FUN_10a6ff4ac(param_1,&puStack_e0);
                  plVar13 = (long *)CONCAT17((undefined1)uStack_d1,uStack_d8);
                  if (plVar13 == (long *)0x0) goto LAB_10a6f18b0;
                  plVar1 = plVar13 + 1;
                  do {
                    lVar15 = *plVar1;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar5) {
                      *plVar1 = lVar15 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
                else {
                  puVar16 = *(undefined8 **)(param_2 + 0x858);
                  plVar13 = *(long **)(param_2 + 0x860);
                  if (plVar13 != (long *)0x0) {
                    plVar1 = plVar13 + 1;
                    do {
                      cVar4 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                      if (bVar5) {
                        *plVar1 = *plVar1 + 1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                  }
                  uVar11 = 0x100;
                  puStack_88 = puVar16;
                  plStack_80 = plVar13;
                  __Znwm(0x100);
                  FUN_10a6f27ec();
                  puStack_78 = puVar16;
                  plStack_70 = plVar13;
                  if (plVar13 != (long *)0x0) {
                    plVar1 = plVar13 + 1;
                    do {
                      cVar4 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                      if (bVar5) {
                        *plVar1 = *plVar1 + 1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    plVar1 = plVar13 + 2;
                    do {
                      cVar4 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                      if (bVar5) {
                        *plVar1 = *plVar1 + 1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    do {
                      cVar4 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                      if (bVar5) {
                        *plVar1 = *plVar1 + 1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
                  }
                  puStack_f8 = puVar16;
                  plStack_f0 = plVar13;
                  FUN_10a720450(&puStack_e0,uVar11,&puStack_f8);
                  FUN_10a6ff4ac(param_1,&puStack_e0);
                  plVar13 = (long *)CONCAT17((undefined1)uStack_d1,uStack_d8);
                  if (plVar13 != (long *)0x0) {
                    plVar1 = plVar13 + 1;
                    do {
                      lVar15 = *plVar1;
                      cVar4 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                      if (bVar5) {
                        *plVar1 = lVar15 + -1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    if (lVar15 == 0) {
                      (**(code **)(*plVar13 + 0x10))(plVar13);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
                    }
                  }
                  if (plStack_f0 != (long *)0x0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  plVar13 = plStack_70;
                  if (plStack_70 != (long *)0x0) {
                    plVar1 = plStack_70 + 1;
                    do {
                      lVar15 = *plVar1;
                      cVar4 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                      if (bVar5) {
                        *plVar1 = lVar15 + -1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    if (lVar15 == 0) {
                      (**(code **)(*plStack_70 + 0x10))(plStack_70);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
                    }
                  }
                  if ((puStack_88 != (undefined8 *)0x0) &&
                     (puVar16 = (undefined8 *)*param_1, puVar16 != (undefined8 *)0x0)) {
                    lVar15 = param_1[1];
                    uStack_d8 = (undefined7)lVar15;
                    uStack_d1._0_1_ = (undefined1)((ulong)lVar15 >> 0x38);
                    if (lVar15 != 0) {
                      plVar13 = (long *)(lVar15 + 8);
                      do {
                        cVar4 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                        if (bVar5) {
                          *plVar13 = *plVar13 + 1;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                    }
                    puStack_e0 = puVar16;
                    FUN_10aa88c30(puStack_88,&puStack_e0);
                    plVar13 = (long *)CONCAT17((undefined1)uStack_d1,uStack_d8);
                    if (plVar13 != (long *)0x0) {
                      plVar1 = plVar13 + 1;
                      do {
                        lVar15 = *plVar1;
                        cVar4 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                        if (bVar5) {
                          *plVar1 = lVar15 + -1;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                      if (lVar15 == 0) {
                        (**(code **)(*plVar13 + 0x10))(plVar13);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
                      }
                    }
                  }
                  if (plStack_80 == (long *)0x0) goto LAB_10a6f18b0;
                  plVar1 = plStack_80 + 1;
                  do {
                    lVar15 = *plVar1;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar5) {
                      *plVar1 = lVar15 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                    plVar13 = plStack_80;
                  } while (cVar4 != '\0');
                }
                if (lVar15 == 0) {
                  (**(code **)(*plVar13 + 0x10))(plVar13);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
                }
LAB_10a6f18b0:
                if (uStack_b0._7_1_ < '\0') {
                  __ZdlPv(puStack_c0);
                }
                if (uStack_90._7_1_ < '\0') {
                  __ZdlPv(uStack_a0);
                }
                return;
              }
              puVar12 = (undefined8 *)0x28;
              __Znwm();
              uStack_e8 = 0x8000000000000028;
              plStack_f0 = (long *)0x25;
              puVar12[1] = 0x206d6f726620676e;
              *puVar12 = 0x697373696d204449;
              puVar12[3] = 0x7461636f4c206465;
              puVar12[2] = 0x7a696c6169726573;
              *(undefined8 *)((long)puVar12 + 0x1d) = 0x203a6e6f69746163;
              *(undefined1 *)((long)puVar12 + 0x25) = 0;
              uVar2 = param_3[1];
              puVar16 = (undefined8 *)*param_3;
              if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
                uVar2 = (ulong)*(byte *)((long)param_3 + 0x17);
                puVar16 = param_3;
              }
              ppuVar10 = &puStack_f8;
              puStack_f8 = puVar12;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (ppuVar10,puVar16,uVar2);
              puStack_e0 = *ppuVar10;
              puVar16 = ppuVar10[2];
              uStack_d1._1_3_ = SUB83(puVar16,0);
              uStack_cd = (uint)((ulong)puVar16 >> 0x18);
              uStack_c9 = (undefined1)((ulong)puVar16 >> 0x38);
              uStack_d8 = SUB87(ppuVar10[1],0);
              uStack_d1._0_1_ = (undefined1)((ulong)ppuVar10[1] >> 0x38);
              ppuVar10[1] = (undefined8 *)0x0;
              ppuVar10[2] = (undefined8 *)0x0;
              *ppuVar10 = (undefined8 *)0x0;
              FUN_10a0029c0(&puStack_e0);
              goto LAB_10a6f19a0;
            }
          }
          else {
            if ((uVar2 & uVar17) == 0) {
              uVar14 = uVar14 & uVar17;
            }
            else if (uVar2 <= uVar14) {
              uVar6 = 0;
              if (uVar2 != 0) {
                uVar6 = uVar14 / uVar2;
              }
              uVar14 = uVar14 - uVar6 * uVar2;
            }
            if (uVar14 != uVar18) break;
          }
        }
      }
    }
    if ((long)uStack_90 < 0) {
      __ZdlPv(uStack_a0);
    }
  }
  uStack_c9 = 0x13;
  uStack_d8 = 0x6f697461636f6c;
  uStack_d1 = 0x2064496e;
  puStack_e0 = (undefined8 *)0x2064696c61766e49;
  uStack_cd = uStack_cd & 0xffffff00;
  uVar2 = param_3[1];
  puVar16 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar16 = param_3;
  }
  ppuVar10 = &puStack_e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar10,puVar16,uVar2);
  puStack_b8 = ppuVar10[1];
  puStack_c0 = *ppuVar10;
  uStack_b0 = ppuVar10[2];
  ppuVar10[1] = (undefined8 *)0x0;
  ppuVar10[2] = (undefined8 *)0x0;
  *ppuVar10 = (undefined8 *)0x0;
  puVar16 = (undefined8 *)0x40;
  __Znwm();
  puVar16[1] = 0x796c707075732065;
  *puVar16 = 0x7361656c70202d20;
  puVar16[3] = 0x79622064656e7275;
  puVar16[2] = 0x74657220656e6f20;
  puVar16[5] = 0x3a3a74657373416e;
  puVar16[4] = 0x6f697461636f4c20;
  *(undefined8 *)((long)puVar16 + 0x35) = 0x2e64657a696c6169;
  *(undefined8 *)((long)puVar16 + 0x2d) = 0x7265536f743a3a74;
  *(undefined1 *)((long)puVar16 + 0x3d) = 0;
  ppuVar10 = &puStack_c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar10,puVar16,0x3d);
  uStack_98 = ppuVar10[1];
  uStack_a0 = *ppuVar10;
  uStack_90 = ppuVar10[2];
  ppuVar10[1] = (undefined8 *)0x0;
  ppuVar10[2] = (undefined8 *)0x0;
  *ppuVar10 = (undefined8 *)0x0;
  FUN_10a0029c0(&uStack_a0);
LAB_10a6f19a0:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a6f19a4);
  (*pcVar7)();
}



/* Entry: 10a6f1af8; end: 10a6f1cd7;  */

void FUN_10a6f1af8(undefined8 *param_1,double param_2,double param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined4 uVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  undefined8 auStack_a0 [2];
  char cStack_89;
  undefined1 auStack_88 [8];
  long *plStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  double dStack_60;
  double dStack_58;
  
  uVar9 = 0;
  dVar10 = (param_3 * 3.141592653589793) / 180.0;
  dVar7 = dVar10;
  dStack_60 = param_2;
  dStack_58 = param_3;
  _tan();
  _cos();
  dVar7 = dVar7 + 1.0 / dVar10;
  _log();
  uVar8 = 0;
  dVar7 = (1.0 - dVar7 / 3.141592653589793) * 524288.0 * 0.5;
  lStack_68 = (long)(int)dVar7;
  uStack_78 = 0x13;
  lStack_70 = (long)(((param_2 + 180.0) * 524288.0) / 360.0);
  FUN_10a82c03c(auStack_a0,&uStack_78);
  uVar6 = SUB84(dVar7,0);
  FUN_10a6f2f3c(auStack_88,param_4,3,auStack_a0);
  if (cStack_89 < '\0') {
    __ZdlPv(auStack_a0[0]);
  }
  FUN_10a833fe4(&uStack_78,&dStack_60);
  puVar4 = (undefined8 *)0x58;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110c14470;
  puVar4[3] = &PTR_FUN_110c124e0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)((long)puVar4 + 0x54) = 0;
  puVar4[8] = 0;
  *(undefined1 *)(puVar4 + 9) = 0;
  puVar4[7] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  FUN_10a6e467c(puVar4 + 7,auStack_88);
  *(undefined4 *)(puVar4 + 9) = uVar6;
  *(undefined4 *)((long)puVar4 + 0x4c) = uVar8;
  *(undefined4 *)(puVar4 + 10) = uVar9;
  if ((*(byte *)((long)puVar4 + 0x54) & 1) == 0) {
    *(undefined1 *)((long)puVar4 + 0x54) = 1;
  }
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  if (plStack_80 != (long *)0x0) {
    plVar1 = plStack_80 + 1;
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
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
    }
  }
  return;
}



/* Entry: 10a6f1cd8; end: 10a6f1feb;  */

/* WARNING: Removing unreachable block (ram,0x00010a6f1e90) */
/* WARNING: Removing unreachable block (ram,0x00010a6f1e70) */
/* WARNING: Removing unreachable block (ram,0x00010a6f1ea0) */

void FUN_10a6f1cd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 ***pppuVar1;
  undefined1 **ppuVar2;
  undefined8 *puVar3;
  undefined1 *puStack_140;
  ulong uStack_138;
  byte bStack_129;
  undefined8 **ppuStack_128;
  ulong uStack_120;
  byte bStack_111;
  undefined8 **ppuStack_110;
  ulong uStack_108;
  byte bStack_f9;
  undefined8 uStack_f8;
  undefined5 uStack_f0;
  undefined1 uStack_eb;
  char cStack_e1;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  cStack_e1 = '\r';
  uStack_f8._0_5_ = 0x74616c6572;
  uStack_f8._5_3_ = 0x657669;
  uStack_f0 = 0x5f656c6974;
  uStack_eb = 0;
  __ZNSt3__19to_stringEi(&ppuStack_110,param_3);
  pppuVar1 = (undefined8 ***)ppuStack_110;
  if (-1 < (char)bStack_f9) {
    uStack_108 = (ulong)bStack_f9;
    pppuVar1 = &ppuStack_110;
  }
  puVar3 = &uStack_f8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar3,pppuVar1,uStack_108);
  uStack_d8 = puVar3[1];
  uStack_e0 = *puVar3;
  lStack_d0 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  puVar3 = &uStack_e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar3,"_",1);
  uStack_b8 = puVar3[1];
  uStack_c0 = *puVar3;
  lStack_b0 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  __ZNSt3__19to_stringEi(&ppuStack_128,param_4);
  pppuVar1 = (undefined8 ***)ppuStack_128;
  if (-1 < (char)bStack_111) {
    uStack_120 = (ulong)bStack_111;
    pppuVar1 = &ppuStack_128;
  }
  puVar3 = &uStack_c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar3,pppuVar1,uStack_120);
  uStack_98 = puVar3[1];
  uStack_a0 = *puVar3;
  uStack_90 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  puVar3 = &uStack_a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar3,"_",1);
  uStack_78 = puVar3[1];
  uStack_80 = *puVar3;
  uStack_70 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  __ZNSt3__19to_stringEi(&puStack_140,param_5);
  ppuVar2 = (undefined1 **)puStack_140;
  if (-1 < (char)bStack_129) {
    uStack_138 = (ulong)bStack_129;
    ppuVar2 = &puStack_140;
  }
  puVar3 = &uStack_80;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar3,ppuVar2,uStack_138);
  uStack_58 = puVar3[1];
  uStack_60 = *puVar3;
  uStack_50 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  FUN_10a6f2f3c(param_1,param_2,4,&uStack_60);
  if ((char)bStack_129 < '\0') {
    __ZdlPv(puStack_140);
  }
  if ((char)bStack_111 < '\0') {
    __ZdlPv(ppuStack_128);
  }
  if (lStack_b0 < 0) {
    __ZdlPv(uStack_c0);
  }
  if (lStack_d0 < 0) {
    __ZdlPv(uStack_e0);
  }
  if ((char)bStack_f9 < '\0') {
    __ZdlPv(ppuStack_110);
  }
  if (cStack_e1 < '\0') {
    __ZdlPv(CONCAT35(uStack_f8._5_3_,(undefined5)uStack_f8));
  }
  return;
}



/* Entry: 10a6f1fec; end: 10a6f22e3;  */

void FUN_10a6f1fec(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  byte ****ppppbVar7;
  undefined8 *puVar8;
  uint uVar9;
  byte ****ppppbVar10;
  byte ****ppppbVar11;
  ulong uVar12;
  long lVar13;
  undefined4 uStack_b8;
  undefined2 uStack_b4;
  undefined1 uStack_b2;
  undefined1 uStack_b1;
  char cStack_a1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  byte ***pppbStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(&pppbStack_80,*param_3,param_3[1]);
  }
  else {
    uStack_78 = param_3[1];
    pppbStack_80 = (byte ***)*param_3;
    uStack_70 = param_3[2];
  }
  puVar2 = PTR___DefaultRuneLocale_11034bcf8;
  uVar12 = uStack_78;
  ppppbVar10 = (byte ****)pppbStack_80;
  if (-1 < (long)uStack_70) {
    uVar12 = uStack_70 >> 0x38;
    ppppbVar10 = &pppbStack_80;
  }
  ppppbVar7 = (byte ****)((long)ppppbVar10 + uVar12);
  ppppbVar11 = ppppbVar7;
  if (uVar12 != 0) {
    do {
      uVar12 = uVar12 - 1;
      bVar4 = *(byte *)ppppbVar10;
      uVar5 = (ulong)(char)bVar4;
      if ((char)bVar4 < 0) {
        ___maskrune(uVar5,0x500);
        uVar9 = (uint)uVar5;
        uVar5 = (ulong)*(byte *)ppppbVar10;
      }
      else {
        uVar9 = *(uint *)(puVar2 + (ulong)(uint)(int)(char)bVar4 * 4 + 0x3c) & 0x500;
      }
      if ((uVar9 == 0) && (((int)uVar5 - 0x2fU & 0xff) < 0xfe)) {
        ppppbVar11 = ppppbVar10;
        if ((ppppbVar10 != ppppbVar7) && ((byte ****)((long)ppppbVar10 + 1) != ppppbVar7)) {
          lVar13 = 1;
          goto LAB_10a6f20e8;
        }
        break;
      }
      ppppbVar10 = (byte ****)((long)ppppbVar10 + 1);
    } while (ppppbVar10 != ppppbVar7);
  }
  goto LAB_10a6f2140;
LAB_10a6f20e8:
  do {
    bVar4 = *(byte *)((long)ppppbVar10 + lVar13);
    uVar5 = (ulong)(char)bVar4;
    if ((char)bVar4 < 0) {
      ___maskrune(uVar5,0x500);
      bVar4 = *(byte *)((long)ppppbVar10 + lVar13);
      uVar6 = (ulong)bVar4;
      if ((int)uVar5 == 0) goto LAB_10a6f2118;
LAB_10a6f2128:
      *(byte *)ppppbVar11 = bVar4;
      ppppbVar11 = (byte ****)((long)ppppbVar11 + 1);
    }
    else {
      uVar6 = uVar5;
      if ((*(uint *)(puVar2 + (ulong)(uint)(int)(char)bVar4 * 4 + 0x3c) & 0x500) != 0)
      goto LAB_10a6f2128;
LAB_10a6f2118:
      bVar4 = (byte)uVar6;
      if (0xfd < ((int)uVar6 - 0x2fU & 0xff)) goto LAB_10a6f2128;
    }
    lVar13 = lVar13 + 1;
    uVar12 = uVar12 - 1;
  } while (uVar12 != 0);
LAB_10a6f2140:
  ppppbVar10 = (byte ****)pppbStack_80;
  uVar12 = uStack_78;
  if (-1 < (long)uStack_70._7_1_) {
    ppppbVar10 = &pppbStack_80;
    uVar12 = (long)uStack_70._7_1_;
  }
  if (ppppbVar11 <= (byte ****)((long)ppppbVar10 + uVar12)) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm
              (&pppbStack_80,(long)ppppbVar11 - (long)ppppbVar10,
               (long)((long)ppppbVar10 + uVar12) - (long)ppppbVar11);
    uVar12 = uStack_78;
    if (-1 < (long)uStack_70) {
      uVar12 = uStack_70 >> 0x38;
    }
    bVar4 = *(byte *)((long)param_3 + 0x17);
    uVar5 = param_3[1];
    if (-1 < (char)bVar4) {
      uVar5 = (ulong)bVar4;
    }
    if (uVar12 == uVar5) {
      ppppbVar10 = (byte ****)pppbStack_80;
      if (-1 < (long)uStack_70) {
        ppppbVar10 = &pppbStack_80;
      }
      plVar1 = (long *)*param_3;
      if (-1 < (char)bVar4) {
        plVar1 = param_3;
      }
      ppppbVar7 = ppppbVar10;
      _memcmp(ppppbVar10,plVar1,uVar12);
      if ((uVar12 != 0) && ((int)ppppbVar7 == 0)) {
        cStack_a1 = '\x06';
        uStack_b8 = 0x786f7270;
        uStack_b4 = 0x5f79;
        uStack_b2 = 0;
        puVar8 = (undefined8 *)&uStack_b8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar8,ppppbVar10,uVar12);
        uStack_98 = puVar8[1];
        uStack_a0 = *puVar8;
        lStack_90 = puVar8[2];
        puVar8[1] = 0;
        puVar8[2] = 0;
        *puVar8 = 0;
        FUN_10a6f2f3c(param_1,param_2,5,&uStack_a0);
        if (lStack_90 < 0) {
          __ZdlPv(uStack_a0);
        }
        if (cStack_a1 < '\0') {
          __ZdlPv(CONCAT17(uStack_b1,CONCAT16(uStack_b2,CONCAT24(uStack_b4,uStack_b8))));
        }
        if ((long)uStack_70 < 0) {
          __ZdlPv(pppbStack_80);
        }
        return;
      }
    }
    FUN_10a00946c(&UNK_10f66f963);
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a6f228c);
  (*pcVar3)();
}



/* Entry: 10a6f22e4; end: 10a6f23b3;  */

undefined *** FUN_10a6f22e4(undefined ***param_1,undefined8 *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined ***pppuVar2;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)pppuVar2 & 1) == 0) {
    pcStack_78 = FUN_10a7202c8;
    ppuStack_70 = &PTR_FUN_110c143e8;
    uStack_68 = param_3;
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a6f23b0);
      (*pcVar1)();
    }
    FUN_10a0544d8(param_1,*param_2,&pcStack_78,0,param_1[3] + -1);
    pppuVar2 = &ppuStack_70;
    (*(code *)*ppuStack_70)(pppuVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_10a6f3b28();
  return pppuVar2;
}



/* Entry: 10a6f23b4; end: 10a6f23e3;  */

void FUN_10a6f23b4(undefined8 param_1)

{
  undefined1 uStack_11;
  
  uStack_11 = 7;
  FUN_10a6f3b28(param_1,&uStack_11,&UNK_10f66f9cb);
  return;
}



/* Entry: 10a6f23e4; end: 10a6f26bb;  */

void FUN_10a6f23e4(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66f86b;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff000000ac;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_4c._4_4_,
                uStack_78 & 0xffffffff,uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f66f878;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff000000ac;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a6f26bc(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f66f87d;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff000000ac;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a6f26bc();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f66f884;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff000000ac;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a6f26bc();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f66f88a;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff000000ac;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a6f26bc();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f66f88f;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff000000ac;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a6f26bc();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f66f89c;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff000000ac;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a6f26bc();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f66f8a2;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff000000ac;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a6f26bc();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f66f8ab;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff000000ac;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a6f26bc();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f66f8b5;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff000000ac;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a6f26bc();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f66f8c9;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff000000ac;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a6f26bc();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a6f26bc; end: 10a6f2763;  */

undefined8 * FUN_10a6f26bc(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a6f2764);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a6f2764; end: 10a6f27eb;  */

undefined8 * FUN_10a6f2764(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c124e0;
  FUN_10a0772f0(param_1 + 4);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a6f27ec; end: 10a6f2893;  */

undefined8 *
FUN_10a6f27ec(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = param_1;
  uVar2 = param_2;
  func_0x00010a0fda30();
  FUN_10aa7093c(param_1,param_2,puVar1,uVar2);
  *param_1 = &PTR_FUN_110c12538;
  param_1[2] = &PTR_DAT_110c125d8;
  param_1[7] = &PTR_DAT_110c12630;
  *(undefined1 *)(param_1 + 0x1c) = param_3;
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 0x1d,*param_4,param_4[1]);
  }
  else {
    uVar3 = param_4[1];
    uVar2 = *param_4;
    param_1[0x1f] = param_4[2];
    param_1[0x1e] = uVar3;
    param_1[0x1d] = uVar2;
  }
  return param_1;
}



/* Entry: 10a6f2894; end: 10a6f2977;  */

void FUN_10a6f2894(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010aa70acc();
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c12640,0);
  *(char *)(param_1 + 0xe0) = (char)plVar1;
  (**(code **)(*param_2 + 0xa8))(&uStack_38,param_2,&PTR_DAT_110c12660,&UNK_10f66de00,0);
  if (*(char *)(param_1 + 0xff) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xe8));
  }
  *(undefined8 *)(param_1 + 0xf0) = uStack_30;
  *(undefined8 *)(param_1 + 0xe8) = uStack_38;
  *(undefined8 *)(param_1 + 0xf8) = uStack_28;
  return;
}



/* Entry: 10a6f2978; end: 10a6f2a5f;  */

void FUN_10a6f2978(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  FUN_10a6e9574(&uStack_58,*(undefined1 *)(param_2 + 0xe0));
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(&uStack_58,0x3a);
  uStack_38 = uStack_50;
  uStack_40 = uStack_58;
  lStack_30 = lStack_48;
  uStack_50 = 0;
  lStack_48 = 0;
  uStack_58 = 0;
  uVar1 = *(ulong *)(param_2 + 0xf0);
  puVar2 = *(undefined8 **)(param_2 + 0xe8);
  if (-1 < (char)*(byte *)(param_2 + 0xff)) {
    uVar1 = (ulong)*(byte *)(param_2 + 0xff);
    puVar2 = (undefined8 *)(param_2 + 0xe8);
  }
  puVar3 = &uStack_40;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar3,puVar2,uVar1);
  uVar4 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar4;
  param_1[2] = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  if (lStack_30 < 0) {
    __ZdlPv(uStack_40);
  }
  if (lStack_48 < 0) {
    __ZdlPv(uStack_58);
  }
  return;
}



/* Entry: 10a6f2a60; end: 10a6f2f37;  */

void FUN_10a6f2a60(void)

{
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  ulong uVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  undefined *puVar17;
  
  uVar1 = 0x1137eb910;
  puVar17 = &DAT_110c133e8;
  uRam00000001137eb918 = 0;
  lRam00000001137eb910 = 0;
  uRam00000001137eb928 = 0;
  plRam00000001137eb920 = (long *)0x0;
  fRam00000001137eb930 = 1.0;
  do {
    uVar3 = *(undefined8 *)(puVar17 + 8);
    uVar13 = *(ulong *)(puVar17 + 0x10);
    uVar4 = *puVar17;
    plVar7 = (long *)0x30;
    __Znwm();
    *plVar7 = 0;
    plVar7[1] = 0;
    if (0x7ffffffffffffff7 < uVar13) {
      func_0x000109ffde50();
      goto LAB_10a6f2ef0;
    }
    plVar14 = plVar7 + 2;
    if (uVar13 < 0x17) {
      *(char *)((long)plVar7 + 0x27) = (char)uVar13;
      plVar8 = plVar14;
      if (uVar13 != 0) goto LAB_10a6f2b08;
    }
    else {
      plVar10 = (long *)0x19;
      if ((uVar13 | 7) != 0x17) {
        plVar10 = (long *)((uVar13 | 7) + 1);
      }
      plVar8 = plVar10;
      __Znwm();
      plVar7[3] = uVar13;
      plVar7[4] = (ulong)plVar10 | 0x8000000000000000;
      plVar7[2] = (long)plVar8;
LAB_10a6f2b08:
      _memcpy(plVar8,uVar3,uVar13);
    }
    *(undefined1 *)((long)plVar8 + uVar13) = 0;
    *(undefined1 *)(plVar7 + 5) = uVar4;
    uVar13 = uVar1;
    func_0x000107c2b05c(0x1137eb910,plVar14);
    plVar7[1] = uVar13;
    uVar12 = uVar1;
    func_0x000107c2b05c(0x1137eb910,plVar14);
    plVar7[1] = uVar12;
    uVar13 = uRam00000001137eb918;
    if (uRam00000001137eb918 != 0) {
      uVar15 = uRam00000001137eb918 - 1;
      if ((uRam00000001137eb918 & uVar15) == 0) {
        uVar16 = uVar15 & uVar12;
      }
      else {
        uVar16 = uVar12;
        if (uRam00000001137eb918 <= uVar12) {
          uVar16 = 0;
          if (uRam00000001137eb918 != 0) {
            uVar16 = uVar12 / uRam00000001137eb918;
          }
          uVar16 = uVar12 - uVar16 * uRam00000001137eb918;
        }
      }
      plVar10 = *(long **)(lRam00000001137eb910 + uVar16 * 8);
      if (plVar10 != (long *)0x0) {
        for (plVar10 = (long *)*plVar10; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
          uVar11 = plVar10[1];
          if (uVar11 == uVar12) {
            uVar11 = uVar1;
            func_0x000107c2b068(0x1137eb910,plVar10 + 2,plVar14);
            if ((uVar11 & 1) != 0) {
              func_0x00010a7030bc(1,plVar7);
              goto LAB_10a6f2ddc;
            }
          }
          else {
            if ((uVar13 & uVar15) == 0) {
              uVar11 = uVar11 & uVar15;
            }
            else if (uVar13 <= uVar11) {
              uVar5 = 0;
              if (uVar13 != 0) {
                uVar5 = uVar11 / uVar13;
              }
              uVar11 = uVar11 - uVar5 * uVar13;
            }
            if (uVar11 != uVar16) break;
          }
        }
      }
    }
    if ((uVar13 == 0) || (fRam00000001137eb930 * (float)uVar13 < (float)(uRam00000001137eb928 + 1)))
    {
      uVar12 = 1;
      if (2 < uVar13) {
        uVar12 = (ulong)((uVar13 & uVar13 - 1) != 0);
      }
      uVar12 = uVar12 | uVar13 << 1;
      uVar13 = (ulong)((float)(uRam00000001137eb928 + 1) / fRam00000001137eb930);
      if (uVar12 <= uVar13) {
        uVar12 = uVar13;
      }
      if (uVar12 - 1 == 0) {
        uVar12 = 2;
      }
      else if ((uVar12 & uVar12 - 1) != 0) {
        __ZNSt3__112__next_primeEm();
      }
      uVar13 = uRam00000001137eb918;
      if (uRam00000001137eb918 < uVar12) {
LAB_10a6f2cf4:
        if (uVar12 >> 0x3d != 0) {
          func_0x000109ffded8();
LAB_10a6f2ef0:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10a6f2ef4);
          (*pcVar6)();
        }
        lVar9 = uVar12 << 3;
        __Znwm();
        bVar2 = lRam00000001137eb910 != 0;
        lRam00000001137eb910 = lVar9;
        if (bVar2) {
          __ZdlPv();
        }
        uVar13 = 0;
        uRam00000001137eb918 = uVar12;
        do {
          *(undefined8 *)(lRam00000001137eb910 + uVar13 * 8) = 0;
          plVar14 = plRam00000001137eb920;
          uVar13 = uVar13 + 1;
        } while (uVar12 != uVar13);
        if (plRam00000001137eb920 != (long *)0x0) {
          uVar13 = plRam00000001137eb920[1];
          uVar15 = uVar12 - 1;
          if ((uVar12 & uVar15) == 0) {
            uVar13 = uVar13 & uVar15;
          }
          else if (uVar12 <= uVar13) {
            uVar16 = 0;
            if (uVar12 != 0) {
              uVar16 = uVar13 / uVar12;
            }
            uVar13 = uVar13 - uVar16 * uVar12;
          }
          *(undefined8 *)(lRam00000001137eb910 + uVar13 * 8) = 0x1137eb920;
          plVar10 = (long *)*plVar14;
          lVar9 = lRam00000001137eb910;
          while (lRam00000001137eb910 = lVar9, plVar10 != (long *)0x0) {
            uVar16 = plVar10[1];
            if ((uVar12 & uVar15) == 0) {
              uVar16 = uVar16 & uVar15;
            }
            else if (uVar12 <= uVar16) {
              uVar11 = 0;
              if (uVar12 != 0) {
                uVar11 = uVar16 / uVar12;
              }
              uVar16 = uVar16 - uVar11 * uVar12;
            }
            plVar8 = plVar10;
            if (uVar16 != uVar13) {
              if (*(long *)(lVar9 + uVar16 * 8) == 0) {
                *(long **)(lVar9 + uVar16 * 8) = plVar14;
                uVar13 = uVar16;
              }
              else {
                *plVar14 = *plVar10;
                *plVar10 = **(long **)(lVar9 + uVar16 * 8);
                **(undefined8 **)(lVar9 + uVar16 * 8) = plVar10;
                plVar8 = plVar14;
              }
            }
            lVar9 = lRam00000001137eb910;
            plVar14 = plVar8;
            plVar10 = (long *)*plVar8;
          }
        }
      }
      else if (uVar12 < uRam00000001137eb918) {
        uVar15 = (ulong)((float)uRam00000001137eb928 / fRam00000001137eb930);
        if ((uRam00000001137eb918 < 3) || ((uRam00000001137eb918 & uRam00000001137eb918 - 1) != 0))
        {
          __ZNSt3__112__next_primeEm();
        }
        else if (1 < uVar15) {
          uVar15 = 1L << (-LZCOUNT(uVar15 - 1) & 0x3fU);
        }
        lVar9 = lRam00000001137eb910;
        if (uVar12 <= uVar15) {
          uVar12 = uVar15;
        }
        if (uVar12 < uVar13) {
          if (uVar12 != 0) goto LAB_10a6f2cf4;
          lRam00000001137eb910 = 0;
          if (lVar9 != 0) {
            __ZdlPv();
          }
          uRam00000001137eb918 = 0;
        }
      }
    }
    uVar13 = uRam00000001137eb918;
    lVar9 = lRam00000001137eb910;
    uVar15 = plVar7[1];
    uVar12 = uRam00000001137eb918 - 1;
    if ((uRam00000001137eb918 & uVar12) == 0) {
      uVar15 = uVar12 & uVar15;
    }
    else if (uRam00000001137eb918 <= uVar15) {
      uVar16 = 0;
      if (uRam00000001137eb918 != 0) {
        uVar16 = uVar15 / uRam00000001137eb918;
      }
      uVar15 = uVar15 - uVar16 * uRam00000001137eb918;
    }
    plVar14 = *(long **)(lRam00000001137eb910 + uVar15 * 8);
    if (plVar14 == (long *)0x0) {
      *plVar7 = (long)plRam00000001137eb920;
      plRam00000001137eb920 = plVar7;
      *(undefined8 *)(lVar9 + uVar15 * 8) = 0x1137eb920;
      if (*plVar7 != 0) {
        uVar15 = *(ulong *)(*plVar7 + 8);
        if ((uVar13 & uVar12) == 0) {
          uVar15 = uVar15 & uVar12;
        }
        else if (uVar13 <= uVar15) {
          uVar12 = 0;
          if (uVar13 != 0) {
            uVar12 = uVar15 / uVar13;
          }
          uVar15 = uVar15 - uVar12 * uVar13;
        }
        plVar14 = (long *)(lRam00000001137eb910 + uVar15 * 8);
        goto LAB_10a6f2dc8;
      }
    }
    else {
      *plVar7 = *plVar14;
LAB_10a6f2dc8:
      *plVar14 = (long)plVar7;
    }
    uRam00000001137eb928 = uRam00000001137eb928 + 1;
LAB_10a6f2ddc:
    puVar17 = puVar17 + 0x18;
    if (puVar17 == &UNK_110c134d8) {
      return;
    }
  } while( true );
}



/* Entry: 10a6f2f38; end: 10a6f2f3b;  */

long * FUN_10a6f2f38(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (*(char *)((long)plVar1 + 0x27) < '\0') {
      __ZdlPv(plVar1[2]);
    }
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



/* Entry: 10a6f2f3c; end: 10a6f3253;  */

void FUN_10a6f2f3c(undefined8 *param_1,long param_2,undefined1 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  
  if (param_2 == 0) {
    plVar7 = (long *)0x118;
    __Znwm();
    plVar7[1] = 0;
    plVar7[2] = 0;
    *plVar7 = (long)&PTR_FUN_110c14bc8;
    plVar6 = plVar7 + 3;
    FUN_10a6f27ec(plVar6,0,param_3,param_4);
    plStack_60 = plVar6;
    plStack_58 = plVar7;
    FUN_10a6ff650(&plStack_60,plVar7 + 8,plVar6);
    FUN_10a6ff4ac(param_1,&plStack_60);
    if (plStack_58 == (long *)0x0) {
      return;
    }
    plVar6 = plStack_58 + 1;
    do {
      lVar8 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar7 = plStack_58;
    } while (cVar2 != '\0');
  }
  else {
    lVar8 = *(long *)(param_2 + 0x858);
    plVar7 = *(long **)(param_2 + 0x860);
    if (plVar7 != (long *)0x0) {
      plVar6 = plVar7 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar4 = 0x100;
    __Znwm(0x100);
    FUN_10a6f27ec();
    if (plVar7 != (long *)0x0) {
      plVar6 = plVar7 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar6 = plVar7 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
    lStack_70 = lVar8;
    plStack_68 = plVar7;
    FUN_10a720450(&plStack_60,uVar4,&lStack_70);
    FUN_10a6ff4ac(param_1,&plStack_60);
    plVar6 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
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
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plStack_68 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar7 != (long *)0x0) {
      plVar6 = plVar7 + 1;
      do {
        lVar5 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if ((lVar8 != 0) && (plVar6 = (long *)*param_1, plVar6 != (long *)0x0)) {
      plStack_58 = (long *)param_1[1];
      if (plStack_58 != (long *)0x0) {
        plVar1 = plStack_58 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plStack_60 = plVar6;
      FUN_10aa88c30(lVar8,&plStack_60);
      plVar6 = plStack_58;
      if (plStack_58 != (long *)0x0) {
        plVar1 = plStack_58 + 1;
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
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
    }
    if (plVar7 == (long *)0x0) {
      return;
    }
    plVar6 = plVar7 + 1;
    do {
      lVar8 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (lVar8 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
  }
  return;
}



/* Entry: 10a6f3254; end: 10a6f3363;  */

void FUN_10a6f3254(undefined8 param_1,long param_2,int param_3,int param_4,uint param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lStack_88;
  undefined1 auStack_80 [16];
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 auStack_58 [2];
  char cStack_41;
  
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  FUN_10a82be98(&lStack_88,param_2 + 0xe8);
  if ((int)param_5 < 1) {
    uVar1 = (ulong)(int)param_5;
    auVar5._8_8_ = -(ulong)-param_5;
    auVar5._0_8_ = -(ulong)-param_5;
    auVar5 = NEON_ushl(auStack_80,auVar5,8);
    lStack_68 = auVar5._0_8_ + (long)param_3;
    lStack_60 = auVar5._8_8_ + (long)param_4;
  }
  else {
    lVar2 = (long)(1 << (ulong)(param_5 - 1 & 0x1f));
    auVar4._4_4_ = 0;
    auVar4._0_4_ = param_5;
    uVar1 = (ulong)param_5;
    auVar4._8_4_ = param_5;
    auVar4._12_4_ = 0;
    auVar5 = NEON_ushl(auStack_80,auVar4,8);
    lStack_68 = lVar2 + param_3 + auVar5._0_8_;
    lStack_60 = lVar2 + param_4 + auVar5._8_8_;
  }
  lStack_70 = lStack_88 + uVar1;
  FUN_10a82c03c(auStack_58,&lStack_70);
  FUN_10a6f2f3c(param_1,uVar3,3,auStack_58);
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  return;
}



/* Entry: 10a6f3364; end: 10a6f3427;  */

void FUN_10a6f3364(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  long lStack_28;
  
  lStack_28 = param_1;
  if (param_1 == 0) {
    uStack_40 = 0;
    FUN_10a720864(&uStack_40,param_2,param_3);
  }
  else {
    uStack_38 = *(undefined8 *)(param_1 + 0x858);
    plStack_30 = *(long **)(param_1 + 0x860);
    if (plStack_30 != (long *)0x0) {
      plVar1 = plStack_30 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a72061c(&uStack_38,&lStack_28);
    plVar1 = plStack_30;
    if (plStack_30 != (long *)0x0) {
      plVar2 = plStack_30 + 1;
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
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10a6f3428; end: 10a6f37a7;  */

void FUN_10a6f3428(undefined8 *param_1,long param_2,undefined1 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plStack_68;
  long *plStack_60;
  long lStack_58;
  long *plStack_50;
  char cStack_41;
  
  if (param_2 == 0) {
    plVar7 = (long *)0x118;
    __Znwm();
    plVar7[1] = 0;
    plVar7[2] = 0;
    *plVar7 = (long)&PTR_FUN_110c14bc8;
    func_0x000107c2b054(&lStack_58,&DAT_10f66f8ab);
    plVar6 = plVar7 + 3;
    FUN_10a6f27ec(plVar6,0,param_3,&lStack_58);
    if (cStack_41 < '\0') {
      __ZdlPv(lStack_58);
    }
    plStack_68 = plVar6;
    plStack_60 = plVar7;
    FUN_10a6ff650(&plStack_68,plVar7 + 8,plVar6);
    FUN_10a6ff4ac(param_1,&plStack_68);
    if (plStack_60 == (long *)0x0) {
      return;
    }
    plVar6 = plStack_60 + 1;
    do {
      lVar8 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar7 = plStack_60;
    } while (cVar2 != '\0');
  }
  else {
    lVar8 = *(long *)(param_2 + 0x858);
    plVar7 = *(long **)(param_2 + 0x860);
    if (plVar7 != (long *)0x0) {
      plVar6 = plVar7 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar4 = 0x100;
    __Znwm(0x100);
    func_0x000107c2b054(&lStack_58,&DAT_10f66f8ab);
    FUN_10a6f27ec(uVar4,param_2,param_3,&lStack_58);
    if (cStack_41 < '\0') {
      __ZdlPv(lStack_58);
    }
    if (plVar7 != (long *)0x0) {
      plVar6 = plVar7 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar6 = plVar7 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
    lStack_58 = lVar8;
    plStack_50 = plVar7;
    FUN_10a720450(&plStack_68,uVar4,&lStack_58);
    FUN_10a6ff4ac(param_1,&plStack_68);
    plVar6 = plStack_60;
    if (plStack_60 != (long *)0x0) {
      plVar1 = plStack_60 + 1;
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
        (**(code **)(*plStack_60 + 0x10))(plStack_60);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plStack_50 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar7 != (long *)0x0) {
      plVar6 = plVar7 + 1;
      do {
        lVar5 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if ((lVar8 != 0) && (plVar6 = (long *)*param_1, plVar6 != (long *)0x0)) {
      plStack_60 = (long *)param_1[1];
      if (plStack_60 != (long *)0x0) {
        plVar1 = plStack_60 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plStack_68 = plVar6;
      FUN_10aa88c30(lVar8,&plStack_68);
      plVar6 = plStack_60;
      if (plStack_60 != (long *)0x0) {
        plVar1 = plStack_60 + 1;
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
          (**(code **)(*plStack_60 + 0x10))(plStack_60);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
    }
    if (plVar7 == (long *)0x0) {
      return;
    }
    plVar6 = plVar7 + 1;
    do {
      lVar8 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (lVar8 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
  }
  return;
}



/* Entry: 10a6f37a8; end: 10a6f3b27;  */

void FUN_10a6f37a8(undefined8 *param_1,long param_2,undefined1 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plStack_68;
  long *plStack_60;
  long lStack_58;
  long *plStack_50;
  char cStack_41;
  
  if (param_2 == 0) {
    plVar7 = (long *)0x118;
    __Znwm();
    plVar7[1] = 0;
    plVar7[2] = 0;
    *plVar7 = (long)&PTR_FUN_110c14bc8;
    func_0x000107c2b054(&lStack_58,&UNK_10f66f9ad);
    plVar6 = plVar7 + 3;
    FUN_10a6f27ec(plVar6,0,param_3,&lStack_58);
    if (cStack_41 < '\0') {
      __ZdlPv(lStack_58);
    }
    plStack_68 = plVar6;
    plStack_60 = plVar7;
    FUN_10a6ff650(&plStack_68,plVar7 + 8,plVar6);
    FUN_10a6ff4ac(param_1,&plStack_68);
    if (plStack_60 == (long *)0x0) {
      return;
    }
    plVar6 = plStack_60 + 1;
    do {
      lVar8 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar7 = plStack_60;
    } while (cVar2 != '\0');
  }
  else {
    lVar8 = *(long *)(param_2 + 0x858);
    plVar7 = *(long **)(param_2 + 0x860);
    if (plVar7 != (long *)0x0) {
      plVar6 = plVar7 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar4 = 0x100;
    __Znwm(0x100);
    func_0x000107c2b054(&lStack_58,&UNK_10f66f9ad);
    FUN_10a6f27ec(uVar4,param_2,param_3,&lStack_58);
    if (cStack_41 < '\0') {
      __ZdlPv(lStack_58);
    }
    if (plVar7 != (long *)0x0) {
      plVar6 = plVar7 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar6 = plVar7 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
    lStack_58 = lVar8;
    plStack_50 = plVar7;
    FUN_10a720450(&plStack_68,uVar4,&lStack_58);
    FUN_10a6ff4ac(param_1,&plStack_68);
    plVar6 = plStack_60;
    if (plStack_60 != (long *)0x0) {
      plVar1 = plStack_60 + 1;
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
        (**(code **)(*plStack_60 + 0x10))(plStack_60);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plStack_50 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar7 != (long *)0x0) {
      plVar6 = plVar7 + 1;
      do {
        lVar5 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if ((lVar8 != 0) && (plVar6 = (long *)*param_1, plVar6 != (long *)0x0)) {
      plStack_60 = (long *)param_1[1];
      if (plStack_60 != (long *)0x0) {
        plVar1 = plStack_60 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plStack_68 = plVar6;
      FUN_10aa88c30(lVar8,&plStack_68);
      plVar6 = plStack_60;
      if (plStack_60 != (long *)0x0) {
        plVar1 = plStack_60 + 1;
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
          (**(code **)(*plStack_60 + 0x10))(plStack_60);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
    }
    if (plVar7 == (long *)0x0) {
      return;
    }
    plVar6 = plVar7 + 1;
    do {
      lVar8 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (lVar8 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
  }
  return;
}



/* Entry: 10a6f3b28; end: 10a6f3beb;  */

void FUN_10a6f3b28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  long lStack_28;
  
  lStack_28 = param_1;
  if (param_1 == 0) {
    uStack_40 = 0;
    FUN_10a720c84(&uStack_40,param_2,param_3);
  }
  else {
    uStack_38 = *(undefined8 *)(param_1 + 0x858);
    plStack_30 = *(long **)(param_1 + 0x860);
    if (plStack_30 != (long *)0x0) {
      plVar1 = plStack_30 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a720a3c(&uStack_38,&lStack_28);
    plVar1 = plStack_30;
    if (plStack_30 != (long *)0x0) {
      plVar2 = plStack_30 + 1;
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
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10a6f3bec; end: 10a6f3d03;  */

void FUN_10a6f3bec(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  undefined8 *puVar4;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  lStack_48 = -0x7fffffffffffffe0;
  uStack_50 = 0x1c;
  puVar2[1] = 0x207b207465737341;
  *puVar2 = 0x6e6f697461636f4c;
  *(undefined8 *)((long)puVar2 + 0x14) = 0x203a64496e6f6974;
  *(undefined8 *)((long)puVar2 + 0xc) = 0x61636f6c207b2074;
  *(undefined1 *)((long)puVar2 + 0x1c) = 0;
  uVar1 = *(ulong *)(param_2 + 0xf0);
  puVar4 = *(undefined8 **)(param_2 + 0xe8);
  if (-1 < (char)*(byte *)(param_2 + 0xff)) {
    uVar1 = (ulong)*(byte *)(param_2 + 0xff);
    puVar4 = (undefined8 *)(param_2 + 0xe8);
  }
  ppuVar3 = &puStack_58;
  puStack_58 = puVar2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(ppuVar3,puVar4,uVar1)
  ;
  puStack_38 = ppuVar3[1];
  puStack_40 = *ppuVar3;
  puStack_30 = ppuVar3[2];
  ppuVar3[1] = (undefined8 *)0x0;
  ppuVar3[2] = (undefined8 *)0x0;
  *ppuVar3 = (undefined8 *)0x0;
  ppuVar3 = &puStack_40;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar3,&DAT_10f2da10d,1);
  puVar4 = *ppuVar3;
  param_1[1] = ppuVar3[1];
  *param_1 = puVar4;
  param_1[2] = ppuVar3[2];
  ppuVar3[1] = (undefined8 *)0x0;
  ppuVar3[2] = (undefined8 *)0x0;
  *ppuVar3 = (undefined8 *)0x0;
  if ((long)puStack_30 < 0) {
    __ZdlPv(puStack_40);
  }
  if (lStack_48 < 0) {
    __ZdlPv(puStack_58);
  }
  return;
}



/* Entry: 10a6f3d04; end: 10a6f3da3;  */

void FUN_10a6f3d04(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  undefined8 *puVar4;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  lStack_48 = -0x7fffffffffffffe0;
  uStack_50 = 0x1c;
  puVar2[1] = 0x207b207465737341;
  *puVar2 = 0x6e6f697461636f4c;
  *(undefined8 *)((long)puVar2 + 0x14) = 0x203a64496e6f6974;
  *(undefined8 *)((long)puVar2 + 0xc) = 0x61636f6c207b2074;
  *(undefined1 *)((long)puVar2 + 0x1c) = 0;
  uVar1 = *(ulong *)(param_2 + 0xe0);
  puVar4 = *(undefined8 **)(param_2 + 0xd8);
  if (-1 < (char)*(byte *)(param_2 + 0xef)) {
    uVar1 = (ulong)*(byte *)(param_2 + 0xef);
    puVar4 = (undefined8 *)(param_2 + 0xd8);
  }
  ppuVar3 = &puStack_58;
  puStack_58 = puVar2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(ppuVar3,puVar4,uVar1)
  ;
  puStack_38 = ppuVar3[1];
  puStack_40 = *ppuVar3;
  puStack_30 = ppuVar3[2];
  ppuVar3[1] = (undefined8 *)0x0;
  ppuVar3[2] = (undefined8 *)0x0;
  *ppuVar3 = (undefined8 *)0x0;
  ppuVar3 = &puStack_40;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar3,&DAT_10f2da10d,1);
  puVar4 = *ppuVar3;
  param_1[1] = ppuVar3[1];
  *param_1 = puVar4;
  param_1[2] = ppuVar3[2];
  ppuVar3[1] = (undefined8 *)0x0;
  ppuVar3[2] = (undefined8 *)0x0;
  *ppuVar3 = (undefined8 *)0x0;
  if ((long)puStack_30 < 0) {
    __ZdlPv(puStack_40);
  }
  if (lStack_48 < 0) {
    __ZdlPv(puStack_58);
  }
  return;
}



/* Entry: 10a6f3da4; end: 10a6f4153;  */

void FUN_10a6f3da4(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  bool bVar7;
  ulong uVar8;
  undefined4 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f662402,0x20);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c14ac0;
  pppuVar2 = (undefined8 ***)&UNK_10f66de00;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0xb6;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c14ac0;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c42c58;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a6f4134;
    FUN_10a054dac(param_1,&UNK_10f66f9f8,FUN_10a720e5c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a6f4134;
    FUN_10a054dac(param_1,&UNK_10f66fa10,FUN_10a72136c,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a6f4134;
    FUN_10a054dac(param_1,&UNK_10f66fa1e,FUN_10a7227d8,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,0x400,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f66fa2f,FUN_10a7242dc,0);
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,0x400,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f66fa42,FUN_10a724424,0);
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,0x400,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f66fa53,FUN_10a7244d4,FUN_10a72458c);
  }
  iVar4 = *(int *)(param_1 + 0x160);
  bVar7 = iVar4 != 100;
  if (bVar7) {
    iVar4 = 0x19;
  }
  uVar9 = 4;
  if (bVar7) {
    uVar9 = 0xffffffff;
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,iVar4,1,0xffffffff,0xffffffff,uVar9);
  if ((uVar8 & 1) == 0) {
    FUN_10a052828(param_1,"session",FUN_10a72464c,FUN_10a724704);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar10 = *(ulong *)(lVar3 + -0x48);
    uVar11 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar11 >> 0x20);
    uVar9 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar10 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar8 = param_1;
    uStack_88 = uVar11;
    uStack_80 = uVar10;
    FUN_10a0051e8(param_1,uVar11 & 0xffffffff,uVar9,uStack_50 & 0xffffffff,uVar10 & 0xffffffff,uVar5
                 );
    if ((uVar8 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f662402,0x20);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a6f4134:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a6f4138);
  (*pcVar6)();
}



/* Entry: 10a6f4154; end: 10a6f41b7;  */

void FUN_10a6f4154(long *param_1,long param_2,long param_3)

{
  code *pcVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_3 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = param_3;
    if ((param_3 != 0) && (*param_1 = param_2, param_2 != 0)) {
      return;
    }
  }
  FUN_10a00946c(&UNK_10f66fa74);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a6f41a4);
  (*pcVar1)();
}



/* Entry: 10a6f41b8; end: 10a6f4357;  */

void FUN_10a6f41b8(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lStack_50;
  code *pcStack_48;
  long *plStack_40;
  undefined8 *puStack_38;
  
  lVar9 = *param_2;
  if (lVar9 != 0) {
    lVar5 = *(long *)(param_1 + 0x870);
    puVar7 = *(undefined8 **)(lVar5 + 0x38);
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = *(undefined8 **)(lVar5 + 0x28);
      plVar6 = *(long **)(lVar5 + 0x30);
    }
    else {
      plVar6 = *(long **)(lVar5 + 0x40);
    }
    if (plVar6 != (long *)0x0) {
      plVar8 = plVar6 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *plVar8 = *plVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      lVar9 = *param_2;
    }
    lVar5 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    plVar8 = (long *)puVar7[2];
    puStack_38 = puVar7;
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x20;
      __Znwm();
      *plVar8 = lVar9;
      plVar8[1] = lVar5;
      plVar8[3] = 0x10a724a5c;
      pcStack_48 = FUN_10a724a24;
      plStack_40 = plVar8;
      (**(code **)*puVar7)(puVar7,&pcStack_48);
    }
    else {
      lStack_50 = 0;
      (**(code **)(*plVar8 + 0x28))(plVar8,0,&lStack_50);
      if (lStack_50 != 0) {
        func_0x0001092af97c(&lStack_50);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10a6f4330);
        (*pcVar3)();
      }
      plVar4 = (long *)0x28;
      __Znwm();
      *plVar4 = lVar9;
      plVar4[1] = lVar5;
      plVar4[3] = (long)FUN_10a724a40;
      plVar4[4] = (long)plVar8;
      pcStack_48 = FUN_10a7249f0;
      plStack_40 = plVar4;
      (**(code **)*puVar7)(puVar7,&pcStack_48);
      __ZNSt13exception_ptrD1Ev(&lStack_50);
    }
    lStack_50 = 0;
    __ZNSt13exception_ptrD1Ev(&lStack_50);
    if (plVar6 != (long *)0x0) {
      plVar8 = plVar6 + 1;
      do {
        lVar9 = *plVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *plVar8 = lVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  return;
}



/* Entry: 10a6f4358; end: 10a6f4d6b;  */

/* WARNING: Removing unreachable block (ram,0x00010a6f4718) */

void FUN_10a6f4358(long *param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  long lStack_58;
  
  puVar6 = (undefined8 *)0xe8;
  __Znwm();
  *puVar6 = FUN_10a7350cc;
  puVar6[1] = FUN_10a735844;
  puVar1 = puVar6 + 9;
  uVar11 = *param_3;
  puVar8 = puVar6 + 0xc;
  puVar6[0xd] = param_3[1];
  *puVar8 = uVar11;
  puVar6[0x1b] = param_2;
  if (param_3[1] != 0) {
    plVar13 = (long *)(param_3[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = *plVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar11 = *param_4;
  puVar6[0xf] = param_4[1];
  puVar6[0xe] = uVar11;
  *param_4 = 0;
  param_4[1] = 0;
  FUN_10a724b04(puVar6 + 2);
  lVar9 = puVar6[7];
  if (lVar9 != 0) {
    plVar13 = (long *)(lVar9 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = *plVar13 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lVar9;
  FUN_10a6f2978(puVar1,*puVar8);
  plVar7 = *(long **)(param_2 + 0x960);
  FUN_10a6eb764(plVar7,puVar8);
  plVar13 = plVar7;
  (**(code **)(*plVar7 + 0x38))();
  if (((ulong)plVar13 & 1) == 0) {
    FUN_10a00946c(&UNK_10f66fa8a);
    goto LAB_10a6f4ab8;
  }
  (**(code **)(*plVar7 + 0x40))(puVar6 + 0x14,plVar7,0);
  if (((uint)*(undefined8 *)(puVar6[0x14] + 0x10) >> 1 & 1) == 0) {
    FUN_10a00946c(&UNK_10f66faa8);
    goto LAB_10a6f4ab8;
  }
  func_0x0001092af8bc(puVar6 + 0x14);
  if ((*(byte *)(puVar6[0x14] + 0xa8) & 1) == 0) goto LAB_10a6f4ab8;
  FUN_10a6f4d6c(puVar6 + 0x10,*(undefined8 *)(puVar6[0x14] + 0x98));
  if (puVar6[0x10] == 0) {
    FUN_10a00946c(&UNK_10f66fac5);
    goto LAB_10a6f4ab8;
  }
  FUN_10a7d0154(puVar6 + 0x12,puVar6 + 0x10);
  if (puVar6[0x12] == 0) {
    FUN_10a00946c(&UNK_10f66faed);
    goto LAB_10a6f4ab8;
  }
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    puVar8 = (undefined8 *)puVar6[9];
    if (-1 < *(char *)((long)puVar6 + 0x5f)) {
      puVar8 = puVar1;
    }
    func_0x00010ae06f08(1,4,&UNK_10f66fb16,&UNK_10f66fb66,0x85,&UNK_10f66fc22,param_7,param_8,puVar8
                       );
  }
  puVar8 = (undefined8 *)0x40;
  __Znwm();
  lStack_58 = -0x7fffffffffffffc0;
  puStack_60 = (undefined8 *)0x3a;
  puVar8[1] = 0x43342d353133312d;
  *puVar8 = 0x3739393144333532;
  puVar8[3] = 0x4133363939334330;
  puVar8[2] = 0x2d364439392d4539;
  puVar8[5] = 0x61636f6c6f632d6d;
  puVar8[4] = 0x73636c3a44323638;
  *(undefined8 *)((long)puVar8 + 0x32) = 0x7365736e656c2d64;
  *(undefined8 *)((long)puVar8 + 0x2a) = 0x657461636f6c6f63;
  *(undefined1 *)((long)puVar8 + 0x3a) = 0;
  puStack_68 = puVar8;
  FUN_10a7d0f9c(puVar6 + 0x15,puVar6 + 0xe,param_2,puVar6 + 0x12,&puStack_68,puVar1);
  if (lStack_58 < 0) {
    __ZdlPv(puStack_68);
  }
  puVar6[0x18] = 0;
  *(undefined1 *)(puVar6 + 0x1c) = 0;
  puVar8 = puVar6 + 0x18;
  FUN_10a6f4dfc(puVar8,puVar6);
  if (((ulong)puVar8 & 1) != 0) {
    return;
  }
  lVar9 = puVar6[0x18];
  puVar6[0x17] = lVar9;
  puVar6[0x18] = 0;
  if (lVar9 == 0) {
    if ((puVar6[0x1b] == 0) || (lVar9 = *(long *)(puVar6[0x1b] + 0x100), lVar9 == 0)) {
      puVar6[0x16] = 0;
      puVar6[0x17] = 0;
    }
    else {
      lVar9 = *(long *)(lVar9 + 0x1a8);
      puVar6[0x16] = lVar9;
      if (lVar9 != 0) {
        plVar13 = (long *)(lVar9 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = *plVar13 + 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        plVar13 = (long *)puVar6[0x17];
        if (plVar13 != (long *)0x0) {
          puVar2 = (ulong *)(plVar13 + 1);
          do {
            uVar10 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar10 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar10 & 0x1fffffffc) == 4) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
            do {
              uVar10 = *puVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar4) {
                *puVar2 = uVar10 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar10 - 1 == 0) {
              (**(code **)(*plVar13 + 8))(plVar13);
            }
          }
        }
      }
    }
  }
  else {
    puVar6[0x16] = lVar9;
    puVar6[0x17] = 0;
  }
  plVar13 = (long *)puVar6[0x18];
  if (plVar13 != (long *)0x0) {
    puVar2 = (ulong *)(plVar13 + 1);
    do {
      uVar10 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar10 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar10 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      do {
        uVar10 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar10 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar10 - 1 == 0) {
        (**(code **)(*plVar13 + 8))(plVar13);
      }
    }
  }
  lVar9 = puVar6[0x16];
  puVar6[0x1a] = lVar9;
  if (lVar9 == 0) {
LAB_10a6f46a4:
    lVar9 = puVar6[0x15];
    puVar6[0x19] = lVar9;
    if (lVar9 != 0) {
      plVar13 = (long *)(lVar9 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = *plVar13 + 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  else {
    plVar13 = (long *)(lVar9 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = *plVar13 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar6[0x1a] == 0) goto LAB_10a6f46a4;
    FUN_10a724ba4(puVar6 + 0x19,puVar6 + 0x1a,puVar6 + 0x15);
  }
  puVar6[0x18] = puVar6[0x19];
  plVar13 = (long *)(puVar6[0x19] + 8);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar4) {
      *plVar13 = *plVar13 + 4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (((uint)*(undefined8 *)(puVar6[0x18] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0x1c) = 1;
    lVar9 = puVar6[0x18];
    plVar13 = (long *)(lVar9 + 0x10);
    uVar11 = puVar6[3];
    do {
      lVar12 = *plVar13;
      if (lVar12 == 0) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          puStack_68 = (undefined8 *)0x0;
          puStack_60 = puVar6;
          lStack_58 = uVar11;
          func_0x000109d1b588(lVar9 + 0x18,&puStack_68);
          *(undefined8 *)(lVar9 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar12 >> 1 & 1) == 0);
  }
  plVar13 = (long *)puVar6[0x18];
  if (((uint)*(undefined8 *)(puVar6[0x18] + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(plVar13 + 0x15) & 1) != 0) {
      puVar2 = (ulong *)(plVar13 + 1);
      do {
        uVar10 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar10 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar10 & 0x1fffffffc) == 4) {
        do {
          uVar10 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar10 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar10 - 1 == 0) {
          (**(code **)(*plVar13 + 8))();
        }
      }
      plVar13 = (long *)puVar6[0x19];
      if (plVar13 != (long *)0x0) {
        puVar2 = (ulong *)(plVar13 + 1);
        do {
          uVar10 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar10 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          do {
            uVar10 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar10 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*plVar13 + 8))();
          }
        }
      }
      plVar13 = (long *)puVar6[0x1a];
      if (plVar13 != (long *)0x0) {
        puVar2 = (ulong *)(plVar13 + 1);
        do {
          uVar10 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar10 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          do {
            uVar10 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar10 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*plVar13 + 8))(plVar13);
          }
        }
      }
      FUN_10a6f4ea0(puVar6 + 2,puVar1);
      plVar13 = (long *)puVar6[0x16];
      if (plVar13 != (long *)0x0) {
        puVar2 = (ulong *)(plVar13 + 1);
        do {
          uVar10 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar10 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          do {
            uVar10 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar10 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*plVar13 + 8))(plVar13);
          }
        }
      }
      plVar13 = (long *)puVar6[0x15];
      if (plVar13 != (long *)0x0) {
        puVar2 = (ulong *)(plVar13 + 1);
        do {
          uVar10 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar10 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          do {
            uVar10 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar10 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*plVar13 + 8))();
          }
        }
      }
      plVar13 = (long *)puVar6[0x13];
      if (plVar13 != (long *)0x0) {
        plVar7 = plVar13 + 1;
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
          (**(code **)(*plVar13 + 0x10))(plVar13);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
      plVar13 = (long *)puVar6[0x11];
      if (plVar13 != (long *)0x0) {
        plVar7 = plVar13 + 1;
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
          (**(code **)(*plVar13 + 0x10))(plVar13);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
      plVar13 = (long *)puVar6[0x14];
      if (plVar13 != (long *)0x0) {
        puVar2 = (ulong *)(plVar13 + 1);
        do {
          uVar10 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar10 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          do {
            uVar10 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar10 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*plVar13 + 8))();
          }
        }
      }
      if (*(char *)((long)puVar6 + 0x5f) < '\0') {
        __ZdlPv(*puVar1);
      }
      FUN_10a724a78(puVar6[0x1b],puVar6 + 0xe);
      func_0x000109d1a1d0(puVar6 + 2);
      plVar13 = (long *)puVar6[0xf];
      if (plVar13 != (long *)0x0) {
        plVar7 = plVar13 + 1;
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
          (**(code **)(*plVar13 + 0x10))(plVar13);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
      plVar13 = (long *)puVar6[0xd];
      if (plVar13 != (long *)0x0) {
        plVar7 = plVar13 + 1;
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
          (**(code **)(*plVar13 + 0x10))(plVar13);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
      __ZdlPv(puVar6);
      return;
    }
  }
  else {
    func_0x0001092af97c(plVar13 + 0x12);
  }
LAB_10a6f4ab8:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a6f4abc);
  (*pcVar5)();
}



/* Entry: 10a6f4d6c; end: 10a6f4dfb;  */

void FUN_10a6f4d6c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_30;
  long *plStack_28;
  
  (**(code **)(*param_2 + 0x50))(&uStack_30);
  param_1[1] = plStack_28;
  *param_1 = uStack_30;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
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
      if (lVar4 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
  }
  return;
}



/* Entry: 10a6f4dfc; end: 10a6f4e9f;  */

undefined8 FUN_10a6f4dfc(long *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_2 + 0x30);
  if (lVar6 != 0) {
    plVar5 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)*param_1;
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
  *param_1 = lVar6;
  return 0;
}



/* Entry: 10a6f4ea0; end: 10a6f4edf;  */

void FUN_10a6f4ea0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  
  plVar6 = (long *)(param_1 + 0x30);
  FUN_10a7258a4(*plVar6);
  plVar4 = (long *)*plVar6;
  *plVar6 = 0;
  if (plVar4 == (long *)0x0) {
    return;
  }
  puVar1 = (ulong *)(plVar4 + 1);
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar5 - 0x200000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (uVar5 >> 0x21 == 1) {
    FUN_109d1b3c4(plVar4,1,plVar6);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a6f4ee0; end: 10a6f505f;  */

long * FUN_10a6f4ee0(long *param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  long *plStack_48;
  
  lVar7 = *(long *)(*(long *)(param_2 + 0x960) + 0x1a0);
  lVar2 = *(long *)(*(long *)(param_2 + 0x960) + 0x1a8);
  *param_1 = lVar7;
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    plVar8 = (long *)(lVar2 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (lVar7 != 0) {
    return param_1;
  }
  lVar7 = param_3[1];
  plVar8 = (long *)param_3[1];
  uVar9 = *param_3;
  puVar5 = (undefined8 *)0x68;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_110c14510;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_50 = uVar9;
  plStack_48 = plVar8;
  FUN_10a82d418(puVar5 + 3,&uStack_50);
  plVar8 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = (long *)param_1[1];
  *param_1 = (long)(puVar5 + 3);
  param_1[1] = (long)puVar5;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
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
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  lVar6 = *(long *)(param_2 + 0x960);
  lVar7 = *param_1;
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    plVar8 = (long *)(lVar2 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar8 = *(long **)(lVar6 + 0x1a8);
  *(long *)(lVar6 + 0x1a0) = lVar7;
  *(long *)(lVar6 + 0x1a8) = lVar2;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
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
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  return (long *)(lVar6 + 0x1a0);
}



/* Entry: 10a6f5060; end: 10a6f509b;  */

undefined8 * FUN_10a6f5060(undefined8 *param_1)

{
  FUN_10a724a78(*(undefined8 *)*param_1,param_1[1]);
  FUN_10a725a64(*(undefined8 *)*param_1,param_1[2]);
  return param_1;
}



/* Entry: 10a6f509c; end: 10a6f5e5b;  */

void FUN_10a6f509c(long *param_1,long param_2,long *param_3,long *param_4,long *param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  ulong uStack_170;
  long *plStack_168;
  char cStack_159;
  char cStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = (long *)0x3f0;
  __Znwm();
  *plVar7 = (long)FUN_10a7370ec;
  plVar7[1] = (long)FUN_10a737cb4;
  plVar15 = plVar7 + 0x69;
  plVar7[0x7a] = param_2;
  lVar10 = *param_3;
  plVar7[0x6d] = param_3[1];
  plVar7[0x6c] = lVar10;
  *param_3 = 0;
  param_3[1] = 0;
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000107c3192c(plVar15,*param_4,param_4[1]);
  }
  else {
    lVar10 = *param_4;
    plVar7[0x6a] = param_4[1];
    *plVar15 = lVar10;
    plVar7[0x6b] = param_4[2];
  }
  lVar10 = param_5[1];
  lVar13 = *param_5;
  plVar7[0x6f] = param_5[1];
  plVar7[0x6e] = lVar13;
  if (lVar10 != 0) {
    plVar17 = (long *)(lVar10 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar4) {
        *plVar17 = *plVar17 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a711e58(plVar7 + 2);
  lVar10 = plVar7[7];
  if (lVar10 != 0) {
    plVar17 = (long *)(lVar10 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar4) {
        *plVar17 = *plVar17 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar17 = plVar7 + 0x6e;
  *param_1 = lVar10;
  FUN_10a725afc(&puStack_150,param_2 + 0x18);
  plVar7[0x7c] = (long)plStack_148;
  plVar7[0x7b] = (long)puStack_150;
  if (plStack_148 != (long *)0x0) {
    plVar9 = plStack_148 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar9 = plStack_148 + 1;
    do {
      lVar10 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_148 + 0x10))(plStack_148);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_148);
    }
  }
  puVar8 = (undefined8 *)0x40;
  __Znwm();
  plVar9 = plVar7 + 0x76;
  plStack_140 = (long *)0x8000000000000040;
  plStack_148 = (long *)0x3a;
  puVar8[1] = 0x43342d353133312d;
  *puVar8 = 0x3739393144333532;
  puVar8[3] = 0x4133363939334330;
  puVar8[2] = 0x2d364439392d4539;
  puVar8[5] = 0x61636f6c6f632d6d;
  puVar8[4] = 0x73636c3a44323638;
  *(undefined8 *)((long)puVar8 + 0x32) = 0x7365736e656c2d64;
  *(undefined8 *)((long)puVar8 + 0x2a) = 0x657461636f6c6f63;
  *(undefined1 *)((long)puVar8 + 0x3a) = 0;
  puStack_150 = puVar8;
  FUN_10a7ceecc(plVar9,plVar7 + 0x6c,param_2,&puStack_150,plVar15);
  if ((long)plStack_140 < 0) {
    __ZdlPv(puStack_150);
  }
  plVar7[9] = 0;
  *(undefined1 *)(plVar7 + 0x7d) = 0;
  plVar16 = plVar7 + 9;
  FUN_10a6de354(plVar16,plVar7);
  if (((ulong)plVar16 & 1) == 0) {
    plVar18 = plVar7 + 0x77;
    lVar10 = plVar7[9];
    plVar7[0x78] = lVar10;
    plVar7[9] = 0;
    if (lVar10 == 0) {
      if ((plVar7[0x7a] == 0) || (lVar10 = *(long *)(plVar7[0x7a] + 0x100), lVar10 == 0)) {
        *plVar18 = 0;
        plVar7[0x78] = 0;
      }
      else {
        lVar10 = *(long *)(lVar10 + 0x1a8);
        *plVar18 = lVar10;
        if (lVar10 != 0) {
          plVar16 = (long *)(lVar10 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar4) {
              *plVar16 = *plVar16 + 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          plVar16 = (long *)plVar7[0x78];
          if (plVar16 != (long *)0x0) {
            puVar1 = (ulong *)(plVar16 + 1);
            do {
              uVar11 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar11 - 4;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((uVar11 & 0x1fffffffc) == 4) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
              do {
                uVar11 = *puVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                  *puVar1 = uVar11 - 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (uVar11 - 1 == 0) {
                (**(code **)(*plVar16 + 8))(plVar16);
              }
            }
          }
        }
      }
    }
    else {
      plVar7[0x77] = lVar10;
      plVar7[0x78] = 0;
    }
    plVar19 = plVar7 + 0x79;
    plVar16 = (long *)plVar7[9];
    if (plVar16 != (long *)0x0) {
      puVar1 = (ulong *)(plVar16 + 1);
      do {
        uVar11 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar11 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar11 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        do {
          uVar11 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar11 - 1 == 0) {
          (**(code **)(*plVar16 + 8))(plVar16);
        }
      }
    }
    lVar10 = *plVar18;
    *plVar19 = lVar10;
    if (lVar10 == 0) {
LAB_10a6f53c0:
      lVar10 = *plVar9;
      plVar7[0x2d] = lVar10;
      if (lVar10 != 0) {
        plVar16 = (long *)(lVar10 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *plVar16 = *plVar16 + 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    else {
      plVar16 = (long *)(lVar10 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *plVar16 = *plVar16 + 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (*plVar19 == 0) goto LAB_10a6f53c0;
      FUN_10a724ba4(plVar7 + 0x2d,plVar19,plVar9);
    }
    plVar2 = plVar7 + 0x51;
    plVar7[9] = plVar7[0x2d];
    plVar16 = (long *)(plVar7[0x2d] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *plVar16 = *plVar16 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(plVar7[9] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(plVar7 + 0x7d) = 1;
      lVar10 = plVar7[9];
      plVar16 = (long *)(lVar10 + 0x10);
      plVar12 = (long *)plVar7[3];
      do {
        lVar13 = *plVar16;
        if (lVar13 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *plVar16 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            puStack_150 = (undefined8 *)0x0;
            plVar16 = (long *)(lVar10 + 0x18);
            plStack_148 = plVar7;
            plStack_140 = plVar12;
            func_0x000109d1b588(plVar16,&puStack_150);
            *(undefined8 *)(lVar10 + 0x10) = 0;
            goto LAB_10a6f5a88;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar13 >> 1 & 1) == 0);
    }
    plVar16 = (long *)plVar7[9];
    if (((uint)*(undefined8 *)(plVar7[9] + 0x10) >> 5 & 1) == 0) {
      if ((*(byte *)(plVar16 + 0x15) & 1) == 0) goto LAB_10a6f5acc;
      lVar10 = plVar16[0x14];
      lVar13 = plVar16[0x13];
      plVar7[0x71] = plVar16[0x14];
      plVar7[0x70] = lVar13;
      if (lVar10 != 0) {
        plVar12 = (long *)(lVar10 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = *plVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puVar1 = (ulong *)(plVar16 + 1);
      do {
        uVar11 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar11 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar11 & 0x1fffffffc) == 4) {
        do {
          uVar11 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar11 - 1 == 0) {
          (**(code **)(*plVar16 + 8))();
        }
      }
      plVar16 = (long *)plVar7[0x2d];
      if (plVar16 != (long *)0x0) {
        puVar1 = (ulong *)(plVar16 + 1);
        do {
          uVar11 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar11 & 0x1fffffffc) == 4) {
          do {
            uVar11 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar11 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar11 - 1 == 0) {
            (**(code **)(*plVar16 + 8))();
          }
        }
      }
      plVar19 = (long *)*plVar19;
      if (plVar19 != (long *)0x0) {
        puVar1 = (ulong *)(plVar19 + 1);
        do {
          uVar11 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar11 & 0x1fffffffc) == 4) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
          do {
            uVar11 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar11 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar11 - 1 == 0) {
            (**(code **)(*plVar19 + 8))(plVar19);
          }
        }
      }
      lVar10 = plVar7[0x7b];
      if (plVar7[0x7c] != 0) {
        plVar16 = (long *)(plVar7[0x7c] + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *plVar16 = *plVar16 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_10a6f4154(plVar7 + 0x72,lVar10);
      if (plVar7[0x7c] != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      FUN_10a7cfeec(plVar7 + 0x74,plVar7[0x72],plVar7 + 0x70);
      FUN_10a7d2014(plVar2,plVar7 + 0x70);
      uStack_170 = uStack_170 & 0xffffffffffffff00;
      cStack_158 = '\0';
      plStack_148 = (long *)0x0;
      puStack_150 = (undefined8 *)0x0;
      uStack_138 = 0;
      plStack_140 = (long *)0x0;
      uStack_130 = 0x3f800000;
      *(undefined1 *)(plVar7 + 0x65) = 0;
      *(undefined1 *)(plVar7 + 0x68) = 0;
      FUN_10a6e53f0(plVar7 + 9,plVar2,&uStack_170,&puStack_150,plVar7 + 0x65,1,0,param_8,0,0);
      if (((char)plVar7[0x68] == '\x01') && (*(char *)((long)plVar7 + 0x33f) < '\0')) {
        __ZdlPv(plVar7[0x65]);
      }
      func_0x00010a71245c(&puStack_150);
      if ((cStack_158 == '\x01') && (cStack_159 < '\0')) {
        __ZdlPv(uStack_170);
      }
      plStack_140 = (long *)plVar7[0x75];
      plStack_148 = (long *)plVar7[0x74];
      if (plVar7[0x75] != 0) {
        plVar16 = (long *)(plVar7[0x75] + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *plVar16 = *plVar16 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puStack_150 = (undefined8 *)((ulong)puStack_150 & 0xffffffff00000000);
      uStack_170 = 0;
      plStack_168 = (long *)0x0;
      FUN_10a725b3c(plVar7 + 0x5b,&puStack_150,1);
      plVar16 = plStack_140;
      if (plStack_140 != (long *)0x0) {
        plVar19 = plStack_140 + 1;
        do {
          lVar10 = *plVar19;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar4) {
            *plVar19 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_140 + 0x10))(plStack_140);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
      }
      plVar16 = plStack_168;
      if (plStack_168 != (long *)0x0) {
        plVar19 = plStack_168 + 1;
        do {
          lVar10 = *plVar19;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar4) {
            *plVar19 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_168 + 0x10))(plStack_168);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
      }
      FUN_10a6dee68(&puStack_150,*plVar17 + 0xe8,plVar7 + 9);
      lVar10 = plVar7[0x5b];
      uVar11 = plVar7[0x5c];
      plVar7[0x5c] = 0;
      plVar7[0x5b] = 0;
      plVar7[0x60] = lVar10;
      plVar7[0x61] = uVar11;
      plVar7[0x62] = plVar7[0x5d];
      plVar7[99] = plVar7[0x5e];
      *(int *)(plVar7 + 100) = (int)plVar7[0x5f];
      if (plVar7[0x5e] != 0) {
        uVar14 = *(ulong *)(plVar7[0x5d] + 8);
        if ((uVar11 & uVar11 - 1) == 0) {
          uVar14 = uVar14 & uVar11 - 1;
        }
        else if (uVar11 <= uVar14) {
          uVar5 = 0;
          if (uVar11 != 0) {
            uVar5 = uVar14 / uVar11;
          }
          uVar14 = uVar14 - uVar5 * uVar11;
        }
        *(long **)(lVar10 + uVar14 * 8) = plVar7 + 0x62;
        plVar7[0x5d] = 0;
        plVar7[0x5e] = 0;
      }
      FUN_10a6e5564(plVar7 + 0x2d,&puStack_150,plVar7 + 0x60);
      lVar10 = plVar7[0x7c];
      lVar13 = plVar7[0x7b];
      func_0x00010a71259c(plVar7 + 0x60);
      FUN_10ae0e238(&puStack_150);
      if (lVar10 != 0) {
        plVar16 = (long *)(plVar7[0x7c] + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *plVar16 = *plVar16 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_10a6f4154(&puStack_150,lVar13,lVar10);
      if (plVar7[0x7c] != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      FUN_10a6ded90(puStack_150[300],plVar17,plVar7 + 0x2d);
      FUN_10a6f5e5c(plVar7 + 2,plVar17);
      plVar17 = plStack_148;
      if (plStack_148 != (long *)0x0) {
        plVar16 = plStack_148 + 1;
        do {
          lVar10 = *plVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *plVar16 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_148 + 0x10))(plStack_148);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
      FUN_10a6fd048(plVar7 + 0x2d);
      func_0x00010a71259c(plVar7 + 0x5b);
      FUN_10a6fd048(plVar7 + 9);
      if (*(char *)((long)plVar7 + 0x2d7) < '\0') {
        __ZdlPv(plVar7[0x58]);
      }
      if (*(char *)((long)plVar7 + 0x29f) < '\0') {
        __ZdlPv(*plVar2);
      }
      plVar17 = (long *)plVar7[0x75];
      if (plVar17 != (long *)0x0) {
        plVar16 = plVar17 + 1;
        do {
          lVar10 = *plVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *plVar16 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
      plVar17 = (long *)plVar7[0x73];
      if (plVar17 != (long *)0x0) {
        plVar16 = plVar17 + 1;
        do {
          lVar10 = *plVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *plVar16 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
      plVar17 = (long *)plVar7[0x71];
      if (plVar17 != (long *)0x0) {
        plVar16 = plVar17 + 1;
        do {
          lVar10 = *plVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *plVar16 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
      plVar18 = (long *)*plVar18;
      if (plVar18 != (long *)0x0) {
        puVar1 = (ulong *)(plVar18 + 1);
        do {
          uVar11 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar11 & 0x1fffffffc) == 4) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
          do {
            uVar11 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar11 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar11 - 1 == 0) {
            (**(code **)(*plVar18 + 8))(plVar18);
          }
        }
      }
      plVar9 = (long *)*plVar9;
      if (plVar9 != (long *)0x0) {
        puVar1 = (ulong *)(plVar9 + 1);
        do {
          uVar11 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar11 & 0x1fffffffc) == 4) {
          do {
            uVar11 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar11 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar11 - 1 == 0) {
            (**(code **)(*plVar9 + 8))();
          }
        }
      }
      if (plVar7[0x7c] != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      FUN_10a724a78(plVar7[0x7a],plVar7 + 0x6c);
      func_0x000109d1a1d0(plVar7 + 2);
      plVar17 = (long *)plVar7[0x6f];
      if (plVar17 != (long *)0x0) {
        plVar9 = plVar17 + 1;
        do {
          lVar10 = *plVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
      if (*(char *)((long)plVar7 + 0x35f) < '\0') {
        __ZdlPv(*plVar15);
      }
      plVar15 = (long *)plVar7[0x6d];
      if (plVar15 != (long *)0x0) {
        plVar17 = plVar15 + 1;
        do {
          lVar10 = *plVar17;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar4) {
            *plVar17 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
        }
      }
      __ZdlPv(plVar7);
      plVar16 = plVar7;
      goto LAB_10a6f5a88;
    }
  }
  else {
LAB_10a6f5a88:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x0001092af97c(plVar16 + 0x12);
LAB_10a6f5acc:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a6f5ad0);
  (*pcVar6)();
}



/* Entry: 10a6f5e5c; end: 10a6f5f37;  */

void FUN_10a6f5e5c(long param_1,undefined8 *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  
  plVar7 = (long *)(param_1 + 0x30);
  lVar8 = *plVar7;
  plVar4 = (long *)(lVar8 + 0x10);
  do {
    lVar6 = *plVar4;
    if (lVar6 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (*(char *)(lVar8 + 0xa8) == '\x01') {
          FUN_10a0772f0(lVar8 + 0x98);
          *(undefined1 *)(lVar8 + 0xa8) = 0;
        }
        lVar6 = param_2[1];
        uVar9 = *param_2;
        *(undefined8 *)(lVar8 + 0xa0) = param_2[1];
        *(undefined8 *)(lVar8 + 0x98) = uVar9;
        if (lVar6 != 0) {
          plVar4 = (long *)(lVar6 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = *plVar4 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        *(undefined1 *)(lVar8 + 0xa8) = 1;
        *(undefined8 *)(lVar8 + 0x10) = 2;
        FUN_109d1b4dc(lVar8 + 0x18);
LAB_10a6f5f08:
        plVar4 = (long *)*plVar7;
        *plVar7 = 0;
        if (plVar4 == (long *)0x0) {
          return;
        }
        puVar1 = (ulong *)(plVar4 + 1);
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 0x200000000;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 >> 0x21 == 1) {
          FUN_109d1b3c4(plVar4,1,plVar7);
          do {
            uVar5 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar5 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar4 + 8))(plVar4);
            return;
          }
        }
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar6 >> 1 & 1) != 0) goto LAB_10a6f5f08;
  } while( true );
}



/* Entry: 10a6f5f38; end: 10a6f6037;  */

long FUN_10a6f5f38(long param_1)

{
  FUN_10a5ca2e0(param_1 + 0x38);
  FUN_10a0772f0(param_1 + 0x28);
  func_0x00010a71b29c(param_1 + 0x18);
  func_0x00010a71b244(param_1 + 8);
  return param_1;
}



/* Entry: 10a6f6038; end: 10a6f7d9f;  */

void FUN_10a6f6038(long **param_1,undefined8 *param_2,long *param_3,uint param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 *puVar7;
  long **pplVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  long **pplVar19;
  long **pplVar20;
  long lVar21;
  long **pplVar22;
  long **pplVar23;
  long **pplVar24;
  long **pplStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  long lStack_1b8;
  long **pplStack_1b0;
  long *plStack_1a8;
  long **pplStack_1a0;
  long *plStack_198;
  long *plStack_190;
  long *plStack_188;
  undefined8 uStack_180;
  long *plStack_170;
  long lStack_168;
  long **pplStack_160;
  long *plStack_158;
  long **pplStack_150;
  long **pplStack_148;
  long **pplStack_140;
  long *plStack_138;
  long lStack_130;
  long *plStack_128;
  long **pplStack_120;
  long **pplStack_118;
  long **pplStack_110;
  long *plStack_108;
  long lStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  long lStack_e8;
  long **pplStack_e0;
  long **pplStack_d8;
  long **pplStack_d0;
  long **pplStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long **pplStack_a8;
  long *plStack_a0;
  long **pplStack_90;
  long **pplStack_88;
  undefined1 auStack_80 [8];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((byte)uRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f66fb16,&UNK_10f66fd8f,0x151,&UNK_10f66fe31);
  }
  lVar12 = param_1[300][0x36];
  plVar18 = (long *)param_1[300][0x37];
  if (plVar18 == (long *)0x0) {
LAB_10a6f60e0:
    if (lVar12 != 0) goto LAB_10a6f60e4;
LAB_10a6f6138:
    plVar18 = (long *)param_2[1];
    if (plVar18 == (long *)0x0) {
      pplStack_140 = (long **)0x0;
      plStack_138 = (long *)0x0;
    }
    else {
      plVar17 = plVar18 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *plVar17 = *plVar17 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      pplStack_140 = (long **)0x0;
      plStack_138 = (long *)0x0;
      do {
        lVar12 = *plVar17;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *plVar17 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
      }
    }
    if (((byte)uRam000000011330a9e8 >> 2 & 1) != 0) {
      func_0x00010ae06f08(1,4,&UNK_10f66fb16,&UNK_10f66fd8f,0x158,&UNK_10f66fe68);
    }
    pplStack_160 = (long **)*param_2;
    plVar18 = (long *)param_2[1];
    if (plVar18 != (long *)0x0) {
      plVar17 = plVar18 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *plVar17 = *plVar17 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar17 = (long *)param_3[1];
    lStack_168 = param_3[1];
    plStack_170 = (long *)*param_3;
    if (plVar17 != (long *)0x0) {
      plVar9 = plVar17 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = *plVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plStack_158 = plVar18;
    if (plVar18 == (long *)0x0) {
      plStack_190 = (long *)0x0;
      plStack_188 = (long *)0x0;
      pplStack_88 = (long **)0x0;
      pplStack_90 = pplStack_160;
    }
    else {
      plVar9 = plVar18 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = *plVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plStack_190 = (long *)0x0;
      plStack_188 = (long *)0x0;
      do {
        lVar12 = *plVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
      }
      pplStack_88 = (long **)plStack_158;
      pplStack_90 = pplStack_160;
      if (plStack_158 != (long *)0x0) {
        plVar18 = plStack_158 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *plVar18 = *plVar18 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
    }
    pplStack_160 = pplStack_90;
    FUN_10a6f4ee0(&pplStack_110,param_1,&pplStack_90);
    pplVar8 = pplStack_88;
    if (pplStack_88 != (long **)0x0) {
      plVar18 = (long *)(pplStack_88 + 1);
      do {
        lVar12 = *plVar18;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *plVar18 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)((long)*pplStack_88 + 0x10))(pplStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar8);
      }
    }
    lVar12 = param_1[300][0x75];
    plStack_198 = plStack_188;
    pplStack_1a0 = (long **)plStack_190;
    pplStack_d0 = (long **)plStack_188;
    pplStack_d8 = (long **)plStack_190;
    if (plStack_188 != (long *)0x0) {
      plVar18 = plStack_188 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *plVar18 = *plVar18 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plStack_1a8 = plStack_108;
    pplStack_1b0 = pplStack_110;
    plStack_c0 = plStack_108;
    pplStack_c8 = pplStack_110;
    if (plStack_108 != (long *)0x0) {
      plVar18 = plStack_108 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *plVar18 = *plVar18 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    lStack_1b8 = lStack_168;
    plStack_1c0 = plStack_170;
    plStack_b0 = (long *)lStack_168;
    plStack_b8 = plStack_170;
    if (lStack_168 != 0) {
      plVar18 = (long *)(lStack_168 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *plVar18 = *plVar18 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plStack_1c8 = plStack_158;
    pplStack_1d0 = pplStack_160;
    plStack_a0 = plStack_158;
    pplStack_a8 = pplStack_160;
    if (plStack_158 != (long *)0x0) {
      plVar18 = plStack_158 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *plVar18 = *plVar18 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar7 = (undefined8 *)0xb0;
    pplStack_e0 = param_1;
    __Znwm();
    *puVar7 = FUN_10a738d5c;
    puVar7[1] = FUN_10a7390a0;
    FUN_10a703ec0(puVar7 + 2);
    pplVar19 = (long **)puVar7[7];
    pplVar8 = param_1;
    if (pplVar19 != (long **)0x0) {
      pplVar8 = pplVar19 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pplVar8,0x10);
        if (bVar5) {
          *pplVar8 = (long *)((long)*pplVar8 + 4);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plStack_1a8 = plStack_c0;
      pplStack_1b0 = pplStack_c8;
      plStack_198 = (long *)pplStack_d0;
      pplStack_1a0 = pplStack_d8;
      plStack_1c8 = plStack_a0;
      pplStack_1d0 = pplStack_a8;
      lStack_1b8 = (long)plStack_b0;
      plStack_1c0 = plStack_b8;
      pplVar8 = pplStack_e0;
    }
    puVar7[9] = pplVar8;
    pplStack_d8 = (long **)0x0;
    pplStack_d0 = (long **)0x0;
    puVar7[0xb] = plStack_198;
    puVar7[10] = pplStack_1a0;
    puVar7[0xd] = plStack_1a8;
    puVar7[0xc] = pplStack_1b0;
    pplStack_c8 = (long **)0x0;
    plStack_c0 = (long *)0x0;
    plStack_b8 = (long *)0x0;
    plStack_b0 = (long *)0x0;
    puVar7[0xf] = lStack_1b8;
    puVar7[0xe] = plStack_1c0;
    puVar7[0x11] = plStack_1c8;
    puVar7[0x10] = pplStack_1d0;
    pplStack_a8 = (long **)0x0;
    plStack_a0 = (long *)0x0;
    puVar7[0x12] = lVar12;
    *(undefined1 *)(puVar7 + 0x13) = 0;
    *(undefined1 *)(puVar7 + 0x15) = 0;
    pplStack_120 = (long **)0x0;
    FUN_109d18960(puVar7 + 2,lVar12,&pplStack_120);
    if (pplStack_120 == (long **)0x0) {
      if ((*(byte *)(puVar7 + 0x13) & 1) == 0) {
        puStack_f0 = (undefined8 *)puVar7[0x12];
        lStack_100 = 0;
        puStack_f8 = puVar7;
        (**(code **)*puStack_f0)(puStack_f0,&lStack_100);
        __ZNSt13exception_ptrD1Ev(&pplStack_120);
      }
      else {
        __ZNSt13exception_ptrD1Ev(&pplStack_120);
        FUN_10a7031b0(puVar7 + 0x14,puVar7 + 9);
        puVar7[0x12] = puVar7[0x14];
        plVar18 = (long *)(puVar7[0x14] + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *plVar18 = *plVar18 + 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (((uint)*(undefined8 *)(puVar7[0x12] + 0x10) >> 1 & 1) == 0) {
          *(undefined1 *)(puVar7 + 0x15) = 1;
          lVar12 = puVar7[0x12];
          plVar18 = (long *)(lVar12 + 0x10);
          puVar13 = (undefined8 *)puVar7[3];
          do {
            lVar11 = *plVar18;
            if (lVar11 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar5) {
                *plVar18 = 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                lStack_100 = 0;
                puStack_f8 = puVar7;
                puStack_f0 = puVar13;
                func_0x000109d1b588(lVar12 + 0x18,&lStack_100);
                *(undefined8 *)(lVar12 + 0x10) = 0;
                goto LAB_10a6f66a0;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)lVar11 >> 1 & 1) == 0);
        }
        lVar12 = puVar7[0x12];
        if (((uint)*(undefined8 *)(puVar7[0x12] + 0x10) >> 5 & 1) != 0) {
          func_0x0001092af97c(lVar12 + 0x90);
          goto LAB_10a6f7850;
        }
        if ((*(byte *)(lVar12 + 0xa8) & 1) == 0) goto LAB_10a6f7850;
        FUN_10a7030f0(puVar7 + 2,lVar12 + 0x98);
        plVar18 = (long *)puVar7[0x12];
        if (plVar18 != (long *)0x0) {
          puVar1 = (ulong *)(plVar18 + 1);
          do {
            uVar14 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar14 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar14 & 0x1fffffffc) == 4) {
            do {
              uVar14 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar14 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar14 - 1 == 0) {
              (**(code **)(*plVar18 + 8))();
            }
          }
        }
        plVar18 = (long *)puVar7[0x14];
        if (plVar18 != (long *)0x0) {
          puVar1 = (ulong *)(plVar18 + 1);
          do {
            uVar14 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar14 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar14 & 0x1fffffffc) == 4) {
            do {
              uVar14 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar14 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar14 - 1 == 0) {
              (**(code **)(*plVar18 + 8))();
            }
          }
        }
        plVar18 = (long *)puVar7[0x11];
        if (plVar18 != (long *)0x0) {
          plVar9 = plVar18 + 1;
          do {
            lVar12 = *plVar9;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar5) {
              *plVar9 = lVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
          }
        }
        plVar18 = (long *)puVar7[0xf];
        if (plVar18 != (long *)0x0) {
          plVar9 = plVar18 + 1;
          do {
            lVar12 = *plVar9;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar5) {
              *plVar9 = lVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
          }
        }
        plVar18 = (long *)puVar7[0xd];
        if (plVar18 != (long *)0x0) {
          plVar9 = plVar18 + 1;
          do {
            lVar12 = *plVar9;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar5) {
              *plVar9 = lVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
          }
        }
        plVar18 = (long *)puVar7[0xb];
        if (plVar18 != (long *)0x0) {
          plVar9 = plVar18 + 1;
          do {
            lVar12 = *plVar9;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar5) {
              *plVar9 = lVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
          }
        }
        func_0x000109d1a1d0(puVar7 + 2);
        __ZdlPv(puVar7);
      }
LAB_10a6f66a0:
      plVar18 = plStack_a0;
      if (plStack_a0 != (long *)0x0) {
        plVar9 = plStack_a0 + 1;
        do {
          lVar12 = *plVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
        }
      }
      plVar18 = plStack_b0;
      if (plStack_b0 != (long *)0x0) {
        plVar9 = plStack_b0 + 1;
        do {
          lVar12 = *plVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
        }
      }
      plVar18 = plStack_c0;
      if (plStack_c0 != (long *)0x0) {
        plVar9 = plStack_c0 + 1;
        do {
          lVar12 = *plVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
        }
      }
      pplVar8 = pplStack_d0;
      if (pplStack_d0 != (long **)0x0) {
        pplVar24 = pplStack_d0 + 1;
        do {
          plVar18 = *pplVar24;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pplVar24,0x10);
          if (bVar5) {
            *pplVar24 = (long *)((long)plVar18 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (plVar18 == (long *)0x0) {
          (*(code *)(*pplStack_d0)[2])(pplStack_d0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar8);
        }
      }
      pplVar8 = (long **)0x118;
      __Znwm();
      pplVar24 = pplVar8 + 1;
      *pplVar24 = (long *)0x0;
      pplVar8[2] = (long *)0x0;
      *pplVar8 = (long *)&PTR_FUN_110c14560;
      if (pplVar19 != (long **)0x0) {
        pplVar23 = pplVar19 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pplVar23,0x10);
          if (bVar5) {
            *pplVar23 = (long *)((long)*pplVar23 + 4);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plVar18 = (long *)0x70;
      __Znwm();
      plVar18[1] = 0;
      plVar18[2] = 0;
      *plVar18 = (long)&PTR_DAT_110c145b0;
      pplVar23 = (long **)(plVar18 + 3);
      *pplVar23 = (long *)&PTR____cxa_pure_virtual_110c23130;
      plVar18[0xb] = 0;
      plVar18[10] = 0;
      plVar18[0xd] = 0;
      plVar18[0xc] = 0;
      plVar18[5] = 0;
      plVar18[4] = 0;
      plVar18[7] = 0;
      plVar18[6] = 0;
      plVar18[9] = 0;
      plVar18[8] = 0;
      plVar18[10] = (long)&PTR_FUN_110c383b8;
      plVar18[0xb] = 0;
      *(undefined2 *)(plVar18 + 0xd) = 0x100;
      plVar18[0xc] = 0;
      *(undefined1 *)(plVar18 + 4) = 1;
      FUN_10a0040d0(plVar18 + 5,&PTR_PTR_110c23450);
      plVar18[3] = (long)&PTR_FUN_110c23348;
      plVar18[5] = (long)&PTR_DAT_110c23398;
      plVar18[10] = (long)&PTR_FUN_110c23410;
      lStack_100 = 0;
      puStack_f8 = (undefined8 *)0x0;
      pplVar8[0x20] = (long *)0x0;
      pplVar8[0x21] = (long *)0x0;
      pplVar8[0x1f] = (long *)&PTR_FUN_110c383b8;
      *(undefined2 *)(pplVar8 + 0x22) = 0x100;
      pplVar8[3] = (long *)&PTR____cxa_pure_virtual_110c23130;
      *(undefined1 *)(pplVar8 + 4) = 1;
      pplStack_e0 = pplVar23;
      pplStack_d8 = (long **)plVar18;
      FUN_10a0040d0(pplVar8 + 5,&PTR_PTR_110c117b0);
      pplVar8[3] = (long *)&PTR_FUN_110c116a8;
      pplVar8[5] = (long *)&PTR_FUN_110c116f8;
      pplVar8[0x1e] = (long *)0x0;
      pplVar8[0x1f] = (long *)&PTR_FUN_110c11770;
      pplVar8[10] = (long *)pplVar19;
      pplVar8[0xb] = (long *)pplVar23;
      pplVar8[0xc] = plVar18;
      *(undefined1 *)(pplVar8 + 0xd) = 0;
      *(undefined1 *)(pplVar8 + 0x1c) = 0;
      pplVar8[0x1d] = (long *)0x0;
      plVar18 = (long *)0xe0;
      __Znwm();
      pplVar23 = pplVar8 + 3;
      plVar18[2] = 0;
      plVar18[1] = 0x200000006;
      *(undefined2 *)(plVar18 + 3) = 4;
      plVar18[5] = 0;
      plVar18[4] = 0;
      plVar18[7] = 0;
      plVar18[6] = 0;
      plVar18[9] = 0;
      plVar18[8] = 0;
      plVar18[0xb] = 0;
      plVar18[10] = 0;
      plVar18[0xd] = 0;
      plVar18[0xc] = 0;
      plVar18[0xf] = 0;
      plVar18[0xe] = 0;
      plVar18[0x10] = 0;
      plVar18[0x11] = (long)(plVar18 + 3);
      plVar18[0x12] = 0;
      *plVar18 = (long)&PTR_FUN_110c137f0;
      *(undefined1 *)(plVar18 + 0x13) = 0;
      *(undefined1 *)(plVar18 + 0x1b) = 0;
      pplVar8[0x1d] = plVar18;
      pplVar8[0x1e] = plVar18;
      plVar18 = param_1[300];
      pplStack_120 = pplVar23;
      pplStack_118 = pplVar8;
      if (param_4 == 0) {
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pplVar24,0x10);
          if (bVar5) {
            *pplVar24 = (long *)((long)*pplVar24 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        pplStack_e0 = pplVar23;
        pplStack_d8 = pplVar8;
        __ZNSt3__15mutex4lockEv(plVar18 + 0x38);
        pplVar22 = pplVar8 + 2;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pplVar22,0x10);
          if (bVar5) {
            *pplVar22 = (long *)((long)*pplVar22 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        plVar18[0x40] = (long)pplVar23;
        lVar12 = plVar18[0x41];
        plVar18[0x41] = (long)pplVar8;
        if (lVar12 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        __ZNSt3__15mutex6unlockEv(plVar18 + 0x38);
        do {
          plVar18 = *pplVar24;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pplVar24,0x10);
          if (bVar5) {
            *pplVar24 = (long *)((long)plVar18 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (plVar18 == (long *)0x0) {
          (*(code *)(*pplVar8)[2])(pplVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar8);
        }
        lVar12 = param_1[300][0x75];
        pplStack_e0 = pplStack_120;
        pplStack_d8 = pplStack_118;
        if (pplStack_118 != (long **)0x0) goto LAB_10a6f69a8;
      }
      else {
        lVar12 = plVar18[0x75];
LAB_10a6f69a8:
        pplVar8 = pplStack_118 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pplVar8,0x10);
          if (bVar5) {
            *pplVar8 = (long *)((long)*pplVar8 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
          pplStack_e0 = pplStack_120;
          pplStack_d8 = pplStack_118;
        } while (cVar4 != '\0');
      }
      pplVar22 = pplStack_d8;
      pplVar23 = pplStack_e0;
      pplVar24 = (long **)plStack_188;
      pplVar8 = (long **)plStack_190;
      pplStack_c8 = (long **)plStack_188;
      pplStack_d0 = (long **)plStack_190;
      if (plStack_188 != (long *)0x0) {
        plVar18 = plStack_188 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *plVar18 = *plVar18 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plStack_c0 = (long *)CONCAT71(plStack_c0._1_7_,(char)param_4);
      puVar7 = (undefined8 *)0x90;
      pplStack_120 = pplStack_e0;
      pplStack_118 = pplStack_d8;
      __Znwm();
      *puVar7 = FUN_10a73992c;
      puVar7[1] = FUN_10a739bf8;
      func_0x0001092ba17c(puVar7 + 2);
      pplVar20 = (long **)puVar7[7];
      if (pplVar20 != (long **)0x0) {
        plVar18 = (long *)((long)pplVar20 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *plVar18 = *plVar18 + 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        param_4 = (uint)(byte)plStack_c0;
        pplVar22 = pplStack_d8;
        pplVar23 = pplStack_e0;
        pplVar8 = pplStack_d0;
        pplVar24 = pplStack_c8;
      }
      puVar7[9] = pplVar23;
      puVar7[10] = pplVar22;
      pplStack_e0 = (long **)0x0;
      pplStack_d8 = (long **)0x0;
      puVar7[0xc] = pplVar24;
      puVar7[0xb] = pplVar8;
      pplStack_d0 = (long **)0x0;
      pplStack_c8 = (long **)0x0;
      *(char *)(puVar7 + 0xd) = (char)param_4;
      puVar7[0xe] = lVar12;
      *(undefined1 *)(puVar7 + 0xf) = 0;
      *(undefined1 *)(puVar7 + 0x11) = 0;
      puVar13 = puVar7 + 0xe;
      func_0x0001092ba064(puVar13,puVar7);
      if (((ulong)puVar13 & 1) == 0) {
        FUN_10a705028(puVar7 + 0x10,puVar7 + 9);
        puVar7[0xe] = puVar7[0x10];
        plVar18 = (long *)(puVar7[0x10] + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *plVar18 = *plVar18 + 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (((uint)*(undefined8 *)(puVar7[0xe] + 0x10) >> 1 & 1) == 0) {
          *(undefined1 *)(puVar7 + 0x11) = 1;
          lVar12 = puVar7[0xe];
          plVar18 = (long *)(lVar12 + 0x10);
          puVar13 = (undefined8 *)puVar7[3];
          do {
            lVar11 = *plVar18;
            if (lVar11 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar5) {
                *plVar18 = 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                lStack_100 = 0;
                puStack_f8 = puVar7;
                puStack_f0 = puVar13;
                func_0x000109d1b588(lVar12 + 0x18,&lStack_100);
                *(undefined8 *)(lVar12 + 0x10) = 0;
                goto LAB_10a6f6c34;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)lVar11 >> 1 & 1) == 0);
        }
        plVar18 = (long *)puVar7[0xe];
        if (((uint)*(undefined8 *)(puVar7[0xe] + 0x10) >> 5 & 1) != 0) {
          func_0x0001092af97c(plVar18 + 0x12);
          goto LAB_10a6f7850;
        }
        if (plVar18 != (long *)0x0) {
          puVar1 = (ulong *)(plVar18 + 1);
          do {
            uVar14 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar14 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar14 & 0x1fffffffc) == 4) {
            do {
              uVar14 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar14 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar14 - 1 == 0) {
              (**(code **)(*plVar18 + 8))();
            }
          }
        }
        plVar18 = (long *)puVar7[0x10];
        if (plVar18 != (long *)0x0) {
          puVar1 = (ulong *)(plVar18 + 1);
          do {
            uVar14 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar14 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar14 & 0x1fffffffc) == 4) {
            do {
              uVar14 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar14 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar14 - 1 == 0) {
              (**(code **)(*plVar18 + 8))();
            }
          }
        }
        func_0x0001092ba100(puVar7 + 2);
        plVar18 = (long *)puVar7[0xc];
        if (plVar18 != (long *)0x0) {
          plVar9 = plVar18 + 1;
          do {
            lVar12 = *plVar9;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar5) {
              *plVar9 = lVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
          }
        }
        plVar18 = (long *)puVar7[10];
        if (plVar18 != (long *)0x0) {
          plVar9 = plVar18 + 1;
          do {
            lVar12 = *plVar9;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar5) {
              *plVar9 = lVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
          }
        }
        func_0x000109d1a1d0(puVar7 + 2);
        __ZdlPv(puVar7);
      }
LAB_10a6f6c34:
      pplVar8 = pplStack_c8;
      if (pplStack_c8 != (long **)0x0) {
        plVar18 = (long *)(pplStack_c8 + 1);
        do {
          lVar12 = *plVar18;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *plVar18 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 == 0) {
          (**(code **)((long)*pplStack_c8 + 0x10))(pplStack_c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar8);
        }
      }
      pplVar8 = pplStack_d8;
      if (pplStack_d8 != (long **)0x0) {
        pplVar24 = pplStack_d8 + 1;
        do {
          plVar18 = *pplVar24;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pplVar24,0x10);
          if (bVar5) {
            *pplVar24 = (long *)((long)plVar18 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (plVar18 == (long *)0x0) {
          (*(code *)(*pplStack_d8)[2])(pplStack_d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar8);
        }
      }
      plVar18 = param_1[0x10e];
      lVar12 = plVar18[7];
      if (lVar12 == 0) {
        lVar12 = plVar18[5];
        plStack_128 = (long *)plVar18[6];
      }
      else {
        plStack_128 = (long *)plVar18[8];
      }
      if (plStack_128 != (long *)0x0) {
        plVar18 = plStack_128 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *plVar18 = *plVar18 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (pplVar19 != (long **)0x0) {
        pplVar8 = pplVar19 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pplVar8,0x10);
          if (bVar5) {
            *pplVar8 = (long *)((long)*pplVar8 + 4);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plStack_198 = plStack_158;
      pplStack_1a0 = pplStack_160;
      pplStack_c8 = (long **)plStack_158;
      pplStack_d0 = pplStack_160;
      if (plStack_158 != (long *)0x0) {
        plVar18 = plStack_158 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *plVar18 = *plVar18 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plStack_1a8 = (long *)lStack_168;
      pplStack_1b0 = (long **)plStack_170;
      plStack_b8 = (long *)lStack_168;
      plStack_c0 = plStack_170;
      if (lStack_168 != 0) {
        plVar18 = (long *)(lStack_168 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *plVar18 = *plVar18 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puVar7 = (undefined8 *)0x98;
      lStack_130 = lVar12;
      pplStack_e0 = pplVar19;
      pplStack_d8 = pplVar20;
      __Znwm();
      *puVar7 = FUN_10a739eb0;
      puVar7[1] = FUN_10a73a204;
      func_0x0001092ba17c(puVar7 + 2);
      plVar18 = (long *)puVar7[7];
      if (plVar18 != (long *)0x0) {
        plVar9 = plVar18 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = *plVar9 + 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        plStack_1a8 = plStack_b8;
        pplStack_1b0 = (long **)plStack_c0;
        plStack_198 = (long *)pplStack_c8;
        pplStack_1a0 = pplStack_d0;
        pplVar20 = pplStack_d8;
      }
      puVar7[9] = pplStack_e0;
      puVar7[10] = pplVar20;
      pplStack_d8 = (long **)0x0;
      pplStack_e0 = (long **)0x0;
      puVar7[0xc] = plStack_198;
      puVar7[0xb] = pplStack_1a0;
      puVar7[0xe] = plStack_1a8;
      puVar7[0xd] = pplStack_1b0;
      pplStack_c8 = (long **)0x0;
      pplStack_d0 = (long **)0x0;
      plStack_b8 = (long *)0x0;
      plStack_c0 = (long *)0x0;
      puVar7[0xf] = lVar12;
      *(undefined1 *)(puVar7 + 0x10) = 0;
      *(undefined1 *)(puVar7 + 0x12) = 0;
      puVar13 = puVar7 + 0xf;
      func_0x0001092ba064(puVar13,puVar7);
      if (((ulong)puVar13 & 1) == 0) {
        FUN_10a706058(puVar7 + 0x11,puVar7 + 9);
        puVar7[0xf] = puVar7[0x11];
        plVar9 = (long *)(puVar7[0x11] + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = *plVar9 + 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (((uint)*(undefined8 *)(puVar7[0xf] + 0x10) >> 1 & 1) == 0) {
          *(undefined1 *)(puVar7 + 0x12) = 1;
          lVar12 = puVar7[0xf];
          plVar9 = (long *)(lVar12 + 0x10);
          puVar13 = (undefined8 *)puVar7[3];
          do {
            lVar11 = *plVar9;
            if (lVar11 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *plVar9 = 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                lStack_100 = 0;
                puStack_f8 = puVar7;
                puStack_f0 = puVar13;
                func_0x000109d1b588(lVar12 + 0x18,&lStack_100);
                *(undefined8 *)(lVar12 + 0x10) = 0;
                goto joined_r0x00010a6f7070;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)lVar11 >> 1 & 1) == 0);
        }
        plVar9 = (long *)puVar7[0xf];
        if (((uint)*(undefined8 *)(puVar7[0xf] + 0x10) >> 5 & 1) != 0) {
          func_0x0001092af97c(plVar9 + 0x12);
          goto LAB_10a6f7850;
        }
        if (plVar9 != (long *)0x0) {
          puVar1 = (ulong *)(plVar9 + 1);
          do {
            uVar14 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar14 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar14 & 0x1fffffffc) == 4) {
            do {
              uVar14 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar14 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar14 - 1 == 0) {
              (**(code **)(*plVar9 + 8))();
            }
          }
        }
        plVar9 = (long *)puVar7[0x11];
        if (plVar9 != (long *)0x0) {
          puVar1 = (ulong *)(plVar9 + 1);
          do {
            uVar14 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar14 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar14 & 0x1fffffffc) == 4) {
            do {
              uVar14 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar14 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar14 - 1 == 0) {
              (**(code **)(*plVar9 + 8))();
            }
          }
        }
        func_0x0001092ba100(puVar7 + 2);
        plVar9 = (long *)puVar7[0xe];
        if (plVar9 != (long *)0x0) {
          plVar10 = plVar9 + 1;
          do {
            lVar12 = *plVar10;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar5) {
              *plVar10 = lVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
        plVar9 = (long *)puVar7[0xc];
        if (plVar9 != (long *)0x0) {
          plVar10 = plVar9 + 1;
          do {
            lVar12 = *plVar10;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar5) {
              *plVar10 = lVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
        plVar9 = (long *)puVar7[10];
        if (plVar9 != (long *)0x0) {
          puVar1 = (ulong *)(plVar9 + 1);
          do {
            uVar14 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar14 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar14 & 0x1fffffffc) == 4) {
            do {
              uVar14 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar14 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar14 - 1 == 0) {
              (**(code **)(*plVar9 + 8))();
            }
          }
        }
        plVar9 = (long *)puVar7[9];
        if (plVar9 != (long *)0x0) {
          puVar1 = (ulong *)(plVar9 + 1);
          do {
            uVar14 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar14 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar14 & 0x1fffffffc) == 4) {
            do {
              uVar14 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar14 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar14 - 1 == 0) {
              (**(code **)(*plVar9 + 8))();
            }
          }
        }
        func_0x000109d1a1d0(puVar7 + 2);
        __ZdlPv(puVar7);
      }
joined_r0x00010a6f7070:
      if (plVar18 != (long *)0x0) {
        puVar1 = (ulong *)(plVar18 + 1);
        do {
          uVar14 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar14 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar14 & 0x1fffffffc) == 4) {
          do {
            uVar14 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar14 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar14 - 1 == 0) {
            (**(code **)(*plVar18 + 8))(plVar18);
          }
        }
      }
      plVar18 = plStack_b8;
      if (plStack_b8 != (long *)0x0) {
        plVar9 = plStack_b8 + 1;
        do {
          lVar12 = *plVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
        }
      }
      pplVar8 = pplStack_c8;
      if (pplStack_c8 != (long **)0x0) {
        plVar18 = (long *)(pplStack_c8 + 1);
        do {
          lVar12 = *plVar18;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *plVar18 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 == 0) {
          (**(code **)((long)*pplStack_c8 + 0x10))(pplStack_c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar8);
        }
      }
      if (pplStack_d8 != (long **)0x0) {
        pplVar8 = pplStack_d8 + 1;
        do {
          plVar18 = *pplVar8;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pplVar8,0x10);
          if (bVar5) {
            *pplVar8 = (long *)((long)plVar18 + -4);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (((ulong)plVar18 & 0x1fffffffc) == 4) {
          do {
            plVar18 = *pplVar8;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pplVar8,0x10);
            if (bVar5) {
              *pplVar8 = (long *)((long)plVar18 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((long *)((long)plVar18 + -1) == (long *)0x0) {
            (*(code *)(*pplStack_d8)[1])();
          }
        }
      }
      if (pplStack_e0 != (long **)0x0) {
        pplVar8 = pplStack_e0 + 1;
        do {
          plVar18 = *pplVar8;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pplVar8,0x10);
          if (bVar5) {
            *pplVar8 = (long *)((long)plVar18 + -4);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (((ulong)plVar18 & 0x1fffffffc) == 4) {
          do {
            plVar18 = *pplVar8;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pplVar8,0x10);
            if (bVar5) {
              *pplVar8 = (long *)((long)plVar18 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((long *)((long)plVar18 + -1) == (long *)0x0) {
            (*(code *)(*pplStack_e0)[1])();
          }
        }
      }
      plVar18 = plStack_128;
      pplStack_148 = pplStack_118;
      pplStack_150 = pplStack_120;
      pplStack_120 = (long **)0x0;
      pplStack_118 = (long **)0x0;
      if (plStack_128 != (long *)0x0) {
        plVar9 = plStack_128 + 1;
        do {
          lVar12 = *plVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_128 + 0x10))(plStack_128);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
        }
      }
      pplVar8 = pplStack_118;
      if (pplStack_118 != (long **)0x0) {
        pplVar24 = pplStack_118 + 1;
        do {
          plVar18 = *pplVar24;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pplVar24,0x10);
          if (bVar5) {
            *pplVar24 = (long *)((long)plVar18 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (plVar18 == (long *)0x0) {
          (*(code *)(*pplStack_118)[2])(pplStack_118);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar8);
        }
      }
      if (pplVar19 != (long **)0x0) {
        pplVar8 = pplVar19 + 1;
        do {
          plVar18 = *pplVar8;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pplVar8,0x10);
          if (bVar5) {
            *pplVar8 = (long *)((long)plVar18 - 4);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (((ulong)plVar18 & 0x1fffffffc) == 4) {
          do {
            plVar18 = *pplVar8;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pplVar8,0x10);
            if (bVar5) {
              *pplVar8 = (long *)((long)plVar18 - 1U);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((long *)((long)plVar18 - 1U) == (long *)0x0) {
            (*(code *)(*pplVar19)[1])(pplVar19);
          }
        }
      }
      if (plStack_108 != (long *)0x0) {
        plVar18 = plStack_108 + 1;
        do {
          lVar12 = *plVar18;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *plVar18 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_108 + 0x10))(plStack_108);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_108);
        }
      }
      plVar18 = plStack_188;
      if (plStack_188 != (long *)0x0) {
        plVar9 = plStack_188 + 1;
        do {
          lVar12 = *plVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_188 + 0x10))(plStack_188);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
        }
      }
      if (plVar17 != (long *)0x0) {
        plVar18 = plVar17 + 1;
        do {
          lVar12 = *plVar18;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *plVar18 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
      plVar18 = plStack_158;
      if (plStack_158 != (long *)0x0) {
        plVar17 = plStack_158 + 1;
        do {
          lVar12 = *plVar17;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *plVar17 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_158 + 0x10))(plStack_158);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
        }
      }
      pplVar19 = pplStack_148;
      pplVar8 = pplStack_150;
      pplStack_e0 = pplStack_150;
      pplStack_d8 = pplStack_148;
      if (pplStack_148 != (long **)0x0) {
        pplVar24 = pplStack_148 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pplVar24,0x10);
          if (bVar5) {
            *pplVar24 = (long *)((long)*pplVar24 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      pplStack_c8 = (long **)plStack_138;
      pplStack_d0 = pplStack_140;
      if (plStack_138 != (long *)0x0) {
        plVar18 = plStack_138 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *plVar18 = *plVar18 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      lStack_100 = 0;
      puStack_f8 = (undefined8 *)0x0;
      puStack_f0 = (undefined8 *)0x0;
      FUN_10a706340(&lStack_100,&pplStack_e0,&plStack_c0,2);
      pplStack_90 = pplVar8;
      pplStack_88 = pplVar19;
      if (pplVar19 != (long **)0x0) {
        pplVar8 = pplVar19 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pplVar8,0x10);
          if (bVar5) {
            *pplVar8 = (long *)((long)*pplVar8 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plStack_190 = (long *)0x0;
      plStack_188 = (long *)0x0;
      uStack_180 = 0;
      FUN_10a706340(&plStack_190,&pplStack_90,auStack_80,1);
      plVar18 = (long *)0x100;
      __Znwm();
      plVar18[1] = 0;
      plVar18[2] = 0;
      *plVar18 = (long)&PTR_FUN_110c14600;
      plVar18[3] = (long)&PTR____cxa_pure_virtual_110c23130;
      plVar18[0x1d] = 0;
      plVar18[0x1e] = 0;
      plVar18[0x1c] = (long)&PTR_FUN_110c383b8;
      *(undefined2 *)(plVar18 + 0x1f) = 0x100;
      *(undefined1 *)(plVar18 + 4) = 1;
      FUN_10a0040d0(plVar18 + 5,&PTR_PTR_110c23590);
      plVar18[10] = 0;
      plVar18[3] = (long)&PTR_DAT_110c23488;
      plVar18[5] = (long)&PTR_FUN_110c234d8;
      plVar18[0x1c] = (long)&PTR_FUN_110c23550;
      plVar18[0xb] = 0;
      plVar18[0xc] = 0;
      FUN_10a725d24(plVar18 + 10,lStack_100,puStack_f8,(long)puStack_f8 - lStack_100 >> 4);
      plVar18[0xd] = 0;
      plVar18[0xe] = 0;
      plVar18[0xf] = 0;
      FUN_10a725d24();
      *(undefined1 *)(plVar18 + 0x10) = 0;
      plVar18[0x11] = 0;
      *(undefined1 *)(plVar18 + 0x12) = 0;
      *(undefined1 *)(plVar18 + 0x1a) = 0;
      plVar18[0x1b] = -1;
      pplStack_120 = &plStack_190;
      pplStack_110 = (long **)(plVar18 + 3);
      plStack_108 = plVar18;
      FUN_10a70642c(&pplStack_120);
      if (pplVar19 != (long **)0x0) {
        pplVar8 = pplVar19 + 1;
        do {
          plVar18 = *pplVar8;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pplVar8,0x10);
          if (bVar5) {
            *pplVar8 = (long *)((long)plVar18 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (plVar18 == (long *)0x0) {
          (*(code *)(*pplVar19)[2])(pplVar19);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar19);
        }
      }
      plStack_190 = &lStack_100;
      FUN_10a70642c(&plStack_190);
      lVar12 = 0x10;
      do {
        func_0x00010a711e00((long)&pplStack_e0 + lVar12);
        lVar12 = lVar12 + -0x10;
      } while (lVar12 != -0x10);
      plVar18 = param_1[300];
      pplStack_90 = pplStack_110;
      pplStack_88 = (long **)plStack_108;
      if (plStack_108 != (long *)0x0) {
        plVar17 = plStack_108 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *plVar17 = *plVar17 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      FUN_10a6e2654(plVar18 + 0x36);
      if (((byte)uRam000000011330a9e8 >> 2 & 1) != 0) {
        func_0x00010ae06f08(1,4,&UNK_10f66ee0b,&UNK_10f66ef2f,0x14b,&UNK_10f66eff0);
      }
      __ZNSt3__15mutex4lockEv(plVar18 + 0x2a);
      plVar17 = plVar18 + 0x27;
      plVar9 = param_3;
      FUN_10a6eba04(&plStack_190,param_3,plVar17);
      if (plStack_190 == (long *)0x0) {
        if ((uRam000000011330a9e8 >> 2 & 1) != 0) {
          plVar10 = (long *)(*param_3 + 0xe8);
          if (*(char *)(*param_3 + 0xff) < '\0') {
            plVar10 = (long *)*plVar10;
          }
          plVar9 = (long *)0x4;
          func_0x00010ae06f08(1,4,&UNK_10f66ee0b,&UNK_10f66f030,0x155,&UNK_10f66f0ef,param_7,param_8
                              ,plVar10);
        }
        lVar12 = *param_3;
        puVar7 = (undefined8 *)param_3[1];
        if (puVar7 != (undefined8 *)0x0) {
          plVar10 = puVar7 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar5) {
              *plVar10 = *plVar10 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        puVar13 = (undefined8 *)plVar18[0x36];
        lVar11 = plVar18[0x37];
        if (lVar11 != 0) {
          plVar10 = (long *)(lVar11 + 0x10);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar5) {
              *plVar10 = *plVar10 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        plVar10 = (long *)plVar18[0x28];
        lStack_100 = lVar12;
        puStack_f8 = puVar7;
        puStack_f0 = puVar13;
        lStack_e8 = lVar11;
        if (plVar10 < (long *)plVar18[0x29]) {
          *plVar10 = lVar12;
          plVar10[1] = (long)puVar7;
          plVar17 = plVar10 + 4;
          plVar10[2] = (long)puVar13;
          plVar10[3] = lVar11;
        }
        else {
          lVar21 = (long)plVar10 - *plVar17;
          uVar14 = (lVar21 >> 5) + 1;
          if (uVar14 >> 0x3b != 0) {
            FUN_10a70202c();
            goto LAB_10a6f7850;
          }
          uVar15 = plVar18[0x29] - *plVar17;
          uVar16 = (long)uVar15 >> 4;
          if (uVar16 <= uVar14) {
            uVar16 = uVar14;
          }
          if (0x7fffffffffffffdf < uVar15) {
            uVar16 = 0x7ffffffffffffff;
          }
          plStack_c0 = plVar17;
          FUN_10a702040();
          lVar2 = plVar18[0x27];
          lVar3 = plVar18[0x28];
          plVar10 = (long *)(uVar16 + lVar21);
          *plVar10 = lVar12;
          plVar10[1] = (long)puVar7;
          lStack_100 = 0;
          puStack_f8 = (undefined8 *)0x0;
          plVar10[2] = (long)puVar13;
          plVar10[3] = lVar11;
          plVar17 = plVar10 + 4;
          lVar12 = (long)plVar10 - (lVar3 - lVar2);
          _memcpy(lVar12,lVar2);
          pplStack_e0 = (long **)plVar18[0x27];
          plVar18[0x27] = lVar12;
          plVar18[0x28] = (long)plVar17;
          pplStack_c8 = (long **)plVar18[0x29];
          plVar18[0x29] = uVar16 + (long)plVar9 * 0x20;
          pplStack_d8 = pplStack_e0;
          pplStack_d0 = pplStack_e0;
          func_0x00010a702074(&pplStack_e0);
        }
        plVar18[0x28] = (long)plVar17;
      }
      else if ((uRam000000011330a9e8 >> 2 & 1) != 0) {
        plVar17 = (long *)(*param_3 + 0xe8);
        if (*(char *)(*param_3 + 0xff) < '\0') {
          plVar17 = (long *)*plVar17;
        }
        func_0x00010ae06f08(1,4,&UNK_10f66ee0b,&UNK_10f66f030,0x15a,&UNK_10f66f12e,param_7,param_8,
                            plVar17);
      }
      plVar17 = plStack_188;
      if (plStack_188 != (long *)0x0) {
        plVar9 = plStack_188 + 1;
        do {
          lVar12 = *plVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_188 + 0x10))(plStack_188);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
      __ZNSt3__15mutex6unlockEv(plVar18 + 0x2a);
      pplVar8 = pplStack_88;
      if (pplStack_88 != (long **)0x0) {
        plVar18 = (long *)(pplStack_88 + 1);
        do {
          lVar12 = *plVar18;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *plVar18 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 == 0) {
          (**(code **)((long)*pplStack_88 + 0x10))(pplStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar8);
        }
      }
      plVar18 = plStack_108;
      if (plStack_108 != (long *)0x0) {
        plVar17 = plStack_108 + 1;
        do {
          lVar12 = *plVar17;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *plVar17 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_108 + 0x10))(plStack_108);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
        }
      }
      pplVar8 = pplStack_148;
      if (pplStack_148 != (long **)0x0) {
        pplVar19 = pplStack_148 + 1;
        do {
          plVar18 = *pplVar19;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pplVar19,0x10);
          if (bVar5) {
            *pplVar19 = (long *)((long)plVar18 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (plVar18 == (long *)0x0) {
          (*(code *)(*pplStack_148)[2])(pplStack_148);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar8);
        }
      }
      plVar18 = plStack_138;
      if (plStack_138 != (long *)0x0) {
        plVar17 = plStack_138 + 1;
        do {
          lVar12 = *plVar17;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *plVar17 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_138 + 0x10))(plStack_138);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
        }
      }
      goto LAB_10a6f60e4;
    }
  }
  else {
    plVar17 = plVar18 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *plVar17 = *plVar17 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      lVar11 = *plVar17;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *plVar17 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 != 0) goto LAB_10a6f60e0;
    (**(code **)(*plVar18 + 0x10))(plVar18);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
    if (lVar12 == 0) goto LAB_10a6f6138;
LAB_10a6f60e4:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x0001092af97c(&pplStack_120);
LAB_10a6f7850:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a6f7854);
  (*pcVar6)();
}



/* Entry: 10a6f7da0; end: 10a6f8363;  */

undefined8 * FUN_10a6f7da0(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long *plStack_98;
  long *plStack_90;
  char cStack_81;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  
  puVar3 = param_1;
  FUN_10aa7093c();
  FUN_10a03c0d0(puVar3 + 0x1c);
  *param_1 = &PTR_FUN_110c12690;
  param_1[2] = &PTR_DAT_110c12740;
  param_1[7] = &PTR_DAT_110c12798;
  param_1[0x1c] = &PTR_DAT_110c127b8;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)((long)param_1 + 0x144) = 0;
  *(undefined1 *)((long)param_1 + 0x184) = 0;
  *(undefined1 *)(param_1 + 0x31) = 1;
  *(undefined4 *)((long)param_1 + 0x18c) = 0x3f800000;
  param_1[0x32] = 0x8000000000000000;
  puVar3 = (undefined8 *)0x58;
  __Znwm();
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_DAT_110bf7fc8;
  puVar3[8] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[5] = 0;
  *(undefined8 *)((long)puVar3 + 0x4d) = 0;
  *(undefined8 *)((long)puVar3 + 0x45) = 0;
  puVar3[4] = 0;
  puVar3[3] = 0;
  param_1[0x33] = puVar3 + 3;
  param_1[0x34] = puVar3;
  FUN_10a5cf1fc(param_1 + 0x33);
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0x3f800000;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  FUN_10a5ae998(param_1[0x1d],&PTR_DAT_110b9f988,param_2,param_1 + 0x1c);
  FUN_10a5ae998(param_1[0x33],&PTR_DAT_110c14ac0,param_2,param_1);
  if (param_2 == 0) {
    plVar4 = (long *)0x138;
    __Znwm();
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = (long)&PTR_DAT_110c146b0;
    plVar7 = plVar4 + 3;
    FUN_10aaee888(plVar7,0);
    plStack_98 = plVar7;
    plStack_90 = plVar4;
    FUN_10a7260dc(&plStack_98,plVar4 + 8,plVar7);
    FUN_10a725f78(&plStack_80,&plStack_98);
    if (plStack_90 == (long *)0x0) goto LAB_10a6f8104;
    plVar7 = plStack_90 + 1;
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar4 = plStack_90;
    } while (cVar1 != '\0');
  }
  else {
    lVar8 = *(long *)(param_2 + 0x858);
    plVar7 = *(long **)(param_2 + 0x860);
    if (plVar7 != (long *)0x0) {
      plVar4 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar4 = (long *)0x120;
    lStack_70 = lVar8;
    plStack_68 = plVar7;
    __Znwm();
    FUN_10aaee888();
    lStack_60 = lVar8;
    plStack_58 = plVar7;
    if (plVar7 != (long *)0x0) {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar5 = plVar7 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
    plVar5 = (long *)0x30;
    plStack_98 = plVar4;
    lStack_50 = lVar8;
    plStack_48 = plVar7;
    __Znwm();
    lStack_50 = 0;
    plStack_48 = (long *)0x0;
    *plVar5 = (long)&PTR_DAT_110c14650;
    plVar5[1] = 0;
    plVar5[2] = 0;
    plVar5[3] = (long)plVar4;
    plVar5[4] = lVar8;
    plVar5[5] = (long)plVar7;
    plStack_90 = plVar5;
    FUN_10a7260dc(&plStack_98,plVar4 + 5,plVar4);
    FUN_10a725f78(&plStack_80,&plStack_98);
    plVar7 = plStack_90;
    if (plStack_90 != (long *)0x0) {
      plVar4 = plStack_90 + 1;
      do {
        lVar8 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_90 + 0x10))(plStack_90);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (plStack_48 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar7 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar4 = plStack_58 + 1;
      do {
        lVar8 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if ((lStack_70 != 0) && (plStack_80 != (long *)0x0)) {
      plStack_98 = plStack_80;
      plStack_90 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar7 = plStack_78 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = *plVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_10aa88c30(lStack_70,&plStack_98);
      plVar7 = plStack_90;
      if (plStack_90 != (long *)0x0) {
        plVar4 = plStack_90 + 1;
        do {
          lVar8 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_90 + 0x10))(plStack_90);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
    }
    if (plStack_68 == (long *)0x0) goto LAB_10a6f8104;
    plVar7 = plStack_68 + 1;
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar4 = plStack_68;
    } while (cVar1 != '\0');
  }
  if (lVar8 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
LAB_10a6f8104:
  plVar4 = plStack_78;
  plVar7 = plStack_80;
  plStack_80 = (long *)0x0;
  plStack_78 = (long *)0x0;
  plVar5 = (long *)param_1[0x3f];
  param_1[0x3f] = plVar4;
  param_1[0x3e] = plVar7;
  if (plVar5 != (long *)0x0) {
    plVar7 = plVar5 + 1;
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar7 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar4 = plStack_78 + 1;
    do {
      lVar8 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  uVar6 = *(undefined8 *)(param_2 + 0x960);
  func_0x000107c2b054(&plStack_98,&UNK_10f66fea9);
  FUN_10a6eccb4(&lStack_50,uVar6,&plStack_98);
  func_0x00010a21ba78(param_1 + 0x40,&lStack_50);
  plVar7 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar4 = plStack_48 + 1;
    do {
      lVar8 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (cStack_81 < '\0') {
    __ZdlPv(plStack_98);
  }
  return param_1;
}



/* Entry: 10a6f8364; end: 10a6f84ef;  */

void FUN_10a6f8364(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plStack_28;
  
  *param_1 = &PTR_FUN_110c12690;
  param_1[2] = &PTR_DAT_110c12740;
  param_1[7] = &PTR_DAT_110c12798;
  param_1[0x1c] = &PTR_DAT_110c127b8;
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f66fb16,&UNK_10f66fec4,0x1b8,&UNK_10f66ff21);
  }
  (**(code **)(*(long *)param_1[0x40] + 0x38))(&plStack_28);
  FUN_109d1a244(&plStack_28);
  if (plStack_28 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_28 + 1);
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
        (**(code **)(*plStack_28 + 8))();
      }
    }
  }
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f66fb16,&UNK_10f66fec4,0x1ba,&UNK_10f66ff55);
  }
  func_0x00010a71b29c(param_1 + 0x48);
  func_0x00010a71b244(param_1 + 0x46);
  FUN_10a5ca2e0(param_1 + 0x44);
  func_0x00010a725f20(param_1 + 0x42);
  func_0x00010a061620(param_1 + 0x40);
  func_0x00010a725ec8(param_1 + 0x3e);
  func_0x00010a725e70(param_1 + 0x3c);
  func_0x00010a725e18(param_1 + 0x3a);
  func_0x000107c2826c(param_1 + 0x35);
  func_0x00010a004e5c(param_1 + 0x33);
  param_1[0x1c] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[0x1f] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x1f] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x1d);
  func_0x00010aa71c88(param_1);
  return;
}



/* Entry: 10a6f84f0; end: 10a6f850b;  */

void FUN_10a6f84f0(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plStack_28;
  
  *param_1 = &PTR_FUN_110c12690;
  param_1[2] = &PTR_DAT_110c12740;
  param_1[7] = &PTR_DAT_110c12798;
  param_1[0x1c] = &PTR_DAT_110c127b8;
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f66fb16,&UNK_10f66fec4,0x1b8,&UNK_10f66ff21);
  }
  (**(code **)(*(long *)param_1[0x40] + 0x38))(&plStack_28);
  FUN_109d1a244(&plStack_28);
  if (plStack_28 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_28 + 1);
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
        (**(code **)(*plStack_28 + 8))();
      }
    }
  }
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f66fb16,&UNK_10f66fec4,0x1ba,&UNK_10f66ff55);
  }
  func_0x00010a71b29c(param_1 + 0x48);
  func_0x00010a71b244(param_1 + 0x46);
  FUN_10a5ca2e0(param_1 + 0x44);
  func_0x00010a725f20(param_1 + 0x42);
  func_0x00010a061620(param_1 + 0x40);
  func_0x00010a725ec8(param_1 + 0x3e);
  func_0x00010a725e70(param_1 + 0x3c);
  func_0x00010a725e18(param_1 + 0x3a);
  func_0x000107c2826c(param_1 + 0x35);
  func_0x00010a004e5c(param_1 + 0x33);
  param_1[0x1c] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[0x1f] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x1f] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x1d);
  func_0x00010aa71c88(param_1);
  return;
}



/* Entry: 10a6f850c; end: 10a6f8567;  */

void FUN_10a6f850c(void)

{
  FUN_10a6f8364();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6f8568; end: 10a6f8dd7;  */

undefined ** FUN_10a6f8568(long param_1,undefined8 *param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  ulong *puVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined1 uVar9;
  long lVar10;
  ulong uVar11;
  code *pcVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  undefined8 uVar22;
  long *plVar23;
  undefined *unaff_x27;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined **ppuStack_110;
  long lStack_108;
  float fStack_100;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined *puStack_e0;
  long *plStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  long *plStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar22 = *(undefined8 *)(param_1 + 0x50);
  lVar10 = *(long *)(param_1 + 0x1d0);
  if (*(char *)(lVar10 + 0x3f) < '\0') {
    func_0x000107c3192c(&ppuStack_f0,*(undefined8 *)(lVar10 + 0x28),*(undefined8 *)(lVar10 + 0x30));
  }
  else {
    ppuStack_e8 = *(undefined ***)(lVar10 + 0x30);
    ppuStack_f0 = *(undefined ***)(lVar10 + 0x28);
    puStack_e0 = *(undefined **)(lVar10 + 0x38);
  }
  ppuVar21 = *(undefined ***)(param_1 + 0x1e8);
  puVar20 = *(undefined **)(param_1 + 0x1e8);
  puVar13 = *(undefined **)(param_1 + 0x1e0);
  ppuVar7 = (undefined **)0x88;
  __Znwm();
  ppuVar7[1] = (undefined *)0x0;
  ppuVar7[2] = (undefined *)0x0;
  *ppuVar7 = (undefined *)&PTR_FUN_110c14758;
  if (ppuVar21 != (undefined **)0x0) {
    ppuVar1 = ppuVar21 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar5) {
        *ppuVar1 = *ppuVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puStack_120 = puVar13;
  puStack_118 = puVar20;
  if ((long)puStack_e0 < 0) {
    func_0x000107c3192c(&ppuStack_c0,ppuStack_f0,ppuStack_e8);
  }
  else {
    ppuStack_b8 = ppuStack_e8;
    ppuStack_c0 = ppuStack_f0;
    puStack_b0 = puStack_e0;
  }
  ppuVar1 = ppuVar7 + 3;
  ppuVar8 = ppuVar1;
  FUN_10a817bf0(ppuVar1,uVar22,&puStack_120,param_2,&ppuStack_c0);
  if ((long)puStack_b0 < 0) {
    ppuVar8 = ppuStack_c0;
    __ZdlPv();
  }
  if (ppuVar21 != (undefined **)0x0) {
    ppuVar2 = ppuVar21 + 1;
    do {
      puVar13 = *ppuVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar5) {
        *ppuVar2 = puVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar13 == (undefined *)0x0) {
      (**(code **)(*ppuVar21 + 0x10))(ppuVar21);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar8 = ppuVar21;
    }
  }
  ppuStack_130 = ppuVar1;
  ppuStack_128 = ppuVar7;
  if ((long)puStack_e0 < 0) {
    ppuVar8 = ppuStack_f0;
    __ZdlPv();
  }
  lVar10 = *(long *)(*(long *)(param_1 + 0x1d0) + 0x40);
  ppuVar21 = *(undefined ***)(*(long *)(param_1 + 0x1d0) + 0x48);
  if (ppuVar21 != (undefined **)0x0) {
    ppuVar1 = ppuVar21 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar5) {
        *ppuVar1 = *ppuVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (lVar10 != 0) {
    puStack_118 = (undefined *)0x0;
    puStack_120 = (undefined *)0x0;
    lStack_108 = 0;
    ppuStack_110 = (undefined **)0x0;
    fStack_100 = *(float *)(lVar10 + 0x38);
    FUN_10a727670(&puStack_120,*(undefined8 *)(lVar10 + 0x20));
    plVar23 = *(long **)(lVar10 + 0x28);
    ppuVar1 = ppuStack_110;
    if (plVar23 != (long *)0x0) {
      do {
        puVar13 = puStack_118;
        uVar11 = plVar23[2];
        uVar16 = ((ulong)(uint)((int)uVar11 << 3) + 8 ^ uVar11 >> 0x20) * -0x622015f714c7d297;
        uVar16 = (uVar11 >> 0x20 ^ uVar16 >> 0x2f ^ uVar16) * -0x622015f714c7d297;
        puVar20 = (undefined *)((uVar16 ^ uVar16 >> 0x2f) * -0x622015f714c7d297);
        if (puStack_118 != (undefined *)0x0) {
          puVar14 = puStack_118 + -1;
          if (((ulong)puStack_118 & (ulong)puVar14) == 0) {
            unaff_x27 = (undefined *)((ulong)puVar20 & (ulong)puVar14);
          }
          else {
            unaff_x27 = puVar20;
            if (puStack_118 <= puVar20) {
              uVar16 = 0;
              if (puStack_118 != (undefined *)0x0) {
                uVar16 = (ulong)puVar20 / (ulong)puStack_118;
              }
              unaff_x27 = puVar20 + -(uVar16 * (long)puStack_118);
            }
          }
          plVar17 = *(long **)(puStack_120 + (long)unaff_x27 * 8);
          if (plVar17 != (long *)0x0) {
            do {
              while( true ) {
                plVar17 = (long *)*plVar17;
                if (plVar17 == (long *)0x0) goto LAB_10a6f87e0;
                puVar19 = (undefined *)plVar17[1];
                if (puVar19 != puVar20) break;
                if (plVar17[2] == uVar11) goto LAB_10a6f8954;
              }
              if (((ulong)puStack_118 & (ulong)puVar14) == 0) {
                puVar19 = (undefined *)((ulong)puVar19 & (ulong)puVar14);
              }
              else if (puStack_118 <= puVar19) {
                uVar16 = 0;
                if (puStack_118 != (undefined *)0x0) {
                  uVar16 = (ulong)puVar19 / (ulong)puStack_118;
                }
                puVar19 = puVar19 + -(uVar16 * (long)puStack_118);
              }
            } while (puVar19 == unaff_x27);
          }
        }
LAB_10a6f87e0:
        ppuVar7 = (undefined **)0x68;
        __Znwm();
        puStack_b0 = (undefined *)0x0;
        *ppuVar7 = (undefined *)0x0;
        ppuVar7[1] = puVar20;
        lVar15 = plVar23[3];
        puVar14 = (undefined *)plVar23[2];
        ppuVar7[3] = (undefined *)plVar23[3];
        ppuVar7[2] = puVar14;
        if (lVar15 != 0) {
          plVar17 = (long *)(lVar15 + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar5) {
              *plVar17 = *plVar17 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        ppuStack_f0 = ppuVar7 + 4;
        *(undefined1 *)(ppuVar7 + 0xc) = 3;
        ppuStack_c0 = ppuVar7;
        ppuStack_b8 = &puStack_120;
        if ((char)plVar23[0xc] == '\0') {
          uVar9 = 0;
        }
        else {
          FUN_10a005398(&ppuStack_f0,plVar23 + 4);
          uVar9 = (undefined1)plVar23[0xc];
        }
        *(undefined1 *)(ppuVar7 + 0xc) = uVar9;
        puStack_b0 = (undefined *)CONCAT71(puStack_b0._1_7_,1);
        if ((puVar13 == (undefined *)0x0) || (fStack_100 * (float)puVar13 < (float)(lStack_108 + 1))
           ) {
          uVar11 = 1;
          if ((undefined *)0x2 < puVar13) {
            uVar11 = (ulong)(((ulong)puVar13 & (ulong)(puVar13 + -1)) != 0);
          }
          uVar11 = uVar11 | (long)puVar13 << 1;
          uVar16 = (ulong)((float)(lStack_108 + 1) / fStack_100);
          if (uVar11 <= uVar16) {
            uVar11 = uVar16;
          }
          FUN_10a727670(&puStack_120,uVar11);
          puVar13 = puStack_118;
          if (((ulong)puStack_118 & (ulong)(puStack_118 + -1)) == 0) {
            unaff_x27 = (undefined *)((ulong)(puStack_118 + -1) & (ulong)puVar20);
          }
          else {
            unaff_x27 = puVar20;
            if (puStack_118 <= puVar20) {
              uVar11 = 0;
              if (puStack_118 != (undefined *)0x0) {
                uVar11 = (ulong)puVar20 / (ulong)puStack_118;
              }
              unaff_x27 = puVar20 + -(uVar11 * (long)puStack_118);
            }
          }
        }
        puVar18 = *(undefined8 **)(puStack_120 + (long)unaff_x27 * 8);
        if (puVar18 == (undefined8 *)0x0) {
          *ppuStack_c0 = (undefined *)ppuStack_110;
          ppuStack_110 = ppuStack_c0;
          *(undefined ****)(puStack_120 + (long)unaff_x27 * 8) = &ppuStack_110;
          if (*ppuStack_c0 != (undefined *)0x0) {
            puVar20 = *(undefined **)(*ppuStack_c0 + 8);
            if (((ulong)puVar13 & (ulong)(puVar13 + -1)) == 0) {
              puVar20 = (undefined *)((ulong)puVar20 & (ulong)(puVar13 + -1));
            }
            else if (puVar13 <= puVar20) {
              uVar11 = 0;
              if (puVar13 != (undefined *)0x0) {
                uVar11 = (ulong)puVar20 / (ulong)puVar13;
              }
              puVar20 = puVar20 + -(uVar11 * (long)puVar13);
            }
            *(undefined ***)(puStack_120 + (long)puVar20 * 8) = ppuStack_c0;
          }
        }
        else {
          *ppuStack_c0 = (undefined *)*puVar18;
          *puVar18 = ppuStack_c0;
        }
        lStack_108 = lStack_108 + 1;
LAB_10a6f8954:
        plVar23 = (long *)*plVar23;
        ppuVar1 = ppuStack_110;
      } while (plVar23 != (long *)0x0);
    }
    for (; ppuVar1 != (undefined **)0x0; ppuVar1 = (undefined **)*ppuVar1) {
      lVar15 = lVar10 + 0x18;
      ppuVar8 = ppuVar1 + 2;
      FUN_10a727988();
      if (lVar15 != 0) {
        if (*(char *)(ppuVar1 + 0xc) == '\x01') {
          pcVar12 = (code *)ppuVar1[4];
          ppuStack_b8 = (undefined **)param_2[1];
          ppuStack_c0 = (undefined **)*param_2;
          if (param_2[1] != 0) {
            plVar23 = (long *)(param_2[1] + 8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
              if (bVar5) {
                *plVar23 = *plVar23 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          ppuStack_e8 = ppuStack_128;
          ppuStack_f0 = ppuStack_130;
          if (ppuStack_128 != (undefined **)0x0) {
            ppuVar7 = ppuStack_128 + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
              if (bVar5) {
                *ppuVar7 = *ppuVar7 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          (*pcVar12)(&ppuStack_c0,&ppuStack_f0,ppuVar1 + 4);
          ppuVar7 = ppuStack_e8;
          if (ppuStack_e8 != (undefined **)0x0) {
            ppuVar8 = ppuStack_e8 + 1;
            do {
              puVar13 = *ppuVar8;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
              if (bVar5) {
                *ppuVar8 = puVar13 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (puVar13 == (undefined *)0x0) {
              (**(code **)(*ppuStack_e8 + 0x10))(ppuStack_e8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
            }
          }
          ppuVar7 = ppuStack_b8;
          if (ppuStack_b8 != (undefined **)0x0) {
            ppuVar8 = ppuStack_b8 + 1;
            do {
              puVar13 = *ppuVar8;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
              if (bVar5) {
                *ppuVar8 = puVar13 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
LAB_10a6f8a98:
            if (puVar13 == (undefined *)0x0) {
              (**(code **)(*ppuVar7 + 0x10))(ppuVar7);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
            }
          }
        }
        else if (*(char *)(ppuVar1 + 0xc) == '\x02') {
          ppuVar7 = ppuVar1 + 4;
          FUN_10a688b40();
          ppuVar2 = ppuStack_128;
          if (ppuVar7 == (undefined **)0x0) {
            if (ppuVar8 != (undefined **)0x0) {
              puStack_a8 = ppuVar1[5];
              puStack_b0 = ppuVar1[4];
              if (ppuVar1[5] != (undefined *)0x0) {
                plVar23 = (long *)(ppuVar1[5] + 8);
                do {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                  if (bVar5) {
                    *plVar23 = *plVar23 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              puStack_e0 = (undefined *)*param_2;
              plStack_d8 = (long *)param_2[1];
              if (plStack_d8 != (long *)0x0) {
                plVar23 = plStack_d8 + 1;
                do {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                  if (bVar5) {
                    *plVar23 = *plVar23 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              ppuStack_d0 = ppuStack_130;
              ppuStack_c8 = ppuStack_128;
              if (ppuStack_128 != (undefined **)0x0) {
                ppuVar7 = ppuStack_128 + 1;
                do {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
                  if (bVar5) {
                    *ppuVar7 = *ppuVar7 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              ppuStack_c0 = (undefined **)FUN_10a727cd8;
              ppuStack_b8 = &PTR_FUN_110c14798;
              ppuStack_f0 = (undefined **)0x0;
              ppuStack_e8 = (undefined **)0x0;
              if (plStack_d8 != (long *)0x0) {
                plVar23 = plStack_d8 + 1;
                do {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                  if (bVar5) {
                    *plVar23 = *plVar23 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              ppuStack_90 = ppuStack_130;
              ppuStack_88 = ppuStack_128;
              if (ppuStack_128 != (undefined **)0x0) {
                ppuVar7 = ppuStack_128 + 1;
                do {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
                  if (bVar5) {
                    *ppuVar7 = *ppuVar7 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              puStack_a0 = puStack_e0;
              plStack_98 = plStack_d8;
              FUN_10a4634ec(ppuVar8,&ppuStack_c0);
              (*(code *)*ppuStack_b8)(&ppuStack_b8);
              if (ppuVar2 != (undefined **)0x0) {
                ppuVar7 = ppuVar2 + 1;
                do {
                  puVar13 = *ppuVar7;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
                  if (bVar5) {
                    *ppuVar7 = puVar13 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (puVar13 == (undefined *)0x0) {
                  (**(code **)(*ppuVar2 + 0x10))(ppuVar2);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar2);
                }
              }
              plVar23 = plStack_d8;
              if (plStack_d8 != (long *)0x0) {
                plVar17 = plStack_d8 + 1;
                do {
                  lVar15 = *plVar17;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                  if (bVar5) {
                    *plVar17 = lVar15 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (lVar15 == 0) {
                  (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
                }
              }
              ppuVar7 = ppuStack_e8;
              if (ppuStack_e8 != (undefined **)0x0) {
                ppuVar8 = ppuStack_e8 + 1;
                do {
                  puVar13 = *ppuVar8;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
                  if (bVar5) {
                    *ppuVar8 = puVar13 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                goto LAB_10a6f8a98;
              }
            }
          }
          else {
            *ppuVar7 = (undefined *)CONCAT44((int)((ulong)*ppuVar7 >> 0x20) + 1,(int)*ppuVar7 + 1);
            FUN_10a727a60(ppuVar1[4],param_2,&ppuStack_130);
            iVar6 = *(int *)((long)ppuVar7 + 4) + -1;
            *(int *)((long)ppuVar7 + 4) = iVar6;
            if (iVar6 == 0) {
              *(undefined4 *)ppuVar7 = 0;
            }
          }
        }
      }
    }
    ppuVar8 = &puStack_120;
    func_0x00010a7278e8();
  }
  if (ppuVar21 != (undefined **)0x0) {
    ppuVar1 = ppuVar21 + 1;
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
      (**(code **)(*ppuVar21 + 0x10))(ppuVar21);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar8 = ppuVar21;
    }
  }
  ppuVar21 = ppuStack_128;
  if (ppuStack_128 != (undefined **)0x0) {
    ppuVar1 = ppuStack_128 + 1;
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
      (**(code **)(*ppuStack_128 + 0x10))(ppuStack_128);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar8 = ppuVar21;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    func_0x00010a725e70(&puStack_120);
    __ZNSt3__119__shared_weak_countD2Ev(ppuVar7);
    __ZdlPv();
    if ((long)puStack_e0 < 0) {
      __ZdlPv(ppuStack_f0);
    }
    __Unwind_Resume();
    func_0x00010a07a8a8(ppuVar8 + 7);
    func_0x00010a07a8a8(ppuVar8 + 5);
    FUN_10a5ca2e0(ppuVar8 + 3);
    FUN_10a0772f0(ppuVar8 + 1);
    plVar23 = (long *)*ppuVar8;
    if (plVar23 != (long *)0x0) {
      puVar3 = (ulong *)(plVar23 + 1);
      do {
        uVar11 = *puVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar5) {
          *puVar3 = uVar11 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar11 & 0x1fffffffc) == 4) {
        do {
          uVar11 = *puVar3;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar5) {
            *puVar3 = uVar11 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar11 - 1 == 0) {
          (**(code **)(*plVar23 + 8))();
        }
      }
    }
    return ppuVar8;
  }
  return ppuVar8;
}



/* Entry: 10a6f8dd8; end: 10a6f8f27;  */

long * FUN_10a6f8dd8(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  func_0x00010a07a8a8(param_1 + 7);
  func_0x00010a07a8a8(param_1 + 5);
  FUN_10a5ca2e0(param_1 + 3);
  FUN_10a0772f0(param_1 + 1);
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



/* Entry: 10a6f8f28; end: 10a6fa913;  */

/* WARNING: Removing unreachable block (ram,0x00010a6f9bd0) */
/* WARNING: Removing unreachable block (ram,0x00010a6f9bd4) */
/* WARNING: Removing unreachable block (ram,0x00010a6f9bdc) */
/* WARNING: Removing unreachable block (ram,0x00010a6f9be4) */
/* WARNING: Removing unreachable block (ram,0x00010a6f9be8) */

void FUN_10a6f8f28(long *param_1,long *param_2,long *param_3,undefined1 param_4)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 in_x7;
  long *plVar11;
  long extraout_x8;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long lStack_590;
  long lStack_588;
  long lStack_580;
  long *plStack_578;
  undefined1 auStack_550 [40];
  long lStack_528;
  long lStack_510;
  long *plStack_508;
  long lStack_500;
  long *plStack_4f8;
  long lStack_4f0;
  ulong uStack_4e8;
  long lStack_4e0;
  long lStack_4d8;
  undefined4 uStack_4d0;
  long *plStack_4c8;
  long *plStack_4c0;
  long *plStack_4b8;
  ulong uStack_4b0;
  long *plStack_4a8;
  undefined1 uStack_4a0;
  long lStack_3e8;
  ulong uStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  undefined4 uStack_3c8;
  long *plStack_3c0;
  long *plStack_3b8;
  undefined1 uStack_3b0;
  undefined7 uStack_3af;
  char cStack_399;
  char cStack_398;
  undefined8 uStack_390;
  undefined8 *puStack_388;
  undefined8 uStack_380;
  long lStack_270;
  long *plStack_268;
  char cStack_259;
  undefined8 uStack_238;
  char cStack_221;
  long lStack_220;
  long *plStack_218;
  undefined8 uStack_210;
  long *plStack_208;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  undefined8 uStack_1e0;
  long *plStack_1d8;
  long lStack_1d0;
  long *plStack_1c8;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_1c8 = (long *)param_3[1];
  lStack_1d0 = *param_3;
  if (param_3[1] != 0) {
    plVar10 = (long *)(param_3[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a711e58(auStack_550);
  if (lStack_528 != 0) {
    plVar10 = (long *)(lStack_528 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a6de3f8(&uStack_1e0,param_2[10]);
  FUN_10a6de474(auStack_1f8,uStack_1e0,0x10);
  lVar15 = param_2[10];
  plVar7 = (long *)0x118;
  __Znwm();
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&PTR_FUN_110c14bc8;
  plVar10 = plVar7 + 3;
  FUN_10a6f27ec(plVar10,lVar15,1,auStack_1f8);
  plStack_4c8 = plVar10;
  plStack_4c0 = plVar7;
  FUN_10a6ff650(&plStack_4c8,plVar7 + 8,plVar10);
  FUN_10a6ff4ac(&uStack_210,&plStack_4c8);
  plVar10 = plStack_4c0;
  if (plStack_4c0 != (long *)0x0) {
    plVar7 = plStack_4c0 + 1;
    do {
      lVar15 = *plVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_4c0 + 0x10))(plStack_4c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  plStack_218 = *(long **)(lStack_1d0 + 0xe8);
  lStack_220 = *(long *)(lStack_1d0 + 0xe0);
  if (*(long *)(lStack_1d0 + 0xe8) != 0) {
    plVar10 = (long *)(*(long *)(lStack_1d0 + 0xe8) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a7d2014(&lStack_270,&lStack_220);
  plStack_4c8 = (long *)((ulong)plStack_4c8 & 0xffffffffffffff00);
  uStack_4b0 = uStack_4b0 & 0xffffffffffffff00;
  uStack_188 = 0;
  plStack_190 = (long *)0x0;
  plStack_198 = (long *)0x0;
  plStack_1a0 = (long *)0x0;
  uStack_180 = 0x3f800000;
  uStack_3b0 = 0;
  cStack_398 = '\0';
  FUN_10a6e53f0(&uStack_390,&lStack_270,&plStack_4c8,&plStack_1a0,&uStack_3b0,1,0,in_x7,0,0);
  if ((cStack_398 == '\x01') && (cStack_399 < '\0')) {
    __ZdlPv(CONCAT71(uStack_3af,uStack_3b0));
  }
  func_0x00010a71245c(&plStack_1a0);
  if (((char)uStack_4b0 == '\x01') && ((long)plStack_4b8 < 0)) {
    __ZdlPv(plStack_4c8);
  }
  plStack_3b8 = (long *)0x0;
  plStack_3c0 = (long *)0x0;
  if (lStack_220 != 0) {
    FUN_10a7cfeec(&plStack_1a0,param_2[10],&lStack_220);
    plStack_3c0 = plStack_1a0;
    plStack_3b8 = plStack_198;
    if (plStack_198 != (long *)0x0) {
      plStack_198 = plStack_198 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plStack_198,0x10);
        if (bVar4) {
          *plStack_198 = *plStack_198 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  plStack_1a0 = (long *)((ulong)plStack_1a0 & 0xffffffff00000000);
  plStack_4c8 = (long *)0x0;
  plStack_4c0 = (long *)0x0;
  plStack_198 = plStack_3c0;
  plStack_190 = plStack_3b8;
  FUN_10a725b3c(&lStack_3e8,&plStack_1a0,1);
  plVar10 = plStack_190;
  if (plStack_190 != (long *)0x0) {
    plVar7 = plStack_190 + 1;
    do {
      lVar15 = *plVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_190 + 0x10))(plStack_190);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  FUN_10a6dee68(&plStack_4c8,auStack_1f8,&uStack_390);
  uStack_4e8 = uStack_3e0;
  lStack_4f0 = lStack_3e8;
  lStack_3e8 = 0;
  uStack_3e0 = 0;
  lStack_4e0 = lStack_3d8;
  lStack_4d8 = lStack_3d0;
  uStack_4d0 = uStack_3c8;
  if (lStack_3d0 != 0) {
    uVar14 = *(ulong *)(lStack_3d8 + 8);
    if ((uStack_4e8 & uStack_4e8 - 1) == 0) {
      uVar14 = uVar14 & uStack_4e8 - 1;
    }
    else if (uStack_4e8 <= uVar14) {
      uVar5 = 0;
      if (uStack_4e8 != 0) {
        uVar5 = uVar14 / uStack_4e8;
      }
      uVar14 = uVar14 - uVar5 * uStack_4e8;
    }
    *(long **)(lStack_4f0 + uVar14 * 8) = &lStack_4e0;
    lStack_3d8 = 0;
    lStack_3d0 = 0;
  }
  FUN_10a6e5564(&plStack_1a0,&plStack_4c8,&lStack_4f0);
  func_0x00010a71259c(&lStack_4f0);
  FUN_10ae0e238(&plStack_4c8);
  FUN_10a6ded90(*(undefined8 *)(param_2[10] + 0x960),&uStack_210,&plStack_1a0);
  FUN_10a6fb768(&lStack_500,param_2);
  plVar7 = plStack_208;
  uVar14 = uStack_210;
  plVar10 = plStack_4f8;
  if (lStack_500 != 0) {
    lVar15 = param_2[0x40];
    plStack_4c0 = (long *)lStack_500;
    plStack_4b8 = plStack_4f8;
    if (plStack_4f8 != (long *)0x0) {
      plVar11 = plStack_4f8 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = *plVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plStack_4a8 = plStack_208;
    uStack_4b0 = uStack_210;
    if (plStack_208 != (long *)0x0) {
      plVar11 = plStack_208 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = *plVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puVar8 = (undefined8 *)0x98;
    plStack_4c8 = param_2;
    uStack_4a0 = param_4;
    __Znwm();
    *puVar8 = FUN_10a73c470;
    puVar8[1] = FUN_10a73c73c;
    func_0x0001092ba17c(puVar8 + 2);
    plVar16 = (long *)puVar8[7];
    plVar11 = param_2;
    if (plVar16 != (long *)0x0) {
      plVar1 = plVar16 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
        plVar11 = plStack_4c8;
        plVar10 = plStack_4b8;
        lStack_500 = (long)plStack_4c0;
        uVar14 = uStack_4b0;
        plVar7 = plStack_4a8;
        param_4 = uStack_4a0;
      } while (cVar3 != '\0');
    }
    puVar8[9] = plVar11;
    puVar8[10] = lStack_500;
    puVar8[0xb] = plVar10;
    plStack_4c0 = (long *)0x0;
    plStack_4b8 = (long *)0x0;
    puVar8[0xd] = plVar7;
    puVar8[0xc] = uVar14;
    uStack_4b0 = 0;
    plStack_4a8 = (long *)0x0;
    *(undefined1 *)(puVar8 + 0xe) = param_4;
    puVar8[0xf] = lVar15;
    *(undefined1 *)(puVar8 + 0x10) = 0;
    *(undefined1 *)(puVar8 + 0x12) = 0;
    puVar9 = puVar8 + 0xf;
    func_0x0001092ba064(puVar9,puVar8);
    if (((ulong)puVar9 & 1) == 0) {
      FUN_10a707770(puVar8 + 0x11,puVar8 + 9);
      puVar8[0xf] = puVar8[0x11];
      plVar10 = (long *)(puVar8[0x11] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (((uint)*(undefined8 *)(puVar8[0xf] + 0x10) >> 1 & 1) == 0) {
        *(undefined1 *)(puVar8 + 0x12) = 1;
        lVar15 = puVar8[0xf];
        plVar10 = (long *)(lVar15 + 0x10);
        uVar12 = puVar8[3];
        do {
          lVar13 = *plVar10;
          if (lVar13 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar4) {
              *plVar10 = 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              uStack_1b8 = 0;
              puStack_1b0 = puVar8;
              uStack_1a8 = uVar12;
              func_0x000109d1b588(lVar15 + 0x18,&uStack_1b8);
              *(undefined8 *)(lVar15 + 0x10) = 0;
              goto LAB_10a6f9544;
            }
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar13 >> 1 & 1) == 0);
      }
      plVar10 = (long *)puVar8[0xf];
      if (((uint)*(undefined8 *)(puVar8[0xf] + 0x10) >> 5 & 1) != 0) {
        func_0x0001092af97c(plVar10 + 0x12);
        goto LAB_10a6fa25c;
      }
      if (plVar10 != (long *)0x0) {
        puVar2 = (ulong *)(plVar10 + 1);
        do {
          uVar14 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar14 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar14 & 0x1fffffffc) == 4) {
          do {
            uVar14 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar14 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar14 - 1 == 0) {
            (**(code **)(*plVar10 + 8))();
          }
        }
      }
      plVar10 = (long *)puVar8[0x11];
      if (plVar10 != (long *)0x0) {
        puVar2 = (ulong *)(plVar10 + 1);
        do {
          uVar14 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar14 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar14 & 0x1fffffffc) == 4) {
          do {
            uVar14 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar14 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar14 - 1 == 0) {
            (**(code **)(*plVar10 + 8))();
          }
        }
      }
      func_0x0001092ba100(puVar8 + 2);
      plVar10 = (long *)puVar8[0xd];
      if (plVar10 != (long *)0x0) {
        plVar7 = plVar10 + 1;
        do {
          lVar15 = *plVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = lVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      plVar10 = (long *)puVar8[0xb];
      if (plVar10 != (long *)0x0) {
        plVar7 = plVar10 + 1;
        do {
          lVar15 = *plVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = lVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      func_0x000109d1a1d0(puVar8 + 2);
      __ZdlPv(puVar8);
    }
LAB_10a6f9544:
    plVar10 = plStack_4a8;
    if (plStack_4a8 != (long *)0x0) {
      plVar7 = plStack_4a8 + 1;
      do {
        lVar15 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_4a8 + 0x10))(plStack_4a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    plVar10 = plStack_4b8;
    if (plStack_4b8 != (long *)0x0) {
      plVar7 = plStack_4b8 + 1;
      do {
        lVar15 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_4b8 + 0x10))(plStack_4b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    lVar13 = *(long *)(param_2[10] + 0x870);
    lVar15 = *(long *)(lVar13 + 0x38);
    if (lVar15 == 0) {
      lVar15 = *(long *)(lVar13 + 0x28);
      plStack_508 = *(long **)(lVar13 + 0x30);
    }
    else {
      plStack_508 = *(long **)(lVar13 + 0x40);
    }
    if (plStack_508 != (long *)0x0) {
      plVar10 = plStack_508 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plStack_578 = plStack_208;
    lStack_580 = uStack_210;
    plStack_4b8 = plStack_208;
    plStack_4c0 = (long *)uStack_210;
    if (plStack_208 != (long *)0x0) {
      plVar10 = plStack_208 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_588 = param_2[0x45];
    lStack_590 = param_2[0x44];
    if (lStack_588 != 0) {
      plVar10 = (long *)(lStack_588 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puVar8 = (undefined8 *)0x90;
    lStack_510 = lVar15;
    plStack_4c8 = plVar16;
    uStack_4b0 = lStack_590;
    plStack_4a8 = (long *)lStack_588;
    __Znwm();
    *puVar8 = FUN_10a73c964;
    puVar8[1] = FUN_10a73cc70;
    func_0x0001092ba17c(puVar8 + 2);
    plVar10 = (long *)puVar8[7];
    if (plVar10 != (long *)0x0) {
      plVar7 = plVar10 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = *plVar7 + 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lStack_588 = (long)plStack_4a8;
      lStack_590 = uStack_4b0;
      plStack_578 = plStack_4b8;
      lStack_580 = (long)plStack_4c0;
      plVar16 = plStack_4c8;
    }
    puVar8[9] = plVar16;
    plStack_4c8 = (long *)0x0;
    plStack_4c0 = (long *)0x0;
    plStack_4b8 = (long *)0x0;
    puVar8[0xb] = plStack_578;
    puVar8[10] = lStack_580;
    puVar8[0xd] = lStack_588;
    puVar8[0xc] = lStack_590;
    uStack_4b0 = 0;
    plStack_4a8 = (long *)0x0;
    puVar8[0xe] = lVar15;
    *(undefined1 *)(puVar8 + 0xf) = 0;
    *(undefined1 *)(puVar8 + 0x11) = 0;
    puVar9 = puVar8 + 0xe;
    func_0x0001092ba064(puVar9,puVar8);
    if (((ulong)puVar9 & 1) == 0) {
      FUN_10a707c98(puVar8 + 0x10,puVar8 + 9);
      puVar8[0xe] = puVar8[0x10];
      plVar7 = (long *)(puVar8[0x10] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = *plVar7 + 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (((uint)*(undefined8 *)(puVar8[0xe] + 0x10) >> 1 & 1) == 0) {
        *(undefined1 *)(puVar8 + 0x11) = 1;
        lVar15 = puVar8[0xe];
        plVar7 = (long *)(lVar15 + 0x10);
        uVar12 = puVar8[3];
        do {
          lVar13 = *plVar7;
          if (lVar13 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              uStack_1b8 = 0;
              puStack_1b0 = puVar8;
              uStack_1a8 = uVar12;
              func_0x000109d1b588(lVar15 + 0x18,&uStack_1b8);
              *(undefined8 *)(lVar15 + 0x10) = 0;
              goto joined_r0x00010a6f9928;
            }
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar13 >> 1 & 1) == 0);
      }
      plVar7 = (long *)puVar8[0xe];
      if (((uint)*(undefined8 *)(puVar8[0xe] + 0x10) >> 5 & 1) != 0) {
        func_0x0001092af97c(plVar7 + 0x12);
        goto LAB_10a6fa25c;
      }
      if (plVar7 != (long *)0x0) {
        puVar2 = (ulong *)(plVar7 + 1);
        do {
          uVar14 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar14 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar14 & 0x1fffffffc) == 4) {
          do {
            uVar14 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar14 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar14 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      plVar7 = (long *)puVar8[0x10];
      if (plVar7 != (long *)0x0) {
        puVar2 = (ulong *)(plVar7 + 1);
        do {
          uVar14 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar14 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar14 & 0x1fffffffc) == 4) {
          do {
            uVar14 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar14 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar14 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      func_0x0001092ba100(puVar8 + 2);
      plVar7 = (long *)puVar8[0xd];
      if (plVar7 != (long *)0x0) {
        plVar11 = plVar7 + 1;
        do {
          lVar15 = *plVar11;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = lVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      plVar7 = (long *)puVar8[0xb];
      if (plVar7 != (long *)0x0) {
        plVar11 = plVar7 + 1;
        do {
          lVar15 = *plVar11;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = lVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      plVar7 = (long *)puVar8[9];
      if (plVar7 != (long *)0x0) {
        puVar2 = (ulong *)(plVar7 + 1);
        do {
          uVar14 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar14 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar14 & 0x1fffffffc) == 4) {
          do {
            uVar14 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar14 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar14 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      func_0x000109d1a1d0(puVar8 + 2);
      __ZdlPv(puVar8);
    }
joined_r0x00010a6f9928:
    if (plVar10 != (long *)0x0) {
      puVar2 = (ulong *)(plVar10 + 1);
      do {
        uVar14 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar14 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar14 & 0x1fffffffc) == 4) {
        do {
          uVar14 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar14 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar14 - 1 == 0) {
          (**(code **)(*plVar10 + 8))(plVar10);
        }
      }
    }
    plVar10 = plStack_4a8;
    if (plStack_4a8 != (long *)0x0) {
      plVar7 = plStack_4a8 + 1;
      do {
        lVar15 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_4a8 + 0x10))(plStack_4a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    plVar10 = plStack_4b8;
    if (plStack_4b8 != (long *)0x0) {
      plVar7 = plStack_4b8 + 1;
      do {
        lVar15 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_4b8 + 0x10))(plStack_4b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    if (plStack_4c8 != (long *)0x0) {
      puVar2 = (ulong *)(plStack_4c8 + 1);
      do {
        uVar14 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar14 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar14 & 0x1fffffffc) == 4) {
        do {
          uVar14 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar14 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar14 - 1 == 0) {
          (**(code **)(*plStack_4c8 + 8))();
        }
      }
    }
    plVar10 = plStack_508;
    if (plStack_508 != (long *)0x0) {
      plVar7 = plStack_508 + 1;
      do {
        lVar15 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_508 + 0x10))(plStack_508);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
  }
  if (plStack_4f8 != (long *)0x0) {
    plVar10 = plStack_4f8 + 1;
    do {
      lVar15 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_4f8 + 0x10))(plStack_4f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_4f8);
    }
  }
  FUN_10a6dee28(auStack_550,&uStack_210);
  FUN_10a6fd048(&plStack_1a0);
  func_0x00010a71259c(&lStack_3e8);
  plVar10 = plStack_3b8;
  if (plStack_3b8 != (long *)0x0) {
    plVar7 = plStack_3b8 + 1;
    do {
      lVar15 = *plVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_3b8 + 0x10))(plStack_3b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  FUN_10a6fd048(&uStack_390);
  if (cStack_221 < '\0') {
    __ZdlPv(uStack_238);
  }
  if (cStack_259 < '\0') {
    __ZdlPv(lStack_270);
  }
  plVar10 = plStack_218;
  if (plStack_218 != (long *)0x0) {
    plVar7 = plStack_218 + 1;
    do {
      lVar15 = *plVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_218 + 0x10))(plStack_218);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  if (plStack_208 != (long *)0x0) {
    plVar10 = plStack_208 + 1;
    do {
      lVar15 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_208 + 0x10))(plStack_208);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_208);
    }
  }
  if (cStack_1e1 < '\0') {
    __ZdlPv(auStack_1f8[0]);
  }
  if (plStack_1d8 != (long *)0x0) {
    plVar10 = plStack_1d8 + 1;
    do {
      lVar15 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_1d8 + 0x10))(plStack_1d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1d8);
    }
  }
  func_0x000109d1a1d0(auStack_550);
  plVar10 = plStack_1c8;
  if (plStack_1c8 != (long *)0x0) {
    plVar7 = plStack_1c8 + 1;
    do {
      lVar15 = *plVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  lVar13 = param_2[0x40];
  puVar8 = (undefined8 *)0x70;
  __Znwm();
  *puVar8 = FUN_10a73d288;
  puVar8[1] = FUN_10a73d574;
  FUN_10a711e58(puVar8 + 2);
  lVar15 = puVar8[7];
  if (lVar15 != 0) {
    plVar10 = (long *)(lVar15 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lVar15;
  puVar8[0xb] = lStack_528;
  puVar8[9] = lVar13;
  *(undefined1 *)(puVar8 + 10) = 0;
  *(undefined1 *)(puVar8 + 0xd) = 0;
  puVar9 = puVar8 + 9;
  FUN_10a6fd0e0(puVar9,puVar8);
  if (((ulong)puVar9 & 1) == 0) {
    FUN_10a707258(puVar8 + 0xc,puVar8 + 0xb);
    puVar8[9] = puVar8[0xc];
    plVar10 = (long *)(puVar8[0xc] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(puVar8[9] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar8 + 0xd) = 1;
      lVar15 = puVar8[9];
      plVar10 = (long *)(lVar15 + 0x10);
      uVar12 = puVar8[3];
      do {
        lVar13 = *plVar10;
        if (lVar13 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            uStack_390 = 0;
            puStack_388 = puVar8;
            uStack_380 = uVar12;
            func_0x000109d1b588(lVar15 + 0x18,&uStack_390);
            *(undefined8 *)(lVar15 + 0x10) = 0;
            goto LAB_10a6f9e14;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar13 >> 1 & 1) == 0);
    }
    lVar15 = puVar8[9];
    if (((uint)*(undefined8 *)(puVar8[9] + 0x10) >> 5 & 1) == 0) {
      if ((*(byte *)(lVar15 + 0xa8) & 1) == 0) goto LAB_10a6fa25c;
      FUN_10a6dee28(puVar8 + 2,lVar15 + 0x98);
      plVar10 = (long *)puVar8[9];
      if (plVar10 != (long *)0x0) {
        puVar2 = (ulong *)(plVar10 + 1);
        do {
          uVar14 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar14 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar14 & 0x1fffffffc) == 4) {
          do {
            uVar14 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar14 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar14 - 1 == 0) {
            (**(code **)(*plVar10 + 8))();
          }
        }
      }
      plVar10 = (long *)puVar8[0xc];
      if (plVar10 != (long *)0x0) {
        puVar2 = (ulong *)(plVar10 + 1);
        do {
          uVar14 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar14 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar14 & 0x1fffffffc) == 4) {
          do {
            uVar14 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar14 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar14 - 1 == 0) {
            (**(code **)(*plVar10 + 8))();
          }
        }
      }
      plVar10 = (long *)puVar8[0xb];
      if (plVar10 != (long *)0x0) {
        puVar2 = (ulong *)(plVar10 + 1);
        do {
          uVar14 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar14 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar14 & 0x1fffffffc) == 4) {
          do {
            uVar14 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar14 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar14 - 1 == 0) {
            (**(code **)(*plVar10 + 8))();
          }
        }
      }
      func_0x000109d1a1d0(puVar8 + 2);
      __ZdlPv(puVar8);
      goto LAB_10a6f9e14;
    }
  }
  else {
LAB_10a6f9e14:
    lVar13 = *(long *)(param_2[10] + 0x870);
    lVar15 = *(long *)(lVar13 + 0x38);
    if (lVar15 == 0) {
      lVar15 = *(long *)(lVar13 + 0x28);
      plStack_268 = *(long **)(lVar13 + 0x30);
    }
    else {
      plStack_268 = *(long **)(lVar13 + 0x40);
    }
    if (plStack_268 != (long *)0x0) {
      plVar10 = plStack_268 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plStack_1a0 = (long *)*param_1;
    if (plStack_1a0 != (long *)0x0) {
      plVar10 = plStack_1a0 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plStack_578 = (long *)param_3[1];
    lStack_580 = *param_3;
    if (plStack_578 != (long *)0x0) {
      plVar10 = (long *)((long)plStack_578 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puVar8 = (undefined8 *)0x80;
    lStack_270 = lVar15;
    plStack_198 = (long *)lStack_580;
    plStack_190 = plStack_578;
    __Znwm();
    *puVar8 = FUN_10a73d770;
    puVar8[1] = FUN_10a73da44;
    func_0x0001092ba17c(puVar8 + 2);
    plVar10 = (long *)puVar8[7];
    if (plVar10 != (long *)0x0) {
      plVar7 = plVar10 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = *plVar7 + 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plStack_578 = plStack_190;
      lStack_580 = (long)plStack_198;
    }
    puVar8[9] = plStack_1a0;
    plStack_1a0 = (long *)0x0;
    puVar8[0xb] = plStack_578;
    puVar8[10] = lStack_580;
    plStack_198 = (long *)0x0;
    plStack_190 = (long *)0x0;
    puVar8[0xc] = lVar15;
    *(undefined1 *)(puVar8 + 0xd) = 0;
    *(undefined1 *)(puVar8 + 0xf) = 0;
    puVar9 = puVar8 + 0xc;
    func_0x0001092ba064(puVar9,puVar8);
    if (((ulong)puVar9 & 1) == 0) {
      FUN_10a7075f8(puVar8 + 0xe,puVar8 + 9);
      puVar8[0xc] = puVar8[0xe];
      plVar7 = (long *)(puVar8[0xe] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = *plVar7 + 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (((uint)*(undefined8 *)(puVar8[0xc] + 0x10) >> 1 & 1) == 0) {
        *(undefined1 *)(puVar8 + 0xf) = 1;
        lVar15 = puVar8[0xc];
        plVar7 = (long *)(lVar15 + 0x10);
        uVar12 = puVar8[3];
        do {
          lVar13 = *plVar7;
          if (lVar13 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              uStack_390 = 0;
              puStack_388 = puVar8;
              uStack_380 = uVar12;
              func_0x000109d1b588(lVar15 + 0x18,&uStack_390);
              *(undefined8 *)(lVar15 + 0x10) = 0;
              goto joined_r0x00010a6fa138;
            }
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar13 >> 1 & 1) == 0);
      }
      plVar7 = (long *)puVar8[0xc];
      if (((uint)*(undefined8 *)(puVar8[0xc] + 0x10) >> 5 & 1) != 0) {
        func_0x0001092af97c(plVar7 + 0x12);
        goto LAB_10a6fa25c;
      }
      if (plVar7 != (long *)0x0) {
        puVar2 = (ulong *)(plVar7 + 1);
        do {
          uVar14 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar14 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar14 & 0x1fffffffc) == 4) {
          do {
            uVar14 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar14 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar14 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      plVar7 = (long *)puVar8[0xe];
      if (plVar7 != (long *)0x0) {
        puVar2 = (ulong *)(plVar7 + 1);
        do {
          uVar14 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar14 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar14 & 0x1fffffffc) == 4) {
          do {
            uVar14 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar14 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar14 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      func_0x0001092ba100(puVar8 + 2);
      plVar7 = (long *)puVar8[0xb];
      if (plVar7 != (long *)0x0) {
        plVar11 = plVar7 + 1;
        do {
          lVar15 = *plVar11;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = lVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      plVar7 = (long *)puVar8[9];
      if (plVar7 != (long *)0x0) {
        puVar2 = (ulong *)(plVar7 + 1);
        do {
          uVar14 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar14 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar14 & 0x1fffffffc) == 4) {
          do {
            uVar14 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar14 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar14 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      func_0x000109d1a1d0(puVar8 + 2);
      __ZdlPv(puVar8);
    }
joined_r0x00010a6fa138:
    if (plVar10 != (long *)0x0) {
      puVar2 = (ulong *)(plVar10 + 1);
      do {
        uVar14 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar14 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar14 & 0x1fffffffc) == 4) {
        do {
          uVar14 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar14 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar14 - 1 == 0) {
          (**(code **)(*plVar10 + 8))(plVar10);
        }
      }
    }
    plVar10 = plStack_190;
    if (plStack_190 != (long *)0x0) {
      plVar7 = plStack_190 + 1;
      do {
        lVar15 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_190 + 0x10))(plStack_190);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    if (plStack_1a0 != (long *)0x0) {
      puVar2 = (ulong *)(plStack_1a0 + 1);
      do {
        uVar14 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar14 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar14 & 0x1fffffffc) == 4) {
        do {
          uVar14 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar14 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar14 - 1 == 0) {
          (**(code **)(*plStack_1a0 + 8))();
        }
      }
    }
    plVar10 = plStack_268;
    if (plStack_268 != (long *)0x0) {
      plVar7 = plStack_268 + 1;
      do {
        lVar15 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_268 + 0x10))(plStack_268);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
    lVar15 = extraout_x8;
  }
  func_0x0001092af97c(lVar15 + 0x90);
LAB_10a6fa25c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a6fa260);
  (*pcVar6)();
}



/* Entry: 10a6fa914; end: 10a6fa983;  */

long * FUN_10a6fa914(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  FUN_10a711cf8(param_1 + 1);
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



/* Entry: 10a6fa984; end: 10a6fa98b;  */

void FUN_10a6fa984(long param_1,long *param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(*param_2 + 0xa8))(&uStack_38,param_2,&PTR_DAT_110c3fbe8,&UNK_10f68c0c1,0);
  if (*(char *)(param_1 + 0x6f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x58));
  }
  *(undefined8 *)(param_1 + 0x60) = uStack_30;
  *(undefined8 *)(param_1 + 0x58) = uStack_38;
  *(undefined8 *)(param_1 + 0x68) = uStack_28;
  return;
}



/* Entry: 10a6fa98c; end: 10a6fb1bf;  */

/* WARNING: Removing unreachable block (ram,0x00010a6fabc4) */
/* WARNING: Removing unreachable block (ram,0x00010a6fabe4) */

void FUN_10a6fa98c(long param_1)

{
  long ******pppppplVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  undefined8 *******pppppppuVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  long *******ppppppplVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  long ******pppppplVar13;
  uint uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  float fVar21;
  float fVar22;
  long *****ppppplStack_160;
  long *****ppppplStack_158;
  undefined4 uStack_150;
  undefined3 uStack_14c;
  char cStack_149;
  undefined2 uStack_148;
  undefined1 uStack_146;
  undefined5 uStack_145;
  char cStack_131;
  undefined8 ******ppppppuStack_130;
  ulong uStack_128;
  byte bStack_119;
  undefined2 uStack_118;
  undefined6 uStack_116;
  char cStack_101;
  long ******pppppplStack_100;
  long *plStack_f8;
  byte bStack_e9;
  undefined8 uStack_e8;
  undefined5 uStack_e0;
  undefined1 uStack_db;
  undefined2 uStack_da;
  char cStack_d1;
  undefined *puStack_d0;
  long *plStack_c8;
  long lStack_c0;
  undefined *puStack_b0;
  long *plStack_a8;
  undefined *puStack_a0;
  long ******pppppplStack_90;
  long *plStack_88;
  undefined *puStack_80;
  undefined4 uStack_78;
  undefined3 uStack_74;
  
  lVar19 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  if ((((*(long *)(param_1 + 400) <= lVar19) && (*(long *)(param_1 + 0x1d0) != 0)) &&
      (*(long *)(*(long *)(param_1 + 0x1d0) + 0x18) != 0)) && (*(long *)(param_1 + 0x1e0) != 0)) {
    __ZNSt3__16chrono12steady_clock3nowEv();
    fVar21 = (float)(int)*(float *)(param_1 + 0x18c);
    uVar11 = (ulong)(int)*(float *)(param_1 + 0x18c);
    uVar12 = uVar11 + 1;
    fVar22 = fVar21 - fVar21;
    fVar21 = (float)(long)uVar12 - fVar21;
    uVar14 = 0;
    if (fVar22 != fVar21) {
      uVar14 = 0xffffff81;
    }
    if (fVar21 < fVar22) {
      uVar14 = 1;
    }
    if (fVar22 < fVar21) {
      uVar14 = 0xffffffff;
    }
    if ((uVar14 != 1) && (uVar12 = uVar11, (uVar14 & 0xff) != 0xff)) {
      uVar12 = (uVar11 & 1) + uVar11;
    }
    *(ulong *)(param_1 + 400) = lVar19 + uVar12 * 1000000000;
    pppppplVar13 = *(long *******)(*(long *)(param_1 + 0x1d0) + 0x18);
    if (*(char *)(pppppplVar13 + 0x1c) == '\x02') {
      lVar19 = 0;
      do {
        cStack_d1 = '\r';
        uStack_e8._0_5_ = 0x74616c6572;
        uStack_e8._5_3_ = 0x657669;
        uStack_e0 = 0x5f656c6974;
        uStack_db = 0;
        __ZNSt3__19to_stringEi(&pppppplStack_100,*(undefined4 *)(lVar19 + 0x113302f98));
        plVar16 = plStack_f8;
        ppppppplVar9 = (long *******)pppppplStack_100;
        if (-1 < (char)bStack_e9) {
          plVar16 = (long *)(ulong)bStack_e9;
          ppppppplVar9 = &pppppplStack_100;
        }
        puVar7 = &uStack_e8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar7,ppppppplVar9,plVar16);
        plStack_c8 = (long *)puVar7[1];
        puStack_d0 = (undefined *)*puVar7;
        lStack_c0 = puVar7[2];
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        cStack_101 = '\x01';
        uStack_118 = 0x5f;
        ppuVar8 = &puStack_d0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppuVar8,&uStack_118,1);
        plStack_a8 = (long *)ppuVar8[1];
        puStack_b0 = *ppuVar8;
        puStack_a0 = ppuVar8[2];
        ppuVar8[1] = (undefined *)0x0;
        ppuVar8[2] = (undefined *)0x0;
        *ppuVar8 = (undefined *)0x0;
        __ZNSt3__19to_stringEi(&ppppppuStack_130,*(undefined4 *)(lVar19 + 0x113302f9c));
        uVar12 = uStack_128;
        pppppppuVar5 = (undefined8 *******)ppppppuStack_130;
        if (-1 < (char)bStack_119) {
          uVar12 = (ulong)bStack_119;
          pppppppuVar5 = &ppppppuStack_130;
        }
        ppuVar8 = &puStack_b0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppuVar8,pppppppuVar5,uVar12);
        plStack_88 = (long *)ppuVar8[1];
        pppppplStack_90 = (long ******)*ppuVar8;
        puStack_80 = ppuVar8[2];
        ppuVar8[1] = (undefined *)0x0;
        ppuVar8[2] = (undefined *)0x0;
        *ppuVar8 = (undefined *)0x0;
        cStack_131 = '\x02';
        uStack_148 = 0x305f;
        uStack_146 = 0;
        ppppppplVar9 = &pppppplStack_90;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppppppplVar9,&uStack_148,2);
        pppppplVar13 = *ppppppplVar9;
        pppppplVar1 = ppppppplVar9[1];
        uStack_78._0_3_ = (undefined3)*(undefined4 *)(ppppppplVar9 + 2);
        uStack_78._3_1_ = (undefined1)*(undefined4 *)((long)ppppppplVar9 + 0x13);
        uStack_74 = (undefined3)((uint)*(undefined4 *)((long)ppppppplVar9 + 0x13) >> 8);
        cVar2 = *(char *)((long)ppppppplVar9 + 0x17);
        ppppppplVar9[1] = (long ******)0x0;
        ppppppplVar9[2] = (long ******)0x0;
        *ppppppplVar9 = (long ******)0x0;
        if (cStack_131 < '\0') {
          __ZdlPv(CONCAT53(uStack_145,CONCAT12(uStack_146,uStack_148)));
        }
        if ((char)bStack_119 < '\0') {
          __ZdlPv(ppppppuStack_130);
        }
        if (cStack_101 < '\0') {
          __ZdlPv(CONCAT62(uStack_116,uStack_118));
        }
        if (lStack_c0 < 0) {
          __ZdlPv(puStack_d0);
        }
        if ((char)bStack_e9 < '\0') {
          __ZdlPv(pppppplStack_100);
        }
        if (cStack_d1 < '\0') {
          __ZdlPv(CONCAT35(uStack_e8._5_3_,(undefined5)uStack_e8));
        }
        lVar15 = *(long *)(*(long *)(param_1 + 0x50) + 0x960);
        if (cVar2 < '\0') {
          func_0x000107c3192c(&ppppplStack_160,pppppplVar13,pppppplVar1);
        }
        else {
          uStack_150 = uStack_78;
          uStack_14c = uStack_74;
          ppppplStack_160 = (long *****)pppppplVar13;
          ppppplStack_158 = (long *****)pppppplVar1;
          cStack_149 = cVar2;
        }
        puStack_b0 = &UNK_10dd62ad6;
        lVar15 = lVar15 + 0x210;
        pppppplStack_90 = &ppppplStack_160;
        FUN_10a71c8d8(lVar15,&ppppplStack_160,&UNK_10dd5b8f9,&pppppplStack_90,&puStack_b0);
        if (cStack_149 < '\0') {
          __ZdlPv(ppppplStack_160);
        }
        if (*(char *)(lVar15 + 0xd0) == '\x01') {
          lVar18 = *(long *)(param_1 + 0x50);
          if (lVar18 == 0) {
            plVar16 = (long *)0x118;
            __Znwm();
            plVar16[1] = 0;
            plVar16[2] = 0;
            ppppppplVar9 = (long *******)(plVar16 + 3);
            *plVar16 = (long)&PTR_FUN_110c14bc8;
            FUN_10a6f27ec(ppppppplVar9,0,3,lVar15 + 0x28);
            pppppplStack_90 = (long ******)ppppppplVar9;
            plStack_88 = plVar16;
            FUN_10a6ff650(&pppppplStack_90,plVar16 + 8,ppppppplVar9);
            FUN_10a6ff4ac(&pppppplStack_100,&pppppplStack_90);
            if (plStack_88 != (long *)0x0) {
              plVar16 = plStack_88 + 1;
              do {
                lVar18 = *plVar16;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                if (bVar4) {
                  *plVar16 = lVar18 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                plVar17 = plStack_88;
              } while (cVar3 != '\0');
              goto LAB_10a6faedc;
            }
          }
          else {
            puVar20 = *(undefined **)(lVar18 + 0x858);
            plVar16 = *(long **)(lVar18 + 0x860);
            uStack_e8._0_5_ = SUB85(puVar20,0);
            uStack_e8._5_3_ = (undefined3)((ulong)puVar20 >> 0x28);
            uStack_e0 = SUB85(plVar16,0);
            uStack_db = (undefined1)((ulong)plVar16 >> 0x28);
            uStack_da = (undefined2)((ulong)plVar16 >> 0x30);
            if (plVar16 != (long *)0x0) {
              plVar17 = plVar16 + 1;
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                if (bVar4) {
                  *plVar17 = *plVar17 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            uVar10 = 0x100;
            __Znwm(0x100);
            FUN_10a6f27ec();
            puStack_d0 = puVar20;
            plStack_c8 = plVar16;
            if (plVar16 != (long *)0x0) {
              plVar17 = plVar16 + 1;
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                if (bVar4) {
                  *plVar17 = *plVar17 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              plVar17 = plVar16 + 2;
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                if (bVar4) {
                  *plVar17 = *plVar17 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                if (bVar4) {
                  *plVar17 = *plVar17 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
            }
            puStack_b0 = puVar20;
            plStack_a8 = plVar16;
            FUN_10a720450(&pppppplStack_90,uVar10,&puStack_b0);
            FUN_10a6ff4ac(&pppppplStack_100);
            plVar16 = plStack_88;
            if (plStack_88 != (long *)0x0) {
              plVar17 = plStack_88 + 1;
              do {
                lVar18 = *plVar17;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                if (bVar4) {
                  *plVar17 = lVar18 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar18 == 0) {
                (**(code **)(*plStack_88 + 0x10))(plStack_88);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
              }
            }
            if (plStack_a8 != (long *)0x0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            plVar16 = plStack_c8;
            if (plStack_c8 != (long *)0x0) {
              plVar17 = plStack_c8 + 1;
              do {
                lVar18 = *plVar17;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                if (bVar4) {
                  *plVar17 = lVar18 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar18 == 0) {
                (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
              }
            }
            if ((CONCAT35(uStack_e8._5_3_,(undefined5)uStack_e8) != 0) &&
               ((long *******)pppppplStack_100 != (long *******)0x0)) {
              pppppplStack_90 = pppppplStack_100;
              plStack_88 = plStack_f8;
              if (plStack_f8 != (long *)0x0) {
                plVar16 = plStack_f8 + 1;
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                  if (bVar4) {
                    *plVar16 = *plVar16 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              FUN_10aa88c30(CONCAT35(uStack_e8._5_3_,(undefined5)uStack_e8),&pppppplStack_90);
              plVar16 = plStack_88;
              if (plStack_88 != (long *)0x0) {
                plVar17 = plStack_88 + 1;
                do {
                  lVar18 = *plVar17;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                  if (bVar4) {
                    *plVar17 = lVar18 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (lVar18 == 0) {
                  (**(code **)(*plStack_88 + 0x10))(plStack_88);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
                }
              }
            }
            plVar17 = (long *)CONCAT26(uStack_da,CONCAT15(uStack_db,uStack_e0));
            if (plVar17 != (long *)0x0) {
              plVar16 = plVar17 + 1;
              do {
                lVar18 = *plVar16;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                if (bVar4) {
                  *plVar16 = lVar18 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
LAB_10a6faedc:
              if (lVar18 == 0) {
                (**(code **)(*plVar17 + 0x10))(plVar17);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
              }
            }
          }
          if ((*(byte *)(lVar15 + 0xd0) & 1) == 0) {
LAB_10a6fb038:
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10a6fb03c);
            (*pcVar6)();
          }
          lVar18 = param_1 + 0x1a8;
          func_0x0001067e045c(lVar18,lVar15 + 0x28);
          if (lVar18 == 0) {
            if ((*(byte *)(lVar15 + 0xd0) & 1) == 0) goto LAB_10a6fb038;
            func_0x000107c2827c(param_1 + 0x1a8,lVar15 + 0x28,lVar15 + 0x28);
            FUN_10a6f8568(param_1,&pppppplStack_100);
          }
          plVar16 = plStack_f8;
          if (plStack_f8 != (long *)0x0) {
            plVar17 = plStack_f8 + 1;
            do {
              lVar15 = *plVar17;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar4) {
                *plVar17 = lVar15 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar15 == 0) {
              (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
            }
          }
        }
        if (cVar2 < '\0') {
          __ZdlPv(pppppplVar13);
        }
        lVar19 = lVar19 + 8;
      } while (lVar19 != 0x48);
    }
    else {
      plVar16 = *(long **)(*(long *)(param_1 + 0x1d0) + 0x20);
      if (plVar16 != (long *)0x0) {
        plVar17 = plVar16 + 1;
        do {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar4) {
            *plVar17 = *plVar17 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lVar19 = param_1 + 0x1a8;
      pppppplStack_90 = pppppplVar13;
      plStack_88 = plVar16;
      func_0x0001067e045c(lVar19,pppppplVar13 + 0x1d);
      if (lVar19 == 0) {
        FUN_10a6f8568(param_1,&pppppplStack_90);
        func_0x000107c2827c(param_1 + 0x1a8,pppppplStack_90 + 0x1d,pppppplStack_90 + 0x1d);
        plVar16 = plStack_88;
      }
      if (plVar16 != (long *)0x0) {
        plVar17 = plVar16 + 1;
        do {
          lVar19 = *plVar17;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar4) {
            *plVar17 = lVar19 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
      }
    }
  }
  return;
}



/* Entry: 10a6fb1c0; end: 10a6fb1c7;  */

/* WARNING: Removing unreachable block (ram,0x00010a6fabc4) */
/* WARNING: Removing unreachable block (ram,0x00010a6fabe4) */

void FUN_10a6fb1c0(long param_1)

{
  long ******pppppplVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  undefined8 *******pppppppuVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  long *******ppppppplVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long ******pppppplVar14;
  uint uVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  float fVar22;
  float fVar23;
  long *****ppppplStack_160;
  long *****ppppplStack_158;
  undefined4 uStack_150;
  undefined3 uStack_14c;
  char cStack_149;
  undefined2 uStack_148;
  undefined1 uStack_146;
  undefined5 uStack_145;
  char cStack_131;
  undefined8 ******ppppppuStack_130;
  ulong uStack_128;
  byte bStack_119;
  undefined2 uStack_118;
  undefined6 uStack_116;
  char cStack_101;
  long ******pppppplStack_100;
  long *plStack_f8;
  byte bStack_e9;
  undefined8 uStack_e8;
  undefined5 uStack_e0;
  undefined1 uStack_db;
  undefined2 uStack_da;
  char cStack_d1;
  undefined *puStack_d0;
  long *plStack_c8;
  long lStack_c0;
  undefined *puStack_b0;
  long *plStack_a8;
  undefined *puStack_a0;
  long ******pppppplStack_90;
  long *plStack_88;
  undefined *puStack_80;
  undefined4 uStack_78;
  undefined3 uStack_74;
  
  lVar11 = param_1 + -0xe0;
  lVar20 = lVar11;
  __ZNSt3__16chrono12steady_clock3nowEv();
  if ((((*(long *)(param_1 + 0xb0) <= lVar20) && (*(long *)(param_1 + 0xf0) != 0)) &&
      (*(long *)(*(long *)(param_1 + 0xf0) + 0x18) != 0)) && (*(long *)(param_1 + 0x100) != 0)) {
    __ZNSt3__16chrono12steady_clock3nowEv();
    fVar22 = (float)(int)*(float *)(param_1 + 0xac);
    uVar12 = (ulong)(int)*(float *)(param_1 + 0xac);
    uVar13 = uVar12 + 1;
    fVar23 = fVar22 - fVar22;
    fVar22 = (float)(long)uVar13 - fVar22;
    uVar15 = 0;
    if (fVar23 != fVar22) {
      uVar15 = 0xffffff81;
    }
    if (fVar22 < fVar23) {
      uVar15 = 1;
    }
    if (fVar23 < fVar22) {
      uVar15 = 0xffffffff;
    }
    if ((uVar15 != 1) && (uVar13 = uVar12, (uVar15 & 0xff) != 0xff)) {
      uVar13 = (uVar12 & 1) + uVar12;
    }
    *(ulong *)(param_1 + 0xb0) = lVar20 + uVar13 * 1000000000;
    pppppplVar14 = *(long *******)(*(long *)(param_1 + 0xf0) + 0x18);
    if (*(char *)(pppppplVar14 + 0x1c) == '\x02') {
      lVar20 = 0;
      do {
        cStack_d1 = '\r';
        uStack_e8._0_5_ = 0x74616c6572;
        uStack_e8._5_3_ = 0x657669;
        uStack_e0 = 0x5f656c6974;
        uStack_db = 0;
        __ZNSt3__19to_stringEi(&pppppplStack_100,*(undefined4 *)(lVar20 + 0x113302f98));
        plVar17 = plStack_f8;
        ppppppplVar9 = (long *******)pppppplStack_100;
        if (-1 < (char)bStack_e9) {
          plVar17 = (long *)(ulong)bStack_e9;
          ppppppplVar9 = &pppppplStack_100;
        }
        puVar7 = &uStack_e8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar7,ppppppplVar9,plVar17);
        plStack_c8 = (long *)puVar7[1];
        puStack_d0 = (undefined *)*puVar7;
        lStack_c0 = puVar7[2];
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        cStack_101 = '\x01';
        uStack_118 = 0x5f;
        ppuVar8 = &puStack_d0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppuVar8,&uStack_118,1);
        plStack_a8 = (long *)ppuVar8[1];
        puStack_b0 = *ppuVar8;
        puStack_a0 = ppuVar8[2];
        ppuVar8[1] = (undefined *)0x0;
        ppuVar8[2] = (undefined *)0x0;
        *ppuVar8 = (undefined *)0x0;
        __ZNSt3__19to_stringEi(&ppppppuStack_130,*(undefined4 *)(lVar20 + 0x113302f9c));
        uVar13 = uStack_128;
        pppppppuVar5 = (undefined8 *******)ppppppuStack_130;
        if (-1 < (char)bStack_119) {
          uVar13 = (ulong)bStack_119;
          pppppppuVar5 = &ppppppuStack_130;
        }
        ppuVar8 = &puStack_b0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppuVar8,pppppppuVar5,uVar13);
        plStack_88 = (long *)ppuVar8[1];
        pppppplStack_90 = (long ******)*ppuVar8;
        puStack_80 = ppuVar8[2];
        ppuVar8[1] = (undefined *)0x0;
        ppuVar8[2] = (undefined *)0x0;
        *ppuVar8 = (undefined *)0x0;
        cStack_131 = '\x02';
        uStack_148 = 0x305f;
        uStack_146 = 0;
        ppppppplVar9 = &pppppplStack_90;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppppppplVar9,&uStack_148,2);
        pppppplVar14 = *ppppppplVar9;
        pppppplVar1 = ppppppplVar9[1];
        uStack_78._0_3_ = (undefined3)*(undefined4 *)(ppppppplVar9 + 2);
        uStack_78._3_1_ = (undefined1)*(undefined4 *)((long)ppppppplVar9 + 0x13);
        uStack_74 = (undefined3)((uint)*(undefined4 *)((long)ppppppplVar9 + 0x13) >> 8);
        cVar2 = *(char *)((long)ppppppplVar9 + 0x17);
        ppppppplVar9[1] = (long ******)0x0;
        ppppppplVar9[2] = (long ******)0x0;
        *ppppppplVar9 = (long ******)0x0;
        if (cStack_131 < '\0') {
          __ZdlPv(CONCAT53(uStack_145,CONCAT12(uStack_146,uStack_148)));
        }
        if ((char)bStack_119 < '\0') {
          __ZdlPv(ppppppuStack_130);
        }
        if (cStack_101 < '\0') {
          __ZdlPv(CONCAT62(uStack_116,uStack_118));
        }
        if (lStack_c0 < 0) {
          __ZdlPv(puStack_d0);
        }
        if ((char)bStack_e9 < '\0') {
          __ZdlPv(pppppplStack_100);
        }
        if (cStack_d1 < '\0') {
          __ZdlPv(CONCAT35(uStack_e8._5_3_,(undefined5)uStack_e8));
        }
        lVar16 = *(long *)(*(long *)(param_1 + -0x90) + 0x960);
        if (cVar2 < '\0') {
          func_0x000107c3192c(&ppppplStack_160,pppppplVar14,pppppplVar1);
        }
        else {
          uStack_150 = uStack_78;
          uStack_14c = uStack_74;
          ppppplStack_160 = (long *****)pppppplVar14;
          ppppplStack_158 = (long *****)pppppplVar1;
          cStack_149 = cVar2;
        }
        puStack_b0 = &UNK_10dd62ad6;
        lVar16 = lVar16 + 0x210;
        pppppplStack_90 = &ppppplStack_160;
        FUN_10a71c8d8(lVar16,&ppppplStack_160,&UNK_10dd5b8f9,&pppppplStack_90,&puStack_b0);
        if (cStack_149 < '\0') {
          __ZdlPv(ppppplStack_160);
        }
        if (*(char *)(lVar16 + 0xd0) == '\x01') {
          lVar19 = *(long *)(param_1 + -0x90);
          if (lVar19 == 0) {
            plVar17 = (long *)0x118;
            __Znwm();
            plVar17[1] = 0;
            plVar17[2] = 0;
            ppppppplVar9 = (long *******)(plVar17 + 3);
            *plVar17 = (long)&PTR_FUN_110c14bc8;
            FUN_10a6f27ec(ppppppplVar9,0,3,lVar16 + 0x28);
            pppppplStack_90 = (long ******)ppppppplVar9;
            plStack_88 = plVar17;
            FUN_10a6ff650(&pppppplStack_90,plVar17 + 8,ppppppplVar9);
            FUN_10a6ff4ac(&pppppplStack_100,&pppppplStack_90);
            if (plStack_88 != (long *)0x0) {
              plVar17 = plStack_88 + 1;
              do {
                lVar19 = *plVar17;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                if (bVar4) {
                  *plVar17 = lVar19 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                plVar18 = plStack_88;
              } while (cVar3 != '\0');
              goto LAB_10a6faedc;
            }
          }
          else {
            puVar21 = *(undefined **)(lVar19 + 0x858);
            plVar17 = *(long **)(lVar19 + 0x860);
            uStack_e8._0_5_ = SUB85(puVar21,0);
            uStack_e8._5_3_ = (undefined3)((ulong)puVar21 >> 0x28);
            uStack_e0 = SUB85(plVar17,0);
            uStack_db = (undefined1)((ulong)plVar17 >> 0x28);
            uStack_da = (undefined2)((ulong)plVar17 >> 0x30);
            if (plVar17 != (long *)0x0) {
              plVar18 = plVar17 + 1;
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar4) {
                  *plVar18 = *plVar18 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            uVar10 = 0x100;
            __Znwm(0x100);
            FUN_10a6f27ec();
            puStack_d0 = puVar21;
            plStack_c8 = plVar17;
            if (plVar17 != (long *)0x0) {
              plVar18 = plVar17 + 1;
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar4) {
                  *plVar18 = *plVar18 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              plVar18 = plVar17 + 2;
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar4) {
                  *plVar18 = *plVar18 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar4) {
                  *plVar18 = *plVar18 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
            }
            puStack_b0 = puVar21;
            plStack_a8 = plVar17;
            FUN_10a720450(&pppppplStack_90,uVar10,&puStack_b0);
            FUN_10a6ff4ac(&pppppplStack_100);
            plVar17 = plStack_88;
            if (plStack_88 != (long *)0x0) {
              plVar18 = plStack_88 + 1;
              do {
                lVar19 = *plVar18;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar4) {
                  *plVar18 = lVar19 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar19 == 0) {
                (**(code **)(*plStack_88 + 0x10))(plStack_88);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
              }
            }
            if (plStack_a8 != (long *)0x0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            plVar17 = plStack_c8;
            if (plStack_c8 != (long *)0x0) {
              plVar18 = plStack_c8 + 1;
              do {
                lVar19 = *plVar18;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar4) {
                  *plVar18 = lVar19 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar19 == 0) {
                (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
              }
            }
            if ((CONCAT35(uStack_e8._5_3_,(undefined5)uStack_e8) != 0) &&
               ((long *******)pppppplStack_100 != (long *******)0x0)) {
              pppppplStack_90 = pppppplStack_100;
              plStack_88 = plStack_f8;
              if (plStack_f8 != (long *)0x0) {
                plVar17 = plStack_f8 + 1;
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                  if (bVar4) {
                    *plVar17 = *plVar17 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              FUN_10aa88c30(CONCAT35(uStack_e8._5_3_,(undefined5)uStack_e8),&pppppplStack_90);
              plVar17 = plStack_88;
              if (plStack_88 != (long *)0x0) {
                plVar18 = plStack_88 + 1;
                do {
                  lVar19 = *plVar18;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                  if (bVar4) {
                    *plVar18 = lVar19 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (lVar19 == 0) {
                  (**(code **)(*plStack_88 + 0x10))(plStack_88);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
                }
              }
            }
            plVar18 = (long *)CONCAT26(uStack_da,CONCAT15(uStack_db,uStack_e0));
            if (plVar18 != (long *)0x0) {
              plVar17 = plVar18 + 1;
              do {
                lVar19 = *plVar17;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                if (bVar4) {
                  *plVar17 = lVar19 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
LAB_10a6faedc:
              if (lVar19 == 0) {
                (**(code **)(*plVar18 + 0x10))(plVar18);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
              }
            }
          }
          if ((*(byte *)(lVar16 + 0xd0) & 1) == 0) {
LAB_10a6fb038:
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10a6fb03c);
            (*pcVar6)();
          }
          lVar19 = param_1 + 200;
          func_0x0001067e045c(lVar19,lVar16 + 0x28);
          if (lVar19 == 0) {
            if ((*(byte *)(lVar16 + 0xd0) & 1) == 0) goto LAB_10a6fb038;
            func_0x000107c2827c(param_1 + 200,lVar16 + 0x28,lVar16 + 0x28);
            FUN_10a6f8568(lVar11,&pppppplStack_100);
          }
          plVar17 = plStack_f8;
          if (plStack_f8 != (long *)0x0) {
            plVar18 = plStack_f8 + 1;
            do {
              lVar16 = *plVar18;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar4) {
                *plVar18 = lVar16 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
            }
          }
        }
        if (cVar2 < '\0') {
          __ZdlPv(pppppplVar14);
        }
        lVar20 = lVar20 + 8;
      } while (lVar20 != 0x48);
    }
    else {
      plVar17 = *(long **)(*(long *)(param_1 + 0xf0) + 0x20);
      if (plVar17 != (long *)0x0) {
        plVar18 = plVar17 + 1;
        do {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar4) {
            *plVar18 = *plVar18 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lVar20 = param_1 + 200;
      pppppplStack_90 = pppppplVar14;
      plStack_88 = plVar17;
      func_0x0001067e045c(lVar20,pppppplVar14 + 0x1d);
      if (lVar20 == 0) {
        FUN_10a6f8568(lVar11,&pppppplStack_90);
        func_0x000107c2827c(param_1 + 200,pppppplStack_90 + 0x1d,pppppplStack_90 + 0x1d);
        plVar17 = plStack_88;
      }
      if (plVar17 != (long *)0x0) {
        plVar18 = plVar17 + 1;
        do {
          lVar20 = *plVar18;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar4) {
            *plVar18 = lVar20 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
    }
  }
  return;
}



/* Entry: 10a6fb1c8; end: 10a6fb2b3;  */

void FUN_10a6fb1c8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_68;
  char cStack_51;
  char cStack_50;
  long *plStack_40;
  long *plStack_38;
  
  FUN_10a6fb2b4(&plStack_40);
  if (plStack_40 != (long *)0x0) {
    (**(code **)(*plStack_40 + 0x18))(&uStack_b8,plStack_40);
    param_1[5] = uStack_90;
    param_1[4] = uStack_98;
    param_1[7] = uStack_80;
    param_1[6] = uStack_88;
    *(undefined4 *)(param_1 + 8) = uStack_78;
    param_1[1] = uStack_b0;
    *param_1 = uStack_b8;
    param_1[3] = uStack_a0;
    param_1[2] = uStack_a8;
    if ((cStack_50 == '\x01') && (cStack_51 < '\0')) {
      __ZdlPv(uStack_68);
    }
  }
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  if (plStack_40 == (long *)0x0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



/* Entry: 10a6fb2b4; end: 10a6fb48f;  */

/* WARNING: Removing unreachable block (ram,0x00010a6fb3cc) */
/* WARNING: Removing unreachable block (ram,0x00010a6fb3d0) */
/* WARNING: Removing unreachable block (ram,0x00010a6fb3d8) */
/* WARNING: Removing unreachable block (ram,0x00010a6fb448) */
/* WARNING: Removing unreachable block (ram,0x00010a6fb44c) */
/* WARNING: Removing unreachable block (ram,0x00010a6fb454) */
/* WARNING: Removing unreachable block (ram,0x00010a6fb45c) */
/* WARNING: Removing unreachable block (ram,0x00010a6fb460) */

void FUN_10a6fb2b4(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lStack_38;
  
  if (*(long *)(param_2 + 0x230) == 0) {
    if ((((*(long *)(param_2 + 0x220) == 0) || (*(long *)(param_2 + 0x50) == 0)) ||
        (lVar4 = *(long *)(*(long *)(param_2 + 0x50) + 0x960), lVar4 == 0)) ||
       (*(char *)(lVar4 + 0x410) != '\x01')) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      plVar5 = *(long **)(param_2 + 0x228);
      if (plVar5 != (long *)0x0) {
        plVar1 = plVar5 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
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
      lStack_38 = 0;
      if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
        func_0x00010ae06f08(1,4,&UNK_10f66fb16,&UNK_10f67014d,0x341,&UNK_10f6701e7);
      }
      plVar5 = *(long **)(param_2 + 0x238);
      *(undefined8 *)(param_2 + 0x238) = 0;
      *(undefined8 *)(param_2 + 0x230) = 0;
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
        lStack_38 = *(long *)(param_2 + 0x238);
      }
      *param_1 = *(long *)(param_2 + 0x230);
      param_1[1] = lStack_38;
      if (lStack_38 != 0) {
        plVar5 = (long *)(lStack_38 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
  }
  else {
    lVar4 = *(long *)(param_2 + 0x238);
    *param_1 = *(long *)(param_2 + 0x230);
    param_1[1] = lVar4;
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  return;
}



/* Entry: 10a6fb490; end: 10a6fb62b;  */

void FUN_10a6fb490(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  uint uVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  uint uStack_78;
  undefined8 uStack_68;
  char cStack_51;
  char cStack_50;
  long *plStack_40;
  long *plStack_38;
  
  lVar7 = *(long *)(*(long *)(param_2 + 0x50) + 0x960);
  __ZNSt3__15mutex4lockEv(lVar7 + 0x1c0);
  plVar3 = *(long **)(lVar7 + 0x208);
  if ((plVar3 == (long *)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_38 = plVar3, plVar3 == (long *)0x0)) {
    __ZNSt3__15mutex6unlockEv(lVar7 + 0x1c0);
  }
  else {
    plVar5 = *(long **)(lVar7 + 0x200);
    plStack_40 = plVar5;
    __ZNSt3__15mutex6unlockEv(lVar7 + 0x1c0);
    if (plVar5 == (long *)0x0) {
      uVar4 = 1;
    }
    else {
      (**(code **)(*plVar5 + 0x18))(&uStack_b8,plVar5);
      uVar6 = uStack_78 & 0xff;
      if (uVar6 == 1) {
        if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
          func_0x00010ae06f08(1,4,&UNK_10f66fb16,&UNK_10f670098,0x30f,&UNK_10f670104);
        }
        uVar4 = 0;
        param_1[5] = uStack_90;
        param_1[4] = uStack_98;
        param_1[7] = uStack_80;
        param_1[6] = uStack_88;
        *(uint *)(param_1 + 8) = uStack_78;
        param_1[1] = uStack_b0;
        *param_1 = uStack_b8;
        param_1[3] = uStack_a0;
        param_1[2] = uStack_a8;
      }
      else {
        uVar4 = 1;
      }
      if ((cStack_50 == '\x01') && (cStack_51 < '\0')) {
        uVar4 = uVar6 ^ 1;
        __ZdlPv(uStack_68);
      }
    }
    plVar5 = plVar3 + 1;
    do {
      lVar7 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      uVar4 = uVar4 & 1;
    }
    if (uVar4 == 0) {
      return;
    }
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 10a6fb62c; end: 10a6fb767;  */

void FUN_10a6fb62c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_40 [8];
  long *plStack_38;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  func_0x00010a6fb6ec(param_1 + 0x220);
  FUN_10a6fb2b4(auStack_30,param_1);
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
    if (lVar4 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  FUN_10a6fb768(auStack_40,param_1);
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_38);
      return;
    }
  }
  return;
}



/* Entry: 10a6fb768; end: 10a6fb8f7;  */

void FUN_10a6fb768(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  if (*(long *)(param_2 + 0x240) == 0) {
    lStack_50 = *(long *)(param_2 + 0x220);
    if (lStack_50 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      uVar4 = *(undefined8 *)(param_2 + 0x50);
      plVar6 = *(long **)(param_2 + 0x228);
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
      }
      plStack_48 = plVar6;
      FUN_10a6f4ee0(&uStack_40,uVar4,&lStack_50);
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
      if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
        func_0x00010ae06f08(1,4,&UNK_10f66fb16,&UNK_10f670224,0x353,&UNK_10f6702ac);
      }
      FUN_10a6eb990(param_2 + 0x240,uStack_40,plStack_38);
      lVar5 = *(long *)(param_2 + 0x248);
      lVar7 = *(long *)(param_2 + 0x240);
      param_1[1] = *(long *)(param_2 + 0x248);
      *param_1 = lVar7;
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (plStack_38 != (long *)0x0) {
        plVar6 = plStack_38 + 1;
        do {
          lVar5 = *plVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
        }
      }
    }
  }
  else {
    lVar5 = *(long *)(param_2 + 0x248);
    *param_1 = *(long *)(param_2 + 0x240);
    param_1[1] = lVar5;
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  return;
}



/* Entry: 10a6fb8f8; end: 10a6fb95f;  */

bool FUN_10a6fb8f8(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_30;
  long *plStack_28;
  
  FUN_10a6fb2b4(&lStack_30);
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
    if (lVar4 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  return lStack_30 != 0;
}



/* Entry: 10a6fb960; end: 10a6fba1b;  */

void FUN_10a6fb960(undefined8 *param_1,long param_2,int param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_48;
  long *plStack_40;
  undefined1 uStack_31;
  
  FUN_10a6fb2b4(&lStack_48);
  if ((param_3 == 0) || (lStack_48 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    uStack_31 = 7;
    FUN_10a6f3b28(param_1,*(undefined8 *)(param_2 + 0x50),&uStack_31,&UNK_10f66f9cb);
  }
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
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
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
    }
  }
  return;
}



/* Entry: 10a6fba1c; end: 10a6fba93;  */

long * FUN_10a6fba1c(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  FUN_10a5ca2e0(param_1 + 3);
  FUN_10a0772f0(param_1 + 1);
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



/* Entry: 10a6fba94; end: 10a6fbc67;  */

void FUN_10a6fba94(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined1 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  
  puVar6 = (undefined8 *)0xd0;
  __Znwm();
  uVar2 = *param_4;
  puVar9 = puVar6 + 0x11;
  *puVar9 = param_4[1];
  *puVar6 = FUN_10a73db88;
  puVar6[1] = FUN_10a73e108;
  *(undefined1 *)(puVar6 + 0x19) = param_5;
  puVar6[0x16] = param_2;
  puVar6[0x17] = param_3;
  puVar6[0x18] = uVar2;
  *(undefined8 *)((long)puVar6 + 0x8f) = *(undefined8 *)((long)param_4 + 0xf);
  *(undefined1 *)((long)puVar6 + 0xc9) = *(undefined1 *)((long)param_4 + 0x17);
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  FUN_10a724b04(puVar6 + 2);
  lVar8 = puVar6[7];
  if (lVar8 != 0) {
    plVar1 = (long *)(lVar8 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lVar8;
  puVar6[9] = 0;
  *(undefined1 *)((long)puVar6 + 0x97) = 0;
  puVar7 = puVar6 + 9;
  FUN_10a6f4dfc(puVar7,puVar6);
  if (((ulong)puVar7 & 1) != 0) {
    return;
  }
  puVar6[0x13] = puVar6[9];
  puVar6[0xc] = puVar6[0x18];
  puVar6[0xd] = *puVar9;
  *(undefined8 *)((long)puVar6 + 0x6f) = *(undefined8 *)((long)puVar6 + 0x8f);
  *(undefined1 *)((long)puVar6 + 0x77) = *(undefined1 *)((long)puVar6 + 0xc9);
  *puVar9 = 0;
  *(undefined8 *)((long)puVar6 + 0x8f) = 0;
  FUN_10a00946c(&UNK_10f67b849);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a6fbba4);
  (*pcVar5)();
}



/* Entry: 10a6fbc68; end: 10a6fbca7;  */

void FUN_10a6fbc68(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  
  plVar6 = (long *)(param_1 + 0x30);
  func_0x00010a727dd8(*plVar6);
  plVar4 = (long *)*plVar6;
  *plVar6 = 0;
  if (plVar4 == (long *)0x0) {
    return;
  }
  puVar1 = (ulong *)(plVar4 + 1);
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar5 - 0x200000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (uVar5 >> 0x21 == 1) {
    FUN_109d1b3c4(plVar4,1,plVar6);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a6fbca8; end: 10a6fbcab;  */

undefined8 * FUN_10a6fbca8(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  *param_1 = &PTR_FUN_110c116a8;
  param_1[2] = &PTR_FUN_110c116f8;
  param_1[0x1c] = &PTR_FUN_110c11770;
  if (param_1[0x1b] != 0) {
    func_0x0001092b4274();
  }
  plVar4 = (long *)param_1[0x1a];
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
  if (((*(char *)(param_1 + 0x19) == '\x01') && (*(char *)(param_1 + 0x17) == '\x01')) &&
     (*(char *)((long)param_1 + 0xb7) < '\0')) {
    __ZdlPv(param_1[0x14]);
  }
  func_0x00010a711e00(param_1 + 8);
  plVar4 = (long *)param_1[7];
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
  param_1[2] = &PTR_DAT_110c12840;
  param_1[0x1c] = &PTR_FUN_110c128b8;
  func_0x00010a004e5c(param_1 + 5);
  func_0x00010a004e04(param_1 + 3);
  return param_1;
}



/* Entry: 10a6fbcac; end: 10a6fbcbf;  */

void FUN_10a6fbcac(void)

{
  FUN_10a707e10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6fbcc0; end: 10a6fbcc7;  */

undefined8 * FUN_10a6fbcc0(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  param_1[-2] = &PTR_FUN_110c116a8;
  *param_1 = &PTR_FUN_110c116f8;
  param_1[0x1a] = &PTR_FUN_110c11770;
  if (param_1[0x19] != 0) {
    func_0x0001092b4274();
  }
  plVar4 = (long *)param_1[0x18];
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
  if (((*(char *)(param_1 + 0x17) == '\x01') && (*(char *)(param_1 + 0x15) == '\x01')) &&
     (*(char *)((long)param_1 + 0xa7) < '\0')) {
    __ZdlPv(param_1[0x12]);
  }
  func_0x00010a711e00(param_1 + 6);
  plVar4 = (long *)param_1[5];
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
  *param_1 = &PTR_DAT_110c12840;
  param_1[0x1a] = &PTR_FUN_110c128b8;
  func_0x00010a004e5c(param_1 + 3);
  func_0x00010a004e04(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a6fbcc8; end: 10a6fbcdf;  */

void FUN_10a6fbcc8(long param_1)

{
  FUN_10a707e10(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6fbce0; end: 10a6fbcef;  */

undefined8 * FUN_10a6fbce0(long *param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  
  puVar2 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar2 = &PTR_FUN_110c116a8;
  puVar2[2] = &PTR_FUN_110c116f8;
  puVar2[0x1c] = &PTR_FUN_110c11770;
  if (puVar2[0x1b] != 0) {
    func_0x0001092b4274();
  }
  plVar5 = (long *)puVar2[0x1a];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar6 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if (((*(char *)(puVar2 + 0x19) == '\x01') && (*(char *)(puVar2 + 0x17) == '\x01')) &&
     (*(char *)((long)puVar2 + 0xb7) < '\0')) {
    __ZdlPv(puVar2[0x14]);
  }
  func_0x00010a711e00(puVar2 + 8);
  plVar5 = (long *)puVar2[7];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar6 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  puVar2[2] = &PTR_DAT_110c12840;
  puVar2[0x1c] = &PTR_FUN_110c128b8;
  func_0x00010a004e5c(puVar2 + 5);
  func_0x00010a004e04(puVar2 + 3);
  return puVar2;
}



/* Entry: 10a6fbcf0; end: 10a6fbd1f;  */

void FUN_10a6fbcf0(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a707e10((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a6fbd20; end: 10a6fbd93;  */

long FUN_10a6fbd20(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a6fbd94; end: 10a6fbf67;  */

undefined8 * FUN_10a6fbd94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c12538;
  param_1[2] = &PTR_DAT_110c125d8;
  param_1[7] = &PTR_DAT_110c12630;
  if (*(char *)((long)param_1 + 0xff) < '\0') {
    __ZdlPv(param_1[0x1d]);
  }
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a6fbf68; end: 10a6fbf77;  */

undefined8 FUN_10a6fbf68(void)

{
  return 1;
}



/* Entry: 10a6fbf78; end: 10a6fbfbb;  */

undefined1 * FUN_10a6fbf78(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  FUN_10a6fbfbc();
  return param_1;
}



/* Entry: 10a6fbfbc; end: 10a6fc01b;  */

void FUN_10a6fbfbc(long param_1,long param_2)

{
  uint uVar1;
  long lStack_38;
  
  FUN_10a6fc01c();
  uVar1 = *(uint *)(param_2 + 0x18);
  if (uVar1 != 0xffffffff) {
    lStack_38 = param_1;
    (*(code *)(&PTR_DAT_110c13230)[uVar1])(&lStack_38,param_2);
    *(uint *)(param_1 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 10a6fc01c; end: 10a6fc06f;  */

void FUN_10a6fc01c(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110c13218)[*(uint *)(param_1 + 0x18)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return;
}



/* Entry: 10a6fc070; end: 10a6fc0e7;  */

void FUN_10a6fc070(void)

{
  return;
}



/* Entry: 10a6fc0e8; end: 10a6fc1a7;  */

void FUN_10a6fc0e8(long param_1,undefined8 *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  
  plVar7 = (long *)(param_1 + 0x30);
  lVar8 = *plVar7;
  plVar4 = (long *)(lVar8 + 0x10);
  do {
    lVar6 = *plVar4;
    if (lVar6 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (*(char *)(lVar8 + 0xa8) == '\x01') {
          FUN_10a37985c(lVar8 + 0x98);
        }
        uVar9 = *param_2;
        *(undefined8 *)(lVar8 + 0xa0) = param_2[1];
        *(undefined8 *)(lVar8 + 0x98) = uVar9;
        *param_2 = 0;
        param_2[1] = 0;
        *(undefined1 *)(lVar8 + 0xa8) = 1;
        *(undefined8 *)(lVar8 + 0x10) = 2;
        FUN_109d1b4dc(lVar8 + 0x18);
        goto LAB_10a6fc178;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar6 >> 1 & 1) != 0) {
LAB_10a6fc178:
      plVar4 = (long *)*plVar7;
      *plVar7 = 0;
      if (plVar4 == (long *)0x0) {
        return;
      }
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 0x200000000;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 >> 0x21 == 1) {
        FUN_109d1b3c4(plVar4,1,plVar7);
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 8))(plVar4);
          return;
        }
      }
      return;
    }
  } while( true );
}



/* Entry: 10a6fc1a8; end: 10a6fc2ef;  */

void FUN_10a6fc1a8(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined1 auStack_80 [40];
  long lStack_58;
  long lStack_40;
  long *plStack_38;
  
  FUN_10a6fc2f0(auStack_80);
  if (lStack_58 != 0) {
    plVar1 = (long *)(lStack_58 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lStack_58;
  if (*param_2 == 0) {
    FUN_10a00946c(&UNK_10f6703f2);
  }
  else if (*(long *)(param_2[2] + 0x888) == 0) {
    FUN_10a00946c(&UNK_10f67041e);
  }
  else {
    FUN_10a76dec8(&lStack_40,*(undefined8 *)(*(long *)(param_2[2] + 0x888) + 0x40));
    if (lStack_40 != 0) {
      FUN_10a6fc0e8(auStack_80,&lStack_40);
      if (plStack_38 != (long *)0x0) {
        plVar1 = plStack_38 + 1;
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
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
        }
      }
      func_0x000109d1a1d0(auStack_80);
      return;
    }
    FUN_10a00946c(&UNK_10f670441);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a6fc2a8);
  (*pcVar4)();
}



/* Entry: 10a6fc2f0; end: 10a6fc38f;  */

undefined8 * FUN_10a6fc2f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  puVar1[2] = 0;
  puVar1[1] = 0x200000006;
  *(undefined2 *)(puVar1 + 3) = 4;
  uVar3 = 0;
  uVar4 = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = puVar1 + 3;
  puVar1[0x12] = 0;
  *puVar1 = &PTR_FUN_110c13258;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x15) = 0;
  ppuVar2 = &PTR___tlv_bootstrap_11340dd98;
  (*(code *)PTR___tlv_bootstrap_11340dd98)();
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[4] = 0;
  FUN_109d18960(param_1,*ppuVar2,0);
  param_1[5] = puVar1;
  param_1[6] = puVar1;
  return param_1;
}


