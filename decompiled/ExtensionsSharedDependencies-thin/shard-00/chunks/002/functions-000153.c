/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 003c124c; end: 003c12db;  */

void FUN_003c124c(long param_1)

{
  long *plVar1;
  ulong uStack_28;
  ulong uStack_20;
  ulong uStack_18;
  
  plVar1 = *(long **)(param_1 + 0x70);
  if (plVar1 == (long *)(param_1 + 0x70)) {
    if (*(long *)(param_1 + 0x98) == 0) {
      if (*(long *)(param_1 + 0xa0) != 0) {
        FUN_003c0a00(&uStack_28);
        if ((uStack_28 & 1) != 0) {
          FUN_0055293c();
        }
      }
    }
    else {
      FUN_003c0a00(&uStack_20,*(long *)(param_1 + 0x98));
      if ((uStack_20 & 1) != 0) {
        FUN_0055293c();
      }
    }
  }
  else {
    FUN_003c0a00(&uStack_18,plVar1);
    if ((uStack_18 & 1) != 0) {
      FUN_0055293c();
    }
  }
  return;
}



/* Entry: 003c12dc; end: 003c1363;  */

void FUN_003c12dc(long param_1)

{
  ulong uVar1;
  ulong uStack_30;
  undefined1 uStack_21;
  
  if (*(long *)(param_1 + 0x80) != 0) {
    uVar1 = 0;
    do {
      FUN_003c0988(*(undefined8 *)(*(long *)(param_1 + 0x90) + uVar1 * 8));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ulong *)(param_1 + 0x80));
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  uStack_30 = 0;
  FUN_003c1e6c(&uStack_21,*(undefined8 *)(param_1 + 0x70),&uStack_30);
  if ((uStack_30 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003c1364; end: 003c14ff;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_003c1364(ulong *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  char *pcVar4;
  int *piVar5;
  ulong uStack_60;
  ulong auStack_58 [4];
  undefined1 uStack_31;
  ulong uStack_30;
  char *pcStack_28;
  
  if (*param_2 == 0) {
    return;
  }
  auStack_58[0] = *param_1;
  if (auStack_58[0] == 0) {
    auStack_58[2] = 0;
    auStack_58[3] = 0;
    auStack_58[1] = 0;
    FUN_003b646c(&uStack_30,2,"pollset_work",0xc,&uStack_31,auStack_58 + 1);
    uVar3 = *param_1;
    if (uStack_30 == uVar3) {
LAB_003c13dc:
      if ((uVar3 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      *param_1 = uStack_30;
      uStack_30 = 0x36;
      if ((uVar3 & 1) != 0) {
        FUN_0055293c();
        uVar3 = uStack_30;
        goto LAB_003c13dc;
      }
    }
    pcStack_28 = (char *)(auStack_58 + 1);
    FUN_0033d548(&pcStack_28);
    auStack_58[0] = *param_1;
  }
  if ((auStack_58[0] & 1) != 0) {
    piVar5 = (int *)(auStack_58[0] - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_60 = *param_2;
  if ((uStack_60 & 1) != 0) {
    piVar5 = (int *)(uStack_60 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003be56c(&pcStack_28,auStack_58,&uStack_60);
  pcVar4 = (char *)*param_1;
  if (pcStack_28 != pcVar4) {
    *param_1 = (ulong)pcStack_28;
    pcStack_28 = segment_command_00000020.segname + 0xe;
    if (((ulong)pcVar4 & 1) == 0) goto LAB_003c1474;
    FUN_0055293c();
    pcVar4 = pcStack_28;
  }
  if (((ulong)pcVar4 & 1) != 0) {
    FUN_0055293c();
  }
LAB_003c1474:
  if ((uStack_60 & 1) != 0) {
    FUN_0055293c();
  }
  if ((auStack_58[0] & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003c1500; end: 003c166b;  */

void FUN_003c1500(long *param_1,int param_2,ulong param_3)

{
  long *plVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  undefined8 extraout_x8;
  ulong *extraout_x8_00;
  undefined8 *extraout_x8_01;
  int *piVar13;
  undefined8 *extraout_x9;
  long lVar14;
  ulong uVar15;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong auStack_78 [3];
  undefined *puStack_60;
  
  lVar14 = param_1[4];
  if (lVar14 == 0) {
    return;
  }
  uVar15 = param_3;
  func_0x00339d8c(lVar14 + 0x10);
  if (*(long **)(lVar14 + 0x98) == param_1) {
    bVar4 = param_2 == 0;
    *(undefined8 *)(lVar14 + 0x98) = 0;
    if (*(long **)(lVar14 + 0xa0) == param_1) goto LAB_003c15b4;
  }
  else if (*(long **)(lVar14 + 0xa0) == param_1) {
    bVar4 = false;
LAB_003c15b4:
    if ((int)param_3 == 0) {
      bVar4 = true;
    }
    *(undefined8 *)(lVar14 + 0xa0) = 0;
  }
  else if (param_1[3] == 0) {
    bVar4 = false;
  }
  else {
    bVar4 = false;
    lVar8 = *param_1;
    *(long *)(lVar8 + 8) = param_1[1];
    *(long *)param_1[1] = lVar8;
  }
  if ((param_2 != 0) && (lVar8 = lVar14, FUN_003c0fd4(lVar14,lVar14 + 0xa8), (int)lVar8 != 0)) {
    bVar4 = true;
  }
  if ((int)param_3 == 0) {
    if (bVar4) goto LAB_003c15f0;
  }
  else {
    lVar8 = lVar14;
    FUN_003c0fd4(lVar14,lVar14 + 0xb0);
    if ((int)lVar8 != 0 || bVar4) {
LAB_003c15f0:
      FUN_003c124c(lVar14);
    }
  }
  if (((((*(ulong *)(lVar14 + 8) & 1) == 0) && (*(long *)(lVar14 + 0x98) == 0)) &&
      (*(long *)(lVar14 + 0xa0) == 0)) &&
     ((*(long **)(lVar14 + 0x70) == (long *)(lVar14 + 0x70) && (*(int *)(lVar14 + 0x54) == 0)))) {
    FUN_003c0914(lVar14);
  }
  func_0x00339da8(lVar14 + 0x10);
  plVar1 = (long *)(lVar14 + 8);
  do {
    lVar12 = *plVar1;
    lVar8 = lVar12 + -2;
    cVar2 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar8 == 0) {
    func_0x00339d70(lVar14 + 0x10);
    func_0x003c31e8(lVar14 + 0xc0);
    FUN_003c0f4c(*(undefined8 *)(lVar14 + 0xd8));
    if ((*(ulong *)(lVar14 + 0x68) & 1) != 0) {
      FUN_0055293c();
    }
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_0099a260)(lVar14);
    return;
  }
  if (2 < lVar12) {
    return;
  }
  func_0x00774008();
  func_0x0040cf10();
  puVar5 = *(undefined **)(lVar14 + 0x10);
  func_0x00339d8c();
  puVar9 = *(undefined8 **)(lVar14 + 0x18);
  if (puVar9 != (undefined8 *)0x0) {
    FUN_003c0a60(extraout_x8,*(undefined8 *)(lVar14 + 0x10),puVar9,2);
    func_0x00339da8(*(undefined8 *)(lVar14 + 0x10));
    return;
  }
  func_0x0077403c();
  FUN_0033c494(extraout_x8);
  puVar6 = puVar5;
  __Unwind_Resume();
  uVar11 = (uint)uVar15;
  *extraout_x8_00 = 0;
  puStack_60 = puVar5;
  if (puVar9 == (undefined8 *)0x0) {
    ppuVar7 = &PTR___tlv_bootstrap_00b2c408;
    (*(code *)PTR___tlv_bootstrap_00b2c408)();
    if (*ppuVar7 == puVar6) goto LAB_003c0c5c;
    if (((uint)uVar15 >> 1 & 1) != 0) {
      uVar10 = 0x324;
      goto LAB_003c0d0c;
    }
    puVar5 = *(undefined **)(puVar6 + 0x50);
    if (puVar5 != puVar6 + 0x40) {
      lVar14 = *(long *)(puVar5 + 0x18);
      *(undefined8 *)(lVar14 + 0x10) = *(undefined8 *)(puVar5 + 0x10);
      *(long *)(*(long *)(puVar5 + 0x10) + 0x18) = lVar14;
      ppuVar7 = &PTR___tlv_bootstrap_00b2c3f0;
      (*(code *)PTR___tlv_bootstrap_00b2c3f0)();
      puVar9 = extraout_x8_01;
      if ((undefined8 *)*ppuVar7 == extraout_x8_01) {
        extraout_x8_01[2] = extraout_x9;
        extraout_x8_01[3] = *(undefined8 *)(puVar6 + 0x58);
        *(undefined8 **)(puVar6 + 0x58) = extraout_x8_01;
        *(undefined8 **)(extraout_x8_01[3] + 0x10) = extraout_x8_01;
        puVar9 = *(undefined8 **)(puVar6 + 0x50);
        if (puVar9 == extraout_x9) {
          puVar9 = (undefined8 *)0x0;
        }
        else {
          lVar14 = puVar9[3];
          *(undefined8 *)(lVar14 + 0x10) = puVar9[2];
          *(long *)(puVar9[2] + 0x18) = lVar14;
        }
        if (((uVar15 & 1) == 0) && ((undefined8 *)*ppuVar7 == puVar9)) {
          puVar9[2] = extraout_x9;
          puVar9[3] = *(undefined8 *)(puVar6 + 0x58);
          *(undefined8 **)(puVar6 + 0x58) = puVar9;
          *(undefined8 **)(puVar9[3] + 0x10) = puVar9;
          goto LAB_003c0c5c;
        }
        if (puVar9 == (undefined8 *)0x0) goto LAB_003c0c5c;
      }
      puVar9[2] = extraout_x9;
      puVar9[3] = *(undefined8 *)(puVar6 + 0x58);
      *(undefined8 **)(puVar6 + 0x58) = puVar9;
      *(undefined8 **)(puVar9[3] + 0x10) = puVar9;
      func_0x003d0a30(&uStack_98,*puVar9);
      FUN_003c0db0(extraout_x8_00,&uStack_98);
      if ((uStack_98 & 1) != 0) {
        FUN_0055293c();
      }
      goto LAB_003c0c5c;
    }
  }
  else {
    if (puVar9 != (undefined8 *)((long)&MACH_HEADER.magic + 1)) {
      ppuVar7 = &PTR___tlv_bootstrap_00b2c3f0;
      (*(code *)PTR___tlv_bootstrap_00b2c3f0)();
      if ((undefined8 *)*ppuVar7 == puVar9) {
        if ((uVar11 & 1) != 0) {
          if ((uVar11 >> 1 & 1) != 0) {
            *(undefined4 *)(puVar9 + 1) = 1;
          }
          *(undefined4 *)((long)puVar9 + 0xc) = 1;
          func_0x003d0a30(&uStack_90,*puVar9);
          FUN_003c0db0(extraout_x8_00,&uStack_90);
          if ((uStack_90 & 1) != 0) {
            FUN_0055293c();
          }
        }
      }
      else {
        if ((uVar11 >> 1 & 1) != 0) {
          *(undefined4 *)(puVar9 + 1) = 1;
        }
        *(undefined4 *)((long)puVar9 + 0xc) = 1;
        func_0x003d0a30(&uStack_88,*puVar9);
        FUN_003c0db0(extraout_x8_00,&uStack_88);
        if ((uStack_88 & 1) != 0) {
          FUN_0055293c();
        }
      }
      goto LAB_003c0c5c;
    }
    if ((uVar11 >> 1 & 1) != 0) {
      uVar10 = 0x30a;
LAB_003c0d0c:
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_poll_posix.cc"
                   ,uVar10,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x3c0d38);
      (*pcVar3)();
    }
    for (puVar9 = *(undefined8 **)(puVar6 + 0x50); puVar9 != (undefined8 *)(puVar6 + 0x40);
        puVar9 = (undefined8 *)puVar9[2]) {
      func_0x003d0a30(&uStack_80,*puVar9);
      FUN_003c0db0(extraout_x8_00,&uStack_80);
      if ((uStack_80 & 1) != 0) {
        FUN_0055293c();
      }
    }
  }
  *(undefined4 *)(puVar6 + 0x68) = 1;
LAB_003c0c5c:
  uVar15 = *extraout_x8_00;
  if ((uVar15 & 1) == 0) {
    if (uVar15 == 0) {
      return;
    }
  }
  else {
    piVar13 = (int *)(uVar15 - 1);
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar4) {
        *piVar13 = *piVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar4) {
        *piVar13 = *piVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  auStack_78[0] = uVar15;
  FUN_003be608("pollset_kick_ext",auStack_78,
               "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_poll_posix.cc"
               ,0x33e);
  if ((auStack_78[0] & 1) != 0) {
    FUN_0055293c();
  }
  if ((uVar15 & 1) != 0) {
    FUN_0055293c(uVar15);
  }
  return;
}



/* Entry: 003c166c; end: 003c1707;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003c166c(undefined8 param_1,byte *param_2,undefined8 param_3,byte *param_4)

{
  byte *pbVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined7 *puVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *pbVar9;
  char *pcVar10;
  uint uVar11;
  ulong *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  long lVar15;
  byte *pbVar16;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_2b8 [2];
  char cStack_2a1;
  undefined1 auStack_2a0 [56];
  undefined8 uStack_268;
  undefined7 uStack_260;
  undefined1 uStack_259;
  undefined7 uStack_258;
  undefined1 uStack_251;
  ulong auStack_218 [2];
  undefined7 *puStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  code *pcStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  byte *pbStack_1b0;
  byte *pbStack_1a8;
  byte *pbStack_1a0;
  byte *pbStack_198;
  byte *pbStack_190;
  undefined8 uStack_188;
  undefined1 **ppuStack_180;
  code *pcStack_178;
  undefined1 **ppuStack_170;
  byte abStack_168 [64];
  long lStack_128;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  undefined1 **ppuStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  byte abStack_58 [16];
  long lStack_48;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  func_0x00339d8c(0xb5e8c8);
  for (; puRam0000000000b5e908 != (undefined8 *)0x0;
      puRam0000000000b5e908 = (undefined8 *)puRam0000000000b5e908[2]) {
    puVar13 = (undefined4 *)*puRam0000000000b5e908;
    if (puVar13 == (undefined4 *)0x0) {
      _close(*(undefined4 *)puRam0000000000b5e908[1]);
      puVar13 = (undefined4 *)puRam0000000000b5e908[1];
      *puVar13 = 0xffffffff;
      _close(puVar13[1]);
      *(undefined4 *)(puRam0000000000b5e908[1] + 4) = 0xffffffff;
    }
    else {
      if (puVar13[0x15] == 0) {
        _close(*puVar13);
        puVar13 = (undefined4 *)*puRam0000000000b5e908;
      }
      *puVar13 = 0xffffffff;
    }
  }
  pbVar7 = (byte *)0xb5e8c8;
  _pthread_mutex_unlock();
  if ((int)pbVar7 == 0) {
    return pbVar7;
  }
  func_0x00770db4();
  _pthread_mutex_trylock();
  if (((uint)pbVar7 | 0x10) == 0x10) {
    return (byte *)(ulong)((uint)pbVar7 == 0);
  }
  func_0x00770de8();
  pcStack_28 = FUN_00339df0;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar16 = abStack_58;
  puStack_30 = &stack0xffffffffffffffe0;
  _pthread_condattr_init();
  if ((int)pbVar16 == 0) {
    param_2 = abStack_58;
    _pthread_cond_init();
    if ((int)pbVar7 != 0) goto LAB_00339e5c;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
      return pbVar7;
    }
  }
  else {
    func_0x00770e50();
    pbVar7 = pbVar16;
LAB_00339e5c:
    func_0x00770e1c();
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_00339e64;
  ppuStack_70 = &puStack_30;
  _pthread_cond_destroy();
  if ((int)pbVar7 == 0) {
    return pbVar7;
  }
  func_0x00770e84();
  pcStack_78 = FUN_00339e80;
  uVar8 = (ulong)param_4 >> 0x20;
  pbVar16 = param_2;
  puStack_80 = (undefined1 *)&ppuStack_70;
  func_0x0033a068(uVar8);
  uVar2 = param_3;
  FUN_00339fc4(param_3,param_4,uVar8);
  if ((int)uVar2 == 0) {
    _pthread_cond_wait();
  }
  else {
    FUN_0033a30c(param_3,param_4,1);
    uVar8 = (ulong)param_4 >> 0x20;
    pbVar16 = param_4;
    FUN_0033a598(uVar8);
    FUN_0033a01c(param_3,param_4,uVar8);
    lStack_a8 = (long)(int)param_4;
    uStack_b0 = param_3;
    _pthread_cond_timedwait(pbVar7,param_2,&uStack_b0);
  }
  if (((uint)pbVar7 < 0x3d) && ((1L << ((ulong)pbVar7 & 0x3f) & 0x1000000800000001U) != 0)) {
    return (byte *)(ulong)((uint)pbVar7 == 0x3c);
  }
  func_0x00770eb8();
  pcStack_b8 = FUN_00339f68;
  ppuStack_c0 = &puStack_80;
  _pthread_cond_signal();
  if ((int)pbVar7 == 0) {
    return pbVar7;
  }
  func_0x00770eec();
  uStack_c8 = 0x339f84;
  puStack_d0 = (undefined1 *)&ppuStack_c0;
  _pthread_cond_broadcast();
  if ((int)pbVar7 == 0) {
    return pbVar7;
  }
  func_0x00770f20();
  uStack_d8 = 0x339fa0;
  puStack_e0 = (undefined1 *)&puStack_d0;
  _pthread_once();
  if ((int)pbVar7 == 0) {
    return pbVar7;
  }
  func_0x00770f54();
  pcStack_e8 = FUN_00339fbc;
  lStack_128 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar1 = (byte *)((long)&MACH_HEADER.magic + 2);
  pbVar9 = param_2;
  puStack_f0 = (undefined1 *)&puStack_e0;
  FUN_00338e58();
  if ((int)pbVar1 != 0) {
    ppuStack_170 = &puStack_e0;
    pbVar1 = abStack_168;
    _vsnprintf(pbVar1,0x40,pbVar16,&puStack_e0);
    if ((int)(uint)pbVar1 < 0) {
      unaff_x23 = (byte *)0x0;
      pbVar16 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar1;
      if ((uint)pbVar1 < 0x40) {
        pbVar16 = (byte *)0x0;
        unaff_x23 = abStack_168;
      }
      else {
        pbVar16 = (byte *)(((ulong)pbVar1 & 0xffffffff) + 1);
        FUN_00338c74();
        ppuStack_170 = &puStack_e0;
        _vsnprintf();
        unaff_x23 = pbVar16;
      }
    }
    pbVar9 = param_2;
    FUN_00338e80(pbVar7,param_2,2,unaff_x23);
    pbVar1 = pbVar16;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_128) {
    return pbVar1;
  }
  ___stack_chk_fail();
  uStack_188 = 2;
  pcStack_178 = FUN_00339178;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = 1;
  pbStack_1b0 = unaff_x24;
  pbStack_1a8 = unaff_x23;
  pbStack_1a0 = pbVar16;
  pbStack_198 = pbVar7;
  pbStack_190 = param_2;
  ppuStack_180 = &puStack_f0;
  FUN_0033a598();
  lVar15 = *(long *)pbVar1;
  lVar3 = lVar15;
  uStack_268 = uVar2;
  _strrchr(lVar15,0x2f);
  if (lVar3 != 0) {
    lVar15 = lVar3 + 1;
  }
  puVar4 = &uStack_268;
  _localtime_r(puVar4,auStack_2a0);
  if (puVar4 == (undefined8 *)0x0) {
    uStack_258 = 0x656d69746c6163;
    uStack_251 = 0;
    uStack_260 = 0x6c3a726f727265;
    uStack_259 = 0x6f;
  }
  else {
    puVar5 = &uStack_260;
    _strftime(puVar5,0x40,"%m%d %H:%M:%S",auStack_2a0);
    if (puVar5 == (undefined7 *)0x0) {
      uStack_260 = 0x733a726f727265;
      uStack_259 = 0x74;
      uStack_258 = 0x656d69746672;
    }
  }
  uVar6 = (ulong)*(uint *)(pbVar1 + 0xc);
  func_0x00338e1c();
  uVar8 = uVar6;
  _pthread_self();
  auStack_218[1] = 0x560e98;
  puStack_208 = &uStack_260;
  uStack_200 = 0x560e98;
  uStack_1f8 = (ulong)pbVar9 & 0xffffffff;
  uStack_1f0 = 0x5606ac;
  pcStack_1e0 = FUN_00560738;
  uStack_1d0 = 0x560e98;
  uStack_1c8 = (ulong)*(uint *)(pbVar1 + 8);
  uStack_1c0 = 0x5606ac;
  puVar12 = auStack_218;
  auStack_218[0] = uVar6;
  uStack_1e8 = uVar8;
  lStack_1d8 = lVar15;
  FUN_0056189c(apbStack_2b8,"%s%s.%09d %7ld %s:%d]",0x15,puVar12,6);
  uVar11 = *(uint *)(pbVar1 + 0xc);
  func_0x00338e6c();
  if (uVar11 == 0) {
    auStack_218[0] = auStack_218[0] & 0xffffffffffffff00;
    uStack_200 = uStack_200 & 0xffffffffffffff00;
LAB_00339300:
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar10 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_218);
    if ((char)uStack_200 == '\0') goto LAB_00339300;
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar10 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_2a1 < '\0') {
    pbVar7 = apbStack_2b8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1b8) {
    return pbVar7;
  }
  ___stack_chk_fail();
  if (cStack_2a1 < '\0') {
    __ZdlPv(apbStack_2b8[0]);
  }
  __Unwind_Resume();
  uVar11 = (uint)puVar12;
  if ((char *)0x3 < pcVar10) {
    uVar8 = (ulong)pcVar10 >> 2;
    pbVar16 = pbVar7;
    do {
      uVar11 = (*(int *)pbVar16 * 0x16a88000 | (uint)(*(int *)pbVar16 * -0x3361d2af) >> 0x11) *
               0x1b873593 ^ (uint)puVar12;
      uVar11 = (uVar11 >> 0x13 | uVar11 << 0xd) * 5 + 0xe6546b64;
      puVar12 = (ulong *)(ulong)uVar11;
      uVar8 = uVar8 - 1;
      pbVar16 = pbVar16 + 4;
    } while (uVar8 != 0);
    pbVar7 = pbVar7 + ((ulong)pcVar10 & 0xfffffffffffffffc);
  }
  uVar14 = 0;
  uVar8 = (ulong)pcVar10 & 3;
  if (uVar8 != 1) {
    if (uVar8 != 2) {
      if (uVar8 != 3) goto LAB_00339464;
      uVar14 = (uint)pbVar7[2] << 0x10;
    }
    uVar14 = uVar14 | (uint)pbVar7[1] << 8;
  }
  uVar11 = ((uVar14 ^ *pbVar7) * 0x16a88000 | (uVar14 ^ *pbVar7) * -0x3361d2af >> 0x11) * 0x1b873593
           ^ uVar11;
LAB_00339464:
  uVar11 = uVar11 ^ (uint)pcVar10;
  uVar11 = (uVar11 ^ uVar11 >> 0x10) * -0x7a143595;
  uVar11 = (uVar11 ^ uVar11 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar11 ^ uVar11 >> 0x10);
}



/* Entry: 003c1708; end: 003c1727;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003c1708(byte *param_1,ulong param_2,int param_3,byte *param_4)

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
  byte *apbStack_1e8 [2];
  char cStack_1d1;
  undefined1 auStack_1d0 [56];
  undefined8 uStack_198;
  undefined7 uStack_190;
  undefined1 uStack_189;
  undefined7 uStack_188;
  undefined1 uStack_181;
  ulong auStack_148 [2];
  undefined7 *puStack_138;
  ulong uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  code *pcStack_110;
  long lStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  undefined1 *puStack_a0;
  byte abStack_98 [64];
  long lStack_58;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x003c1720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000000b5e910)();
    return param_1;
  }
  FUN_00774094();
  pcStack_18 = FUN_003c1728;
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar7 = (byte *)((long)&MACH_HEADER.magic + 2);
  uVar12 = param_2;
  puStack_20 = &stack0xfffffffffffffff0;
  FUN_00338e58();
  if ((int)pbVar7 != 0) {
    puStack_a0 = &stack0xfffffffffffffff0;
    pbVar7 = abStack_98;
    _vsnprintf(pbVar7,0x40,param_4,&stack0xfffffffffffffff0);
    if ((int)(uint)pbVar7 < 0) {
      unaff_x23 = (byte *)0x0;
      param_4 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar7;
      if ((uint)pbVar7 < 0x40) {
        param_4 = (byte *)0x0;
        unaff_x23 = abStack_98;
      }
      else {
        param_4 = (byte *)(((ulong)pbVar7 & 0xffffffff) + 1);
        FUN_00338c74();
        puStack_a0 = &stack0xfffffffffffffff0;
        _vsnprintf();
        unaff_x23 = param_4;
      }
    }
    uVar12 = param_2;
    FUN_00338e80(param_1,param_2,2,unaff_x23);
    pbVar7 = param_4;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return pbVar7;
  }
  ___stack_chk_fail();
  uStack_b8 = 2;
  pcStack_a8 = FUN_00339178;
  lStack_e8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = 1;
  pbStack_e0 = unaff_x24;
  pbStack_d8 = unaff_x23;
  pbStack_d0 = param_4;
  pbStack_c8 = param_1;
  uStack_c0 = param_2;
  ppuStack_b0 = &puStack_20;
  FUN_0033a598();
  lVar14 = *(long *)pbVar7;
  lVar2 = lVar14;
  uStack_198 = uVar1;
  _strrchr(lVar14,0x2f);
  if (lVar2 != 0) {
    lVar14 = lVar2 + 1;
  }
  puVar3 = &uStack_198;
  _localtime_r(puVar3,auStack_1d0);
  if (puVar3 == (undefined8 *)0x0) {
    uStack_188 = 0x656d69746c6163;
    uStack_181 = 0;
    uStack_190 = 0x6c3a726f727265;
    uStack_189 = 0x6f;
  }
  else {
    puVar4 = &uStack_190;
    _strftime(puVar4,0x40,"%m%d %H:%M:%S",auStack_1d0);
    if (puVar4 == (undefined7 *)0x0) {
      uStack_190 = 0x733a726f727265;
      uStack_189 = 0x74;
      uStack_188 = 0x656d69746672;
    }
  }
  uVar5 = (ulong)*(uint *)(pbVar7 + 0xc);
  func_0x00338e1c();
  uVar6 = uVar5;
  _pthread_self();
  auStack_148[1] = 0x560e98;
  puStack_138 = &uStack_190;
  uStack_130 = 0x560e98;
  uStack_128 = uVar12 & 0xffffffff;
  uStack_120 = 0x5606ac;
  pcStack_110 = FUN_00560738;
  uStack_100 = 0x560e98;
  uStack_f8 = (ulong)*(uint *)(pbVar7 + 8);
  uStack_f0 = 0x5606ac;
  puVar10 = auStack_148;
  auStack_148[0] = uVar5;
  uStack_118 = uVar6;
  lStack_108 = lVar14;
  FUN_0056189c(apbStack_1e8,"%s%s.%09d %7ld %s:%d]",0x15,puVar10,6);
  uVar9 = *(uint *)(pbVar7 + 0xc);
  func_0x00338e6c();
  if (uVar9 == 0) {
    auStack_148[0] = auStack_148[0] & 0xffffffffffffff00;
    uStack_130 = uStack_130 & 0xffffffffffffff00;
LAB_00339300:
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_148);
    if ((char)uStack_130 == '\0') goto LAB_00339300;
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_1d1 < '\0') {
    pbVar7 = apbStack_1e8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_e8) {
    return pbVar7;
  }
  ___stack_chk_fail();
  if (cStack_1d1 < '\0') {
    __ZdlPv(apbStack_1e8[0]);
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



/* Entry: 003c1728; end: 003c172f;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003c1728(undefined8 param_1,ulong param_2,undefined8 param_3,byte *param_4)

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



/* Entry: 003c1730; end: 003c175f;  */

void FUN_003c1730(void)

{
  func_0x00339fa0(0xafadb8,FUN_003c1ab0);
                    /* WARNING: Could not recover jumptable at 0x003c175c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lRam0000000000b5e918 + 0xf0))();
  return;
}



/* Entry: 003c1760; end: 003c176f;  */

void FUN_003c1760(void)

{
                    /* WARNING: Could not recover jumptable at 0x003c176c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lRam0000000000b5e918 + 0x100))();
  return;
}



/* Entry: 003c1770; end: 003c179b;  */

void FUN_003c1770(void)

{
  FUN_003c2d60();
  return;
}



/* Entry: 003c179c; end: 003c17bf;  */

bool FUN_003c179c(void)

{
  if (lRam0000000000b5e918 != 0) {
    return *(char *)(lRam0000000000b5e918 + 9) != '\0';
  }
  return false;
}



/* Entry: 003c17c0; end: 003c182f;  */

void FUN_003c17c0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(lRam0000000000b5e918 + 0x10);
  if ((int)param_3 != 0) {
    uVar1 = param_1;
    FUN_003c2d60();
    if ((int)uVar1 == 0) {
      param_3 = 0;
    }
    else {
      param_3 = (ulong)(*(char *)(lRam0000000000b5e918 + 8) != '\0');
    }
  }
                    /* WARNING: Could not recover jumptable at 0x003c182c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



/* Entry: 003c1830; end: 003c184f;  */

void FUN_003c1830(void)

{
                    /* WARNING: Could not recover jumptable at 0x003c183c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lRam0000000000b5e918 + 0x18))();
  return;
}



/* Entry: 003c1850; end: 003c18c7;  */

void FUN_003c1850(undefined8 param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int *piVar4;
  ulong uStack_28;
  
  pcVar3 = *(code **)(lRam0000000000b5e918 + 0x28);
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
  (*pcVar3)(param_1,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003c18c8; end: 003c1a1f;  */

void FUN_003c18c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x003c18d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lRam0000000000b5e918 + 0x60))();
  return;
}



/* Entry: 003c1a20; end: 003c1a9f;  */

undefined8 FUN_003c1a20(undefined8 param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int *piVar4;
  ulong uStack_28;
  
  pcVar3 = *(code **)(lRam0000000000b5e918 + 0x108);
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
  (*pcVar3)(param_1,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 003c1aa0; end: 003c1aaf;  */

void FUN_003c1aa0(void)

{
                    /* WARNING: Could not recover jumptable at 0x003c1aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lRam0000000000b5e918 + 0xf8))();
  return;
}



/* Entry: 003c1ab0; end: 003c1ccb;  */

void FUN_003c1ab0(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  
  FUN_0033adac(&lStack_68,&PTR_DAT_00afae50);
  lVar6 = lStack_68;
  uStack_78 = 0;
  puStack_70 = (undefined8 *)0x0;
  lVar7 = lStack_68;
  _strchr(lStack_68,0x2c);
  while (lVar7 != 0) {
    FUN_003c1ccc(lVar6,lVar7,&puStack_70,&uStack_78);
    lVar6 = lVar7 + 1;
    lVar7 = lVar6;
    _strchr(lVar6,0x2c);
  }
  lVar7 = lVar6;
  _strlen(lVar6);
  FUN_003c1ccc(lVar6,lVar6 + lVar7,&puStack_70,&uStack_78);
  puVar3 = puStack_70;
  uVar1 = uStack_78;
  puVar2 = puVar3;
  if ((lRam0000000000b5e918 == 0) && (uStack_78 != 0)) {
    uVar11 = 0;
    do {
      lVar6 = 0;
      uVar9 = puVar3[uVar11];
      do {
        lVar7 = *(long *)(lVar6 + 0xafad60);
        if (lVar7 != 0) {
          uVar10 = *(undefined8 *)(lVar7 + 0xe0);
          uVar5 = uVar9;
          _strcmp(uVar9,"all");
          if (((int)uVar5 == 0) || (uVar5 = uVar9, _strcmp(uVar9,uVar10), (int)uVar5 == 0)) {
            pcVar8 = *(code **)(lVar7 + 0xe8);
            uVar5 = uVar9;
            _strcmp(uVar9,uVar10);
            uVar4 = (uint)((int)uVar5 == 0);
            (*pcVar8)();
            if (uVar4 != 0) {
              lRam0000000000b5e918 = *(long *)(lVar6 + 0xafad60);
              FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_posix.cc"
                           ,0x8d,0,"Using polling engine: %s");
              break;
            }
          }
        }
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0x58);
      uVar11 = uVar11 + 1;
    } while (lRam0000000000b5e918 == 0 && uVar11 < uVar1);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    FUN_00338cb8(*puVar2);
    puVar2 = puVar2 + 1;
  }
  FUN_00338cb8(puVar3);
  lVar6 = lStack_68;
  if (lRam0000000000b5e918 == 0) {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_posix.cc"
                 ,0xbe,2,"No event engine could be initialized from %s");
    _abort();
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x3c1c98);
    (*pcVar8)();
  }
  lStack_68 = 0;
  if (lVar6 != 0) {
    FUN_00338cb8();
  }
  return;
}



/* Entry: 003c1ccc; end: 003c1d4f;  */

long FUN_003c1ccc(ulong param_1,ulong param_2,long *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uStack_a0;
  ulong uStack_98;
  
  if (param_1 <= param_2) {
    lVar7 = *param_4;
    lVar6 = lVar7 + 1;
    lVar1 = (param_2 - param_1) + 1;
    FUN_00338c74();
    _memcpy();
    *(undefined1 *)(lVar1 + (param_2 - param_1)) = 0;
    lVar2 = *param_3;
    FUN_00338cbc(lVar2,lVar6 * 8);
    *param_3 = lVar2;
    *(long *)(lVar2 + lVar7 * 8) = lVar1;
    *param_4 = lVar6;
    return lVar2;
  }
  FUN_007740e4();
  lVar6 = 0;
  uVar3 = param_1;
  do {
    while (plVar4 = *(long **)(param_1 + 8), plVar4 != (long *)0x0) {
      *(long *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      do {
        plVar5 = (long *)*plVar4;
        FUN_003b7b6c(&uStack_98,plVar4[3]);
        plVar4[3] = 0;
        uStack_a0 = uStack_98;
        uStack_98 = 0x36;
        (*(code *)plVar4[1])(plVar4[2],&uStack_a0);
        if ((uStack_a0 & 1) != 0) {
          FUN_0055293c();
        }
        uVar3 = uStack_98;
        if ((uStack_98 & 1) != 0) {
          FUN_0055293c();
        }
        plVar4 = plVar5;
      } while (plVar5 != (long *)0x0);
      lVar6 = 1;
    }
    FUN_003bc6f8();
  } while ((uVar3 & 1) != 0);
  if (*(long *)(param_1 + 0x18) == 0) {
    return lVar6;
  }
  func_0x0077411c();
  func_0x0040cf10();
  func_0x0040cf10();
  FUN_0033c494(&uStack_a0);
  FUN_0033c494(&uStack_98);
  __Unwind_Resume();
  if (*(char *)(uVar3 + 0x34) == '\0') {
    lVar6 = 0;
    FUN_0033a598();
    FUN_003b8c6c();
    *(long *)(uVar3 + 0x38) = lVar6;
    *(undefined1 *)(uVar3 + 0x34) = 1;
  }
  else {
    lVar6 = *(long *)(uVar3 + 0x38);
  }
  return lVar6;
}



/* Entry: 003c1d50; end: 003c1e27;  */

undefined8 FUN_003c1d50(ulong param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uStack_50;
  ulong uStack_48;
  
  uVar4 = 0;
  uVar1 = param_1;
  do {
    while (plVar2 = *(long **)(param_1 + 8), plVar2 != (long *)0x0) {
      *(long *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      do {
        plVar3 = (long *)*plVar2;
        FUN_003b7b6c(&uStack_48,plVar2[3]);
        plVar2[3] = 0;
        uStack_50 = uStack_48;
        uStack_48 = 0x36;
        (*(code *)plVar2[1])(plVar2[2],&uStack_50);
        if ((uStack_50 & 1) != 0) {
          FUN_0055293c();
        }
        uVar1 = uStack_48;
        if ((uStack_48 & 1) != 0) {
          FUN_0055293c();
        }
        plVar2 = plVar3;
      } while (plVar3 != (long *)0x0);
      uVar4 = 1;
    }
    FUN_003bc6f8();
  } while ((uVar1 & 1) != 0);
  if (*(long *)(param_1 + 0x18) == 0) {
    return uVar4;
  }
  func_0x0077411c();
  func_0x0040cf10();
  func_0x0040cf10();
  FUN_0033c494(&uStack_50);
  FUN_0033c494(&uStack_48);
  __Unwind_Resume();
  if (*(char *)(uVar1 + 0x34) == '\0') {
    uVar4 = 0;
    FUN_0033a598();
    FUN_003b8c6c();
    *(undefined8 *)(uVar1 + 0x38) = uVar4;
    *(undefined1 *)(uVar1 + 0x34) = 1;
  }
  else {
    uVar4 = *(undefined8 *)(uVar1 + 0x38);
  }
  return uVar4;
}



/* Entry: 003c1e28; end: 003c1e6b;  */

void FUN_003c1e28(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x34) == '\0') {
    uVar1 = 0;
    FUN_0033a598();
    FUN_003b8c6c();
    *(undefined8 *)(param_1 + 0x38) = uVar1;
    *(undefined1 *)(param_1 + 0x34) = 1;
  }
  return;
}



/* Entry: 003c1e6c; end: 003c1f13;  */

void FUN_003c1e6c(undefined8 param_1,undefined8 *param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  undefined **ppuVar4;
  int *piVar5;
  undefined *puVar6;
  long *plVar7;
  ulong uStack_28;
  
  if (param_2 != (undefined8 *)0x0) {
    uStack_28 = *param_3;
    if ((uStack_28 & 1) != 0) {
      piVar5 = (int *)(uStack_28 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    puVar3 = &uStack_28;
    FUN_003b7ab0();
    param_2[3] = puVar3;
    if ((uStack_28 & 1) != 0) {
      FUN_0055293c();
    }
    ppuVar4 = &PTR___tlv_bootstrap_00b2c420;
    (*(code *)PTR___tlv_bootstrap_00b2c420)();
    puVar6 = *ppuVar4;
    *param_2 = 0;
    plVar7 = (long *)(puVar6 + 8);
    if (*plVar7 != 0) {
      plVar7 = *(long **)(puVar6 + 0x10);
    }
    *plVar7 = (long)param_2;
    *(undefined8 **)(puVar6 + 0x10) = param_2;
  }
  return;
}



/* Entry: 003c1f14; end: 003c1fab;  */

void FUN_003c1f14(undefined8 param_1,long *param_2)

{
  undefined **ppuVar1;
  undefined8 *extraout_x8;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long *plVar5;
  
  if (*param_2 != 0) {
    ppuVar1 = &PTR___tlv_bootstrap_00b2c420;
    (*(code *)PTR___tlv_bootstrap_00b2c420)();
    puVar2 = extraout_x8;
    do {
      puVar3 = (undefined8 *)*puVar2;
      puVar4 = *ppuVar1;
      *puVar2 = 0;
      plVar5 = (long *)(puVar4 + 8);
      if (*plVar5 != 0) {
        plVar5 = *(long **)(puVar4 + 0x10);
      }
      *plVar5 = (long)puVar2;
      *(undefined8 **)(puVar4 + 0x10) = puVar2;
      puVar2 = puVar3;
    } while (puVar3 != (undefined8 *)0x0);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



/* Entry: 003c1fac; end: 003c2287;  */

code * FUN_003c1fac(code *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar6;
  char *pcStack_d8;
  char *pcStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined2 auStack_80 [4];
  undefined8 uStack_78;
  undefined4 auStack_70 [2];
  undefined8 uStack_68;
  undefined2 uStack_60;
  undefined6 uStack_5e;
  undefined8 uStack_58;
  
  lVar4 = *(long *)(param_1 + 0x18);
  if ((int)param_2 == 0) {
    if (lVar4 != 0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        lVar4 = 0;
        uVar6 = 0;
        do {
          func_0x00339d8c(*(long *)(param_1 + 8) + lVar4);
          lVar5 = *(long *)(param_1 + 8);
          *(undefined1 *)(lVar5 + lVar4 + 0x98) = 1;
          FUN_00339f68(lVar5 + lVar4 + 0x50);
          func_0x00339da8(*(long *)(param_1 + 8) + lVar4);
          uVar6 = uVar6 + 1;
          lVar4 = lVar4 + 0xc0;
        } while (uVar6 < *(ulong *)(param_1 + 0x10));
      }
      UNRECOVERED_JUMPTABLE = param_1 + 0x20;
      do {
        while (*(long *)UNRECOVERED_JUMPTABLE != 0) {
          ClearExclusiveLocal();
        }
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(UNRECOVERED_JUMPTABLE,0x10);
        if (bVar2) {
          *(long *)UNRECOVERED_JUMPTABLE = 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      *(long *)(param_1 + 0x20) = 0;
      lVar4 = *(long *)(param_1 + 0x18);
      if (0 < lVar4) {
        lVar5 = 0xa0;
        do {
          FUN_003b33cc(*(long *)(param_1 + 8) + lVar5);
          lVar5 = lVar5 + 0xc0;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      *(long *)(param_1 + 0x18) = 0;
      if (*(long *)(param_1 + 0x10) != 0) {
        lVar4 = 0;
        uVar6 = 0;
        do {
          func_0x00339d70(*(long *)(param_1 + 8) + lVar4);
          FUN_00339e64(*(long *)(param_1 + 8) + lVar4 + 0x50);
          FUN_003c2288();
          uVar6 = uVar6 + 1;
          lVar4 = lVar4 + 0xc0;
        } while (uVar6 < *(ulong *)(param_1 + 0x10));
      }
      FUN_00338cb8(*(long *)(param_1 + 8));
      UNRECOVERED_JUMPTABLE = *(code **)(lRam0000000000b5e9c0 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x003c3298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return UNRECOVERED_JUMPTABLE;
    }
  }
  else if (lVar4 < 1) {
    if (lVar4 != 0) {
      func_0x00774154();
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_c8 = 1;
      func_0x003c1f8c();
      if (*(long *)param_1 == 0) {
        func_0x003c1f8c();
        *(undefined8 **)param_1 = &uStack_c8;
      }
      UNRECOVERED_JUMPTABLE = (code *)0x0;
      while (param_2 != (long *)0x0) {
        lVar4 = *param_2;
        FUN_003b7b6c(&pcStack_d0,param_2[3]);
        param_2[3] = 0;
        pcStack_d8 = pcStack_d0;
        pcStack_d0 = segment_command_00000020.segname + 0xe;
        (*(code *)param_2[1])(param_2[2],&pcStack_d8);
        pcVar3 = pcStack_d8;
        if (((ulong)pcStack_d8 & 1) != 0) {
          FUN_0055293c();
        }
        func_0x003c1f6c();
        FUN_003c1d50(*(undefined8 *)pcVar3);
        if (((ulong)pcStack_d0 & 1) != 0) {
          FUN_0055293c();
        }
        UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + 1;
        param_2 = (long *)lVar4;
      }
      FUN_003414dc(&uStack_c8);
      return UNRECOVERED_JUMPTABLE;
    }
    *(long *)(param_1 + 0x18) = 1;
    lVar4 = *(long *)(param_1 + 0x10) * 0xc0;
    func_0x00338c94();
    *(long *)(param_1 + 8) = lVar4;
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar6 = 0;
      lVar4 = 0x80;
      do {
        FUN_00339d50(*(long *)(param_1 + 8) + lVar4 + -0x80);
        FUN_00339df0(*(long *)(param_1 + 8) + lVar4 + -0x30);
        lVar5 = *(long *)(param_1 + 8) + lVar4;
        *(ulong *)(lVar5 + -0x40) = uVar6;
        *(long *)(lVar5 + -0x38) = *(long *)param_1;
        auStack_70[0] = 0;
        if ((undefined4 *)(lVar5 + 0x20) != auStack_70) {
          *(undefined4 *)(lVar5 + 0x20) = 0;
          *(undefined8 *)(lVar5 + 0x28) = 0;
          *(undefined8 *)(lVar5 + 0x38) = 0;
          *(ulong *)(lVar5 + 0x30) = CONCAT62(uStack_5e,0x101);
          auStack_70[0] = 5;
        }
        uStack_58 = 0;
        uStack_60 = 0x101;
        uStack_68 = 0;
        FUN_003b3a7c(auStack_70);
        lVar5 = *(long *)(param_1 + 8);
        uVar6 = uVar6 + 1;
        *(undefined8 *)(lVar5 + lVar4) = 0;
        ((undefined8 *)(lVar5 + lVar4))[1] = 0;
        lVar4 = lVar4 + 0xc0;
      } while (uVar6 < *(ulong *)(param_1 + 0x10));
      lVar4 = *(long *)(param_1 + 8);
    }
    auStack_80[0] = 0x101;
    uStack_78 = 0;
    FUN_0033b6e0(auStack_70,*(long *)param_1,FUN_003c2384,lVar4,0,auStack_80);
    lVar4 = *(long *)(param_1 + 8);
    if ((undefined4 *)(lVar4 + 0xa0) != auStack_70) {
      *(undefined4 *)(lVar4 + 0xa0) = auStack_70[0];
      *(undefined8 *)(lVar4 + 0xa8) = uStack_68;
      *(undefined8 *)(lVar4 + 0xb8) = uStack_58;
      *(ulong *)(lVar4 + 0xb0) = CONCAT62(uStack_5e,uStack_60);
      auStack_70[0] = 5;
      uStack_68 = 0;
      uStack_60 = 0x101;
      uStack_58 = 0;
    }
    FUN_003b3a7c(auStack_70);
    param_1 = (code *)(*(long *)(param_1 + 8) + 0xa0);
    FUN_003b3344(param_1);
  }
  return param_1;
}



/* Entry: 003c2288; end: 003c2383;  */

long FUN_003c2288(long *param_1,long *param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  char *pcStack_58;
  char *pcStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 1;
  func_0x003c1f8c();
  if (*param_1 == 0) {
    func_0x003c1f8c();
    *param_1 = (long)&uStack_48;
  }
  lVar2 = 0;
  while (param_2 != (long *)0x0) {
    lVar3 = *param_2;
    FUN_003b7b6c(&pcStack_50,param_2[3]);
    param_2[3] = 0;
    pcStack_58 = pcStack_50;
    pcStack_50 = segment_command_00000020.segname + 0xe;
    (*(code *)param_2[1])(param_2[2],&pcStack_58);
    pcVar1 = pcStack_58;
    if (((ulong)pcStack_58 & 1) != 0) {
      FUN_0055293c();
    }
    func_0x003c1f6c();
    FUN_003c1d50(*(undefined8 *)pcVar1);
    if (((ulong)pcStack_50 & 1) != 0) {
      FUN_0055293c();
    }
    lVar2 = lVar2 + 1;
    param_2 = (long *)lVar3;
  }
  FUN_003414dc(&uStack_48);
  return lVar2;
}



/* Entry: 003c2384; end: 003c2497;  */

void FUN_003c2384(dword *param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  dword *pdVar3;
  dword *pdVar4;
  undefined1 auStack_88 [72];
  
  ppuVar1 = &PTR___tlv_bootstrap_00b2c450;
  (*(code *)PTR___tlv_bootstrap_00b2c450)();
  *ppuVar1 = (undefined *)param_1;
  pdVar4 = &MACH_HEADER.cputype;
  FUN_003c2a78(auStack_88,4);
  pdVar3 = (dword *)0x0;
  while( true ) {
    func_0x00339d8c(param_1);
    *(long *)(param_1 + 0x24) = *(long *)(param_1 + 0x24) - (long)pdVar3;
    pdVar3 = pdVar4;
    while( true ) {
      pdVar4 = *(dword **)(param_1 + 0x20);
      if (pdVar4 != (dword *)0x0) break;
      if (*(char *)(param_1 + 0x26) != '\0') goto LAB_003c244c;
      *(undefined1 *)((long)param_1 + 0x99) = 0;
      uVar2 = 0;
      func_0x0033a068(0);
      pdVar4 = param_1;
      FUN_00339e80(param_1 + 0x14,param_1,uVar2,pdVar3);
      pdVar3 = pdVar4;
    }
    if (*(char *)(param_1 + 0x26) != '\0') break;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x22) = 0;
    pdVar3 = param_1;
    func_0x00339da8();
    func_0x003c1f6c();
    *(undefined1 *)(*(long *)pdVar3 + 0x34) = 0;
    FUN_003c2288();
  }
LAB_003c244c:
  func_0x00339da8(param_1);
  *ppuVar1 = (undefined *)0x0;
  FUN_00341470(auStack_88);
  return;
}



/* Entry: 003c2498; end: 003c287b;  */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_003c2498(undefined8 *param_1,undefined8 *param_2,ulong *param_3,byte param_4)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  int *piVar7;
  long extraout_x8;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  ulong uVar16;
  undefined2 auStack_a8 [4];
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined2 uStack_88;
  undefined6 uStack_86;
  undefined8 uStack_80;
  ulong uStack_78;
  ulong *puStack_70;
  ulong uStack_68;
  
  ppuVar4 = &PTR___tlv_bootstrap_00b2c450;
  (*(code *)PTR___tlv_bootstrap_00b2c450)();
  plVar10 = param_1 + 4;
  ppuVar15 = ppuVar4;
  while (uVar16 = param_1[3], uVar16 != 0) {
    puStack_70 = (ulong *)*param_3;
    if (((ulong)puStack_70 & 1) != 0) {
      piVar7 = (int *)((long)puStack_70 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar5 = param_2;
    FUN_003c32ac(param_2,&puStack_70);
    puVar6 = puStack_70;
    if (((ulong)puStack_70 & 1) != 0) {
      FUN_0055293c();
    }
    if (((ulong)puVar5 & 1) != 0) {
      return;
    }
    ppuVar13 = (undefined **)*ppuVar4;
    ppuVar14 = ppuVar13;
    if (ppuVar13 == (undefined **)0x0) {
      func_0x003c1f6c(param_1[1]);
      uVar11 = *puVar6;
      uVar12 = uVar11 >> 4 ^ uVar11 >> 9 ^ uVar11 >> 0xe;
      uVar11 = 0;
      if (uVar16 != 0) {
        uVar11 = uVar12 / uVar16;
      }
      ppuVar13 = (undefined **)(extraout_x8 + (uVar12 - uVar11 * uVar16) * 0xc0);
      ppuVar14 = ppuVar13;
    }
    while( true ) {
      func_0x00339d8c(ppuVar13);
      cVar2 = *(char *)((long)ppuVar13 + 0x99);
      if (cVar2 == '\0') break;
      ppuVar15 = ppuVar13;
      func_0x00339da8();
      uVar11 = 0;
      if (uVar16 != 0) {
        uVar11 = (ulong)(ppuVar13[8] + 1) / uVar16;
      }
      ppuVar13 = (undefined **)(param_1[1] + ((long)(ppuVar13[8] + 1) - uVar11 * uVar16) * 0xc0);
      if (ppuVar13 == ppuVar14) goto LAB_003c2690;
    }
    ppuVar15 = ppuVar13 + 0x10;
    if ((*ppuVar15 == (undefined *)0x0) && (*(char *)(ppuVar13 + 0x13) == '\0')) {
      FUN_00339f68(ppuVar13 + 10);
    }
    uVar11 = *param_3;
    uStack_78 = uVar11;
    if ((uVar11 & 1) == 0) {
      if (param_2 != (undefined8 *)0x0) goto LAB_003c261c;
      goto LAB_003c264c;
    }
    piVar7 = (int *)(uVar11 - 1);
    do {
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = *piVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (param_2 == (undefined8 *)0x0) {
LAB_003c2650:
      FUN_0055293c(uVar11);
    }
    else {
      do {
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_003c261c:
      puVar6 = &uStack_98;
      uStack_98 = uVar11;
      FUN_003b7ab0();
      param_2[3] = puVar6;
      if ((uStack_98 & 1) != 0) {
        FUN_0055293c();
      }
      *param_2 = 0;
      if (*ppuVar15 != (undefined *)0x0) {
        ppuVar15 = (undefined **)ppuVar13[0x11];
      }
      *ppuVar15 = (undefined *)param_2;
      ppuVar13[0x11] = (undefined *)param_2;
LAB_003c264c:
      if ((uVar11 & 1) != 0) goto LAB_003c2650;
    }
    puVar8 = ppuVar13[0x12];
    ppuVar13[0x12] = puVar8 + 1;
    if ((puVar8 + 1 < (undefined *)0x3) || ((ulong)param_1[2] <= uVar16)) {
      *(byte *)((long)ppuVar13 + 0x99) = param_4 ^ 1;
      func_0x00339da8(ppuVar13);
      return;
    }
    cVar1 = *(char *)(ppuVar13 + 0x13);
    *(byte *)((long)ppuVar13 + 0x99) = param_4 ^ 1;
    func_0x00339da8();
    ppuVar15 = ppuVar13;
    if (cVar1 != '\0') {
      return;
    }
LAB_003c2690:
    do {
      if (*plVar10 != 0) {
        ClearExclusiveLocal();
        goto joined_r0x003c2760;
      }
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uVar16 = param_1[3];
    if (uVar16 < (ulong)param_1[2]) {
      param_1[3] = uVar16 + 1;
      auStack_a8[0] = 0x101;
      uStack_a0 = 0;
      FUN_0033b6e0(&uStack_98,*param_1,FUN_003c2384,param_1[1] + uVar16 * 0xc0,0,auStack_a8);
      lVar9 = param_1[1];
      puVar6 = (ulong *)(lVar9 + uVar16 * 0xc0 + 0xa0);
      if (puVar6 != &uStack_98) {
        *(undefined4 *)puVar6 = (undefined4)uStack_98;
        lVar9 = lVar9 + uVar16 * 0xc0;
        *(undefined8 *)(lVar9 + 0xa8) = uStack_90;
        *(undefined8 *)(lVar9 + 0xb8) = uStack_80;
        *(ulong *)(lVar9 + 0xb0) = CONCAT62(uStack_86,uStack_88);
        uStack_98 = CONCAT44(uStack_98._4_4_,5);
        uStack_90 = 0;
        uStack_88 = 0x101;
        uStack_80 = 0;
      }
      FUN_003b3a7c(&uStack_98);
      ppuVar15 = (undefined **)(param_1[1] + uVar16 * 0xc0 + 0xa0);
      FUN_003b3344();
    }
    *plVar10 = 0;
joined_r0x003c2760:
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x003c1f6c();
  puVar8 = *ppuVar15;
  uVar16 = *param_3;
  uStack_68 = uVar16;
  if ((uVar16 & 1) == 0) {
    if (param_2 != (undefined8 *)0x0) goto LAB_003c27cc;
  }
  else {
    piVar7 = (int *)(uVar16 - 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = *piVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (param_2 == (undefined8 *)0x0) goto LAB_003c2804;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = *piVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_003c27cc:
    puVar6 = &uStack_98;
    uStack_98 = uVar16;
    FUN_003b7ab0();
    param_2[3] = puVar6;
    if ((uStack_98 & 1) != 0) {
      FUN_0055293c();
    }
    plVar10 = (long *)(puVar8 + 8);
    *param_2 = 0;
    if (*plVar10 != 0) {
      plVar10 = *(long **)(puVar8 + 0x10);
    }
    *plVar10 = (long)param_2;
    *(undefined8 **)(puVar8 + 0x10) = param_2;
  }
  if ((uVar16 & 1) == 0) {
    return;
  }
LAB_003c2804:
  FUN_0055293c(uVar16);
  return;
}



/* Entry: 003c287c; end: 003c2967;  */

/* WARNING: Removing unreachable block (ram,0x003c20c4) */
/* WARNING: Removing unreachable block (ram,0x003c20c8) */
/* WARNING: Removing unreachable block (ram,0x003c20d0) */
/* WARNING: Removing unreachable block (ram,0x003c20dc) */
/* WARNING: Removing unreachable block (ram,0x003c211c) */
/* WARNING: Removing unreachable block (ram,0x003c2124) */
/* WARNING: Removing unreachable block (ram,0x003c212c) */
/* WARNING: Removing unreachable block (ram,0x003c2134) */
/* WARNING: Removing unreachable block (ram,0x003c213c) */
/* WARNING: Removing unreachable block (ram,0x003c2150) */
/* WARNING: Removing unreachable block (ram,0x003c2154) */
/* WARNING: Removing unreachable block (ram,0x003c216c) */
/* WARNING: Removing unreachable block (ram,0x003c217c) */
/* WARNING: Removing unreachable block (ram,0x003c2184) */
/* WARNING: Removing unreachable block (ram,0x003c21c4) */

char * FUN_003c287c(char *param_1,ulong *param_2,int param_3,int param_4)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 *puVar7;
  long lVar8;
  code *pcVar9;
  char *pcVar10;
  int *piVar11;
  ulong uVar12;
  undefined8 *puVar13;
  char *pcStack_d8;
  char *pcStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined2 auStack_80 [4];
  undefined8 uStack_78;
  undefined4 auStack_70 [2];
  undefined8 uStack_68;
  undefined2 uStack_60;
  undefined6 uStack_5e;
  undefined8 uStack_58;
  
  if (pcRam0000000000b5e920 == (char *)0x0) {
    pcVar5 = segment_command_00000020.segname;
    __Znwm();
    *(char **)pcVar5 = "default-executor";
    *(qword *)(pcVar5 + 0x20) = 0;
    *(qword *)(pcVar5 + 0x18) = 0;
    pcVar10 = pcVar5;
    FUN_00338d88();
    uVar1 = (int)pcVar10 << 1;
    if (uVar1 < 2) {
      uVar1 = 1;
    }
    *(ulong *)(pcVar5 + 0x10) = (ulong)uVar1;
    pcVar6 = segment_command_00000020.segname;
    pcRam0000000000b5e920 = pcVar5;
    __Znwm();
    *(char **)pcVar6 = "resolver-executor";
    *(qword *)(pcVar6 + 0x20) = 0;
    *(qword *)(pcVar6 + 0x18) = 0;
    pcVar10 = pcVar6;
    FUN_00338d88();
    uVar1 = (int)pcVar10 << 1;
    if (uVar1 < 2) {
      uVar1 = 1;
    }
    *(ulong *)(pcVar6 + 0x10) = (ulong)uVar1;
    pcRam0000000000b5e928 = pcVar6;
    FUN_003c1fac(pcRam0000000000b5e920,1);
    pcVar10 = pcRam0000000000b5e928;
    puVar7 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
    if ((long)*(qword *)(pcRam0000000000b5e928 + 0x18) < 1) {
      if (*(qword *)(pcRam0000000000b5e928 + 0x18) != 0) {
        pcVar10 = pcRam0000000000b5e928;
        func_0x00774154();
        uStack_c0 = 0;
        uStack_b8 = 0;
        uStack_c8 = 1;
        func_0x003c1f8c();
        if (*(long *)pcVar10 == 0) {
          func_0x003c1f8c();
          *(undefined8 **)pcVar10 = &uStack_c8;
        }
        pcVar10 = (char *)0x0;
        while (puVar7 != (undefined8 *)0x0) {
          puVar13 = (undefined8 *)*puVar7;
          FUN_003b7b6c(&pcStack_d0,puVar7[3]);
          puVar7[3] = 0;
          pcStack_d8 = pcStack_d0;
          pcStack_d0 = segment_command_00000020.segname + 0xe;
          (*(code *)puVar7[1])(puVar7[2],&pcStack_d8);
          pcVar5 = pcStack_d8;
          if (((ulong)pcStack_d8 & 1) != 0) {
            FUN_0055293c();
          }
          func_0x003c1f6c();
          FUN_003c1d50(*(undefined8 *)pcVar5);
          if (((ulong)pcStack_d0 & 1) != 0) {
            FUN_0055293c();
          }
          pcVar10 = pcVar10 + 1;
          puVar7 = puVar13;
        }
        FUN_003414dc(&uStack_c8);
        return pcVar10;
      }
      *(qword *)(pcRam0000000000b5e928 + 0x18) = 1;
      lVar4 = *(qword *)(pcVar10 + 0x10) * 0xc0;
      func_0x00338c94();
      *(long *)(pcVar10 + 8) = lVar4;
      if (*(qword *)(pcVar10 + 0x10) != 0) {
        uVar12 = 0;
        lVar4 = 0x80;
        do {
          FUN_00339d50(*(long *)(pcVar10 + 8) + lVar4 + -0x80);
          FUN_00339df0(*(long *)(pcVar10 + 8) + lVar4 + -0x30);
          lVar8 = *(long *)(pcVar10 + 8) + lVar4;
          *(ulong *)(lVar8 + -0x40) = uVar12;
          *(long *)(lVar8 + -0x38) = *(long *)pcVar10;
          auStack_70[0] = 0;
          if ((undefined4 *)(lVar8 + 0x20) != auStack_70) {
            *(undefined4 *)(lVar8 + 0x20) = 0;
            *(undefined8 *)(lVar8 + 0x28) = 0;
            *(undefined8 *)(lVar8 + 0x38) = 0;
            *(ulong *)(lVar8 + 0x30) = CONCAT62(uStack_5e,0x101);
            auStack_70[0] = 5;
          }
          uStack_58 = 0;
          uStack_60 = 0x101;
          uStack_68 = 0;
          FUN_003b3a7c(auStack_70);
          lVar8 = *(long *)(pcVar10 + 8);
          uVar12 = uVar12 + 1;
          *(undefined8 *)(lVar8 + lVar4) = 0;
          ((undefined8 *)(lVar8 + lVar4))[1] = 0;
          lVar4 = lVar4 + 0xc0;
        } while (uVar12 < *(ulong *)(pcVar10 + 0x10));
        lVar4 = *(long *)(pcVar10 + 8);
      }
      auStack_80[0] = 0x101;
      uStack_78 = 0;
      FUN_0033b6e0(auStack_70,*(long *)pcVar10,FUN_003c2384,lVar4,0,auStack_80);
      lVar4 = *(long *)(pcVar10 + 8);
      if ((undefined4 *)(lVar4 + 0xa0) != auStack_70) {
        *(undefined4 *)(lVar4 + 0xa0) = auStack_70[0];
        *(undefined8 *)(lVar4 + 0xa8) = uStack_68;
        *(undefined8 *)(lVar4 + 0xb8) = uStack_58;
        *(ulong *)(lVar4 + 0xb0) = CONCAT62(uStack_5e,uStack_60);
        auStack_70[0] = 5;
        uStack_68 = 0;
        uStack_60 = 0x101;
        uStack_58 = 0;
      }
      FUN_003b3a7c(auStack_70);
      pcVar10 = (char *)(*(long *)(pcVar10 + 8) + 0xa0);
      FUN_003b3344(pcVar10);
    }
    return pcVar10;
  }
  if (pcRam0000000000b5e928 == (char *)0x0) {
    func_0x00774188();
    __ZdlPv();
    __Unwind_Resume(param_1);
    pcVar9 = (code *)(&PTR_FUN_009e0320)[(long)param_3 * 2 + (long)param_4];
    pcVar10 = (char *)*param_2;
    if (((ulong)pcVar10 & 1) != 0) {
      piVar11 = (int *)(pcVar10 + -1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar3) {
          *piVar11 = *piVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    (*pcVar9)();
    if (((ulong)pcVar10 & 1) != 0) {
      FUN_0055293c();
    }
    return pcVar10;
  }
  return param_1;
}



/* Entry: 003c2968; end: 003c29e3;  */

void FUN_003c2968(undefined8 param_1,ulong *param_2,int param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int *piVar4;
  ulong uStack_28;
  
  pcVar3 = (code *)(&PTR_FUN_009e0320)[(long)param_3 * 2 + (long)param_4];
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
  (*pcVar3)(param_1,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003c29e4; end: 003c2a57;  */

ulong FUN_003c29e4(void)

{
  ulong uVar1;
  
  if (lRam0000000000b5e920 == 0) {
    uVar1 = 0;
    if (uRam0000000000b5e928 != 0) {
      func_0x007741bc();
      return (ulong)(0 < *(long *)(lRam0000000000b5e920 + 0x18));
    }
  }
  else {
    FUN_003c1fac(lRam0000000000b5e920,0);
    FUN_003c1fac(uRam0000000000b5e928,0);
    if (lRam0000000000b5e920 != 0) {
      __ZdlPv();
    }
    uVar1 = uRam0000000000b5e928;
    if (uRam0000000000b5e928 != 0) {
      __ZdlPv();
      uVar1 = uRam0000000000b5e928;
    }
    lRam0000000000b5e920 = 0;
    uRam0000000000b5e928 = 0;
  }
  return uVar1;
}



/* Entry: 003c2a58; end: 003c2a77;  */

bool FUN_003c2a58(void)

{
  return 0 < *(long *)(lRam0000000000b5e920 + 0x18);
}



/* Entry: 003c2a78; end: 003c2af7;  */

undefined8 * FUN_003c2a78(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_009db970;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[5] = param_2;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x34) = 0;
  param_1[7] = 0;
  puVar1 = param_1;
  func_0x003c1f6c();
  param_1[8] = *puVar1;
  if (((*(byte *)(param_1 + 5) >> 2 & 1) == 0) && ((bRam0000000000b65d08 & 1) != 0)) {
    func_0x0033a940();
  }
  func_0x003c1f6c();
  *puVar1 = param_1;
  return param_1;
}



/* Entry: 003c2af8; end: 003c2b77;  */

void FUN_003c2af8(undefined8 param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uVar5;
  ulong uStack_28;
  
  uVar3 = uRam0000000000b5e920;
  uVar5 = *param_2;
  if ((uVar5 & 1) != 0) {
    piVar4 = (int *)(uVar5 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_28 = uVar5;
  FUN_003c2498(uVar3,param_1,&uStack_28,1);
  if ((uVar5 & 1) != 0) {
    FUN_0055293c(uVar5);
  }
  return;
}



/* Entry: 003c2b78; end: 003c2bf7;  */

void FUN_003c2b78(undefined8 param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uVar5;
  ulong uStack_28;
  
  uVar3 = uRam0000000000b5e920;
  uVar5 = *param_2;
  if ((uVar5 & 1) != 0) {
    piVar4 = (int *)(uVar5 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_28 = uVar5;
  FUN_003c2498(uVar3,param_1,&uStack_28,0);
  if ((uVar5 & 1) != 0) {
    FUN_0055293c(uVar5);
  }
  return;
}



/* Entry: 003c2bf8; end: 003c2c77;  */

void FUN_003c2bf8(undefined8 param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uVar5;
  ulong uStack_28;
  
  uVar3 = uRam0000000000b5e928;
  uVar5 = *param_2;
  if ((uVar5 & 1) != 0) {
    piVar4 = (int *)(uVar5 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_28 = uVar5;
  FUN_003c2498(uVar3,param_1,&uStack_28,1);
  if ((uVar5 & 1) != 0) {
    FUN_0055293c(uVar5);
  }
  return;
}



/* Entry: 003c2c78; end: 003c2cf7;  */

void FUN_003c2c78(undefined8 param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uVar5;
  ulong uStack_28;
  
  uVar3 = uRam0000000000b5e928;
  uVar5 = *param_2;
  if ((uVar5 & 1) != 0) {
    piVar4 = (int *)(uVar5 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_28 = uVar5;
  FUN_003c2498(uVar3,param_1,&uStack_28,0);
  if ((uVar5 & 1) != 0) {
    FUN_0055293c(uVar5);
  }
  return;
}



/* Entry: 003c2cf8; end: 003c2d03;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003c2cf8(undefined8 param_1,ulong param_2,undefined8 param_3,byte *param_4)

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



/* Entry: 003c2d04; end: 003c2d5f;  */

undefined8 FUN_003c2d04(undefined8 param_1)

{
  _if_nametoindex();
  if ((int)param_1 == 0) {
    ___error();
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/grpc_if_nametoindex_posix.cc"
                 ,0x23,0,"if_nametoindex failed for name %s. errno %d");
  }
  return param_1;
}



/* Entry: 003c2d60; end: 003c2d73;  */

undefined8 FUN_003c2d60(void)

{
  return 0;
}



/* Entry: 003c2d74; end: 003c2e13;  */

void FUN_003c2d74(void)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined1 auStack_68 [72];
  
  uVar2 = 0;
  FUN_003413d4();
  FUN_003c323c();
  if ((uVar2 & 1) == 0) {
    FUN_003c332c();
  }
  FUN_00339d50(0xb5e930);
  FUN_00339df0(0xb5e970);
  FUN_003c287c();
  uRam0000000000b5e9a8 = 0xb5e9a0;
  uRam0000000000b5e9b0 = 0xb5e9a0;
  puRam0000000000b5e9a0 = &DAT_008feef5;
  func_0x003c325c();
  func_0x003cf040();
  uVar1 = 0x78;
  FUN_0033ab98();
  uRam0000000000b5e9b8 = uVar1;
  FUN_00341470(auStack_68);
  return;
}



/* Entry: 003c2e14; end: 003c2e4b;  */

/* WARNING: Possible PIC construction at 0x003d01f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003d0414: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003d03e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003d04a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003d0508: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003d04a4) */
/* WARNING: Removing unreachable block (ram,0x003d0418) */
/* WARNING: Removing unreachable block (ram,0x003d01fc) */
/* WARNING: Removing unreachable block (ram,0x003d0244) */
/* WARNING: Removing unreachable block (ram,0x003d0270) */
/* WARNING: Removing unreachable block (ram,0x003d050c) */
/* WARNING: Removing unreachable block (ram,0x00339344) */
/* WARNING: Removing unreachable block (ram,0x003d0294) */
/* WARNING: Removing unreachable block (ram,0x003d02f0) */
/* WARNING: Removing unreachable block (ram,0x003d036c) */
/* WARNING: Removing unreachable block (ram,0x003d030c) */
/* WARNING: Removing unreachable block (ram,0x003d0378) */
/* WARNING: Removing unreachable block (ram,0x003d037c) */
/* WARNING: Removing unreachable block (ram,0x003d04a8) */
/* WARNING: Removing unreachable block (ram,0x003d04e0) */
/* WARNING: Removing unreachable block (ram,0x003d04ec) */
/* WARNING: Removing unreachable block (ram,0x003d0394) */
/* WARNING: Removing unreachable block (ram,0x003d039c) */
/* WARNING: Removing unreachable block (ram,0x003d03ac) */
/* WARNING: Removing unreachable block (ram,0x003d03b8) */
/* WARNING: Removing unreachable block (ram,0x003d0424) */
/* WARNING: Removing unreachable block (ram,0x003d03c8) */
/* WARNING: Removing unreachable block (ram,0x003d043c) */
/* WARNING: Removing unreachable block (ram,0x003d046c) */
/* WARNING: Removing unreachable block (ram,0x003d0488) */
/* WARNING: Removing unreachable block (ram,0x003d0494) */
/* WARNING: Removing unreachable block (ram,0x003d049c) */
/* WARNING: Removing unreachable block (ram,0x003d0314) */
/* WARNING: Removing unreachable block (ram,0x003d031c) */
/* WARNING: Removing unreachable block (ram,0x003d0334) */
/* WARNING: Removing unreachable block (ram,0x003d0340) */
/* WARNING: Removing unreachable block (ram,0x003d0358) */
/* WARNING: Removing unreachable block (ram,0x003d03d0) */
/* WARNING: Removing unreachable block (ram,0x003d03d8) */
/* WARNING: Removing unreachable block (ram,0x003d03e4) */
/* WARNING: Removing unreachable block (ram,0x003d0364) */

byte * FUN_003c2e14(undefined8 param_1,byte *param_2,byte *param_3,byte *param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  char *pcVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint uVar14;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long lVar15;
  undefined8 unaff_x21;
  byte *pbVar16;
  undefined8 unaff_x22;
  byte *unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  char acStack_3d1 [785];
  undefined1 auStack_60 [48];
  
  FUN_00339d50(0xb5ead8);
  FUN_00339df0(0xb5eb18);
  FUN_00339df0(0xb5eb48);
  bRam0000000000b5eb78 = 0;
  iRam0000000000b5eb7c = 0;
  iRam0000000000b5eb80 = 0;
  uRam0000000000b5eb88 = 0;
  uRam0000000000b5eb90 = 0;
  uRam0000000000b5eb98 = 0x7fffffffffffffff;
  func_0x00339d8c();
  if ((bRam0000000000b5eb78 & 1) == 0) {
    bRam0000000000b5eb78 = 1;
    unaff_x29 = &stack0xfffffffffffffff0;
    iRam0000000000b5eb80 = iRam0000000000b5eb80 + 1;
    iRam0000000000b5eb7c = iRam0000000000b5eb7c + 1;
    unaff_x30 = 0x3d01fc;
    register0x00000008 = (BADSPACEBASE *)auStack_60;
  }
  pbVar16 = (byte *)0xb5ead8;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  _pthread_mutex_unlock();
  if ((int)pbVar16 == 0) {
    return pbVar16;
  }
  func_0x00770db4();
  *(undefined1 **)((long)register0x00000008 + -0x20) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -0x18) = 0x339dc4;
  _pthread_mutex_trylock();
  if (((uint)pbVar16 | 0x10) == 0x10) {
    return (byte *)(ulong)((uint)pbVar16 == 0);
  }
  func_0x00770de8();
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x30) =
       (undefined1 *)((long)register0x00000008 + -0x20);
  *(code **)((long)register0x00000008 + -0x28) = FUN_00339df0;
  *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  pbVar5 = (byte *)((long)register0x00000008 + -0x58);
  _pthread_condattr_init();
  if ((int)pbVar5 == 0) {
    param_2 = (byte *)((long)register0x00000008 + -0x58);
    pbVar5 = pbVar16;
    _pthread_cond_init();
    if ((int)pbVar5 != 0) goto LAB_00339e5c;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x48)) {
      return pbVar5;
    }
  }
  else {
    func_0x00770e50();
LAB_00339e5c:
    func_0x00770e1c();
  }
  ___stack_chk_fail();
  *(undefined1 **)((long)register0x00000008 + -0x70) =
       (undefined1 *)((long)register0x00000008 + -0x30);
  *(code **)((long)register0x00000008 + -0x68) = FUN_00339e64;
  _pthread_cond_destroy();
  if ((int)pbVar5 == 0) {
    return pbVar5;
  }
  func_0x00770e84();
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x20;
  *(byte **)((long)register0x00000008 + -0x88) = pbVar16;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x70);
  *(code **)((long)register0x00000008 + -0x78) = FUN_00339e80;
  uVar6 = (ulong)param_4 >> 0x20;
  pbVar16 = param_2;
  func_0x0033a068(uVar6);
  pbVar7 = param_3;
  FUN_00339fc4(param_3,param_4,uVar6);
  pbVar8 = pbVar5;
  pbVar11 = param_2;
  if ((int)pbVar7 == 0) {
    _pthread_cond_wait();
    pbVar7 = param_4;
  }
  else {
    FUN_0033a30c(param_3,param_4,1);
    uVar6 = (ulong)param_4 >> 0x20;
    pbVar16 = param_4;
    FUN_0033a598(uVar6);
    pbVar7 = param_3;
    pbVar10 = param_4;
    FUN_0033a01c(param_3,param_4,uVar6);
    *(byte **)((long)register0x00000008 + -0xb0) = pbVar7;
    *(long *)((long)register0x00000008 + -0xa8) = (long)(int)pbVar10;
    _pthread_cond_timedwait(pbVar5,param_2,(undefined1 *)((long)register0x00000008 + -0xb0));
    pbVar7 = param_3;
    param_3 = param_4;
  }
  if (((uint)pbVar8 < 0x3d) && ((1L << ((ulong)pbVar8 & 0x3f) & 0x1000000800000001U) != 0)) {
    return (byte *)(ulong)((uint)pbVar8 == 0x3c);
  }
  func_0x00770eb8();
  *(undefined1 **)((long)register0x00000008 + -0xc0) =
       (undefined1 *)((long)register0x00000008 + -0x80);
  *(code **)((long)register0x00000008 + -0xb8) = FUN_00339f68;
  _pthread_cond_signal();
  if ((int)pbVar8 == 0) {
    return pbVar8;
  }
  func_0x00770eec();
  *(undefined1 **)((long)register0x00000008 + -0xd0) =
       (undefined1 *)((long)register0x00000008 + -0xc0);
  *(undefined8 *)((long)register0x00000008 + -200) = 0x339f84;
  _pthread_cond_broadcast();
  if ((int)pbVar8 == 0) {
    return pbVar8;
  }
  func_0x00770f20();
  *(undefined1 **)((long)register0x00000008 + -0xe0) =
       (undefined1 *)((long)register0x00000008 + -0xd0);
  *(undefined8 *)((long)register0x00000008 + -0xd8) = 0x339fa0;
  _pthread_once();
  if ((int)pbVar8 == 0) {
    return pbVar8;
  }
  func_0x00770f54();
  *(undefined1 **)((long)register0x00000008 + -0x120) = unaff_x24;
  *(byte **)((long)register0x00000008 + -0x118) = unaff_x23;
  *(byte **)((long)register0x00000008 + -0x110) = param_3;
  *(byte **)((long)register0x00000008 + -0x108) = pbVar7;
  *(byte **)((long)register0x00000008 + -0x100) = pbVar5;
  *(byte **)((long)register0x00000008 + -0xf8) = param_2;
  *(undefined1 **)((long)register0x00000008 + -0xf0) =
       (undefined1 *)((long)register0x00000008 + -0xe0);
  *(code **)((long)register0x00000008 + -0xe8) = FUN_00339fbc;
  *(undefined8 *)((long)register0x00000008 + -0x128) =
       *(undefined8 *)PTR____stack_chk_guard_00999f88;
  pbVar5 = (byte *)((long)&MACH_HEADER.magic + 2);
  pbVar7 = pbVar11;
  FUN_00338e58();
  if ((int)pbVar5 != 0) {
    *(undefined1 **)((long)register0x00000008 + -0x170) =
         (undefined1 *)((long)register0x00000008 + -0xe0);
    puVar13 = (undefined1 *)((long)register0x00000008 + -0x168);
    _vsnprintf(puVar13,0x40,pbVar16,(undefined1 *)((long)register0x00000008 + -0xe0));
    if ((int)(uint)puVar13 < 0) {
      unaff_x23 = (byte *)0x0;
      pbVar16 = (byte *)0x0;
    }
    else {
      unaff_x24 = puVar13;
      if ((uint)puVar13 < 0x40) {
        pbVar16 = (byte *)0x0;
        unaff_x23 = (byte *)((long)register0x00000008 + -0x168);
      }
      else {
        pbVar16 = (byte *)(((ulong)puVar13 & 0xffffffff) + 1);
        FUN_00338c74();
        *(undefined1 **)((long)register0x00000008 + -0x170) =
             (undefined1 *)((long)register0x00000008 + -0xe0);
        _vsnprintf();
        unaff_x23 = pbVar16;
      }
    }
    pbVar7 = pbVar11;
    FUN_00338e80(pbVar8,pbVar11,2,unaff_x23);
    pbVar5 = pbVar16;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x128)) {
    return pbVar5;
  }
  ___stack_chk_fail();
  *(undefined1 **)((long)register0x00000008 + -0x1b0) = unaff_x24;
  *(byte **)((long)register0x00000008 + -0x1a8) = unaff_x23;
  *(byte **)((long)register0x00000008 + -0x1a0) = pbVar16;
  *(byte **)((long)register0x00000008 + -0x198) = pbVar8;
  *(byte **)((long)register0x00000008 + -400) = pbVar11;
  *(undefined8 *)((long)register0x00000008 + -0x188) = 2;
  *(undefined1 **)((long)register0x00000008 + -0x180) =
       (undefined1 *)((long)register0x00000008 + -0xf0);
  *(code **)((long)register0x00000008 + -0x178) = FUN_00339178;
  *(undefined8 *)((long)register0x00000008 + -0x1b8) =
       *(undefined8 *)PTR____stack_chk_guard_00999f88;
  uVar2 = 1;
  FUN_0033a598();
  *(undefined8 *)((long)register0x00000008 + -0x268) = uVar2;
  lVar15 = *(long *)pbVar5;
  lVar3 = lVar15;
  _strrchr(lVar15,0x2f);
  if (lVar3 != 0) {
    lVar15 = lVar3 + 1;
  }
  puVar13 = (undefined1 *)((long)register0x00000008 + -0x268);
  _localtime_r(puVar13,(undefined1 *)((long)register0x00000008 + -0x2a0));
  if (puVar13 == (undefined1 *)0x0) {
    builtin_strncpy((char *)((long)register0x00000008 + -0x260),"error:localtime",0x10);
  }
  else {
    puVar13 = (undefined1 *)((long)register0x00000008 + -0x260);
    _strftime(puVar13,0x40,"%m%d %H:%M:%S",(undefined1 *)((long)register0x00000008 + -0x2a0));
    if (puVar13 == (undefined1 *)0x0) {
      builtin_strncpy((char *)((long)register0x00000008 + -0x260),"error:strftime",0xf);
    }
  }
  uVar4 = (ulong)*(uint *)(pbVar5 + 0xc);
  func_0x00338e1c();
  uVar6 = uVar4;
  _pthread_self();
  *(ulong *)((long)register0x00000008 + -0x218) = uVar4;
  *(undefined8 *)((long)register0x00000008 + -0x210) = 0x560e98;
  *(undefined1 **)((long)register0x00000008 + -0x208) =
       (undefined1 *)((long)register0x00000008 + -0x260);
  *(undefined8 *)((long)register0x00000008 + -0x200) = 0x560e98;
  *(ulong *)((long)register0x00000008 + -0x1f8) = (ulong)pbVar7 & 0xffffffff;
  *(undefined8 *)((long)register0x00000008 + -0x1f0) = 0x5606ac;
  *(ulong *)((long)register0x00000008 + -0x1e8) = uVar6;
  *(code **)((long)register0x00000008 + -0x1e0) = FUN_00560738;
  *(long *)((long)register0x00000008 + -0x1d8) = lVar15;
  *(undefined8 *)((long)register0x00000008 + -0x1d0) = 0x560e98;
  *(ulong *)((long)register0x00000008 + -0x1c8) = (ulong)*(uint *)(pbVar5 + 8);
  *(undefined8 *)((long)register0x00000008 + -0x1c0) = 0x5606ac;
  puVar13 = (undefined1 *)((long)register0x00000008 + -0x218);
  FUN_0056189c((undefined1 *)((long)register0x00000008 + -0x2b8),"%s%s.%09d %7ld %s:%d]",0x15,
               puVar13,6);
  uVar12 = *(uint *)(pbVar5 + 0xc);
  func_0x00338e6c();
  if (uVar12 == 0) {
    *(undefined1 *)((long)register0x00000008 + -0x218) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x200) = 0;
LAB_00339300:
    pbVar16 = *(byte **)PTR____stderrp_00999f90;
    puVar1 = *(undefined1 **)((long)register0x00000008 + -0x2b8);
    if (-1 < *(char *)((long)register0x00000008 + -0x2a1)) {
      puVar1 = (undefined1 *)((long)register0x00000008 + -0x2b8);
    }
    lVar15 = *(long *)(pbVar5 + 0x10);
    *(undefined1 **)((long)register0x00000008 + -0x2d0) = puVar1;
    *(long *)((long)register0x00000008 + -0x2c8) = lVar15;
    pcVar9 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8((undefined1 *)((long)register0x00000008 + -0x218));
    if (*(char *)((long)register0x00000008 + -0x200) == '\0') goto LAB_00339300;
    pbVar16 = *(byte **)PTR____stderrp_00999f90;
    puVar1 = *(undefined1 **)((long)register0x00000008 + -0x2b8);
    if (-1 < *(char *)((long)register0x00000008 + -0x2a1)) {
      puVar1 = (undefined1 *)((long)register0x00000008 + -0x2b8);
    }
    *(long *)((long)register0x00000008 + -0x2c8) = *(long *)(pbVar5 + 0x10);
    *(undefined1 **)((long)register0x00000008 + -0x2c0) =
         (undefined1 *)((long)register0x00000008 + -0x218);
    *(undefined1 **)((long)register0x00000008 + -0x2d0) = puVar1;
    pcVar9 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (*(char *)((long)register0x00000008 + -0x2a1) < '\0') {
    pbVar16 = *(byte **)((long)register0x00000008 + -0x2b8);
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x1b8)) {
    return pbVar16;
  }
  ___stack_chk_fail();
  if (*(char *)((long)register0x00000008 + -0x2a1) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x2b8));
  }
  __Unwind_Resume();
  uVar12 = (uint)puVar13;
  if ((char *)0x3 < pcVar9) {
    uVar6 = (ulong)pcVar9 >> 2;
    pbVar5 = pbVar16;
    do {
      uVar12 = (*(int *)pbVar5 * 0x16a88000 | (uint)(*(int *)pbVar5 * -0x3361d2af) >> 0x11) *
               0x1b873593 ^ (uint)puVar13;
      uVar12 = (uVar12 >> 0x13 | uVar12 << 0xd) * 5 + 0xe6546b64;
      puVar13 = (undefined1 *)(ulong)uVar12;
      uVar6 = uVar6 - 1;
      pbVar5 = pbVar5 + 4;
    } while (uVar6 != 0);
    pbVar16 = pbVar16 + ((ulong)pcVar9 & 0xfffffffffffffffc);
  }
  uVar14 = 0;
  uVar6 = (ulong)pcVar9 & 3;
  if (uVar6 != 1) {
    if (uVar6 != 2) {
      if (uVar6 != 3) goto LAB_00339464;
      uVar14 = (uint)pbVar16[2] << 0x10;
    }
    uVar14 = uVar14 | (uint)pbVar16[1] << 8;
  }
  uVar12 = ((uVar14 ^ *pbVar16) * 0x16a88000 | (uVar14 ^ *pbVar16) * -0x3361d2af >> 0x11) *
           0x1b873593 ^ uVar12;
LAB_00339464:
  uVar12 = uVar12 ^ (uint)pcVar9;
  uVar12 = (uVar12 ^ uVar12 >> 0x10) * -0x7a143595;
  uVar12 = (uVar12 ^ uVar12 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar12 ^ uVar12 >> 0x10);
}



/* Entry: 003c2e4c; end: 003c30ff;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

qword * FUN_003c2e4c(undefined8 param_1,qword *param_2)

{
  int iVar1;
  qword *pqVar2;
  undefined8 uVar3;
  qword qVar4;
  undefined7 *puVar5;
  ulong uVar6;
  qword *pqVar7;
  ulong uVar8;
  qword *pqVar9;
  qword *pqVar10;
  long *plVar11;
  qword *pqVar12;
  qword *pqVar13;
  qword *pqVar14;
  char *pcVar15;
  undefined8 uVar16;
  uint uVar17;
  ulong *puVar18;
  qword *pqVar19;
  undefined8 *puVar20;
  long lVar21;
  uint uVar22;
  qword qVar23;
  qword *pqVar24;
  qword *unaff_x23;
  qword *unaff_x24;
  qword *apqStack_258 [2];
  char cStack_241;
  undefined1 auStack_240 [56];
  undefined8 uStack_208;
  undefined7 uStack_200;
  undefined1 uStack_1f9;
  undefined7 uStack_1f8;
  undefined1 uStack_1f1;
  ulong auStack_1b8 [2];
  undefined7 *puStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  ulong uStack_188;
  code *pcStack_180;
  qword qStack_178;
  undefined8 uStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  qword *pqStack_150;
  qword *pqStack_148;
  qword *pqStack_140;
  qword *pqStack_138;
  qword *pqStack_130;
  undefined8 uStack_128;
  qword **ppqStack_120;
  code *pcStack_118;
  undefined1 **ppuStack_110;
  qword aqStack_108 [7];
  char *pcStack_d0;
  long lStack_c8;
  undefined8 *puStack_c0;
  qword *pqStack_b0;
  qword *pqStack_a8;
  qword *pqStack_a0;
  qword *pqStack_98;
  qword *pqStack_90;
  qword *pqStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  
  pqVar10 = (qword *)((long)&MACH_HEADER.magic + 1);
  FUN_0033a598();
  pqVar19 = (qword *)((long)&MACH_HEADER.cpusubtype + 2);
  pcVar15 = (char *)((long)&MACH_HEADER.magic + 3);
  func_0x0033a110();
  FUN_0033a118();
  pqVar7 = param_2;
  FUN_0033a598(1);
  func_0x003d0060();
  func_0x003c326c();
  func_0x00339d8c(0xb5e930);
  if (puRam0000000000b5e9a8 != (undefined8 *)0xb5e9a0) {
    do {
      plVar11 = (long *)((long)&MACH_HEADER.magic + 1);
      FUN_0033a598();
      func_0x0033a204();
      pqVar19 = (qword *)((long)&MACH_HEADER.magic + 1);
      pcVar15 = (char *)((long)&MACH_HEADER.magic + 3);
      func_0x0033a110();
      FUN_00339fc4();
      pqVar24 = pqVar7;
      if (-1 < (int)plVar11) {
        if (puRam0000000000b5e9a8 != (undefined8 *)0xb5e9a0) {
          puStack_70 = (undefined1 *)0x0;
          puVar20 = puRam0000000000b5e9a8;
          do {
            puStack_70 = puStack_70 + 1;
            puVar20 = (undefined8 *)puVar20[1];
          } while (puVar20 != (undefined8 *)0xb5e9a0);
          pqVar7 = (qword *)(section_00000068.sectname + 9);
          pqVar19 = (qword *)0x0;
          pcVar15 = "Waiting for %lu iomgr objects to be destroyed";
          FUN_00339074(
                      "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/iomgr.cc"
                      );
        }
        plVar11 = (long *)((long)&MACH_HEADER.magic + 1);
        FUN_0033a598();
        pqVar24 = pqVar7;
      }
      func_0x003c1f6c();
      lVar21 = *plVar11;
      *(undefined8 *)(lVar21 + 0x38) = 0x7fffffffffffffff;
      *(undefined1 *)(lVar21 + 0x34) = 1;
      pqVar12 = (qword *)0x0;
      func_0x003cf030();
      if ((int)pqVar12 == 2) {
        pqVar7 = (qword *)0xb5e930;
        func_0x00339da8();
        func_0x003c1f6c();
        FUN_003c1d50(*pqVar7);
        func_0x003c326c();
        func_0x00339d8c(0xb5e930);
        pqVar7 = pqVar24;
      }
      else {
        pqVar7 = pqVar24;
        if (puRam0000000000b5e9a8 == (undefined8 *)0xb5e9a0) break;
        if (cRam0000000000b5e9b8 != '\0') {
          func_0x007741f0();
          pqStack_b0 = (qword *)0x7fffffffffffffff;
          pqStack_a8 = (qword *)0xb5e930;
          pqStack_a0 = (qword *)0xb5e9a0;
          pqStack_98 = (qword *)0x1;
          pcStack_78 = FUN_003c3100;
          if (puRam0000000000b5e9a8 != (undefined8 *)0xb5e9a0) {
            puVar20 = puRam0000000000b5e9a8;
            pqStack_90 = param_2;
            pqStack_88 = pqVar10;
            puStack_80 = &stack0xfffffffffffffff0;
            do {
              lStack_c8 = *puVar20;
              pcStack_d0 = "LEAKED";
              pqVar12 = (qword *)
                        "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/iomgr.cc"
              ;
              puStack_c0 = puVar20;
              FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/iomgr.cc"
                           ,0x5d,0,"%s OBJECT: %s %p");
              puVar20 = (undefined8 *)puVar20[1];
            } while (puVar20 != (undefined8 *)0xb5e9a0);
          }
          return pqVar12;
        }
        pqVar19 = (qword *)0x0;
        FUN_0033a598();
        uVar3 = 100;
        uVar16 = 3;
        func_0x0033a104(100,3);
        FUN_0033a118(pqVar19,pqVar24,uVar3,uVar16);
        iVar1 = 0xb5e970;
        pqVar7 = (qword *)0xb5e930;
        FUN_00339e80();
        pcVar15 = (char *)pqVar24;
        if (iVar1 != 0) {
          iVar1 = 1;
          FUN_0033a598();
          pqVar19 = pqVar10;
          pcVar15 = (char *)param_2;
          FUN_00339fc4();
          if (0 < iVar1) {
            if (puRam0000000000b5e9a8 != (undefined8 *)0xb5e9a0) {
              puStack_70 = (undefined1 *)0x0;
              puVar20 = puRam0000000000b5e9a8;
              do {
                puStack_70 = puStack_70 + 1;
                puVar20 = (undefined8 *)puVar20[1];
              } while (puVar20 != (undefined8 *)0xb5e9a0);
              pcVar15 = 
              "Failed to free %lu iomgr objects before shutdown deadline: memory leaks are likely";
              pqVar7 = &section_00000068.size;
              pqVar19 = (qword *)0x0;
              FUN_00339074(
                          "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/iomgr.cc"
                          );
              FUN_003c3100();
            }
            break;
          }
        }
      }
    } while (puRam0000000000b5e9a8 != (undefined8 *)0xb5e9a0);
  }
  puVar20 = (undefined8 *)0xb5e930;
  func_0x00339da8();
  func_0x003cf050();
  func_0x003c1f6c();
  FUN_003c1d50(*puVar20);
  FUN_003c29e4();
  func_0x00339d8c(0xb5e930);
  func_0x00339da8(0xb5e930);
  func_0x003c327c();
  func_0x00339d70(0xb5e930);
  pqVar10 = (qword *)0xb5e970;
  _pthread_cond_destroy();
  if ((int)pqVar10 == 0) {
    return pqVar10;
  }
  func_0x00770e84();
  uVar8 = (ulong)pcVar15 >> 0x20;
  pqVar24 = pqVar7;
  func_0x0033a068(uVar8);
  pqVar12 = pqVar19;
  FUN_00339fc4(pqVar19,pcVar15,uVar8);
  pqVar9 = pqVar10;
  pqVar14 = pqVar7;
  if ((int)pqVar12 == 0) {
    _pthread_cond_wait();
    pqVar12 = (qword *)pcVar15;
  }
  else {
    FUN_0033a30c(pqVar19,pcVar15,1);
    uVar8 = (ulong)pcVar15 >> 0x20;
    pqVar24 = (qword *)pcVar15;
    FUN_0033a598(uVar8);
    FUN_0033a01c(pqVar19,pcVar15,uVar8);
    _pthread_cond_timedwait(pqVar10,pqVar7,&stack0xffffffffffffffb0);
    pqVar12 = pqVar19;
    pqVar19 = (qword *)pcVar15;
  }
  if (((uint)pqVar9 < 0x3d) && ((1L << ((ulong)pqVar9 & 0x3f) & 0x1000000800000001U) != 0)) {
    return (qword *)(ulong)((uint)pqVar9 == 0x3c);
  }
  func_0x00770eb8();
  _pthread_cond_signal();
  if ((int)pqVar9 == 0) {
    return pqVar9;
  }
  func_0x00770eec();
  uStack_68 = 0x339f84;
  puStack_70 = &stack0xffffffffffffffa0;
  _pthread_cond_broadcast();
  if ((int)pqVar9 == 0) {
    return pqVar9;
  }
  func_0x00770f20();
  pcStack_78 = (code *)0x339fa0;
  puStack_80 = (undefined1 *)&puStack_70;
  _pthread_once();
  if ((int)pqVar9 == 0) {
    return pqVar9;
  }
  func_0x00770f54();
  pqStack_88 = (qword *)FUN_00339fbc;
  lStack_c8 = *(long *)PTR____stack_chk_guard_00999f88;
  pqVar2 = (qword *)((long)&MACH_HEADER.magic + 2);
  pqVar13 = pqVar14;
  pqStack_b0 = pqVar19;
  pqStack_a8 = pqVar12;
  pqStack_a0 = pqVar10;
  pqStack_98 = pqVar7;
  pqStack_90 = (qword *)&puStack_80;
  FUN_00338e58();
  if ((int)pqVar2 != 0) {
    ppuStack_110 = &puStack_80;
    pqVar7 = aqStack_108;
    _vsnprintf(pqVar7,0x40,pqVar24,&puStack_80);
    if ((int)(uint)pqVar7 < 0) {
      unaff_x23 = (qword *)0x0;
      pqVar24 = (qword *)0x0;
    }
    else {
      unaff_x24 = pqVar7;
      if ((uint)pqVar7 < 0x40) {
        pqVar24 = (qword *)0x0;
        unaff_x23 = aqStack_108;
      }
      else {
        pqVar24 = (qword *)(((ulong)pqVar7 & 0xffffffff) + 1);
        FUN_00338c74();
        ppuStack_110 = &puStack_80;
        _vsnprintf();
        unaff_x23 = pqVar24;
      }
    }
    pqVar13 = pqVar14;
    FUN_00338e80(pqVar9,pqVar14,2,unaff_x23);
    pqVar2 = pqVar24;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_c8) {
    return pqVar2;
  }
  ___stack_chk_fail();
  uStack_128 = 2;
  pcStack_118 = FUN_00339178;
  lStack_158 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar3 = 1;
  pqStack_150 = unaff_x24;
  pqStack_148 = unaff_x23;
  pqStack_140 = pqVar24;
  pqStack_138 = pqVar9;
  pqStack_130 = pqVar14;
  ppqStack_120 = &pqStack_90;
  FUN_0033a598();
  qVar23 = *pqVar2;
  qVar4 = qVar23;
  uStack_208 = uVar3;
  _strrchr(qVar23,0x2f);
  if (qVar4 != 0) {
    qVar23 = qVar4 + 1;
  }
  puVar20 = &uStack_208;
  _localtime_r(puVar20,auStack_240);
  if (puVar20 == (undefined8 *)0x0) {
    uStack_1f8 = 0x656d69746c6163;
    uStack_1f1 = 0;
    uStack_200 = 0x6c3a726f727265;
    uStack_1f9 = 0x6f;
  }
  else {
    puVar5 = &uStack_200;
    _strftime(puVar5,0x40,"%m%d %H:%M:%S",auStack_240);
    if (puVar5 == (undefined7 *)0x0) {
      uStack_200 = 0x733a726f727265;
      uStack_1f9 = 0x74;
      uStack_1f8 = 0x656d69746672;
    }
  }
  uVar6 = (ulong)*(dword *)((long)pqVar2 + 0xc);
  func_0x00338e1c();
  uVar8 = uVar6;
  _pthread_self();
  auStack_1b8[1] = 0x560e98;
  puStack_1a8 = &uStack_200;
  uStack_1a0 = 0x560e98;
  uStack_198 = (ulong)pqVar13 & 0xffffffff;
  uStack_190 = 0x5606ac;
  pcStack_180 = FUN_00560738;
  uStack_170 = 0x560e98;
  uStack_168 = (ulong)*(uint *)(pqVar2 + 1);
  uStack_160 = 0x5606ac;
  puVar18 = auStack_1b8;
  auStack_1b8[0] = uVar6;
  uStack_188 = uVar8;
  qStack_178 = qVar23;
  FUN_0056189c(apqStack_258,"%s%s.%09d %7ld %s:%d]",0x15,puVar18,6);
  uVar17 = *(dword *)((long)pqVar2 + 0xc);
  func_0x00338e6c();
  if (uVar17 == 0) {
    auStack_1b8[0] = auStack_1b8[0] & 0xffffffffffffff00;
    uStack_1a0 = uStack_1a0 & 0xffffffffffffff00;
LAB_00339300:
    pqVar7 = *(qword **)PTR____stderrp_00999f90;
    pcVar15 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_1b8);
    if ((char)uStack_1a0 == '\0') goto LAB_00339300;
    pqVar7 = *(qword **)PTR____stderrp_00999f90;
    pcVar15 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_241 < '\0') {
    pqVar7 = apqStack_258[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_158) {
    return pqVar7;
  }
  ___stack_chk_fail();
  if (cStack_241 < '\0') {
    __ZdlPv(apqStack_258[0]);
  }
  __Unwind_Resume();
  uVar17 = (uint)puVar18;
  if ((char *)0x3 < pcVar15) {
    uVar8 = (ulong)pcVar15 >> 2;
    pqVar19 = pqVar7;
    do {
      uVar17 = ((int)*pqVar19 * 0x16a88000 | (uint)((int)*pqVar19 * -0x3361d2af) >> 0x11) *
               0x1b873593 ^ (uint)puVar18;
      uVar17 = (uVar17 >> 0x13 | uVar17 << 0xd) * 5 + 0xe6546b64;
      puVar18 = (ulong *)(ulong)uVar17;
      uVar8 = uVar8 - 1;
      pqVar19 = (qword *)((long)pqVar19 + 4);
    } while (uVar8 != 0);
    pqVar7 = (qword *)((long)pqVar7 + ((ulong)pcVar15 & 0xfffffffffffffffc));
  }
  uVar22 = 0;
  uVar8 = (ulong)pcVar15 & 3;
  if (uVar8 != 1) {
    if (uVar8 != 2) {
      if (uVar8 != 3) goto LAB_00339464;
      uVar22 = (uint)*(byte *)((long)pqVar7 + 2) << 0x10;
    }
    uVar22 = uVar22 | (uint)*(byte *)((long)pqVar7 + 1) << 8;
  }
  uVar22 = uVar22 ^ (byte)*pqVar7;
  uVar17 = (uVar22 * 0x16a88000 | uVar22 * -0x3361d2af >> 0x11) * 0x1b873593 ^ uVar17;
LAB_00339464:
  uVar17 = uVar17 ^ (uint)pcVar15;
  uVar17 = (uVar17 ^ uVar17 >> 0x10) * -0x7a143595;
  uVar17 = (uVar17 ^ uVar17 >> 0xd) * -0x3d4d51cb;
  return (qword *)(ulong)(uVar17 ^ uVar17 >> 0x10);
}



/* Entry: 003c3100; end: 003c3187;  */

void FUN_003c3100(void)

{
  long lVar1;
  
  for (lVar1 = lRam0000000000b5e9a8; lVar1 != 0xb5e9a0; lVar1 = *(long *)(lVar1 + 8)) {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/iomgr.cc"
                 ,0x5d,0,"%s OBJECT: %s %p");
  }
  return;
}



/* Entry: 003c3188; end: 003c318f;  */

void FUN_003c3188(void)

{
                    /* WARNING: Could not recover jumptable at 0x003c3298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lRam0000000000b5e9c0 + 0x18))();
  return;
}



/* Entry: 003c3190; end: 003c323b;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003c3190(long *param_1,byte *param_2,undefined8 param_3,byte *param_4)

{
  byte *pbVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined7 *puVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  byte *pbVar10;
  char *pcVar11;
  uint uVar12;
  ulong *puVar13;
  uint uVar14;
  long lVar15;
  byte *pbVar16;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_2b8 [2];
  char cStack_2a1;
  undefined1 auStack_2a0 [56];
  undefined8 uStack_268;
  undefined7 uStack_260;
  undefined1 uStack_259;
  undefined7 uStack_258;
  undefined1 uStack_251;
  ulong auStack_218 [2];
  undefined7 *puStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  code *pcStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  byte *pbStack_1b0;
  byte *pbStack_1a8;
  byte *pbStack_1a0;
  byte *pbStack_198;
  byte *pbStack_190;
  undefined8 uStack_188;
  undefined1 **ppuStack_180;
  code *pcStack_178;
  undefined1 **ppuStack_170;
  byte abStack_168 [64];
  long lStack_128;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  undefined1 **ppuStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  byte abStack_58 [16];
  long lStack_48;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  pbVar7 = param_2;
  FUN_00339490();
  *param_1 = (long)param_2;
  pbVar8 = (byte *)0xb5e930;
  func_0x00339d8c(0xb5e930);
  lVar15 = lRam0000000000b5e9b0;
  param_1[1] = 0xb5e9a0;
  param_1[2] = lVar15;
  *(long **)(lVar15 + 8) = param_1;
  *(long **)(param_1[1] + 0x10) = param_1;
  _pthread_mutex_unlock();
  if ((int)pbVar8 == 0) {
    return pbVar8;
  }
  func_0x00770db4();
  _pthread_mutex_trylock();
  if (((uint)pbVar8 | 0x10) == 0x10) {
    return (byte *)(ulong)((uint)pbVar8 == 0);
  }
  func_0x00770de8();
  pcStack_28 = FUN_00339df0;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar16 = abStack_58;
  puStack_30 = &stack0xffffffffffffffe0;
  _pthread_condattr_init();
  if ((int)pbVar16 == 0) {
    pbVar7 = abStack_58;
    _pthread_cond_init();
    if ((int)pbVar8 != 0) goto LAB_00339e5c;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
      return pbVar8;
    }
  }
  else {
    func_0x00770e50();
    pbVar8 = pbVar16;
LAB_00339e5c:
    func_0x00770e1c();
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_00339e64;
  ppuStack_70 = &puStack_30;
  _pthread_cond_destroy();
  if ((int)pbVar8 == 0) {
    return pbVar8;
  }
  func_0x00770e84();
  pcStack_78 = FUN_00339e80;
  uVar9 = (ulong)param_4 >> 0x20;
  pbVar16 = pbVar7;
  puStack_80 = (undefined1 *)&ppuStack_70;
  func_0x0033a068(uVar9);
  uVar2 = param_3;
  FUN_00339fc4(param_3,param_4,uVar9);
  if ((int)uVar2 == 0) {
    _pthread_cond_wait();
  }
  else {
    FUN_0033a30c(param_3,param_4,1);
    uVar9 = (ulong)param_4 >> 0x20;
    pbVar16 = param_4;
    FUN_0033a598(uVar9);
    FUN_0033a01c(param_3,param_4,uVar9);
    lStack_a8 = (long)(int)param_4;
    uStack_b0 = param_3;
    _pthread_cond_timedwait(pbVar8,pbVar7,&uStack_b0);
  }
  if (((uint)pbVar8 < 0x3d) && ((1L << ((ulong)pbVar8 & 0x3f) & 0x1000000800000001U) != 0)) {
    return (byte *)(ulong)((uint)pbVar8 == 0x3c);
  }
  func_0x00770eb8();
  pcStack_b8 = FUN_00339f68;
  ppuStack_c0 = &puStack_80;
  _pthread_cond_signal();
  if ((int)pbVar8 == 0) {
    return pbVar8;
  }
  func_0x00770eec();
  uStack_c8 = 0x339f84;
  puStack_d0 = (undefined1 *)&ppuStack_c0;
  _pthread_cond_broadcast();
  if ((int)pbVar8 == 0) {
    return pbVar8;
  }
  func_0x00770f20();
  uStack_d8 = 0x339fa0;
  puStack_e0 = (undefined1 *)&puStack_d0;
  _pthread_once();
  if ((int)pbVar8 == 0) {
    return pbVar8;
  }
  func_0x00770f54();
  pcStack_e8 = FUN_00339fbc;
  lStack_128 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar1 = (byte *)((long)&MACH_HEADER.magic + 2);
  pbVar10 = pbVar7;
  puStack_f0 = (undefined1 *)&puStack_e0;
  FUN_00338e58();
  if ((int)pbVar1 != 0) {
    ppuStack_170 = &puStack_e0;
    pbVar1 = abStack_168;
    _vsnprintf(pbVar1,0x40,pbVar16,&puStack_e0);
    if ((int)(uint)pbVar1 < 0) {
      unaff_x23 = (byte *)0x0;
      pbVar16 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar1;
      if ((uint)pbVar1 < 0x40) {
        pbVar16 = (byte *)0x0;
        unaff_x23 = abStack_168;
      }
      else {
        pbVar16 = (byte *)(((ulong)pbVar1 & 0xffffffff) + 1);
        FUN_00338c74();
        ppuStack_170 = &puStack_e0;
        _vsnprintf();
        unaff_x23 = pbVar16;
      }
    }
    pbVar10 = pbVar7;
    FUN_00338e80(pbVar8,pbVar7,2,unaff_x23);
    pbVar1 = pbVar16;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_128) {
    return pbVar1;
  }
  ___stack_chk_fail();
  uStack_188 = 2;
  pcStack_178 = FUN_00339178;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = 1;
  pbStack_1b0 = unaff_x24;
  pbStack_1a8 = unaff_x23;
  pbStack_1a0 = pbVar16;
  pbStack_198 = pbVar8;
  pbStack_190 = pbVar7;
  ppuStack_180 = &puStack_f0;
  FUN_0033a598();
  lVar15 = *(long *)pbVar1;
  lVar3 = lVar15;
  uStack_268 = uVar2;
  _strrchr(lVar15,0x2f);
  if (lVar3 != 0) {
    lVar15 = lVar3 + 1;
  }
  puVar4 = &uStack_268;
  _localtime_r(puVar4,auStack_2a0);
  if (puVar4 == (undefined8 *)0x0) {
    uStack_258 = 0x656d69746c6163;
    uStack_251 = 0;
    uStack_260 = 0x6c3a726f727265;
    uStack_259 = 0x6f;
  }
  else {
    puVar5 = &uStack_260;
    _strftime(puVar5,0x40,"%m%d %H:%M:%S",auStack_2a0);
    if (puVar5 == (undefined7 *)0x0) {
      uStack_260 = 0x733a726f727265;
      uStack_259 = 0x74;
      uStack_258 = 0x656d69746672;
    }
  }
  uVar6 = (ulong)*(uint *)(pbVar1 + 0xc);
  func_0x00338e1c();
  uVar9 = uVar6;
  _pthread_self();
  auStack_218[1] = 0x560e98;
  puStack_208 = &uStack_260;
  uStack_200 = 0x560e98;
  uStack_1f8 = (ulong)pbVar10 & 0xffffffff;
  uStack_1f0 = 0x5606ac;
  pcStack_1e0 = FUN_00560738;
  uStack_1d0 = 0x560e98;
  uStack_1c8 = (ulong)*(uint *)(pbVar1 + 8);
  uStack_1c0 = 0x5606ac;
  puVar13 = auStack_218;
  auStack_218[0] = uVar6;
  uStack_1e8 = uVar9;
  lStack_1d8 = lVar15;
  FUN_0056189c(apbStack_2b8,"%s%s.%09d %7ld %s:%d]",0x15,puVar13,6);
  uVar12 = *(uint *)(pbVar1 + 0xc);
  func_0x00338e6c();
  if (uVar12 == 0) {
    auStack_218[0] = auStack_218[0] & 0xffffffffffffff00;
    uStack_200 = uStack_200 & 0xffffffffffffff00;
LAB_00339300:
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar11 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_218);
    if ((char)uStack_200 == '\0') goto LAB_00339300;
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar11 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_2a1 < '\0') {
    pbVar7 = apbStack_2b8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1b8) {
    return pbVar7;
  }
  ___stack_chk_fail();
  if (cStack_2a1 < '\0') {
    __ZdlPv(apbStack_2b8[0]);
  }
  __Unwind_Resume();
  uVar12 = (uint)puVar13;
  if ((char *)0x3 < pcVar11) {
    uVar9 = (ulong)pcVar11 >> 2;
    pbVar8 = pbVar7;
    do {
      uVar12 = (*(int *)pbVar8 * 0x16a88000 | (uint)(*(int *)pbVar8 * -0x3361d2af) >> 0x11) *
               0x1b873593 ^ (uint)puVar13;
      uVar12 = (uVar12 >> 0x13 | uVar12 << 0xd) * 5 + 0xe6546b64;
      puVar13 = (ulong *)(ulong)uVar12;
      uVar9 = uVar9 - 1;
      pbVar8 = pbVar8 + 4;
    } while (uVar9 != 0);
    pbVar7 = pbVar7 + ((ulong)pcVar11 & 0xfffffffffffffffc);
  }
  uVar14 = 0;
  uVar9 = (ulong)pcVar11 & 3;
  if (uVar9 != 1) {
    if (uVar9 != 2) {
      if (uVar9 != 3) goto LAB_00339464;
      uVar14 = (uint)pbVar7[2] << 0x10;
    }
    uVar14 = uVar14 | (uint)pbVar7[1] << 8;
  }
  uVar12 = ((uVar14 ^ *pbVar7) * 0x16a88000 | (uVar14 ^ *pbVar7) * -0x3361d2af >> 0x11) * 0x1b873593
           ^ uVar12;
LAB_00339464:
  uVar12 = uVar12 ^ (uint)pcVar11;
  uVar12 = (uVar12 ^ uVar12 >> 0x10) * -0x7a143595;
  uVar12 = (uVar12 ^ uVar12 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar12 ^ uVar12 >> 0x10);
}



/* Entry: 003c323c; end: 003c32ab;  */

bool FUN_003c323c(void)

{
  return lRam0000000000b5e9c0 != 0;
}



/* Entry: 003c32ac; end: 003c332b;  */

undefined8 FUN_003c32ac(undefined8 param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int *piVar4;
  ulong uStack_28;
  
  pcVar3 = *(code **)(lRam0000000000b5e9c0 + 0x28);
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
  (*pcVar3)(param_1,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 003c332c; end: 003c34b3;  */

void FUN_003c332c(ulong param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  func_0x003c33dc();
  if ((param_1 & 1) == 0) {
    func_0x003c60d4(&PTR_FUN_00afaf88);
  }
  else {
    func_0x003c60d4(&PTR_FUN_00afaf68);
    if (0xff < ((uint)param_1 & 0xffff)) {
      ppuVar2 = &PTR_FUN_00afaef8;
      ppuVar3 = &PTR_FUN_00afad28;
      ppuVar1 = &PTR_FUN_00aface8;
      goto LAB_003c33a8;
    }
  }
  func_0x003cb958(&PTR_FUN_00afafa0);
  ppuVar2 = &PTR_FUN_00afaec8;
  ppuVar3 = &PTR_DAT_00afae08;
  ppuVar1 = &PTR_DAT_00afadc8;
LAB_003c33a8:
  func_0x003c3e48(ppuVar1);
  func_0x003c3ed4(ppuVar3);
  func_0x003c3250(ppuVar2);
  FUN_003c67d4();
  ppuVar2 = &PTR_FUN_00afb000;
  func_0x003cf004();
  FUN_003c3f58();
  ppuRam0000000000b5e9c8 = ppuVar2;
  return;
}



/* Entry: 003c34b4; end: 003c34e3;  */

void FUN_003c34b4(ulong param_1)

{
  func_0x003c33dc();
  if (((uint)param_1 & 0xffff) < 0x100 || (param_1 & 1) == 0) {
    FUN_003c9d84();
  }
  FUN_003d09e4();
  func_0x00339fa0(0xafadb8,FUN_003c1ab0);
                    /* WARNING: Could not recover jumptable at 0x003c175c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lRam0000000000b5e918 + 0xf0))();
  return;
}



/* Entry: 003c34e4; end: 003c34e7;  */

void FUN_003c34e4(void)

{
  return;
}



/* Entry: 003c34e8; end: 003c351b;  */

void FUN_003c34e8(uint param_1)

{
  long lVar1;
  
  FUN_003c1760();
  func_0x003d09f8();
  func_0x003c33dc();
  lVar1 = lRam0000000000b5e9f8;
  if ((0xff < (param_1 & 0xffff)) && ((param_1 & 1) != 0)) {
    return;
  }
  if (lRam0000000000b5e9f8 != 0) {
    func_0x00339d70(lRam0000000000b5e9f8);
    __ZdlPv(lVar1);
  }
  lRam0000000000b5e9f8 = 0;
  return;
}



/* Entry: 003c351c; end: 003c3523;  */

void FUN_003c351c(void)

{
                    /* WARNING: Could not recover jumptable at 0x003c1aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lRam0000000000b5e918 + 0xf8))();
  return;
}



/* Entry: 003c3524; end: 003c3597;  */

undefined8 FUN_003c3524(undefined8 param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uStack_28;
  
  uStack_28 = *param_2;
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
  FUN_003c1a20(param_1,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 003c3598; end: 003c35b7;  */

void FUN_003c3598(void)

{
                    /* WARNING: Could not recover jumptable at 0x003c3e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puRam0000000000b65d40)();
  return;
}



/* Entry: 003c35b8; end: 003c39b3;  */

void FUN_003c35b8(long *param_1,char *param_2,int param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 *puVar7;
  char *pcVar8;
  ulong uStack_c0;
  char *pcStack_b8;
  undefined1 uStack_a9;
  char *pcStack_a8;
  char *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  char *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_003ec024(&pcStack_80);
  *param_1 = 0;
  pcVar6 = param_2;
  _fopen(param_2,"rb");
  if (pcVar6 == (char *)0x0) {
    ___error();
    FUN_003be008(&pcStack_a8,&uStack_a9,*(undefined4 *)pcVar6,"fopen");
    pcVar6 = pcStack_a8;
    if (pcStack_a8 == (char *)0x0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                   ,0xd5,2,"assertion failed: %s");
      _abort();
      goto LAB_003c3908;
    }
    pcStack_a8 = segment_command_00000020.segname + 0xe;
    pcStack_a0 = pcVar6;
    puVar7 = (undefined8 *)*param_1;
    if (pcVar6 == (char *)puVar7) {
      if (((ulong)pcVar6 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      *param_1 = (long)pcVar6;
      pcStack_a0 = segment_command_00000020.segname + 0xe;
      if (((ulong)puVar7 & 1) != 0) {
        FUN_0055293c(puVar7);
      }
    }
    pcVar6 = pcStack_a8;
    if (((ulong)pcStack_a8 & 1) != 0) {
      FUN_0055293c();
    }
    param_4[1] = uStack_78;
    *param_4 = pcStack_80;
    param_4[3] = uStack_68;
    param_4[2] = uStack_70;
  }
  else {
    _fseek(pcVar6,0,2);
    pcVar8 = pcVar6;
    _ftell();
    _fseek(pcVar6,0,0);
    pcVar4 = pcVar8;
    if (param_3 != 0) {
      pcVar4 = pcVar8 + 1;
    }
    FUN_00338c74();
    pcVar5 = pcVar4;
    _fread();
    if (pcVar5 < pcVar8) {
      FUN_00338cb8();
      ___error();
      FUN_003be008(&pcStack_b8,&uStack_a9,*(undefined4 *)pcVar4,"fread");
      pcVar8 = pcStack_b8;
      if (pcStack_b8 == (char *)0x0) {
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                     ,0xd5,2,"assertion failed: %s");
        _abort();
LAB_003c3908:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x3c390c);
        (*pcVar3)();
      }
      pcStack_a0 = pcStack_b8;
      pcStack_b8 = segment_command_00000020.segname + 0xe;
      puVar7 = (undefined8 *)*param_1;
      if (pcVar8 == (char *)puVar7) {
        if (((ulong)pcVar8 & 1) != 0) {
          FUN_0055293c();
        }
      }
      else {
        *param_1 = (long)pcVar8;
        pcStack_a0 = segment_command_00000020.segname + 0xe;
        if (((ulong)puVar7 & 1) != 0) {
          FUN_0055293c(puVar7);
        }
      }
      if (((ulong)pcStack_b8 & 1) != 0) {
        FUN_0055293c();
      }
      pcVar8 = pcVar6;
      _ferror();
      if ((int)pcVar8 == 0) {
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/load_file.cc"
                     ,0x3a,2,"assertion failed: %s");
        _abort();
        goto LAB_003c3908;
      }
    }
    else {
      if (param_3 != 0) {
        pcVar4[(long)pcVar8] = '\0';
        pcVar8 = pcVar8 + 1;
      }
      FUN_003ec1dc(&pcStack_a0,pcVar4,pcVar8,FUN_00338cb8);
      uStack_78 = uStack_98;
      pcStack_80 = pcStack_a0;
      uStack_68 = uStack_88;
      uStack_70 = uStack_90;
    }
    param_4[1] = uStack_78;
    *param_4 = pcStack_80;
    param_4[3] = uStack_68;
    param_4[2] = uStack_70;
    _fclose();
  }
  if (*param_1 != 0) {
    FUN_003bdf2c(&uStack_c0,2,"Failed to load file",0x13,&uStack_a9,1,param_1);
    pcVar6 = param_2;
    _strlen(param_2);
    FUN_003be254(&pcStack_a0,&uStack_c0,8,param_2,pcVar6);
    if ((uStack_c0 & 1) != 0) {
      FUN_0055293c();
    }
    pcVar6 = (char *)*param_1;
    pcVar8 = pcVar6;
    if (pcStack_a0 != pcVar6) {
      if (((ulong)pcStack_a0 & 1) != 0) {
        pcVar8 = pcStack_a0 + -1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
          if (bVar2) {
            *(int *)pcVar8 = *(int *)pcVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      *param_1 = (long)pcStack_a0;
      pcVar8 = pcStack_a0;
      if (((ulong)pcVar6 & 1) != 0) {
        FUN_0055293c();
        pcVar8 = pcStack_a0;
      }
    }
    if (((ulong)pcVar8 & 1) != 0) {
      FUN_0055293c();
      pcVar6 = pcVar8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_58) {
    ___stack_chk_fail();
    FUN_0033c494(&pcStack_a0);
    FUN_0033c494(&pcStack_b8);
    FUN_0033c494(param_1);
    __Unwind_Resume();
    *(undefined8 *)pcVar6 = 0;
    return;
  }
  return;
}



/* Entry: 003c39b4; end: 003c39c3;  */

void FUN_003c39b4(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 003c39c4; end: 003c3a2b;  */

ulong * FUN_003c39c4(ulong *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  ulong *puVar4;
  int *piVar5;
  ulong uVar6;
  undefined1 uStack_c9;
  ulong uStack_c8;
  undefined1 uStack_b9;
  ulong uStack_b8;
  undefined1 uStack_71;
  ulong uStack_70;
  undefined1 uStack_61;
  ulong *puStack_60;
  ulong *puStack_58;
  undefined8 uStack_50;
  ulong *puStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  puVar3 = param_1;
  do {
    uVar6 = *param_1;
    if ((uVar6 & 1) == 0) {
      if ((uVar6 & 0xfffffffffffffffd) != 0) {
        func_0x00774228();
        uStack_50 = 1;
        pcStack_38 = FUN_003c3a2c;
        do {
          uVar6 = *puVar3;
          if (uVar6 == 0) {
            while (*puVar3 == 0) {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
              if (bVar2) {
                *puVar3 = (ulong)param_2;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') {
                return puVar3;
              }
            }
          }
          else {
            puStack_48 = param_1;
            puStack_40 = &stack0xfffffffffffffff0;
            if (uVar6 != 2) {
              if ((uVar6 & 1) != 0) {
                FUN_003b7b3c(&puStack_60,uVar6 & 0xfffffffffffffffe);
                FUN_003bdf2c(&uStack_70,2,"FD Shutdown",0xb,&uStack_71,1,&puStack_60);
                FUN_003c1e6c(&uStack_61,param_2,&uStack_70);
                if ((uStack_70 & 1) != 0) {
                  FUN_0055293c();
                }
                if (((ulong)puStack_60 & 1) != 0) {
                  FUN_0055293c();
                }
                return puStack_60;
              }
              func_0x00774260();
              func_0x0040cf10();
              func_0x0040cf10();
              FUN_0033c494(&uStack_70);
              FUN_0033c494(&puStack_60);
              __Unwind_Resume();
              uStack_b8 = *param_2;
              if ((uStack_b8 & 1) != 0) {
                piVar5 = (int *)(uStack_b8 - 1);
                do {
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                  if (bVar2) {
                    *piVar5 = *piVar5 + 1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
              }
              puVar4 = &uStack_b8;
              FUN_003b7ab0();
              if ((uStack_b8 & 1) != 0) {
                FUN_0055293c();
              }
              do {
                uVar6 = *puVar3;
                if ((uVar6 | 2) == 2) {
                  while (*puVar3 == uVar6) {
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                    if (bVar2) {
                      *puVar3 = (ulong)puVar4 | 1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                    if (cVar1 == '\0') {
LAB_003c3c34:
                      return (ulong *)((long)&MACH_HEADER.magic + 1);
                    }
                  }
                }
                else {
                  if ((uVar6 & 1) != 0) {
                    FUN_003b7afc(puVar4);
                    return (ulong *)0x0;
                  }
                  while (*puVar3 == uVar6) {
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                    if (bVar2) {
                      *puVar3 = (ulong)puVar4 | 1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                    if (cVar1 == '\0') {
                      FUN_003bdf2c(&uStack_c8,2,"FD Shutdown",0xb,&uStack_c9,1,param_2);
                      FUN_003c1e6c(&uStack_b9,uVar6,&uStack_c8);
                      if ((uStack_c8 & 1) != 0) {
                        FUN_0055293c();
                      }
                      goto LAB_003c3c34;
                    }
                  }
                }
                ClearExclusiveLocal();
              } while( true );
            }
            while (*puVar3 == 2) {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
              if (bVar2) {
                *puVar3 = 0;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') {
                puStack_58 = (ulong *)0x0;
                FUN_003c1e6c(&puStack_60,param_2,&puStack_58);
                if (((ulong)puStack_58 & 1) == 0) {
                  return puStack_58;
                }
                FUN_0055293c();
                return puStack_58;
              }
            }
          }
          ClearExclusiveLocal();
        } while( true );
      }
    }
    else {
      puVar3 = (ulong *)(uVar6 & 0xfffffffffffffffe);
      FUN_003b7afc();
    }
    while (*param_1 == uVar6) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        return puVar3;
      }
    }
    ClearExclusiveLocal();
  } while( true );
}



/* Entry: 003c3a2c; end: 003c3b4f;  */

ulong * FUN_003c3a2c(ulong *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  int *piVar5;
  undefined1 uStack_99;
  ulong uStack_98;
  undefined1 uStack_89;
  ulong uStack_88;
  undefined1 uStack_41;
  ulong uStack_40;
  undefined1 uStack_31;
  ulong *puStack_30;
  ulong *puStack_28;
  
  do {
    uVar4 = *param_1;
    if (uVar4 == 0) {
      while (*param_1 == 0) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = (ulong)param_2;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return param_1;
        }
      }
    }
    else {
      if (uVar4 != 2) {
        if ((uVar4 & 1) != 0) {
          FUN_003b7b3c(&puStack_30,uVar4 & 0xfffffffffffffffe);
          FUN_003bdf2c(&uStack_40,2,"FD Shutdown",0xb,&uStack_41,1,&puStack_30);
          FUN_003c1e6c(&uStack_31,param_2,&uStack_40);
          if ((uStack_40 & 1) != 0) {
            FUN_0055293c();
          }
          if (((ulong)puStack_30 & 1) != 0) {
            FUN_0055293c();
          }
          return puStack_30;
        }
        func_0x00774260();
        func_0x0040cf10();
        func_0x0040cf10();
        FUN_0033c494(&uStack_40);
        FUN_0033c494(&puStack_30);
        __Unwind_Resume();
        uStack_88 = *param_2;
        if ((uStack_88 & 1) != 0) {
          piVar5 = (int *)(uStack_88 - 1);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
            if (bVar2) {
              *piVar5 = *piVar5 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        puVar3 = &uStack_88;
        FUN_003b7ab0();
        if ((uStack_88 & 1) != 0) {
          FUN_0055293c();
        }
        do {
          uVar4 = *param_1;
          if ((uVar4 | 2) == 2) {
            while (*param_1 == uVar4) {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
              if (bVar2) {
                *param_1 = (ulong)puVar3 | 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') {
LAB_003c3c34:
                return (ulong *)((long)&MACH_HEADER.magic + 1);
              }
            }
          }
          else {
            if ((uVar4 & 1) != 0) {
              FUN_003b7afc(puVar3);
              return (ulong *)0x0;
            }
            while (*param_1 == uVar4) {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
              if (bVar2) {
                *param_1 = (ulong)puVar3 | 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') {
                FUN_003bdf2c(&uStack_98,2,"FD Shutdown",0xb,&uStack_99,1,param_2);
                FUN_003c1e6c(&uStack_89,uVar4,&uStack_98);
                if ((uStack_98 & 1) != 0) {
                  FUN_0055293c();
                }
                goto LAB_003c3c34;
              }
            }
          }
          ClearExclusiveLocal();
        } while( true );
      }
      while (*param_1 == 2) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = 0;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          puStack_28 = (ulong *)0x0;
          FUN_003c1e6c(&puStack_30,param_2,&puStack_28);
          if (((ulong)puStack_28 & 1) == 0) {
            return puStack_28;
          }
          FUN_0055293c();
          return puStack_28;
        }
      }
    }
    ClearExclusiveLocal();
  } while( true );
}



/* Entry: 003c3b50; end: 003c3c83;  */

undefined8 FUN_003c3b50(ulong *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  int *piVar4;
  ulong uVar5;
  undefined1 uStack_49;
  ulong uStack_48;
  undefined1 uStack_39;
  ulong uStack_38;
  
  uStack_38 = *param_2;
  if ((uStack_38 & 1) != 0) {
    piVar4 = (int *)(uStack_38 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  puVar3 = &uStack_38;
  FUN_003b7ab0();
  if ((uStack_38 & 1) != 0) {
    FUN_0055293c();
  }
  do {
    uVar5 = *param_1;
    if ((uVar5 | 2) == 2) {
      while (*param_1 == uVar5) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = (ulong)puVar3 | 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return 1;
        }
      }
    }
    else {
      if ((uVar5 & 1) != 0) {
        FUN_003b7afc(puVar3);
        return 0;
      }
      while (*param_1 == uVar5) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = (ulong)puVar3 | 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          FUN_003bdf2c(&uStack_48,2,"FD Shutdown",0xb,&uStack_49,1,param_2);
          FUN_003c1e6c(&uStack_39,uVar5,&uStack_48);
          if ((uStack_48 & 1) == 0) {
            return 1;
          }
          FUN_0055293c();
          return 1;
        }
      }
    }
    ClearExclusiveLocal();
  } while( true );
}



/* Entry: 003c3c84; end: 003c3d27;  */

void FUN_003c3c84(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uStack_30;
  undefined1 uStack_21;
  
  do {
    uVar3 = *param_1;
    if (uVar3 != 0) {
      if ((uVar3 != 2) && ((uVar3 & 1) == 0)) {
        do {
          if (*param_1 != uVar3) {
            ClearExclusiveLocal();
            return;
          }
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar2) {
            *param_1 = 0;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        uStack_30 = 0;
        FUN_003c1e6c(&uStack_21,uVar3,&uStack_30);
        if ((uStack_30 & 1) != 0) {
          FUN_0055293c();
        }
      }
      return;
    }
    while (*param_1 == 0) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = 2;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        return;
      }
    }
    ClearExclusiveLocal();
  } while( true );
}



/* Entry: 003c3d28; end: 003c3d7f;  */

void FUN_003c3d28(void)

{
  return;
}



/* Entry: 003c3d80; end: 003c3e3f;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003c3d80(byte *param_1,byte *param_2,undefined8 param_3,byte *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined7 *puVar4;
  ulong uVar5;
  byte *pbVar6;
  char *pcVar7;
  uint uVar8;
  ulong *puVar9;
  byte *pbVar10;
  byte *extraout_x8;
  ulong uVar11;
  ulong extraout_x8_00;
  uint uVar12;
  long lVar13;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_1f8 [2];
  char cStack_1e1;
  undefined1 auStack_1e0 [56];
  undefined8 uStack_1a8;
  undefined7 uStack_1a0;
  undefined1 uStack_199;
  undefined7 uStack_198;
  undefined1 uStack_191;
  ulong auStack_158 [2];
  undefined7 *puStack_148;
  ulong uStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  code *pcStack_120;
  long lStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  byte *pbStack_e0;
  ulong uStack_d8;
  byte *pbStack_d0;
  undefined8 uStack_c8;
  undefined1 **ppuStack_c0;
  code *pcStack_b8;
  undefined1 **ppuStack_b0;
  byte abStack_a8 [64];
  long lStack_68;
  undefined1 *puStack_30;
  code *pcStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  uVar8 = *(uint *)(param_1 + 8);
  pbVar10 = (byte *)(ulong)uVar8;
  if (uVar8 == 2) {
    if (*(long *)param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x003c3f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lRam0000000000b65d48 + 0x20))(param_2,*(long *)param_1);
      return param_2;
    }
    func_0x007742b4();
    pbVar10 = extraout_x8;
  }
  else if (uVar8 == 1) {
    if (*(long *)param_1 == 0) {
      return param_1;
    }
                    /* WARNING: Could not recover jumptable at 0x003c3f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lRam0000000000b65d48 + 0x10))(param_2,*(long *)param_1);
    return param_2;
  }
  func_0x00774288();
  uStack_18 = 0x3c3de0;
  uVar8 = *(uint *)(pbVar10 + 8);
  uVar11 = (ulong)uVar8;
  if (uVar8 == 2) {
    if (*(long *)pbVar10 != 0) {
      puStack_20 = &stack0xfffffffffffffff0;
                    /* WARNING: Could not recover jumptable at 0x003c3f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lRam0000000000b65d48 + 0x28))(param_2,*(long *)pbVar10);
      return param_2;
    }
    puStack_20 = &stack0xfffffffffffffff0;
    func_0x00774314();
    uVar11 = extraout_x8_00;
  }
  else {
    puStack_20 = &stack0xfffffffffffffff0;
    if (uVar8 == 1) {
      if (*(long *)pbVar10 == 0) {
        return pbVar10;
      }
      puStack_20 = &stack0xfffffffffffffff0;
                    /* WARNING: Could not recover jumptable at 0x003c3f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lRam0000000000b65d48 + 0x18))(param_2,*(long *)pbVar10);
      return param_2;
    }
  }
  func_0x007742e8();
  pcStack_28 = FUN_003c3e40;
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar10 = (byte *)((long)&MACH_HEADER.magic + 2);
  pbVar6 = param_2;
  puStack_30 = (undefined1 *)&puStack_20;
  FUN_00338e58();
  if ((int)pbVar10 != 0) {
    ppuStack_b0 = &puStack_20;
    pbVar10 = abStack_a8;
    _vsnprintf(pbVar10,0x40,param_4,&puStack_20);
    if ((int)(uint)pbVar10 < 0) {
      unaff_x23 = (byte *)0x0;
      param_4 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar10;
      if ((uint)pbVar10 < 0x40) {
        param_4 = (byte *)0x0;
        unaff_x23 = abStack_a8;
      }
      else {
        param_4 = (byte *)(((ulong)pbVar10 & 0xffffffff) + 1);
        FUN_00338c74();
        ppuStack_b0 = &puStack_20;
        _vsnprintf();
        unaff_x23 = param_4;
      }
    }
    pbVar6 = param_2;
    FUN_00338e80(uVar11,param_2,2,unaff_x23);
    pbVar10 = param_4;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return pbVar10;
  }
  ___stack_chk_fail();
  uStack_c8 = 2;
  pcStack_b8 = FUN_00339178;
  lStack_f8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = 1;
  pbStack_f0 = unaff_x24;
  pbStack_e8 = unaff_x23;
  pbStack_e0 = param_4;
  uStack_d8 = uVar11;
  pbStack_d0 = param_2;
  ppuStack_c0 = &puStack_30;
  FUN_0033a598();
  lVar13 = *(long *)pbVar10;
  lVar2 = lVar13;
  uStack_1a8 = uVar1;
  _strrchr(lVar13,0x2f);
  if (lVar2 != 0) {
    lVar13 = lVar2 + 1;
  }
  puVar3 = &uStack_1a8;
  _localtime_r(puVar3,auStack_1e0);
  if (puVar3 == (undefined8 *)0x0) {
    uStack_198 = 0x656d69746c6163;
    uStack_191 = 0;
    uStack_1a0 = 0x6c3a726f727265;
    uStack_199 = 0x6f;
  }
  else {
    puVar4 = &uStack_1a0;
    _strftime(puVar4,0x40,"%m%d %H:%M:%S",auStack_1e0);
    if (puVar4 == (undefined7 *)0x0) {
      uStack_1a0 = 0x733a726f727265;
      uStack_199 = 0x74;
      uStack_198 = 0x656d69746672;
    }
  }
  uVar5 = (ulong)*(uint *)(pbVar10 + 0xc);
  func_0x00338e1c();
  uVar11 = uVar5;
  _pthread_self();
  auStack_158[1] = 0x560e98;
  puStack_148 = &uStack_1a0;
  uStack_140 = 0x560e98;
  uStack_138 = (ulong)pbVar6 & 0xffffffff;
  uStack_130 = 0x5606ac;
  pcStack_120 = FUN_00560738;
  uStack_110 = 0x560e98;
  uStack_108 = (ulong)*(uint *)(pbVar10 + 8);
  uStack_100 = 0x5606ac;
  puVar9 = auStack_158;
  auStack_158[0] = uVar5;
  uStack_128 = uVar11;
  lStack_118 = lVar13;
  FUN_0056189c(apbStack_1f8,"%s%s.%09d %7ld %s:%d]",0x15,puVar9,6);
  uVar8 = *(uint *)(pbVar10 + 0xc);
  func_0x00338e6c();
  if (uVar8 == 0) {
    auStack_158[0] = auStack_158[0] & 0xffffffffffffff00;
    uStack_140 = uStack_140 & 0xffffffffffffff00;
LAB_00339300:
    pbVar10 = *(byte **)PTR____stderrp_00999f90;
    pcVar7 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_158);
    if ((char)uStack_140 == '\0') goto LAB_00339300;
    pbVar10 = *(byte **)PTR____stderrp_00999f90;
    pcVar7 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_1e1 < '\0') {
    pbVar10 = apbStack_1f8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_f8) {
    return pbVar10;
  }
  ___stack_chk_fail();
  if (cStack_1e1 < '\0') {
    __ZdlPv(apbStack_1f8[0]);
  }
  __Unwind_Resume();
  uVar8 = (uint)puVar9;
  if ((char *)0x3 < pcVar7) {
    uVar11 = (ulong)pcVar7 >> 2;
    pbVar6 = pbVar10;
    do {
      uVar8 = (*(int *)pbVar6 * 0x16a88000 | (uint)(*(int *)pbVar6 * -0x3361d2af) >> 0x11) *
              0x1b873593 ^ (uint)puVar9;
      uVar8 = (uVar8 >> 0x13 | uVar8 << 0xd) * 5 + 0xe6546b64;
      puVar9 = (ulong *)(ulong)uVar8;
      uVar11 = uVar11 - 1;
      pbVar6 = pbVar6 + 4;
    } while (uVar11 != 0);
    pbVar10 = pbVar10 + ((ulong)pcVar7 & 0xfffffffffffffffc);
  }
  uVar12 = 0;
  uVar11 = (ulong)pcVar7 & 3;
  if (uVar11 != 1) {
    if (uVar11 != 2) {
      if (uVar11 != 3) goto LAB_00339464;
      uVar12 = (uint)pbVar10[2] << 0x10;
    }
    uVar12 = uVar12 | (uint)pbVar10[1] << 8;
  }
  uVar8 = ((uVar12 ^ *pbVar10) * 0x16a88000 | (uVar12 ^ *pbVar10) * -0x3361d2af >> 0x11) *
          0x1b873593 ^ uVar8;
LAB_00339464:
  uVar8 = uVar8 ^ (uint)pcVar7;
  uVar8 = (uVar8 ^ uVar8 >> 0x10) * -0x7a143595;
  uVar8 = (uVar8 ^ uVar8 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar8 ^ uVar8 >> 0x10);
}



/* Entry: 003c3e40; end: 003c3f57;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003c3e40(undefined8 param_1,ulong param_2,undefined8 param_3,byte *param_4)

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



/* Entry: 003c3f58; end: 003c3fd7;  */

dword * FUN_003c3f58(void)

{
  int iVar1;
  dword *pdVar2;
  
  if ((bRam0000000000b5e9d8 & 1) == 0) {
    iVar1 = 0xb5e9d8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      pdVar2 = &MACH_HEADER.cpusubtype;
      __Znwm();
      *(undefined ***)pdVar2 = &PTR_DAT_009e0370;
      pdRam0000000000b5e9d0 = pdVar2;
      ___cxa_guard_release(0xb5e9d8);
    }
  }
  return pdRam0000000000b5e9d0;
}



/* Entry: 003c3fd8; end: 003c4293;  */

/* WARNING: Type propagation algorithm not settling */

undefined1  [16]
FUN_003c3fd8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
            undefined1 *param_5,undefined8 param_6,undefined8 param_7)

{
  dword *pdVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  code *pcVar12;
  char *pcVar13;
  char *pcVar14;
  qword *pqVar15;
  long *plVar16;
  long *******ppppppplVar17;
  long *******ppppppplVar18;
  dword *pdVar19;
  long *******ppppppplVar20;
  undefined1 *puVar21;
  dword *pdVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  bool bVar25;
  long lVar26;
  undefined8 *extraout_x8;
  long lVar27;
  ulong **ppuVar28;
  int *piVar29;
  long lVar30;
  ulong *puVar31;
  ulong *puVar32;
  ulong uVar33;
  dword *pdVar34;
  byte bVar35;
  byte bVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined1 auVar42 [16];
  ulong auStack_2e0 [5];
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong auStack_2a8 [5];
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 uStack_261;
  ulong uStack_260;
  ulong uStack_258;
  dword *pdStack_250;
  undefined1 *puStack_248;
  undefined8 uStack_240;
  long *******ppppppplStack_238;
  ulong uStack_230;
  undefined8 uStack_228;
  ulong *puStack_220;
  ulong *puStack_218;
  ulong *apuStack_210 [2];
  ulong uStack_200;
  long lStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1c0 [72];
  dword *pdStack_178;
  undefined1 *puStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined4 uStack_f8;
  long lStack_f0;
  ulong uStack_80;
  long alStack_78 [3];
  long *plStack_60;
  long lStack_58;
  
  puVar32 = &uStack_80;
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar13 = section_00000068.sectname + 8;
  puVar21 = param_5;
  __Znwm();
  FUN_003c4c6c(alStack_78,param_7);
  if (0x7ffffffffffffff7 < param_3) {
    func_0x0033b318(pcVar13);
    goto LAB_003c41c8;
  }
  if (param_3 < 0x17) {
    pcVar13[0x17] = (char)param_3;
    pcVar14 = pcVar13;
    if (param_3 != 0) goto LAB_003c4088;
  }
  else {
    uVar33 = (param_3 & 0xfffffffffffffff8) + 8;
    if ((param_3 | 7) != 0x17) {
      uVar33 = param_3 | 7;
    }
    pcVar14 = (char *)(uVar33 + 1);
    __Znwm();
    *(ulong *)(pcVar13 + 8) = param_3;
    *(ulong *)(pcVar13 + 0x10) = uVar33 + 1 | 0x8000000000000000;
    *(char **)pcVar13 = pcVar14;
LAB_003c4088:
    _memmove(pcVar14,param_2,param_3);
  }
  pcVar14[param_3] = '\0';
  pqVar15 = (qword *)(pcVar13 + 0x18);
  if ((undefined1 *)0x7ffffffffffffff7 < param_5) {
    func_0x0033b318(pqVar15);
LAB_003c41c8:
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x3c41cc);
    (*pcVar12)();
  }
  if ((undefined1 *)((long)&MACH_HEADER.sizeofcmds + 2) < param_5) {
    uVar33 = ((ulong)param_5 & 0xfffffffffffffff8) + 8;
    if (((ulong)param_5 | 7) != 0x17) {
      uVar33 = (ulong)param_5 | 7;
    }
    pqVar15 = (qword *)(uVar33 + 1);
    __Znwm();
    *(undefined1 **)(pcVar13 + 0x20) = param_5;
    *(ulong *)(pcVar13 + 0x28) = uVar33 + 1 | 0x8000000000000000;
    *(qword **)(pcVar13 + 0x18) = pqVar15;
LAB_003c40f0:
    _memmove(pqVar15,param_4,param_5);
  }
  else {
    pcVar13[0x2f] = (char)param_5;
    if (param_5 != (undefined1 *)0x0) goto LAB_003c40f0;
  }
  *(undefined1 *)((long)pqVar15 + (long)param_5) = 0;
  FUN_003c4c6c(pcVar13 + 0x30,alStack_78);
  *(code **)(pcVar13 + 0x58) = FUN_003c4b24;
  *(char **)(pcVar13 + 0x60) = pcVar13;
  *(ulong *)(pcVar13 + 0x68) = 0;
  uStack_80 = 0;
  uVar23 = 1;
  uVar24 = 0;
  FUN_003c2968(pcVar13 + 0x50,&uStack_80,1,0);
  if ((uStack_80 & 1) != 0) {
    FUN_0055293c();
  }
  if (plStack_60 == alStack_78) {
    lVar26 = 4;
    plVar16 = alStack_78;
LAB_003c416c:
    (**(code **)(*plVar16 + lVar26 * 8))();
  }
  else {
    plVar16 = plStack_60;
    if (plStack_60 != (long *)0x0) {
      lVar26 = 5;
      goto LAB_003c416c;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return ZEXT816(0);
  }
  ___stack_chk_fail();
  if ((int)puVar32 != 0) {
    func_0x0040cf10();
    if (pcVar13[0x17] < '\0') {
      __ZdlPv(*(ulong *)pcVar13);
    }
    if (plStack_60 == alStack_78) {
      lVar26 = 4;
      plStack_60 = alStack_78;
LAB_003c4278:
      (**(code **)(*plStack_60 + lVar26 * 8))();
    }
    else if (plStack_60 != (long *)0x0) {
      lVar26 = 5;
      goto LAB_003c4278;
    }
    __ZdlPv(pcVar13);
  }
  __Unwind_Resume(plVar16);
  lStack_f0 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_003413d4(auStack_1c0);
  uStack_200 = 0;
  lStack_1f8 = 0;
  puStack_220 = (ulong *)0x0;
  puStack_218 = (ulong *)0x0;
  apuStack_210[0] = (ulong *)0x0;
  ppppppplStack_238 = (long *******)0x0;
  uStack_230 = 0;
  uStack_228 = 0;
  pdStack_250 = (dword *)0x0;
  puStack_248 = (undefined1 *)0x0;
  uStack_240 = 0;
  func_0x0033b110(puVar32,uVar23,&ppppppplStack_238,&pdStack_250);
  uVar7 = uStack_240;
  bVar35 = uStack_228._7_1_;
  uVar33 = uStack_230;
  if (-1 < uStack_228) {
    uVar33 = (ulong)uStack_228._7_1_;
  }
  if (uVar33 == 0) {
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_280 = 0;
    FUN_003b646c(&uStack_260,2,"unparseable host:port",0x15,&uStack_261,&uStack_280);
    pdVar22 = &MACH_HEADER.cputype;
    FUN_003be254(&uStack_258,&uStack_260,4,puVar32,uVar23);
    uVar33 = uStack_258;
    if (uStack_258 != 0) {
      uStack_200 = uStack_258;
      uStack_258 = 0x36;
    }
    if ((uStack_260 & 1) != 0) {
      FUN_0055293c();
    }
    pdStack_178 = (dword *)&uStack_280;
LAB_003c46a8:
    FUN_0033d548(&pdStack_178);
LAB_003c48a8:
    if (lStack_1f8 != 0) {
      _freeaddrinfo();
    }
    if (uVar33 == 0) goto LAB_003c4908;
    if ((uVar33 & 1) != 0) {
      piVar29 = (int *)(uVar33 - 1);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar29,0x10);
        if (bVar5) {
          *piVar29 = *piVar29 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    auStack_2e0[0] = uVar33;
    FUN_003fbde8(&pdStack_178,auStack_2e0);
    if ((auStack_2e0[0] & 1) != 0) {
      FUN_0055293c();
    }
    pdVar22 = (dword *)&pdStack_178;
    FUN_003c4d40(extraout_x8,pdVar22);
    if (((ulong)pdStack_178 & 1) != 0) {
      FUN_0055293c();
    }
  }
  else {
    puVar2 = puStack_248;
    if (-1 < (long)uStack_240) {
      puVar2 = (undefined1 *)(ulong)uStack_240._7_1_;
    }
    bVar36 = uStack_240._7_1_;
    if (puVar2 == (undefined1 *)0x0) {
      if (puVar21 == (undefined1 *)0x0) {
        auStack_2a8[2] = 0;
        auStack_2a8[3] = 0;
        auStack_2a8[1] = 0;
        FUN_003b646c(auStack_2a8 + 4,2,"no port in name",0xf,&uStack_261,auStack_2a8 + 1);
        pdVar22 = &MACH_HEADER.cputype;
        FUN_003be254(&uStack_258,auStack_2a8 + 4,4,puVar32,uVar23);
        uVar33 = uStack_258;
        if (uStack_258 != 0) {
          uStack_200 = uStack_258;
          uStack_258 = 0x36;
        }
        if ((auStack_2a8[4] & 1) != 0) {
          FUN_0055293c();
        }
        pdStack_178 = (dword *)(auStack_2a8 + 1);
        goto LAB_003c46a8;
      }
      if ((undefined1 *)0x7ffffffffffffff7 < puVar21) goto LAB_003c49c0;
      if ((undefined1 *)((long)&MACH_HEADER.sizeofcmds + 2) < puVar21) {
        uVar33 = ((ulong)puVar21 & 0xfffffffffffffff8) + 8;
        if (((ulong)puVar21 | 7) != 0x17) {
          uVar33 = (ulong)puVar21 | 7;
        }
        pdVar22 = (dword *)(uVar33 + 1);
        __Znwm();
        uStack_168 = uVar33 + 1 | 0x8000000000000000;
        pdStack_178 = pdVar22;
        puStack_170 = puVar21;
      }
      else {
        uStack_168 = CONCAT17((char)puVar21,(undefined7)uStack_168);
        pdVar22 = (dword *)&pdStack_178;
      }
      _memmove(pdVar22,uVar24,puVar21);
      *(undefined1 *)((long)pdVar22 + (long)puVar21) = 0;
      if ((long)uVar7 < 0) {
        __ZdlPv(pdStack_250);
        bVar35 = uStack_228._7_1_;
      }
      uStack_240 = uStack_168;
      puStack_248 = puStack_170;
      pdStack_250 = pdStack_178;
      bVar36 = (byte)(uStack_168 >> 0x38);
    }
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1e8 = 1;
    lStack_1f0 = 1;
    ppppppplVar17 = ppppppplStack_238;
    if (-1 < (char)bVar35) {
      ppppppplVar17 = (long *******)&ppppppplStack_238;
    }
    pdVar22 = pdStack_250;
    if (-1 < (char)bVar36) {
      pdVar22 = (dword *)&pdStack_250;
    }
    _getaddrinfo(ppppppplVar17,pdVar22,&lStack_1f0,&lStack_1f8);
    ppppppplVar18 = ppppppplVar17;
    func_0x003c1f6c();
    uVar33 = uStack_240;
    puVar21 = puStack_248;
    pdVar1 = pdStack_250;
    *(undefined1 *)((long)*ppppppplVar18 + 0x34) = 0;
    if ((int)ppppppplVar17 != 0) {
      lVar26 = 0;
      puVar2 = (undefined1 *)(uStack_240 >> 0x38);
      bVar5 = true;
      do {
        bVar25 = bVar5;
        pdVar34 = (dword *)(&PTR_DAT_009e0340)[lVar26 * 2];
        pdVar19 = pdVar34;
        _strlen();
        if ((long)uVar33 < 0) {
          if (pdVar19 == (dword *)puVar21) {
            pdVar19 = pdVar1;
            if (puVar21 != (undefined1 *)0xffffffffffffffff) goto LAB_003c455c;
            func_0x003c4cd0(&pdStack_250);
            goto LAB_003c49c8;
          }
        }
        else if (pdVar19 == (dword *)puVar2) {
          pdVar19 = (dword *)&pdStack_250;
LAB_003c455c:
          _memcmp(pdVar19,pdVar34);
          pdVar22 = pdVar34;
          if ((int)pdVar19 == 0) {
            ppppppplVar17 = ppppppplStack_238;
            if (-1 < uStack_228) {
              ppppppplVar17 = (long *******)&ppppppplStack_238;
            }
            pdVar22 = (dword *)(&PTR_s_80_009e0348)[lVar26 * 2];
            _getaddrinfo(ppppppplVar17,pdVar22,&lStack_1f0,&lStack_1f8);
            ppppppplVar18 = ppppppplVar17;
            func_0x003c1f6c();
            *(undefined1 *)((long)*ppppppplVar18 + 0x34) = 0;
            break;
          }
        }
        lVar26 = 1;
        bVar5 = false;
      } while (bVar25);
      if ((int)ppppppplVar17 != 0) {
        ppppppplVar18 = ppppppplVar17;
        _gai_strerror(ppppppplVar17);
        ppppppplVar20 = ppppppplVar18;
        _strlen();
        auStack_2e0[2] = 0;
        auStack_2e0[3] = 0;
        auStack_2e0[1] = 0;
        FUN_003b646c(auStack_2e0 + 4,2,ppppppplVar18,ppppppplVar20,&uStack_261,auStack_2e0 + 1);
        FUN_003be104(&uStack_2b8,auStack_2e0 + 4,0,(long)(int)ppppppplVar17);
        _gai_strerror(ppppppplVar17);
        ppppppplVar18 = ppppppplVar17;
        _strlen();
        FUN_003be254(&uStack_2b0,&uStack_2b8,2,ppppppplVar17,ppppppplVar18);
        FUN_003be254(auStack_2a8,&uStack_2b0,3,"getaddrinfo",0xb);
        pdVar22 = &MACH_HEADER.cputype;
        FUN_003be254(&uStack_258,auStack_2a8,4,puVar32,uVar23);
        uVar33 = uStack_258;
        if (uStack_258 != 0) {
          uStack_200 = uStack_258;
          uStack_258 = 0x36;
        }
        if ((auStack_2a8[0] & 1) != 0) {
          FUN_0055293c();
        }
        if ((uStack_2b0 & 1) != 0) {
          FUN_0055293c();
        }
        if ((uStack_2b8 & 1) != 0) {
          FUN_0055293c();
        }
        if ((auStack_2e0[4] & 1) != 0) {
          FUN_0055293c();
        }
        pdStack_178 = (dword *)(auStack_2e0 + 1);
        goto LAB_003c46a8;
      }
    }
    if (lStack_1f8 != 0) {
      lVar26 = lStack_1f8;
      do {
        puVar32 = puStack_218;
        pdVar22 = *(dword **)(lVar26 + 0x20);
        uVar3 = *(undefined4 *)(lVar26 + 0x10);
        _memcpy(&pdStack_178,pdVar22,uVar3);
        pdVar1 = pdStack_178;
        uStack_f8 = uVar3;
        if (puVar32 < apuStack_210[0]) {
          puVar32[1] = (ulong)puStack_170;
          *puVar32 = (ulong)pdVar1;
          uVar11 = uStack_130;
          uVar10 = uStack_138;
          uVar9 = uStack_148;
          uVar8 = uStack_150;
          uVar7 = uStack_158;
          uVar33 = uStack_168;
          puVar32[7] = uStack_140;
          puVar32[6] = uVar9;
          puVar32[9] = uVar11;
          puVar32[8] = uVar10;
          puVar32[3] = uStack_160;
          puVar32[2] = uVar33;
          puVar32[5] = uVar8;
          puVar32[4] = uVar7;
          uVar10 = uStack_100;
          uVar9 = uStack_108;
          uVar8 = uStack_118;
          uVar7 = uStack_120;
          uVar33 = uStack_128;
          *(undefined4 *)(puVar32 + 0x10) = uStack_f8;
          puVar32[0xd] = uStack_110;
          puVar32[0xc] = uVar8;
          puVar32[0xf] = uVar10;
          puVar32[0xe] = uVar9;
          puVar32[0xb] = uVar7;
          puVar32[10] = uVar33;
          puVar32 = (ulong *)((long)puVar32 + 0x84);
        }
        else {
          lVar30 = (long)puVar32 - (long)puStack_220 >> 2;
          pdVar1 = (dword *)(lVar30 * 0xf83e0f83e0f83e1 + 1);
          if ((dword *)0x1f07c1f07c1f07c < pdVar1) {
            func_0x003c4ce4(&puStack_220);
            goto LAB_003c49c8;
          }
          lVar27 = (long)apuStack_210[0] - (long)puStack_220 >> 2;
          pdVar22 = (dword *)(lVar27 * 0x1f07c1f07c1f07c2);
          if (pdVar22 < pdVar1 || (long)pdVar22 - (long)pdVar1 == 0) {
            pdVar22 = pdVar1;
          }
          if (0xf83e0f83e0f83d < (ulong)(lVar27 * 0xf83e0f83e0f83e1)) {
            pdVar22 = (dword *)0x1f07c1f07c1f07c;
          }
          if (pdVar22 == (dword *)0x0) {
            ppuVar28 = (ulong **)0x0;
          }
          else {
            ppuVar28 = apuStack_210;
            FUN_003c4cf8();
            puVar32 = puStack_218;
          }
          uVar33 = uStack_128;
          puVar31 = (ulong *)((long)ppuVar28 + lVar30 * 4);
          puVar31[0xb] = uStack_120;
          puVar31[10] = uVar33;
          uVar33 = uStack_118;
          puVar31[0xd] = uStack_110;
          puVar31[0xc] = uVar33;
          uVar33 = uStack_108;
          puVar31[0xf] = uStack_100;
          puVar31[0xe] = uVar33;
          *(undefined4 *)(puVar31 + 0x10) = uStack_f8;
          uVar33 = uStack_168;
          puVar31[3] = uStack_160;
          puVar31[2] = uVar33;
          uVar33 = uStack_158;
          puVar31[5] = uStack_150;
          puVar31[4] = uVar33;
          uVar33 = uStack_148;
          puVar31[7] = uStack_140;
          puVar31[6] = uVar33;
          uVar33 = uStack_138;
          puVar31[9] = uStack_130;
          puVar31[8] = uVar33;
          pdVar1 = pdStack_178;
          puVar31[1] = (ulong)puStack_170;
          *puVar31 = (ulong)pdVar1;
          puVar6 = puVar31;
          for (; puVar32 != puStack_220; puVar32 = (ulong *)((long)puVar32 + -0x84)) {
            uVar23 = *(undefined8 *)((long)puVar32 + -0x84);
            *(undefined8 *)((long)puVar6 + -0x7c) = *(undefined8 *)((long)puVar32 + -0x7c);
            *(undefined8 *)((long)puVar6 + -0x84) = uVar23;
            uVar24 = *(undefined8 *)((long)puVar32 + -0x6c);
            uVar23 = *(undefined8 *)((long)puVar32 + -0x74);
            uVar38 = *(undefined8 *)((long)puVar32 + -0x5c);
            uVar37 = *(undefined8 *)((long)puVar32 + -100);
            uVar40 = *(undefined8 *)((long)puVar32 + -0x4c);
            uVar39 = *(undefined8 *)((long)puVar32 + -0x54);
            uVar41 = *(undefined8 *)((long)puVar32 + -0x44);
            *(undefined8 *)((long)puVar6 + -0x3c) = *(undefined8 *)((long)puVar32 + -0x3c);
            *(undefined8 *)((long)puVar6 + -0x44) = uVar41;
            *(undefined8 *)((long)puVar6 + -0x4c) = uVar40;
            *(undefined8 *)((long)puVar6 + -0x54) = uVar39;
            *(undefined8 *)((long)puVar6 + -0x5c) = uVar38;
            *(undefined8 *)((long)puVar6 + -100) = uVar37;
            *(undefined8 *)((long)puVar6 + -0x6c) = uVar24;
            *(undefined8 *)((long)puVar6 + -0x74) = uVar23;
            uVar24 = *(undefined8 *)((long)puVar32 + -0x2c);
            uVar23 = *(undefined8 *)((long)puVar32 + -0x34);
            uVar38 = *(undefined8 *)((long)puVar32 + -0x1c);
            uVar37 = *(undefined8 *)((long)puVar32 + -0x24);
            uVar40 = *(undefined8 *)((long)puVar32 + -0xc);
            uVar39 = *(undefined8 *)((long)puVar32 + -0x14);
            *(undefined4 *)((long)puVar6 + -4) = *(undefined4 *)((long)puVar32 + -4);
            *(undefined8 *)((long)puVar6 + -0xc) = uVar40;
            *(undefined8 *)((long)puVar6 + -0x14) = uVar39;
            *(undefined8 *)((long)puVar6 + -0x1c) = uVar38;
            *(undefined8 *)((long)puVar6 + -0x24) = uVar37;
            *(undefined8 *)((long)puVar6 + -0x2c) = uVar24;
            *(undefined8 *)((long)puVar6 + -0x34) = uVar23;
            puVar6 = (ulong *)((long)puVar6 + -0x84);
          }
          apuStack_210[0] = (ulong *)((long)ppuVar28 + (long)pdVar22 * 0x84);
          puVar32 = (ulong *)((long)puVar31 + 0x84);
          bVar5 = puStack_220 != (ulong *)0x0;
          puStack_220 = puVar6;
          if (bVar5) {
            puStack_218 = puVar32;
            __ZdlPv();
          }
        }
        lVar26 = *(long *)(lVar26 + 0x28);
        puStack_218 = puVar32;
      } while (lVar26 != 0);
      uVar33 = 0;
      goto LAB_003c48a8;
    }
LAB_003c4908:
    uVar33 = 0;
    extraout_x8[2] = puStack_218;
    extraout_x8[1] = puStack_220;
    extraout_x8[3] = apuStack_210[0];
    puStack_218 = (ulong *)0x0;
    apuStack_210[0] = (ulong *)0x0;
    puStack_220 = (ulong *)0x0;
    *extraout_x8 = 0;
  }
  if ((long)uStack_240 < 0) {
    __ZdlPv(pdStack_250);
  }
  if (uStack_228 < 0) {
    __ZdlPv(ppppppplStack_238);
  }
  if (puStack_220 != (ulong *)0x0) {
    puStack_218 = puStack_220;
    __ZdlPv();
  }
  if ((uVar33 & 1) != 0) {
    FUN_0055293c(uVar33);
  }
  puVar21 = auStack_1c0;
  FUN_00341470(puVar21);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_f0) {
    auVar42._8_8_ = pdVar22;
    auVar42._0_8_ = puVar21;
    return auVar42;
  }
  ___stack_chk_fail();
LAB_003c49c0:
  func_0x0033b318(&pdStack_178);
LAB_003c49c8:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x3c49cc);
  (*pcVar12)();
}



/* Entry: 003c4294; end: 003c4b13;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_003c4294(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  code *pcVar11;
  undefined8 *******pppppppuVar12;
  long *******ppppppplVar13;
  long *******ppppppplVar14;
  undefined *puVar15;
  undefined8 *******pppppppuVar16;
  long *******ppppppplVar17;
  bool bVar18;
  long lVar19;
  ulong **ppuVar20;
  int *piVar21;
  long lVar22;
  ulong *puVar23;
  ulong uVar24;
  ulong *puVar25;
  ulong uVar26;
  undefined *puVar27;
  long lVar28;
  byte bVar29;
  byte bVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  ulong auStack_260 [5];
  ulong uStack_238;
  ulong uStack_230;
  ulong auStack_228 [5];
  undefined8 ******ppppppuStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e1;
  ulong uStack_1e0;
  ulong uStack_1d8;
  undefined8 *******pppppppuStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  long *******ppppppplStack_1b8;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  ulong *puStack_1a0;
  ulong *puStack_198;
  ulong *apuStack_190 [2];
  ulong uStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [72];
  undefined8 *******pppppppuStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined4 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_003413d4(auStack_140);
  uStack_180 = 0;
  lStack_178 = 0;
  puStack_1a0 = (ulong *)0x0;
  puStack_198 = (ulong *)0x0;
  apuStack_190[0] = (ulong *)0x0;
  ppppppplStack_1b8 = (long *******)0x0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  pppppppuStack_1d0 = (undefined8 *******)0x0;
  puStack_1c8 = (undefined *)0x0;
  uStack_1c0 = 0;
  func_0x0033b110(param_3,param_4,&ppppppplStack_1b8,&pppppppuStack_1d0);
  uVar24 = uStack_1c0;
  bVar29 = uStack_1a8._7_1_;
  uVar26 = uStack_1b0;
  if (-1 < uStack_1a8) {
    uVar26 = (ulong)uStack_1a8._7_1_;
  }
  if (uVar26 == 0) {
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    ppppppuStack_200 = (undefined8 ******)0x0;
    FUN_003b646c(&uStack_1e0,2,"unparseable host:port",0x15,&uStack_1e1,&ppppppuStack_200);
    FUN_003be254(&uStack_1d8,&uStack_1e0,4,param_3,param_4);
    uVar26 = uStack_1d8;
    if (uStack_1d8 != 0) {
      uStack_180 = uStack_1d8;
      uStack_1d8 = 0x36;
    }
    if ((uStack_1e0 & 1) != 0) {
      FUN_0055293c();
    }
    pppppppuStack_f8 = &ppppppuStack_200;
LAB_003c46a8:
    FUN_0033d548(&pppppppuStack_f8);
LAB_003c48a8:
    if (lStack_178 != 0) {
      _freeaddrinfo();
    }
    if (uVar26 == 0) goto LAB_003c4908;
    if ((uVar26 & 1) != 0) {
      piVar21 = (int *)(uVar26 - 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar4) {
          *piVar21 = *piVar21 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    auStack_260[0] = uVar26;
    FUN_003fbde8(&pppppppuStack_f8,auStack_260);
    if ((auStack_260[0] & 1) != 0) {
      FUN_0055293c();
    }
    FUN_003c4d40(param_1,&pppppppuStack_f8);
    if (((ulong)pppppppuStack_f8 & 1) != 0) {
      FUN_0055293c();
    }
  }
  else {
    puVar1 = puStack_1c8;
    if (-1 < (long)uStack_1c0) {
      puVar1 = (undefined *)(ulong)uStack_1c0._7_1_;
    }
    bVar30 = uStack_1c0._7_1_;
    if (puVar1 == (undefined *)0x0) {
      if (param_6 == (undefined *)0x0) {
        auStack_228[2] = 0;
        auStack_228[3] = 0;
        auStack_228[1] = 0;
        FUN_003b646c(auStack_228 + 4,2,"no port in name",0xf,&uStack_1e1,auStack_228 + 1);
        FUN_003be254(&uStack_1d8,auStack_228 + 4,4,param_3,param_4);
        uVar26 = uStack_1d8;
        if (uStack_1d8 != 0) {
          uStack_180 = uStack_1d8;
          uStack_1d8 = 0x36;
        }
        if ((auStack_228[4] & 1) != 0) {
          FUN_0055293c();
        }
        pppppppuStack_f8 = (undefined8 *******)(auStack_228 + 1);
        goto LAB_003c46a8;
      }
      if ((undefined *)0x7ffffffffffffff7 < param_6) goto LAB_003c49c0;
      if (param_6 < (undefined *)0x17) {
        uStack_e8 = CONCAT17((char)param_6,(undefined7)uStack_e8);
        pppppppuVar12 = &pppppppuStack_f8;
      }
      else {
        uVar26 = ((ulong)param_6 & 0xfffffffffffffff8) + 8;
        if (((ulong)param_6 | 7) != 0x17) {
          uVar26 = (ulong)param_6 | 7;
        }
        pppppppuVar12 = (undefined8 *******)(uVar26 + 1);
        __Znwm();
        uStack_e8 = uVar26 + 1 | 0x8000000000000000;
        pppppppuStack_f8 = pppppppuVar12;
        puStack_f0 = param_6;
      }
      _memmove(pppppppuVar12,param_5,param_6);
      *(undefined1 *)((long)pppppppuVar12 + (long)param_6) = 0;
      if ((long)uVar24 < 0) {
        __ZdlPv(pppppppuStack_1d0);
        bVar29 = uStack_1a8._7_1_;
      }
      uStack_1c0 = uStack_e8;
      puStack_1c8 = puStack_f0;
      pppppppuStack_1d0 = pppppppuStack_f8;
      bVar30 = (byte)(uStack_e8 >> 0x38);
    }
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_168 = 1;
    lStack_170 = 1;
    ppppppplVar13 = ppppppplStack_1b8;
    if (-1 < (char)bVar29) {
      ppppppplVar13 = (long *******)&ppppppplStack_1b8;
    }
    pppppppuVar12 = pppppppuStack_1d0;
    if (-1 < (char)bVar30) {
      pppppppuVar12 = &pppppppuStack_1d0;
    }
    _getaddrinfo(ppppppplVar13,pppppppuVar12,&lStack_170,&lStack_178);
    ppppppplVar14 = ppppppplVar13;
    func_0x003c1f6c();
    uVar26 = uStack_1c0;
    puVar1 = puStack_1c8;
    pppppppuVar12 = pppppppuStack_1d0;
    *(undefined1 *)((long)*ppppppplVar14 + 0x34) = 0;
    if ((int)ppppppplVar13 != 0) {
      lVar28 = 0;
      puVar5 = (undefined *)(uStack_1c0 >> 0x38);
      bVar4 = true;
      do {
        bVar18 = bVar4;
        puVar27 = (&PTR_DAT_009e0340)[lVar28 * 2];
        puVar15 = puVar27;
        _strlen();
        if ((long)uVar26 < 0) {
          if (puVar15 == puVar1) {
            pppppppuVar16 = pppppppuVar12;
            if (puVar1 != (undefined *)0xffffffffffffffff) goto LAB_003c455c;
            func_0x003c4cd0(&pppppppuStack_1d0);
            goto LAB_003c49c8;
          }
        }
        else if (puVar15 == puVar5) {
          pppppppuVar16 = &pppppppuStack_1d0;
LAB_003c455c:
          _memcmp(pppppppuVar16,puVar27);
          if ((int)pppppppuVar16 == 0) {
            ppppppplVar13 = ppppppplStack_1b8;
            if (-1 < uStack_1a8) {
              ppppppplVar13 = (long *******)&ppppppplStack_1b8;
            }
            _getaddrinfo(ppppppplVar13,(&PTR_s_80_009e0348)[lVar28 * 2],&lStack_170,&lStack_178);
            ppppppplVar14 = ppppppplVar13;
            func_0x003c1f6c();
            *(undefined1 *)((long)*ppppppplVar14 + 0x34) = 0;
            break;
          }
        }
        lVar28 = 1;
        bVar4 = false;
      } while (bVar18);
      if ((int)ppppppplVar13 != 0) {
        ppppppplVar14 = ppppppplVar13;
        _gai_strerror(ppppppplVar13);
        ppppppplVar17 = ppppppplVar14;
        _strlen();
        auStack_260[2] = 0;
        auStack_260[3] = 0;
        auStack_260[1] = 0;
        FUN_003b646c(auStack_260 + 4,2,ppppppplVar14,ppppppplVar17,&uStack_1e1,auStack_260 + 1);
        FUN_003be104(&uStack_238,auStack_260 + 4,0,(long)(int)ppppppplVar13);
        _gai_strerror(ppppppplVar13);
        ppppppplVar14 = ppppppplVar13;
        _strlen();
        FUN_003be254(&uStack_230,&uStack_238,2,ppppppplVar13,ppppppplVar14);
        FUN_003be254(auStack_228,&uStack_230,3,"getaddrinfo",0xb);
        FUN_003be254(&uStack_1d8,auStack_228,4,param_3,param_4);
        uVar26 = uStack_1d8;
        if (uStack_1d8 != 0) {
          uStack_180 = uStack_1d8;
          uStack_1d8 = 0x36;
        }
        if ((auStack_228[0] & 1) != 0) {
          FUN_0055293c();
        }
        if ((uStack_230 & 1) != 0) {
          FUN_0055293c();
        }
        if ((uStack_238 & 1) != 0) {
          FUN_0055293c();
        }
        if ((auStack_260[4] & 1) != 0) {
          FUN_0055293c();
        }
        pppppppuStack_f8 = (undefined8 *******)(auStack_260 + 1);
        goto LAB_003c46a8;
      }
    }
    if (lStack_178 != 0) {
      lVar28 = lStack_178;
      do {
        puVar25 = puStack_198;
        uVar2 = *(undefined4 *)(lVar28 + 0x10);
        _memcpy(&pppppppuStack_f8,*(undefined8 *)(lVar28 + 0x20),uVar2);
        pppppppuVar12 = pppppppuStack_f8;
        uStack_78 = uVar2;
        if (puVar25 < apuStack_190[0]) {
          puVar25[1] = (ulong)puStack_f0;
          *puVar25 = (ulong)pppppppuVar12;
          uVar10 = uStack_b0;
          uVar9 = uStack_b8;
          uVar8 = uStack_c8;
          uVar7 = uStack_d0;
          uVar24 = uStack_d8;
          uVar26 = uStack_e8;
          puVar25[7] = uStack_c0;
          puVar25[6] = uVar8;
          puVar25[9] = uVar10;
          puVar25[8] = uVar9;
          puVar25[3] = uStack_e0;
          puVar25[2] = uVar26;
          puVar25[5] = uVar7;
          puVar25[4] = uVar24;
          uVar9 = uStack_80;
          uVar8 = uStack_88;
          uVar7 = uStack_98;
          uVar24 = uStack_a0;
          uVar26 = uStack_a8;
          *(undefined4 *)(puVar25 + 0x10) = uStack_78;
          puVar25[0xd] = uStack_90;
          puVar25[0xc] = uVar7;
          puVar25[0xf] = uVar9;
          puVar25[0xe] = uVar8;
          puVar25[0xb] = uVar24;
          puVar25[10] = uVar26;
          puVar25 = (ulong *)((long)puVar25 + 0x84);
        }
        else {
          lVar22 = (long)puVar25 - (long)puStack_1a0 >> 2;
          uVar26 = lVar22 * 0xf83e0f83e0f83e1 + 1;
          if (0x1f07c1f07c1f07c < uVar26) {
            func_0x003c4ce4(&puStack_1a0);
            goto LAB_003c49c8;
          }
          lVar19 = (long)apuStack_190[0] - (long)puStack_1a0 >> 2;
          uVar24 = lVar19 * 0x1f07c1f07c1f07c2;
          if (uVar24 < uVar26 || uVar24 - uVar26 == 0) {
            uVar24 = uVar26;
          }
          if (0xf83e0f83e0f83d < (ulong)(lVar19 * 0xf83e0f83e0f83e1)) {
            uVar24 = 0x1f07c1f07c1f07c;
          }
          if (uVar24 == 0) {
            ppuVar20 = (ulong **)0x0;
          }
          else {
            ppuVar20 = apuStack_190;
            FUN_003c4cf8();
            puVar25 = puStack_198;
          }
          uVar26 = uStack_a8;
          puVar23 = (ulong *)((long)ppuVar20 + lVar22 * 4);
          puVar23[0xb] = uStack_a0;
          puVar23[10] = uVar26;
          uVar26 = uStack_98;
          puVar23[0xd] = uStack_90;
          puVar23[0xc] = uVar26;
          uVar26 = uStack_88;
          puVar23[0xf] = uStack_80;
          puVar23[0xe] = uVar26;
          *(undefined4 *)(puVar23 + 0x10) = uStack_78;
          uVar26 = uStack_e8;
          puVar23[3] = uStack_e0;
          puVar23[2] = uVar26;
          uVar26 = uStack_d8;
          puVar23[5] = uStack_d0;
          puVar23[4] = uVar26;
          uVar26 = uStack_c8;
          puVar23[7] = uStack_c0;
          puVar23[6] = uVar26;
          uVar26 = uStack_b8;
          puVar23[9] = uStack_b0;
          puVar23[8] = uVar26;
          pppppppuVar12 = pppppppuStack_f8;
          puVar23[1] = (ulong)puStack_f0;
          *puVar23 = (ulong)pppppppuVar12;
          puVar6 = puVar23;
          for (; puVar25 != puStack_1a0; puVar25 = (ulong *)((long)puVar25 + -0x84)) {
            uVar31 = *(undefined8 *)((long)puVar25 + -0x84);
            *(undefined8 *)((long)puVar6 + -0x7c) = *(undefined8 *)((long)puVar25 + -0x7c);
            *(undefined8 *)((long)puVar6 + -0x84) = uVar31;
            uVar32 = *(undefined8 *)((long)puVar25 + -0x6c);
            uVar31 = *(undefined8 *)((long)puVar25 + -0x74);
            uVar34 = *(undefined8 *)((long)puVar25 + -0x5c);
            uVar33 = *(undefined8 *)((long)puVar25 + -100);
            uVar36 = *(undefined8 *)((long)puVar25 + -0x4c);
            uVar35 = *(undefined8 *)((long)puVar25 + -0x54);
            uVar37 = *(undefined8 *)((long)puVar25 + -0x44);
            *(undefined8 *)((long)puVar6 + -0x3c) = *(undefined8 *)((long)puVar25 + -0x3c);
            *(undefined8 *)((long)puVar6 + -0x44) = uVar37;
            *(undefined8 *)((long)puVar6 + -0x4c) = uVar36;
            *(undefined8 *)((long)puVar6 + -0x54) = uVar35;
            *(undefined8 *)((long)puVar6 + -0x5c) = uVar34;
            *(undefined8 *)((long)puVar6 + -100) = uVar33;
            *(undefined8 *)((long)puVar6 + -0x6c) = uVar32;
            *(undefined8 *)((long)puVar6 + -0x74) = uVar31;
            uVar32 = *(undefined8 *)((long)puVar25 + -0x2c);
            uVar31 = *(undefined8 *)((long)puVar25 + -0x34);
            uVar34 = *(undefined8 *)((long)puVar25 + -0x1c);
            uVar33 = *(undefined8 *)((long)puVar25 + -0x24);
            uVar36 = *(undefined8 *)((long)puVar25 + -0xc);
            uVar35 = *(undefined8 *)((long)puVar25 + -0x14);
            *(undefined4 *)((long)puVar6 + -4) = *(undefined4 *)((long)puVar25 + -4);
            *(undefined8 *)((long)puVar6 + -0xc) = uVar36;
            *(undefined8 *)((long)puVar6 + -0x14) = uVar35;
            *(undefined8 *)((long)puVar6 + -0x1c) = uVar34;
            *(undefined8 *)((long)puVar6 + -0x24) = uVar33;
            *(undefined8 *)((long)puVar6 + -0x2c) = uVar32;
            *(undefined8 *)((long)puVar6 + -0x34) = uVar31;
            puVar6 = (ulong *)((long)puVar6 + -0x84);
          }
          apuStack_190[0] = (ulong *)((long)ppuVar20 + uVar24 * 0x84);
          puVar25 = (ulong *)((long)puVar23 + 0x84);
          bVar4 = puStack_1a0 != (ulong *)0x0;
          puStack_1a0 = puVar6;
          if (bVar4) {
            puStack_198 = puVar25;
            __ZdlPv();
          }
        }
        lVar28 = *(long *)(lVar28 + 0x28);
        puStack_198 = puVar25;
      } while (lVar28 != 0);
      uVar26 = 0;
      goto LAB_003c48a8;
    }
LAB_003c4908:
    uVar26 = 0;
    param_1[2] = puStack_198;
    param_1[1] = puStack_1a0;
    param_1[3] = apuStack_190[0];
    puStack_198 = (ulong *)0x0;
    apuStack_190[0] = (ulong *)0x0;
    puStack_1a0 = (ulong *)0x0;
    *param_1 = 0;
  }
  if ((long)uStack_1c0 < 0) {
    __ZdlPv(pppppppuStack_1d0);
  }
  if (uStack_1a8 < 0) {
    __ZdlPv(ppppppplStack_1b8);
  }
  if (puStack_1a0 != (ulong *)0x0) {
    puStack_198 = puStack_1a0;
    __ZdlPv();
  }
  if ((uVar26 & 1) != 0) {
    FUN_0055293c(uVar26);
  }
  FUN_00341470(auStack_140);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_003c49c0:
  func_0x0033b318(&pppppppuStack_f8);
LAB_003c49c8:
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x3c49cc);
  (*pcVar11)();
}



/* Entry: 003c4b14; end: 003c4b23;  */

undefined8 FUN_003c4b14(void)

{
  return 0;
}



/* Entry: 003c4b24; end: 003c4c6b;  */

void FUN_003c4b24(long *param_1)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar2 = param_1;
  func_0x003c3f4c();
  (**(code **)(*plVar2 + 0x18))(&lStack_50);
  lStack_70 = lStack_50;
  if (lStack_50 == 0) {
    uStack_60 = uStack_40;
    uStack_68 = uStack_48;
    uStack_58 = uStack_38;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_48 = 0;
  }
  else {
    lStack_50 = 0x36;
  }
  plVar2 = (long *)param_1[9];
  if (plVar2 == (long *)0x0) {
    FUN_0033e390();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x3c4c50);
    (*pcVar1)();
  }
  (**(code **)(*plVar2 + 0x30))(plVar2,&lStack_70);
  plVar2 = param_1 + 6;
  FUN_00361f6c(&lStack_70);
  plVar3 = (long *)param_1[9];
  if (plVar3 == plVar2) {
    lVar4 = 4;
  }
  else {
    if (plVar3 == (long *)0x0) goto LAB_003c4c04;
    lVar4 = 5;
    plVar2 = plVar3;
  }
  (**(code **)(*plVar2 + lVar4 * 8))();
LAB_003c4c04:
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  __ZdlPv(param_1);
  FUN_00361f6c(&lStack_50);
  return;
}



/* Entry: 003c4c6c; end: 003c4ccf;  */

long FUN_003c4c6c(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_2 + 0x18);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    plVar1 = (long *)(param_1 + 0x18);
  }
  else {
    if (lVar2 == param_2) {
      *(long *)(param_1 + 0x18) = param_1;
      (**(code **)(*(long *)*plVar1 + 0x18))((long *)*plVar1,param_1);
      return param_1;
    }
    *(long *)(param_1 + 0x18) = lVar2;
  }
  *plVar1 = 0;
  return param_1;
}



/* Entry: 003c4cd0; end: 003c4cf7;  */

undefined1  [16] FUN_003c4cd0(undefined8 param_1,long *param_2)

{
  char *pcVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  FUN_0033b2a4("basic_string");
  pcVar1 = "vector";
  FUN_0033b32c();
  if (param_2 < (long *)0x1f07c1f07c1f07d) {
    lVar2 = (long)param_2 * 0x84;
    __Znwm(lVar2);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  FUN_00349558();
  *(long *)pcVar1 = *param_2;
  *param_2 = 0x36;
  if (*(long *)pcVar1 == 0) {
    FUN_0055142c(pcVar1);
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = pcVar1;
  return auVar4;
}



/* Entry: 003c4cf8; end: 003c4d3f;  */

undefined1  [16] FUN_003c4cf8(long *param_1,long *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 < (long *)0x1f07c1f07c1f07d) {
    lVar1 = (long)param_2 * 0x84;
    __Znwm(lVar1);
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  FUN_00349558();
  *param_1 = *param_2;
  *param_2 = 0x36;
  if (*param_1 == 0) {
    FUN_0055142c(param_1);
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 003c4d40; end: 003c4d97;  */

long * FUN_003c4d40(long *param_1,long *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0x36;
  if (*param_1 == 0) {
    FUN_0055142c(param_1);
  }
  return param_1;
}



/* Entry: 003c4d98; end: 003c4dab;  */

uint FUN_003c4d98(uint param_1)

{
  return (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
}



/* Entry: 003c4dac; end: 003c4dc3;  */

void FUN_003c4dac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  if (param_4 >> 0x20 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a72c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__inet_ntop_0099a328)();
    return;
  }
  func_0x00774348();
                    /* WARNING: Could not recover jumptable at 0x003c4dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}



/* Entry: 003c4dc4; end: 003c4dcf;  */

void FUN_003c4dc4(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x003c4dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}



/* Entry: 003c4dd0; end: 003c4e4b;  */

void FUN_003c4dd0(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  char *pcVar1;
  char *pcVar2;
  long *extraout_x8;
  code *pcVar3;
  long lStack_68;
  undefined1 uStack_59;
  long lStack_58;
  undefined4 uStack_18;
  uint uStack_14;
  
  pcVar3 = (code *)((undefined8 *)*param_1)[3];
  if (pcVar3 != (code *)0x0) {
    uStack_18 = (undefined4)param_2;
    uStack_14 = param_3;
    (*pcVar3)(&uStack_18,param_1);
    return;
  }
  if (param_3 < 2) {
                    /* WARNING: Could not recover jumptable at 0x003c4e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_2,param_1);
    return;
  }
  if (param_3 == 2) {
    return;
  }
  pcVar1 = "return false";
  func_0x00338df0("return false",
                  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/socket_mutator.cc"
                  ,0x36);
  pcVar2 = pcVar1;
  _fcntl();
  if ((int)pcVar2 < 0) {
    ___error();
    FUN_003be008(&lStack_58,&uStack_59,*(undefined4 *)pcVar2,"fcntl");
    lStack_68 = lStack_58;
    if (lStack_58 == 0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                   ,0xd5,2,"assertion failed: %s");
      _abort();
      goto LAB_003c4f60;
    }
  }
  else {
    _fcntl(pcVar1,4);
    if ((int)pcVar1 == 0) {
      *extraout_x8 = 0;
      return;
    }
    ___error();
    FUN_003be008(&lStack_68,&uStack_59,*(undefined4 *)pcVar1,"fcntl");
    if (lStack_68 == 0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                   ,0xd5,2,"assertion failed: %s");
      _abort();
LAB_003c4f60:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x3c4f64);
      (*pcVar3)();
    }
  }
  *extraout_x8 = lStack_68;
  return;
}



/* Entry: 003c4e4c; end: 003c4f83;  */

void FUN_003c4e4c(long *param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  long lStack_48;
  undefined1 uStack_39;
  long lStack_38;
  
  puVar2 = param_2;
  _fcntl(param_2,3);
  if ((int)puVar2 < 0) {
    ___error();
    FUN_003be008(&lStack_38,&uStack_39,*puVar2,"fcntl");
    lStack_48 = lStack_38;
    if (lStack_38 == 0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                   ,0xd5,2,"assertion failed: %s");
      _abort();
      goto LAB_003c4f60;
    }
  }
  else {
    _fcntl(param_2,4);
    if ((int)param_2 == 0) {
      *param_1 = 0;
      return;
    }
    ___error();
    FUN_003be008(&lStack_48,&uStack_39,*param_2,"fcntl");
    if (lStack_48 == 0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                   ,0xd5,2,"assertion failed: %s");
      _abort();
LAB_003c4f60:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x3c4f64);
      (*pcVar1)();
    }
  }
  *param_1 = lStack_48;
  return;
}



/* Entry: 003c4f84; end: 003c512f;  */

void FUN_003c4f84(long *param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_49;
  long lStack_48;
  long lStack_40;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  undefined8 *puStack_28;
  
  iStack_2c = 1;
  uStack_34 = 4;
  puVar2 = param_2;
  _setsockopt(param_2,0xffff,0x1022,&iStack_2c,4);
  if ((int)puVar2 == 0) {
    _getsockopt(param_2,0xffff,0x1022,&iStack_30,&uStack_34);
    if ((int)param_2 == 0) {
      if ((iStack_30 == 0) != (iStack_2c != 0)) {
        *param_1 = 0;
        return;
      }
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_68 = 0;
      FUN_003b646c(param_1,2,"Failed to set SO_NOSIGPIPE",0x1a,&uStack_49,&uStack_68);
      puStack_28 = &uStack_68;
      FUN_0033d548(&puStack_28);
      return;
    }
    ___error();
    FUN_003be008(&lStack_48,&puStack_28,*param_2,"getsockopt(SO_NOSIGPIPE)");
    lStack_40 = lStack_48;
    if (lStack_48 == 0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                   ,0xd5,2,"assertion failed: %s");
      _abort();
      goto LAB_003c50f8;
    }
  }
  else {
    ___error();
    FUN_003be008(&lStack_40,&puStack_28,*puVar2,"setsockopt(SO_NOSIGPIPE)");
    if (lStack_40 == 0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                   ,0xd5,2,"assertion failed: %s");
      _abort();
LAB_003c50f8:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x3c50fc);
      (*pcVar1)();
    }
  }
  *param_1 = lStack_40;
  return;
}



/* Entry: 003c5130; end: 003c526b;  */

void FUN_003c5130(long *param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  long lStack_48;
  undefined1 uStack_39;
  long lStack_38;
  
  puVar2 = param_2;
  _fcntl(param_2,1);
  if ((int)puVar2 < 0) {
    ___error();
    FUN_003be008(&lStack_38,&uStack_39,*puVar2,"fcntl");
    lStack_48 = lStack_38;
    if (lStack_38 == 0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                   ,0xd5,2,"assertion failed: %s");
      _abort();
      goto LAB_003c5248;
    }
  }
  else {
    _fcntl(param_2,2);
    if ((int)param_2 == 0) {
      *param_1 = 0;
      return;
    }
    ___error();
    FUN_003be008(&lStack_48,&uStack_39,*param_2,"fcntl");
    if (lStack_48 == 0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                   ,0xd5,2,"assertion failed: %s");
      _abort();
LAB_003c5248:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x3c524c);
      (*pcVar1)();
    }
  }
  *param_1 = lStack_48;
  return;
}



/* Entry: 003c526c; end: 003c5413;  */

void FUN_003c526c(long *param_1,undefined4 *param_2,int param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_49;
  long lStack_48;
  long lStack_40;
  undefined4 uStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined8 *puStack_28;
  
  uStack_2c = (uint)(param_3 != 0);
  uStack_34 = 4;
  puVar2 = param_2;
  _setsockopt(param_2,0xffff,4,&uStack_2c,4);
  if ((int)puVar2 == 0) {
    _getsockopt(param_2,0xffff,4,&iStack_30,&uStack_34);
    if ((int)param_2 == 0) {
      if (uStack_2c == (iStack_30 != 0)) {
        *param_1 = 0;
        return;
      }
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_68 = 0;
      FUN_003b646c(param_1,2,"Failed to set SO_REUSEADDR",0x1a,&uStack_49,&uStack_68);
      puStack_28 = &uStack_68;
      FUN_0033d548(&puStack_28);
      return;
    }
    ___error();
    FUN_003be008(&lStack_48,&puStack_28,*param_2,"getsockopt(SO_REUSEADDR)");
    lStack_40 = lStack_48;
    if (lStack_48 == 0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                   ,0xd5,2,"assertion failed: %s");
      _abort();
      goto LAB_003c53dc;
    }
  }
  else {
    ___error();
    FUN_003be008(&lStack_40,&puStack_28,*puVar2,"setsockopt(SO_REUSEADDR)");
    if (lStack_40 == 0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                   ,0xd5,2,"assertion failed: %s");
      _abort();
LAB_003c53dc:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x3c53e0);
      (*pcVar1)();
    }
  }
  *param_1 = lStack_40;
  return;
}



/* Entry: 003c5414; end: 003c55bb;  */

void FUN_003c5414(long *param_1,undefined4 *param_2,int param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_49;
  long lStack_48;
  long lStack_40;
  undefined4 uStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined8 *puStack_28;
  
  uStack_2c = (uint)(param_3 != 0);
  uStack_34 = 4;
  puVar2 = param_2;
  _setsockopt(param_2,0xffff,0x200,&uStack_2c,4);
  if ((int)puVar2 == 0) {
    _getsockopt(param_2,0xffff,0x200,&iStack_30,&uStack_34);
    if ((int)param_2 == 0) {
      if (uStack_2c == (iStack_30 != 0)) {
        *param_1 = 0;
        return;
      }
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_68 = 0;
      FUN_003b646c(param_1,2,"Failed to set SO_REUSEPORT",0x1a,&uStack_49,&uStack_68);
      puStack_28 = &uStack_68;
      FUN_0033d548(&puStack_28);
      return;
    }
    ___error();
    FUN_003be008(&lStack_48,&puStack_28,*param_2,"getsockopt(SO_REUSEPORT)");
    lStack_40 = lStack_48;
    if (lStack_48 == 0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                   ,0xd5,2,"assertion failed: %s");
      _abort();
      goto LAB_003c5584;
    }
  }
  else {
    ___error();
    FUN_003be008(&lStack_40,&puStack_28,*puVar2,"setsockopt(SO_REUSEPORT)");
    if (lStack_40 == 0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                   ,0xd5,2,"assertion failed: %s");
      _abort();
LAB_003c5584:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x3c5588);
      (*pcVar1)();
    }
  }
  *param_1 = lStack_40;
  return;
}



/* Entry: 003c55bc; end: 003c56af;  */

void FUN_003c55bc(void)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined4 uVar5;
  ulong uStack_30;
  ulong uStack_28;
  
  uVar3 = 2;
  _socket(2,1,0);
  if ((int)uVar3 < 0) {
    uVar3 = 0x1e;
    _socket(0x1e,1,0);
    if ((int)uVar3 < 0) {
      return;
    }
  }
  uVar5 = 1;
  FUN_003c5414(&uStack_30,uVar3,1);
  if (uStack_30 != 0) {
    uStack_28 = uStack_30;
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
    uVar5 = 0x8c9674;
    FUN_003be608("check for SO_REUSEPORT",&uStack_28,
                 "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/socket_utils_common_posix.cc"
                 ,0xe0);
    if ((uStack_28 & 1) != 0) {
      FUN_0055293c();
    }
  }
  uRam0000000000b5e9e0 = uVar5;
  if ((uStack_30 & 1) != 0) {
    FUN_0055293c();
  }
  _close(uVar3);
  return;
}



/* Entry: 003c56b0; end: 003c56e3;  */

bool FUN_003c56b0(void)

{
  func_0x00339fa0(0xafaf30,FUN_003c55bc);
  return iRam0000000000b5e9e0 != 0;
}



/* Entry: 003c56e4; end: 003c588b;  */

void FUN_003c56e4(long *param_1,undefined4 *param_2,int param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_49;
  long lStack_48;
  long lStack_40;
  undefined4 uStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined8 *puStack_28;
  
  uStack_2c = (uint)(param_3 != 0);
  uStack_34 = 4;
  puVar2 = param_2;
  _setsockopt(param_2,6,1,&uStack_2c,4);
  if ((int)puVar2 == 0) {
    _getsockopt(param_2,6,1,&iStack_30,&uStack_34);
    if ((int)param_2 == 0) {
      if (uStack_2c == (iStack_30 != 0)) {
        *param_1 = 0;
        return;
      }
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_68 = 0;
      FUN_003b646c(param_1,2,"Failed to set TCP_NODELAY",0x19,&uStack_49,&uStack_68);
      puStack_28 = &uStack_68;
      FUN_0033d548(&puStack_28);
      return;
    }
    ___error();
    FUN_003be008(&lStack_48,&puStack_28,*param_2,"getsockopt(TCP_NODELAY)");
    lStack_40 = lStack_48;
    if (lStack_48 == 0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                   ,0xd5,2,"assertion failed: %s");
      _abort();
      goto LAB_003c5854;
    }
  }
  else {
    ___error();
    FUN_003be008(&lStack_40,&puStack_28,*puVar2,"setsockopt(TCP_NODELAY)");
    if (lStack_40 == 0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                   ,0xd5,2,"assertion failed: %s");
      _abort();
LAB_003c5854:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x3c5858);
      (*pcVar1)();
    }
  }
  *param_1 = lStack_40;
  return;
}



/* Entry: 003c588c; end: 003c5b37;  */

void FUN_003c588c(undefined8 *param_1,ulong param_2,ulong *param_3,int param_4)

{
  bool bVar1;
  int *piVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  int iVar8;
  ulong uVar9;
  ulong unaff_x25;
  undefined8 uVar10;
  ulong uVar11;
  undefined4 uStack_6c;
  int iStack_68;
  int iStack_64;
  
  if (-1 < iRam0000000000afaf60) {
    pcVar7 = (char *)0xb5e9e4;
    if (param_4 == 0) {
      pcVar7 = (char *)0xafaf44;
    }
    piVar2 = (int *)0xafaf40;
    if (param_4 == 0) {
      piVar2 = (int *)0xafaf48;
    }
    bVar3 = *pcVar7 != '\0';
    iVar8 = *piVar2;
    iStack_64 = iVar8;
    if (param_3 == (ulong *)0x0) {
      if (*pcVar7 == '\0') goto LAB_003c5b14;
    }
    else {
      if (*param_3 != 0) {
        uVar5 = 0;
        uVar9 = param_2;
        uVar11 = 1;
        do {
          lVar4 = param_3[1] + uVar5 * 0x20;
          uVar10 = *(undefined8 *)(lVar4 + 8);
          uVar6 = uVar10;
          _strcmp(uVar10,"grpc.keepalive_time_ms");
          if ((int)uVar6 == 0) {
            unaff_x25 = unaff_x25 & 0xffffffff00000000 | 0x7fffffff;
            FUN_003a2c94(lVar4,0x100000000,unaff_x25);
            if ((int)lVar4 != 0) {
              bVar3 = (int)lVar4 != 0x7fffffff;
            }
          }
          else {
            _strcmp(uVar10,"grpc.keepalive_timeout_ms");
            if ((int)uVar10 == 0) {
              uVar9 = uVar9 & 0xffffffff00000000 | 0x7fffffff;
              FUN_003a2c94(lVar4,0x100000000,uVar9);
              if ((int)lVar4 != 0) {
                iVar8 = (int)lVar4;
              }
            }
          }
          bVar1 = uVar11 < *param_3;
          uVar5 = uVar11;
          uVar11 = (ulong)((int)uVar11 + 1);
        } while (bVar1);
      }
      param_2 = param_2 & 0xffffffff;
      iStack_64 = iVar8;
      if (!bVar3) goto LAB_003c5b14;
    }
    uStack_6c = 4;
    if (iRam0000000000afaf60 == 0) {
      uVar5 = param_2;
      _getsockopt(param_2,6,0,&iStack_68,&uStack_6c);
      if ((int)uVar5 == 0) {
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/socket_utils_common_posix.cc"
                     ,0x161,1,
                     "TCP_USER_TIMEOUT is available. TCP_USER_TIMEOUT will be used thereafter");
        iRam0000000000afaf60 = 1;
      }
      else {
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/socket_utils_common_posix.cc"
                     ,0x15c,1,
                     "TCP_USER_TIMEOUT is not available. TCP_USER_TIMEOUT won\'t be used thereafter"
                    );
        iRam0000000000afaf60 = -1;
      }
    }
    if (0 < iRam0000000000afaf60) {
      uVar5 = param_2;
      _setsockopt(param_2,6,0,&iStack_64,4);
      if ((int)uVar5 == 0) {
        _getsockopt(param_2,6,0,&iStack_68,&uStack_6c);
        if ((int)param_2 == 0) {
          if (iStack_68 == iStack_64) goto LAB_003c5b14;
          pcVar7 = "Failed to set TCP_USER_TIMEOUT";
          uVar6 = 0x179;
        }
        else {
          ___error();
          _strerror();
          pcVar7 = "getsockopt(TCP_USER_TIMEOUT) %s";
          uVar6 = 0x173;
        }
      }
      else {
        ___error();
        _strerror();
        pcVar7 = "setsockopt(TCP_USER_TIMEOUT) %s";
        uVar6 = 0x16e;
      }
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/socket_utils_common_posix.cc"
                   ,uVar6,2,pcVar7);
    }
  }
LAB_003c5b14:
  *param_1 = 0;
  return;
}



/* Entry: 003c5b38; end: 003c5bd3;  */

void FUN_003c5b38(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 *extraout_x8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (param_4 != 0) {
      FUN_003c4dd0(param_4,param_2,param_3);
      if ((param_4 & 1) == 0) {
        *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
        FUN_003b646c(param_1,2,"grpc_socket_mutator failed.",0x1b,
                     (undefined1 *)((long)register0x00000008 + -0x29),
                     (undefined1 *)((long)register0x00000008 + -0x48));
        *(undefined1 **)((long)register0x00000008 + -0x28) =
             (undefined1 *)((long)register0x00000008 + -0x48);
        FUN_0033d548((undefined1 *)((long)register0x00000008 + -0x28));
      }
      else {
        *param_1 = 0;
      }
      return;
    }
    func_0x00774380();
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x20;
    FUN_0033d548((undefined1 *)((long)register0x00000008 + -0x28));
    uVar1 = param_2;
    __Unwind_Resume();
    *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x68) = param_2;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_003c5bd4;
    FUN_003a28d0(param_4,"grpc.socket_mutator");
    if (param_4 == 0) break;
    param_4 = *(ulong *)(param_4 + 0x10);
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x60);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x58);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x70);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x68);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x80);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x78);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_2 = uVar1;
    param_1 = extraout_x8;
  }
  *extraout_x8 = 0;
  return;
}



