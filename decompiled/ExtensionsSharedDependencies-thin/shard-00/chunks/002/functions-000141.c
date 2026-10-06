/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0037b5c0; end: 0037b727;  */

void FUN_0037b5c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                 long param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != param_3) {
    if ((char)*(byte *)((long)param_2 + 0x17) < '\0') {
      uVar1 = param_2[1];
    }
    else {
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    puVar6 = param_2 + 3;
    for (puVar3 = puVar6; puVar3 != param_3; puVar3 = puVar3 + 3) {
      if ((char)*(byte *)((long)puVar3 + 0x17) < '\0') {
        uVar4 = puVar3[1];
      }
      else {
        uVar4 = (ulong)*(byte *)((long)puVar3 + 0x17);
      }
      uVar1 = uVar1 + param_5 + uVar4;
    }
    if (uVar1 != 0) {
      FUN_003606f8(param_1);
      puVar3 = (undefined8 *)*param_1;
      if (-1 < *(char *)((long)param_1 + 0x17)) {
        puVar3 = param_1;
      }
      if ((char)*(byte *)((long)param_2 + 0x17) < '\0') {
        puVar2 = (undefined8 *)*param_2;
        uVar1 = param_2[1];
      }
      else {
        uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
        puVar2 = param_2;
      }
      _memcpy(puVar3,puVar2,uVar1);
      if ((char)*(byte *)((long)param_2 + 0x17) < '\0') {
        uVar1 = param_2[1];
      }
      else {
        uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
      }
      if (puVar6 != param_3) {
        lVar5 = (long)puVar3 + uVar1;
        do {
          _memcpy(lVar5,param_4,param_5);
          if ((char)*(byte *)((long)puVar6 + 0x17) < '\0') {
            puVar3 = (undefined8 *)*puVar6;
            uVar1 = puVar6[1];
          }
          else {
            uVar1 = (ulong)*(byte *)((long)puVar6 + 0x17);
            puVar3 = puVar6;
          }
          _memcpy(lVar5 + param_5,puVar3,uVar1);
          if ((char)*(byte *)((long)puVar6 + 0x17) < '\0') {
            uVar1 = puVar6[1];
          }
          else {
            uVar1 = (ulong)*(byte *)((long)puVar6 + 0x17);
          }
          lVar5 = lVar5 + param_5 + uVar1;
          puVar6 = puVar6 + 3;
        } while (puVar6 != param_3);
      }
    }
  }
  return;
}



/* Entry: 0037b728; end: 0037b767;  */