/* Entry: 003c5bd4; end: 003c5d07;  */

void FUN_003c5bd4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 *extraout_x8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    uVar1 = param_2;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    FUN_003a28d0(param_4,"grpc.socket_mutator");
    if (param_4 == 0) {
      *param_1 = 0;
      return;
    }
    param_4 = *(ulong *)(param_4 + 0x10);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x20);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x28);
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if (param_4 != 0) break;
    func_0x00774380();
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x20;
    FUN_0033d548((undefined1 *)((long)register0x00000008 + -0x28));
    unaff_x30 = FUN_003c5bd4;
    param_2 = uVar1;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_1 = extraout_x8;
    unaff_x19 = uVar1;
  }
  FUN_003c4dd0(param_4,uVar1,param_3);
  if ((param_4 & 1) == 0) {
    *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
    FUN_003b646c(param_1,2,"grpc_socket_mutator failed.",0x1b,
                 (undefined1 *)((long)register0x00000008 + -0x29),
                 (undefined1 *)((long)register0x00000008 + -0x48));
    *(undefined1 **)((long)register0x00000008 + -0x28) =
         (undefined1 *)((long)register0x00000008 + -0x48);
    FUN_0033d548((undefined1 *)((long)register0x00000008 + -0x28));
  }
  else {
    *param_1 = 0;
  }
  return;
}



/* Entry: 003c5d08; end: 003c5d23;  */

/* WARNING: Removing unreachable block (ram,0x003c5f74) */

void FUN_003c5d08(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 uint *param_5,int *param_6)

{
  ulong uVar1;
  undefined8 ****ppppuVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  long *plVar6;
  char cVar7;
  long unaff_x24;
  ulong unaff_x26;
  undefined8 ***pppuStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined1 uStack_51;
  
  cVar7 = *(char *)((long)param_2 + 1);
  if (cVar7 == '\x1e') {
    puVar5 = (undefined4 *)0xafaf50;
    func_0x00339fa0(0xafaf50,0x3c5c38);
    if (cRam0000000000b5e9e8 == '\x01') {
      iVar4 = 0;
      FUN_003c5e60(0,0x1e,param_3,param_4);
      *param_6 = iVar4;
    }
    else {
      *param_6 = -1;
      ___error();
      *puVar5 = 0x2f;
      iVar4 = *param_6;
    }
    if ((-1 < iVar4) && (FUN_003bce3c(), iVar4 != 0)) {
      *param_5 = 3;
      *param_1 = 0;
      return;
    }
    puVar5 = param_2;
    FUN_003a0660(param_2,0);
    if ((int)puVar5 == 0) {
      *param_5 = 2;
      iVar4 = *param_6;
      goto LAB_003c5e30;
    }
    if (-1 < *param_6) {
      _close();
    }
    cVar7 = '\x02';
  }
  *param_5 = (uint)(cVar7 == '\x02');
  iVar4 = 0;
  FUN_003c5e60(0,cVar7,param_3,param_4);
  *param_6 = iVar4;
LAB_003c5e30:
  if (iVar4 < 0) {
    FUN_003a0930(&stack0xffffffffffffffc0,param_2,0);
    ___error();
    FUN_003be008(&stack0xffffffffffffffb0,&uStack_51,*param_2,&UNK_009162b9);
    if (unaff_x26 == 0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                   ,0xd5,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x3c5fc0);
      (*pcVar3)();
    }
    if (unaff_x24 == 0) {
      plVar6 = (long *)&stack0xffffffffffffffc0;
      FUN_00375c3c();
      if (*(char *)((long)plVar6 + 0x17) < '\0') {
        FUN_002971d4(&pppuStack_70,*plVar6,plVar6[1]);
      }
      else {
        uStack_68 = plVar6[1];
        pppuStack_70 = (undefined8 ***)*plVar6;
        uStack_60 = plVar6[2];
      }
    }
    else {
      FUN_00552ec8(&pppuStack_70,&stack0xffffffffffffffc0,1);
    }
    uVar1 = uStack_68;
    ppppuVar2 = (undefined8 ****)pppuStack_70;
    if (-1 < (long)uStack_60) {
      uVar1 = uStack_60 >> 0x38;
      ppppuVar2 = &pppuStack_70;
    }
    FUN_003be254(param_1,&stack0xffffffffffffffb8,4,ppppuVar2,uVar1);
    if ((long)uStack_60 < 0) {
      __ZdlPv(pppuStack_70);
    }
    if ((unaff_x26 & 1) != 0) {
      FUN_0055293c();
    }
    FUN_0035d18c(&stack0xffffffffffffffc0);
  }
  else {
    *param_1 = 0;
  }
  return;
}