void FUN_0037b728(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_0037b768();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 0037b768; end: 0037b7b3;  */

/* WARNING: Removing unreachable block (ram,0x0037b790) */

void FUN_0037b768(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x18) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 0037b7b4; end: 0037b7bb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_0037b7b4(long param_1,long param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined *extraout_x8;
  undefined *extraout_x8_00;
  undefined *extraout_x8_01;
  undefined *extraout_x8_02;
  long *plVar12;
  long lVar13;
  int *piVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uStack_160;
  ulong uStack_158;
  long lStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  long alStack_130 [4];
  undefined8 uStack_110;
  long lStack_78;
  long lStack_70;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuVar6 = &PTR___tlv_bootstrap_00b2c390;
  (*(code *)PTR___tlv_bootstrap_00b2c390)(*(undefined8 *)(lVar5 + 0x20));
  puVar18 = *ppuVar6;
  *ppuVar6 = extraout_x8;
  ppuVar7 = &PTR___tlv_bootstrap_00b2c3a8;
  (*(code *)PTR___tlv_bootstrap_00b2c3a8)(*(undefined8 *)(lVar5 + 0x40));
  puVar19 = *ppuVar7;
  *ppuVar7 = extraout_x8_00;
  ppuVar8 = &PTR___tlv_bootstrap_00b2c3c0;
  (*(code *)PTR___tlv_bootstrap_00b2c3c0)(*(undefined8 *)(lVar5 + 0x48));
  puVar20 = *ppuVar8;
  *ppuVar8 = extraout_x8_01;
  ppuVar9 = &PTR___tlv_bootstrap_00b2c3d8;
  (*(code *)PTR___tlv_bootstrap_00b2c3d8)(lVar5 + 0x38);
  puVar21 = *ppuVar9;
  *ppuVar9 = extraout_x8_02;
  *(undefined8 *)(param_2 + 0x38) = 1;
  alStack_130[1] = 0;
  uStack_110 = 0;
  plVar12 = *(long **)(lVar5 + 0x10);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar3) {
      *plVar12 = *plVar12 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  bVar1 = *(byte *)(param_2 + 0x10);
  uVar11 = (uint)bVar1;
  alStack_130[0] = param_2;
  lStack_78 = lVar5;
  if ((bVar1 >> 6 & 1) == 0) {
    if (((bVar1 >> 3 & 1) == 0) ||
       (puVar15 = *(undefined4 **)(lVar5 + 0x70), puVar15 == (undefined4 *)0x0)) goto LAB_003acf78;
    uVar16 = 3;
    switch(*puVar15) {
    case 1:
      uVar16 = 4;
    case 0:
      *puVar15 = uVar16;
      break;
    case 2:
      goto LAB_003acf78;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      goto code_r0x003ad260;
    }
    lVar13 = *(long *)(param_2 + 8);
    *(undefined8 *)(puVar15 + 0xc) = *(undefined8 *)(lVar13 + 0x38);
    *(undefined8 *)(puVar15 + 2) = *(undefined8 *)(lVar13 + 0x48);
    *(code **)(puVar15 + 6) = FUN_003afc08;
    *(long *)(puVar15 + 8) = lVar5;
    *(undefined8 *)(puVar15 + 10) = 0;
    *(long *)(*(long *)(param_2 + 8) + 0x48) = *(long *)(lVar5 + 0x70) + 0x10;
    uVar11 = (uint)*(byte *)(param_2 + 0x10);
LAB_003acf78:
    if ((uVar11 & 1) == 0) {
      if ((uVar11 >> 5 & 1) == 0) {
        uVar17 = *(ulong *)(lVar5 + 0xa0);
        if (uVar17 != 0) {
          if ((uVar17 & 1) != 0) {
            piVar14 = (int *)(uVar17 - 1);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
              if (bVar3) {
                *piVar14 = *piVar14 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          uStack_158 = uVar17;
          FUN_003ac8fc(alStack_130,&uStack_158,alStack_130 + 1);
          if ((uVar17 & 1) != 0) {
            FUN_0055293c(uVar17);
          }
        }
      }
      else if (*(int *)(lVar5 + 0xac) == 5) {
        uVar17 = *(ulong *)(lVar5 + 0xa0);
        if ((uVar17 & 1) != 0) {
          piVar14 = (int *)(uVar17 - 1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
            if (bVar3) {
              *piVar14 = *piVar14 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uStack_148 = uVar17;
        FUN_003ac8fc(alStack_130,&uStack_148,alStack_130 + 1);
        if ((uVar17 & 1) != 0) {
          FUN_0055293c(uVar17);
        }
      }
      else {
        if (*(int *)(lVar5 + 0xac) != 0) {
          uVar10 = 0x24a;
          goto LAB_003ad208;
        }
        *(undefined4 *)(lVar5 + 0xac) = 2;
        if (*(long *)(param_2 + 0x38) != 0) {
          *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 1;
        }
        lVar13 = *(long *)(param_2 + 8);
        *(undefined8 *)(lVar5 + 0x68) = *(undefined8 *)(lVar13 + 0x80);
        *(undefined8 *)(lVar5 + 0x78) = *(undefined8 *)(lVar13 + 0x90);
        *(long *)(lVar13 + 0x90) = lVar5 + 0x80;
        lStack_150 = param_2;
        FUN_003ac6f4(&lStack_150);
      }
    }
    else if ((*(int *)(lVar5 + 0xa8) == 3) || (*(int *)(lVar5 + 0xac) == 5)) {
      uVar17 = *(ulong *)(lVar5 + 0xa0);
      if ((uVar17 & 1) != 0) {
        piVar14 = (int *)(uVar17 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar3) {
            *piVar14 = *piVar14 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_140 = uVar17;
      FUN_003ac8fc(alStack_130,&uStack_140,alStack_130 + 1);
      if ((uVar17 & 1) != 0) {
        FUN_0055293c(uVar17);
      }
    }
    else {
      if (*(int *)(lVar5 + 0xa8) != 0) {
        uVar10 = 0x237;
LAB_003ad208:
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                     ,uVar10,2,"assertion failed: %s");
        _abort();
        goto LAB_003ad264;
      }
      *(undefined4 *)(lVar5 + 0xa8) = 1;
      if ((*(byte *)(param_2 + 0x10) >> 5 & 1) != 0) {
        if (*(int *)(lVar5 + 0xac) != 0) {
          uVar10 = 0x23c;
          goto LAB_003ad208;
        }
        *(undefined4 *)(lVar5 + 0xac) = 1;
      }
      FUN_003ac75c(lVar5 + 0x60,alStack_130);
      FUN_003ad4b8(lVar5,alStack_130 + 1);
    }
    if (alStack_130[0] != 0) {
      lVar13 = *(long *)(lVar5 + 0x10);
      func_0x003a6564(lVar13,*(long *)(lVar13 + 0x28) + -1);
      if (lVar13 == *(long *)(lVar5 + 0x18)) {
        uStack_160 = 4;
        FUN_003ac8fc(alStack_130,&uStack_160,alStack_130 + 1);
      }
      else {
LAB_003ad17c:
        FUN_003ac7b0(alStack_130,alStack_130 + 1);
      }
    }
  }
  else {
    if ((bVar1 & 0x3f) != 0) {
      uVar10 = 0x1ff;
      goto LAB_003ad208;
    }
    uVar17 = *(ulong *)(*(long *)(param_2 + 8) + 0x98);
    if ((uVar17 & 1) != 0) {
      piVar14 = (int *)(uVar17 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar3) {
          *piVar14 = *piVar14 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_138 = uVar17;
    FUN_003ad2f4(lVar5,&uStack_138);
    if ((uVar17 & 1) != 0) {
      FUN_0055293c(uVar17);
    }
    lVar13 = *(long *)(lVar5 + 0x10);
    func_0x003a6564(lVar13,*(long *)(lVar13 + 0x28) + -1);
    if (lVar13 != *(long *)(lVar5 + 0x18)) goto LAB_003ad17c;
    FUN_003ac84c(alStack_130,alStack_130 + 1);
  }
  FUN_003aca08(alStack_130 + 1);
  FUN_003ac6f4(alStack_130);
  *ppuVar9 = puVar21;
  *ppuVar8 = puVar20;
  *ppuVar7 = puVar19;
  *ppuVar6 = puVar18;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
code_r0x003ad260:
  _abort();
LAB_003ad264:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x3ad268);
  (*pcVar4)();
}



/* Entry: 0037b7bc; end: 0037b8bb;  */

void FUN_0037b7bc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long alStack_68 [3];
  long *plStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar3 = *(long **)(param_2 + 8);
  FUN_0033f548(alStack_68,param_5);
  (**(code **)(*plVar3 + 8))(param_1,plVar3,param_3,param_4,alStack_68);
  if (plStack_50 == alStack_68) {
    lVar2 = 4;
    plVar3 = alStack_68;
LAB_0037b844:
    (**(code **)(*plVar3 + lVar2 * 8))();
  }
  else {
    plVar3 = plStack_50;
    if (plStack_50 != (long *)0x0) {
      lVar2 = 5;
      goto LAB_0037b844;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (plStack_50 == alStack_68) {
    lVar2 = 4;
    plStack_50 = alStack_68;
  }
  else {
    if (plStack_50 == (long *)0x0) goto LAB_0037b8b4;
    lVar2 = 5;
  }
  (**(code **)(*plStack_50 + lVar2 * 8))();
LAB_0037b8b4:
  __Unwind_Resume();
  plVar1 = (long *)plVar3[1];
  (**(code **)(*plVar1 + 0x10))();
  if (((ulong)plVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003a6a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(plVar3[2] + 0x10))(plVar3 + 2,param_3);
  return;
}



/* Entry: 0037b8bc; end: 0037b947;  */

void FUN_0037b8bc(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x10))();
  if (((ulong)plVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003a6a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))((long *)(param_1 + 0x10),param_2);
  return;
}



/* Entry: 0037b948; end: 0037b94b;  */

undefined8 * FUN_0037b948(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = &PTR_FUN_009df750;
  param_1[1] = &PTR_FUN_009df7a8;
  if (param_1[0x16] == 0) {
    if ((param_1[0x14] & 1) != 0) {
      FUN_0055293c();
    }
    FUN_003ac6f4(param_1 + 0xc);
    (**(code **)(*(long *)param_1[0xb] + 8))();
    *param_1 = &PTR_FUN_009df6d8;
    param_1[1] = &PTR_FUN_009df730;
    return param_1;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
               ,0x1e5,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3acdd4);
  (*pcVar1)();
}



/* Entry: 0037b94c; end: 0037b95f;  */

void FUN_0037b94c(void)

{
  FUN_003acd30();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0037b960; end: 0037b967;  */

void FUN_0037b960(long param_1,long param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined1 uStack_41;
  undefined1 **ppuStack_40;
  code *pcStack_38;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  lVar4 = *(long *)(param_1 + 0x10);
  plVar6 = (long *)(lVar4 + 0x48);
  do {
    lVar5 = *plVar6;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 == 0) {
    return;
  }
  func_0x00771390();
  pcStack_18 = FUN_0033f680;
  plVar6 = *(long **)(lVar4 + 0x10);
  puVar3 = (undefined8 *)plVar6[7];
  plVar6[7] = 0;
  puStack_20 = &stack0xfffffffffffffff0;
  if (puVar3 != (undefined8 *)0x0) {
    puStack_20 = &stack0xfffffffffffffff0;
    (**(code **)*puVar3)();
  }
  (**(code **)(*plVar6 + 8))(plVar6);
  if (param_3 == 0) {
    return;
  }
  func_0x007713c4();
  pcStack_38 = FUN_0033f6d0;
  ppuStack_40 = &puStack_20;
  FUN_0033f6f8(&uStack_41,plVar6,param_2);
  return;
}



/* Entry: 0037b968; end: 0037b9b7;  */

void FUN_0037b968(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined1 uStack_31;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  plVar2 = *(long **)(param_1 + 0x10);
  puVar1 = (undefined8 *)plVar2[7];
  plVar2[7] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  (**(code **)(*plVar2 + 8))(plVar2);
  if (param_3 == 0) {
    return;
  }
  func_0x007724d4();
  pcStack_28 = FUN_0037b9b8;
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_0037b9e0(&uStack_31,plVar2,param_2);
  return;
}



/* Entry: 0037b9b8; end: 0037b9df;  */

void FUN_0037b9b8(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_0037b9e0(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 0037b9e0; end: 0037bb73;  */

ulong * FUN_0037b9e0(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  ulong *puVar9;
  int iVar10;
  undefined8 *puVar11;
  int *piVar12;
  long lVar13;
  ulong uStack_b8;
  undefined1 auStack_b0 [8];
  long *plStack_a8;
  ulong auStack_a0 [2];
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  long lStack_38;
  
  iVar10 = (int)param_3;
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  if (*(int *)(param_4 + 0x14) != 0) {
    func_0x00772508();
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x37bb2c);
    (*pcVar8)();
  }
  FUN_003a1d70(auStack_b0,*(undefined8 *)(param_4 + 8));
  FUN_0037af90(auStack_a0,auStack_b0);
  if (plStack_a8 != (long *)0x0) {
    plVar1 = plStack_a8 + 1;
    do {
      lVar13 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
    }
  }
  uVar7 = uStack_70;
  uVar6 = uStack_78;
  uVar5 = uStack_80;
  uVar4 = uStack_88;
  puVar11 = *(undefined8 **)(param_3 + 8);
  if (auStack_a0[0] == 0) {
    *puVar11 = &PTR_FUN_009de298;
    *(undefined4 *)(puVar11 + 1) = uStack_90;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    puVar11[3] = uVar5;
    puVar11[2] = uVar4;
    puVar11[5] = uVar7;
    puVar11[4] = uVar6;
    *(undefined1 *)(puVar11 + 6) = uStack_68;
    *param_1 = 0;
  }
  else {
    *puVar11 = &PTR_FUN_009db778;
    uStack_b8 = auStack_a0[0];
    if ((auStack_a0[0] & 1) != 0) {
      piVar12 = (int *)(auStack_a0[0] - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar3) {
          *piVar12 = *piVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_003fbec4(param_1,&uStack_b8);
    if ((uStack_b8 & 1) != 0) {
      FUN_0055293c();
    }
  }
  puVar9 = auStack_a0;
  FUN_0037bb74();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return puVar9;
  }
  ___stack_chk_fail();
  if (iVar10 != 0) {
    func_0x0040cf10();
    FUN_0033c494(&uStack_b8);
    FUN_0037bb74(auStack_a0);
  }
  __Unwind_Resume();
  if (*puVar9 == 0) {
    puVar9[1] = (ulong)&PTR_FUN_009de298;
    FUN_0034b418(puVar9 + 3);
  }
  else if ((*puVar9 & 1) != 0) {
    FUN_0055293c();
  }
  return puVar9;
}



/* Entry: 0037bb74; end: 0037bbbf;  */

ulong * FUN_0037bb74(ulong *param_1)

{
  if (*param_1 == 0) {
    param_1[1] = (ulong)&PTR_FUN_009de298;
    FUN_0034b418(param_1 + 3);
  }
  else if ((*param_1 & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 0037bbc0; end: 0037bbdf;  */

void FUN_0037bbc0(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0037bbcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_2 + 8))();
  return;
}



/* Entry: 0037bbe0; end: 0037bc27;  */

void FUN_0037bbe0(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x18))();
  if (((ulong)plVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003a6a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x58))((long *)(param_1 + 0x10),param_2);
  return;
}



/* Entry: 0037bc28; end: 0037be23;  */

undefined1  [16] FUN_0037bc28(long *param_1,undefined1 *param_2)

{
  byte bVar1;
  long *plVar2;
  long *plVar3;
  long **pplVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long unaff_x21;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  long *plStack_50;
  undefined1 *puStack_48;
  long lStack_40;
  uint uStack_38;
  
  pplVar4 = &plStack_50;
  bVar1 = *(byte *)(param_1 + 1);
  plVar2 = param_1;
  if ((bVar1 >> 2 & 1) == 0) {
    lStack_40 = 0;
    uStack_38 = 1;
    *(byte *)(param_1 + 1) = bVar1 | 4;
    plVar2 = &lStack_40;
    FUN_0033e1ac();
    bVar1 = *(byte *)(param_1 + 1);
  }
  if ((bVar1 >> 1 & 1) == 0) {
    plVar7 = param_1 + 2;
    lVar6 = unaff_x21;
    if ((char)*plVar7 != '\x01') {
      if ((char)*plVar7 == '\0') {
        plVar3 = (long *)param_1[3];
        (**(code **)*plVar3)();
        plVar2 = &lStack_40;
        plStack_50 = plVar3;
        puStack_48 = param_2;
        FUN_00378628(plVar2,&plStack_50);
        lVar6 = lStack_40;
        param_2 = (undefined1 *)(ulong)uStack_38;
        if (uStack_38 != 0) {
          if (uStack_38 != 1) goto FUN_0037aee0;
          (**(code **)(*(long *)param_1[3] + 8))();
          param_1[3] = lVar6;
          *(char *)(param_1 + 2) = '\x01';
          goto LAB_0037bcd0;
        }
        goto LAB_0037bcdc;
      }
LAB_0037be04:
      _abort();
FUN_0037aee0:
      FUN_0033e178();
      FUN_0033e1ac(&plStack_50);
      __Unwind_Resume();
      func_0x0040cf10();
      if ((*(byte *)(plVar2 + 1) >> 1 & 1) == 0) {
        FUN_0037af40(plVar2 + 2);
      }
      FUN_0037af18(plVar2 + 4);
      auVar8._8_8_ = param_2;
      auVar8._0_8_ = plVar2 + 1;
      return auVar8;
    }
LAB_0037bcd0:
    plVar2 = plVar7;
    FUN_0037be2c();
    unaff_x21 = lVar6;
LAB_0037bcdc:
    plStack_50 = plVar2;
    puStack_48 = param_2;
    FUN_00378628(&lStack_40,&plStack_50);
    lVar6 = lStack_40;
    if (uStack_38 != 1) {
LAB_0037bd24:
      bVar1 = *(byte *)(param_1 + 1);
      param_2 = (undefined1 *)pplVar4;
      goto LAB_0037bd28;
    }
    unaff_x21 = lStack_40;
    if (((*(byte *)(lStack_40 + 1) >> 2 & 1) != 0) && (*(int *)(lStack_40 + 0x188) == 0)) {
      *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 2;
      FUN_0037af40(plVar7);
      param_1[2] = lVar6;
      unaff_x21 = lVar6;
      goto LAB_0037bd24;
    }
  }
  else {
LAB_0037bd28:
    if ((bVar1 & 1) == 0) {
      plVar2 = param_1 + 4;
      if ((char)*plVar2 == '\x01') {
LAB_0037bd5c:
        FUN_0037c088(&lStack_40);
      }
      else {
        if ((char)*plVar2 != '\0') goto LAB_0037be04;
        lVar6 = param_1[5];
        if (*(char *)(lVar6 + 8) != '\0') {
          param_1[5] = param_1[6];
          param_1[6] = lVar6;
          *(char *)(param_1 + 4) = '\x01';
          goto LAB_0037bd5c;
        }
        *(undefined1 *)(lVar6 + 9) = 1;
        uStack_38 = 0;
      }
      FUN_0033dc34(&plStack_50,&lStack_40);
      FUN_0033e1ac(&lStack_40);
      if ((int)puStack_48 == 1) {
        if (plStack_50 != (long *)0x0) {
          FUN_0037849c(&lStack_40,&plStack_50);
          unaff_x21 = lStack_40;
          FUN_0033e1ac(&plStack_50);
          goto LAB_0037bde0;
        }
        *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 1;
      }
      FUN_0033e1ac(&plStack_50);
      bVar1 = *(byte *)(param_1 + 1);
    }
    if (bVar1 != 7) {
      uVar5 = 0;
      goto LAB_0037bdec;
    }
    unaff_x21 = param_1[2];
    param_1[2] = 0;
  }
LAB_0037bde0:
  uVar5 = 1;
LAB_0037bdec:
  auVar9._8_8_ = uVar5;
  auVar9._0_8_ = unaff_x21;
  return auVar9;
}



/* Entry: 0037be24; end: 0037be2b;  */

byte * FUN_0037be24(long param_1)

{
  if ((*(byte *)(param_1 + 8) >> 1 & 1) == 0) {
    FUN_0037af40(param_1 + 0x10);
  }
  FUN_0037af18(param_1 + 0x20);
  return (byte *)(param_1 + 8);
}



/* Entry: 0037be2c; end: 0037beaf;  */

undefined1  [16] FUN_0037be2c(long param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  ulong uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_0037beb0(&uStack_30,uVar1);
  if ((uStack_30 != 0) &&
     (FUN_0037849c(&uStack_28,&uStack_30), uVar1 = uStack_28, (uStack_30 & 1) != 0)) {
    FUN_0055293c();
    uVar1 = uStack_28;
  }
  uStack_28 = uVar1;
  auVar2._8_8_ = 1;
  auVar2._0_8_ = uStack_28;
  return auVar2;
}



/* Entry: 0037beb0; end: 0037c087;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_0037beb0(uint *******param_1,uint *******param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  uint *******pppppppuVar3;
  uint *******pppppppuVar4;
  ulong uVar5;
  uint uVar6;
  uint *****pppppuVar7;
  uint ******ppppppuVar8;
  undefined8 *extraout_x8;
  uint *****pppppuVar9;
  uint ******ppppppuVar10;
  uint ******ppppppuVar11;
  uint ******ppppppuVar12;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined8 uStack_138;
  uint *******pppppppuStack_f8;
  ulong uStack_f0;
  byte bStack_e1;
  uint *******pppppppuStack_e0;
  uint ******ppppppuStack_d8;
  uint ******ppppppuStack_d0;
  uint ******ppppppuStack_c8;
  undefined1 *puStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [32];
  uint ******ppppppuStack_90;
  uint ******ppppppuStack_88;
  uint ******ppppppuStack_80;
  uint ******ppppppuStack_78;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar6 = *(uint *)param_2;
  pppppppuVar4 = param_2;
  if ((uVar6 >> 3 & 1) != 0) {
    if (((uVar6 >> 10 & 1) == 0) &&
       (pppppppuVar4 = (uint *******)(ulong)*(uint *)((long)param_2 + 0x1a4),
       *(uint *)((long)param_2 + 0x1a4) != 200)) {
      FUN_003ff434();
      ppppppuStack_90 = (uint ******)0x8c36c0;
      ppppppuStack_88 = (uint ******)0x23;
      uVar5 = (ulong)*(uint *)((long)param_2 + 0x1a4);
      func_0x005748b4(uVar5,auStack_b0);
      lStack_b8 = uVar5 - (long)auStack_b0;
      puStack_c0 = auStack_b0;
      FUN_00575d30(&pppppppuStack_f8,&ppppppuStack_90,&puStack_c0);
      pppppppuVar3 = pppppppuStack_f8;
      if (-1 < (char)bStack_e1) {
        uStack_f0 = (ulong)bStack_e1;
        pppppppuVar3 = (uint *******)&pppppppuStack_f8;
      }
      FUN_00552acc(param_1,pppppppuVar4,pppppppuVar3,uStack_f0);
      param_3 = (int)pppppppuVar4;
      if ((char)bStack_e1 < '\0') {
        param_1 = pppppppuStack_f8;
        __ZdlPv();
      }
      goto LAB_0037bf90;
    }
    uVar6 = uVar6 & 0xfffffff7;
    *(uint *)param_2 = uVar6;
  }
  if ((uVar6 >> 0xf & 1) != 0) {
    pppppppuVar4 = param_2 + 0x26;
    ppppppuStack_d8 = param_2[0x27];
    pppppppuStack_e0 = (uint *******)*pppppppuVar4;
    ppppppuStack_c8 = param_2[0x29];
    ppppppuStack_d0 = param_2[0x28];
    param_2[0x27] = (uint ******)0x0;
    *pppppppuVar4 = (uint ******)0x0;
    param_2[0x29] = (uint ******)0x0;
    param_2[0x28] = (uint ******)0x0;
    FUN_003ebc04(&ppppppuStack_90,&pppppppuStack_e0);
    ppppppuVar12 = param_2[0x27];
    ppppppuVar11 = *pppppppuVar4;
    ppppppuVar10 = param_2[0x29];
    ppppppuVar8 = param_2[0x28];
    param_2[0x27] = ppppppuStack_88;
    *pppppppuVar4 = ppppppuStack_90;
    param_2[0x29] = ppppppuStack_78;
    param_2[0x28] = ppppppuStack_80;
    ppppppuStack_90 = ppppppuVar11;
    ppppppuStack_88 = ppppppuVar12;
    ppppppuStack_80 = ppppppuVar8;
    ppppppuStack_78 = ppppppuVar10;
    if ((uint ******)((long)&MACH_HEADER.magic + 1) < ppppppuVar11) {
      do {
        pppppuVar7 = *ppppppuVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar11,0x10);
        if (bVar2) {
          *ppppppuVar11 = (uint *****)((long)pppppuVar7 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((uint *****)((long)pppppuVar7 + -1) == (uint *****)0x0) {
        (*(code *)ppppppuVar11[1])();
      }
    }
    pppppppuVar4 = pppppppuStack_e0;
    if ((uint *******)((long)&MACH_HEADER.magic + 1) < pppppppuStack_e0) {
      do {
        ppppppuVar8 = *pppppppuStack_e0;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppppppuStack_e0,0x10);
        if (bVar2) {
          *pppppppuStack_e0 = (uint ******)((long)ppppppuVar8 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((uint ******)((long)ppppppuVar8 + -1) == (uint ******)0x0) {
        (*(code *)pppppppuStack_e0[1])();
      }
    }
    uVar6 = *(uint *)param_2;
  }
  *(uint *)param_2 = uVar6 & 0xffffffdf;
  *param_1 = (uint ******)0x0;
  param_1 = pppppppuVar4;
LAB_0037bf90:
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_38) {
    ___stack_chk_fail();
    if ((param_3 != 0) && (func_0x0040cf10(), (char)bStack_e1 < '\0')) {
      __ZdlPv(pppppppuStack_f8);
    }
    __Unwind_Resume();
    ppppppuVar8 = param_1[2];
    pppppuVar7 = *ppppppuVar8;
    if (pppppuVar7 == (uint *****)0x0) {
      pppppuVar9 = (uint *****)0x0;
      uStack_138 = 0;
    }
    else {
      FUN_0037beb0(&uStack_138);
      pppppuVar9 = *ppppppuVar8;
    }
    ppppppuVar8 = param_1[1];
    *ppppppuVar8 = pppppuVar9;
    *(undefined1 *)(ppppppuVar8 + 1) = 1;
    if (*(char *)((long)ppppppuVar8 + 9) != '\0') {
      *(undefined1 *)((long)ppppppuVar8 + 9) = 0;
      FUN_003d3424();
      (*(code *)(**pppppuVar7)[3])();
    }
    uStack_140 = 1;
    uStack_148 = 0x36;
    *extraout_x8 = uStack_138;
    *(undefined4 *)(extraout_x8 + 1) = 1;
    FUN_0033e1ac(&uStack_148);
    return;
  }
  return;
}



/* Entry: 0037c088; end: 0037c147;  */

void FUN_0037c088(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  
  plVar3 = *(long **)(param_2 + 0x10);
  puVar1 = (undefined8 *)*plVar3;
  if (puVar1 == (undefined8 *)0x0) {
    lVar2 = 0;
    uStack_38 = 0;
  }
  else {
    FUN_0037beb0(&uStack_38);
    lVar2 = *plVar3;
  }
  plVar3 = *(long **)(param_2 + 8);
  *plVar3 = lVar2;
  *(undefined1 *)(plVar3 + 1) = 1;
  if (*(char *)((long)plVar3 + 9) != '\0') {
    *(undefined1 *)((long)plVar3 + 9) = 0;
    FUN_003d3424();
    (**(code **)(*(long *)*puVar1 + 0x18))();
  }
  uStack_40 = 1;
  uStack_48 = 0x36;
  *param_1 = uStack_38;
  *(undefined4 *)(param_1 + 1) = 1;
  FUN_0033e1ac(&uStack_48);
  return;
}



/* Entry: 0037c148; end: 0037c19f;  */

long * FUN_0037c148(long *param_1,long *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0x36;
  if (*param_1 == 0) {
    FUN_0055142c(param_1);
  }
  return param_1;
}



/* Entry: 0037c1a0; end: 0037c1a7;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_0037c1a0(undefined8 param_1,ulong param_2,undefined8 param_3,byte *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined7 *puVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  char *pcVar8;
  uint uVar9;
  ulong *puVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_1d8 [2];
  char cStack_1c1;
  undefined1 auStack_1c0 [56];
  undefined8 uStack_188;
  undefined7 uStack_180;
  undefined1 uStack_179;
  undefined7 uStack_178;
  undefined1 uStack_171;
  ulong auStack_138 [2];
  undefined7 *puStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  code *pcStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  byte abStack_88 [64];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar7 = (byte *)((long)&MACH_HEADER.magic + 2);
  uVar12 = param_2;
  FUN_00338e58();
  if ((int)pbVar7 != 0) {
    pbVar7 = abStack_88;
    _vsnprintf(pbVar7,0x40,param_4,&stack0x00000000);
    if ((int)(uint)pbVar7 < 0) {
      unaff_x23 = (byte *)0x0;
      param_4 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar7;
      if ((uint)pbVar7 < 0x40) {
        param_4 = (byte *)0x0;
        unaff_x23 = abStack_88;
      }
      else {
        param_4 = (byte *)(((ulong)pbVar7 & 0xffffffff) + 1);
        FUN_00338c74();
        _vsnprintf();
        unaff_x23 = param_4;
      }
    }
    uVar12 = param_2;
    FUN_00338e80(param_1,param_2,2,unaff_x23);
    pbVar7 = param_4;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return pbVar7;
  }
  ___stack_chk_fail();
  uStack_a8 = 2;
  pcStack_98 = FUN_00339178;
  lStack_d8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = 1;
  pbStack_d0 = unaff_x24;
  pbStack_c8 = unaff_x23;
  pbStack_c0 = param_4;
  uStack_b8 = param_1;
  uStack_b0 = param_2;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_0033a598();
  lVar14 = *(long *)pbVar7;
  lVar2 = lVar14;
  uStack_188 = uVar1;
  _strrchr(lVar14,0x2f);
  if (lVar2 != 0) {
    lVar14 = lVar2 + 1;
  }
  puVar3 = &uStack_188;
  _localtime_r(puVar3,auStack_1c0);
  if (puVar3 == (undefined8 *)0x0) {
    uStack_178 = 0x656d69746c6163;
    uStack_171 = 0;
    uStack_180 = 0x6c3a726f727265;
    uStack_179 = 0x6f;
  }
  else {
    puVar4 = &uStack_180;
    _strftime(puVar4,0x40,"%m%d %H:%M:%S",auStack_1c0);
    if (puVar4 == (undefined7 *)0x0) {
      uStack_180 = 0x733a726f727265;
      uStack_179 = 0x74;
      uStack_178 = 0x656d69746672;
    }
  }
  uVar5 = (ulong)*(uint *)(pbVar7 + 0xc);
  func_0x00338e1c();
  uVar6 = uVar5;
  _pthread_self();
  auStack_138[1] = 0x560e98;
  puStack_128 = &uStack_180;
  uStack_120 = 0x560e98;
  uStack_118 = uVar12 & 0xffffffff;
  uStack_110 = 0x5606ac;
  pcStack_100 = FUN_00560738;
  uStack_f0 = 0x560e98;
  uStack_e8 = (ulong)*(uint *)(pbVar7 + 8);
  uStack_e0 = 0x5606ac;
  puVar10 = auStack_138;
  auStack_138[0] = uVar5;
  uStack_108 = uVar6;
  lStack_f8 = lVar14;
  FUN_0056189c(apbStack_1d8,"%s%s.%09d %7ld %s:%d]",0x15,puVar10,6);
  uVar9 = *(uint *)(pbVar7 + 0xc);
  func_0x00338e6c();
  if (uVar9 == 0) {
    auStack_138[0] = auStack_138[0] & 0xffffffffffffff00;
    uStack_120 = uStack_120 & 0xffffffffffffff00;
LAB_00339300:
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_138);
    if ((char)uStack_120 == '\0') goto LAB_00339300;
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_1c1 < '\0') {
    pbVar7 = apbStack_1d8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_d8) {
    return pbVar7;
  }
  ___stack_chk_fail();
  if (cStack_1c1 < '\0') {
    __ZdlPv(apbStack_1d8[0]);
  }
  __Unwind_Resume();
  uVar9 = (uint)puVar10;
  if ((char *)0x3 < pcVar8) {
    uVar12 = (ulong)pcVar8 >> 2;
    pbVar13 = pbVar7;
    do {
      uVar9 = (*(int *)pbVar13 * 0x16a88000 | (uint)(*(int *)pbVar13 * -0x3361d2af) >> 0x11) *
              0x1b873593 ^ (uint)puVar10;
      uVar9 = (uVar9 >> 0x13 | uVar9 << 0xd) * 5 + 0xe6546b64;
      puVar10 = (ulong *)(ulong)uVar9;
      uVar12 = uVar12 - 1;
      pbVar13 = pbVar13 + 4;
    } while (uVar12 != 0);
    pbVar7 = pbVar7 + ((ulong)pcVar8 & 0xfffffffffffffffc);
  }
  uVar11 = 0;
  uVar12 = (ulong)pcVar8 & 3;
  if (uVar12 != 1) {
    if (uVar12 != 2) {
      if (uVar12 != 3) goto LAB_00339464;
      uVar11 = (uint)pbVar7[2] << 0x10;
    }
    uVar11 = uVar11 | (uint)pbVar7[1] << 8;
  }
  uVar9 = ((uVar11 ^ *pbVar7) * 0x16a88000 | (uVar11 ^ *pbVar7) * -0x3361d2af >> 0x11) * 0x1b873593
          ^ uVar9;
LAB_00339464:
  uVar9 = uVar9 ^ (uint)pcVar8;
  uVar9 = (uVar9 ^ uVar9 >> 0x10) * -0x7a143595;
  uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar9 ^ uVar9 >> 0x10);
}



/* Entry: 0037c1a8; end: 0037c2a7;  */

ulong FUN_0037c1a8(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uStack_98;
  int iStack_90;
  char cStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_003a20f4(&uStack_98,param_2,"grpc.default_authority",0x16);
  if (cStack_88 == '\0') {
    func_0x005535e8(&uStack_48,
                    "GRPC_ARG_DEFAULT_AUTHORITY string channel arg. not found. Note that direct channels must explicitly specify a value for this argument."
                    ,0x86);
    iStack_90 = (int)&uStack_48;
    FUN_0037c5c0(param_1);
    uVar1 = uStack_48;
    if ((uStack_48 & 1) != 0) {
      FUN_0055293c();
      uVar1 = uStack_48;
    }
  }
  else {
    func_0x003ec288(&uStack_48);
    uStack_78 = uStack_38;
    uStack_80 = uStack_40;
    uStack_70 = uStack_30;
    param_1[4] = uStack_38;
    param_1[3] = uStack_40;
    param_1[5] = uStack_30;
    param_1[1] = &PTR_FUN_009de420;
    param_1[2] = uStack_48;
    *param_1 = 0;
    uVar1 = uStack_98;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return uVar1;
  }
  ___stack_chk_fail();
  if (iStack_90 != 0) {
    func_0x0040cf10();
    FUN_0033c494(&uStack_48);
  }
  __Unwind_Resume(uVar1);
  FUN_0034b418(uVar1 + 8);
  return uVar1;
}



/* Entry: 0037c2a8; end: 0037c2cf;  */

long FUN_0037c2a8(long param_1)

{
  FUN_0034b418(param_1 + 8);
  return param_1;
}



/* Entry: 0037c2d0; end: 0037c3e7;  */

undefined ***
FUN_0037c2d0(undefined8 param_1,long param_2,byte *param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined **ppuStack_d8;
  code *pcStack_d0;
  undefined ***pppuStack_c0;
  undefined **ppuStack_b8;
  code *pcStack_b0;
  undefined ***pppuStack_a0;
  long lStack_98;
  byte *pbStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined ***pppuStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  byte *pbStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  iVar7 = (int)&pbStack_60;
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((*param_3 >> 1 & 1) == 0) {
    plVar8 = *(long **)(param_2 + 8);
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar8) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = *plVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_58 = *(undefined8 *)(param_2 + 0x10);
    pbStack_60 = *(byte **)(param_2 + 8);
    uStack_48 = *(undefined8 *)(param_2 + 0x20);
    uStack_50 = *(undefined8 *)(param_2 + 0x18);
    FUN_0034bbe0(param_3,&pbStack_60);
    if ((byte *)((long)&MACH_HEADER.magic + 1) < pbStack_60) {
      do {
        lVar9 = *(long *)pbStack_60;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pbStack_60,0x10);
        if (bVar3) {
          *(long *)pbStack_60 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(pbStack_60 + 8))();
      }
    }
  }
  pppuVar5 = *(undefined ****)(param_5 + 0x18);
  pbStack_60 = param_3;
  uStack_58 = param_4;
  if (pppuVar5 == (undefined ***)0x0) {
    FUN_0033e390();
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x37c3b8);
    (*pcVar4)();
  }
  (*(code *)(*pppuVar5)[6])(param_1);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return pppuVar5;
  }
  ___stack_chk_fail();
  if (iVar7 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&pbStack_60);
  }
  pppuVar6 = pppuVar5;
  __Unwind_Resume(pppuVar5);
  pcStack_68 = FUN_0037c3e8;
  lStack_98 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuStack_b8 = &PTR_FUN_009de508;
  pcStack_b0 = FUN_0037c53c;
  pppuStack_a0 = &ppuStack_b8;
  pbStack_90 = param_3;
  uStack_88 = param_4;
  lStack_80 = param_5;
  pppuStack_78 = pppuVar5;
  puStack_70 = &stack0xfffffffffffffff0;
  FUN_003f517c(pppuVar6 + 3,1,0x7fffffff,&ppuStack_b8);
  if (pppuStack_a0 == &ppuStack_b8) {
    lVar9 = 4;
    pppuVar5 = &ppuStack_b8;
LAB_0037c460:
    (*(code *)(*pppuVar5)[lVar9])();
  }
  else if (pppuStack_a0 != (undefined ***)0x0) {
    lVar9 = 5;
    pppuVar5 = pppuStack_a0;
    goto LAB_0037c460;
  }
  ppuStack_d8 = &PTR_FUN_009de508;
  pcStack_d0 = FUN_0037c53c;
  pppuStack_c0 = &ppuStack_d8;
  FUN_003f517c(pppuVar6 + 3,3,0x7fffffff,&ppuStack_d8);
  if (pppuStack_c0 == &ppuStack_d8) {
    lVar9 = 4;
    pppuVar5 = &ppuStack_d8;
LAB_0037c4ac:
    (*(code *)(*pppuVar5)[lVar9])();
  }
  else {
    pppuVar5 = pppuStack_c0;
    if (pppuStack_c0 != (undefined ***)0x0) {
      lVar9 = 5;
      goto LAB_0037c4ac;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_98) {
    return pppuVar5;
  }
  ___stack_chk_fail();
  if (pppuStack_c0 == &ppuStack_d8) {
    lVar9 = 4;
    pppuVar6 = &ppuStack_d8;
  }
  else {
    if (pppuStack_c0 == (undefined ***)0x0) goto LAB_0037c534;
    lVar9 = 5;
    pppuVar6 = pppuStack_c0;
  }
  (*(code *)(*pppuVar6)[lVar9])();
LAB_0037c534:
  __Unwind_Resume();
  pppuVar6 = pppuVar5 + 7;
  FUN_003a21a4(pppuVar6,"grpc.disable_client_authority_filter",0x24);
  uVar1 = (uint)pppuVar6 & 0xffff;
  if (uVar1 < 0x101) {
    uVar1 = 0;
  }
  if ((uVar1 & 0xff) == 0) {
    FUN_003a6bac(pppuVar5,&PTR_FUN_009de3a8);
  }
  return (undefined ***)((long)&MACH_HEADER.magic + 1);
}



/* Entry: 0037c3e8; end: 0037c53b;  */

undefined *** FUN_0037c3e8(long param_1)

{
  uint uVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  long lVar4;
  undefined **ppuStack_78;
  code *pcStack_70;
  undefined ***pppuStack_60;
  undefined **ppuStack_58;
  code *pcStack_50;
  undefined ***pppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuStack_58 = &PTR_FUN_009de508;
  pcStack_50 = FUN_0037c53c;
  pppuStack_40 = &ppuStack_58;
  FUN_003f517c(param_1 + 0x18,1,0x7fffffff,&ppuStack_58);
  if (pppuStack_40 == &ppuStack_58) {
    lVar4 = 4;
    pppuVar2 = &ppuStack_58;
LAB_0037c460:
    (*(code *)(*pppuVar2)[lVar4])();
  }
  else if (pppuStack_40 != (undefined ***)0x0) {
    lVar4 = 5;
    pppuVar2 = pppuStack_40;
    goto LAB_0037c460;
  }
  ppuStack_78 = &PTR_FUN_009de508;
  pcStack_70 = FUN_0037c53c;
  pppuStack_60 = &ppuStack_78;
  FUN_003f517c(param_1 + 0x18,3,0x7fffffff,&ppuStack_78);
  if (pppuStack_60 == &ppuStack_78) {
    lVar4 = 4;
    pppuVar2 = &ppuStack_78;
LAB_0037c4ac:
    (*(code *)(*pppuVar2)[lVar4])();
  }
  else {
    pppuVar2 = pppuStack_60;
    if (pppuStack_60 != (undefined ***)0x0) {
      lVar4 = 5;
      goto LAB_0037c4ac;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return pppuVar2;
  }
  ___stack_chk_fail();
  if (pppuStack_60 == &ppuStack_78) {
    lVar4 = 4;
    pppuVar3 = &ppuStack_78;
  }
  else {
    if (pppuStack_60 == (undefined ***)0x0) goto LAB_0037c534;
    lVar4 = 5;
    pppuVar3 = pppuStack_60;
  }
  (*(code *)(*pppuVar3)[lVar4])();
LAB_0037c534:
  __Unwind_Resume();
  pppuVar3 = pppuVar2 + 7;
  FUN_003a21a4(pppuVar3,"grpc.disable_client_authority_filter",0x24);
  uVar1 = (uint)pppuVar3 & 0xffff;
  if (uVar1 < 0x101) {
    uVar1 = 0;
  }
  if ((uVar1 & 0xff) == 0) {
    FUN_003a6bac(pppuVar2,&PTR_FUN_009de3a8);
  }
  return (undefined ***)((long)&MACH_HEADER.magic + 1);
}



/* Entry: 0037c53c; end: 0037c5bf;  */

undefined8 FUN_0037c53c(long param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x38;
  FUN_003a21a4(lVar2,"grpc.disable_client_authority_filter",0x24);
  uVar1 = (uint)lVar2 & 0xffff;
  if (uVar1 < 0x101) {
    uVar1 = 0;
  }
  if ((uVar1 & 0xff) == 0) {
    FUN_003a6bac(param_1,&PTR_FUN_009de3a8);
  }
  return 1;
}



/* Entry: 0037c5c0; end: 0037c617;  */

long * FUN_0037c5c0(long *param_1,long *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0x36;
  if (*param_1 == 0) {
    FUN_0055142c(param_1);
  }
  return param_1;
}



/* Entry: 0037c618; end: 0037c61f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_0037c618(long param_1,long param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined *extraout_x8;
  undefined *extraout_x8_00;
  undefined *extraout_x8_01;
  undefined *extraout_x8_02;
  long *plVar12;
  long lVar13;
  int *piVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uStack_160;
  ulong uStack_158;
  long lStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  long alStack_130 [4];
  undefined8 uStack_110;
  long lStack_78;
  long lStack_70;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuVar6 = &PTR___tlv_bootstrap_00b2c390;
  (*(code *)PTR___tlv_bootstrap_00b2c390)(*(undefined8 *)(lVar5 + 0x20));
  puVar18 = *ppuVar6;
  *ppuVar6 = extraout_x8;
  ppuVar7 = &PTR___tlv_bootstrap_00b2c3a8;
  (*(code *)PTR___tlv_bootstrap_00b2c3a8)(*(undefined8 *)(lVar5 + 0x40));
  puVar19 = *ppuVar7;
  *ppuVar7 = extraout_x8_00;
  ppuVar8 = &PTR___tlv_bootstrap_00b2c3c0;
  (*(code *)PTR___tlv_bootstrap_00b2c3c0)(*(undefined8 *)(lVar5 + 0x48));
  puVar20 = *ppuVar8;
  *ppuVar8 = extraout_x8_01;
  ppuVar9 = &PTR___tlv_bootstrap_00b2c3d8;
  (*(code *)PTR___tlv_bootstrap_00b2c3d8)(lVar5 + 0x38);
  puVar21 = *ppuVar9;
  *ppuVar9 = extraout_x8_02;
  *(undefined8 *)(param_2 + 0x38) = 1;
  alStack_130[1] = 0;
  uStack_110 = 0;
  plVar12 = *(long **)(lVar5 + 0x10);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar3) {
      *plVar12 = *plVar12 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  bVar1 = *(byte *)(param_2 + 0x10);
  uVar11 = (uint)bVar1;
  alStack_130[0] = param_2;
  lStack_78 = lVar5;
  if ((bVar1 >> 6 & 1) == 0) {
    if (((bVar1 >> 3 & 1) == 0) ||
       (puVar15 = *(undefined4 **)(lVar5 + 0x70), puVar15 == (undefined4 *)0x0)) goto LAB_003acf78;
    uVar16 = 3;
    switch(*puVar15) {
    case 1:
      uVar16 = 4;
    case 0:
      *puVar15 = uVar16;
      break;
    case 2:
      goto LAB_003acf78;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      goto code_r0x003ad260;
    }
    lVar13 = *(long *)(param_2 + 8);
    *(undefined8 *)(puVar15 + 0xc) = *(undefined8 *)(lVar13 + 0x38);
    *(undefined8 *)(puVar15 + 2) = *(undefined8 *)(lVar13 + 0x48);
    *(code **)(puVar15 + 6) = FUN_003afc08;
    *(long *)(puVar15 + 8) = lVar5;
    *(undefined8 *)(puVar15 + 10) = 0;
    *(long *)(*(long *)(param_2 + 8) + 0x48) = *(long *)(lVar5 + 0x70) + 0x10;
    uVar11 = (uint)*(byte *)(param_2 + 0x10);
LAB_003acf78:
    if ((uVar11 & 1) == 0) {
      if ((uVar11 >> 5 & 1) == 0) {
        uVar17 = *(ulong *)(lVar5 + 0xa0);
        if (uVar17 != 0) {
          if ((uVar17 & 1) != 0) {
            piVar14 = (int *)(uVar17 - 1);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
              if (bVar3) {
                *piVar14 = *piVar14 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          uStack_158 = uVar17;
          FUN_003ac8fc(alStack_130,&uStack_158,alStack_130 + 1);
          if ((uVar17 & 1) != 0) {
            FUN_0055293c(uVar17);
          }
        }
      }
      else if (*(int *)(lVar5 + 0xac) == 5) {
        uVar17 = *(ulong *)(lVar5 + 0xa0);
        if ((uVar17 & 1) != 0) {
          piVar14 = (int *)(uVar17 - 1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
            if (bVar3) {
              *piVar14 = *piVar14 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uStack_148 = uVar17;
        FUN_003ac8fc(alStack_130,&uStack_148,alStack_130 + 1);
        if ((uVar17 & 1) != 0) {
          FUN_0055293c(uVar17);
        }
      }
      else {
        if (*(int *)(lVar5 + 0xac) != 0) {
          uVar10 = 0x24a;
          goto LAB_003ad208;
        }
        *(undefined4 *)(lVar5 + 0xac) = 2;
        if (*(long *)(param_2 + 0x38) != 0) {
          *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 1;
        }
        lVar13 = *(long *)(param_2 + 8);
        *(undefined8 *)(lVar5 + 0x68) = *(undefined8 *)(lVar13 + 0x80);
        *(undefined8 *)(lVar5 + 0x78) = *(undefined8 *)(lVar13 + 0x90);
        *(long *)(lVar13 + 0x90) = lVar5 + 0x80;
        lStack_150 = param_2;
        FUN_003ac6f4(&lStack_150);
      }
    }
    else if ((*(int *)(lVar5 + 0xa8) == 3) || (*(int *)(lVar5 + 0xac) == 5)) {
      uVar17 = *(ulong *)(lVar5 + 0xa0);
      if ((uVar17 & 1) != 0) {
        piVar14 = (int *)(uVar17 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar3) {
            *piVar14 = *piVar14 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_140 = uVar17;
      FUN_003ac8fc(alStack_130,&uStack_140,alStack_130 + 1);
      if ((uVar17 & 1) != 0) {
        FUN_0055293c(uVar17);
      }
    }
    else {
      if (*(int *)(lVar5 + 0xa8) != 0) {
        uVar10 = 0x237;
LAB_003ad208:
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                     ,uVar10,2,"assertion failed: %s");
        _abort();
        goto LAB_003ad264;
      }
      *(undefined4 *)(lVar5 + 0xa8) = 1;
      if ((*(byte *)(param_2 + 0x10) >> 5 & 1) != 0) {
        if (*(int *)(lVar5 + 0xac) != 0) {
          uVar10 = 0x23c;
          goto LAB_003ad208;
        }
        *(undefined4 *)(lVar5 + 0xac) = 1;
      }
      FUN_003ac75c(lVar5 + 0x60,alStack_130);
      FUN_003ad4b8(lVar5,alStack_130 + 1);
    }
    if (alStack_130[0] != 0) {
      lVar13 = *(long *)(lVar5 + 0x10);
      func_0x003a6564(lVar13,*(long *)(lVar13 + 0x28) + -1);
      if (lVar13 == *(long *)(lVar5 + 0x18)) {
        uStack_160 = 4;
        FUN_003ac8fc(alStack_130,&uStack_160,alStack_130 + 1);
      }
      else {
LAB_003ad17c:
        FUN_003ac7b0(alStack_130,alStack_130 + 1);
      }
    }
  }
  else {
    if ((bVar1 & 0x3f) != 0) {
      uVar10 = 0x1ff;
      goto LAB_003ad208;
    }
    uVar17 = *(ulong *)(*(long *)(param_2 + 8) + 0x98);
    if ((uVar17 & 1) != 0) {
      piVar14 = (int *)(uVar17 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar3) {
          *piVar14 = *piVar14 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_138 = uVar17;
    FUN_003ad2f4(lVar5,&uStack_138);
    if ((uVar17 & 1) != 0) {
      FUN_0055293c(uVar17);
    }
    lVar13 = *(long *)(lVar5 + 0x10);
    func_0x003a6564(lVar13,*(long *)(lVar13 + 0x28) + -1);
    if (lVar13 != *(long *)(lVar5 + 0x18)) goto LAB_003ad17c;
    FUN_003ac84c(alStack_130,alStack_130 + 1);
  }
  FUN_003aca08(alStack_130 + 1);
  FUN_003ac6f4(alStack_130);
  *ppuVar9 = puVar21;
  *ppuVar8 = puVar20;
  *ppuVar7 = puVar19;
  *ppuVar6 = puVar18;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
code_r0x003ad260:
  _abort();
LAB_003ad264:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x3ad268);
  (*pcVar4)();
}



/* Entry: 0037c620; end: 0037c71f;  */

void FUN_0037c620(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long alStack_68 [3];
  long *plStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar3 = *(long **)(param_2 + 8);
  FUN_0033f548(alStack_68,param_5);
  (**(code **)(*plVar3 + 8))(param_1,plVar3,param_3,param_4,alStack_68);
  if (plStack_50 == alStack_68) {
    lVar2 = 4;
    plVar3 = alStack_68;
LAB_0037c6a8:
    (**(code **)(*plVar3 + lVar2 * 8))();
  }
  else {
    plVar3 = plStack_50;
    if (plStack_50 != (long *)0x0) {
      lVar2 = 5;
      goto LAB_0037c6a8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (plStack_50 == alStack_68) {
    lVar2 = 4;
    plStack_50 = alStack_68;
  }
  else {
    if (plStack_50 == (long *)0x0) goto LAB_0037c718;
    lVar2 = 5;
  }
  (**(code **)(*plStack_50 + lVar2 * 8))();
LAB_0037c718:
  __Unwind_Resume();
  plVar1 = (long *)plVar3[1];
  (**(code **)(*plVar1 + 0x10))();
  if (((ulong)plVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003a6a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(plVar3[2] + 0x10))(plVar3 + 2,param_3);
  return;
}



/* Entry: 0037c720; end: 0037c7ab;  */

void FUN_0037c720(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x10))();
  if (((ulong)plVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003a6a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))((long *)(param_1 + 0x10),param_2);
  return;
}



/* Entry: 0037c7ac; end: 0037c7af;  */

undefined8 * FUN_0037c7ac(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = &PTR_FUN_009df750;
  param_1[1] = &PTR_FUN_009df7a8;
  if (param_1[0x16] == 0) {
    if ((param_1[0x14] & 1) != 0) {
      FUN_0055293c();
    }
    FUN_003ac6f4(param_1 + 0xc);
    (**(code **)(*(long *)param_1[0xb] + 8))();
    *param_1 = &PTR_FUN_009df6d8;
    param_1[1] = &PTR_FUN_009df730;
    return param_1;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
               ,0x1e5,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3acdd4);
  (*pcVar1)();
}



/* Entry: 0037c7b0; end: 0037c7c3;  */

void FUN_0037c7b0(void)

{
  FUN_003acd30();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0037c7c4; end: 0037c7cb;  */

void FUN_0037c7c4(long param_1,long param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined1 uStack_41;
  undefined1 **ppuStack_40;
  code *pcStack_38;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  lVar4 = *(long *)(param_1 + 0x10);
  plVar6 = (long *)(lVar4 + 0x48);
  do {
    lVar5 = *plVar6;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 == 0) {
    return;
  }
  func_0x00771390();
  pcStack_18 = FUN_0033f680;
  plVar6 = *(long **)(lVar4 + 0x10);
  puVar3 = (undefined8 *)plVar6[7];
  plVar6[7] = 0;
  puStack_20 = &stack0xfffffffffffffff0;
  if (puVar3 != (undefined8 *)0x0) {
    puStack_20 = &stack0xfffffffffffffff0;
    (**(code **)*puVar3)();
  }
  (**(code **)(*plVar6 + 8))(plVar6);
  if (param_3 == 0) {
    return;
  }
  func_0x007713c4();
  pcStack_38 = FUN_0033f6d0;
  ppuStack_40 = &puStack_20;
  FUN_0033f6f8(&uStack_41,plVar6,param_2);
  return;
}



/* Entry: 0037c7cc; end: 0037c81b;  */

void FUN_0037c7cc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined1 uStack_31;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  plVar2 = *(long **)(param_1 + 0x10);
  puVar1 = (undefined8 *)plVar2[7];
  plVar2[7] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  (**(code **)(*plVar2 + 8))(plVar2);
  if (param_3 == 0) {
    return;
  }
  func_0x0077253c();
  pcStack_28 = FUN_0037c81c;
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_0037c844(&uStack_31,plVar2,param_2);
  return;
}



/* Entry: 0037c81c; end: 0037c843;  */

void FUN_0037c81c(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_0037c844(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 0037c844; end: 0037c9c3;  */

ulong * FUN_0037c844(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  ulong *puVar9;
  int iVar10;
  undefined8 *puVar11;
  int *piVar12;
  long lVar13;
  ulong uStack_a8;
  undefined1 auStack_a0 [8];
  long *plStack_98;
  ulong auStack_90 [2];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_38;
  
  iVar10 = (int)param_3;
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  if (*(int *)(param_4 + 0x14) != 0) {
    func_0x00772570();
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x37c97c);
    (*pcVar8)();
  }
  FUN_003a1d70(auStack_a0,*(undefined8 *)(param_4 + 8));
  FUN_0037c1a8(auStack_90,auStack_a0);
  if (plStack_98 != (long *)0x0) {
    plVar1 = plStack_98 + 1;
    do {
      lVar13 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_98);
    }
  }
  uVar7 = uStack_68;
  uVar6 = uStack_70;
  uVar5 = uStack_78;
  uVar4 = uStack_80;
  puVar11 = *(undefined8 **)(param_3 + 8);
  if (auStack_90[0] == 0) {
    *puVar11 = &PTR_FUN_009de420;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    puVar11[2] = uVar5;
    puVar11[1] = uVar4;
    puVar11[4] = uVar7;
    puVar11[3] = uVar6;
    *param_1 = 0;
  }
  else {
    *puVar11 = &PTR_FUN_009db778;
    uStack_a8 = auStack_90[0];
    if ((auStack_90[0] & 1) != 0) {
      piVar12 = (int *)(auStack_90[0] - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar3) {
          *piVar12 = *piVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_003fbec4(param_1,&uStack_a8);
    if ((uStack_a8 & 1) != 0) {
      FUN_0055293c();
    }
  }
  puVar9 = auStack_90;
  FUN_0037c9c4();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return puVar9;
  }
  ___stack_chk_fail();
  if (iVar10 != 0) {
    func_0x0040cf10();
    FUN_0033c494(&uStack_a8);
    FUN_0037c9c4(auStack_90);
  }
  __Unwind_Resume();
  if (*puVar9 == 0) {
    FUN_0034b418(puVar9 + 2);
  }
  else if ((*puVar9 & 1) != 0) {
    FUN_0055293c();
  }
  return puVar9;
}



/* Entry: 0037c9c4; end: 0037ca03;  */

ulong * FUN_0037c9c4(ulong *param_1)

{
  if (*param_1 == 0) {
    FUN_0034b418(param_1 + 2);
  }
  else if ((*param_1 & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 0037ca04; end: 0037ca23;  */

void FUN_0037ca04(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0037ca10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_2 + 8))();
  return;
}



/* Entry: 0037ca24; end: 0037ca6b;  */

void FUN_0037ca24(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x18))();
  if (((ulong)plVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003a6a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x58))((long *)(param_1 + 0x10),param_2);
  return;
}



/* Entry: 0037ca6c; end: 0037ca73;  */

void FUN_0037ca6c(void)

{
  return;
}



/* Entry: 0037ca74; end: 0037caa7;  */

void FUN_0037ca74(long param_1)

{
  dword *pdVar1;
  undefined8 uVar2;
  
  pdVar1 = &MACH_HEADER.ncmds;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined ***)pdVar1 = &PTR_FUN_009de508;
  *(undefined8 *)(pdVar1 + 2) = uVar2;
  return;
}



/* Entry: 0037caa8; end: 0037cacf;  */

void FUN_0037caa8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_009de508;
  param_2[1] = uVar1;
  return;
}



/* Entry: 0037cad0; end: 0037cb0b;  */

long FUN_0037cad0(long param_1,undefined8 param_2)

{
  FUN_0033ff44(param_2,&PTR_DAT_009de578);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 0037cb0c; end: 0037cb1f;  */

undefined ** FUN_0037cb0c(void)

{
  return &PTR_DAT_009de578;
}



/* Entry: 0037cb20; end: 0037cf6b;  */

void FUN_0037cb20(long param_1)

{
  segment_command *psVar1;
  segment_command *psVar2;
  long lVar3;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  segment_command *psStack_50;
  qword qStack_48;
  
  qStack_48 = *(qword *)PTR____stack_chk_guard_00999f88;
  param_1 = param_1 + 0x18;
  psVar1 = &segment_command_00000020;
  __Znwm();
  *(undefined ***)psVar1 = &PTR_FUN_009de5a8;
  psVar1->segname[0] = '\0';
  *(char **)(psVar1->segname + 8) = "grpc.per_message_compression";
  psVar1->vmaddr = (qword)&PTR_FUN_009de698;
  psStack_50 = psVar1;
  FUN_003f517c(param_1,1,&UNK_00002710,&ppuStack_68);
  if (psStack_50 == (segment_command *)&ppuStack_68) {
    lVar3 = 4;
    psVar1 = (segment_command *)&ppuStack_68;
LAB_0037cbb4:
    (*(code *)(*(undefined ***)psVar1)[lVar3])();
  }
  else if (psStack_50 != (segment_command *)0x0) {
    lVar3 = 5;
    psVar1 = psStack_50;
    goto LAB_0037cbb4;
  }
  psVar1 = &segment_command_00000020;
  __Znwm();
  *(undefined ***)psVar1 = &PTR_FUN_009de5a8;
  psVar1->segname[0] = '\0';
  *(char **)(psVar1->segname + 8) = "grpc.per_message_compression";
  psVar1->vmaddr = (qword)&PTR_FUN_009de698;
  psStack_50 = psVar1;
  FUN_003f517c(param_1,3,&UNK_00002710,&ppuStack_68);
  if (psStack_50 == (segment_command *)&ppuStack_68) {
    lVar3 = 4;
    psVar1 = (segment_command *)&ppuStack_68;
LAB_0037cc14:
    (*(code *)(*(undefined ***)psVar1)[lVar3])();
  }
  else if (psStack_50 != (segment_command *)0x0) {
    lVar3 = 5;
    psVar1 = psStack_50;
    goto LAB_0037cc14;
  }
  psVar1 = &segment_command_00000020;
  __Znwm();
  *(undefined ***)psVar1 = &PTR_FUN_009de5a8;
  psVar1->segname[0] = '\0';
  *(char **)(psVar1->segname + 8) = "grpc.per_message_compression";
  psVar1->vmaddr = (qword)&PTR_FUN_009de698;
  psStack_50 = psVar1;
  FUN_003f517c(param_1,4,&UNK_00002710,&ppuStack_68);
  if (psStack_50 == (segment_command *)&ppuStack_68) {
    lVar3 = 4;
    psVar1 = (segment_command *)&ppuStack_68;
LAB_0037cc74:
    (*(code *)(*(undefined ***)psVar1)[lVar3])();
  }
  else if (psStack_50 != (segment_command *)0x0) {
    lVar3 = 5;
    psVar1 = psStack_50;
    goto LAB_0037cc74;
  }
  psVar1 = &segment_command_00000020;
  __Znwm();
  *(undefined ***)psVar1 = &PTR_FUN_009de5a8;
  psVar1->segname[0] = '\0';
  *(char **)(psVar1->segname + 8) = "grpc.per_message_decompression";
  psVar1->vmaddr = (qword)&PTR_DAT_009de700;
  psStack_50 = psVar1;
  FUN_003f517c(param_1,1,&UNK_00002710,&ppuStack_68);
  if (psStack_50 == (segment_command *)&ppuStack_68) {
    lVar3 = 4;
    psVar1 = (segment_command *)&ppuStack_68;
LAB_0037cce4:
    (*(code *)(*(undefined ***)psVar1)[lVar3])();
  }
  else if (psStack_50 != (segment_command *)0x0) {
    lVar3 = 5;
    psVar1 = psStack_50;
    goto LAB_0037cce4;
  }
  psVar1 = &segment_command_00000020;
  __Znwm();
  *(undefined ***)psVar1 = &PTR_FUN_009de5a8;
  psVar1->segname[0] = '\0';
  *(char **)(psVar1->segname + 8) = "grpc.per_message_decompression";
  psVar1->vmaddr = (qword)&PTR_DAT_009de700;
  psStack_50 = psVar1;
  FUN_003f517c(param_1,3,&UNK_00002710,&ppuStack_68);
  if (psStack_50 == (segment_command *)&ppuStack_68) {
    lVar3 = 4;
    psVar1 = (segment_command *)&ppuStack_68;
LAB_0037cd44:
    (*(code *)(*(undefined ***)psVar1)[lVar3])();
  }
  else if (psStack_50 != (segment_command *)0x0) {
    lVar3 = 5;
    psVar1 = psStack_50;
    goto LAB_0037cd44;
  }
  psVar1 = &segment_command_00000020;
  __Znwm();
  *(undefined ***)psVar1 = &PTR_FUN_009de5a8;
  psVar1->segname[0] = '\0';
  *(char **)(psVar1->segname + 8) = "grpc.per_message_decompression";
  psVar1->vmaddr = (qword)&PTR_DAT_009de700;
  psStack_50 = psVar1;
  FUN_003f517c(param_1,4,&UNK_00002710,&ppuStack_68);
  if (psStack_50 == (segment_command *)&ppuStack_68) {
    lVar3 = 4;
    psVar1 = (segment_command *)&ppuStack_68;
LAB_0037cda4:
    (*(code *)(*(undefined ***)psVar1)[lVar3])();
  }
  else if (psStack_50 != (segment_command *)0x0) {
    lVar3 = 5;
    psVar1 = psStack_50;
    goto LAB_0037cda4;
  }
  ppuStack_68 = &PTR_DAT_009de628;
  ppuStack_60 = &PTR_FUN_009de220;
  psStack_50 = (segment_command *)&ppuStack_68;
  FUN_003f517c(param_1,1,&UNK_00002710,&ppuStack_68);
  if (psStack_50 == (segment_command *)&ppuStack_68) {
    lVar3 = 4;
    psVar1 = (segment_command *)&ppuStack_68;
LAB_0037ce00:
    (*(code *)(*(undefined ***)psVar1)[lVar3])();
  }
  else if (psStack_50 != (segment_command *)0x0) {
    lVar3 = 5;
    psVar1 = psStack_50;
    goto LAB_0037ce00;
  }
  ppuStack_68 = &PTR_DAT_009de628;
  ppuStack_60 = &PTR_FUN_009de220;
  psStack_50 = (segment_command *)&ppuStack_68;
  FUN_003f517c(param_1,3,&UNK_00002710,&ppuStack_68);
  if (psStack_50 == (segment_command *)&ppuStack_68) {
    lVar3 = 4;
    psVar1 = (segment_command *)&ppuStack_68;
LAB_0037ce4c:
    (*(code *)(*(undefined ***)psVar1)[lVar3])();
  }
  else if (psStack_50 != (segment_command *)0x0) {
    lVar3 = 5;
    psVar1 = psStack_50;
    goto LAB_0037ce4c;
  }
  ppuStack_68 = &PTR_DAT_009de628;
  ppuStack_60 = &PTR_DAT_009de768;
  psStack_50 = (segment_command *)&ppuStack_68;
  FUN_003f517c(param_1,4,&UNK_00002710,&ppuStack_68);
  if (psStack_50 == (segment_command *)&ppuStack_68) {
    lVar3 = 4;
    psVar1 = (segment_command *)&ppuStack_68;
LAB_0037cea0:
    (*(code *)(*(undefined ***)psVar1)[lVar3])();
  }
  else {
    psVar1 = psStack_50;
    if (psStack_50 != (segment_command *)0x0) {
      lVar3 = 5;
      goto LAB_0037cea0;
    }
  }
  if (*(qword *)PTR____stack_chk_guard_00999f88 == qStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (psStack_50 == (segment_command *)&ppuStack_68) {
    lVar3 = 4;
    psVar2 = (segment_command *)&ppuStack_68;
  }
  else {
    if (psStack_50 == (segment_command *)0x0) goto LAB_0037cf64;
    lVar3 = 5;
    psVar2 = psStack_50;
  }
  (*(code *)(*(undefined ***)psVar2)[lVar3])();
LAB_0037cf64:
  __Unwind_Resume(psVar1);
  return;
}



/* Entry: 0037cf6c; end: 0037cf73;  */

void FUN_0037cf6c(void)

{
  return;
}



/* Entry: 0037cf74; end: 0037cfb3;  */

void FUN_0037cf74(long param_1)

{
  segment_command *psVar1;
  undefined8 uVar2;
  
  psVar1 = &segment_command_00000020;
  __Znwm();
  *(undefined ***)psVar1 = &PTR_FUN_009de5a8;
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(psVar1->segname + 8) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)psVar1->segname = uVar2;
  psVar1->vmaddr = *(qword *)(param_1 + 0x18);
  return;
}



/* Entry: 0037cfb4; end: 0037cfdb;  */

void FUN_0037cfb4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_009de5a8;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 0037cfdc; end: 0037d14b;  */

undefined8 FUN_0037cfdc(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uStack_40;
  long *plStack_38;
  
  puVar7 = &uStack_40;
  uVar8 = (uint)&uStack_40;
  lVar9 = *param_2;
  if (*(long **)(lVar9 + 0x30) != (long *)0x0) {
    lVar5 = *(long *)(**(long **)(lVar9 + 0x30) + 8);
    _strstr(lVar5,&DAT_0091e197);
    if (lVar5 != 0) {
      uStack_40 = *(undefined8 *)(lVar9 + 0x38);
      plStack_38 = *(long **)(lVar9 + 0x40);
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
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      uVar6 = uVar10;
      _strlen(uVar10);
      FUN_003a21a4(&uStack_40,uVar10,uVar6);
      if (*(char *)(param_1 + 8) == '\0') {
        FUN_003a21a4(&uStack_40,"grpc.minimal_stack",0x12);
        uVar8 = uVar8 & 0xffff;
        if (uVar8 < 0x101) {
          uVar8 = 0;
        }
        uVar8 = (uint)((uVar8 & 0xff) == 0);
      }
      else {
        uVar8 = 1;
      }
      if (((ulong)puVar7 & 0xff00) != 0) {
        uVar8 = (uint)puVar7;
      }
      if ((uVar8 & 0xff) != 0) {
        FUN_003a6bac(lVar9,*(undefined8 *)(param_1 + 0x18));
      }
      plVar1 = plStack_38;
      if (plStack_38 != (long *)0x0) {
        plVar2 = plStack_38 + 1;
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
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
    }
  }
  return 1;
}



/* Entry: 0037d14c; end: 0037d187;  */

long FUN_0037d14c(long param_1,undefined8 param_2)

{
  FUN_0033ff44(param_2,&PTR_DAT_009de608);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 0037d188; end: 0037d19b;  */

undefined ** FUN_0037d188(void)

{
  return &PTR_DAT_009de608;
}



/* Entry: 0037d19c; end: 0037d1cf;  */

void FUN_0037d19c(long param_1)

{
  dword *pdVar1;
  undefined8 uVar2;
  
  pdVar1 = &MACH_HEADER.ncmds;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined ***)pdVar1 = &PTR_DAT_009de628;
  *(undefined8 *)(pdVar1 + 2) = uVar2;
  return;
}



/* Entry: 0037d1d0; end: 0037d1eb;  */

void FUN_0037d1d0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_009de628;
  param_2[1] = uVar1;
  return;
}



/* Entry: 0037d1ec; end: 0037d277;  */

undefined8 FUN_0037d1ec(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *param_2;
  plVar2 = *(long **)(lVar3 + 0x30);
  if (plVar2 != (long *)0x0) {
    lVar1 = *(long *)(*plVar2 + 8);
    _strstr(lVar1,&DAT_0091e197);
    if (lVar1 != 0) {
      FUN_003a6bac(lVar3,*(undefined8 *)(param_1 + 8));
    }
  }
  return 1;
}



/* Entry: 0037d278; end: 0037d283;  */

undefined ** FUN_0037d278(void)

{
  return &PTR_DAT_009de688;
}



/* Entry: 0037d284; end: 0037d507;  */

void FUN_0037d284(ulong param_1,qword *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  char *pcVar4;
  undefined1 *puVar5;
  qword *pqVar6;
  ulong uVar7;
  int *piVar8;
  qword qVar9;
  uint *puVar10;
  undefined8 *extraout_x8;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  undefined1 uStack_81;
  ulong uStack_40;
  ulong uStack_38;
  
  puVar14 = *(undefined8 **)(param_1 + 0x10);
  pqVar6 = param_2;
  if (((byte)param_2[2] >> 6 & 1) == 0) {
    uVar7 = puVar14[2];
    uVar3 = param_1;
    if (uVar7 != 0) {
      if ((uVar7 & 1) != 0) {
        piVar8 = (int *)(uVar7 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar2) {
            *piVar8 = *piVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      uStack_38 = uVar7;
      FUN_004007f4(param_2,&uStack_38,*puVar14);
      if ((uStack_38 & 1) == 0) {
        return;
      }
      FUN_0055293c();
      return;
    }
  }
  else {
    qVar9 = param_2[1];
    uVar3 = puVar14[2];
    uVar7 = *(ulong *)(qVar9 + 0x98);
    if (uVar7 != uVar3) {
      if ((uVar7 & 1) != 0) {
        piVar8 = (int *)(uVar7 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar2) {
            *piVar8 = *piVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        uVar7 = *(ulong *)(qVar9 + 0x98);
      }
      puVar14[2] = uVar7;
      if ((uVar3 & 1) != 0) {
        FUN_0055293c();
      }
    }
    if ((puVar14[3] != 0) && (*(char *)(puVar14 + 4) == '\0')) {
      uVar15 = *puVar14;
      pcVar4 = segment_command_00000020.segname + 8;
      FUN_00338c74();
      *(code **)pcVar4 = FUN_0037d6a0;
      *(undefined8 **)(pcVar4 + 8) = puVar14;
      pqVar6 = (qword *)(pcVar4 + 0x10);
      *(code **)(pcVar4 + 0x18) = FUN_0033df34;
      *(char **)(pcVar4 + 0x20) = pcVar4;
      *(undefined8 *)(pcVar4 + 0x28) = 0;
      uStack_38 = puVar14[2];
      if ((uStack_38 & 1) != 0) {
        piVar8 = (int *)(uStack_38 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar2) {
            *piVar8 = *piVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_003bb88c(uVar15,pqVar6,&uStack_38,"failing send_message op");
      uVar3 = uStack_38;
      if ((uStack_38 & 1) != 0) {
        FUN_0055293c();
      }
    }
  }
  if ((param_2[2] & 1) == 0) {
LAB_0037d460:
    if (((byte)param_2[2] >> 2 & 1) == 0) {
      FUN_003a6a04(param_1,param_2);
      return;
    }
    if (puVar14[3] == 0) {
      puVar14[3] = param_2;
      if (*(char *)(puVar14 + 4) != '\0') {
        FUN_0037d720(puVar14,param_1);
        return;
      }
      FUN_003bb974(*puVar14,"send_message batch pending send_initial_metadata");
      return;
    }
  }
  else {
    if (*(char *)(puVar14 + 4) == '\0') {
      puVar10 = *(uint **)param_2[1];
      puVar11 = *(uint **)(param_1 + 8);
      uVar12 = *puVar10;
      if ((uVar12 >> 8 & 1) == 0) {
        uVar7 = 0;
      }
      else {
        uVar12 = uVar12 & 0xfffffeff;
        *puVar10 = uVar12;
        uVar7 = (ulong)puVar10[100] | 0x100000000;
      }
      uVar13 = *puVar11;
      if ((uVar7 & 0x100000000) != 0) {
        uVar13 = (uint)uVar7;
      }
      *(uint *)(puVar14 + 1) = uVar13;
      if (uVar13 - 1 < 2) {
        uVar12 = uVar12 | 0x80;
        *puVar10 = uVar12;
        puVar10[0x65] = uVar13;
      }
      else if (uVar13 == 3) goto LAB_0037d4c8;
      uVar13 = puVar11[1];
      *puVar10 = uVar12 | 0x200;
      *(char *)(puVar10 + 99) = (char)uVar13;
      *(undefined1 *)(puVar14 + 4) = 1;
      if (puVar14[3] != 0) {
        pqVar6 = puVar14 + 5;
        uStack_40 = 0;
        FUN_003bb88c(*puVar14,pqVar6,&uStack_40,"starting send_message after send_initial_metadata")
        ;
        uVar3 = uStack_40;
        if ((uStack_40 & 1) != 0) {
          FUN_0055293c();
        }
      }
      goto LAB_0037d460;
    }
    func_0x007725d8();
  }
  func_0x007725a4();
LAB_0037d4c8:
  _abort();
  func_0x0040cf10();
  func_0x0040cf10();
  if ((uStack_38 & 1) != 0) {
    FUN_0055293c();
  }
  __Unwind_Resume();
  func_0x0040cf10();
  puVar14 = *(undefined8 **)(uVar3 + 0x10);
  *puVar14 = pqVar6[7];
  *(undefined4 *)(puVar14 + 1) = 0;
  puVar14[2] = 0;
  puVar14[3] = 0;
  *(undefined1 *)(puVar14 + 4) = 0;
  puVar16 = *(undefined4 **)(uVar3 + 8);
  uStack_81 = *(undefined1 *)(puVar16 + 1);
  puVar5 = &uStack_81;
  func_0x003b090c(puVar5,*puVar16);
  if ((int)puVar5 != 0) {
    *(undefined4 *)(puVar14 + 1) = *puVar16;
  }
  puVar14[6] = FUN_0037d7f0;
  puVar14[7] = uVar3;
  puVar14[8] = 0;
  *extraout_x8 = 0;
  return;
}



/* Entry: 0037d508; end: 0037d5b3;  */

void FUN_0037d508(undefined8 *param_1,long param_2,long param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined1 uStack_41;
  
  puVar2 = *(undefined8 **)(param_2 + 0x10);
  *puVar2 = *(undefined8 *)(param_3 + 0x38);
  *(undefined4 *)(puVar2 + 1) = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined1 *)(puVar2 + 4) = 0;
  puVar3 = *(undefined4 **)(param_2 + 8);
  uStack_41 = *(undefined1 *)(puVar3 + 1);
  puVar1 = &uStack_41;
  func_0x003b090c(puVar1,*puVar3);
  if ((int)puVar1 != 0) {
    *(undefined4 *)(puVar2 + 1) = *puVar3;
  }
  puVar2[6] = FUN_0037d7f0;
  puVar2[7] = param_2;
  puVar2[8] = 0;
  *param_1 = 0;
  return;
}



/* Entry: 0037d5b4; end: 0037d5d7;  */

void FUN_0037d5b4(long param_1)

{
  if ((*(ulong *)(*(long *)(param_1 + 0x10) + 0x10) & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 0037d5d8; end: 0037d69b;  */

void FUN_0037d5d8(undefined8 *param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  int *piVar5;
  char *pcStack_38;
  
  piVar5 = *(int **)(param_2 + 8);
  piVar4 = piVar5 + 1;
  func_0x003b088c(piVar4);
  uVar1 = (undefined1)*(undefined8 *)(param_3 + 8);
  FUN_003b0894();
  *(undefined1 *)(piVar5 + 1) = uVar1;
  uVar3 = *(ulong *)(param_3 + 8);
  func_0x003b0af4();
  iVar2 = 0;
  if ((uVar3 & 0xff00000000) != 0) {
    iVar2 = (int)uVar3;
  }
  *piVar5 = iVar2;
  func_0x003b090c();
  if (((ulong)piVar4 & 1) == 0) {
    iVar2 = *piVar5;
    FUN_003b05f0(iVar2,&pcStack_38);
    if (iVar2 == 0) {
      pcStack_38 = "<unknown>";
    }
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/http/message_compress/message_compress_filter.cc"
                 ,0x45,2,"default compression algorithm %s not enabled: switching to none");
    *piVar5 = 0;
  }
  if (*(int *)(param_3 + 0x14) != 0) {
    func_0x0077260c();
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 0037d69c; end: 0037d69f;  */

void FUN_0037d69c(void)

{
  return;
}



/* Entry: 0037d6a0; end: 0037d71f;  */

void FUN_0037d6a0(undefined8 *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  ulong uStack_28;
  
  lVar3 = param_1[3];
  if (lVar3 != 0) {
    uStack_28 = *param_2;
    if ((uStack_28 & 1) != 0) {
      piVar4 = (int *)(uStack_28 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_004007f4(lVar3,&uStack_28,*param_1);
    if ((uStack_28 & 1) != 0) {
      FUN_0055293c();
    }
    param_1[3] = 0;
  }
  return;
}



/* Entry: 0037d720; end: 0037d7ef;  */

void FUN_0037d720(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [296];
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (((*(uint *)(*(long *)(lVar2 + 8) + 0x30) & 0x80000002) == 0) && (*(int *)(param_1 + 8) != 0))
  {
    FUN_003ecf38(auStack_168);
    lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 8);
    uVar3 = *(undefined8 *)(lVar2 + 0x28);
    iVar1 = *(int *)(param_1 + 8);
    FUN_003b0e30(iVar1,uVar3,auStack_168);
    if (iVar1 != 0) {
      FUN_003ed190(auStack_168,uVar3);
      *(uint *)(lVar2 + 0x30) = *(uint *)(lVar2 + 0x30) | 0x80000000;
    }
    FUN_003ede40(auStack_168);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_003a6a04(param_2,lVar2);
  return;
}



/* Entry: 0037d7f0; end: 0037d877;  */

void FUN_0037d7f0(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_168 [296];
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(lVar2 + 0x18);
  if (((*(uint *)(*(long *)(lVar3 + 8) + 0x30) & 0x80000002) == 0) && (*(int *)(lVar2 + 8) != 0)) {
    FUN_003ecf38(auStack_168);
    lVar3 = *(long *)(*(long *)(lVar2 + 0x18) + 8);
    uVar4 = *(undefined8 *)(lVar3 + 0x28);
    iVar1 = *(int *)(lVar2 + 8);
    FUN_003b0e30(iVar1,uVar4,auStack_168);
    if (iVar1 != 0) {
      FUN_003ed190(auStack_168,uVar4);
      *(uint *)(lVar3 + 0x30) = *(uint *)(lVar3 + 0x30) | 0x80000000;
    }
    FUN_003ede40(auStack_168);
    lVar3 = *(long *)(lVar2 + 0x18);
  }
  *(undefined8 *)(lVar2 + 0x18) = 0;
  FUN_003a6a04(param_1,lVar3);
  return;
}



/* Entry: 0037d878; end: 0037d947;  */

void FUN_0037d878(undefined8 *param_1,long param_2,long param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  
  puVar1 = *(undefined4 **)(param_2 + 8);
  puVar2 = *(undefined8 **)(param_2 + 0x10);
  *puVar2 = *(undefined8 *)(param_3 + 0x38);
  puVar2[1] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  *(undefined1 *)(puVar2 + 8) = 0;
  *(undefined4 *)((long)puVar2 + 0x44) = *puVar1;
  *(undefined4 *)(puVar2 + 9) = 0;
  *(undefined1 *)(puVar2 + 0x11) = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0x16] = 0;
  puVar2[0x17] = 0;
  puVar2[0x14] = puVar2;
  puVar2[0x15] = 0;
  puVar2[3] = FUN_0037da30;
  puVar2[4] = puVar2;
  puVar2[5] = 0;
  puVar2[0xd] = FUN_0037db2c;
  puVar2[0xe] = puVar2;
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  puVar2[0x13] = FUN_0037df8c;
  lVar4 = *(long *)(param_3 + 0x10);
  func_0x0037f454(lVar4,*(undefined8 *)(puVar1 + 2));
  if (((lVar4 != 0) && (iVar3 = *(int *)(lVar4 + 0xc), -1 < iVar3)) &&
     ((iVar3 < *(int *)((long)puVar2 + 0x44) || (*(int *)((long)puVar2 + 0x44) < 0)))) {
    *(int *)((long)puVar2 + 0x44) = iVar3;
  }
  *param_1 = 0;
  return;
}



/* Entry: 0037d948; end: 0037d983;  */

void FUN_0037d948(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if ((*(ulong *)(lVar1 + 0xb8) & 1) != 0) {
    FUN_0055293c();
  }
  if ((*(ulong *)(lVar1 + 8) & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 0037d984; end: 0037da2b;  */

void FUN_0037d984(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined4 *puVar7;
  long lStack_40;
  long *plStack_38;
  
  plVar4 = &lStack_40;
  puVar7 = *(undefined4 **)(param_2 + 8);
  FUN_003a1d70(&lStack_40,*(undefined8 *)(param_3 + 8));
  FUN_0037fc70();
  plVar5 = plVar4;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar5 = plStack_38;
    }
  }
  *puVar7 = (int)plVar4;
  FUN_0037fc3c();
  *(long **)(puVar7 + 2) = plVar5;
  *param_1 = 0;
  return;
}



/* Entry: 0037da2c; end: 0037da2f;  */

void FUN_0037da2c(void)

{
  return;
}



/* Entry: 0037da30; end: 0037db2b;  */

void FUN_0037da30(undefined8 *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  int *piVar6;
  ulong uStack_30;
  ulong uStack_28;
  
  if (*param_2 == 0) {
    if (*(char *)param_1[7] < '\0') {
      uVar5 = (ulong)*(uint *)((char *)param_1[7] + 0x194) | 0x100000000;
    }
    else {
      uVar5 = 0;
    }
    uVar4 = 0;
    if ((uVar5 & 0x100000000) != 0) {
      uVar4 = (undefined4)uVar5;
    }
    *(undefined4 *)(param_1 + 9) = uVar4;
  }
  if (*(char *)(param_1 + 8) != '\0') {
    *(undefined1 *)(param_1 + 8) = 0;
    uStack_28 = 0;
    FUN_003bb88c(*param_1,param_1 + 0xc,&uStack_28,"continue recv_message_ready callback");
    if ((uStack_28 & 1) != 0) {
      FUN_0055293c();
    }
  }
  FUN_0037e168(param_1);
  uVar3 = param_1[6];
  param_1[6] = 0;
  uStack_30 = *param_2;
  if ((uStack_30 & 1) != 0) {
    piVar6 = (int *)(uStack_30 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar2) {
        *piVar6 = *piVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_00342584(&uStack_28,uVar3,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 0037db2c; end: 0037df8b;  */

void FUN_0037db2c(char *param_1,long **param_2)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  char *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  int *piVar8;
  long lVar9;
  char *unaff_x19;
  char *unaff_x20;
  char *pcVar10;
  ulong uVar11;
  undefined8 unaff_x21;
  bool bVar12;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long *plStack_290;
  ulong uStack_288;
  long *plStack_280;
  long *plStack_278;
  char *pcStack_270;
  char *pcStack_268;
  undefined1 *puStack_260;
  code *pcStack_258;
  undefined1 auStack_250 [8];
  char *pcStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 uStack_219;
  char *pcStack_218;
  ulong uStack_210;
  byte bStack_201;
  ulong uStack_200;
  char *pcStack_1f8;
  ulong uStack_1f0;
  byte bStack_1e1;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  long *plStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  undefined8 auStack_88 [4];
  char *pcStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar10 = (char *)*param_2;
  if (pcVar10 == (char *)0x0) {
    if (*(long *)(param_1 + 0x30) == 0) {
      if ((int)*(long *)(param_1 + 0x48) == 0) {
        pcStack_248 = (char *)0x0;
        goto LAB_0037db78;
      }
      if (((*(char *)(*(long *)(param_1 + 0x50) + 0x128) == '\0') ||
          (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x50) + 0x20), puVar6 == (undefined8 *)0x0)
          ) || (-1 < **(int **)(param_1 + 0x58))) {
        plStack_a8 = (long *)0x0;
        param_2 = &plStack_a8;
        FUN_0037e254();
      }
      else if (((int)*(uint *)(param_1 + 0x44) < 0) ||
              (puVar6 <= (undefined8 *)(ulong)*(uint *)(param_1 + 0x44))) {
        FUN_003ecf38(&pcStack_1f8);
        iVar2 = (int)*(long *)(param_1 + 0x48);
        FUN_003b0f70(iVar2,*(long *)(param_1 + 0x50),&pcStack_1f8);
        if (iVar2 == 0) {
          pcStack_68 = "Unexpected error decompressing data for algorithm with enum value ";
          uStack_60 = 0x42;
          uVar11 = (ulong)*(uint *)(param_1 + 0x48);
          func_0x00574ac0(uVar11,auStack_88);
          lStack_90 = uVar11 - (long)auStack_88;
          pcVar10 = (char *)&pcStack_218;
          puStack_98 = auStack_88;
          FUN_00575d30(&pcStack_218,&pcStack_68,&puStack_98);
          pcVar5 = pcStack_218;
          if (-1 < (char)bStack_201) {
            uStack_210 = (ulong)bStack_201;
            pcVar5 = pcVar10;
          }
          uStack_230 = 0;
          uStack_228 = 0;
          uStack_238 = 0;
          FUN_003b646c(&uStack_200,2,pcVar5,uStack_210,&uStack_219,&uStack_238);
          uVar11 = *(ulong *)(param_1 + 8);
          if (uStack_200 != uVar11) {
            *(ulong *)(param_1 + 8) = uStack_200;
            uStack_200 = 0x36;
            if ((uVar11 & 1) != 0) {
              FUN_0055293c();
            }
          }
          FUN_0033c494(&uStack_200);
          puStack_a0 = &uStack_238;
          FUN_0033d548(&puStack_a0);
          if ((char)bStack_201 < '\0') {
            __ZdlPv(pcStack_218);
          }
        }
        else {
          **(uint **)(param_1 + 0x58) = **(uint **)(param_1 + 0x58) & 0x3fffffff | 0x40000000;
          FUN_003ed190(*(long *)(param_1 + 0x50),&pcStack_1f8);
        }
        plStack_240 = *(long **)(param_1 + 8);
        if (((ulong)plStack_240 & 1) != 0) {
          piVar8 = (int *)((long)plStack_240 - 1);
          do {
            cVar1 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar8,0x10);
            if (bVar12) {
              *piVar8 = *piVar8 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        param_2 = &plStack_240;
        FUN_0037e254(param_1);
        FUN_0033c494(&plStack_240);
        param_1 = (char *)&pcStack_1f8;
        FUN_003ede40();
      }
      else {
        pcStack_68 = "Received message larger than max (%u vs. %d)";
        uStack_60 = 0x2c;
        pcVar10 = (char *)&pcStack_1f8;
        puStack_a0 = puVar6;
        FUN_0037e2d8(&pcStack_1f8,&pcStack_68,&puStack_a0);
        pcVar5 = pcStack_1f8;
        if (-1 < (char)bStack_1e1) {
          uStack_1f0 = (ulong)bStack_1e1;
          pcVar5 = pcVar10;
        }
        uStack_c0 = 0;
        uStack_b8 = 0;
        uStack_c8 = 0;
        FUN_003b646c(auStack_b0,2,pcVar5,uStack_1f0,&uStack_200,&uStack_c8);
        FUN_003be104(&pcStack_218,auStack_b0,3,8);
        plVar3 = *(long **)(param_1 + 8);
        if ((long *)pcStack_218 != plVar3) {
          *(char **)(param_1 + 8) = pcStack_218;
          pcStack_218 = segment_command_00000020.segname + 0xe;
          if (((ulong)plVar3 & 1) != 0) {
            FUN_0055293c();
          }
        }
        FUN_0033c494(&pcStack_218);
        FUN_0033c494(auStack_b0);
        puStack_98 = &uStack_c8;
        FUN_0033d548(&puStack_98);
        if ((char)bStack_1e1 < '\0') {
          __ZdlPv(pcStack_1f8);
        }
        plStack_d0 = *(long **)(param_1 + 8);
        if (((ulong)plStack_d0 & 1) != 0) {
          piVar8 = (int *)((long)plStack_d0 - 1);
          do {
            cVar1 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar8,0x10);
            if (bVar12) {
              *piVar8 = *piVar8 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        param_2 = &plStack_d0;
        FUN_0037e254(param_1);
        param_1 = (char *)&plStack_d0;
        FUN_0033c494();
      }
      goto LAB_0037db90;
    }
    param_1[0x40] = 1;
    param_1 = *(char **)param_1;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
      pcVar10 = "Deferring OnRecvMessageReady until after OnRecvInitialMetadataReady";
      goto FUN_003bb974;
    }
  }
  else {
    pcStack_248 = pcVar10;
    if (((ulong)pcVar10 & 1) != 0) {
      pcVar5 = pcVar10 + -1;
      do {
        cVar1 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(pcVar5,0x10);
        if (bVar12) {
          *(int *)pcVar5 = *(int *)pcVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
LAB_0037db78:
    param_2 = (long **)&pcStack_248;
    FUN_0037e254();
    if (((ulong)pcVar10 & 1) != 0) {
      param_1 = pcVar10;
      FUN_0055293c();
    }
LAB_0037db90:
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
      return;
    }
  }
  ___stack_chk_fail();
  FUN_0033c494(&uStack_200);
  puStack_a0 = &uStack_238;
  FUN_0033d548(&puStack_a0);
  if ((char)bStack_201 < '\0') {
    __ZdlPv(pcStack_218);
  }
  FUN_003ede40(&pcStack_1f8);
  pcVar5 = param_1;
  __Unwind_Resume();
  pcStack_270 = pcVar10;
  pcStack_268 = param_1;
  puStack_260 = &stack0xfffffffffffffff0;
  pcStack_258 = FUN_0037df8c;
  if ((*(long *)(pcVar5 + 0x30) != 0) || (*(long *)(pcVar5 + 0x80) != 0)) {
    pcVar5[0x88] = 1;
    plVar3 = *(long **)(pcVar5 + 0xb8);
    plVar7 = *param_2;
    if (plVar7 != plVar3) {
      if (((ulong)plVar7 & 1) != 0) {
        piVar8 = (int *)((long)plVar7 + -1);
        do {
          cVar1 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar12) {
            *piVar8 = *piVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        plVar7 = *param_2;
      }
      *(long **)(pcVar5 + 0xb8) = plVar7;
      if (((ulong)plVar3 & 1) != 0) {
        FUN_0055293c();
      }
    }
    param_1 = *(char **)pcVar5;
    pcVar10 = 
    "Deferring OnRecvTrailingMetadataReady until after OnRecvInitialMetadataReady and OnRecvMessageReady"
    ;
    register0x00000008 = (BADSPACEBASE *)auStack_250;
    unaff_x19 = pcStack_268;
    unaff_x20 = pcStack_270;
    unaff_x29 = puStack_260;
    unaff_x30 = pcStack_258;
FUN_003bb974:
    *(char **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(char **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    do {
      lVar9 = *(long *)param_1;
      lVar4 = lVar9 + -1;
      cVar1 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar12) {
        *(long *)param_1 = lVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 != 0) {
      if (lVar9 == 0) {
        func_0x00773d94();
        func_0x0040cf10();
        func_0x0040cf10();
        FUN_0033c494((undefined1 *)((long)register0x00000008 + -0x38));
        FUN_0033c494((undefined1 *)((long)register0x00000008 + -0x30));
        pcVar5 = param_1;
        __Unwind_Resume();
        *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_x21;
        *(char **)((long)register0x00000008 + -0x60) = unaff_x20;
        *(char **)((long)register0x00000008 + -0x58) = param_1;
        *(undefined1 **)((long)register0x00000008 + -0x50) =
             (undefined1 *)((long)register0x00000008 + -0x10);
        *(code **)((long)register0x00000008 + -0x48) = FUN_003bba54;
        plVar3 = (long *)(pcVar5 + 0x58);
        do {
          pcVar5 = (char *)*plVar3;
          if (((ulong)pcVar5 & 1) == 0) {
            *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
LAB_003bbad0:
            do {
              if ((char *)*plVar3 != pcVar5) {
                ClearExclusiveLocal();
                bVar12 = true;
                goto LAB_003bbb24;
              }
              cVar1 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar12) {
                *plVar3 = (long)pcVar10;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (pcVar5 == (char *)0x0) goto LAB_003bbb14;
            *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
            FUN_003c1e6c((undefined1 *)((long)register0x00000008 + -0x79),pcVar5,
                         (undefined1 *)((long)register0x00000008 + -0x90));
            if ((*(ulong *)((long)register0x00000008 + -0x90) & 1) != 0) {
              FUN_0055293c();
            }
            bVar12 = false;
            pcVar10 = pcVar5;
          }
          else {
            FUN_003b7b3c((undefined1 *)((long)register0x00000008 + -0x78),
                         (ulong)pcVar5 & 0xfffffffffffffffe);
            uVar11 = *(ulong *)((long)register0x00000008 + -0x78);
            if (uVar11 == 0) goto LAB_003bbad0;
            *(ulong *)((long)register0x00000008 + -0x88) = uVar11;
            if ((uVar11 & 1) != 0) {
              piVar8 = (int *)(uVar11 - 1);
              do {
                cVar1 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(piVar8,0x10);
                if (bVar12) {
                  *piVar8 = *piVar8 + 1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            FUN_003c1e6c((undefined1 *)((long)register0x00000008 + -0x79),pcVar10,
                         (undefined1 *)((long)register0x00000008 + -0x88));
            if ((*(ulong *)((long)register0x00000008 + -0x88) & 1) != 0) {
              FUN_0055293c();
            }
LAB_003bbb14:
            bVar12 = false;
          }
LAB_003bbb24:
          if ((*(ulong *)((long)register0x00000008 + -0x78) & 1) != 0) {
            FUN_0055293c();
          }
          if (!bVar12) {
            return;
          }
        } while( true );
      }
      plVar3 = (long *)(param_1 + 8);
      plVar7 = plVar3;
      FUN_0033b3e4(plVar3,(undefined1 *)((long)register0x00000008 + -0x21));
      while (plVar7 == (long *)0x0) {
        plVar7 = plVar3;
        FUN_0033b3e4(plVar3,(undefined1 *)((long)register0x00000008 + -0x21));
      }
      FUN_003b7b6c((undefined1 *)((long)register0x00000008 + -0x30),plVar7[3]);
      plVar7[3] = 0;
      uVar11 = *(ulong *)((long)register0x00000008 + -0x30);
      *(ulong *)((long)register0x00000008 + -0x38) = uVar11;
      if ((uVar11 & 1) != 0) {
        piVar8 = (int *)(uVar11 - 1);
        do {
          cVar1 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar12) {
            *piVar8 = *piVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_003bb81c();
      if ((uVar11 & 1) != 0) {
        FUN_0055293c(uVar11);
      }
      if ((*(ulong *)((long)register0x00000008 + -0x30) & 1) != 0) {
        FUN_0055293c();
      }
    }
    return;
  }
  plStack_280 = *param_2;
  if (((ulong)plStack_280 & 1) != 0) {
    piVar8 = (int *)((long)plStack_280 + -1);
    do {
      cVar1 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar12) {
        *piVar8 = *piVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_288 = *(ulong *)(pcVar5 + 8);
  if ((uStack_288 & 1) != 0) {
    piVar8 = (int *)(uStack_288 - 1);
    do {
      cVar1 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar12) {
        *piVar8 = *piVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003be56c(&plStack_278,&plStack_280,&uStack_288);
  plVar3 = *param_2;
  if (plStack_278 != plVar3) {
    *param_2 = plStack_278;
    plStack_278 = (long *)0x36;
    if (((ulong)plVar3 & 1) == 0) goto LAB_0037e090;
    FUN_0055293c();
    plVar3 = plStack_278;
  }
  if (((ulong)plVar3 & 1) != 0) {
    FUN_0055293c();
  }
LAB_0037e090:
  if ((uStack_288 & 1) != 0) {
    FUN_0055293c();
  }
  if (((ulong)plStack_280 & 1) != 0) {
    FUN_0055293c();
  }
  uVar11 = *(ulong *)(pcVar5 + 8);
  if (uVar11 != 0) {
    *(long *)(pcVar5 + 8) = 0;
    plStack_278 = (long *)0x36;
    if ((uVar11 & 1) != 0) {
      FUN_0055293c();
    }
  }
  lVar4 = *(long *)(pcVar5 + 0xb0);
  plStack_290 = *param_2;
  *(long *)(pcVar5 + 0xb0) = 0;
  if (((ulong)plStack_290 & 1) != 0) {
    piVar8 = (int *)((long)plStack_290 + -1);
    do {
      cVar1 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar12) {
        *piVar8 = *piVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_00342584(&plStack_278,lVar4,&plStack_290);
  if (((ulong)plStack_290 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 0037df8c; end: 0037e167;  */

void FUN_0037df8c(undefined8 *param_1,ulong *param_2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  char *pcVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  char *pcVar11;
  bool bVar12;
  ulong uStack_90;
  ulong uStack_88;
  undefined1 uStack_79;
  ulong uStack_78;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  undefined8 uStack_28;
  
  if ((param_1[6] != 0) || (param_1[0x10] != 0)) {
    *(undefined1 *)(param_1 + 0x11) = 1;
    uVar3 = param_1[0x17];
    uVar8 = *param_2;
    if (uVar8 != uVar3) {
      if ((uVar8 & 1) != 0) {
        piVar9 = (int *)(uVar8 - 1);
        do {
          cVar1 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar12) {
            *piVar9 = *piVar9 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        uVar8 = *param_2;
      }
      param_1[0x17] = uVar8;
      if ((uVar3 & 1) != 0) {
        FUN_0055293c();
      }
    }
    plVar4 = (long *)*param_1;
    pcVar7 = 
    "Deferring OnRecvTrailingMetadataReady until after OnRecvInitialMetadataReady and OnRecvMessageReady"
    ;
    do {
      lVar10 = *plVar4;
      lVar2 = lVar10 + -1;
      cVar1 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar12) {
        *plVar4 = lVar2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar2 != 0) {
      if (lVar10 == 0) {
        func_0x00773d94();
        func_0x0040cf10();
        func_0x0040cf10();
        FUN_0033c494(&uStack_38);
        FUN_0033c494(&uStack_30);
        __Unwind_Resume();
        plVar4 = plVar4 + 0xb;
        do {
          pcVar11 = (char *)*plVar4;
          if (((ulong)pcVar11 & 1) == 0) {
            uStack_78 = 0;
LAB_003bbad0:
            do {
              if ((char *)*plVar4 != pcVar11) {
                ClearExclusiveLocal();
                bVar12 = true;
                goto LAB_003bbb24;
              }
              cVar1 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar12) {
                *plVar4 = (long)pcVar7;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (pcVar11 == (char *)0x0) goto LAB_003bbb14;
            uStack_90 = 0;
            FUN_003c1e6c(&uStack_79,pcVar11,&uStack_90);
            if ((uStack_90 & 1) != 0) {
              FUN_0055293c();
            }
            bVar12 = false;
            pcVar7 = pcVar11;
          }
          else {
            FUN_003b7b3c(&uStack_78,(ulong)pcVar11 & 0xfffffffffffffffe);
            if (uStack_78 == 0) goto LAB_003bbad0;
            uStack_88 = uStack_78;
            if ((uStack_78 & 1) != 0) {
              piVar9 = (int *)(uStack_78 - 1);
              do {
                cVar1 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                if (bVar12) {
                  *piVar9 = *piVar9 + 1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            FUN_003c1e6c(&uStack_79,pcVar7,&uStack_88);
            if ((uStack_88 & 1) != 0) {
              FUN_0055293c();
            }
LAB_003bbb14:
            bVar12 = false;
          }
LAB_003bbb24:
          if ((uStack_78 & 1) != 0) {
            FUN_0055293c();
          }
          if (!bVar12) {
            return;
          }
        } while( true );
      }
      plVar4 = plVar4 + 1;
      plVar5 = plVar4;
      FUN_0033b3e4(plVar4,(long)&uStack_28 + 7);
      while (plVar5 == (long *)0x0) {
        plVar5 = plVar4;
        FUN_0033b3e4(plVar4,(long)&uStack_28 + 7);
      }
      FUN_003b7b6c(&uStack_30,plVar5[3]);
      uVar3 = uStack_30;
      plVar5[3] = 0;
      uStack_38 = uStack_30;
      if ((uStack_30 & 1) != 0) {
        piVar9 = (int *)(uStack_30 - 1);
        do {
          cVar1 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar12) {
            *piVar9 = *piVar9 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_003bb81c();
      if ((uVar3 & 1) != 0) {
        FUN_0055293c(uVar3);
      }
      if ((uStack_30 & 1) != 0) {
        FUN_0055293c();
      }
    }
    return;
  }
  uStack_30 = *param_2;
  if ((uStack_30 & 1) != 0) {
    piVar9 = (int *)(uStack_30 - 1);
    do {
      cVar1 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar12) {
        *piVar9 = *piVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_38 = param_1[1];
  if ((uStack_38 & 1) != 0) {
    piVar9 = (int *)(uStack_38 - 1);
    do {
      cVar1 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar12) {
        *piVar9 = *piVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003be56c(&uStack_28,&uStack_30,&uStack_38);
  uVar3 = *param_2;
  if (uStack_28 != uVar3) {
    *param_2 = uStack_28;
    uStack_28 = 0x36;
    if ((uVar3 & 1) == 0) goto LAB_0037e090;
    FUN_0055293c();
    uVar3 = uStack_28;
  }
  if ((uVar3 & 1) != 0) {
    FUN_0055293c();
  }
LAB_0037e090:
  if ((uStack_38 & 1) != 0) {
    FUN_0055293c();
  }
  if ((uStack_30 & 1) != 0) {
    FUN_0055293c();
  }
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    param_1[1] = 0;
    uStack_28 = 0x36;
    if ((uVar3 & 1) != 0) {
      FUN_0055293c();
    }
  }
  uVar6 = param_1[0x16];
  uStack_40 = *param_2;
  param_1[0x16] = 0;
  if ((uStack_40 & 1) != 0) {
    piVar9 = (int *)(uStack_40 - 1);
    do {
      cVar1 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar12) {
        *piVar9 = *piVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_00342584(&uStack_28,uVar6,&uStack_40);
  if ((uStack_40 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 0037e168; end: 0037e253;  */

void FUN_0037e168(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  int *piVar5;
  ulong uVar6;
  ulong auStack_38 [3];
  
  if (*(char *)(param_1 + 0x11) != '\0') {
    *(undefined1 *)(param_1 + 0x11) = 0;
    uVar6 = param_1[0x17];
    uVar3 = uVar6;
    if ((uVar6 & 1) != 0) {
      piVar5 = (int *)(uVar6 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      uVar3 = param_1[0x17];
    }
    auStack_38[2] = uVar6;
    if (uVar3 != 0) {
      param_1[0x17] = 0;
      auStack_38[1] = 0x36;
      if ((uVar3 & 1) != 0) {
        FUN_0055293c();
      }
    }
    uVar4 = *param_1;
    if ((uVar6 & 1) != 0) {
      piVar5 = (int *)(uVar6 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    auStack_38[0] = uVar6;
    FUN_003bb88c(uVar4,param_1 + 0x12,auStack_38,"Continuing OnRecvTrailingMetadataReady");
    if ((auStack_38[0] & 1) != 0) {
      FUN_0055293c();
    }
    if ((uVar6 & 1) != 0) {
      FUN_0055293c(uVar6);
    }
  }
  return;
}



/* Entry: 0037e254; end: 0037e2d7;  */

void FUN_0037e254(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_30;
  undefined1 uStack_21;
  
  FUN_0037e168();
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  uStack_30 = *param_2;
  if ((uStack_30 & 1) != 0) {
    piVar4 = (int *)(uStack_30 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_00342584(&uStack_21,uVar3,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 0037e2d8; end: 0037e353;  */

undefined ** FUN_0037e2d8(long *param_1,ulong *param_2,uint *param_3)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  ulong *puVar9;
  uint *puVar10;
  dword *pdVar11;
  ulong *puVar12;
  undefined8 uVar13;
  undefined8 *extraout_x8;
  ulong uVar14;
  uint uVar15;
  dword *pdStack_160;
  ulong *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined1 auStack_140 [8];
  ulong *puStack_138;
  ulong *puStack_130;
  undefined **ppuStack_128;
  undefined1 auStack_120 [8];
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  ulong uStack_b8;
  ulong *puStack_b0;
  ulong *puStack_a8;
  char cStack_a0;
  undefined **ppuStack_98;
  long lStack_88;
  undefined1 *puStack_50;
  code *pcStack_48;
  ulong auStack_38 [3];
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuVar7 = (undefined **)*param_1;
  puVar10 = (uint *)param_1[1];
  auStack_38[0] = *param_2;
  auStack_38[1] = 0x560a20;
  auStack_38[2] = (ulong)*param_3;
  uStack_20 = 0x5606ac;
  puVar9 = auStack_38;
  uVar13 = 2;
  FUN_0056189c();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return ppuVar7;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_0037e354;
  lStack_88 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = *puVar10;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((uVar2 >> 2 & 1) == 0) {
    func_0x00553638(&ppuStack_c0,"Missing :method header",0x16);
    pdVar11 = (dword *)&ppuStack_c0;
    FUN_0037849c(&uStack_e0);
    ppuVar7 = &PTR___tlv_bootstrap_00b2c390;
    (*(code *)PTR___tlv_bootstrap_00b2c390)();
    puVar5 = (ulong *)*ppuVar7;
    do {
      uVar14 = *puVar5;
      uVar1 = uVar14 + 0x10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
      if (bVar4) {
        *puVar5 = uVar1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar5[2] < uVar1) {
      pdVar11 = &MACH_HEADER.ncmds;
      func_0x003d6048();
      puVar12 = puVar9;
    }
    else {
      puVar5 = (ulong *)((long)puVar5 + uVar14 + 0x30);
      puVar12 = puVar9;
    }
    *puVar5 = (ulong)&PTR_FUN_009de8c8;
    puVar5[1] = uStack_e0;
    *extraout_x8 = puVar5;
    ppuVar7 = ppuStack_c0;
    if (((ulong)ppuStack_c0 & 1) != 0) {
      FUN_0055293c();
    }
  }
  else {
    uVar15 = puVar10[0x6a];
    if ((uVar15 == 1 || uVar15 == 3) || ((uVar15 == 2 && (*(char *)((long)ppuVar7 + 9) == '\0')))) {
      func_0x00553638(&ppuStack_c0,"Bad method header",0x11);
      pdVar11 = (dword *)&ppuStack_c0;
      FUN_0037849c(&uStack_d8);
      ppuVar7 = &PTR___tlv_bootstrap_00b2c390;
      (*(code *)PTR___tlv_bootstrap_00b2c390)();
      puVar5 = (ulong *)*ppuVar7;
      do {
        uVar14 = *puVar5;
        uVar1 = uVar14 + 0x10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar4) {
          *puVar5 = uVar1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar5[2] < uVar1) {
        pdVar11 = &MACH_HEADER.ncmds;
        func_0x003d6048();
        puVar12 = puVar9;
      }
      else {
        puVar5 = (ulong *)((long)puVar5 + uVar14 + 0x30);
        puVar12 = puVar9;
      }
      *puVar5 = (ulong)&PTR_FUN_009de8c8;
      puVar5[1] = uStack_d8;
      *extraout_x8 = puVar5;
      ppuVar7 = ppuStack_c0;
      if (((ulong)ppuStack_c0 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else if ((uVar2 >> 6 & 1) == 0) {
      func_0x00553638(&ppuStack_c0,"Missing :te header",0x12);
      pdVar11 = (dword *)&ppuStack_c0;
      FUN_0037849c(&uStack_e8);
      ppuVar7 = &PTR___tlv_bootstrap_00b2c390;
      (*(code *)PTR___tlv_bootstrap_00b2c390)();
      puVar5 = (ulong *)*ppuVar7;
      do {
        uVar14 = *puVar5;
        uVar1 = uVar14 + 0x10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar4) {
          *puVar5 = uVar1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar5[2] < uVar1) {
        pdVar11 = &MACH_HEADER.ncmds;
        func_0x003d6048();
        puVar12 = puVar9;
      }
      else {
        puVar5 = (ulong *)((long)puVar5 + uVar14 + 0x30);
        puVar12 = puVar9;
      }
      *puVar5 = (ulong)&PTR_FUN_009de8c8;
      puVar5[1] = uStack_e8;
      *extraout_x8 = puVar5;
      ppuVar7 = ppuStack_c0;
      if (((ulong)ppuStack_c0 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      *puVar10 = uVar2 & 0xffffffbf;
      if ((char)puVar10[0x66] == '\0') {
        if ((uVar2 >> 4 & 1) == 0) {
          func_0x00553638(&ppuStack_c0,"Missing :scheme header",0x16);
          pdVar11 = (dword *)&ppuStack_c0;
          FUN_0037849c(&uStack_100);
          ppuVar7 = &PTR___tlv_bootstrap_00b2c390;
          (*(code *)PTR___tlv_bootstrap_00b2c390)();
          puVar5 = (ulong *)*ppuVar7;
          do {
            uVar14 = *puVar5;
            uVar1 = uVar14 + 0x10;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
            if (bVar4) {
              *puVar5 = uVar1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (puVar5[2] < uVar1) {
            pdVar11 = &MACH_HEADER.ncmds;
            func_0x003d6048();
            puVar12 = puVar9;
          }
          else {
            puVar5 = (ulong *)((long)puVar5 + uVar14 + 0x30);
            puVar12 = puVar9;
          }
          *puVar5 = (ulong)&PTR_FUN_009de8c8;
          puVar5[1] = uStack_100;
          *extraout_x8 = puVar5;
          ppuVar7 = ppuStack_c0;
          if (((ulong)ppuStack_c0 & 1) != 0) {
            FUN_0055293c();
          }
        }
        else {
          *puVar10 = uVar2 & 0xffffffaf;
          if (puVar10[0x68] == 2) {
            func_0x00553638(&ppuStack_c0,"Bad :scheme header",0x12);
            pdVar11 = (dword *)&ppuStack_c0;
            FUN_0037849c(&uStack_f8);
            ppuVar7 = &PTR___tlv_bootstrap_00b2c390;
            (*(code *)PTR___tlv_bootstrap_00b2c390)();
            puVar5 = (ulong *)*ppuVar7;
            do {
              uVar14 = *puVar5;
              uVar1 = uVar14 + 0x10;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
              if (bVar4) {
                *puVar5 = uVar1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (puVar5[2] < uVar1) {
              pdVar11 = &MACH_HEADER.ncmds;
              func_0x003d6048();
              puVar12 = puVar9;
            }
            else {
              puVar5 = (ulong *)((long)puVar5 + uVar14 + 0x30);
              puVar12 = puVar9;
            }
            *puVar5 = (ulong)&PTR_FUN_009de8c8;
            puVar5[1] = uStack_f8;
            *extraout_x8 = puVar5;
            ppuVar7 = ppuStack_c0;
            if (((ulong)ppuStack_c0 & 1) != 0) {
              FUN_0055293c();
            }
          }
          else {
            uVar15 = uVar2 & 0xffffff8f;
            *puVar10 = uVar15;
            if ((uVar2 & 1) == 0) {
              func_0x00553638(&puStack_d0,"Missing :path header",0x14);
              pdVar11 = (dword *)&puStack_d0;
              FUN_0037849c(&ppuStack_108);
              ppuStack_c0 = ppuStack_108;
              pppuVar6 = &ppuStack_c0;
              func_0x0037f000();
              puVar12 = puVar9;
            }
            else {
              puVar12 = puVar9;
              if ((uVar2 >> 1 & 1) == 0) {
                if ((uVar2 >> 0x10 & 1) != 0) {
                  uStack_b8 = *(ulong *)(puVar10 + 0x46);
                  ppuStack_c0 = *(undefined ***)(puVar10 + 0x44);
                  puStack_a8 = *(ulong **)(puVar10 + 0x4a);
                  puStack_b0 = *(ulong **)(puVar10 + 0x48);
                  puVar10[0x46] = 0;
                  puVar10[0x47] = 0;
                  puVar10[0x44] = 0;
                  puVar10[0x45] = 0;
                  puVar10[0x4a] = 0;
                  puVar10[0x4b] = 0;
                  puVar10[0x48] = 0;
                  puVar10[0x49] = 0;
                  *puVar10 = uVar2 & 0xfffeff8f;
                  FUN_0034b418(puVar10 + 0x44);
                  cStack_a0 = '\x01';
                  FUN_0034bbe0(puVar10,&ppuStack_c0);
                  if (cStack_a0 != '\0') {
                    FUN_0034b418(&ppuStack_c0);
                  }
                }
                uVar15 = *puVar10;
              }
              if ((uVar15 >> 1 & 1) != 0) {
                if ((*(char *)(ppuVar7 + 1) == '\0') &&
                   (*puVar10 = uVar15 & 0xffffbfff, (uVar15 >> 0xe & 1) != 0)) {
                  FUN_0034b418(puVar10 + 0x54);
                }
                ppuVar7 = &PTR___tlv_bootstrap_00b2c390;
                (*(code *)PTR___tlv_bootstrap_00b2c390)();
                puVar5 = (ulong *)*ppuVar7;
                do {
                  uVar14 = *puVar5;
                  uVar1 = uVar14 + 0x10;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
                  if (bVar4) {
                    *puVar5 = uVar1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (puVar5[2] < uVar1) {
                  func_0x003d6048(puVar5,0x10);
                }
                else {
                  puVar5 = (ulong *)((long)puVar5 + uVar14 + 0x30);
                }
                *puVar5 = 0;
                puVar5[1] = 0;
                puVar12 = puVar5;
                FUN_0037e9e8(&ppuStack_128,uVar13,puVar10);
                ppuVar7 = ppuStack_128;
                ppuStack_128 = &PTR_PTR_00afa4e0;
                auStack_120[0] = 0;
                ppuStack_118 = ppuVar7;
                (**(code **)(PTR_PTR_00afa4e0 + 8))(&PTR_PTR_00afa4e0);
                auStack_140[0] = 0;
                puStack_d0._0_1_ = 0;
                ppuStack_118 = &PTR_PTR_00afa4e0;
                ppuStack_c0 = (undefined **)((ulong)ppuStack_c0 & 0xffffffffffffff00);
                uStack_b8 = uStack_b8 & 0xffffffffffffff00;
                cStack_a0 = '\0';
                ppuStack_98 = ppuVar7;
                ppuStack_c8 = &PTR_PTR_00afa4e0;
                puStack_138 = puVar5;
                puStack_130 = puVar9;
                puStack_b0 = puVar5;
                puStack_a8 = puVar9;
                FUN_0037eb2c(&puStack_d0);
                pdVar11 = (dword *)&ppuStack_c0;
                FUN_0037ea20(extraout_x8);
                func_0x0037eacc(&ppuStack_c0);
                FUN_0037eb04(auStack_140);
                FUN_0037eb2c(auStack_120);
                ppuVar7 = ppuStack_128;
                (**(code **)(*ppuStack_128 + 8))();
                goto LAB_0037e8fc;
              }
              func_0x00553638(&puStack_d0,"Missing :authority header",0x19);
              pdVar11 = (dword *)&puStack_d0;
              FUN_0037849c(&ppuStack_110);
              ppuStack_c0 = ppuStack_110;
              pppuVar6 = &ppuStack_c0;
              func_0x0037f000();
            }
            *extraout_x8 = pppuVar6;
            ppuVar7 = &puStack_d0;
            FUN_0033c494();
          }
        }
      }
      else {
        func_0x00553638(&ppuStack_c0,"Bad :te header",0xe);
        pdVar11 = (dword *)&ppuStack_c0;
        FUN_0037849c(&uStack_f0);
        ppuVar7 = &PTR___tlv_bootstrap_00b2c390;
        (*(code *)PTR___tlv_bootstrap_00b2c390)();
        puVar5 = (ulong *)*ppuVar7;
        do {
          uVar14 = *puVar5;
          uVar1 = uVar14 + 0x10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
          if (bVar4) {
            *puVar5 = uVar1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar5[2] < uVar1) {
          pdVar11 = &MACH_HEADER.ncmds;
          func_0x003d6048();
          puVar12 = puVar9;
        }
        else {
          puVar5 = (ulong *)((long)puVar5 + uVar14 + 0x30);
          puVar12 = puVar9;
        }
        *puVar5 = (ulong)&PTR_FUN_009de8c8;
        puVar5[1] = uStack_f0;
        *extraout_x8 = puVar5;
        ppuVar7 = ppuStack_c0;
        if (((ulong)ppuStack_c0 & 1) != 0) {
          FUN_0055293c();
        }
      }
    }
  }
LAB_0037e8fc:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_88) {
    return ppuVar7;
  }
  ___stack_chk_fail();
  if (cStack_a0 != '\0') {
    FUN_0034b418(&ppuStack_c0);
  }
  __Unwind_Resume();
  pcStack_148 = FUN_0037e9e8;
  ppuVar7 = (undefined **)ppuVar7[3];
  pdStack_160 = pdVar11;
  puStack_158 = puVar12;
  ppuStack_150 = &puStack_50;
  if (ppuVar7 != (undefined **)0x0) {
    (**(code **)(*ppuVar7 + 0x30))(ppuVar7,&pdStack_160);
    return ppuVar7;
  }
  FUN_0033e390();
  ppuVar8 = &PTR___tlv_bootstrap_00b2c390;
  (*(code *)PTR___tlv_bootstrap_00b2c390)();
  puVar9 = (ulong *)*ppuVar8;
  do {
    uVar14 = *puVar9;
    uVar1 = uVar14 + 0x40;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar9,0x10);
    if (bVar4) {
      *puVar9 = uVar1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (puVar9[2] < uVar1) {
    func_0x003d6048(puVar9,0x40);
  }
  else {
    puVar9 = (ulong *)((long)puVar9 + uVar14 + 0x30);
  }
  *puVar9 = (ulong)&PTR_FUN_009de900;
  *(char *)(puVar9 + 1) = (char)*pdVar11;
  *(undefined1 *)(puVar9 + 2) = 0;
  puVar9[3] = *(ulong *)(pdVar11 + 4);
  puVar9[4] = *(ulong *)(pdVar11 + 6);
  *(undefined1 *)(puVar9 + 5) = 0;
  puVar9[6] = *(ulong *)(pdVar11 + 10);
  *(undefined ***)(pdVar11 + 10) = &PTR_PTR_00afa4e0;
  *ppuVar7 = (undefined *)puVar9;
  return ppuVar7;
}



/* Entry: 0037e354; end: 0037e9e7;  */

undefined **
FUN_0037e354(undefined8 *param_1,long param_2,uint *param_3,ulong *param_4,undefined8 param_5)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  dword *pdVar9;
  ulong *puVar10;
  ulong uVar11;
  uint uVar12;
  dword *pdStack_120;
  ulong *puStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined1 auStack_100 [8];
  ulong *puStack_f8;
  ulong *puStack_f0;
  undefined **ppuStack_e8;
  undefined1 auStack_e0 [8];
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  ulong uStack_78;
  ulong *puStack_70;
  ulong *puStack_68;
  char cStack_60;
  undefined **ppuStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = *param_3;
  if ((uVar2 >> 2 & 1) == 0) {
    func_0x00553638(&ppuStack_80,"Missing :method header",0x16);
    pdVar9 = (dword *)&ppuStack_80;
    FUN_0037849c(&uStack_a0);
    ppuVar7 = &PTR___tlv_bootstrap_00b2c390;
    (*(code *)PTR___tlv_bootstrap_00b2c390)();
    puVar5 = (ulong *)*ppuVar7;
    do {
      uVar11 = *puVar5;
      uVar1 = uVar11 + 0x10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
      if (bVar4) {
        *puVar5 = uVar1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar5[2] < uVar1) {
      pdVar9 = &MACH_HEADER.ncmds;
      func_0x003d6048();
      puVar10 = param_4;
    }
    else {
      puVar5 = (ulong *)((long)puVar5 + uVar11 + 0x30);
      puVar10 = param_4;
    }
    *puVar5 = (ulong)&PTR_FUN_009de8c8;
    puVar5[1] = uStack_a0;
    *param_1 = puVar5;
    ppuVar7 = ppuStack_80;
    if (((ulong)ppuStack_80 & 1) != 0) {
      FUN_0055293c();
    }
  }
  else {
    uVar12 = param_3[0x6a];
    if ((uVar12 == 1 || uVar12 == 3) || ((uVar12 == 2 && (*(char *)(param_2 + 9) == '\0')))) {
      func_0x00553638(&ppuStack_80,"Bad method header",0x11);
      pdVar9 = (dword *)&ppuStack_80;
      FUN_0037849c(&uStack_98);
      ppuVar7 = &PTR___tlv_bootstrap_00b2c390;
      (*(code *)PTR___tlv_bootstrap_00b2c390)();
      puVar5 = (ulong *)*ppuVar7;
      do {
        uVar11 = *puVar5;
        uVar1 = uVar11 + 0x10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar4) {
          *puVar5 = uVar1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar5[2] < uVar1) {
        pdVar9 = &MACH_HEADER.ncmds;
        func_0x003d6048();
        puVar10 = param_4;
      }
      else {
        puVar5 = (ulong *)((long)puVar5 + uVar11 + 0x30);
        puVar10 = param_4;
      }
      *puVar5 = (ulong)&PTR_FUN_009de8c8;
      puVar5[1] = uStack_98;
      *param_1 = puVar5;
      ppuVar7 = ppuStack_80;
      if (((ulong)ppuStack_80 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else if ((uVar2 >> 6 & 1) == 0) {
      func_0x00553638(&ppuStack_80,"Missing :te header",0x12);
      pdVar9 = (dword *)&ppuStack_80;
      FUN_0037849c(&uStack_a8);
      ppuVar7 = &PTR___tlv_bootstrap_00b2c390;
      (*(code *)PTR___tlv_bootstrap_00b2c390)();
      puVar5 = (ulong *)*ppuVar7;
      do {
        uVar11 = *puVar5;
        uVar1 = uVar11 + 0x10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar4) {
          *puVar5 = uVar1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar5[2] < uVar1) {
        pdVar9 = &MACH_HEADER.ncmds;
        func_0x003d6048();
        puVar10 = param_4;
      }
      else {
        puVar5 = (ulong *)((long)puVar5 + uVar11 + 0x30);
        puVar10 = param_4;
      }
      *puVar5 = (ulong)&PTR_FUN_009de8c8;
      puVar5[1] = uStack_a8;
      *param_1 = puVar5;
      ppuVar7 = ppuStack_80;
      if (((ulong)ppuStack_80 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      *param_3 = uVar2 & 0xffffffbf;
      if ((char)param_3[0x66] == '\0') {
        if ((uVar2 >> 4 & 1) == 0) {
          func_0x00553638(&ppuStack_80,"Missing :scheme header",0x16);
          pdVar9 = (dword *)&ppuStack_80;
          FUN_0037849c(&uStack_c0);
          ppuVar7 = &PTR___tlv_bootstrap_00b2c390;
          (*(code *)PTR___tlv_bootstrap_00b2c390)();
          puVar5 = (ulong *)*ppuVar7;
          do {
            uVar11 = *puVar5;
            uVar1 = uVar11 + 0x10;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
            if (bVar4) {
              *puVar5 = uVar1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (puVar5[2] < uVar1) {
            pdVar9 = &MACH_HEADER.ncmds;
            func_0x003d6048();
            puVar10 = param_4;
          }
          else {
            puVar5 = (ulong *)((long)puVar5 + uVar11 + 0x30);
            puVar10 = param_4;
          }
          *puVar5 = (ulong)&PTR_FUN_009de8c8;
          puVar5[1] = uStack_c0;
          *param_1 = puVar5;
          ppuVar7 = ppuStack_80;
          if (((ulong)ppuStack_80 & 1) != 0) {
            FUN_0055293c();
          }
        }
        else {
          *param_3 = uVar2 & 0xffffffaf;
          if (param_3[0x68] == 2) {
            func_0x00553638(&ppuStack_80,"Bad :scheme header",0x12);
            pdVar9 = (dword *)&ppuStack_80;
            FUN_0037849c(&uStack_b8);
            ppuVar7 = &PTR___tlv_bootstrap_00b2c390;
            (*(code *)PTR___tlv_bootstrap_00b2c390)();
            puVar5 = (ulong *)*ppuVar7;
            do {
              uVar11 = *puVar5;
              uVar1 = uVar11 + 0x10;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
              if (bVar4) {
                *puVar5 = uVar1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (puVar5[2] < uVar1) {
              pdVar9 = &MACH_HEADER.ncmds;
              func_0x003d6048();
              puVar10 = param_4;
            }
            else {
              puVar5 = (ulong *)((long)puVar5 + uVar11 + 0x30);
              puVar10 = param_4;
            }
            *puVar5 = (ulong)&PTR_FUN_009de8c8;
            puVar5[1] = uStack_b8;
            *param_1 = puVar5;
            ppuVar7 = ppuStack_80;
            if (((ulong)ppuStack_80 & 1) != 0) {
              FUN_0055293c();
            }
          }
          else {
            uVar12 = uVar2 & 0xffffff8f;
            *param_3 = uVar12;
            if ((uVar2 & 1) == 0) {
              func_0x00553638(&puStack_90,"Missing :path header",0x14);
              pdVar9 = (dword *)&puStack_90;
              FUN_0037849c(&ppuStack_c8);
              ppuStack_80 = ppuStack_c8;
              pppuVar6 = &ppuStack_80;
              func_0x0037f000();
              puVar10 = param_4;
            }
            else {
              puVar10 = param_4;
              if ((uVar2 >> 1 & 1) == 0) {
                if ((uVar2 >> 0x10 & 1) != 0) {
                  uStack_78 = *(ulong *)(param_3 + 0x46);
                  ppuStack_80 = *(undefined ***)(param_3 + 0x44);
                  puStack_68 = *(ulong **)(param_3 + 0x4a);
                  puStack_70 = *(ulong **)(param_3 + 0x48);
                  param_3[0x46] = 0;
                  param_3[0x47] = 0;
                  param_3[0x44] = 0;
                  param_3[0x45] = 0;
                  param_3[0x4a] = 0;
                  param_3[0x4b] = 0;
                  param_3[0x48] = 0;
                  param_3[0x49] = 0;
                  *param_3 = uVar2 & 0xfffeff8f;
                  FUN_0034b418(param_3 + 0x44);
                  cStack_60 = '\x01';
                  FUN_0034bbe0(param_3,&ppuStack_80);
                  if (cStack_60 != '\0') {
                    FUN_0034b418(&ppuStack_80);
                  }
                }
                uVar12 = *param_3;
              }
              if ((uVar12 >> 1 & 1) != 0) {
                if ((*(char *)(param_2 + 8) == '\0') &&
                   (*param_3 = uVar12 & 0xffffbfff, (uVar12 >> 0xe & 1) != 0)) {
                  FUN_0034b418(param_3 + 0x54);
                }
                ppuVar7 = &PTR___tlv_bootstrap_00b2c390;
                (*(code *)PTR___tlv_bootstrap_00b2c390)();
                puVar5 = (ulong *)*ppuVar7;
                do {
                  uVar11 = *puVar5;
                  uVar1 = uVar11 + 0x10;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
                  if (bVar4) {
                    *puVar5 = uVar1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (puVar5[2] < uVar1) {
                  func_0x003d6048(puVar5,0x10);
                }
                else {
                  puVar5 = (ulong *)((long)puVar5 + uVar11 + 0x30);
                }
                *puVar5 = 0;
                puVar5[1] = 0;
                puVar10 = puVar5;
                FUN_0037e9e8(&ppuStack_e8,param_5,param_3);
                ppuVar7 = ppuStack_e8;
                ppuStack_e8 = &PTR_PTR_00afa4e0;
                auStack_e0[0] = 0;
                ppuStack_d8 = ppuVar7;
                (**(code **)(PTR_PTR_00afa4e0 + 8))(&PTR_PTR_00afa4e0);
                auStack_100[0] = 0;
                puStack_90._0_1_ = 0;
                ppuStack_d8 = &PTR_PTR_00afa4e0;
                ppuStack_80 = (undefined **)((ulong)ppuStack_80 & 0xffffffffffffff00);
                uStack_78 = uStack_78 & 0xffffffffffffff00;
                cStack_60 = '\0';
                ppuStack_58 = ppuVar7;
                ppuStack_88 = &PTR_PTR_00afa4e0;
                puStack_f8 = puVar5;
                puStack_f0 = param_4;
                puStack_70 = puVar5;
                puStack_68 = param_4;
                FUN_0037eb2c(&puStack_90);
                pdVar9 = (dword *)&ppuStack_80;
                FUN_0037ea20(param_1);
                func_0x0037eacc(&ppuStack_80);
                FUN_0037eb04(auStack_100);
                FUN_0037eb2c(auStack_e0);
                ppuVar7 = ppuStack_e8;
                (**(code **)(*ppuStack_e8 + 8))();
                goto LAB_0037e8fc;
              }
              func_0x00553638(&puStack_90,"Missing :authority header",0x19);
              pdVar9 = (dword *)&puStack_90;
              FUN_0037849c(&ppuStack_d0);
              ppuStack_80 = ppuStack_d0;
              pppuVar6 = &ppuStack_80;
              func_0x0037f000();
            }
            *param_1 = pppuVar6;
            ppuVar7 = &puStack_90;
            FUN_0033c494();
          }
        }
      }
      else {
        func_0x00553638(&ppuStack_80,"Bad :te header",0xe);
        pdVar9 = (dword *)&ppuStack_80;
        FUN_0037849c(&uStack_b0);
        ppuVar7 = &PTR___tlv_bootstrap_00b2c390;
        (*(code *)PTR___tlv_bootstrap_00b2c390)();
        puVar5 = (ulong *)*ppuVar7;
        do {
          uVar11 = *puVar5;
          uVar1 = uVar11 + 0x10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
          if (bVar4) {
            *puVar5 = uVar1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar5[2] < uVar1) {
          pdVar9 = &MACH_HEADER.ncmds;
          func_0x003d6048();
          puVar10 = param_4;
        }
        else {
          puVar5 = (ulong *)((long)puVar5 + uVar11 + 0x30);
          puVar10 = param_4;
        }
        *puVar5 = (ulong)&PTR_FUN_009de8c8;
        puVar5[1] = uStack_b0;
        *param_1 = puVar5;
        ppuVar7 = ppuStack_80;
        if (((ulong)ppuStack_80 & 1) != 0) {
          FUN_0055293c();
        }
      }
    }
  }
LAB_0037e8fc:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return ppuVar7;
  }
  ___stack_chk_fail();
  if (cStack_60 != '\0') {
    FUN_0034b418(&ppuStack_80);
  }
  __Unwind_Resume();
  pcStack_108 = FUN_0037e9e8;
  ppuVar7 = (undefined **)ppuVar7[3];
  pdStack_120 = pdVar9;
  puStack_118 = puVar10;
  puStack_110 = &stack0xfffffffffffffff0;
  if (ppuVar7 != (undefined **)0x0) {
    (**(code **)(*ppuVar7 + 0x30))(ppuVar7,&pdStack_120);
    return ppuVar7;
  }
  FUN_0033e390();
  ppuVar8 = &PTR___tlv_bootstrap_00b2c390;
  (*(code *)PTR___tlv_bootstrap_00b2c390)();
  puVar5 = (ulong *)*ppuVar8;
  do {
    uVar11 = *puVar5;
    uVar1 = uVar11 + 0x40;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar4) {
      *puVar5 = uVar1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (puVar5[2] < uVar1) {
    func_0x003d6048(puVar5,0x40);
  }
  else {
    puVar5 = (ulong *)((long)puVar5 + uVar11 + 0x30);
  }
  *puVar5 = (ulong)&PTR_FUN_009de900;
  *(char *)(puVar5 + 1) = (char)*pdVar9;
  *(undefined1 *)(puVar5 + 2) = 0;
  puVar5[3] = *(ulong *)(pdVar9 + 4);
  puVar5[4] = *(ulong *)(pdVar9 + 6);
  *(undefined1 *)(puVar5 + 5) = 0;
  puVar5[6] = *(ulong *)(pdVar9 + 10);
  *(undefined ***)(pdVar9 + 10) = &PTR_PTR_00afa4e0;
  *ppuVar7 = (undefined *)puVar5;
  return ppuVar7;
}



/* Entry: 0037e9e8; end: 0037ea1f;  */

long * FUN_0037e9e8(long param_1,undefined1 *param_2,undefined8 param_3)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined **ppuVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  plVar4 = *(long **)(param_1 + 0x18);
  puStack_20 = param_2;
  uStack_18 = param_3;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x30))(plVar4,&puStack_20);
    return plVar4;
  }
  FUN_0033e390();
  ppuVar5 = &PTR___tlv_bootstrap_00b2c390;
  (*(code *)PTR___tlv_bootstrap_00b2c390)();
  puVar6 = (ulong *)*ppuVar5;
  do {
    uVar7 = *puVar6;
    uVar1 = uVar7 + 0x40;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
    if (bVar3) {
      *puVar6 = uVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (puVar6[2] < uVar1) {
    func_0x003d6048(puVar6,0x40);
  }
  else {
    puVar6 = (ulong *)((long)puVar6 + uVar7 + 0x30);
  }
  *puVar6 = (ulong)&PTR_FUN_009de900;
  *(undefined1 *)(puVar6 + 1) = *param_2;
  *(undefined1 *)(puVar6 + 2) = 0;
  puVar6[3] = *(ulong *)(param_2 + 0x10);
  puVar6[4] = *(ulong *)(param_2 + 0x18);
  *(undefined1 *)(puVar6 + 5) = 0;
  puVar6[6] = *(ulong *)(param_2 + 0x28);
  *(undefined ***)(param_2 + 0x28) = &PTR_PTR_00afa4e0;
  *plVar4 = (long)puVar6;
  return plVar4;
}



/* Entry: 0037ea20; end: 0037eb03;  */

undefined8 * FUN_0037ea20(undefined8 *param_1,undefined1 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  ulong *puVar5;
  ulong uVar6;
  
  ppuVar4 = &PTR___tlv_bootstrap_00b2c390;
  (*(code *)PTR___tlv_bootstrap_00b2c390)();
  puVar5 = (ulong *)*ppuVar4;
  do {
    uVar6 = *puVar5;
    uVar1 = uVar6 + 0x40;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar3) {
      *puVar5 = uVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (puVar5[2] < uVar1) {
    func_0x003d6048(puVar5,0x40);
  }
  else {
    puVar5 = (ulong *)((long)puVar5 + uVar6 + 0x30);
  }
  *puVar5 = (ulong)&PTR_FUN_009de900;
  *(undefined1 *)(puVar5 + 1) = *param_2;
  *(undefined1 *)(puVar5 + 2) = 0;
  puVar5[3] = *(ulong *)(param_2 + 0x10);
  puVar5[4] = *(ulong *)(param_2 + 0x18);
  *(undefined1 *)(puVar5 + 5) = 0;
  puVar5[6] = *(ulong *)(param_2 + 0x28);
  *(undefined ***)(param_2 + 0x28) = &PTR_PTR_00afa4e0;
  *param_1 = puVar5;
  return param_1;
}



/* Entry: 0037eb04; end: 0037eb2b;  */

void FUN_0037eb04(byte *param_1)

{
  code *pcVar1;
  
  if (*param_1 < 2) {
    return;
  }
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x37eb28);
  (*pcVar1)();
}



/* Entry: 0037eb2c; end: 0037eb7b;  */

char * FUN_0037eb2c(char *param_1)

{
  code *pcVar1;
  
  if (*param_1 != '\x01') {
    if (*param_1 != '\0') {
      _abort();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x37eb74);
      (*pcVar1)();
    }
    (**(code **)(**(long **)(param_1 + 8) + 8))();
  }
  return param_1;
}



/* Entry: 0037eb7c; end: 0037ec03;  */

void FUN_0037eb7c(undefined8 *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = param_2;
  FUN_003a21a4(param_2,"grpc.surface_user_agent",0x17);
  FUN_003a21a4(param_2,
               "grpc.http.do_not_use_unless_you_have_permission_from_grpc_team_allow_broken_put_requests"
               ,0x58);
  uVar1 = (uint)param_2 & 0xffff;
  if (uVar1 < 0x101) {
    uVar1 = 0;
  }
  *(ushort *)(param_1 + 2) =
       CONCAT11((uVar1 & 0xff) != 0,(uVar2 & 0xff) != 0 || ((uint)uVar2 & 0xffff) < 0x100);
  *param_1 = 0;
  param_1[1] = &PTR_FUN_009de7e0;
  return;
}



/* Entry: 0037ec04; end: 0037ec13;  */

void FUN_0037ec04(void)

{
  return;
}



/* Entry: 0037ec14; end: 0037ed13;  */

void FUN_0037ec14(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long alStack_68 [3];
  long *plStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar3 = *(long **)(param_2 + 8);
  FUN_0033f548(alStack_68,param_5);
  (**(code **)(*plVar3 + 8))(param_1,plVar3,param_3,param_4,alStack_68);
  if (plStack_50 == alStack_68) {
    lVar2 = 4;
    plVar3 = alStack_68;
LAB_0037ec9c:
    (**(code **)(*plVar3 + lVar2 * 8))();
  }
  else {
    plVar3 = plStack_50;
    if (plStack_50 != (long *)0x0) {
      lVar2 = 5;
      goto LAB_0037ec9c;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (plStack_50 == alStack_68) {
    lVar2 = 4;
    plStack_50 = alStack_68;
  }
  else {
    if (plStack_50 == (long *)0x0) goto LAB_0037ed0c;
    lVar2 = 5;
  }
  (**(code **)(*plStack_50 + lVar2 * 8))();
LAB_0037ed0c:
  __Unwind_Resume();
  plVar1 = (long *)plVar3[1];
  (**(code **)(*plVar1 + 0x10))();
  if (((ulong)plVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003a6a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(plVar3[2] + 0x10))(plVar3 + 2,param_3);
  return;
}



/* Entry: 0037ed14; end: 0037ed9f;  */

void FUN_0037ed14(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x10))();
  if (((ulong)plVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003a6a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))((long *)(param_1 + 0x10),param_2);
  return;
}



/* Entry: 0037eda0; end: 0037eda3;  */

undefined8 * FUN_0037eda0(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = &PTR_FUN_009df7c8;
  param_1[1] = &PTR_FUN_009df820;
  if (param_1[0x16] == 0) {
    FUN_003ac6f4(param_1 + 0x14);
    if ((param_1[0x13] & 1) != 0) {
      FUN_0055293c();
    }
    (**(code **)(*(long *)param_1[0xb] + 8))();
    *param_1 = &PTR_FUN_009df6d8;
    param_1[1] = &PTR_FUN_009df730;
    return param_1;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
               ,0x3ba,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3aeb4c);
  (*pcVar1)();
}



/* Entry: 0037eda4; end: 0037edb7;  */

void FUN_0037eda4(void)

{
  FUN_003aeaa8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0037edb8; end: 0037edbf;  */

void FUN_0037edb8(long param_1,long param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined1 uStack_41;
  undefined1 **ppuStack_40;
  code *pcStack_38;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  lVar4 = *(long *)(param_1 + 0x10);
  plVar6 = (long *)(lVar4 + 0x48);
  do {
    lVar5 = *plVar6;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 == 0) {
    return;
  }
  func_0x00771390();
  pcStack_18 = FUN_0033f680;
  plVar6 = *(long **)(lVar4 + 0x10);
  puVar3 = (undefined8 *)plVar6[7];
  plVar6[7] = 0;
  puStack_20 = &stack0xfffffffffffffff0;
  if (puVar3 != (undefined8 *)0x0) {
    puStack_20 = &stack0xfffffffffffffff0;
    (**(code **)*puVar3)();
  }
  (**(code **)(*plVar6 + 8))(plVar6);
  if (param_3 == 0) {
    return;
  }
  func_0x007713c4();
  pcStack_38 = FUN_0033f6d0;
  ppuStack_40 = &puStack_20;
  FUN_0033f6f8(&uStack_41,plVar6,param_2);
  return;
}



/* Entry: 0037edc0; end: 0037ee0f;  */

void FUN_0037edc0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined1 uStack_31;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  plVar2 = *(long **)(param_1 + 0x10);
  puVar1 = (undefined8 *)plVar2[7];
  plVar2[7] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  (**(code **)(*plVar2 + 8))(plVar2);
  if (param_3 == 0) {
    return;
  }
  FUN_0077268c();
  pcStack_28 = FUN_0037ee10;
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_0037ee38(&uStack_31,plVar2,param_2);
  return;
}



/* Entry: 0037ee10; end: 0037ee37;  */

void FUN_0037ee10(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_0037ee38(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 0037ee38; end: 0037ef67;  */

ulong * FUN_0037ee38(undefined8 *param_1,ulong *param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  int *piVar6;
  long lVar7;
  ulong uStack_60;
  undefined1 auStack_58 [8];
  long *plStack_50;
  ulong auStack_48 [2];
  undefined2 uStack_38;
  
  if (*(int *)(param_4 + 0x14) == 0) {
    FUN_003a1d70(auStack_58,*(undefined8 *)(param_4 + 8));
    FUN_0037eb7c(auStack_48,auStack_58);
    if (plStack_50 != (long *)0x0) {
      plVar1 = plStack_50 + 1;
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
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_50);
      }
    }
    puVar5 = *(undefined8 **)(param_3 + 8);
    if (auStack_48[0] == 0) {
      *puVar5 = &PTR_FUN_009de7e0;
      *(undefined2 *)(puVar5 + 1) = uStack_38;
      *param_1 = 0;
    }
    else {
      *puVar5 = &PTR_FUN_009db778;
      uStack_60 = auStack_48[0];
      if ((auStack_48[0] & 1) != 0) {
        piVar6 = (int *)(auStack_48[0] - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar3) {
            *piVar6 = *piVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_003fbec4(param_1,&uStack_60);
      if ((uStack_60 & 1) != 0) {
        FUN_0055293c();
      }
    }
    puVar4 = auStack_48;
    FUN_0037ef68(puVar4);
    return puVar4;
  }
  func_0x007726c0();
  func_0x0040cf10();
  FUN_0033c494(&uStack_60);
  FUN_0037ef68(auStack_48);
  __Unwind_Resume();
  if ((*param_2 & 1) != 0) {
    FUN_0055293c();
  }
  return param_2;
}



/* Entry: 0037ef68; end: 0037ef97;  */

ulong * FUN_0037ef68(ulong *param_1)

{
  if ((*param_1 & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 0037ef98; end: 0037efb7;  */

void FUN_0037ef98(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0037efa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_2 + 8))();
  return;
}



/* Entry: 0037efb8; end: 0037f073;  */

void FUN_0037efb8(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x18))();
  if (((ulong)plVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003a6a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x58))((long *)(param_1 + 0x10),param_2);
  return;
}



/* Entry: 0037f074; end: 0037f08b;  */

undefined1  [16] FUN_0037f074(long param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  auVar2._8_8_ = 1;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Entry: 0037f08c; end: 0037f29b;  */

undefined1  [16] FUN_0037f08c(undefined8 **param_1,undefined8 **param_2)

{
  byte bVar1;
  char cVar2;
  undefined8 **ppuVar3;
  undefined8 uVar4;
  undefined8 **ppuVar5;
  undefined8 *puVar6;
  undefined8 *unaff_x21;
  undefined8 **ppuVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 *puStack_50;
  undefined8 **ppuStack_48;
  undefined8 *puStack_40;
  uint uStack_38;
  
  ppuVar7 = &puStack_50;
  ppuVar5 = &puStack_50;
  bVar1 = *(byte *)(param_1 + 1);
  ppuVar3 = param_1;
  if ((bVar1 >> 2 & 1) == 0) {
    ppuVar3 = param_1 + 2;
    if (*(char *)ppuVar3 != '\x01') {
      if (*(char *)ppuVar3 == '\0') {
        puVar6 = param_1[3];
        if (*(char *)(puVar6 + 1) != '\0') {
          param_1[3] = param_1[4];
          param_1[4] = puVar6;
          *(char *)(param_1 + 2) = '\x01';
          goto LAB_0037f0dc;
        }
        *(undefined1 *)((long)puVar6 + 9) = 1;
        uStack_38 = 0;
        goto LAB_0037f0e4;
      }
LAB_0037f27c:
      ppuVar5 = param_2;
      _abort();
SUB_0037eacc:
      FUN_0033e178();
      func_0x0040cf10();
      FUN_0033e1ac(&puStack_50);
      __Unwind_Resume();
      if ((*(byte *)(ppuVar3 + 1) >> 1 & 1) == 0) {
        FUN_0037eb2c(ppuVar3 + 5);
      }
      FUN_0037eb04(ppuVar3 + 2);
      auVar8._8_8_ = ppuVar5;
      auVar8._0_8_ = ppuVar3 + 1;
      return auVar8;
    }
LAB_0037f0dc:
    FUN_0037f2a4(&puStack_40);
LAB_0037f0e4:
    param_2 = &puStack_40;
    FUN_0033dc34(&puStack_50);
    FUN_0033e1ac(&puStack_40);
    if ((int)ppuStack_48 != 1) {
LAB_0037f144:
      FUN_0033e1ac();
      bVar1 = *(byte *)(param_1 + 1);
      ppuVar3 = ppuVar7;
      goto LAB_0037f150;
    }
    if (puStack_50 == (undefined8 *)0x0) {
      *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 4;
      goto LAB_0037f144;
    }
    FUN_0037849c(&puStack_40,&puStack_50);
    FUN_0033e1ac(&puStack_50);
  }
  else {
LAB_0037f150:
    if ((bVar1 >> 1 & 1) == 0) {
      cVar2 = *(char *)(param_1 + 5);
      if (cVar2 == '\x01') {
        unaff_x21 = param_1[6];
        param_1[6] = (undefined8 *)0x0;
        FUN_0037f34c(unaff_x21);
        ppuVar7 = (undefined8 **)((long)&MACH_HEADER.magic + 1);
      }
      else {
        if (cVar2 != '\0') goto LAB_0037f27c;
        puVar6 = param_1[6];
        (**(code **)*puVar6)();
        ppuVar3 = &puStack_40;
        puStack_50 = puVar6;
        ppuStack_48 = param_2;
        FUN_00378628(ppuVar3,&puStack_50);
        unaff_x21 = puStack_40;
        ppuVar7 = (undefined8 **)(ulong)uStack_38;
        if (uStack_38 != 0) {
          if (uStack_38 != 1) goto SUB_0037eacc;
          (**(code **)(*param_1[6] + 8))();
          *(char *)(param_1 + 5) = '\x01';
          param_1[6] = (undefined8 *)0x0;
          FUN_0037f34c(unaff_x21);
        }
      }
      puStack_50 = unaff_x21;
      ppuStack_48 = ppuVar7;
      FUN_00378628(&puStack_40,&puStack_50);
      if (uStack_38 == 1) {
        if (((*(byte *)((long)puStack_40 + 1) >> 2 & 1) == 0) || (*(int *)(puStack_40 + 0x31) != 0))
        goto LAB_0037f258;
        *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 2;
        FUN_0037eb2c(param_1 + 5);
        param_1[5] = puStack_40;
        unaff_x21 = puStack_40;
      }
      bVar1 = *(byte *)(param_1 + 1);
    }
    if ((bVar1 & 1) == 0) {
      puStack_40 = (undefined8 *)0x0;
      uStack_38 = 1;
      *(byte *)(param_1 + 1) = bVar1 | 1;
      FUN_0033e1ac(&puStack_40);
      bVar1 = *(byte *)(param_1 + 1);
    }
    if (bVar1 != 7) {
      uVar4 = 0;
      puStack_40 = unaff_x21;
      goto LAB_0037f264;
    }
    puStack_40 = param_1[5];
    param_1[5] = (undefined8 *)0x0;
  }
LAB_0037f258:
  uVar4 = 1;
LAB_0037f264:
  auVar9._8_8_ = uVar4;
  auVar9._0_8_ = puStack_40;
  return auVar9;
}



/* Entry: 0037f29c; end: 0037f2a3;  */

byte * FUN_0037f29c(long param_1)

{
  if ((*(byte *)(param_1 + 8) >> 1 & 1) == 0) {
    FUN_0037eb2c(param_1 + 0x28);
  }
  FUN_0037eb04(param_1 + 0x10);
  return (byte *)(param_1 + 8);
}



/* Entry: 0037f2a4; end: 0037f34b;  */

void FUN_0037f2a4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puVar3 = *(undefined8 **)(param_2 + 0x10);
  puVar1 = (undefined8 *)*puVar3;
  FUN_0037f34c();
  puVar2 = (uint *)*puVar3;
  puVar2[0x69] = 200;
  *puVar2 = *puVar2 | 0x28;
  puVar2[0x67] = 0;
  puVar3 = *(undefined8 **)(param_2 + 8);
  *puVar3 = puVar2;
  *(undefined1 *)(puVar3 + 1) = 1;
  if (*(char *)((long)puVar3 + 9) != '\0') {
    *(undefined1 *)((long)puVar3 + 9) = 0;
    FUN_003d3424();
    (**(code **)(*(long *)*puVar1 + 0x18))();
  }
  uStack_38 = 1;
  uStack_40 = 0x36;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  FUN_0033e1ac(&uStack_40);
  return;
}



/* Entry: 0037f34c; end: 0037f44b;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_0037f34c(byte *param_1,ulong param_2,undefined8 param_3,byte *param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined7 *puVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  char *pcVar9;
  uint uVar10;
  ulong *puVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *unaff_x23;
  byte *unaff_x24;
  long lVar16;
  long *plVar17;
  long lVar18;
  byte *apbStack_268 [2];
  char cStack_251;
  undefined1 auStack_250 [56];
  undefined8 uStack_218;
  undefined7 uStack_210;
  undefined1 uStack_209;
  undefined7 uStack_208;
  undefined1 uStack_201;
  ulong auStack_1c8 [2];
  undefined7 *puStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  ulong uStack_198;
  code *pcStack_190;
  long lStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  byte *pbStack_160;
  byte *pbStack_158;
  byte *pbStack_150;
  byte *pbStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  byte **ppbStack_120;
  byte abStack_118 [64];
  long lStack_d8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  byte *pbStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long *plStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((char)param_1[1] < '\0') {
    pbVar8 = param_1 + 0x130;
    lStack_88 = *(long *)(param_1 + 0x138);
    pbStack_90 = *(byte **)pbVar8;
    lStack_78 = *(long *)(param_1 + 0x148);
    lStack_80 = *(long *)(param_1 + 0x140);
    param_1[0x138] = 0;
    param_1[0x139] = 0;
    param_1[0x13a] = 0;
    param_1[0x13b] = 0;
    param_1[0x13c] = 0;
    param_1[0x13d] = 0;
    param_1[0x13e] = 0;
    param_1[0x13f] = 0;
    pbVar8[0] = 0;
    pbVar8[1] = 0;
    pbVar8[2] = 0;
    pbVar8[3] = 0;
    pbVar8[4] = 0;
    pbVar8[5] = 0;
    pbVar8[6] = 0;
    pbVar8[7] = 0;
    param_1[0x148] = 0;
    param_1[0x149] = 0;
    param_1[0x14a] = 0;
    param_1[0x14b] = 0;
    param_1[0x14c] = 0;
    param_1[0x14d] = 0;
    param_1[0x14e] = 0;
    param_1[0x14f] = 0;
    param_1[0x140] = 0;
    param_1[0x141] = 0;
    param_1[0x142] = 0;
    param_1[0x143] = 0;
    param_1[0x144] = 0;
    param_1[0x145] = 0;
    param_1[0x146] = 0;
    param_1[0x147] = 0;
    param_2 = 1;
    FUN_003eb9e4(&plStack_70,&pbStack_90);
    lVar18 = *(long *)(param_1 + 0x138);
    plVar17 = *(long **)pbVar8;
    lVar16 = *(long *)(param_1 + 0x148);
    lVar12 = *(long *)(param_1 + 0x140);
    *(long *)(param_1 + 0x138) = lStack_68;
    *(long **)pbVar8 = plStack_70;
    *(long *)(param_1 + 0x148) = lStack_58;
    *(long *)(param_1 + 0x140) = lStack_60;
    plStack_70 = plVar17;
    lStack_68 = lVar18;
    lStack_60 = lVar12;
    lStack_58 = lVar16;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar17) {
      do {
        lVar12 = *plVar17;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar2) {
          *plVar17 = lVar12 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar12 + -1 == 0) {
        (*(code *)plVar17[1])();
      }
    }
    param_1 = pbStack_90;
    if ((byte *)((long)&MACH_HEADER.magic + 1) < pbStack_90) {
      do {
        lVar12 = *(long *)pbStack_90;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pbStack_90,0x10);
        if (bVar2) {
          *(long *)pbStack_90 = lVar12 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar12 + -1 == 0) {
        (**(code **)(pbStack_90 + 8))();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  if ((int)param_2 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&pbStack_90);
  }
  __Unwind_Resume();
  pcStack_98 = FUN_0037f44c;
  lStack_d8 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar8 = (byte *)((long)&MACH_HEADER.magic + 2);
  uVar14 = param_2;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_00338e58();
  if ((int)pbVar8 != 0) {
    ppbStack_120 = &pbStack_90;
    pbVar8 = abStack_118;
    _vsnprintf(pbVar8,0x40,param_4,&pbStack_90);
    if ((int)(uint)pbVar8 < 0) {
      unaff_x23 = (byte *)0x0;
      param_4 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar8;
      if ((uint)pbVar8 < 0x40) {
        param_4 = (byte *)0x0;
        unaff_x23 = abStack_118;
      }
      else {
        param_4 = (byte *)(((ulong)pbVar8 & 0xffffffff) + 1);
        FUN_00338c74();
        ppbStack_120 = &pbStack_90;
        _vsnprintf();
        unaff_x23 = param_4;
      }
    }
    uVar14 = param_2;
    FUN_00338e80(param_1,param_2,2,unaff_x23);
    pbVar8 = param_4;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_d8) {
    return pbVar8;
  }
  ___stack_chk_fail();
  uStack_138 = 2;
  pcStack_128 = FUN_00339178;
  lStack_168 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar3 = 1;
  pbStack_160 = unaff_x24;
  pbStack_158 = unaff_x23;
  pbStack_150 = param_4;
  pbStack_148 = param_1;
  uStack_140 = param_2;
  ppuStack_130 = &puStack_a0;
  FUN_0033a598();
  lVar12 = *(long *)pbVar8;
  lVar16 = lVar12;
  uStack_218 = uVar3;
  _strrchr(lVar12,0x2f);
  if (lVar16 != 0) {
    lVar12 = lVar16 + 1;
  }
  puVar4 = &uStack_218;
  _localtime_r(puVar4,auStack_250);
  if (puVar4 == (undefined8 *)0x0) {
    uStack_208 = 0x656d69746c6163;
    uStack_201 = 0;
    uStack_210 = 0x6c3a726f727265;
    uStack_209 = 0x6f;
  }
  else {
    puVar5 = &uStack_210;
    _strftime(puVar5,0x40,"%m%d %H:%M:%S",auStack_250);
    if (puVar5 == (undefined7 *)0x0) {
      uStack_210 = 0x733a726f727265;
      uStack_209 = 0x74;
      uStack_208 = 0x656d69746672;
    }
  }
  uVar6 = (ulong)*(uint *)(pbVar8 + 0xc);
  func_0x00338e1c();
  uVar7 = uVar6;
  _pthread_self();
  auStack_1c8[1] = 0x560e98;
  puStack_1b8 = &uStack_210;
  uStack_1b0 = 0x560e98;
  uStack_1a8 = uVar14 & 0xffffffff;
  uStack_1a0 = 0x5606ac;
  pcStack_190 = FUN_00560738;
  uStack_180 = 0x560e98;
  uStack_178 = (ulong)*(uint *)(pbVar8 + 8);
  uStack_170 = 0x5606ac;
  puVar11 = auStack_1c8;
  auStack_1c8[0] = uVar6;
  uStack_198 = uVar7;
  lStack_188 = lVar12;
  FUN_0056189c(apbStack_268,"%s%s.%09d %7ld %s:%d]",0x15,puVar11,6);
  uVar10 = *(uint *)(pbVar8 + 0xc);
  func_0x00338e6c();
  if (uVar10 == 0) {
    auStack_1c8[0] = auStack_1c8[0] & 0xffffffffffffff00;
    uStack_1b0 = uStack_1b0 & 0xffffffffffffff00;
LAB_00339300:
    pbVar8 = *(byte **)PTR____stderrp_00999f90;
    pcVar9 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_1c8);
    if ((char)uStack_1b0 == '\0') goto LAB_00339300;
    pbVar8 = *(byte **)PTR____stderrp_00999f90;
    pcVar9 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_251 < '\0') {
    pbVar8 = apbStack_268[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_168) {
    return pbVar8;
  }
  ___stack_chk_fail();
  if (cStack_251 < '\0') {
    __ZdlPv(apbStack_268[0]);
  }
  __Unwind_Resume();
  uVar10 = (uint)puVar11;
  if ((char *)0x3 < pcVar9) {
    uVar14 = (ulong)pcVar9 >> 2;
    pbVar15 = pbVar8;
    do {
      uVar10 = (*(int *)pbVar15 * 0x16a88000 | (uint)(*(int *)pbVar15 * -0x3361d2af) >> 0x11) *
               0x1b873593 ^ (uint)puVar11;
      uVar10 = (uVar10 >> 0x13 | uVar10 << 0xd) * 5 + 0xe6546b64;
      puVar11 = (ulong *)(ulong)uVar10;
      uVar14 = uVar14 - 1;
      pbVar15 = pbVar15 + 4;
    } while (uVar14 != 0);
    pbVar8 = pbVar8 + ((ulong)pcVar9 & 0xfffffffffffffffc);
  }
  uVar13 = 0;
  uVar14 = (ulong)pcVar9 & 3;
  if (uVar14 != 1) {
    if (uVar14 != 2) {
      if (uVar14 != 3) goto LAB_00339464;
      uVar13 = (uint)pbVar8[2] << 0x10;
    }
    uVar13 = uVar13 | (uint)pbVar8[1] << 8;
  }
  uVar10 = ((uVar13 ^ *pbVar8) * 0x16a88000 | (uVar13 ^ *pbVar8) * -0x3361d2af >> 0x11) * 0x1b873593
           ^ uVar10;
LAB_00339464:
  uVar10 = uVar10 ^ (uint)pcVar9;
  uVar10 = (uVar10 ^ uVar10 >> 0x10) * -0x7a143595;
  uVar10 = (uVar10 ^ uVar10 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar10 ^ uVar10 >> 0x10);
}



/* Entry: 0037f44c; end: 0037f47b;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_0037f44c(undefined8 param_1,ulong param_2,undefined8 param_3,byte *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined7 *puVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  char *pcVar8;
  uint uVar9;
  ulong *puVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_1d8 [2];
  char cStack_1c1;
  undefined1 auStack_1c0 [56];
  undefined8 uStack_188;
  undefined7 uStack_180;
  undefined1 uStack_179;
  undefined7 uStack_178;
  undefined1 uStack_171;
  ulong auStack_138 [2];
  undefined7 *puStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  code *pcStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  byte abStack_88 [64];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar7 = (byte *)((long)&MACH_HEADER.magic + 2);
  uVar12 = param_2;
  FUN_00338e58();
  if ((int)pbVar7 != 0) {
    pbVar7 = abStack_88;
    _vsnprintf(pbVar7,0x40,param_4,&stack0x00000000);
    if ((int)(uint)pbVar7 < 0) {
      unaff_x23 = (byte *)0x0;
      param_4 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar7;
      if ((uint)pbVar7 < 0x40) {
        param_4 = (byte *)0x0;
        unaff_x23 = abStack_88;
      }
      else {
        param_4 = (byte *)(((ulong)pbVar7 & 0xffffffff) + 1);
        FUN_00338c74();
        _vsnprintf();
        unaff_x23 = param_4;
      }
    }
    uVar12 = param_2;
    FUN_00338e80(param_1,param_2,2,unaff_x23);
    pbVar7 = param_4;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return pbVar7;
  }
  ___stack_chk_fail();
  uStack_a8 = 2;
  pcStack_98 = FUN_00339178;
  lStack_d8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = 1;
  pbStack_d0 = unaff_x24;
  pbStack_c8 = unaff_x23;
  pbStack_c0 = param_4;
  uStack_b8 = param_1;
  uStack_b0 = param_2;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_0033a598();
  lVar14 = *(long *)pbVar7;
  lVar2 = lVar14;
  uStack_188 = uVar1;
  _strrchr(lVar14,0x2f);
  if (lVar2 != 0) {
    lVar14 = lVar2 + 1;
  }
  puVar3 = &uStack_188;
  _localtime_r(puVar3,auStack_1c0);
  if (puVar3 == (undefined8 *)0x0) {
    uStack_178 = 0x656d69746c6163;
    uStack_171 = 0;
    uStack_180 = 0x6c3a726f727265;
    uStack_179 = 0x6f;
  }
  else {
    puVar4 = &uStack_180;
    _strftime(puVar4,0x40,"%m%d %H:%M:%S",auStack_1c0);
    if (puVar4 == (undefined7 *)0x0) {
      uStack_180 = 0x733a726f727265;
      uStack_179 = 0x74;
      uStack_178 = 0x656d69746672;
    }
  }
  uVar5 = (ulong)*(uint *)(pbVar7 + 0xc);
  func_0x00338e1c();
  uVar6 = uVar5;
  _pthread_self();
  auStack_138[1] = 0x560e98;
  puStack_128 = &uStack_180;
  uStack_120 = 0x560e98;
  uStack_118 = uVar12 & 0xffffffff;
  uStack_110 = 0x5606ac;
  pcStack_100 = FUN_00560738;
  uStack_f0 = 0x560e98;
  uStack_e8 = (ulong)*(uint *)(pbVar7 + 8);
  uStack_e0 = 0x5606ac;
  puVar10 = auStack_138;
  auStack_138[0] = uVar5;
  uStack_108 = uVar6;
  lStack_f8 = lVar14;
  FUN_0056189c(apbStack_1d8,"%s%s.%09d %7ld %s:%d]",0x15,puVar10,6);
  uVar9 = *(uint *)(pbVar7 + 0xc);
  func_0x00338e6c();
  if (uVar9 == 0) {
    auStack_138[0] = auStack_138[0] & 0xffffffffffffff00;
    uStack_120 = uStack_120 & 0xffffffffffffff00;
LAB_00339300:
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_138);
    if ((char)uStack_120 == '\0') goto LAB_00339300;
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_1c1 < '\0') {
    pbVar7 = apbStack_1d8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_d8) {
    return pbVar7;
  }
  ___stack_chk_fail();
  if (cStack_1c1 < '\0') {
    __ZdlPv(apbStack_1d8[0]);
  }
  __Unwind_Resume();
  uVar9 = (uint)puVar10;
  if ((char *)0x3 < pcVar8) {
    uVar12 = (ulong)pcVar8 >> 2;
    pbVar13 = pbVar7;
    do {
      uVar9 = (*(int *)pbVar13 * 0x16a88000 | (uint)(*(int *)pbVar13 * -0x3361d2af) >> 0x11) *
              0x1b873593 ^ (uint)puVar10;
      uVar9 = (uVar9 >> 0x13 | uVar9 << 0xd) * 5 + 0xe6546b64;
      puVar10 = (ulong *)(ulong)uVar9;
      uVar12 = uVar12 - 1;
      pbVar13 = pbVar13 + 4;
    } while (uVar12 != 0);
    pbVar7 = pbVar7 + ((ulong)pcVar8 & 0xfffffffffffffffc);
  }
  uVar11 = 0;
  uVar12 = (ulong)pcVar8 & 3;
  if (uVar12 != 1) {
    if (uVar12 != 2) {
      if (uVar12 != 3) goto LAB_00339464;
      uVar11 = (uint)pbVar7[2] << 0x10;
    }
    uVar11 = uVar11 | (uint)pbVar7[1] << 8;
  }
  uVar9 = ((uVar11 ^ *pbVar7) * 0x16a88000 | (uVar11 ^ *pbVar7) * -0x3361d2af >> 0x11) * 0x1b873593
          ^ uVar9;
LAB_00339464:
  uVar9 = uVar9 ^ (uint)pcVar8;
  uVar9 = (uVar9 ^ uVar9 >> 0x10) * -0x7a143595;
  uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar9 ^ uVar9 >> 0x10);
}



/* Entry: 0037f47c; end: 0037fbb7;  */

/* WARNING: Removing unreachable block (ram,0x0037f4d8) */
/* WARNING: Removing unreachable block (ram,0x0037f738) */

void FUN_0037f47c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 *param_5)

{
  ulong uVar1;
  ulong *puVar2;
  code *pcVar3;
  long *plVar4;
  ulong **ppuVar5;
  char *pcVar6;
  dword *pdVar7;
  ulong uVar8;
  dword dVar9;
  long lVar10;
  ulong *puVar11;
  dword dVar12;
  long lVar13;
  char acStack_108 [24];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  char acStack_d8 [24];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a1;
  ulong *puStack_a0;
  ulong *puStack_98;
  ulong *puStack_90;
  ulong *puStack_88;
  char *pcStack_80;
  ulong **ppuStack_78;
  ulong **ppuStack_70;
  ulong **ppuStack_68;
  ulong **ppuStack_60;
  char *pcStack_58;
  
  puStack_98 = (ulong *)0x0;
  puStack_90 = (ulong *)0x0;
  puStack_88 = (ulong *)0x0;
  FUN_00353254(&pcStack_80,"maxRequestMessageBytes");
  lVar13 = param_4 + 0x20;
  lVar10 = lVar13;
  FUN_0035d420(lVar13,&pcStack_80);
  if (param_4 + 0x28 == lVar10) {
LAB_0037f70c:
    dVar9 = 0xffffffff;
  }
  else {
    if (1 < *(int *)(lVar10 + 0x38) - 3U) {
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_c0 = 0;
      FUN_003b646c(&puStack_a0,2,"field:maxRequestMessageBytes error:should be of type number",0x3b,
                   &uStack_a1,&uStack_c0);
      if (puStack_90 < puStack_88) {
        *puStack_90 = (ulong)puStack_a0;
        puStack_a0 = (ulong *)0x36;
        puStack_90 = puStack_90 + 1;
      }
      else {
        lVar10 = (long)puStack_90 - (long)puStack_98 >> 3;
        uVar1 = lVar10 + 1;
        if (uVar1 >> 0x3d != 0) {
          FUN_0035d520(&puStack_98);
          goto LAB_0037fa88;
        }
        ppuVar5 = &puStack_88;
        uVar8 = (long)puStack_88 - (long)puStack_98 >> 2;
        if (uVar8 <= uVar1) {
          uVar8 = uVar1;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)puStack_88 - (long)puStack_98)) {
          uVar8 = 0x1fffffffffffffff;
        }
        ppuStack_60 = ppuVar5;
        if (uVar8 == 0) {
          pcStack_80 = (char *)0x0;
        }
        else {
          FUN_0035d534();
          pcStack_80 = (char *)ppuVar5;
        }
        ppuStack_78 = (ulong **)((long)pcStack_80 + lVar10 * 8);
        ppuStack_68 = (ulong **)((long)pcStack_80 + uVar8 * 8);
        ppuVar5 = ppuStack_78 + 1;
        *ppuStack_78 = puStack_a0;
        puStack_a0 = (ulong *)0x36;
        ppuStack_70 = ppuVar5;
        FUN_0035d4ac(&puStack_98,&pcStack_80);
        puVar2 = puStack_90;
        FUN_0035d67c(&pcStack_80);
        puStack_90 = puVar2;
        if (((ulong)puStack_a0 & 1) != 0) {
          FUN_0055293c();
        }
      }
      pcStack_80 = (char *)&uStack_c0;
LAB_0037f700:
      FUN_0033d548(&pcStack_80);
      goto LAB_0037f70c;
    }
    plVar4 = (long *)(lVar10 + 0x40);
    if (*(char *)(lVar10 + 0x57) < '\0') {
      plVar4 = (long *)*plVar4;
    }
    dVar9 = (dword)plVar4;
    FUN_003399d8();
    if (dVar9 == 0xffffffff) {
      acStack_d8[8] = '\0';
      acStack_d8[9] = '\0';
      acStack_d8[10] = '\0';
      acStack_d8[0xb] = '\0';
      acStack_d8[0xc] = '\0';
      acStack_d8[0xd] = '\0';
      acStack_d8[0xe] = '\0';
      acStack_d8[0xf] = '\0';
      acStack_d8[0x10] = '\0';
      acStack_d8[0x11] = '\0';
      acStack_d8[0x12] = '\0';
      acStack_d8[0x13] = '\0';
      acStack_d8[0x14] = '\0';
      acStack_d8[0x15] = '\0';
      acStack_d8[0x16] = '\0';
      acStack_d8[0x17] = '\0';
      acStack_d8[0] = '\0';
      acStack_d8[1] = '\0';
      acStack_d8[2] = '\0';
      acStack_d8[3] = '\0';
      acStack_d8[4] = '\0';
      acStack_d8[5] = '\0';
      acStack_d8[6] = '\0';
      acStack_d8[7] = '\0';
      FUN_003b646c(&puStack_a0,2,"field:maxRequestMessageBytes error:should be non-negative",0x39,
                   &uStack_a1,acStack_d8);
      if (puStack_90 < puStack_88) {
        *puStack_90 = (ulong)puStack_a0;
        puStack_a0 = (ulong *)0x36;
        puStack_90 = puStack_90 + 1;
      }
      else {
        lVar10 = (long)puStack_90 - (long)puStack_98 >> 3;
        uVar1 = lVar10 + 1;
        if (uVar1 >> 0x3d != 0) {
          FUN_0035d520(&puStack_98);
          goto LAB_0037fa88;
        }
        ppuVar5 = &puStack_88;
        uVar8 = (long)puStack_88 - (long)puStack_98 >> 2;
        if (uVar8 <= uVar1) {
          uVar8 = uVar1;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)puStack_88 - (long)puStack_98)) {
          uVar8 = 0x1fffffffffffffff;
        }
        ppuStack_60 = ppuVar5;
        if (uVar8 == 0) {
          pcStack_80 = (char *)0x0;
        }
        else {
          FUN_0035d534();
          pcStack_80 = (char *)ppuVar5;
        }
        ppuStack_78 = (ulong **)((long)pcStack_80 + lVar10 * 8);
        ppuStack_68 = (ulong **)((long)pcStack_80 + uVar8 * 8);
        ppuVar5 = ppuStack_78 + 1;
        *ppuStack_78 = puStack_a0;
        puStack_a0 = (ulong *)0x36;
        ppuStack_70 = ppuVar5;
        FUN_0035d4ac(&puStack_98,&pcStack_80);
        puVar2 = puStack_90;
        FUN_0035d67c(&pcStack_80);
        puStack_90 = puVar2;
        if (((ulong)puStack_a0 & 1) != 0) {
          FUN_0055293c();
        }
      }
      pcStack_80 = acStack_d8;
      goto LAB_0037f700;
    }
  }
  FUN_00353254(&pcStack_80,"maxResponseMessageBytes");
  FUN_0035d420(lVar13,&pcStack_80);
  if (param_4 + 0x28 == lVar13) {
LAB_0037f968:
    dVar12 = 0xffffffff;
  }
  else {
    if (1 < *(int *)(lVar13 + 0x38) - 3U) {
      uStack_e8 = 0;
      uStack_e0 = 0;
      uStack_f0 = 0;
      FUN_003b646c(&puStack_a0,2,"field:maxResponseMessageBytes error:should be of type number",0x3c
                   ,&uStack_a1,&uStack_f0);
      if (puStack_90 < puStack_88) {
        *puStack_90 = (ulong)puStack_a0;
        puStack_a0 = (ulong *)0x36;
        puStack_90 = puStack_90 + 1;
      }
      else {
        lVar13 = (long)puStack_90 - (long)puStack_98 >> 3;
        uVar1 = lVar13 + 1;
        if (uVar1 >> 0x3d != 0) {
          FUN_0035d520(&puStack_98);
LAB_0037fa88:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x37fa8c);
          (*pcVar3)();
        }
        ppuVar5 = &puStack_88;
        uVar8 = (long)puStack_88 - (long)puStack_98 >> 2;
        if (uVar8 <= uVar1) {
          uVar8 = uVar1;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)puStack_88 - (long)puStack_98)) {
          uVar8 = 0x1fffffffffffffff;
        }
        ppuStack_60 = ppuVar5;
        if (uVar8 == 0) {
          pcStack_80 = (char *)0x0;
        }
        else {
          FUN_0035d534();
          pcStack_80 = (char *)ppuVar5;
        }
        ppuStack_78 = (ulong **)((long)pcStack_80 + lVar13 * 8);
        ppuStack_68 = (ulong **)((long)pcStack_80 + uVar8 * 8);
        ppuVar5 = ppuStack_78 + 1;
        *ppuStack_78 = puStack_a0;
        puStack_a0 = (ulong *)0x36;
        ppuStack_70 = ppuVar5;
        FUN_0035d4ac(&puStack_98,&pcStack_80);
        puVar2 = puStack_90;
        FUN_0035d67c(&pcStack_80);
        puStack_90 = puVar2;
        if (((ulong)puStack_a0 & 1) != 0) {
          FUN_0055293c();
        }
      }
      pcStack_80 = (char *)&uStack_f0;
LAB_0037f95c:
      FUN_0033d548(&pcStack_80);
      goto LAB_0037f968;
    }
    plVar4 = (long *)(lVar13 + 0x40);
    if (*(char *)(lVar13 + 0x57) < '\0') {
      plVar4 = (long *)*plVar4;
    }
    dVar12 = (dword)plVar4;
    FUN_003399d8();
    if (dVar12 == 0xffffffff) {
      acStack_108[8] = '\0';
      acStack_108[9] = '\0';
      acStack_108[10] = '\0';
      acStack_108[0xb] = '\0';
      acStack_108[0xc] = '\0';
      acStack_108[0xd] = '\0';
      acStack_108[0xe] = '\0';
      acStack_108[0xf] = '\0';
      acStack_108[0x10] = '\0';
      acStack_108[0x11] = '\0';
      acStack_108[0x12] = '\0';
      acStack_108[0x13] = '\0';
      acStack_108[0x14] = '\0';
      acStack_108[0x15] = '\0';
      acStack_108[0x16] = '\0';
      acStack_108[0x17] = '\0';
      acStack_108[0] = '\0';
      acStack_108[1] = '\0';
      acStack_108[2] = '\0';
      acStack_108[3] = '\0';
      acStack_108[4] = '\0';
      acStack_108[5] = '\0';
      acStack_108[6] = '\0';
      acStack_108[7] = '\0';
      FUN_003b646c(&puStack_a0,2,"field:maxResponseMessageBytes error:should be non-negative",0x3a,
                   &uStack_a1,acStack_108);
      if (puStack_90 < puStack_88) {
        *puStack_90 = (ulong)puStack_a0;
        puStack_a0 = (ulong *)0x36;
        puStack_90 = puStack_90 + 1;
      }
      else {
        lVar13 = (long)puStack_90 - (long)puStack_98 >> 3;
        uVar1 = lVar13 + 1;
        if (uVar1 >> 0x3d != 0) {
          FUN_0035d520(&puStack_98);
          goto LAB_0037fa88;
        }
        ppuVar5 = &puStack_88;
        uVar8 = (long)puStack_88 - (long)puStack_98 >> 2;
        if (uVar8 <= uVar1) {
          uVar8 = uVar1;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)puStack_88 - (long)puStack_98)) {
          uVar8 = 0x1fffffffffffffff;
        }
        ppuStack_60 = ppuVar5;
        if (uVar8 == 0) {
          pcStack_80 = (char *)0x0;
        }
        else {
          FUN_0035d534();
          pcStack_80 = (char *)ppuVar5;
        }
        ppuStack_78 = (ulong **)((long)pcStack_80 + lVar13 * 8);
        ppuStack_68 = (ulong **)((long)pcStack_80 + uVar8 * 8);
        ppuVar5 = ppuStack_78 + 1;
        *ppuStack_78 = puStack_a0;
        puStack_a0 = (ulong *)0x36;
        ppuStack_70 = ppuVar5;
        FUN_0035d4ac(&puStack_98,&pcStack_80);
        puVar2 = puStack_90;
        FUN_0035d67c(&pcStack_80);
        puStack_90 = puVar2;
        if (((ulong)puStack_a0 & 1) != 0) {
          FUN_0055293c();
        }
      }
      pcStack_80 = acStack_108;
      goto LAB_0037f95c;
    }
  }
  if (puStack_98 == puStack_90) {
    pdVar7 = &MACH_HEADER.ncmds;
    __Znwm();
    *(undefined ***)pdVar7 = &PTR_FUN_009de9f0;
    pdVar7[2] = dVar9;
    pdVar7[3] = dVar12;
    goto LAB_0037fa2c;
  }
  pcStack_58 = (char *)0x0;
  FUN_003bdf2c(&pcStack_80,2,"Message size parser",0x13,&puStack_a0,
               (long)puStack_90 - (long)puStack_98 >> 3);
  puVar2 = puStack_98;
  if (pcStack_80 != (char *)0x0) {
    pcStack_58 = pcStack_80;
  }
  if (puStack_90 != puStack_98) {
    puVar11 = puStack_90;
    do {
      puVar11 = puVar11 + -1;
      FUN_0033d5cc(&puStack_88,puVar11);
    } while (puVar11 != puVar2);
  }
  puStack_90 = puVar2;
  pcVar6 = (char *)*param_5;
  if (pcStack_58 == pcVar6) {
LAB_0037fa04:
    if (((ulong)pcVar6 & 1) != 0) {
      FUN_0055293c();
    }
  }
  else {
    *param_5 = pcStack_58;
    pcStack_58 = segment_command_00000020.segname + 0xe;
    if (((ulong)pcVar6 & 1) != 0) {
      FUN_0055293c();
      pcVar6 = pcStack_58;
      goto LAB_0037fa04;
    }
  }
  pdVar7 = (dword *)0x0;
LAB_0037fa2c:
  *param_1 = pdVar7;
  pcStack_80 = (char *)&puStack_98;
  FUN_0033d548(&pcStack_80);
  return;
}



/* Entry: 0037fbb8; end: 0037fc3b;  */

void FUN_0037fbb8(long param_1)

{
  dword *pdVar1;
  dword *pdStack_28;
  
  pdVar1 = &MACH_HEADER.cpusubtype;
  __Znwm();
  *(undefined ***)pdVar1 = &PTR_FUN_009de9a0;
  pdStack_28 = pdVar1;
  FUN_003ead58(param_1 + 0xd8,&pdStack_28);
  pdVar1 = pdStack_28;
  pdStack_28 = (dword *)0x0;
  if (pdVar1 != (dword *)0x0) {
    (**(code **)(*(long *)pdVar1 + 8))();
  }
  return;
}