/* Entry: 003c5d24; end: 003c5e5f;  */

/* WARNING: Removing unreachable block (ram,0x003c5f74) */

void FUN_003c5d24(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                 undefined8 param_5,uint *param_6,int *param_7)

{
  ulong uVar1;
  undefined8 ****ppppuVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  char cVar8;
  long unaff_x24;
  ulong unaff_x26;
  undefined8 ***pppuStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined1 uStack_51;
  
  cVar8 = *(char *)((long)param_3 + 1);
  if (cVar8 == '\x1e') {
    puVar5 = (undefined4 *)0xafaf50;
    func_0x00339fa0(0xafaf50,0x3c5c38);
    if (cRam0000000000b5e9e8 == '\x01') {
      uVar6 = param_2;
      FUN_003c5e60(param_2,0x1e,param_4,param_5);
      iVar4 = (int)uVar6;
      *param_7 = iVar4;
    }
    else {
      *param_7 = -1;
      ___error();
      *puVar5 = 0x2f;
      iVar4 = *param_7;
    }
    if ((-1 < iVar4) && (FUN_003bce3c(), iVar4 != 0)) {
      *param_6 = 3;
      *param_1 = 0;
      return;
    }
    puVar5 = param_3;
    FUN_003a0660(param_3,0);
    if ((int)puVar5 == 0) {
      *param_6 = 2;
      iVar4 = *param_7;
      goto LAB_003c5e30;
    }
    if (-1 < *param_7) {
      _close();
    }
    cVar8 = '\x02';
  }
  *param_6 = (uint)(cVar8 == '\x02');
  FUN_003c5e60(param_2,cVar8,param_4,param_5);
  iVar4 = (int)param_2;
  *param_7 = iVar4;
LAB_003c5e30:
  if (iVar4 < 0) {
    FUN_003a0930(&stack0xffffffffffffffc0,param_3,0);
    ___error();
    FUN_003be008(&stack0xffffffffffffffb0,&uStack_51,*param_3,&UNK_009162b9);
    if (unaff_x26 == 0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                   ,0xd5,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x3c5fc0);
      (*pcVar3)();
    }
    if (unaff_x24 == 0) {
      plVar7 = (long *)&stack0xffffffffffffffc0;
      FUN_00375c3c();
      if (*(char *)((long)plVar7 + 0x17) < '\0') {
        FUN_002971d4(&pppuStack_70,*plVar7,plVar7[1]);
      }
      else {
        uStack_68 = plVar7[1];
        pppuStack_70 = (undefined8 ***)*plVar7;
        uStack_60 = plVar7[2];
      }
    }
    else {
      FUN_00552ec8(&pppuStack_70,&stack0xffffffffffffffc0,1);
    }
    uVar1 = uStack_68;
    ppppuVar2 = (undefined8 ****)pppuStack_70;
    if (-1 < (long)uStack_60) {
      uVar1 = uStack_60 >> 0x38;
      ppppuVar2 = &pppuStack_70;
    }
    FUN_003be254(param_1,&stack0xffffffffffffffb8,4,ppppuVar2,uVar1);
    if ((long)uStack_60 < 0) {
      __ZdlPv(pppuStack_70);
    }
    if ((unaff_x26 & 1) != 0) {
      FUN_0055293c();
    }
    FUN_0035d18c(&stack0xffffffffffffffc0);
  }
  else {
    *param_1 = 0;
  }
  return;
}



/* Entry: 003c5e60; end: 003c5e77;  */

void FUN_003c5e60(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003c4dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077af48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__socket_0099a6e8)(param_2,param_3,param_4);
  return;
}



/* Entry: 003c5e78; end: 003c6013;  */

void FUN_003c5e78(undefined8 *param_1,int param_2,undefined4 *param_3)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 **ppuStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined1 uStack_51;
  ulong uStack_50;
  ulong uStack_48;
  long alStack_40 [4];
  
  if (param_2 < 0) {
    FUN_003a0930(alStack_40,param_3,0);
    ___error();
    FUN_003be008(&uStack_50,&uStack_51,*param_3,&UNK_009162b9);
    if (uStack_50 == 0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                   ,0xd5,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x3c5fc0);
      (*pcVar3)();
    }
    uStack_48 = uStack_50;
    uStack_50 = 0x36;
    if (alStack_40[0] == 0) {
      plVar4 = alStack_40;
      FUN_00375c3c();
      if (*(char *)((long)plVar4 + 0x17) < '\0') {
        FUN_002971d4(&ppuStack_70,*plVar4,plVar4[1]);
      }
      else {
        uStack_68 = plVar4[1];
        ppuStack_70 = (undefined8 **)*plVar4;
        uStack_60 = plVar4[2];
      }
    }
    else {
      FUN_00552ec8(&ppuStack_70,alStack_40,1);
    }
    uVar1 = uStack_68;
    pppuVar2 = (undefined8 ***)ppuStack_70;
    if (-1 < (long)uStack_60) {
      uVar1 = uStack_60 >> 0x38;
      pppuVar2 = &ppuStack_70;
    }
    FUN_003be254(param_1,&uStack_48,4,pppuVar2,uVar1);
    if ((long)uStack_60 < 0) {
      __ZdlPv(ppuStack_70);
    }
    if ((uStack_48 & 1) != 0) {
      FUN_0055293c();
    }
    if ((uStack_50 & 1) != 0) {
      FUN_0055293c();
    }
    FUN_0035d18c(alStack_40);
  }
  else {
    *param_1 = 0;
  }
  return;
}



/* Entry: 003c6014; end: 003c60c3;  */

undefined8 FUN_003c6014(undefined8 param_1,long param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  
  _accept(param_1,param_2,param_2 + 0x80);
  if ((int)param_1 < 0) {
    return param_1;
  }
  if ((param_3 == 0) ||
     ((uVar1 = param_1, _fcntl(param_1,3), -1 < (int)uVar1 &&
      (uVar1 = param_1, _fcntl(param_1,4), (int)uVar1 == 0)))) {
    if (param_4 == 0) {
      return param_1;
    }
    uVar1 = param_1;
    _fcntl(param_1,1);
    if ((-1 < (int)uVar1) && (uVar1 = param_1, _fcntl(param_1,2), (int)uVar1 == 0)) {
      return param_1;
    }
  }
  _close(param_1);
  return 0xffffffff;
}



/* Entry: 003c60c4; end: 003c60df;  */

void FUN_003c60c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x003c60d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puRam0000000000b65d50)();
  return;
}



/* Entry: 003c60e0; end: 003c645b;  */

/* WARNING: Removing unreachable block (ram,0x003c6304) */
/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_003c60e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined8 ******ppppppuVar2;
  char cVar3;
  bool bVar4;
  char *pcVar5;
  ulong *puVar6;
  undefined8 *******pppppppuVar7;
  undefined8 uVar8;
  int *piVar9;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong auStack_d8 [8];
  ulong auStack_98 [3];
  undefined8 *******pppppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 *******pppppppuStack_60;
  undefined8 ******ppppppuStack_58;
  undefined8 ******ppppppuStack_50;
  
  FUN_003a0d08(auStack_d8 + 4,param_5);
  if (auStack_d8[4] == 0) {
    pcVar5 = section_00000108.sectname + 8;
    __Znwm();
    *(undefined8 *)(pcVar5 + 0xf8) = 0;
    *(undefined8 *)(pcVar5 + 0xf0) = 0;
    *(undefined8 *)(pcVar5 + 0x108) = 0;
    *(undefined8 *)(pcVar5 + 0x100) = 0;
    *(undefined8 *)(pcVar5 + 0xd8) = 0;
    *(undefined8 *)(pcVar5 + 0xd0) = 0;
    *(undefined8 *)(pcVar5 + 0xe8) = 0;
    *(undefined8 *)(pcVar5 + 0xe0) = 0;
    *(undefined8 *)(pcVar5 + 0xb8) = 0;
    *(undefined8 *)(pcVar5 + 0xb0) = 0;
    *(undefined8 *)(pcVar5 + 200) = 0;
    *(undefined8 *)(pcVar5 + 0xc0) = 0;
    *(undefined8 *)(pcVar5 + 0x98) = 0;
    *(undefined8 *)(pcVar5 + 0x90) = 0;
    *(undefined8 *)(pcVar5 + 0xa8) = 0;
    *(undefined8 *)(pcVar5 + 0xa0) = 0;
    *(undefined8 *)(pcVar5 + 0x78) = 0;
    *(undefined8 *)(pcVar5 + 0x70) = 0;
    *(undefined8 *)(pcVar5 + 0x88) = 0;
    *(undefined8 *)(pcVar5 + 0x80) = 0;
    *(undefined8 *)(pcVar5 + 0x58) = 0;
    *(undefined8 *)(pcVar5 + 0x50) = 0;
    *(undefined8 *)(pcVar5 + 0x68) = 0;
    *(undefined8 *)(pcVar5 + 0x60) = 0;
    *(undefined8 *)(pcVar5 + 0x38) = 0;
    *(undefined8 *)(pcVar5 + 0x30) = 0;
    *(undefined8 *)(pcVar5 + 0x48) = 0;
    *(undefined8 *)(pcVar5 + 0x40) = 0;
    *(qword *)(pcVar5 + 0x18) = 0;
    pcVar5[0x10] = '\0';
    pcVar5[0x11] = '\0';
    pcVar5[0x12] = '\0';
    pcVar5[0x13] = '\0';
    pcVar5[0x14] = '\0';
    pcVar5[0x15] = '\0';
    pcVar5[0x16] = '\0';
    pcVar5[0x17] = '\0';
    *(undefined8 *)(pcVar5 + 0x28) = 0;
    *(qword *)(pcVar5 + 0x20) = 0;
    pcVar5[8] = '\0';
    pcVar5[9] = '\0';
    pcVar5[10] = '\0';
    pcVar5[0xb] = '\0';
    pcVar5[0xc] = '\0';
    pcVar5[0xd] = '\0';
    pcVar5[0xe] = '\0';
    pcVar5[0xf] = '\0';
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5[4] = '\0';
    pcVar5[5] = '\0';
    pcVar5[6] = '\0';
    pcVar5[7] = '\0';
    *(undefined8 *)(pcVar5 + 0xe0) = param_1;
    *(undefined8 *)(pcVar5 + 0xe8) = param_2;
    puVar6 = auStack_d8 + 4;
    FUN_00375c3c(puVar6);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(pcVar5 + 0xf8,puVar6);
    *(undefined4 *)(pcVar5 + 0xf0) = 2;
    FUN_00339cc8(pcVar5 + 0x40,1);
    FUN_00339d50(pcVar5);
    FUN_003a0930(&pppppppuStack_80,param_5,1);
    pppppppuVar7 = &pppppppuStack_80;
    FUN_003c671c();
    ppppppuStack_58 = pppppppuVar7[1];
    pppppppuStack_60 = (undefined8 *******)*pppppppuVar7;
    ppppppuStack_50 = pppppppuVar7[2];
    pppppppuVar7[1] = (undefined8 ******)0x0;
    pppppppuVar7[2] = (undefined8 ******)0x0;
    *pppppppuVar7 = (undefined8 ******)0x0;
    FUN_0035d18c(&pppppppuStack_80);
    pppppppuStack_80 = (undefined8 *******)0x0;
    uStack_78 = 0;
    uStack_70 = 0;
    auStack_98[0] = 0;
    auStack_98[1] = 0;
    auStack_98[2] = 0;
    ppppppuVar2 = ppppppuStack_58;
    pppppppuVar7 = pppppppuStack_60;
    if (-1 < (long)ppppppuStack_50) {
      ppppppuVar2 = (undefined8 ******)((ulong)ppppppuStack_50 >> 0x38);
      pppppppuVar7 = &pppppppuStack_60;
    }
    func_0x0033b110(pppppppuVar7,ppppppuVar2,&pppppppuStack_80,auStack_98);
    pppppppuVar7 = pppppppuStack_80;
    if (-1 < (long)uStack_70) {
      pppppppuVar7 = &pppppppuStack_80;
    }
    uVar8 = 0;
    _CFStringCreateWithCString(0,pppppppuVar7,0x8000100);
    FUN_003a1340(param_5);
    if ((long)auStack_98[2] < 0) {
      __ZdlPv(auStack_98[0]);
    }
    if ((long)uStack_70 < 0) {
      __ZdlPv(pppppppuStack_80);
    }
    _CFStreamCreatePairWithSocketToHost(0,uVar8,param_5,&uStack_e0,&uStack_e8);
    _CFRelease(uVar8);
    *(undefined8 *)(pcVar5 + 0x48) = uStack_e0;
    *(undefined8 *)(pcVar5 + 0x50) = uStack_e8;
    uVar8 = uStack_e0;
    FUN_003bbe6c();
    *(undefined8 *)(pcVar5 + 0x58) = uVar8;
    *(code **)(pcVar5 + 0xc0) = FUN_003c6464;
    *(char **)(pcVar5 + 200) = pcVar5;
    *(undefined8 *)(pcVar5 + 0xd0) = 0;
    FUN_003bc4f8();
    *(code **)(pcVar5 + 0xa0) = FUN_003c65fc;
    *(char **)(pcVar5 + 0xa8) = pcVar5;
    *(undefined8 *)(pcVar5 + 0xb0) = 0;
    func_0x00339d8c(pcVar5);
    _CFReadStreamOpen(uStack_e0);
    _CFWriteStreamOpen(uStack_e8);
    func_0x003cf010(pcVar5 + 0x60,param_6,pcVar5 + 0x98);
    func_0x00339da8(pcVar5);
  }
  else {
    FUN_00552ec8(&pppppppuStack_80,auStack_d8 + 4,1);
    uVar1 = uStack_78;
    pppppppuVar7 = pppppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar1 = uStack_70 >> 0x38;
      pppppppuVar7 = &pppppppuStack_80;
    }
    auStack_d8[2] = 0;
    auStack_d8[3] = 0;
    auStack_d8[1] = 0;
    FUN_003b646c(auStack_98,2,pppppppuVar7,uVar1,&uStack_e0,auStack_d8 + 1);
    pppppppuStack_60 = (undefined8 *******)(auStack_d8 + 1);
    FUN_0033d548(&pppppppuStack_60);
    if ((long)uStack_70 < 0) {
      __ZdlPv(pppppppuStack_80);
    }
    auStack_d8[0] = auStack_98[0];
    if ((auStack_98[0] & 1) != 0) {
      piVar9 = (int *)(auStack_98[0] - 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = *piVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_003c1e6c(&pppppppuStack_80,param_1,auStack_d8);
    if ((auStack_d8[0] & 1) != 0) {
      FUN_0055293c();
    }
    if ((auStack_98[0] & 1) != 0) {
      FUN_0055293c();
    }
  }
  FUN_0035d18c(auStack_d8 + 4);
  return 0;
}



/* Entry: 003c645c; end: 003c6463;  */

undefined8 FUN_003c645c(void)

{
  return 0;
}



/* Entry: 003c6464; end: 003c65fb;  */

void FUN_003c6464(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uStack_50;
  ulong uStack_48;
  
  func_0x00339d8c();
  func_0x003cf020(param_1 + 0x60);
  uVar9 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  iVar3 = *(int *)(param_1 + 0xf0) + -1;
  *(int *)(param_1 + 0xf0) = iVar3;
  if (iVar3 == 0) {
    func_0x00339da8(param_1);
    func_0x003bbe28(*(undefined8 *)(param_1 + 0x58),"",0,0);
    _CFRelease(*(undefined8 *)(param_1 + 0x48));
    _CFRelease(*(undefined8 *)(param_1 + 0x50));
    func_0x00339d70(param_1);
    if (*(char *)(param_1 + 0x10f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0xf8));
    }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(param_1);
    return;
  }
  if (*param_2 != 0) goto LAB_003c6554;
  puVar10 = *(undefined8 **)(param_1 + 0xe8);
  lVar4 = *(long *)(param_1 + 0x48);
  _CFReadStreamCopyError();
  if (lVar4 == 0) {
    lVar4 = *(long *)(param_1 + 0x50);
    _CFWriteStreamCopyError();
    if (lVar4 != 0) goto LAB_003c64d4;
  }
  else {
LAB_003c64d4:
    FUN_003be760(&uStack_48,
                 "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_client_cfstream.cc"
                 ,0x7d,lVar4,"connect() error");
    uVar5 = *param_2;
    if (uStack_48 == uVar5) {
LAB_003c651c:
      if ((uVar5 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      *param_2 = uStack_48;
      uStack_48 = 0x36;
      if ((uVar5 & 1) != 0) {
        FUN_0055293c();
        uVar5 = uStack_48;
        goto LAB_003c651c;
      }
    }
    _CFRelease(lVar4);
  }
  if (*param_2 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    plVar7 = (long *)(param_1 + 0xf8);
    if (*(char *)(param_1 + 0x10f) < '\0') {
      plVar7 = (long *)*plVar7;
    }
    FUN_003bd0f8(uVar6,*(undefined8 *)(param_1 + 0x50),plVar7,*(undefined8 *)(param_1 + 0x58));
    *puVar10 = uVar6;
  }
LAB_003c6554:
  func_0x00339da8(param_1);
  uStack_50 = *param_2;
  if ((uStack_50 & 1) != 0) {
    piVar8 = (int *)(uStack_50 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar2) {
        *piVar8 = *piVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003c1e6c(&uStack_48,uVar9,&uStack_50);
  if ((uStack_50 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003c65fc; end: 003c671b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_003c65fc(long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  ulong auStack_68 [4];
  undefined1 uStack_41;
  ulong uStack_40;
  ulong *puStack_38;
  
  func_0x00339d8c();
  uVar5 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  iVar3 = *(int *)(param_1 + 0xf0) + -1;
  *(int *)(param_1 + 0xf0) = iVar3;
  func_0x00339da8(param_1);
  if (iVar3 != 0) {
    auStack_68[2] = 0;
    auStack_68[3] = 0;
    auStack_68[1] = 0;
    FUN_003b646c(&uStack_40,2,"connect() timed out",0x13,&uStack_41,auStack_68 + 1);
    puStack_38 = auStack_68 + 1;
    FUN_0033d548(&puStack_38);
    auStack_68[0] = uStack_40;
    if ((uStack_40 & 1) != 0) {
      piVar4 = (int *)(uStack_40 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_003c1e6c(&puStack_38,uVar5,auStack_68);
    if ((auStack_68[0] & 1) != 0) {
      FUN_0055293c();
    }
    if ((uStack_40 & 1) != 0) {
      FUN_0055293c();
    }
    return;
  }
  func_0x003bbe28(*(undefined8 *)(param_1 + 0x58),"",0,0);
  _CFRelease(*(undefined8 *)(param_1 + 0x48));
  _CFRelease(*(undefined8 *)(param_1 + 0x50));
  func_0x00339d70(param_1);
  if (*(char *)(param_1 + 0x10f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xf8));
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_1);
  return;
}



/* Entry: 003c671c; end: 003c6773;  */

long * FUN_003c671c(long *param_1)

{
  code *pcVar1;
  long lStack_28;
  
  lStack_28 = *param_1;
  if (lStack_28 == 0) {
    return param_1 + 1;
  }
  *param_1 = 0x36;
  FUN_00776598(&lStack_28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3c6760);
  (*pcVar1)();
}



/* Entry: 003c6774; end: 003c67d3;  */

void FUN_003c6774(long param_1)

{
  func_0x003bbe28(*(undefined8 *)(param_1 + 0x58),"",0,0);
  _CFRelease(*(undefined8 *)(param_1 + 0x48));
  _CFRelease(*(undefined8 *)(param_1 + 0x50));
  func_0x00339d70(param_1);
  if (*(char *)(param_1 + 0x10f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xf8));
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_1);
  return;
}



/* Entry: 003c67d4; end: 003c67e7;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003c67d4(void)

{
  byte *pbVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined7 *puVar5;
  ulong uVar6;
  byte *pbVar7;
  code *pcVar8;
  char *pcVar9;
  code *pcVar10;
  uint uVar11;
  ulong *puVar12;
  byte *in_x3;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_1e8 [2];
  char cStack_1d1;
  undefined1 auStack_1d0 [56];
  undefined8 uStack_198;
  undefined7 uStack_190;
  undefined1 uStack_189;
  undefined7 uStack_188;
  undefined1 uStack_181;
  ulong auStack_148 [2];
  undefined7 *puStack_138;
  ulong uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  code *pcStack_110;
  long lStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  undefined1 *puStack_a0;
  byte abStack_98 [64];
  long lStack_58;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  pbVar7 = (byte *)0xafaf78;
  pcVar10 = FUN_003c67e8;
  _pthread_once();
  if ((int)pbVar7 == 0) {
    return pbVar7;
  }
  func_0x00770f54();
  pcStack_18 = FUN_00339fbc;
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar1 = (byte *)((long)&MACH_HEADER.magic + 2);
  pcVar8 = pcVar10;
  puStack_20 = &stack0xfffffffffffffff0;
  FUN_00338e58();
  if ((int)pbVar1 != 0) {
    puStack_a0 = &stack0xfffffffffffffff0;
    pbVar1 = abStack_98;
    _vsnprintf(pbVar1,0x40,in_x3,&stack0xfffffffffffffff0);
    if ((int)(uint)pbVar1 < 0) {
      unaff_x23 = (byte *)0x0;
      in_x3 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar1;
      if ((uint)pbVar1 < 0x40) {
        in_x3 = (byte *)0x0;
        unaff_x23 = abStack_98;
      }
      else {
        in_x3 = (byte *)(((ulong)pbVar1 & 0xffffffff) + 1);
        FUN_00338c74();
        puStack_a0 = &stack0xfffffffffffffff0;
        _vsnprintf();
        unaff_x23 = in_x3;
      }
    }
    pcVar8 = pcVar10;
    FUN_00338e80(pbVar7,pcVar10,2,unaff_x23);
    pbVar1 = in_x3;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return pbVar1;
  }
  ___stack_chk_fail();
  uStack_b8 = 2;
  pcStack_a8 = FUN_00339178;
  lStack_e8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = 1;
  pbStack_e0 = unaff_x24;
  pbStack_d8 = unaff_x23;
  pbStack_d0 = in_x3;
  pbStack_c8 = pbVar7;
  pcStack_c0 = pcVar10;
  ppuStack_b0 = &puStack_20;
  FUN_0033a598();
  lVar15 = *(long *)pbVar1;
  lVar3 = lVar15;
  uStack_198 = uVar2;
  _strrchr(lVar15,0x2f);
  if (lVar3 != 0) {
    lVar15 = lVar3 + 1;
  }
  puVar4 = &uStack_198;
  _localtime_r(puVar4,auStack_1d0);
  if (puVar4 == (undefined8 *)0x0) {
    uStack_188 = 0x656d69746c6163;
    uStack_181 = 0;
    uStack_190 = 0x6c3a726f727265;
    uStack_189 = 0x6f;
  }
  else {
    puVar5 = &uStack_190;
    _strftime(puVar5,0x40,"%m%d %H:%M:%S",auStack_1d0);
    if (puVar5 == (undefined7 *)0x0) {
      uStack_190 = 0x733a726f727265;
      uStack_189 = 0x74;
      uStack_188 = 0x656d69746672;
    }
  }
  uVar6 = (ulong)*(uint *)(pbVar1 + 0xc);
  func_0x00338e1c();
  uVar14 = uVar6;
  _pthread_self();
  auStack_148[1] = 0x560e98;
  puStack_138 = &uStack_190;
  uStack_130 = 0x560e98;
  uStack_128 = (ulong)pcVar8 & 0xffffffff;
  uStack_120 = 0x5606ac;
  pcStack_110 = FUN_00560738;
  uStack_100 = 0x560e98;
  uStack_f8 = (ulong)*(uint *)(pbVar1 + 8);
  uStack_f0 = 0x5606ac;
  puVar12 = auStack_148;
  auStack_148[0] = uVar6;
  uStack_118 = uVar14;
  lStack_108 = lVar15;
  FUN_0056189c(apbStack_1e8,"%s%s.%09d %7ld %s:%d]",0x15,puVar12,6);
  uVar11 = *(uint *)(pbVar1 + 0xc);
  func_0x00338e6c();
  if (uVar11 == 0) {
    auStack_148[0] = auStack_148[0] & 0xffffffffffffff00;
    uStack_130 = uStack_130 & 0xffffffffffffff00;
LAB_00339300:
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar9 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_148);
    if ((char)uStack_130 == '\0') goto LAB_00339300;
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar9 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_1d1 < '\0') {
    pbVar7 = apbStack_1e8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_e8) {
    return pbVar7;
  }
  ___stack_chk_fail();
  if (cStack_1d1 < '\0') {
    __ZdlPv(apbStack_1e8[0]);
  }
  __Unwind_Resume();
  uVar11 = (uint)puVar12;
  if ((char *)0x3 < pcVar9) {
    uVar14 = (ulong)pcVar9 >> 2;
    pbVar1 = pbVar7;
    do {
      uVar11 = (*(int *)pbVar1 * 0x16a88000 | (uint)(*(int *)pbVar1 * -0x3361d2af) >> 0x11) *
               0x1b873593 ^ (uint)puVar12;
      uVar11 = (uVar11 >> 0x13 | uVar11 << 0xd) * 5 + 0xe6546b64;
      puVar12 = (ulong *)(ulong)uVar11;
      uVar14 = uVar14 - 1;
      pbVar1 = pbVar1 + 4;
    } while (uVar14 != 0);
    pbVar7 = pbVar7 + ((ulong)pcVar9 & 0xfffffffffffffffc);
  }
  uVar13 = 0;
  uVar14 = (ulong)pcVar9 & 3;
  if (uVar14 != 1) {
    if (uVar14 != 2) {
      if (uVar14 != 3) goto LAB_00339464;
      uVar13 = (uint)pbVar7[2] << 0x10;
    }
    uVar13 = uVar13 | (uint)pbVar7[1] << 8;
  }
  uVar11 = ((uVar13 ^ *pbVar7) * 0x16a88000 | (uVar13 ^ *pbVar7) * -0x3361d2af >> 0x11) * 0x1b873593
           ^ uVar11;
LAB_00339464:
  uVar11 = uVar11 ^ (uint)pcVar9;
  uVar11 = (uVar11 ^ uVar11 >> 0x10) * -0x7a143595;
  uVar11 = (uVar11 ^ uVar11 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar11 ^ uVar11 >> 0x10);
}


